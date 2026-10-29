#include "functions.h"

/* j2k_encode @ 000834e0 (arm) */
void fn_000834e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000834e0:;
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
L_000834e4:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000834e8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000834ec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_000834f0:;
    {
        cpu->r[0] = rd32(0x000834f8u + + 0x4c8u);
    }
L_000834f4:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[1]);
    }
L_000834f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000834fc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_00083500:;
    {
        cpu->r[0] = add_flags(cpu, 0x00083508u, cpu->r[0], 0, 0);
    }
L_00083504:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x40u);
    }
L_00083508:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_0008350c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_00083510:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_00083514:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[2]);
    }
L_00083518:;
    {
        wr32(cpu->r[5] + + 0x44u, cpu->r[3]);
    }
L_0008351c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_00083520:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00083648;
        }
    }
L_00083524:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x44u);
    }
L_00083528:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x48u);
    }
L_0008352c:;
    {
        cpu->r[4] = rd32(0x00083534u + + 0x490u);
    }
L_00083530:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_00083534:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_00083538:;
    {
        cpu->r[0] = 0x00000240u;
    }
L_0008353c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_00083540:;
    {
        cpu->r[14] = 0x00083548u;
    }
L_00083544:;
    {
        uint32_t t = rd32(cpu->r[6]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00083548u)) return;
    }
L_00083548:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0008354c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x8u);
    }
L_00083550:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_00083554:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x6cu);
    }
L_00083558:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0008355c:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[2]);
    }
L_00083560:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0xcu);
    }
L_00083564:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x4u);
    }
L_00083568:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_0008356c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_00083570:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00083574:;
    {
        wr32(cpu->r[7] + + 0x14u, cpu->r[2]);
    }
L_00083578:;
    {
        wr32(cpu->r[7] + + 0x18u, cpu->r[1]);
    }
L_0008357c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x44u);
    }
L_00083580:;
    {
        wr32(cpu->r[7] + + 0x2cu, cpu->r[2]);
    }
L_00083584:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x48u);
    }
L_00083588:;
    {
        wr32(cpu->r[7] + + 0x30u, cpu->r[2]);
    }
L_0008358c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x38u);
    }
L_00083590:;
    {
        wr32(cpu->r[7] + + 0x1cu, cpu->r[2]);
    }
L_00083594:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x3cu);
    }
L_00083598:;
    {
        wr32(cpu->r[7] + + 0x20u, cpu->r[2]);
    }
L_0008359c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x30u);
    }
L_000835a0:;
    {
        wr32(cpu->r[7] + + 0x24u, cpu->r[2]);
    }
L_000835a4:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x34u);
    }
L_000835a8:;
    {
        wr32(cpu->r[7] + + 0x58u, cpu->r[0]);
    }
L_000835ac:;
    {
        wr32(cpu->r[7] + + 0x28u, cpu->r[2]);
    }
L_000835b0:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x10u);
    }
L_000835b4:;
    {
        wr32(cpu->r[7] + + 0x34u, cpu->r[2]);
    }
L_000835b8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
    }
L_000835bc:;
    {
        wr32(cpu->r[7] + + 0x38u, cpu->r[3]);
    }
L_000835c0:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x10u);
    }
L_000835c4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000835c8:;
    {
        cpu->r[14] = 0x000835d0u;
    }
L_000835cc:;
    {
        uint32_t t = rd32(cpu->r[6]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000835d0u)) return;
    }
L_000835d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000835d4:;
    {
        cpu->r[2] = 0x000015d0u;
    }
L_000835d8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000835dc:;
    {
        wr32(cpu->r[7] + + 0x3cu, cpu->r[0]);
    }
L_000835e0:;
    {
        goto L_00083600;
    }
L_000835e4:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x6cu);
    }
L_000835e8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x3cu);
    }
L_000835ec:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000835f0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000835f4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000835f8:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[0]);
    }
L_000835fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00083600:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x10u);
    }
L_00083604:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00083608:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000835e4;
        }
    }
L_0008360c:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x00083614u + + 0x3a4u);
    }
L_00083610:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00083614:;
    {
        *(uint64_t*)G(cpu->r[7]) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_00083618:;
    {
        cpu->r[14] = 0x0008361cu; fn_0007ddac(cpu);
    }
L_0008361c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_00083620:;
    {
        cpu->r[2] = 0x00000064u;
    }
L_00083624:;
    {
        wr32(cpu->r[7] + + 0x48u, cpu->r[2]);
    }
L_00083628:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[4]);
    }
L_0008362c:;
    {
        wr32(cpu->r[7] + + 0x4cu, cpu->r[0]);
    }
L_00083630:;
    {
        cpu->r[0] = 0x000004b0u;
    }
L_00083634:;
    {
        cpu->r[14] = 0x0008363cu;
    }
L_00083638:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008363cu)) return;
    }
L_0008363c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00083640:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[3]);
    }
L_00083644:;
    {
        wr32(cpu->r[7] + + 0x44u, cpu->r[0]);
    }
L_00083648:;
    {
        cpu->r[1] = 0x0000ff4fu;
    }
L_0008364c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00083650:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x48u);
    }
L_00083654:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00083658:;
    {
        cpu->r[14] = 0x0008365cu; fn_0007ded0(cpu);
    }
L_0008365c:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x48u);
    }
L_00083660:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00083664:;
    {
        cpu->r[1] = 0x0000ff51u;
    }
L_00083668:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008366c:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0x40u);
    }
L_00083670:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x3cu);
    }
L_00083674:;
    {
        cpu->r[14] = 0x00083678u; fn_0007ded0(cpu);
    }
L_00083678:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008367c:;
    {
        cpu->r[11] = cpu->r[10];
    }
L_00083680:;
    {
        cpu->r[14] = 0x00083684u; fn_0007ddac(cpu);
    }
L_00083684:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00083688:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_0008368c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083690:;
    {
        cpu->r[14] = 0x00083694u; fn_0007dde4(cpu);
    }
L_00083694:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0xcu);
    }
L_00083698:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008369c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000836a0:;
    {
        cpu->r[14] = 0x000836a4u; fn_0007ded0(cpu);
    }
L_000836a4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_000836a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000836ac:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000836b0:;
    {
        cpu->r[14] = 0x000836b4u; fn_0007ded0(cpu);
    }
L_000836b4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xcu);
    }
L_000836b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000836bc:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000836c0:;
    {
        cpu->r[14] = 0x000836c4u; fn_0007ded0(cpu);
    }
L_000836c4:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_000836c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000836cc:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000836d0:;
    {
        cpu->r[14] = 0x000836d4u; fn_0007ded0(cpu);
    }
L_000836d4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x4u);
    }
L_000836d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000836dc:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000836e0:;
    {
        cpu->r[14] = 0x000836e4u; fn_0007ded0(cpu);
    }
L_000836e4:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x38u);
    }
L_000836e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000836ec:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000836f0:;
    {
        cpu->r[14] = 0x000836f4u; fn_0007ded0(cpu);
    }
L_000836f4:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x3cu);
    }
L_000836f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000836fc:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00083700:;
    {
        cpu->r[14] = 0x00083704u; fn_0007ded0(cpu);
    }
L_00083704:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x30u);
    }
L_00083708:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008370c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00083710:;
    {
        cpu->r[14] = 0x00083714u; fn_0007ded0(cpu);
    }
L_00083714:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x34u);
    }
L_00083718:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008371c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00083720:;
    {
        cpu->r[14] = 0x00083724u; fn_0007ded0(cpu);
    }
L_00083724:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083728:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_0008372c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00083730:;
    {
        cpu->r[14] = 0x00083734u; fn_0007ded0(cpu);
    }
L_00083734:;
    {
        goto L_00083784;
    }
L_00083738:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_0008373c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_00083740:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x20u);
    }
L_00083744:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x18u);
    }
L_00083748:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008374c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 7u, &shc), 0, 0);
    }
L_00083750:;
    {
        cpu->r[14] = 0x00083754u; fn_0007ded0(cpu);
    }
L_00083754:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_00083758:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0008375c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083760:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00083764:;
    {
        cpu->r[14] = 0x00083768u; fn_0007ded0(cpu);
    }
L_00083768:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_0008376c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083770:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00083774:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_00083778:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000030u, 0, 0);
    }
L_0008377c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_00083780:;
    {
        cpu->r[14] = 0x00083784u; fn_0007ded0(cpu);
    }
L_00083784:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_00083788:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0008378c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083790:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_00083794:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[2], 0, 0);
    }
L_00083798:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00083738;
        }
    }
L_0008379c:;
    {
        cpu->r[14] = 0x000837a0u; fn_0007ddac(cpu);
    }
L_000837a0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000837a4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_000837a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000837ac:;
    {
        cpu->r[14] = 0x000837b0u; fn_0007ddbc(cpu);
    }
L_000837b0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000837b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000837b8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000837bc:;
    {
        cpu->r[14] = 0x000837c0u; fn_0007ded0(cpu);
    }
L_000837c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000837c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000837c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_000837cc:;
    {
        cpu->r[6] = 0x000015d4u;
    }
L_000837d0:;
    {
        cpu->r[14] = 0x000837d4u; fn_0007ddbc(cpu);
    }
L_000837d4:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x48u);
    }
L_000837d8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000837dc:;
    {
        cpu->r[1] = 0x0000ff52u;
    }
L_000837e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000837e4:;
    {
        cpu->r[14] = 0x000837e8u; fn_0007ded0(cpu);
    }
L_000837e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000837ec:;
    {
        cpu->r[14] = 0x000837f0u; fn_0007ddac(cpu);
    }
L_000837f0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000837f4:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000837f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000837fc:;
    {
        cpu->r[14] = 0x00083800u; fn_0007dde4(cpu);
    }
L_00083800:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_00083804:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_00083808:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0008380c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083810:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x6cu);
    }
L_00083814:;
    {
        uint32_t v = cpu->r[6] * cpu->r[1] + cpu->r[3]; cpu->r[6] = v;
    }
L_00083818:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x4u);
    }
L_0008381c:;
    {
        cpu->r[14] = 0x00083820u; fn_0007ded0(cpu);
    }
L_00083820:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_00083824:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083828:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0008382c:;
    {
        cpu->r[14] = 0x00083830u; fn_0007ded0(cpu);
    }
L_00083830:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xcu);
    }
L_00083834:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083838:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0008383c:;
    {
        cpu->r[14] = 0x00083840u; fn_0007ded0(cpu);
    }
L_00083840:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00083844:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_00083848:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008384c:;
    {
        cpu->r[14] = 0x00083850u; fn_0007ded0(cpu);
    }
L_00083850:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00083854:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00083858:;
    {
        cpu->r[14] = 0x0008385cu; fn_000822c0(cpu);
    }
L_0008385c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083860:;
    {
        cpu->r[14] = 0x00083864u; fn_0007ddac(cpu);
    }
L_00083864:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00083868:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_0008386c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083870:;
    {
        cpu->r[14] = 0x00083874u; fn_0007ddbc(cpu);
    }
L_00083874:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00083878:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0008387c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083880:;
    {
        cpu->r[14] = 0x00083884u; fn_0007ded0(cpu);
    }
L_00083884:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[10], 0, 0);
    }
L_00083888:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008388c:;
    {
        cpu->r[14] = 0x00083890u; fn_0007ddbc(cpu);
    }
L_00083890:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x48u);
    }
L_00083894:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00083898:;
    {
        cpu->r[1] = 0x0000ff5cu;
    }
L_0008389c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000838a0:;
    {
        cpu->r[14] = 0x000838a4u; fn_0007ded0(cpu);
    }
L_000838a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000838a8:;
    {
        cpu->r[14] = 0x000838acu; fn_0007ddac(cpu);
    }
L_000838ac:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000838b0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000838b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000838b8:;
    {
        cpu->r[14] = 0x000838bcu; fn_0007dde4(cpu);
    }
L_000838bc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000838c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000838c4:;
    {
        cpu->r[14] = 0x000838c8u; fn_0008239c(cpu);
    }
L_000838c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000838cc:;
    {
        cpu->r[14] = 0x000838d0u; fn_0007ddac(cpu);
    }
L_000838d0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000838d4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_000838d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000838dc:;
    {
        cpu->r[14] = 0x000838e0u; fn_0007ddbc(cpu);
    }
L_000838e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000838e4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000838e8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000838ec:;
    {
        cpu->r[14] = 0x000838f0u; fn_0007ded0(cpu);
    }
L_000838f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000838f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[10], 0, 0);
    }
L_000838f8:;
    {
        cpu->r[14] = 0x000838fcu; fn_0007ddbc(cpu);
    }
L_000838fc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00083900:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_00083904:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00083908:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_0008390c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[8] + + 0x10u);
        }
    }
L_00083910:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00084068;
        }
    }
L_00083914:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00083918:;
    {
        cpu->r[9] = 0x000015d0u;
    }
L_0008391c:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_00083920:;
    {
        goto L_0008394c;
    }
L_00083924:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00083928:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x6cu);
    }
L_0008392c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[9]);
    }
L_00083930:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_00083934:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x328u);
    }
L_00083938:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008393c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00084094;
        }
    }
L_00083940:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000430u, 0, 0);
    }
L_00083944:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00083948:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0008394c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_00083950:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00083924;
        }
    }
L_00083954:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00083958:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x40u);
    }
L_0008395c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00083960:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00083a20;
        }
    }
L_00083964:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_00083968:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x40u);
    }
L_0008396c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00083970:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00083a20;
        }
    }
L_00083974:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x48u);
    }
L_00083978:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0008397c:;
    {
        cpu->r[1] = 0x0000ff64u;
    }
L_00083980:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00083984:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083988:;
    {
        cpu->r[14] = 0x0008398cu; fn_0007ded0(cpu);
    }
L_0008398c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083990:;
    {
        cpu->r[14] = 0x00083994u; fn_0007ddac(cpu);
    }
L_00083994:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00083998:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0008399c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000839a0:;
    {
        cpu->r[14] = 0x000839a4u; fn_0007dde4(cpu);
    }
L_000839a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000839a8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000839ac:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000839b0:;
    {
        cpu->r[14] = 0x000839b4u; fn_0007ded0(cpu);
    }
L_000839b4:;
    {
        goto L_000839d8;
    }
L_000839cc:;
    {
        cpu->r[1] = rd8(cpu->r[10] + cpu->r[6]);
    }
L_000839d0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000839d4:;
    {
        cpu->r[14] = 0x000839d8u; fn_0007ded0(cpu);
    }
L_000839d8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000839dc:;
    {
        cpu->r[14] = 0x000839e0u; imp_strlen(cpu); /* strlen */
    }
L_000839e0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000839e4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_000839e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000839ec:;
    {
        if (cond_test(cpu, 4)) {
        goto L_000839cc;
        }
    }
L_000839f0:;
    {
        cpu->r[14] = 0x000839f4u; fn_0007ddac(cpu);
    }
L_000839f4:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000839f8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 0);
    }
L_000839fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083a00:;
    {
        cpu->r[14] = 0x00083a04u; fn_0007ddbc(cpu);
    }
L_00083a04:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00083a08:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083a0c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00083a10:;
    {
        cpu->r[14] = 0x00083a14u; fn_0007ded0(cpu);
    }
L_00083a14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083a18:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[9], 0, 0);
    }
L_00083a1c:;
    {
        cpu->r[14] = 0x00083a20u; fn_0007ddbc(cpu);
    }
L_00083a20:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00083a24:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00083a28:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x10u);
    }
L_00083a2c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00083a30:;
    {
        cpu->r[14] = 0x00083a34u; fn_00083348(cpu);
    }
L_00083a34:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00083a38:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_00083a3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00083a40:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[0]);
    }
L_00083a44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00084250;
        }
    }
L_00083a48:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00083a4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00083a60;
        }
    }
L_00083a50:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00083a54:;
    {
        cpu->r[14] = 0x00083a58u; fn_0007ddac(cpu);
    }
L_00083a58:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00083a5c:;
    {
        wr32(cpu->r[7] + + 0x50u, cpu->r[0]);
    }
L_00083a60:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00083a64:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00083a68:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_00083a6c:;
    {
        cpu->r[14] = 0x00083a70u; fn_0008d508(cpu);
    }
L_00083a70:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00083a74:;
    {
        cpu->r[3] = rd32(0x00083a7cu + - 0xb4u);
    }
L_00083a78:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[8]);
    }
L_00083a7c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00083a84u, cpu->r[3], 0, 0);
    }
L_00083a80:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_00083a84:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_00083a88:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_00083a8c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00083a90:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00083a94:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x48u);
    }
L_00083a98:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x44u);
    }
L_00083a9c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[12] = v;
    }
L_00083aa0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_00083aa4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000841e4;
        }
    }
L_00083aa8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_00083aac:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00083ab0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00083ab4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_00083ab8:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x6cu);
    }
L_00083abc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00083ac0:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[0]);
    }
L_00083ac4:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00083ac8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00083acc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00083ad0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00083ad4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_00083ad8:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[14]);
    }
L_00083adc:;
    {
        cpu->r[14] = 0x00083ae0u; fn_00080304(cpu);
    }
L_00083ae0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00083ae4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_00083ae8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00083aec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00083af0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00083af4:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[0]);
    }
L_00083af8:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[2]);
    }
L_00083afc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_00083b00:;
    {
        wr32(cpu->r[1] + + 0xcu, cpu->r[3]);
    }
L_00083b04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000841c4;
        }
    }
L_00083b08:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00083b0c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00083b10:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_00083b14:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00083b18:;
    {
        cpu->r[14] = 0x00083b1cu; fn_00090f48(cpu);
    }
L_00083b1c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00083b20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00083b48;
        }
    }
L_00083b24:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x58u);
    }
L_00083b28:;
    {
        cpu->r[4] = 0x00000240u;
    }
L_00083b2c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_00083b30:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00083b34:;
    {
        uint32_t v = cpu->r[4] * cpu->r[2] + cpu->r[3]; cpu->r[4] = v;
    }
L_00083b38:;
    {
        cpu->r[14] = 0x00083b3cu; fn_0007ddac(cpu);
    }
L_00083b3c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x2cu);
    }
L_00083b40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00083b44:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00083b48:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_00083b4c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x1a4u);
    }
L_00083b50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00083b54:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008401c;
        }
    }
L_00083b58:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00083b5c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_00083b60:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_00083b64:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_00083b68:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00083b6c:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_00083b70:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_00083b74:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[12]);
    }
L_00083b78:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00083b7c:;
    {
        cpu->r[14] = 0x00083b80u; fn_000806b8(cpu);
    }
L_00083b80:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00083b84:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00083b88:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x14u);
    }
L_00083b8c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00083b90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00083b94:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_00083b98:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00084000;
        }
    }
L_00083b9c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00083ba0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00083ba4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00083ba8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00083bac:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[12]);
    }
L_00083bb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00083be4;
        }
    }
L_00083bb4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00083bb8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x58u);
    }
L_00083bbc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00083bc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_00083bc4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x10u);
    }
L_00083bc8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 6u, &shc), 0, 0);
    }
L_00083bcc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_00083bd0:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x23cu);
    }
L_00083bd4:;
    {
        cpu->r[14] = 0x00083bd8u; fn_0007ddac(cpu);
    }
L_00083bd8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x2cu);
    }
L_00083bdc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00083be0:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[3]);
    }
L_00083be4:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x48u);
    }
L_00083be8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083bec:;
    {
        cpu->r[14] = 0x00083bf0u; fn_0007ddac(cpu);
    }
L_00083bf0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00083bf4:;
    {
        cpu->r[1] = 0x0000ff90u;
    }
L_00083bf8:;
    {
        wr32(cpu->r[5] + + 0x24u, cpu->r[0]);
    }
L_00083bfc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083c00:;
    {
        cpu->r[14] = 0x00083c04u; fn_0007ded0(cpu);
    }
L_00083c04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083c08:;
    {
        cpu->r[14] = 0x00083c0cu; fn_0007ddac(cpu);
    }
L_00083c0c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00083c10:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00083c14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083c18:;
    {
        cpu->r[14] = 0x00083c1cu; fn_0007dde4(cpu);
    }
L_00083c1c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00083c20:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_00083c24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083c28:;
    {
        cpu->r[14] = 0x00083c2cu; fn_0007ded0(cpu);
    }
L_00083c2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083c30:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00083c34:;
    {
        cpu->r[14] = 0x00083c38u; fn_0007dde4(cpu);
    }
L_00083c38:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x10u);
    }
L_00083c3c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00083c40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083c44:;
    {
        cpu->r[14] = 0x00083c48u; fn_0007ded0(cpu);
    }
L_00083c48:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_00083c4c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_00083c50:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00083c54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083c58:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00083c5c:;
    {
        cpu->r[14] = 0x00083c60u; fn_0007ded0(cpu);
    }
L_00083c60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083c64:;
    {
        cpu->r[14] = 0x00083c68u; fn_0007ddac(cpu);
    }
L_00083c68:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00083c6c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_00083c70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083c74:;
    {
        cpu->r[14] = 0x00083c78u; fn_0007ddbc(cpu);
    }
L_00083c78:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00083c7c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00083c80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083c84:;
    {
        cpu->r[14] = 0x00083c88u; fn_0007ded0(cpu);
    }
L_00083c88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00083c8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[6], 0, 0);
    }
L_00083c90:;
    {
        cpu->r[14] = 0x00083c94u; fn_0007ddbc(cpu);
    }
L_00083c94:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00083c98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00083c9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00083d0c;
        }
    }
L_00083ca0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00083ca4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00083ca8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00083cac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00083d0c;
        }
    }
L_00083cb0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_00083cb4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x10u);
    }
L_00083cb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00083cbc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00083cf0;
        }
    }
L_00083cc0:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_00083cc4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00083cc8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00083ccc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00083cd0:;
    {
        cpu->r[14] = 0x00083cd4u; fn_0008244c(cpu);
    }
L_00083cd4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00083cd8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00083cdc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00083ce0:;
    {
        cpu->r[14] = 0x00083ce4u; fn_0008251c(cpu);
    }
L_00083ce4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_00083ce8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00083cec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00083cc8;
        }
    }
L_00083cf0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00083cf4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00083cf8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x6cu);
    }
L_00083cfc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_00083d00:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1a4u);
    }
L_00083d04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00083d08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000841b8;
        }
    }
L_00083d0c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00083d10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00083d4c;
        }
    }
L_00083d14:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00083d18:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x58u);
    }
L_00083d1c:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x10u);
    }
L_00083d20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_00083d24:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00083d28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 6u, &shc), 0, 0);
    }
L_00083d2c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00083d30:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x23cu);
    }
L_00083d34:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00083d38:;
    {
        cpu->r[14] = 0x00083d3cu; fn_0007ddac(cpu);
    }
L_00083d3c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x2cu);
    }
L_00083d40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00083d44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00083d48:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00083d4c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_00083d50:;
    {
        cpu->r[1] = 0x0000ff93u;
    }
L_00083d54:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00083d58:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00083d5c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00083d60:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x48u);
    }
L_00083d64:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00083d68:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00083d6c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00083d70:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x40u);
    }
L_00083d74:;
    {
        wr32(cpu->r[12] + + 0x8u, cpu->r[3]);
    }
L_00083d78:;
    {
        cpu->r[14] = 0x00083d7cu; fn_0007ded0(cpu);
    }
L_00083d7c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x8u);
    }
L_00083d80:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00083d84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008419c;
        }
    }
L_00083d88:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x44u);
    }
L_00083d8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00083d90:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_00083d94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00083de4;
        }
    }
L_00083d98:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00083d9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00083da0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008412c;
        }
    }
L_00083da4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x58u);
    }
L_00083da8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 3u, &shc), 0, 0);
    }
L_00083dac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00083db0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], shifter(cpu->r[8], 2, 6u, &shc), 0, 0);
    }
L_00083db4:;
    {
        cpu->r[14] = 0x00083db8u; fn_0007ddac(cpu);
    }
L_00083db8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x2cu);
    }
L_00083dbc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x44u);
    }
L_00083dc0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00083dc4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x58u);
    }
L_00083dc8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_00083dcc:;
    {
        wr32(cpu->r[8] + + 0xcu, cpu->r[2]);
    }
L_00083dd0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_00083dd4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_00083dd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 6u, &shc), 0, 0);
    }
L_00083ddc:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_00083de0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x8u);
    }
L_00083de4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x6cu);
    }
L_00083de8:;
    {
        cpu->r[3] = 0x000015d4u;
    }
L_00083dec:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8] + cpu->r[10]; cpu->r[10] = v;
    }
L_00083df0:;
    {
        cpu->r[11] = rd32(cpu->r[10] + + 0xcu);
    }
L_00083df4:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00083df8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00083e48;
        }
    }
L_00083dfc:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_00083e00:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[10] + + 0x14u);
    }
L_00083e04:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_00083e08:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00083e10u + + 0x3ccu);
    }
L_00083e0c:;
    {
        vfp_sync_flags(cpu);
    }
L_00083e10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00083e30;
        }
    }
L_00083e14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_00083e18:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_00083e1c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x28u);
    }
L_00083e20:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_00083e24:;
    {
        cpu->r[14] = 0x00083e28u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00083e28:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00083e2c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00083e30:;
    {
        vfp_vsub(cpu, 16, 16, 15);
    }
L_00083e34:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_00083e38:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 1);
    }
L_00083e3c:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00083e40:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_00083e44:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00083e00;
        }
    }
L_00083e48:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00083e4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00083e50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00083e78;
        }
    }
L_00083e54:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00083e58:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00083e5c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_00083e60:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00083e64:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_00083e68:;
    {
        wr32(cpu->r[2] + + 0x348u, cpu->r[3]);
    }
L_00083e6c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
        }
    }
L_00083e70:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + + 0x8u, cpu->r[3]);
        }
    }
L_00083e74:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x8u);
    }
L_00083e78:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00083e7c:;
    {
        cpu->r[14] = 0x00083e80u; fn_0007dddc(cpu);
    }
L_00083e80:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00083e84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00083e88:;
    {
        cpu->r[14] = 0x00083e8cu; fn_0007ddcc(cpu);
    }
L_00083e8c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00083e90:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00083e94:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00083e98:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00083e9c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 0);
    }
L_00083ea0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00083ea4:;
    {
        cpu->r[14] = 0x00083ea8u; fn_0008f490(cpu);
    }
L_00083ea8:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00083eac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00083eb0:;
    {
        cpu->r[14] = 0x00083eb4u; fn_0007ddac(cpu);
    }
L_00083eb4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_00083eb8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000006u, 0, 0);
    }
L_00083ebc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], cpu->r[0], 0, 0);
    }
L_00083ec0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00083ec4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_00083ec8:;
    {
        cpu->r[14] = 0x00083eccu; fn_0007ddbc(cpu);
    }
L_00083ecc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00083ed0:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00083ed4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00083ed8:;
    {
        cpu->r[14] = 0x00083edcu; fn_0007ded0(cpu);
    }
L_00083edc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x24u);
    }
L_00083ee0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00083ee4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[1], 0, 0);
    }
L_00083ee8:;
    {
        cpu->r[14] = 0x00083eecu; fn_0007ddbc(cpu);
    }
L_00083eec:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00083ef0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00083ef4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00083f34;
        }
    }
L_00083ef8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00083efc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00083f00:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
    }
L_00083f04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00083f08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000006u, 0, 0);
    }
L_00083f0c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00083f10:;
    {
        cpu->r[14] = 0x00083f14u; fn_0007ddbc(cpu);
    }
L_00083f14:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00083f18:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_00083f1c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00083f20:;
    {
        cpu->r[14] = 0x00083f24u; fn_0007ded0(cpu);
    }
L_00083f24:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00083f28:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00083f2c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00083f30:;
    {
        cpu->r[14] = 0x00083f34u; fn_0007ded0(cpu);
    }
L_00083f34:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x24u);
    }
L_00083f38:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00083f3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[1], 0, 0);
    }
L_00083f40:;
    {
        cpu->r[14] = 0x00083f44u; fn_0007ddbc(cpu);
    }
L_00083f44:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00083f48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00083fdc;
        }
    }
L_00083f4c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00083f50:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x58u);
    }
L_00083f54:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x10u);
    }
L_00083f58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_00083f5c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00083f60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 6u, &shc), 0, 0);
    }
L_00083f64:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00083f68:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x23cu);
    }
L_00083f6c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00083f70:;
    {
        cpu->r[14] = 0x00083f74u; fn_0007ddac(cpu);
    }
L_00083f74:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x2cu);
    }
L_00083f78:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x58u);
    }
L_00083f7c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00083f80:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00083f84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_00083f88:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[2]);
    }
L_00083f8c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_00083f90:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_00083f94:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_00083f98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00083f9c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 6u, &shc), 0, 0);
    }
L_00083fa0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x23cu);
    }
L_00083fa4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00083fa8:;
    {
        wr32(cpu->r[2] + + 0xcu, cpu->r[12]);
    }
L_00083fac:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_00083fb0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_00083fb4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x8u);
    }
L_00083fb8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_00083fbc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00083fc0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_00083fc4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 6u, &shc), 0, 0);
    }
L_00083fc8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x23cu);
    }
L_00083fcc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00083fd0:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[0]);
    }
L_00083fd4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x8u);
    }
L_00083fd8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_00083fdc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00083fe0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_00083fe4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00083fe8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00083fec:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00083ff0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_00083ff4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00083ff8:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_00083ffc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00083ba4;
        }
    }
L_00084000:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_00084004:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_00084008:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x1a4u);
    }
L_0008400c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00084010:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_00084014:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00084018:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00083b64;
        }
    }
L_0008401c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00084020:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008404c;
        }
    }
L_00084024:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x58u);
    }
L_00084028:;
    {
        cpu->r[4] = 0x00000240u;
    }
L_0008402c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_00084030:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00084034:;
    {
        uint32_t v = cpu->r[4] * cpu->r[2] + cpu->r[3]; cpu->r[4] = v;
    }
L_00084038:;
    {
        cpu->r[14] = 0x0008403cu; fn_0007ddac(cpu);
    }
L_0008403c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x2cu);
    }
L_00084040:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00084044:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00084048:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_0008404c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00084050:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00084054:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x000015c0u, 0, 0);
    }
L_00084058:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000014u, 0, 0);
    }
L_0008405c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00084060:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_00084064:;
    {
        goto L_00083a8c;
    }
L_00084068:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x10u);
    }
L_0008406c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00084070:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00084074:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00084078:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00083914;
        }
    }
L_0008407c:;
    {
        cpu->r[14] = 0x00084080u; fn_0008244c(cpu);
    }
L_00084080:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00084084:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00084088:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0008408c:;
    {
        cpu->r[14] = 0x00084090u; fn_0008251c(cpu);
    }
L_00084090:;
    {
        goto L_00084068;
    }
L_00084094:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_00084098:;
    {
        cpu->r[1] = 0x0000ff5eu;
    }
L_0008409c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x3cu);
    }
L_000840a0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000840a4:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x48u);
    }
L_000840a8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x6cu);
    }
L_000840ac:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x10u);
    }
L_000840b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000840b4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000840b8:;
    {
        cpu->r[14] = 0x000840bcu; fn_0007ded0(cpu);
    }
L_000840bc:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000100u, 1, 1);
    }
L_000840c0:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_000840c4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000840c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000840cc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00084118;
        }
    }
L_000840d0:;
    {
        cpu->r[14] = 0x000840d4u; fn_0007ded0(cpu);
    }
L_000840d4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000840d8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000840dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000840e0:;
    {
        cpu->r[14] = 0x000840e4u; fn_0007ded0(cpu);
    }
L_000840e4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000840e8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000840ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000840f0:;
    {
        cpu->r[14] = 0x000840f4u; fn_0007ded0(cpu);
    }
L_000840f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000840f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000840fc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00084100:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[9]);
    }
L_00084104:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_00084108:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x328u);
    }
L_0008410c:;
    {
        cpu->r[14] = 0x00084110u; fn_0007ded0(cpu);
    }
L_00084110:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x10u);
    }
L_00084114:;
    {
        goto L_00083940;
    }
L_00084118:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0008411c:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_00084120:;
    {
        cpu->r[14] = 0x00084124u; fn_0007ded0(cpu);
    }
L_00084124:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00084128:;
    {
        goto L_000840d8;
    }
L_0008412c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00084130:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 3u, &shc), 0, 0);
    }
L_00084134:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00084138:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x58u);
    }
L_0008413c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_00084140:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[8], 2, 6u, &shc), 0, 0);
    }
L_00084144:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00084148:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x224u);
    }
L_0008414c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00084150:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_00084154:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x8u);
    }
L_00084158:;
    {
        cpu->r[14] = 0x0008415cu; fn_0007ddac(cpu);
    }
L_0008415c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_00084160:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[8] = rd32(cpu->r[5] + + 0x8u);
        }
    }
L_00084164:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00083de4;
        }
    }
L_00084168:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008416c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00084170:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00084174:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x58u);
    }
L_00084178:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_0008417c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_00084180:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 6u, &shc), 0, 0);
    }
L_00084184:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00084188:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x224u);
    }
L_0008418c:;
    {
        cpu->r[14] = 0x00084190u; fn_0007ddac(cpu);
    }
L_00084190:;
    {
        wr32(cpu->r[8] + shifter(cpu->r[10], 2, 3u, &shc), cpu->r[0]);
    }
L_00084194:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x8u);
    }
L_00084198:;
    {
        goto L_00083de4;
    }
L_0008419c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000841a0:;
    {
        cpu->r[14] = 0x000841a4u; fn_0007ddac(cpu);
    }
L_000841a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x2cu);
    }
L_000841a8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x8u);
    }
L_000841ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_000841b0:;
    {
        wr32(cpu->r[5] + + 0x28u, cpu->r[3]);
    }
L_000841b4:;
    {
        goto L_00083d88;
    }
L_000841b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000841bc:;
    {
        cpu->r[14] = 0x000841c0u; fn_000825b8(cpu);
    }
L_000841c0:;
    {
        goto L_00083d0c;
    }
L_000841c4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000841c8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_000841cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000841d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_000841d4:;
    {
        cpu->r[14] = 0x000841d8u; fn_00090470(cpu);
    }
L_000841d8:;
    {
        goto L_00083b1c;
    }
L_000841e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000841e8:;
    {
        cpu->r[14] = 0x000841ecu; fn_0008e2ec(cpu);
    }
L_000841ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000841f0:;
    {
        cpu->r[14] = 0x000841f4u; fn_0008d584(cpu);
    }
L_000841f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_000841f8:;
    {
        cpu->r[3] = rd32(0x00084200u + - 0x20u);
    }
L_000841fc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x14u);
    }
L_00084200:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00084204:;
    {
        cpu->r[14] = 0x0008420cu;
    }
L_00084208:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008420cu)) return;
    }
L_0008420c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x48u);
    }
L_00084210:;
    {
        cpu->r[1] = 0x0000ffd9u;
    }
L_00084214:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00084218:;
    {
        cpu->r[14] = 0x0008421cu; fn_0007ded0(cpu);
    }
L_0008421c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00084220:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00084240;
        }
    }
L_00084224:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00084228:;
    {
        cpu->r[14] = 0x0008422cu; fn_0007ddac(cpu);
    }
L_0008422c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x2cu);
    }
L_00084230:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4cu);
    }
L_00084234:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_00084238:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0008423c:;
    {
        wr32(cpu->r[7] + + 0x54u, cpu->r[3]);
    }
L_00084240:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00084244:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_00084248:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0008424c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00084250u)) return;
    }
L_00084250:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x48u);
    }
L_00084254:;
    {
        cpu->r[6] = 0x00000005u;
    }
L_00084258:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008425c:;
    {
        cpu->r[14] = 0x00084260u; fn_0007ddac(cpu);
    }
L_00084260:;
    {
        cpu->r[1] = 0x0000ff55u;
    }
L_00084264:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00084268:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[0]);
    }
L_0008426c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084270:;
    {
        cpu->r[14] = 0x00084274u; fn_0007ded0(cpu);
    }
L_00084274:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x1cu);
    }
L_00084278:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0008427c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084280:;
    {
        uint32_t v = cpu->r[6] * cpu->r[1]; cpu->r[1] = v;
    }
L_00084284:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00084288:;
    {
        cpu->r[14] = 0x0008428cu; fn_0007ded0(cpu);
    }
L_0008428c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00084290:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00084294:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084298:;
    {
        cpu->r[14] = 0x0008429cu; fn_0007ded0(cpu);
    }
L_0008429c:;
    {
        cpu->r[1] = 0x00000050u;
    }
L_000842a0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000842a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000842a8:;
    {
        cpu->r[14] = 0x000842acu; fn_0007ded0(cpu);
    }
L_000842ac:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x1cu);
    }
L_000842b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000842b4:;
    {
        uint32_t v = cpu->r[6] * cpu->r[1]; cpu->r[1] = v;
    }
L_000842b8:;
    {
        cpu->r[14] = 0x000842bcu; fn_0007dde4(cpu);
    }
L_000842bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000842c0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000842c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000842c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00083a48;
        }
    }
L_000842cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000842d0:;
    {
        cpu->r[14] = 0x000842d4u; fn_000825b8(cpu);
    }
L_000842d4:;
    {
        goto L_00083a48;
    }
}

/* j2k_dump_image @ 000842d8 (arm) */
void fn_000842d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000842d8:;
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
L_000842dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000842e0:;
    {
        cpu->r[0] = rd32(0x000842e8u + + 0x130u);
    }
L_000842e4:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_000842e8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000842ec:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000842f0:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_000842f4:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000842f8:;
    {
        cpu->r[0] = add_flags(cpu, 0x00084300u, cpu->r[0], 0, 0);
    }
L_000842fc:;
    {
        cpu->r[14] = 0x00084300u; imp_fwrite(cpu); /* fwrite */
    }
L_00084300:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x8u);
    }
L_00084304:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4u);
    }
L_00084308:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008430c:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_00084310:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0xcu);
    }
L_00084314:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_00084318:;
    {
        cpu->r[1] = rd32(0x00084320u + + 0xfcu);
    }
L_0008431c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00084320:;
    {
        cpu->r[1] = add_flags(cpu, 0x00084328u, cpu->r[1], 0, 0);
    }
L_00084324:;
    {
        cpu->r[14] = 0x00084328u; imp_fprintf(cpu); /* fprintf */
    }
L_00084328:;
    {
        cpu->r[1] = rd32(0x00084330u + + 0xf0u);
    }
L_0008432c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084330:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x10u);
    }
L_00084334:;
    {
        cpu->r[1] = add_flags(cpu, 0x0008433cu, cpu->r[1], 0, 0);
    }
L_00084338:;
    {
        cpu->r[14] = 0x0008433cu; imp_fprintf(cpu); /* fprintf */
    }
L_0008433c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x10u);
    }
L_00084340:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00084344:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000843f8;
        }
    }
L_00084348:;
    {
        cpu->r[3] = rd32(0x00084350u + + 0xd4u);
    }
L_0008434c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00084350:;
    {
        cpu->r[9] = rd32(0x00084358u + + 0xd0u);
    }
L_00084354:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_00084358:;
    {
        cpu->r[3] = add_flags(cpu, 0x00084360u, cpu->r[3], 0, 0);
    }
L_0008435c:;
    {
        cpu->r[11] = rd32(0x00084364u + + 0xc8u);
    }
L_00084360:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00084364:;
    {
        cpu->r[9] = add_flags(cpu, 0x0008436cu, cpu->r[9], 0, 0);
    }
L_00084368:;
    {
        cpu->r[3] = rd32(0x00084370u + + 0xc0u);
    }
L_0008436c:;
    {
        cpu->r[11] = add_flags(cpu, 0x00084374u, cpu->r[11], 0, 0);
    }
L_00084370:;
    {
        cpu->r[3] = add_flags(cpu, 0x00084378u, cpu->r[3], 0, 0);
    }
L_00084374:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_00084378:;
    {
        cpu->r[3] = rd32(0x00084380u + + 0xb4u);
    }
L_0008437c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00084384u, cpu->r[3], 0, 0);
    }
L_00084380:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00084384:;
    {
        cpu->r[10] = rd32(cpu->r[8] + + 0x18u);
    }
L_00084388:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0008438c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00084390:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084394:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
    }
L_00084398:;
    {
        cpu->r[14] = 0x0008439cu; imp_fprintf(cpu); /* fprintf */
    }
L_0008439c:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[5]);
    }
L_000843a0:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000843a4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_000843a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000843ac:;
    {
        cpu->r[14] = 0x000843b0u; imp_fprintf(cpu); /* fprintf */
    }
L_000843b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000843b4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_000843b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000843bc:;
    {
        cpu->r[14] = 0x000843c0u; imp_fprintf(cpu); /* fprintf */
    }
L_000843c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000843c4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x20u);
    }
L_000843c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000843cc:;
    {
        cpu->r[14] = 0x000843d0u; imp_fprintf(cpu); /* fprintf */
    }
L_000843d0:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000843d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000843d8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000843dc:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000843e0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000843e4:;
    {
        cpu->r[14] = 0x000843e8u; imp_fwrite(cpu); /* fwrite */
    }
L_000843e8:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x10u);
    }
L_000843ec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_000843f0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000843f4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00084384;
        }
    }
L_000843f8:;
    {
        cpu->r[0] = rd32(0x00084400u + + 0x38u);
    }
L_000843fc:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_00084400:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00084404:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00084408:;
    {
        cpu->r[0] = add_flags(cpu, 0x00084410u, cpu->r[0], 0, 0);
    }
L_0008440c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00084410:;
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
L_00084414:;
    {
        imp_fwrite(cpu); /* tail fwrite */ return;
    }
}

/* j2k_dump_cp @ 0008443c (arm) */
void fn_0008443c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008443c:;
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
L_00084440:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00084444:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000007cu, 1, 0);
    }
L_00084448:;
    {
        cpu->r[0] = rd32(0x00084450u + + 0x52cu);
    }
L_0008444c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00084450:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_00084454:;
    {
        cpu->r[0] = add_flags(cpu, 0x0008445cu, cpu->r[0], 0, 0);
    }
L_00084458:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0008445c:;
    {
        cpu->r[2] = 0x00000014u;
    }
L_00084460:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00084464:;
    {
        cpu->r[14] = 0x00084468u; imp_fwrite(cpu); /* fwrite */
    }
L_00084468:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008446c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00084470:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00084474:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x30u);
    }
L_00084478:;
    {
        cpu->r[1] = rd32(0x00084480u + + 0x500u);
    }
L_0008447c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x34u);
    }
L_00084480:;
    {
        cpu->r[1] = add_flags(cpu, 0x00084488u, cpu->r[1], 0, 0);
    }
L_00084484:;
    {
        cpu->r[14] = 0x00084488u; imp_fprintf(cpu); /* fprintf */
    }
L_00084488:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008448c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00084490:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00084494:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x38u);
    }
L_00084498:;
    {
        cpu->r[1] = rd32(0x000844a0u + + 0x4e4u);
    }
L_0008449c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x3cu);
    }
L_000844a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000844a8u, cpu->r[1], 0, 0);
    }
L_000844a4:;
    {
        cpu->r[14] = 0x000844a8u; imp_fprintf(cpu); /* fprintf */
    }
L_000844a8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000844ac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000844b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000844b4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x44u);
    }
L_000844b8:;
    {
        cpu->r[1] = rd32(0x000844c0u + + 0x4c8u);
    }
L_000844bc:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x48u);
    }
L_000844c0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000844c8u, cpu->r[1], 0, 0);
    }
L_000844c4:;
    {
        cpu->r[14] = 0x000844c8u; imp_fprintf(cpu); /* fprintf */
    }
L_000844c8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000844cc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x44u);
    }
L_000844d0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x48u);
    }
L_000844d4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_000844d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000844dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000848a8;
        }
    }
L_000844e0:;
    {
        cpu->r[3] = rd32(0x000844e8u + + 0x4a4u);
    }
L_000844e4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000844e8:;
    {
        cpu->r[12] = rd32(0x000844f0u + + 0x4a0u);
    }
L_000844ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x000844f4u, cpu->r[3], 0, 0);
    }
L_000844f0:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_000844f4:;
    {
        cpu->r[3] = rd32(0x000844fcu + + 0x498u);
    }
L_000844f8:;
    {
        cpu->r[1] = rd32(0x00084500u + + 0x498u);
    }
L_000844fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00084504u, cpu->r[3], 0, 0);
    }
L_00084500:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_00084504:;
    {
        cpu->r[3] = rd32(0x0008450cu + + 0x490u);
    }
L_00084508:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_0008450c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[2]);
    }
L_00084510:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[3]);
    }
L_00084514:;
    {
        cpu->r[3] = rd32(0x0008451cu + + 0x484u);
    }
L_00084518:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[12]);
    }
L_0008451c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00084524u, cpu->r[3], 0, 0);
    }
L_00084520:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[3]);
    }
L_00084524:;
    {
        cpu->r[3] = rd32(0x0008452cu + + 0x478u);
    }
L_00084528:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[1]);
    }
L_0008452c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00084534u, cpu->r[3], 0, 0);
    }
L_00084530:;
    {
        cpu->r[2] = rd32(0x00084538u + + 0x470u);
    }
L_00084534:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_00084538:;
    {
        cpu->r[12] = rd32(0x00084540u + + 0x46cu);
    }
L_0008453c:;
    {
        cpu->r[3] = rd32(0x00084544u + + 0x46cu);
    }
L_00084540:;
    {
        cpu->r[1] = rd32(0x00084548u + + 0x46cu);
    }
L_00084544:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[2]);
    }
L_00084548:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[3]);
    }
L_0008454c:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[12]);
    }
L_00084550:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[1]);
    }
L_00084554:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00084558:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008455c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x68u);
    }
L_00084560:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_00084564:;
    {
        cpu->r[9] = rd32(cpu->r[2] + + 0x6cu);
    }
L_00084568:;
    {
        cpu->r[1] = add_flags(cpu, 0x00084570u, cpu->r[3], 0, 0);
    }
L_0008456c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00084570:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[12], 0, 0);
    }
L_00084574:;
    {
        cpu->r[14] = 0x00084578u; imp_fprintf(cpu); /* fprintf */
    }
L_00084578:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0008457c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00084580:;
    {
        cpu->r[1] = add_flags(cpu, 0x00084588u, cpu->r[2], 0, 0);
    }
L_00084584:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x4u);
    }
L_00084588:;
    {
        cpu->r[14] = 0x0008458cu; imp_fprintf(cpu); /* fprintf */
    }
L_0008458c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x58u);
    }
L_00084590:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x8u);
    }
L_00084594:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00084598:;
    {
        cpu->r[1] = add_flags(cpu, 0x000845a0u, cpu->r[3], 0, 0);
    }
L_0008459c:;
    {
        cpu->r[14] = 0x000845a0u; imp_fprintf(cpu); /* fprintf */
    }
L_000845a0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000845a4:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0xcu);
    }
L_000845a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000845ac:;
    {
        cpu->r[1] = add_flags(cpu, 0x000845b4u, cpu->r[12], 0, 0);
    }
L_000845b0:;
    {
        cpu->r[14] = 0x000845b4u; imp_fprintf(cpu); /* fprintf */
    }
L_000845b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x60u);
    }
L_000845b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000845bc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000845c4u, cpu->r[2], 0, 0);
    }
L_000845c0:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x10u);
    }
L_000845c4:;
    {
        cpu->r[14] = 0x000845c8u; imp_fprintf(cpu); /* fprintf */
    }
L_000845c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x64u);
    }
L_000845cc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000845d0:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_000845d4:;
    {
        cpu->r[0] = add_flags(cpu, 0x000845dcu, cpu->r[3], 0, 0);
    }
L_000845d8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000845dc:;
    {
        cpu->r[14] = 0x000845e0u; imp_fwrite(cpu); /* fwrite */
    }
L_000845e0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0xcu);
    }
L_000845e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000845e8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00084624;
        }
    }
L_000845ec:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x74u);
    }
L_000845f0:;
    {
        cpu->r[5] = cpu->r[9];
    }
L_000845f4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000845f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x14u);
    }
L_000845fc:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_00084600:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00084604:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00084608:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0008460c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00084610:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[2]= (uint32_t)v; cpu->r[3]=(uint32_t)(v>>32);
    }
L_00084614:;
    {
        cpu->r[14] = 0x00084618u; imp_fprintf(cpu); /* fprintf */
    }
L_00084618:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0xcu);
    }
L_0008461c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00084620:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000845f8;
        }
    }
L_00084624:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00084628:;
    {
        cpu->r[0] = 0x0000000au;
    }
L_0008462c:;
    {
        cpu->r[14] = 0x00084630u; imp_fputc(cpu); /* fputc */
    }
L_00084630:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00084634:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x10u);
    }
L_00084638:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008463c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008485c;
        }
    }
L_00084640:;
    {
        cpu->r[12] = rd32(0x00084648u + + 0x370u);
    }
L_00084644:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00084648:;
    {
        cpu->r[1] = rd32(0x00084650u + + 0x36cu);
    }
L_0008464c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00084650:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_00084654:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_00084658:;
    {
        cpu->r[2] = rd32(0x00084660u + + 0x360u);
    }
L_0008465c:;
    {
        cpu->r[12] = rd32(0x00084664u + + 0x360u);
    }
L_00084660:;
    {
        cpu->r[3] = rd32(0x00084668u + + 0x360u);
    }
L_00084664:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_00084668:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_0008466c:;
    {
        cpu->r[1] = rd32(0x00084674u + + 0x358u);
    }
L_00084670:;
    {
        cpu->r[2] = rd32(0x00084678u + + 0x358u);
    }
L_00084674:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00084678:;
    {
        cpu->r[12] = rd32(0x00084680u + + 0x354u);
    }
L_0008467c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00084680:;
    {
        cpu->r[3] = rd32(0x00084688u + + 0x350u);
    }
L_00084684:;
    {
        cpu->r[8] = rd32(0x0008468cu + + 0x350u);
    }
L_00084688:;
    {
        cpu->r[11] = rd32(0x00084690u + + 0x350u);
    }
L_0008468c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00084694u, cpu->r[3], 0, 0);
    }
L_00084690:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_00084694:;
    {
        cpu->r[8] = add_flags(cpu, 0x0008469cu, cpu->r[8], 0, 0);
    }
L_00084698:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0008469c:;
    {
        cpu->r[11] = add_flags(cpu, 0x000846a4u, cpu->r[11], 0, 0);
    }
L_000846a0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_000846a4:;
    {
        cpu->r[1] = rd32(0x000846acu + + 0x338u);
    }
L_000846a8:;
    {
        cpu->r[2] = rd32(0x000846b0u + + 0x338u);
    }
L_000846ac:;
    {
        cpu->r[12] = rd32(0x000846b4u + + 0x338u);
    }
L_000846b0:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[9]);
    }
L_000846b4:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_000846b8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_000846bc:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_000846c0:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
    }
L_000846c4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_000846c8:;
    {
        cpu->r[3] = 0x000015d0u;
    }
L_000846cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_000846d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000846d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000846d8:;
    {
        cpu->r[4] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000846dc:;
    {
        cpu->r[14] = 0x000846e0u; imp_fprintf(cpu); /* fprintf */
    }
L_000846e0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000846e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000846e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000846ec:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000846f0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000846f8u, cpu->r[2], 0, 0);
    }
L_000846f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000846f8:;
    {
        cpu->r[14] = 0x000846fcu; imp_fprintf(cpu); /* fprintf */
    }
L_000846fc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_00084700:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x4u);
    }
L_00084704:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00084708:;
    {
        cpu->r[1] = add_flags(cpu, 0x00084710u, cpu->r[12], 0, 0);
    }
L_0008470c:;
    {
        cpu->r[14] = 0x00084710u; imp_fprintf(cpu); /* fprintf */
    }
L_00084710:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_00084714:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00084718:;
    {
        cpu->r[1] = add_flags(cpu, 0x00084720u, cpu->r[2], 0, 0);
    }
L_0008471c:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x8u);
    }
L_00084720:;
    {
        cpu->r[14] = 0x00084724u; imp_fprintf(cpu); /* fprintf */
    }
L_00084724:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_00084728:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0xcu);
    }
L_0008472c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00084730:;
    {
        cpu->r[1] = add_flags(cpu, 0x00084738u, cpu->r[3], 0, 0);
    }
L_00084734:;
    {
        cpu->r[14] = 0x00084738u; imp_fprintf(cpu); /* fprintf */
    }
L_00084738:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008473c:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x10u);
    }
L_00084740:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00084744:;
    {
        cpu->r[1] = add_flags(cpu, 0x0008474cu, cpu->r[12], 0, 0);
    }
L_00084748:;
    {
        cpu->r[14] = 0x0008474cu; imp_fprintf(cpu); /* fprintf */
    }
L_0008474c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00084750:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00084754:;
    {
        cpu->r[1] = add_flags(cpu, 0x0008475cu, cpu->r[2], 0, 0);
    }
L_00084758:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x14u);
    }
L_0008475c:;
    {
        cpu->r[14] = 0x00084760u; imp_fprintf(cpu); /* fprintf */
    }
L_00084760:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00084764:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x18u);
    }
L_00084768:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008476c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00084774u, cpu->r[3], 0, 0);
    }
L_00084770:;
    {
        cpu->r[14] = 0x00084774u; imp_fprintf(cpu); /* fprintf */
    }
L_00084774:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00084778:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x324u);
    }
L_0008477c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00084780:;
    {
        cpu->r[1] = add_flags(cpu, 0x00084788u, cpu->r[12], 0, 0);
    }
L_00084784:;
    {
        cpu->r[14] = 0x00084788u; imp_fprintf(cpu); /* fprintf */
    }
L_00084788:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008478c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00084790:;
    {
        cpu->r[1] = add_flags(cpu, 0x00084798u, cpu->r[2], 0, 0);
    }
L_00084794:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x328u);
    }
L_00084798:;
    {
        cpu->r[14] = 0x0008479cu; imp_fprintf(cpu); /* fprintf */
    }
L_0008479c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_000847a0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000847a4:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_000847a8:;
    {
        cpu->r[0] = add_flags(cpu, 0x000847b0u, cpu->r[3], 0, 0);
    }
L_000847ac:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000847b0:;
    {
        cpu->r[14] = 0x000847b4u; imp_fwrite(cpu); /* fwrite */
    }
L_000847b4:;
    {
        cpu->r[7] = rd32(cpu->r[10] + + 0x18u);
    }
L_000847b8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_000847bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000847d4;
        }
    }
L_000847c0:;
    {
        cpu->r[7] = rd32(cpu->r[10] + + 0x4u);
    }
L_000847c4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_000847c8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 0);
    }
L_000847cc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000847d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00084800;
        }
    }
L_000847d4:;
    {
        cpu->r[4] = cpu->r[10];
    }
L_000847d8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000847dc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_000847e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000847e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_000847e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000847ec:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000847f0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_000847f4:;
    {
        cpu->r[14] = 0x000847f8u; imp_fprintf(cpu); /* fprintf */
    }
L_000847f8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_000847fc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000847dc;
        }
    }
L_00084800:;
    {
        cpu->r[0] = 0x0000000au;
    }
L_00084804:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00084808:;
    {
        cpu->r[14] = 0x0008480cu; imp_fputc(cpu); /* fputc */
    }
L_0008480c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00084810:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00084814:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000848c8;
        }
    }
L_00084818:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008481c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00084820:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_00084824:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00084828:;
    {
        cpu->r[0] = add_flags(cpu, 0x00084830u, cpu->r[12], 0, 0);
    }
L_0008482c:;
    {
        cpu->r[14] = 0x00084830u; imp_fwrite(cpu); /* fwrite */
    }
L_00084830:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00084834:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00084838:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008483c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x10u);
    }
L_00084840:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00084844:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000430u, 0, 0);
    }
L_00084848:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0008484c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00084850:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00084854:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00084858:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000846c4;
        }
    }
L_0008485c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x70u);
    }
L_00084860:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084864:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00084868:;
    {
        cpu->r[0] = add_flags(cpu, 0x00084870u, cpu->r[1], 0, 0);
    }
L_0008486c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00084870:;
    {
        cpu->r[14] = 0x00084874u; imp_fwrite(cpu); /* fwrite */
    }
L_00084874:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00084878:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008487c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_00084880:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x48u);
    }
L_00084884:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00084888:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x44u);
    }
L_0008488c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000015c0u, 0, 0);
    }
L_00084890:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000014u, 0, 0);
    }
L_00084894:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[12]);
    }
L_00084898:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[1]);
    }
L_0008489c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_000848a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_000848a4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00084554;
        }
    }
L_000848a8:;
    {
        cpu->r[0] = rd32(0x000848b0u + + 0x140u);
    }
L_000848ac:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000848b0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000848b4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000848b8:;
    {
        cpu->r[0] = add_flags(cpu, 0x000848c0u, cpu->r[0], 0, 0);
    }
L_000848bc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_000848c0:;
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
L_000848c4:;
    {
        imp_fwrite(cpu); /* tail fwrite */ return;
    }
L_000848c8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000848cc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_000848d0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000848d4:;
    {
        cpu->r[2] = 0x0000000bu;
    }
L_000848d8:;
    {
        cpu->r[14] = 0x000848dcu; imp_fwrite(cpu); /* fwrite */
    }
L_000848dc:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x4u);
    }
L_000848e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000848e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00084914;
        }
    }
L_000848e8:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_000848ec:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000848f0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x32cu);
    }
L_000848f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000848f8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000848fc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00084900:;
    {
        cpu->r[14] = 0x00084904u; imp_fprintf(cpu); /* fprintf */
    }
L_00084904:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x4u);
    }
L_00084908:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0008490c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00084910:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000848f0;
        }
    }
L_00084914:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00084918:;
    {
        cpu->r[0] = 0x0000000au;
    }
L_0008491c:;
    {
        cpu->r[14] = 0x00084920u; imp_fputc(cpu); /* fputc */
    }
L_00084920:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00084924:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x54u);
    }
L_00084928:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008492c:;
    {
        cpu->r[2] = 0x0000000bu;
    }
L_00084930:;
    {
        cpu->r[14] = 0x00084934u; imp_fwrite(cpu); /* fwrite */
    }
L_00084934:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x4u);
    }
L_00084938:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008493c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008496c;
        }
    }
L_00084940:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_00084944:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00084948:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x3b0u);
    }
L_0008494c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00084950:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00084954:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00084958:;
    {
        cpu->r[14] = 0x0008495cu; imp_fprintf(cpu); /* fprintf */
    }
L_0008495c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x4u);
    }
L_00084960:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00084964:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00084968:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00084948;
        }
    }
L_0008496c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00084970:;
    {
        cpu->r[0] = 0x0000000au;
    }
L_00084974:;
    {
        cpu->r[14] = 0x00084978u; imp_fputc(cpu); /* fputc */
    }
L_00084978:;
    {
        goto L_00084818;
    }
}

/* opj_clock @ 000849f4 (arm) */
void fn_000849f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000849f4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000849f8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000849fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* jp2_write_jp2h @ 00084a00 (arm) */
void fn_00084a00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00084a00:;
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
L_00084a04:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00084a08:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00084a0c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00084a10:;
    {
        cpu->r[14] = 0x00084a14u; fn_0007ddac(cpu);
    }
L_00084a14:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00084a18:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00084a1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084a20:;
    {
        cpu->r[14] = 0x00084a24u; fn_0007dde4(cpu);
    }
L_00084a24:;
    {
        cpu->r[1] = 0x00003268u;
    }
L_00084a28:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084a2c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x6a70u << 16);
    }
L_00084a30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084a34:;
    {
        cpu->r[14] = 0x00084a38u; fn_0007ded0(cpu);
    }
L_00084a38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084a3c:;
    {
        cpu->r[14] = 0x00084a40u; fn_0007ddac(cpu);
    }
L_00084a40:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00084a44:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00084a48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084a4c:;
    {
        cpu->r[14] = 0x00084a50u; fn_0007dde4(cpu);
    }
L_00084a50:;
    {
        cpu->r[1] = 0x00006472u;
    }
L_00084a54:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084a58:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x6968u << 16);
    }
L_00084a5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084a60:;
    {
        cpu->r[14] = 0x00084a64u; fn_0007ded0(cpu);
    }
L_00084a64:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xcu);
    }
L_00084a68:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084a6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084a70:;
    {
        cpu->r[14] = 0x00084a74u; fn_0007ded0(cpu);
    }
L_00084a74:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_00084a78:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084a7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084a80:;
    {
        cpu->r[14] = 0x00084a84u; fn_0007ded0(cpu);
    }
L_00084a84:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x10u);
    }
L_00084a88:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00084a8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084a90:;
    {
        cpu->r[14] = 0x00084a94u; fn_0007ded0(cpu);
    }
L_00084a94:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x14u);
    }
L_00084a98:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00084a9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084aa0:;
    {
        cpu->r[14] = 0x00084aa4u; fn_0007ded0(cpu);
    }
L_00084aa4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x18u);
    }
L_00084aa8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00084aac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084ab0:;
    {
        cpu->r[14] = 0x00084ab4u; fn_0007ded0(cpu);
    }
L_00084ab4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x1cu);
    }
L_00084ab8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00084abc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084ac0:;
    {
        cpu->r[14] = 0x00084ac4u; fn_0007ded0(cpu);
    }
L_00084ac4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00084ac8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x20u);
    }
L_00084acc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084ad0:;
    {
        cpu->r[14] = 0x00084ad4u; fn_0007ded0(cpu);
    }
L_00084ad4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084ad8:;
    {
        cpu->r[14] = 0x00084adcu; fn_0007ddac(cpu);
    }
L_00084adc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00084ae0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_00084ae4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084ae8:;
    {
        cpu->r[14] = 0x00084aecu; fn_0007ddbc(cpu);
    }
L_00084aec:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00084af0:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084af4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084af8:;
    {
        cpu->r[14] = 0x00084afcu; fn_0007ded0(cpu);
    }
L_00084afc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084b00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_00084b04:;
    {
        cpu->r[14] = 0x00084b08u; fn_0007ddbc(cpu);
    }
L_00084b08:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_00084b0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_00084b10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00084c00;
        }
    }
L_00084b14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084b18:;
    {
        cpu->r[14] = 0x00084b1cu; fn_0007ddac(cpu);
    }
L_00084b1c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00084b20:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00084b24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084b28:;
    {
        cpu->r[14] = 0x00084b2cu; fn_0007dde4(cpu);
    }
L_00084b2c:;
    {
        cpu->r[1] = 0x00006c72u;
    }
L_00084b30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084b34:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084b38:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x636fu << 16);
    }
L_00084b3c:;
    {
        cpu->r[14] = 0x00084b40u; fn_0007ded0(cpu);
    }
L_00084b40:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x24u);
    }
L_00084b44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084b48:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00084b4c:;
    {
        cpu->r[14] = 0x00084b50u; fn_0007ded0(cpu);
    }
L_00084b50:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x30u);
    }
L_00084b54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084b58:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00084b5c:;
    {
        cpu->r[14] = 0x00084b60u; fn_0007ded0(cpu);
    }
L_00084b60:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x28u);
    }
L_00084b64:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00084b68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084b6c:;
    {
        cpu->r[14] = 0x00084b70u; fn_0007ded0(cpu);
    }
L_00084b70:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_00084b74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00084b78:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000004u;
        }
    }
L_00084b7c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00084b80:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[5] + + 0x2cu);
        }
    }
L_00084b84:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00084b88:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[4];
        }
    }
L_00084b8c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[4];
        }
    }
L_00084b90:;
    {
        cpu->r[14] = 0x00084b94u; fn_0007ded0(cpu);
    }
L_00084b94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084b98:;
    {
        cpu->r[14] = 0x00084b9cu; fn_0007ddac(cpu);
    }
L_00084b9c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00084ba0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_00084ba4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084ba8:;
    {
        cpu->r[14] = 0x00084bacu; fn_0007ddbc(cpu);
    }
L_00084bac:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084bb0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00084bb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084bb8:;
    {
        cpu->r[14] = 0x00084bbcu; fn_0007ded0(cpu);
    }
L_00084bbc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_00084bc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084bc4:;
    {
        cpu->r[14] = 0x00084bc8u; fn_0007ddbc(cpu);
    }
L_00084bc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084bcc:;
    {
        cpu->r[14] = 0x00084bd0u; fn_0007ddac(cpu);
    }
L_00084bd0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00084bd4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 0);
    }
L_00084bd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084bdc:;
    {
        cpu->r[14] = 0x00084be0u; fn_0007ddbc(cpu);
    }
L_00084be0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00084be4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084be8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084bec:;
    {
        cpu->r[14] = 0x00084bf0u; fn_0007ded0(cpu);
    }
L_00084bf0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084bf4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[8], 0, 0);
    }
L_00084bf8:;
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
L_00084bfc:;
    {
        return fn_0007ddbc(cpu);
    }
L_00084c00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084c04:;
    {
        cpu->r[14] = 0x00084c08u; fn_0007ddac(cpu);
    }
L_00084c08:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00084c0c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00084c10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084c14:;
    {
        cpu->r[14] = 0x00084c18u; fn_0007dde4(cpu);
    }
L_00084c18:;
    {
        cpu->r[1] = 0x00006363u;
    }
L_00084c1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084c20:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084c24:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x6270u << 16);
    }
L_00084c28:;
    {
        cpu->r[14] = 0x00084c2cu; fn_0007ded0(cpu);
    }
L_00084c2c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00084c30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00084c34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00084c6c;
        }
    }
L_00084c38:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00084c3c:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_00084c40:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x44u);
    }
L_00084c44:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00084c48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084c4c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[2], 0, 0);
    }
L_00084c50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_00084c54:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_00084c58:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_00084c5c:;
    {
        cpu->r[14] = 0x00084c60u; fn_0007ded0(cpu);
    }
L_00084c60:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00084c64:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00084c68:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00084c40;
        }
    }
L_00084c6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084c70:;
    {
        cpu->r[14] = 0x00084c74u; fn_0007ddac(cpu);
    }
L_00084c74:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00084c78:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_00084c7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084c80:;
    {
        cpu->r[14] = 0x00084c84u; fn_0007ddbc(cpu);
    }
L_00084c84:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00084c88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084c8c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084c90:;
    {
        cpu->r[14] = 0x00084c94u; fn_0007ded0(cpu);
    }
L_00084c94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084c98:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[10], 0, 0);
    }
L_00084c9c:;
    {
        cpu->r[14] = 0x00084ca0u; fn_0007ddbc(cpu);
    }
L_00084ca0:;
    {
        goto L_00084b14;
    }
}

/* jp2_encode @ 00084ca4 (arm) */
void fn_00084ca4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00084ca4:;
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
L_00084ca8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00084cac:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00084cb0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00084cb4:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_00084cb8:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_00084cbc:;
    {
        cpu->r[14] = 0x00084cc0u; fn_0007ddac(cpu);
    }
L_00084cc0:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00084cc4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00084cc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084ccc:;
    {
        cpu->r[14] = 0x00084cd0u; fn_0007dde4(cpu);
    }
L_00084cd0:;
    {
        cpu->r[1] = 0x00002020u;
    }
L_00084cd4:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084cd8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x6a50u << 16);
    }
L_00084cdc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084ce0:;
    {
        cpu->r[14] = 0x00084ce4u; fn_0007ded0(cpu);
    }
L_00084ce4:;
    {
        cpu->r[1] = 0x0000870au;
    }
L_00084ce8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084cec:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0d0au << 16);
    }
L_00084cf0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084cf4:;
    {
        cpu->r[14] = 0x00084cf8u; fn_0007ded0(cpu);
    }
L_00084cf8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084cfc:;
    {
        cpu->r[14] = 0x00084d00u; fn_0007ddac(cpu);
    }
L_00084d00:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00084d04:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_00084d08:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084d0c:;
    {
        cpu->r[14] = 0x00084d10u; fn_0007ddbc(cpu);
    }
L_00084d10:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084d14:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00084d18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084d1c:;
    {
        cpu->r[14] = 0x00084d20u; fn_0007ded0(cpu);
    }
L_00084d20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_00084d24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084d28:;
    {
        cpu->r[14] = 0x00084d2cu; fn_0007ddbc(cpu);
    }
L_00084d2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084d30:;
    {
        cpu->r[14] = 0x00084d34u; fn_0007ddac(cpu);
    }
L_00084d34:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00084d38:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00084d3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084d40:;
    {
        cpu->r[14] = 0x00084d44u; fn_0007dde4(cpu);
    }
L_00084d44:;
    {
        cpu->r[1] = 0x00007970u;
    }
L_00084d48:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084d4c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x6674u << 16);
    }
L_00084d50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084d54:;
    {
        cpu->r[14] = 0x00084d58u; fn_0007ded0(cpu);
    }
L_00084d58:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x34u);
    }
L_00084d5c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084d60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084d64:;
    {
        cpu->r[14] = 0x00084d68u; fn_0007ded0(cpu);
    }
L_00084d68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084d6c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x38u);
    }
L_00084d70:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084d74:;
    {
        cpu->r[14] = 0x00084d78u; fn_0007ded0(cpu);
    }
L_00084d78:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3cu);
    }
L_00084d7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00084d80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00084dac;
        }
    }
L_00084d84:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00084d88:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_00084d8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084d90:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084d94:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_00084d98:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00084d9c:;
    {
        cpu->r[14] = 0x00084da0u; fn_0007ded0(cpu);
    }
L_00084da0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3cu);
    }
L_00084da4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00084da8:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00084d88;
        }
    }
L_00084dac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084db0:;
    {
        cpu->r[14] = 0x00084db4u; fn_0007ddac(cpu);
    }
L_00084db4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00084db8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_00084dbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084dc0:;
    {
        cpu->r[14] = 0x00084dc4u; fn_0007ddbc(cpu);
    }
L_00084dc4:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084dc8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00084dcc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084dd0:;
    {
        cpu->r[14] = 0x00084dd4u; fn_0007ded0(cpu);
    }
L_00084dd4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_00084dd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084ddc:;
    {
        cpu->r[14] = 0x00084de0u; fn_0007ddbc(cpu);
    }
L_00084de0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00084de4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00084de8:;
    {
        cpu->r[14] = 0x00084decu; fn_00084a00(cpu);
    }
L_00084dec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084df0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x4u);
    }
L_00084df4:;
    {
        cpu->r[14] = 0x00084df8u; fn_0007ddac(cpu);
    }
L_00084df8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00084dfc:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00084e00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084e04:;
    {
        cpu->r[14] = 0x00084e08u; fn_0007dde4(cpu);
    }
L_00084e08:;
    {
        cpu->r[1] = 0x00003263u;
    }
L_00084e0c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084e10:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x6a70u << 16);
    }
L_00084e14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084e18:;
    {
        cpu->r[14] = 0x00084e1cu; fn_0007ded0(cpu);
    }
L_00084e1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084e20:;
    {
        cpu->r[14] = 0x00084e24u; fn_0007ddac(cpu);
    }
L_00084e24:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00084e28:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00084e2c:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_00084e30:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00084e34:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00084e38:;
    {
        cpu->r[14] = 0x00084e3cu; fn_000834e0(cpu);
    }
L_00084e3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00084e40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00084e94;
        }
    }
L_00084e44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084e48:;
    {
        cpu->r[14] = 0x00084e4cu; fn_0007ddac(cpu);
    }
L_00084e4c:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[7]);
    }
L_00084e50:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00084e54:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_00084e58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084e5c:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[7]);
    }
L_00084e60:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_00084e64:;
    {
        cpu->r[14] = 0x00084e68u; fn_0007ddbc(cpu);
    }
L_00084e68:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00084e6c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00084e70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084e74:;
    {
        cpu->r[14] = 0x00084e78u; fn_0007ded0(cpu);
    }
L_00084e78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00084e7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_00084e80:;
    {
        cpu->r[14] = 0x00084e84u; fn_0007ddbc(cpu);
    }
L_00084e84:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00084e88:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00084e8c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00084e90u)) return;
        }
    }
L_00084e90:;
    {
        goto L_00084ea8;
    }
L_00084e94:;
    {
        cpu->r[2] = rd32(0x00084e9cu + + 0x28u);
    }
L_00084e98:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00084e9c:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00084ea0:;
    {
        cpu->r[2] = add_flags(cpu, 0x00084ea8u, cpu->r[2], 0, 0);
    }
L_00084ea4:;
    {
        cpu->r[14] = 0x00084ea8u; fn_00080304(cpu);
    }
L_00084ea8:;
    {
        cpu->r[2] = rd32(0x00084eb0u + + 0x18u);
    }
L_00084eac:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00084eb0:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00084eb4:;
    {
        cpu->r[2] = add_flags(cpu, 0x00084ebcu, cpu->r[2], 0, 0);
    }
L_00084eb8:;
    {
        cpu->r[14] = 0x00084ebcu; fn_00080304(cpu);
    }
L_00084ebc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00084ec0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00084ec4u)) return;
    }
}

/* jp2_setup_encoder @ 00084ecc (arm) */
void fn_00084ecc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00084ecc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00084ed0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00084ed4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
        }
    }
L_00084ed8:;
    {
        cpu->r[6] = rd32(0x00084ee0u + + 0x1d4u);
    }
L_00084edc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00084ee0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_00084ee4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x00000001u;
        }
    }
L_00084ee8:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00084eec:;
    {
        cpu->r[6] = add_flags(cpu, 0x00084ef4u, cpu->r[6], 0, 0);
    }
L_00084ef0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00084ef4u)) return;
        }
    }
L_00084ef4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00084ef8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00084efcu)) return;
        }
    }
L_00084efc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x10u);
    }
L_00084f00:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00084f04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00004000u, 1, 1);
    }
L_00084f08:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00085070;
        }
    }
L_00084f0c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_00084f10:;
    {
        cpu->r[7] = 0x00003220u;
    }
L_00084f14:;
    {
        cpu->r[14] = 0x00084f18u; fn_000826f0(cpu);
    }
L_00084f18:;
    {
        cpu->r[3] = rd32(0x00084f20u + + 0x198u);
    }
L_00084f1c:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[8]);
    }
L_00084f20:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x6a70u << 16);
    }
L_00084f24:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_00084f28:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[7]);
    }
L_00084f2c:;
    {
        cpu->r[6] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00084f30:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00084f34:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[8]);
    }
L_00084f38:;
    {
        cpu->r[14] = 0x00084f40u;
    }
L_00084f3c:;
    {
        uint32_t t = rd32(cpu->r[6]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00084f40u)) return;
    }
L_00084f40:;
    {
        wr32(cpu->r[0], cpu->r[7]);
    }
L_00084f44:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00084f48:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[0]);
    }
L_00084f4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00084f50:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_00084f54:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00084f58:;
    {
        cpu->r[14] = 0x00084f60u;
    }
L_00084f5c:;
    {
        uint32_t t = rd32(cpu->r[6]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00084f60u)) return;
    }
L_00084f60:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_00084f64:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00084f68:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x18u);
    }
L_00084f6c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00084f70:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00084f74:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_00084f78:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00084f7c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00084f80:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00084f84:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x18u);
    }
L_00084f88:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x20u);
    }
L_00084f8c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00084f90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 7u, &shc), 0, 0);
    }
L_00084f94:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_00084f98:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00084f9c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_00084fa0:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_00084fa4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00084fd4;
        }
    }
L_00084fa8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00084fac:;
    {
        cpu->r[6] = 0x000000ffu;
    }
L_00084fb0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x48u);
    }
L_00084fb4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00084fb8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_00084fbc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_00084fc0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00084fc4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x14u, cpu->r[6]);
        }
    }
L_00084fc8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
        }
    }
L_00084fcc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_00084fd0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00084fb0;
        }
    }
L_00084fd4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00084fd8:;
    {
        cpu->r[2] = 0x00000007u;
    }
L_00084fdc:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_00084fe0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_00084fe4:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_00084fe8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x10u);
    }
L_00084fec:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00084ff0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00085024;
        }
    }
L_00084ff4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_00084ff8:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x18u);
    }
L_00084ffc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00085000:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x20u);
    }
L_00085004:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_00085008:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0008500c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 7u, &shc), 0, 0);
    }
L_00085010:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[0]);
    }
L_00085014:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x10u);
    }
L_00085018:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_0008501c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00085020:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00084ff8;
        }
    }
L_00085024:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00085028:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
        }
    }
L_0008502c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00085088;
        }
    }
L_00085030:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_00085034:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_00085038:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085088;
        }
    }
L_0008503c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_00085040:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00085044:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[2]);
    }
L_00085048:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0008504c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000850a8;
        }
    }
L_00085050:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00085054:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000011u;
        }
    }
L_00085058:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
        }
    }
L_0008505c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085098;
        }
    }
L_00085060:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00085064:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000012u;
        }
    }
L_00085068:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
        }
    }
L_0008506c:;
    {
        goto L_00085098;
    }
L_00085070:;
    {
        cpu->r[2] = rd32(0x00085078u + + 0x44u);
    }
L_00085074:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00085078:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0008507c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00085084u, cpu->r[2], 0, 0);
    }
L_00085080:;
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
L_00085084:;
    {
        return fn_00080304(cpu);
    }
L_00085088:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_0008508c:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_00085090:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00085094:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_00085098:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0008509c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_000850a0:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_000850a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000850a8u)) return;
    }
L_000850a8:;
    {
        cpu->r[3] = 0x00000010u;
    }
L_000850ac:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_000850b0:;
    {
        goto L_00085098;
    }
}

/* jp2_destroy_compress @ 000850c0 (arm) */
void fn_000850c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000850c0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000850c4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000850c8:;
    {
        cpu->r[4] = rd32(0x000850d0u + + 0x5cu);
    }
L_000850cc:;
    {
        cpu->r[4] = add_flags(cpu, 0x000850d4u, cpu->r[4], 0, 0);
    }
L_000850d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000850d4u)) return;
        }
    }
L_000850d4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_000850d8:;
    {
        cpu->r[14] = 0x000850dcu; fn_00080aa0(cpu);
    }
L_000850dc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x44u);
    }
L_000850e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000850e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085124;
        }
    }
L_000850e8:;
    {
        cpu->r[6] = rd32(0x000850f0u + + 0x40u);
    }
L_000850ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000850f0:;
    {
        cpu->r[14] = 0x000850f8u;
    }
L_000850f4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000850f8u)) return;
    }
L_000850f8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x40u);
    }
L_000850fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00085100:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085110;
        }
    }
L_00085104:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00085108:;
    {
        cpu->r[14] = 0x00085110u;
    }
L_0008510c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00085110u)) return;
    }
L_00085110:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00085114:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00085118:;
    {
        cpu->r[14] = 0x00085120u;
    }
L_0008511c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00085120u)) return;
    }
L_00085120:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00085124u)) return;
    }
L_00085124:;
    {
        cpu->r[6] = rd32(0x0008512cu + + 0x4u);
    }
L_00085128:;
    {
        goto L_000850f8;
    }
}

/* jp2_create_compress @ 00085134 (arm) */
void fn_00085134(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00085134:;
    {
        cpu->r[3] = rd32(0x0008513cu + + 0x58u);
    }
L_00085138:;
    {
        cpu->r[2] = rd32(0x00085140u + + 0x58u);
    }
L_0008513c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00085144u, cpu->r[3], 0, 0);
    }
L_00085140:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00085144:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00085148:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0008514c:;
    {
        cpu->r[0] = 0x00000050u;
    }
L_00085150:;
    {
        cpu->r[14] = 0x00085158u;
    }
L_00085154:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00085158u)) return;
    }
L_00085158:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008515c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008517c;
        }
    }
L_00085160:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_00085164:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00085168:;
    {
        cpu->r[14] = 0x0008516cu; fn_00080a68(cpu);
    }
L_0008516c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00085170:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00085174:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00085178:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085184;
        }
    }
L_0008517c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085180:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00085184u)) return;
    }
L_00085184:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085188:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_0008518c:;
    {
        cpu->r[14] = 0x00085190u; fn_000850c0(cpu);
    }
L_00085190:;
    {
        goto L_0008517c;
    }
}

/* sub_0008519c @ 0008519c (arm) */
void fn_0008519c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008519c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000851a0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000851a4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000851a8:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000851ac:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000851b0:;
    {
        cpu->r[14] = 0x000851b4u; fn_0007ddac(cpu);
    }
L_000851b4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000851b8:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[0]);
    }
L_000851bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000851c0:;
    {
        cpu->r[14] = 0x000851c4u; fn_0007de4c(cpu);
    }
L_000851c4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000851c8:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_000851cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000851d0:;
    {
        cpu->r[14] = 0x000851d4u; fn_0007de4c(cpu);
    }
L_000851d4:;
    {
        cpu->r[7] = rd32(cpu->r[6]);
    }
L_000851d8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_000851dc:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[0]);
    }
L_000851e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085214;
        }
    }
L_000851e4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000851e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000851f8;
        }
    }
L_000851ec:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_000851f0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000851f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000851f8u)) return;
    }
L_000851f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000851fc:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_00085200:;
    {
        cpu->r[14] = 0x00085204u; fn_0007ddcc(cpu);
    }
L_00085204:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00085208:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_0008520c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00085210:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00085214u)) return;
    }
L_00085214:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085218:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0008521c:;
    {
        cpu->r[14] = 0x00085220u; fn_0007de4c(cpu);
    }
L_00085220:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00085224:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00085254;
        }
    }
L_00085228:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008522c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00085230:;
    {
        cpu->r[14] = 0x00085234u; fn_0007de4c(cpu);
    }
L_00085234:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00085238:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_0008523c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000851ec;
        }
    }
L_00085240:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085244:;
    {
        cpu->r[14] = 0x00085248u; fn_0007ddcc(cpu);
    }
L_00085248:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0008524c:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_00085250:;
    {
        goto L_000851f0;
    }
L_00085254:;
    {
        cpu->r[2] = rd32(0x0008525cu + + 0x14u);
    }
L_00085258:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0008525c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00085260:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00085264:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008526cu, cpu->r[2], 0, 0);
    }
L_00085268:;
    {
        cpu->r[14] = 0x0008526cu; fn_00080304(cpu);
    }
L_0008526c:;
    {
        goto L_000851f0;
    }
}

/* jp2_read_jp2h @ 00085274 (arm) */
void fn_00085274(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00085274:;
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
L_00085278:;
    {
        cpu->r[6] = rd32(cpu->r[0]);
    }
L_0008527c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00085280:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00085284:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00085288:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008528c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00085290:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00085294:;
    {
        cpu->r[10] = 0x00003268u;
    }
L_00085298:;
    {
        cpu->r[14] = 0x0008529cu; fn_0008519c(cpu);
    }
L_0008529c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000852a0:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x6a70u << 16);
    }
L_000852a4:;
    {
        cpu->r[9] = rd32(0x000852acu + + 0x3dcu);
    }
L_000852a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_000852ac:;
    {
        cpu->r[9] = add_flags(cpu, 0x000852b4u, cpu->r[9], 0, 0);
    }
L_000852b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000854dc;
        }
    }
L_000852b4:;
    {
        cpu->r[8] = rd32(cpu->r[5]);
    }
L_000852b8:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_000852bc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000852c0:;
    {
        cpu->r[7] = cpu->r[13];
    }
L_000852c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000852c8:;
    {
        cpu->r[14] = 0x000852ccu; fn_0008519c(cpu);
    }
L_000852cc:;
    {
        cpu->r[3] = 0x00006472u;
    }
L_000852d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000852d4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6968u << 16);
    }
L_000852d8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000852dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085300;
        }
    }
L_000852e0:;
    {
        cpu->r[2] = rd32(0x000852e8u + + 0x3a4u);
    }
L_000852e4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000852e8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000852ec:;
    {
        cpu->r[2] = add_flags(cpu, 0x000852f4u, cpu->r[2], 0, 0);
    }
L_000852f0:;
    {
        cpu->r[14] = 0x000852f4u; fn_00080304(cpu);
    }
L_000852f4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000852f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000852fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00085300u)) return;
    }
L_00085300:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00085304:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085308:;
    {
        cpu->r[14] = 0x0008530cu; fn_0007de4c(cpu);
    }
L_0008530c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00085310:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[0]);
    }
L_00085314:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085318:;
    {
        cpu->r[14] = 0x0008531cu; fn_0007de4c(cpu);
    }
L_0008531c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00085320:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[0]);
    }
L_00085324:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085328:;
    {
        cpu->r[14] = 0x0008532cu; fn_0007de4c(cpu);
    }
L_0008532c:;
    {
        cpu->r[3] = rd32(0x00085334u + + 0x35cu);
    }
L_00085330:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_00085334:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00085338:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[0]);
    }
L_0008533c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00085340:;
    {
        cpu->r[14] = 0x00085348u;
    }
L_00085344:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00085348u)) return;
    }
L_00085348:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008534c:;
    {
        wr32(cpu->r[5] + + 0x44u, cpu->r[0]);
    }
L_00085350:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085354:;
    {
        cpu->r[14] = 0x00085358u; fn_0007de4c(cpu);
    }
L_00085358:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008535c:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[0]);
    }
L_00085360:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085364:;
    {
        cpu->r[14] = 0x00085368u; fn_0007de4c(cpu);
    }
L_00085368:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008536c:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[0]);
    }
L_00085370:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085374:;
    {
        cpu->r[14] = 0x00085378u; fn_0007de4c(cpu);
    }
L_00085378:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008537c:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[0]);
    }
L_00085380:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085384:;
    {
        cpu->r[14] = 0x00085388u; fn_0007de4c(cpu);
    }
L_00085388:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[0]);
    }
L_0008538c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085390:;
    {
        cpu->r[14] = 0x00085394u; fn_0007ddac(cpu);
    }
L_00085394:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00085398:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0008539c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_000853a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000853a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000853c4;
        }
    }
L_000853a8:;
    {
        cpu->r[2] = rd32(0x000853b0u + + 0x2e4u);
    }
L_000853ac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000853b0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000853b4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000853bcu, cpu->r[2], 0, 0);
    }
L_000853b8:;
    {
        cpu->r[14] = 0x000853bcu; fn_00080304(cpu);
    }
L_000853bc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000853c0:;
    {
        goto L_000852f8;
    }
L_000853c4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_000853c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_000853cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085580;
        }
    }
L_000853d0:;
    {
        cpu->r[8] = rd32(cpu->r[5]);
    }
L_000853d4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000853d8:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_000853dc:;
    {
        cpu->r[10] = 0x00006c72u;
    }
L_000853e0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000853e4:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x636fu << 16);
    }
L_000853e8:;
    {
        cpu->r[14] = 0x000853ecu; fn_0008519c(cpu);
    }
L_000853ec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000853f0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_000853f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000854ac;
        }
    }
L_000853f8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000853fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085400:;
    {
        cpu->r[14] = 0x00085404u; fn_0007de4c(cpu);
    }
L_00085404:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00085408:;
    {
        wr32(cpu->r[5] + + 0x24u, cpu->r[0]);
    }
L_0008540c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085410:;
    {
        cpu->r[14] = 0x00085414u; fn_0007de4c(cpu);
    }
L_00085414:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00085418:;
    {
        wr32(cpu->r[5] + + 0x30u, cpu->r[0]);
    }
L_0008541c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085420:;
    {
        cpu->r[14] = 0x00085424u; fn_0007de4c(cpu);
    }
L_00085424:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_00085428:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0008542c:;
    {
        wr32(cpu->r[5] + + 0x28u, cpu->r[0]);
    }
L_00085430:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085620;
        }
    }
L_00085434:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00085438:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008543c:;
    {
        cpu->r[5] = rd32(cpu->r[13]);
    }
L_00085440:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_00085444:;
    {
        cpu->r[14] = 0x00085448u; fn_0007ddac(cpu);
    }
L_00085448:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_0008544c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00085450:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00085650;
        }
    }
L_00085454:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00085458:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008545c:;
    {
        cpu->r[5] = rd32(cpu->r[13]);
    }
L_00085460:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_00085464:;
    {
        cpu->r[14] = 0x00085468u; fn_0007ddac(cpu);
    }
L_00085468:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_0008546c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085470:;
    {
        cpu->r[14] = 0x00085474u; fn_0007dde4(cpu);
    }
L_00085474:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085478:;
    {
        cpu->r[14] = 0x0008547cu; fn_0007ddac(cpu);
    }
L_0008547c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00085480:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_00085484:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00085488:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0008548c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085538;
        }
    }
L_00085490:;
    {
        cpu->r[2] = rd32(0x00085498u + + 0x200u);
    }
L_00085494:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00085498:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008549c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000854a4u, cpu->r[2], 0, 0);
    }
L_000854a0:;
    {
        cpu->r[14] = 0x000854a4u; fn_00080304(cpu);
    }
L_000854a4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000854a8:;
    {
        goto L_000852f8;
    }
L_000854ac:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_000854b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000854b4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 0);
    }
L_000854b8:;
    {
        cpu->r[14] = 0x000854bcu; fn_0007dde4(cpu);
    }
L_000854bc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000854c0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000854c4:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_000854c8:;
    {
        cpu->r[14] = 0x000854ccu; fn_0008519c(cpu);
    }
L_000854cc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000854d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_000854d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000854ac;
        }
    }
L_000854d8:;
    {
        goto L_000853f8;
    }
L_000854dc:;
    {
        cpu->r[8] = 0x00003263u;
    }
L_000854e0:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x6a70u << 16);
    }
L_000854e4:;
    {
        goto L_00085510;
    }
L_000854e8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000854ec:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 0);
    }
L_000854f0:;
    {
        cpu->r[14] = 0x000854f4u; fn_0007dde4(cpu);
    }
L_000854f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000854f8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000854fc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00085500:;
    {
        cpu->r[14] = 0x00085504u; fn_0008519c(cpu);
    }
L_00085504:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00085508:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0008550c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000852b4;
        }
    }
L_00085510:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_00085514:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085518:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000854e8;
        }
    }
L_0008551c:;
    {
        cpu->r[2] = rd32(0x00085524u + + 0x178u);
    }
L_00085520:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00085524:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00085528:;
    {
        cpu->r[2] = add_flags(cpu, 0x00085530u, cpu->r[2], 0, 0);
    }
L_0008552c:;
    {
        cpu->r[14] = 0x00085530u; fn_00080304(cpu);
    }
L_00085530:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00085534:;
    {
        goto L_000852f8;
    }
L_00085538:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008553c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085540:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xcu);
    }
L_00085544:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_00085548:;
    {
        cpu->r[14] = 0x0008554cu; fn_0007ddac(cpu);
    }
L_0008554c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_00085550:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00085554:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0008566c;
        }
    }
L_00085558:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008555c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085560:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xcu);
    }
L_00085564:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_00085568:;
    {
        cpu->r[14] = 0x0008556cu; fn_0007ddac(cpu);
    }
L_0008556c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_00085570:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085574:;
    {
        cpu->r[14] = 0x00085578u; fn_0007dde4(cpu);
    }
L_00085578:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0008557c:;
    {
        goto L_000852f8;
    }
L_00085580:;
    {
        cpu->r[8] = rd32(cpu->r[5]);
    }
L_00085584:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_00085588:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0008558c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00085590:;
    {
        cpu->r[14] = 0x00085594u; fn_0008519c(cpu);
    }
L_00085594:;
    {
        cpu->r[3] = 0x00006363u;
    }
L_00085598:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008559c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6270u << 16);
    }
L_000855a0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000855a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00085634;
        }
    }
L_000855a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_000855ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000855b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_000855b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = cpu->r[10];
        }
    }
L_000855b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000855e8;
        }
    }
L_000855bc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000855c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000855c4:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x44u);
    }
L_000855c8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[1], 0, 0);
    }
L_000855cc:;
    {
        cpu->r[14] = 0x000855d0u; fn_0007de4c(cpu);
    }
L_000855d0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[10], 0, 0);
    }
L_000855d4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000000cu, 0, 0);
    }
L_000855d8:;
    {
        wr32(cpu->r[11] + + 0x8u, cpu->r[0]);
    }
L_000855dc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_000855e0:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000855e4:;
    {
        if (cond_test(cpu, 4)) {
        goto L_000855bc;
        }
    }
L_000855e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000855ec:;
    {
        cpu->r[14] = 0x000855f0u; fn_0007ddac(cpu);
    }
L_000855f0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000855f4:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_000855f8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_000855fc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00085600:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000853d0;
        }
    }
L_00085604:;
    {
        cpu->r[2] = rd32(0x0008560cu + + 0x94u);
    }
L_00085608:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0008560c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00085610:;
    {
        cpu->r[2] = add_flags(cpu, 0x00085618u, cpu->r[2], 0, 0);
    }
L_00085614:;
    {
        cpu->r[14] = 0x00085618u; fn_00080304(cpu);
    }
L_00085618:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0008561c:;
    {
        goto L_000852f8;
    }
L_00085620:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085624:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00085628:;
    {
        cpu->r[14] = 0x0008562cu; fn_0007de4c(cpu);
    }
L_0008562c:;
    {
        wr32(cpu->r[5] + + 0x2cu, cpu->r[0]);
    }
L_00085630:;
    {
        goto L_00085474;
    }
L_00085634:;
    {
        cpu->r[2] = rd32(0x0008563cu + + 0x68u);
    }
L_00085638:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0008563c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00085640:;
    {
        cpu->r[2] = add_flags(cpu, 0x00085648u, cpu->r[2], 0, 0);
    }
L_00085644:;
    {
        cpu->r[14] = 0x00085648u; fn_00080304(cpu);
    }
L_00085648:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0008564c:;
    {
        goto L_000852f8;
    }
L_00085650:;
    {
        cpu->r[2] = rd32(0x00085658u + + 0x50u);
    }
L_00085654:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00085658:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0008565c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00085664u, cpu->r[2], 0, 0);
    }
L_00085660:;
    {
        cpu->r[14] = 0x00085664u; fn_00080304(cpu);
    }
L_00085664:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00085668:;
    {
        goto L_000852f8;
    }
L_0008566c:;
    {
        cpu->r[2] = rd32(0x00085674u + + 0x38u);
    }
L_00085670:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00085674:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00085678:;
    {
        cpu->r[2] = add_flags(cpu, 0x00085680u, cpu->r[2], 0, 0);
    }
L_0008567c:;
    {
        cpu->r[14] = 0x00085680u; fn_00080304(cpu);
    }
L_00085680:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00085684:;
    {
        goto L_000852f8;
    }
}

/* jp2_decode @ 000856b0 (arm) */
void fn_000856b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000856b0:;
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
L_000856b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000856b8:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
        }
    }
L_000856bc:;
    {
        cpu->r[5] = rd32(0x000856c4u + + 0x2d0u);
    }
L_000856c0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000856c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000856c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_000856cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x00000001u;
        }
    }
L_000856d0:;
    {
        cpu->r[5] = add_flags(cpu, 0x000856d8u, cpu->r[5], 0, 0);
    }
L_000856d4:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_000856d8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000856dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_000856e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000856f0;
        }
    }
L_000856e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000856e8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000856ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000856f0u)) return;
    }
L_000856f0:;
    {
        cpu->r[7] = rd32(cpu->r[0]);
    }
L_000856f4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000856f8:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000856fc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00085700:;
    {
        cpu->r[14] = 0x00085704u; fn_0008519c(cpu);
    }
L_00085704:;
    {
        cpu->r[3] = 0x00002020u;
    }
L_00085708:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008570c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6a50u << 16);
    }
L_00085710:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00085714:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085748;
        }
    }
L_00085718:;
    {
        cpu->r[2] = rd32(0x00085720u + + 0x278u);
    }
L_0008571c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00085720:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00085724:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008572cu, cpu->r[2], 0, 0);
    }
L_00085728:;
    {
        cpu->r[14] = 0x0008572cu; fn_00080304(cpu);
    }
L_0008572c:;
    {
        cpu->r[2] = rd32(0x00085734u + + 0x268u);
    }
L_00085730:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00085734:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00085738:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008573c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00085744u, cpu->r[2], 0, 0);
    }
L_00085740:;
    {
        cpu->r[14] = 0x00085744u; fn_00080304(cpu);
    }
L_00085744:;
    {
        goto L_000856e4;
    }
L_00085748:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008574c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00085750:;
    {
        cpu->r[14] = 0x00085754u; fn_0007de4c(cpu);
    }
L_00085754:;
    {
        cpu->r[3] = 0x0000870au;
    }
L_00085758:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0d0au << 16);
    }
L_0008575c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00085760:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008577c;
        }
    }
L_00085764:;
    {
        cpu->r[2] = rd32(0x0008576cu + + 0x234u);
    }
L_00085768:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0008576c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00085770:;
    {
        cpu->r[2] = add_flags(cpu, 0x00085778u, cpu->r[2], 0, 0);
    }
L_00085774:;
    {
        cpu->r[14] = 0x00085778u; fn_00080304(cpu);
    }
L_00085778:;
    {
        goto L_0008572c;
    }
L_0008577c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00085780:;
    {
        cpu->r[14] = 0x00085784u; fn_0007ddac(cpu);
    }
L_00085784:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00085788:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008578c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00085790:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00085794:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000857b0;
        }
    }
L_00085798:;
    {
        cpu->r[2] = rd32(0x000857a0u + + 0x204u);
    }
L_0008579c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000857a0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000857a4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000857acu, cpu->r[2], 0, 0);
    }
L_000857a8:;
    {
        cpu->r[14] = 0x000857acu; fn_00080304(cpu);
    }
L_000857ac:;
    {
        goto L_0008572c;
    }
L_000857b0:;
    {
        cpu->r[11] = rd32(cpu->r[4]);
    }
L_000857b4:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000857b8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000857bc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000857c0:;
    {
        cpu->r[14] = 0x000857c4u; fn_0008519c(cpu);
    }
L_000857c4:;
    {
        cpu->r[3] = 0x00007970u;
    }
L_000857c8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000857cc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6674u << 16);
    }
L_000857d0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000857d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000857f0;
        }
    }
L_000857d8:;
    {
        cpu->r[2] = rd32(0x000857e0u + + 0x1c8u);
    }
L_000857dc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000857e0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000857e4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000857ecu, cpu->r[2], 0, 0);
    }
L_000857e8:;
    {
        cpu->r[14] = 0x000857ecu; fn_00080304(cpu);
    }
L_000857ec:;
    {
        goto L_0008572c;
    }
L_000857f0:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000857f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000857f8:;
    {
        cpu->r[14] = 0x000857fcu; fn_0007de4c(cpu);
    }
L_000857fc:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00085800:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[0]);
    }
L_00085804:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00085808:;
    {
        cpu->r[14] = 0x0008580cu; fn_0007de4c(cpu);
    }
L_0008580c:;
    {
        cpu->r[3] = rd32(0x00085814u + + 0x198u);
    }
L_00085810:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00085814:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[0]);
    }
L_00085818:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008581c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000010u, 1, 1);
    }
L_00085820:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000000du, 1, 0);
        }
    }
L_00085824:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[2] = cpu->r[0];
        }
    }
L_00085828:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[0] = v;
    }
L_0008582c:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_00085830:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00085834:;
    {
        cpu->r[14] = 0x0008583cu;
    }
L_00085838:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008583cu)) return;
    }
L_0008583c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00085840:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00085844:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00085848:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[0]);
    }
L_0008584c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00085858;
        }
    }
L_00085850:;
    {
        goto L_00085878;
    }
L_00085854:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x40u);
    }
L_00085858:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008585c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00085860:;
    {
        cpu->r[14] = 0x00085864u; fn_0007de4c(cpu);
    }
L_00085864:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[8], 2, 2u, &shc), cpu->r[0]);
    }
L_00085868:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0008586c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00085870:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_00085874:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00085854;
        }
    }
L_00085878:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008587c:;
    {
        cpu->r[14] = 0x00085880u; fn_0007ddac(cpu);
    }
L_00085880:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00085884:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00085888:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_0008588c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00085890:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000858ac;
        }
    }
L_00085894:;
    {
        cpu->r[2] = rd32(0x0008589cu + + 0x114u);
    }
L_00085898:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0008589c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000858a0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000858a8u, cpu->r[2], 0, 0);
    }
L_000858a4:;
    {
        cpu->r[14] = 0x000858a8u; fn_00080304(cpu);
    }
L_000858a8:;
    {
        goto L_0008572c;
    }
L_000858ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000858b0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000858b4:;
    {
        cpu->r[14] = 0x000858b8u; fn_00085274(cpu);
    }
L_000858b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000858bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008572c;
        }
    }
L_000858c0:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_000858c4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000858c8:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000858cc:;
    {
        cpu->r[8] = 0x00003263u;
    }
L_000858d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000858d4:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x6a70u << 16);
    }
L_000858d8:;
    {
        cpu->r[14] = 0x000858dcu; fn_0008519c(cpu);
    }
L_000858dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000858e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_000858e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00085964;
        }
    }
L_000858e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000858ec:;
    {
        cpu->r[14] = 0x000858f0u; fn_0007ddac(cpu);
    }
L_000858f0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000858f4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000858f8:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_000858fc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00085900:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00085904:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
    }
L_00085908:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_0008590c:;
    {
        cpu->r[14] = 0x00085910u; fn_00083180(cpu);
    }
L_00085910:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00085914:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008592c;
        }
    }
L_00085918:;
    {
        cpu->r[2] = rd32(0x00085920u + + 0x94u);
    }
L_0008591c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00085920:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00085924:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008592cu, cpu->r[2], 0, 0);
    }
L_00085928:;
    {
        cpu->r[14] = 0x0008592cu; fn_00080304(cpu);
    }
L_0008592c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00085930:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_00085934:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00085938:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
        }
    }
L_0008593c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000856e4;
        }
    }
L_00085940:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000011u, 1, 1);
    }
L_00085944:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_00085948:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
        }
    }
L_0008594c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000856e4;
        }
    }
L_00085950:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000012u, 1, 1);
    }
L_00085954:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000003u;
        }
    }
L_00085958:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_0008595c:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
    }
L_00085960:;
    {
        goto L_000856e4;
    }
L_00085964:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00085968:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008596c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 0);
    }
L_00085970:;
    {
        cpu->r[14] = 0x00085974u; fn_0007dde4(cpu);
    }
L_00085974:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00085978:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0008597c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00085980:;
    {
        cpu->r[14] = 0x00085984u; fn_0008519c(cpu);
    }
L_00085984:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00085988:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_0008598c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00085964;
        }
    }
L_00085990:;
    {
        goto L_000858e8;
    }
}

/* jp2_setup_decoder @ 000859b8 (arm) */
void fn_000859b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000859b8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000859bc:;
    {
        return fn_00080a08(cpu);
    }
}

/* jp2_destroy_decompress @ 000859c0 (arm) */
void fn_000859c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000859c0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000859c4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000859c8:;
    {
        cpu->r[4] = rd32(0x000859d0u + + 0x5cu);
    }
L_000859cc:;
    {
        cpu->r[4] = add_flags(cpu, 0x000859d4u, cpu->r[4], 0, 0);
    }
L_000859d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000859d4u)) return;
        }
    }
L_000859d4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_000859d8:;
    {
        cpu->r[14] = 0x000859dcu; fn_00080840(cpu);
    }
L_000859dc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x44u);
    }
L_000859e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000859e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085a24;
        }
    }
L_000859e8:;
    {
        cpu->r[6] = rd32(0x000859f0u + + 0x40u);
    }
L_000859ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000859f0:;
    {
        cpu->r[14] = 0x000859f8u;
    }
L_000859f4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000859f8u)) return;
    }
L_000859f8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x40u);
    }
L_000859fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00085a00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085a10;
        }
    }
L_00085a04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00085a08:;
    {
        cpu->r[14] = 0x00085a10u;
    }
L_00085a0c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00085a10u)) return;
    }
L_00085a10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00085a14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00085a18:;
    {
        cpu->r[14] = 0x00085a20u;
    }
L_00085a1c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00085a20u)) return;
    }
L_00085a20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00085a24u)) return;
    }
L_00085a24:;
    {
        cpu->r[6] = rd32(0x00085a2cu + + 0x4u);
    }
L_00085a28:;
    {
        goto L_000859f8;
    }
}

/* jp2_create_decompress @ 00085a34 (arm) */
void fn_00085a34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00085a34:;
    {
        cpu->r[3] = rd32(0x00085a3cu + + 0x58u);
    }
L_00085a38:;
    {
        cpu->r[2] = rd32(0x00085a40u + + 0x58u);
    }
L_00085a3c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00085a44u, cpu->r[3], 0, 0);
    }
L_00085a40:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00085a44:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00085a48:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00085a4c:;
    {
        cpu->r[0] = 0x00000050u;
    }
L_00085a50:;
    {
        cpu->r[14] = 0x00085a58u;
    }
L_00085a54:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00085a58u)) return;
    }
L_00085a58:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00085a5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085a7c;
        }
    }
L_00085a60:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_00085a64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00085a68:;
    {
        cpu->r[14] = 0x00085a6cu; fn_000807bc(cpu);
    }
L_00085a6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00085a70:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00085a74:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00085a78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085a84;
        }
    }
L_00085a7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085a80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00085a84u)) return;
    }
L_00085a84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00085a88:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00085a8c:;
    {
        cpu->r[14] = 0x00085a90u; fn_000859c0(cpu);
    }
L_00085a90:;
    {
        goto L_00085a7c;
    }
}

/* jpt_init_msg_header @ 00085a9c (arm) */
void fn_00085a9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00085a9c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00085aa0:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_00085aa4:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00085aa8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00085aac:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_00085ab0:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_00085ab4:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_00085ab8:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_00085abc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* jpt_reinit_msg_header @ 00085ac0 (arm) */
void fn_00085ac0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00085ac0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00085ac4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_00085ac8:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00085acc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00085ad0:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_00085ad4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* jpt_read_VBAS_info @ 00085ad8 (arm) */
void fn_00085ad8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00085ad8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00085adc:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00085ae0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00085ae4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00085ae8:;
    {
        cpu->r[14] = 0x00085aecu; fn_0007de4c(cpu);
    }
L_00085aec:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00085af0:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 7u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00085af4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085b18;
        }
    }
L_00085af8:;
    {
        uint32_t v = cpu->r[0] & 0x0000007fu; cpu->r[3] = v;
    }
L_00085afc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00085b00:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00085b04:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[4], 2, 7u, &shc); cpu->r[4] = v;
    }
L_00085b08:;
    {
        cpu->r[14] = 0x00085b0cu; fn_0007de4c(cpu);
    }
L_00085b0c:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00085b10:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 7u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00085b14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00085af8;
        }
    }
L_00085b18:;
    {
        uint32_t v = cpu->r[0] & 0x0000007fu; cpu->r[0] = v;
    }
L_00085b1c:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[4], 2, 7u, &shc); cpu->r[0] = v;
    }
L_00085b20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00085b24u)) return;
    }
}

/* jpt_read_msg_header @ 00085b24 (arm) */
void fn_00085b24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00085b24:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00085b28:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00085b2c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00085b30:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00085b34:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00085b38:;
    {
        cpu->r[14] = 0x00085b3cu; fn_00085ac0(cpu);
    }
L_00085b3c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00085b40:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00085b44:;
    {
        cpu->r[14] = 0x00085b48u; fn_0007de4c(cpu);
    }
L_00085b48:;
    {
        cpu->r[5] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00085b4c:;
    {
        cpu->r[3] = (cpu->r[5] >> 5) & 0x3u;
    }
L_00085b50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00085b54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_00085b58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x00000001u;
        }
    }
L_00085b5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085b94;
        }
    }
L_00085b60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00085b64:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_00085b68:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[7];
        }
    }
L_00085b6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085b94;
        }
    }
L_00085b70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00085b74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085c0c;
        }
    }
L_00085b78:;
    {
        cpu->r[2] = rd32(0x00085b80u + + 0xdcu);
    }
L_00085b7c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00085b80:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00085b84:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00085b88:;
    {
        cpu->r[2] = add_flags(cpu, 0x00085b90u, cpu->r[2], 0, 0);
    }
L_00085b8c:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_00085b90:;
    {
        cpu->r[14] = 0x00085b94u; fn_00080304(cpu);
    }
L_00085b94:;
    {
        { uint32_t v = cpu->r[5] & 0x00000010u; set_nz(cpu, v); }
    }
L_00085b98:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00085b9c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
        }
    }
L_00085ba0:;
    {
        uint32_t v = shifter(cpu->r[5], 3, 7u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00085ba4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00085ba8:;
    {
        uint32_t v = cpu->r[5] & 0x0000000fu; cpu->r[5] = v;
    }
L_00085bac:;
    {
        uint32_t v = cpu->r[5] | cpu->r[3]; cpu->r[1] = v;
    }
L_00085bb0:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_00085bb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00085c30;
        }
    }
L_00085bb8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_00085bbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085c44;
        }
    }
L_00085bc0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_00085bc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00085c18;
        }
    }
L_00085bc8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_00085bcc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00085bd0:;
    {
        cpu->r[14] = 0x00085bd4u; fn_00085ad8(cpu);
    }
L_00085bd4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_00085bd8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_00085bdc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00085be0:;
    {
        cpu->r[14] = 0x00085be4u; fn_00085ad8(cpu);
    }
L_00085be4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00085be8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00085bec:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_00085bf0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00085bf4u)) return;
        }
    }
L_00085bf4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00085bf8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00085bfc:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
    }
L_00085c00:;
    {
        cpu->r[14] = 0x00085c04u; fn_00085ad8(cpu);
    }
L_00085c04:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_00085c08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00085c0cu)) return;
    }
L_00085c0c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00085c10:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_00085c14:;
    {
        goto L_00085b94;
    }
L_00085c18:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00085c1c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00085c20:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_00085c24:;
    {
        cpu->r[14] = 0x00085c28u; fn_00085ad8(cpu);
    }
L_00085c28:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_00085c2c:;
    {
        goto L_00085bc8;
    }
L_00085c30:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00085c34:;
    {
        cpu->r[14] = 0x00085c38u; fn_00085ad8(cpu);
    }
L_00085c38:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_00085c3c:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_00085c40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00085bc0;
        }
    }
L_00085c44:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00085c48:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00085c4c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[1]);
    }
L_00085c50:;
    {
        cpu->r[14] = 0x00085c54u; fn_00085ad8(cpu);
    }
L_00085c54:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_00085c58:;
    {
        goto L_00085bc0;
    }
}

/* mct_encode @ 00085c60 (arm) */
void fn_00085c60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00085c60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00085c64:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_00085c68:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00085cb0;
        }
    }
L_00085c6c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00085c70:;
    {
        cpu->r[5] = cpu->r[12];
    }
L_00085c74:;
    {
        cpu->r[4] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_00085c78:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00085c7c:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_00085c80:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00085c84:;
    {
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_00085c88:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 0);
    }
L_00085c8c:;
    {
        wr32(cpu->r[2] + cpu->r[12], cpu->r[8]);
    }
L_00085c90:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_00085c94:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 0);
    }
L_00085c98:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_00085c9c:;
    {
        wr32(cpu->r[1] + cpu->r[12], cpu->r[6]);
    }
L_00085ca0:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 2u, &shc); cpu->r[4] = v;
    }
L_00085ca4:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[4]);
    }
L_00085ca8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00085cac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00085c74;
        }
    }
L_00085cb0:;
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
L_00085cb4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mct_decode @ 00085cb8 (arm) */
void fn_00085cb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00085cb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00085cbc:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_00085cc0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00085d04;
        }
    }
L_00085cc4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00085cc8:;
    {
        cpu->r[5] = cpu->r[12];
    }
L_00085ccc:;
    {
        cpu->r[7] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_00085cd0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00085cd4:;
    {
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_00085cd8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00085cdc:;
    {
        cpu->r[8] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_00085ce0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_00085ce4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[4], 1, 2u, &shc), 1, 0);
    }
L_00085ce8:;
    {
        wr32(cpu->r[1] + cpu->r[12], cpu->r[4]);
    }
L_00085cec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_00085cf0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_00085cf4:;
    {
        wr32(cpu->r[2] + cpu->r[12], cpu->r[7]);
    }
L_00085cf8:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[4]);
    }
L_00085cfc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00085d00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00085ccc;
        }
    }
L_00085d04:;
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
L_00085d08:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mct_getnorm @ 00085d0c (arm) */
void fn_00085d0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00085d0c:;
    {
        cpu->r[3] = rd32(0x00085d14u + + 0xcu);
    }
L_00085d10:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_00085d14:;
    {
        cpu->r[3] = add_flags(cpu, 0x00085d1cu, cpu->r[3], 0, 0);
    }
L_00085d18:;
    {
        uint64_t v = rd64(cpu->r[0] + cpu->r[3]);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
    }
L_00085d1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mct_encode_real @ 00085d24 (arm) */
void fn_00085d24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00085d24:;
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
L_00085d28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00085d2c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000090u, 1, 0);
    }
L_00085d30:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[3]);
    }
L_00085d34:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[0]);
    }
L_00085d38:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[1]);
    }
L_00085d3c:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[2]);
    }
L_00085d40:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000860ac;
        }
    }
L_00085d44:;
    {
        cpu->r[2] = 0x00001000u;
    }
L_00085d48:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00085d4c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00085d50:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[1]);
    }
L_00085d54:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x84u);
    }
L_00085d58:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x80u);
    }
L_00085d5c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00085d60:;
    {
        cpu->r[8] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_00085d64:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00085d68:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00085d6c:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_00085d70:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 31u, &shc); cpu->r[11] = v;
    }
L_00085d74:;
    {
        wr64(cpu->r[13] + + 0x48u, ((uint64_t)cpu->r[11] << 32) | cpu->r[10]);
    }
L_00085d78:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x48u);
    }
L_00085d7c:;
    {
        cpu->r[8] = 0x00000a9au;
    }
L_00085d80:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x88u);
    }
L_00085d84:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 31u, &shc); cpu->r[7] = v;
    }
L_00085d88:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[4]);
    }
L_00085d8c:;
    {
        { uint64_t v = (uint64_t)cpu->r[9] * (uint64_t)cpu->r[8]; cpu->r[8] = (uint32_t)v; cpu->r[9] = (uint32_t)(v >> 32); }
    }
L_00085d90:;
    {
        cpu->r[4] = rd32(cpu->r[11] + cpu->r[1]);
    }
L_00085d94:;
    {
        cpu->r[11] = 0x00000991u;
    }
L_00085d98:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 31u, &shc); cpu->r[5] = v;
    }
L_00085d9c:;
    {
        { uint64_t v = (uint64_t)cpu->r[6] * (uint64_t)cpu->r[11]; cpu->r[10] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
    }
L_00085da0:;
    {
        wr64(cpu->r[13] + + 0x40u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_00085da4:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 12u, &shc); cpu->r[9] = v;
    }
L_00085da8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_00085dac:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x48u);
    }
L_00085db0:;
    {
        cpu->r[8] = 0x000012c9u;
    }
L_00085db4:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 12u, &shc); cpu->r[12] = v;
    }
L_00085db8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_00085dbc:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 12u, &shc); cpu->r[12] = v;
    }
L_00085dc0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00085dc4:;
    {
        { uint64_t v = (uint64_t)cpu->r[9] * (uint64_t)cpu->r[8]; cpu->r[8] = (uint32_t)v; cpu->r[9] = (uint32_t)(v >> 32); }
    }
L_00085dc8:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 12u, &shc); cpu->r[12] = v;
    }
L_00085dcc:;
    {
        wr64(cpu->r[13] + + 0x38u, ((uint64_t)cpu->r[11] << 32) | cpu->r[10]);
    }
L_00085dd0:;
    {
        cpu->r[11] = 0x00000566u;
    }
L_00085dd4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_00085dd8:;
    {
        { uint64_t v = (uint64_t)cpu->r[6] * (uint64_t)cpu->r[11]; cpu->r[10] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
    }
L_00085ddc:;
    {
        wr64(cpu->r[13] + + 0x30u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_00085de0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x14u);
    }
L_00085de4:;
    {
        cpu->r[8] = 0x00000d66u;
    }
L_00085de8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_00085dec:;
    {
        cpu->r[12] = 0x00000a9au;
    }
L_00085df0:;
    {
        uint32_t v = cpu->r[9] | shifter(cpu->r[6], 3, 20u, &shc); cpu->r[9] = v;
    }
L_00085df4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_00085df8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x48u);
    }
L_00085dfc:;
    {
        wr64(cpu->r[13] + + 0x8u, ((uint64_t)cpu->r[11] << 32) | cpu->r[10]);
    }
L_00085e00:;
    {
        cpu->r[11] = 0x000003a6u;
    }
L_00085e04:;
    {
        { uint64_t v = (uint64_t)cpu->r[9] * (uint64_t)cpu->r[8]; cpu->r[8] = (uint32_t)v; cpu->r[9] = (uint32_t)(v >> 32); }
    }
L_00085e08:;
    {
        { uint64_t v = (uint64_t)cpu->r[4] * (uint64_t)cpu->r[11]; cpu->r[10] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
    }
L_00085e0c:;
    {
        wr64(cpu->r[13], ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_00085e10:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00085e14:;
    {
        wr64(cpu->r[13] + + 0x28u, ((uint64_t)cpu->r[11] << 32) | cpu->r[10]);
    }
L_00085e18:;
    {
        uint32_t v = cpu->r[9] | shifter(cpu->r[4], 3, 20u, &shc); cpu->r[9] = v;
    }
L_00085e1c:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x10u);
        cpu->r[10] = (uint32_t)v;
        cpu->r[11] = (uint32_t)(v >> 32);
    }
L_00085e20:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_00085e24:;
    {
        cpu->r[9] = 0x0000029au;
    }
L_00085e28:;
    {
        uint32_t v = cpu->r[10] & cpu->r[2]; cpu->r[10] = v;
    }
L_00085e2c:;
    {
        uint32_t v = cpu->r[11] & cpu->r[3]; cpu->r[11] = v;
    }
L_00085e30:;
    {
        wr64(cpu->r[13] + + 0x68u, ((uint64_t)cpu->r[11] << 32) | cpu->r[10]);
    }
L_00085e34:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00085e38:;
    {
        { uint64_t v = (uint64_t)cpu->r[4] * (uint64_t)cpu->r[9]; cpu->r[8] = (uint32_t)v; cpu->r[9] = (uint32_t)(v >> 32); }
    }
L_00085e3c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[11] + cpu->r[0]; cpu->r[11] = v;
    }
L_00085e40:;
    {
        cpu->r[12] = 0x00000d66u;
    }
L_00085e44:;
    {
        wr64(cpu->r[13] + + 0x20u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_00085e48:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x68u);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
    }
L_00085e4c:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[11]);
    }
L_00085e50:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x10u);
        cpu->r[10] = (uint32_t)v;
        cpu->r[11] = (uint32_t)(v >> 32);
    }
L_00085e54:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 1);
    }
L_00085e58:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[11], (cpu->cpsr >> 29) & 1, 1);
    }
L_00085e5c:;
    {
        wr64(cpu->r[13] + + 0x68u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_00085e60:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00085e64:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00085e68:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x18u);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
    }
L_00085e6c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00085e70:;
    {
        uint32_t v = cpu->r[8] & cpu->r[2]; cpu->r[8] = v;
    }
L_00085e74:;
    {
        uint32_t v = cpu->r[9] & cpu->r[3]; cpu->r[9] = v;
    }
L_00085e78:;
    {
        wr64(cpu->r[13] + + 0x60u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_00085e7c:;
    {
        cpu->r[9] = 0x00000991u;
    }
L_00085e80:;
    {
        uint32_t v = cpu->r[12] * cpu->r[11] + cpu->r[0]; cpu->r[11] = v;
    }
L_00085e84:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00085e88:;
    {
        uint32_t v = cpu->r[9] * cpu->r[7] + cpu->r[10]; cpu->r[10] = v;
    }
L_00085e8c:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x40u);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
    }
L_00085e90:;
    {
        uint32_t v = cpu->r[8] & cpu->r[2]; cpu->r[8] = v;
    }
L_00085e94:;
    {
        uint32_t v = cpu->r[9] & cpu->r[3]; cpu->r[9] = v;
    }
L_00085e98:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_00085e9c:;
    {
        wr64(cpu->r[13] + + 0x50u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_00085ea0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x34u);
    }
L_00085ea4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00085ea8:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[10]);
    }
L_00085eac:;
    {
        cpu->r[10] = 0x000012c9u;
    }
L_00085eb0:;
    {
        uint32_t v = cpu->r[10] * cpu->r[9] + cpu->r[11]; cpu->r[9] = v;
    }
L_00085eb4:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x40u);
        cpu->r[10] = (uint32_t)v;
        cpu->r[11] = (uint32_t)(v >> 32);
    }
L_00085eb8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[9]);
    }
L_00085ebc:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x50u);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
    }
L_00085ec0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 1);
    }
L_00085ec4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[11], (cpu->cpsr >> 29) & 1, 1);
    }
L_00085ec8:;
    {
        cpu->r[11] = 0x00000566u;
    }
L_00085ecc:;
    {
        wr64(cpu->r[13] + + 0x50u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_00085ed0:;
    {
        uint32_t v = cpu->r[11] * cpu->r[7] + cpu->r[12]; cpu->r[12] = v;
    }
L_00085ed4:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x38u);
        cpu->r[6] = (uint32_t)v;
        cpu->r[7] = (uint32_t)(v >> 32);
    }
L_00085ed8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x24u);
    }
L_00085edc:;
    {
        uint32_t v = cpu->r[6] & cpu->r[2]; cpu->r[6] = v;
    }
L_00085ee0:;
    {
        uint32_t v = cpu->r[7] & cpu->r[3]; cpu->r[7] = v;
    }
L_00085ee4:;
    {
        wr64(cpu->r[13] + + 0x48u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_00085ee8:;
    {
        cpu->r[7] = 0x0000029au;
    }
L_00085eec:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x30u);
        cpu->r[10] = (uint32_t)v;
        cpu->r[11] = (uint32_t)(v >> 32);
    }
L_00085ef0:;
    {
        uint32_t v = cpu->r[7] * cpu->r[5] + cpu->r[8]; cpu->r[8] = v;
    }
L_00085ef4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00085ef8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00085efc:;
    {
        uint32_t v = cpu->r[10] & cpu->r[2]; cpu->r[10] = v;
    }
L_00085f00:;
    {
        uint32_t v = cpu->r[11] & cpu->r[3]; cpu->r[11] = v;
    }
L_00085f04:;
    {
        wr64(cpu->r[13] + + 0x40u, ((uint64_t)cpu->r[11] << 32) | cpu->r[10]);
    }
L_00085f08:;
    {
        cpu->r[11] = 0x000003a6u;
    }
L_00085f0c:;
    {
        uint64_t v = rd64(cpu->r[13]);
        cpu->r[6] = (uint32_t)v;
        cpu->r[7] = (uint32_t)(v >> 32);
    }
L_00085f10:;
    {
        uint32_t v = cpu->r[11] * cpu->r[5] + cpu->r[12]; cpu->r[12] = v;
    }
L_00085f14:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x8u);
        cpu->r[4] = (uint32_t)v;
        cpu->r[5] = (uint32_t)(v >> 32);
    }
L_00085f18:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x30u);
        cpu->r[10] = (uint32_t)v;
        cpu->r[11] = (uint32_t)(v >> 32);
    }
L_00085f1c:;
    {
        uint32_t v = cpu->r[6] & cpu->r[2]; cpu->r[6] = v;
    }
L_00085f20:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[8]);
    }
L_00085f24:;
    {
        uint32_t v = cpu->r[4] & cpu->r[2]; cpu->r[4] = v;
    }
L_00085f28:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x40u);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
    }
L_00085f2c:;
    {
        uint32_t v = cpu->r[5] & cpu->r[3]; cpu->r[5] = v;
    }
L_00085f30:;
    {
        uint32_t v = cpu->r[7] & cpu->r[3]; cpu->r[7] = v;
    }
L_00085f34:;
    {
        wr64(cpu->r[13] + + 0x58u, ((uint64_t)cpu->r[5] << 32) | cpu->r[4]);
    }
L_00085f38:;
    {
        wr64(cpu->r[13] + + 0x70u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_00085f3c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 1);
    }
L_00085f40:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x38u);
        cpu->r[6] = (uint32_t)v;
        cpu->r[7] = (uint32_t)(v >> 32);
    }
L_00085f44:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[11], (cpu->cpsr >> 29) & 1, 1);
    }
L_00085f48:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x48u);
        cpu->r[4] = (uint32_t)v;
        cpu->r[5] = (uint32_t)(v >> 32);
    }
L_00085f4c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_00085f50:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 1);
    }
L_00085f54:;
    {
        wr64(cpu->r[13] + + 0x40u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_00085f58:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[7], (cpu->cpsr >> 29) & 1, 1);
    }
L_00085f5c:;
    {
        wr64(cpu->r[13] + + 0x48u, ((uint64_t)cpu->r[5] << 32) | cpu->r[4]);
    }
L_00085f60:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x8u);
        cpu->r[10] = (uint32_t)v;
        cpu->r[11] = (uint32_t)(v >> 32);
    }
L_00085f64:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x58u);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
    }
L_00085f68:;
    {
        uint64_t v = rd64(cpu->r[13]);
        cpu->r[6] = (uint32_t)v;
        cpu->r[7] = (uint32_t)(v >> 32);
    }
L_00085f6c:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x70u);
        cpu->r[4] = (uint32_t)v;
        cpu->r[5] = (uint32_t)(v >> 32);
    }
L_00085f70:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 1);
    }
L_00085f74:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[11], (cpu->cpsr >> 29) & 1, 1);
    }
L_00085f78:;
    {
        wr64(cpu->r[13] + + 0x58u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_00085f7c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 1);
    }
L_00085f80:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x28u);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
    }
L_00085f84:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[7], (cpu->cpsr >> 29) & 1, 1);
    }
L_00085f88:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x20u);
        cpu->r[10] = (uint32_t)v;
        cpu->r[11] = (uint32_t)(v >> 32);
    }
L_00085f8c:;
    {
        wr64(cpu->r[13] + + 0x70u, ((uint64_t)cpu->r[5] << 32) | cpu->r[4]);
    }
L_00085f90:;
    {
        uint32_t v = cpu->r[8] & cpu->r[2]; cpu->r[8] = v;
    }
L_00085f94:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x28u);
        cpu->r[4] = (uint32_t)v;
        cpu->r[5] = (uint32_t)(v >> 32);
    }
L_00085f98:;
    {
        uint32_t v = cpu->r[9] & cpu->r[3]; cpu->r[9] = v;
    }
L_00085f9c:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x20u);
        cpu->r[6] = (uint32_t)v;
        cpu->r[7] = (uint32_t)(v >> 32);
    }
L_00085fa0:;
    {
        uint32_t v = cpu->r[10] & cpu->r[2]; cpu->r[10] = v;
    }
L_00085fa4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[4], 0, 1);
    }
L_00085fa8:;
    {
        uint32_t v = cpu->r[11] & cpu->r[3]; cpu->r[11] = v;
    }
L_00085fac:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[5], (cpu->cpsr >> 29) & 1, 1);
    }
L_00085fb0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 1);
    }
L_00085fb4:;
    {
        wr64(cpu->r[13], ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_00085fb8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[7], (cpu->cpsr >> 29) & 1, 1);
    }
L_00085fbc:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x60u);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
    }
L_00085fc0:;
    {
        wr64(cpu->r[13] + + 0x8u, ((uint64_t)cpu->r[11] << 32) | cpu->r[10]);
    }
L_00085fc4:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x18u);
        cpu->r[10] = (uint32_t)v;
        cpu->r[11] = (uint32_t)(v >> 32);
    }
L_00085fc8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_00085fcc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 1);
    }
L_00085fd0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x54u);
    }
L_00085fd4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[11], (cpu->cpsr >> 29) & 1, 1);
    }
L_00085fd8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x50u);
    }
L_00085fdc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x48u);
    }
L_00085fe0:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 13u, &shc); cpu->r[10] = v;
    }
L_00085fe4:;
    {
        wr64(cpu->r[13] + + 0x60u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_00085fe8:;
    {
        uint32_t v = shifter(cpu->r[11], 3, 13u, &shc); cpu->r[12] = v;
    }
L_00085fec:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x70u);
    }
L_00085ff0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x58u);
    }
L_00085ff4:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[4], 2, 19u, &shc); cpu->r[12] = v;
    }
L_00085ff8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x68u);
    }
L_00085ffc:;
    {
        uint32_t v = shifter(cpu->r[5], 3, 13u, &shc); cpu->r[8] = v;
    }
L_00086000:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_00086004:;
    {
        uint32_t v = shifter(cpu->r[11], 3, 13u, &shc); cpu->r[5] = v;
    }
L_00086008:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008600c:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 13u, &shc); cpu->r[7] = v;
    }
L_00086010:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00086014:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 13u, &shc); cpu->r[6] = v;
    }
L_00086018:;
    {
        uint32_t v = cpu->r[10] | shifter(cpu->r[0], 2, 19u, &shc); cpu->r[10] = v;
    }
L_0008601c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00086020:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x74u);
    }
L_00086024:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[4], 2, 19u, &shc); cpu->r[8] = v;
    }
L_00086028:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[11], 2, 19u, &shc); cpu->r[6] = v;
    }
L_0008602c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00086030:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8cu);
    }
L_00086034:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[9], 2, 19u, &shc); cpu->r[7] = v;
    }
L_00086038:;
    {
        uint32_t v = cpu->r[5] | shifter(cpu->r[0], 2, 19u, &shc); cpu->r[5] = v;
    }
L_0008603c:;
    {
        cpu->r[9] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_00086040:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_00086044:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 1);
    }
L_00086048:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_0008604c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], cpu->r[8], 0, 0);
    }
L_00086050:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_00086054:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[9], cpu->r[7], 1, 0);
    }
L_00086058:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4u);
    }
L_0008605c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_00086060:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 13u, &shc); cpu->r[4] = v;
    }
L_00086064:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x80u);
    }
L_00086068:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 13u, &shc); cpu->r[12] = v;
    }
L_0008606c:;
    {
        uint32_t v = shifter(cpu->r[11], 3, 13u, &shc); cpu->r[0] = v;
    }
L_00086070:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x64u);
    }
L_00086074:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[10], 2, 19u, &shc); cpu->r[4] = v;
    }
L_00086078:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xcu);
    }
L_0008607c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[4], 0, 0);
    }
L_00086080:;
    {
        wr32(cpu->r[9] + cpu->r[1], cpu->r[8]);
    }
L_00086084:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[11], 2, 19u, &shc); cpu->r[12] = v;
    }
L_00086088:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x84u);
    }
L_0008608c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x88u);
    }
L_00086090:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[6], 2, 19u, &shc); cpu->r[0] = v;
    }
L_00086094:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[12], 0, 0);
    }
L_00086098:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_0008609c:;
    {
        wr32(cpu->r[10] + cpu->r[1], cpu->r[7]);
    }
L_000860a0:;
    {
        wr32(cpu->r[11] + cpu->r[1], cpu->r[5]);
    }
L_000860a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000860a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00085d54;
        }
    }
L_000860ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_000860b0:;
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
L_000860b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mct_decode_real @ 000860b8 (arm) */
void fn_000860b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000860b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000860bc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_000860c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00086134;
        }
    }
L_000860c4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000860c8:;
    {
        *vfp_s(cpu, 8) = *(float*)G(0x000860d0u + + 0x6cu);
    }
L_000860cc:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_000860d0:;
    {
        *vfp_s(cpu, 9) = *(float*)G(0x000860d8u + + 0x68u);
    }
L_000860d4:;
    {
        *vfp_s(cpu, 10) = *(float*)G(0x000860dcu + + 0x68u);
    }
L_000860d8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x000860e0u + + 0x68u);
    }
L_000860dc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_000860e0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5]);
    }
L_000860e4:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
    }
L_000860e8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_000860ec:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[5]);
    }
L_000860f0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_000860f4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[5]);
    }
L_000860f8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000860fc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00086100:;
    {
        vfp_vmla(cpu, 15, 12, 9);
    }
L_00086104:;
    {
        *vfp_s(cpu,7) = *vfp_s(cpu,14);
    }
L_00086108:;
    {
        vfp_vmla(cpu, 15, 13, 10);
    }
L_0008610c:;
    {
        vfp_vmla(cpu, 7, 12, 11);
    }
L_00086110:;
    {
        vfp_vmla(cpu, 14, 13, 8);
    }
L_00086114:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,7);
    }
L_00086118:;
    {
        wr32(cpu->r[2] + cpu->r[12], cpu->r[5]);
    }
L_0008611c:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00086120:;
    {
        wr32(cpu->r[1] + cpu->r[12], cpu->r[5]);
    }
L_00086124:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00086128:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[5]);
    }
L_0008612c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00086130:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000860dc;
        }
    }
L_00086134:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_00086138:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mct_getnorm_real @ 0008614c (arm) */
void fn_0008614c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008614c:;
    {
        cpu->r[3] = rd32(0x00086154u + + 0xcu);
    }
L_00086150:;
    {
        cpu->r[3] = add_flags(cpu, 0x00086158u, cpu->r[3], 0, 0);
    }
L_00086154:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_00086158:;
    {
        uint64_t v = rd64(cpu->r[3] + + 0x18u);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
    }
L_0008615c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* sub_00086164 @ 00086164 (arm) */
void fn_00086164(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086164:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_00086168:;
    {
        cpu->r[2] = rd8(cpu->r[3]);
    }
L_0008616c:;
    {
        sub_flags(cpu, cpu->r[2], 0x000000ffu, 1, 1);
    }
L_00086170:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000861dc;
        }
    }
L_00086174:;
    {
        cpu->r[1] = rd32(cpu->r[0]);
    }
L_00086178:;
    {
        { uint32_t v = cpu->r[1] & 0x08000000u; set_nz(cpu, v); }
    }
L_0008617c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000861c8;
        }
    }
L_00086180:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00086184:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_00086188:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_0008618c:;
    {
        cpu->r[2] = rd8(cpu->r[3]);
    }
L_00086190:;
    {
        sub_flags(cpu, cpu->r[2], 0x000000ffu, 1, 1);
    }
L_00086194:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008620c;
        }
    }
L_00086198:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_0008619c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000861a0:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_000861a4:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 19u, &shc); cpu->r[2] = v;
    }
L_000861a8:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[2]);
    }
L_000861ac:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000861b0:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_000861b4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_000861b8:;
    {
        uint32_t v = cpu->r[3] & ~ 0xff000000u; cpu->r[3] = v;
    }
L_000861bc:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00f80000u; cpu->r[3] = v;
    }
L_000861c0:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000861c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000861c8:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 19u, &shc); cpu->r[1] = v;
    }
L_000861cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000861d0:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_000861d4:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[1]);
    }
L_000861d8:;
    {
        goto L_000861ac;
    }
L_000861dc:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_000861e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000861e4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_000861e8:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 20u, &shc); cpu->r[2] = v;
    }
L_000861ec:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[2]);
    }
L_000861f0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000861f4:;
    {
        cpu->r[2] = 0x00000007u;
    }
L_000861f8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_000861fc:;
    {
        uint32_t v = cpu->r[3] & ~ 0xff000000u; cpu->r[3] = v;
    }
L_00086200:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00f00000u; cpu->r[3] = v;
    }
L_00086204:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00086208:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0008620c:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_00086210:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00086214:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_00086218:;
    {
        uint32_t v = cpu->r[2] & ~ 0xf8000000u; cpu->r[2] = v;
    }
L_0008621c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00086220:;
    {
        goto L_000861e8;
    }
}

/* sub_00086224 @ 00086224 (arm) */
void fn_00086224(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086224:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_00086228:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_0008622c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00086230:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00086274;
        }
    }
L_00086234:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00086238:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0008623c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x000000ffu;
        }
    }
L_00086240:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd8(cpu->r[3] + + 0x1u);
        }
    }
L_00086244:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_00086248:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_0008624c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008626c;
        }
    }
L_00086250:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00086254:;
    {
        cpu->r[12] = 0x00000008u;
    }
L_00086258:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_0008625c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_00086260:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_00086264:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00086268:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0008626c:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000008fu, 1, 1);
    }
L_00086270:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0008628c;
        }
    }
L_00086274:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00086278:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_0008627c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00086280:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000ff00u, 0, 0);
    }
L_00086284:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00086288:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0008628c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00086290:;
    {
        cpu->r[12] = 0x00000007u;
    }
L_00086294:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_00086298:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 9u, &shc), 0, 0);
    }
L_0008629c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_000862a0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000862a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mqc_create @ 000862a8 (arm) */
void fn_000862a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000862a8:;
    {
        cpu->r[3] = rd32(0x000862b0u + + 0x1cu);
    }
L_000862ac:;
    {
        cpu->r[0] = 0x00000068u;
    }
L_000862b0:;
    {
        cpu->r[2] = rd32(0x000862b8u + + 0x18u);
    }
L_000862b4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000862bcu, cpu->r[3], 0, 0);
    }
L_000862b8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000862bc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000862c0:;
    {
        cpu->r[14] = 0x000862c8u;
    }
L_000862c4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000862c8u)) return;
    }
L_000862c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000862ccu)) return;
    }
}

/* mqc_destroy @ 000862d4 (arm) */
void fn_000862d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000862d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000862d8:;
    {
        cpu->r[3] = rd32(0x000862e0u + + 0x1cu);
    }
L_000862dc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000862e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000862e8u, cpu->r[3], 0, 0);
    }
L_000862e4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000862e8u)) return;
        }
    }
L_000862e8:;
    {
        cpu->r[2] = rd32(0x000862f0u + + 0x10u);
    }
L_000862ec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000862f0:;
    {
        cpu->r[14] = 0x000862f8u;
    }
L_000862f4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000862f8u)) return;
    }
L_000862f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000862fcu)) return;
    }
}

/* mqc_numbytes @ 00086304 (arm) */
void fn_00086304(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086304:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_00086308:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0008630c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00086310:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mqc_init_enc @ 00086314 (arm) */
void fn_00086314(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086314:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_00086318:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008631c:;
    {
        wr32(cpu->r[0] + + 0x64u, cpu->r[3]);
    }
L_00086320:;
    {
        cpu->r[3] = 0x00008000u;
    }
L_00086324:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_00086328:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0008632c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_00086330:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_00086334:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_00086338:;
    {
        cpu->r[3] = rd8(cpu->r[1] + - 0x1u);
    }
L_0008633c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_00086340:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_00086344:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000000du;
        }
    }
L_00086348:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
        }
    }
L_0008634c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mqc_encode @ 00086350 (arm) */
void fn_00086350(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086350:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x64u);
    }
L_00086354:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00086358:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0008635c:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_00086360:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00086364:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_00086368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000863f4;
        }
    }
L_0008636c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00086370:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00086374:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_00086378:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_0008637c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00086380:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00086384:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00086388:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0008638c:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_00086390:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
        }
    }
L_00086394:;
    {
        if (cond_test(cpu, 3)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
        }
    }
L_00086398:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0008639c:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0xcu);
    }
L_000863a0:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[4], cpu->r[1]);
        }
    }
L_000863a4:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_000863a8:;
    {
        goto L_000863b8;
    }
L_000863ac:;
    {
        { uint32_t v = cpu->r[3] & 0x00008000u; set_nz(cpu, v); }
    }
L_000863b0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000863b4u)) return;
        }
    }
L_000863b4:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000863b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_000863bc:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000863c0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000863c4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_000863c8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000863cc:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_000863d0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000863d4:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[2]);
    }
L_000863d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000863ac;
        }
    }
L_000863dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000863e0:;
    {
        cpu->r[14] = 0x000863e4u; fn_00086164(cpu);
    }
L_000863e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_000863e8:;
    {
        { uint32_t v = cpu->r[3] & 0x00008000u; set_nz(cpu, v); }
    }
L_000863ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000863b4;
        }
    }
L_000863f0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000863f4u)) return;
    }
L_000863f4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_000863f8:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000863fc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_00086400:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00086404:;
    {
        { uint32_t v = cpu->r[0] & 0x00008000u; set_nz(cpu, v); }
    }
L_00086408:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00086484;
        }
    }
L_0008640c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00086410:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00086414:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_00086418:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
        }
    }
L_0008641c:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[1] = rd32(cpu->r[4]);
        }
    }
L_00086420:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[1] = rd32(cpu->r[4]);
        }
    }
L_00086424:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
        }
    }
L_00086428:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_0008642c:;
    {
        if (cond_test(cpu, 3)) {
        wr32(cpu->r[4], cpu->r[1]);
        }
    }
L_00086430:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00086434:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00086438:;
    {
        goto L_00086448;
    }
L_0008643c:;
    {
        { uint32_t v = cpu->r[0] & 0x00008000u; set_nz(cpu, v); }
    }
L_00086440:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00086444u)) return;
        }
    }
L_00086444:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00086448:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0008644c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00086450:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_00086454:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00086458:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008645c:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_00086460:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00086464:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00086468:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008643c;
        }
    }
L_0008646c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00086470:;
    {
        cpu->r[14] = 0x00086474u; fn_00086164(cpu);
    }
L_00086474:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00086478:;
    {
        { uint32_t v = cpu->r[0] & 0x00008000u; set_nz(cpu, v); }
    }
L_0008647c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00086444;
        }
    }
L_00086480:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00086484u)) return;
    }
L_00086484:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00086488:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_0008648c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00086490:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00086494:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00086498u)) return;
    }
}

/* mqc_flush @ 00086498 (arm) */
void fn_00086498(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086498:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_0008649c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_000864a0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000864a4:;
    {
        cpu->r[3] = (~shifter(cpu->r[2], 3, 16u, &shc));
    }
L_000864a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_000864ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000864b0:;
    {
        cpu->r[3] = (~shifter(cpu->r[3], 2, 16u, &shc));
    }
L_000864b4:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000864b8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000864bc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_000864c0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00008000u, 1, 0);
        }
    }
L_000864c4:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[0], cpu->r[3]);
        }
    }
L_000864c8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000864cc:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000864d0:;
    {
        cpu->r[14] = 0x000864d4u; fn_00086164(cpu);
    }
L_000864d4:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_000864d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000864dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000864e0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000864e4:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000864e8:;
    {
        cpu->r[14] = 0x000864ecu; fn_00086164(cpu);
    }
L_000864ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_000864f0:;
    {
        cpu->r[2] = rd8(cpu->r[3]);
    }
L_000864f4:;
    {
        sub_flags(cpu, cpu->r[2], 0x000000ffu, 1, 1);
    }
L_000864f8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_000864fc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
        }
    }
L_00086500:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00086504u)) return;
    }
}

/* mqc_bypass_init_enc @ 00086504 (arm) */
void fn_00086504(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086504:;
    {
        cpu->r[3] = 0x00000008u;
    }
L_00086508:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0008650c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00086510:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00086514:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mqc_bypass_enc @ 00086518 (arm) */
void fn_00086518(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086518:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0008651c:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_00086520:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00086524:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_00086528:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008652c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, (cpu->r[3] & 0xffu), &shc), 0, 0);
    }
L_00086530:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00086534:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00086538:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_0008653c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00086540:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_00086544:;
    {
        wr8(cpu->r[2] + + 0x1u, cpu->r[3]);
    }
L_00086548:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_0008654c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_00086550:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00086554:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_00086558:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_0008655c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000007u;
        }
    }
L_00086560:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
        }
    }
L_00086564:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00086568:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0008656c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mqc_bypass_flush_enc @ 00086570 (arm) */
void fn_00086570(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086570:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00086574:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00086578:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000865b4;
        }
    }
L_0008657c:;
    {
        cpu->r[1] = rd32(cpu->r[0]);
    }
L_00086580:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00086584:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00086588:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008658c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, (cpu->r[3] & 0xffu), &shc), 0, 0);
    }
L_00086590:;
    {
        uint32_t v = cpu->r[2] ^ 0x00000001u; cpu->r[2] = v;
    }
L_00086594:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00086584;
        }
    }
L_00086598:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_0008659c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000865a0:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_000865a4:;
    {
        wr8(cpu->r[2] + + 0x1u, cpu->r[1]);
    }
L_000865a8:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000865ac:;
    {
        cpu->r[3] = 0x00000008u;
    }
L_000865b0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_000865b4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000865b8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mqc_restart_enc @ 000865bc (arm) */
void fn_000865bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000865bc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_000865c0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000865c4:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_000865c8:;
    {
        cpu->r[5] = sub_flags(cpu, 0x0000000cu, cpu->r[3], 1, 0);
    }
L_000865cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000865d0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000865d4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000865d8:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000865dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00086604;
        }
    }
L_000865e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000865e4:;
    {
        cpu->r[14] = 0x000865e8u; fn_00086164(cpu);
    }
L_000865e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000865ec:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_000865f0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_000865f4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000865f8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000865fc:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00086600:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000865e0;
        }
    }
L_00086604:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00086608:;
    {
        cpu->r[14] = 0x0008660cu; fn_00086164(cpu);
    }
L_0008660c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00086610:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00086614u)) return;
    }
}

/* mqc_restart_init_enc @ 00086614 (arm) */
void fn_00086614(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086614:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_00086618:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_0008661c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00086620:;
    {
        wr32(cpu->r[0] + + 0x64u, cpu->r[2]);
    }
L_00086624:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00086628:;
    {
        cpu->r[2] = 0x00008000u;
    }
L_0008662c:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_00086630:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00086634:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_00086638:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008663c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00086640:;
    {
        cpu->r[3] = rd8(cpu->r[3] + - 0x1u);
    }
L_00086644:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_00086648:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000000du;
        }
    }
L_0008664c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
        }
    }
L_00086650:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mqc_erterm_enc @ 00086654 (arm) */
void fn_00086654(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086654:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00086658:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0008665c:;
    {
        cpu->r[5] = sub_flags(cpu, 0x0000000cu, cpu->r[3], 1, 0);
    }
L_00086660:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00086664:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00086668:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00086698;
        }
    }
L_0008666c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00086670:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_00086674:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00086678:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[6]);
    }
L_0008667c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00086680:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00086684:;
    {
        cpu->r[14] = 0x00086688u; fn_00086164(cpu);
    }
L_00086688:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0008668c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_00086690:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00086694:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00086670;
        }
    }
L_00086698:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0008669c:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_000866a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_000866a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000866a8u)) return;
        }
    }
L_000866a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000866ac:;
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
L_000866b0:;
    {
        return fn_00086164(cpu);
    }
}

/* mqc_segmark_enc @ 000866b4 (arm) */
void fn_000866b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000866b4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000866b8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000866bc:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_000866c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000060u, 0, 0);
    }
L_000866c4:;
    {
        wr32(cpu->r[0] + + 0x64u, cpu->r[3]);
    }
L_000866c8:;
    {
        uint32_t v = cpu->r[4] & 0x00000001u; cpu->r[1] = v;
    }
L_000866cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000866d0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000866d4:;
    {
        cpu->r[14] = 0x000866d8u; fn_00086350(cpu);
    }
L_000866d8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000005u, 1, 1);
    }
L_000866dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000866c8;
        }
    }
L_000866e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000866e4u)) return;
    }
}

/* mqc_init_dec @ 000866e4 (arm) */
void fn_000866e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000866e4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000866e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_000866ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000866f0:;
    {
        wr32(cpu->r[0] + + 0x64u, cpu->r[3]);
    }
L_000866f4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000866f8:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_000866fc:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00086700:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00086704:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_00086708:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00ff0000u;
        }
    }
L_0008670c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd8(cpu->r[1]);
        }
    }
L_00086710:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[3], 2, 16u, &shc); cpu->r[3] = v;
        }
    }
L_00086714:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00086718:;
    {
        cpu->r[14] = 0x0008671cu; fn_00086224(cpu);
    }
L_0008671c:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_00086720:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00086724:;
    {
        cpu->r[1] = 0x00008000u;
    }
L_00086728:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_0008672c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 7u, &shc); cpu->r[2] = v;
    }
L_00086730:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 0);
    }
L_00086734:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00086738:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_0008673c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00086740u)) return;
    }
}

/* mqc_decode @ 00086740 (arm) */
void fn_00086740(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086740:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x64u);
    }
L_00086744:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_00086748:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_0008674c:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_00086750:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00086754:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00086758:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0008675c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_00086760:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_00086764:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00086768:;
    {
        sub_flags(cpu, cpu->r[0], shifter(cpu->r[2], 3, 16u, &shc), 1, 1);
    }
L_0008676c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000867e4;
        }
    }
L_00086770:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_00086774:;
    {
        if (cond_test(cpu, 3)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
        }
    }
L_00086778:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
        }
    }
L_0008677c:;
    {
        cpu->r[5] = 0x00007fffu;
    }
L_00086780:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
        }
    }
L_00086784:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
        }
    }
L_00086788:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
        }
    }
L_0008678c:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[6] = sub_flags(cpu, 0x00000001u, cpu->r[6], 1, 0);
        }
    }
L_00086790:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
        }
    }
L_00086794:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[12], cpu->r[1]);
        }
    }
L_00086798:;
    {
        if (cond_test(cpu, 3)) {
        wr32(cpu->r[12], cpu->r[3]);
        }
    }
L_0008679c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000867a0:;
    {
        goto L_000867c8;
    }
L_000867a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_000867a8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000867ac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000867b0:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_000867b4:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_000867b8:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000867bc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_000867c0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_000867c4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000867f8;
        }
    }
L_000867c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000867cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000867a4;
        }
    }
L_000867d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000867d4:;
    {
        cpu->r[14] = 0x000867d8u; fn_00086224(cpu);
    }
L_000867d8:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_000867dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000867e0:;
    {
        goto L_000867a4;
    }
L_000867e4:;
    {
        { uint32_t v = cpu->r[1] & 0x00008000u; set_nz(cpu, v); }
    }
L_000867e8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 16u, &shc), 1, 0);
    }
L_000867ec:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_000867f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
        }
    }
L_000867f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00086800;
        }
    }
L_000867f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000867fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00086800u)) return;
    }
L_00086800:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00086804:;
    {
        cpu->r[5] = 0x00007fffu;
    }
L_00086808:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0008680c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
        }
    }
L_00086810:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
        }
    }
L_00086814:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
        }
    }
L_00086818:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
        }
    }
L_0008681c:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[12], cpu->r[2]);
        }
    }
L_00086820:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[6] = sub_flags(cpu, 0x00000001u, cpu->r[6], 1, 0);
        }
    }
L_00086824:;
    {
        if (cond_test(cpu, 3)) {
        wr32(cpu->r[12], cpu->r[2]);
        }
    }
L_00086828:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0008682c:;
    {
        goto L_00086854;
    }
L_00086830:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_00086834:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_00086838:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_0008683c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00086840:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_00086844:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00086848:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_0008684c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00086850:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000867f8;
        }
    }
L_00086854:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00086858:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00086830;
        }
    }
L_0008685c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00086860:;
    {
        cpu->r[14] = 0x00086864u; fn_00086224(cpu);
    }
L_00086864:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[3] = v1;
    }
L_00086868:;
    {
        goto L_00086830;
    }
}

/* mqc_resetstates @ 0008686c (arm) */
void fn_0008686c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008686c:;
    {
        cpu->r[2] = rd32(0x00086874u + + 0x1cu);
    }
L_00086870:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00086874:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008687cu, cpu->r[2], 0, 0);
    }
L_00086878:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0008687c:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_00086880:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000013u, 1, 1);
    }
L_00086884:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00086888:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00086878;
        }
    }
L_0008688c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mqc_setstate @ 00086894 (arm) */
void fn_00086894(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086894:;
    {
        cpu->r[12] = rd32(0x0008689cu + + 0x14u);
    }
L_00086898:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0008689c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000006u, 0, 0);
    }
L_000868a0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000868a8u, cpu->r[12], 0, 0);
    }
L_000868a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_000868a8:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[12]);
    }
L_000868ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mqc_reset_enc @ 000868b4 (arm) */
void fn_000868b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000868b4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000868b8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000868bc:;
    {
        cpu->r[14] = 0x000868c0u; fn_0008686c(cpu);
    }
L_000868c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000868c4:;
    {
        cpu->r[1] = 0x00000012u;
    }
L_000868c8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000868cc:;
    {
        cpu->r[3] = 0x0000002eu;
    }
L_000868d0:;
    {
        cpu->r[14] = 0x000868d4u; fn_00086894(cpu);
    }
L_000868d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000868d8:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_000868dc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000868e0:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_000868e4:;
    {
        cpu->r[14] = 0x000868e8u; fn_00086894(cpu);
    }
L_000868e8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000868ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000868f0:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_000868f4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000868f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_000868fc:;
    {
        return fn_00086894(cpu);
    }
}

/* opj_version @ 00086900 (arm) */
void fn_00086900(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086900:;
    {
        cpu->r[0] = rd32(0x00086908u + + 0x4u);
    }
L_00086904:;
    {
        cpu->r[0] = add_flags(cpu, 0x0008690cu, cpu->r[0], 0, 0);
    }
L_00086908:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* opj_destroy_cstr_info @ 00086910 (arm) */
void fn_00086910(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086910:;
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
L_00086914:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00086918:;
    {
        cpu->r[10] = rd32(0x00086920u + + 0x98u);
    }
L_0008691c:;
    {
        cpu->r[10] = add_flags(cpu, 0x00086924u, cpu->r[10], 0, 0);
    }
L_00086920:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00086924u)) return;
        }
    }
L_00086924:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_00086928:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x2cu);
    }
L_0008692c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_00086930:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00086934:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000869b0;
        }
    }
L_00086938:;
    {
        cpu->r[9] = rd32(0x00086940u + + 0x7cu);
    }
L_0008693c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00086940:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_00086944:;
    {
        cpu->r[6] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_00086948:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x58u);
    }
L_0008694c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00086950:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_00086954:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_00086958:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000240u, 0, 0);
    }
L_0008695c:;
    {
        cpu->r[14] = 0x00086964u;
    }
L_00086960:;
    {
        uint32_t t = rd32(cpu->r[6]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00086964u)) return;
    }
L_00086964:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x224u);
    }
L_00086968:;
    {
        cpu->r[14] = 0x00086970u;
    }
L_0008696c:;
    {
        uint32_t t = rd32(cpu->r[6]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00086970u)) return;
    }
L_00086970:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x23cu);
    }
L_00086974:;
    {
        cpu->r[14] = 0x0008697cu;
    }
L_00086978:;
    {
        uint32_t t = rd32(cpu->r[6]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008697cu)) return;
    }
L_0008697c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_00086980:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x2cu);
    }
L_00086984:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_00086988:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0008698c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00086948;
        }
    }
L_00086990:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x58u);
    }
L_00086994:;
    {
        cpu->r[4] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_00086998:;
    {
        cpu->r[14] = 0x000869a0u;
    }
L_0008699c:;
    {
        uint32_t t = rd32(cpu->r[4]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000869a0u)) return;
    }
L_000869a0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x44u);
    }
L_000869a4:;
    {
        cpu->r[14] = 0x000869acu;
    }
L_000869a8:;
    {
        uint32_t t = rd32(cpu->r[4]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000869acu)) return;
    }
L_000869ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000869b0u)) return;
    }
L_000869b0:;
    {
        cpu->r[9] = rd32(0x000869b8u + + 0x4u);
    }
L_000869b4:;
    {
        goto L_00086990;
    }
}

/* opj_encode_with_info @ 000869c0 (arm) */
void fn_000869c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000869c0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000869c4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
        }
    }
L_000869c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000869f0;
        }
    }
L_000869cc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000869d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000869f0;
        }
    }
L_000869d4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0xcu);
    }
L_000869d8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000869dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000869e8;
        }
    }
L_000869e0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_000869e4:;
    {
        return fn_000834e0(cpu);
    }
L_000869e8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000002u, 1, 1);
    }
L_000869ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000869f8;
        }
    }
L_000869f0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000869f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000869f8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_000869fc:;
    {
        return fn_00084ca4(cpu);
    }
}

/* opj_encode @ 00086a00 (arm) */
void fn_00086a00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086a00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00086a04:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00086a08:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00086a0c:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00086a10:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00086a14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00086a28;
        }
    }
L_00086a18:;
    {
        cpu->r[2] = rd32(0x00086a20u + + 0x20u);
    }
L_00086a1c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00086a20:;
    {
        cpu->r[2] = add_flags(cpu, 0x00086a28u, cpu->r[2], 0, 0);
    }
L_00086a24:;
    {
        cpu->r[14] = 0x00086a28u; fn_00080304(cpu);
    }
L_00086a28:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00086a2c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00086a30:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00086a34:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00086a38:;
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
L_00086a3c:;
    {
        return fn_000869c0(cpu);
    }
}

/* opj_setup_encoder @ 00086a44 (arm) */
void fn_00086a44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086a44:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00086a48:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
        }
    }
L_00086a4c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00086a50:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00086a54:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00086a58:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_00086a5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00086a60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00086a6c;
        }
    }
L_00086a64:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_00086a68:;
    {
        return fn_000826f0(cpu);
    }
L_00086a6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00086a70:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00086a74:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_00086a78:;
    {
        return fn_00084ecc(cpu);
    }
}

/* opj_set_default_encoder_parameters @ 00086a7c (arm) */
void fn_00086a7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086a7c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00086a80:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00086a84:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00086a88u)) return;
        }
    }
L_00086a88:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00086a8c:;
    {
        cpu->r[2] = 0x00004904u;
    }
L_00086a90:;
    {
        cpu->r[14] = 0x00086a94u; imp_memset(cpu); /* memset */
    }
L_00086a94:;
    {
        cpu->r[2] = 0x00004900u;
    }
L_00086a98:;
    {
        cpu->r[1] = 0x00004718u;
    }
L_00086a9c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00086aa0:;
    {
        cpu->r[12] = 0x00004710u;
    }
L_00086aa4:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00086aa8:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00086aac:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_00086ab0:;
    {
        cpu->r[1] = 0x000015e0u;
    }
L_00086ab4:;
    {
        cpu->r[0] = 0x00000040u;
    }
L_00086ab8:;
    {
        cpu->r[5] = 0x00000006u;
    }
L_00086abc:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_00086ac0:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_00086ac4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00086ac8:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[1]);
    }
L_00086acc:;
    {
        cpu->r[12] = 0x000015d8u;
    }
L_00086ad0:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[5]);
    }
L_00086ad4:;
    {
        cpu->r[12] = 0x000048f4u;
    }
L_00086ad8:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[3]);
    }
L_00086adc:;
    {
        cpu->r[12] = 0x000048f8u;
    }
L_00086ae0:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[3]);
    }
L_00086ae4:;
    {
        cpu->r[12] = 0x000048fcu;
    }
L_00086ae8:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[3]);
    }
L_00086aec:;
    {
        cpu->r[12] = 0x000015dcu;
    }
L_00086af0:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[0]);
    }
L_00086af4:;
    {
        cpu->r[0] = 0x000015ecu;
    }
L_00086af8:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_00086afc:;
    {
        cpu->r[0] = 0x0000470cu;
    }
L_00086b00:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[1]);
    }
L_00086b04:;
    {
        cpu->r[1] = 0x00004714u;
    }
L_00086b08:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_00086b0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00086b10u)) return;
    }
}

/* opj_set_default_decoder_parameters @ 00086b10 (arm) */
void fn_00086b10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086b10:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00086b14:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00086b18:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00086b1cu)) return;
        }
    }
L_00086b1c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00086b20:;
    {
        cpu->r[2] = 0x00002020u;
    }
L_00086b24:;
    {
        cpu->r[14] = 0x00086b28u; imp_memset(cpu); /* memset */
    }
L_00086b28:;
    {
        cpu->r[2] = 0x0000201cu;
    }
L_00086b2c:;
    {
        cpu->r[1] = 0x0000200cu;
    }
L_00086b30:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00086b34:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00086b38:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00086b3c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_00086b40:;
    {
        cpu->r[1] = 0x00002008u;
    }
L_00086b44:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00086b48:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_00086b4c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00086b50:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00086b54u)) return;
    }
}

/* opj_destroy_compress @ 00086b54 (arm) */
void fn_00086b54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086b54:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00086b58:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00086b5c:;
    {
        cpu->r[4] = rd32(0x00086b64u + + 0x44u);
    }
L_00086b60:;
    {
        cpu->r[4] = add_flags(cpu, 0x00086b68u, cpu->r[4], 0, 0);
    }
L_00086b64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00086b68u)) return;
        }
    }
L_00086b68:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_00086b6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00086b70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00086b9c;
        }
    }
L_00086b74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00086b78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00086b84;
        }
    }
L_00086b7c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x14u);
    }
L_00086b80:;
    {
        cpu->r[14] = 0x00086b84u; fn_000850c0(cpu);
    }
L_00086b84:;
    {
        cpu->r[3] = rd32(0x00086b8cu + + 0x20u);
    }
L_00086b88:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00086b8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00086b90:;
    {
        cpu->r[14] = 0x00086b98u;
    }
L_00086b94:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00086b98u)) return;
    }
L_00086b98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00086b9cu)) return;
    }
L_00086b9c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x10u);
    }
L_00086ba0:;
    {
        cpu->r[14] = 0x00086ba4u; fn_00080aa0(cpu);
    }
L_00086ba4:;
    {
        goto L_00086b84;
    }
}

/* opj_create_compress @ 00086bb0 (arm) */
void fn_00086bb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086bb0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00086bb4:;
    {
        cpu->r[4] = rd32(0x00086bbcu + + 0xa4u);
    }
L_00086bb8:;
    {
        cpu->r[3] = rd32(0x00086bc0u + + 0xa4u);
    }
L_00086bbc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00086bc0:;
    {
        cpu->r[4] = add_flags(cpu, 0x00086bc8u, cpu->r[4], 0, 0);
    }
L_00086bc4:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_00086bc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00086bcc:;
    {
        cpu->r[14] = 0x00086bd4u;
    }
L_00086bd0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00086bd4u)) return;
    }
L_00086bd4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00086bd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00086c08;
        }
    }
L_00086bdc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00086be0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00086be4:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_00086be8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00086c10;
        }
    }
L_00086bec:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_00086bf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00086c30;
        }
    }
L_00086bf4:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_00086bf8:;
    {
        cpu->r[3] = rd32(0x00086c00u + + 0x68u);
    }
L_00086bfc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00086c00:;
    {
        cpu->r[14] = 0x00086c08u;
    }
L_00086c04:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00086c08u)) return;
    }
L_00086c08:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00086c0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00086c10u)) return;
    }
L_00086c10:;
    {
        cpu->r[14] = 0x00086c14u; fn_00080a68(cpu);
    }
L_00086c14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00086c18:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00086c1c:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[0]);
    }
L_00086c20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00086c44;
        }
    }
L_00086c24:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[6]);
    }
L_00086c28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00086c2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00086c30u)) return;
    }
L_00086c30:;
    {
        cpu->r[14] = 0x00086c34u; fn_00085134(cpu);
    }
L_00086c34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00086c38:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00086c3c:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[0]);
    }
L_00086c40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00086c24;
        }
    }
L_00086c44:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00086c48:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_00086c4c:;
    {
        cpu->r[3] = rd32(0x00086c54u + + 0x14u);
    }
L_00086c50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00086c54:;
    {
        cpu->r[14] = 0x00086c5cu;
    }
L_00086c58:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00086c5cu)) return;
    }
L_00086c5c:;
    {
        goto L_00086c08;
    }
}

/* opj_decode_with_info @ 00086c6c (arm) */
void fn_00086c6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086c6c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00086c70:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
        }
    }
L_00086c74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00086c80;
        }
    }
L_00086c78:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00086c7c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00086c80:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_00086c84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00086c88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00086cac;
        }
    }
L_00086c8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00086c90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00086ca4;
        }
    }
L_00086c94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00086c98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00086c78;
        }
    }
L_00086c9c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_00086ca0:;
    {
        return fn_00083180(cpu);
    }
L_00086ca4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_00086ca8:;
    {
        return fn_000856b0(cpu);
    }
L_00086cac:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_00086cb0:;
    {
        return fn_00082f2c(cpu);
    }
}

/* opj_decode @ 00086cb4 (arm) */
void fn_00086cb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086cb4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00086cb8:;
    {
        return fn_00086c6c(cpu);
    }
}

/* opj_setup_decoder @ 00086cbc (arm) */
void fn_00086cbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086cbc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00086cc0:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
        }
    }
L_00086cc4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00086cc8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_00086ccc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00086cd0:;
    {
        if (cond_test(cpu, 12)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00086cd4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00086cd8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00086ce4;
        }
    }
L_00086cdc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_00086ce0:;
    {
        return fn_00080a08(cpu);
    }
L_00086ce4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00086ce8:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00086cec:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_00086cf0:;
    {
        return fn_000859b8(cpu);
    }
}

/* opj_destroy_decompress @ 00086cf4 (arm) */
void fn_00086cf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086cf4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00086cf8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00086cfc:;
    {
        cpu->r[4] = rd32(0x00086d04u + + 0x4cu);
    }
L_00086d00:;
    {
        cpu->r[4] = add_flags(cpu, 0x00086d08u, cpu->r[4], 0, 0);
    }
L_00086d04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00086d08u)) return;
        }
    }
L_00086d08:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_00086d0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00086d10:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00086d24;
        }
    }
L_00086d14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00086d18:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00086d3c;
        }
    }
L_00086d1c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x10u);
    }
L_00086d20:;
    {
        cpu->r[14] = 0x00086d24u; fn_00080840(cpu);
    }
L_00086d24:;
    {
        cpu->r[3] = rd32(0x00086d2cu + + 0x28u);
    }
L_00086d28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00086d2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00086d30:;
    {
        cpu->r[14] = 0x00086d38u;
    }
L_00086d34:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00086d38u)) return;
    }
L_00086d38:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00086d3cu)) return;
    }
L_00086d3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00086d40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00086d24;
        }
    }
L_00086d44:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x14u);
    }
L_00086d48:;
    {
        cpu->r[14] = 0x00086d4cu; fn_000859c0(cpu);
    }
L_00086d4c:;
    {
        goto L_00086d24;
    }
}

/* opj_create_decompress @ 00086d58 (arm) */
void fn_00086d58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086d58:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00086d5c:;
    {
        cpu->r[4] = rd32(0x00086d64u + + 0xb0u);
    }
L_00086d60:;
    {
        cpu->r[3] = rd32(0x00086d68u + + 0xb0u);
    }
L_00086d64:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00086d68:;
    {
        cpu->r[4] = add_flags(cpu, 0x00086d70u, cpu->r[4], 0, 0);
    }
L_00086d6c:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_00086d70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00086d74:;
    {
        cpu->r[14] = 0x00086d7cu;
    }
L_00086d78:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00086d7cu)) return;
    }
L_00086d7c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00086d80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00086dbc;
        }
    }
L_00086d84:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00086d88:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00086d8c:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_00086d90:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00086da4;
        }
    }
L_00086d94:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00086d98:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00086dc4;
        }
    }
L_00086d9c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_00086da0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00086de4;
        }
    }
L_00086da4:;
    {
        cpu->r[3] = rd32(0x00086dacu + + 0x70u);
    }
L_00086da8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00086dac:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00086db0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00086db4:;
    {
        cpu->r[14] = 0x00086dbcu;
    }
L_00086db8:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00086dbcu)) return;
    }
L_00086dbc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00086dc0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00086dc4u)) return;
    }
L_00086dc4:;
    {
        cpu->r[14] = 0x00086dc8u; fn_000807bc(cpu);
    }
L_00086dc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00086dcc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00086dd0:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[0]);
    }
L_00086dd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00086df8;
        }
    }
L_00086dd8:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[6]);
    }
L_00086ddc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00086de0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00086de4u)) return;
    }
L_00086de4:;
    {
        cpu->r[14] = 0x00086de8u; fn_00085a34(cpu);
    }
L_00086de8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00086dec:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00086df0:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[0]);
    }
L_00086df4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00086dd8;
        }
    }
L_00086df8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00086dfc:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_00086e00:;
    {
        cpu->r[3] = rd32(0x00086e08u + + 0x14u);
    }
L_00086e04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00086e08:;
    {
        cpu->r[14] = 0x00086e10u;
    }
L_00086e0c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00086e10u)) return;
    }
L_00086e10:;
    {
        goto L_00086dbc;
    }
}

/* pi_destroy @ 00086e20 (arm) */
void fn_00086e20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086e20:;
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
L_00086e24:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00086e28:;
    {
        cpu->r[4] = rd32(0x00086e30u + + 0xc8u);
    }
L_00086e2c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x6cu);
    }
L_00086e30:;
    {
        cpu->r[4] = add_flags(cpu, 0x00086e38u, cpu->r[4], 0, 0);
    }
L_00086e34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00086e38u)) return;
        }
    }
L_00086e38:;
    {
        cpu->r[9] = 0x000015d4u;
    }
L_00086e3c:;
    {
        cpu->r[8] = rd32(0x00086e44u + + 0xb8u);
    }
L_00086e40:;
    {
        uint32_t v = cpu->r[9] * cpu->r[2] + cpu->r[3]; cpu->r[9] = v;
    }
L_00086e44:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x1a4u);
    }
L_00086e48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00086e4c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00086ecc;
        }
    }
L_00086e50:;
    {
        cpu->r[8] = rd32(0x00086e58u + + 0xa4u);
    }
L_00086e54:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_00086e58:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00086e5c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0xc4u);
    }
L_00086e60:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00086e64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00086ebc;
        }
    }
L_00086e68:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xc0u);
    }
L_00086e6c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00086e70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00086ea8;
        }
    }
L_00086e74:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00086e78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[6], 2, 4u, &shc), 0, 0);
    }
L_00086e7c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00086e80:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
    }
L_00086e84:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00086e88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00086ea0;
        }
    }
L_00086e8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_00086e90:;
    {
        cpu->r[14] = 0x00086e98u;
    }
L_00086e94:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00086e98u)) return;
    }
L_00086e98:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xc0u);
    }
L_00086e9c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0xc4u);
    }
L_00086ea0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_00086ea4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00086e78;
        }
    }
L_00086ea8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_00086eac:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00086eb0:;
    {
        cpu->r[14] = 0x00086eb8u;
    }
L_00086eb4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00086eb8u)) return;
    }
L_00086eb8:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x1a4u);
    }
L_00086ebc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00086ec0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x000000e8u, 0, 0);
    }
L_00086ec4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_00086ec8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00086e5c;
        }
    }
L_00086ecc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_00086ed0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00086ed4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00086ee4;
        }
    }
L_00086ed8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_00086edc:;
    {
        cpu->r[14] = 0x00086ee4u;
    }
L_00086ee0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00086ee4u)) return;
    }
L_00086ee4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_00086ee8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00086eec:;
    {
        cpu->r[14] = 0x00086ef4u;
    }
L_00086ef0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00086ef4u)) return;
    }
L_00086ef4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00086ef8u)) return;
    }
}

/* pi_initialise_encode @ 00086f00 (arm) */
void fn_00086f00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00086f00:;
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
L_00086f04:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000006cu, 1, 0);
    }
L_00086f08:;
    {
        cpu->r[4] = rd32(0x00086f10u + + 0x6e4u);
    }
L_00086f0c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[1]);
    }
L_00086f10:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[2]);
    }
L_00086f14:;
    {
        cpu->r[1] = rd32(0x00086f1cu + + 0x6dcu);
    }
L_00086f18:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_00086f1c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00086f20:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[1]);
    }
L_00086f24:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x6cu);
    }
L_00086f28:;
    {
        cpu->r[2] = 0x000000e8u;
    }
L_00086f2c:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
    }
L_00086f30:;
    {
        cpu->r[3] = 0x000015d4u;
    }
L_00086f34:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x48u);
    }
L_00086f38:;
    {
        uint32_t v = cpu->r[3] * cpu->r[9] + cpu->r[1]; cpu->r[1] = v;
    }
L_00086f3c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[0]);
    }
L_00086f40:;
    {
        cpu->r[5] = add_flags(cpu, 0x00086f48u, cpu->r[5], 0, 0);
    }
L_00086f44:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[4]);
    }
L_00086f48:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[5]);
    }
L_00086f4c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_00086f50:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x1a4u);
    }
L_00086f54:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
    }
L_00086f58:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[2]; cpu->r[0] = v;
    }
L_00086f5c:;
    {
        cpu->r[14] = 0x00086f64u;
    }
L_00086f60:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00086f64u)) return;
    }
L_00086f64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00086f68:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[0]);
    }
L_00086f6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00087328;
        }
    }
L_00086f70:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x54u);
    }
L_00086f74:;
    {
        cpu->r[3] = rd8(cpu->r[11] + + 0x10u);
    }
L_00086f78:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_00086f7c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_00086f80:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x1a4u);
    }
L_00086f84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00086f88:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00087328;
        }
    }
L_00086f8c:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_00086f90:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_00086f94:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_00086f98:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[12]);
    }
L_00086f9c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[14]);
    }
L_00086fa0:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[14]);
    }
L_00086fa4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x54u);
    }
L_00086fa8:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x44u);
    }
L_00086fac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00086fb0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00086fb4:;
    {
        cpu->r[14] = 0x00086fb8u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00086fb8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00086fbc:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00086fc0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00086fc4:;
    {
        cpu->r[14] = 0x00086fc8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00086fc8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_00086fcc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_00086fd0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x34u);
    }
L_00086fd4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x38u);
    }
L_00086fd8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x30u);
    }
L_00086fdc:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_00086fe0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x40u);
    }
L_00086fe4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[4] + cpu->r[1]; cpu->r[2] = v;
    }
L_00086fe8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x48u);
    }
L_00086fec:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00086ff0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[5]);
    }
L_00086ff4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00086ff8:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[11] + + 0xc8u, cpu->r[2]);
        }
    }
L_00086ffc:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[11] + + 0xc8u, cpu->r[12]);
        }
    }
L_00087000:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_00087004:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x34u);
    }
L_00087008:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x3cu);
    }
L_0008700c:;
    {
        cpu->r[12] = rd32(cpu->r[14] + + 0x4u);
    }
L_00087010:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0] + cpu->r[1]; cpu->r[2] = v;
    }
L_00087014:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_00087018:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_0008701c:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[11] + + 0xccu, cpu->r[2]);
        }
    }
L_00087020:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[11] + + 0xccu, cpu->r[12]);
        }
    }
L_00087024:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x38u);
    }
L_00087028:;
    {
        cpu->r[12] = rd32(cpu->r[14] + + 0x8u);
    }
L_0008702c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x30u);
    }
L_00087030:;
    {
        uint32_t v = cpu->r[4] * cpu->r[2] + cpu->r[2]; cpu->r[2] = v;
    }
L_00087034:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x54u);
    }
L_00087038:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_0008703c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00087040:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[11] + + 0xd0u, cpu->r[2]);
        }
    }
L_00087044:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[11] + + 0xd0u, cpu->r[12]);
        }
    }
L_00087048:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_0008704c:;
    {
        cpu->r[12] = rd32(cpu->r[14] + + 0xcu);
    }
L_00087050:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x34u);
    }
L_00087054:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[2]; cpu->r[2] = v;
    }
L_00087058:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_0008705c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00087060:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[11] + + 0xd4u, cpu->r[2]);
        }
    }
L_00087064:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[11] + + 0xd4u, cpu->r[12]);
        }
    }
L_00087068:;
    {
        cpu->r[2] = rd32(cpu->r[14] + + 0x10u);
    }
L_0008706c:;
    {
        wr32(cpu->r[11] + + 0xc0u, cpu->r[2]);
    }
L_00087070:;
    {
        cpu->r[0] = rd32(cpu->r[14] + + 0x10u);
    }
L_00087074:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[0] = v;
    }
L_00087078:;
    {
        cpu->r[14] = 0x00087080u;
    }
L_0008707c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00087080u)) return;
    }
L_00087080:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00087084:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00087088:;
    {
        wr32(cpu->r[11] + + 0xc4u, cpu->r[0]);
    }
L_0008708c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00087314;
        }
    }
L_00087090:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0xc0u);
    }
L_00087094:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00087098:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_0008709c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x38u, cpu->r[5]);
        }
    }
L_000870a0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x30u, cpu->r[5]);
        }
    }
L_000870a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00087334;
        }
    }
L_000870a8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x40u);
    }
L_000870ac:;
    {
        cpu->r[3] = 0x000015d0u;
    }
L_000870b0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_000870b4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x30u);
    }
L_000870b8:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x18u);
    }
L_000870bc:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000870c0:;
    {
        cpu->r[12] = 0x00000434u;
    }
L_000870c4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_000870c8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], shifter(cpu->r[11], 2, 4u, &shc), 0, 0);
    }
L_000870cc:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000870d0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[11] + cpu->r[0]; cpu->r[0] = v;
    }
L_000870d4:;
    {
        uint32_t wb_tmp = cpu->r[2] + cpu->r[14];
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[14]);
        cpu->r[2] = wb_tmp;
    }
L_000870d8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x48u);
    }
L_000870dc:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[11], 2, 4u, &shc), cpu->r[1]);
    }
L_000870e0:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000870e4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000870e8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000870ec:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[4]);
    }
L_000870f0:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[2]);
    }
L_000870f4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000870f8:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[0]);
    }
L_000870fc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[0] = v;
    }
L_00087100:;
    {
        cpu->r[14] = 0x00087108u;
    }
L_00087104:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00087108u)) return;
    }
L_00087108:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008710c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00087110:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[0]);
    }
L_00087114:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00087584;
        }
    }
L_00087118:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_0008711c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00087120:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_00087124:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_00087128:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0008712c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_00087130:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00087134:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[0]);
    }
L_00087138:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0xc8u);
    }
L_0008713c:;
    {
        cpu->r[7] = rd32(cpu->r[6] + shifter(cpu->r[12], 2, 4u, &shc));
    }
L_00087140:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0xccu);
    }
L_00087144:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x4u);
    }
L_00087148:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0xd0u);
    }
L_0008714c:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0xd4u);
    }
L_00087150:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000872e4;
        }
    }
L_00087154:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_00087158:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0008715c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00087160:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_00087164:;
    {
        cpu->r[14] = 0x00087168u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00087168:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0008716c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_00087170:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00087174:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_00087178:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 0);
    }
L_0008717c:;
    {
        cpu->r[14] = 0x00087180u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00087180:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00087184:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00087188:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_0008718c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_00087190:;
    {
        cpu->r[14] = 0x00087194u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00087194:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[9], 0, 0);
    }
L_00087198:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0008719c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000871a0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_000871a4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000871a8:;
    {
        cpu->r[14] = 0x000871acu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000871ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000871b0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000871b4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000871b8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_000871bc:;
    {
        goto L_000872b4;
    }
L_000871c0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x32cu);
    }
L_000871c4:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_000871c8:;
    {
        uint32_t v = shifter(cpu->r[11], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000871cc:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[3], 2, 4u, &shc), cpu->r[0]);
    }
L_000871d0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_000871d4:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x3b0u);
    }
L_000871d8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000871dc:;
    {
        uint32_t v = shifter(cpu->r[11], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[8] = v;
    }
L_000871e0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_000871e4:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[6]);
    }
L_000871e8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_000871ec:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_000871f0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000871f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000871f8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_000871fc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x24u);
    }
L_00087200:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00087204:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00087208:;
    {
        uint32_t v = shifter(cpu->r[4], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0008720c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[12], cpu->r[9], 0, 0);
    }
L_00087210:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], cpu->r[11], 0, 0);
    }
L_00087214:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x20u);
    }
L_00087218:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008721c:;
    {
        uint32_t v = shifter(cpu->r[4], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[4] = v;
    }
L_00087220:;
    {
        uint32_t v = shifter(cpu->r[10], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[10] = v;
    }
L_00087224:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], cpu->r[9], 0, 0);
    }
L_00087228:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[4], 1, 1);
    }
L_0008722c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[11], 0, 0);
    }
L_00087230:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_00087234:;
    {
        uint32_t v = shifter(cpu->r[9], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[9] = v;
    }
L_00087238:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0008723c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[12] = v;
    }
L_00087240:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
        }
    }
L_00087244:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[10], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[10] = v;
        }
    }
L_00087248:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_0008724c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 0);
        }
    }
L_00087250:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[10], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[10] = v;
        }
    }
L_00087254:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[4], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[4] = v;
        }
    }
L_00087258:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = sub_flags(cpu, shifter(cpu->r[4], 2, (cpu->r[0] & 0xffu), &shc), cpu->r[10], 1, 0);
        }
    }
L_0008725c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[4], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[4] = v;
        }
    }
L_00087260:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[9], 1, 1);
    }
L_00087264:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
        }
    }
L_00087268:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[12] = v;
        }
    }
L_0008726c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[7] + + 0x4u);
        }
    }
L_00087270:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[9], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[9] = v;
        }
    }
L_00087274:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[12], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[12] = v;
        }
    }
L_00087278:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[4]);
    }
L_0008727c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_00087280:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = sub_flags(cpu, shifter(cpu->r[9], 2, (cpu->r[6] & 0xffu), &shc), cpu->r[12], 1, 0);
        }
    }
L_00087284:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = cpu->r[4];
        }
    }
L_00087288:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[9], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[9] = v;
        }
    }
L_0008728c:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[9]);
    }
L_00087290:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_00087294:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[9] * cpu->r[4]; cpu->r[4] = v;
        }
    }
L_00087298:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008729c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[4], 1, 1);
    }
L_000872a0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = cpu->r[4];
        }
    }
L_000872a4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000872a8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_000872ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000872e4;
        }
    }
L_000872b0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xcu);
    }
L_000872b4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000872b8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_000872bc:;
    {
        cpu->r[1] = rd32(cpu->r[9]);
    }
L_000872c0:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_000872c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000871c0;
        }
    }
L_000872c8:;
    {
        cpu->r[6] = 0x0000000fu;
    }
L_000872cc:;
    {
        cpu->r[8] = 0x00007fffu;
    }
L_000872d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000872d4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[8]);
    }
L_000872d8:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[3], 2, 4u, &shc), cpu->r[6]);
    }
L_000872dc:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[6]);
    }
L_000872e0:;
    {
        goto L_000871e8;
    }
L_000872e4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x34u);
    }
L_000872e8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000872ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_000872f0:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0xc0u);
    }
L_000872f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000872f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_000872fc:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_00087300:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00087304:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_00087308:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00087334;
        }
    }
L_0008730c:;
    {
        cpu->r[6] = rd32(cpu->r[11] + + 0xc4u);
    }
L_00087310:;
    {
        goto L_000870a8;
    }
L_00087314:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x58u);
    }
L_00087318:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_0008731c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00087320:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[6]);
    }
L_00087324:;
    {
        cpu->r[14] = 0x00087328u; fn_00086e20(cpu);
    }
L_00087328:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x58u);
    }
L_0008732c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_00087330:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00087334u)) return;
    }
L_00087334:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_00087338:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0008733c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00087340:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00087344:;
    {
        wr32(cpu->r[2] + + 0x14u, cpu->r[3]);
    }
L_00087348:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_0008734c:;
    {
        wr32(cpu->r[2] + + 0x10u, cpu->r[1]);
    }
L_00087350:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x58u);
    }
L_00087354:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x10u);
    }
L_00087358:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008735c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0xc0u);
    }
L_00087360:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1]; cpu->r[2] = v;
    }
L_00087364:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00087368:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2]; cpu->r[3] = v;
    }
L_0008736c:;
    {
        wr32(cpu->r[11] + + 0xcu, cpu->r[2]);
    }
L_00087370:;
    {
        wr32(cpu->r[11] + + 0x8u, cpu->r[3]);
    }
L_00087374:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00087434;
        }
    }
L_00087378:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0008737c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00087380:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x34u);
    }
L_00087384:;
    {
        cpu->r[11] = cpu->r[10];
    }
L_00087388:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_0008738c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[9]);
    }
L_00087390:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_00087394:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00087398:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00087420;
        }
    }
L_0008739c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000873a0:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0xcu);
    }
L_000873a4:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000873a8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000873ac:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xe0u);
    }
L_000873b0:;
    {
        cpu->r[8] = rd32(cpu->r[0]);
    }
L_000873b4:;
    {
        uint32_t wb_tmp = cpu->r[1] + cpu->r[4];
        cpu->r[10] = rd32(cpu->r[1] + cpu->r[4]);
        cpu->r[1] = wb_tmp;
    }
L_000873b8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000873bc:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x4u);
    }
L_000873c0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_000873c4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 0);
    }
L_000873c8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_000873cc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[2], 0, 0);
    }
L_000873d0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_000873d4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_000873d8:;
    {
        uint32_t v = shifter(cpu->r[8], 2, (cpu->r[10] & 0xffu), &shc); cpu->r[8] = v;
    }
L_000873dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000873e0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_000873e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000873e8:;
    {
        uint32_t v = shifter(cpu->r[7], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000873ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000873f8;
        }
    }
L_000873f0:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[12], 1, 1);
    }
L_000873f4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[8] = cpu->r[12];
        }
    }
L_000873f8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0xe4u);
    }
L_000873fc:;
    {
        wr32(cpu->r[5] + + 0xe0u, cpu->r[8]);
    }
L_00087400:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00087404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00087410;
        }
    }
L_00087408:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0008740c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_00087410:;
    {
        wr32(cpu->r[5] + + 0xe4u, cpu->r[1]);
    }
L_00087414:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_00087418:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0008741c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000873a8;
        }
    }
L_00087420:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00087424:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_00087428:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_0008742c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[11], 1, 1);
    }
L_00087430:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00087390;
        }
    }
L_00087434:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_00087438:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008743c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008759c;
        }
    }
L_00087440:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_00087444:;
    {
        cpu->r[3] = rd32(cpu->r[12] + - 0xe4u);
    }
L_00087448:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[3]);
    }
L_0008744c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_00087450:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1a8u);
    }
L_00087454:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00087458:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000874d0;
        }
    }
L_0008745c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_00087460:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_00087464:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00087468:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00087478;
        }
    }
L_0008746c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x64u);
    }
L_00087470:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00087474:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000874d0;
        }
    }
L_00087478:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x50u);
    }
L_0008747c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x50u);
    }
L_00087480:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x60u);
    }
L_00087484:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x1b0u);
    }
L_00087488:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0008748c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x1bcu);
    }
L_00087490:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x1acu);
    }
L_00087494:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x1b8u);
    }
L_00087498:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x1ccu);
    }
L_0008749c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1b4u);
    }
L_000874a0:;
    {
        wr32(cpu->r[5] + + 0x1f8u, cpu->r[2]);
    }
L_000874a4:;
    {
        wr32(cpu->r[5] + + 0x208u, cpu->r[1]);
    }
L_000874a8:;
    {
        wr32(cpu->r[5] + + 0x1f4u, cpu->r[0]);
    }
L_000874ac:;
    {
        wr32(cpu->r[5] + + 0x204u, cpu->r[12]);
    }
L_000874b0:;
    {
        wr32(cpu->r[5] + + 0x1d0u, cpu->r[4]);
    }
L_000874b4:;
    {
        wr32(cpu->r[5] + + 0x200u, cpu->r[3]);
    }
L_000874b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008750c;
        }
    }
L_000874bc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x16cu);
    }
L_000874c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000874c4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000874c8:;
    {
        wr32(cpu->r[5] + + 0x1f0u, cpu->r[2]);
    }
L_000874cc:;
    {
        goto L_0008750c;
    }
L_000874d0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x50u);
    }
L_000874d4:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_000874d8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_000874dc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_000874e0:;
    {
        wr32(cpu->r[9] + + 0x1f8u, cpu->r[11]);
    }
L_000874e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000874e8:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x10u);
    }
L_000874ec:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_000874f0:;
    {
        wr32(cpu->r[9] + + 0x1f4u, cpu->r[11]);
    }
L_000874f4:;
    {
        wr32(cpu->r[9] + + 0x204u, cpu->r[0]);
    }
L_000874f8:;
    {
        wr32(cpu->r[9] + + 0x208u, cpu->r[3]);
    }
L_000874fc:;
    {
        wr32(cpu->r[9] + + 0x1f0u, cpu->r[11]);
    }
L_00087500:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0xcu);
    }
L_00087504:;
    {
        wr32(cpu->r[9] + + 0x1d0u, cpu->r[2]);
    }
L_00087508:;
    {
        wr32(cpu->r[9] + + 0x200u, cpu->r[3]);
    }
L_0008750c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x50u);
    }
L_00087510:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00087514:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x34u);
    }
L_00087518:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008751c:;
    {
        wr32(cpu->r[2] + + 0x1fcu, cpu->r[3]);
    }
L_00087520:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x44u);
    }
L_00087524:;
    {
        wr32(cpu->r[2] + + 0x20cu, cpu->r[5]);
    }
L_00087528:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0xc8u);
    }
L_0008752c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x60u);
    }
L_00087530:;
    {
        wr32(cpu->r[2] + + 0x210u, cpu->r[3]);
    }
L_00087534:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00087538:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0xd0u);
    }
L_0008753c:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[4]);
    }
L_00087540:;
    {
        wr32(cpu->r[2] + + 0x214u, cpu->r[3]);
    }
L_00087544:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0xccu);
    }
L_00087548:;
    {
        wr32(cpu->r[2] + + 0x218u, cpu->r[3]);
    }
L_0008754c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0xd4u);
    }
L_00087550:;
    {
        wr32(cpu->r[2] + + 0x21cu, cpu->r[3]);
    }
L_00087554:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0xe0u);
    }
L_00087558:;
    {
        wr32(cpu->r[2] + + 0x220u, cpu->r[3]);
    }
L_0008755c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0xe4u);
    }
L_00087560:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x000000e8u, 0, 0);
    }
L_00087564:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[9]);
    }
L_00087568:;
    {
        wr32(cpu->r[2] + + 0x224u, cpu->r[3]);
    }
L_0008756c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000094u, 0, 0);
    }
L_00087570:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x1a4u);
    }
L_00087574:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[2]);
    }
L_00087578:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0008757c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00086fa4;
        }
    }
L_00087580:;
    {
        goto L_00087328;
    }
L_00087584:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x58u);
    }
L_00087588:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_0008758c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00087590:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[4]);
    }
L_00087594:;
    {
        cpu->r[14] = 0x00087598u; fn_00086e20(cpu);
    }
L_00087598:;
    {
        goto L_00087328;
    }
L_0008759c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_000875a0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x44u);
    }
L_000875a4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x48u);
    }
L_000875a8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_000875ac:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_000875b0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000875b4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_000875b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_000875bc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[0] = v;
    }
L_000875c0:;
    {
        cpu->r[14] = 0x000875c8u;
    }
L_000875c4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000875c8u)) return;
    }
L_000875c8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x34u);
    }
L_000875cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000875d0:;
    {
        wr32(cpu->r[9] + + 0x4u, cpu->r[0]);
    }
L_000875d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008744c;
        }
    }
L_000875d8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x60u);
    }
L_000875dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x58u);
    }
L_000875e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_000875e4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000875e8:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[11]);
    }
L_000875ec:;
    {
        cpu->r[14] = 0x000875f0u; fn_00086e20(cpu);
    }
L_000875f0:;
    {
        goto L_00087328;
    }
}

/* pi_create_decode @ 000875fc (arm) */
void fn_000875fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000875fc:;
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
L_00087600:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000006cu, 1, 0);
    }
L_00087604:;
    {
        cpu->r[4] = rd32(0x0008760cu + + 0x5c0u);
    }
L_00087608:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[1]);
    }
L_0008760c:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[2]);
    }
L_00087610:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x58u);
    }
L_00087614:;
    {
        cpu->r[1] = rd32(0x0008761cu + + 0x5b4u);
    }
L_00087618:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x60u);
    }
L_0008761c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x6cu);
    }
L_00087620:;
    {
        cpu->r[1] = add_flags(cpu, 0x00087628u, cpu->r[1], 0, 0);
    }
L_00087624:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[1]);
    }
L_00087628:;
    {
        cpu->r[1] = 0x000015d4u;
    }
L_0008762c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[0]);
    }
L_00087630:;
    {
        cpu->r[2] = 0x000000e8u;
    }
L_00087634:;
    {
        uint32_t v = cpu->r[1] * cpu->r[5] + cpu->r[3]; cpu->r[3] = v;
    }
L_00087638:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x50u);
    }
L_0008763c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[4]);
    }
L_00087640:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_00087644:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00087648:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[4]);
    }
L_0008764c:;
    {
        cpu->r[0] = rd32(cpu->r[11] + + 0x1a4u);
    }
L_00087650:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[2]; cpu->r[0] = v;
    }
L_00087654:;
    {
        cpu->r[14] = 0x0008765cu;
    }
L_00087658:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008765cu)) return;
    }
L_0008765c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00087660:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_00087664:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00087a20;
        }
    }
L_00087668:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x1a4u);
    }
L_0008766c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00087670:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00087a20;
        }
    }
L_00087674:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00087678:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[0]);
    }
L_0008767c:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[12]);
    }
L_00087680:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[11]);
    }
L_00087684:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x58u);
    }
L_00087688:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_0008768c:;
    {
        cpu->r[5] = rd32(cpu->r[14] + + 0x44u);
    }
L_00087690:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00087694:;
    {
        cpu->r[14] = 0x00087698u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00087698:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_0008769c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000876a0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000876a4:;
    {
        cpu->r[14] = 0x000876a8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000876a8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x58u);
    }
L_000876ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x48u);
    }
L_000876b0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x40u);
    }
L_000876b4:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x38u);
    }
L_000876b8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x30u);
    }
L_000876bc:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000876c0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x58u);
    }
L_000876c4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[4] + cpu->r[1]; cpu->r[1] = v;
    }
L_000876c8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x54u);
    }
L_000876cc:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x50u);
    }
L_000876d0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[5]);
    }
L_000876d4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000876d8:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[11] + + 0xc8u, cpu->r[1]);
        }
    }
L_000876dc:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[11] + + 0xc8u, cpu->r[2]);
        }
    }
L_000876e0:;
    {
        cpu->r[12] = rd32(cpu->r[14] + + 0x3cu);
    }
L_000876e4:;
    {
        cpu->r[1] = rd32(cpu->r[14] + + 0x34u);
    }
L_000876e8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x48u);
    }
L_000876ec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_000876f0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0] + cpu->r[1]; cpu->r[1] = v;
    }
L_000876f4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000876f8:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[11] + + 0xccu, cpu->r[1]);
        }
    }
L_000876fc:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[11] + + 0xccu, cpu->r[2]);
        }
    }
L_00087700:;
    {
        cpu->r[2] = rd32(cpu->r[14] + + 0x38u);
    }
L_00087704:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_00087708:;
    {
        cpu->r[12] = rd32(cpu->r[14] + + 0x30u);
    }
L_0008770c:;
    {
        uint32_t v = cpu->r[4] * cpu->r[2] + cpu->r[2]; cpu->r[2] = v;
    }
L_00087710:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_00087714:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00087718:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[11] + + 0xd0u, cpu->r[2]);
        }
    }
L_0008771c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[11] + + 0xd0u, cpu->r[1]);
        }
    }
L_00087720:;
    {
        cpu->r[2] = rd32(cpu->r[14] + + 0x3cu);
    }
L_00087724:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xcu);
    }
L_00087728:;
    {
        cpu->r[12] = rd32(cpu->r[14] + + 0x34u);
    }
L_0008772c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[2]; cpu->r[2] = v;
    }
L_00087730:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_00087734:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_00087738:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[11] + + 0xd4u, cpu->r[12]);
        }
    }
L_0008773c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[11] + + 0xd4u, cpu->r[1]);
        }
    }
L_00087740:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_00087744:;
    {
        wr32(cpu->r[11] + + 0xc0u, cpu->r[2]);
    }
L_00087748:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x10u);
    }
L_0008774c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[0] = v;
    }
L_00087750:;
    {
        cpu->r[14] = 0x00087758u;
    }
L_00087754:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00087758u)) return;
    }
L_00087758:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008775c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00087760:;
    {
        wr32(cpu->r[11] + + 0xc4u, cpu->r[0]);
    }
L_00087764:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00087a0c;
        }
    }
L_00087768:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008776c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0xc0u);
    }
L_00087770:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00087774:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00087a2c;
        }
    }
L_00087778:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_0008777c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[11]);
    }
L_00087780:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[11]);
    }
L_00087784:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[11]);
    }
L_00087788:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[11]);
    }
L_0008778c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[11]);
    }
L_00087790:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_00087794:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_00087798:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x54u);
    }
L_0008779c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x18u);
    }
L_000877a0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000877a4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000877a8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_000877ac:;
    {
        cpu->r[1] = 0x000015d0u;
    }
L_000877b0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_000877b4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000877b8:;
    {
        uint32_t wb_tmp = cpu->r[2] + cpu->r[9];
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[9]);
        cpu->r[2] = wb_tmp;
    }
L_000877bc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x38u);
    }
L_000877c0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], shifter(cpu->r[14], 2, 4u, &shc), 0, 0);
    }
L_000877c4:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[14], 2, 4u, &shc), cpu->r[1]);
    }
L_000877c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_000877cc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000877d0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000877d4:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[2]);
    }
L_000877d8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000877dc:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[0]);
    }
L_000877e0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[0] = v;
    }
L_000877e4:;
    {
        cpu->r[14] = 0x000877ecu;
    }
L_000877e8:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000877ecu)) return;
    }
L_000877ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000877f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000877f4:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[0]);
    }
L_000877f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00087b18;
        }
    }
L_000877fc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00087800:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_00087804:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_00087808:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008780c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00087810:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_00087814:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00087818:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
    }
L_0008781c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0xc8u);
    }
L_00087820:;
    {
        cpu->r[7] = rd32(cpu->r[6] + shifter(cpu->r[0], 2, 4u, &shc));
    }
L_00087824:;
    {
        cpu->r[10] = rd32(cpu->r[2] + + 0xccu);
    }
L_00087828:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x4u);
    }
L_0008782c:;
    {
        cpu->r[8] = rd32(cpu->r[2] + + 0xd0u);
    }
L_00087830:;
    {
        cpu->r[9] = rd32(cpu->r[2] + + 0xd4u);
    }
L_00087834:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000879c8;
        }
    }
L_00087838:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0008783c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00087840:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00087844:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_00087848:;
    {
        cpu->r[14] = 0x0008784cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0008784c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00087850:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_00087854:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], cpu->r[9], 0, 0);
    }
L_00087858:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0008785c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_00087860:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 0);
    }
L_00087864:;
    {
        cpu->r[14] = 0x00087868u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00087868:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0008786c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00087870:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_00087874:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_00087878:;
    {
        cpu->r[14] = 0x0008787cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0008787c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00087880:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00087884:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_00087888:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 0);
    }
L_0008788c:;
    {
        cpu->r[14] = 0x00087890u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00087890:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00087894:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00087898:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0008789c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_000878a0:;
    {
        goto L_00087998;
    }
L_000878a4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x32cu);
    }
L_000878a8:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_000878ac:;
    {
        uint32_t v = shifter(cpu->r[11], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000878b0:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[3], 2, 4u, &shc), cpu->r[0]);
    }
L_000878b4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_000878b8:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x3b0u);
    }
L_000878bc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000878c0:;
    {
        uint32_t v = shifter(cpu->r[11], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[8] = v;
    }
L_000878c4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_000878c8:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[6]);
    }
L_000878cc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_000878d0:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_000878d4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x28u);
    }
L_000878d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000878dc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_000878e0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x20u);
    }
L_000878e4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_000878e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000878ec:;
    {
        uint32_t v = shifter(cpu->r[4], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[12] = v;
    }
L_000878f0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[12], cpu->r[9], 0, 0);
    }
L_000878f4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], cpu->r[11], 0, 0);
    }
L_000878f8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000878fc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x24u);
    }
L_00087900:;
    {
        uint32_t v = shifter(cpu->r[4], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[4] = v;
    }
L_00087904:;
    {
        uint32_t v = shifter(cpu->r[10], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[10] = v;
    }
L_00087908:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], cpu->r[9], 0, 0);
    }
L_0008790c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[4], 1, 1);
    }
L_00087910:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[11], 0, 0);
    }
L_00087914:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_00087918:;
    {
        uint32_t v = shifter(cpu->r[9], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[9] = v;
    }
L_0008791c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00087920:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[12] = v;
    }
L_00087924:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
        }
    }
L_00087928:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[10], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[10] = v;
        }
    }
L_0008792c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_00087930:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 0);
        }
    }
L_00087934:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[10], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[10] = v;
        }
    }
L_00087938:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[4], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[4] = v;
        }
    }
L_0008793c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = sub_flags(cpu, shifter(cpu->r[4], 2, (cpu->r[0] & 0xffu), &shc), cpu->r[10], 1, 0);
        }
    }
L_00087940:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[4], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[4] = v;
        }
    }
L_00087944:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[9], 1, 1);
    }
L_00087948:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
        }
    }
L_0008794c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[12] = v;
        }
    }
L_00087950:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[7] + + 0x4u);
        }
    }
L_00087954:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[9], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[9] = v;
        }
    }
L_00087958:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[12], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[12] = v;
        }
    }
L_0008795c:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[4]);
    }
L_00087960:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_00087964:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = sub_flags(cpu, shifter(cpu->r[9], 2, (cpu->r[6] & 0xffu), &shc), cpu->r[12], 1, 0);
        }
    }
L_00087968:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = cpu->r[4];
        }
    }
L_0008796c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[9], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[9] = v;
        }
    }
L_00087970:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[9]);
    }
L_00087974:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_00087978:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[9] * cpu->r[4]; cpu->r[4] = v;
        }
    }
L_0008797c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x14u);
    }
L_00087980:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[4], 1, 1);
    }
L_00087984:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = cpu->r[4];
        }
    }
L_00087988:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0008798c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_00087990:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000879c8;
        }
    }
L_00087994:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xcu);
    }
L_00087998:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008799c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_000879a0:;
    {
        cpu->r[1] = rd32(cpu->r[9]);
    }
L_000879a4:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_000879a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000878a4;
        }
    }
L_000879ac:;
    {
        cpu->r[6] = 0x0000000fu;
    }
L_000879b0:;
    {
        cpu->r[8] = 0x00007fffu;
    }
L_000879b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000879b8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[8]);
    }
L_000879bc:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[3], 2, 4u, &shc), cpu->r[6]);
    }
L_000879c0:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[6]);
    }
L_000879c4:;
    {
        goto L_000878cc;
    }
L_000879c8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x34u);
    }
L_000879cc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000879d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_000879d4:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0xc0u);
    }
L_000879d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000879dc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000879e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000430u, 0, 0);
    }
L_000879e4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_000879e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000879ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_000879f0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_000879f4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_000879f8:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_000879fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00087a38;
        }
    }
L_00087a00:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_00087a04:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0xc4u);
    }
L_00087a08:;
    {
        goto L_00087790;
    }
L_00087a0c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_00087a10:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x58u);
    }
L_00087a14:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x60u);
    }
L_00087a18:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[6]);
    }
L_00087a1c:;
    {
        cpu->r[14] = 0x00087a20u; fn_00086e20(cpu);
    }
L_00087a20:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_00087a24:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_00087a28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00087a2cu)) return;
    }
L_00087a2c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00087a30:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00087a34:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_00087a38:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x40u);
    }
L_00087a3c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00087a40:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_00087a44:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x48u);
    }
L_00087a48:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
    }
L_00087a4c:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[4]);
    }
L_00087a50:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x10u);
    }
L_00087a54:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_00087a58:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x64u);
    }
L_00087a5c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[4]; cpu->r[3] = v;
    }
L_00087a60:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00087a64:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[2] = v;
    }
L_00087a68:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[3]);
    }
L_00087a6c:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[2]);
    }
L_00087a70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00087b6c;
        }
    }
L_00087a74:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_00087a78:;
    {
        cpu->r[3] = rd32(cpu->r[12] + - 0xe4u);
    }
L_00087a7c:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[3]);
    }
L_00087a80:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00087a84:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1a8u);
    }
L_00087a88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00087a8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00087b30;
        }
    }
L_00087a90:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x40u);
    }
L_00087a94:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00087a98:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00087a9c:;
    {
        wr32(cpu->r[5] + + 0x28u, cpu->r[3]);
    }
L_00087aa0:;
    {
        cpu->r[4] = rd32(cpu->r[9] + + 0x1d0u);
    }
L_00087aa4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], 0x000001acu, 0, 0);
    }
L_00087aa8:;
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
L_00087aac:;
    {
        cpu->r[0] = rd32(cpu->r[9] + + 0x1b8u);
    }
L_00087ab0:;
    {
        cpu->r[12] = rd32(cpu->r[9] + + 0x1bcu);
    }
L_00087ab4:;
    {
        wr32(cpu->r[5] + + 0x2cu, cpu->r[1]);
    }
L_00087ab8:;
    {
        wr32(cpu->r[5] + + 0x30u, cpu->r[2]);
    }
L_00087abc:;
    {
        wr32(cpu->r[5] + + 0x34u, cpu->r[3]);
    }
L_00087ac0:;
    {
        wr32(cpu->r[5] + + 0x38u, cpu->r[0]);
    }
L_00087ac4:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[12]);
    }
L_00087ac8:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[4]);
    }
L_00087acc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_00087ad0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00087ad4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_00087ad8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00087adc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x64u);
    }
L_00087ae0:;
    {
        wr32(cpu->r[12] + + 0x48u, cpu->r[11]);
    }
L_00087ae4:;
    {
        wr32(cpu->r[12] + + 0x40u, cpu->r[1]);
    }
L_00087ae8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00087aec:;
    {
        wr32(cpu->r[12] + + 0x44u, cpu->r[1]);
    }
L_00087af0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000e8u, 0, 0);
    }
L_00087af4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1a4u);
    }
L_00087af8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00087afc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00087b00:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[0]);
    }
L_00087b04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000094u, 0, 0);
    }
L_00087b08:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[12]);
    }
L_00087b0c:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[2]);
    }
L_00087b10:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00087684;
        }
    }
L_00087b14:;
    {
        goto L_00087a20;
    }
L_00087b18:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_00087b1c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x58u);
    }
L_00087b20:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x60u);
    }
L_00087b24:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[4]);
    }
L_00087b28:;
    {
        cpu->r[14] = 0x00087b2cu; fn_00086e20(cpu);
    }
L_00087b2c:;
    {
        goto L_00087a20;
    }
L_00087b30:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_00087b34:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00087b38:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x48u);
    }
L_00087b3c:;
    {
        wr32(cpu->r[1] + + 0x28u, cpu->r[2]);
    }
L_00087b40:;
    {
        wr32(cpu->r[1] + + 0x30u, cpu->r[3]);
    }
L_00087b44:;
    {
        wr32(cpu->r[1] + + 0x2cu, cpu->r[3]);
    }
L_00087b48:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_00087b4c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_00087b50:;
    {
        wr32(cpu->r[1] + + 0x38u, cpu->r[2]);
    }
L_00087b54:;
    {
        wr32(cpu->r[1] + + 0x34u, cpu->r[3]);
    }
L_00087b58:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_00087b5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00087b60:;
    {
        wr32(cpu->r[1] + + 0x50u, cpu->r[2]);
    }
L_00087b64:;
    {
        wr32(cpu->r[1] + + 0x3cu, cpu->r[3]);
    }
L_00087b68:;
    {
        goto L_00087acc;
    }
L_00087b6c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00087b70:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x10u);
    }
L_00087b74:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x54u);
    }
L_00087b78:;
    {
        cpu->r[2] = rd32(cpu->r[14] + + 0xcu);
    }
L_00087b7c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x50u);
    }
L_00087b80:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_00087b84:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_00087b88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00087b8c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2]; cpu->r[0] = v;
    }
L_00087b90:;
    {
        uint32_t v = cpu->r[5] * cpu->r[0]; cpu->r[0] = v;
    }
L_00087b94:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00087b98:;
    {
        cpu->r[14] = 0x00087ba0u;
    }
L_00087b9c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00087ba0u)) return;
    }
L_00087ba0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x40u);
    }
L_00087ba4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00087ba8:;
    {
        wr32(cpu->r[9] + + 0x4u, cpu->r[0]);
    }
L_00087bac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00087a80;
        }
    }
L_00087bb0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x64u);
    }
L_00087bb4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_00087bb8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x58u);
    }
L_00087bbc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x60u);
    }
L_00087bc0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[11]);
    }
L_00087bc4:;
    {
        cpu->r[14] = 0x00087bc8u; fn_00086e20(cpu);
    }
L_00087bc8:;
    {
        goto L_00087a20;
    }
}

/* pi_next @ 00087bd4 (arm) */
void fn_00087bd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00087bd4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x50u);
    }
L_00087bd8:;
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
L_00087bdc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00087be0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000003cu, 1, 0);
    }
L_00087be4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_00087be8:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_00087cf4;
        case 1: goto L_00087e70;
        case 2: goto L_00087d48;
        case 3: goto L_00087ec4;
        case 4: goto L_00087c2c;
        default: guest_unimplemented(cpu, 0x00087be8u); return; }
        }
    }
L_00087bec:;
    {
        goto L_00087c20;
    }
L_00087c04:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x30u);
    }
L_00087c08:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00087c0c:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[2]);
    }
L_00087c10:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_00087c14:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00087c18:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00087c1c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000881ac;
        }
    }
L_00087c20:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00087c24:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_00087c28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00087c2cu)) return;
    }
L_00087c2c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x28u);
    }
L_00087c30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00087c34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00087c04;
        }
    }
L_00087c38:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x18u);
    }
L_00087c3c:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0xc4u);
    }
L_00087c40:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x24u);
    }
L_00087c44:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00087c48:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[5], 2, 4u, &shc), 0, 0);
    }
L_00087c4c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x34u);
    }
L_00087c50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00087c54:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[2]);
    }
L_00087c58:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00087c5c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00088310;
        }
    }
L_00087c60:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x38u);
    }
L_00087c64:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xdcu);
    }
L_00087c68:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0xd8u);
    }
L_00087c6c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00087c70:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[8]);
    }
L_00087c74:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x8u);
    }
L_00087c78:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_00087c7c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_00087c80:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[9];
        }
    }
L_00087c84:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 1);
    }
L_00087c88:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000885f8;
        }
    }
L_00087c8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xe0u);
    }
L_00087c90:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00087c94:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00087c98:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_00087c9c:;
    {
        cpu->r[14] = 0x00087ca0u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00087ca0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 0);
    }
L_00087ca4:;
    {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[1]);
    }
L_00087ca8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x64u);
    }
L_00087cac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00087cb0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00088ab8;
        }
    }
L_00087cb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xe4u);
    }
L_00087cb8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00087cbc:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00087cc0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_00087cc4:;
    {
        cpu->r[14] = 0x00087cc8u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00087cc8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 0);
    }
L_00087ccc:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[1]);
    }
L_00087cd0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_00087cd4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00087cd8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0x60u);
        }
    }
L_00087cdc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = rd32(cpu->r[4] + + 0xdcu);
        }
    }
L_00087ce0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[1]);
        }
    }
L_00087ce4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00087ca8;
        }
    }
L_00087ce8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00087cec:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_00087cf0:;
    {
        goto L_00087c14;
    }
L_00087cf4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x28u);
    }
L_00087cf8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00087cfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00087f58;
        }
    }
L_00087d00:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x40u);
    }
L_00087d04:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00087d08:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_00087d0c:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_00087d10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_00087d14:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00087d18:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00087c20;
        }
    }
L_00087d1c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00087d20:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_00087d24:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[8]);
    }
L_00087d28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_00087d2c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_00087d30:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000883f4;
        }
    }
L_00087d34:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x30u);
    }
L_00087d38:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00087d3c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00087d40:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_00087d44:;
    {
        goto L_00087f88;
    }
L_00087d48:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x28u);
    }
L_00087d4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00087d50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00087fe0;
        }
    }
L_00087d54:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xc0u);
    }
L_00087d58:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_00087d5c:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[11]);
    }
L_00087d60:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_00087d64:;
    {
        wr32(cpu->r[0] + + 0xe0u, cpu->r[11]);
    }
L_00087d68:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00087d6c:;
    {
        wr32(cpu->r[0] + + 0xe4u, cpu->r[11]);
    }
L_00087d70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00087e20;
        }
    }
L_00087d74:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0xc4u);
    }
L_00087d78:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x8u);
    }
L_00087d7c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00087d80:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00087e0c;
        }
    }
L_00087d84:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00087d88:;
    {
        cpu->r[10] = rd32(cpu->r[9] + + 0xcu);
    }
L_00087d8c:;
    {
        cpu->r[8] = rd32(cpu->r[9]);
    }
L_00087d90:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00087d94:;
    {
        cpu->r[7] = rd32(cpu->r[9] + + 0x4u);
    }
L_00087d98:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xe0u);
    }
L_00087d9c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xe4u);
    }
L_00087da0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00087da4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00087da8:;
    {
        uint32_t wb_tmp = cpu->r[2] + cpu->r[5];
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[5]);
        cpu->r[2] = wb_tmp;
    }
L_00087dac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_00087db0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_00087db4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_00087db8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_00087dbc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_00087dc0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_00087dc4:;
    {
        uint32_t v = shifter(cpu->r[8], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[6] = v;
    }
L_00087dc8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00087dcc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00087dd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00087dd4:;
    {
        uint32_t v = shifter(cpu->r[7], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00087dd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00087de4;
        }
    }
L_00087ddc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[12], 1, 1);
    }
L_00087de0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = cpu->r[12];
        }
    }
L_00087de4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00087de8:;
    {
        cpu->r[12] = cpu->r[6];
    }
L_00087dec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00087df8;
        }
    }
L_00087df0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_00087df4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[0];
        }
    }
L_00087df8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00087dfc:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00087e00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00087da0;
        }
    }
L_00087e04:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[6]);
    }
L_00087e08:;
    {
        wr32(cpu->r[4] + + 0xe4u, cpu->r[2]);
    }
L_00087e0c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00087e10:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_00087e14:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000010u, 0, 0);
    }
L_00087e18:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[12], 1, 1);
    }
L_00087e1c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00087d78;
        }
    }
L_00087e20:;
    {
        cpu->r[3] = rd8(cpu->r[4]);
    }
L_00087e24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00087e28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008838c;
        }
    }
L_00087e2c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00087e30:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[8]);
    }
L_00087e34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_00087e38:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_00087e3c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00087c20;
        }
    }
L_00087e40:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x68u);
    }
L_00087e44:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00087e48:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[1]);
    }
L_00087e4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_00087e50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00087e54:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0x60u);
        }
    }
L_00087e58:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = rd32(cpu->r[4] + + 0xdcu);
        }
    }
L_00087e5c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[1]);
        }
    }
L_00087e60:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00088038;
        }
    }
L_00087e64:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00087e68:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[8]);
    }
L_00087e6c:;
    {
        goto L_00087e34;
    }
L_00087e70:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x28u);
    }
L_00087e74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00087e78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00087f9c;
        }
    }
L_00087e7c:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x2cu);
    }
L_00087e80:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00087e84:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_00087e88:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[8]);
    }
L_00087e8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_00087e90:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_00087e94:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00087c20;
        }
    }
L_00087e98:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x40u);
    }
L_00087e9c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00087ea0:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[2]);
    }
L_00087ea4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_00087ea8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00087eac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000883e8;
        }
    }
L_00087eb0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x30u);
    }
L_00087eb4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_00087eb8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00087ebc:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_00087ec0:;
    {
        goto L_00087fcc;
    }
L_00087ec4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x28u);
    }
L_00087ec8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00087ecc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00088064;
        }
    }
L_00087ed0:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x18u);
    }
L_00087ed4:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0xc4u);
    }
L_00087ed8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x24u);
    }
L_00087edc:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00087ee0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[5], 2, 4u, &shc), 0, 0);
    }
L_00087ee4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x34u);
    }
L_00087ee8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00087eec:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[2]);
    }
L_00087ef0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00087ef4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000883b0;
        }
    }
L_00087ef8:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x38u);
    }
L_00087efc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xdcu);
    }
L_00087f00:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0xd8u);
    }
L_00087f04:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00087f08:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[8]);
    }
L_00087f0c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x8u);
    }
L_00087f10:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_00087f14:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_00087f18:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[9];
        }
    }
L_00087f1c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 1);
    }
L_00087f20:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00088400;
        }
    }
L_00087f24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00087f28:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_00087f2c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00087f30:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00087f34:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00088a88;
        }
    }
L_00087f38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xe0u);
    }
L_00087f3c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00087f40:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00087f44:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_00087f48:;
    {
        cpu->r[14] = 0x00087f4cu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00087f4c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 0);
    }
L_00087f50:;
    {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[1]);
    }
L_00087f54:;
    {
        goto L_00088178;
    }
L_00087f58:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_00087f5c:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00087f60:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x24u);
    }
L_00087f64:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x18u);
    }
L_00087f68:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x48u);
    }
L_00087f6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00087f70:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_00087f74:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00087f78:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000882cc;
        }
    }
L_00087f7c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00087f80:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00087f84:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_00087f88:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[5], 1, 1);
    }
L_00087f8c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00088a40;
        }
    }
L_00087f90:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00087f94:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[8]);
    }
L_00087f98:;
    {
        goto L_00087d28;
    }
L_00087f9c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_00087fa0:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00087fa4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x24u);
    }
L_00087fa8:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x18u);
    }
L_00087fac:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x48u);
    }
L_00087fb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00087fb4:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_00087fb8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00087fbc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00088348;
        }
    }
L_00087fc0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00087fc4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00087fc8:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_00087fcc:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[5], 1, 1);
    }
L_00087fd0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000887f0;
        }
    }
L_00087fd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00087fd8:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[2]);
    }
L_00087fdc:;
    {
        goto L_00087ea4;
    }
L_00087fe0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x24u);
    }
L_00087fe4:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00087fe8:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x18u);
    }
L_00087fec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x34u);
    }
L_00087ff0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00087ff4:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[2]);
    }
L_00087ff8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00087ffc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00088288;
        }
    }
L_00088000:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00088004:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xdcu);
    }
L_00088008:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0xd8u);
    }
L_0008800c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00088010:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_00088014:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[5], 1, 1);
    }
L_00088018:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00088838;
        }
    }
L_0008801c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xe0u);
    }
L_00088020:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00088024:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00088028:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0008802c:;
    {
        cpu->r[14] = 0x00088030u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00088030:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 0);
    }
L_00088034:;
    {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[1]);
    }
L_00088038:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x64u);
    }
L_0008803c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00088040:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00088aa4;
        }
    }
L_00088044:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xe4u);
    }
L_00088048:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008804c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00088050:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_00088054:;
    {
        cpu->r[14] = 0x00088058u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00088058:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 0);
    }
L_0008805c:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[1]);
    }
L_00088060:;
    {
        goto L_00087e4c;
    }
L_00088064:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xc0u);
    }
L_00088068:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_0008806c:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[11]);
    }
L_00088070:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_00088074:;
    {
        wr32(cpu->r[0] + + 0xe0u, cpu->r[11]);
    }
L_00088078:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0008807c:;
    {
        wr32(cpu->r[0] + + 0xe4u, cpu->r[11]);
    }
L_00088080:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00088130;
        }
    }
L_00088084:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0xc4u);
    }
L_00088088:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x8u);
    }
L_0008808c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00088090:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008811c;
        }
    }
L_00088094:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00088098:;
    {
        cpu->r[10] = rd32(cpu->r[9] + + 0xcu);
    }
L_0008809c:;
    {
        cpu->r[8] = rd32(cpu->r[9]);
    }
L_000880a0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000880a4:;
    {
        cpu->r[7] = rd32(cpu->r[9] + + 0x4u);
    }
L_000880a8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xe0u);
    }
L_000880ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xe4u);
    }
L_000880b0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000880b4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000880b8:;
    {
        uint32_t wb_tmp = cpu->r[2] + cpu->r[5];
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[5]);
        cpu->r[2] = wb_tmp;
    }
L_000880bc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_000880c0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_000880c4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000880c8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_000880cc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_000880d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000880d4:;
    {
        uint32_t v = shifter(cpu->r[8], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[6] = v;
    }
L_000880d8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000880dc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000880e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000880e4:;
    {
        uint32_t v = shifter(cpu->r[7], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_000880e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000880f4;
        }
    }
L_000880ec:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[12], 1, 1);
    }
L_000880f0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = cpu->r[12];
        }
    }
L_000880f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000880f8:;
    {
        cpu->r[12] = cpu->r[6];
    }
L_000880fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00088108;
        }
    }
L_00088100:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_00088104:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[0];
        }
    }
L_00088108:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0008810c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00088110:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000880b0;
        }
    }
L_00088114:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[6]);
    }
L_00088118:;
    {
        wr32(cpu->r[4] + + 0xe4u, cpu->r[2]);
    }
L_0008811c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00088120:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_00088124:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000010u, 0, 0);
    }
L_00088128:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[12], 1, 1);
    }
L_0008812c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00088088;
        }
    }
L_00088130:;
    {
        cpu->r[3] = rd8(cpu->r[4]);
    }
L_00088134:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00088138:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0xccu);
        }
    }
L_0008813c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0xc8u);
        }
    }
L_00088140:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0xd4u);
        }
    }
L_00088144:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd0u);
        }
    }
L_00088148:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0x68u);
        }
    }
L_0008814c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x60u, cpu->r[0]);
        }
    }
L_00088150:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[2]);
        }
    }
L_00088154:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
        }
    }
L_00088158:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x68u, cpu->r[1]);
        }
    }
L_0008815c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_00088160:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[1]);
    }
L_00088164:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00088168:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00087c20;
        }
    }
L_0008816c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x60u);
    }
L_00088170:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xdcu);
    }
L_00088174:;
    {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[1]);
    }
L_00088178:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x64u);
    }
L_0008817c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00088180:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
        }
    }
L_00088184:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = rd32(cpu->r[4] + + 0xd8u);
        }
    }
L_00088188:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
        }
    }
L_0008818c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00087f2c;
        }
    }
L_00088190:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xe4u);
    }
L_00088194:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00088198:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0008819c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000881a0:;
    {
        cpu->r[14] = 0x000881a4u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000881a4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 0);
    }
L_000881a8:;
    {
        goto L_0008815c;
    }
L_000881ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_000881b0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000881b4:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[5]);
    }
L_000881b8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_000881bc:;
    {
        wr32(cpu->r[4] + + 0xe4u, cpu->r[5]);
    }
L_000881c0:;
    {
        cpu->r[1] = rd32(cpu->r[10] + + 0x8u);
    }
L_000881c4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_000881c8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00088250;
        }
    }
L_000881cc:;
    {
        cpu->r[8] = rd32(cpu->r[10] + + 0xcu);
    }
L_000881d0:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_000881d4:;
    {
        cpu->r[7] = rd32(cpu->r[10] + + 0x4u);
    }
L_000881d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000881dc:;
    {
        cpu->r[9] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 4u, &shc));
    }
L_000881e0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000881e4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000881e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000881ec:;
    {
        uint32_t wb_tmp = cpu->r[2] + cpu->r[5];
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[5]);
        cpu->r[2] = wb_tmp;
    }
L_000881f0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_000881f4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_000881f8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000881fc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_00088200:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_00088204:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_00088208:;
    {
        uint32_t v = shifter(cpu->r[9], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[6] = v;
    }
L_0008820c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00088210:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00088214:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00088218:;
    {
        uint32_t v = shifter(cpu->r[7], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0008821c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00088228;
        }
    }
L_00088220:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_00088224:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = cpu->r[0];
        }
    }
L_00088228:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0008822c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00088230:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008823c;
        }
    }
L_00088234:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00088238:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_0008823c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00088240:;
    {
        cpu->r[12] = cpu->r[2];
    }
L_00088244:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000881e4;
        }
    }
L_00088248:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[6]);
    }
L_0008824c:;
    {
        wr32(cpu->r[4] + + 0xe4u, cpu->r[2]);
    }
L_00088250:;
    {
        cpu->r[3] = rd8(cpu->r[4]);
    }
L_00088254:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x18u);
    }
L_00088258:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008825c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0xccu);
        }
    }
L_00088260:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0x68u);
        }
    }
L_00088264:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0xc8u);
        }
    }
L_00088268:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0xd4u);
        }
    }
L_0008826c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd0u);
        }
    }
L_00088270:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x60u, cpu->r[0]);
        }
    }
L_00088274:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[2]);
        }
    }
L_00088278:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
        }
    }
L_0008827c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x68u, cpu->r[1]);
        }
    }
L_00088280:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[1]);
    }
L_00088284:;
    {
        goto L_00087cd0;
    }
L_00088288:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0008828c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x20u);
    }
L_00088290:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_00088294:;
    {
        uint32_t v = cpu->r[8] * cpu->r[0]; cpu->r[0] = v;
    }
L_00088298:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008829c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1] + cpu->r[0]; cpu->r[1] = v;
    }
L_000882a0:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[12] = v1;
    }
L_000882a4:;
    {
        uint32_t v = cpu->r[5] * cpu->r[6] + cpu->r[1]; cpu->r[1] = v;
    }
L_000882a8:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[1]; cpu->r[1] = v;
    }
L_000882ac:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000882b0:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[1]);
    }
L_000882b4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000882b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00087ff0;
        }
    }
L_000882bc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000882c0:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[2]);
    }
L_000882c4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000882c8:;
    {
        goto L_00087c24;
    }
L_000882cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_000882d0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_000882d4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x10u);
    }
L_000882d8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[0] = v;
    }
L_000882dc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x14u);
    }
L_000882e0:;
    {
        uint32_t v = cpu->r[8] * cpu->r[12] + cpu->r[0]; cpu->r[0] = v;
    }
L_000882e4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000882e8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[7] + cpu->r[0]; cpu->r[0] = v;
    }
L_000882ec:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3] + cpu->r[0]; cpu->r[0] = v;
    }
L_000882f0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_000882f4:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[12] + cpu->r[0]);
    }
L_000882f8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000882fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_00088300:;
    {
        if (cond_test(cpu, 1)) {
        wr16(cpu->r[12] + cpu->r[0], cpu->r[1]);
        }
    }
L_00088304:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00088308:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00087c24;
        }
    }
L_0008830c:;
    {
        goto L_00087f6c;
    }
L_00088310:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00088314:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x20u);
    }
L_00088318:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008831c:;
    {
        uint32_t v = cpu->r[8] * cpu->r[0]; cpu->r[0] = v;
    }
L_00088320:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x10u);
    }
L_00088324:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1] + cpu->r[0]; cpu->r[1] = v;
    }
L_00088328:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[12] = v1;
    }
L_0008832c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[6] + cpu->r[1]; cpu->r[1] = v;
    }
L_00088330:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[1]; cpu->r[1] = v;
    }
L_00088334:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_00088338:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[1]);
    }
L_0008833c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00088340:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00087c50;
        }
    }
L_00088344:;
    {
        goto L_000882bc;
    }
L_00088348:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0008834c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_00088350:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x10u);
    }
L_00088354:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[0] = v;
    }
L_00088358:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008835c:;
    {
        uint32_t v = cpu->r[8] * cpu->r[12] + cpu->r[0]; cpu->r[0] = v;
    }
L_00088360:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_00088364:;
    {
        uint32_t v = cpu->r[5] * cpu->r[7] + cpu->r[0]; cpu->r[0] = v;
    }
L_00088368:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3] + cpu->r[0]; cpu->r[0] = v;
    }
L_0008836c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00088370:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[12] + cpu->r[0]);
    }
L_00088374:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00088378:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0008837c:;
    {
        if (cond_test(cpu, 1)) {
        wr16(cpu->r[12] + cpu->r[0], cpu->r[2]);
        }
    }
L_00088380:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00088384:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00087c24;
        }
    }
L_00088388:;
    {
        goto L_00087fb0;
    }
L_0008838c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xccu);
    }
L_00088390:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xc8u);
    }
L_00088394:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xd4u);
    }
L_00088398:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd0u);
    }
L_0008839c:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[0]);
    }
L_000883a0:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[1]);
    }
L_000883a4:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[2]);
    }
L_000883a8:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_000883ac:;
    {
        goto L_00087e2c;
    }
L_000883b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000883b4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x20u);
    }
L_000883b8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_000883bc:;
    {
        uint32_t v = cpu->r[8] * cpu->r[0]; cpu->r[0] = v;
    }
L_000883c0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x10u);
    }
L_000883c4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1] + cpu->r[0]; cpu->r[1] = v;
    }
L_000883c8:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[12] = v1;
    }
L_000883cc:;
    {
        uint32_t v = cpu->r[5] * cpu->r[6] + cpu->r[1]; cpu->r[1] = v;
    }
L_000883d0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[1]; cpu->r[1] = v;
    }
L_000883d4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000883d8:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[1]);
    }
L_000883dc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000883e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00087ee8;
        }
    }
L_000883e4:;
    {
        goto L_000882bc;
    }
L_000883e8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000883ec:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[8]);
    }
L_000883f0:;
    {
        goto L_00087e8c;
    }
L_000883f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000883f8:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[2]);
    }
L_000883fc:;
    {
        goto L_00087d10;
    }
L_00088400:;
    {
        cpu->r[12] = rd32(cpu->r[10] + + 0x4u);
    }
L_00088404:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00088408:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0xcu);
    }
L_0008840c:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_00088410:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xccu);
    }
L_00088414:;
    {
        uint32_t v = shifter(cpu->r[12], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[14] = v;
    }
L_00088418:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[8], 2, 4u, &shc), 0, 0);
    }
L_0008841c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_00088420:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00088424:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_00088428:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_0008842c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[14], 0, 0);
    }
L_00088430:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0xc8u);
    }
L_00088434:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00088438:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0008843c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_00088440:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00088444:;
    {
        cpu->r[14] = 0x00088448u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00088448:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0008844c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_00088450:;
    {
        cpu->r[14] = rd32(cpu->r[10]);
    }
L_00088454:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[8], 2, 4u, &shc));
    }
L_00088458:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_0008845c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_00088460:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_00088464:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00088468:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0008846c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_00088470:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00088474:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00088478:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], cpu->r[2], 0, 0);
    }
L_0008847c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xd0u);
    }
L_00088480:;
    {
        uint32_t v = shifter(cpu->r[12], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00088484:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_00088488:;
    {
        cpu->r[14] = 0x0008848cu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_0008848c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xd4u);
    }
L_00088490:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00088494:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00088498:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_0008849c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[11], cpu->r[14], 0, 0);
    }
L_000884a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000884a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000884d4;
        }
    }
L_000884a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000884ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000884b8;
        }
    }
L_000884b0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x1cu);
    }
L_000884b4:;
    {
        goto L_00087f04;
    }
L_000884b8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000884bc:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[0] = v;
    }
L_000884c0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000884c4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[8] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000884c8:;
    {
        cpu->r[14] = 0x000884ccu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000884cc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000884d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000884b0;
        }
    }
L_000884d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000884d8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_000884dc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[2] = v;
    }
L_000884e0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000884e4:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000884e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_000884ec:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000884f0:;
    {
        cpu->r[14] = 0x000884f4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000884f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000884f8:;
    {
        uint32_t v = shifter(cpu->r[12], 2, (cpu->r[8] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000884fc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_00088500:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00088504:;
    {
        cpu->r[14] = 0x00088508u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00088508:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008850c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00088538;
        }
    }
L_00088510:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_00088514:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[7], 1, 1);
    }
L_00088518:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000884b0;
        }
    }
L_0008851c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00088520:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00088524:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00088528:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[8] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0008852c:;
    {
        cpu->r[14] = 0x00088530u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00088530:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00088534:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000884b0;
        }
    }
L_00088538:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008853c:;
    {
        cpu->r[11] = rd32(cpu->r[2] + + 0x8u);
    }
L_00088540:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00088544:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000884b0;
        }
    }
L_00088548:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008854c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00088550:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00088554:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00088558:;
    {
        cpu->r[14] = 0x0008855cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0008855c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_00088560:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00088564:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_00088568:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_0008856c:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[0], 1, 1);
    }
L_00088570:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_00088574:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x00000001u;
        }
    }
L_00088578:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0008857c:;
    {
        cpu->r[14] = 0x00088580u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00088580:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00088584:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_00088588:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[8];
        }
    }
L_0008858c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] | 0x00000001u; cpu->r[0] = v;
        }
    }
L_00088590:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00088594:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000884b0;
        }
    }
L_00088598:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008859c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_000885a0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_000885a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000885a8:;
    {
        cpu->r[14] = 0x000885acu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000885ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000885b0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000885b4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000885b8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000885bc:;
    {
        cpu->r[7] = sub_flags(cpu, shifter(cpu->r[0], 1, (cpu->r[12] & 0xffu), &shc), cpu->r[3], 1, 0);
    }
L_000885c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[1], 0, 0);
    }
L_000885c4:;
    {
        cpu->r[14] = 0x000885c8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000885c8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000885cc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000885d0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000885d4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000885d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x40u);
    }
L_000885dc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x1cu);
    }
L_000885e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_000885e4:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[2]);
    }
L_000885e8:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[0], 1, (cpu->r[12] & 0xffu), &shc), cpu->r[1], 1, 0);
    }
L_000885ec:;
    {
        uint32_t v = cpu->r[11] * cpu->r[1] + cpu->r[7]; cpu->r[7] = v;
    }
L_000885f0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[7]);
    }
L_000885f4:;
    {
        goto L_00087ef0;
    }
L_000885f8:;
    {
        cpu->r[12] = rd32(cpu->r[10] + + 0x4u);
    }
L_000885fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00088600:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0xcu);
    }
L_00088604:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_00088608:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xccu);
    }
L_0008860c:;
    {
        uint32_t v = shifter(cpu->r[12], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[14] = v;
    }
L_00088610:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[8], 2, 4u, &shc), 0, 0);
    }
L_00088614:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_00088618:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008861c:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_00088620:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_00088624:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[14], 0, 0);
    }
L_00088628:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0xc8u);
    }
L_0008862c:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00088630:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_00088634:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_00088638:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0008863c:;
    {
        cpu->r[14] = 0x00088640u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00088640:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00088644:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_00088648:;
    {
        cpu->r[14] = rd32(cpu->r[10]);
    }
L_0008864c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[8], 2, 4u, &shc));
    }
L_00088650:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_00088654:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_00088658:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_0008865c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00088660:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_00088664:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_00088668:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008866c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00088670:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], cpu->r[2], 0, 0);
    }
L_00088674:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xd0u);
    }
L_00088678:;
    {
        uint32_t v = shifter(cpu->r[12], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0008867c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_00088680:;
    {
        cpu->r[14] = 0x00088684u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00088684:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xd4u);
    }
L_00088688:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008868c:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00088690:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_00088694:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[11], cpu->r[14], 0, 0);
    }
L_00088698:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008869c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000886cc;
        }
    }
L_000886a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000886a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000886b0;
        }
    }
L_000886a8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x1cu);
    }
L_000886ac:;
    {
        goto L_00087c6c;
    }
L_000886b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000886b4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[0] = v;
    }
L_000886b8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000886bc:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[8] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000886c0:;
    {
        cpu->r[14] = 0x000886c4u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000886c4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000886c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000886a8;
        }
    }
L_000886cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000886d0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_000886d4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[2] = v;
    }
L_000886d8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000886dc:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000886e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_000886e4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000886e8:;
    {
        cpu->r[14] = 0x000886ecu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000886ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000886f0:;
    {
        uint32_t v = shifter(cpu->r[12], 2, (cpu->r[8] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000886f4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_000886f8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000886fc:;
    {
        cpu->r[14] = 0x00088700u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00088700:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00088704:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00088730;
        }
    }
L_00088708:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008870c:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[7], 1, 1);
    }
L_00088710:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000886a8;
        }
    }
L_00088714:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00088718:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[0] = v;
    }
L_0008871c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00088720:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[8] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00088724:;
    {
        cpu->r[14] = 0x00088728u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00088728:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008872c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000886a8;
        }
    }
L_00088730:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_00088734:;
    {
        cpu->r[11] = rd32(cpu->r[2] + + 0x8u);
    }
L_00088738:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0008873c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000886a8;
        }
    }
L_00088740:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_00088744:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00088748:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008874c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00088750:;
    {
        cpu->r[14] = 0x00088754u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00088754:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_00088758:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0008875c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_00088760:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_00088764:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[0], 1, 1);
    }
L_00088768:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_0008876c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x00000001u;
        }
    }
L_00088770:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_00088774:;
    {
        cpu->r[14] = 0x00088778u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00088778:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008877c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_00088780:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[8];
        }
    }
L_00088784:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] | 0x00000001u; cpu->r[0] = v;
        }
    }
L_00088788:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008878c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000886a8;
        }
    }
L_00088790:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00088794:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_00088798:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_0008879c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000887a0:;
    {
        cpu->r[14] = 0x000887a4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000887a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000887a8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000887ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000887b0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000887b4:;
    {
        cpu->r[7] = sub_flags(cpu, shifter(cpu->r[0], 1, (cpu->r[12] & 0xffu), &shc), cpu->r[3], 1, 0);
    }
L_000887b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[1], 0, 0);
    }
L_000887bc:;
    {
        cpu->r[14] = 0x000887c0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000887c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000887c4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000887c8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000887cc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000887d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x40u);
    }
L_000887d4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x1cu);
    }
L_000887d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_000887dc:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[2]);
    }
L_000887e0:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[0], 1, (cpu->r[12] & 0xffu), &shc), cpu->r[1], 1, 0);
    }
L_000887e4:;
    {
        uint32_t v = cpu->r[11] * cpu->r[1] + cpu->r[7]; cpu->r[7] = v;
    }
L_000887e8:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[7]);
    }
L_000887ec:;
    {
        goto L_00087c58;
    }
L_000887f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_000887f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 4u, &shc), 0, 0);
    }
L_000887f8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_000887fc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_00088800:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00087fc4;
        }
    }
L_00088804:;
    {
        cpu->r[1] = rd8(cpu->r[4]);
    }
L_00088808:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
    }
L_0008880c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00088810:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x18u);
    }
L_00088814:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[8], 2, 4u, &shc), 0, 0);
        }
    }
L_00088818:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
        }
    }
L_0008881c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
        }
    }
L_00088820:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[3] = v;
        }
    }
L_00088824:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
        }
    }
L_00088828:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_0008882c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_00088830:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_00088834:;
    {
        goto L_00087fb8;
    }
L_00088838:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_0008883c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 4u, &shc), 0, 0);
    }
L_00088840:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x8u);
    }
L_00088844:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_00088848:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008800c;
        }
    }
L_0008884c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_00088850:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00088854:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xccu);
    }
L_00088858:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 0);
    }
L_0008885c:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0xcu);
    }
L_00088860:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 4u, &shc));
    }
L_00088864:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[14] = v;
    }
L_00088868:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[9], shifter(cpu->r[8], 2, 4u, &shc), 0, 0);
    }
L_0008886c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_00088870:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_00088874:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_00088878:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[14], 0, 0);
    }
L_0008887c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00088880:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_00088884:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_00088888:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0008888c:;
    {
        cpu->r[14] = 0x00088890u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00088890:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00088894:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00088898:;
    {
        cpu->r[9] = rd32(cpu->r[9] + shifter(cpu->r[8], 2, 4u, &shc));
    }
L_0008889c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_000888a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc8u);
    }
L_000888a4:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0xd0u);
    }
L_000888a8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000888ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], cpu->r[1], 0, 0);
    }
L_000888b0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000888b4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[9]);
    }
L_000888b8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000888bc:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[14]);
    }
L_000888c0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_000888c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000888c8:;
    {
        cpu->r[14] = 0x000888ccu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000888cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd4u);
    }
L_000888d0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_000888d4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_000888d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], cpu->r[9], 0, 0);
    }
L_000888dc:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000888e0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000888e4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000888e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00088910;
        }
    }
L_000888ec:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 1);
    }
L_000888f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008800c;
        }
    }
L_000888f4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_000888f8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000888fc:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00088900:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00088904:;
    {
        cpu->r[14] = 0x00088908u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00088908:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008890c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008800c;
        }
    }
L_00088910:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_00088914:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_00088918:;
    {
        uint32_t v = shifter(cpu->r[12], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[9] = v;
    }
L_0008891c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 0);
    }
L_00088920:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00088924:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_00088928:;
    {
        cpu->r[14] = 0x0008892cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0008892c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_00088930:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00088934:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00088938:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_0008893c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00088940:;
    {
        cpu->r[14] = 0x00088944u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00088944:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00088948:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00088978;
        }
    }
L_0008894c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_00088950:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[7], 1, 1);
    }
L_00088954:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008800c;
        }
    }
L_00088958:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0008895c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00088960:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00088964:;
    {
        uint32_t v = shifter(cpu->r[14], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00088968:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0008896c:;
    {
        cpu->r[14] = 0x00088970u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00088970:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00088974:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008800c;
        }
    }
L_00088978:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008897c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00088980:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00088984:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00088988:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008800c;
        }
    }
L_0008898c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_00088990:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00088994:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_00088998:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0008899c:;
    {
        cpu->r[14] = 0x000889a0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000889a0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_000889a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000889a8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000889ac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 0);
    }
L_000889b0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_000889b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_000889b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_000889bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_000889c0:;
    {
        cpu->r[14] = 0x000889c4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000889c4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000889c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000889cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[11];
        }
    }
L_000889d0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[11] | 0x00000001u; cpu->r[0] = v;
        }
    }
L_000889d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000889d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008800c;
        }
    }
L_000889dc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_000889e0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000889e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_000889e8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_000889ec:;
    {
        cpu->r[14] = 0x000889f0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000889f0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000889f4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_000889f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000889fc:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[7] = v;
    }
L_00088a00:;
    {
        cpu->r[7] = sub_flags(cpu, shifter(cpu->r[0], 1, (cpu->r[14] & 0xffu), &shc), cpu->r[7], 1, 0);
    }
L_00088a04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[1], 0, 0);
    }
L_00088a08:;
    {
        cpu->r[14] = 0x00088a0cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00088a0c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_00088a10:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00088a14:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00088a18:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00088a1c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x40u);
    }
L_00088a20:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x18u);
    }
L_00088a24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_00088a28:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[2]);
    }
L_00088a2c:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[0], 1, (cpu->r[12] & 0xffu), &shc), cpu->r[1], 1, 0);
    }
L_00088a30:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00088a34:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[7]; cpu->r[7] = v;
    }
L_00088a38:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[7]);
    }
L_00088a3c:;
    {
        goto L_00087ff8;
    }
L_00088a40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00088a44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 4u, &shc), 0, 0);
    }
L_00088a48:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_00088a4c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_00088a50:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00087f80;
        }
    }
L_00088a54:;
    {
        cpu->r[1] = rd8(cpu->r[4]);
    }
L_00088a58:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
    }
L_00088a5c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00088a60:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x18u);
    }
L_00088a64:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[8], 2, 4u, &shc), 0, 0);
        }
    }
L_00088a68:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
        }
    }
L_00088a6c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
        }
    }
L_00088a70:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[3] = v;
        }
    }
L_00088a74:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
        }
    }
L_00088a78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_00088a7c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_00088a80:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_00088a84:;
    {
        goto L_00087f74;
    }
L_00088a88:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00088a8c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00088a90:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x18u);
    }
L_00088a94:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_00088a98:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[8]);
    }
L_00088a9c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x38u);
    }
L_00088aa0:;
    {
        goto L_00087f0c;
    }
L_00088aa4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x30u);
    }
L_00088aa8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00088aac:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0xd8u);
    }
L_00088ab0:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_00088ab4:;
    {
        goto L_00088014;
    }
L_00088ab8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00088abc:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x38u);
    }
L_00088ac0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0xd8u);
    }
L_00088ac4:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[8]);
    }
L_00088ac8:;
    {
        goto L_00087c74;
    }
}

/* pi_create_encode @ 00088acc (arm) */
void fn_00088acc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00088acc:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x6cu);
    }
L_00088ad0:;
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
L_00088ad4:;
    {
        cpu->r[8] = 0x000015d4u;
    }
L_00088ad8:;
    {
        cpu->r[4] = 0x000000e8u;
    }
L_00088adc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00088ae0:;
    {
        uint32_t v = cpu->r[8] * cpu->r[2] + cpu->r[12]; cpu->r[8] = v;
    }
L_00088ae4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x58u);
    }
L_00088ae8:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3] + cpu->r[0]; cpu->r[4] = v;
    }
L_00088aec:;
    {
        cpu->r[0] = 0x00000094u;
    }
L_00088af0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00088af4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00088af8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3] + cpu->r[8]; cpu->r[0] = v;
    }
L_00088afc:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[2]);
    }
L_00088b00:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x1d0u);
    }
L_00088b04:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[2]);
    }
L_00088b08:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x1d0u);
    }
L_00088b0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00088b10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_00088b14:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[0]) {
        case 0: goto L_00088e00;
        case 1: goto L_00088e08;
        case 2: goto L_00088e18;
        case 3: goto L_00088b34;
        case 4: goto L_00088e28;
        case 5: goto L_00088df0;
        default: guest_unimplemented(cpu, 0x00088b14u); return; }
        }
    }
L_00088b18:;
    {
        goto L_00088b40;
    }
L_00088b34:;
    {
        cpu->r[2] = 0x00005052u;
    }
L_00088b38:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4c43u << 16);
    }
L_00088b3c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_00088b40:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0x10u);
    }
L_00088b44:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00088b48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00088c04;
        }
    }
L_00088b4c:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_00088b50:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x60u);
    }
L_00088b54:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00088b58:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
        }
    }
L_00088b5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00088bfc;
        }
    }
L_00088b60:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x64u);
    }
L_00088b64:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00088b68:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00088d28;
        }
    }
L_00088b6c:;
    {
        cpu->r[2] = 0x00000094u;
    }
L_00088b70:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_00088b74:;
    {
        cpu->r[7] = 0x00000003u;
    }
L_00088b78:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00088b7c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[8]; cpu->r[8] = v;
    }
L_00088b80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000224u, 0, 0);
    }
L_00088b84:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], 0x000001d0u, 0, 0);
    }
L_00088b88:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00088b8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000214u, 0, 0);
    }
L_00088b90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000238u, 0, 0);
    }
L_00088b94:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], 0x00000220u, 0, 0);
    }
L_00088b98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], 0x0000023cu, 0, 0);
    }
L_00088b9c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_00088ba0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_00088ba4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00088ba8:;
    {
        cpu->r[2] = rd8(cpu->r[10] + cpu->r[7]);
    }
L_00088bac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000043u, 1, 0);
    }
L_00088bb0:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000fu, 1, 1);
    }
L_00088bb4:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[2]) {
        case 0: goto L_00088d60;
        case 1: goto L_00088d20;
        case 2: goto L_00088d20;
        case 3: goto L_00088d20;
        case 4: goto L_00088d20;
        case 5: goto L_00088d20;
        case 6: goto L_00088d20;
        case 7: goto L_00088d20;
        case 8: goto L_00088d20;
        case 9: goto L_00088d34;
        case 10: goto L_00088d20;
        case 11: goto L_00088d20;
        case 12: goto L_00088d20;
        case 13: goto L_00088db8;
        case 14: goto L_00088d20;
        case 15: goto L_00088d8c;
        default: guest_unimplemented(cpu, 0x00088bb4u); return; }
        }
    }
L_00088bb8:;
    {
        goto L_00088d20;
    }
L_00088bfc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00088c00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00088b60;
        }
    }
L_00088c04:;
    {
        cpu->r[2] = 0x00000094u;
    }
L_00088c08:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00088c0c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[8]; cpu->r[8] = v;
    }
L_00088c10:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x20cu);
    }
L_00088c14:;
    {
        cpu->r[9] = rd32(cpu->r[8] + + 0x21cu);
    }
L_00088c18:;
    {
        cpu->r[10] = rd32(cpu->r[8] + + 0x1f4u);
    }
L_00088c1c:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0x204u);
    }
L_00088c20:;
    {
        cpu->r[6] = rd32(cpu->r[8] + + 0x1f8u);
    }
L_00088c24:;
    {
        cpu->r[5] = rd32(cpu->r[8] + + 0x208u);
    }
L_00088c28:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0x1f0u);
    }
L_00088c2c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x200u);
    }
L_00088c30:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x1fcu);
    }
L_00088c34:;
    {
        cpu->r[11] = rd32(cpu->r[8] + + 0x210u);
    }
L_00088c38:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_00088c3c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x218u);
    }
L_00088c40:;
    {
        cpu->r[8] = rd32(cpu->r[8] + + 0x214u);
    }
L_00088c44:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[9]);
    }
L_00088c48:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_00088c4c:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[10]);
    }
L_00088c50:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[7]);
    }
L_00088c54:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[6]);
    }
L_00088c58:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[5]);
    }
L_00088c5c:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[12]);
    }
L_00088c60:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[1]);
    }
L_00088c64:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[2]);
    }
L_00088c68:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[11]);
    }
L_00088c6c:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[8]);
    }
L_00088c70:;
    {
        goto L_00088d2c;
    }
L_00088c74:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00088c78:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_00088c7c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00088c80:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00088c84:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000890e4;
        }
    }
L_00088c88:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00088c8c:;
    {
        cpu->r[11] = rd32(cpu->r[2]);
    }
L_00088c90:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x21cu);
    }
L_00088c94:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_00088c98:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00089160;
        }
    }
L_00088c9c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00088ca0:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x218u);
    }
L_00088ca4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00088ca8:;
    {
        cpu->r[11] = rd32(cpu->r[14]);
    }
L_00088cac:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00088cb0:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[2]);
    }
L_00088cb4:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_00088cb8:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00088cbc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00088cc0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[2], 0, 0);
    }
L_00088cc4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00088cc8:;
    {
        cpu->r[14] = 0x00088cccu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00088ccc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00088cd0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[12] = v1;
    }
L_00088cd4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 0);
    }
L_00088cd8:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_00088cdc:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[1]);
    }
L_00088ce0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00088ce4:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x210u);
    }
L_00088ce8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_00088cec:;
    {
        cpu->r[11] = rd32(cpu->r[1]);
    }
L_00088cf0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00088cf4:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[2]);
    }
L_00088cf8:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00088cfc:;
    {
        wr32(cpu->r[14], cpu->r[2]);
    }
L_00088d00:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[2], 0, 0);
    }
L_00088d04:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_00088d08:;
    {
        cpu->r[14] = 0x00088d0cu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00088d0c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00088d10:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[12] = v1;
    }
L_00088d14:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 0);
    }
L_00088d18:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00088d1c:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[1]);
    }
L_00088d20:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_00088d24:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00088ba8;
        }
    }
L_00088d28:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00088d2c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00088d30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00088d34u)) return;
    }
L_00088d34:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_00088d38:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00088e8c;
        }
    }
L_00088d3c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00088d40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00088ed8;
        }
    }
L_00088d44:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_00088d48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008906c;
        }
    }
L_00088d4c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x228u);
    }
L_00088d50:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00088d54:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[1]);
    }
L_00088d58:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[2]);
    }
L_00088d5c:;
    {
        goto L_00088d20;
    }
L_00088d60:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_00088d64:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00088e70;
        }
    }
L_00088d68:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00088d6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00088ea8;
        }
    }
L_00088d70:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_00088d74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00089094;
        }
    }
L_00088d78:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x230u);
    }
L_00088d7c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00088d80:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[1]);
    }
L_00088d84:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[2]);
    }
L_00088d88:;
    {
        goto L_00088d20;
    }
L_00088d8c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_00088d90:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00088e38;
        }
    }
L_00088d94:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00088d98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00088ec0;
        }
    }
L_00088d9c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_00088da0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00089044;
        }
    }
L_00088da4:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x22cu);
    }
L_00088da8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00088dac:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[1]);
    }
L_00088db0:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[2]);
    }
L_00088db4:;
    {
        goto L_00088d20;
    }
L_00088db8:;
    {
        cpu->r[2] = rd32(cpu->r[9]);
    }
L_00088dbc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00088dc0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00088e54;
        }
    }
L_00088dc4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_00088dc8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00088ef0;
        }
    }
L_00088dcc:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x210u);
    }
L_00088dd0:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x218u);
    }
L_00088dd4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00088dd8:;
    {
        cpu->r[11] = rd32(cpu->r[8] + + 0x21cu);
    }
L_00088ddc:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[0]);
    }
L_00088de0:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[1]);
    }
L_00088de4:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[2]);
    }
L_00088de8:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[11]);
    }
L_00088dec:;
    {
        goto L_00088d20;
    }
L_00088df0:;
    {
        cpu->r[2] = 0x00005043u;
    }
L_00088df4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4c52u << 16);
    }
L_00088df8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_00088dfc:;
    {
        goto L_00088b40;
    }
L_00088e00:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00088e04:;
    {
        goto L_00088d2c;
    }
L_00088e08:;
    {
        cpu->r[2] = 0x0000524cu;
    }
L_00088e0c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x5043u << 16);
    }
L_00088e10:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_00088e14:;
    {
        goto L_00088b40;
    }
L_00088e18:;
    {
        cpu->r[2] = 0x00004c52u;
    }
L_00088e1c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x5043u << 16);
    }
L_00088e20:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_00088e24:;
    {
        goto L_00088b40;
    }
L_00088e28:;
    {
        cpu->r[2] = 0x00004350u;
    }
L_00088e2c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4c52u << 16);
    }
L_00088e30:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_00088e34:;
    {
        goto L_00088b40;
    }
L_00088e38:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x1f4u);
    }
L_00088e3c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_00088e40:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x204u);
    }
L_00088e44:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[1]);
    }
L_00088e48:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[2]);
    }
L_00088e4c:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00088ba8;
        }
    }
L_00088e50:;
    {
        goto L_00088d28;
    }
L_00088e54:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_00088e58:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00088f80;
        }
    }
L_00088e5c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x1fcu);
    }
L_00088e60:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x20cu);
    }
L_00088e64:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[1]);
    }
L_00088e68:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[2]);
    }
L_00088e6c:;
    {
        goto L_00088d20;
    }
L_00088e70:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x1f8u);
    }
L_00088e74:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_00088e78:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x208u);
    }
L_00088e7c:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[1]);
    }
L_00088e80:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[2]);
    }
L_00088e84:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00088ba8;
        }
    }
L_00088e88:;
    {
        goto L_00088d28;
    }
L_00088e8c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x1f0u);
    }
L_00088e90:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_00088e94:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x200u);
    }
L_00088e98:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[1]);
    }
L_00088e9c:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[2]);
    }
L_00088ea0:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00088ba8;
        }
    }
L_00088ea4:;
    {
        goto L_00088d28;
    }
L_00088ea8:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x1f8u);
    }
L_00088eac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00088eb0:;
    {
        wr32(cpu->r[8] + + 0x230u, cpu->r[2]);
    }
L_00088eb4:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[1]);
    }
L_00088eb8:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[2]);
    }
L_00088ebc:;
    {
        goto L_00088d20;
    }
L_00088ec0:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x1f4u);
    }
L_00088ec4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00088ec8:;
    {
        wr32(cpu->r[8] + + 0x22cu, cpu->r[2]);
    }
L_00088ecc:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[1]);
    }
L_00088ed0:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[2]);
    }
L_00088ed4:;
    {
        goto L_00088d20;
    }
L_00088ed8:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x1f0u);
    }
L_00088edc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00088ee0:;
    {
        wr32(cpu->r[8] + + 0x228u, cpu->r[2]);
    }
L_00088ee4:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[1]);
    }
L_00088ee8:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[2]);
    }
L_00088eec:;
    {
        goto L_00088d20;
    }
L_00088ef0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00088ef4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00088fbc;
        }
    }
L_00088ef8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_00088efc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00088c74;
        }
    }
L_00088f00:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00088f04:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_00088f08:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00088f0c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00088f10:;
    {
        cpu->r[2] = rd32(cpu->r[14]);
    }
L_00088f14:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00088f18:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00088f1c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00088f20:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00088f24:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_00088f28:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_00088f2c:;
    {
        cpu->r[14] = 0x00088f30u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00088f30:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00088f34:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00088f38:;
    {
        cpu->r[11] = rd32(cpu->r[0]);
    }
L_00088f3c:;
    {
        cpu->r[2] = rd32(cpu->r[14]);
    }
L_00088f40:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00088f44:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 0);
    }
L_00088f48:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_00088f4c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_00088f50:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[0]);
    }
L_00088f54:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00088f58:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[14], cpu->r[1], 1, 0);
    }
L_00088f5c:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[1]);
    }
L_00088f60:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00088f64:;
    {
        cpu->r[14] = 0x00088f68u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00088f68:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00088f6c:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[11]);
    }
L_00088f70:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[12] = v1;
    }
L_00088f74:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_00088f78:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[1]);
    }
L_00088f7c:;
    {
        goto L_00088d20;
    }
L_00088f80:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00088f84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00088fa4;
        }
    }
L_00088f88:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_00088f8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000890bc;
        }
    }
L_00088f90:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x234u);
    }
L_00088f94:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00088f98:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[1]);
    }
L_00088f9c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[2]);
    }
L_00088fa0:;
    {
        goto L_00088d20;
    }
L_00088fa4:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x1fcu);
    }
L_00088fa8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00088fac:;
    {
        wr32(cpu->r[8] + + 0x234u, cpu->r[2]);
    }
L_00088fb0:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[1]);
    }
L_00088fb4:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[2]);
    }
L_00088fb8:;
    {
        goto L_00088d20;
    }
L_00088fbc:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x210u);
    }
L_00088fc0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_00088fc4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00088fc8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00088fcc:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[2]);
    }
L_00088fd0:;
    {
        cpu->r[11] = rd32(cpu->r[14]);
    }
L_00088fd4:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_00088fd8:;
    {
        cpu->r[14] = rd32(cpu->r[8] + + 0x218u);
    }
L_00088fdc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00088fe0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_00088fe4:;
    {
        wr32(cpu->r[1], cpu->r[14]);
    }
L_00088fe8:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00088fec:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[2], 0, 0);
    }
L_00088ff0:;
    {
        cpu->r[14] = 0x00088ff4u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00088ff4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00088ff8:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x218u);
    }
L_00088ffc:;
    {
        cpu->r[2] = rd32(cpu->r[14]);
    }
L_00089000:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[0]);
    }
L_00089004:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_00089008:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_0008900c:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 0);
    }
L_00089010:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00089014:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[11]);
    }
L_00089018:;
    {
        cpu->r[14] = 0x0008901cu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_0008901c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00089020:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_00089024:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00089028:;
    {
        wr32(cpu->r[0], cpu->r[11]);
    }
L_0008902c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00089030:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_00089034:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_00089038:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_0008903c:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[1]);
    }
L_00089040:;
    {
        goto L_00088d20;
    }
L_00089044:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x22cu);
    }
L_00089048:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x204u);
    }
L_0008904c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00089050:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00088ec0;
        }
    }
L_00089054:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00089058:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[2]);
    }
L_0008905c:;
    {
        wr32(cpu->r[8] + + 0x22cu, cpu->r[1]);
    }
L_00089060:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00089064:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[1]);
    }
L_00089068:;
    {
        goto L_00088d20;
    }
L_0008906c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x228u);
    }
L_00089070:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x200u);
    }
L_00089074:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00089078:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00088ed8;
        }
    }
L_0008907c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00089080:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[2]);
    }
L_00089084:;
    {
        wr32(cpu->r[8] + + 0x228u, cpu->r[1]);
    }
L_00089088:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0008908c:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[1]);
    }
L_00089090:;
    {
        goto L_00088d20;
    }
L_00089094:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x230u);
    }
L_00089098:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x208u);
    }
L_0008909c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000890a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00088ea8;
        }
    }
L_000890a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000890a8:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[2]);
    }
L_000890ac:;
    {
        wr32(cpu->r[8] + + 0x230u, cpu->r[1]);
    }
L_000890b0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000890b4:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[1]);
    }
L_000890b8:;
    {
        goto L_00088d20;
    }
L_000890bc:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x234u);
    }
L_000890c0:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x20cu);
    }
L_000890c4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000890c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00088fa4;
        }
    }
L_000890cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000890d0:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[2]);
    }
L_000890d4:;
    {
        wr32(cpu->r[8] + + 0x234u, cpu->r[1]);
    }
L_000890d8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000890dc:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[1]);
    }
L_000890e0:;
    {
        goto L_00088d20;
    }
L_000890e4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000890e8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000890ec:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[2]);
    }
L_000890f0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000890f4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000890f8:;
    {
        cpu->r[14] = rd32(cpu->r[1]);
    }
L_000890fc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00089100:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_00089104:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_00089108:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0008910c:;
    {
        cpu->r[14] = 0x00089110u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00089110:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00089114:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00089118:;
    {
        cpu->r[11] = rd32(cpu->r[2]);
    }
L_0008911c:;
    {
        cpu->r[2] = rd32(cpu->r[14]);
    }
L_00089120:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00089124:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 0);
    }
L_00089128:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_0008912c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_00089130:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[14], cpu->r[1], 1, 0);
    }
L_00089134:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_00089138:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[1]);
    }
L_0008913c:;
    {
        wr32(cpu->r[14], cpu->r[1]);
    }
L_00089140:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00089144:;
    {
        cpu->r[14] = 0x00089148u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00089148:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008914c:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[11]);
    }
L_00089150:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[12] = v1;
    }
L_00089154:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_00089158:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[1]);
    }
L_0008915c:;
    {
        goto L_00088d20;
    }
L_00089160:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00089164:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00089168:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[11]);
    }
L_0008916c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00089170:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00089174:;
    {
        cpu->r[2] = rd32(cpu->r[14]);
    }
L_00089178:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0008917c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00089180:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[2], cpu->r[11], 0, 0);
    }
L_00089184:;
    {
        cpu->r[14] = 0x00089188u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00089188:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008918c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[12] = v1;
    }
L_00089190:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 0);
    }
L_00089194:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00089198:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[1]);
    }
L_0008919c:;
    {
        goto L_00088ce0;
    }
}

/* raw_create @ 000891a0 (arm) */
void fn_000891a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000891a0:;
    {
        cpu->r[3] = rd32(0x000891a8u + + 0x1cu);
    }
L_000891a4:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_000891a8:;
    {
        cpu->r[2] = rd32(0x000891b0u + + 0x18u);
    }
L_000891ac:;
    {
        cpu->r[3] = add_flags(cpu, 0x000891b4u, cpu->r[3], 0, 0);
    }
L_000891b0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000891b4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000891b8:;
    {
        cpu->r[14] = 0x000891c0u;
    }
L_000891bc:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000891c0u)) return;
    }
L_000891c0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000891c4u)) return;
    }
}

/* raw_destroy @ 000891cc (arm) */
void fn_000891cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000891cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000891d0:;
    {
        cpu->r[3] = rd32(0x000891d8u + + 0x1cu);
    }
L_000891d4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000891d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000891e0u, cpu->r[3], 0, 0);
    }
L_000891dc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000891e0u)) return;
        }
    }
L_000891e0:;
    {
        cpu->r[2] = rd32(0x000891e8u + + 0x10u);
    }
L_000891e4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000891e8:;
    {
        cpu->r[14] = 0x000891f0u;
    }
L_000891ec:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000891f0u)) return;
    }
L_000891f0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000891f4u)) return;
    }
}

/* raw_numbytes @ 000891fc (arm) */
void fn_000891fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000891fc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_00089200:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_00089204:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00089208:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}
