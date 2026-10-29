#include "functions.h"

/* _ZN16GLXPlayerMessage26processMySentMsgHeaderListEPc @ 001c25ec (arm) */
void fn_001c25ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c25ec:;
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
L_001c25f0:;
    {
        cpu->r[9] = rd32(0x001c25f8u + + 0x2c0u);
    }
L_001c25f4:;
    {
        cpu->r[11] = rd32(0x001c25fcu + + 0x2c0u);
    }
L_001c25f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000194u, 1, 0);
    }
L_001c25fc:;
    {
        cpu->r[9] = add_flags(cpu, 0x001c2604u, cpu->r[9], 0, 0);
    }
L_001c2600:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001c2604:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c2608:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_001c260c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c2610:;
    {
        wr32(cpu->r[13] + + 0x18cu, cpu->r[3]);
    }
L_001c2614:;
    {
        cpu->r[14] = 0x001c2618u; fn_001c2350(cpu);
    }
L_001c2618:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001c261c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c2898;
        }
    }
L_001c2620:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c2624:;
    {
        cpu->r[14] = 0x001c2628u; fn_001d0434(cpu);
    }
L_001c2628:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c262c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c2898;
        }
    }
L_001c2630:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001c2634:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000010cu, 0, 0);
    }
L_001c2638:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c263c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001c2640:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c2644:;
    {
        cpu->r[14] = 0x001c2648u; imp_memset(cpu); /* memset */
    }
L_001c2648:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c264c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2650:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c2654:;
    {
        cpu->r[14] = 0x001c2658u; imp_memset(cpu); /* memset */
    }
L_001c2658:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c265c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c2660:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c2664:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c2668:;
    {
        cpu->r[14] = 0x001c266cu; fn_001d0148(cpu);
    }
L_001c266c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c2670:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c2674:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2678:;
    {
        cpu->r[14] = 0x001c267cu; fn_001d0700(cpu);
    }
L_001c267c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c2680:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c2684:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001c2688:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c268c:;
    {
        cpu->r[14] = 0x001c2690u; fn_001d0148(cpu);
    }
L_001c2690:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c2694:;
    {
        cpu->r[14] = 0x001c2698u; fn_001d06cc(cpu);
    }
L_001c2698:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c269c:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c26a0:;
    {
        wr32(cpu->r[5] + + 0x60u, cpu->r[0]);
    }
L_001c26a4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c26a8:;
    {
        cpu->r[14] = 0x001c26acu; fn_001d0700(cpu);
    }
L_001c26ac:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x60u);
    }
L_001c26b0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c26b4:;
    {
        cpu->r[14] = 0x001c26b8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c26b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x60u);
    }
L_001c26bc:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[0]);
    }
L_001c26c0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c26c4:;
    {
        cpu->r[14] = 0x001c26c8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c26c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x60u);
    }
L_001c26cc:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[0]);
    }
L_001c26d0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c26d4:;
    {
        cpu->r[14] = 0x001c26d8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c26d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x60u);
    }
L_001c26dc:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[0]);
    }
L_001c26e0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c26e4:;
    {
        cpu->r[14] = 0x001c26e8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c26e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x60u);
    }
L_001c26ec:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[0]);
    }
L_001c26f0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c26f4:;
    {
        cpu->r[14] = 0x001c26f8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c26f8:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c26fc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2700:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[0]);
    }
L_001c2704:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c2708:;
    {
        cpu->r[14] = 0x001c270cu; fn_001d0700(cpu);
    }
L_001c270c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c2710:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c2714:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c2718:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001c271c:;
    {
        cpu->r[14] = 0x001c2720u; fn_001d0148(cpu);
    }
L_001c2720:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x60u);
    }
L_001c2724:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c2728:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001c272c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c2898;
        }
    }
L_001c2730:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001c2734:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c2738:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c273c:;
    {
        cpu->r[14] = 0x001c2740u; fn_001d0700(cpu);
    }
L_001c2740:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000003u, 0, 0);
    }
L_001c2744:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c2748:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c274c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c2750:;
    {
        cpu->r[14] = 0x001c2754u; fn_001d0148(cpu);
    }
L_001c2754:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_001c2758:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001c275c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001c2760:;
    {
        cpu->r[14] = 0x001c2764u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c2764:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001c2768:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x4cu);
    }
L_001c276c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001c2770:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001c2774:;
    {
        cpu->r[14] = 0x001c2778u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c2778:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x50u);
    }
L_001c277c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001c2780:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001c2784:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001c2788:;
    {
        cpu->r[14] = 0x001c278cu; imp__Znaj(cpu); /* _Znaj */
    }
L_001c278c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001c2790:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x54u);
    }
L_001c2794:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001c2798:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001c279c:;
    {
        cpu->r[14] = 0x001c27a0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c27a0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_001c27a4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c27a8:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c27ac:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001c27b0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001c27b4:;
    {
        cpu->r[14] = 0x001c27b8u; fn_001d0700(cpu);
    }
L_001c27b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4cu);
    }
L_001c27bc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c27c0:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c27c4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001c27c8:;
    {
        cpu->r[14] = 0x001c27ccu; fn_001d0700(cpu);
    }
L_001c27cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x50u);
    }
L_001c27d0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c27d4:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c27d8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001c27dc:;
    {
        cpu->r[14] = 0x001c27e0u; fn_001d0700(cpu);
    }
L_001c27e0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x54u);
    }
L_001c27e4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c27e8:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c27ec:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001c27f0:;
    {
        cpu->r[14] = 0x001c27f4u; fn_001d0700(cpu);
    }
L_001c27f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c27f8:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c27fc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2800:;
    {
        cpu->r[14] = 0x001c2804u; fn_001d0700(cpu);
    }
L_001c2804:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c2808:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c280c:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001c2810:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c2814:;
    {
        cpu->r[14] = 0x001c2818u; fn_001d0148(cpu);
    }
L_001c2818:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c281c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001c2820:;
    {
        cpu->r[14] = 0x001c2824u; fn_001d06cc(cpu);
    }
L_001c2824:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x40u);
    }
L_001c2828:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001c282c:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001c2830:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001c2834:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001c2838:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c283c:;
    {
        cpu->r[14] = 0x001c2840u; fn_001d0148(cpu);
    }
L_001c2840:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x4cu);
    }
L_001c2844:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001c2848:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001c284c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c2850:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001c2854:;
    {
        cpu->r[14] = 0x001c2858u; fn_001d0148(cpu);
    }
L_001c2858:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x50u);
    }
L_001c285c:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001c2860:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001c2864:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c2868:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001c286c:;
    {
        cpu->r[14] = 0x001c2870u; fn_001d0148(cpu);
    }
L_001c2870:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x54u);
    }
L_001c2874:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001c2878:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c287c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001c2880:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001c2884:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001c2888:;
    {
        cpu->r[14] = 0x001c288cu; fn_001d0148(cpu);
    }
L_001c288c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x60u);
    }
L_001c2890:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001c2894:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c2730;
        }
    }
L_001c2898:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_001c289c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18cu);
    }
L_001c28a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c28a4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c28a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c28b4;
        }
    }
L_001c28ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000194u, 0, 0);
    }
L_001c28b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c28b4u)) return;
    }
L_001c28b4:;
    {
        cpu->r[14] = 0x001c28b8u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c28b8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[4], 2, (cpu->r[14] & 0xffu), &shc); cpu->r[7] = v;
        }
    }
L_001c28bc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN16GLXPlayerMessage20processMsgHeaderListEPc @ 001c28c0 (arm) */
void fn_001c28c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c28c0:;
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
L_001c28c4:;
    {
        cpu->r[9] = rd32(0x001c28ccu + + 0x364u);
    }
L_001c28c8:;
    {
        cpu->r[11] = rd32(0x001c28d0u + + 0x364u);
    }
L_001c28cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000194u, 1, 0);
    }
L_001c28d0:;
    {
        cpu->r[9] = add_flags(cpu, 0x001c28d8u, cpu->r[9], 0, 0);
    }
L_001c28d4:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001c28d8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c28dc:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_001c28e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c28e4:;
    {
        wr32(cpu->r[13] + + 0x18cu, cpu->r[3]);
    }
L_001c28e8:;
    {
        cpu->r[14] = 0x001c28ecu; fn_001c2350(cpu);
    }
L_001c28ec:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001c28f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c2c10;
        }
    }
L_001c28f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c28f8:;
    {
        cpu->r[14] = 0x001c28fcu; fn_001d0434(cpu);
    }
L_001c28fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c2900:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c2c10;
        }
    }
L_001c2904:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001c2908:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000010cu, 0, 0);
    }
L_001c290c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2910:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001c2914:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c2918:;
    {
        cpu->r[14] = 0x001c291cu; imp_memset(cpu); /* memset */
    }
L_001c291c:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c2920:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2924:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c2928:;
    {
        cpu->r[14] = 0x001c292cu; imp_memset(cpu); /* memset */
    }
L_001c292c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c2930:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c2934:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c2938:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c293c:;
    {
        cpu->r[14] = 0x001c2940u; fn_001d0148(cpu);
    }
L_001c2940:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c2944:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c2948:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c294c:;
    {
        cpu->r[14] = 0x001c2950u; fn_001d0700(cpu);
    }
L_001c2950:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c2954:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c2958:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001c295c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c2960:;
    {
        cpu->r[14] = 0x001c2964u; fn_001d0148(cpu);
    }
L_001c2964:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c2968:;
    {
        cpu->r[14] = 0x001c296cu; fn_001d06cc(cpu);
    }
L_001c296c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2970:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c2974:;
    {
        wr32(cpu->r[5] + + 0x60u, cpu->r[0]);
    }
L_001c2978:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c297c:;
    {
        cpu->r[14] = 0x001c2980u; fn_001d0700(cpu);
    }
L_001c2980:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x60u);
    }
L_001c2984:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c2988:;
    {
        cpu->r[14] = 0x001c298cu; imp__Znaj(cpu); /* _Znaj */
    }
L_001c298c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x60u);
    }
L_001c2990:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[0]);
    }
L_001c2994:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c2998:;
    {
        cpu->r[14] = 0x001c299cu; imp__Znaj(cpu); /* _Znaj */
    }
L_001c299c:;
    {
        wr32(cpu->r[5] + + 0x5cu, cpu->r[0]);
    }
L_001c29a0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x60u);
    }
L_001c29a4:;
    {
        cpu->r[14] = 0x001c29a8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c29a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x60u);
    }
L_001c29ac:;
    {
        wr32(cpu->r[5] + + 0x58u, cpu->r[0]);
    }
L_001c29b0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c29b4:;
    {
        cpu->r[14] = 0x001c29b8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c29b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x60u);
    }
L_001c29bc:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[0]);
    }
L_001c29c0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c29c4:;
    {
        cpu->r[14] = 0x001c29c8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c29c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x60u);
    }
L_001c29cc:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[0]);
    }
L_001c29d0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c29d4:;
    {
        cpu->r[14] = 0x001c29d8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c29d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x60u);
    }
L_001c29dc:;
    {
        wr32(cpu->r[5] + + 0x44u, cpu->r[0]);
    }
L_001c29e0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c29e4:;
    {
        cpu->r[14] = 0x001c29e8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c29e8:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c29ec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c29f0:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[0]);
    }
L_001c29f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c29f8:;
    {
        cpu->r[14] = 0x001c29fcu; fn_001d0700(cpu);
    }
L_001c29fc:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c2a00:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c2a04:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c2a08:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001c2a0c:;
    {
        cpu->r[14] = 0x001c2a10u; fn_001d0148(cpu);
    }
L_001c2a10:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x60u);
    }
L_001c2a14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c2a18:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001c2a1c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c2c10;
        }
    }
L_001c2a20:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001c2a24:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c2a28:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2a2c:;
    {
        cpu->r[14] = 0x001c2a30u; fn_001d0700(cpu);
    }
L_001c2a30:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000003u, 0, 0);
    }
L_001c2a34:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c2a38:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c2a3c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c2a40:;
    {
        cpu->r[14] = 0x001c2a44u; fn_001d0148(cpu);
    }
L_001c2a44:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_001c2a48:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001c2a4c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001c2a50:;
    {
        cpu->r[14] = 0x001c2a54u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c2a54:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001c2a58:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x48u);
    }
L_001c2a5c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001c2a60:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001c2a64:;
    {
        cpu->r[14] = 0x001c2a68u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c2a68:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x44u);
    }
L_001c2a6c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001c2a70:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001c2a74:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001c2a78:;
    {
        cpu->r[14] = 0x001c2a7cu; imp__Znaj(cpu); /* _Znaj */
    }
L_001c2a7c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001c2a80:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x54u);
    }
L_001c2a84:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001c2a88:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001c2a8c:;
    {
        cpu->r[14] = 0x001c2a90u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c2a90:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_001c2a94:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2a98:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c2a9c:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001c2aa0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001c2aa4:;
    {
        cpu->r[14] = 0x001c2aa8u; fn_001d0700(cpu);
    }
L_001c2aa8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_001c2aac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2ab0:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c2ab4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001c2ab8:;
    {
        cpu->r[14] = 0x001c2abcu; fn_001d0700(cpu);
    }
L_001c2abc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x44u);
    }
L_001c2ac0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2ac4:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c2ac8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001c2acc:;
    {
        cpu->r[14] = 0x001c2ad0u; fn_001d0700(cpu);
    }
L_001c2ad0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x54u);
    }
L_001c2ad4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2ad8:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c2adc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001c2ae0:;
    {
        cpu->r[14] = 0x001c2ae4u; fn_001d0700(cpu);
    }
L_001c2ae4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c2ae8:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c2aec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2af0:;
    {
        cpu->r[14] = 0x001c2af4u; fn_001d0700(cpu);
    }
L_001c2af4:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001c2af8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c2afc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c2b00:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c2b04:;
    {
        cpu->r[14] = 0x001c2b08u; fn_001d0148(cpu);
    }
L_001c2b08:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c2b0c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001c2b10:;
    {
        cpu->r[14] = 0x001c2b14u; fn_001d06cc(cpu);
    }
L_001c2b14:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c2b18:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2b1c:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001c2b20:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c2b24:;
    {
        cpu->r[14] = 0x001c2b28u; fn_001d0700(cpu);
    }
L_001c2b28:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c2b2c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001c2b30:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001c2b34:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c2b38:;
    {
        cpu->r[14] = 0x001c2b3cu; fn_001d0148(cpu);
    }
L_001c2b3c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c2b40:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x5cu);
    }
L_001c2b44:;
    {
        cpu->r[14] = 0x001c2b48u; fn_001d06cc(cpu);
    }
L_001c2b48:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x40u);
    }
L_001c2b4c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001c2b50:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001c2b54:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001c2b58:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001c2b5c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c2b60:;
    {
        cpu->r[14] = 0x001c2b64u; fn_001d0148(cpu);
    }
L_001c2b64:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x48u);
    }
L_001c2b68:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001c2b6c:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001c2b70:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c2b74:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001c2b78:;
    {
        cpu->r[14] = 0x001c2b7cu; fn_001d0148(cpu);
    }
L_001c2b7c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x44u);
    }
L_001c2b80:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001c2b84:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001c2b88:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c2b8c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001c2b90:;
    {
        cpu->r[14] = 0x001c2b94u; fn_001d0148(cpu);
    }
L_001c2b94:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x54u);
    }
L_001c2b98:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001c2b9c:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_001c2ba0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c2ba4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001c2ba8:;
    {
        cpu->r[14] = 0x001c2bacu; fn_001d0148(cpu);
    }
L_001c2bac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c2bb0:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c2bb4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2bb8:;
    {
        cpu->r[14] = 0x001c2bbcu; fn_001d0700(cpu);
    }
L_001c2bbc:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001c2bc0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c2bc4:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_001c2bc8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c2bcc:;
    {
        cpu->r[14] = 0x001c2bd0u; fn_001d0148(cpu);
    }
L_001c2bd0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c2bd4:;
    {
        cpu->r[14] = 0x001c2bd8u; fn_001d06cc(cpu);
    }
L_001c2bd8:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c2bdc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2be0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001c2be4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c2be8:;
    {
        cpu->r[14] = 0x001c2becu; fn_001d0700(cpu);
    }
L_001c2bec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x58u);
    }
L_001c2bf0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001c2bf4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001c2bf8:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[3] + cpu->r[4], cpu->r[10]);
        }
    }
L_001c2bfc:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[3] + cpu->r[4], cpu->r[2]);
        }
    }
L_001c2c00:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001c2c04:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x60u);
    }
L_001c2c08:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001c2c0c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c2a20;
        }
    }
L_001c2c10:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_001c2c14:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18cu);
    }
L_001c2c18:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c2c1c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c2c20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c2c2c;
        }
    }
L_001c2c24:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000194u, 0, 0);
    }
L_001c2c28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c2c2cu)) return;
    }
L_001c2c2c:;
    {
        cpu->r[14] = 0x001c2c30u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c2c30:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[0], 1, 22u, &shc); cpu->r[7] = v;
        }
    }
L_001c2c34:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN16GLXPlayerMessage26SendGetMySentMessageHeaderEii @ 001c2c38 (arm) */
void fn_001c2c38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c2c38:;
    {
        cpu->r[3] = rd32(0x001c2c40u + + 0xa8u);
    }
L_001c2c3c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c2c40:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001c2c44:;
    {
        cpu->r[2] = rd32(0x001c2c4cu + + 0xa0u);
    }
L_001c2c48:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c2c50u, cpu->r[3], 0, 0);
    }
L_001c2c4c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001c2c50:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c2c54:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001c2c58:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001c2c5c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c2c60:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001c2c64:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001c2c68:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2c6c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c2c70:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c2c74:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c2c78:;
    {
        wr32(cpu->r[13] + + 0x814u, cpu->r[3]);
    }
L_001c2c7c:;
    {
        cpu->r[14] = 0x001c2c80u; fn_001d0700(cpu);
    }
L_001c2c80:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c2c84:;
    {
        cpu->r[2] = 0x0000005cu;
    }
L_001c2c88:;
    {
        cpu->r[1] = rd32(0x001c2c90u + + 0x60u);
    }
L_001c2c8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c2c90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c2c94:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c2c9cu, cpu->r[1], 0, 0);
    }
L_001c2c98:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c2c9c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_001c2ca0:;
    {
        cpu->r[14] = 0x001c2ca4u; imp_sprintf(cpu); /* sprintf */
    }
L_001c2ca4:;
    {
        cpu->r[0] = rd32(0x001c2cacu + + 0x48u);
    }
L_001c2ca8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c2cac:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c2cb4u, cpu->r[0], 0, 0);
    }
L_001c2cb0:;
    {
        cpu->r[14] = 0x001c2cb4u; fn_001d0ac4(cpu);
    }
L_001c2cb4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c2cb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c2cbc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c2cc0:;
    {
        cpu->r[14] = 0x001c2cc8u;
    }
L_001c2cc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c2cc8u)) return;
    }
L_001c2cc8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x814u);
    }
L_001c2ccc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c2cd0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c2cd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c2ce4;
        }
    }
L_001c2cd8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001c2cdc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001c2ce0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c2ce4u)) return;
    }
L_001c2ce4:;
    {
        cpu->r[14] = 0x001c2ce8u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c2ce8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[8], 1, 15u, &shc); cpu->r[7] = v;
        }
    }
L_001c2cec:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c2cf0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[4], 2, 11u, &shc); cpu->r[13] = v;
        }
    }
L_001c2cf4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[12], 4, (cpu->r[4] & 0xffu), &shc); cpu->r[14] = v;
        }
    }
}

/* _ZN16GLXPlayerMessage25SendGetMySentMessageCountEv @ 001c2cf8 (arm) */
void fn_001c2cf8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c2cf8:;
    {
        cpu->r[3] = rd32(0x001c2d00u + + 0x94u);
    }
L_001c2cfc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2d00:;
    {
        cpu->r[2] = rd32(0x001c2d08u + + 0x90u);
    }
L_001c2d04:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c2d0cu, cpu->r[3], 0, 0);
    }
L_001c2d08:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c2d0c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c2d10:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001c2d14:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c2d18:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001c2d1c:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c2d20:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c2d24:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001c2d28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c2d2c:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001c2d30:;
    {
        cpu->r[14] = 0x001c2d34u; fn_001d0700(cpu);
    }
L_001c2d34:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c2d38:;
    {
        cpu->r[2] = 0x0000005bu;
    }
L_001c2d3c:;
    {
        cpu->r[1] = rd32(0x001c2d44u + + 0x58u);
    }
L_001c2d40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c2d44:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c2d48:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c2d50u, cpu->r[1], 0, 0);
    }
L_001c2d4c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c2d50:;
    {
        cpu->r[14] = 0x001c2d54u; imp_sprintf(cpu); /* sprintf */
    }
L_001c2d54:;
    {
        cpu->r[0] = rd32(0x001c2d5cu + + 0x44u);
    }
L_001c2d58:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c2d5c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c2d64u, cpu->r[0], 0, 0);
    }
L_001c2d60:;
    {
        cpu->r[14] = 0x001c2d64u; fn_001d0ac4(cpu);
    }
L_001c2d64:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c2d68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c2d6c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c2d70:;
    {
        cpu->r[14] = 0x001c2d78u;
    }
L_001c2d74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c2d78u)) return;
    }
L_001c2d78:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001c2d7c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c2d80:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c2d84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c2d90;
        }
    }
L_001c2d88:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001c2d8c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c2d90u)) return;
    }
L_001c2d90:;
    {
        cpu->r[14] = 0x001c2d94u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c2d94:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[12], 2, 14u, &shc); cpu->r[7] = v;
        }
    }
L_001c2d98:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c2d9c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[12], 4, 5u, &shc); cpu->r[13] = v;
        }
    }
L_001c2da0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[8], 4, 7u, &shc); cpu->r[14] = v;
        }
    }
}

/* _ZN16GLXPlayerMessage20SendDelMySentMessageEi @ 001c2da4 (arm) */
void fn_001c2da4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c2da4:;
    {
        cpu->r[3] = rd32(0x001c2dacu + + 0xa4u);
    }
L_001c2da8:;
    {
        cpu->r[2] = rd32(0x001c2db0u + + 0xa4u);
    }
L_001c2dac:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c2db4u, cpu->r[3], 0, 0);
    }
L_001c2db0:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001c2db4:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c2db8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001c2dbc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c2dc0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001c2dc4:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001c2dc8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c2dcc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001c2dd0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001c2dd4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2dd8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c2ddc:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c2de0:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001c2de4:;
    {
        cpu->r[14] = 0x001c2de8u; fn_001d0700(cpu);
    }
L_001c2de8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c2dec:;
    {
        cpu->r[2] = 0x0000005eu;
    }
L_001c2df0:;
    {
        cpu->r[1] = rd32(0x001c2df8u + + 0x60u);
    }
L_001c2df4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c2df8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c2dfc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c2e04u, cpu->r[1], 0, 0);
    }
L_001c2e00:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c2e04:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001c2e08:;
    {
        cpu->r[14] = 0x001c2e0cu; imp_sprintf(cpu); /* sprintf */
    }
L_001c2e0c:;
    {
        cpu->r[0] = rd32(0x001c2e14u + + 0x48u);
    }
L_001c2e10:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c2e14:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c2e1cu, cpu->r[0], 0, 0);
    }
L_001c2e18:;
    {
        cpu->r[14] = 0x001c2e1cu; fn_001d0ac4(cpu);
    }
L_001c2e1c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c2e20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c2e24:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c2e28:;
    {
        cpu->r[14] = 0x001c2e30u;
    }
L_001c2e2c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c2e30u)) return;
    }
L_001c2e30:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001c2e34:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c2e38:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c2e3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c2e4c;
        }
    }
L_001c2e40:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001c2e44:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001c2e48:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c2e4cu)) return;
    }
L_001c2e4c:;
    {
        cpu->r[14] = 0x001c2e50u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c2e50:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[4], 4, 12u, &shc); cpu->r[7] = v;
        }
    }
L_001c2e54:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c2e58:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[12], 4, (cpu->r[3] & 0xffu), &shc); cpu->r[14] = v;
        }
    }
L_001c2e5c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[12], 4, (cpu->r[3] & 0xffu), &shc); cpu->r[14] = v;
        }
    }
}

/* _ZN16GLXPlayerMessage17SendDeleteMessageEi @ 001c2e60 (arm) */
void fn_001c2e60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c2e60:;
    {
        cpu->r[3] = rd32(0x001c2e68u + + 0xa4u);
    }
L_001c2e64:;
    {
        cpu->r[2] = rd32(0x001c2e6cu + + 0xa4u);
    }
L_001c2e68:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c2e70u, cpu->r[3], 0, 0);
    }
L_001c2e6c:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001c2e70:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c2e74:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001c2e78:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c2e7c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001c2e80:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001c2e84:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c2e88:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001c2e8c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001c2e90:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c2e94:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c2e98:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c2e9c:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001c2ea0:;
    {
        cpu->r[14] = 0x001c2ea4u; fn_001d0700(cpu);
    }
L_001c2ea4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c2ea8:;
    {
        cpu->r[2] = 0x0000004eu;
    }
L_001c2eac:;
    {
        cpu->r[1] = rd32(0x001c2eb4u + + 0x60u);
    }
L_001c2eb0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c2eb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c2eb8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c2ec0u, cpu->r[1], 0, 0);
    }
L_001c2ebc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c2ec0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001c2ec4:;
    {
        cpu->r[14] = 0x001c2ec8u; imp_sprintf(cpu); /* sprintf */
    }
L_001c2ec8:;
    {
        cpu->r[0] = rd32(0x001c2ed0u + + 0x48u);
    }
L_001c2ecc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c2ed0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c2ed8u, cpu->r[0], 0, 0);
    }
L_001c2ed4:;
    {
        cpu->r[14] = 0x001c2ed8u; fn_001d0ac4(cpu);
    }
L_001c2ed8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c2edc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c2ee0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c2ee4:;
    {
        cpu->r[14] = 0x001c2eecu;
    }
L_001c2ee8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c2eecu)) return;
    }
L_001c2eec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001c2ef0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c2ef4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c2ef8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c2f08;
        }
    }
L_001c2efc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001c2f00:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001c2f04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c2f08u)) return;
    }
L_001c2f08:;
    {
        cpu->r[14] = 0x001c2f0cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c2f0c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[8], 3, 11u, &shc); cpu->r[7] = v;
        }
    }
L_001c2f10:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c2f14:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 1, 5u, &shc); cpu->r[14] = v;
        }
    }
L_001c2f18:;
    {
        if (cond_test(cpu, 1)) {
        guest_unimplemented(cpu, 0x001c2f18u); return;
        }
    }
}

/* _ZN16GLXPlayerMessage17SendOnlineMessageEPciS0_S0_ib @ 001c2f1c (arm) */
void fn_001c2f1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c2f1c:;
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
L_001c2f20:;
    {
        cpu->r[4] = rd32(0x001c2f28u + + 0x138u);
    }
L_001c2f24:;
    {
        cpu->r[5] = rd32(0x001c2f2cu + + 0x138u);
    }
L_001c2f28:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c2f2c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
        }
    }
L_001c2f30:;
    {
        cpu->r[4] = add_flags(cpu, 0x001c2f38u, cpu->r[4], 0, 0);
    }
L_001c2f34:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001c2f38:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000820u, 1, 0);
    }
L_001c2f3c:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_001c2f40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001c2f44:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001c2f48:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001c2f4c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001c2f50:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x850u);
    }
L_001c2f54:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001c2f58:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x854u);
    }
L_001c2f5c:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x858u);
    }
L_001c2f60:;
    {
        wr32(cpu->r[13] + + 0x824u, cpu->r[2]);
    }
L_001c2f64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3000;
        }
    }
L_001c2f68:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001c2f6c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
        }
    }
L_001c2f70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_001c2f74:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_001c2f78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3000;
        }
    }
L_001c2f7c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 1);
    }
L_001c2f80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3000;
        }
    }
L_001c2f84:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001c2f88:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c2f8c:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000004u, 1, 0);
    }
L_001c2f90:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001c2f94:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001c2f98:;
    {
        cpu->r[14] = 0x001c2f9cu; fn_001d0700(cpu);
    }
L_001c2f9c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001c2fa0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c2fa4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c3040;
        }
    }
L_001c2fa8:;
    {
        cpu->r[1] = rd32(0x001c2fb0u + + 0xb8u);
    }
L_001c2fac:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001c2fb0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001c2fb4:;
    {
        cpu->r[2] = 0x0000004du;
    }
L_001c2fb8:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001c2fbc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c2fc4u, cpu->r[1], 0, 0);
    }
L_001c2fc0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c2fc4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_001c2fc8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_001c2fcc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_001c2fd0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[8]);
    }
L_001c2fd4:;
    {
        cpu->r[14] = 0x001c2fd8u; imp_sprintf(cpu); /* sprintf */
    }
L_001c2fd8:;
    {
        cpu->r[0] = rd32(0x001c2fe0u + + 0x8cu);
    }
L_001c2fdc:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001c2fe0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c2fe8u, cpu->r[0], 0, 0);
    }
L_001c2fe4:;
    {
        cpu->r[14] = 0x001c2fe8u; fn_001d0ac4(cpu);
    }
L_001c2fe8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c2fec:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001c2ff0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c2ff4:;
    {
        cpu->r[14] = 0x001c2ffcu;
    }
L_001c2ff8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c2ffcu)) return;
    }
L_001c2ffc:;
    {
        goto L_001c3020;
    }
L_001c3000:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001c3004:;
    {
        cpu->r[1] = 0x0000004du;
    }
L_001c3008:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001c300c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c3010:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c3014:;
    {
        cpu->r[14] = 0x001c301cu;
    }
L_001c3018:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c301cu)) return;
    }
L_001c301c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c3020:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001c3024:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x824u);
    }
L_001c3028:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c302c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c3030:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c305c;
        }
    }
L_001c3034:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001c3038:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001c303c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c3040u)) return;
    }
L_001c3040:;
    {
        cpu->r[1] = rd32(0x001c3048u + + 0x28u);
    }
L_001c3044:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001c3048:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001c304c:;
    {
        cpu->r[2] = 0x0000004du;
    }
L_001c3050:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001c3054:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c305cu, cpu->r[1], 0, 0);
    }
L_001c3058:;
    {
        goto L_001c2fc0;
    }
L_001c305c:;
    {
        cpu->r[14] = 0x001c3060u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c3060:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[0], 4, 9u, &shc); cpu->r[7] = v;
        }
    }
L_001c3064:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c3068:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 3, (cpu->r[2] & 0xffu), &shc); cpu->r[14] = v;
        }
    }
L_001c306c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 3, (cpu->r[2] & 0xffu), &shc); cpu->r[14] = v;
        }
    }
L_001c3070:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 4, (cpu->r[1] & 0xffu), &shc); cpu->r[14] = v;
        }
    }
}

/* _ZN16GLXPlayerMessage21SendReadMySentMessageEi @ 001c3074 (arm) */
void fn_001c3074(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3074:;
    {
        cpu->r[3] = rd32(0x001c307cu + + 0xa0u);
    }
L_001c3078:;
    {
        cpu->r[2] = rd32(0x001c3080u + + 0xa0u);
    }
L_001c307c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c3084u, cpu->r[3], 0, 0);
    }
L_001c3080:;
    {
        wr32(cpu->r[0] + + 0x64u, cpu->r[1]);
    }
L_001c3084:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c3088:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c308c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001c3090:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c3094:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001c3098:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c309c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c30a0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001c30a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c30a8:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c30ac:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001c30b0:;
    {
        cpu->r[14] = 0x001c30b4u; fn_001d0700(cpu);
    }
L_001c30b4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c30b8:;
    {
        cpu->r[2] = 0x0000005du;
    }
L_001c30bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c30c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c30c4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x64u);
    }
L_001c30c8:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001c30cc:;
    {
        cpu->r[1] = rd32(0x001c30d4u + + 0x50u);
    }
L_001c30d0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001c30d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c30dcu, cpu->r[1], 0, 0);
    }
L_001c30d8:;
    {
        cpu->r[14] = 0x001c30dcu; imp_sprintf(cpu); /* sprintf */
    }
L_001c30dc:;
    {
        cpu->r[0] = rd32(0x001c30e4u + + 0x44u);
    }
L_001c30e0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c30e4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c30ecu, cpu->r[0], 0, 0);
    }
L_001c30e8:;
    {
        cpu->r[14] = 0x001c30ecu; fn_001d0ac4(cpu);
    }
L_001c30ec:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c30f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c30f4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c30f8:;
    {
        cpu->r[14] = 0x001c3100u;
    }
L_001c30fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c3100u)) return;
    }
L_001c3100:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001c3104:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c3108:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c310c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c3118;
        }
    }
L_001c3110:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001c3114:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c3118u)) return;
    }
L_001c3118:;
    {
        cpu->r[14] = 0x001c311cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c311c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[3]; cpu->r[8] = v;
        }
    }
L_001c3120:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c3124:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[4], 3, 1u, &shc); cpu->r[14] = v;
        }
    }
L_001c3128:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[4], 1, 2u, &shc); cpu->r[14] = v;
        }
    }
}

/* _ZN16GLXPlayerMessage15SendReadMessageEi @ 001c312c (arm) */
void fn_001c312c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c312c:;
    {
        cpu->r[3] = rd32(0x001c3134u + + 0xa0u);
    }
L_001c3130:;
    {
        cpu->r[2] = rd32(0x001c3138u + + 0xa0u);
    }
L_001c3134:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c313cu, cpu->r[3], 0, 0);
    }
L_001c3138:;
    {
        wr32(cpu->r[0] + + 0x64u, cpu->r[1]);
    }
L_001c313c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c3140:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c3144:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001c3148:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c314c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001c3150:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c3154:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c3158:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001c315c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c3160:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c3164:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001c3168:;
    {
        cpu->r[14] = 0x001c316cu; fn_001d0700(cpu);
    }
L_001c316c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c3170:;
    {
        cpu->r[2] = 0x0000004cu;
    }
L_001c3174:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c3178:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c317c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x64u);
    }
L_001c3180:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001c3184:;
    {
        cpu->r[1] = rd32(0x001c318cu + + 0x50u);
    }
L_001c3188:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001c318c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c3194u, cpu->r[1], 0, 0);
    }
L_001c3190:;
    {
        cpu->r[14] = 0x001c3194u; imp_sprintf(cpu); /* sprintf */
    }
L_001c3194:;
    {
        cpu->r[0] = rd32(0x001c319cu + + 0x44u);
    }
L_001c3198:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c319c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c31a4u, cpu->r[0], 0, 0);
    }
L_001c31a0:;
    {
        cpu->r[14] = 0x001c31a4u; fn_001d0ac4(cpu);
    }
L_001c31a4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c31a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c31ac:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c31b0:;
    {
        cpu->r[14] = 0x001c31b8u;
    }
L_001c31b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c31b8u)) return;
    }
L_001c31b8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001c31bc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c31c0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c31c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c31d0;
        }
    }
L_001c31c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001c31cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c31d0u)) return;
    }
L_001c31d0:;
    {
        cpu->r[14] = 0x001c31d4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c31d4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[8] + (-cpu->r[12]);
        uint64_t v = rd64(cpu->r[8]);
        cpu->r[7] = (uint32_t)v;
        cpu->r[8] = (uint32_t)(v >> 32);
        cpu->r[8] = wb_tmp;
        }
    }
L_001c31d8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c31dc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[12], 4, 31u, &shc); cpu->r[13] = v;
        }
    }
L_001c31e0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[8], 3, 1u, &shc); cpu->r[14] = v;
        }
    }
}

/* _ZN16GLXPlayerMessage20SendGetMessageHeaderEiiii @ 001c31e4 (arm) */
void fn_001c31e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c31e4:;
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
L_001c31e8:;
    {
        cpu->r[6] = rd32(0x001c31f0u + + 0x278u);
    }
L_001c31ec:;
    {
        cpu->r[9] = rd32(0x001c31f4u + + 0x278u);
    }
L_001c31f0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000860u, 1, 0);
    }
L_001c31f4:;
    {
        cpu->r[6] = add_flags(cpu, 0x001c31fcu, cpu->r[6], 0, 0);
    }
L_001c31f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001c31fc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001c3200:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000820u, 0, 0);
    }
L_001c3204:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_001c3208:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000004u, 1, 0);
    }
L_001c320c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001c3210:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c3214:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001c3218:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c321c:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_001c3220:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c3224:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_001c3228:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001c322c:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c3230:;
    {
        wr32(cpu->r[13] + + 0x864u, cpu->r[3]);
    }
L_001c3234:;
    {
        cpu->r[14] = 0x001c3238u; fn_001d0700(cpu);
    }
L_001c3238:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c323c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c3240:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_001c3244:;
    {
        cpu->r[14] = 0x001c3248u; fn_001d0700(cpu);
    }
L_001c3248:;
    {
        add_flags(cpu, cpu->r[5], 0x00000001u, 0, 1);
    }
L_001c324c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3430;
        }
    }
L_001c3250:;
    {
        uint32_t v = cpu->r[5] & 0x00000001u; cpu->r[10] = v;
        set_nz(cpu, v);
    }
L_001c3254:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c3314;
        }
    }
L_001c3258:;
    {
        { uint32_t v = cpu->r[5] & 0x00000002u; set_nz(cpu, v); }
    }
L_001c325c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c3348;
        }
    }
L_001c3260:;
    {
        { uint32_t v = cpu->r[5] & 0x00000004u; set_nz(cpu, v); }
    }
L_001c3264:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c3388;
        }
    }
L_001c3268:;
    {
        { uint32_t v = cpu->r[5] & 0x00000008u; set_nz(cpu, v); }
    }
L_001c326c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c33c8;
        }
    }
L_001c3270:;
    {
        { uint32_t v = cpu->r[5] & 0x00000010u; set_nz(cpu, v); }
    }
L_001c3274:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c3408;
        }
    }
L_001c3278:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c327c:;
    {
        cpu->r[14] = 0x001c3280u; fn_001d0434(cpu);
    }
L_001c3280:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c3284:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c32a4;
        }
    }
L_001c3288:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c328c:;
    {
        cpu->r[14] = 0x001c3290u; fn_001d0434(cpu);
    }
L_001c3290:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000860u, 0, 0);
    }
L_001c3294:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001c3298:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001c329c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c32a0:;
    {
        wr8(cpu->r[0] + - 0x45u, cpu->r[3]);
    }
L_001c32a4:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0xcu);
    }
L_001c32a8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c32ac:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_001c32b0:;
    {
        cpu->r[2] = 0x0000004bu;
    }
L_001c32b4:;
    {
        cpu->r[1] = rd32(0x001c32bcu + + 0x1b4u);
    }
L_001c32b8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c32bc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x890u);
    }
L_001c32c0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c32c8u, cpu->r[1], 0, 0);
    }
L_001c32c4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001c32c8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[11]);
        wr32(ea + 8u, cpu->r[12]);
        wr32(ea + 12u, cpu->r[14]);
    }
L_001c32cc:;
    {
        cpu->r[14] = 0x001c32d0u; imp_sprintf(cpu); /* sprintf */
    }
L_001c32d0:;
    {
        cpu->r[0] = rd32(0x001c32d8u + + 0x19cu);
    }
L_001c32d4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c32d8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c32e0u, cpu->r[0], 0, 0);
    }
L_001c32dc:;
    {
        cpu->r[14] = 0x001c32e0u; fn_001d0ac4(cpu);
    }
L_001c32e0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001c32e4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c32e8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c32ec:;
    {
        cpu->r[14] = 0x001c32f4u;
    }
L_001c32f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c32f4u)) return;
    }
L_001c32f4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_001c32f8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x864u);
    }
L_001c32fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c3300:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c3304:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c3464;
        }
    }
L_001c3308:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_001c330c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001c3310:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c3314u)) return;
    }
L_001c3314:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c3318:;
    {
        cpu->r[14] = 0x001c331cu; fn_001d0434(cpu);
    }
L_001c331c:;
    {
        cpu->r[1] = rd32(0x001c3324u + + 0x154u);
    }
L_001c3320:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001c3324:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c332cu, cpu->r[1], 0, 0);
    }
L_001c3328:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001c332c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c3330:;
    {
        cpu->r[14] = 0x001c3334u; imp_sprintf(cpu); /* sprintf */
    }
L_001c3334:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c3338:;
    {
        cpu->r[14] = 0x001c333cu; fn_001d0434(cpu);
    }
L_001c333c:;
    {
        { uint32_t v = cpu->r[5] & 0x00000002u; set_nz(cpu, v); }
    }
L_001c3340:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_001c3344:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3260;
        }
    }
L_001c3348:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c334c:;
    {
        cpu->r[14] = 0x001c3350u; fn_001d0434(cpu);
    }
L_001c3350:;
    {
        cpu->r[1] = rd32(0x001c3358u + + 0x124u);
    }
L_001c3354:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001c3358:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c3360u, cpu->r[1], 0, 0);
    }
L_001c335c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c3360:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_001c3364:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001c3368:;
    {
        cpu->r[14] = 0x001c336cu; imp_sprintf(cpu); /* sprintf */
    }
L_001c336c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c3370:;
    {
        cpu->r[14] = 0x001c3374u; fn_001d0434(cpu);
    }
L_001c3374:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001c3378:;
    {
        { uint32_t v = cpu->r[5] & 0x00000004u; set_nz(cpu, v); }
    }
L_001c337c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001c3380:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001c3384:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3268;
        }
    }
L_001c3388:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c338c:;
    {
        cpu->r[14] = 0x001c3390u; fn_001d0434(cpu);
    }
L_001c3390:;
    {
        cpu->r[1] = rd32(0x001c3398u + + 0xe8u);
    }
L_001c3394:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001c3398:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c33a0u, cpu->r[1], 0, 0);
    }
L_001c339c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c33a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_001c33a4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001c33a8:;
    {
        cpu->r[14] = 0x001c33acu; imp_sprintf(cpu); /* sprintf */
    }
L_001c33ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c33b0:;
    {
        cpu->r[14] = 0x001c33b4u; fn_001d0434(cpu);
    }
L_001c33b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001c33b8:;
    {
        { uint32_t v = cpu->r[5] & 0x00000008u; set_nz(cpu, v); }
    }
L_001c33bc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001c33c0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001c33c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3270;
        }
    }
L_001c33c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c33cc:;
    {
        cpu->r[14] = 0x001c33d0u; fn_001d0434(cpu);
    }
L_001c33d0:;
    {
        cpu->r[1] = rd32(0x001c33d8u + + 0xacu);
    }
L_001c33d4:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_001c33d8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c33e0u, cpu->r[1], 0, 0);
    }
L_001c33dc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c33e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_001c33e4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001c33e8:;
    {
        cpu->r[14] = 0x001c33ecu; imp_sprintf(cpu); /* sprintf */
    }
L_001c33ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c33f0:;
    {
        cpu->r[14] = 0x001c33f4u; fn_001d0434(cpu);
    }
L_001c33f4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001c33f8:;
    {
        { uint32_t v = cpu->r[5] & 0x00000010u; set_nz(cpu, v); }
    }
L_001c33fc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001c3400:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001c3404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3278;
        }
    }
L_001c3408:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c340c:;
    {
        cpu->r[14] = 0x001c3410u; fn_001d0434(cpu);
    }
L_001c3410:;
    {
        cpu->r[1] = rd32(0x001c3418u + + 0x70u);
    }
L_001c3414:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_001c3418:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001c341c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c3424u, cpu->r[1], 0, 0);
    }
L_001c3420:;
    {
        cpu->r[14] = 0x001c3424u; imp_sprintf(cpu); /* sprintf */
    }
L_001c3424:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c3428:;
    {
        cpu->r[14] = 0x001c342cu; fn_001d0434(cpu);
    }
L_001c342c:;
    {
        goto L_001c3278;
    }
L_001c3430:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0xcu);
    }
L_001c3434:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c3438:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_001c343c:;
    {
        cpu->r[2] = 0x0000004bu;
    }
L_001c3440:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001c3444:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c3448:;
    {
        cpu->r[1] = rd32(0x001c3450u + + 0x3cu);
    }
L_001c344c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x890u);
    }
L_001c3450:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c3458u, cpu->r[1], 0, 0);
    }
L_001c3454:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001c3458:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001c345c:;
    {
        cpu->r[14] = 0x001c3460u; imp_sprintf(cpu); /* sprintf */
    }
L_001c3460:;
    {
        goto L_001c32d0;
    }
L_001c3464:;
    {
        cpu->r[14] = 0x001c3468u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c3468:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[12], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[7] = v;
        }
    }
L_001c346c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c3470:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[12] * 0x001c3478u; cpu->r[6] = v;
        }
    }
L_001c3474:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[13] = v;
        }
    }
L_001c3478:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[6] + (-cpu->r[12]);
        wr16(cpu->r[6], cpu->r[13]);
        cpu->r[6] = wb_tmp;
        }
    }
L_001c347c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[8], 2, 15u, &shc); cpu->r[13] = v;
        }
    }
L_001c3480:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[8], 1, 14u, &shc); cpu->r[13] = v;
        }
    }
L_001c3484:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[8], 2, 14u, &shc); cpu->r[13] = v;
        }
    }
L_001c3488:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[4], 1, 13u, &shc); cpu->r[13] = v;
        }
    }
L_001c348c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 3, (cpu->r[14] & 0xffu), &shc); cpu->r[13] = v;
        }
    }
}

/* _ZN16GLXPlayerMessage19SendGetMessageCountEii @ 001c3490 (arm) */
void fn_001c3490(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3490:;
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
L_001c3494:;
    {
        cpu->r[5] = rd32(0x001c349cu + + 0x258u);
    }
L_001c3498:;
    {
        cpu->r[9] = rd32(0x001c34a0u + + 0x258u);
    }
L_001c349c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000860u, 1, 0);
    }
L_001c34a0:;
    {
        cpu->r[5] = add_flags(cpu, 0x001c34a8u, cpu->r[5], 0, 0);
    }
L_001c34a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001c34a8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001c34ac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001c34b0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001c34b4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_001c34b8:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001c34bc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001c34c0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c34c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c34c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c34cc:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_001c34d0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_001c34d4:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c34d8:;
    {
        wr32(cpu->r[13] + + 0x85cu, cpu->r[3]);
    }
L_001c34dc:;
    {
        cpu->r[14] = 0x001c34e0u; fn_001d0700(cpu);
    }
L_001c34e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c34e4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c34e8:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_001c34ec:;
    {
        cpu->r[14] = 0x001c34f0u; fn_001d0700(cpu);
    }
L_001c34f0:;
    {
        add_flags(cpu, cpu->r[8], 0x00000001u, 0, 1);
    }
L_001c34f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c36cc;
        }
    }
L_001c34f8:;
    {
        uint32_t v = cpu->r[8] & 0x00000001u; cpu->r[10] = v;
        set_nz(cpu, v);
    }
L_001c34fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c35b0;
        }
    }
L_001c3500:;
    {
        { uint32_t v = cpu->r[8] & 0x00000002u; set_nz(cpu, v); }
    }
L_001c3504:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c35e4;
        }
    }
L_001c3508:;
    {
        { uint32_t v = cpu->r[8] & 0x00000004u; set_nz(cpu, v); }
    }
L_001c350c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c3624;
        }
    }
L_001c3510:;
    {
        { uint32_t v = cpu->r[8] & 0x00000008u; set_nz(cpu, v); }
    }
L_001c3514:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c3664;
        }
    }
L_001c3518:;
    {
        { uint32_t v = cpu->r[8] & 0x00000010u; set_nz(cpu, v); }
    }
L_001c351c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c36a4;
        }
    }
L_001c3520:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c3524:;
    {
        cpu->r[14] = 0x001c3528u; fn_001d0434(cpu);
    }
L_001c3528:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c352c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c3548;
        }
    }
L_001c3530:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c3534:;
    {
        cpu->r[14] = 0x001c3538u; fn_001d0434(cpu);
    }
L_001c3538:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000860u, 0, 0);
    }
L_001c353c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001c3540:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c3544:;
    {
        wr8(cpu->r[0] + - 0x45u, cpu->r[3]);
    }
L_001c3548:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0xcu);
    }
L_001c354c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c3550:;
    {
        cpu->r[1] = rd32(0x001c3558u + + 0x1a4u);
    }
L_001c3554:;
    {
        cpu->r[2] = 0x0000004au;
    }
L_001c3558:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_001c355c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c3564u, cpu->r[1], 0, 0);
    }
L_001c3560:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[11]);
    }
L_001c3564:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c3568:;
    {
        cpu->r[14] = 0x001c356cu; imp_sprintf(cpu); /* sprintf */
    }
L_001c356c:;
    {
        cpu->r[0] = rd32(0x001c3574u + + 0x18cu);
    }
L_001c3570:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c3574:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c357cu, cpu->r[0], 0, 0);
    }
L_001c3578:;
    {
        cpu->r[14] = 0x001c357cu; fn_001d0ac4(cpu);
    }
L_001c357c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001c3580:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c3584:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c3588:;
    {
        cpu->r[14] = 0x001c3590u;
    }
L_001c358c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c3590u)) return;
    }
L_001c3590:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001c3594:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x85cu);
    }
L_001c3598:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c359c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c35a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c36f0;
        }
    }
L_001c35a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_001c35a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001c35ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c35b0u)) return;
    }
L_001c35b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c35b4:;
    {
        cpu->r[14] = 0x001c35b8u; fn_001d0434(cpu);
    }
L_001c35b8:;
    {
        cpu->r[1] = rd32(0x001c35c0u + + 0x144u);
    }
L_001c35bc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001c35c0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c35c8u, cpu->r[1], 0, 0);
    }
L_001c35c4:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001c35c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c35cc:;
    {
        cpu->r[14] = 0x001c35d0u; imp_sprintf(cpu); /* sprintf */
    }
L_001c35d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c35d4:;
    {
        cpu->r[14] = 0x001c35d8u; fn_001d0434(cpu);
    }
L_001c35d8:;
    {
        { uint32_t v = cpu->r[8] & 0x00000002u; set_nz(cpu, v); }
    }
L_001c35dc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_001c35e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3508;
        }
    }
L_001c35e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c35e8:;
    {
        cpu->r[14] = 0x001c35ecu; fn_001d0434(cpu);
    }
L_001c35ec:;
    {
        cpu->r[1] = rd32(0x001c35f4u + + 0x114u);
    }
L_001c35f0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001c35f4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c35fcu, cpu->r[1], 0, 0);
    }
L_001c35f8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c35fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_001c3600:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001c3604:;
    {
        cpu->r[14] = 0x001c3608u; imp_sprintf(cpu); /* sprintf */
    }
L_001c3608:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c360c:;
    {
        cpu->r[14] = 0x001c3610u; fn_001d0434(cpu);
    }
L_001c3610:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001c3614:;
    {
        { uint32_t v = cpu->r[8] & 0x00000004u; set_nz(cpu, v); }
    }
L_001c3618:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001c361c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001c3620:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3510;
        }
    }
L_001c3624:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c3628:;
    {
        cpu->r[14] = 0x001c362cu; fn_001d0434(cpu);
    }
L_001c362c:;
    {
        cpu->r[1] = rd32(0x001c3634u + + 0xd8u);
    }
L_001c3630:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001c3634:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c363cu, cpu->r[1], 0, 0);
    }
L_001c3638:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c363c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_001c3640:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001c3644:;
    {
        cpu->r[14] = 0x001c3648u; imp_sprintf(cpu); /* sprintf */
    }
L_001c3648:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c364c:;
    {
        cpu->r[14] = 0x001c3650u; fn_001d0434(cpu);
    }
L_001c3650:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001c3654:;
    {
        { uint32_t v = cpu->r[8] & 0x00000008u; set_nz(cpu, v); }
    }
L_001c3658:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001c365c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001c3660:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3518;
        }
    }
L_001c3664:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c3668:;
    {
        cpu->r[14] = 0x001c366cu; fn_001d0434(cpu);
    }
L_001c366c:;
    {
        cpu->r[1] = rd32(0x001c3674u + + 0x9cu);
    }
L_001c3670:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_001c3674:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c367cu, cpu->r[1], 0, 0);
    }
L_001c3678:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c367c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_001c3680:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001c3684:;
    {
        cpu->r[14] = 0x001c3688u; imp_sprintf(cpu); /* sprintf */
    }
L_001c3688:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c368c:;
    {
        cpu->r[14] = 0x001c3690u; fn_001d0434(cpu);
    }
L_001c3690:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001c3694:;
    {
        { uint32_t v = cpu->r[8] & 0x00000010u; set_nz(cpu, v); }
    }
L_001c3698:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001c369c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001c36a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3520;
        }
    }
L_001c36a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c36a8:;
    {
        cpu->r[14] = 0x001c36acu; fn_001d0434(cpu);
    }
L_001c36ac:;
    {
        cpu->r[1] = rd32(0x001c36b4u + + 0x60u);
    }
L_001c36b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_001c36b4:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001c36b8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c36c0u, cpu->r[1], 0, 0);
    }
L_001c36bc:;
    {
        cpu->r[14] = 0x001c36c0u; imp_sprintf(cpu); /* sprintf */
    }
L_001c36c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c36c4:;
    {
        cpu->r[14] = 0x001c36c8u; fn_001d0434(cpu);
    }
L_001c36c8:;
    {
        goto L_001c3520;
    }
L_001c36cc:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0xcu);
    }
L_001c36d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c36d4:;
    {
        cpu->r[1] = rd32(0x001c36dcu + + 0x3cu);
    }
L_001c36d8:;
    {
        cpu->r[2] = 0x0000004au;
    }
L_001c36dc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_001c36e0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c36e8u, cpu->r[1], 0, 0);
    }
L_001c36e4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c36e8:;
    {
        cpu->r[14] = 0x001c36ecu; imp_sprintf(cpu); /* sprintf */
    }
L_001c36ec:;
    {
        goto L_001c356c;
    }
L_001c36f0:;
    {
        cpu->r[14] = 0x001c36f4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c36f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[0], 4, (0x001c36fcu & 0xffu), &shc); cpu->r[6] = v;
        }
    }
L_001c36f8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c36fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[4], 1, 26u, &shc); cpu->r[13] = v;
        }
    }
L_001c3700:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[8], 1, 26u, &shc); cpu->r[13] = v;
        }
    }
L_001c3704:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 3, 10u, &shc); cpu->r[13] = v;
        }
    }
L_001c3708:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[12], 4, 9u, &shc); cpu->r[13] = v;
        }
    }
L_001c370c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[12], 3, 9u, &shc); cpu->r[13] = v;
        }
    }
L_001c3710:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[12], 4, 8u, &shc); cpu->r[13] = v;
        }
    }
L_001c3714:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[8], 3, 8u, &shc); cpu->r[13] = v;
        }
    }
L_001c3718:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[4], 1, (cpu->r[9] & 0xffu), &shc); cpu->r[12] = v;
        }
    }
}

/* _ZN16GLXPlayerMessage15OnUpdateSuccessEi @ 001c371c (arm) */
void fn_001c371c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c371c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x0000004au, 1, 0);
    }
L_001c3720:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c3724:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c3728:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c372c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000013u, 1, 1);
    }
L_001c3730:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_001c37c8;
        case 1: goto L_001c37d4;
        case 2: goto L_001c3788;
        case 3: goto L_001c37ac;
        case 4: goto L_001c37ac;
        case 5: goto L_001c37ac;
        case 6: goto L_001c37ac;
        case 7: goto L_001c37ac;
        case 8: goto L_001c37ac;
        case 9: goto L_001c37ac;
        case 10: goto L_001c37ac;
        case 11: goto L_001c37ac;
        case 12: goto L_001c37ac;
        case 13: goto L_001c37ac;
        case 14: goto L_001c37ac;
        case 15: goto L_001c37ac;
        case 16: goto L_001c37ac;
        case 17: goto L_001c37e0;
        case 18: goto L_001c37bc;
        case 19: goto L_001c3788;
        default: guest_unimplemented(cpu, 0x001c3730u); return; }
        }
    }
L_001c3734:;
    {
        goto L_001c37ac;
    }
L_001c3788:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x68u);
    }
L_001c378c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c3790:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c37a0;
        }
    }
L_001c3794:;
    {
        cpu->r[14] = 0x001c3798u; fn_0018ba20(cpu);
    }
L_001c3798:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c379c:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_001c37a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_001c37a4:;
    {
        cpu->r[14] = 0x001c37a8u; fn_001d0ce8(cpu);
    }
L_001c37a8:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[0]);
    }
L_001c37ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c37b0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c37b4:;
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
L_001c37b8:;
    {
        return fn_001b6b68(cpu);
    }
L_001c37bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001c37c0:;
    {
        cpu->r[14] = 0x001c37c4u; fn_001c25ec(cpu);
    }
L_001c37c4:;
    {
        goto L_001c37ac;
    }
L_001c37c8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001c37cc:;
    {
        cpu->r[14] = 0x001c37d0u; fn_001c217c(cpu);
    }
L_001c37d0:;
    {
        goto L_001c37ac;
    }
L_001c37d4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001c37d8:;
    {
        cpu->r[14] = 0x001c37dcu; fn_001c28c0(cpu);
    }
L_001c37dc:;
    {
        goto L_001c37ac;
    }
L_001c37e0:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001c37e4:;
    {
        cpu->r[14] = 0x001c37e8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c37e8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c37ec:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001c37f0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001c37f4:;
    {
        cpu->r[14] = 0x001c37f8u; fn_001d0700(cpu);
    }
L_001c37f8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c37fc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c3800:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001c3804:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_001c3808:;
    {
        cpu->r[14] = 0x001c380cu; fn_001d0148(cpu);
    }
L_001c380c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c3810:;
    {
        cpu->r[14] = 0x001c3814u; fn_001d06cc(cpu);
    }
L_001c3814:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001c3818:;
    {
        wr32(cpu->r[4] + + 0xa8u, cpu->r[0]);
    }
L_001c381c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c37ac;
        }
    }
L_001c3820:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c3824:;
    {
        cpu->r[14] = 0x001c3828u; fn_0018ba20(cpu);
    }
L_001c3828:;
    {
        goto L_001c37ac;
    }
}

/* _ZN16GLXPlayerMessageD1Ev @ 001c382c (arm) */
void fn_001c382c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c382c:;
    {
        cpu->r[3] = rd32(0x001c3834u + + 0x44u);
    }
L_001c3830:;
    {
        cpu->r[2] = rd32(0x001c3838u + + 0x44u);
    }
L_001c3834:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c383cu, cpu->r[3], 0, 0);
    }
L_001c3838:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c383c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c3840:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c3844:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c3848:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001c384c:;
    {
        cpu->r[14] = 0x001c3850u; fn_001c2350(cpu);
    }
L_001c3850:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x68u);
    }
L_001c3854:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c3858:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3868;
        }
    }
L_001c385c:;
    {
        cpu->r[14] = 0x001c3860u; fn_0018ba20(cpu);
    }
L_001c3860:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c3864:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_001c3868:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c386c:;
    {
        cpu->r[14] = 0x001c3870u; fn_001b7820(cpu);
    }
L_001c3870:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c3874:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c3878u)) return;
    }
}

/* _ZN16GLXPlayerMessageD0Ev @ 001c3880 (arm) */
void fn_001c3880(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3880:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c3884:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c3888:;
    {
        cpu->r[14] = 0x001c388cu; fn_001c382c(cpu);
    }
L_001c388c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c3890:;
    {
        cpu->r[14] = 0x001c3894u; fn_0018ba20(cpu);
    }
L_001c3894:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c3898:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c389cu)) return;
    }
}

/* _ZN16GLXPlayerMessageD2Ev @ 001c389c (arm) */
void fn_001c389c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c389c:;
    {
        cpu->r[3] = rd32(0x001c38a4u + + 0x44u);
    }
L_001c38a0:;
    {
        cpu->r[2] = rd32(0x001c38a8u + + 0x44u);
    }
L_001c38a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c38acu, cpu->r[3], 0, 0);
    }
L_001c38a8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c38ac:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c38b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c38b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c38b8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001c38bc:;
    {
        cpu->r[14] = 0x001c38c0u; fn_001c2350(cpu);
    }
L_001c38c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x68u);
    }
L_001c38c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c38c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c38d8;
        }
    }
L_001c38cc:;
    {
        cpu->r[14] = 0x001c38d0u; fn_0018ba20(cpu);
    }
L_001c38d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c38d4:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_001c38d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c38dc:;
    {
        cpu->r[14] = 0x001c38e0u; fn_001b7820(cpu);
    }
L_001c38e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c38e4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c38e8u)) return;
    }
}

/* _ZN16GLXPlayerMessageC1Ev @ 001c38f0 (arm) */
void fn_001c38f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c38f0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c38f4:;
    {
        cpu->r[5] = rd32(0x001c38fcu + + 0x8cu);
    }
L_001c38f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c38fc:;
    {
        cpu->r[14] = 0x001c3900u; fn_001b7954(cpu);
    }
L_001c3900:;
    {
        cpu->r[3] = rd32(0x001c3908u + + 0x84u);
    }
L_001c3904:;
    {
        cpu->r[5] = add_flags(cpu, 0x001c390cu, cpu->r[5], 0, 0);
    }
L_001c3908:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c390c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001c3910:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001c3914:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001c3918:;
    {
        cpu->r[14] = 0x001c391cu; fn_001b6ba4(cpu);
    }
L_001c391c:;
    {
        cpu->r[0] = 0x00000428u;
    }
L_001c3920:;
    {
        cpu->r[14] = 0x001c3924u; fn_0018ba6c(cpu);
    }
L_001c3924:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c3928:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001c392c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001c3930:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c3934:;
    {
        cpu->r[14] = 0x001c3938u; fn_001b3dec(cpu);
    }
L_001c3938:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c393c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001c3940:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c3944:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001c3948:;
    {
        wr32(cpu->r[4] + + 0xa8u, cpu->r[3]);
    }
L_001c394c:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001c3950:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[2]);
    }
L_001c3954:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001c3958:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_001c395c:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_001c3960:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001c3964:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001c3968:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001c396c:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001c3970:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001c3974:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_001c3978:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001c397c:;
    {
        cpu->r[14] = 0x001c3980u; fn_001c2154(cpu);
    }
L_001c3980:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c3984:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c3988u)) return;
    }
}

/* _ZN16GLXPlayerMessageC2Ev @ 001c3990 (arm) */
void fn_001c3990(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3990:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c3994:;
    {
        cpu->r[5] = rd32(0x001c399cu + + 0x8cu);
    }
L_001c3998:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c399c:;
    {
        cpu->r[14] = 0x001c39a0u; fn_001b7954(cpu);
    }
L_001c39a0:;
    {
        cpu->r[3] = rd32(0x001c39a8u + + 0x84u);
    }
L_001c39a4:;
    {
        cpu->r[5] = add_flags(cpu, 0x001c39acu, cpu->r[5], 0, 0);
    }
L_001c39a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c39ac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001c39b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001c39b4:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001c39b8:;
    {
        cpu->r[14] = 0x001c39bcu; fn_001b6ba4(cpu);
    }
L_001c39bc:;
    {
        cpu->r[0] = 0x00000428u;
    }
L_001c39c0:;
    {
        cpu->r[14] = 0x001c39c4u; fn_0018ba6c(cpu);
    }
L_001c39c4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c39c8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001c39cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001c39d0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c39d4:;
    {
        cpu->r[14] = 0x001c39d8u; fn_001b3dec(cpu);
    }
L_001c39d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c39dc:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001c39e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c39e4:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001c39e8:;
    {
        wr32(cpu->r[4] + + 0xa8u, cpu->r[3]);
    }
L_001c39ec:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001c39f0:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[2]);
    }
L_001c39f4:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001c39f8:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_001c39fc:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_001c3a00:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001c3a04:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001c3a08:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001c3a0c:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001c3a10:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001c3a14:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_001c3a18:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001c3a1c:;
    {
        cpu->r[14] = 0x001c3a20u; fn_001c2154(cpu);
    }
L_001c3a20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c3a24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c3a28u)) return;
    }
}

/* _ZN15GLXPlayerMPBase17mpPrepareGameDataEv @ 001c3a30 (arm) */
void fn_001c3a30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3a30:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c3a34:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GLXPlayerMPBase19mpSendKickOutPlayerEPc @ 001c3a38 (arm) */
void fn_001c3a38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3a38:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GLXPlayerMPBase19mpSendKickOutPlayerEPt @ 001c3a3c (arm) */
void fn_001c3a3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3a3c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GLXPlayerMPBase15mpSendLeaveGameEv @ 001c3a40 (arm) */
void fn_001c3a40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3a40:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GLXPlayerMPBase15mpSendStartGameEv @ 001c3a44 (arm) */
void fn_001c3a44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3a44:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GLXPlayerMPBase16mpSendFinishGameEv @ 001c3a48 (arm) */
void fn_001c3a48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3a48:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GLXPlayerMPBase21mpSendUPnPPortMappingEv @ 001c3a4c (arm) */
void fn_001c3a4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3a4c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GLXPlayerMPBase21mpProcessPushMessagesEv @ 001c3a50 (arm) */
void fn_001c3a50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3a50:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerMPLobby13mpIsInSessionEv @ 001c3a54 (arm) */
void fn_001c3a54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3a54:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x64u);
    }
L_001c3a58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_001c3a5c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c3a60:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001c3a64:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerMPLobby10mpIsInRoomEv @ 001c3a68 (arm) */
void fn_001c3a68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3a68:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x64u);
    }
L_001c3a6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_001c3a70:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c3a74:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001c3a78:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerMPLobby10mpIsInGameEv @ 001c3a7c (arm) */
void fn_001c3a7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3a7c:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x64u);
    }
L_001c3a80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 1);
    }
L_001c3a84:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c3a88:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001c3a8c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerMPLobby10mpIsMasterEv @ 001c3a90 (arm) */
void fn_001c3a90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3a90:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x89u);
    }
L_001c3a94:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GLXPlayerMPLobby36mpSendGetLobbyForFriendWithGameParamEihiPci @ 001c3a98 (arm) */
void fn_001c3a98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3a98:;
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
L_001c3a9c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c3aa0:;
    {
        cpu->r[0] = rd32(0x001c3aa8u + + 0x9cu);
    }
L_001c3aa4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001c3aa8:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001c3aac:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001c3ab0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c3ab8u, cpu->r[0], 0, 0);
    }
L_001c3ab4:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001c3ab8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x28u);
    }
L_001c3abc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001c3ac0:;
    {
        cpu->r[14] = 0x001c3ac4u; fn_001d0ac4(cpu);
    }
L_001c3ac4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c3ac8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c3acc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c3b1c;
        }
    }
L_001c3ad0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c3ad4:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001c3ad8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001c3adc:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[12]);
    }
L_001c3ae0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001c3ae4:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[7]);
    }
L_001c3ae8:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001c3aec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001c3af0:;
    {
        cpu->r[14] = 0x001c3af4u; fn_001c6e7c(cpu);
    }
L_001c3af4:;
    {
        cpu->r[0] = rd32(0x001c3afcu + + 0x4cu);
    }
L_001c3af8:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_001c3afc:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c3b00:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c3b08u, cpu->r[0], 0, 0);
    }
L_001c3b04:;
    {
        cpu->r[14] = 0x001c3b08u; fn_001d0ac4(cpu);
    }
L_001c3b08:;
    {
        cpu->r[0] = rd32(0x001c3b10u + + 0x3cu);
    }
L_001c3b0c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c3b14u, cpu->r[0], 0, 0);
    }
L_001c3b10:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001c3b14:;
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
        cpu->r[14] = v6;
        cpu->r[13] += 28u;
    }
L_001c3b18:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c3b1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c3b20:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c3b24:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c3b28:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c3b2c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c3b30:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c3b34:;
    {
        cpu->r[14] = 0x001c3b3cu;
    }
L_001c3b38:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c3b3cu)) return;
    }
L_001c3b3c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001c3b40:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c3b44u)) return;
    }
}

/* _ZN16GLXPlayerMPLobby23mpSendGetLobbyForFriendEihiPci @ 001c3b50 (arm) */
void fn_001c3b50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3b50:;
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
L_001c3b54:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c3b58:;
    {
        cpu->r[0] = rd32(0x001c3b60u + + 0x9cu);
    }
L_001c3b5c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001c3b60:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001c3b64:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001c3b68:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c3b70u, cpu->r[0], 0, 0);
    }
L_001c3b6c:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001c3b70:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x28u);
    }
L_001c3b74:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001c3b78:;
    {
        cpu->r[14] = 0x001c3b7cu; fn_001d0ac4(cpu);
    }
L_001c3b7c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c3b80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c3b84:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c3bd4;
        }
    }
L_001c3b88:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c3b8c:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001c3b90:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001c3b94:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[12]);
    }
L_001c3b98:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001c3b9c:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[7]);
    }
L_001c3ba0:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001c3ba4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001c3ba8:;
    {
        cpu->r[14] = 0x001c3bacu; fn_001c72e8(cpu);
    }
L_001c3bac:;
    {
        cpu->r[0] = rd32(0x001c3bb4u + + 0x4cu);
    }
L_001c3bb0:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_001c3bb4:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c3bb8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c3bc0u, cpu->r[0], 0, 0);
    }
L_001c3bbc:;
    {
        cpu->r[14] = 0x001c3bc0u; fn_001d0ac4(cpu);
    }
L_001c3bc0:;
    {
        cpu->r[0] = rd32(0x001c3bc8u + + 0x3cu);
    }
L_001c3bc4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c3bccu, cpu->r[0], 0, 0);
    }
L_001c3bc8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001c3bcc:;
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
        cpu->r[14] = v6;
        cpu->r[13] += 28u;
    }
L_001c3bd0:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c3bd4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c3bd8:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c3bdc:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c3be0:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c3be4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c3be8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c3bec:;
    {
        cpu->r[14] = 0x001c3bf4u;
    }
L_001c3bf0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c3bf4u)) return;
    }
L_001c3bf4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001c3bf8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c3bfcu)) return;
    }
}

/* _ZN16GLXPlayerMPLobby36mpSendGetLobbyForFriendWithGameParamEihP19GLXPlayerUserFriend @ 001c3c08 (arm) */
void fn_001c3c08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3c08:;
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
L_001c3c0c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000b4u, 1, 0);
    }
L_001c3c10:;
    {
        cpu->r[12] = rd32(0x001c3c18u + + 0x230u);
    }
L_001c3c14:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001c3c18:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001c3c1c:;
    {
        cpu->r[0] = rd32(0x001c3c24u + + 0x228u);
    }
L_001c3c20:;
    {
        cpu->r[12] = add_flags(cpu, 0x001c3c28u, cpu->r[12], 0, 0);
    }
L_001c3c24:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_001c3c28:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001c3c2c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_001c3c30:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_001c3c34:;
    {
        cpu->r[0] = rd32(0x001c3c3cu + + 0x214u);
    }
L_001c3c38:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c3c3c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c3c44u, cpu->r[0], 0, 0);
    }
L_001c3c40:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_001c3c44:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[3]);
    }
L_001c3c48:;
    {
        cpu->r[14] = 0x001c3c4cu; fn_001d0ac4(cpu);
    }
L_001c3c4c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001c3c50:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x64u);
    }
L_001c3c54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c3c58:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c3df0;
        }
    }
L_001c3c5c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001c3c60:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001c3c64:;
    {
        wr32(cpu->r[0] + + 0x54u, cpu->r[3]);
    }
L_001c3c68:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001c3c6c:;
    {
        cpu->r[14] = 0x001c3c70u; fn_001b9648(cpu);
    }
L_001c3c70:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000001eu, 1, 1);
    }
L_001c3c74:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x0000001eu;
        }
    }
L_001c3c78:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001c3c7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c3c80:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c3e18;
        }
    }
L_001c3c84:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001c3c88:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 0);
    }
L_001c3c8c:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_001c3c90:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001c3c94:;
    {
        cpu->r[9] = cpu->r[4];
    }
L_001c3c98:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c3c9c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c3ca0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001c3ca4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c3ca8:;
    {
        cpu->r[14] = 0x001c3cacu; imp_memset(cpu); /* memset */
    }
L_001c3cac:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001c3cb0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c3cb4:;
    {
        cpu->r[14] = 0x001c3cb8u; fn_001b9680(cpu);
    }
L_001c3cb8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c3cbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3d68;
        }
    }
L_001c3cc0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c3cc4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001c3cc8:;
    {
        cpu->r[14] = 0x001c3cccu; fn_001b9680(cpu);
    }
L_001c3ccc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001c3cd0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c3cd4:;
    {
        cpu->r[14] = 0x001c3cd8u; fn_001d06dc(cpu);
    }
L_001c3cd8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c3cdc:;
    {
        cpu->r[14] = 0x001c3ce0u; fn_001d0434(cpu);
    }
L_001c3ce0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_001c3ce4:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001c3ce8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_001c3cec:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001c3cf0:;
    {
        cpu->r[14] = 0x001c3cf4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c3cf4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001c3cf8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001c3cfc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001c3d00:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001c3d04:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[9]);
    }
L_001c3d08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3d2c;
        }
    }
L_001c3d0c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001c3d10:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c3d2c;
        }
    }
L_001c3d14:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c3d18:;
    {
        cpu->r[2] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_001c3d1c:;
    {
        wr8(cpu->r[8] + cpu->r[3], cpu->r[2]);
    }
L_001c3d20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001c3d24:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001c3d28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c3d18;
        }
    }
L_001c3d2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001c3d30:;
    {
        cpu->r[2] = (cpu->r[11] >> 8) & 0xffu;
    }
L_001c3d34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001c3d38:;
    {
        wr8(cpu->r[8] + cpu->r[4], cpu->r[2]);
    }
L_001c3d3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_001c3d40:;
    {
        wr8(cpu->r[8] + cpu->r[3], cpu->r[11]);
    }
L_001c3d44:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c3d48:;
    {
        cpu->r[14] = 0x001c3d4cu; fn_001d06dc(cpu);
    }
L_001c3d4c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001c3d50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3d5c;
        }
    }
L_001c3d54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c3d58:;
    {
        cpu->r[14] = 0x001c3d5cu; fn_0018ba20(cpu);
    }
L_001c3d5c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_001c3d60:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_001c3d64:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[11], 0, 0);
    }
L_001c3d68:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001c3d6c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_001c3d70:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001c3c98;
        }
    }
L_001c3d74:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001c3d78:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001c3d7c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001c3d80:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x7cu);
    }
L_001c3d84:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[12]);
    }
L_001c3d88:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001c3d8c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001c3d90:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001c3d94:;
    {
        cpu->r[14] = 0x001c3d98u; fn_001c6e7c(cpu);
    }
L_001c3d98:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001c3d9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3da8;
        }
    }
L_001c3da0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c3da4:;
    {
        cpu->r[14] = 0x001c3da8u; fn_0018ba20(cpu);
    }
L_001c3da8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001c3dac:;
    {
        cpu->r[1] = 0x00000013u;
    }
L_001c3db0:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[1]);
    }
L_001c3db4:;
    {
        cpu->r[0] = rd32(0x001c3dbcu + + 0x98u);
    }
L_001c3db8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c3dc0u, cpu->r[0], 0, 0);
    }
L_001c3dbc:;
    {
        cpu->r[14] = 0x001c3dc0u; fn_001d0ac4(cpu);
    }
L_001c3dc0:;
    {
        cpu->r[0] = rd32(0x001c3dc8u + + 0x90u);
    }
L_001c3dc4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c3dccu, cpu->r[0], 0, 0);
    }
L_001c3dc8:;
    {
        cpu->r[14] = 0x001c3dccu; fn_001d0ac4(cpu);
    }
L_001c3dcc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001c3dd0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001c3dd4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xacu);
    }
L_001c3dd8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_001c3ddc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c3de0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c3de4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c3e44;
        }
    }
L_001c3de8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000b4u, 0, 0);
    }
L_001c3dec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c3df0u)) return;
    }
L_001c3df0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_001c3df4:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c3df8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001c3dfc:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c3e00:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c3e04:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c3e08:;
    {
        wr32(cpu->r[12] + + 0x54u, cpu->r[2]);
    }
L_001c3e0c:;
    {
        cpu->r[14] = 0x001c3e14u;
    }
L_001c3e10:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c3e14u)) return;
    }
L_001c3e14:;
    {
        goto L_001c3dcc;
    }
L_001c3e18:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001c3e1c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001c3e20:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001c3e24:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x7cu);
    }
L_001c3e28:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[12]);
    }
L_001c3e2c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001c3e30:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001c3e34:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001c3e38:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c3e3c:;
    {
        cpu->r[14] = 0x001c3e40u; fn_001c6e7c(cpu);
    }
L_001c3e40:;
    {
        goto L_001c3da8;
    }
L_001c3e44:;
    {
        cpu->r[14] = 0x001c3e48u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c3e48:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[8] + (-cpu->r[0]);
        wr64(cpu->r[8], ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
        cpu->r[8] = wb_tmp;
        }
    }
L_001c3e4c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c3e50:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[4], 1, 14u, &shc); cpu->r[13] = v;
        }
    }
L_001c3e54:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[8], 4, 10u, &shc); cpu->r[13] = v;
        }
    }
L_001c3e58:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[4] + (-cpu->r[8]);
        wr64(cpu->r[4], ((uint64_t)cpu->r[10] << 32) | cpu->r[9]);
        cpu->r[4] = wb_tmp;
        }
    }
}

/* _ZN16GLXPlayerMPLobby23mpSendGetLobbyForFriendEihP19GLXPlayerUserFriend @ 001c3e5c (arm) */
void fn_001c3e5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c3e5c:;
    {
        cpu->r[12] = rd32(0x001c3e64u + + 0x22cu);
    }
L_001c3e60:;
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
L_001c3e64:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001c3e68:;
    {
        cpu->r[0] = rd32(0x001c3e70u + + 0x224u);
    }
L_001c3e6c:;
    {
        cpu->r[12] = add_flags(cpu, 0x001c3e74u, cpu->r[12], 0, 0);
    }
L_001c3e70:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001c3e74:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000acu, 1, 0);
    }
L_001c3e78:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_001c3e7c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_001c3e80:;
    {
        cpu->r[0] = rd32(0x001c3e88u + + 0x210u);
    }
L_001c3e84:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c3e88:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c3e90u, cpu->r[0], 0, 0);
    }
L_001c3e8c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001c3e90:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_001c3e94:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[3]);
    }
L_001c3e98:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001c3e9c:;
    {
        cpu->r[14] = 0x001c3ea0u; fn_001d0ac4(cpu);
    }
L_001c3ea0:;
    {
        cpu->r[3] = rd8(cpu->r[9] + + 0x64u);
    }
L_001c3ea4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c3ea8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c4040;
        }
    }
L_001c3eac:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x78u);
    }
L_001c3eb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_001c3eb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c401c;
        }
    }
L_001c3eb8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001c3ebc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001c3ec0:;
    {
        wr32(cpu->r[9] + + 0x54u, cpu->r[3]);
    }
L_001c3ec4:;
    {
        cpu->r[14] = 0x001c3ec8u; fn_001b9648(cpu);
    }
L_001c3ec8:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000001eu, 1, 1);
    }
L_001c3ecc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x0000001eu;
        }
    }
L_001c3ed0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001c3ed4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c3ed8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c4064;
        }
    }
L_001c3edc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001c3ee0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 0);
    }
L_001c3ee4:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_001c3ee8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001c3eec:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c3ef0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c3ef4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001c3ef8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c3efc:;
    {
        cpu->r[14] = 0x001c3f00u; imp_memset(cpu); /* memset */
    }
L_001c3f00:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001c3f04:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c3f08:;
    {
        cpu->r[14] = 0x001c3f0cu; fn_001b9680(cpu);
    }
L_001c3f0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c3f10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3fc0;
        }
    }
L_001c3f14:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c3f18:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001c3f1c:;
    {
        cpu->r[14] = 0x001c3f20u; fn_001b9680(cpu);
    }
L_001c3f20:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001c3f24:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c3f28:;
    {
        cpu->r[14] = 0x001c3f2cu; fn_001d06dc(cpu);
    }
L_001c3f2c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c3f30:;
    {
        cpu->r[14] = 0x001c3f34u; fn_001d0434(cpu);
    }
L_001c3f34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_001c3f38:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001c3f3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_001c3f40:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001c3f44:;
    {
        cpu->r[14] = 0x001c3f48u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c3f48:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001c3f4c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001c3f50:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c3f54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001c3f58:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001c3f5c:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[1]);
    }
L_001c3f60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3f84;
        }
    }
L_001c3f64:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001c3f68:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c3f84;
        }
    }
L_001c3f6c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c3f70:;
    {
        cpu->r[2] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_001c3f74:;
    {
        wr8(cpu->r[8] + cpu->r[3], cpu->r[2]);
    }
L_001c3f78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001c3f7c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001c3f80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c3f70;
        }
    }
L_001c3f84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001c3f88:;
    {
        cpu->r[2] = (cpu->r[11] >> 8) & 0xffu;
    }
L_001c3f8c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001c3f90:;
    {
        wr8(cpu->r[8] + cpu->r[4], cpu->r[2]);
    }
L_001c3f94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_001c3f98:;
    {
        wr8(cpu->r[8] + cpu->r[3], cpu->r[11]);
    }
L_001c3f9c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c3fa0:;
    {
        cpu->r[14] = 0x001c3fa4u; fn_001d06dc(cpu);
    }
L_001c3fa4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001c3fa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3fb4;
        }
    }
L_001c3fac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c3fb0:;
    {
        cpu->r[14] = 0x001c3fb4u; fn_0018ba20(cpu);
    }
L_001c3fb4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_001c3fb8:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_001c3fbc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[11], 0, 0);
    }
L_001c3fc0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001c3fc4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_001c3fc8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001c3eec;
        }
    }
L_001c3fcc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001c3fd0:;
    {
        cpu->r[0] = rd32(cpu->r[9] + + 0x7cu);
    }
L_001c3fd4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001c3fd8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001c3fdc:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[12]);
    }
L_001c3fe0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001c3fe4:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001c3fe8:;
    {
        cpu->r[14] = 0x001c3fecu; fn_001c72e8(cpu);
    }
L_001c3fec:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001c3ff0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c3ffc;
        }
    }
L_001c3ff4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c3ff8:;
    {
        cpu->r[14] = 0x001c3ffcu; fn_0018ba20(cpu);
    }
L_001c3ffc:;
    {
        cpu->r[0] = rd32(0x001c4004u + + 0x98u);
    }
L_001c4000:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_001c4004:;
    {
        wr32(cpu->r[9] + + 0x78u, cpu->r[1]);
    }
L_001c4008:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4010u, cpu->r[0], 0, 0);
    }
L_001c400c:;
    {
        cpu->r[14] = 0x001c4010u; fn_001d0ac4(cpu);
    }
L_001c4010:;
    {
        cpu->r[0] = rd32(0x001c4018u + + 0x88u);
    }
L_001c4014:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c401cu, cpu->r[0], 0, 0);
    }
L_001c4018:;
    {
        cpu->r[14] = 0x001c401cu; fn_001d0ac4(cpu);
    }
L_001c401c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001c4020:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001c4024:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xa4u);
    }
L_001c4028:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_001c402c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c4030:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c4034:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c408c;
        }
    }
L_001c4038:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000acu, 0, 0);
    }
L_001c403c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4040u)) return;
    }
L_001c4040:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x4u);
    }
L_001c4044:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c4048:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c404c:;
    {
        wr32(cpu->r[9] + + 0x54u, cpu->r[2]);
    }
L_001c4050:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c4054:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c4058:;
    {
        cpu->r[14] = 0x001c4060u;
    }
L_001c405c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4060u)) return;
    }
L_001c4060:;
    {
        goto L_001c401c;
    }
L_001c4064:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001c4068:;
    {
        cpu->r[0] = rd32(cpu->r[9] + + 0x7cu);
    }
L_001c406c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001c4070:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[12]);
    }
L_001c4074:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001c4078:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001c407c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001c4080:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001c4084:;
    {
        cpu->r[14] = 0x001c4088u; fn_001c72e8(cpu);
    }
L_001c4088:;
    {
        goto L_001c3ffc;
    }
L_001c408c:;
    {
        cpu->r[14] = 0x001c4090u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c4090:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[4], 3, 11u, &shc); cpu->r[6] = v;
        }
    }
L_001c4094:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c4098:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[6] + (-cpu->r[8]);
        wr64(cpu->r[6], ((uint64_t)cpu->r[14] << 32) | cpu->r[13]);
        cpu->r[6] = wb_tmp;
        }
    }
L_001c409c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[8], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[13] = v;
        }
    }
L_001c40a0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] & shifter(cpu->r[8], 3, 25u, &shc); cpu->r[9] = v;
        }
    }
}

/* _ZN16GLXPlayerMPLobby34mpSendGetLobbyForNameWithGameParamEPc @ 001c40a4 (arm) */
void fn_001c40a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c40a4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c40a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c40ac:;
    {
        cpu->r[0] = rd32(0x001c40b4u + + 0x70u);
    }
L_001c40b0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c40b4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c40bcu, cpu->r[0], 0, 0);
    }
L_001c40b8:;
    {
        cpu->r[14] = 0x001c40bcu; fn_001d0ac4(cpu);
    }
L_001c40bc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c40c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c40c4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c4100;
        }
    }
L_001c40c8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001c40cc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c40d0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c40d4:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001c40d8:;
    {
        cpu->r[14] = 0x001c40dcu; fn_001c6f64(cpu);
    }
L_001c40dc:;
    {
        cpu->r[0] = rd32(0x001c40e4u + + 0x44u);
    }
L_001c40e0:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_001c40e4:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c40e8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c40f0u, cpu->r[0], 0, 0);
    }
L_001c40ec:;
    {
        cpu->r[14] = 0x001c40f0u; fn_001d0ac4(cpu);
    }
L_001c40f0:;
    {
        cpu->r[0] = rd32(0x001c40f8u + + 0x34u);
    }
L_001c40f4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c40fcu, cpu->r[0], 0, 0);
    }
L_001c40f8:;
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
L_001c40fc:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c4100:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c4104:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c4108:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c410c:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c4110:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c4114:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c4118:;
    {
        cpu->r[14] = 0x001c4120u;
    }
L_001c411c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4120u)) return;
    }
L_001c4120:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4124u)) return;
    }
}

/* _ZN16GLXPlayerMPLobby31mpSendGetLobbyListWithGameParamEiihP23CLobbyParameterAndQueryh @ 001c4130 (arm) */
void fn_001c4130(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c4130:;
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
L_001c4134:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c4138:;
    {
        cpu->r[0] = rd32(0x001c4140u + + 0xa4u);
    }
L_001c413c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001c4140:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001c4144:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001c4148:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4150u, cpu->r[0], 0, 0);
    }
L_001c414c:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001c4150:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x30u);
    }
L_001c4154:;
    {
        cpu->r[6] = rd8(cpu->r[13] + + 0x34u);
    }
L_001c4158:;
    {
        cpu->r[14] = 0x001c415cu; fn_001d0ac4(cpu);
    }
L_001c415c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c4160:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c4164:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c41bc;
        }
    }
L_001c4168:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c416c:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001c4170:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001c4174:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001c4178:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[12]);
    }
L_001c417c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001c4180:;
    {
        uint32_t v = cpu->r[8] & ~ shifter(cpu->r[8], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001c4184:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_001c4188:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[7]);
    }
L_001c418c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001c4190:;
    {
        cpu->r[14] = 0x001c4194u; fn_001c701c(cpu);
    }
L_001c4194:;
    {
        cpu->r[0] = rd32(0x001c419cu + + 0x4cu);
    }
L_001c4198:;
    {
        cpu->r[1] = 0x00000012u;
    }
L_001c419c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c41a0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c41a8u, cpu->r[0], 0, 0);
    }
L_001c41a4:;
    {
        cpu->r[14] = 0x001c41a8u; fn_001d0ac4(cpu);
    }
L_001c41a8:;
    {
        cpu->r[0] = rd32(0x001c41b0u + + 0x3cu);
    }
L_001c41ac:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c41b4u, cpu->r[0], 0, 0);
    }
L_001c41b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001c41b4:;
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
        cpu->r[14] = v6;
        cpu->r[13] += 28u;
    }
L_001c41b8:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c41bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c41c0:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c41c4:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c41c8:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c41cc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c41d0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c41d4:;
    {
        cpu->r[14] = 0x001c41dcu;
    }
L_001c41d8:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c41dcu)) return;
    }
L_001c41dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001c41e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c41e4u)) return;
    }
}

/* _ZN16GLXPlayerMPLobby13mpSendKickOutEPc @ 001c41f0 (arm) */
void fn_001c41f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c41f0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c41f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c41f8:;
    {
        cpu->r[0] = rd32(0x001c4200u + + 0x70u);
    }
L_001c41fc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c4200:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4208u, cpu->r[0], 0, 0);
    }
L_001c4204:;
    {
        cpu->r[14] = 0x001c4208u; fn_001d0ac4(cpu);
    }
L_001c4208:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c420c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c4210:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c424c;
        }
    }
L_001c4214:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001c4218:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c421c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c4220:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001c4224:;
    {
        cpu->r[14] = 0x001c4228u; fn_001c7144(cpu);
    }
L_001c4228:;
    {
        cpu->r[0] = rd32(0x001c4230u + + 0x44u);
    }
L_001c422c:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001c4230:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c4234:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c423cu, cpu->r[0], 0, 0);
    }
L_001c4238:;
    {
        cpu->r[14] = 0x001c423cu; fn_001d0ac4(cpu);
    }
L_001c423c:;
    {
        cpu->r[0] = rd32(0x001c4244u + + 0x34u);
    }
L_001c4240:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4248u, cpu->r[0], 0, 0);
    }
L_001c4244:;
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
L_001c4248:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c424c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c4250:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c4254:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c4258:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c425c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c4260:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c4264:;
    {
        cpu->r[14] = 0x001c426cu;
    }
L_001c4268:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c426cu)) return;
    }
L_001c426c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4270u)) return;
    }
}

/* _ZN16GLXPlayerMPLobby28mpSendCancelAutoMatchRequestEv @ 001c427c (arm) */
void fn_001c427c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c427c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c4280:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c4284:;
    {
        cpu->r[0] = rd32(0x001c428cu + + 0x78u);
    }
L_001c4288:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4290u, cpu->r[0], 0, 0);
    }
L_001c428c:;
    {
        cpu->r[14] = 0x001c4290u; fn_001d0ac4(cpu);
    }
L_001c4290:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c4294:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c4298:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c42e0;
        }
    }
L_001c429c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c42a0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001c42a4:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001c42a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c42ac:;
    {
        wr8(cpu->r[4] + + 0x80u, cpu->r[3]);
    }
L_001c42b0:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001c42b4:;
    {
        wr8(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_001c42b8:;
    {
        cpu->r[14] = 0x001c42bcu; fn_001c71c0(cpu);
    }
L_001c42bc:;
    {
        cpu->r[0] = rd32(0x001c42c4u + + 0x44u);
    }
L_001c42c0:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001c42c4:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c42c8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c42d0u, cpu->r[0], 0, 0);
    }
L_001c42cc:;
    {
        cpu->r[14] = 0x001c42d0u; fn_001d0ac4(cpu);
    }
L_001c42d0:;
    {
        cpu->r[0] = rd32(0x001c42d8u + + 0x34u);
    }
L_001c42d4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c42dcu, cpu->r[0], 0, 0);
    }
L_001c42d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001c42dc:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c42e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c42e4:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c42e8:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c42ec:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c42f0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c42f4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c42f8:;
    {
        cpu->r[14] = 0x001c4300u;
    }
L_001c42fc:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4300u)) return;
    }
L_001c4300:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4304u)) return;
    }
}

/* _ZN16GLXPlayerMPLobby22mpSendAutoMatchRequestEPcS0_ss @ 001c4310 (arm) */
void fn_001c4310(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c4310:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c4314:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c4318:;
    {
        cpu->r[0] = rd32(0x001c4320u + + 0x90u);
    }
L_001c431c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001c4320:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001c4324:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001c4328:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4330u, cpu->r[0], 0, 0);
    }
L_001c432c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001c4330:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x20u);
    }
L_001c4334:;
    {
        cpu->r[14] = 0x001c4338u; fn_001d0ac4(cpu);
    }
L_001c4338:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c433c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c4340:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c4388;
        }
    }
L_001c4344:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c4348:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001c434c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c4350:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001c4354:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001c4358:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[12]);
    }
L_001c435c:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001c4360:;
    {
        wr8(cpu->r[4] + + 0x80u, cpu->r[12]);
    }
L_001c4364:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001c4368:;
    {
        cpu->r[14] = 0x001c436cu; fn_001c7218(cpu);
    }
L_001c436c:;
    {
        cpu->r[0] = rd32(0x001c4374u + + 0x40u);
    }
L_001c4370:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c4374:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[3]);
    }
L_001c4378:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4380u, cpu->r[0], 0, 0);
    }
L_001c437c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c4380:;
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
L_001c4384:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c4388:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c438c:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c4390:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c4394:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c4398:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c439c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c43a0:;
    {
        cpu->r[14] = 0x001c43a8u;
    }
L_001c43a4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c43a8u)) return;
    }
L_001c43a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c43ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c43b0u)) return;
    }
}

/* _ZN16GLXPlayerMPLobby21mpSendGetLobbyForNameEPc @ 001c43b8 (arm) */
void fn_001c43b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c43b8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c43bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c43c0:;
    {
        cpu->r[0] = rd32(0x001c43c8u + + 0x70u);
    }
L_001c43c4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c43c8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c43d0u, cpu->r[0], 0, 0);
    }
L_001c43cc:;
    {
        cpu->r[14] = 0x001c43d0u; fn_001d0ac4(cpu);
    }
L_001c43d0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c43d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c43d8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c4414;
        }
    }
L_001c43dc:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001c43e0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c43e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c43e8:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001c43ec:;
    {
        cpu->r[14] = 0x001c43f0u; fn_001c73d0(cpu);
    }
L_001c43f0:;
    {
        cpu->r[0] = rd32(0x001c43f8u + + 0x44u);
    }
L_001c43f4:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_001c43f8:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c43fc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4404u, cpu->r[0], 0, 0);
    }
L_001c4400:;
    {
        cpu->r[14] = 0x001c4404u; fn_001d0ac4(cpu);
    }
L_001c4404:;
    {
        cpu->r[0] = rd32(0x001c440cu + + 0x34u);
    }
L_001c4408:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4410u, cpu->r[0], 0, 0);
    }
L_001c440c:;
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
L_001c4410:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c4414:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c4418:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c441c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c4420:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c4424:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c4428:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c442c:;
    {
        cpu->r[14] = 0x001c4434u;
    }
L_001c4430:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4434u)) return;
    }
L_001c4434:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4438u)) return;
    }
}

/* _ZN16GLXPlayerMPLobby18mpSendGetLobbyInfoEi @ 001c4444 (arm) */
void fn_001c4444(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c4444:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c4448:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c444c:;
    {
        cpu->r[0] = rd32(0x001c4454u + + 0x70u);
    }
L_001c4450:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c4454:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c445cu, cpu->r[0], 0, 0);
    }
L_001c4458:;
    {
        cpu->r[14] = 0x001c445cu; fn_001d0ac4(cpu);
    }
L_001c445c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c4460:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c4464:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c44a0;
        }
    }
L_001c4468:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001c446c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c4470:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c4474:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001c4478:;
    {
        cpu->r[14] = 0x001c447cu; fn_001c7488(cpu);
    }
L_001c447c:;
    {
        cpu->r[0] = rd32(0x001c4484u + + 0x44u);
    }
L_001c4480:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_001c4484:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c4488:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4490u, cpu->r[0], 0, 0);
    }
L_001c448c:;
    {
        cpu->r[14] = 0x001c4490u; fn_001d0ac4(cpu);
    }
L_001c4490:;
    {
        cpu->r[0] = rd32(0x001c4498u + + 0x34u);
    }
L_001c4494:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c449cu, cpu->r[0], 0, 0);
    }
L_001c4498:;
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
L_001c449c:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c44a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c44a4:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c44a8:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c44ac:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c44b0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c44b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c44b8:;
    {
        cpu->r[14] = 0x001c44c0u;
    }
L_001c44bc:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c44c0u)) return;
    }
L_001c44c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c44c4u)) return;
    }
}

/* _ZN16GLXPlayerMPLobby22mpSendSetUserParameterEPci @ 001c44d0 (arm) */
void fn_001c44d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c44d0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c44d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c44d8:;
    {
        cpu->r[0] = rd32(0x001c44e0u + + 0x78u);
    }
L_001c44dc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c44e0:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001c44e4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c44ecu, cpu->r[0], 0, 0);
    }
L_001c44e8:;
    {
        cpu->r[14] = 0x001c44ecu; fn_001d0ac4(cpu);
    }
L_001c44ec:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c44f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c44f4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c4534;
        }
    }
L_001c44f8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001c44fc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c4500:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[5]);
    }
L_001c4504:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c4508:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001c450c:;
    {
        cpu->r[14] = 0x001c4510u; fn_001c74f8(cpu);
    }
L_001c4510:;
    {
        cpu->r[0] = rd32(0x001c4518u + + 0x44u);
    }
L_001c4514:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001c4518:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c451c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4524u, cpu->r[0], 0, 0);
    }
L_001c4520:;
    {
        cpu->r[14] = 0x001c4524u; fn_001d0ac4(cpu);
    }
L_001c4524:;
    {
        cpu->r[0] = rd32(0x001c452cu + + 0x34u);
    }
L_001c4528:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4530u, cpu->r[0], 0, 0);
    }
L_001c452c:;
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
L_001c4530:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c4534:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c4538:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c453c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c4540:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c4544:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c4548:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c454c:;
    {
        cpu->r[14] = 0x001c4554u;
    }
L_001c4550:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4554u)) return;
    }
L_001c4554:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4558u)) return;
    }
}

/* _ZN16GLXPlayerMPLobby22mpSendSetGameParameterEPciP23CLobbyParameterAndQuery @ 001c4564 (arm) */
void fn_001c4564(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c4564:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c4568:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c456c:;
    {
        cpu->r[0] = rd32(0x001c4574u + + 0x80u);
    }
L_001c4570:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001c4574:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001c4578:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001c457c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4584u, cpu->r[0], 0, 0);
    }
L_001c4580:;
    {
        cpu->r[14] = 0x001c4584u; fn_001d0ac4(cpu);
    }
L_001c4584:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c4588:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c458c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c45d0;
        }
    }
L_001c4590:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001c4594:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c4598:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[6]);
    }
L_001c459c:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001c45a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c45a4:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[12]);
    }
L_001c45a8:;
    {
        cpu->r[14] = 0x001c45acu; fn_001c7570(cpu);
    }
L_001c45ac:;
    {
        cpu->r[0] = rd32(0x001c45b4u + + 0x44u);
    }
L_001c45b0:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_001c45b4:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c45b8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c45c0u, cpu->r[0], 0, 0);
    }
L_001c45bc:;
    {
        cpu->r[14] = 0x001c45c0u; fn_001d0ac4(cpu);
    }
L_001c45c0:;
    {
        cpu->r[0] = rd32(0x001c45c8u + + 0x34u);
    }
L_001c45c4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c45ccu, cpu->r[0], 0, 0);
    }
L_001c45c8:;
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
L_001c45cc:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c45d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c45d4:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c45d8:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c45dc:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c45e0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c45e4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c45e8:;
    {
        cpu->r[14] = 0x001c45f0u;
    }
L_001c45ec:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c45f0u)) return;
    }
L_001c45f0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c45f4u)) return;
    }
}

/* _ZN16GLXPlayerMPLobby17mpSendRejoinLobbyEi @ 001c4600 (arm) */
void fn_001c4600(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c4600:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c4604:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c4608:;
    {
        cpu->r[0] = rd32(0x001c4610u + + 0x64u);
    }
L_001c460c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c4610:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4618u, cpu->r[0], 0, 0);
    }
L_001c4614:;
    {
        cpu->r[14] = 0x001c4618u; fn_001d0ac4(cpu);
    }
L_001c4618:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c461c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c4620:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c4650;
        }
    }
L_001c4624:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c4628:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c462c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001c4630:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001c4634:;
    {
        cpu->r[14] = 0x001c4638u; fn_001c7640(cpu);
    }
L_001c4638:;
    {
        cpu->r[0] = rd32(0x001c4640u + + 0x38u);
    }
L_001c463c:;
    {
        cpu->r[1] = 0x0000000eu;
    }
L_001c4640:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c4644:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c464cu, cpu->r[0], 0, 0);
    }
L_001c4648:;
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
L_001c464c:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c4650:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c4654:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c4658:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c465c:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c4660:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c4664:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c4668:;
    {
        cpu->r[14] = 0x001c4670u;
    }
L_001c466c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4670u)) return;
    }
L_001c4670:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4674u)) return;
    }
}

/* _ZN16GLXPlayerMPLobby21mpSendSetPlayerStatusEh @ 001c467c (arm) */
void fn_001c467c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c467c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c4680:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c4684:;
    {
        cpu->r[0] = rd32(0x001c468cu + + 0x70u);
    }
L_001c4688:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c468c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4694u, cpu->r[0], 0, 0);
    }
L_001c4690:;
    {
        cpu->r[14] = 0x001c4694u; fn_001d0ac4(cpu);
    }
L_001c4694:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c4698:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c469c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c46d8;
        }
    }
L_001c46a0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001c46a4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c46a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c46ac:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001c46b0:;
    {
        cpu->r[14] = 0x001c46b4u; fn_001c76b0(cpu);
    }
L_001c46b4:;
    {
        cpu->r[0] = rd32(0x001c46bcu + + 0x44u);
    }
L_001c46b8:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001c46bc:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c46c0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c46c8u, cpu->r[0], 0, 0);
    }
L_001c46c4:;
    {
        cpu->r[14] = 0x001c46c8u; fn_001d0ac4(cpu);
    }
L_001c46c8:;
    {
        cpu->r[0] = rd32(0x001c46d0u + + 0x34u);
    }
L_001c46cc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c46d4u, cpu->r[0], 0, 0);
    }
L_001c46d0:;
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
L_001c46d4:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c46d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c46dc:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c46e0:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c46e4:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c46e8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c46ec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c46f0:;
    {
        cpu->r[14] = 0x001c46f8u;
    }
L_001c46f4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c46f8u)) return;
    }
L_001c46f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c46fcu)) return;
    }
}

/* _ZN16GLXPlayerMPLobby20mpSendLunchLobbyGameEv @ 001c4708 (arm) */
void fn_001c4708(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c4708:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c470c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c4710:;
    {
        cpu->r[0] = rd32(0x001c4718u + + 0x68u);
    }
L_001c4714:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c471cu, cpu->r[0], 0, 0);
    }
L_001c4718:;
    {
        cpu->r[14] = 0x001c471cu; fn_001d0ac4(cpu);
    }
L_001c471c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c4720:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c4724:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c475c;
        }
    }
L_001c4728:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001c472c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c4730:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001c4734:;
    {
        cpu->r[14] = 0x001c4738u; fn_001c7720(cpu);
    }
L_001c4738:;
    {
        cpu->r[0] = rd32(0x001c4740u + + 0x44u);
    }
L_001c473c:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001c4740:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c4744:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c474cu, cpu->r[0], 0, 0);
    }
L_001c4748:;
    {
        cpu->r[14] = 0x001c474cu; fn_001d0ac4(cpu);
    }
L_001c474c:;
    {
        cpu->r[0] = rd32(0x001c4754u + + 0x34u);
    }
L_001c4750:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4758u, cpu->r[0], 0, 0);
    }
L_001c4754:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001c4758:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c475c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c4760:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c4764:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c4768:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c476c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c4770:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c4774:;
    {
        cpu->r[14] = 0x001c477cu;
    }
L_001c4778:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c477cu)) return;
    }
L_001c477c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4780u)) return;
    }
}

/* _ZN16GLXPlayerMPLobby16mpSendLeaveLobbyEv @ 001c478c (arm) */
void fn_001c478c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c478c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c4790:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c4794:;
    {
        cpu->r[0] = rd32(0x001c479cu + + 0x68u);
    }
L_001c4798:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c47a0u, cpu->r[0], 0, 0);
    }
L_001c479c:;
    {
        cpu->r[14] = 0x001c47a0u; fn_001d0ac4(cpu);
    }
L_001c47a0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c47a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c47a8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c47e0;
        }
    }
L_001c47ac:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001c47b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c47b4:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001c47b8:;
    {
        cpu->r[14] = 0x001c47bcu; fn_001c7778(cpu);
    }
L_001c47bc:;
    {
        cpu->r[0] = rd32(0x001c47c4u + + 0x44u);
    }
L_001c47c0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001c47c4:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c47c8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c47d0u, cpu->r[0], 0, 0);
    }
L_001c47cc:;
    {
        cpu->r[14] = 0x001c47d0u; fn_001d0ac4(cpu);
    }
L_001c47d0:;
    {
        cpu->r[0] = rd32(0x001c47d8u + + 0x34u);
    }
L_001c47d4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c47dcu, cpu->r[0], 0, 0);
    }
L_001c47d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001c47dc:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c47e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c47e4:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c47e8:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c47ec:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c47f0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c47f4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c47f8:;
    {
        cpu->r[14] = 0x001c4800u;
    }
L_001c47fc:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4800u)) return;
    }
L_001c4800:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4804u)) return;
    }
}

/* _ZN16GLXPlayerMPLobby18mpSendGetLobbyListEiihP23CLobbyParameterAndQueryh @ 001c4810 (arm) */
void fn_001c4810(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c4810:;
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
L_001c4814:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c4818:;
    {
        cpu->r[0] = rd32(0x001c4820u + + 0xa4u);
    }
L_001c481c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001c4820:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001c4824:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001c4828:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4830u, cpu->r[0], 0, 0);
    }
L_001c482c:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001c4830:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x30u);
    }
L_001c4834:;
    {
        cpu->r[6] = rd8(cpu->r[13] + + 0x34u);
    }
L_001c4838:;
    {
        cpu->r[14] = 0x001c483cu; fn_001d0ac4(cpu);
    }
L_001c483c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c4840:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c4844:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c489c;
        }
    }
L_001c4848:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c484c:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001c4850:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001c4854:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001c4858:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[12]);
    }
L_001c485c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001c4860:;
    {
        uint32_t v = cpu->r[8] & ~ shifter(cpu->r[8], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001c4864:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_001c4868:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[7]);
    }
L_001c486c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001c4870:;
    {
        cpu->r[14] = 0x001c4874u; fn_001c77d0(cpu);
    }
L_001c4874:;
    {
        cpu->r[0] = rd32(0x001c487cu + + 0x4cu);
    }
L_001c4878:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_001c487c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c4880:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4888u, cpu->r[0], 0, 0);
    }
L_001c4884:;
    {
        cpu->r[14] = 0x001c4888u; fn_001d0ac4(cpu);
    }
L_001c4888:;
    {
        cpu->r[0] = rd32(0x001c4890u + + 0x3cu);
    }
L_001c488c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4894u, cpu->r[0], 0, 0);
    }
L_001c4890:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001c4894:;
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
        cpu->r[14] = v6;
        cpu->r[13] += 28u;
    }
L_001c4898:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c489c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c48a0:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c48a4:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c48a8:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c48ac:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c48b0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c48b4:;
    {
        cpu->r[14] = 0x001c48bcu;
    }
L_001c48b8:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c48bcu)) return;
    }
L_001c48bc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001c48c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c48c4u)) return;
    }
}

/* _ZN16GLXPlayerMPLobby15mpSendJoinLobbyEihPc @ 001c48d0 (arm) */
void fn_001c48d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c48d0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c48d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c48d8:;
    {
        cpu->r[0] = rd32(0x001c48e0u + + 0xa0u);
    }
L_001c48dc:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001c48e0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c48e4:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001c48e8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c48f0u, cpu->r[0], 0, 0);
    }
L_001c48ec:;
    {
        cpu->r[14] = 0x001c48f0u; fn_001d0ac4(cpu);
    }
L_001c48f0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c48f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c48f8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c494c;
        }
    }
L_001c48fc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001c4900:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001c4904:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c4908:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c490c:;
    {
        cpu->r[14] = 0x001c4910u; fn_001c78f8(cpu);
    }
L_001c4910:;
    {
        cpu->r[0] = rd32(0x001c4918u + + 0x6cu);
    }
L_001c4914:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001c4918:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_001c491c:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001c4920:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4928u, cpu->r[0], 0, 0);
    }
L_001c4924:;
    {
        cpu->r[14] = 0x001c4928u; fn_001d0ac4(cpu);
    }
L_001c4928:;
    {
        cpu->r[0] = rd32(0x001c4930u + + 0x58u);
    }
L_001c492c:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_001c4930:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c4934:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c493cu, cpu->r[0], 0, 0);
    }
L_001c4938:;
    {
        cpu->r[14] = 0x001c493cu; fn_001d0ac4(cpu);
    }
L_001c493c:;
    {
        cpu->r[0] = rd32(0x001c4944u + + 0x48u);
    }
L_001c4940:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4948u, cpu->r[0], 0, 0);
    }
L_001c4944:;
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
L_001c4948:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c494c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c4950:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c4954:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c4958:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c495c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c4960:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c4964:;
    {
        cpu->r[14] = 0x001c496cu;
    }
L_001c4968:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c496cu)) return;
    }
L_001c496c:;
    {
        cpu->r[0] = rd32(0x001c4974u + + 0x1cu);
    }
L_001c4970:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c4974:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c497cu, cpu->r[0], 0, 0);
    }
L_001c4978:;
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
L_001c497c:;
    {
        return fn_001d0ac4(cpu);
    }
}

/* _ZN16GLXPlayerMPLobby17mpSendCreateLobbyEPchhiS0_S0_P23CLobbyParameterAndQuery @ 001c4994 (arm) */
void fn_001c4994(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c4994:;
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
L_001c4998:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c499c:;
    {
        cpu->r[0] = rd32(0x001c49a4u + + 0xacu);
    }
L_001c49a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001c49a4:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001c49a8:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001c49ac:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c49b4u, cpu->r[0], 0, 0);
    }
L_001c49b0:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001c49b4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x40u);
    }
L_001c49b8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_001c49bc:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[5] = v0;
        cpu->r[9] = v1;
        cpu->r[11] = v2;
    }
L_001c49c0:;
    {
        cpu->r[14] = 0x001c49c4u; fn_001d0ac4(cpu);
    }
L_001c49c4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c49c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c49cc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c4a28;
        }
    }
L_001c49d0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c49d4:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001c49d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001c49dc:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001c49e0:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[12]);
    }
L_001c49e4:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001c49e8:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_001c49ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001c49f0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001c49f4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_001c49f8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_001c49fc:;
    {
        cpu->r[14] = 0x001c4a00u; fn_001c79b4(cpu);
    }
L_001c4a00:;
    {
        cpu->r[0] = rd32(0x001c4a08u + + 0x4cu);
    }
L_001c4a04:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001c4a08:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c4a0c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4a14u, cpu->r[0], 0, 0);
    }
L_001c4a10:;
    {
        cpu->r[14] = 0x001c4a14u; fn_001d0ac4(cpu);
    }
L_001c4a14:;
    {
        cpu->r[0] = rd32(0x001c4a1cu + + 0x3cu);
    }
L_001c4a18:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4a20u, cpu->r[0], 0, 0);
    }
L_001c4a1c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001c4a20:;
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
L_001c4a24:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c4a28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c4a2c:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c4a30:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c4a34:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c4a38:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c4a3c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c4a40:;
    {
        cpu->r[14] = 0x001c4a48u;
    }
L_001c4a44:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4a48u)) return;
    }
L_001c4a48:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001c4a4c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4a50u)) return;
    }
}

/* _ZN16GLXPlayerMPLobby16mpSendLobbyLoginElPcih @ 001c4a5c (arm) */
void fn_001c4a5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c4a5c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c4a60:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001c4a64:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c4a68:;
    {
        cpu->r[0] = rd32(0x001c4a70u + + 0x5cu);
    }
L_001c4a6c:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001c4a70:;
    {
        cpu->r[5] = rd8(cpu->r[13] + + 0x20u);
    }
L_001c4a74:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001c4a78:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001c4a7c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4a84u, cpu->r[0], 0, 0);
    }
L_001c4a80:;
    {
        cpu->r[14] = 0x001c4a84u; fn_001d0ac4(cpu);
    }
L_001c4a84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c4a88:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001c4a8c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c4a90:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[12]);
    }
L_001c4a94:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001c4a98:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[6]);
    }
L_001c4a9c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001c4aa0:;
    {
        cpu->r[14] = 0x001c4aa4u; fn_001c7b20(cpu);
    }
L_001c4aa4:;
    {
        cpu->r[0] = rd32(0x001c4aacu + + 0x24u);
    }
L_001c4aa8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001c4aac:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c4ab0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4ab8u, cpu->r[0], 0, 0);
    }
L_001c4ab4:;
    {
        cpu->r[14] = 0x001c4ab8u; fn_001d0ac4(cpu);
    }
L_001c4ab8:;
    {
        cpu->r[0] = rd32(0x001c4ac0u + + 0x14u);
    }
L_001c4abc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4ac4u, cpu->r[0], 0, 0);
    }
L_001c4ac0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c4ac4:;
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
L_001c4ac8:;
    {
        return fn_001d0ac4(cpu);
    }
}

/* _ZN16GLXPlayerMPLobby16mpSendDisconnectEv @ 001c4ad8 (arm) */
void fn_001c4ad8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c4ad8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c4adc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c4ae0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x7cu);
    }
L_001c4ae4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c4ae8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4aecu)) return;
        }
    }
L_001c4aec:;
    {
        cpu->r[14] = 0x001c4af0u; fn_001ca108(cpu);
    }
L_001c4af0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c4af4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c4b2c;
        }
    }
L_001c4af8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c4afc:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001c4b00:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c4b04:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c4b08:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c4b0c:;
    {
        cpu->r[14] = 0x001c4b14u;
    }
L_001c4b10:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4b14u)) return;
    }
L_001c4b14:;
    {
        cpu->r[0] = rd32(0x001c4b1cu + + 0x3cu);
    }
L_001c4b18:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_001c4b1c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c4b20:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4b28u, cpu->r[0], 0, 0);
    }
L_001c4b24:;
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
L_001c4b28:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c4b2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c4b30:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c4b34:;
    {
        cpu->r[14] = 0x001c4b3cu;
    }
L_001c4b38:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4b3cu)) return;
    }
L_001c4b3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c4b40:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_001c4b44:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c4b48:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c4b4c:;
    {
        cpu->r[14] = 0x001c4b54u;
    }
L_001c4b50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4b54u)) return;
    }
L_001c4b54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4b58u)) return;
    }
}

/* _ZN16GLXPlayerMPLobby6UpdateEv @ 001c4b5c (arm) */
void fn_001c4b5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c4b5c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c4b60:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c4b64:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x7cu);
    }
L_001c4b68:;
    {
        cpu->r[14] = 0x001c4b6cu; fn_001ca108(cpu);
    }
L_001c4b6c:;
    {
        cpu->r[5] = rd32(0x001c4b74u + + 0x19cu);
    }
L_001c4b70:;
    {
        cpu->r[5] = add_flags(cpu, 0x001c4b78u, cpu->r[5], 0, 0);
    }
L_001c4b74:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c4b78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c4c38;
        }
    }
L_001c4b7c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c4b80:;
    {
        cpu->r[3] = 0x00001010u;
    }
L_001c4b84:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001c4b88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c4b8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c4b9c;
        }
    }
L_001c4b90:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x70u);
    }
L_001c4b94:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001c4b98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c4c94;
        }
    }
L_001c4b9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001c4ba0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c4ba4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c4c18;
        }
    }
L_001c4ba8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8au);
    }
L_001c4bac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c4bb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c4be8;
        }
    }
L_001c4bb4:;
    {
        cpu->r[5] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c4bb8:;
    {
        cpu->r[3] = 0x0000d4c0u;
    }
L_001c4bbc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001c4bc0:;
    {
        cpu->r[2] = 0x0000ea60u;
    }
L_001c4bc4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000005u, 1, 1);
    }
L_001c4bc8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = cpu->r[3];
        }
    }
L_001c4bcc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = cpu->r[2];
        }
    }
L_001c4bd0:;
    {
        cpu->r[14] = 0x001c4bd4u; fn_001d05bc(cpu);
    }
L_001c4bd4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001c4bd8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001c4bdc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001c4be0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001c4be4:;
    {
        if (cond_test(cpu, 12)) {
        wr8(cpu->r[4] + + 0x8au, cpu->r[3]);
        }
    }
L_001c4be8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c4bec:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c4bf0:;
    {
        cpu->r[14] = 0x001c4bf8u;
    }
L_001c4bf4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4bf8u)) return;
    }
L_001c4bf8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c4bfc:;
    {
        cpu->r[1] = (~0x00000001u);
    }
L_001c4c00:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[1]);
    }
L_001c4c04:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c4c08:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c4c0c:;
    {
        cpu->r[14] = 0x001c4c14u;
    }
L_001c4c10:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4c14u)) return;
    }
L_001c4c14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4c18u)) return;
    }
L_001c4c18:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8au);
    }
L_001c4c1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c4c20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c4bb4;
        }
    }
L_001c4c24:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001c4c28:;
    {
        wr8(cpu->r[4] + + 0x8au, cpu->r[3]);
    }
L_001c4c2c:;
    {
        cpu->r[14] = 0x001c4c30u; fn_001d05bc(cpu);
    }
L_001c4c30:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[0]);
    }
L_001c4c34:;
    {
        goto L_001c4bb4;
    }
L_001c4c38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c4c3c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c4c40:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c4c44:;
    {
        cpu->r[14] = 0x001c4c4cu;
    }
L_001c4c48:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4c4cu)) return;
    }
L_001c4c4c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c4c50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c4c54:;
    {
        cpu->r[14] = 0x001c4c5cu;
    }
L_001c4c58:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4c5cu)) return;
    }
L_001c4c5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c4c60:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4c64u)) return;
        }
    }
L_001c4c64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c4c68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c4c6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c4c88;
        }
    }
L_001c4c70:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c4c74:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c4c78:;
    {
        cpu->r[14] = 0x001c4c80u;
    }
L_001c4c7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4c80u)) return;
    }
L_001c4c80:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c4c84:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_001c4c88:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c4c8c:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_001c4c90:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4c94u)) return;
    }
L_001c4c94:;
    {
        cpu->r[14] = 0x001c4c98u; fn_001ca1d0(cpu);
    }
L_001c4c98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c4c9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c4ce4;
        }
    }
L_001c4ca0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c4ca4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_001c4ca8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001c4cac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4cb0u)) return;
        }
    }
L_001c4cb0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001c4cb4:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001c4cb8:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[1]);
    }
L_001c4cbc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c4cc0:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_001c4cc4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c4ba8;
        }
    }
L_001c4cc8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8au);
    }
L_001c4ccc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c4cd0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c4bb4;
        }
    }
L_001c4cd4:;
    {
        wr8(cpu->r[4] + + 0x8au, cpu->r[6]);
    }
L_001c4cd8:;
    {
        cpu->r[14] = 0x001c4cdcu; fn_001d05bc(cpu);
    }
L_001c4cdc:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[0]);
    }
L_001c4ce0:;
    {
        goto L_001c4bb4;
    }
L_001c4ce4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001c4ce8:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[2]);
    }
L_001c4cec:;
    {
        cpu->r[2] = rd32(0x001c4cf4u + + 0x20u);
    }
L_001c4cf0:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_001c4cf4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c4cf8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001c4cfc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001c4d00:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[7]);
    }
L_001c4d04:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001c4d08:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[7]);
    }
L_001c4d0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4d10u)) return;
    }
}

/* _ZN16GLXPlayerMPLobby12mpDisconnectEv @ 001c4d18 (arm) */
void fn_001c4d18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c4d18:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c4d1c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c4d20:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x7cu);
    }
L_001c4d24:;
    {
        cpu->r[14] = 0x001c4d28u; fn_001caf38(cpu);
    }
L_001c4d28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c4d2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c4d30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c4d4c;
        }
    }
L_001c4d34:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c4d38:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c4d3c:;
    {
        cpu->r[14] = 0x001c4d44u;
    }
L_001c4d40:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4d44u)) return;
    }
L_001c4d44:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c4d48:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_001c4d4c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c4d50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001c4d54:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c4d64;
        }
    }
L_001c4d58:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x8au);
    }
L_001c4d5c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c4d60:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[4] + + 0x65u, cpu->r[3]);
        }
    }
L_001c4d64:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c4d68:;
    {
        wr8(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_001c4d6c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4d70u)) return;
    }
}

/* _ZN16GLXPlayerMPLobby25mpProcessIncomingMessagesEv @ 001c4d70 (arm) */
void fn_001c4d70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c4d70:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c4d74:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x64u);
    }
L_001c4d78:;
    {
        cpu->r[5] = rd32(0x001c4d80u + + 0xe98u);
    }
L_001c4d7c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001c4d80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c4d84:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c4d88:;
    {
        cpu->r[5] = add_flags(cpu, 0x001c4d90u, cpu->r[5], 0, 0);
    }
L_001c4d8c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001c4d98;
        }
    }
L_001c4d90:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x7cu);
    }
L_001c4d94:;
    {
        cpu->r[14] = 0x001c4d98u; fn_001c6d94(cpu);
    }
L_001c4d98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c4d9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c4da0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c4dbc;
        }
    }
L_001c4da4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c4da8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c4dac:;
    {
        cpu->r[14] = 0x001c4db4u;
    }
L_001c4db0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4db4u)) return;
    }
L_001c4db4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c4db8:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_001c4dbc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c4dc0:;
    {
        cpu->r[14] = 0x001c4dc4u; fn_001ca0b0(cpu);
    }
L_001c4dc4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c4dc8:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[0]);
    }
L_001c4dcc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = cpu->r[0];
        }
    }
L_001c4dd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c5098;
        }
    }
L_001c4dd4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001c4dd8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000007u, 0, 0);
    }
L_001c4ddc:;
    {
        cpu->r[14] = 0x001c4de4u;
    }
L_001c4de0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4de4u)) return;
    }
L_001c4de4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c4de8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000006u, 0, 0);
    }
L_001c4dec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c4df0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c4df4:;
    {
        cpu->r[14] = 0x001c4dfcu;
    }
L_001c4df8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4dfcu)) return;
    }
L_001c4dfc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c4e00:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c4e04:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c4e08:;
    {
        cpu->r[14] = 0x001c4e10u;
    }
L_001c4e0c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4e10u)) return;
    }
L_001c4e10:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001c4e14:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001c4e18:;
    {
        cpu->r[0] = rd32(0x001c4e20u + + 0xdfcu);
    }
L_001c4e1c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 0);
    }
L_001c4e20:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4e28u, cpu->r[0], 0, 0);
    }
L_001c4e24:;
    {
        cpu->r[14] = 0x001c4e28u; fn_001d0ac4(cpu);
    }
L_001c4e28:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000062u, 1, 1);
    }
L_001c4e2c:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[6]) {
        case 0: goto L_001c5d84;
        case 1: goto L_001c506c;
        case 2: goto L_001c59d8;
        case 3: goto L_001c506c;
        case 4: goto L_001c5938;
        case 5: goto L_001c506c;
        case 6: goto L_001c506c;
        case 7: goto L_001c506c;
        case 8: goto L_001c58f0;
        case 9: goto L_001c506c;
        case 10: goto L_001c5cd4;
        case 11: goto L_001c506c;
        case 12: goto L_001c57cc;
        case 13: goto L_001c506c;
        case 14: goto L_001c5710;
        case 15: goto L_001c56f0;
        case 16: goto L_001c5bf8;
        case 17: goto L_001c506c;
        case 18: goto L_001c5b74;
        case 19: goto L_001c58d0;
        case 20: goto L_001c506c;
        case 21: goto L_001c5850;
        case 22: goto L_001c506c;
        case 23: goto L_001c5a78;
        case 24: goto L_001c506c;
        case 25: goto L_001c506c;
        case 26: goto L_001c506c;
        case 27: goto L_001c506c;
        case 28: goto L_001c506c;
        case 29: goto L_001c506c;
        case 30: goto L_001c5a58;
        case 31: goto L_001c506c;
        case 32: goto L_001c5af4;
        case 33: goto L_001c56d0;
        case 34: goto L_001c506c;
        case 35: goto L_001c5650;
        case 36: goto L_001c5630;
        case 37: goto L_001c506c;
        case 38: goto L_001c55d4;
        case 39: goto L_001c55b4;
        case 40: goto L_001c506c;
        case 41: goto L_001c4fc0;
        case 42: goto L_001c556c;
        case 43: goto L_001c506c;
        case 44: goto L_001c54c4;
        case 45: goto L_001c54a4;
        case 46: goto L_001c506c;
        case 47: goto L_001c506c;
        case 48: goto L_001c53f4;
        case 49: goto L_001c506c;
        case 50: goto L_001c506c;
        case 51: goto L_001c5374;
        case 52: goto L_001c506c;
        case 53: goto L_001c5434;
        case 54: goto L_001c506c;
        case 55: goto L_001c5310;
        case 56: goto L_001c506c;
        case 57: goto L_001c506c;
        case 58: goto L_001c506c;
        case 59: goto L_001c506c;
        case 60: goto L_001c506c;
        case 61: goto L_001c506c;
        case 62: goto L_001c506c;
        case 63: goto L_001c506c;
        case 64: goto L_001c506c;
        case 65: goto L_001c506c;
        case 66: goto L_001c506c;
        case 67: goto L_001c506c;
        case 68: goto L_001c506c;
        case 69: goto L_001c506c;
        case 70: goto L_001c506c;
        case 71: goto L_001c506c;
        case 72: goto L_001c506c;
        case 73: goto L_001c5294;
        case 74: goto L_001c5260;
        case 75: goto L_001c506c;
        case 76: goto L_001c506c;
        case 77: goto L_001c506c;
        case 78: goto L_001c5240;
        case 79: goto L_001c506c;
        case 80: goto L_001c506c;
        case 81: goto L_001c506c;
        case 82: goto L_001c506c;
        case 83: goto L_001c506c;
        case 84: goto L_001c506c;
        case 85: goto L_001c506c;
        case 86: goto L_001c506c;
        case 87: goto L_001c506c;
        case 88: goto L_001c506c;
        case 89: goto L_001c506c;
        case 90: goto L_001c506c;
        case 91: goto L_001c506c;
        case 92: goto L_001c506c;
        case 93: goto L_001c506c;
        case 94: goto L_001c506c;
        case 95: goto L_001c51d0;
        case 96: goto L_001c5124;
        case 97: goto L_001c506c;
        case 98: goto L_001c50a4;
        default: guest_unimplemented(cpu, 0x001c4e2cu); return; }
        }
    }
L_001c4e30:;
    {
        goto L_001c506c;
    }
L_001c4fc0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x78u);
    }
L_001c4fc4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 1);
    }
L_001c4fc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c5e00;
        }
    }
L_001c4fcc:;
    {
        cpu->r[0] = rd32(0x001c4fd4u + + 0xc4cu);
    }
L_001c4fd0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4fd8u, cpu->r[0], 0, 0);
    }
L_001c4fd4:;
    {
        cpu->r[14] = 0x001c4fd8u; fn_001d0ac4(cpu);
    }
L_001c4fd8:;
    {
        cpu->r[0] = rd32(0x001c4fe0u + + 0xc44u);
    }
L_001c4fdc:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_001c4fe0:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001c4fe4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c4fecu, cpu->r[0], 0, 0);
    }
L_001c4fe8:;
    {
        cpu->r[14] = 0x001c4fecu; fn_001d0ac4(cpu);
    }
L_001c4fec:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c4ff0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c4ff4:;
    {
        cpu->r[14] = 0x001c4ffcu;
    }
L_001c4ff8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c4ffcu)) return;
    }
L_001c4ffc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c5000:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c506c;
        }
    }
L_001c5004:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5008:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c500c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c5010:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001c5014:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c5018:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c501c:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c5020:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5024:;
    {
        cpu->r[14] = 0x001c502cu;
    }
L_001c5028:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c502cu)) return;
    }
L_001c502c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c5030:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c5ee4;
        }
    }
L_001c5034:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001c5038:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c503c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5db4;
        }
    }
L_001c5040:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001c5044:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_001c5048:;
    {
        wr8(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_001c504c:;
    {
        cpu->r[14] = 0x001c5050u; fn_001d05bc(cpu);
    }
L_001c5050:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5054:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5058:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001c505c:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[0]);
    }
L_001c5060:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001c5064:;
    {
        cpu->r[14] = 0x001c506cu;
    }
L_001c5068:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c506cu)) return;
    }
L_001c506c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5070:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5074:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c5090;
        }
    }
L_001c5078:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c507c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5080:;
    {
        cpu->r[14] = 0x001c5088u;
    }
L_001c5084:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5088u)) return;
    }
L_001c5088:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c508c:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_001c5090:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c5094:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[5]);
    }
L_001c5098:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c509c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c50a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c50a4u)) return;
    }
L_001c50a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001c50a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000013u, 1, 1);
    }
L_001c50ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c506c;
        }
    }
L_001c50b0:;
    {
        cpu->r[0] = rd32(0x001c50b8u + + 0xb70u);
    }
L_001c50b4:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001c50b8:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c50bc:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001c50c0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c50c8u, cpu->r[0], 0, 0);
    }
L_001c50c4:;
    {
        cpu->r[14] = 0x001c50c8u; fn_001d0ac4(cpu);
    }
L_001c50c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c50cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c50d0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c50d4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c50d8:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001c50dc:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c50e0:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c50e4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c50e8:;
    {
        cpu->r[14] = 0x001c50f0u;
    }
L_001c50ec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c50f0u)) return;
    }
L_001c50f0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c50f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c5fd8;
        }
    }
L_001c50f8:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001c50fc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c5100:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5db4;
        }
    }
L_001c5104:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5108:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c510c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5110:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5114:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5118:;
    {
        cpu->r[14] = 0x001c5120u;
    }
L_001c511c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5120u)) return;
    }
L_001c5120:;
    {
        goto L_001c506c;
    }
L_001c5124:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001c5128:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000011u, 1, 1);
    }
L_001c512c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c506c;
        }
    }
L_001c5130:;
    {
        cpu->r[0] = rd32(0x001c5138u + + 0xaf4u);
    }
L_001c5134:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001c5138:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c513c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001c5140:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5148u, cpu->r[0], 0, 0);
    }
L_001c5144:;
    {
        cpu->r[14] = 0x001c5148u; fn_001d0ac4(cpu);
    }
L_001c5148:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c514c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c5150:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c5154:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5158:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001c515c:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c5160:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c5164:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5168:;
    {
        cpu->r[14] = 0x001c5170u;
    }
L_001c516c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5170u)) return;
    }
L_001c5170:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c5174:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c50f8;
        }
    }
L_001c5178:;
    {
        cpu->r[0] = rd32(0x001c5180u + + 0xab0u);
    }
L_001c517c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5184u, cpu->r[0], 0, 0);
    }
L_001c5180:;
    {
        cpu->r[14] = 0x001c5184u; fn_001d0ac4(cpu);
    }
L_001c5184:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5188:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c518c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c51a4;
        }
    }
L_001c5190:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5194:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5198:;
    {
        cpu->r[14] = 0x001c51a0u;
    }
L_001c519c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c51a0u)) return;
    }
L_001c51a0:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[5]);
    }
L_001c51a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c51a8:;
    {
        cpu->r[2] = 0x00000028u;
    }
L_001c51ac:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c51b0:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c51b4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c51b8:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c51bc:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[5]);
    }
L_001c51c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c51c4:;
    {
        cpu->r[14] = 0x001c51ccu;
    }
L_001c51c8:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c51ccu)) return;
    }
L_001c51cc:;
    {
        goto L_001c5098;
    }
L_001c51d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001c51d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000012u, 1, 1);
    }
L_001c51d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c506c;
        }
    }
L_001c51dc:;
    {
        cpu->r[0] = rd32(0x001c51e4u + + 0xa50u);
    }
L_001c51e0:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001c51e4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c51e8:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001c51ec:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c51f4u, cpu->r[0], 0, 0);
    }
L_001c51f0:;
    {
        cpu->r[14] = 0x001c51f4u; fn_001d0ac4(cpu);
    }
L_001c51f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c51f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c51fc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c5200:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5204:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001c5208:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c520c:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c5210:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5214:;
    {
        cpu->r[14] = 0x001c521cu;
    }
L_001c5218:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c521cu)) return;
    }
L_001c521c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c5220:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c50f8;
        }
    }
L_001c5224:;
    {
        cpu->r[0] = rd32(0x001c522cu + + 0xa0cu);
    }
L_001c5228:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5230u, cpu->r[0], 0, 0);
    }
L_001c522c:;
    {
        cpu->r[14] = 0x001c5230u; fn_001d0ac4(cpu);
    }
L_001c5230:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5234:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5238:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5190;
        }
    }
L_001c523c:;
    {
        goto L_001c51a4;
    }
L_001c5240:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5244:;
    {
        cpu->r[2] = 0x00000050u;
    }
L_001c5248:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c524c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5250:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5254:;
    {
        cpu->r[14] = 0x001c525cu;
    }
L_001c5258:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c525cu)) return;
    }
L_001c525c:;
    {
        goto L_001c506c;
    }
L_001c5260:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x80u);
    }
L_001c5264:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5268:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c506c;
        }
    }
L_001c526c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5270:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c5274:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5278:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c527c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5280:;
    {
        cpu->r[2] = 0x0000004cu;
    }
L_001c5284:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5288:;
    {
        cpu->r[14] = 0x001c5290u;
    }
L_001c528c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5290u)) return;
    }
L_001c5290:;
    {
        goto L_001c506c;
    }
L_001c5294:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001c5298:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_001c529c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c506c;
        }
    }
L_001c52a0:;
    {
        cpu->r[0] = rd32(0x001c52a8u + + 0x994u);
    }
L_001c52a4:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001c52a8:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c52ac:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001c52b0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c52b8u, cpu->r[0], 0, 0);
    }
L_001c52b4:;
    {
        cpu->r[14] = 0x001c52b8u; fn_001d0ac4(cpu);
    }
L_001c52b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c52bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c52c0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c52c4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c52c8:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001c52cc:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c52d0:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c52d4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c52d8:;
    {
        cpu->r[14] = 0x001c52e0u;
    }
L_001c52dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c52e0u)) return;
    }
L_001c52e0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c52e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6010;
        }
    }
L_001c52e8:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001c52ec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c52f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5db4;
        }
    }
L_001c52f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c52f8:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c52fc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5300:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5304:;
    {
        cpu->r[14] = 0x001c530cu;
    }
L_001c5308:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x74u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c530cu)) return;
    }
L_001c530c:;
    {
        goto L_001c506c;
    }
L_001c5310:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x80u);
    }
L_001c5314:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5318:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c506c;
        }
    }
L_001c531c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5320:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c5324:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c5328:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c532c:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c5330:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5334:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c5338:;
    {
        cpu->r[14] = 0x001c5340u;
    }
L_001c533c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5340u)) return;
    }
L_001c5340:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_001c5344:;
    {
        cpu->r[3] = 0x00004031u;
    }
L_001c5348:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c534c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
        }
    }
L_001c5350:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5db4;
        }
    }
L_001c5354:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5358:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001c535c:;
    {
        wr8(cpu->r[4] + + 0x64u, cpu->r[2]);
    }
L_001c5360:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5364:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5368:;
    {
        cpu->r[14] = 0x001c5370u;
    }
L_001c536c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x70u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5370u)) return;
    }
L_001c5370:;
    {
        goto L_001c506c;
    }
L_001c5374:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001c5378:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_001c537c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c506c;
        }
    }
L_001c5380:;
    {
        cpu->r[0] = rd32(0x001c5388u + + 0x8b8u);
    }
L_001c5384:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001c5388:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c538c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001c5390:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5398u, cpu->r[0], 0, 0);
    }
L_001c5394:;
    {
        cpu->r[14] = 0x001c5398u; fn_001d0ac4(cpu);
    }
L_001c5398:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c539c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c53a0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c53a4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c53a8:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001c53ac:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c53b0:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c53b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c53b8:;
    {
        cpu->r[14] = 0x001c53c0u;
    }
L_001c53bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c53c0u)) return;
    }
L_001c53c0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c53c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c5ff4;
        }
    }
L_001c53c8:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001c53cc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c53d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5db4;
        }
    }
L_001c53d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c53d8:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c53dc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c53e0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c53e4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c53e8:;
    {
        cpu->r[14] = 0x001c53f0u;
    }
L_001c53ec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c53f0u)) return;
    }
L_001c53f0:;
    {
        goto L_001c506c;
    }
L_001c53f4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c53f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c53fc:;
    {
        cpu->r[14] = 0x001c5404u;
    }
L_001c5400:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5404u)) return;
    }
L_001c5404:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c5408:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c506c;
        }
    }
L_001c540c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5410:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c5414:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5418:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c541c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5420:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001c5424:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5428:;
    {
        cpu->r[14] = 0x001c5430u;
    }
L_001c542c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5430u)) return;
    }
L_001c5430:;
    {
        goto L_001c506c;
    }
L_001c5434:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001c5438:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 1);
    }
L_001c543c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c506c;
        }
    }
L_001c5440:;
    {
        cpu->r[0] = rd32(0x001c5448u + + 0x7fcu);
    }
L_001c5444:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001c5448:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c544c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001c5450:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5458u, cpu->r[0], 0, 0);
    }
L_001c5454:;
    {
        cpu->r[14] = 0x001c5458u; fn_001d0ac4(cpu);
    }
L_001c5458:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c545c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c5460:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c5464:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5468:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001c546c:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c5470:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c5474:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5478:;
    {
        cpu->r[14] = 0x001c5480u;
    }
L_001c547c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5480u)) return;
    }
L_001c5480:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c5484:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c53c8;
        }
    }
L_001c5488:;
    {
        cpu->r[0] = rd32(0x001c5490u + + 0x7b8u);
    }
L_001c548c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5494u, cpu->r[0], 0, 0);
    }
L_001c5490:;
    {
        cpu->r[14] = 0x001c5494u; fn_001d0ac4(cpu);
    }
L_001c5494:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5498:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c549c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5190;
        }
    }
L_001c54a0:;
    {
        goto L_001c51a4;
    }
L_001c54a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c54a8:;
    {
        cpu->r[2] = 0x0000002fu;
    }
L_001c54ac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c54b0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c54b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c54b8:;
    {
        cpu->r[14] = 0x001c54c0u;
    }
L_001c54bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c54c0u)) return;
    }
L_001c54c0:;
    {
        goto L_001c506c;
    }
L_001c54c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001c54c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000eu, 1, 1);
    }
L_001c54cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c506c;
        }
    }
L_001c54d0:;
    {
        cpu->r[0] = rd32(0x001c54d8u + + 0x774u);
    }
L_001c54d4:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001c54d8:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c54dc:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001c54e0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c54e8u, cpu->r[0], 0, 0);
    }
L_001c54e4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c54e8:;
    {
        cpu->r[14] = 0x001c54ecu; fn_001d0ac4(cpu);
    }
L_001c54ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c54f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c54f4:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[5]);
    }
L_001c54f8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c54fc:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[5]);
        cpu->r[1] = wb_tmp;
    }
L_001c5500:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c5504:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5508:;
    {
        cpu->r[14] = 0x001c5510u;
    }
L_001c550c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5510u)) return;
    }
L_001c5510:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c5514:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c602c;
        }
    }
L_001c5518:;
    {
        cpu->r[6] = rd32(cpu->r[13]);
    }
L_001c551c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001c5520:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5db0;
        }
    }
L_001c5524:;
    {
        cpu->r[5] = rd8(cpu->r[4] + + 0x90u);
    }
L_001c5528:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[6]);
    }
L_001c552c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001c5530:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c6064;
        }
    }
L_001c5534:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c5538:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_001c553c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c609c;
        }
    }
L_001c5540:;
    {
        cpu->r[0] = rd32(0x001c5548u + + 0x708u);
    }
L_001c5544:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c554cu, cpu->r[0], 0, 0);
    }
L_001c5548:;
    {
        cpu->r[14] = 0x001c554cu; fn_001d0ac4(cpu);
    }
L_001c554c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5550:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5554:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001c5558:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c555c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5560:;
    {
        cpu->r[14] = 0x001c5568u;
    }
L_001c5564:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5568u)) return;
    }
L_001c5568:;
    {
        goto L_001c506c;
    }
L_001c556c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c5570:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c5574:;
    {
        cpu->r[14] = 0x001c557cu;
    }
L_001c5578:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c557cu)) return;
    }
L_001c557c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c5580:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c506c;
        }
    }
L_001c5584:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_001c5588:;
    {
        wr8(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_001c558c:;
    {
        cpu->r[14] = 0x001c5590u; fn_001d05bc(cpu);
    }
L_001c5590:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5594:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5598:;
    {
        cpu->r[2] = 0x0000002cu;
    }
L_001c559c:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_001c55a0:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[0]);
    }
L_001c55a4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001c55a8:;
    {
        cpu->r[14] = 0x001c55b0u;
    }
L_001c55ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c55b0u)) return;
    }
L_001c55b0:;
    {
        goto L_001c506c;
    }
L_001c55b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c55b8:;
    {
        cpu->r[2] = 0x00000029u;
    }
L_001c55bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c55c0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c55c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c55c8:;
    {
        cpu->r[14] = 0x001c55d0u;
    }
L_001c55cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c55d0u)) return;
    }
L_001c55d0:;
    {
        goto L_001c506c;
    }
L_001c55d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c55d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c55dc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c55e0:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001c55e4:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c55e8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c55ec:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c55f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c55f4:;
    {
        cpu->r[14] = 0x001c55fcu;
    }
L_001c55f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c55fcu)) return;
    }
L_001c55fc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c5600:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c5de4;
        }
    }
L_001c5604:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001c5608:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c560c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5db4;
        }
    }
L_001c5610:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5614:;
    {
        cpu->r[1] = 0x00000028u;
    }
L_001c5618:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c561c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5620:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5624:;
    {
        cpu->r[14] = 0x001c562cu;
    }
L_001c5628:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c562cu)) return;
    }
L_001c562c:;
    {
        goto L_001c506c;
    }
L_001c5630:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5634:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_001c5638:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c563c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5640:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5644:;
    {
        cpu->r[14] = 0x001c564cu;
    }
L_001c5648:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c564cu)) return;
    }
L_001c564c:;
    {
        goto L_001c506c;
    }
L_001c5650:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001c5654:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_001c5658:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c506c;
        }
    }
L_001c565c:;
    {
        cpu->r[0] = rd32(0x001c5664u + + 0x5f0u);
    }
L_001c5660:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001c5664:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c5668:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001c566c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5674u, cpu->r[0], 0, 0);
    }
L_001c5670:;
    {
        cpu->r[14] = 0x001c5674u; fn_001d0ac4(cpu);
    }
L_001c5674:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5678:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c567c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c5680:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5684:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001c5688:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c568c:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c5690:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5694:;
    {
        cpu->r[14] = 0x001c569cu;
    }
L_001c5698:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c569cu)) return;
    }
L_001c569c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c56a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c5f1c;
        }
    }
L_001c56a4:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001c56a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c56ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5db4;
        }
    }
L_001c56b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c56b4:;
    {
        cpu->r[1] = 0x00000025u;
    }
L_001c56b8:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c56bc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c56c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c56c4:;
    {
        cpu->r[14] = 0x001c56ccu;
    }
L_001c56c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c56ccu)) return;
    }
L_001c56cc:;
    {
        goto L_001c506c;
    }
L_001c56d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c56d4:;
    {
        cpu->r[2] = 0x00000023u;
    }
L_001c56d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c56dc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c56e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c56e4:;
    {
        cpu->r[14] = 0x001c56ecu;
    }
L_001c56e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c56ecu)) return;
    }
L_001c56ec:;
    {
        goto L_001c506c;
    }
L_001c56f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c56f4:;
    {
        cpu->r[2] = 0x00000011u;
    }
L_001c56f8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c56fc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5700:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5704:;
    {
        cpu->r[14] = 0x001c570cu;
    }
L_001c5708:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c570cu)) return;
    }
L_001c570c:;
    {
        goto L_001c506c;
    }
L_001c5710:;
    {
        cpu->r[0] = rd32(0x001c5718u + + 0x540u);
    }
L_001c5714:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x78u);
    }
L_001c5718:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5720u, cpu->r[0], 0, 0);
    }
L_001c571c:;
    {
        cpu->r[14] = 0x001c5720u; fn_001d0ac4(cpu);
    }
L_001c5720:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001c5724:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000du, 1, 1);
    }
L_001c5728:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c574c;
        }
    }
L_001c572c:;
    {
        cpu->r[2] = rd32(0x001c5734u + + 0x54cu);
    }
L_001c5730:;
    {
        cpu->r[3] = 0x0000e788u;
    }
L_001c5734:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001c5738:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001c573c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001c5740:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001c5744:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5748:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c506c;
        }
    }
L_001c574c:;
    {
        cpu->r[0] = rd32(0x001c5754u + + 0x508u);
    }
L_001c5750:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001c5754:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c5758:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001c575c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5764u, cpu->r[0], 0, 0);
    }
L_001c5760:;
    {
        cpu->r[14] = 0x001c5764u; fn_001d0ac4(cpu);
    }
L_001c5764:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5768:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c576c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c5770:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5774:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001c5778:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c577c:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c5780:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5784:;
    {
        cpu->r[14] = 0x001c578cu;
    }
L_001c5788:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c578cu)) return;
    }
L_001c578c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c5790:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c5ec8;
        }
    }
L_001c5794:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001c5798:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c579c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5db4;
        }
    }
L_001c57a0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c57a4:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001c57a8:;
    {
        wr8(cpu->r[4] + + 0x89u, cpu->r[3]);
    }
L_001c57ac:;
    {
        wr8(cpu->r[4] + + 0x64u, cpu->r[1]);
    }
L_001c57b0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001c57b4:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001c57b8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c57bc:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001c57c0:;
    {
        cpu->r[14] = 0x001c57c8u;
    }
L_001c57c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c57c8u)) return;
    }
L_001c57c8:;
    {
        goto L_001c506c;
    }
L_001c57cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001c57d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_001c57d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c506c;
        }
    }
L_001c57d8:;
    {
        cpu->r[0] = rd32(0x001c57e0u + + 0x480u);
    }
L_001c57dc:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001c57e0:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c57e4:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001c57e8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c57f0u, cpu->r[0], 0, 0);
    }
L_001c57ec:;
    {
        cpu->r[14] = 0x001c57f0u; fn_001d0ac4(cpu);
    }
L_001c57f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c57f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c57f8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c57fc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5800:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001c5804:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c5808:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c580c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5810:;
    {
        cpu->r[14] = 0x001c5818u;
    }
L_001c5814:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5818u)) return;
    }
L_001c5818:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c581c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c5fa0;
        }
    }
L_001c5820:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001c5824:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c5828:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5e78;
        }
    }
L_001c582c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5830:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_001c5834:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c5838:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c583c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5840:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5844:;
    {
        cpu->r[14] = 0x001c584cu;
    }
L_001c5848:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c584cu)) return;
    }
L_001c584c:;
    {
        goto L_001c5098;
    }
L_001c5850:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001c5854:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_001c5858:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c506c;
        }
    }
L_001c585c:;
    {
        cpu->r[0] = rd32(0x001c5864u + + 0x400u);
    }
L_001c5860:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001c5864:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c5868:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001c586c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5874u, cpu->r[0], 0, 0);
    }
L_001c5870:;
    {
        cpu->r[14] = 0x001c5874u; fn_001d0ac4(cpu);
    }
L_001c5874:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5878:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c587c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c5880:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5884:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001c5888:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c588c:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c5890:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5894:;
    {
        cpu->r[14] = 0x001c589cu;
    }
L_001c5898:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c589cu)) return;
    }
L_001c589c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c58a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c5f00;
        }
    }
L_001c58a4:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001c58a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c58ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5db4;
        }
    }
L_001c58b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c58b4:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c58b8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c58bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c58c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c58c4:;
    {
        cpu->r[14] = 0x001c58ccu;
    }
L_001c58c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c58ccu)) return;
    }
L_001c58cc:;
    {
        goto L_001c506c;
    }
L_001c58d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c58d4:;
    {
        cpu->r[2] = 0x00000015u;
    }
L_001c58d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c58dc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c58e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c58e4:;
    {
        cpu->r[14] = 0x001c58ecu;
    }
L_001c58e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c58ecu)) return;
    }
L_001c58ec:;
    {
        goto L_001c506c;
    }
L_001c58f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c58f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c58f8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c58fc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5900:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c5904:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5908:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c590c:;
    {
        cpu->r[14] = 0x001c5914u;
    }
L_001c5910:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5914u)) return;
    }
L_001c5914:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c5918:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c506c;
        }
    }
L_001c591c:;
    {
        cpu->r[0] = rd32(0x001c5924u + + 0x344u);
    }
L_001c5920:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5928u, cpu->r[0], 0, 0);
    }
L_001c5924:;
    {
        cpu->r[14] = 0x001c5928u; fn_001d0ac4(cpu);
    }
L_001c5928:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c592c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5930:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5190;
        }
    }
L_001c5934:;
    {
        goto L_001c51a4;
    }
L_001c5938:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001c593c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001c5940:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c506c;
        }
    }
L_001c5944:;
    {
        cpu->r[0] = rd32(0x001c594cu + + 0x320u);
    }
L_001c5948:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001c594c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c5950:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001c5954:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c595cu, cpu->r[0], 0, 0);
    }
L_001c5958:;
    {
        cpu->r[14] = 0x001c595cu; fn_001d0ac4(cpu);
    }
L_001c595c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x65u);
    }
L_001c5960:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c5964:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c5968:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_001c596c:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001c5970:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[4] + + 0x64u, cpu->r[3]);
        }
    }
L_001c5974:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_001c5978:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000000au;
        }
    }
L_001c597c:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x64u, cpu->r[3]);
        }
    }
L_001c5980:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[4] + + 0x65u, cpu->r[3]);
        }
    }
L_001c5984:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c5988:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c598c:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c5990:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c5994:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5998:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c599c:;
    {
        cpu->r[14] = 0x001c59a4u;
    }
L_001c59a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c59a4u)) return;
    }
L_001c59a4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c59a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c5fbc;
        }
    }
L_001c59ac:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001c59b0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c59b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5db4;
        }
    }
L_001c59b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c59bc:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c59c0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c59c4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c59c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c59cc:;
    {
        cpu->r[14] = 0x001c59d4u;
    }
L_001c59d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c59d4u)) return;
    }
L_001c59d4:;
    {
        goto L_001c506c;
    }
L_001c59d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001c59dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000fu, 1, 1);
    }
L_001c59e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c506c;
        }
    }
L_001c59e4:;
    {
        cpu->r[0] = rd32(0x001c59ecu + + 0x284u);
    }
L_001c59e8:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001c59ec:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c59f0:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001c59f4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c59fcu, cpu->r[0], 0, 0);
    }
L_001c59f8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c59fc:;
    {
        cpu->r[14] = 0x001c5a00u; fn_001d0ac4(cpu);
    }
L_001c5a00:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c5a04:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[5]);
    }
L_001c5a08:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c5a0c:;
    {
        cpu->r[14] = 0x001c5a14u;
    }
L_001c5a10:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5a14u)) return;
    }
L_001c5a14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5a18:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001c5a1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c5a34;
        }
    }
L_001c5a20:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5a24:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5a28:;
    {
        cpu->r[14] = 0x001c5a30u;
    }
L_001c5a2c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5a30u)) return;
    }
L_001c5a30:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[5]);
    }
L_001c5a34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5a38:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c5a3c:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[5]);
    }
L_001c5a40:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5a44:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_001c5a48:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5a4c:;
    {
        cpu->r[14] = 0x001c5a54u;
    }
L_001c5a50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5a54u)) return;
    }
L_001c5a54:;
    {
        goto L_001c5098;
    }
L_001c5a58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5a5c:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001c5a60:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5a64:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5a68:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5a6c:;
    {
        cpu->r[14] = 0x001c5a74u;
    }
L_001c5a70:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5a74u)) return;
    }
L_001c5a74:;
    {
        goto L_001c506c;
    }
L_001c5a78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001c5a7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_001c5a80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c506c;
        }
    }
L_001c5a84:;
    {
        cpu->r[0] = rd32(0x001c5a8cu + + 0x1e8u);
    }
L_001c5a88:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001c5a8c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c5a90:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001c5a94:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5a9cu, cpu->r[0], 0, 0);
    }
L_001c5a98:;
    {
        cpu->r[14] = 0x001c5a9cu; fn_001d0ac4(cpu);
    }
L_001c5a9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5aa0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c5aa4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c5aa8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5aac:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001c5ab0:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c5ab4:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c5ab8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5abc:;
    {
        cpu->r[14] = 0x001c5ac4u;
    }
L_001c5ac0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5ac4u)) return;
    }
L_001c5ac4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c5ac8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c5f38;
        }
    }
L_001c5acc:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001c5ad0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c5ad4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5db4;
        }
    }
L_001c5ad8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5adc:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c5ae0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5ae4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5ae8:;
    {
        cpu->r[14] = 0x001c5af0u;
    }
L_001c5aec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5af0u)) return;
    }
L_001c5af0:;
    {
        goto L_001c506c;
    }
L_001c5af4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001c5af8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_001c5afc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c506c;
        }
    }
L_001c5b00:;
    {
        cpu->r[0] = rd32(0x001c5b08u + + 0x170u);
    }
L_001c5b04:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001c5b08:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c5b0c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001c5b10:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5b18u, cpu->r[0], 0, 0);
    }
L_001c5b14:;
    {
        cpu->r[14] = 0x001c5b18u; fn_001d0ac4(cpu);
    }
L_001c5b18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5b1c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c5b20:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c5b24:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5b28:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001c5b2c:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c5b30:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c5b34:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5b38:;
    {
        cpu->r[14] = 0x001c5b40u;
    }
L_001c5b3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5b40u)) return;
    }
L_001c5b40:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c5b44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c5f54;
        }
    }
L_001c5b48:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001c5b4c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c5b50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5db4;
        }
    }
L_001c5b54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5b58:;
    {
        cpu->r[1] = 0x00000022u;
    }
L_001c5b5c:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c5b60:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5b64:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5b68:;
    {
        cpu->r[14] = 0x001c5b70u;
    }
L_001c5b6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5b70u)) return;
    }
L_001c5b70:;
    {
        goto L_001c506c;
    }
L_001c5b74:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x78u);
    }
L_001c5b78:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 1);
    }
L_001c5b7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c506c;
        }
    }
L_001c5b80:;
    {
        cpu->r[0] = rd32(0x001c5b88u + + 0xf4u);
    }
L_001c5b84:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001c5b88:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c5b8c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001c5b90:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5b98u, cpu->r[0], 0, 0);
    }
L_001c5b94:;
    {
        cpu->r[14] = 0x001c5b98u; fn_001d0ac4(cpu);
    }
L_001c5b98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5b9c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c5ba0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c5ba4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5ba8:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001c5bac:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c5bb0:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c5bb4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5bb8:;
    {
        cpu->r[14] = 0x001c5bc0u;
    }
L_001c5bbc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5bc0u)) return;
    }
L_001c5bc0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c5bc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c5f70;
        }
    }
L_001c5bc8:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001c5bcc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c5bd0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5e78;
        }
    }
L_001c5bd4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5bd8:;
    {
        wr8(cpu->r[4] + + 0x64u, cpu->r[5]);
    }
L_001c5bdc:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_001c5be0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5be4:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c5be8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5bec:;
    {
        cpu->r[14] = 0x001c5bf4u;
    }
L_001c5bf0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5bf4u)) return;
    }
L_001c5bf4:;
    {
        goto L_001c5098;
    }
L_001c5bf8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5bfc:;
    {
        cpu->r[2] = 0x00000012u;
    }
L_001c5c00:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5c04:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5c08:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5c0c:;
    {
        cpu->r[14] = 0x001c5c14u;
    }
L_001c5c10:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5c14u)) return;
    }
L_001c5c14:;
    {
        goto L_001c506c;
    }
L_001c5cd4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001c5cd8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001c5cdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c5d00;
        }
    }
L_001c5ce0:;
    {
        cpu->r[2] = rd32(0x001c5ce8u + - 0x68u);
    }
L_001c5ce4:;
    {
        cpu->r[3] = 0x0000e788u;
    }
L_001c5ce8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001c5cec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001c5cf0:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001c5cf4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001c5cf8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5cfc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c506c;
        }
    }
L_001c5d00:;
    {
        cpu->r[0] = rd32(0x001c5d08u + - 0x84u);
    }
L_001c5d04:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001c5d08:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c5d0c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001c5d10:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5d18u, cpu->r[0], 0, 0);
    }
L_001c5d14:;
    {
        cpu->r[14] = 0x001c5d18u; fn_001d0ac4(cpu);
    }
L_001c5d18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5d1c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c5d20:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c5d24:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5d28:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001c5d2c:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c5d30:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001c5d34:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c5d38:;
    {
        wr8(cpu->r[4] + + 0x64u, cpu->r[2]);
    }
L_001c5d3c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001c5d40:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5d44:;
    {
        wr8(cpu->r[4] + + 0x89u, cpu->r[2]);
    }
L_001c5d48:;
    {
        cpu->r[14] = 0x001c5d50u;
    }
L_001c5d4c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5d50u)) return;
    }
L_001c5d50:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c5d54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c5eac;
        }
    }
L_001c5d58:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001c5d5c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c5d60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5db4;
        }
    }
L_001c5d64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5d68:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c5d6c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5d70:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5d74:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5d78:;
    {
        cpu->r[14] = 0x001c5d80u;
    }
L_001c5d7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5d80u)) return;
    }
L_001c5d80:;
    {
        goto L_001c506c;
    }
L_001c5d84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5d88:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c5d8c:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_001c5d90:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001c5d94:;
    {
        wr8(cpu->r[4] + + 0x64u, cpu->r[5]);
    }
L_001c5d98:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5d9c:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c5da0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5da4:;
    {
        cpu->r[14] = 0x001c5dacu;
    }
L_001c5da8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5dacu)) return;
    }
L_001c5dac:;
    {
        goto L_001c5098;
    }
L_001c5db0:;
    {
        wr8(cpu->r[4] + + 0x90u, cpu->r[5]);
    }
L_001c5db4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c5db8:;
    {
        cpu->r[14] = 0x001c5dbcu; fn_001cb834(cpu);
    }
L_001c5dbc:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_001c5dc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5dc4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001c5dc8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x50u);
    }
L_001c5dcc:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[0]);
    }
L_001c5dd0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5dd4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5dd8:;
    {
        cpu->r[14] = 0x001c5de0u;
    }
L_001c5ddc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5de0u)) return;
    }
L_001c5de0:;
    {
        goto L_001c506c;
    }
L_001c5de4:;
    {
        cpu->r[0] = rd32(0x001c5decu + - 0x164u);
    }
L_001c5de8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5df0u, cpu->r[0], 0, 0);
    }
L_001c5dec:;
    {
        cpu->r[14] = 0x001c5df0u; fn_001d0ac4(cpu);
    }
L_001c5df0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5df4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5df8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5190;
        }
    }
L_001c5dfc:;
    {
        goto L_001c51a4;
    }
L_001c5e00:;
    {
        cpu->r[0] = rd32(0x001c5e08u + - 0x17cu);
    }
L_001c5e04:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001c5e08:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c5e0c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001c5e10:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5e18u, cpu->r[0], 0, 0);
    }
L_001c5e14:;
    {
        cpu->r[14] = 0x001c5e18u; fn_001d0ac4(cpu);
    }
L_001c5e18:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c5e1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c5e20:;
    {
        cpu->r[14] = 0x001c5e28u;
    }
L_001c5e24:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5e28u)) return;
    }
L_001c5e28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c5e2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c506c;
        }
    }
L_001c5e30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5e34:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c5e38:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c5e3c:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_001c5e40:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c5e44:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5e48:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001c5e4c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5e50:;
    {
        cpu->r[14] = 0x001c5e58u;
    }
L_001c5e54:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5e58u)) return;
    }
L_001c5e58:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c5e5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6048;
        }
    }
L_001c5e60:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001c5e64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5e68:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
        }
    }
L_001c5e6c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000005u, 0, 0);
        }
    }
L_001c5e70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c5048;
        }
    }
L_001c5e74:;
    {
        goto L_001c5db4;
    }
L_001c5e78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c5e7c:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_001c5e80:;
    {
        cpu->r[14] = 0x001c5e84u; fn_001cb834(cpu);
    }
L_001c5e84:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_001c5e88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c5e8c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001c5e90:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x50u);
    }
L_001c5e94:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[0]);
    }
L_001c5e98:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5e9c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5ea0:;
    {
        cpu->r[14] = 0x001c5ea8u;
    }
L_001c5ea4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5ea8u)) return;
    }
L_001c5ea8:;
    {
        goto L_001c5098;
    }
L_001c5eac:;
    {
        cpu->r[0] = rd32(0x001c5eb4u + - 0x224u);
    }
L_001c5eb0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5eb8u, cpu->r[0], 0, 0);
    }
L_001c5eb4:;
    {
        cpu->r[14] = 0x001c5eb8u; fn_001d0ac4(cpu);
    }
L_001c5eb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5ebc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5ec0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5190;
        }
    }
L_001c5ec4:;
    {
        goto L_001c51a4;
    }
L_001c5ec8:;
    {
        cpu->r[0] = rd32(0x001c5ed0u + - 0x23cu);
    }
L_001c5ecc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5ed4u, cpu->r[0], 0, 0);
    }
L_001c5ed0:;
    {
        cpu->r[14] = 0x001c5ed4u; fn_001d0ac4(cpu);
    }
L_001c5ed4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5ed8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5edc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5190;
        }
    }
L_001c5ee0:;
    {
        goto L_001c51a4;
    }
L_001c5ee4:;
    {
        cpu->r[0] = rd32(0x001c5eecu + - 0x254u);
    }
L_001c5ee8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5ef0u, cpu->r[0], 0, 0);
    }
L_001c5eec:;
    {
        cpu->r[14] = 0x001c5ef0u; fn_001d0ac4(cpu);
    }
L_001c5ef0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5ef4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5ef8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5190;
        }
    }
L_001c5efc:;
    {
        goto L_001c51a4;
    }
L_001c5f00:;
    {
        cpu->r[0] = rd32(0x001c5f08u + - 0x26cu);
    }
L_001c5f04:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5f0cu, cpu->r[0], 0, 0);
    }
L_001c5f08:;
    {
        cpu->r[14] = 0x001c5f0cu; fn_001d0ac4(cpu);
    }
L_001c5f0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5f10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5f14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5190;
        }
    }
L_001c5f18:;
    {
        goto L_001c51a4;
    }
L_001c5f1c:;
    {
        cpu->r[0] = rd32(0x001c5f24u + - 0x284u);
    }
L_001c5f20:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5f28u, cpu->r[0], 0, 0);
    }
L_001c5f24:;
    {
        cpu->r[14] = 0x001c5f28u; fn_001d0ac4(cpu);
    }
L_001c5f28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5f2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5f30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5190;
        }
    }
L_001c5f34:;
    {
        goto L_001c51a4;
    }
L_001c5f38:;
    {
        cpu->r[0] = rd32(0x001c5f40u + - 0x29cu);
    }
L_001c5f3c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5f44u, cpu->r[0], 0, 0);
    }
L_001c5f40:;
    {
        cpu->r[14] = 0x001c5f44u; fn_001d0ac4(cpu);
    }
L_001c5f44:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5f48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5f4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5190;
        }
    }
L_001c5f50:;
    {
        goto L_001c51a4;
    }
L_001c5f54:;
    {
        cpu->r[0] = rd32(0x001c5f5cu + - 0x2b4u);
    }
L_001c5f58:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5f60u, cpu->r[0], 0, 0);
    }
L_001c5f5c:;
    {
        cpu->r[14] = 0x001c5f60u; fn_001d0ac4(cpu);
    }
L_001c5f60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5f64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5f68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5190;
        }
    }
L_001c5f6c:;
    {
        goto L_001c51a4;
    }
L_001c5f70:;
    {
        cpu->r[0] = rd32(0x001c5f78u + - 0x2ccu);
    }
L_001c5f74:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5f7cu, cpu->r[0], 0, 0);
    }
L_001c5f78:;
    {
        cpu->r[14] = 0x001c5f7cu; fn_001d0ac4(cpu);
    }
L_001c5f7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5f80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5f84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c51a4;
        }
    }
L_001c5f88:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c5f8c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c5f90:;
    {
        cpu->r[14] = 0x001c5f98u;
    }
L_001c5f94:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c5f98u)) return;
    }
L_001c5f98:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[6]);
    }
L_001c5f9c:;
    {
        goto L_001c51a4;
    }
L_001c5fa0:;
    {
        cpu->r[0] = rd32(0x001c5fa8u + - 0x2f8u);
    }
L_001c5fa4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5facu, cpu->r[0], 0, 0);
    }
L_001c5fa8:;
    {
        cpu->r[14] = 0x001c5facu; fn_001d0ac4(cpu);
    }
L_001c5fac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5fb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5fb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5190;
        }
    }
L_001c5fb8:;
    {
        goto L_001c51a4;
    }
L_001c5fbc:;
    {
        cpu->r[0] = rd32(0x001c5fc4u + - 0x310u);
    }
L_001c5fc0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5fc8u, cpu->r[0], 0, 0);
    }
L_001c5fc4:;
    {
        cpu->r[14] = 0x001c5fc8u; fn_001d0ac4(cpu);
    }
L_001c5fc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5fcc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5fd0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5190;
        }
    }
L_001c5fd4:;
    {
        goto L_001c51a4;
    }
L_001c5fd8:;
    {
        cpu->r[0] = rd32(0x001c5fe0u + - 0x328u);
    }
L_001c5fdc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c5fe4u, cpu->r[0], 0, 0);
    }
L_001c5fe0:;
    {
        cpu->r[14] = 0x001c5fe4u; fn_001d0ac4(cpu);
    }
L_001c5fe4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c5fe8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c5fec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5190;
        }
    }
L_001c5ff0:;
    {
        goto L_001c51a4;
    }
L_001c5ff4:;
    {
        cpu->r[0] = rd32(0x001c5ffcu + - 0x340u);
    }
L_001c5ff8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c6000u, cpu->r[0], 0, 0);
    }
L_001c5ffc:;
    {
        cpu->r[14] = 0x001c6000u; fn_001d0ac4(cpu);
    }
L_001c6000:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c6004:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c6008:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5190;
        }
    }
L_001c600c:;
    {
        goto L_001c51a4;
    }
L_001c6010:;
    {
        cpu->r[0] = rd32(0x001c6018u + - 0x358u);
    }
L_001c6014:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c601cu, cpu->r[0], 0, 0);
    }
L_001c6018:;
    {
        cpu->r[14] = 0x001c601cu; fn_001d0ac4(cpu);
    }
L_001c601c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c6020:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c6024:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5190;
        }
    }
L_001c6028:;
    {
        goto L_001c51a4;
    }
L_001c602c:;
    {
        cpu->r[0] = rd32(0x001c6034u + - 0x370u);
    }
L_001c6030:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c6038u, cpu->r[0], 0, 0);
    }
L_001c6034:;
    {
        cpu->r[14] = 0x001c6038u; fn_001d0ac4(cpu);
    }
L_001c6038:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c603c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001c6040:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5f88;
        }
    }
L_001c6044:;
    {
        goto L_001c51a4;
    }
L_001c6048:;
    {
        cpu->r[0] = rd32(0x001c6050u + - 0x388u);
    }
L_001c604c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c6054u, cpu->r[0], 0, 0);
    }
L_001c6050:;
    {
        cpu->r[14] = 0x001c6054u; fn_001d0ac4(cpu);
    }
L_001c6054:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c6058:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c605c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c5190;
        }
    }
L_001c6060:;
    {
        goto L_001c51a4;
    }
L_001c6064:;
    {
        cpu->r[0] = rd32(0x001c606cu + - 0x3a0u);
    }
L_001c6068:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c6070u, cpu->r[0], 0, 0);
    }
L_001c606c:;
    {
        cpu->r[14] = 0x001c6070u; fn_001d0ac4(cpu);
    }
L_001c6070:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c6074:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001c6078:;
    {
        wr8(cpu->r[4] + + 0x90u, cpu->r[6]);
    }
L_001c607c:;
    {
        wr8(cpu->r[4] + + 0x64u, cpu->r[2]);
    }
L_001c6080:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c6084:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001c6088:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c608c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c6090:;
    {
        cpu->r[14] = 0x001c6098u;
    }
L_001c6094:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6098u)) return;
    }
L_001c6098:;
    {
        goto L_001c506c;
    }
L_001c609c:;
    {
        cpu->r[0] = rd32(0x001c60a4u + - 0x3d4u);
    }
L_001c60a0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c60a8u, cpu->r[0], 0, 0);
    }
L_001c60a4:;
    {
        cpu->r[14] = 0x001c60a8u; fn_001d0ac4(cpu);
    }
L_001c60a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c60ac:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001c60b0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001c60b4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c60b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c60bc:;
    {
        cpu->r[14] = 0x001c60c4u;
    }
L_001c60c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c60c4u)) return;
    }
L_001c60c4:;
    {
        goto L_001c506c;
    }
}

/* _ZN16GLXPlayerMPLobby25mpSendEstablishConnectionEv @ 001c60c8 (arm) */
void fn_001c60c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c60c8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c60cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c60d0:;
    {
        cpu->r[0] = rd32(0x001c60d8u + + 0xd0u);
    }
L_001c60d4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c60dcu, cpu->r[0], 0, 0);
    }
L_001c60d8:;
    {
        cpu->r[14] = 0x001c60dcu; fn_001d0ac4(cpu);
    }
L_001c60dc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8au);
    }
L_001c60e0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c60e4:;
    {
        wr8(cpu->r[4] + + 0x90u, cpu->r[2]);
    }
L_001c60e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001c60ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000000au;
        }
    }
L_001c60f0:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x65u, cpu->r[3]);
        }
    }
L_001c60f4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x64u);
    }
L_001c60f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c60fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c6188;
        }
    }
L_001c6100:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c6104:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c6108:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6140;
        }
    }
L_001c610c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c6110:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6114:;
    {
        cpu->r[14] = 0x001c611cu;
    }
L_001c6118:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c611cu)) return;
    }
L_001c611c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c6120:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c6124:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6138;
        }
    }
L_001c6128:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c612c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c6130:;
    {
        cpu->r[14] = 0x001c6138u;
    }
L_001c6134:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6138u)) return;
    }
L_001c6138:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c613c:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_001c6140:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001c6144:;
    {
        cpu->r[0] = 0x00001044u;
    }
L_001c6148:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001c614c:;
    {
        cpu->r[14] = 0x001c6150u; fn_0018ba6c(cpu);
    }
L_001c6150:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001c6154:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x60u);
    }
L_001c6158:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c615c:;
    {
        cpu->r[14] = 0x001c6160u; fn_001c88b0(cpu);
    }
L_001c6160:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6164:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[5]);
    }
L_001c6168:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001c616c:;
    {
        cpu->r[14] = 0x001c6170u; fn_001cb4cc(cpu);
    }
L_001c6170:;
    {
        cpu->r[0] = rd32(0x001c6178u + + 0x34u);
    }
L_001c6174:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001c6178:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[3]);
    }
L_001c617c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c6184u, cpu->r[0], 0, 0);
    }
L_001c6180:;
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
L_001c6184:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c6188:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c618c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c6190:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001c6194:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c6198:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c619c:;
    {
        cpu->r[14] = 0x001c61a4u;
    }
L_001c61a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c61a4u)) return;
    }
L_001c61a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c61a8u)) return;
    }
}

/* _ZN16GLXPlayerMPLobby10LoadConfigEv @ 001c61b0 (arm) */
void fn_001c61b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c61b0:;
    {
        cpu->r[1] = rd32(0x001c61b8u + + 0x4dcu);
    }
L_001c61b4:;
    {
        cpu->r[2] = rd32(0x001c61bcu + + 0x4dcu);
    }
L_001c61b8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001c61c0u, cpu->r[1], 0, 0);
    }
L_001c61bc:;
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
L_001c61c0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001c61c4:;
    {
        cpu->r[4] = rd32(0x001c61ccu + + 0x4d0u);
    }
L_001c61c8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000002bcu, 1, 0);
    }
L_001c61cc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c61d0:;
    {
        cpu->r[4] = add_flags(cpu, 0x001c61d8u, cpu->r[4], 0, 0);
    }
L_001c61d4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_001c61d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c61dc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_001c61e0:;
    {
        wr32(cpu->r[13] + + 0x2b4u, cpu->r[3]);
    }
L_001c61e4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_001c61e8:;
    {
        cpu->r[14] = 0x001c61ecu; fn_00073f80(cpu);
    }
L_001c61ec:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001c61f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c61f4:;
    {
        cpu->r[14] = 0x001c61f8u; fn_00073e10(cpu);
    }
L_001c61f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001c61fc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_001c6200:;
    {
        cpu->r[14] = 0x001c6204u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c6204:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001c6208:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c620c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c6210:;
    {
        cpu->r[14] = 0x001c6214u; fn_001d0700(cpu);
    }
L_001c6214:;
    {
        cpu->r[3] = 0x0000000au;
    }
L_001c6218:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c621c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c6220:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001c6224:;
    {
        cpu->r[14] = 0x001c6228u; fn_001d0048(cpu);
    }
L_001c6228:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c622c:;
    {
        cpu->r[14] = 0x001c6230u; fn_001d0434(cpu);
    }
L_001c6230:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_001c6234:;
    {
        cpu->r[3] = rd8(cpu->r[0] + - 0x1u);
    }
L_001c6238:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000du, 1, 1);
    }
L_001c623c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6678;
        }
    }
L_001c6240:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6244:;
    {
        cpu->r[14] = 0x001c6248u; fn_001d0434(cpu);
    }
L_001c6248:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001c624c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x84u);
    }
L_001c6250:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001c6254:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001c6258:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6364;
        }
    }
L_001c625c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000234u, 0, 0);
    }
L_001c6260:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x000001b4u, 0, 0);
    }
L_001c6264:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c6268:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c626c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c6270:;
    {
        cpu->r[14] = 0x001c6274u; imp_memset(cpu); /* memset */
    }
L_001c6274:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c6278:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c627c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6280:;
    {
        cpu->r[14] = 0x001c6284u; imp_memset(cpu); /* memset */
    }
L_001c6284:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c6288:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c628c:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c6290:;
    {
        cpu->r[14] = 0x001c6294u; fn_001d0700(cpu);
    }
L_001c6294:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6298:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c629c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c62a0:;
    {
        cpu->r[14] = 0x001c62a4u; fn_001d0700(cpu);
    }
L_001c62a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c62a8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c62ac:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001c62b0:;
    {
        cpu->r[3] = 0x0000002fu;
    }
L_001c62b4:;
    {
        cpu->r[14] = 0x001c62b8u; fn_001d0048(cpu);
    }
L_001c62b8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c62bc:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_001c62c0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c62c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c62c8:;
    {
        cpu->r[14] = 0x001c62ccu; fn_001d0048(cpu);
    }
L_001c62cc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c62d0:;
    {
        cpu->r[14] = 0x001c62d4u; fn_001d0434(cpu);
    }
L_001c62d4:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001c62d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c62dc:;
    {
        cpu->r[14] = 0x001c62e0u; fn_001d0434(cpu);
    }
L_001c62e0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001c62e4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 0);
    }
L_001c62e8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001c62ec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c62f0:;
    {
        cpu->r[14] = 0x001c62f4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c62f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001c62f8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c62fc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001c6300:;
    {
        wr32(cpu->r[12] + + 0x5cu, cpu->r[0]);
    }
L_001c6304:;
    {
        cpu->r[14] = 0x001c6308u; fn_001d0700(cpu);
    }
L_001c6308:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001c630c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c6310:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001c6314:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x5cu);
    }
L_001c6318:;
    {
        cpu->r[14] = 0x001c631cu; fn_001d06ec(cpu);
    }
L_001c631c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001c6320:;
    {
        cpu->r[14] = 0x001c6324u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c6324:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c6328:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001c632c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c6330:;
    {
        cpu->r[14] = 0x001c6334u; fn_001d0700(cpu);
    }
L_001c6334:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_001c6338:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 0);
    }
L_001c633c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6340:;
    {
        cpu->r[14] = 0x001c6344u; fn_001d06ec(cpu);
    }
L_001c6344:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6348:;
    {
        cpu->r[14] = 0x001c634cu; fn_001d06cc(cpu);
    }
L_001c634c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001c6350:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001c6354:;
    {
        wr32(cpu->r[12] + + 0x60u, cpu->r[0]);
    }
L_001c6358:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6364;
        }
    }
L_001c635c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6360:;
    {
        cpu->r[14] = 0x001c6364u; fn_0018ba20(cpu);
    }
L_001c6364:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001c6368:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c6508;
        }
    }
L_001c636c:;
    {
        cpu->r[3] = rd32(0x001c6374u + + 0x32cu);
    }
L_001c6370:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000234u, 0, 0);
    }
L_001c6374:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000001b4u, 0, 0);
    }
L_001c6378:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000134u, 0, 0);
    }
L_001c637c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c6384u, cpu->r[3], 0, 0);
    }
L_001c6380:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001c6384:;
    {
        cpu->r[3] = rd32(0x001c638cu + + 0x318u);
    }
L_001c6388:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_001c638c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001c6390:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001c6394:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c639cu, cpu->r[3], 0, 0);
    }
L_001c6398:;
    {
        cpu->r[7] = cpu->r[8];
    }
L_001c639c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001c63a0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_001c63a4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_001c63a8:;
    {
        goto L_001c6420;
    }
L_001c63ac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c63b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001c63b4:;
    {
        cpu->r[14] = 0x001c63b8u; fn_001d06e8(cpu);
    }
L_001c63b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c63bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c63d0;
        }
    }
L_001c63c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001c63c4:;
    {
        cpu->r[11] = rd32(cpu->r[12] + + 0x84u);
    }
L_001c63c8:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001c63cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6554;
        }
    }
L_001c63d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c63d4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c63d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001c63dc:;
    {
        cpu->r[14] = 0x001c63e0u; fn_001d0700(cpu);
    }
L_001c63e0:;
    {
        cpu->r[3] = 0x0000000au;
    }
L_001c63e4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c63e8:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001c63ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001c63f0:;
    {
        cpu->r[14] = 0x001c63f4u; fn_001d0048(cpu);
    }
L_001c63f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c63f8:;
    {
        cpu->r[14] = 0x001c63fcu; fn_001d0434(cpu);
    }
L_001c63fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_001c6400:;
    {
        cpu->r[3] = rd8(cpu->r[0] + - 0x1u);
    }
L_001c6404:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000du, 1, 1);
    }
L_001c6408:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c64e8;
        }
    }
L_001c640c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6410:;
    {
        cpu->r[14] = 0x001c6414u; fn_001d0434(cpu);
    }
L_001c6414:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c6418:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c6508;
        }
    }
L_001c641c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001c6420:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001c6424:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[4]);
    }
L_001c6428:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c642c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001c6430:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001c6434:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001c6438:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c643c:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_001c6440:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001c6444:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001c6448:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001c644c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001c6450:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001c6454:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_001c6458:;
    {
        cpu->r[14] = 0x001c645cu; imp_memset(cpu); /* memset */
    }
L_001c645c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001c6460:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_001c6464:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c6468:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c646c:;
    {
        cpu->r[14] = 0x001c6470u; fn_001d0048(cpu);
    }
L_001c6470:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_001c6474:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c6478:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001c647c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6480:;
    {
        cpu->r[14] = 0x001c6484u; fn_001d0048(cpu);
    }
L_001c6484:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c6488:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001c648c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001c6490:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c6494:;
    {
        cpu->r[14] = 0x001c6498u; fn_001d0700(cpu);
    }
L_001c6498:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c649c:;
    {
        cpu->r[14] = 0x001c64a0u; fn_001d0434(cpu);
    }
L_001c64a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
    }
L_001c64a4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_001c64a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c64ac:;
    {
        cpu->r[14] = 0x001c64b0u; fn_001d06ec(cpu);
    }
L_001c64b0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c64b4:;
    {
        cpu->r[14] = 0x001c64b8u; fn_001d049c(cpu);
    }
L_001c64b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c64bc:;
    {
        cpu->r[14] = 0x001c64c0u; fn_001d049c(cpu);
    }
L_001c64c0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c64c4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001c64c8:;
    {
        cpu->r[14] = 0x001c64ccu; fn_001d06e8(cpu);
    }
L_001c64cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c64d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c63ac;
        }
    }
L_001c64d4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c64d8:;
    {
        cpu->r[14] = 0x001c64dcu; fn_001d06cc(cpu);
    }
L_001c64dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001c64e0:;
    {
        wr32(cpu->r[3] + + 0x4cu, cpu->r[0]);
    }
L_001c64e4:;
    {
        goto L_001c63ac;
    }
L_001c64e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c64ec:;
    {
        cpu->r[14] = 0x001c64f0u; fn_001d0434(cpu);
    }
L_001c64f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_001c64f4:;
    {
        wr8(cpu->r[0] + - 0x1u, cpu->r[4]);
    }
L_001c64f8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c64fc:;
    {
        cpu->r[14] = 0x001c6500u; fn_001d0434(cpu);
    }
L_001c6500:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c6504:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c641c;
        }
    }
L_001c6508:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001c650c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6518;
        }
    }
L_001c6510:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6514:;
    {
        cpu->r[14] = 0x001c6518u; fn_0018ba20(cpu);
    }
L_001c6518:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001c651c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c6520:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c652c;
        }
    }
L_001c6524:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001c6528:;
    {
        cpu->r[14] = 0x001c652cu; fn_0018ba20(cpu);
    }
L_001c652c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001c6530:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c6534:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001c6538:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_001c653c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2b4u);
    }
L_001c6540:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c6544:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c6548:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c6690;
        }
    }
L_001c654c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000002bcu, 0, 0);
    }
L_001c6550:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6554u)) return;
    }
L_001c6554:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c6558:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001c655c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_001c6560:;
    {
        cpu->r[14] = 0x001c6564u; imp_memset(cpu); /* memset */
    }
L_001c6564:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001c6568:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c656c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_001c6570:;
    {
        cpu->r[14] = 0x001c6574u; imp_memset(cpu); /* memset */
    }
L_001c6574:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_001c6578:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001c657c:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c6580:;
    {
        cpu->r[14] = 0x001c6584u; fn_001d0700(cpu);
    }
L_001c6584:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_001c6588:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001c658c:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c6590:;
    {
        cpu->r[14] = 0x001c6594u; fn_001d0700(cpu);
    }
L_001c6594:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001c6598:;
    {
        cpu->r[3] = 0x0000002fu;
    }
L_001c659c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001c65a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c65a4:;
    {
        cpu->r[14] = 0x001c65a8u; fn_001d0048(cpu);
    }
L_001c65a8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001c65ac:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_001c65b0:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001c65b4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_001c65b8:;
    {
        cpu->r[14] = 0x001c65bcu; fn_001d0048(cpu);
    }
L_001c65bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_001c65c0:;
    {
        cpu->r[14] = 0x001c65c4u; fn_001d0434(cpu);
    }
L_001c65c4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001c65c8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_001c65cc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001c65d0:;
    {
        cpu->r[14] = 0x001c65d4u; fn_001d0434(cpu);
    }
L_001c65d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001c65d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001c65dc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 0);
    }
L_001c65e0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001c65e4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c65e8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_001c65ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001c65f0:;
    {
        cpu->r[14] = 0x001c65f4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c65f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001c65f8:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001c65fc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001c6600:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001c6604:;
    {
        wr32(cpu->r[12] + + 0x5cu, cpu->r[0]);
    }
L_001c6608:;
    {
        cpu->r[14] = 0x001c660cu; fn_001d0700(cpu);
    }
L_001c660c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001c6610:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001c6614:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001c6618:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x5cu);
    }
L_001c661c:;
    {
        cpu->r[14] = 0x001c6620u; fn_001d06ec(cpu);
    }
L_001c6620:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001c6624:;
    {
        cpu->r[14] = 0x001c6628u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c6628:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001c662c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_001c6630:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001c6634:;
    {
        cpu->r[14] = 0x001c6638u; fn_001d0700(cpu);
    }
L_001c6638:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001c663c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001c6640:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001c6644:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001c6648:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_001c664c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001c6650:;
    {
        cpu->r[14] = 0x001c6654u; fn_001d06ec(cpu);
    }
L_001c6654:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001c6658:;
    {
        cpu->r[14] = 0x001c665cu; fn_001d06cc(cpu);
    }
L_001c665c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001c6660:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001c6664:;
    {
        wr32(cpu->r[12] + + 0x60u, cpu->r[0]);
    }
L_001c6668:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c63d0;
        }
    }
L_001c666c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001c6670:;
    {
        cpu->r[14] = 0x001c6674u; fn_0018ba20(cpu);
    }
L_001c6674:;
    {
        goto L_001c63d0;
    }
L_001c6678:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c667c:;
    {
        cpu->r[14] = 0x001c6680u; fn_001d0434(cpu);
    }
L_001c6680:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c6684:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_001c6688:;
    {
        wr8(cpu->r[0] + - 0x1u, cpu->r[3]);
    }
L_001c668c:;
    {
        goto L_001c6240;
    }
L_001c6690:;
    {
        cpu->r[14] = 0x001c6694u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001c6694:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[8], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[4] = v;
        }
    }
L_001c6698:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001c669c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[4], 4, (cpu->r[12] & 0xffu), &shc); cpu->r[9] = v;
        }
    }
L_001c66a0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[6] + (-cpu->r[4]);
        uint64_t v = rd64(cpu->r[6]);
        cpu->r[9] = (uint32_t)v;
        cpu->r[10] = (uint32_t)(v >> 32);
        cpu->r[6] = wb_tmp;
        }
    }
L_001c66a4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[12], 4, 8u, &shc); cpu->r[11] = v;
        }
    }
}

/* _ZN16GLXPlayerMPLobby4InitEv @ 001c66a8 (arm) */
void fn_001c66a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c66a8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c66ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c66b0:;
    {
        cpu->r[0] = rd32(0x001c66b8u + + 0x54u);
    }
L_001c66b4:;
    {
        cpu->r[2] = 0x00000014u;
    }
L_001c66b8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c66bc:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001c66c0:;
    {
        cpu->r[12] = 0x0000000au;
    }
L_001c66c4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c66ccu, cpu->r[0], 0, 0);
    }
L_001c66c8:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[5]);
    }
L_001c66cc:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c66d0:;
    {
        wr8(cpu->r[4] + + 0x64u, cpu->r[5]);
    }
L_001c66d4:;
    {
        wr8(cpu->r[4] + + 0x66u, cpu->r[5]);
    }
L_001c66d8:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[3]);
    }
L_001c66dc:;
    {
        wr8(cpu->r[4] + + 0x65u, cpu->r[12]);
    }
L_001c66e0:;
    {
        wr8(cpu->r[4] + + 0x67u, cpu->r[3]);
    }
L_001c66e4:;
    {
        wr8(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_001c66e8:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[5]);
    }
L_001c66ec:;
    {
        wr8(cpu->r[4] + + 0x8au, cpu->r[5]);
    }
L_001c66f0:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[2]);
    }
L_001c66f4:;
    {
        cpu->r[14] = 0x001c66f8u; fn_001d0ac4(cpu);
    }
L_001c66f8:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[5]);
    }
L_001c66fc:;
    {
        wr8(cpu->r[4] + + 0x80u, cpu->r[5]);
    }
L_001c6700:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6704:;
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
L_001c6708:;
    {
        return fn_001c61b0(cpu);
    }
}

/* _ZN16GLXPlayerMPLobbyD1Ev @ 001c6710 (arm) */
void fn_001c6710(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c6710:;
    {
        cpu->r[3] = rd32(0x001c6718u + + 0x90u);
    }
L_001c6714:;
    {
        cpu->r[2] = rd32(0x001c671cu + + 0x90u);
    }
L_001c6718:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c6720u, cpu->r[3], 0, 0);
    }
L_001c671c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c6720:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c6724:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x84u);
    }
L_001c6728:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c672c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c6730:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c6734:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001c6738:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6748;
        }
    }
L_001c673c:;
    {
        cpu->r[14] = 0x001c6740u; fn_0018ba20(cpu);
    }
L_001c6740:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c6744:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[3]);
    }
L_001c6748:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001c674c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c6750:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6760;
        }
    }
L_001c6754:;
    {
        cpu->r[14] = 0x001c6758u; fn_0018ba20(cpu);
    }
L_001c6758:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c675c:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001c6760:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c6764:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c6768:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6798;
        }
    }
L_001c676c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6770:;
    {
        cpu->r[14] = 0x001c6774u; fn_001c4d18(cpu);
    }
L_001c6774:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c6778:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c677c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6798;
        }
    }
L_001c6780:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c6784:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c6788:;
    {
        cpu->r[14] = 0x001c6790u;
    }
L_001c678c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6790u)) return;
    }
L_001c6790:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c6794:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_001c6798:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c679c:;
    {
        cpu->r[14] = 0x001c67a0u; fn_001cb6d0(cpu);
    }
L_001c67a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c67a4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c67a8u)) return;
    }
}

/* _ZN16GLXPlayerMPLobbyD0Ev @ 001c67b0 (arm) */
void fn_001c67b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c67b0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c67b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c67b8:;
    {
        cpu->r[14] = 0x001c67bcu; fn_001c6710(cpu);
    }
L_001c67bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c67c0:;
    {
        cpu->r[14] = 0x001c67c4u; fn_0018ba20(cpu);
    }
L_001c67c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c67c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c67ccu)) return;
    }
}

/* _ZN16GLXPlayerMPLobbyD2Ev @ 001c67cc (arm) */
void fn_001c67cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c67cc:;
    {
        cpu->r[3] = rd32(0x001c67d4u + + 0x90u);
    }
L_001c67d0:;
    {
        cpu->r[2] = rd32(0x001c67d8u + + 0x90u);
    }
L_001c67d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c67dcu, cpu->r[3], 0, 0);
    }
L_001c67d8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c67dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c67e0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x84u);
    }
L_001c67e4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c67e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c67ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c67f0:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001c67f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6804;
        }
    }
L_001c67f8:;
    {
        cpu->r[14] = 0x001c67fcu; fn_0018ba20(cpu);
    }
L_001c67fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c6800:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[3]);
    }
L_001c6804:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001c6808:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c680c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c681c;
        }
    }
L_001c6810:;
    {
        cpu->r[14] = 0x001c6814u; fn_0018ba20(cpu);
    }
L_001c6814:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c6818:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001c681c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c6820:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c6824:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6854;
        }
    }
L_001c6828:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c682c:;
    {
        cpu->r[14] = 0x001c6830u; fn_001c4d18(cpu);
    }
L_001c6830:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001c6834:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c6838:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6854;
        }
    }
L_001c683c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c6840:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c6844:;
    {
        cpu->r[14] = 0x001c684cu;
    }
L_001c6848:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c684cu)) return;
    }
L_001c684c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c6850:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_001c6854:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6858:;
    {
        cpu->r[14] = 0x001c685cu; fn_001cb6d0(cpu);
    }
L_001c685c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6860:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6864u)) return;
    }
}

/* _ZN16GLXPlayerMPLobbyC1EP23GLXPlayerMPBaseObserverPc @ 001c686c (arm) */
void fn_001c686c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c686c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c6870:;
    {
        cpu->r[4] = rd32(0x001c6878u + + 0x64u);
    }
L_001c6874:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c6878:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001c687c:;
    {
        cpu->r[14] = 0x001c6880u; fn_001cb7d8(cpu);
    }
L_001c6880:;
    {
        cpu->r[3] = rd32(0x001c6888u + + 0x58u);
    }
L_001c6884:;
    {
        cpu->r[4] = add_flags(cpu, 0x001c688cu, cpu->r[4], 0, 0);
    }
L_001c6888:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001c688c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001c6890:;
    {
        wr32(cpu->r[5] + + 0x84u, cpu->r[7]);
    }
L_001c6894:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001c6898:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001c689c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001c68a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c68cc;
        }
    }
L_001c68a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c68a8:;
    {
        cpu->r[14] = 0x001c68acu; fn_001d0434(cpu);
    }
L_001c68ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c68b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001c68b4:;
    {
        cpu->r[14] = 0x001c68b8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c68b8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c68bc:;
    {
        wr32(cpu->r[5] + + 0x84u, cpu->r[0]);
    }
L_001c68c0:;
    {
        wr8(cpu->r[0] + cpu->r[4], cpu->r[7]);
    }
L_001c68c4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x84u);
    }
L_001c68c8:;
    {
        cpu->r[14] = 0x001c68ccu; fn_001d06dc(cpu);
    }
L_001c68cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c68d0:;
    {
        cpu->r[14] = 0x001c68d4u; fn_001c66a8(cpu);
    }
L_001c68d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c68d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c68dcu)) return;
    }
}

/* _ZN16GLXPlayerMPLobbyC2EP23GLXPlayerMPBaseObserverPc @ 001c68e4 (arm) */
void fn_001c68e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c68e4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c68e8:;
    {
        cpu->r[4] = rd32(0x001c68f0u + + 0x64u);
    }
L_001c68ec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c68f0:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001c68f4:;
    {
        cpu->r[14] = 0x001c68f8u; fn_001cb7d8(cpu);
    }
L_001c68f8:;
    {
        cpu->r[3] = rd32(0x001c6900u + + 0x58u);
    }
L_001c68fc:;
    {
        cpu->r[4] = add_flags(cpu, 0x001c6904u, cpu->r[4], 0, 0);
    }
L_001c6900:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001c6904:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001c6908:;
    {
        wr32(cpu->r[5] + + 0x84u, cpu->r[7]);
    }
L_001c690c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001c6910:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001c6914:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001c6918:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6944;
        }
    }
L_001c691c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c6920:;
    {
        cpu->r[14] = 0x001c6924u; fn_001d0434(cpu);
    }
L_001c6924:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c6928:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001c692c:;
    {
        cpu->r[14] = 0x001c6930u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c6930:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c6934:;
    {
        wr32(cpu->r[5] + + 0x84u, cpu->r[0]);
    }
L_001c6938:;
    {
        wr8(cpu->r[0] + cpu->r[4], cpu->r[7]);
    }
L_001c693c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x84u);
    }
L_001c6940:;
    {
        cpu->r[14] = 0x001c6944u; fn_001d06dc(cpu);
    }
L_001c6944:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6948:;
    {
        cpu->r[14] = 0x001c694cu; fn_001c66a8(cpu);
    }
L_001c694c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6950:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6954u)) return;
    }
}

/* _ZN23CLobbyParameterAndQueryC1Ev @ 001c695c (arm) */
void fn_001c695c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c695c:;
    {
        cpu->r[3] = rd32(0x001c6964u + + 0x40u);
    }
L_001c6960:;
    {
        cpu->r[2] = rd32(0x001c6968u + + 0x40u);
    }
L_001c6964:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c696cu, cpu->r[3], 0, 0);
    }
L_001c6968:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c696c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c6970:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c6974:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c6978:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c697c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[5]);
    }
L_001c6980:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001c6984:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_001c6988:;
    {
        cpu->r[14] = 0x001c698cu; imp__Znaj(cpu); /* _Znaj */
    }
L_001c698c:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_001c6990:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c6994:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6998:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001c699c:;
    {
        wr32(cpu->r[3], cpu->r[5]);
    }
L_001c69a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c69a4u)) return;
    }
}

/* _ZN23CLobbyParameterAndQueryC2Ev @ 001c69ac (arm) */
void fn_001c69ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c69ac:;
    {
        cpu->r[3] = rd32(0x001c69b4u + + 0x40u);
    }
L_001c69b0:;
    {
        cpu->r[2] = rd32(0x001c69b8u + + 0x40u);
    }
L_001c69b4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c69bcu, cpu->r[3], 0, 0);
    }
L_001c69b8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c69bc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c69c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c69c4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c69c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c69cc:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[5]);
    }
L_001c69d0:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001c69d4:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_001c69d8:;
    {
        cpu->r[14] = 0x001c69dcu; imp__Znaj(cpu); /* _Znaj */
    }
L_001c69dc:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_001c69e0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c69e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c69e8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001c69ec:;
    {
        wr32(cpu->r[3], cpu->r[5]);
    }
L_001c69f0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c69f4u)) return;
    }
}

/* _ZN23CLobbyParameterAndQuery13PackParameterERi @ 001c69fc (arm) */
void fn_001c69fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c69fc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c6a00:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001c6a04:;
    {
        wr32(cpu->r[1], cpu->r[8]);
    }
L_001c6a08:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c6a0c:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x14u);
    }
L_001c6a10:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c6a14:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_001c6a18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c6a24;
        }
    }
L_001c6a1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6a20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6a24u)) return;
    }
L_001c6a24:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_001c6a28:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c6a2c:;
    {
        cpu->r[14] = 0x001c6a30u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c6a30:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001c6a34:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c6a38:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c6a3c:;
    {
        cpu->r[14] = 0x001c6a40u; fn_001d0700(cpu);
    }
L_001c6a40:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x14u);
    }
L_001c6a44:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_001c6a48:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001c6a4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c6a60;
        }
    }
L_001c6a50:;
    {
        wr8(cpu->r[5], cpu->r[7]);
    }
L_001c6a54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6a58:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_001c6a5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6a60u)) return;
    }
L_001c6a60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c6a64:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001c6a68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001c6a6c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001c6a70:;
    {
        cpu->r[14] = 0x001c6a74u; fn_001d06ec(cpu);
    }
L_001c6a74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001c6a78:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001c6a7c:;
    {
        goto L_001c6a50;
    }
}

/* _ZN23CLobbyParameterAndQuery17AddQueryConditionEi11compareOptTPc @ 001c6a80 (arm) */
void fn_001c6a80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c6a80:;
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
L_001c6a84:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c6a88:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c6a8c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001c6a90:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001c6a94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6a98u)) return;
        }
    }
L_001c6a98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c6a9c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6aa0u)) return;
        }
    }
L_001c6aa0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c6aa4:;
    {
        cpu->r[14] = 0x001c6aa8u; fn_001d0434(cpu);
    }
L_001c6aa8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c6aac:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001c6ab0:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_001c6ab4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c6ab8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6acc;
        }
    }
L_001c6abc:;
    {
        cpu->r[14] = 0x001c6ac0u; fn_0018ba20(cpu);
    }
L_001c6ac0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c6ac4:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001c6ac8:;
    {
        wr32(cpu->r[3], cpu->r[10]);
    }
L_001c6acc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], 0x00000005u, 0, 0);
    }
L_001c6ad0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001c6ad4:;
    {
        cpu->r[14] = 0x001c6ad8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c6ad8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c6adc:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001c6ae0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c6ae4:;
    {
        wr32(cpu->r[8], cpu->r[0]);
    }
L_001c6ae8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001c6aec:;
    {
        cpu->r[14] = 0x001c6af0u; fn_001d0700(cpu);
    }
L_001c6af0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c6af4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001c6af8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001c6afc:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[2]);
    }
L_001c6b00:;
    {
        cpu->r[0] = (cpu->r[6] >> 8) & 0xffu;
    }
L_001c6b04:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c6b08:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c6b0c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001c6b10:;
    {
        wr8(cpu->r[3], cpu->r[12]);
    }
L_001c6b14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c6b18:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c6b1c:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[5]);
    }
L_001c6b20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c6b24:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c6b28:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[0]);
    }
L_001c6b2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c6b30:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c6b34:;
    {
        wr8(cpu->r[3] + + 0x3u, cpu->r[6]);
    }
L_001c6b38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c6b3c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001c6b40:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001c6b44:;
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
L_001c6b48:;
    {
        return fn_001d06ec(cpu);
    }
}

/* _ZN23CLobbyParameterAndQuery17SetParameterValueEiPc @ 001c6b4c (arm) */
void fn_001c6b4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c6b4c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c6b50:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c6b54:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c6b58:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001c6b5c:;
    {
        if (cond_test(cpu, 2)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6b60u)) return;
        }
    }
L_001c6b60:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c6b64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6b68u)) return;
        }
    }
L_001c6b68:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001c6b6c:;
    {
        cpu->r[14] = 0x001c6b70u; fn_001d0434(cpu);
    }
L_001c6b70:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c6b74:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c6b78:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001c6b7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c6b80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6b94;
        }
    }
L_001c6b84:;
    {
        cpu->r[14] = 0x001c6b88u; fn_0018ba20(cpu);
    }
L_001c6b88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c6b8c:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001c6b90:;
    {
        wr32(cpu->r[3], cpu->r[8]);
    }
L_001c6b94:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], 0x00000005u, 0, 0);
    }
L_001c6b98:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c6b9c:;
    {
        cpu->r[14] = 0x001c6ba0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c6ba0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c6ba4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001c6ba8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c6bac:;
    {
        wr32(cpu->r[7], cpu->r[0]);
    }
L_001c6bb0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001c6bb4:;
    {
        cpu->r[14] = 0x001c6bb8u; fn_001d0700(cpu);
    }
L_001c6bb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c6bbc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001c6bc0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001c6bc4:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[2]);
    }
L_001c6bc8:;
    {
        cpu->r[0] = (cpu->r[5] >> 8) & 0xffu;
    }
L_001c6bcc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c6bd0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c6bd4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001c6bd8:;
    {
        wr8(cpu->r[3], cpu->r[12]);
    }
L_001c6bdc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c6be0:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x4u);
    }
L_001c6be4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c6be8:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[12]);
    }
L_001c6bec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c6bf0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c6bf4:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[0]);
    }
L_001c6bf8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c6bfc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c6c00:;
    {
        wr8(cpu->r[3] + + 0x3u, cpu->r[5]);
    }
L_001c6c04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c6c08:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001c6c0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001c6c10:;
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
L_001c6c14:;
    {
        return fn_001d06ec(cpu);
    }
}

/* _ZN23CLobbyParameterAndQueryD1Ev @ 001c6c18 (arm) */
void fn_001c6c18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c6c18:;
    {
        cpu->r[3] = rd32(0x001c6c20u + + 0x5cu);
    }
L_001c6c1c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c6c20:;
    {
        cpu->r[2] = rd32(0x001c6c28u + + 0x58u);
    }
L_001c6c24:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c6c28:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_001c6c2c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c6c34u, cpu->r[3], 0, 0);
    }
L_001c6c30:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c6c34:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001c6c38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c6c3c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001c6c40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c6c44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6c60;
        }
    }
L_001c6c48:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c6c4c:;
    {
        cpu->r[14] = 0x001c6c50u; fn_0018ba20(cpu);
    }
L_001c6c50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c6c54:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c6c58:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c6c5c:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001c6c60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c6c64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6c74;
        }
    }
L_001c6c68:;
    {
        cpu->r[14] = 0x001c6c6cu; fn_0018ba20(cpu);
    }
L_001c6c6c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c6c70:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001c6c74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6c78:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6c7cu)) return;
    }
}

/* _ZN23CLobbyParameterAndQueryD0Ev @ 001c6c84 (arm) */
void fn_001c6c84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c6c84:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c6c88:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c6c8c:;
    {
        cpu->r[14] = 0x001c6c90u; fn_001c6c18(cpu);
    }
L_001c6c90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6c94:;
    {
        cpu->r[14] = 0x001c6c98u; fn_0018ba20(cpu);
    }
L_001c6c98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6c9c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6ca0u)) return;
    }
}

/* _ZN23CLobbyParameterAndQueryD2Ev @ 001c6ca0 (arm) */
void fn_001c6ca0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c6ca0:;
    {
        cpu->r[3] = rd32(0x001c6ca8u + + 0x5cu);
    }
L_001c6ca4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c6ca8:;
    {
        cpu->r[2] = rd32(0x001c6cb0u + + 0x58u);
    }
L_001c6cac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c6cb0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_001c6cb4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c6cbcu, cpu->r[3], 0, 0);
    }
L_001c6cb8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c6cbc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001c6cc0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c6cc4:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001c6cc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c6ccc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6ce8;
        }
    }
L_001c6cd0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c6cd4:;
    {
        cpu->r[14] = 0x001c6cd8u; fn_0018ba20(cpu);
    }
L_001c6cd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c6cdc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c6ce0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c6ce4:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001c6ce8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c6cec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c6cfc;
        }
    }
L_001c6cf0:;
    {
        cpu->r[14] = 0x001c6cf4u; fn_0018ba20(cpu);
    }
L_001c6cf4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c6cf8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001c6cfc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6d00:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6d04u)) return;
    }
}

/* _ZN15ConnectionLobby13sendRetryDataEv @ 001c6d0c (arm) */
void fn_001c6d0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c6d0c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c6d10:;
    {
        cpu->r[7] = 0x00001038u;
    }
L_001c6d14:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c6d18:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_001c6d1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c6d20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6d24u)) return;
        }
    }
L_001c6d24:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c6d28:;
    {
        cpu->r[14] = 0x001c6d2cu; fn_0018ba6c(cpu);
    }
L_001c6d2c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c6d30:;
    {
        cpu->r[14] = 0x001c6d34u; fn_001c9558(cpu);
    }
L_001c6d34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001c6d38:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001c6d3c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c6d40:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c6d44:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x68u);
    }
L_001c6d48:;
    {
        cpu->r[14] = 0x001c6d50u;
    }
L_001c6d4c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6d50u)) return;
    }
L_001c6d50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001c6d54:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001c6d58:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c6d5c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c6d60:;
    {
        cpu->r[14] = 0x001c6d68u;
    }
L_001c6d64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x60u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6d68u)) return;
    }
L_001c6d68:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c6d6c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001c6d70:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6d74:;
    {
        cpu->r[14] = 0x001c6d78u; guest_call(cpu, cpu->r[6]);
    }
L_001c6d78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6d7c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c6d80:;
    {
        cpu->r[14] = 0x001c6d84u; fn_001ca364(cpu);
    }
L_001c6d84:;
    {
        cpu->r[14] = 0x001c6d88u; fn_001d05bc(cpu);
    }
L_001c6d88:;
    {
        cpu->r[3] = 0x00001034u;
    }
L_001c6d8c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001c6d90:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6d94u)) return;
    }
}

/* _ZN15ConnectionLobby19keepConnectionAliveEv @ 001c6d94 (arm) */
void fn_001c6d94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c6d94:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c6d98:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c6d9c:;
    {
        cpu->r[14] = 0x001c6da0u; fn_001d05bc(cpu);
    }
L_001c6da0:;
    {
        cpu->r[3] = 0x00001030u;
    }
L_001c6da4:;
    {
        cpu->r[2] = 0x00002710u;
    }
L_001c6da8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001c6dac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001c6db0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001c6db4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c6db8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6dbcu)) return;
        }
    }
L_001c6dbc:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c6dc0:;
    {
        cpu->r[14] = 0x001c6dc4u; fn_0018ba6c(cpu);
    }
L_001c6dc4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c6dc8:;
    {
        cpu->r[14] = 0x001c6dccu; fn_001c9558(cpu);
    }
L_001c6dcc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6dd0:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_001c6dd4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c6dd8:;
    {
        cpu->r[14] = 0x001c6de0u;
    }
L_001c6ddc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6de0u)) return;
    }
L_001c6de0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c6de4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6de8:;
    {
        cpu->r[14] = 0x001c6df0u;
    }
L_001c6dec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6df0u)) return;
    }
L_001c6df0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6df4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c6df8:;
    {
        cpu->r[14] = 0x001c6dfcu; fn_001ca364(cpu);
    }
L_001c6dfc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c6e00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6e04u)) return;
    }
}

/* _ZN15ConnectionLobby13saveRetryDataEP10DataPacket @ 001c6e04 (arm) */
void fn_001c6e04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c6e04:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c6e08:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c6e0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c6e10:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6e14u)) return;
        }
    }
L_001c6e14:;
    {
        cpu->r[14] = 0x001c6e18u; fn_001ca118(cpu);
    }
L_001c6e18:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c6e1c:;
    {
        cpu->r[14] = 0x001c6e20u; fn_0018ba6c(cpu);
    }
L_001c6e20:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001c6e24:;
    {
        cpu->r[14] = 0x001c6e28u; fn_001c9558(cpu);
    }
L_001c6e28:;
    {
        cpu->r[3] = 0x00001038u;
    }
L_001c6e2c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c6e30:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001c6e34:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[7]);
    }
L_001c6e38:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c6e3c:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x68u);
    }
L_001c6e40:;
    {
        cpu->r[14] = 0x001c6e48u;
    }
L_001c6e44:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6e48u)) return;
    }
L_001c6e48:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c6e4c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001c6e50:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c6e54:;
    {
        cpu->r[14] = 0x001c6e5cu;
    }
L_001c6e58:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x60u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6e5cu)) return;
    }
L_001c6e5c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c6e60:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001c6e64:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c6e68:;
    {
        cpu->r[14] = 0x001c6e6cu; guest_call(cpu, cpu->r[5]);
    }
L_001c6e6c:;
    {
        cpu->r[14] = 0x001c6e70u; fn_001d05bc(cpu);
    }
L_001c6e70:;
    {
        cpu->r[3] = 0x00001034u;
    }
L_001c6e74:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001c6e78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6e7cu)) return;
    }
}

/* _ZN15ConnectionLobby34sendGetLobbyForFriendWithGameParamEihhPci @ 001c6e7c (arm) */
void fn_001c6e7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c6e7c:;
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
L_001c6e80:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c6e84:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c6e88:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001c6e8c:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001c6e90:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_001c6e94:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x20u);
    }
L_001c6e98:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x24u);
    }
L_001c6e9c:;
    {
        cpu->r[14] = 0x001c6ea0u; fn_0018ba6c(cpu);
    }
L_001c6ea0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c6ea4:;
    {
        cpu->r[14] = 0x001c6ea8u; fn_001c9558(cpu);
    }
L_001c6ea8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6eac:;
    {
        cpu->r[1] = 0x00000063u;
    }
L_001c6eb0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c6eb4:;
    {
        cpu->r[14] = 0x001c6ebcu;
    }
L_001c6eb8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6ebcu)) return;
    }
L_001c6ebc:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001c6ec0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c6ec4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6ec8:;
    {
        cpu->r[14] = 0x001c6ed0u;
    }
L_001c6ecc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6ed0u)) return;
    }
L_001c6ed0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c6ed4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c6ed8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6edc:;
    {
        cpu->r[14] = 0x001c6ee4u;
    }
L_001c6ee0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6ee4u)) return;
    }
L_001c6ee4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c6ee8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c6eec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6ef0:;
    {
        cpu->r[14] = 0x001c6ef8u;
    }
L_001c6ef4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6ef8u)) return;
    }
L_001c6ef8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001c6efc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c6f00:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6f04:;
    {
        cpu->r[14] = 0x001c6f0cu;
    }
L_001c6f08:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6f0cu)) return;
    }
L_001c6f0c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c6f10:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c6f14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6f18:;
    {
        cpu->r[14] = 0x001c6f20u;
    }
L_001c6f1c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6f20u)) return;
    }
L_001c6f20:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[8]);
    }
L_001c6f24:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c6f28:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c6f2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6f30:;
    {
        cpu->r[14] = 0x001c6f38u;
    }
L_001c6f34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6f38u)) return;
    }
L_001c6f38:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c6f3c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c6f40:;
    {
        cpu->r[14] = 0x001c6f48u;
    }
L_001c6f44:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6f48u)) return;
    }
L_001c6f48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6f4c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c6f50:;
    {
        cpu->r[14] = 0x001c6f54u; fn_001c6e04(cpu);
    }
L_001c6f54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6f58:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c6f5c:;
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
L_001c6f60:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby32sendGetLobbyForNameWithGameParamEPc @ 001c6f64 (arm) */
void fn_001c6f64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c6f64:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c6f68:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c6f6c:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c6f70:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001c6f74:;
    {
        cpu->r[14] = 0x001c6f78u; fn_0018ba6c(cpu);
    }
L_001c6f78:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c6f7c:;
    {
        cpu->r[14] = 0x001c6f80u; fn_001c9558(cpu);
    }
L_001c6f80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6f84:;
    {
        cpu->r[1] = 0x00000061u;
    }
L_001c6f88:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c6f8c:;
    {
        cpu->r[14] = 0x001c6f94u;
    }
L_001c6f90:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6f94u)) return;
    }
L_001c6f94:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c6f98:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c6f9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6fa0:;
    {
        cpu->r[14] = 0x001c6fa8u;
    }
L_001c6fa4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6fa8u)) return;
    }
L_001c6fa8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c6fac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c6fb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6fb4:;
    {
        cpu->r[14] = 0x001c6fbcu;
    }
L_001c6fb8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6fbcu)) return;
    }
L_001c6fbc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c6fc0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c6fc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6fc8:;
    {
        cpu->r[14] = 0x001c6fd0u;
    }
L_001c6fcc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c6fd0u)) return;
    }
L_001c6fd0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c6fd4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c6fd8:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4cu);
    }
L_001c6fdc:;
    {
        cpu->r[14] = 0x001c6fe0u; fn_001d0434(cpu);
    }
L_001c6fe0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c6fe4:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_001c6fe8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6fec:;
    {
        cpu->r[14] = 0x001c6ff0u; guest_call(cpu, cpu->r[6]);
    }
L_001c6ff0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c6ff4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c6ff8:;
    {
        cpu->r[14] = 0x001c7000u;
    }
L_001c6ffc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7000u)) return;
    }
L_001c7000:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7004:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c7008:;
    {
        cpu->r[14] = 0x001c700cu; fn_001c6e04(cpu);
    }
L_001c700c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7010:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c7014:;
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
L_001c7018:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby36sendGetLobbyListPackageWithGameParamEiiihP23CLobbyParameterAndQueryh @ 001c701c (arm) */
void fn_001c701c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c701c:;
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
L_001c7020:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001c7024:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c7028:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c702c:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001c7030:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001c7034:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001c7038:;
    {
        cpu->r[9] = rd8(cpu->r[13] + + 0x28u);
    }
L_001c703c:;
    {
        cpu->r[7] = rd8(cpu->r[13] + + 0x30u);
    }
L_001c7040:;
    {
        cpu->r[14] = 0x001c7044u; fn_0018ba6c(cpu);
    }
L_001c7044:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c7048:;
    {
        cpu->r[14] = 0x001c704cu; fn_001c9558(cpu);
    }
L_001c704c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7050:;
    {
        cpu->r[1] = 0x00000060u;
    }
L_001c7054:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7058:;
    {
        cpu->r[14] = 0x001c7060u;
    }
L_001c705c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7060u)) return;
    }
L_001c7060:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c7064:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7068:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c706c:;
    {
        cpu->r[14] = 0x001c7074u;
    }
L_001c7070:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7074u)) return;
    }
L_001c7074:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001c7078:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c707c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7080:;
    {
        cpu->r[14] = 0x001c7088u;
    }
L_001c7084:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7088u)) return;
    }
L_001c7088:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001c708c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7090:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7094:;
    {
        cpu->r[14] = 0x001c709cu;
    }
L_001c7098:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c709cu)) return;
    }
L_001c709c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001c70a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c712c;
        }
    }
L_001c70a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c70a8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c70ac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c70b0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001c70b4:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x4u;
        wr32(cpu->r[1] + - 0x4u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c70b8:;
    {
        cpu->r[14] = 0x001c70c0u;
    }
L_001c70bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c70c0u)) return;
    }
L_001c70c0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c70c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c70e8;
        }
    }
L_001c70c8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c70cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c70d0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c70d4:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x4u);
    }
L_001c70d8:;
    {
        cpu->r[14] = 0x001c70e0u;
    }
L_001c70dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c70e0u)) return;
    }
L_001c70e0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c70e4:;
    {
        cpu->r[14] = 0x001c70e8u; fn_0018ba20(cpu);
    }
L_001c70e8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c70ec:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c70f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c70f4:;
    {
        cpu->r[14] = 0x001c70fcu;
    }
L_001c70f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c70fcu)) return;
    }
L_001c70fc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7100:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7104:;
    {
        cpu->r[14] = 0x001c710cu;
    }
L_001c7108:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c710cu)) return;
    }
L_001c710c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7110:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c7114:;
    {
        cpu->r[14] = 0x001c7118u; fn_001c6e04(cpu);
    }
L_001c7118:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c711c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c7120:;
    {
        cpu->r[14] = 0x001c7124u; fn_001ca364(cpu);
    }
L_001c7124:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c7128:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c712cu)) return;
    }
L_001c712c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c7130:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7134:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7138:;
    {
        cpu->r[14] = 0x001c7140u;
    }
L_001c713c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7140u)) return;
    }
L_001c7140:;
    {
        goto L_001c70e8;
    }
}

/* _ZN15ConnectionLobby18sendKickOutPackageEPc @ 001c7144 (arm) */
void fn_001c7144(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c7144:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c7148:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c714c:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c7150:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001c7154:;
    {
        cpu->r[14] = 0x001c7158u; fn_0018ba6c(cpu);
    }
L_001c7158:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c715c:;
    {
        cpu->r[14] = 0x001c7160u; fn_001c9558(cpu);
    }
L_001c7160:;
    {
        cpu->r[1] = 0x00000018u;
    }
L_001c7164:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7168:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c716c:;
    {
        cpu->r[14] = 0x001c7174u;
    }
L_001c7170:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7174u)) return;
    }
L_001c7174:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7178:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c717c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x3cu);
    }
L_001c7180:;
    {
        cpu->r[14] = 0x001c7184u; fn_001d0434(cpu);
    }
L_001c7184:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c7188:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_001c718c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7190:;
    {
        cpu->r[14] = 0x001c7194u; guest_call(cpu, cpu->r[6]);
    }
L_001c7194:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7198:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c719c:;
    {
        cpu->r[14] = 0x001c71a4u;
    }
L_001c71a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c71a4u)) return;
    }
L_001c71a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c71a8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c71ac:;
    {
        cpu->r[14] = 0x001c71b0u; fn_001c6e04(cpu);
    }
L_001c71b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c71b4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c71b8:;
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
L_001c71bc:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby26sendCancelAutoMatchPackageEv @ 001c71c0 (arm) */
void fn_001c71c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c71c0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c71c4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c71c8:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c71cc:;
    {
        cpu->r[14] = 0x001c71d0u; fn_0018ba6c(cpu);
    }
L_001c71d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c71d4:;
    {
        cpu->r[14] = 0x001c71d8u; fn_001c9558(cpu);
    }
L_001c71d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c71dc:;
    {
        cpu->r[1] = 0x0000004au;
    }
L_001c71e0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c71e4:;
    {
        cpu->r[14] = 0x001c71ecu;
    }
L_001c71e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c71ecu)) return;
    }
L_001c71ec:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c71f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c71f4:;
    {
        cpu->r[14] = 0x001c71fcu;
    }
L_001c71f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c71fcu)) return;
    }
L_001c71fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7200:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c7204:;
    {
        cpu->r[14] = 0x001c7208u; fn_001c6e04(cpu);
    }
L_001c7208:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c720c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c7210:;
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
L_001c7214:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby20sendAutoMatchPackageEPcS0_ss @ 001c7218 (arm) */
void fn_001c7218(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c7218:;
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
L_001c721c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c7220:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c7224:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001c7228:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_001c722c:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001c7230:;
    {
        cpu->r[7] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x20u);
    }
L_001c7234:;
    {
        cpu->r[14] = 0x001c7238u; fn_0018ba6c(cpu);
    }
L_001c7238:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c723c:;
    {
        cpu->r[14] = 0x001c7240u; fn_001c9558(cpu);
    }
L_001c7240:;
    {
        cpu->r[1] = 0x00000038u;
    }
L_001c7244:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7248:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c724c:;
    {
        cpu->r[14] = 0x001c7254u;
    }
L_001c7250:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7254u)) return;
    }
L_001c7254:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7258:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001c725c:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x4cu);
    }
L_001c7260:;
    {
        cpu->r[14] = 0x001c7264u; fn_001d0434(cpu);
    }
L_001c7264:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001c7268:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_001c726c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7270:;
    {
        cpu->r[14] = 0x001c7274u; guest_call(cpu, cpu->r[10]);
    }
L_001c7274:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c7278:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c727c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7280:;
    {
        cpu->r[14] = 0x001c7288u;
    }
L_001c7284:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7288u)) return;
    }
L_001c7288:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c728c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7290:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7294:;
    {
        cpu->r[14] = 0x001c729cu;
    }
L_001c7298:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c729cu)) return;
    }
L_001c729c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c72a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c72a4:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4cu);
    }
L_001c72a8:;
    {
        cpu->r[14] = 0x001c72acu; fn_001d0434(cpu);
    }
L_001c72ac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c72b0:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_001c72b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c72b8:;
    {
        cpu->r[14] = 0x001c72bcu; guest_call(cpu, cpu->r[7]);
    }
L_001c72bc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c72c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c72c4:;
    {
        cpu->r[14] = 0x001c72ccu;
    }
L_001c72c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c72ccu)) return;
    }
L_001c72cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c72d0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c72d4:;
    {
        cpu->r[14] = 0x001c72d8u; fn_001c6e04(cpu);
    }
L_001c72d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c72dc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c72e0:;
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
L_001c72e4:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby21sendGetLobbyForFriendEihhPci @ 001c72e8 (arm) */
void fn_001c72e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c72e8:;
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
L_001c72ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c72f0:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c72f4:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001c72f8:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001c72fc:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_001c7300:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x20u);
    }
L_001c7304:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x24u);
    }
L_001c7308:;
    {
        cpu->r[14] = 0x001c730cu; fn_0018ba6c(cpu);
    }
L_001c730c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c7310:;
    {
        cpu->r[14] = 0x001c7314u; fn_001c9558(cpu);
    }
L_001c7314:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7318:;
    {
        cpu->r[1] = 0x00000036u;
    }
L_001c731c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7320:;
    {
        cpu->r[14] = 0x001c7328u;
    }
L_001c7324:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7328u)) return;
    }
L_001c7328:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001c732c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7330:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7334:;
    {
        cpu->r[14] = 0x001c733cu;
    }
L_001c7338:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c733cu)) return;
    }
L_001c733c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c7340:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7344:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7348:;
    {
        cpu->r[14] = 0x001c7350u;
    }
L_001c734c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7350u)) return;
    }
L_001c7350:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7354:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c7358:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c735c:;
    {
        cpu->r[14] = 0x001c7364u;
    }
L_001c7360:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7364u)) return;
    }
L_001c7364:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001c7368:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c736c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7370:;
    {
        cpu->r[14] = 0x001c7378u;
    }
L_001c7374:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7378u)) return;
    }
L_001c7378:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c737c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7380:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7384:;
    {
        cpu->r[14] = 0x001c738cu;
    }
L_001c7388:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c738cu)) return;
    }
L_001c738c:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[8]);
    }
L_001c7390:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c7394:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7398:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c739c:;
    {
        cpu->r[14] = 0x001c73a4u;
    }
L_001c73a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c73a4u)) return;
    }
L_001c73a4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c73a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c73ac:;
    {
        cpu->r[14] = 0x001c73b4u;
    }
L_001c73b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c73b4u)) return;
    }
L_001c73b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c73b8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c73bc:;
    {
        cpu->r[14] = 0x001c73c0u; fn_001c6e04(cpu);
    }
L_001c73c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c73c4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c73c8:;
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
L_001c73cc:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby19sendGetLobbyForNameEPc @ 001c73d0 (arm) */
void fn_001c73d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c73d0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c73d4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c73d8:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c73dc:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001c73e0:;
    {
        cpu->r[14] = 0x001c73e4u; fn_0018ba6c(cpu);
    }
L_001c73e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c73e8:;
    {
        cpu->r[14] = 0x001c73ecu; fn_001c9558(cpu);
    }
L_001c73ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c73f0:;
    {
        cpu->r[1] = 0x00000034u;
    }
L_001c73f4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c73f8:;
    {
        cpu->r[14] = 0x001c7400u;
    }
L_001c73fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7400u)) return;
    }
L_001c7400:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7404:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c7408:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c740c:;
    {
        cpu->r[14] = 0x001c7414u;
    }
L_001c7410:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7414u)) return;
    }
L_001c7414:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7418:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c741c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7420:;
    {
        cpu->r[14] = 0x001c7428u;
    }
L_001c7424:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7428u)) return;
    }
L_001c7428:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c742c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7430:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7434:;
    {
        cpu->r[14] = 0x001c743cu;
    }
L_001c7438:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c743cu)) return;
    }
L_001c743c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7440:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c7444:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4cu);
    }
L_001c7448:;
    {
        cpu->r[14] = 0x001c744cu; fn_001d0434(cpu);
    }
L_001c744c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c7450:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_001c7454:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7458:;
    {
        cpu->r[14] = 0x001c745cu; guest_call(cpu, cpu->r[6]);
    }
L_001c745c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7460:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7464:;
    {
        cpu->r[14] = 0x001c746cu;
    }
L_001c7468:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c746cu)) return;
    }
L_001c746c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7470:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c7474:;
    {
        cpu->r[14] = 0x001c7478u; fn_001c6e04(cpu);
    }
L_001c7478:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c747c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c7480:;
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
L_001c7484:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby16sendGetLobbyInfoEi @ 001c7488 (arm) */
void fn_001c7488(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c7488:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c748c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c7490:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c7494:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c7498:;
    {
        cpu->r[14] = 0x001c749cu; fn_0018ba6c(cpu);
    }
L_001c749c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c74a0:;
    {
        cpu->r[14] = 0x001c74a4u; fn_001c9558(cpu);
    }
L_001c74a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c74a8:;
    {
        cpu->r[1] = 0x00000016u;
    }
L_001c74ac:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c74b0:;
    {
        cpu->r[14] = 0x001c74b8u;
    }
L_001c74b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c74b8u)) return;
    }
L_001c74b8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c74bc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c74c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c74c4:;
    {
        cpu->r[14] = 0x001c74ccu;
    }
L_001c74c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c74ccu)) return;
    }
L_001c74cc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c74d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c74d4:;
    {
        cpu->r[14] = 0x001c74dcu;
    }
L_001c74d8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c74dcu)) return;
    }
L_001c74dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c74e0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c74e4:;
    {
        cpu->r[14] = 0x001c74e8u; fn_001c6e04(cpu);
    }
L_001c74e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c74ec:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c74f0:;
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
L_001c74f4:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby20sendSetUserParameterEPcs @ 001c74f8 (arm) */
void fn_001c74f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c74f8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c74fc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c7500:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c7504:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c7508:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001c750c:;
    {
        cpu->r[14] = 0x001c7510u; fn_0018ba6c(cpu);
    }
L_001c7510:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c7514:;
    {
        cpu->r[14] = 0x001c7518u; fn_001c9558(cpu);
    }
L_001c7518:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c751c:;
    {
        cpu->r[1] = 0x00000024u;
    }
L_001c7520:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7524:;
    {
        cpu->r[14] = 0x001c752cu;
    }
L_001c7528:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c752cu)) return;
    }
L_001c752c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001c7530:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c7534:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7538:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c753c:;
    {
        cpu->r[14] = 0x001c7544u;
    }
L_001c7540:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7544u)) return;
    }
L_001c7544:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7548:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c754c:;
    {
        cpu->r[14] = 0x001c7554u;
    }
L_001c7550:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7554u)) return;
    }
L_001c7554:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7558:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c755c:;
    {
        cpu->r[14] = 0x001c7560u; fn_001c6e04(cpu);
    }
L_001c7560:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7564:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c7568:;
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
L_001c756c:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby20sendSetGameParameterEPcsP23CLobbyParameterAndQuery @ 001c7570 (arm) */
void fn_001c7570(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c7570:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c7574:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c7578:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001c757c:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c7580:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001c7584:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001c7588:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001c758c:;
    {
        cpu->r[14] = 0x001c7590u; fn_0018ba6c(cpu);
    }
L_001c7590:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c7594:;
    {
        cpu->r[14] = 0x001c7598u; fn_001c9558(cpu);
    }
L_001c7598:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c759c:;
    {
        cpu->r[1] = 0x00000021u;
    }
L_001c75a0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c75a4:;
    {
        cpu->r[14] = 0x001c75acu;
    }
L_001c75a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c75acu)) return;
    }
L_001c75ac:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c75b0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001c75b4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c75b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c75bc:;
    {
        cpu->r[14] = 0x001c75c4u;
    }
L_001c75c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c75c4u)) return;
    }
L_001c75c4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001c75c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c7610;
        }
    }
L_001c75cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c75d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c75d4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c75d8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c75dc:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x4u;
        wr32(cpu->r[1] + - 0x4u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c75e0:;
    {
        cpu->r[14] = 0x001c75e8u;
    }
L_001c75e4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c75e8u)) return;
    }
L_001c75e8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c75ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c7610;
        }
    }
L_001c75f0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c75f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c75f8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c75fc:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x4u);
    }
L_001c7600:;
    {
        cpu->r[14] = 0x001c7608u;
    }
L_001c7604:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7608u)) return;
    }
L_001c7608:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c760c:;
    {
        cpu->r[14] = 0x001c7610u; fn_0018ba20(cpu);
    }
L_001c7610:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7614:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7618:;
    {
        cpu->r[14] = 0x001c7620u;
    }
L_001c761c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7620u)) return;
    }
L_001c7620:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7624:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c7628:;
    {
        cpu->r[14] = 0x001c762cu; fn_001c6e04(cpu);
    }
L_001c762c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7630:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c7634:;
    {
        cpu->r[14] = 0x001c7638u; fn_001ca364(cpu);
    }
L_001c7638:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c763c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7640u)) return;
    }
}

/* _ZN15ConnectionLobby22sendRejoinLobbyPackageEi @ 001c7640 (arm) */
void fn_001c7640(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c7640:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c7644:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c7648:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c764c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c7650:;
    {
        cpu->r[14] = 0x001c7654u; fn_0018ba6c(cpu);
    }
L_001c7654:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c7658:;
    {
        cpu->r[14] = 0x001c765cu; fn_001c9558(cpu);
    }
L_001c765c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7660:;
    {
        cpu->r[1] = 0x0000002du;
    }
L_001c7664:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7668:;
    {
        cpu->r[14] = 0x001c7670u;
    }
L_001c766c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7670u)) return;
    }
L_001c7670:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c7674:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7678:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c767c:;
    {
        cpu->r[14] = 0x001c7684u;
    }
L_001c7680:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7684u)) return;
    }
L_001c7684:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7688:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c768c:;
    {
        cpu->r[14] = 0x001c7694u;
    }
L_001c7690:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7694u)) return;
    }
L_001c7694:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7698:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c769c:;
    {
        cpu->r[14] = 0x001c76a0u; fn_001c6e04(cpu);
    }
L_001c76a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c76a4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c76a8:;
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
L_001c76ac:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby26sendSetPlayerStatusPackageEh @ 001c76b0 (arm) */
void fn_001c76b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c76b0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c76b4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c76b8:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c76bc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c76c0:;
    {
        cpu->r[14] = 0x001c76c4u; fn_0018ba6c(cpu);
    }
L_001c76c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c76c8:;
    {
        cpu->r[14] = 0x001c76ccu; fn_001c9558(cpu);
    }
L_001c76cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c76d0:;
    {
        cpu->r[1] = 0x00000027u;
    }
L_001c76d4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c76d8:;
    {
        cpu->r[14] = 0x001c76e0u;
    }
L_001c76dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c76e0u)) return;
    }
L_001c76e0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c76e4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c76e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c76ec:;
    {
        cpu->r[14] = 0x001c76f4u;
    }
L_001c76f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c76f4u)) return;
    }
L_001c76f4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c76f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c76fc:;
    {
        cpu->r[14] = 0x001c7704u;
    }
L_001c7700:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7704u)) return;
    }
L_001c7704:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7708:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c770c:;
    {
        cpu->r[14] = 0x001c7710u; fn_001c6e04(cpu);
    }
L_001c7710:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7714:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c7718:;
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
L_001c771c:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby25sendLunchLobbyGamePackageEv @ 001c7720 (arm) */
void fn_001c7720(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c7720:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c7724:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c7728:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c772c:;
    {
        cpu->r[14] = 0x001c7730u; fn_0018ba6c(cpu);
    }
L_001c7730:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c7734:;
    {
        cpu->r[14] = 0x001c7738u; fn_001c9558(cpu);
    }
L_001c7738:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c773c:;
    {
        cpu->r[1] = 0x0000002au;
    }
L_001c7740:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7744:;
    {
        cpu->r[14] = 0x001c774cu;
    }
L_001c7748:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c774cu)) return;
    }
L_001c774c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7750:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7754:;
    {
        cpu->r[14] = 0x001c775cu;
    }
L_001c7758:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c775cu)) return;
    }
L_001c775c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7760:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c7764:;
    {
        cpu->r[14] = 0x001c7768u; fn_001c6e04(cpu);
    }
L_001c7768:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c776c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c7770:;
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
L_001c7774:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby21sendLeaveLobbyPackageEv @ 001c7778 (arm) */
void fn_001c7778(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c7778:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c777c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c7780:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c7784:;
    {
        cpu->r[14] = 0x001c7788u; fn_0018ba6c(cpu);
    }
L_001c7788:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c778c:;
    {
        cpu->r[14] = 0x001c7790u; fn_001c9558(cpu);
    }
L_001c7790:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7794:;
    {
        cpu->r[1] = 0x00000013u;
    }
L_001c7798:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c779c:;
    {
        cpu->r[14] = 0x001c77a4u;
    }
L_001c77a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c77a4u)) return;
    }
L_001c77a4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c77a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c77ac:;
    {
        cpu->r[14] = 0x001c77b4u;
    }
L_001c77b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c77b4u)) return;
    }
L_001c77b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c77b8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c77bc:;
    {
        cpu->r[14] = 0x001c77c0u; fn_001c6e04(cpu);
    }
L_001c77c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c77c4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c77c8:;
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
L_001c77cc:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby23sendGetLobbyListPackageEiiihP23CLobbyParameterAndQueryh @ 001c77d0 (arm) */
void fn_001c77d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c77d0:;
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
L_001c77d4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001c77d8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c77dc:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c77e0:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001c77e4:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001c77e8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001c77ec:;
    {
        cpu->r[9] = rd8(cpu->r[13] + + 0x28u);
    }
L_001c77f0:;
    {
        cpu->r[7] = rd8(cpu->r[13] + + 0x30u);
    }
L_001c77f4:;
    {
        cpu->r[14] = 0x001c77f8u; fn_0018ba6c(cpu);
    }
L_001c77f8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c77fc:;
    {
        cpu->r[14] = 0x001c7800u; fn_001c9558(cpu);
    }
L_001c7800:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7804:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_001c7808:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c780c:;
    {
        cpu->r[14] = 0x001c7814u;
    }
L_001c7810:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7814u)) return;
    }
L_001c7814:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c7818:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c781c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7820:;
    {
        cpu->r[14] = 0x001c7828u;
    }
L_001c7824:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7828u)) return;
    }
L_001c7828:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001c782c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7830:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7834:;
    {
        cpu->r[14] = 0x001c783cu;
    }
L_001c7838:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c783cu)) return;
    }
L_001c783c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001c7840:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7844:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7848:;
    {
        cpu->r[14] = 0x001c7850u;
    }
L_001c784c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7850u)) return;
    }
L_001c7850:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001c7854:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c78e0;
        }
    }
L_001c7858:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c785c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c7860:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001c7864:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001c7868:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x4u;
        wr32(cpu->r[1] + - 0x4u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c786c:;
    {
        cpu->r[14] = 0x001c7874u;
    }
L_001c7870:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7874u)) return;
    }
L_001c7874:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c7878:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c789c;
        }
    }
L_001c787c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7880:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7884:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c7888:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x4u);
    }
L_001c788c:;
    {
        cpu->r[14] = 0x001c7894u;
    }
L_001c7890:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7894u)) return;
    }
L_001c7894:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c7898:;
    {
        cpu->r[14] = 0x001c789cu; fn_0018ba20(cpu);
    }
L_001c789c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c78a0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c78a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c78a8:;
    {
        cpu->r[14] = 0x001c78b0u;
    }
L_001c78ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c78b0u)) return;
    }
L_001c78b0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c78b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c78b8:;
    {
        cpu->r[14] = 0x001c78c0u;
    }
L_001c78bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c78c0u)) return;
    }
L_001c78c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c78c4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c78c8:;
    {
        cpu->r[14] = 0x001c78ccu; fn_001c6e04(cpu);
    }
L_001c78cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c78d0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c78d4:;
    {
        cpu->r[14] = 0x001c78d8u; fn_001ca364(cpu);
    }
L_001c78d8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c78dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c78e0u)) return;
    }
L_001c78e0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c78e4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c78e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c78ec:;
    {
        cpu->r[14] = 0x001c78f4u;
    }
L_001c78f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c78f4u)) return;
    }
L_001c78f4:;
    {
        goto L_001c789c;
    }
}

/* _ZN15ConnectionLobby20sendJoinLobbyPackageEihPc @ 001c78f8 (arm) */
void fn_001c78f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c78f8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c78fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c7900:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c7904:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001c7908:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001c790c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001c7910:;
    {
        cpu->r[14] = 0x001c7914u; fn_0018ba6c(cpu);
    }
L_001c7914:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c7918:;
    {
        cpu->r[14] = 0x001c791cu; fn_001c9558(cpu);
    }
L_001c791c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7920:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_001c7924:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7928:;
    {
        cpu->r[14] = 0x001c7930u;
    }
L_001c792c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7930u)) return;
    }
L_001c7930:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c7934:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7938:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c793c:;
    {
        cpu->r[14] = 0x001c7944u;
    }
L_001c7940:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7944u)) return;
    }
L_001c7944:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c7948:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c794c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7950:;
    {
        cpu->r[14] = 0x001c7958u;
    }
L_001c7954:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7958u)) return;
    }
L_001c7958:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001c795c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[6];
        }
    }
L_001c7960:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c7970;
        }
    }
L_001c7964:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c7968:;
    {
        cpu->r[14] = 0x001c796cu; fn_001d0434(cpu);
    }
L_001c796c:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001c7970:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_001c7974:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c7978:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c797c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7980:;
    {
        cpu->r[14] = 0x001c7988u;
    }
L_001c7984:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7988u)) return;
    }
L_001c7988:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c798c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7990:;
    {
        cpu->r[14] = 0x001c7998u;
    }
L_001c7994:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7998u)) return;
    }
L_001c7998:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c799c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c79a0:;
    {
        cpu->r[14] = 0x001c79a4u; fn_001c6e04(cpu);
    }
L_001c79a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c79a8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c79ac:;
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
L_001c79b0:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby22sendCreateLobbyPackageEiPchhiS0_S0_P23CLobbyParameterAndQuery @ 001c79b4 (arm) */
void fn_001c79b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c79b4:;
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
L_001c79b8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001c79bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c79c0:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c79c4:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_001c79c8:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001c79cc:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001c79d0:;
    {
        cpu->r[9] = rd8(cpu->r[13] + + 0x30u);
    }
L_001c79d4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x40u);
    }
L_001c79d8:;
    {
        cpu->r[14] = 0x001c79dcu; fn_0018ba6c(cpu);
    }
L_001c79dc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c79e0:;
    {
        cpu->r[14] = 0x001c79e4u; fn_001c9558(cpu);
    }
L_001c79e4:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_001c79e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c79ec:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c79f0:;
    {
        cpu->r[14] = 0x001c79f8u;
    }
L_001c79f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c79f8u)) return;
    }
L_001c79f8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c79fc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001c7a00:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x3cu);
    }
L_001c7a04:;
    {
        cpu->r[14] = 0x001c7a08u; fn_001d0434(cpu);
    }
L_001c7a08:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001c7a0c:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_001c7a10:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7a14:;
    {
        cpu->r[14] = 0x001c7a18u; guest_call(cpu, cpu->r[10]);
    }
L_001c7a18:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c7a1c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7a20:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7a24:;
    {
        cpu->r[14] = 0x001c7a2cu;
    }
L_001c7a28:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7a2cu)) return;
    }
L_001c7a2c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001c7a30:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7a34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7a38:;
    {
        cpu->r[14] = 0x001c7a40u;
    }
L_001c7a3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7a40u)) return;
    }
L_001c7a40:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x34u);
    }
L_001c7a44:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7a48:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7a4c:;
    {
        cpu->r[14] = 0x001c7a54u;
    }
L_001c7a50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7a54u)) return;
    }
L_001c7a54:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7a58:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_001c7a5c:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x4cu);
    }
L_001c7a60:;
    {
        cpu->r[14] = 0x001c7a64u; fn_001d0434(cpu);
    }
L_001c7a64:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_001c7a68:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_001c7a6c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7a70:;
    {
        cpu->r[14] = 0x001c7a74u; guest_call(cpu, cpu->r[8]);
    }
L_001c7a74:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001c7a78:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[6];
        }
    }
L_001c7a7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c7a8c;
        }
    }
L_001c7a80:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c7a84:;
    {
        cpu->r[14] = 0x001c7a88u; fn_001d0434(cpu);
    }
L_001c7a88:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001c7a8c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c7a90:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_001c7a94:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7a98:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7a9c:;
    {
        cpu->r[14] = 0x001c7aa4u;
    }
L_001c7aa0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7aa4u)) return;
    }
L_001c7aa4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001c7aa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c7af0;
        }
    }
L_001c7aac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c7ab0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c7ab4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c7ab8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001c7abc:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x4u;
        wr32(cpu->r[1] + - 0x4u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c7ac0:;
    {
        cpu->r[14] = 0x001c7ac8u;
    }
L_001c7ac4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7ac8u)) return;
    }
L_001c7ac8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c7acc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c7af0;
        }
    }
L_001c7ad0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7ad4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7ad8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c7adc:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x4u);
    }
L_001c7ae0:;
    {
        cpu->r[14] = 0x001c7ae8u;
    }
L_001c7ae4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7ae8u)) return;
    }
L_001c7ae8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c7aec:;
    {
        cpu->r[14] = 0x001c7af0u; fn_0018ba20(cpu);
    }
L_001c7af0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7af4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7af8:;
    {
        cpu->r[14] = 0x001c7b00u;
    }
L_001c7afc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7b00u)) return;
    }
L_001c7b00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7b04:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c7b08:;
    {
        cpu->r[14] = 0x001c7b0cu; fn_001c6e04(cpu);
    }
L_001c7b0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7b10:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c7b14:;
    {
        cpu->r[14] = 0x001c7b18u; fn_001ca364(cpu);
    }
L_001c7b18:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001c7b1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7b20u)) return;
    }
}

/* _ZN15ConnectionLobby21sendLobbyLoginPackageElPcsh @ 001c7b20 (arm) */
void fn_001c7b20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c7b20:;
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
L_001c7b24:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c7b28:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c7b2c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001c7b30:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001c7b34:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001c7b38:;
    {
        cpu->r[6] = rd8(cpu->r[13] + + 0x20u);
    }
L_001c7b3c:;
    {
        cpu->r[14] = 0x001c7b40u; fn_0018ba6c(cpu);
    }
L_001c7b40:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c7b44:;
    {
        cpu->r[14] = 0x001c7b48u; fn_001c9558(cpu);
    }
L_001c7b48:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7b4c:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001c7b50:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7b54:;
    {
        cpu->r[14] = 0x001c7b5cu;
    }
L_001c7b58:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7b5cu)) return;
    }
L_001c7b5c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001c7b60:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7b64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7b68:;
    {
        cpu->r[14] = 0x001c7b70u;
    }
L_001c7b6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7b70u)) return;
    }
L_001c7b70:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001c7b74:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c7b78:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7b7c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7b80:;
    {
        cpu->r[14] = 0x001c7b88u;
    }
L_001c7b84:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7b88u)) return;
    }
L_001c7b88:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c7b8c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7b90:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7b94:;
    {
        cpu->r[14] = 0x001c7b9cu;
    }
L_001c7b98:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7b9cu)) return;
    }
L_001c7b9c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7ba0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7ba4:;
    {
        cpu->r[14] = 0x001c7bacu;
    }
L_001c7ba8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7bacu)) return;
    }
L_001c7bac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7bb0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c7bb4:;
    {
        cpu->r[14] = 0x001c7bb8u; fn_001c6e04(cpu);
    }
L_001c7bb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7bbc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c7bc0:;
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
L_001c7bc4:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby24sendKickOutPlayerPackageEPc @ 001c7bc8 (arm) */
void fn_001c7bc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c7bc8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c7bcc:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c7bd0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c7bd4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7bd8u)) return;
        }
    }
L_001c7bd8:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c7bdc:;
    {
        cpu->r[14] = 0x001c7be0u; fn_0018ba6c(cpu);
    }
L_001c7be0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c7be4:;
    {
        cpu->r[14] = 0x001c7be8u; fn_001c9558(cpu);
    }
L_001c7be8:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001c7bec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7bf0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7bf4:;
    {
        cpu->r[14] = 0x001c7bfcu;
    }
L_001c7bf8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7bfcu)) return;
    }
L_001c7bfc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7c00:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001c7c04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7c08:;
    {
        cpu->r[14] = 0x001c7c10u;
    }
L_001c7c0c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7c10u)) return;
    }
L_001c7c10:;
    {
        cpu->r[1] = 0x0000006bu;
    }
L_001c7c14:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7c18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7c1c:;
    {
        cpu->r[14] = 0x001c7c24u;
    }
L_001c7c20:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7c24u)) return;
    }
L_001c7c24:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7c28:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c7c2c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x3cu);
    }
L_001c7c30:;
    {
        cpu->r[14] = 0x001c7c34u; fn_001d0434(cpu);
    }
L_001c7c34:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c7c38:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_001c7c3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7c40:;
    {
        cpu->r[14] = 0x001c7c44u; guest_call(cpu, cpu->r[6]);
    }
L_001c7c44:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7c48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7c4c:;
    {
        cpu->r[14] = 0x001c7c54u;
    }
L_001c7c50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7c54u)) return;
    }
L_001c7c54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7c58:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c7c5c:;
    {
        cpu->r[14] = 0x001c7c60u; fn_001c6e04(cpu);
    }
L_001c7c60:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7c64:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c7c68:;
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
L_001c7c6c:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby24sendUpdateSessionPackageEi @ 001c7c70 (arm) */
void fn_001c7c70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c7c70:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c7c74:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c7c78:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c7c7c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c7c80:;
    {
        cpu->r[14] = 0x001c7c84u; fn_0018ba6c(cpu);
    }
L_001c7c84:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c7c88:;
    {
        cpu->r[14] = 0x001c7c8cu; fn_001c9558(cpu);
    }
L_001c7c8c:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001c7c90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7c94:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7c98:;
    {
        cpu->r[14] = 0x001c7ca0u;
    }
L_001c7c9c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7ca0u)) return;
    }
L_001c7ca0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7ca4:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001c7ca8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7cac:;
    {
        cpu->r[14] = 0x001c7cb4u;
    }
L_001c7cb0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7cb4u)) return;
    }
L_001c7cb4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7cb8:;
    {
        cpu->r[1] = 0x00000065u;
    }
L_001c7cbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7cc0:;
    {
        cpu->r[14] = 0x001c7cc8u;
    }
L_001c7cc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7cc8u)) return;
    }
L_001c7cc8:;
    {
        cpu->r[1] = (uint32_t)((uint8_t)cpu->r[6]);
    }
L_001c7ccc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7cd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7cd4:;
    {
        cpu->r[14] = 0x001c7cdcu;
    }
L_001c7cd8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7cdcu)) return;
    }
L_001c7cdc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7ce0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7ce4:;
    {
        cpu->r[14] = 0x001c7cecu;
    }
L_001c7ce8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7cecu)) return;
    }
L_001c7cec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7cf0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c7cf4:;
    {
        cpu->r[14] = 0x001c7cf8u; fn_001c6e04(cpu);
    }
L_001c7cf8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7cfc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c7d00:;
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
L_001c7d04:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby21sendFinishGamePackageEv @ 001c7d08 (arm) */
void fn_001c7d08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c7d08:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c7d0c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c7d10:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c7d14:;
    {
        cpu->r[14] = 0x001c7d18u; fn_0018ba6c(cpu);
    }
L_001c7d18:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c7d1c:;
    {
        cpu->r[14] = 0x001c7d20u; fn_001c9558(cpu);
    }
L_001c7d20:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001c7d24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7d28:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7d2c:;
    {
        cpu->r[14] = 0x001c7d34u;
    }
L_001c7d30:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7d34u)) return;
    }
L_001c7d34:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7d38:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001c7d3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7d40:;
    {
        cpu->r[14] = 0x001c7d48u;
    }
L_001c7d44:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7d48u)) return;
    }
L_001c7d48:;
    {
        cpu->r[1] = 0x00000066u;
    }
L_001c7d4c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7d50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7d54:;
    {
        cpu->r[14] = 0x001c7d5cu;
    }
L_001c7d58:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7d5cu)) return;
    }
L_001c7d5c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7d60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7d64:;
    {
        cpu->r[14] = 0x001c7d6cu;
    }
L_001c7d68:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7d6cu)) return;
    }
L_001c7d6c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7d70:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c7d74:;
    {
        cpu->r[14] = 0x001c7d78u; fn_001c6e04(cpu);
    }
L_001c7d78:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7d7c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c7d80:;
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
L_001c7d84:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby20sendStartGamePackageEv @ 001c7d88 (arm) */
void fn_001c7d88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c7d88:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c7d8c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c7d90:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c7d94:;
    {
        cpu->r[14] = 0x001c7d98u; fn_0018ba6c(cpu);
    }
L_001c7d98:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c7d9c:;
    {
        cpu->r[14] = 0x001c7da0u; fn_001c9558(cpu);
    }
L_001c7da0:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001c7da4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7da8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7dac:;
    {
        cpu->r[14] = 0x001c7db4u;
    }
L_001c7db0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7db4u)) return;
    }
L_001c7db4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7db8:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001c7dbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7dc0:;
    {
        cpu->r[14] = 0x001c7dc8u;
    }
L_001c7dc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7dc8u)) return;
    }
L_001c7dc8:;
    {
        cpu->r[1] = 0x00000073u;
    }
L_001c7dcc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7dd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7dd4:;
    {
        cpu->r[14] = 0x001c7ddcu;
    }
L_001c7dd8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7ddcu)) return;
    }
L_001c7ddc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c7de0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7de4:;
    {
        cpu->r[14] = 0x001c7decu;
    }
L_001c7de8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7decu)) return;
    }
L_001c7dec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7df0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c7df4:;
    {
        cpu->r[14] = 0x001c7df8u; fn_001c6e04(cpu);
    }
L_001c7df8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7dfc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c7e00:;
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
L_001c7e04:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby29sendListSessionsByDataPackageEhiPci @ 001c7e08 (arm) */
void fn_001c7e08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c7e08:;
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
L_001c7e0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c7e10:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c7e14:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001c7e18:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001c7e1c:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001c7e20:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x20u);
    }
L_001c7e24:;
    {
        cpu->r[14] = 0x001c7e28u; fn_0018ba6c(cpu);
    }
L_001c7e28:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c7e2c:;
    {
        cpu->r[14] = 0x001c7e30u; fn_001c9558(cpu);
    }
L_001c7e30:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001c7e34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7e38:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7e3c:;
    {
        cpu->r[14] = 0x001c7e44u;
    }
L_001c7e40:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7e44u)) return;
    }
L_001c7e44:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7e48:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001c7e4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7e50:;
    {
        cpu->r[14] = 0x001c7e58u;
    }
L_001c7e54:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7e58u)) return;
    }
L_001c7e58:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7e5c:;
    {
        cpu->r[1] = 0x0000006cu;
    }
L_001c7e60:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7e64:;
    {
        cpu->r[14] = 0x001c7e6cu;
    }
L_001c7e68:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7e6cu)) return;
    }
L_001c7e6c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001c7e70:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7e74:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7e78:;
    {
        cpu->r[14] = 0x001c7e80u;
    }
L_001c7e7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7e80u)) return;
    }
L_001c7e80:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c7e84:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7e88:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7e8c:;
    {
        cpu->r[14] = 0x001c7e94u;
    }
L_001c7e90:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7e94u)) return;
    }
L_001c7e94:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7e98:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_001c7e9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7ea0:;
    {
        cpu->r[14] = 0x001c7ea8u;
    }
L_001c7ea4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7ea8u)) return;
    }
L_001c7ea8:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[7]);
    }
L_001c7eac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c7eb0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7eb4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7eb8:;
    {
        cpu->r[14] = 0x001c7ec0u;
    }
L_001c7ebc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7ec0u)) return;
    }
L_001c7ec0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7ec4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7ec8:;
    {
        cpu->r[14] = 0x001c7ed0u;
    }
L_001c7ecc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7ed0u)) return;
    }
L_001c7ed0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7ed4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c7ed8:;
    {
        cpu->r[14] = 0x001c7edcu; fn_001c6e04(cpu);
    }
L_001c7edc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7ee0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c7ee4:;
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
L_001c7ee8:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby29sendListSessionsByNamePackageEhiPc @ 001c7eec (arm) */
void fn_001c7eec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c7eec:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c7ef0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c7ef4:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c7ef8:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001c7efc:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001c7f00:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001c7f04:;
    {
        cpu->r[14] = 0x001c7f08u; fn_0018ba6c(cpu);
    }
L_001c7f08:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c7f0c:;
    {
        cpu->r[14] = 0x001c7f10u; fn_001c9558(cpu);
    }
L_001c7f10:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001c7f14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7f18:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7f1c:;
    {
        cpu->r[14] = 0x001c7f24u;
    }
L_001c7f20:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7f24u)) return;
    }
L_001c7f24:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7f28:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001c7f2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7f30:;
    {
        cpu->r[14] = 0x001c7f38u;
    }
L_001c7f34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7f38u)) return;
    }
L_001c7f38:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7f3c:;
    {
        cpu->r[1] = 0x0000006cu;
    }
L_001c7f40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7f44:;
    {
        cpu->r[14] = 0x001c7f4cu;
    }
L_001c7f48:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7f4cu)) return;
    }
L_001c7f4c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c7f50:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7f54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7f58:;
    {
        cpu->r[14] = 0x001c7f60u;
    }
L_001c7f5c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7f60u)) return;
    }
L_001c7f60:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c7f64:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7f68:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7f6c:;
    {
        cpu->r[14] = 0x001c7f74u;
    }
L_001c7f70:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7f74u)) return;
    }
L_001c7f74:;
    {
        cpu->r[1] = 0x0000006eu;
    }
L_001c7f78:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7f7c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7f80:;
    {
        cpu->r[14] = 0x001c7f88u;
    }
L_001c7f84:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7f88u)) return;
    }
L_001c7f88:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7f8c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c7f90:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x3cu);
    }
L_001c7f94:;
    {
        cpu->r[14] = 0x001c7f98u; fn_001d0434(cpu);
    }
L_001c7f98:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c7f9c:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_001c7fa0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7fa4:;
    {
        cpu->r[14] = 0x001c7fa8u; guest_call(cpu, cpu->r[7]);
    }
L_001c7fa8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c7fac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7fb0:;
    {
        cpu->r[14] = 0x001c7fb8u;
    }
L_001c7fb4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c7fb8u)) return;
    }
L_001c7fb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7fbc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c7fc0:;
    {
        cpu->r[14] = 0x001c7fc4u; fn_001c6e04(cpu);
    }
L_001c7fc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c7fc8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c7fcc:;
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
L_001c7fd0:;
    {
        return fn_001ca364(cpu);
    }
}
