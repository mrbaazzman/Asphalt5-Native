#include "functions.h"

/* init_array_20 @ 001074f0 (arm) */
void fn_001074f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001074f0:;
    {
        cpu->r[2] = rd32(0x001074f8u + + 0x68u);
    }
L_001074f4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001074fcu + + 0x60u);
    }
L_001074f8:;
    {
        cpu->r[0] = rd32(0x00107500u + + 0x64u);
    }
L_001074fc:;
    {
        cpu->r[2] = add_flags(cpu, 0x00107504u, cpu->r[2], 0, 0);
    }
L_00107500:;
    {
        cpu->r[3] = rd32(0x00107508u + + 0x60u);
    }
L_00107504:;
    {
        cpu->r[1] = rd32(0x0010750cu + + 0x60u);
    }
L_00107508:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_0010750c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00107510:;
    {
        cpu->r[1] = add_flags(cpu, 0x00107518u, cpu->r[1], 0, 0);
    }
L_00107514:;
    {
        cpu->r[0] = rd32(0x0010751cu + + 0x54u);
    }
L_00107518:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0010751c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x0000012cu, 0, 0);
    }
L_00107520:;
    {
        cpu->r[0] = add_flags(cpu, 0x00107528u, cpu->r[0], 0, 0);
    }
L_00107524:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00107528:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0010752c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[12], 0x00000028u, 1, 0);
    }
L_00107530:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000000au, 1, 0);
    }
L_00107534:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[4]);
    }
L_00107538:;
    {
        wr32(cpu->r[1], cpu->r[12]);
    }
L_0010753c:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00107540:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00107544:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00107548:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0010754c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00107550:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010753c;
        }
    }
L_00107554:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00107558:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN26GS_ChoseTuningCategoryMenu22ProcessOnMouseButtonUpEv @ 00107574 (arm) */
void fn_00107574(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00107574:;
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
L_00107578:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0010757c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00107580:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00107584:;
    {
        cpu->r[5] = rd32(0x0010758cu + + 0x250u);
    }
L_00107588:;
    {
        cpu->r[14] = 0x0010758cu; fn_00110c40(cpu);
    }
L_0010758c:;
    {
        cpu->r[6] = rd32(cpu->r[7] + + 0x94u);
    }
L_00107590:;
    {
        cpu->r[5] = add_flags(cpu, 0x00107598u, cpu->r[5], 0, 0);
    }
L_00107594:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_00107598:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001075a8;
        }
    }
L_0010759c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001075a0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001075a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001075a8u)) return;
    }
L_001075a8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001075ac:;
    {
        cpu->r[1] = rd32(0x001075b4u + + 0x22cu);
    }
L_001075b0:;
    {
        wr32(cpu->r[7] + + 0x950u, cpu->r[3]);
    }
L_001075b4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001075b8:;
    {
        cpu->r[3] = rd32(0x001075c0u + + 0x224u);
    }
L_001075bc:;
    {
        cpu->r[8] = 0x00001c3cu;
    }
L_001075c0:;
    {
        cpu->r[11] = rd32(0x001075c8u + + 0x220u);
    }
L_001075c4:;
    {
        cpu->r[10] = 0x0000193cu;
    }
L_001075c8:;
    {
        cpu->r[9] = rd32(0x001075d0u + + 0x21cu);
    }
L_001075cc:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001075d4u + + 0x200u);
    }
L_001075d0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_001075d4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_001075d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010766c;
        }
    }
L_001075dc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000005u, 1, 1);
    }
L_001075e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00107684;
        }
    }
L_001075e4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x950u);
    }
L_001075e8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001075ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010759c;
        }
    }
L_001075f0:;
    {
        cpu->r[2] = rd32(0x001075f8u + + 0x1f8u);
    }
L_001075f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001075f8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00107600u + + 0x1d8u);
    }
L_001075fc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00107600:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00107604:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2]);
    }
L_00107608:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_0010760c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00107610:;
    {
        cpu->r[2] = rd32(0x00107618u + + 0x1dcu);
    }
L_00107614:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00107618:;
    {
        wr8(cpu->r[7] + + 0x954u, cpu->r[1]);
    }
L_0010761c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00107620:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00107624:;
    {
        cpu->r[2] = rd32(0x0010762cu + + 0x1ccu);
    }
L_00107628:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0010762c:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00107630:;
    {
        cpu->r[2] = rd32(0x00107638u + + 0x1c4u);
    }
L_00107634:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00107638:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010763c:;
    {
        cpu->r[2] = rd32(0x00107644u + + 0x1bcu);
    }
L_00107640:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00107644:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00107648:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_0010764c:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_00107748;
        case 1: goto L_00107764;
        case 2: goto L_00107780;
        case 3: goto L_0010779c;
        case 4: goto L_001077b8;
        case 5: goto L_0010772c;
        default: guest_unimplemented(cpu, 0x0010764cu); return; }
        }
    }
L_00107650:;
    {
        goto L_0010759c;
    }
L_0010766c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00107670:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00107674:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00107678:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_0010767c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00107680:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00107720;
        }
    }
L_00107684:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_00107688:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010768c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_00107690:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00107694:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00107698:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_0010769c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_001076a0:;
    {
        cpu->r[14] = 0x001076a4u; fn_00107318(cpu);
    }
L_001076a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001076a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00107718;
        }
    }
L_001076ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001076b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_001076b4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001076bcu + + 0x118u);
    }
L_001076b8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001076bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001076c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001076c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_001076c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001076cc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001076d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_001076d4:;
    {
        vfp_sync_flags(cpu);
    }
L_001076d8:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_001076dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001076e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00107708;
        }
    }
L_001076e4:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
    }
L_001076e8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001076ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001076f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_001076f4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001076f8:;
    {
        vfp_sync_flags(cpu);
    }
L_001076fc:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_00107700:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_00107704:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001076e4;
        }
    }
L_00107708:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_0010770c:;
    {
        vfp_sync_flags(cpu);
    }
L_00107710:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,16) = *vfp_s(cpu,15);
        }
    }
L_00107714:;
    {
        if (cond_test(cpu, 5)) {
        wr32(cpu->r[7] + + 0x950u, cpu->r[4]);
        }
    }
L_00107718:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000005u, 1, 1);
    }
L_0010771c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001075e4;
        }
    }
L_00107720:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00107724:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00107728:;
    {
        goto L_001075d4;
    }
L_0010772c:;
    {
        cpu->r[3] = 0x000005cdu;
    }
L_00107730:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00107734:;
    {
        wr32(cpu->r[7] + + 0xc4u, cpu->r[3]);
    }
L_00107738:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0010773c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00107740:;
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
L_00107744:;
    {
        return fn_0010df70(cpu);
    }
L_00107748:;
    {
        cpu->r[3] = 0x000005c9u;
    }
L_0010774c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00107750:;
    {
        wr32(cpu->r[7] + + 0xc4u, cpu->r[3]);
    }
L_00107754:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00107758:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0010775c:;
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
L_00107760:;
    {
        return fn_0010df70(cpu);
    }
L_00107764:;
    {
        cpu->r[3] = 0x000005c8u;
    }
L_00107768:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010776c:;
    {
        wr32(cpu->r[7] + + 0xc4u, cpu->r[3]);
    }
L_00107770:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00107774:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00107778:;
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
L_0010777c:;
    {
        return fn_0010df70(cpu);
    }
L_00107780:;
    {
        cpu->r[3] = 0x00000631u;
    }
L_00107784:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00107788:;
    {
        wr32(cpu->r[7] + + 0xc4u, cpu->r[3]);
    }
L_0010778c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00107790:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00107794:;
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
L_00107798:;
    {
        return fn_0010df70(cpu);
    }
L_0010779c:;
    {
        cpu->r[3] = 0x00000632u;
    }
L_001077a0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001077a4:;
    {
        wr32(cpu->r[7] + + 0xc4u, cpu->r[3]);
    }
L_001077a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001077ac:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001077b0:;
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
L_001077b4:;
    {
        return fn_0010df70(cpu);
    }
L_001077b8:;
    {
        cpu->r[3] = 0x00000633u;
    }
L_001077bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001077c0:;
    {
        wr32(cpu->r[7] + + 0xc4u, cpu->r[3]);
    }
L_001077c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001077c8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001077cc:;
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
L_001077d0:;
    {
        return fn_0010df70(cpu);
    }
}

/* _ZN26GS_ChoseTuningCategoryMenu8DoActionEii @ 00107804 (arm) */
void fn_00107804(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00107804:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_00107808:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010780c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_00107810:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00107814:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00107818u)) return;
        }
    }
L_00107818:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0010781c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_00107820:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0010785c;
        }
    }
L_00107824:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_00107828:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_0010782c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00107830:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
        }
    }
L_00107834:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_00107838:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[4] = v;
        }
    }
L_0010783c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_00107840:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
        }
    }
L_00107844:;
    {
        cpu->r[2] = 0x000004bau;
    }
L_00107848:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_0010784c:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[4]);
    }
L_00107850:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00107854u)) return;
        }
    }
L_00107854:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00107858:;
    {
        return fn_0010df70(cpu);
    }
L_0010785c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00107860:;
    {
        cpu->r[14] = 0x00107868u;
    }
L_00107864:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00107868u)) return;
    }
L_00107868:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010786cu)) return;
    }
}

/* _ZN26GS_ChoseTuningCategoryMenu18ProcessOnMouseDragEv @ 0010786c (arm) */
void fn_0010786c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010786c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00107870:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00107874:;
    {
        cpu->r[14] = 0x00107878u; fn_000eb988(cpu);
    }
L_00107878:;
    {
        cpu->r[4] = rd32(0x00107880u + + 0xd0u);
    }
L_0010787c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x954u);
    }
L_00107880:;
    {
        cpu->r[4] = add_flags(cpu, 0x00107888u, cpu->r[4], 0, 0);
    }
L_00107884:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00107888:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010788cu)) return;
        }
    }
L_0010788c:;
    {
        cpu->r[3] = rd32(0x00107894u + + 0xc0u);
    }
L_00107890:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00107894:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_00107898:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000002eu, 1, 0);
    }
L_0010789c:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_001078a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000015cu, 1, 1);
    }
L_001078a4:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001078bc;
        }
    }
L_001078a8:;
    {
        cpu->r[3] = rd32(0x001078b0u + + 0xa8u);
    }
L_001078ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001078b0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_001078b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000e9u, 1, 1);
    }
L_001078b8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001078c8;
        }
    }
L_001078bc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001078c0:;
    {
        wr8(cpu->r[5] + + 0x64u, cpu->r[3]);
    }
L_001078c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001078c8u)) return;
    }
L_001078c8:;
    {
        cpu->r[3] = rd32(0x001078d0u + + 0x8cu);
    }
L_001078cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001078d4u + + 0x74u);
    }
L_001078d0:;
    {
        cpu->r[1] = rd32(0x001078d8u + + 0x88u);
    }
L_001078d4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001078d8:;
    {
        cpu->r[3] = rd32(0x001078e0u + + 0x84u);
    }
L_001078dc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001078e0:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_001078e4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_001078e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001078ec:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001078f0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_001078f4:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_001078f8:;
    {
        cpu->r[3] = rd32(0x00107900u + + 0x68u);
    }
L_001078fc:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_00107900:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00107904:;
    {
        cpu->r[3] = rd32(0x0010790cu + + 0x60u);
    }
L_00107908:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2]);
    }
L_0010790c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00107910:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_00107914:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_00107918:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00107920u + + 0x2cu);
    }
L_0010791c:;
    {
        vfp_vdiv(cpu, 13, 11, 13);
    }
L_00107920:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00107924:;
    {
        vfp_vadd(cpu, 14, 13, 14);
    }
L_00107928:;
    {
        vfp_vadd(cpu, 15, 15, 12);
    }
L_0010792c:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00107930:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00107934:;
    {
        cpu->r[14] = 0x00107938u; fn_0009b4d0(cpu);
    }
L_00107938:;
    {
        cpu->r[3] = rd32(0x00107940u + + 0x30u);
    }
L_0010793c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00107940:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00107944:;
    {
        goto L_001078bc;
    }
}

/* _ZN26GS_ChoseTuningCategoryMenu11DoBarActionEii @ 00107974 (arm) */
void fn_00107974(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00107974:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x7cu);
    }
L_00107978:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010797c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00107980:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00107984:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00107988:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001079e8;
        }
    }
L_0010798c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00107990:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8ecu);
    }
L_00107994:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_00107998:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010799c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001079a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001079a4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001079a8:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001079ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001079b0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001079b4:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[3]);
    }
L_001079b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000094u;
        }
    }
L_001079bc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001079c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_001079c4:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001079c8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001079cc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001079d0:;
    {
        cpu->r[14] = 0x001079d4u; fn_000fd248(cpu);
    }
L_001079d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001079d8:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001079dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001079e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00107a00;
        }
    }
L_001079e4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001079f0;
        }
    }
L_001079e8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001079ec:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001079f0u)) return;
    }
L_001079f0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x000005c0u, 1, 0);
    }
L_001079f4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
    }
L_001079f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001079fc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001079e8;
        }
    }
L_00107a00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00107a04:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00107a08:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00107a0c:;
    {
        return fn_0010df70(cpu);
    }
}

/* _ZN26GS_ChoseTuningCategoryMenu6UpdateEv @ 00107a10 (arm) */
void fn_00107a10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00107a10:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00107a14:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00107a18:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_00107a1c:;
    {
        cpu->r[6] = 0x00001c4cu;
    }
L_00107a20:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00107a24:;
    {
        cpu->r[5] = rd32(0x00107a2cu + + 0x42cu);
    }
L_00107a28:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_00107a2c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00107a34u, cpu->r[5], 0, 0);
    }
L_00107a30:;
    {
        cpu->r[14] = 0x00107a34u; fn_000978a8(cpu);
    }
L_00107a34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00107a38:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00107a3c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00107a40:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_00107a44:;
    {
        cpu->r[14] = 0x00107a4cu;
    }
L_00107a48:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x78u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00107a4cu)) return;
    }
L_00107a4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_00107a50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00107a54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00107a68;
        }
    }
L_00107a58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00107a5c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00107a60:;
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
        cpu->r[14] = v4;
        cpu->r[13] += 20u;
    }
L_00107a64:;
    {
        return fn_00114a58(cpu);
    }
L_00107a68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00107a6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00107a78;
        }
    }
L_00107a70:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00107a74:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00107a78u)) return;
    }
L_00107a78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00107a7c:;
    {
        cpu->r[14] = 0x00107a80u; fn_0010da28(cpu);
    }
L_00107a80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00107a84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00107a70;
        }
    }
L_00107a88:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x954u);
    }
L_00107a8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00107a90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00107b00;
        }
    }
L_00107a94:;
    {
        cpu->r[3] = rd32(0x00107a9cu + + 0x3c0u);
    }
L_00107a98:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00107a9c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_00107aa0:;
    {
        cpu->r[3] = rd32(0x00107aa8u + + 0x3b8u);
    }
L_00107aa4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00107aa8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00107aac:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00107ab0:;
    {
        vfp_sync_flags(cpu);
    }
L_00107ab4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00107a70;
        }
    }
L_00107ab8:;
    {
        cpu->r[3] = rd32(0x00107ac0u + + 0x3a4u);
    }
L_00107abc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00107ac0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_00107ac4:;
    {
        cpu->r[3] = rd32(0x00107accu + + 0x39cu);
    }
L_00107ac8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00107acc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00107ad0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00107ad4:;
    {
        vfp_sync_flags(cpu);
    }
L_00107ad8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00107a70;
        }
    }
L_00107adc:;
    {
        cpu->r[3] = rd32(0x00107ae4u + + 0x388u);
    }
L_00107ae0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00107ae4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_00107ae8:;
    {
        cpu->r[3] = rd32(0x00107af0u + + 0x380u);
    }
L_00107aec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00107af0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00107af4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00107af8:;
    {
        vfp_sync_flags(cpu);
    }
L_00107afc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00107a70;
        }
    }
L_00107b00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00107b04:;
    {
        cpu->r[2] = 0x000005cau;
    }
L_00107b08:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00107b0c:;
    {
        wr8(cpu->r[4] + + 0x954u, cpu->r[6]);
    }
L_00107b10:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00107b14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00107bf0;
        }
    }
L_00107b18:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00107b9c;
        }
    }
L_00107b1c:;
    {
        cpu->r[2] = 0x00000631u;
    }
L_00107b20:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00107b24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00107bf0;
        }
    }
L_00107b28:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00107c58;
        }
    }
L_00107b2c:;
    {
        cpu->r[2] = 0x000005cdu;
    }
L_00107b30:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00107b34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00107a70;
        }
    }
L_00107b38:;
    {
        cpu->r[0] = rd32(0x00107b40u + + 0x334u);
    }
L_00107b3c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00107b40:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00107b44:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_00107b48:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00107b4c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00107b50:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00107b54:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00107b58:;
    {
        cpu->r[14] = 0x00107b5cu; fn_000fd248(cpu);
    }
L_00107b5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00107b60:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_00107b64:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_00107b68:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00107b6c:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_00107b70:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00107b74:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_00107b78:;
    {
        cpu->r[14] = 0x00107b7cu; fn_0018ba6c(cpu);
    }
L_00107b7c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00107b80:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00107b84:;
    {
        cpu->r[14] = 0x00107b88u; fn_00121d30(cpu);
    }
L_00107b88:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00107b8c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00107b90:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00107b94:;
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
        cpu->r[14] = v4;
        cpu->r[13] += 20u;
    }
L_00107b98:;
    {
        return fn_000f361c(cpu);
    }
L_00107b9c:;
    {
        cpu->r[2] = 0x000004bau;
    }
L_00107ba0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00107ba4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00107d40;
        }
    }
L_00107ba8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00107cc4;
        }
    }
L_00107bac:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_00107bb0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00107bb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00107a70;
        }
    }
L_00107bb8:;
    {
        cpu->r[0] = rd32(0x00107bc0u + + 0x2b4u);
    }
L_00107bbc:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00107bc0:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_00107bc4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00107bc8:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00107bcc:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00107bd0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00107bd4:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00107bd8:;
    {
        cpu->r[14] = 0x00107bdcu; fn_000fd248(cpu);
    }
L_00107bdc:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00107be0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00107be4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00107be8:;
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
        cpu->r[14] = v4;
        cpu->r[13] += 20u;
    }
L_00107bec:;
    {
        return fn_000f34e8(cpu);
    }
L_00107bf0:;
    {
        cpu->r[0] = rd32(0x00107bf8u + + 0x27cu);
    }
L_00107bf4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00107bf8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00107bfc:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_00107c00:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00107c04:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00107c08:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00107c0c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00107c10:;
    {
        cpu->r[14] = 0x00107c14u; fn_000fd248(cpu);
    }
L_00107c14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00107c18:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_00107c1c:;
    {
        cpu->r[0] = 0x000009a4u;
    }
L_00107c20:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00107c24:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_00107c28:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00107c2c:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_00107c30:;
    {
        cpu->r[14] = 0x00107c34u; fn_0018ba6c(cpu);
    }
L_00107c34:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00107c38:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00107c3c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00107c40:;
    {
        cpu->r[14] = 0x00107c44u; fn_00105604(cpu);
    }
L_00107c44:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00107c48:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00107c4c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00107c50:;
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
        cpu->r[14] = v4;
        cpu->r[13] += 20u;
    }
L_00107c54:;
    {
        return fn_000f361c(cpu);
    }
L_00107c58:;
    {
        cpu->r[2] = 0x00000632u;
    }
L_00107c5c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00107c60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00107da0;
        }
    }
L_00107c64:;
    {
        cpu->r[2] = 0x00000633u;
    }
L_00107c68:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00107c6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00107a70;
        }
    }
L_00107c70:;
    {
        cpu->r[0] = rd32(0x00107c78u + + 0x1fcu);
    }
L_00107c74:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00107c78:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00107c7c:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_00107c80:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00107c84:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00107c88:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00107c8c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00107c90:;
    {
        cpu->r[14] = 0x00107c94u; fn_000fd248(cpu);
    }
L_00107c94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00107c98:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_00107c9c:;
    {
        cpu->r[0] = 0x000009a4u;
    }
L_00107ca0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00107ca4:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_00107ca8:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00107cac:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_00107cb0:;
    {
        cpu->r[14] = 0x00107cb4u; fn_0018ba6c(cpu);
    }
L_00107cb4:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00107cb8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00107cbc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00107cc0:;
    {
        goto L_00107c40;
    }
L_00107cc4:;
    {
        cpu->r[2] = 0x000005c8u;
    }
L_00107cc8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00107ccc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00107df4;
        }
    }
L_00107cd0:;
    {
        cpu->r[2] = 0x000005c9u;
    }
L_00107cd4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00107cd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00107a70;
        }
    }
L_00107cdc:;
    {
        cpu->r[0] = rd32(0x00107ce4u + + 0x190u);
    }
L_00107ce0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00107ce4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00107ce8:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_00107cec:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00107cf0:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00107cf4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00107cf8:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00107cfc:;
    {
        cpu->r[14] = 0x00107d00u; fn_000fd248(cpu);
    }
L_00107d00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00107d04:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_00107d08:;
    {
        cpu->r[0] = 0x0000096cu;
    }
L_00107d0c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00107d10:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_00107d14:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00107d18:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_00107d1c:;
    {
        cpu->r[14] = 0x00107d20u; fn_0018ba6c(cpu);
    }
L_00107d20:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00107d24:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00107d28:;
    {
        cpu->r[14] = 0x00107d2cu; fn_00100758(cpu);
    }
L_00107d2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00107d30:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00107d34:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00107d38:;
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
        cpu->r[14] = v4;
        cpu->r[13] += 20u;
    }
L_00107d3c:;
    {
        return fn_000f361c(cpu);
    }
L_00107d40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00107d44:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_00107d48:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00107d4c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00107d50:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_00107d54:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[0]);
    }
L_00107d58:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00107d5c:;
    {
        cpu->r[14] = 0x00107d60u; fn_000f35e4(cpu);
    }
L_00107d60:;
    {
        cpu->r[3] = rd32(0x00107d68u + + 0x10cu);
    }
L_00107d64:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_00107d68:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00107d6c:;
    {
        cpu->r[7] = rd32(cpu->r[4]);
    }
L_00107d70:;
    {
        cpu->r[14] = 0x00107d74u; fn_0018ba6c(cpu);
    }
L_00107d74:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00107d78:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00107d7c:;
    {
        cpu->r[14] = 0x00107d80u; fn_000f22d4(cpu);
    }
L_00107d80:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00107d84:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00107d88:;
    {
        cpu->r[14] = 0x00107d8cu; fn_000f361c(cpu);
    }
L_00107d8c:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_00107d90:;
    {
        cpu->r[3] = 0x00001c9cu;
    }
L_00107d94:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00107d98:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_00107d9c:;
    {
        goto L_00107a70;
    }
L_00107da0:;
    {
        cpu->r[0] = rd32(0x00107da8u + + 0xccu);
    }
L_00107da4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00107da8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00107dac:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_00107db0:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00107db4:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00107db8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00107dbc:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00107dc0:;
    {
        cpu->r[14] = 0x00107dc4u; fn_000fd248(cpu);
    }
L_00107dc4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00107dc8:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_00107dcc:;
    {
        cpu->r[0] = 0x000009a4u;
    }
L_00107dd0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00107dd4:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_00107dd8:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00107ddc:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_00107de0:;
    {
        cpu->r[14] = 0x00107de4u; fn_0018ba6c(cpu);
    }
L_00107de4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00107de8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00107dec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00107df0:;
    {
        goto L_00107c40;
    }
L_00107df4:;
    {
        cpu->r[0] = rd32(0x00107dfcu + + 0x78u);
    }
L_00107df8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00107dfc:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00107e00:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_00107e04:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00107e08:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00107e0c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00107e10:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00107e14:;
    {
        cpu->r[14] = 0x00107e18u; fn_000fd248(cpu);
    }
L_00107e18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00107e1c:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_00107e20:;
    {
        cpu->r[0] = 0x0000095cu;
    }
L_00107e24:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00107e28:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_00107e2c:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00107e30:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_00107e34:;
    {
        cpu->r[14] = 0x00107e38u; fn_0018ba6c(cpu);
    }
L_00107e38:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00107e3c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00107e40:;
    {
        cpu->r[14] = 0x00107e44u; fn_00121548(cpu);
    }
L_00107e44:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00107e48:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00107e4c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00107e50:;
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
        cpu->r[14] = v4;
        cpu->r[13] += 20u;
    }
L_00107e54:;
    {
        return fn_000f361c(cpu);
    }
}

/* _ZN26GS_ChoseTuningCategoryMenu6ResumeEv @ 00107e78 (arm) */
void fn_00107e78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00107e78:;
    {
        return fn_001142a0(cpu);
    }
}

/* _ZN26GS_ChoseTuningCategoryMenuD1Ev @ 00107e7c (arm) */
void fn_00107e7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00107e7c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00107e80:;
    {
        cpu->r[4] = rd32(0x00107e88u + + 0x44u);
    }
L_00107e84:;
    {
        cpu->r[2] = rd32(0x00107e8cu + + 0x44u);
    }
L_00107e88:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00107e8c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00107e94u, cpu->r[4], 0, 0);
    }
L_00107e90:;
    {
        cpu->r[3] = rd32(0x00107e98u + + 0x3cu);
    }
L_00107e94:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00107e98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00107e9c:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_00107ea0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00107ea4:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00107ea8:;
    {
        cpu->r[14] = 0x00107eacu; fn_0009aca0(cpu);
    }
L_00107eac:;
    {
        cpu->r[3] = rd32(0x00107eb4u + + 0x24u);
    }
L_00107eb0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00107eb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00107eb8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00107ebc:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00107ec0:;
    {
        cpu->r[14] = 0x00107ec4u; fn_000ec21c(cpu);
    }
L_00107ec4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00107ec8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00107eccu)) return;
    }
}

/* _ZN26GS_ChoseTuningCategoryMenuD0Ev @ 00107edc (arm) */
void fn_00107edc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00107edc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00107ee0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00107ee4:;
    {
        cpu->r[14] = 0x00107ee8u; fn_00107e7c(cpu);
    }
L_00107ee8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00107eec:;
    {
        cpu->r[14] = 0x00107ef0u; fn_0018ba20(cpu);
    }
L_00107ef0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00107ef4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00107ef8u)) return;
    }
}

/* _ZN26GS_ChoseTuningCategoryMenuD2Ev @ 00107ef8 (arm) */
void fn_00107ef8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00107ef8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00107efc:;
    {
        cpu->r[4] = rd32(0x00107f04u + + 0x44u);
    }
L_00107f00:;
    {
        cpu->r[2] = rd32(0x00107f08u + + 0x44u);
    }
L_00107f04:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00107f08:;
    {
        cpu->r[4] = add_flags(cpu, 0x00107f10u, cpu->r[4], 0, 0);
    }
L_00107f0c:;
    {
        cpu->r[3] = rd32(0x00107f14u + + 0x3cu);
    }
L_00107f10:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00107f14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00107f18:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_00107f1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00107f20:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00107f24:;
    {
        cpu->r[14] = 0x00107f28u; fn_0009aca0(cpu);
    }
L_00107f28:;
    {
        cpu->r[3] = rd32(0x00107f30u + + 0x24u);
    }
L_00107f2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00107f30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00107f34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00107f38:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00107f3c:;
    {
        cpu->r[14] = 0x00107f40u; fn_000ec21c(cpu);
    }
L_00107f40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00107f44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00107f48u)) return;
    }
}

/* _ZN26GS_ChoseTuningCategoryMenuC1Eb @ 00107f58 (arm) */
void fn_00107f58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00107f58:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00107f5c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00107f60:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00107f64:;
    {
        cpu->r[5] = rd32(0x00107f6cu + + 0xecu);
    }
L_00107f68:;
    {
        cpu->r[14] = 0x00107f6cu; fn_001100c0(cpu);
    }
L_00107f6c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00107f70:;
    {
        wr8(cpu->r[4] + + 0x8cau, cpu->r[2]);
    }
L_00107f74:;
    {
        cpu->r[5] = add_flags(cpu, 0x00107f7cu, cpu->r[5], 0, 0);
    }
L_00107f78:;
    {
        cpu->r[2] = rd32(0x00107f80u + + 0xdcu);
    }
L_00107f7c:;
    {
        cpu->r[6] = 0x00001c4cu;
    }
L_00107f80:;
    {
        cpu->r[3] = rd32(0x00107f88u + + 0xd8u);
    }
L_00107f84:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00107f88:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00107f8c:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_00107f90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00107f94:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00107f98:;
    {
        cpu->r[14] = 0x00107f9cu; fn_0009ae74(cpu);
    }
L_00107f9c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00107fa0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00107fa4:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_00107fa8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_00107fac:;
    {
        cpu->r[14] = 0x00107fb0u; fn_000978a8(cpu);
    }
L_00107fb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00107fb4:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00107fb8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x444u);
    }
L_00107fbc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00107fc0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00107fc4:;
    {
        cpu->r[3] = 0x0000004cu;
    }
L_00107fc8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[3] = v;
    }
L_00107fcc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00107fd0:;
    {
        cpu->r[14] = 0x00107fd4u; fn_000a587c(cpu);
    }
L_00107fd4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00107fd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010801c;
        }
    }
L_00107fdc:;
    {
        cpu->r[3] = rd32(0x00107fe4u + + 0x80u);
    }
L_00107fe0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00107fe8u + + 0x6cu);
    }
L_00107fe4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00107fe8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000128u, 0, 0);
    }
L_00107fec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00107ff0:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00107ff4:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00107ff8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00107ffc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x0000000cu;
        wr32(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_00108000:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00108004:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00107ff0;
        }
    }
L_00108008:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0010800c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00108010:;
    {
        wr8(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_00108014:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00108018:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010801cu)) return;
    }
L_0010801c:;
    {
        cpu->r[1] = rd32(0x00108024u + + 0x44u);
    }
L_00108020:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00108024:;
    {
        cpu->r[2] = rd32(0x0010802cu + + 0x40u);
    }
L_00108028:;
    {
        cpu->r[14] = 0x0000006eu;
    }
L_0010802c:;
    {
        cpu->r[3] = rd32(0x00108034u + + 0x3cu);
    }
L_00108030:;
    {
        cpu->r[1] = add_flags(cpu, 0x00108038u, cpu->r[1], 0, 0);
    }
L_00108034:;
    {
        cpu->r[12] = rd32(0x0010803cu + + 0x38u);
    }
L_00108038:;
    {
        cpu->r[2] = add_flags(cpu, 0x00108040u, cpu->r[2], 0, 0);
    }
L_0010803c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00108044u, cpu->r[3], 0, 0);
    }
L_00108040:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00108044:;
    {
        cpu->r[12] = add_flags(cpu, 0x0010804cu, cpu->r[12], 0, 0);
    }
L_00108048:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010804c:;
    {
        cpu->r[14] = 0x00108050u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00108050:;
    {
        goto L_00107fdc;
    }
}

/* _ZN26GS_ChoseTuningCategoryMenuC2Eb @ 00108078 (arm) */
void fn_00108078(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00108078:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010807c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00108080:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00108084:;
    {
        cpu->r[5] = rd32(0x0010808cu + + 0xecu);
    }
L_00108088:;
    {
        cpu->r[14] = 0x0010808cu; fn_001100c0(cpu);
    }
L_0010808c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00108090:;
    {
        wr8(cpu->r[4] + + 0x8cau, cpu->r[2]);
    }
L_00108094:;
    {
        cpu->r[5] = add_flags(cpu, 0x0010809cu, cpu->r[5], 0, 0);
    }
L_00108098:;
    {
        cpu->r[2] = rd32(0x001080a0u + + 0xdcu);
    }
L_0010809c:;
    {
        cpu->r[6] = 0x00001c4cu;
    }
L_001080a0:;
    {
        cpu->r[3] = rd32(0x001080a8u + + 0xd8u);
    }
L_001080a4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001080a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001080ac:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_001080b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001080b4:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001080b8:;
    {
        cpu->r[14] = 0x001080bcu; fn_0009ae74(cpu);
    }
L_001080bc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001080c0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001080c4:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_001080c8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_001080cc:;
    {
        cpu->r[14] = 0x001080d0u; fn_000978a8(cpu);
    }
L_001080d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001080d4:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001080d8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x444u);
    }
L_001080dc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001080e0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001080e4:;
    {
        cpu->r[3] = 0x0000004cu;
    }
L_001080e8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[3] = v;
    }
L_001080ec:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001080f0:;
    {
        cpu->r[14] = 0x001080f4u; fn_000a587c(cpu);
    }
L_001080f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001080f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010813c;
        }
    }
L_001080fc:;
    {
        cpu->r[3] = rd32(0x00108104u + + 0x80u);
    }
L_00108100:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00108108u + + 0x6cu);
    }
L_00108104:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00108108:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000128u, 0, 0);
    }
L_0010810c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00108110:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00108114:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00108118:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0010811c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x0000000cu;
        wr32(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_00108120:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00108124:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00108110;
        }
    }
L_00108128:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0010812c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00108130:;
    {
        wr8(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_00108134:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00108138:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010813cu)) return;
    }
L_0010813c:;
    {
        cpu->r[1] = rd32(0x00108144u + + 0x44u);
    }
L_00108140:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00108144:;
    {
        cpu->r[2] = rd32(0x0010814cu + + 0x40u);
    }
L_00108148:;
    {
        cpu->r[14] = 0x0000006eu;
    }
L_0010814c:;
    {
        cpu->r[3] = rd32(0x00108154u + + 0x3cu);
    }
L_00108150:;
    {
        cpu->r[1] = add_flags(cpu, 0x00108158u, cpu->r[1], 0, 0);
    }
L_00108154:;
    {
        cpu->r[12] = rd32(0x0010815cu + + 0x38u);
    }
L_00108158:;
    {
        cpu->r[2] = add_flags(cpu, 0x00108160u, cpu->r[2], 0, 0);
    }
L_0010815c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00108164u, cpu->r[3], 0, 0);
    }
L_00108160:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00108164:;
    {
        cpu->r[12] = add_flags(cpu, 0x0010816cu, cpu->r[12], 0, 0);
    }
L_00108168:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010816c:;
    {
        cpu->r[14] = 0x00108170u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00108170:;
    {
        goto L_001080fc;
    }
}

/* _ZN26GS_ChoseTuningCategoryMenu6RenderEv @ 00108198 (arm) */
void fn_00108198(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00108198:;
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
L_0010819c:;
    {
        cpu->r[5] = rd32(0x001081a4u + + 0x1fcu);
    }
L_001081a0:;
    {
        cpu->r[7] = rd32(0x001081a8u + + 0x1fcu);
    }
L_001081a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001081a8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001081b0u, cpu->r[5], 0, 0);
    }
L_001081ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001081b0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001081b4:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001081b8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001081bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108320;
        }
    }
L_001081c0:;
    {
        cpu->r[6] = rd32(0x001081c8u + + 0x1e0u);
    }
L_001081c4:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_001081c8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001081cc:;
    {
        cpu->r[14] = 0x001081d0u; fn_00096a08(cpu);
    }
L_001081d0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001081d4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001081d8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001081dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001081e0:;
    {
        cpu->r[14] = 0x001081e4u; fn_0018aa44(cpu);
    }
L_001081e4:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001081e8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001081ec:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001081f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108364;
        }
    }
L_001081f4:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_001081f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001081fc:;
    {
        cpu->r[14] = 0x00108200u; fn_00096a08(cpu);
    }
L_00108200:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00108204:;
    {
        cpu->r[7] = 0x00001c4cu;
    }
L_00108208:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0010820c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00108210:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00108214:;
    {
        cpu->r[14] = 0x00108218u; fn_0018aa44(cpu);
    }
L_00108218:;
    {
        cpu->r[2] = rd32(0x00108220u + + 0x18cu);
    }
L_0010821c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x954u);
    }
L_00108220:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x950u);
    }
L_00108224:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00108228:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0010822c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00108230:;
    {
        cpu->r[14] = 0x00108234u; fn_00112af0(cpu);
    }
L_00108234:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00108238:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_0010823c:;
    {
        cpu->r[14] = 0x00108240u; fn_000978a8(cpu);
    }
L_00108240:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00108244:;
    {
        cpu->r[1] = 0x0000004cu;
    }
L_00108248:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x48u);
    }
L_0010824c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[7]);
    }
L_00108250:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x444u);
    }
L_00108254:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[3] = v;
    }
L_00108258:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0010825c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00108260:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00108264:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_00108268:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[12]);
    }
L_0010826c:;
    {
        wr32(cpu->r[6] + + 0x48u, cpu->r[3]);
    }
L_00108270:;
    {
        cpu->r[14] = 0x00108274u; fn_000aeb58(cpu);
    }
L_00108274:;
    {
        cpu->r[3] = 0x0000000au;
    }
L_00108278:;
    {
        cpu->r[2] = 0x000000c4u;
    }
L_0010827c:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_00108280:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_00108284:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00108288:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010828c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00108290:;
    {
        cpu->r[14] = 0x00108294u; fn_000ad19c(cpu);
    }
L_00108294:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00108298:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_0010829c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001082c8;
        }
    }
L_001082a0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001082a4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001082a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001082ac:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001082b0:;
    {
        cpu->r[14] = 0x001082b8u;
    }
L_001082b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001082b8u)) return;
    }
L_001082b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001082bc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001082c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001082c4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001082a0;
        }
    }
L_001082c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001082cc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001082d0:;
    {
        cpu->r[14] = 0x001082d8u;
    }
L_001082d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001082d8u)) return;
    }
L_001082d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001082dc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001082e0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001082e4:;
    {
        cpu->r[14] = 0x001082ecu;
    }
L_001082e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001082ecu)) return;
    }
L_001082ec:;
    {
        cpu->r[2] = rd32(0x001082f4u + + 0xbcu);
    }
L_001082f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001082f4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001082f8:;
    {
        cpu->r[2] = rd32(0x00108300u + cpu->r[2]);
    }
L_001082fc:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_00108300:;
    {
        cpu->r[14] = 0x00108308u;
    }
L_00108304:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x90u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00108308u)) return;
    }
L_00108308:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010830c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00108310:;
    {
        cpu->r[14] = 0x00108318u;
    }
L_00108314:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x94u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00108318u)) return;
    }
L_00108318:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0010831c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00108320u)) return;
    }
L_00108320:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00108324:;
    {
        cpu->r[14] = 0x00108328u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00108328:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010832c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001081c0;
        }
    }
L_00108330:;
    {
        cpu->r[6] = rd32(0x00108338u + + 0x70u);
    }
L_00108334:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00108338:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010833c:;
    {
        cpu->r[14] = 0x00108340u; fn_0018aa20(cpu);
    }
L_00108340:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00108344:;
    {
        cpu->r[14] = 0x00108348u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00108348:;
    {
        cpu->r[3] = rd32(0x00108350u + + 0x64u);
    }
L_0010834c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00108350:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00108354:;
    {
        cpu->r[3] = rd32(0x0010835cu + + 0x5cu);
    }
L_00108358:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010835c:;
    {
        cpu->r[14] = 0x00108360u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00108360:;
    {
        goto L_001081c4;
    }
L_00108364:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00108368:;
    {
        cpu->r[14] = 0x0010836cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010836c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00108370:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001081f4;
        }
    }
L_00108374:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00108378:;
    {
        cpu->r[14] = 0x0010837cu; fn_0018aa20(cpu);
    }
L_0010837c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00108380:;
    {
        cpu->r[14] = 0x00108384u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00108384:;
    {
        cpu->r[3] = rd32(0x0010838cu + + 0x28u);
    }
L_00108388:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010838c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00108390:;
    {
        cpu->r[3] = rd32(0x00108398u + + 0x20u);
    }
L_00108394:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00108398:;
    {
        cpu->r[14] = 0x0010839cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010839c:;
    {
        goto L_001081f4;
    }
}

/* _ZN16GS_EndRaceScreen8isKindOfEi @ 001083bc (arm) */
void fn_001083bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001083bc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000019u, 1, 1);
    }
L_001083c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001083c4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001083c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z11SaveRecordsv @ 001083cc (arm) */
void fn_001083cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001083cc:;
    {
        cpu->r[3] = rd32(0x001083d4u + + 0x84u);
    }
L_001083d0:;
    {
        cpu->r[2] = rd32(0x001083d8u + + 0x84u);
    }
L_001083d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001083dcu, cpu->r[3], 0, 0);
    }
L_001083d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001083dc:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_001083e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001083e4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001083e8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_001083ec:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001083f0:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_001083f4:;
    {
        cpu->r[1] = 0x00008c50u;
    }
L_001083f8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001083fc:;
    {
        cpu->r[2] = 0x0000408cu;
    }
L_00108400:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_00108404:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_00108408:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0010840c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00108410:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_00108414:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00006300u, 0, 0);
    }
L_00108418:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000001eu, 0, 0);
    }
L_0010841c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00108420:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_00108424:;
    {
        cpu->r[1] = 0x00001c40u;
    }
L_00108428:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_0010842c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_00108430:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
        }
    }
L_00108434:;
    {
        cpu->r[1] = 0x00004088u;
    }
L_00108438:;
    {
        cpu->r[2] = 0x00004084u;
    }
L_0010843c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_00108440:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_00108444:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00108448:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010844c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_00108450:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
        }
    }
L_00108454:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_21 @ 00108460 (arm) */
void fn_00108460(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00108460:;
    {
        cpu->r[3] = rd32(0x00108468u + + 0x20u);
    }
L_00108464:;
    {
        cpu->r[1] = rd32(0x0010846cu + + 0x20u);
    }
L_00108468:;
    {
        cpu->r[3] = add_flags(cpu, 0x00108470u, cpu->r[3], 0, 0);
    }
L_0010846c:;
    {
        cpu->r[2] = rd32(0x00108474u + + 0x1cu);
    }
L_00108470:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00108474:;
    {
        cpu->r[2] = add_flags(cpu, 0x0010847cu, cpu->r[2], 0, 0);
    }
L_00108478:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010847c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_00108480:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00108484:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GS_EndRaceScreen6UpdateEv @ 00108494 (arm) */
void fn_00108494(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00108494:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00108498:;
    {
        cpu->r[4] = rd32(0x001084a0u + + 0x558u);
    }
L_0010849c:;
    {
        cpu->r[6] = rd32(0x001084a4u + + 0x558u);
    }
L_001084a0:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_001084a4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001084acu, cpu->r[4], 0, 0);
    }
L_001084a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001084ac:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001084b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001084b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001084b8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001084bc:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000cu, 1, 1);
    }
L_001084c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108500;
        }
    }
L_001084c4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x94u);
    }
L_001084c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001084cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010854c;
        }
    }
L_001084d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001084d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010857c;
        }
    }
L_001084d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001084dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001084f0;
        }
    }
L_001084e0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001084e4:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
    }
L_001084e8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001084ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001084f0u)) return;
    }
L_001084f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001084f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001084f8:;
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
L_001084fc:;
    {
        return fn_00114a58(cpu);
    }
L_00108500:;
    {
        cpu->r[2] = 0x0000e224u;
    }
L_00108504:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00108508:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010850c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00108510:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x0000677cu;
        }
    }
L_00108514:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = (~0x00000000u);
        }
    }
L_00108518:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
        }
    }
L_0010851c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + + 0x3cu, cpu->r[1]);
        }
    }
L_00108520:;
    {
        cpu->r[2] = 0x0000677cu;
    }
L_00108524:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00108528:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x3cu);
    }
L_0010852c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00108530:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001085dc;
        }
    }
L_00108534:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x88u);
    }
L_00108538:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0010853c:;
    {
        cpu->r[14] = 0x00108540u; fn_000ec4f0(cpu);
    }
L_00108540:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x94u);
    }
L_00108544:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00108548:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001084d0;
        }
    }
L_0010854c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8d4u);
    }
L_00108550:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00108554:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001084e8;
        }
    }
L_00108558:;
    {
        cpu->r[3] = rd32(0x00108560u + + 0x4a0u);
    }
L_0010855c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00108560:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_00108564:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00108568:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000581u;
        }
    }
L_0010856c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0xc4u, cpu->r[3]);
        }
    }
L_00108570:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_00108574:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
        }
    }
L_00108578:;
    {
        goto L_001084e8;
    }
L_0010857c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00108580:;
    {
        cpu->r[14] = 0x00108584u; fn_0010da28(cpu);
    }
L_00108584:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00108588:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001084e8;
        }
    }
L_0010858c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xc4u);
    }
L_00108590:;
    {
        cpu->r[2] = 0x00000583u;
    }
L_00108594:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00108598:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108914;
        }
    }
L_0010859c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001085ec;
        }
    }
L_001085a0:;
    {
        cpu->r[2] = 0x00000581u;
    }
L_001085a4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001085a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108808;
        }
    }
L_001085ac:;
    {
        cpu->r[2] = 0x00000582u;
    }
L_001085b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001085b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001084e0;
        }
    }
L_001085b8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001085bc:;
    {
        cpu->r[3] = 0x00001c9cu;
    }
L_001085c0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001085c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001085c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108988;
        }
    }
L_001085cc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001085d0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001085d4:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001085d8:;
    {
        goto L_0010865c;
    }
L_001085dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x88u);
    }
L_001085e0:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001085e4:;
    {
        cpu->r[14] = 0x001085e8u; fn_000ec594(cpu);
    }
L_001085e8:;
    {
        goto L_001084c4;
    }
L_001085ec:;
    {
        cpu->r[2] = 0x00000666u;
    }
L_001085f0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001085f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108688;
        }
    }
L_001085f8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001084e0;
        }
    }
L_001085fc:;
    {
        cpu->r[2] = 0x00000668u;
    }
L_00108600:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00108604:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001084e0;
        }
    }
L_00108608:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010860c:;
    {
        cpu->r[3] = 0x00001c9cu;
    }
L_00108610:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00108614:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00108618:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108994;
        }
    }
L_0010861c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00108620:;
    {
        cpu->r[14] = 0x00108624u; fn_00099b14(cpu);
    }
L_00108624:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xc4u);
    }
L_00108628:;
    {
        cpu->r[3] = 0x00000668u;
    }
L_0010862c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00108630:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
        }
    }
L_00108634:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108650;
        }
    }
L_00108638:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010863c:;
    {
        cpu->r[3] = 0x00001c9cu;
    }
L_00108640:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00108644:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00108648:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x0000675cu;
        }
    }
L_0010864c:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[3]);
        }
    }
L_00108650:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00108654:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00108658:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0010865c:;
    {
        cpu->r[14] = 0x00108660u; fn_0009b14c(cpu);
    }
L_00108660:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00108664:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00108668:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010866c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00108670:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00108674:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00108678:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010867c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00108680:;
    {
        cpu->r[14] = 0x00108684u; fn_000fd248(cpu);
    }
L_00108684:;
    {
        goto L_001084e8;
    }
L_00108688:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010868c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00108690:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00108694:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_00108698:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010869c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001086a0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001086a4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001086a8:;
    {
        cpu->r[14] = 0x001086acu; fn_000fd248(cpu);
    }
L_001086ac:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001086b0:;
    {
        cpu->r[14] = 0x001086b4u; fn_00097d9c(cpu);
    }
L_001086b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001086b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00108704;
        }
    }
L_001086bc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001086c0:;
    {
        cpu->r[3] = 0x0000856cu;
    }
L_001086c4:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_001086c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001086cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00108708;
        }
    }
L_001086d0:;
    {
        cpu->r[1] = rd32(0x001086d8u + + 0x32cu);
    }
L_001086d4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001086d8:;
    {
        cpu->r[2] = rd32(0x001086e0u + + 0x328u);
    }
L_001086dc:;
    {
        cpu->r[14] = 0x00000211u;
    }
L_001086e0:;
    {
        cpu->r[3] = rd32(0x001086e8u + + 0x324u);
    }
L_001086e4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001086ecu, cpu->r[1], 0, 0);
    }
L_001086e8:;
    {
        cpu->r[12] = rd32(0x001086f0u + + 0x320u);
    }
L_001086ec:;
    {
        cpu->r[2] = add_flags(cpu, 0x001086f4u, cpu->r[2], 0, 0);
    }
L_001086f0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001086f8u, cpu->r[3], 0, 0);
    }
L_001086f4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001086f8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00108700u, cpu->r[12], 0, 0);
    }
L_001086fc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00108700:;
    {
        cpu->r[14] = 0x00108704u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00108704:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00108708:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_0010870c:;
    {
        cpu->r[7] = 0x00001c50u;
    }
L_00108710:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00108714:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_00108718:;
    {
        cpu->r[14] = 0x0010871cu; fn_00097724(cpu);
    }
L_0010871c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00108720:;
    {
        cpu->r[14] = 0x00108724u; fn_000979a0(cpu);
    }
L_00108724:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_00108728:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[7]);
    }
L_0010872c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00108730:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_00108734:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000001b8u, 0, 0);
    }
L_00108738:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x4u);
    }
L_0010873c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00108740:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001089cc;
        }
    }
L_00108744:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00108748:;
    {
        cpu->r[7] = 0x00001c50u;
    }
L_0010874c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x950u);
    }
L_00108750:;
    {
        cpu->r[14] = 0x00001c98u;
    }
L_00108754:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00108758:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0010875c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00108760:;
    {
        wr32(cpu->r[12] + cpu->r[7], cpu->r[3]);
    }
L_00108764:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x954u);
    }
L_00108768:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x438u);
    }
L_0010876c:;
    {
        wr32(cpu->r[12] + cpu->r[14], cpu->r[8]);
    }
L_00108770:;
    {
        cpu->r[14] = 0x0000009cu;
    }
L_00108774:;
    {
        uint32_t v = cpu->r[14] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_00108778:;
    {
        cpu->r[14] = 0x00001be0u;
    }
L_0010877c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x34u);
    }
L_00108780:;
    {
        cpu->r[3] = 0x00001bd0u;
    }
L_00108784:;
    {
        wr32(cpu->r[12] + cpu->r[3], cpu->r[2]);
    }
L_00108788:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x958u);
    }
L_0010878c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00108790:;
    {
        wr32(cpu->r[12] + cpu->r[14], cpu->r[3]);
    }
L_00108794:;
    {
        cpu->r[14] = 0x00108798u; fn_00097724(cpu);
    }
L_00108798:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0010879c:;
    {
        cpu->r[14] = 0x001087a0u; fn_000979a0(cpu);
    }
L_001087a0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001087a4:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[7]);
    }
L_001087a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001087ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_001087b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000001b8u, 0, 0);
    }
L_001087b4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x4u);
    }
L_001087b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001087bc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001089a0;
        }
    }
L_001087c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001087c4:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_001087c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001087cc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001087d0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 0);
    }
L_001087d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000009u, 1, 1);
    }
L_001087d8:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[2]) {
        case 0: goto L_001088e0;
        case 1: goto L_001088f8;
        case 2: goto L_001088f8;
        case 3: goto L_001088c4;
        case 4: goto L_001088f8;
        case 5: goto L_001088f8;
        case 6: goto L_00108864;
        case 7: goto L_001088f8;
        case 8: goto L_001088f8;
        case 9: goto L_00108864;
        default: guest_unimplemented(cpu, 0x001087d8u); return; }
        }
    }
L_001087dc:;
    {
        goto L_001088f8;
    }
L_00108808:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010880c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00108810:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00108814:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00108818:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010881c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00108820:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00108824:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00108828:;
    {
        cpu->r[14] = 0x0010882cu; fn_000fd248(cpu);
    }
L_0010882c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_00108830:;
    {
        cpu->r[3] = 0x00001c9cu;
    }
L_00108834:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00108838:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0010883c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010897c;
        }
    }
L_00108840:;
    {
        cpu->r[2] = 0x00001d34u;
    }
L_00108844:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00108848:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0010884c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00108850:;
    {
        wr32(cpu->r[12] + cpu->r[2], cpu->r[3]);
    }
L_00108854:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00108858:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010885c:;
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
L_00108860:;
    {
        return fn_0009b14c(cpu);
    }
L_00108864:;
    {
        cpu->r[2] = 0x00001be8u;
    }
L_00108868:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_0010886c:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00108870:;
    {
        cpu->r[2] = 0x00001be4u;
    }
L_00108874:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00108878:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_0010887c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00108880:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00108884:;
    {
        cpu->r[14] = 0x00108888u; fn_000f35e4(cpu);
    }
L_00108888:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010888c:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_00108890:;
    {
        cpu->r[6] = rd32(cpu->r[4]);
    }
L_00108894:;
    {
        cpu->r[14] = 0x00108898u; fn_0018ba6c(cpu);
    }
L_00108898:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010889c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001088a0:;
    {
        cpu->r[14] = 0x001088a4u; fn_000f22d4(cpu);
    }
L_001088a4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001088a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001088ac:;
    {
        cpu->r[14] = 0x001088b0u; fn_000f361c(cpu);
    }
L_001088b0:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_001088b4:;
    {
        cpu->r[3] = 0x00001c9cu;
    }
L_001088b8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001088bc:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_001088c0:;
    {
        goto L_001084e8;
    }
L_001088c4:;
    {
        cpu->r[2] = 0x00001be8u;
    }
L_001088c8:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001088cc:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_001088d0:;
    {
        cpu->r[2] = 0x00001be4u;
    }
L_001088d4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001088d8:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_001088dc:;
    {
        goto L_0010887c;
    }
L_001088e0:;
    {
        cpu->r[1] = 0x00001be8u;
    }
L_001088e4:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001088e8:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_001088ec:;
    {
        cpu->r[1] = 0x00001be4u;
    }
L_001088f0:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_001088f4:;
    {
        goto L_0010887c;
    }
L_001088f8:;
    {
        cpu->r[2] = 0x00001be8u;
    }
L_001088fc:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_00108900:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00108904:;
    {
        cpu->r[2] = 0x00001be4u;
    }
L_00108908:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_0010890c:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00108910:;
    {
        goto L_0010887c;
    }
L_00108914:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00108918:;
    {
        cpu->r[2] = 0x000067c3u;
    }
L_0010891c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00108920:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00108924:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00108928:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108960;
        }
    }
L_0010892c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00108930:;
    {
        wr32(cpu->r[5] + + 0x78u, cpu->r[2]);
    }
L_00108934:;
    {
        wr32(cpu->r[5] + + 0xc4u, cpu->r[2]);
    }
L_00108938:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0010893c:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[2]);
    }
L_00108940:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00108944:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_00108948:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010894c:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_00108950:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00108954:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00108958:;
    {
        cpu->r[14] = 0x0010895cu; fn_000fd248(cpu);
    }
L_0010895c:;
    {
        goto L_001084e8;
    }
L_00108960:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00108964:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00108968:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0010896c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00108970:;
    {
        cpu->r[14] = 0x00108974u; fn_0009b14c(cpu);
    }
L_00108974:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00108978:;
    {
        goto L_00108940;
    }
L_0010897c:;
    {
        cpu->r[14] = 0x00108980u; fn_001083cc(cpu);
    }
L_00108980:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_00108984:;
    {
        goto L_00108840;
    }
L_00108988:;
    {
        cpu->r[14] = 0x0010898cu; fn_001083cc(cpu);
    }
L_0010898c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00108990:;
    {
        goto L_001085cc;
    }
L_00108994:;
    {
        cpu->r[14] = 0x00108998u; fn_001083cc(cpu);
    }
L_00108998:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010899c:;
    {
        goto L_0010861c;
    }
L_001089a0:;
    {
        cpu->r[14] = 0x001089a4u; fn_000979a0(cpu);
    }
L_001089a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001089a8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_001089ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001089b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_001089b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000001b8u, 0, 0);
    }
L_001089b8:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x4u);
    }
L_001089bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001089c0:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001089c4:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001089c8:;
    {
        goto L_001087c0;
    }
L_001089cc:;
    {
        cpu->r[14] = 0x001089d0u; fn_000979a0(cpu);
    }
L_001089d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001089d4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_001089d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001089dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_001089e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000001b8u, 0, 0);
    }
L_001089e4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x4u);
    }
L_001089e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001089ec:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001089f0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001089f4:;
    {
        goto L_00108744;
    }
}

/* _ZN16GS_EndRaceScreen8DoActionEii @ 00108a14 (arm) */
void fn_00108a14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00108a14:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_00108a18:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00108a1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00108a20:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00108a24:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00108a28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108a34;
        }
    }
L_00108a2c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00108a30:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00108a34u)) return;
    }
L_00108a34:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_00108a38:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00108a3c:;
    {
        cpu->r[14] = 0x00108a40u; fn_00093f34(cpu);
    }
L_00108a40:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00108a44:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00108a48:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00108a4c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00108a50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00108a54:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00108a58:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00108a5c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00108a60:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[0]);
    }
L_00108a64:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00108a68:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00108a6c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_00108a70:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_00108a74:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_00108a78:;
    {
        goto L_00108a2c;
    }
}

/* _ZN16GS_EndRaceScreen16RenderBackgroundEv @ 00108a7c (arm) */
void fn_00108a7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00108a7c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00108a80:;
    {
        cpu->r[4] = rd32(0x00108a88u + + 0x50u);
    }
L_00108a84:;
    {
        cpu->r[3] = rd32(0x00108a8cu + + 0x50u);
    }
L_00108a88:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00108a8c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00108a94u, cpu->r[4], 0, 0);
    }
L_00108a90:;
    {
        cpu->r[1] = 0x55000000u;
    }
L_00108a94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00108a98:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_00108a9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00108aa0:;
    {
        cpu->r[14] = 0x00108aa4u; fn_0012dd58(cpu);
    }
L_00108aa4:;
    {
        cpu->r[12] = rd32(0x00108aacu + + 0x34u);
    }
L_00108aa8:;
    {
        cpu->r[3] = rd32(0x00108ab0u + + 0x34u);
    }
L_00108aac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00108ab0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00108ab4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00108ab8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_00108abc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00108ac0:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00108ac4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00108ac8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00108acc:;
    {
        cpu->r[14] = 0x00108ad0u; fn_00130908(cpu);
    }
L_00108ad0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00108ad4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00108ad8u)) return;
    }
}

/* _ZN16GS_EndRaceScreenD1Ev @ 00108ae8 (arm) */
void fn_00108ae8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00108ae8:;
    {
        cpu->r[3] = rd32(0x00108af0u + + 0x24u);
    }
L_00108aec:;
    {
        cpu->r[2] = rd32(0x00108af4u + + 0x24u);
    }
L_00108af0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00108af8u, cpu->r[3], 0, 0);
    }
L_00108af4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00108af8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00108afc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00108b00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00108b04:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00108b08:;
    {
        cpu->r[14] = 0x00108b0cu; fn_000ec21c(cpu);
    }
L_00108b0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00108b10:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00108b14u)) return;
    }
}

/* _ZN16GS_EndRaceScreenD0Ev @ 00108b1c (arm) */
void fn_00108b1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00108b1c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00108b20:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00108b24:;
    {
        cpu->r[14] = 0x00108b28u; fn_00108ae8(cpu);
    }
L_00108b28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00108b2c:;
    {
        cpu->r[14] = 0x00108b30u; fn_0018ba20(cpu);
    }
L_00108b30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00108b34:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00108b38u)) return;
    }
}

/* _ZN16GS_EndRaceScreenD2Ev @ 00108b38 (arm) */
void fn_00108b38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00108b38:;
    {
        cpu->r[3] = rd32(0x00108b40u + + 0x24u);
    }
L_00108b3c:;
    {
        cpu->r[2] = rd32(0x00108b44u + + 0x24u);
    }
L_00108b40:;
    {
        cpu->r[3] = add_flags(cpu, 0x00108b48u, cpu->r[3], 0, 0);
    }
L_00108b44:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00108b48:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00108b4c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00108b50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00108b54:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00108b58:;
    {
        cpu->r[14] = 0x00108b5cu; fn_000ec21c(cpu);
    }
L_00108b5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00108b60:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00108b64u)) return;
    }
}

/* _ZN16GS_EndRaceScreenC1Ev @ 00108b6c (arm) */
void fn_00108b6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00108b6c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00108b70:;
    {
        cpu->r[5] = rd32(0x00108b78u + + 0x48u);
    }
L_00108b74:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00108b78:;
    {
        cpu->r[14] = 0x00108b7cu; fn_0010ffa8(cpu);
    }
L_00108b7c:;
    {
        cpu->r[3] = rd32(0x00108b84u + + 0x40u);
    }
L_00108b80:;
    {
        cpu->r[5] = add_flags(cpu, 0x00108b88u, cpu->r[5], 0, 0);
    }
L_00108b84:;
    {
        cpu->r[2] = rd32(0x00108b8cu + + 0x3cu);
    }
L_00108b88:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00108b8c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00108b90:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00108b94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00108b98:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00108b9c:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_00108ba0:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00108ba4:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00108ba8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00108bac:;
    {
        cpu->r[14] = 0x00108bb0u; fn_000c0d80(cpu);
    }
L_00108bb0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00108bb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00108bb8:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_00108bbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00108bc0u)) return;
    }
}

/* _ZN16GS_EndRaceScreenC2Ev @ 00108bcc (arm) */
void fn_00108bcc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00108bcc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00108bd0:;
    {
        cpu->r[5] = rd32(0x00108bd8u + + 0x48u);
    }
L_00108bd4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00108bd8:;
    {
        cpu->r[14] = 0x00108bdcu; fn_0010ffa8(cpu);
    }
L_00108bdc:;
    {
        cpu->r[3] = rd32(0x00108be4u + + 0x40u);
    }
L_00108be0:;
    {
        cpu->r[5] = add_flags(cpu, 0x00108be8u, cpu->r[5], 0, 0);
    }
L_00108be4:;
    {
        cpu->r[2] = rd32(0x00108becu + + 0x3cu);
    }
L_00108be8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00108bec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00108bf0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00108bf4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00108bf8:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00108bfc:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_00108c00:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00108c04:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00108c08:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00108c0c:;
    {
        cpu->r[14] = 0x00108c10u; fn_000c0d80(cpu);
    }
L_00108c10:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00108c14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00108c18:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_00108c1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00108c20u)) return;
    }
}

/* _ZN16GS_EndRaceScreen17GetNextCareerRaceEv @ 00108c2c (arm) */
void fn_00108c2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00108c2c:;
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
L_00108c30:;
    {
        cpu->r[8] = rd32(0x00108c38u + + 0xe4u);
    }
L_00108c34:;
    {
        cpu->r[9] = rd32(0x00108c3cu + + 0xe4u);
    }
L_00108c38:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00108c3c:;
    {
        cpu->r[8] = add_flags(cpu, 0x00108c44u, cpu->r[8], 0, 0);
    }
L_00108c40:;
    {
        cpu->r[10] = rd32(0x00108c48u + + 0xdcu);
    }
L_00108c44:;
    {
        cpu->r[5] = 0x0000000bu;
    }
L_00108c48:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_00108c4c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000002cu, 0, 0);
    }
L_00108c50:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00108c54:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00108c58:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00108c5c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_00108c60:;
    {
        cpu->r[14] = 0x00108c64u; fn_00096d54(cpu);
    }
L_00108c64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00108c68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108cb0;
        }
    }
L_00108c6c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00108c70:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 1);
    }
L_00108c74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00108c54;
        }
    }
L_00108c78:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_00108c7c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_00108c80:;
    {
        add_flags(cpu, cpu->r[5], 0x00000001u, 0, 1);
    }
L_00108c84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00108c50;
        }
    }
L_00108c88:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00108c8c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_00108c90:;
    {
        wr32(cpu->r[6] + + 0x950u, cpu->r[4]);
    }
L_00108c94:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00108c98:;
    {
        wr32(cpu->r[6] + + 0x954u, cpu->r[4]);
    }
L_00108c9c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00108ca0:;
    {
        cpu->r[14] = 0x00108ca4u; fn_0009764c(cpu);
    }
L_00108ca4:;
    {
        wr32(cpu->r[6] + + 0x958u, cpu->r[0]);
    }
L_00108ca8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00108cac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00108cb0u)) return;
    }
L_00108cb0:;
    {
        cpu->r[11] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_00108cb4:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_00108cb8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00108cbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108cf8;
        }
    }
L_00108cc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[4], 0, 0);
    }
L_00108cc4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x18cu);
    }
L_00108cc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00108ccc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00108c6c;
        }
    }
L_00108cd0:;
    {
        wr32(cpu->r[6] + + 0x954u, cpu->r[4]);
    }
L_00108cd4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00108cd8:;
    {
        wr32(cpu->r[6] + + 0x950u, cpu->r[5]);
    }
L_00108cdc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00108ce0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_00108ce4:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_00108ce8:;
    {
        cpu->r[14] = 0x00108cecu; fn_0009764c(cpu);
    }
L_00108cec:;
    {
        wr32(cpu->r[6] + + 0x958u, cpu->r[0]);
    }
L_00108cf0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00108cf4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00108cf8u)) return;
    }
L_00108cf8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00108cfc:;
    {
        cpu->r[14] = 0x00108d00u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00108d00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00108d04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108cc0;
        }
    }
L_00108d08:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_00108d0c:;
    {
        cpu->r[14] = 0x00108d10u; fn_00094228(cpu);
    }
L_00108d10:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00108d14:;
    {
        cpu->r[14] = 0x00108d18u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00108d18:;
    {
        goto L_00108cc0;
    }
}

/* _ZN16GS_EndRaceScreen17ApplyMenuSettingsEv @ 00108d28 (arm) */
void fn_00108d28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00108d28:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00108d2c:;
    {
        cpu->r[5] = rd32(0x00108d34u + + 0x150u);
    }
L_00108d30:;
    {
        cpu->r[6] = rd32(0x00108d38u + + 0x150u);
    }
L_00108d34:;
    {
        cpu->r[3] = 0x00000586u;
    }
L_00108d38:;
    {
        cpu->r[5] = add_flags(cpu, 0x00108d40u, cpu->r[5], 0, 0);
    }
L_00108d3c:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[3]);
    }
L_00108d40:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00108d44:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00108d48:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00108d4c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00108d50:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_00108d54:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00108d58:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_00108d5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108df4;
        }
    }
L_00108d60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00108d64:;
    {
        cpu->r[2] = 0x00001c9cu;
    }
L_00108d68:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00108d6c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00108d70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108e10;
        }
    }
L_00108d74:;
    {
        cpu->r[1] = rd32(0x00108d7cu + + 0x110u);
    }
L_00108d78:;
    {
        cpu->r[0] = 0x0000856cu;
    }
L_00108d7c:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_00108d80:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00108d84:;
    {
        cpu->r[1] = add_flags(cpu, 0x00108d8cu, cpu->r[1], 0, 0);
    }
L_00108d88:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[2]);
    }
L_00108d8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000078u, 0, 0);
    }
L_00108d90:;
    {
        wr8(cpu->r[3] + cpu->r[0], cpu->r[12]);
    }
L_00108d94:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[1]);
    }
L_00108d98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00108d9c:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00108da0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00108da4:;
    {
        cpu->r[14] = 0x00108dacu;
    }
L_00108da8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0xdcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00108dacu)) return;
    }
L_00108dac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00108db0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00108db4:;
    {
        cpu->r[14] = (~0x00000000u);
    }
L_00108db8:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[12]);
    }
L_00108dbc:;
    {
        cpu->r[1] = 0x00000544u;
    }
L_00108dc0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00108dc4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00108dc8:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[1]);
    }
L_00108dcc:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_00108dd0:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[12]);
    }
L_00108dd4:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[14]);
    }
L_00108dd8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_00108ddc:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00108de0:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[14]);
    }
L_00108de4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00108de8:;
    {
        cpu->r[14] = 0x00108decu; fn_000fd288(cpu);
    }
L_00108dec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00108df0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00108df4u)) return;
    }
L_00108df4:;
    {
        cpu->r[1] = rd32(0x00108dfcu + + 0x94u);
    }
L_00108df8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00108dfc:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00108e00:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[3]);
    }
L_00108e04:;
    {
        cpu->r[1] = add_flags(cpu, 0x00108e0cu, cpu->r[1], 0, 0);
    }
L_00108e08:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[1]);
    }
L_00108e0c:;
    {
        goto L_00108d98;
    }
L_00108e10:;
    {
        cpu->r[14] = 0x00108e14u; fn_00097d9c(cpu);
    }
L_00108e14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00108e18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00108e30;
        }
    }
L_00108e1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00108e20:;
    {
        cpu->r[2] = 0x0000856cu;
    }
L_00108e24:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00108e28:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00108e2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108d74;
        }
    }
L_00108e30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00108e34:;
    {
        cpu->r[14] = 0x00108e38u; fn_00108c2c(cpu);
    }
L_00108e38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00108e3c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
        }
    }
L_00108e40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108d74;
        }
    }
L_00108e44:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00108e48:;
    {
        cpu->r[1] = 0x0000856cu;
    }
L_00108e4c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00108e50:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_00108e54:;
    {
        cpu->r[3] = rd32(0x00108e5cu + + 0x38u);
    }
L_00108e58:;
    {
        wr8(cpu->r[0] + cpu->r[1], cpu->r[12]);
    }
L_00108e5c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00108e60:;
    {
        cpu->r[3] = add_flags(cpu, 0x00108e68u, cpu->r[3], 0, 0);
    }
L_00108e64:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[1]);
    }
L_00108e68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_00108e6c:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_00108e70:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[3]);
    }
L_00108e74:;
    {
        cpu->r[14] = 0x00108e78u; fn_000995cc(cpu);
    }
L_00108e78:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00108e7c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00108e80:;
    {
        goto L_00108d98;
    }
}

/* _ZN16GS_EndRaceScreen6RenderEv @ 00108e98 (arm) */
void fn_00108e98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00108e98:;
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
L_00108e9c:;
    {
        cpu->r[10] = rd32(0x00108ea4u + + 0x3b0u);
    }
L_00108ea0:;
    {
        cpu->r[2] = rd32(0x00108ea8u + + 0x3b0u);
    }
L_00108ea4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000007cu, 1, 0);
    }
L_00108ea8:;
    {
        cpu->r[10] = add_flags(cpu, 0x00108eb0u, cpu->r[10], 0, 0);
    }
L_00108eac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00108eb0:;
    {
        cpu->r[5] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_00108eb4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_00108eb8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00108ebc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00108ec0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108fa0;
        }
    }
L_00108ec4:;
    {
        cpu->r[3] = rd32(0x00108eccu + + 0x390u);
    }
L_00108ec8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_00108ecc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_00108ed0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00108ed4:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_00108ed8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00108edc:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00108ee0:;
    {
        cpu->r[14] = 0x00108ee4u; fn_0018aa44(cpu);
    }
L_00108ee4:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00108ee8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00108eec:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00108ef0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00108ef4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00108ef8:;
    {
        cpu->r[14] = 0x00108efcu; fn_000ad8a0(cpu);
    }
L_00108efc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00108f00:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00108f04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00108fbc;
        }
    }
L_00108f08:;
    {
        cpu->r[3] = rd32(0x00108f10u + + 0x350u);
    }
L_00108f0c:;
    {
        cpu->r[6] = 0x00000004u;
    }
L_00108f10:;
    {
        cpu->r[8] = 0x000067c3u;
    }
L_00108f14:;
    {
        cpu->r[11] = 0x00000583u;
    }
L_00108f18:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_00108f1c:;
    {
        cpu->r[7] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00108f20:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00108f24:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00108f28:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[8]);
    }
L_00108f2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00108f30:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0x908u);
        }
    }
L_00108f34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108f54;
        }
    }
L_00108f38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00108f3c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00108f40:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00108f44:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_00108f48:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x908u, cpu->r[9]);
        }
    }
L_00108f4c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00990000u;
        }
    }
L_00108f50:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x908u, cpu->r[2]);
        }
    }
L_00108f54:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00108f58:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00108f5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00108f60:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00108f64:;
    {
        cpu->r[14] = 0x00108f6cu;
    }
L_00108f68:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00108f6cu)) return;
    }
L_00108f6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00108f70:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_00108f74:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00108f78:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00108f24;
        }
    }
L_00108f7c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00108f80:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_00108f84:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00108f88:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_00108f8c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00108f90:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_00108f94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108fe0;
        }
    }
L_00108f98:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_00108f9c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00108fa0u)) return;
    }
L_00108fa0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00108fa4:;
    {
        cpu->r[14] = 0x00108fa8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00108fa8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00108fac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001090d8;
        }
    }
L_00108fb0:;
    {
        cpu->r[2] = rd32(0x00108fb8u + + 0x2a4u);
    }
L_00108fb4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_00108fb8:;
    {
        goto L_00108ecc;
    }
L_00108fbc:;
    {
        cpu->r[2] = rd32(0x00108fc4u + + 0x29cu);
    }
L_00108fc0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_00108fc4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00108fc8:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_00108fcc:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00108fd0:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_00108fd4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00108fd8:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_00108fdc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00108f98;
        }
    }
L_00108fe0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_00108fe4:;
    {
        cpu->r[5] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00108fe8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00108fec:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00108ff0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00109110;
        }
    }
L_00108ff4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00108ff8:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_00108ffc:;
    {
        cpu->r[14] = 0x00109000u; fn_00096a08(cpu);
    }
L_00109000:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_00109004:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00109008:;
    {
        cpu->r[7] = (~0x00000000u);
    }
L_0010900c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00109010:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00109014:;
    {
        cpu->r[14] = 0x00109018u; fn_0018aa44(cpu);
    }
L_00109018:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0010901c:;
    {
        cpu->r[6] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_00109020:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_00109024:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_00109028:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010902c:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[7]);
    }
L_00109030:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[3]);
    }
L_00109034:;
    {
        cpu->r[3] = 0x0000677cu;
    }
L_00109038:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0010903c:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x3cu);
    }
L_00109040:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_00109044:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001091a8;
        }
    }
L_00109048:;
    {
        add_flags(cpu, cpu->r[5], 0x00000001u, 0, 1);
    }
L_0010904c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00109154;
        }
    }
L_00109050:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00109054:;
    {
        cpu->r[0] = 0x0000066bu;
    }
L_00109058:;
    {
        cpu->r[14] = 0x0010905cu; fn_000aeb58(cpu);
    }
L_0010905c:;
    {
        cpu->r[3] = rd32(0x00109064u + + 0x200u);
    }
L_00109060:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00109064:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00109068:;
    {
        cpu->r[5] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_0010906c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00109070:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 0);
    }
L_00109074:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00109078:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010907c:;
    {
        cpu->r[14] = 0x00109080u; fn_000a9818(cpu);
    }
L_00109080:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00109084:;
    {
        cpu->r[0] = 0x0000066bu;
    }
L_00109088:;
    {
        cpu->r[14] = 0x0010908cu; fn_000aeb58(cpu);
    }
L_0010908c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00109090:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00109094:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_00109098:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010909c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001090a0:;
    {
        cpu->r[12] = rd32(0x001090a8u + + 0x1c0u);
    }
L_001090a4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001090a8:;
    {
        cpu->r[14] = rd32(cpu->r[10] + cpu->r[12]);
    }
L_001090ac:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001090b0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001090b4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001090b8:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_001090bc:;
    {
        cpu->r[14] = 0x00000011u;
    }
L_001090c0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001090c4:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_001090c8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000032u, 1, 0);
    }
L_001090cc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001090d0:;
    {
        cpu->r[14] = 0x001090d4u; fn_000ac4bc(cpu);
    }
L_001090d4:;
    {
        goto L_00108f98;
    }
L_001090d8:;
    {
        cpu->r[3] = rd32(0x001090e0u + + 0x17cu);
    }
L_001090dc:;
    {
        cpu->r[6] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_001090e0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_001090e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001090e8:;
    {
        cpu->r[14] = 0x001090ecu; fn_0018aa20(cpu);
    }
L_001090ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001090f0:;
    {
        cpu->r[14] = 0x001090f4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001090f4:;
    {
        cpu->r[3] = rd32(0x001090fcu + + 0x170u);
    }
L_001090f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001090fc:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00109100:;
    {
        cpu->r[3] = rd32(0x00109108u + + 0x168u);
    }
L_00109104:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00109108:;
    {
        cpu->r[14] = 0x0010910cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010910c:;
    {
        goto L_00108ecc;
    }
L_00109110:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00109114:;
    {
        cpu->r[14] = 0x00109118u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00109118:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010911c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108ff4;
        }
    }
L_00109120:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_00109124:;
    {
        cpu->r[6] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_00109128:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010912c:;
    {
        cpu->r[14] = 0x00109130u; fn_0018aa20(cpu);
    }
L_00109130:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00109134:;
    {
        cpu->r[14] = 0x00109138u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00109138:;
    {
        cpu->r[3] = rd32(0x00109140u + + 0x12cu);
    }
L_0010913c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00109140:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00109144:;
    {
        cpu->r[3] = rd32(0x0010914cu + + 0x124u);
    }
L_00109148:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_0010914c:;
    {
        cpu->r[14] = 0x00109150u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00109150:;
    {
        goto L_00108ff4;
    }
L_00109154:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00109158:;
    {
        cpu->r[0] = 0x0000066au;
    }
L_0010915c:;
    {
        cpu->r[14] = 0x00109160u; fn_000aeb58(cpu);
    }
L_00109160:;
    {
        cpu->r[3] = rd32(0x00109168u + + 0xfcu);
    }
L_00109164:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00109168:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0010916c:;
    {
        cpu->r[6] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00109170:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00109174:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 0);
    }
L_00109178:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010917c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00109180:;
    {
        cpu->r[14] = 0x00109184u; fn_000a9818(cpu);
    }
L_00109184:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00109188:;
    {
        cpu->r[0] = 0x0000066au;
    }
L_0010918c:;
    {
        cpu->r[14] = 0x00109190u; fn_000aeb58(cpu);
    }
L_00109190:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00109194:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00109198:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_0010919c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001091a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001091a4:;
    {
        goto L_001090a0;
    }
L_001091a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001091ac:;
    {
        cpu->r[0] = 0x00000669u;
    }
L_001091b0:;
    {
        cpu->r[14] = 0x001091b4u; fn_000aeb58(cpu);
    }
L_001091b4:;
    {
        cpu->r[3] = rd32(0x001091bcu + + 0xa8u);
    }
L_001091b8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001091bc:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001091c0:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001091c4:;
    {
        cpu->r[5] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_001091c8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001091cc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 0);
    }
L_001091d0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001091d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001091d8:;
    {
        cpu->r[14] = 0x001091dcu; fn_000a9818(cpu);
    }
L_001091dc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001091e0:;
    {
        cpu->r[0] = 0x00000669u;
    }
L_001091e4:;
    {
        cpu->r[14] = 0x001091e8u; fn_000aeb58(cpu);
    }
L_001091e8:;
    {
        cpu->r[12] = rd32(0x001091f0u + + 0x78u);
    }
L_001091ec:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001091f0:;
    {
        cpu->r[14] = 0x00000011u;
    }
L_001091f4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001091f8:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001091fc:;
    {
        cpu->r[12] = rd32(cpu->r[10] + cpu->r[12]);
    }
L_00109200:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_00109204:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_00109208:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_0010920c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00109210:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[8]);
    }
L_00109214:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_00109218:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000032u, 1, 0);
    }
L_0010921c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00109220:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00109224:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00109228:;
    {
        cpu->r[14] = 0x0010922cu; fn_000ac4bc(cpu);
    }
L_0010922c:;
    {
        cpu->r[14] = 0x00109230u; fn_000979a0(cpu);
    }
L_00109230:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x88u);
    }
L_00109234:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_00109238:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00108f98;
        }
    }
L_0010923c:;
    {
        cpu->r[14] = 0x00109240u; fn_000979a0(cpu);
    }
L_00109240:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00109244:;
    {
        wr32(cpu->r[0] + + 0x88u, cpu->r[7]);
    }
L_00109248:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0010924c:;
    {
        cpu->r[14] = 0x00109250u; fn_0009e9e8(cpu);
    }
L_00109250:;
    {
        goto L_00108f98;
    }
}

/* _ZN16GS_EndRaceScreen11InitSpritesEv @ 00109274 (arm) */
void fn_00109274(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00109274:;
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
L_00109278:;
    {
        cpu->r[4] = rd32(0x00109280u + + 0x2b0u);
    }
L_0010927c:;
    {
        cpu->r[7] = rd32(0x00109284u + + 0x2b0u);
    }
L_00109280:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00109284:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010928cu, cpu->r[4], 0, 0);
    }
L_00109288:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010928c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00109290:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00109294:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001093ac;
        }
    }
L_00109298:;
    {
        cpu->r[6] = rd32(0x001092a0u + + 0x298u);
    }
L_0010929c:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_001092a0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001092a4:;
    {
        cpu->r[14] = 0x001092a8u; fn_00096a08(cpu);
    }
L_001092a8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001092ac:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001092b0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001092b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001092b8:;
    {
        cpu->r[14] = 0x001092bcu; fn_0018aa44(cpu);
    }
L_001092bc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001092c0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001092c4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001092c8:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[0]);
    }
L_001092cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001094f4;
        }
    }
L_001092d0:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_001092d4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001092d8:;
    {
        cpu->r[14] = 0x001092dcu; fn_00096a08(cpu);
    }
L_001092dc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001092e0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001092e4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001092e8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001092ec:;
    {
        cpu->r[14] = 0x001092f0u; fn_0018aa44(cpu);
    }
L_001092f0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001092f4:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001092f8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001092fc:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[0]);
    }
L_00109300:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001094b8;
        }
    }
L_00109304:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_00109308:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010930c:;
    {
        cpu->r[14] = 0x00109310u; fn_00096a08(cpu);
    }
L_00109310:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00109314:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00109318:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010931c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00109320:;
    {
        cpu->r[14] = 0x00109324u; fn_0018aa44(cpu);
    }
L_00109324:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00109328:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0010932c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00109330:;
    {
        wr32(cpu->r[5] + + 0xa8u, cpu->r[0]);
    }
L_00109334:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010947c;
        }
    }
L_00109338:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_0010933c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00109340:;
    {
        cpu->r[14] = 0x00109344u; fn_00096a08(cpu);
    }
L_00109344:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00109348:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010934c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00109350:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00109354:;
    {
        cpu->r[14] = 0x00109358u; fn_0018aa44(cpu);
    }
L_00109358:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010935c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00109360:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00109364:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[0]);
    }
L_00109368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00109440;
        }
    }
L_0010936c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00109370:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00109374:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00109378:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010937c:;
    {
        cpu->r[14] = 0x00109380u; fn_0018aa44(cpu);
    }
L_00109380:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00109384:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00109388:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010938c:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[0]);
    }
L_00109390:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001093f0;
        }
    }
L_00109394:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00109398:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010939c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001093a0:;
    {
        cpu->r[14] = 0x001093a4u; fn_0018aa44(cpu);
    }
L_001093a4:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_001093a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001093acu)) return;
    }
L_001093ac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001093b0:;
    {
        cpu->r[14] = 0x001093b4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001093b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001093b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00109298;
        }
    }
L_001093bc:;
    {
        cpu->r[6] = rd32(0x001093c4u + + 0x174u);
    }
L_001093c0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001093c4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001093c8:;
    {
        cpu->r[14] = 0x001093ccu; fn_0018aa20(cpu);
    }
L_001093cc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001093d0:;
    {
        cpu->r[14] = 0x001093d4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001093d4:;
    {
        cpu->r[3] = rd32(0x001093dcu + + 0x160u);
    }
L_001093d8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001093dc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001093e0:;
    {
        cpu->r[3] = rd32(0x001093e8u + + 0x158u);
    }
L_001093e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001093e8:;
    {
        cpu->r[14] = 0x001093ecu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001093ec:;
    {
        goto L_0010929c;
    }
L_001093f0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001093f4:;
    {
        cpu->r[14] = 0x001093f8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001093f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001093fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00109394;
        }
    }
L_00109400:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00109404:;
    {
        cpu->r[14] = 0x00109408u; fn_0018aa20(cpu);
    }
L_00109408:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010940c:;
    {
        cpu->r[14] = 0x00109410u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00109410:;
    {
        cpu->r[3] = rd32(0x00109418u + + 0x124u);
    }
L_00109414:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00109418:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010941c:;
    {
        cpu->r[3] = rd32(0x00109424u + + 0x11cu);
    }
L_00109420:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00109424:;
    {
        cpu->r[14] = 0x00109428u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00109428:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010942c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00109430:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00109434:;
    {
        cpu->r[14] = 0x00109438u; fn_0018aa44(cpu);
    }
L_00109438:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_0010943c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00109440u)) return;
    }
L_00109440:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00109444:;
    {
        cpu->r[14] = 0x00109448u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00109448:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010944c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010936c;
        }
    }
L_00109450:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00109454:;
    {
        cpu->r[14] = 0x00109458u; fn_0018aa20(cpu);
    }
L_00109458:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010945c:;
    {
        cpu->r[14] = 0x00109460u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00109460:;
    {
        cpu->r[3] = rd32(0x00109468u + + 0xd4u);
    }
L_00109464:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00109468:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010946c:;
    {
        cpu->r[3] = rd32(0x00109474u + + 0xccu);
    }
L_00109470:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00109474:;
    {
        cpu->r[14] = 0x00109478u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00109478:;
    {
        goto L_0010936c;
    }
L_0010947c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00109480:;
    {
        cpu->r[14] = 0x00109484u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00109484:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00109488:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00109338;
        }
    }
L_0010948c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00109490:;
    {
        cpu->r[14] = 0x00109494u; fn_0018aa20(cpu);
    }
L_00109494:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00109498:;
    {
        cpu->r[14] = 0x0010949cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010949c:;
    {
        cpu->r[3] = rd32(0x001094a4u + + 0x98u);
    }
L_001094a0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001094a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001094a8:;
    {
        cpu->r[3] = rd32(0x001094b0u + + 0x90u);
    }
L_001094ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001094b0:;
    {
        cpu->r[14] = 0x001094b4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001094b4:;
    {
        goto L_00109338;
    }
L_001094b8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001094bc:;
    {
        cpu->r[14] = 0x001094c0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001094c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001094c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00109304;
        }
    }
L_001094c8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001094cc:;
    {
        cpu->r[14] = 0x001094d0u; fn_0018aa20(cpu);
    }
L_001094d0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001094d4:;
    {
        cpu->r[14] = 0x001094d8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001094d8:;
    {
        cpu->r[3] = rd32(0x001094e0u + + 0x5cu);
    }
L_001094dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001094e0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001094e4:;
    {
        cpu->r[3] = rd32(0x001094ecu + + 0x54u);
    }
L_001094e8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001094ec:;
    {
        cpu->r[14] = 0x001094f0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001094f0:;
    {
        goto L_00109304;
    }
L_001094f4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001094f8:;
    {
        cpu->r[14] = 0x001094fcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001094fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00109500:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001092d0;
        }
    }
L_00109504:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00109508:;
    {
        cpu->r[14] = 0x0010950cu; fn_0018aa20(cpu);
    }
L_0010950c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00109510:;
    {
        cpu->r[14] = 0x00109514u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00109514:;
    {
        cpu->r[3] = rd32(0x0010951cu + + 0x20u);
    }
L_00109518:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010951c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00109520:;
    {
        cpu->r[3] = rd32(0x00109528u + + 0x18u);
    }
L_00109524:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00109528:;
    {
        cpu->r[14] = 0x0010952cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010952c:;
    {
        goto L_001092d0;
    }
}

/* _ZN11GS_FreeView8DoActionEii @ 00109544 (arm) */
void fn_00109544(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00109544:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_00109548:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010954c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_00109550:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00109554:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00109558u)) return;
        }
    }
L_00109558:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0010955c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_00109560:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0010958c;
        }
    }
L_00109564:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_00109568:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_0010956c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00109570:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
        }
    }
L_00109574:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_00109578:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[4] = v;
        }
    }
L_0010957c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_00109580:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
        }
    }
L_00109584:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[4]);
    }
L_00109588:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010958cu)) return;
    }
L_0010958c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00109590:;
    {
        cpu->r[14] = 0x00109598u;
    }
L_00109594:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00109598u)) return;
    }
L_00109598:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010959cu)) return;
    }
}

/* _ZN11GS_FreeView12UpdateScriptEv @ 0010959c (arm) */
void fn_0010959c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010959c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_FreeView8isKindOfEi @ 001095a0 (arm) */
void fn_001095a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001095a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000015u, 1, 1);
    }
L_001095a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001095a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001095ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_22 @ 001095b0 (arm) */
void fn_001095b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001095b0:;
    {
        cpu->r[3] = rd32(0x001095b8u + + 0x20u);
    }
L_001095b4:;
    {
        cpu->r[1] = rd32(0x001095bcu + + 0x20u);
    }
L_001095b8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001095c0u, cpu->r[3], 0, 0);
    }
L_001095bc:;
    {
        cpu->r[2] = rd32(0x001095c4u + + 0x1cu);
    }
L_001095c0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001095c4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001095ccu, cpu->r[2], 0, 0);
    }
L_001095c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001095cc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_001095d0:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001095d4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_FreeViewD1Ev @ 001095e4 (arm) */
void fn_001095e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001095e4:;
    {
        cpu->r[3] = rd32(0x001095ecu + + 0x24u);
    }
L_001095e8:;
    {
        cpu->r[2] = rd32(0x001095f0u + + 0x24u);
    }
L_001095ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x001095f4u, cpu->r[3], 0, 0);
    }
L_001095f0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001095f4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001095f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001095fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00109600:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00109604:;
    {
        cpu->r[14] = 0x00109608u; fn_000ec21c(cpu);
    }
L_00109608:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010960c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00109610u)) return;
    }
}

/* _ZN11GS_FreeView6ResumeEv @ 00109618 (arm) */
void fn_00109618(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00109618:;
    {
        return fn_001142a0(cpu);
    }
}

/* _ZN11GS_FreeView11DoBarActionEii @ 0010961c (arm) */
void fn_0010961c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010961c:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00109620:;
    {
        cpu->r[5] = rd32(0x00109628u + + 0x140u);
    }
L_00109624:;
    {
        cpu->r[6] = rd32(0x0010962cu + + 0x140u);
    }
L_00109628:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_0010962c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00109634u, cpu->r[5], 0, 0);
    }
L_00109630:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x7cu);
    }
L_00109634:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00109638:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0010963c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00109640:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00109644:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00109648:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001096bc;
        }
    }
L_0010964c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00109650:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8ecu);
    }
L_00109654:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_00109658:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010965c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00109660:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00109664:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00109668:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_0010966c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00109670:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00109674:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[3]);
    }
L_00109678:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000094u;
        }
    }
L_0010967c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_00109680:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_00109684:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00109688:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010968c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00109690:;
    {
        cpu->r[14] = 0x00109694u; fn_000fd248(cpu);
    }
L_00109694:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00109698:;
    {
        cpu->r[2] = 0x000005cau;
    }
L_0010969c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001096a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001096d8;
        }
    }
L_001096a4:;
    {
        cpu->r[2] = 0x0000066cu;
    }
L_001096a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001096ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001096d8;
        }
    }
L_001096b0:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001096b4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001096b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001096d8;
        }
    }
L_001096bc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001096c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001096c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001096c8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001096cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00109764;
        }
    }
L_001096d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001096d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001096d8u)) return;
    }
L_001096d8:;
    {
        cpu->r[3] = rd32(0x001096e0u + + 0x90u);
    }
L_001096dc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001096e0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001096e4:;
    {
        cpu->r[3] = 0x00006774u;
    }
L_001096e8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001096ec:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x40u);
    }
L_001096f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001096f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00109704;
        }
    }
L_001096f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001096fc:;
    {
        cpu->r[14] = 0x00109700u; fn_0010df70(cpu);
    }
L_00109700:;
    {
        goto L_001096bc;
    }
L_00109704:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00109708:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010970c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00109710:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00109714:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_00109718:;
    {
        cpu->r[1] = rd32(0x00109720u + + 0x54u);
    }
L_0010971c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_00109720:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_00109724:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010972cu, cpu->r[1], 0, 0);
    }
L_00109728:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0010972c:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_00109730:;
    {
        uint32_t wb_tmp = cpu->r[7] + - 0x18u;
        wr32(cpu->r[7] + - 0x18u, cpu->r[2]);
        cpu->r[7] = wb_tmp;
    }
L_00109734:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00109738:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0010973c:;
    {
        cpu->r[14] = 0x00109740u; imp_sprintf(cpu); /* sprintf */
    }
L_00109740:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00109744:;
    {
        cpu->r[14] = 0x00109748u; imp_strlen(cpu); /* strlen */
    }
L_00109748:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010974c:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_00109750:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00109754:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00109758:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0010975c:;
    {
        cpu->r[14] = 0x00109760u; fn_001c44d0(cpu);
    }
L_00109760:;
    {
        goto L_001096f8;
    }
L_00109764:;
    {
        cpu->r[14] = 0x00109768u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_00109768:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] & shifter(cpu->r[4], 4, 27u, &shc); cpu->r[0] = v;
        set_nz(cpu, v);
        }
    }
L_0010976c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_00109770:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_00109774:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[2] + (-cpu->r[4]);
        cpu->r[5] = (uint32_t)(int32_t)s8(cpu->r[2]);
        cpu->r[2] = wb_tmp;
        }
    }
}

/* _ZN11GS_FreeView6RenderEv @ 00109778 (arm) */
void fn_00109778(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00109778:;
    {
        cpu->r[3] = rd32(0x00109780u + + 0x34u);
    }
L_0010977c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00109780:;
    {
        cpu->r[1] = rd32(0x00109788u + + 0x30u);
    }
L_00109784:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010978cu, cpu->r[3], 0, 0);
    }
L_00109788:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010978c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00109790:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00109794:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00109798:;
    {
        cpu->r[14] = 0x0010979cu; fn_00113570(cpu);
    }
L_0010979c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001097a0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001097a4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001097a8:;
    {
        cpu->r[14] = 0x001097b0u;
    }
L_001097ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001097b0u)) return;
    }
L_001097b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001097b4u)) return;
    }
}

/* _ZN11GS_FreeView6UpdateEv @ 001097bc (arm) */
void fn_001097bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001097bc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_001097c0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001097c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001097c8:;
    {
        cpu->r[4] = rd32(0x001097d0u + + 0x60u);
    }
L_001097cc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001097d0:;
    {
        cpu->r[4] = add_flags(cpu, 0x001097d8u, cpu->r[4], 0, 0);
    }
L_001097d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00109824;
        }
    }
L_001097d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001097dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001097f0;
        }
    }
L_001097e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001097e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001097e8u)) return;
        }
    }
L_001097e8:;
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
L_001097ec:;
    {
        return fn_00114a58(cpu);
    }
L_001097f0:;
    {
        cpu->r[14] = 0x001097f4u; fn_0010da28(cpu);
    }
L_001097f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001097f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001097fcu)) return;
        }
    }
L_001097fc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xc4u);
    }
L_00109800:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_00109804:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00109808:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010980cu)) return;
        }
    }
L_0010980c:;
    {
        cpu->r[3] = rd32(0x00109814u + + 0x20u);
    }
L_00109810:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00109814:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00109818:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0010981c:;
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
L_00109820:;
    {
        return fn_000f34e8(cpu);
    }
L_00109824:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00109828:;
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
L_0010982c:;
    {
        return fn_000eb59c(cpu);
    }
}

/* _ZN11GS_FreeView17ApplyMenuSettingsEv @ 00109838 (arm) */
void fn_00109838(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00109838:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_0010983c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00109840:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[3]);
    }
L_00109844:;
    {
        cpu->r[3] = 0x000004b5u;
    }
L_00109848:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[3]);
    }
L_0010984c:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_00109850:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00109854:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00109858:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0010985c:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[2]);
    }
L_00109860:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[5]);
    }
L_00109864:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00109868:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0010986c:;
    {
        cpu->r[3] = rd32(0x00109874u + + 0x30u);
    }
L_00109870:;
    {
        wr32(cpu->r[0] + + 0x954u, cpu->r[2]);
    }
L_00109874:;
    {
        wr32(cpu->r[0] + + 0x960u, cpu->r[1]);
    }
L_00109878:;
    {
        cpu->r[3] = add_flags(cpu, 0x00109880u, cpu->r[3], 0, 0);
    }
L_0010987c:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[5]);
    }
L_00109880:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[3]);
    }
L_00109884:;
    {
        wr32(cpu->r[0] + + 0x950u, cpu->r[5]);
    }
L_00109888:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0010988c:;
    {
        cpu->r[14] = 0x00109894u;
    }
L_00109890:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00109894u)) return;
    }
L_00109894:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[5]);
    }
L_00109898:;
    {
        cpu->r[14] = 0x0010989cu; fn_0009b4d0(cpu);
    }
L_0010989c:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[0]);
    }
L_001098a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001098a4u)) return;
    }
}

/* _ZN11GS_FreeViewC1Eb @ 001098a8 (arm) */
void fn_001098a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001098a8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001098ac:;
    {
        cpu->r[4] = rd32(0x001098b4u + + 0x28u);
    }
L_001098b0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001098b4:;
    {
        cpu->r[14] = 0x001098b8u; fn_001100c0(cpu);
    }
L_001098b8:;
    {
        cpu->r[3] = rd32(0x001098c0u + + 0x20u);
    }
L_001098bc:;
    {
        cpu->r[4] = add_flags(cpu, 0x001098c4u, cpu->r[4], 0, 0);
    }
L_001098c0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001098c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001098c8:;
    {
        wr8(cpu->r[5] + + 0x8cau, cpu->r[2]);
    }
L_001098cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001098d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001098d4:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001098d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001098dcu)) return;
    }
}

/* _ZN11GS_FreeViewC2Eb @ 001098e4 (arm) */
void fn_001098e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001098e4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001098e8:;
    {
        cpu->r[4] = rd32(0x001098f0u + + 0x28u);
    }
L_001098ec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001098f0:;
    {
        cpu->r[14] = 0x001098f4u; fn_001100c0(cpu);
    }
L_001098f4:;
    {
        cpu->r[3] = rd32(0x001098fcu + + 0x20u);
    }
L_001098f8:;
    {
        cpu->r[4] = add_flags(cpu, 0x00109900u, cpu->r[4], 0, 0);
    }
L_001098fc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00109900:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00109904:;
    {
        wr8(cpu->r[5] + + 0x8cau, cpu->r[2]);
    }
L_00109908:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010990c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00109910:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00109914:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00109918u)) return;
    }
}

/* _ZN11GS_FreeViewD0Ev @ 00109920 (arm) */
void fn_00109920(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00109920:;
    {
        cpu->r[3] = rd32(0x00109928u + + 0x2cu);
    }
L_00109924:;
    {
        cpu->r[2] = rd32(0x0010992cu + + 0x2cu);
    }
L_00109928:;
    {
        cpu->r[3] = add_flags(cpu, 0x00109930u, cpu->r[3], 0, 0);
    }
L_0010992c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00109930:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00109934:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00109938:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0010993c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00109940:;
    {
        cpu->r[14] = 0x00109944u; fn_000ec21c(cpu);
    }
L_00109944:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00109948:;
    {
        cpu->r[14] = 0x0010994cu; fn_0018ba20(cpu);
    }
L_0010994c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00109950:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00109954u)) return;
    }
}

/* _ZN15GS_GirlsGallery8DoActionEii @ 0010995c (arm) */
void fn_0010995c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010995c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_00109960:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00109964:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_00109968:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0010996c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00109970u)) return;
        }
    }
L_00109970:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_00109974:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_00109978:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001099a4;
        }
    }
L_0010997c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_00109980:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_00109984:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00109988:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
        }
    }
L_0010998c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_00109990:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[4] = v;
        }
    }
L_00109994:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_00109998:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
        }
    }
L_0010999c:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[4]);
    }
L_001099a0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001099a4u)) return;
    }
L_001099a4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001099a8:;
    {
        cpu->r[14] = 0x001099b0u;
    }
L_001099ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001099b0u)) return;
    }
L_001099b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001099b4u)) return;
    }
}

/* _ZN15GS_GirlsGallery18ProcessOnMouseDragEv @ 001099b4 (arm) */
void fn_001099b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001099b4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001099b8:;
    {
        wr8(cpu->r[0] + + 0x96cu, cpu->r[3]);
    }
L_001099bc:;
    {
        wr8(cpu->r[0] + + 0x64u, cpu->r[3]);
    }
L_001099c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GS_GirlsGallery8isKindOfEi @ 001099c4 (arm) */
void fn_001099c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001099c4:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000001du, 1, 1);
    }
L_001099c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001099cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001099d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_23 @ 001099d4 (arm) */
void fn_001099d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001099d4:;
    {
        cpu->r[3] = rd32(0x001099dcu + + 0x20u);
    }
L_001099d8:;
    {
        cpu->r[1] = rd32(0x001099e0u + + 0x20u);
    }
L_001099dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001099e4u, cpu->r[3], 0, 0);
    }
L_001099e0:;
    {
        cpu->r[2] = rd32(0x001099e8u + + 0x1cu);
    }
L_001099e4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001099e8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001099f0u, cpu->r[2], 0, 0);
    }
L_001099ec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001099f0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_001099f4:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001099f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GS_GirlsGallery22ProcessOnMouseButtonUpEv @ 00109a08 (arm) */
void fn_00109a08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00109a08:;
    {
        cpu->r[3] = rd32(0x00109a10u + + 0x30u);
    }
L_00109a0c:;
    {
        cpu->r[2] = rd32(0x00109a14u + + 0x30u);
    }
L_00109a10:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00109a14:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00109a18:;
    {
        cpu->r[3] = add_flags(cpu, 0x00109a20u, cpu->r[3], 0, 0);
    }
L_00109a1c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00109a20:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00109a24:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4]);
    }
L_00109a28:;
    {
        cpu->r[14] = 0x00109a2cu; fn_00110c40(cpu);
    }
L_00109a2c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00109a30:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00109a34:;
    {
        wr8(cpu->r[5] + + 0x96cu, cpu->r[3]);
    }
L_00109a38:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00109a3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00109a40u)) return;
    }
}

/* _ZN15GS_GirlsGallery24ProcessOnMouseButtonDownEv @ 00109a48 (arm) */
void fn_00109a48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00109a48:;
    {
        cpu->r[3] = rd32(0x00109a50u + + 0x24u);
    }
L_00109a4c:;
    {
        cpu->r[2] = rd32(0x00109a54u + + 0x24u);
    }
L_00109a50:;
    {
        cpu->r[3] = add_flags(cpu, 0x00109a58u, cpu->r[3], 0, 0);
    }
L_00109a54:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00109a58:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00109a5c:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00109a60:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4]);
    }
L_00109a64:;
    {
        cpu->r[14] = 0x00109a68u; fn_00110498(cpu);
    }
L_00109a68:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00109a6c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00109a70:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00109a74u)) return;
    }
}

/* _ZN15GS_GirlsGallery6UpdateEv @ 00109a7c (arm) */
void fn_00109a7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00109a7c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_00109a80:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00109a84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00109a88:;
    {
        cpu->r[4] = rd32(0x00109a90u + + 0x13cu);
    }
L_00109a8c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00109a90:;
    {
        cpu->r[4] = add_flags(cpu, 0x00109a98u, cpu->r[4], 0, 0);
    }
L_00109a94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00109ae8;
        }
    }
L_00109a98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00109a9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00109ab0;
        }
    }
L_00109aa0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00109aa4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00109aa8u)) return;
        }
    }
L_00109aa8:;
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
L_00109aac:;
    {
        return fn_00114a58(cpu);
    }
L_00109ab0:;
    {
        cpu->r[14] = 0x00109ab4u; fn_0010da28(cpu);
    }
L_00109ab4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00109ab8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00109abcu)) return;
        }
    }
L_00109abc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xc4u);
    }
L_00109ac0:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_00109ac4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00109ac8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00109accu)) return;
        }
    }
L_00109acc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00109ad0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00109ad4:;
    {
        cpu->r[14] = 0x00109ad8u; fn_0009e9e8(cpu);
    }
L_00109ad8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00109adc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00109ae0:;
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
L_00109ae4:;
    {
        return fn_000f34e8(cpu);
    }
L_00109ae8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00109aec:;
    {
        cpu->r[14] = 0x00109af0u; fn_000eb59c(cpu);
    }
L_00109af0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00109af4:;
    {
        cpu->r[14] = 0x00109af8u; fn_0010efe4(cpu);
    }
L_00109af8:;
    {
        cpu->r[3] = rd32(0x00109b00u + + 0xd0u);
    }
L_00109afc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00109b00:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_00109b04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00109b08:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00109b70;
        }
    }
L_00109b0c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000002u, 0, 1);
    }
L_00109b10:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00109b14u)) return;
        }
    }
L_00109b14:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x96cu);
    }
L_00109b18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00109b1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00109b20u)) return;
        }
    }
L_00109b20:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x970u);
    }
L_00109b24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00109b28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00109b2cu)) return;
        }
    }
L_00109b2c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x958u);
    }
L_00109b30:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00109b34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00109b38:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x954u);
        }
    }
L_00109b3c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00109b40:;
    {
        wr32(cpu->r[5] + + 0x958u, cpu->r[3]);
    }
L_00109b44:;
    {
        cpu->r[3] = rd32(0x00109b4cu + + 0x88u);
    }
L_00109b48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00109b4c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00109b50:;
    {
        wr32(cpu->r[5] + + 0x978u, cpu->r[2]);
    }
L_00109b54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000320u, 1, 1);
    }
L_00109b58:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_00109b5c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = (~0x0000000du);
        }
    }
L_00109b60:;
    {
        wr32(cpu->r[5] + + 0x974u, cpu->r[3]);
    }
L_00109b64:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_00109b68:;
    {
        wr32(cpu->r[5] + + 0x970u, cpu->r[3]);
    }
L_00109b6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00109b70u)) return;
    }
L_00109b70:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x96cu);
    }
L_00109b74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00109b78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00109b7cu)) return;
        }
    }
L_00109b7c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x970u);
    }
L_00109b80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00109b84:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00109b88u)) return;
        }
    }
L_00109b88:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x954u);
    }
L_00109b8c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x958u);
    }
L_00109b90:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00109b94:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00109b98:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_00109b9c:;
    {
        wr32(cpu->r[5] + + 0x958u, cpu->r[3]);
    }
L_00109ba0:;
    {
        cpu->r[3] = rd32(0x00109ba8u + + 0x2cu);
    }
L_00109ba4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00109ba8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00109bac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00109bb0:;
    {
        wr32(cpu->r[5] + + 0x978u, cpu->r[2]);
    }
L_00109bb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000320u, 1, 1);
    }
L_00109bb8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = (~0x0000000du);
        }
    }
L_00109bbc:;
    {
        wr32(cpu->r[5] + + 0x974u, cpu->r[3]);
    }
L_00109bc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00109bc4:;
    {
        wr32(cpu->r[5] + + 0x970u, cpu->r[3]);
    }
L_00109bc8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00109bccu)) return;
    }
}

/* _ZN15GS_GirlsGallery6RenderEv @ 00109bd8 (arm) */
void fn_00109bd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00109bd8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x958u);
    }
L_00109bdc:;
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
L_00109be0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00109be4:;
    {
        cpu->r[5] = rd32(0x00109becu + + 0x238u);
    }
L_00109be8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00109bec:;
    {
        cpu->r[9] = rd32(0x00109bf4u + + 0x234u);
    }
L_00109bf0:;
    {
        cpu->r[5] = add_flags(cpu, 0x00109bf8u, cpu->r[5], 0, 0);
    }
L_00109bf4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_00109bf8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x954u);
        }
    }
L_00109bfc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_00109c00:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x954u);
        }
    }
L_00109c04:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00109c08:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00109c0c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_00109c10:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00109c14:;
    {
        wr32(cpu->r[0] + + 0x960u, cpu->r[3]);
    }
L_00109c18:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00109c1c:;
    {
        wr32(cpu->r[0] + + 0x95cu, cpu->r[1]);
    }
L_00109c20:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00109c24:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_00109c28:;
    {
        cpu->r[1] = 0xff000000u;
    }
L_00109c2c:;
    {
        wr32(cpu->r[0] + + 0x964u, cpu->r[3]);
    }
L_00109c30:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00109c34:;
    {
        cpu->r[14] = 0x00109c38u; fn_0012dd58(cpu);
    }
L_00109c38:;
    {
        cpu->r[3] = rd32(0x00109c40u + + 0x1ecu);
    }
L_00109c3c:;
    {
        cpu->r[10] = rd32(0x00109c44u + + 0x1ecu);
    }
L_00109c40:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00109c44:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00109c48:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00109c4c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00109c50:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00109c54:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_00109c58:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00109c5c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00109c60:;
    {
        cpu->r[14] = 0x00109c64u; fn_00130908(cpu);
    }
L_00109c64:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x970u);
    }
L_00109c68:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00109c6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00109da0;
        }
    }
L_00109c70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00109df4;
        }
    }
L_00109c74:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_00109c78:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000014u, 1, 0);
    }
L_00109c7c:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[8], 1, 0);
    }
L_00109c80:;
    {
        wr32(cpu->r[4] + + 0x970u, cpu->r[8]);
    }
L_00109c84:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 0);
    }
L_00109c88:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00109c8c:;
    {
        wr32(cpu->r[4] + + 0x974u, cpu->r[3]);
    }
L_00109c90:;
    {
        wr32(cpu->r[4] + + 0x978u, cpu->r[8]);
    }
L_00109c94:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00109c98:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00109c9c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00109ca0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x968u);
    }
L_00109ca4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00109ca8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x960u);
    }
L_00109cac:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_00109cb0:;
    {
        cpu->r[14] = 0x00109cb4u; fn_000a8d10(cpu);
    }
L_00109cb4:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00109cb8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x974u);
    }
L_00109cbc:;
    {
        cpu->r[3] = 0x00000018u;
    }
L_00109cc0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x968u);
    }
L_00109cc4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00109cc8:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_00109ccc:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00109cd4u + + 0x14cu);
    }
L_00109cd0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x960u);
    }
L_00109cd4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00109cd8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000320u, 1, 1);
    }
L_00109cdc:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00109ce0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00109ce4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000010u;
        }
    }
L_00109ce8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_00109cec:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_00109cf0:;
    {
        cpu->r[14] = 0x00109cf4u; fn_000adab4(cpu);
    }
L_00109cf4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00109cf8:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_00109cfc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x968u);
    }
L_00109d00:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00109d04:;
    {
        cpu->r[14] = 0x00109d08u; fn_000a8d10(cpu);
    }
L_00109d08:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_00109d0c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x978u);
    }
L_00109d10:;
    {
        cpu->r[3] = 0x00000018u;
    }
L_00109d14:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000320u, 1, 1);
    }
L_00109d18:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x968u);
    }
L_00109d1c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_00109d20:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = 0x00000010u;
        }
    }
L_00109d24:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00109d28:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_00109d2c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00109d30:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_00109d34:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00109d38:;
    {
        cpu->r[14] = 0x00109d3cu; fn_000adab4(cpu);
    }
L_00109d3c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00109d40:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00109d44:;
    {
        cpu->r[14] = 0x00109d48u; fn_0012f780(cpu);
    }
L_00109d48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00109d4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00109d50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00109d80;
        }
    }
L_00109d54:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00109d58:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00109d5c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00109d60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00109d64:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00109d68:;
    {
        cpu->r[14] = 0x00109d70u;
    }
L_00109d6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00109d70u)) return;
    }
L_00109d70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00109d74:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00109d78:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00109d7c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00109d58;
        }
    }
L_00109d80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00109d84:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00109d88:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00109d8c:;
    {
        cpu->r[14] = 0x00109d94u;
    }
L_00109d90:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00109d94u)) return;
    }
L_00109d94:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00109d98:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00109d9c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00109da0u)) return;
    }
L_00109da0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x968u);
    }
L_00109da4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00109da8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x960u);
    }
L_00109dac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00109db0:;
    {
        cpu->r[14] = 0x00109db4u; fn_000a8d10(cpu);
    }
L_00109db4:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_00109db8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_00109dbc:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_00109dc0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00109dc4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00109dc8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x968u);
    }
L_00109dcc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00109dd0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_00109dd4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x960u);
    }
L_00109dd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_00109ddc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00109de0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_00109de4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_00109de8:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_00109dec:;
    {
        cpu->r[14] = 0x00109df0u; fn_000ad8a0(cpu);
    }
L_00109df0:;
    {
        goto L_00109d3c;
    }
L_00109df4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00109df8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000014u, 0, 0);
    }
L_00109dfc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x964u);
    }
L_00109e00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_00109e04:;
    {
        wr32(cpu->r[4] + + 0x970u, cpu->r[8]);
    }
L_00109e08:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_00109e0c:;
    {
        wr32(cpu->r[4] + + 0x978u, cpu->r[3]);
    }
L_00109e10:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00109e14:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[8], 1, 0);
    }
L_00109e18:;
    {
        wr32(cpu->r[4] + + 0x974u, cpu->r[2]);
    }
L_00109e1c:;
    {
        goto L_00109c98;
    }
}

/* _ZN15GS_GirlsGalleryC2Ebi @ 00109e34 (arm) */
void fn_00109e34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00109e34:;
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
L_00109e38:;
    {
        cpu->r[4] = rd32(0x00109e40u + + 0x154u);
    }
L_00109e3c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00109e40:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00109e44:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00109e48:;
    {
        cpu->r[14] = 0x00109e4cu; fn_001100c0(cpu);
    }
L_00109e4c:;
    {
        cpu->r[2] = rd32(0x00109e54u + + 0x144u);
    }
L_00109e50:;
    {
        cpu->r[4] = add_flags(cpu, 0x00109e58u, cpu->r[4], 0, 0);
    }
L_00109e54:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 1);
    }
L_00109e58:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00109e5c:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[6]);
    }
L_00109e60:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00109e64:;
    {
        wr32(cpu->r[5] + + 0x978u, cpu->r[3]);
    }
L_00109e68:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00109e6c:;
    {
        wr8(cpu->r[5] + + 0x96cu, cpu->r[3]);
    }
L_00109e70:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_00109e74:;
    {
        wr32(cpu->r[5] + + 0x970u, cpu->r[3]);
    }
L_00109e78:;
    {
        wr32(cpu->r[5] + + 0x974u, cpu->r[3]);
    }
L_00109e7c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00109f5c;
        }
    }
L_00109e80:;
    {
        cpu->r[7] = rd32(0x00109e88u + + 0x114u);
    }
L_00109e84:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00109e88:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00109e8c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00109e90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00109edc;
        }
    }
L_00109e94:;
    {
        cpu->r[6] = rd32(0x00109e9cu + + 0x104u);
    }
L_00109e98:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00109e9c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00109ea0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x950u);
    }
L_00109ea4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00109ea8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00109eac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000048u, 0, 0);
    }
L_00109eb0:;
    {
        cpu->r[14] = 0x00109eb4u; fn_0018aa58(cpu);
    }
L_00109eb4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00109eb8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00109ebc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00109ec0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00109f20;
        }
    }
L_00109ec4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00109ec8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00109ecc:;
    {
        cpu->r[14] = 0x00109ed0u; fn_0018b5c8(cpu);
    }
L_00109ed0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00109ed4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00109ed8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00109edcu)) return;
    }
L_00109edc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00109ee0:;
    {
        cpu->r[14] = 0x00109ee4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00109ee4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00109ee8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00109e94;
        }
    }
L_00109eec:;
    {
        cpu->r[6] = rd32(0x00109ef4u + + 0xacu);
    }
L_00109ef0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00109ef4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00109ef8:;
    {
        cpu->r[14] = 0x00109efcu; fn_0018aa20(cpu);
    }
L_00109efc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00109f00:;
    {
        cpu->r[14] = 0x00109f04u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00109f04:;
    {
        cpu->r[3] = rd32(0x00109f0cu + + 0x98u);
    }
L_00109f08:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00109f0c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00109f10:;
    {
        cpu->r[3] = rd32(0x00109f18u + + 0x90u);
    }
L_00109f14:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00109f18:;
    {
        cpu->r[14] = 0x00109f1cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00109f1c:;
    {
        goto L_00109e98;
    }
L_00109f20:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00109f24:;
    {
        cpu->r[14] = 0x00109f28u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00109f28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00109f2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00109ec4;
        }
    }
L_00109f30:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00109f34:;
    {
        cpu->r[14] = 0x00109f38u; fn_0018aa20(cpu);
    }
L_00109f38:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00109f3c:;
    {
        cpu->r[14] = 0x00109f40u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00109f40:;
    {
        cpu->r[3] = rd32(0x00109f48u + + 0x5cu);
    }
L_00109f44:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00109f48:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00109f4c:;
    {
        cpu->r[3] = rd32(0x00109f54u + + 0x54u);
    }
L_00109f50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00109f54:;
    {
        cpu->r[14] = 0x00109f58u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00109f58:;
    {
        goto L_00109ec4;
    }
L_00109f5c:;
    {
        cpu->r[1] = rd32(0x00109f64u + + 0x48u);
    }
L_00109f60:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00109f64:;
    {
        cpu->r[2] = rd32(0x00109f6cu + + 0x44u);
    }
L_00109f68:;
    {
        cpu->r[14] = 0x00000024u;
    }
L_00109f6c:;
    {
        cpu->r[3] = rd32(0x00109f74u + + 0x40u);
    }
L_00109f70:;
    {
        cpu->r[1] = add_flags(cpu, 0x00109f78u, cpu->r[1], 0, 0);
    }
L_00109f74:;
    {
        cpu->r[12] = rd32(0x00109f7cu + + 0x3cu);
    }
L_00109f78:;
    {
        cpu->r[2] = add_flags(cpu, 0x00109f80u, cpu->r[2], 0, 0);
    }
L_00109f7c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00109f84u, cpu->r[3], 0, 0);
    }
L_00109f80:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00109f84:;
    {
        cpu->r[12] = add_flags(cpu, 0x00109f8cu, cpu->r[12], 0, 0);
    }
L_00109f88:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00109f8c:;
    {
        cpu->r[14] = 0x00109f90u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00109f90:;
    {
        goto L_00109e80;
    }
}

/* _ZN15GS_GirlsGallery17ApplyMenuSettingsEv @ 00109fbc (arm) */
void fn_00109fbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00109fbc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00109fc0:;
    {
        cpu->r[5] = rd32(0x00109fc8u + + 0xb8u);
    }
L_00109fc4:;
    {
        cpu->r[1] = rd32(0x00109fccu + + 0xb8u);
    }
L_00109fc8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00109fcc:;
    {
        cpu->r[5] = add_flags(cpu, 0x00109fd4u, cpu->r[5], 0, 0);
    }
L_00109fd0:;
    {
        cpu->r[2] = rd32(0x00109fd8u + + 0xb0u);
    }
L_00109fd4:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[3]);
    }
L_00109fd8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00109fdc:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00109fe0:;
    {
        cpu->r[2] = add_flags(cpu, 0x00109fe8u, cpu->r[2], 0, 0);
    }
L_00109fe4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00109fe8:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[2]);
    }
L_00109fec:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[1]);
    }
L_00109ff0:;
    {
        cpu->r[1] = 0x000005bau;
    }
L_00109ff4:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_00109ff8:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_00109ffc:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010a000:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[1]);
    }
L_0010a004:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[3]);
    }
L_0010a008:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a03c;
        }
    }
L_0010a00c:;
    {
        cpu->r[6] = rd32(0x0010a014u + + 0x78u);
    }
L_0010a010:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x950u);
    }
L_0010a014:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010a018:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0010a01c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000048u, 0, 0);
    }
L_0010a020:;
    {
        cpu->r[14] = 0x0010a024u; fn_0018aa44(cpu);
    }
L_0010a024:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010a028:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_0010a02c:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[0]);
    }
L_0010a030:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[2]);
    }
L_0010a034:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_0010a038:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010a03cu)) return;
    }
L_0010a03c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010a040:;
    {
        cpu->r[14] = 0x0010a044u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010a044:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010a048:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a00c;
        }
    }
L_0010a04c:;
    {
        cpu->r[6] = rd32(0x0010a054u + + 0x38u);
    }
L_0010a050:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0010a054:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010a058:;
    {
        cpu->r[14] = 0x0010a05cu; fn_0018aa20(cpu);
    }
L_0010a05c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010a060:;
    {
        cpu->r[14] = 0x0010a064u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010a064:;
    {
        cpu->r[3] = rd32(0x0010a06cu + + 0x24u);
    }
L_0010a068:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010a06c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010a070:;
    {
        cpu->r[3] = rd32(0x0010a078u + + 0x1cu);
    }
L_0010a074:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010a078:;
    {
        cpu->r[14] = 0x0010a07cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010a07c:;
    {
        goto L_0010a010;
    }
}

/* _ZN15GS_GirlsGalleryD1Ev @ 0010a098 (arm) */
void fn_0010a098(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010a098:;
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
L_0010a09c:;
    {
        cpu->r[4] = rd32(0x0010a0a4u + + 0x104u);
    }
L_0010a0a0:;
    {
        cpu->r[7] = rd32(0x0010a0a8u + + 0x104u);
    }
L_0010a0a4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010a0a8:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010a0b0u, cpu->r[4], 0, 0);
    }
L_0010a0ac:;
    {
        cpu->r[3] = rd32(0x0010a0b4u + + 0xfcu);
    }
L_0010a0b0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010a0b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a0b8:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_0010a0bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010a0c0:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0010a0c4:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010a0c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a128;
        }
    }
L_0010a0cc:;
    {
        cpu->r[6] = rd32(0x0010a0d4u + + 0xe0u);
    }
L_0010a0d0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010a0d4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010a0d8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x950u);
    }
L_0010a0dc:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0010a0e0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010a0e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000048u, 0, 0);
    }
L_0010a0e8:;
    {
        cpu->r[14] = 0x0010a0ecu; fn_0018aa58(cpu);
    }
L_0010a0ec:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010a0f0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0010a0f4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010a0f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a16c;
        }
    }
L_0010a0fc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010a100:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010a104:;
    {
        cpu->r[14] = 0x0010a108u; fn_0018b5c8(cpu);
    }
L_0010a108:;
    {
        cpu->r[3] = rd32(0x0010a110u + + 0xa8u);
    }
L_0010a10c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010a110:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a114:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010a118:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0010a11c:;
    {
        cpu->r[14] = 0x0010a120u; fn_000ec21c(cpu);
    }
L_0010a120:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010a124:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010a128u)) return;
    }
L_0010a128:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010a12c:;
    {
        cpu->r[14] = 0x0010a130u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010a130:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010a134:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a0cc;
        }
    }
L_0010a138:;
    {
        cpu->r[6] = rd32(0x0010a140u + + 0x74u);
    }
L_0010a13c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010a140:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010a144:;
    {
        cpu->r[14] = 0x0010a148u; fn_0018aa20(cpu);
    }
L_0010a148:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010a14c:;
    {
        cpu->r[14] = 0x0010a150u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010a150:;
    {
        cpu->r[3] = rd32(0x0010a158u + + 0x64u);
    }
L_0010a154:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010a158:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a15c:;
    {
        cpu->r[3] = rd32(0x0010a164u + + 0x5cu);
    }
L_0010a160:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a164:;
    {
        cpu->r[14] = 0x0010a168u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010a168:;
    {
        goto L_0010a0d0;
    }
L_0010a16c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010a170:;
    {
        cpu->r[14] = 0x0010a174u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010a174:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010a178:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a0fc;
        }
    }
L_0010a17c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010a180:;
    {
        cpu->r[14] = 0x0010a184u; fn_0018aa20(cpu);
    }
L_0010a184:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010a188:;
    {
        cpu->r[14] = 0x0010a18cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010a18c:;
    {
        cpu->r[3] = rd32(0x0010a194u + + 0x28u);
    }
L_0010a190:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010a194:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a198:;
    {
        cpu->r[3] = rd32(0x0010a1a0u + + 0x20u);
    }
L_0010a19c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a1a0:;
    {
        cpu->r[14] = 0x0010a1a4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010a1a4:;
    {
        goto L_0010a0fc;
    }
}

/* _ZN15GS_GirlsGalleryD0Ev @ 0010a1c4 (arm) */
void fn_0010a1c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010a1c4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010a1c8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010a1cc:;
    {
        cpu->r[14] = 0x0010a1d0u; fn_0010a098(cpu);
    }
L_0010a1d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010a1d4:;
    {
        cpu->r[14] = 0x0010a1d8u; fn_0018ba20(cpu);
    }
L_0010a1d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010a1dc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010a1e0u)) return;
    }
}

/* _ZN15GS_GirlsGalleryD2Ev @ 0010a1e0 (arm) */
void fn_0010a1e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010a1e0:;
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
L_0010a1e4:;
    {
        cpu->r[4] = rd32(0x0010a1ecu + + 0x104u);
    }
L_0010a1e8:;
    {
        cpu->r[7] = rd32(0x0010a1f0u + + 0x104u);
    }
L_0010a1ec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010a1f0:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010a1f8u, cpu->r[4], 0, 0);
    }
L_0010a1f4:;
    {
        cpu->r[3] = rd32(0x0010a1fcu + + 0xfcu);
    }
L_0010a1f8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010a1fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a200:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_0010a204:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010a208:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0010a20c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010a210:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a270;
        }
    }
L_0010a214:;
    {
        cpu->r[6] = rd32(0x0010a21cu + + 0xe0u);
    }
L_0010a218:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010a21c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010a220:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x950u);
    }
L_0010a224:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0010a228:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010a22c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000048u, 0, 0);
    }
L_0010a230:;
    {
        cpu->r[14] = 0x0010a234u; fn_0018aa58(cpu);
    }
L_0010a234:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010a238:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0010a23c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010a240:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a2b4;
        }
    }
L_0010a244:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010a248:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010a24c:;
    {
        cpu->r[14] = 0x0010a250u; fn_0018b5c8(cpu);
    }
L_0010a250:;
    {
        cpu->r[3] = rd32(0x0010a258u + + 0xa8u);
    }
L_0010a254:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010a258:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a25c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010a260:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0010a264:;
    {
        cpu->r[14] = 0x0010a268u; fn_000ec21c(cpu);
    }
L_0010a268:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010a26c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010a270u)) return;
    }
L_0010a270:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010a274:;
    {
        cpu->r[14] = 0x0010a278u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010a278:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010a27c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a214;
        }
    }
L_0010a280:;
    {
        cpu->r[6] = rd32(0x0010a288u + + 0x74u);
    }
L_0010a284:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010a288:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010a28c:;
    {
        cpu->r[14] = 0x0010a290u; fn_0018aa20(cpu);
    }
L_0010a290:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010a294:;
    {
        cpu->r[14] = 0x0010a298u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010a298:;
    {
        cpu->r[3] = rd32(0x0010a2a0u + + 0x64u);
    }
L_0010a29c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010a2a0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a2a4:;
    {
        cpu->r[3] = rd32(0x0010a2acu + + 0x5cu);
    }
L_0010a2a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a2ac:;
    {
        cpu->r[14] = 0x0010a2b0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010a2b0:;
    {
        goto L_0010a218;
    }
L_0010a2b4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010a2b8:;
    {
        cpu->r[14] = 0x0010a2bcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010a2bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010a2c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a244;
        }
    }
L_0010a2c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010a2c8:;
    {
        cpu->r[14] = 0x0010a2ccu; fn_0018aa20(cpu);
    }
L_0010a2cc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010a2d0:;
    {
        cpu->r[14] = 0x0010a2d4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010a2d4:;
    {
        cpu->r[3] = rd32(0x0010a2dcu + + 0x28u);
    }
L_0010a2d8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010a2dc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a2e0:;
    {
        cpu->r[3] = rd32(0x0010a2e8u + + 0x20u);
    }
L_0010a2e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a2e8:;
    {
        cpu->r[14] = 0x0010a2ecu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010a2ec:;
    {
        goto L_0010a244;
    }
}

/* _ZN15GS_GirlsGalleryC1Ebi @ 0010a30c (arm) */
void fn_0010a30c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010a30c:;
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
L_0010a310:;
    {
        cpu->r[4] = rd32(0x0010a318u + + 0x154u);
    }
L_0010a314:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0010a318:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010a31c:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0010a320:;
    {
        cpu->r[14] = 0x0010a324u; fn_001100c0(cpu);
    }
L_0010a324:;
    {
        cpu->r[2] = rd32(0x0010a32cu + + 0x144u);
    }
L_0010a328:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010a330u, cpu->r[4], 0, 0);
    }
L_0010a32c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 1);
    }
L_0010a330:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0010a334:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[6]);
    }
L_0010a338:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0010a33c:;
    {
        wr32(cpu->r[5] + + 0x978u, cpu->r[3]);
    }
L_0010a340:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0010a344:;
    {
        wr8(cpu->r[5] + + 0x96cu, cpu->r[3]);
    }
L_0010a348:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_0010a34c:;
    {
        wr32(cpu->r[5] + + 0x970u, cpu->r[3]);
    }
L_0010a350:;
    {
        wr32(cpu->r[5] + + 0x974u, cpu->r[3]);
    }
L_0010a354:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010a434;
        }
    }
L_0010a358:;
    {
        cpu->r[7] = rd32(0x0010a360u + + 0x114u);
    }
L_0010a35c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010a360:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0010a364:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010a368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a3b4;
        }
    }
L_0010a36c:;
    {
        cpu->r[6] = rd32(0x0010a374u + + 0x104u);
    }
L_0010a370:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010a374:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0010a378:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x950u);
    }
L_0010a37c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0010a380:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010a384:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000048u, 0, 0);
    }
L_0010a388:;
    {
        cpu->r[14] = 0x0010a38cu; fn_0018aa58(cpu);
    }
L_0010a38c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010a390:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0010a394:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010a398:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a3f8;
        }
    }
L_0010a39c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010a3a0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010a3a4:;
    {
        cpu->r[14] = 0x0010a3a8u; fn_0018b5c8(cpu);
    }
L_0010a3a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010a3ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0010a3b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010a3b4u)) return;
    }
L_0010a3b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010a3b8:;
    {
        cpu->r[14] = 0x0010a3bcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010a3bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010a3c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a36c;
        }
    }
L_0010a3c4:;
    {
        cpu->r[6] = rd32(0x0010a3ccu + + 0xacu);
    }
L_0010a3c8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010a3cc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010a3d0:;
    {
        cpu->r[14] = 0x0010a3d4u; fn_0018aa20(cpu);
    }
L_0010a3d4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010a3d8:;
    {
        cpu->r[14] = 0x0010a3dcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010a3dc:;
    {
        cpu->r[3] = rd32(0x0010a3e4u + + 0x98u);
    }
L_0010a3e0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010a3e4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a3e8:;
    {
        cpu->r[3] = rd32(0x0010a3f0u + + 0x90u);
    }
L_0010a3ec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a3f0:;
    {
        cpu->r[14] = 0x0010a3f4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010a3f4:;
    {
        goto L_0010a370;
    }
L_0010a3f8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010a3fc:;
    {
        cpu->r[14] = 0x0010a400u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010a400:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010a404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a39c;
        }
    }
L_0010a408:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010a40c:;
    {
        cpu->r[14] = 0x0010a410u; fn_0018aa20(cpu);
    }
L_0010a410:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010a414:;
    {
        cpu->r[14] = 0x0010a418u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010a418:;
    {
        cpu->r[3] = rd32(0x0010a420u + + 0x5cu);
    }
L_0010a41c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010a420:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a424:;
    {
        cpu->r[3] = rd32(0x0010a42cu + + 0x54u);
    }
L_0010a428:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a42c:;
    {
        cpu->r[14] = 0x0010a430u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010a430:;
    {
        goto L_0010a39c;
    }
L_0010a434:;
    {
        cpu->r[1] = rd32(0x0010a43cu + + 0x48u);
    }
L_0010a438:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0010a43c:;
    {
        cpu->r[2] = rd32(0x0010a444u + + 0x44u);
    }
L_0010a440:;
    {
        cpu->r[14] = 0x00000024u;
    }
L_0010a444:;
    {
        cpu->r[3] = rd32(0x0010a44cu + + 0x40u);
    }
L_0010a448:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010a450u, cpu->r[1], 0, 0);
    }
L_0010a44c:;
    {
        cpu->r[12] = rd32(0x0010a454u + + 0x3cu);
    }
L_0010a450:;
    {
        cpu->r[2] = add_flags(cpu, 0x0010a458u, cpu->r[2], 0, 0);
    }
L_0010a454:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010a45cu, cpu->r[3], 0, 0);
    }
L_0010a458:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0010a45c:;
    {
        cpu->r[12] = add_flags(cpu, 0x0010a464u, cpu->r[12], 0, 0);
    }
L_0010a460:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010a464:;
    {
        cpu->r[14] = 0x0010a468u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0010a468:;
    {
        goto L_0010a358;
    }
}

/* _ZN12GS_GirlsMenu8isKindOfEi @ 0010a494 (arm) */
void fn_0010a494(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010a494:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000001du, 1, 1);
    }
L_0010a498:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0010a49c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0010a4a0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_24 @ 0010a4a4 (arm) */
void fn_0010a4a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010a4a4:;
    {
        cpu->r[2] = rd32(0x0010a4acu + + 0x40u);
    }
L_0010a4a8:;
    {
        cpu->r[1] = rd32(0x0010a4b0u + + 0x40u);
    }
L_0010a4ac:;
    {
        cpu->r[2] = add_flags(cpu, 0x0010a4b4u, cpu->r[2], 0, 0);
    }
L_0010a4b0:;
    {
        cpu->r[0] = rd32(0x0010a4b8u + + 0x3cu);
    }
L_0010a4b4:;
    {
        cpu->r[3] = rd32(0x0010a4bcu + + 0x3cu);
    }
L_0010a4b8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0010a4bc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_0010a4c0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010a4c8u, cpu->r[3], 0, 0);
    }
L_0010a4c4:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0010a4c8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0010a4cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 3, 31u, &shc), 0, 0);
    }
L_0010a4d0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 0);
    }
L_0010a4d4:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[2]);
    }
L_0010a4d8:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_0010a4dc:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_0010a4e0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000028u, 1, 0);
    }
L_0010a4e4:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_0010a4e8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12GS_GirlsMenu6ResumeEv @ 0010a4fc (arm) */
void fn_0010a4fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010a4fc:;
    {
        return fn_001142a0(cpu);
    }
}

/* _ZN12GS_GirlsMenu24ProcessOnMouseButtonDownEv @ 0010a500 (arm) */
void fn_0010a500(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010a500:;
    {
        cpu->r[3] = rd32(0x0010a508u + + 0x24u);
    }
L_0010a504:;
    {
        cpu->r[2] = rd32(0x0010a50cu + + 0x24u);
    }
L_0010a508:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010a510u, cpu->r[3], 0, 0);
    }
L_0010a50c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010a510:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0010a514:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010a518:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4]);
    }
L_0010a51c:;
    {
        cpu->r[14] = 0x0010a520u; fn_00110498(cpu);
    }
L_0010a520:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0010a524:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0010a528:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010a52cu)) return;
    }
}

/* _ZN12GS_GirlsMenu15DisableBarItemsEi @ 0010a534 (arm) */
void fn_0010a534(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010a534:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010a538:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010a53c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0010a540:;
    {
        cpu->r[14] = 0x0010a544u; fn_000a059c(cpu);
    }
L_0010a544:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010a548:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a560;
        }
    }
L_0010a54c:;
    {
        cpu->r[3] = rd32(0x0010a554u + + 0x1cu);
    }
L_0010a550:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010a558u, cpu->r[3], 0, 0);
    }
L_0010a554:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000048u, 0, 0);
    }
L_0010a558:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[3]);
    }
L_0010a55c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010a560u)) return;
    }
L_0010a560:;
    {
        cpu->r[3] = rd32(0x0010a568u + + 0xcu);
    }
L_0010a564:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010a56cu, cpu->r[3], 0, 0);
    }
L_0010a568:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[3]);
    }
L_0010a56c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010a570u)) return;
    }
}

/* _ZN12GS_GirlsMenu17ApplyMenuSettingsEv @ 0010a578 (arm) */
void fn_0010a578(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010a578:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0010a57c:;
    {
        cpu->r[2] = rd32(0x0010a584u + + 0x54u);
    }
L_0010a580:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0010a584:;
    {
        cpu->r[12] = 0x00000003u;
    }
L_0010a588:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x950u);
    }
L_0010a58c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0010a594u, cpu->r[2], 0, 0);
    }
L_0010a590:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0010a594:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 1);
    }
L_0010a598:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], 0x00000048u, 0, 0);
    }
L_0010a59c:;
    {
        wr32(cpu->r[3] + + 0x78u, cpu->r[0]);
    }
L_0010a5a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000090u, 0, 0);
    }
L_0010a5a4:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[1] = cpu->r[0];
        }
    }
L_0010a5a8:;
    {
        wr32(cpu->r[3] + + 0x8e8u, cpu->r[2]);
    }
L_0010a5ac:;
    {
        cpu->r[2] = 0x000005bau;
    }
L_0010a5b0:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[3] + + 0x950u, cpu->r[0]);
        }
    }
L_0010a5b4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0010a5b8:;
    {
        wr32(cpu->r[3] + + 0x8e0u, cpu->r[2]);
    }
L_0010a5bc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010a5c0:;
    {
        wr32(cpu->r[3] + + 0x8d8u, cpu->r[12]);
    }
L_0010a5c4:;
    {
        wr32(cpu->r[3] + + 0x8ecu, cpu->r[4]);
    }
L_0010a5c8:;
    {
        wr32(cpu->r[3] + + 0x8d4u, cpu->r[12]);
    }
L_0010a5cc:;
    {
        wr8(cpu->r[3] + + 0x90cu, cpu->r[2]);
    }
L_0010a5d0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0010a5d4:;
    {
        return fn_0010a534(cpu);
    }
}

/* _ZN12GS_GirlsMenu6UpdateEv @ 0010a5dc (arm) */
void fn_0010a5dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010a5dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0010a5e0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010a5e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0010a5e8:;
    {
        cpu->r[4] = rd32(0x0010a5f0u + + 0x154u);
    }
L_0010a5ec:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0010a5f0:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010a5f8u, cpu->r[4], 0, 0);
    }
L_0010a5f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a660;
        }
    }
L_0010a5f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0010a5fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a610;
        }
    }
L_0010a600:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010a604:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010a608u)) return;
        }
    }
L_0010a608:;
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
L_0010a60c:;
    {
        return fn_00114a58(cpu);
    }
L_0010a610:;
    {
        cpu->r[14] = 0x0010a614u; fn_0010da28(cpu);
    }
L_0010a614:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010a618:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010a61cu)) return;
        }
    }
L_0010a61c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xc4u);
    }
L_0010a620:;
    {
        cpu->r[2] = 0x000005c6u;
    }
L_0010a624:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010a628:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a68c;
        }
    }
L_0010a62c:;
    {
        cpu->r[2] = 0x000005c7u;
    }
L_0010a630:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010a634:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a66c;
        }
    }
L_0010a638:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_0010a63c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010a640:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010a644u)) return;
        }
    }
L_0010a644:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010a648:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_0010a64c:;
    {
        cpu->r[14] = 0x0010a650u; fn_0009e9e8(cpu);
    }
L_0010a650:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_0010a654:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010a658:;
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
L_0010a65c:;
    {
        return fn_000f34e8(cpu);
    }
L_0010a660:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0010a664:;
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
L_0010a668:;
    {
        return fn_000eb59c(cpu);
    }
L_0010a66c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_0010a670:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x950u);
    }
L_0010a674:;
    {
        cpu->r[14] = 0x0010a678u; fn_000a059c(cpu);
    }
L_0010a678:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010a67c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010a710;
        }
    }
L_0010a680:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0010a684:;
    {
        wr32(cpu->r[6] + + 0x94u, cpu->r[3]);
    }
L_0010a688:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010a68cu)) return;
    }
L_0010a68c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_0010a690:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x950u);
    }
L_0010a694:;
    {
        cpu->r[14] = 0x0010a698u; fn_000a059c(cpu);
    }
L_0010a698:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010a69c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a680;
        }
    }
L_0010a6a0:;
    {
        cpu->r[3] = rd32(0x0010a6a8u + + 0xa0u);
    }
L_0010a6a4:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0010a6a8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a6ac:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0010a6b0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_0010a6b4:;
    {
        cpu->r[14] = 0x0010a6b8u; fn_0018cb94(cpu);
    }
L_0010a6b8:;
    {
        cpu->r[3] = rd32(0x0010a6c0u + + 0x8cu);
    }
L_0010a6bc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x950u);
    }
L_0010a6c0:;
    {
        cpu->r[0] = 0x00000078u;
    }
L_0010a6c4:;
    {
        cpu->r[6] = rd32(cpu->r[5]);
    }
L_0010a6c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a6cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0010a6d0:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0010a6d4:;
    {
        cpu->r[14] = 0x0010a6d8u; fn_0018ba6c(cpu);
    }
L_0010a6d8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010a6dc:;
    {
        cpu->r[2] = 0x00000078u;
    }
L_0010a6e0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010a6e4:;
    {
        cpu->r[14] = 0x0010a6e8u; imp_memset(cpu); /* memset */
    }
L_0010a6e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010a6ec:;
    {
        cpu->r[14] = 0x0010a6f0u; fn_000eaca4(cpu);
    }
L_0010a6f0:;
    {
        cpu->r[3] = rd32(0x0010a6f8u + + 0x58u);
    }
L_0010a6f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010a6f8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010a6fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a700:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010a704:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0010a708:;
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
L_0010a70c:;
    {
        return fn_000f361c(cpu);
    }
L_0010a710:;
    {
        cpu->r[3] = rd32(0x0010a718u + + 0x30u);
    }
L_0010a714:;
    {
        cpu->r[0] = 0x0000097cu;
    }
L_0010a718:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a71c:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_0010a720:;
    {
        cpu->r[14] = 0x0010a724u; fn_0018ba6c(cpu);
    }
L_0010a724:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x950u);
    }
L_0010a728:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010a72c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010a730:;
    {
        cpu->r[14] = 0x0010a734u; fn_0010a30c(cpu);
    }
L_0010a734:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010a738:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010a73c:;
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
L_0010a740:;
    {
        return fn_000f361c(cpu);
    }
}

/* _ZN12GS_GirlsMenuD1Ev @ 0010a754 (arm) */
void fn_0010a754(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010a754:;
    {
        cpu->r[3] = rd32(0x0010a75cu + + 0x24u);
    }
L_0010a758:;
    {
        cpu->r[2] = rd32(0x0010a760u + + 0x24u);
    }
L_0010a75c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010a764u, cpu->r[3], 0, 0);
    }
L_0010a760:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010a764:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010a768:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010a76c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0010a770:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0010a774:;
    {
        cpu->r[14] = 0x0010a778u; fn_000ec21c(cpu);
    }
L_0010a778:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010a77c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010a780u)) return;
    }
}

/* _ZN12GS_GirlsMenuD0Ev @ 0010a788 (arm) */
void fn_0010a788(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010a788:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010a78c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010a790:;
    {
        cpu->r[14] = 0x0010a794u; fn_0010a754(cpu);
    }
L_0010a794:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010a798:;
    {
        cpu->r[14] = 0x0010a79cu; fn_0018ba20(cpu);
    }
L_0010a79c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010a7a0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010a7a4u)) return;
    }
}

/* _ZN12GS_GirlsMenuD2Ev @ 0010a7a4 (arm) */
void fn_0010a7a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010a7a4:;
    {
        cpu->r[3] = rd32(0x0010a7acu + + 0x24u);
    }
L_0010a7a8:;
    {
        cpu->r[2] = rd32(0x0010a7b0u + + 0x24u);
    }
L_0010a7ac:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010a7b4u, cpu->r[3], 0, 0);
    }
L_0010a7b0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010a7b4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010a7b8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010a7bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0010a7c0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0010a7c4:;
    {
        cpu->r[14] = 0x0010a7c8u; fn_000ec21c(cpu);
    }
L_0010a7c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010a7cc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010a7d0u)) return;
    }
}

/* _ZN12GS_GirlsMenuC1Ebi @ 0010a7d8 (arm) */
void fn_0010a7d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010a7d8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010a7dc:;
    {
        cpu->r[4] = rd32(0x0010a7e4u + + 0x28u);
    }
L_0010a7e0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010a7e4:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0010a7e8:;
    {
        cpu->r[14] = 0x0010a7ecu; fn_001100c0(cpu);
    }
L_0010a7ec:;
    {
        cpu->r[3] = rd32(0x0010a7f4u + + 0x1cu);
    }
L_0010a7f0:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010a7f8u, cpu->r[4], 0, 0);
    }
L_0010a7f4:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[6]);
    }
L_0010a7f8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010a7fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a800:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010a804:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0010a808:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010a80cu)) return;
    }
}

/* _ZN12GS_GirlsMenu8DoActionEii @ 0010a814 (arm) */
void fn_0010a814(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010a814:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0010a818:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0010a81c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0010a820:;
    {
        cpu->r[4] = rd32(0x0010a828u + + 0x1f0u);
    }
L_0010a824:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0010a828:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010a82c:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010a834u, cpu->r[4], 0, 0);
    }
L_0010a830:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a83c;
        }
    }
L_0010a834:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0010a838:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010a83cu)) return;
    }
L_0010a83c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0010a840:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0010a844:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010a904;
        }
    }
L_0010a848:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_0010a84c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0010a850:;
    {
        cpu->r[3] = 0x0000054au;
    }
L_0010a854:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_0010a858:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
        }
    }
L_0010a85c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_0010a860:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
        }
    }
L_0010a864:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
        }
    }
L_0010a868:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd32(cpu->r[2] + shifter(cpu->r[12], 2, 2u, &shc));
        }
    }
L_0010a86c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0010a870:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[12]);
    }
L_0010a874:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a93c;
        }
    }
L_0010a878:;
    {
        cpu->r[3] = 0x0000054bu;
    }
L_0010a87c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0010a880:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a9b8;
        }
    }
L_0010a884:;
    {
        cpu->r[3] = 0x000004bau;
    }
L_0010a888:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0010a88c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010a834;
        }
    }
L_0010a890:;
    {
        cpu->r[0] = rd32(0x0010a898u + + 0x184u);
    }
L_0010a894:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010a898:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010a89c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010a8a0:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010a8a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0010a8a8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0010a8ac:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010a8b0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010a8b4:;
    {
        cpu->r[14] = 0x0010a8b8u; fn_000fd248(cpu);
    }
L_0010a8b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8e8u);
    }
L_0010a8bc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x88u);
    }
L_0010a8c0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x30u);
    }
L_0010a8c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0010a8c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_0010a8cc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_0010a8d0:;
    {
        cpu->r[3] = 0x00000696u;
    }
L_0010a8d4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0010a8d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010a834;
        }
    }
L_0010a8dc:;
    {
        cpu->r[3] = rd32(0x0010a8e4u + + 0x13cu);
    }
L_0010a8e0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010a8e4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0010a8e8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010a8ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a914;
        }
    }
L_0010a8f0:;
    {
        cpu->r[7] = rd32(0x0010a8f8u + + 0x12cu);
    }
L_0010a8f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010a8f8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x950u);
    }
L_0010a8fc:;
    {
        wr32(cpu->r[3] + + 0x98u, cpu->r[2]);
    }
L_0010a900:;
    {
        goto L_0010a834;
    }
L_0010a904:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0010a908:;
    {
        cpu->r[14] = 0x0010a910u;
    }
L_0010a90c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010a910u)) return;
    }
L_0010a910:;
    {
        goto L_0010a834;
    }
L_0010a914:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010a918:;
    {
        cpu->r[14] = 0x0010a91cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010a91c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010a920:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010a8f0;
        }
    }
L_0010a924:;
    {
        cpu->r[7] = rd32(0x0010a92cu + + 0xf8u);
    }
L_0010a928:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010a92c:;
    {
        cpu->r[14] = 0x0010a930u; fn_00094228(cpu);
    }
L_0010a930:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010a934:;
    {
        cpu->r[14] = 0x0010a938u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010a938:;
    {
        goto L_0010a8f4;
    }
L_0010a93c:;
    {
        cpu->r[6] = rd32(0x0010a944u + + 0xd8u);
    }
L_0010a940:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010a944:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010a948:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_0010a94c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010a950:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010a954:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0010a958:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010a95c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010a960:;
    {
        cpu->r[14] = 0x0010a964u; fn_000fd248(cpu);
    }
L_0010a964:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x950u);
    }
L_0010a968:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0010a96c:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_0010a970:;
    {
        wr32(cpu->r[5] + + 0x78u, cpu->r[2]);
    }
L_0010a974:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0010a978:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[3]);
    }
L_0010a97c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010a980:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000004u;
        }
    }
L_0010a984:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[5] + + 0x950u, cpu->r[3]);
        }
    }
L_0010a988:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010a98c:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_0010a990:;
    {
        cpu->r[14] = 0x0010a994u; fn_0018ba6c(cpu);
    }
L_0010a994:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x950u);
    }
L_0010a998:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010a99c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010a9a0:;
    {
        cpu->r[14] = 0x0010a9a4u; fn_0010a7d8(cpu);
    }
L_0010a9a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010a9a8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010a9ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0010a9b0:;
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
        cpu->r[14] = v4;
        cpu->r[13] += 20u;
    }
L_0010a9b4:;
    {
        return fn_000f36dc(cpu);
    }
L_0010a9b8:;
    {
        cpu->r[6] = rd32(0x0010a9c0u + + 0x5cu);
    }
L_0010a9bc:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0010a9c0:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_0010a9c4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0010a9c8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0010a9cc:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010a9d0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0010a9d4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010a9d8:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_0010a9dc:;
    {
        cpu->r[14] = 0x0010a9e0u; fn_000fd248(cpu);
    }
L_0010a9e0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x950u);
    }
L_0010a9e4:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0010a9e8:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_0010a9ec:;
    {
        wr32(cpu->r[5] + + 0x78u, cpu->r[2]);
    }
L_0010a9f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0010a9f4:;
    {
        cpu->r[6] = rd32(cpu->r[4]);
    }
L_0010a9f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0010a9fc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = cpu->r[7];
        }
    }
L_0010aa00:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[3]);
    }
L_0010aa04:;
    {
        cpu->r[14] = 0x0010aa08u; fn_0018ba6c(cpu);
    }
L_0010aa08:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0010aa0c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x950u);
    }
L_0010aa10:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010aa14:;
    {
        goto L_0010a9a0;
    }
}

/* _ZN12GS_GirlsMenuC2Ebi @ 0010aa28 (arm) */
void fn_0010aa28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010aa28:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010aa2c:;
    {
        cpu->r[4] = rd32(0x0010aa34u + + 0x28u);
    }
L_0010aa30:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010aa34:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0010aa38:;
    {
        cpu->r[14] = 0x0010aa3cu; fn_001100c0(cpu);
    }
L_0010aa3c:;
    {
        cpu->r[3] = rd32(0x0010aa44u + + 0x1cu);
    }
L_0010aa40:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010aa48u, cpu->r[4], 0, 0);
    }
L_0010aa44:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[6]);
    }
L_0010aa48:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010aa4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010aa50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010aa54:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0010aa58:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010aa5cu)) return;
    }
}

/* _ZN12GS_GirlsMenuC2Eb @ 0010aa64 (arm) */
void fn_0010aa64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010aa64:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0010aa68:;
    {
        cpu->r[4] = rd32(0x0010aa70u + + 0x7cu);
    }
L_0010aa6c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010aa70:;
    {
        cpu->r[14] = 0x0010aa74u; fn_001100c0(cpu);
    }
L_0010aa74:;
    {
        cpu->r[2] = rd32(0x0010aa7cu + + 0x74u);
    }
L_0010aa78:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010aa80u, cpu->r[4], 0, 0);
    }
L_0010aa7c:;
    {
        cpu->r[3] = rd32(0x0010aa84u + + 0x70u);
    }
L_0010aa80:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0010aa84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010aa88:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0010aa8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010aa90:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0010aa94:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010aa98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010aab4;
        }
    }
L_0010aa9c:;
    {
        cpu->r[7] = rd32(0x0010aaa4u + + 0x54u);
    }
L_0010aaa0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010aaa4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010aaa8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x98u);
    }
L_0010aaac:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[3]);
    }
L_0010aab0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010aab4u)) return;
    }
L_0010aab4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010aab8:;
    {
        cpu->r[14] = 0x0010aabcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010aabc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010aac0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010aa9c;
        }
    }
L_0010aac4:;
    {
        cpu->r[7] = rd32(0x0010aaccu + + 0x2cu);
    }
L_0010aac8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010aacc:;
    {
        cpu->r[14] = 0x0010aad0u; fn_00094228(cpu);
    }
L_0010aad0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010aad4:;
    {
        cpu->r[14] = 0x0010aad8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010aad8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010aadc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010aae0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x98u);
    }
L_0010aae4:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[3]);
    }
L_0010aae8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010aaecu)) return;
    }
}

/* _ZN12GS_GirlsMenuC1Eb @ 0010aafc (arm) */
void fn_0010aafc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010aafc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0010ab00:;
    {
        cpu->r[4] = rd32(0x0010ab08u + + 0x7cu);
    }
L_0010ab04:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010ab08:;
    {
        cpu->r[14] = 0x0010ab0cu; fn_001100c0(cpu);
    }
L_0010ab0c:;
    {
        cpu->r[2] = rd32(0x0010ab14u + + 0x74u);
    }
L_0010ab10:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010ab18u, cpu->r[4], 0, 0);
    }
L_0010ab14:;
    {
        cpu->r[3] = rd32(0x0010ab1cu + + 0x70u);
    }
L_0010ab18:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0010ab1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010ab20:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0010ab24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010ab28:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0010ab2c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010ab30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ab4c;
        }
    }
L_0010ab34:;
    {
        cpu->r[7] = rd32(0x0010ab3cu + + 0x54u);
    }
L_0010ab38:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010ab3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010ab40:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x98u);
    }
L_0010ab44:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[3]);
    }
L_0010ab48:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010ab4cu)) return;
    }
L_0010ab4c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010ab50:;
    {
        cpu->r[14] = 0x0010ab54u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010ab54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010ab58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ab34;
        }
    }
L_0010ab5c:;
    {
        cpu->r[7] = rd32(0x0010ab64u + + 0x2cu);
    }
L_0010ab60:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010ab64:;
    {
        cpu->r[14] = 0x0010ab68u; fn_00094228(cpu);
    }
L_0010ab68:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010ab6c:;
    {
        cpu->r[14] = 0x0010ab70u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010ab70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010ab74:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010ab78:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x98u);
    }
L_0010ab7c:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[3]);
    }
L_0010ab80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010ab84u)) return;
    }
}

/* _ZN12GS_GirlsMenu6RenderEv @ 0010ab94 (arm) */
void fn_0010ab94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010ab94:;
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
L_0010ab98:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8e8u);
    }
L_0010ab9c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010aba0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000015cu, 1, 0);
    }
L_0010aba4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0010aba8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x950u);
    }
L_0010abac:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x30u);
    }
L_0010abb0:;
    {
        cpu->r[14] = 0x0010abb4u; fn_000a059c(cpu);
    }
L_0010abb4:;
    {
        cpu->r[5] = rd32(0x0010abbcu + + 0x650u);
    }
L_0010abb8:;
    {
        cpu->r[5] = add_flags(cpu, 0x0010abc0u, cpu->r[5], 0, 0);
    }
L_0010abbc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010abc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010af24;
        }
    }
L_0010abc4:;
    {
        cpu->r[2] = rd32(0x0010abccu + + 0x644u);
    }
L_0010abc8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0010abcc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010abd0:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 3u, &shc); cpu->r[7] = v;
    }
L_0010abd4:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0010abd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0010abdc:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x8u);
    }
L_0010abe0:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_0010abe4:;
    {
        uint32_t v = cpu->r[0] & ~ 0x00040000u; cpu->r[0] = v;
    }
L_0010abe8:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[0]);
    }
L_0010abec:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010abf0:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x950u);
    }
L_0010abf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b140;
        }
    }
L_0010abf8:;
    {
        cpu->r[10] = rd32(0x0010ac00u + + 0x614u);
    }
L_0010abfc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0010ac00:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x98u);
    }
L_0010ac04:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 1);
    }
L_0010ac08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b1d0;
        }
    }
L_0010ac0c:;
    {
        cpu->r[8] = rd32(0x0010ac14u + + 0x604u);
    }
L_0010ac10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010ac14:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 3u, &shc));
    }
L_0010ac18:;
    {
        cpu->r[14] = 0x0010ac1cu; fn_000ec4f0(cpu);
    }
L_0010ac1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010ac20:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0010ac24:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0010ac28:;
    {
        cpu->r[3] = 0x00000696u;
    }
L_0010ac2c:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[3]);
    }
L_0010ac30:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0010ac34:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010ac38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010af6c;
        }
    }
L_0010ac3c:;
    {
        cpu->r[7] = rd32(0x0010ac44u + + 0x5d8u);
    }
L_0010ac40:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0010ac44:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_0010ac48:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010ac4c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010ac50:;
    {
        cpu->r[14] = 0x0010ac54u; fn_0018aa44(cpu);
    }
L_0010ac54:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010ac58:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010ac5c:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_0010ac60:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010ac64:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010ac68:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0010ac6c:;
    {
        cpu->r[14] = 0x0010ac70u; fn_000ad8a0(cpu);
    }
L_0010ac70:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0010ac74:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0010ac78:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010ac7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b104;
        }
    }
L_0010ac80:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0010ac84:;
    {
        cpu->r[1] = 0x00000044u;
    }
L_0010ac88:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010ac8c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010ac90:;
    {
        cpu->r[14] = 0x0010ac94u; fn_0018aa44(cpu);
    }
L_0010ac94:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0010ac98:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0010ac9c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010aca0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_0010aca4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b0c8;
        }
    }
L_0010aca8:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_0010acac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010acb0:;
    {
        cpu->r[14] = 0x0010acb4u; fn_00096a08(cpu);
    }
L_0010acb4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0010acb8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010acbc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010acc0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010acc4:;
    {
        cpu->r[14] = 0x0010acc8u; fn_0018aa44(cpu);
    }
L_0010acc8:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0010accc:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0010acd0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010acd4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_0010acd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b08c;
        }
    }
L_0010acdc:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_0010ace0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010ace4:;
    {
        cpu->r[14] = 0x0010ace8u; fn_00096a08(cpu);
    }
L_0010ace8:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0010acec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010acf0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010acf4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0010acf8:;
    {
        cpu->r[14] = 0x0010acfcu; fn_0018aa44(cpu);
    }
L_0010acfc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010ad00:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010ad04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000148u, 0, 0);
    }
L_0010ad08:;
    {
        cpu->r[2] = 0x000000b5u;
    }
L_0010ad0c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0010ad10:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_0010ad14:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010ad18:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0010ad1c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0010ad20:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0010ad24:;
    {
        cpu->r[14] = 0x0010ad28u; fn_000a8a2c(cpu);
    }
L_0010ad28:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x148u);
    }
L_0010ad2c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x150u);
    }
L_0010ad30:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x154u);
    }
L_0010ad34:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_0010ad38:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14cu);
    }
L_0010ad3c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010ad40:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x950u);
    }
L_0010ad44:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_0010ad48:;
    {
        cpu->r[14] = 0x0010ad4cu; fn_000a059c(cpu);
    }
L_0010ad4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010ad50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b030;
        }
    }
L_0010ad54:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0010ad58:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0010ad5c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010ad60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b158;
        }
    }
L_0010ad64:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_0010ad68:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010ad6c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0010ad70:;
    {
        cpu->r[14] = 0x0010ad74u; fn_0018aa44(cpu);
    }
L_0010ad74:;
    {
        cpu->r[3] = rd32(0x0010ad7cu + + 0x4a4u);
    }
L_0010ad78:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_0010ad7c:;
    {
        cpu->r[2] = 0x000000beu;
    }
L_0010ad80:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010ad88u, cpu->r[3], 0, 0);
    }
L_0010ad84:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x48u);
    }
L_0010ad88:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[12]);
    }
L_0010ad8c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010ad90:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[14]);
    }
L_0010ad94:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0010ad98:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x950u);
    }
L_0010ad9c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0010ada0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010ada4:;
    {
        cpu->r[14] = 0x0010ada8u; fn_000ad8a0(cpu);
    }
L_0010ada8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 3, 31u, &shc), 0, 0);
    }
L_0010adac:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 3, 31u, &shc), 0, 0);
    }
L_0010adb0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_0010adb4:;
    {
        cpu->r[1] = 0x000000b5u;
    }
L_0010adb8:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0010adbc:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0010adc0:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000170u, cpu->r[2], 1, 0);
    }
L_0010adc4:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000050u, cpu->r[3], 1, 0);
    }
L_0010adc8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0010adcc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0010add0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0010add4:;
    {
        cpu->r[8] = 0x00000011u;
    }
L_0010add8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0010addc:;
    {
        cpu->r[14] = 0x0010ade0u; fn_000ad8a0(cpu);
    }
L_0010ade0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x950u);
    }
L_0010ade4:;
    {
        cpu->r[2] = 0x00000171u;
    }
L_0010ade8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0010adec:;
    {
        cpu->r[3] = 0x00000050u;
    }
L_0010adf0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000005b0u, 0, 0);
    }
L_0010adf4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0010adf8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_0010adfc:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_0010ae00:;
    {
        cpu->r[14] = 0x0010ae04u; fn_000ad200(cpu);
    }
L_0010ae04:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x48u);
    }
L_0010ae08:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0010ae0c:;
    {
        cpu->r[1] = 0x00000029u;
    }
L_0010ae10:;
    {
        cpu->r[2] = 0x00000196u;
    }
L_0010ae14:;
    {
        cpu->r[3] = 0x000000a4u;
    }
L_0010ae18:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[12]);
    }
L_0010ae1c:;
    {
        cpu->r[7] = (~0x00000000u);
    }
L_0010ae20:;
    {
        wr32(cpu->r[6] + + 0x48u, cpu->r[7]);
    }
L_0010ae24:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0010ae28:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0010ae2c:;
    {
        cpu->r[14] = 0x0010ae30u; fn_000ad8a0(cpu);
    }
L_0010ae30:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010ae34:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x950u);
    }
L_0010ae38:;
    {
        cpu->r[14] = 0x0010ae3cu; fn_000a059c(cpu);
    }
L_0010ae3c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010ae40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010afb0;
        }
    }
L_0010ae44:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x54u);
    }
L_0010ae48:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_0010ae4c:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[3]);
    }
L_0010ae50:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010ae54:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x950u);
    }
L_0010ae58:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000120u, 0, 0);
    }
L_0010ae5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000005c0u, 0, 0);
    }
L_0010ae60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0010ae64:;
    {
        cpu->r[14] = 0x0010ae68u; fn_000aeb58(cpu);
    }
L_0010ae68:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0010ae6c:;
    {
        cpu->r[3] = 0x000000d5u;
    }
L_0010ae70:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010ae74:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010ae78:;
    {
        cpu->r[14] = 0x0010ae7cu; fn_000a9818(cpu);
    }
L_0010ae7c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x950u);
    }
L_0010ae80:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010ae84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000005c0u, 0, 0);
    }
L_0010ae88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0010ae8c:;
    {
        cpu->r[14] = 0x0010ae90u; fn_000aeb58(cpu);
    }
L_0010ae90:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0010ae94:;
    {
        cpu->r[3] = 0x00000212u;
    }
L_0010ae98:;
    {
        cpu->r[12] = 0x000000fau;
    }
L_0010ae9c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_0010aea0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_0010aea4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010aea8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_0010aeac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0010aeb0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010aeb4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010aeb8:;
    {
        cpu->r[14] = 0x0010aebcu; fn_000ac4bc(cpu);
    }
L_0010aebc:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[9]);
    }
L_0010aec0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0010aec4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010aec8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0010aef8;
        }
    }
L_0010aecc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0010aed0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010aed4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010aed8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010aedc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010aee0:;
    {
        cpu->r[14] = 0x0010aee8u;
    }
L_0010aee4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010aee8u)) return;
    }
L_0010aee8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0010aeec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0010aef0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0010aef4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010aed0;
        }
    }
L_0010aef8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010aefc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010af00:;
    {
        cpu->r[14] = 0x0010af08u;
    }
L_0010af04:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010af08u)) return;
    }
L_0010af08:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010af0c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010af10:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010af14:;
    {
        cpu->r[14] = 0x0010af1cu;
    }
L_0010af18:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010af1cu)) return;
    }
L_0010af1c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000015cu, 0, 0);
    }
L_0010af20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010af24u)) return;
    }
L_0010af24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010af28:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0010af2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010af30:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 3u, &shc); cpu->r[7] = v;
    }
L_0010af34:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 3u, &shc));
    }
L_0010af38:;
    {
        cpu->r[14] = 0x0010af3cu; fn_000ec4f0(cpu);
    }
L_0010af3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010af40:;
    {
        cpu->r[2] = 0x000004f9u;
    }
L_0010af44:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0010af48:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_0010af4c:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[2]);
    }
L_0010af50:;
    {
        uint32_t v = cpu->r[3] | 0x00040000u; cpu->r[3] = v;
    }
L_0010af54:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_0010af58:;
    {
        cpu->r[8] = rd32(0x0010af60u + + 0x2b8u);
    }
L_0010af5c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0010af60:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0010af64:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010af68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010ac3c;
        }
    }
L_0010af6c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010af70:;
    {
        cpu->r[14] = 0x0010af74u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010af74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010af78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ac3c;
        }
    }
L_0010af7c:;
    {
        cpu->r[7] = rd32(0x0010af84u + + 0x298u);
    }
L_0010af80:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0010af84:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010af88:;
    {
        cpu->r[14] = 0x0010af8cu; fn_0018aa20(cpu);
    }
L_0010af8c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010af90:;
    {
        cpu->r[14] = 0x0010af94u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010af94:;
    {
        cpu->r[3] = rd32(0x0010af9cu + + 0x288u);
    }
L_0010af98:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010af9c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010afa0:;
    {
        cpu->r[3] = rd32(0x0010afa8u + + 0x280u);
    }
L_0010afa4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010afa8:;
    {
        cpu->r[14] = 0x0010afacu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010afac:;
    {
        goto L_0010ac40;
    }
L_0010afb0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0010afb4:;
    {
        cpu->r[0] = 0x00000605u;
    }
L_0010afb8:;
    {
        cpu->r[14] = 0x0010afbcu; fn_000aeb58(cpu);
    }
L_0010afbc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x950u);
    }
L_0010afc0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0010afc4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000120u, 0, 0);
    }
L_0010afc8:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0010afcc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010afd0:;
    {
        cpu->r[14] = 0x0010afd4u; fn_00096ba4(cpu);
    }
L_0010afd4:;
    {
        cpu->r[1] = rd32(0x0010afdcu + + 0x250u);
    }
L_0010afd8:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0010afdc:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010afe4u, cpu->r[1], 0, 0);
    }
L_0010afe0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0010afe4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010afe8:;
    {
        cpu->r[14] = 0x0010afecu; fn_000ae830(cpu);
    }
L_0010afec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010aff0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010aff4:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0010aff8:;
    {
        cpu->r[3] = 0x000000d5u;
    }
L_0010affc:;
    {
        cpu->r[14] = 0x0010b000u; fn_000a9818(cpu);
    }
L_0010b000:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010b004:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010b008:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0010b00c:;
    {
        cpu->r[3] = 0x00000212u;
    }
L_0010b010:;
    {
        cpu->r[12] = 0x000000fau;
    }
L_0010b014:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_0010b018:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_0010b01c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[10]);
    }
L_0010b020:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010b024:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_0010b028:;
    {
        cpu->r[14] = 0x0010b02cu; fn_000ac4bc(cpu);
    }
L_0010b02c:;
    {
        goto L_0010aec0;
    }
L_0010b030:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0010b034:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0010b038:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010b03c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b194;
        }
    }
L_0010b040:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0010b044:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_0010b048:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010b04c:;
    {
        cpu->r[14] = 0x0010b050u; fn_0018aa44(cpu);
    }
L_0010b050:;
    {
        cpu->r[3] = rd32(0x0010b058u + + 0x1d8u);
    }
L_0010b054:;
    {
        cpu->r[14] = 0xff000000u;
    }
L_0010b058:;
    {
        cpu->r[2] = 0x000000beu;
    }
L_0010b05c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010b064u, cpu->r[3], 0, 0);
    }
L_0010b060:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x48u);
    }
L_0010b064:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[14]);
    }
L_0010b068:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[12]);
    }
L_0010b06c:;
    {
        cpu->r[12] = 0x00a00000u;
    }
L_0010b070:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0010b074:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x950u);
    }
L_0010b078:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010b07c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010b080:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0010b084:;
    {
        cpu->r[14] = 0x0010b088u; fn_000ad8a0(cpu);
    }
L_0010b088:;
    {
        goto L_0010ada8;
    }
L_0010b08c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010b090:;
    {
        cpu->r[14] = 0x0010b094u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010b094:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010b098:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010acdc;
        }
    }
L_0010b09c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010b0a0:;
    {
        cpu->r[14] = 0x0010b0a4u; fn_0018aa20(cpu);
    }
L_0010b0a4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010b0a8:;
    {
        cpu->r[14] = 0x0010b0acu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010b0ac:;
    {
        cpu->r[3] = rd32(0x0010b0b4u + + 0x170u);
    }
L_0010b0b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010b0b4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010b0b8:;
    {
        cpu->r[3] = rd32(0x0010b0c0u + + 0x168u);
    }
L_0010b0bc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010b0c0:;
    {
        cpu->r[14] = 0x0010b0c4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010b0c4:;
    {
        goto L_0010acdc;
    }
L_0010b0c8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010b0cc:;
    {
        cpu->r[14] = 0x0010b0d0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010b0d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010b0d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010aca8;
        }
    }
L_0010b0d8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010b0dc:;
    {
        cpu->r[14] = 0x0010b0e0u; fn_0018aa20(cpu);
    }
L_0010b0e0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010b0e4:;
    {
        cpu->r[14] = 0x0010b0e8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010b0e8:;
    {
        cpu->r[3] = rd32(0x0010b0f0u + + 0x134u);
    }
L_0010b0ec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010b0f0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010b0f4:;
    {
        cpu->r[3] = rd32(0x0010b0fcu + + 0x12cu);
    }
L_0010b0f8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010b0fc:;
    {
        cpu->r[14] = 0x0010b100u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010b100:;
    {
        goto L_0010aca8;
    }
L_0010b104:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010b108:;
    {
        cpu->r[14] = 0x0010b10cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010b10c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010b110:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ac80;
        }
    }
L_0010b114:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010b118:;
    {
        cpu->r[14] = 0x0010b11cu; fn_0018aa20(cpu);
    }
L_0010b11c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010b120:;
    {
        cpu->r[14] = 0x0010b124u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010b124:;
    {
        cpu->r[3] = rd32(0x0010b12cu + + 0xf8u);
    }
L_0010b128:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010b12c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010b130:;
    {
        cpu->r[3] = rd32(0x0010b138u + + 0xf0u);
    }
L_0010b134:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010b138:;
    {
        cpu->r[14] = 0x0010b13cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010b13c:;
    {
        goto L_0010ac80;
    }
L_0010b140:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010b144:;
    {
        cpu->r[14] = 0x0010b148u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010b148:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010b14c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010b1f0;
        }
    }
L_0010b150:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010b154:;
    {
        goto L_0010abf8;
    }
L_0010b158:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010b15c:;
    {
        cpu->r[14] = 0x0010b160u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010b160:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010b164:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ad64;
        }
    }
L_0010b168:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0010b16c:;
    {
        cpu->r[14] = 0x0010b170u; fn_0018aa20(cpu);
    }
L_0010b170:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010b174:;
    {
        cpu->r[14] = 0x0010b178u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010b178:;
    {
        cpu->r[3] = rd32(0x0010b180u + + 0xa4u);
    }
L_0010b17c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0010b180:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010b184:;
    {
        cpu->r[3] = rd32(0x0010b18cu + + 0x9cu);
    }
L_0010b188:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010b18c:;
    {
        cpu->r[14] = 0x0010b190u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010b190:;
    {
        goto L_0010ad64;
    }
L_0010b194:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010b198:;
    {
        cpu->r[14] = 0x0010b19cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010b19c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010b1a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b040;
        }
    }
L_0010b1a4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0010b1a8:;
    {
        cpu->r[14] = 0x0010b1acu; fn_0018aa20(cpu);
    }
L_0010b1ac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010b1b0:;
    {
        cpu->r[14] = 0x0010b1b4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010b1b4:;
    {
        cpu->r[3] = rd32(0x0010b1bcu + + 0x68u);
    }
L_0010b1b8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0010b1bc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010b1c0:;
    {
        cpu->r[3] = rd32(0x0010b1c8u + + 0x60u);
    }
L_0010b1c4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010b1c8:;
    {
        cpu->r[14] = 0x0010b1ccu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010b1cc:;
    {
        goto L_0010b040;
    }
L_0010b1d0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 3u, &shc));
    }
L_0010b1d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010b1d8:;
    {
        cpu->r[14] = 0x0010b1dcu; fn_000ec594(cpu);
    }
L_0010b1dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010b1e0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0010b1e4:;
    {
        cpu->r[3] = 0x00000697u;
    }
L_0010b1e8:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[3]);
    }
L_0010b1ec:;
    {
        goto L_0010af58;
    }
L_0010b1f0:;
    {
        cpu->r[10] = rd32(0x0010b1f8u + + 0x1cu);
    }
L_0010b1f4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0010b1f8:;
    {
        cpu->r[14] = 0x0010b1fcu; fn_00094228(cpu);
    }
L_0010b1fc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010b200:;
    {
        cpu->r[14] = 0x0010b204u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010b204:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010b208:;
    {
        goto L_0010abfc;
    }
}

/* _ZN11GS_InfoMenu8isKindOfEi @ 0010b234 (arm) */
void fn_0010b234(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010b234:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000018u, 1, 1);
    }
L_0010b238:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0010b23c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0010b240:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_InfoMenu17ApplyMenuSettingsEv @ 0010b244 (arm) */
void fn_0010b244(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010b244:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010b248:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010b24c:;
    {
        cpu->r[2] = rd32(0x0010b254u + + 0x9cu);
    }
L_0010b250:;
    {
        cpu->r[0] = 0x00000005u;
    }
L_0010b254:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x8cau);
    }
L_0010b258:;
    {
        cpu->r[3] = rd32(0x0010b260u + + 0x94u);
    }
L_0010b25c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0010b264u, cpu->r[2], 0, 0);
    }
L_0010b260:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0010b264:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[0]);
    }
L_0010b268:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010b270u, cpu->r[3], 0, 0);
    }
L_0010b26c:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[3]);
    }
L_0010b270:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010b2dc;
        }
    }
L_0010b274:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[1]);
    }
L_0010b278:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0010b27c:;
    {
        wr32(cpu->r[3], cpu->r[1]);
    }
L_0010b280:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[2]);
    }
L_0010b284:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0010b288:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[1]);
    }
L_0010b28c:;
    {
        wr32(cpu->r[3] + + 0x30u, cpu->r[2]);
    }
L_0010b290:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0010b294:;
    {
        wr32(cpu->r[3] + + 0x60u, cpu->r[2]);
    }
L_0010b298:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_0010b29c:;
    {
        wr32(cpu->r[3] + + 0x48u, cpu->r[2]);
    }
L_0010b2a0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0010b2a4:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_0010b2a8:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_0010b2ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010b2b0:;
    {
        cpu->r[3] = 0x00000404u;
    }
L_0010b2b4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0010b2b8:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[3]);
    }
L_0010b2bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0010b2c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0010b2c4:;
    {
        cpu->r[14] = 0x0010b2ccu;
    }
L_0010b2c8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0xdcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010b2ccu)) return;
    }
L_0010b2cc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0010b2d0:;
    {
        wr8(cpu->r[4] + + 0x90cu, cpu->r[3]);
    }
L_0010b2d4:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_0010b2d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010b2dcu)) return;
    }
L_0010b2dc:;
    {
        cpu->r[3] = rd32(0x0010b2e4u + + 0x14u);
    }
L_0010b2e0:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[0]);
    }
L_0010b2e4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0010b2e8:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[3]);
    }
L_0010b2ec:;
    {
        goto L_0010b2a0;
    }
}

/* init_array_25 @ 0010b2fc (arm) */
void fn_0010b2fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010b2fc:;
    {
        cpu->r[3] = rd32(0x0010b304u + + 0x20u);
    }
L_0010b300:;
    {
        cpu->r[1] = rd32(0x0010b308u + + 0x20u);
    }
L_0010b304:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010b30cu, cpu->r[3], 0, 0);
    }
L_0010b308:;
    {
        cpu->r[2] = rd32(0x0010b310u + + 0x1cu);
    }
L_0010b30c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0010b310:;
    {
        cpu->r[2] = add_flags(cpu, 0x0010b318u, cpu->r[2], 0, 0);
    }
L_0010b314:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010b318:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_0010b31c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_0010b320:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_InfoMenuD1Ev @ 0010b330 (arm) */
void fn_0010b330(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010b330:;
    {
        cpu->r[3] = rd32(0x0010b338u + + 0x24u);
    }
L_0010b334:;
    {
        cpu->r[2] = rd32(0x0010b33cu + + 0x24u);
    }
L_0010b338:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010b340u, cpu->r[3], 0, 0);
    }
L_0010b33c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010b340:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010b344:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010b348:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0010b34c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0010b350:;
    {
        cpu->r[14] = 0x0010b354u; fn_000ec21c(cpu);
    }
L_0010b354:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010b358:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010b35cu)) return;
    }
}

/* _ZN11GS_InfoMenu6UpdateEv @ 0010b364 (arm) */
void fn_0010b364(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010b364:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0010b368:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010b36c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0010b370:;
    {
        cpu->r[5] = rd32(0x0010b378u + + 0x224u);
    }
L_0010b374:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0010b378:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010b37c:;
    {
        cpu->r[5] = add_flags(cpu, 0x0010b384u, cpu->r[5], 0, 0);
    }
L_0010b380:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b430;
        }
    }
L_0010b384:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0010b388:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b3bc;
        }
    }
L_0010b38c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010b390:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010b3b4;
        }
    }
L_0010b394:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010b398:;
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
L_0010b39c:;
    {
        return fn_00114a58(cpu);
    }
L_0010b3a0:;
    {
        cpu->r[3] = 0x0000060cu;
    }
L_0010b3a4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0010b3a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010b494;
        }
    }
L_0010b3ac:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0010b3b0:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_0010b3b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010b3b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010b3bcu)) return;
    }
L_0010b3bc:;
    {
        cpu->r[14] = 0x0010b3c0u; fn_0010da28(cpu);
    }
L_0010b3c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010b3c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b3b4;
        }
    }
L_0010b3c8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xc4u);
    }
L_0010b3cc:;
    {
        cpu->r[3] = 0x00000407u;
    }
L_0010b3d0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0010b3d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b568;
        }
    }
L_0010b3d8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010b3a0;
        }
    }
L_0010b3dc:;
    {
        cpu->r[3] = 0x00000405u;
    }
L_0010b3e0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0010b3e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b4f0;
        }
    }
L_0010b3e8:;
    {
        cpu->r[3] = 0x00000406u;
    }
L_0010b3ec:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0010b3f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010b3b4;
        }
    }
L_0010b3f4:;
    {
        cpu->r[0] = 0x00000964u;
    }
L_0010b3f8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010b3fc:;
    {
        cpu->r[14] = 0x0010b400u; fn_0018ba6c(cpu);
    }
L_0010b400:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010b404:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010b408:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010b40c:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_0010b410:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010b414:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010b418:;
    {
        cpu->r[14] = 0x0010b41cu; fn_001187b0(cpu);
    }
L_0010b41c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010b420:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010b424:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010b428:;
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
L_0010b42c:;
    {
        return fn_000f361c(cpu);
    }
L_0010b430:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0010b434:;
    {
        cpu->r[14] = 0x0010b438u; fn_000eb59c(cpu);
    }
L_0010b438:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010b43c:;
    {
        cpu->r[14] = 0x0010b440u; fn_00128a5c(cpu);
    }
L_0010b440:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_0010b444:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0010b448:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010b3b4;
        }
    }
L_0010b44c:;
    {
        cpu->r[3] = rd32(0x0010b454u + + 0x14cu);
    }
L_0010b450:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010b454:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010b458:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010b45c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b4c8;
        }
    }
L_0010b460:;
    {
        cpu->r[6] = rd32(0x0010b468u + + 0x13cu);
    }
L_0010b464:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0010b468:;
    {
        cpu->r[14] = 0x0010b46cu; fn_00094438(cpu);
    }
L_0010b46c:;
    {
        cpu->r[3] = rd32(0x0010b474u + + 0x134u);
    }
L_0010b470:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010b474:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010b478:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0010b47c:;
    {
        cpu->r[14] = 0x0010b480u; fn_0009e9e8(cpu);
    }
L_0010b480:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0010b484:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010b488:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010b48c:;
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
L_0010b490:;
    {
        return fn_000f34e8(cpu);
    }
L_0010b494:;
    {
        cpu->r[3] = 0x0000060du;
    }
L_0010b498:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0010b49c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b514;
        }
    }
L_0010b4a0:;
    {
        cpu->r[3] = 0x000004bdu;
    }
L_0010b4a4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0010b4a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010b3b4;
        }
    }
L_0010b4ac:;
    {
        cpu->r[3] = rd32(0x0010b4b4u + + 0xf4u);
    }
L_0010b4b0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010b4b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010b4b8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0010b4bc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010b4c0:;
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
L_0010b4c4:;
    {
        return fn_000f34e8(cpu);
    }
L_0010b4c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010b4cc:;
    {
        cpu->r[14] = 0x0010b4d0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010b4d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010b4d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b460;
        }
    }
L_0010b4d8:;
    {
        cpu->r[6] = rd32(0x0010b4e0u + + 0xc4u);
    }
L_0010b4dc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0010b4e0:;
    {
        cpu->r[14] = 0x0010b4e4u; fn_00094228(cpu);
    }
L_0010b4e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010b4e8:;
    {
        cpu->r[14] = 0x0010b4ecu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010b4ec:;
    {
        goto L_0010b464;
    }
L_0010b4f0:;
    {
        cpu->r[0] = 0x00000964u;
    }
L_0010b4f4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010b4f8:;
    {
        cpu->r[14] = 0x0010b4fcu; fn_0018ba6c(cpu);
    }
L_0010b4fc:;
    {
        cpu->r[1] = 0x000005a7u;
    }
L_0010b500:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_0010b504:;
    {
        cpu->r[3] = 0x00000015u;
    }
L_0010b508:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010b50c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010b510:;
    {
        goto L_0010b414;
    }
L_0010b514:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0010b518:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_0010b51c:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0010b520:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_0010b524:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[6]);
    }
L_0010b528:;
    {
        cpu->r[14] = 0x0010b52cu; fn_0018ba6c(cpu);
    }
L_0010b52c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010b530:;
    {
        cpu->r[14] = 0x0010b534u; fn_000a7570(cpu);
    }
L_0010b534:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010b538:;
    {
        cpu->r[0] = 0x0000060eu;
    }
L_0010b53c:;
    {
        cpu->r[14] = 0x0010b540u; fn_000aeb58(cpu);
    }
L_0010b540:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010b544:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000950u, 0, 0);
    }
L_0010b548:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0010b54c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010b550:;
    {
        cpu->r[14] = 0x0010b554u; fn_000a7bb0(cpu);
    }
L_0010b554:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010b558:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010b55c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010b560:;
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
L_0010b564:;
    {
        return fn_000f361c(cpu);
    }
L_0010b568:;
    {
        cpu->r[0] = 0x00000970u;
    }
L_0010b56c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010b570:;
    {
        cpu->r[14] = 0x0010b574u; fn_0018ba6c(cpu);
    }
L_0010b574:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010b578:;
    {
        cpu->r[2] = 0x000005aeu;
    }
L_0010b57c:;
    {
        cpu->r[3] = 0x000005b5u;
    }
L_0010b580:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010b584:;
    {
        cpu->r[14] = 0x0010b588u; fn_000fdaa0(cpu);
    }
L_0010b588:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010b58c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010b590:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010b594:;
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
L_0010b598:;
    {
        return fn_000f361c(cpu);
    }
}

/* _ZN11GS_InfoMenu11DoBarActionEii @ 0010b5ac (arm) */
void fn_0010b5ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010b5ac:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0010b5b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010b5b4:;
    {
        cpu->r[0] = rd32(0x0010b5bcu + + 0x80u);
    }
L_0010b5b8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0010b5bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_0010b5c0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0010b5c4:;
    {
        cpu->r[0] = add_flags(cpu, 0x0010b5ccu, cpu->r[0], 0, 0);
    }
L_0010b5c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0010b5cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b634;
        }
    }
L_0010b5d0:;
    {
        cpu->r[14] = rd32(0x0010b5d8u + + 0x68u);
    }
L_0010b5d4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010b5d8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010b5dc:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010b5e0:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010b5e4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_0010b5e8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0010b5ec:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010b5f0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010b5f4:;
    {
        cpu->r[14] = 0x0010b5f8u; fn_000fd248(cpu);
    }
L_0010b5f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_0010b5fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8ecu);
    }
L_0010b600:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[5]);
    }
L_0010b604:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_0010b608:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0010b60c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0010b610:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0010b614:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0010b618:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_0010b61c:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0010b620:;
    {
        cpu->r[14] = 0x0010b624u; fn_00093f34(cpu);
    }
L_0010b624:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0010b628:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0010b62c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0010b630:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_0010b634:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0010b638:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010b63cu)) return;
    }
}

/* _ZN11GS_InfoMenu8DoActionEii @ 0010b644 (arm) */
void fn_0010b644(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010b644:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0010b648:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010b64c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0010b650:;
    {
        cpu->r[4] = rd32(0x0010b658u + + 0xf4u);
    }
L_0010b654:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0010b658:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010b65c:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010b664u, cpu->r[4], 0, 0);
    }
L_0010b660:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b66c;
        }
    }
L_0010b664:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010b668:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010b66cu)) return;
    }
L_0010b66c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0010b670:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0010b674:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010b73c;
        }
    }
L_0010b678:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_0010b67c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0010b680:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_0010b684:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
        }
    }
L_0010b688:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_0010b68c:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[6] = v;
        }
    }
L_0010b690:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
        }
    }
L_0010b694:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = rd32(cpu->r[2] + shifter(cpu->r[6], 2, 2u, &shc));
        }
    }
L_0010b698:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[6]);
    }
L_0010b69c:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_0010b6a0:;
    {
        cpu->r[14] = 0x0010b6a4u; fn_00093f34(cpu);
    }
L_0010b6a4:;
    {
        cpu->r[3] = 0x000004bdu;
    }
L_0010b6a8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0010b6ac:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_0010b6b0:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
    }
L_0010b6b4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0010b6b8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0010b6bc:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0010b6c0:;
    {
        wr32(cpu->r[5] + + 0x8f4u, cpu->r[3]);
    }
L_0010b6c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b710;
        }
    }
L_0010b6c8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010b700;
        }
    }
L_0010b6cc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000400u, 1, 0);
    }
L_0010b6d0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000005u, 1, 0);
    }
L_0010b6d4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_0010b6d8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0010b664;
        }
    }
L_0010b6dc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010b6e0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010b6e4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010b6e8:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010b6ec:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010b6f0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010b6f4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010b6f8:;
    {
        cpu->r[14] = 0x0010b6fcu; fn_000fd248(cpu);
    }
L_0010b6fc:;
    {
        goto L_0010b664;
    }
L_0010b700:;
    {
        cpu->r[3] = 0x0000060du;
    }
L_0010b704:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0010b708:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010b664;
        }
    }
L_0010b70c:;
    {
        goto L_0010b6dc;
    }
L_0010b710:;
    {
        cpu->r[0] = rd32(0x0010b718u + + 0x38u);
    }
L_0010b714:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010b718:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010b71c:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_0010b720:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010b724:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0010b728:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0010b72c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010b730:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010b734:;
    {
        cpu->r[14] = 0x0010b738u; fn_000fd248(cpu);
    }
L_0010b738:;
    {
        goto L_0010b664;
    }
L_0010b73c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0010b740:;
    {
        cpu->r[14] = 0x0010b748u;
    }
L_0010b744:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010b748u)) return;
    }
L_0010b748:;
    {
        goto L_0010b664;
    }
}

/* _ZN11GS_InfoMenuC1Ev @ 0010b754 (arm) */
void fn_0010b754(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010b754:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010b758:;
    {
        cpu->r[4] = rd32(0x0010b760u + + 0x28u);
    }
L_0010b75c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010b760:;
    {
        cpu->r[14] = 0x0010b764u; fn_0010ffa8(cpu);
    }
L_0010b764:;
    {
        cpu->r[3] = rd32(0x0010b76cu + + 0x20u);
    }
L_0010b768:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010b770u, cpu->r[4], 0, 0);
    }
L_0010b76c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010b770:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010b774:;
    {
        wr8(cpu->r[5] + + 0x8cau, cpu->r[2]);
    }
L_0010b778:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010b77c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010b780:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0010b784:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010b788u)) return;
    }
}

/* _ZN11GS_InfoMenuC2Ev @ 0010b790 (arm) */
void fn_0010b790(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010b790:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010b794:;
    {
        cpu->r[4] = rd32(0x0010b79cu + + 0x28u);
    }
L_0010b798:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010b79c:;
    {
        cpu->r[14] = 0x0010b7a0u; fn_0010ffa8(cpu);
    }
L_0010b7a0:;
    {
        cpu->r[3] = rd32(0x0010b7a8u + + 0x20u);
    }
L_0010b7a4:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010b7acu, cpu->r[4], 0, 0);
    }
L_0010b7a8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010b7ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010b7b0:;
    {
        wr8(cpu->r[5] + + 0x8cau, cpu->r[2]);
    }
L_0010b7b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010b7b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010b7bc:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0010b7c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010b7c4u)) return;
    }
}

/* _ZN11GS_InfoMenuD0Ev @ 0010b7cc (arm) */
void fn_0010b7cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010b7cc:;
    {
        cpu->r[3] = rd32(0x0010b7d4u + + 0x2cu);
    }
L_0010b7d0:;
    {
        cpu->r[2] = rd32(0x0010b7d8u + + 0x2cu);
    }
L_0010b7d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010b7dcu, cpu->r[3], 0, 0);
    }
L_0010b7d8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010b7dc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010b7e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010b7e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0010b7e8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0010b7ec:;
    {
        cpu->r[14] = 0x0010b7f0u; fn_000ec21c(cpu);
    }
L_0010b7f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010b7f4:;
    {
        cpu->r[14] = 0x0010b7f8u; fn_0018ba20(cpu);
    }
L_0010b7f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010b7fc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010b800u)) return;
    }
}

/* _ZN11GS_InfoMenu6RenderEv @ 0010b808 (arm) */
void fn_0010b808(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010b808:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0010b80c:;
    {
        cpu->r[5] = rd32(0x0010b814u + + 0x11cu);
    }
L_0010b810:;
    {
        cpu->r[3] = rd32(0x0010b818u + + 0x11cu);
    }
L_0010b814:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0010b818:;
    {
        cpu->r[5] = add_flags(cpu, 0x0010b820u, cpu->r[5], 0, 0);
    }
L_0010b81c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010b820:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010b824:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0010b828:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010b82c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b8d8;
        }
    }
L_0010b830:;
    {
        cpu->r[6] = rd32(0x0010b838u + + 0x100u);
    }
L_0010b834:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0010b838:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0010b83c:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_0010b840:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0010b844:;
    {
        cpu->r[14] = 0x0010b848u; fn_0018aa44(cpu);
    }
L_0010b848:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0010b84c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010b850:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0010b854:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0010b858:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0010b85c:;
    {
        cpu->r[14] = 0x0010b860u; fn_000ad8a0(cpu);
    }
L_0010b860:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0010b864:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0010b868:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0010b894;
        }
    }
L_0010b86c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010b870:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010b874:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010b878:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010b87c:;
    {
        cpu->r[14] = 0x0010b884u;
    }
L_0010b880:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010b884u)) return;
    }
L_0010b884:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0010b888:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0010b88c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0010b890:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010b86c;
        }
    }
L_0010b894:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8cau);
    }
L_0010b898:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010b89c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010b91c;
        }
    }
L_0010b8a0:;
    {
        cpu->r[3] = rd32(0x0010b8a8u + + 0x94u);
    }
L_0010b8a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010b8a8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0010b8ac:;
    {
        cpu->r[14] = 0x0010b8b0u; fn_000962d0(cpu);
    }
L_0010b8b0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010b8b4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0010b8b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_0010b8bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010b8c0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = (~0x00000005u);
        }
    }
L_0010b8c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0010b8c8:;
    {
        cpu->r[14] = 0x0010b8d0u;
    }
L_0010b8cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x84u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010b8d0u)) return;
    }
L_0010b8d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010b8d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010b8d8u)) return;
    }
L_0010b8d8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010b8dc:;
    {
        cpu->r[14] = 0x0010b8e0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010b8e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010b8e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b830;
        }
    }
L_0010b8e8:;
    {
        cpu->r[6] = rd32(0x0010b8f0u + + 0x48u);
    }
L_0010b8ec:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0010b8f0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010b8f4:;
    {
        cpu->r[14] = 0x0010b8f8u; fn_0018aa20(cpu);
    }
L_0010b8f8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010b8fc:;
    {
        cpu->r[14] = 0x0010b900u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010b900:;
    {
        cpu->r[3] = rd32(0x0010b908u + + 0x38u);
    }
L_0010b904:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010b908:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010b90c:;
    {
        cpu->r[3] = rd32(0x0010b914u + + 0x30u);
    }
L_0010b910:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010b914:;
    {
        cpu->r[14] = 0x0010b918u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010b918:;
    {
        goto L_0010b834;
    }
L_0010b91c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010b920:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010b924:;
    {
        cpu->r[14] = 0x0010b92cu;
    }
L_0010b928:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010b92cu)) return;
    }
L_0010b92c:;
    {
        goto L_0010b8a0;
    }
}

/* _ZN11GS_InfoMenu11InitSpritesEv @ 0010b948 (arm) */
void fn_0010b948(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010b948:;
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
L_0010b94c:;
    {
        cpu->r[4] = rd32(0x0010b954u + + 0x2ccu);
    }
L_0010b950:;
    {
        cpu->r[7] = rd32(0x0010b958u + + 0x2ccu);
    }
L_0010b954:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010b958:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010b960u, cpu->r[4], 0, 0);
    }
L_0010b95c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010b960:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0010b964:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010b968:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ba9c;
        }
    }
L_0010b96c:;
    {
        cpu->r[6] = rd32(0x0010b974u + + 0x2b4u);
    }
L_0010b970:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_0010b974:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010b978:;
    {
        cpu->r[14] = 0x0010b97cu; fn_00096a08(cpu);
    }
L_0010b97c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010b980:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010b984:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010b988:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010b98c:;
    {
        cpu->r[14] = 0x0010b990u; fn_0018aa44(cpu);
    }
L_0010b990:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010b994:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0010b998:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010b99c:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[0]);
    }
L_0010b9a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010bbe4;
        }
    }
L_0010b9a4:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_0010b9a8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010b9ac:;
    {
        cpu->r[14] = 0x0010b9b0u; fn_00096a08(cpu);
    }
L_0010b9b0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010b9b4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010b9b8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010b9bc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010b9c0:;
    {
        cpu->r[14] = 0x0010b9c4u; fn_0018aa44(cpu);
    }
L_0010b9c4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010b9c8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0010b9cc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010b9d0:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[0]);
    }
L_0010b9d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010bba8;
        }
    }
L_0010b9d8:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_0010b9dc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010b9e0:;
    {
        cpu->r[14] = 0x0010b9e4u; fn_00096a08(cpu);
    }
L_0010b9e4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010b9e8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010b9ec:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010b9f0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010b9f4:;
    {
        cpu->r[14] = 0x0010b9f8u; fn_0018aa44(cpu);
    }
L_0010b9f8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010b9fc:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0010ba00:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010ba04:;
    {
        wr32(cpu->r[5] + + 0xa8u, cpu->r[0]);
    }
L_0010ba08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010bb6c;
        }
    }
L_0010ba0c:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_0010ba10:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010ba14:;
    {
        cpu->r[14] = 0x0010ba18u; fn_00096a08(cpu);
    }
L_0010ba18:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010ba1c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010ba20:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010ba24:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010ba28:;
    {
        cpu->r[14] = 0x0010ba2cu; fn_0018aa44(cpu);
    }
L_0010ba2c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010ba30:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0010ba34:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010ba38:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[0]);
    }
L_0010ba3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010bb30;
        }
    }
L_0010ba40:;
    {
        cpu->r[3] = rd32(0x0010ba48u + + 0x1e4u);
    }
L_0010ba44:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_0010ba48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010ba4c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0010ba50:;
    {
        cpu->r[14] = 0x0010ba54u; fn_000f3430(cpu);
    }
L_0010ba54:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010ba58:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010ba5c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0010ba60:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010ba64:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000002u;
        }
    }
L_0010ba68:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000015u;
        }
    }
L_0010ba6c:;
    {
        cpu->r[14] = 0x0010ba70u; fn_0018aa44(cpu);
    }
L_0010ba70:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010ba74:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0010ba78:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010ba7c:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[0]);
    }
L_0010ba80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010bae0;
        }
    }
L_0010ba84:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010ba88:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010ba8c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0010ba90:;
    {
        cpu->r[14] = 0x0010ba94u; fn_0018aa44(cpu);
    }
L_0010ba94:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_0010ba98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010ba9cu)) return;
    }
L_0010ba9c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010baa0:;
    {
        cpu->r[14] = 0x0010baa4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010baa4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010baa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b96c;
        }
    }
L_0010baac:;
    {
        cpu->r[6] = rd32(0x0010bab4u + + 0x174u);
    }
L_0010bab0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010bab4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010bab8:;
    {
        cpu->r[14] = 0x0010babcu; fn_0018aa20(cpu);
    }
L_0010babc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010bac0:;
    {
        cpu->r[14] = 0x0010bac4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010bac4:;
    {
        cpu->r[3] = rd32(0x0010baccu + + 0x164u);
    }
L_0010bac8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010bacc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010bad0:;
    {
        cpu->r[3] = rd32(0x0010bad8u + + 0x15cu);
    }
L_0010bad4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010bad8:;
    {
        cpu->r[14] = 0x0010badcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010badc:;
    {
        goto L_0010b970;
    }
L_0010bae0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010bae4:;
    {
        cpu->r[14] = 0x0010bae8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010bae8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010baec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ba84;
        }
    }
L_0010baf0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010baf4:;
    {
        cpu->r[14] = 0x0010baf8u; fn_0018aa20(cpu);
    }
L_0010baf8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010bafc:;
    {
        cpu->r[14] = 0x0010bb00u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010bb00:;
    {
        cpu->r[3] = rd32(0x0010bb08u + + 0x128u);
    }
L_0010bb04:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010bb08:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010bb0c:;
    {
        cpu->r[3] = rd32(0x0010bb14u + + 0x120u);
    }
L_0010bb10:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010bb14:;
    {
        cpu->r[14] = 0x0010bb18u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010bb18:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010bb1c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010bb20:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0010bb24:;
    {
        cpu->r[14] = 0x0010bb28u; fn_0018aa44(cpu);
    }
L_0010bb28:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_0010bb2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010bb30u)) return;
    }
L_0010bb30:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010bb34:;
    {
        cpu->r[14] = 0x0010bb38u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010bb38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010bb3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ba40;
        }
    }
L_0010bb40:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010bb44:;
    {
        cpu->r[14] = 0x0010bb48u; fn_0018aa20(cpu);
    }
L_0010bb48:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010bb4c:;
    {
        cpu->r[14] = 0x0010bb50u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010bb50:;
    {
        cpu->r[3] = rd32(0x0010bb58u + + 0xd8u);
    }
L_0010bb54:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010bb58:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010bb5c:;
    {
        cpu->r[3] = rd32(0x0010bb64u + + 0xd0u);
    }
L_0010bb60:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010bb64:;
    {
        cpu->r[14] = 0x0010bb68u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010bb68:;
    {
        goto L_0010ba40;
    }
L_0010bb6c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010bb70:;
    {
        cpu->r[14] = 0x0010bb74u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010bb74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010bb78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ba0c;
        }
    }
L_0010bb7c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010bb80:;
    {
        cpu->r[14] = 0x0010bb84u; fn_0018aa20(cpu);
    }
L_0010bb84:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010bb88:;
    {
        cpu->r[14] = 0x0010bb8cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010bb8c:;
    {
        cpu->r[3] = rd32(0x0010bb94u + + 0x9cu);
    }
L_0010bb90:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010bb94:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010bb98:;
    {
        cpu->r[3] = rd32(0x0010bba0u + + 0x94u);
    }
L_0010bb9c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010bba0:;
    {
        cpu->r[14] = 0x0010bba4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010bba4:;
    {
        goto L_0010ba0c;
    }
L_0010bba8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010bbac:;
    {
        cpu->r[14] = 0x0010bbb0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010bbb0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010bbb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b9d8;
        }
    }
L_0010bbb8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010bbbc:;
    {
        cpu->r[14] = 0x0010bbc0u; fn_0018aa20(cpu);
    }
L_0010bbc0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010bbc4:;
    {
        cpu->r[14] = 0x0010bbc8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010bbc8:;
    {
        cpu->r[3] = rd32(0x0010bbd0u + + 0x60u);
    }
L_0010bbcc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010bbd0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010bbd4:;
    {
        cpu->r[3] = rd32(0x0010bbdcu + + 0x58u);
    }
L_0010bbd8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010bbdc:;
    {
        cpu->r[14] = 0x0010bbe0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010bbe0:;
    {
        goto L_0010b9d8;
    }
L_0010bbe4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010bbe8:;
    {
        cpu->r[14] = 0x0010bbecu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010bbec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010bbf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010b9a4;
        }
    }
L_0010bbf4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010bbf8:;
    {
        cpu->r[14] = 0x0010bbfcu; fn_0018aa20(cpu);
    }
L_0010bbfc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010bc00:;
    {
        cpu->r[14] = 0x0010bc04u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010bc04:;
    {
        cpu->r[3] = rd32(0x0010bc0cu + + 0x24u);
    }
L_0010bc08:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010bc0c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010bc10:;
    {
        cpu->r[3] = rd32(0x0010bc18u + + 0x1cu);
    }
L_0010bc14:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010bc18:;
    {
        cpu->r[14] = 0x0010bc1cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010bc1c:;
    {
        goto L_0010b9a4;
    }
}

/* _ZN13GS_IngameMenu8isKindOfEi @ 0010bc38 (arm) */
void fn_0010bc38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010bc38:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000006u, 1, 1);
    }
L_0010bc3c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0010bc40:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0010bc44:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GS_IngameMenu8DoActionEii @ 0010bc48 (arm) */
void fn_0010bc48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010bc48:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_0010bc4c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010bc50:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_0010bc54:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0010bc58:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010bc5cu)) return;
        }
    }
L_0010bc5c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0010bc60:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_0010bc64:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010bca0;
        }
    }
L_0010bc68:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_0010bc6c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_0010bc70:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_0010bc74:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
        }
    }
L_0010bc78:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_0010bc7c:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[4] = v;
        }
    }
L_0010bc80:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_0010bc84:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
        }
    }
L_0010bc88:;
    {
        cpu->r[2] = 0x000004f7u;
    }
L_0010bc8c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_0010bc90:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_0010bc94:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[4]);
    }
L_0010bc98:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x94u, cpu->r[2]);
        }
    }
L_0010bc9c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010bca0u)) return;
    }
L_0010bca0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0010bca4:;
    {
        cpu->r[14] = 0x0010bcacu;
    }
L_0010bca8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010bcacu)) return;
    }
L_0010bcac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010bcb0u)) return;
    }
}

/* init_array_26 @ 0010bcb0 (arm) */
void fn_0010bcb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010bcb0:;
    {
        cpu->r[3] = rd32(0x0010bcb8u + + 0x20u);
    }
L_0010bcb4:;
    {
        cpu->r[1] = rd32(0x0010bcbcu + + 0x20u);
    }
L_0010bcb8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010bcc0u, cpu->r[3], 0, 0);
    }
L_0010bcbc:;
    {
        cpu->r[2] = rd32(0x0010bcc4u + + 0x1cu);
    }
L_0010bcc0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0010bcc4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0010bcccu, cpu->r[2], 0, 0);
    }
L_0010bcc8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010bccc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_0010bcd0:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_0010bcd4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GS_IngameMenu13CheckClearKeyEi @ 0010bce4 (arm) */
void fn_0010bce4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010bce4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_0010bce8:;
    {
        cpu->r[2] = 0x00001bc0u;
    }
L_0010bcec:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0010bcf0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010bcf4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010bcf8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0010bcfc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_0010bd00:;
    {
        { uint32_t v = cpu->r[2] & 0x00200000u; set_nz(cpu, v); }
    }
L_0010bd04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010bd10;
        }
    }
L_0010bd08:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0010bd0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010bd10u)) return;
    }
L_0010bd10:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0010bd14:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010bd18:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0010bd1c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_0010bd20:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0010bd24:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_0010bd28:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0010bd2c:;
    {
        cpu->r[14] = 0x0010bd30u; fn_000fd248(cpu);
    }
L_0010bd30:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0010bd34:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[7]);
    }
L_0010bd38:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0010bd3c:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_0010bd40:;
    {
        cpu->r[14] = 0x0010bd44u; fn_0018ba6c(cpu);
    }
L_0010bd44:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0010bd48:;
    {
        cpu->r[14] = 0x0010bd4cu; fn_000a7570(cpu);
    }
L_0010bd4c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010bd50:;
    {
        cpu->r[0] = 0x00000556u;
    }
L_0010bd54:;
    {
        cpu->r[14] = 0x0010bd58u; fn_000aeb58(cpu);
    }
L_0010bd58:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0010bd5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000950u, 0, 0);
    }
L_0010bd60:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0010bd64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010bd68:;
    {
        cpu->r[14] = 0x0010bd6cu; fn_000a7bb0(cpu);
    }
L_0010bd6c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010bd70:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010bd74:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0010bd78:;
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
        cpu->r[14] = v4;
        cpu->r[13] += 20u;
    }
L_0010bd7c:;
    {
        return fn_000f361c(cpu);
    }
}

/* _ZN13GS_IngameMenu13GetMenuStringEi @ 0010bd80 (arm) */
void fn_0010bd80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010bd80:;
    {
        cpu->r[3] = 0x000004f7u;
    }
L_0010bd84:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0010bd88:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0010bd8c:;
    {
        cpu->r[3] = rd32(0x0010bd94u + + 0x8cu);
    }
L_0010bd90:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0010bd94:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010bd9cu, cpu->r[3], 0, 0);
    }
L_0010bd98:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010bd9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010bda8;
        }
    }
L_0010bda0:;
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
L_0010bda4:;
    {
        return fn_0010e02c(cpu);
    }
L_0010bda8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0010bdac:;
    {
        cpu->r[1] = 0x00001c0cu;
    }
L_0010bdb0:;
    {
        cpu->r[1] = rd8(cpu->r[0] + cpu->r[1]);
    }
L_0010bdb4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0010bdb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010be14;
        }
    }
L_0010bdbc:;
    {
        cpu->r[6] = 0x00001bc8u;
    }
L_0010bdc0:;
    {
        cpu->r[2] = rd32(0x0010bdc8u + + 0x5cu);
    }
L_0010bdc4:;
    {
        cpu->r[5] = 0x00008818u;
    }
L_0010bdc8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_0010bdcc:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_0010bdd0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010bdd4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[5]);
    }
L_0010bdd8:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_0010bddc:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x164u);
    }
L_0010bde0:;
    {
        cpu->r[14] = 0x0010bde4u; fn_00096b88(cpu);
    }
L_0010bde4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010bde8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010bdec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x000004f0u, 0, 0);
        }
    }
L_0010bdf0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
        }
    }
L_0010bdf4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
        }
    }
L_0010bdf8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
        }
    }
L_0010bdfc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[5]);
        }
    }
L_0010be00:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + + 0x164u);
        }
    }
L_0010be04:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000004f0u, 0, 0);
        }
    }
L_0010be08:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000bu, 0, 0);
        }
    }
L_0010be0c:;
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
L_0010be10:;
    {
        return fn_000aeb58(cpu);
    }
L_0010be14:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0010be18:;
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
L_0010be1c:;
    {
        return fn_000aeb58(cpu);
    }
}

/* _ZN13GS_IngameMenu6RenderEv @ 0010be28 (arm) */
void fn_0010be28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010be28:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0010be2c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000068u, 1, 0);
    }
L_0010be30:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0010be34:;
    {
        cpu->r[14] = 0x0010be38u; fn_0010de00(cpu);
    }
L_0010be38:;
    {
        cpu->r[4] = rd32(0x0010be40u + + 0x18cu);
    }
L_0010be3c:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010be44u, cpu->r[4], 0, 0);
    }
L_0010be40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010be44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010bf80;
        }
    }
L_0010be48:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8d4u);
    }
L_0010be4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010be50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0010be80;
        }
    }
L_0010be54:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0010be58:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010be5c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0010be60:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010be64:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010be68:;
    {
        cpu->r[14] = 0x0010be70u;
    }
L_0010be6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010be70u)) return;
    }
L_0010be70:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8d4u);
    }
L_0010be74:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0010be78:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0010be7c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010be58;
        }
    }
L_0010be80:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0010be84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010be88:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010be8c:;
    {
        cpu->r[14] = 0x0010be94u;
    }
L_0010be90:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010be94u)) return;
    }
L_0010be94:;
    {
        cpu->r[3] = rd32(0x0010be9cu + + 0x134u);
    }
L_0010be98:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_0010be9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010bea0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010bea4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0010bea8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0010beac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010bf80;
        }
    }
L_0010beb0:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_0010beb4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0010beb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010bebc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010bf80;
        }
    }
L_0010bec0:;
    {
        cpu->r[3] = rd32(0x0010bec8u + + 0x10cu);
    }
L_0010bec4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010bec8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0010becc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010bed0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010bf88;
        }
    }
L_0010bed4:;
    {
        cpu->r[5] = rd32(0x0010bedcu + + 0xfcu);
    }
L_0010bed8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_0010bedc:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0010bee0:;
    {
        cpu->r[14] = 0x0010bee4u; fn_00096a08(cpu);
    }
L_0010bee4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010bee8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010beec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0010bef0:;
    {
        cpu->r[14] = 0x0010bef4u; fn_0018aa44(cpu);
    }
L_0010bef4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010bef8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0010befc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0010bf00:;
    {
        cpu->r[0] = 0x00000429u;
    }
L_0010bf04:;
    {
        cpu->r[14] = 0x0010bf08u; fn_000aeb58(cpu);
    }
L_0010bf08:;
    {
        cpu->r[3] = rd32(0x0010bf10u + + 0xccu);
    }
L_0010bf0c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0010bf10:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010bf14:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0010bf18:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 0);
    }
L_0010bf1c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010bf20:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010bf24:;
    {
        cpu->r[14] = 0x0010bf28u; fn_000a9818(cpu);
    }
L_0010bf28:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010bf2c:;
    {
        cpu->r[0] = 0x00000429u;
    }
L_0010bf30:;
    {
        cpu->r[14] = 0x0010bf34u; fn_000aeb58(cpu);
    }
L_0010bf34:;
    {
        cpu->r[14] = rd32(0x0010bf3cu + + 0xa4u);
    }
L_0010bf38:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0010bf3c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010bf40:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0010bf44:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0010bf48:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_0010bf4c:;
    {
        cpu->r[4] = (~0x00000000u);
    }
L_0010bf50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_0010bf54:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_0010bf58:;
    {
        cpu->r[4] = 0x00000011u;
    }
L_0010bf5c:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_0010bf60:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0010bf64:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_0010bf68:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000032u, 1, 0);
    }
L_0010bf6c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0010bf70:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0010bf74:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010bf78:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010bf7c:;
    {
        cpu->r[14] = 0x0010bf80u; fn_000ac4bc(cpu);
    }
L_0010bf80:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_0010bf84:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010bf88u)) return;
    }
L_0010bf88:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010bf8c:;
    {
        cpu->r[14] = 0x0010bf90u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010bf90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010bf94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010bed4;
        }
    }
L_0010bf98:;
    {
        cpu->r[5] = rd32(0x0010bfa0u + + 0x38u);
    }
L_0010bf9c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0010bfa0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010bfa4:;
    {
        cpu->r[14] = 0x0010bfa8u; fn_0018aa20(cpu);
    }
L_0010bfa8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010bfac:;
    {
        cpu->r[14] = 0x0010bfb0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010bfb0:;
    {
        cpu->r[3] = rd32(0x0010bfb8u + + 0x2cu);
    }
L_0010bfb4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010bfb8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010bfbc:;
    {
        cpu->r[3] = rd32(0x0010bfc4u + + 0x24u);
    }
L_0010bfc0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010bfc4:;
    {
        cpu->r[14] = 0x0010bfc8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010bfc8:;
    {
        goto L_0010bed8;
    }
}

/* _ZN13GS_IngameMenu6UpdateEv @ 0010bfec (arm) */
void fn_0010bfec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010bfec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0010bff0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0010bff4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0010bff8:;
    {
        cpu->r[5] = rd32(0x0010c000u + + 0x774u);
    }
L_0010bffc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0010c000:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010c004:;
    {
        cpu->r[5] = add_flags(cpu, 0x0010c00cu, cpu->r[5], 0, 0);
    }
L_0010c008:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c08c;
        }
    }
L_0010c00c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0010c010:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c02c;
        }
    }
L_0010c014:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010c018:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010c024;
        }
    }
L_0010c01c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0010c020:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_0010c024:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010c028:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010c02cu)) return;
    }
L_0010c02c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8f4u);
    }
L_0010c030:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010c034:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_0010c038:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x8f4u, cpu->r[3]);
        }
    }
L_0010c03c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010c024;
        }
    }
L_0010c040:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xc4u);
    }
L_0010c044:;
    {
        cpu->r[2] = 0x000004f2u;
    }
L_0010c048:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010c04c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c5bc;
        }
    }
L_0010c050:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0010c23c;
        }
    }
L_0010c054:;
    {
        cpu->r[2] = 0x000004f5u;
    }
L_0010c058:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010c05c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c3e4;
        }
    }
L_0010c060:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010c44c;
        }
    }
L_0010c064:;
    {
        cpu->r[2] = 0x000004f3u;
    }
L_0010c068:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010c06c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c670;
        }
    }
L_0010c070:;
    {
        cpu->r[2] = 0x000004f4u;
    }
L_0010c074:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010c078:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010c024;
        }
    }
L_0010c07c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0010c080:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[3]);
    }
L_0010c084:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[3]);
    }
L_0010c088:;
    {
        goto L_0010c01c;
    }
L_0010c08c:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_0010c090:;
    {
        cpu->r[14] = 0x0010c094u; fn_0010bce4(cpu);
    }
L_0010c094:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010c098:;
    {
        cpu->r[14] = 0x0010c09cu; fn_00128a5c(cpu);
    }
L_0010c09c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c0a0:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_0010c0a4:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0010c0a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010c0ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c108;
        }
    }
L_0010c0b0:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_0010c0b4:;
    {
        cpu->r[6] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0010c0b8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0010c0bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010c108;
        }
    }
L_0010c0c0:;
    {
        cpu->r[7] = 0x00001bc8u;
    }
L_0010c0c4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_0010c0c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010c0cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c108;
        }
    }
L_0010c0d0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0010c0d4:;
    {
        cpu->r[14] = 0x0010c0d8u; fn_000c1cd8(cpu);
    }
L_0010c0d8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c0dc:;
    {
        cpu->r[3] = 0x00004bf8u;
    }
L_0010c0e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0010c0e4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_0010c0e8:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_0010c0ec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0010c0f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c108;
        }
    }
L_0010c0f4:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[6]);
    }
L_0010c0f8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0010c0fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010c100:;
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
L_0010c104:;
    {
        return fn_000bd908(cpu);
    }
L_0010c108:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x958u);
    }
L_0010c10c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0010c110:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c2dc;
        }
    }
L_0010c114:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_0010c118:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0010c11c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c1d0;
        }
    }
L_0010c120:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x954u);
    }
L_0010c124:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0010c128:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c2e8;
        }
    }
L_0010c12c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x95cu);
    }
L_0010c130:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0010c134:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c348;
        }
    }
L_0010c138:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_0010c13c:;
    {
        cpu->r[3] = 0x000004f7u;
    }
L_0010c140:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0010c144:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010c024;
        }
    }
L_0010c148:;
    {
        cpu->r[3] = 0x00001c0cu;
    }
L_0010c14c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0010c150:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010c154:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c198;
        }
    }
L_0010c158:;
    {
        cpu->r[7] = 0x00001bc8u;
    }
L_0010c15c:;
    {
        cpu->r[6] = 0x00008818u;
    }
L_0010c160:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_0010c164:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_0010c168:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_0010c16c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0010c170:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x164u);
    }
L_0010c174:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0010c178:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000006u, 1, 1);
    }
L_0010c17c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000004u;
        }
    }
L_0010c180:;
    {
        cpu->r[14] = 0x0010c184u; fn_00149b48(cpu);
    }
L_0010c184:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c188:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_0010c18c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0010c190:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_0010c194:;
    {
        wr32(cpu->r[3] + + 0x228u, cpu->r[2]);
    }
L_0010c198:;
    {
        cpu->r[0] = rd32(0x0010c1a0u + + 0x5d8u);
    }
L_0010c19c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010c1a0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010c1a4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010c1a8:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_0010c1ac:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_0010c1b0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0010c1b4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010c1b8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010c1bc:;
    {
        cpu->r[14] = 0x0010c1c0u; fn_000fd248(cpu);
    }
L_0010c1c0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0010c1c4:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_0010c1c8:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0010c1cc:;
    {
        goto L_0010c024;
    }
L_0010c1d0:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_0010c1d4:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0010c1d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010c1dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010c2c8;
        }
    }
L_0010c1e0:;
    {
        cpu->r[3] = 0x00001c9cu;
    }
L_0010c1e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0010c1e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0010c1ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x0000675cu;
        }
    }
L_0010c1f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000675cu;
        }
    }
L_0010c1f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0010c1f8:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[3]);
        }
    }
L_0010c1fc:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
        }
    }
L_0010c200:;
    {
        cpu->r[2] = 0x00006780u;
    }
L_0010c204:;
    {
        cpu->r[3] = rd32(0x0010c20cu + + 0x56cu);
    }
L_0010c208:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010c20c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010c210:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0010c214:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0010c218:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00006783u;
        }
    }
L_0010c21c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0010c220:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
        }
    }
L_0010c224:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010c228:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0010c22c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0010c230:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010c234:;
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
L_0010c238:;
    {
        return fn_0009b14c(cpu);
    }
L_0010c23c:;
    {
        cpu->r[2] = 0x000004dau;
    }
L_0010c240:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010c244:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c624;
        }
    }
L_0010c248:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010c3d0;
        }
    }
L_0010c24c:;
    {
        cpu->r[2] = 0x00000408u;
    }
L_0010c250:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010c254:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010c024;
        }
    }
L_0010c258:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0010c25c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0010c260:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0010c264:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010c268:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0010c26c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010c270:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0010c274:;
    {
        cpu->r[14] = 0x0010c278u; fn_000fd248(cpu);
    }
L_0010c278:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0010c27c:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_0010c280:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0010c284:;
    {
        cpu->r[14] = 0x0010c288u; fn_0018ba6c(cpu);
    }
L_0010c288:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0010c28c:;
    {
        cpu->r[14] = 0x0010c290u; fn_000a7570(cpu);
    }
L_0010c290:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010c294:;
    {
        cpu->r[0] = 0x000006a4u;
    }
L_0010c298:;
    {
        cpu->r[14] = 0x0010c29cu; fn_000aeb58(cpu);
    }
L_0010c29c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000950u, 0, 0);
    }
L_0010c2a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010c2a4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010c2a8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0010c2ac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010c2b0:;
    {
        cpu->r[14] = 0x0010c2b4u; fn_000a7bb0(cpu);
    }
L_0010c2b4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c2b8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010c2bc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010c2c0:;
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
L_0010c2c4:;
    {
        return fn_000f361c(cpu);
    }
L_0010c2c8:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0010c2cc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0010c2d0:;
    {
        cpu->r[14] = 0x0010c2d4u; fn_000ba5d4(cpu);
    }
L_0010c2d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c2d8:;
    {
        goto L_0010c1e0;
    }
L_0010c2dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010c2e0:;
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
L_0010c2e4:;
    {
        return fn_00097a04(cpu);
    }
L_0010c2e8:;
    {
        cpu->r[3] = rd32(0x0010c2f0u + + 0x488u);
    }
L_0010c2ec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010c2f0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0010c2f4:;
    {
        cpu->r[3] = 0x00001bd0u;
    }
L_0010c2f8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0010c2fc:;
    {
        cpu->r[14] = 0x0010c300u; fn_00096b5c(cpu);
    }
L_0010c300:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c304:;
    {
        cpu->r[1] = 0x0000009cu;
    }
L_0010c308:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x438u);
    }
L_0010c30c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0] + cpu->r[2]; cpu->r[2] = v;
    }
L_0010c310:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0010c314:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x30u);
    }
L_0010c318:;
    {
        cpu->r[14] = 0x0010c31cu; fn_00099b28(cpu);
    }
L_0010c31c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c320:;
    {
        cpu->r[14] = 0x0010c324u; fn_00096b88(cpu);
    }
L_0010c324:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010c328:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c4b0;
        }
    }
L_0010c32c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010c330:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c334:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0010c338:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0010c33c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010c340:;
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
L_0010c344:;
    {
        return fn_0009b14c(cpu);
    }
L_0010c348:;
    {
        cpu->r[6] = rd32(0x0010c350u + + 0x428u);
    }
L_0010c34c:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_0010c350:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0010c354:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010c358:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0010c35c:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0010c360:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010c364:;
    {
        cpu->r[14] = 0x0010c368u; fn_000c0d80(cpu);
    }
L_0010c368:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010c36c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_0010c370:;
    {
        cpu->r[14] = 0x0010c374u; fn_0018cbe8(cpu);
    }
L_0010c374:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0010c378:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010c37c:;
    {
        cpu->r[14] = 0x0010c380u; fn_00099b14(cpu);
    }
L_0010c380:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0010c384:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010c388:;
    {
        cpu->r[14] = 0x0010c38cu; fn_000f35e4(cpu);
    }
L_0010c38c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0010c390:;
    {
        cpu->r[14] = 0x0010c394u; fn_00096b88(cpu);
    }
L_0010c394:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010c398:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c3a4;
        }
    }
L_0010c39c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0010c3a0:;
    {
        cpu->r[14] = 0x0010c3a4u; fn_000995cc(cpu);
    }
L_0010c3a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0010c3a8:;
    {
        cpu->r[0] = 0x0000095cu;
    }
L_0010c3ac:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_0010c3b0:;
    {
        cpu->r[14] = 0x0010c3b4u; fn_0018ba6c(cpu);
    }
L_0010c3b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010c3b8:;
    {
        cpu->r[14] = 0x0010c3bcu; fn_00108b6c(cpu);
    }
L_0010c3bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010c3c0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010c3c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010c3c8:;
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
L_0010c3cc:;
    {
        return fn_000f361c(cpu);
    }
L_0010c3d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x000004f0u, 1, 1);
    }
L_0010c3d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c4c8;
        }
    }
L_0010c3d8:;
    {
        cpu->r[2] = 0x000004f1u;
    }
L_0010c3dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010c3e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010c024;
        }
    }
L_0010c3e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c3e8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0010c3ec:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0010c3f0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0010c3f4:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010c3f8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010c3fc:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0010c400:;
    {
        cpu->r[14] = 0x0010c404u; fn_000fd248(cpu);
    }
L_0010c404:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_0010c408:;
    {
        cpu->r[14] = 0x0010c40cu; fn_0018ba6c(cpu);
    }
L_0010c40c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0010c410:;
    {
        cpu->r[14] = 0x0010c414u; fn_000a7570(cpu);
    }
L_0010c414:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c418:;
    {
        cpu->r[14] = 0x0010c41cu; fn_00096b88(cpu);
    }
L_0010c41c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010c420:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[5];
        }
    }
L_0010c424:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000558u;
        }
    }
L_0010c428:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000557u;
        }
    }
L_0010c42c:;
    {
        cpu->r[14] = 0x0010c430u; fn_000aeb58(cpu);
    }
L_0010c430:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000950u, 0, 0);
    }
L_0010c434:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0010c438:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010c43c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0010c440:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010c444:;
    {
        cpu->r[14] = 0x0010c448u; fn_000a7bb0(cpu);
    }
L_0010c448:;
    {
        goto L_0010c2b4;
    }
L_0010c44c:;
    {
        cpu->r[2] = 0x000004f6u;
    }
L_0010c450:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010c454:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c6d4;
        }
    }
L_0010c458:;
    {
        cpu->r[2] = 0x000004f8u;
    }
L_0010c45c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010c460:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010c024;
        }
    }
L_0010c464:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0010c468:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0010c46c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0010c470:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0010c474:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010c478:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010c47c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0010c480:;
    {
        cpu->r[14] = 0x0010c484u; fn_000fd248(cpu);
    }
L_0010c484:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_0010c488:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c48c:;
    {
        cpu->r[14] = 0x0010c490u; fn_0018ba6c(cpu);
    }
L_0010c490:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010c494:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010c498:;
    {
        cpu->r[14] = 0x0010c49cu; fn_001038b0(cpu);
    }
L_0010c49c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010c4a0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010c4a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010c4a8:;
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
L_0010c4ac:;
    {
        return fn_000f361c(cpu);
    }
L_0010c4b0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010c4b4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c4b8:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0010c4bc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010c4c0:;
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
L_0010c4c4:;
    {
        return fn_0009b14c(cpu);
    }
L_0010c4c8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0010c4cc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010c4d0:;
    {
        cpu->r[1] = 0x00000098u;
    }
L_0010c4d4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0010c4d8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010c4dc:;
    {
        cpu->r[14] = 0x0010c4e0u; fn_000fd224(cpu);
    }
L_0010c4e0:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0010c4e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c750;
        }
    }
L_0010c4e8:;
    {
        cpu->r[3] = rd32(0x0010c4f0u + + 0x288u);
    }
L_0010c4ec:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010c4f0:;
    {
        cpu->r[3] = 0x00001bd0u;
    }
L_0010c4f4:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0010c4f8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0010c4fc:;
    {
        cpu->r[14] = 0x0010c500u; fn_00096b5c(cpu);
    }
L_0010c500:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0010c504:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0xcu);
    }
L_0010c508:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010c50c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c72c;
        }
    }
L_0010c510:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_0010c514:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_0010c518:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0010c51c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0010c520:;
    {
        cpu->r[1] = rd32(0x0010c528u + + 0x254u);
    }
L_0010c524:;
    {
        cpu->r[7] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0010c528:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0010c52c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0010c530:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010c534:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c594;
        }
    }
L_0010c538:;
    {
        cpu->r[8] = rd32(0x0010c540u + + 0x240u);
    }
L_0010c53c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0010c540:;
    {
        cpu->r[14] = 0x0010c544u; fn_00093f78(cpu);
    }
L_0010c544:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010c548:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010c54c:;
    {
        cpu->r[14] = 0x0010c550u; fn_00149b48(cpu);
    }
L_0010c550:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c554:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0010c558:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0010c55c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0010c560:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0010c564:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0010c568:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0010c56c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0010c570:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0010c574:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0010c578:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0010c57c:;
    {
        cpu->r[14] = 0x0010c580u; fn_0015eda0(cpu);
    }
L_0010c580:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c584:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010c588:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010c58c:;
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
L_0010c590:;
    {
        return fn_000f34e8(cpu);
    }
L_0010c594:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010c598:;
    {
        cpu->r[14] = 0x0010c59cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010c59c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010c5a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c538;
        }
    }
L_0010c5a4:;
    {
        cpu->r[8] = rd32(0x0010c5acu + + 0x1d4u);
    }
L_0010c5a8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0010c5ac:;
    {
        cpu->r[14] = 0x0010c5b0u; fn_00094228(cpu);
    }
L_0010c5b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010c5b4:;
    {
        cpu->r[14] = 0x0010c5b8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010c5b8:;
    {
        goto L_0010c53c;
    }
L_0010c5bc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0010c5c0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0010c5c4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0010c5c8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0010c5cc:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010c5d0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010c5d4:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0010c5d8:;
    {
        cpu->r[14] = 0x0010c5dcu; fn_000fd248(cpu);
    }
L_0010c5dc:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_0010c5e0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c5e4:;
    {
        cpu->r[14] = 0x0010c5e8u; fn_0018ba6c(cpu);
    }
L_0010c5e8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010c5ec:;
    {
        cpu->r[2] = 0x00000954u;
    }
L_0010c5f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010c5f4:;
    {
        cpu->r[14] = 0x0010c5f8u; imp_memset(cpu); /* memset */
    }
L_0010c5f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010c5fc:;
    {
        cpu->r[14] = 0x0010c600u; fn_0010ffa8(cpu);
    }
L_0010c600:;
    {
        cpu->r[3] = rd32(0x0010c608u + + 0x17cu);
    }
L_0010c604:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010c608:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010c60c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010c610:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010c614:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0010c618:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010c61c:;
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
L_0010c620:;
    {
        return fn_000f361c(cpu);
    }
L_0010c624:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0010c628:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0010c62c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0010c630:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0010c634:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010c638:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010c63c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0010c640:;
    {
        cpu->r[14] = 0x0010c644u; fn_000fd248(cpu);
    }
L_0010c644:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_0010c648:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c64c:;
    {
        cpu->r[14] = 0x0010c650u; fn_0018ba6c(cpu);
    }
L_0010c650:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010c654:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010c658:;
    {
        cpu->r[14] = 0x0010c65cu; fn_00124ea8(cpu);
    }
L_0010c65c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010c660:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010c664:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010c668:;
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
L_0010c66c:;
    {
        return fn_000f361c(cpu);
    }
L_0010c670:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0010c674:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0010c678:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0010c67c:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010c680:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0010c684:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_0010c688:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010c68c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0010c690:;
    {
        cpu->r[14] = 0x0010c694u; fn_000fd248(cpu);
    }
L_0010c694:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0010c698:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[7]);
    }
L_0010c69c:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0010c6a0:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_0010c6a4:;
    {
        cpu->r[14] = 0x0010c6a8u; fn_0018ba6c(cpu);
    }
L_0010c6a8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0010c6ac:;
    {
        cpu->r[14] = 0x0010c6b0u; fn_000a7570(cpu);
    }
L_0010c6b0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010c6b4:;
    {
        cpu->r[0] = 0x00000556u;
    }
L_0010c6b8:;
    {
        cpu->r[14] = 0x0010c6bcu; fn_000aeb58(cpu);
    }
L_0010c6bc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0010c6c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000950u, 0, 0);
    }
L_0010c6c4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0010c6c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010c6cc:;
    {
        cpu->r[14] = 0x0010c6d0u; fn_000a7bb0(cpu);
    }
L_0010c6d0:;
    {
        goto L_0010c2b4;
    }
L_0010c6d4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0010c6d8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0010c6dc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0010c6e0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0010c6e4:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010c6e8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010c6ec:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0010c6f0:;
    {
        cpu->r[14] = 0x0010c6f4u; fn_000fd248(cpu);
    }
L_0010c6f4:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_0010c6f8:;
    {
        cpu->r[14] = 0x0010c6fcu; fn_0018ba6c(cpu);
    }
L_0010c6fc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0010c700:;
    {
        cpu->r[14] = 0x0010c704u; fn_000a7570(cpu);
    }
L_0010c704:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010c708:;
    {
        cpu->r[0] = 0x00000559u;
    }
L_0010c70c:;
    {
        cpu->r[14] = 0x0010c710u; fn_000aeb58(cpu);
    }
L_0010c710:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000950u, 0, 0);
    }
L_0010c714:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0010c718:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010c71c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0010c720:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010c724:;
    {
        cpu->r[14] = 0x0010c728u; fn_000a7bb0(cpu);
    }
L_0010c728:;
    {
        goto L_0010c2b4;
    }
L_0010c72c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c730:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x484u);
    }
L_0010c734:;
    {
        cpu->r[14] = 0x0010c738u; fn_00099b28(cpu);
    }
L_0010c738:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010c73c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0010c740:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0010c744:;
    {
        cpu->r[14] = 0x0010c748u; fn_000a2764(cpu);
    }
L_0010c748:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0010c74c:;
    {
        goto L_0010c510;
    }
L_0010c750:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c754:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010c758:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010c75c:;
    {
        cpu->r[1] = 0x00000098u;
    }
L_0010c760:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010c764:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010c768:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010c76c:;
    {
        cpu->r[14] = 0x0010c770u; fn_000fd248(cpu);
    }
L_0010c770:;
    {
        goto L_0010c4e8;
    }
}

/* _ZN13GS_IngameMenu6CreateEv @ 0010c788 (arm) */
void fn_0010c788(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010c788:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010c78c:;
    {
        cpu->r[14] = 0x0010c790u; fn_001101ac(cpu);
    }
L_0010c790:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0010c794:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010c798u)) return;
    }
}

/* _ZN13GS_IngameMenu17ApplyMenuSettingsEv @ 0010c798 (arm) */
void fn_0010c798(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010c798:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010c79c:;
    {
        cpu->r[5] = rd32(0x0010c7a4u + + 0x110u);
    }
L_0010c7a0:;
    {
        cpu->r[6] = rd32(0x0010c7a8u + + 0x110u);
    }
L_0010c7a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0010c7a8:;
    {
        cpu->r[5] = add_flags(cpu, 0x0010c7b0u, cpu->r[5], 0, 0);
    }
L_0010c7ac:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[3]);
    }
L_0010c7b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010c7b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0010c7b8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0010c7bc:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_0010c7c0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0010c7c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010c7c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c868;
        }
    }
L_0010c7cc:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_0010c7d0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c7d4:;
    {
        cpu->r[1] = rd32(0x0010c7dcu + + 0xe0u);
    }
L_0010c7d8:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0010c7dc:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[3]);
    }
L_0010c7e0:;
    {
        cpu->r[3] = 0x00006737u;
    }
L_0010c7e4:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010c7ecu, cpu->r[1], 0, 0);
    }
L_0010c7e8:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0010c7ec:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[1]);
    }
L_0010c7f0:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[12]);
    }
L_0010c7f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0010c7f8:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_0010c7fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010c800:;
    {
        cpu->r[14] = 0x0010c808u;
    }
L_0010c804:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0xdcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010c808u)) return;
    }
L_0010c808:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0010c80c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0010c810:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_0010c814:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_0010c818:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010c81c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010c838;
        }
    }
L_0010c820:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c824:;
    {
        cpu->r[14] = 0x0010c828u; fn_00096b88(cpu);
    }
L_0010c828:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010c82c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x000004f5u;
        }
    }
L_0010c830:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
        }
    }
L_0010c834:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x1cu, cpu->r[2]);
        }
    }
L_0010c838:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010c83c:;
    {
        cpu->r[2] = 0x000004efu;
    }
L_0010c840:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[2]);
    }
L_0010c844:;
    {
        cpu->r[2] = 0x00001c0cu;
    }
L_0010c848:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0010c84c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0010c850:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[3]);
    }
L_0010c854:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[0]);
    }
L_0010c858:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_0010c85c:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_0010c860:;
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
L_0010c864:;
    {
        return fn_0015ca98(cpu);
    }
L_0010c868:;
    {
        cpu->r[14] = 0x0010c86cu; fn_00096b88(cpu);
    }
L_0010c86c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010c870:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c894;
        }
    }
L_0010c874:;
    {
        cpu->r[1] = rd32(0x0010c87cu + + 0x44u);
    }
L_0010c878:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_0010c87c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0010c880:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[3]);
    }
L_0010c884:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010c88cu, cpu->r[1], 0, 0);
    }
L_0010c888:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000048u, 0, 0);
    }
L_0010c88c:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[1]);
    }
L_0010c890:;
    {
        goto L_0010c7f4;
    }
L_0010c894:;
    {
        cpu->r[1] = rd32(0x0010c89cu + + 0x28u);
    }
L_0010c898:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_0010c89c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0010c8a0:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[3]);
    }
L_0010c8a4:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010c8acu, cpu->r[1], 0, 0);
    }
L_0010c8a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000c0u, 0, 0);
    }
L_0010c8ac:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[1]);
    }
L_0010c8b0:;
    {
        goto L_0010c7f4;
    }
}

/* _ZN13GS_IngameMenu6ResumeEv @ 0010c8c8 (arm) */
void fn_0010c8c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010c8c8:;
    {
        return fn_001142a0(cpu);
    }
}

/* _ZN13GS_IngameMenuD1Ev @ 0010c8cc (arm) */
void fn_0010c8cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010c8cc:;
    {
        cpu->r[3] = rd32(0x0010c8d4u + + 0x24u);
    }
L_0010c8d0:;
    {
        cpu->r[2] = rd32(0x0010c8d8u + + 0x24u);
    }
L_0010c8d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010c8dcu, cpu->r[3], 0, 0);
    }
L_0010c8d8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010c8dc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010c8e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010c8e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0010c8e8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0010c8ec:;
    {
        cpu->r[14] = 0x0010c8f0u; fn_000ec21c(cpu);
    }
L_0010c8f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010c8f4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010c8f8u)) return;
    }
}

/* _ZN13GS_IngameMenuD0Ev @ 0010c900 (arm) */
void fn_0010c900(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010c900:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010c904:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010c908:;
    {
        cpu->r[14] = 0x0010c90cu; fn_0010c8cc(cpu);
    }
L_0010c90c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010c910:;
    {
        cpu->r[14] = 0x0010c914u; fn_0018ba20(cpu);
    }
L_0010c914:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010c918:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010c91cu)) return;
    }
}

/* _ZN13GS_IngameMenuD2Ev @ 0010c91c (arm) */
void fn_0010c91c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010c91c:;
    {
        cpu->r[3] = rd32(0x0010c924u + + 0x24u);
    }
L_0010c920:;
    {
        cpu->r[2] = rd32(0x0010c928u + + 0x24u);
    }
L_0010c924:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010c92cu, cpu->r[3], 0, 0);
    }
L_0010c928:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010c92c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010c930:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010c934:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0010c938:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0010c93c:;
    {
        cpu->r[14] = 0x0010c940u; fn_000ec21c(cpu);
    }
L_0010c940:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010c944:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010c948u)) return;
    }
}

/* _ZN13GS_IngameMenuC1Ev @ 0010c950 (arm) */
void fn_0010c950(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010c950:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010c954:;
    {
        cpu->r[4] = rd32(0x0010c95cu + + 0x28u);
    }
L_0010c958:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010c95c:;
    {
        cpu->r[14] = 0x0010c960u; fn_0010ffa8(cpu);
    }
L_0010c960:;
    {
        cpu->r[3] = rd32(0x0010c968u + + 0x20u);
    }
L_0010c964:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010c96cu, cpu->r[4], 0, 0);
    }
L_0010c968:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010c96c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010c970:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010c974:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0010c978:;
    {
        cpu->r[14] = 0x0010c97cu; fn_0010db28(cpu);
    }
L_0010c97c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010c980:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010c984u)) return;
    }
}

/* _ZN13GS_IngameMenuC2Ev @ 0010c98c (arm) */
void fn_0010c98c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010c98c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010c990:;
    {
        cpu->r[4] = rd32(0x0010c998u + + 0x28u);
    }
L_0010c994:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010c998:;
    {
        cpu->r[14] = 0x0010c99cu; fn_0010ffa8(cpu);
    }
L_0010c99c:;
    {
        cpu->r[3] = rd32(0x0010c9a4u + + 0x20u);
    }
L_0010c9a0:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010c9a8u, cpu->r[4], 0, 0);
    }
L_0010c9a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010c9a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010c9ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010c9b0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0010c9b4:;
    {
        cpu->r[14] = 0x0010c9b8u; fn_0010db28(cpu);
    }
L_0010c9b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010c9bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010c9c0u)) return;
    }
}

/* _ZN13GS_IngameMenu11InitSpritesEv @ 0010c9c8 (arm) */
void fn_0010c9c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010c9c8:;
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
L_0010c9cc:;
    {
        cpu->r[4] = rd32(0x0010c9d4u + + 0x2b0u);
    }
L_0010c9d0:;
    {
        cpu->r[7] = rd32(0x0010c9d8u + + 0x2b0u);
    }
L_0010c9d4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010c9d8:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010c9e0u, cpu->r[4], 0, 0);
    }
L_0010c9dc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010c9e0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0010c9e4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010c9e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010cb00;
        }
    }
L_0010c9ec:;
    {
        cpu->r[6] = rd32(0x0010c9f4u + + 0x298u);
    }
L_0010c9f0:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_0010c9f4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010c9f8:;
    {
        cpu->r[14] = 0x0010c9fcu; fn_00096a08(cpu);
    }
L_0010c9fc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010ca00:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010ca04:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010ca08:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010ca0c:;
    {
        cpu->r[14] = 0x0010ca10u; fn_0018aa44(cpu);
    }
L_0010ca10:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010ca14:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0010ca18:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010ca1c:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[0]);
    }
L_0010ca20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010cc48;
        }
    }
L_0010ca24:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_0010ca28:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010ca2c:;
    {
        cpu->r[14] = 0x0010ca30u; fn_00096a08(cpu);
    }
L_0010ca30:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010ca34:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010ca38:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010ca3c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010ca40:;
    {
        cpu->r[14] = 0x0010ca44u; fn_0018aa44(cpu);
    }
L_0010ca44:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010ca48:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0010ca4c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010ca50:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[0]);
    }
L_0010ca54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010cc0c;
        }
    }
L_0010ca58:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_0010ca5c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010ca60:;
    {
        cpu->r[14] = 0x0010ca64u; fn_00096a08(cpu);
    }
L_0010ca64:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010ca68:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010ca6c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010ca70:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010ca74:;
    {
        cpu->r[14] = 0x0010ca78u; fn_0018aa44(cpu);
    }
L_0010ca78:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010ca7c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0010ca80:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010ca84:;
    {
        wr32(cpu->r[5] + + 0xa8u, cpu->r[0]);
    }
L_0010ca88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010cbd0;
        }
    }
L_0010ca8c:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_0010ca90:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010ca94:;
    {
        cpu->r[14] = 0x0010ca98u; fn_00096a08(cpu);
    }
L_0010ca98:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010ca9c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010caa0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010caa4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010caa8:;
    {
        cpu->r[14] = 0x0010caacu; fn_0018aa44(cpu);
    }
L_0010caac:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010cab0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0010cab4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010cab8:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[0]);
    }
L_0010cabc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010cb94;
        }
    }
L_0010cac0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010cac4:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0010cac8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010cacc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010cad0:;
    {
        cpu->r[14] = 0x0010cad4u; fn_0018aa44(cpu);
    }
L_0010cad4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010cad8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0010cadc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010cae0:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[0]);
    }
L_0010cae4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010cb44;
        }
    }
L_0010cae8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010caec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010caf0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0010caf4:;
    {
        cpu->r[14] = 0x0010caf8u; fn_0018aa44(cpu);
    }
L_0010caf8:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_0010cafc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010cb00u)) return;
    }
L_0010cb00:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010cb04:;
    {
        cpu->r[14] = 0x0010cb08u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010cb08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010cb0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010c9ec;
        }
    }
L_0010cb10:;
    {
        cpu->r[6] = rd32(0x0010cb18u + + 0x174u);
    }
L_0010cb14:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010cb18:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010cb1c:;
    {
        cpu->r[14] = 0x0010cb20u; fn_0018aa20(cpu);
    }
L_0010cb20:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010cb24:;
    {
        cpu->r[14] = 0x0010cb28u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010cb28:;
    {
        cpu->r[3] = rd32(0x0010cb30u + + 0x160u);
    }
L_0010cb2c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010cb30:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010cb34:;
    {
        cpu->r[3] = rd32(0x0010cb3cu + + 0x158u);
    }
L_0010cb38:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010cb3c:;
    {
        cpu->r[14] = 0x0010cb40u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010cb40:;
    {
        goto L_0010c9f0;
    }
L_0010cb44:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010cb48:;
    {
        cpu->r[14] = 0x0010cb4cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010cb4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010cb50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010cae8;
        }
    }
L_0010cb54:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010cb58:;
    {
        cpu->r[14] = 0x0010cb5cu; fn_0018aa20(cpu);
    }
L_0010cb5c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010cb60:;
    {
        cpu->r[14] = 0x0010cb64u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010cb64:;
    {
        cpu->r[3] = rd32(0x0010cb6cu + + 0x124u);
    }
L_0010cb68:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010cb6c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010cb70:;
    {
        cpu->r[3] = rd32(0x0010cb78u + + 0x11cu);
    }
L_0010cb74:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010cb78:;
    {
        cpu->r[14] = 0x0010cb7cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010cb7c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010cb80:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010cb84:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0010cb88:;
    {
        cpu->r[14] = 0x0010cb8cu; fn_0018aa44(cpu);
    }
L_0010cb8c:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_0010cb90:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010cb94u)) return;
    }
L_0010cb94:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010cb98:;
    {
        cpu->r[14] = 0x0010cb9cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010cb9c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010cba0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010cac0;
        }
    }
L_0010cba4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010cba8:;
    {
        cpu->r[14] = 0x0010cbacu; fn_0018aa20(cpu);
    }
L_0010cbac:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010cbb0:;
    {
        cpu->r[14] = 0x0010cbb4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010cbb4:;
    {
        cpu->r[3] = rd32(0x0010cbbcu + + 0xd4u);
    }
L_0010cbb8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010cbbc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010cbc0:;
    {
        cpu->r[3] = rd32(0x0010cbc8u + + 0xccu);
    }
L_0010cbc4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010cbc8:;
    {
        cpu->r[14] = 0x0010cbccu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010cbcc:;
    {
        goto L_0010cac0;
    }
L_0010cbd0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010cbd4:;
    {
        cpu->r[14] = 0x0010cbd8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010cbd8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010cbdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ca8c;
        }
    }
L_0010cbe0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010cbe4:;
    {
        cpu->r[14] = 0x0010cbe8u; fn_0018aa20(cpu);
    }
L_0010cbe8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010cbec:;
    {
        cpu->r[14] = 0x0010cbf0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010cbf0:;
    {
        cpu->r[3] = rd32(0x0010cbf8u + + 0x98u);
    }
L_0010cbf4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010cbf8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010cbfc:;
    {
        cpu->r[3] = rd32(0x0010cc04u + + 0x90u);
    }
L_0010cc00:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010cc04:;
    {
        cpu->r[14] = 0x0010cc08u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010cc08:;
    {
        goto L_0010ca8c;
    }
L_0010cc0c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010cc10:;
    {
        cpu->r[14] = 0x0010cc14u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010cc14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010cc18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ca58;
        }
    }
L_0010cc1c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010cc20:;
    {
        cpu->r[14] = 0x0010cc24u; fn_0018aa20(cpu);
    }
L_0010cc24:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010cc28:;
    {
        cpu->r[14] = 0x0010cc2cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010cc2c:;
    {
        cpu->r[3] = rd32(0x0010cc34u + + 0x5cu);
    }
L_0010cc30:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010cc34:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010cc38:;
    {
        cpu->r[3] = rd32(0x0010cc40u + + 0x54u);
    }
L_0010cc3c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010cc40:;
    {
        cpu->r[14] = 0x0010cc44u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010cc44:;
    {
        goto L_0010ca58;
    }
L_0010cc48:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010cc4c:;
    {
        cpu->r[14] = 0x0010cc50u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010cc50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010cc54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ca24;
        }
    }
L_0010cc58:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010cc5c:;
    {
        cpu->r[14] = 0x0010cc60u; fn_0018aa20(cpu);
    }
L_0010cc60:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010cc64:;
    {
        cpu->r[14] = 0x0010cc68u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010cc68:;
    {
        cpu->r[3] = rd32(0x0010cc70u + + 0x20u);
    }
L_0010cc6c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010cc70:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010cc74:;
    {
        cpu->r[3] = rd32(0x0010cc7cu + + 0x18u);
    }
L_0010cc78:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010cc7c:;
    {
        cpu->r[14] = 0x0010cc80u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010cc80:;
    {
        goto L_0010ca24;
    }
}

/* _ZN20GS_IngameOptionsMenu8isKindOfEi @ 0010cc98 (arm) */
void fn_0010cc98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010cc98:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000031u, 1, 1);
    }
L_0010cc9c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0010cca0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0010cca4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GS_IngameOptionsMenu8DoActionEii @ 0010cca8 (arm) */
void fn_0010cca8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010cca8:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_0010ccac:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0010ccb0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010ccb4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_0010ccb8:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0010ccbc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010ccc0u)) return;
        }
    }
L_0010ccc0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0010ccc4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_0010ccc8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010cd08;
        }
    }
L_0010cccc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_0010ccd0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_0010ccd4:;
    {
        wr32(cpu->r[3] + + 0x78u, cpu->r[1]);
    }
L_0010ccd8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_0010ccdc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
        }
    }
L_0010cce0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_0010cce4:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
        }
    }
L_0010cce8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
        }
    }
L_0010ccec:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd32(cpu->r[2] + shifter(cpu->r[12], 2, 2u, &shc));
        }
    }
L_0010ccf0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010ccf4:;
    {
        wr32(cpu->r[0] + + 0x8f4u, cpu->r[2]);
    }
L_0010ccf8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0010ccfc:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[2]);
    }
L_0010cd00:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[12]);
    }
L_0010cd04:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010cd08u)) return;
    }
L_0010cd08:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0010cd0c:;
    {
        cpu->r[14] = 0x0010cd14u;
    }
L_0010cd10:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010cd14u)) return;
    }
L_0010cd14:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010cd18u)) return;
    }
}

/* init_array_27 @ 0010cd18 (arm) */
void fn_0010cd18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010cd18:;
    {
        cpu->r[3] = rd32(0x0010cd20u + + 0x20u);
    }
L_0010cd1c:;
    {
        cpu->r[1] = rd32(0x0010cd24u + + 0x20u);
    }
L_0010cd20:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010cd28u, cpu->r[3], 0, 0);
    }
L_0010cd24:;
    {
        cpu->r[2] = rd32(0x0010cd2cu + + 0x1cu);
    }
L_0010cd28:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0010cd2c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0010cd34u, cpu->r[2], 0, 0);
    }
L_0010cd30:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010cd34:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_0010cd38:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_0010cd3c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GS_IngameOptionsMenu17ApplyMenuSettingsEv @ 0010cd4c (arm) */
void fn_0010cd4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010cd4c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010cd50:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010cd54:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0010cd58:;
    {
        cpu->r[14] = 0x0010cd5cu; fn_00096b88(cpu);
    }
L_0010cd5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010cd60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010cdb4;
        }
    }
L_0010cd64:;
    {
        cpu->r[3] = rd32(0x0010cd6cu + + 0x70u);
    }
L_0010cd68:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_0010cd6c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0010cd70:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[1]);
    }
L_0010cd74:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010cd7cu, cpu->r[3], 0, 0);
    }
L_0010cd78:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[0]);
    }
L_0010cd7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000078u, 0, 0);
    }
L_0010cd80:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[0]);
    }
L_0010cd84:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0010cd88:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[3]);
    }
L_0010cd8c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0010cd90:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_0010cd94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010cd98:;
    {
        cpu->r[14] = 0x0010cda0u;
    }
L_0010cd9c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0xdcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010cda0u)) return;
    }
L_0010cda0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0010cda4:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_0010cda8:;
    {
        cpu->r[3] = 0x00000403u;
    }
L_0010cdac:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[3]);
    }
L_0010cdb0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010cdb4u)) return;
    }
L_0010cdb4:;
    {
        cpu->r[1] = rd32(0x0010cdbcu + + 0x24u);
    }
L_0010cdb8:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_0010cdbc:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0010cdc0:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[3]);
    }
L_0010cdc4:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010cdccu, cpu->r[1], 0, 0);
    }
L_0010cdc8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0010cdcc:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[1]);
    }
L_0010cdd0:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[3]);
    }
L_0010cdd4:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[3]);
    }
L_0010cdd8:;
    {
        goto L_0010cd8c;
    }
}
