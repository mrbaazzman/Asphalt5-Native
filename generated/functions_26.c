#include "functions.h"

/* _ZN14CarSceneObject19RemoveSmokeEmittersEv @ 000b04ec (arm) */
void fn_000b04ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b04ec:;
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
L_000b04f0:;
    {
        cpu->r[6] = rd32(0x000b04f8u + + 0x58u);
    }
L_000b04f4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000c20u, 0, 0);
    }
L_000b04f8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000b04fc:;
    {
        cpu->r[7] = 0x00008c4cu;
    }
L_000b0500:;
    {
        cpu->r[9] = rd32(0x000b0508u + + 0x4cu);
    }
L_000b0504:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000b0508:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000b050c:;
    {
        cpu->r[10] = 0x00001bc8u;
    }
L_000b0510:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_000b0514:;
    {
        cpu->r[6] = add_flags(cpu, 0x000b051cu, cpu->r[6], 0, 0);
    }
L_000b0518:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000b051c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000b0520:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b0524:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b0540;
        }
    }
L_000b0528:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_000b052c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b0530:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_000b0534:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_000b0538:;
    {
        cpu->r[14] = 0x000b053cu; fn_00158fe8(cpu);
    }
L_000b053c:;
    {
        wr32(cpu->r[4], cpu->r[8]);
    }
L_000b0540:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 1);
    }
L_000b0544:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000b0548:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b0518;
        }
    }
L_000b054c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b0550u)) return;
    }
}

/* _ZN14CarSceneObject13CleanTexturesEv @ 000b0558 (arm) */
void fn_000b0558(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b0558:;
    {
        cpu->r[3] = rd32(0x000b0560u + + 0xa0u);
    }
L_000b055c:;
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
L_000b0560:;
    {
        cpu->r[2] = rd32(0x000b0568u + + 0x9cu);
    }
L_000b0564:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0xb58u);
    }
L_000b0568:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b0570u, cpu->r[3], 0, 0);
    }
L_000b056c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b0570:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000b0574:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b0578:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_000b057c:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[7] = v;
    }
L_000b0580:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000b0584:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00004e00u, 0, 0);
    }
L_000b0588:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000020u, 0, 0);
    }
L_000b058c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xd00u);
    }
L_000b0590:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b0594:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xd08u);
    }
L_000b0598:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000b059c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00009c00u, 0, 0);
    }
L_000b05a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000040u, 0, 0);
    }
L_000b05a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_000b05a8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000b05ac:;
    {
        cpu->r[14] = 0x000b05b0u; fn_00135c90(cpu);
    }
L_000b05b0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000b05b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xd08u);
    }
L_000b05b8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000b05bc:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000b05c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b05c4:;
    {
        cpu->r[14] = 0x000b05c8u; fn_00135c90(cpu);
    }
L_000b05c8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000b05cc:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000b05d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd08u);
    }
L_000b05d4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000b05d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b05dc:;
    {
        cpu->r[14] = 0x000b05e0u; fn_001367cc(cpu);
    }
L_000b05e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b05e4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000b05e8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000b05ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd08u);
    }
L_000b05f0:;
    {
        cpu->r[14] = 0x000b05f4u; fn_001367cc(cpu);
    }
L_000b05f4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000003u, 1, 1);
    }
L_000b05f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b058c;
        }
    }
L_000b05fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b0600u)) return;
    }
}

/* _ZN14CarSceneObject18RefreshBaseTextureEv @ 000b0608 (arm) */
void fn_000b0608(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b0608:;
    {
        cpu->r[3] = rd32(0x000b0610u + + 0xd4u);
    }
L_000b060c:;
    {
        cpu->r[2] = rd32(0x000b0614u + + 0xd4u);
    }
L_000b0610:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b0618u, cpu->r[3], 0, 0);
    }
L_000b0614:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000b0618:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0xd00u);
    }
L_000b061c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b0620:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000b0624:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b0628:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0xb58u);
    }
L_000b062c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_000b0630:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xd08u);
    }
L_000b0634:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000b0638:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00009c00u, 0, 0);
    }
L_000b063c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000040u, 0, 0);
    }
L_000b0640:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_000b0644:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000b0648:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b064c:;
    {
        cpu->r[14] = 0x000b0650u; fn_00135c90(cpu);
    }
L_000b0650:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[8] = v;
    }
L_000b0654:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00004e00u, 0, 0);
    }
L_000b0658:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xd08u);
    }
L_000b065c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000020u, 0, 0);
    }
L_000b0660:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000b0664:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b0668:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b066c:;
    {
        cpu->r[14] = 0x000b0670u; fn_00135c90(cpu);
    }
L_000b0670:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xd08u);
    }
L_000b0674:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x8u);
    }
L_000b0678:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000b067c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000b0680:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b0684:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000b0688:;
    {
        cpu->r[12] = rd32(cpu->r[14] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000b068c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_000b0690:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[12], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_000b0694:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_000b0698:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b069c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[14], 2, 2u, &shc), 0, 0);
    }
L_000b06a0:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x8u);
    }
L_000b06a4:;
    {
        wr32(cpu->r[8] + + 0x8u, cpu->r[12]);
    }
L_000b06a8:;
    {
        cpu->r[14] = 0x000b06acu; fn_001367cc(cpu);
    }
L_000b06ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b06b0:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_000b06b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd08u);
    }
L_000b06b8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b06bc:;
    {
        cpu->r[14] = 0x000b06c0u; fn_00135d9c(cpu);
    }
L_000b06c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd08u);
    }
L_000b06c4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b06c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b06cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000b06d0:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000b06d4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000b06d8:;
    {
        cpu->r[14] = 0x000b06dcu; fn_00136660(cpu);
    }
L_000b06dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000b06e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b06e4u)) return;
    }
}

/* _ZN14CarSceneObject10LoadCopCarEiii @ 000b06ec (arm) */
void fn_000b06ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b06ec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000b06f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b06f4:;
    {
        cpu->r[5] = rd32(0x000b06fcu + + 0x88u);
    }
L_000b06f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000b06fc:;
    {
        cpu->r[14] = cpu->r[2];
    }
L_000b0700:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_000b0704:;
    {
        cpu->r[5] = add_flags(cpu, 0x000b070cu, cpu->r[5], 0, 0);
    }
L_000b0708:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_000b070c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b072c;
        }
    }
L_000b0710:;
    {
        wr32(cpu->r[12] + + 0xb58u, cpu->r[1]);
    }
L_000b0714:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000b0718:;
    {
        wr32(cpu->r[0] + + 0xd04u, cpu->r[14]);
    }
L_000b071c:;
    {
        wr32(cpu->r[0] + + 0xd00u, cpu->r[14]);
    }
L_000b0720:;
    {
        wr32(cpu->r[0] + + 0xd08u, cpu->r[3]);
    }
L_000b0724:;
    {
        cpu->r[14] = 0x000b0728u; fn_000ea1a0(cpu);
    }
L_000b0728:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b072c:;
    {
        cpu->r[3] = rd32(0x000b0734u + + 0x54u);
    }
L_000b0730:;
    {
        cpu->r[1] = 0x00004e20u;
    }
L_000b0734:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b0738:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b073c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000b0740:;
    {
        cpu->r[14] = 0x000b0744u; fn_00135de0(cpu);
    }
L_000b0744:;
    {
        cpu->r[1] = 0x000059d7u;
    }
L_000b0748:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b074c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b0750:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000b0754:;
    {
        cpu->r[14] = 0x000b0758u; fn_00135de0(cpu);
    }
L_000b0758:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_000b075c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b0760:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b0764:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000b0768:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000b076c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000b0770:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b0774:;
    {
        cpu->r[14] = 0x000b0778u; fn_00136660(cpu);
    }
L_000b0778:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b077c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000b0780:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b0784u)) return;
    }
}

/* _ZN14CarSceneObject12LoadNinoNinoEi @ 000b078c (arm) */
void fn_000b078c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b078c:;
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
L_000b0790:;
    {
        cpu->r[4] = rd32(0x000b0798u + + 0x1f4u);
    }
L_000b0794:;
    {
        cpu->r[3] = rd32(0x000b079cu + + 0x1f4u);
    }
L_000b0798:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000b079c:;
    {
        cpu->r[4] = add_flags(cpu, 0x000b07a4u, cpu->r[4], 0, 0);
    }
L_000b07a0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b07a4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000b07a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b07ac:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000b07b0:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000b07b4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000b07b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b07bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b07dc;
        }
    }
L_000b07c0:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000b07c4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000b07c8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b07cc:;
    {
        cpu->r[2] = 0x000010d0u;
    }
L_000b07d0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000b07d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_000b07d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b07e4;
        }
    }
L_000b07dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000b07e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b07e4u)) return;
    }
L_000b07e4:;
    {
        cpu->r[1] = 0x00008cbcu;
    }
L_000b07e8:;
    {
        cpu->r[2] = 0x00008cc4u;
    }
L_000b07ec:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000b07f0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000b07f4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xd00u);
    }
L_000b07f8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000b07fc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b0800:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000b0804:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000b0808:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000b07dc;
        }
    }
L_000b080c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_000b0810:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00008cc0u;
        }
    }
L_000b0814:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00008cb8u;
        }
    }
L_000b0818:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000b081c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000b0820:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
        }
    }
L_000b0824:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
        }
    }
L_000b0828:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
        }
    }
L_000b082c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
        }
    }
L_000b0830:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
        }
    }
L_000b0834:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000b0838:;
    {
        cpu->r[14] = 0x000b083cu; fn_0015d920(cpu);
    }
L_000b083c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b0840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b07dc;
        }
    }
L_000b0844:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000b0848:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b08ec;
        }
    }
L_000b084c:;
    {
        cpu->r[3] = rd32(0x000b0854u + + 0x140u);
    }
L_000b0850:;
    {
        cpu->r[0] = 0x000001acu;
    }
L_000b0854:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b0858:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_000b085c:;
    {
        cpu->r[14] = 0x000b0860u; fn_0018ba6c(cpu);
    }
L_000b0860:;
    {
        cpu->r[1] = 0x00000122u;
    }
L_000b0864:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000b0868:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000b086c:;
    {
        cpu->r[14] = 0x000b0870u; fn_000ea704(cpu);
    }
L_000b0870:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000b0874:;
    {
        wr32(cpu->r[5] + + 0xd2cu, cpu->r[10]);
    }
L_000b0878:;
    {
        cpu->r[8] = rd16(cpu->r[10] + + 0xe8u);
    }
L_000b087c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b0880:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000b0884:;
    {
        cpu->r[14] = 0x000b0888u; fn_00132894(cpu);
    }
L_000b0888:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000b088c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b0890:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b0950;
        }
    }
L_000b0894:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b0898:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b089c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b08a0:;
    {
        cpu->r[14] = 0x000b08a4u; fn_00132b38(cpu);
    }
L_000b08a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b08a8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b0928;
        }
    }
L_000b08ac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xd2cu);
    }
L_000b08b0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000b08b4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b08b8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b08bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b08c0:;
    {
        cpu->r[14] = 0x000b08c8u;
    }
L_000b08c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b08c8u)) return;
    }
L_000b08c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b08cc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b0928;
        }
    }
L_000b08d0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xd2cu);
    }
L_000b08d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000b08d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b08e0u + + 0xa8u);
    }
L_000b08dc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b08e0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b08e4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b08e8:;
    {
        cpu->r[14] = 0x000b08ecu; fn_000b5fc4(cpu);
    }
L_000b08ec:;
    {
        cpu->r[3] = rd32(0x000b08f4u + + 0xa4u);
    }
L_000b08f0:;
    {
        cpu->r[1] = 0x000056b8u;
    }
L_000b08f4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b08f8:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b08fc:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000b0900:;
    {
        cpu->r[14] = 0x000b0904u; fn_00135de0(cpu);
    }
L_000b0904:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000b0908:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000b090c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000b0910:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000b0914:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000b0918:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b091c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000b0920:;
    {
        cpu->r[14] = 0x000b0924u; fn_00136660(cpu);
    }
L_000b0924:;
    {
        goto L_000b07dc;
    }
L_000b0928:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xd2cu);
    }
L_000b092c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b0930:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b07dc;
        }
    }
L_000b0934:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b0938:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b093c:;
    {
        cpu->r[14] = 0x000b0944u;
    }
L_000b0940:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b0944u)) return;
    }
L_000b0944:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b0948:;
    {
        wr32(cpu->r[5] + + 0xd2cu, cpu->r[3]);
    }
L_000b094c:;
    {
        goto L_000b07dc;
    }
L_000b0950:;
    {
        cpu->r[1] = rd32(0x000b0958u + + 0x44u);
    }
L_000b0954:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000b0958:;
    {
        cpu->r[12] = rd32(0x000b0960u + + 0x40u);
    }
L_000b095c:;
    {
        cpu->r[14] = 0x00000903u;
    }
L_000b0960:;
    {
        cpu->r[2] = rd32(0x000b0968u + + 0x3cu);
    }
L_000b0964:;
    {
        cpu->r[1] = add_flags(cpu, 0x000b096cu, cpu->r[1], 0, 0);
    }
L_000b0968:;
    {
        cpu->r[3] = rd32(0x000b0970u + + 0x38u);
    }
L_000b096c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000b0974u, cpu->r[12], 0, 0);
    }
L_000b0970:;
    {
        cpu->r[2] = add_flags(cpu, 0x000b0978u, cpu->r[2], 0, 0);
    }
L_000b0974:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_000b0978:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b0980u, cpu->r[3], 0, 0);
    }
L_000b097c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000b0980:;
    {
        cpu->r[14] = 0x000b0984u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000b0984:;
    {
        goto L_000b0894;
    }
}

/* _ZN14CarSceneObject6IsBikeEv @ 000b09ac (arm) */
void fn_000b09ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b09ac:;
    {
        cpu->r[3] = rd32(0x000b09b4u + + 0x24u);
    }
L_000b09b0:;
    {
        cpu->r[2] = rd32(0x000b09b8u + + 0x24u);
    }
L_000b09b4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b09bcu, cpu->r[3], 0, 0);
    }
L_000b09b8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xd04u);
    }
L_000b09bc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000b09c0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b09c4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000b09c8:;
    {
        cpu->r[14] = 0x000b09ccu; fn_00096f84(cpu);
    }
L_000b09cc:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_000b09d0:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000b09d4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b09d8u)) return;
    }
}

/* _ZN14CarSceneObject10LoadDriverEi @ 000b09e0 (arm) */
void fn_000b09e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b09e0:;
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
L_000b09e4:;
    {
        cpu->r[4] = rd32(0x000b09ecu + + 0x23cu);
    }
L_000b09e8:;
    {
        cpu->r[3] = rd32(0x000b09f0u + + 0x23cu);
    }
L_000b09ec:;
    {
        cpu->r[2] = 0x00001d38u;
    }
L_000b09f0:;
    {
        cpu->r[4] = add_flags(cpu, 0x000b09f8u, cpu->r[4], 0, 0);
    }
L_000b09f4:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000b09f8:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_000b09fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000b0a00:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b0a04:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b0a08:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000b0a0c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b0a10:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000b0a14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000740u, 0, 0);
    }
L_000b0a18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000eu, 0, 0);
    }
L_000b0a1c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b0a20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000b0a24:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000b0a28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b0a48;
        }
    }
L_000b0a2c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b0a30:;
    {
        cpu->r[1] = 0x00000016u;
    }
L_000b0a34:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b0a38:;
    {
        cpu->r[14] = 0x000b0a40u;
    }
L_000b0a3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b0a40u)) return;
    }
L_000b0a40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b0a44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b0a54;
        }
    }
L_000b0a48:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b0a4c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000b0a50:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b0a54u)) return;
    }
L_000b0a54:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000b0a58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b0b5c;
        }
    }
L_000b0a5c:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000b0a60:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xd04u);
    }
L_000b0a64:;
    {
        cpu->r[14] = 0x000b0a68u; fn_00096f84(cpu);
    }
L_000b0a68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b0a6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b0bac;
        }
    }
L_000b0a70:;
    {
        cpu->r[3] = rd32(0x000b0a78u + + 0x1b8u);
    }
L_000b0a74:;
    {
        cpu->r[10] = 0x00000007u;
    }
L_000b0a78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b0a7c:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_000b0a80:;
    {
        wr32(cpu->r[5] + + 0xbfcu, cpu->r[0]);
    }
L_000b0a84:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000320u, 1, 1);
    }
L_000b0a88:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x00000047u;
        }
    }
L_000b0a8c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = 0x00000046u;
        }
    }
L_000b0a90:;
    {
        cpu->r[3] = rd32(0x000b0a98u + + 0x19cu);
    }
L_000b0a94:;
    {
        cpu->r[0] = 0x000001acu;
    }
L_000b0a98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b0a9c:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_000b0aa0:;
    {
        cpu->r[14] = 0x000b0aa4u; fn_0018ba6c(cpu);
    }
L_000b0aa4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000b0aa8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000b0aac:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b0ab0:;
    {
        cpu->r[14] = 0x000b0ab4u; fn_000ea704(cpu);
    }
L_000b0ab4:;
    {
        wr32(cpu->r[5] + + 0xd28u, cpu->r[6]);
    }
L_000b0ab8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b0abc:;
    {
        cpu->r[8] = rd16(cpu->r[6] + + 0xe8u);
    }
L_000b0ac0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xd08u);
    }
L_000b0ac4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000b0ac8:;
    {
        cpu->r[14] = 0x000b0accu; fn_00132894(cpu);
    }
L_000b0acc:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000b0ad0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b0ad4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b0bec;
        }
    }
L_000b0ad8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xd28u);
    }
L_000b0adc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000b0ae0:;
    {
        cpu->r[14] = 0x000b0ae4u; fn_00153efc(cpu);
    }
L_000b0ae4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b0ae8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b0aec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xd08u);
    }
L_000b0af0:;
    {
        cpu->r[14] = 0x000b0af4u; fn_00132b38(cpu);
    }
L_000b0af4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b0af8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b0bc4;
        }
    }
L_000b0afc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xd28u);
    }
L_000b0b00:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000b0b04:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xd08u);
    }
L_000b0b08:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b0b0c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b0b10:;
    {
        cpu->r[14] = 0x000b0b18u;
    }
L_000b0b14:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b0b18u)) return;
    }
L_000b0b18:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b0b1c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b0bc4;
        }
    }
L_000b0b20:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xd28u);
    }
L_000b0b24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000b0b28:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b0b30u + + 0xf4u);
    }
L_000b0b2c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b0b30:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b0b34:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b0b38:;
    {
        cpu->r[14] = 0x000b0b3cu; fn_000b5fc4(cpu);
    }
L_000b0b3c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xd28u);
    }
L_000b0b40:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000b0b44:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b0b48:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b0b4c:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_000b0b50:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b0b54:;
    {
        cpu->r[14] = 0x000b0b5cu;
    }
L_000b0b58:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b0b5cu)) return;
    }
L_000b0b5c:;
    {
        cpu->r[3] = rd32(0x000b0b64u + + 0xd4u);
    }
L_000b0b60:;
    {
        cpu->r[1] = 0x00004e20u;
    }
L_000b0b64:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xd08u);
    }
L_000b0b68:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b0b6c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000b0b70:;
    {
        cpu->r[14] = 0x000b0b74u; fn_00135de0(cpu);
    }
L_000b0b74:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xd08u);
    }
L_000b0b78:;
    {
        cpu->r[1] = 0x000059d7u;
    }
L_000b0b7c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b0b80:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000b0b84:;
    {
        cpu->r[14] = 0x000b0b88u; fn_00135de0(cpu);
    }
L_000b0b88:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_000b0b8c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b0b90:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xd08u);
    }
L_000b0b94:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b0b98:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000b0b9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_000b0ba0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b0ba4:;
    {
        cpu->r[14] = 0x000b0ba8u; fn_00136660(cpu);
    }
L_000b0ba8:;
    {
        goto L_000b0a48;
    }
L_000b0bac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000b0bb0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b0a48;
        }
    }
L_000b0bb4:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_000b0bb8:;
    {
        cpu->r[8] = 0x0000004fu;
    }
L_000b0bbc:;
    {
        wr32(cpu->r[5] + + 0xbfcu, cpu->r[7]);
    }
L_000b0bc0:;
    {
        goto L_000b0a90;
    }
L_000b0bc4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xd28u);
    }
L_000b0bc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b0bcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b0a48;
        }
    }
L_000b0bd0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b0bd4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b0bd8:;
    {
        cpu->r[14] = 0x000b0be0u;
    }
L_000b0bdc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b0be0u)) return;
    }
L_000b0be0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b0be4:;
    {
        wr32(cpu->r[5] + + 0xd28u, cpu->r[3]);
    }
L_000b0be8:;
    {
        goto L_000b0a48;
    }
L_000b0bec:;
    {
        cpu->r[1] = rd32(0x000b0bf4u + + 0x48u);
    }
L_000b0bf0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000b0bf4:;
    {
        cpu->r[12] = rd32(0x000b0bfcu + + 0x44u);
    }
L_000b0bf8:;
    {
        cpu->r[14] = 0x000008d2u;
    }
L_000b0bfc:;
    {
        cpu->r[2] = rd32(0x000b0c04u + + 0x40u);
    }
L_000b0c00:;
    {
        cpu->r[1] = add_flags(cpu, 0x000b0c08u, cpu->r[1], 0, 0);
    }
L_000b0c04:;
    {
        cpu->r[3] = rd32(0x000b0c0cu + + 0x3cu);
    }
L_000b0c08:;
    {
        cpu->r[12] = add_flags(cpu, 0x000b0c10u, cpu->r[12], 0, 0);
    }
L_000b0c0c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000b0c14u, cpu->r[2], 0, 0);
    }
L_000b0c10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_000b0c14:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b0c1cu, cpu->r[3], 0, 0);
    }
L_000b0c18:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000b0c1c:;
    {
        cpu->r[14] = 0x000b0c20u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000b0c20:;
    {
        goto L_000b0ad8;
    }
}

/* _ZN14CarSceneObject9SetAspectEP10CCarAspectb @ 000b0c4c (arm) */
void fn_000b0c4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b0c4c:;
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
L_000b0c50:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000b0c54:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000001a8u, 0, 0);
    }
L_000b0c58:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000003cu, 1, 0);
    }
L_000b0c5c:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_000b0c60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000b0c64:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000b0c68:;
    {
        cpu->r[4] = rd32(0x000b0c70u + + 0x1d4u);
    }
L_000b0c6c:;
    {
        cpu->r[14] = 0x000b0c70u; imp_memcpy(cpu); /* memcpy */
    }
L_000b0c70:;
    {
        cpu->r[3] = rd32(0x000b0c78u + + 0x1d0u);
    }
L_000b0c74:;
    {
        cpu->r[2] = rd32(0x000b0c7cu + + 0x1d0u);
    }
L_000b0c78:;
    {
        cpu->r[4] = add_flags(cpu, 0x000b0c80u, cpu->r[4], 0, 0);
    }
L_000b0c7c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b0c84u, cpu->r[3], 0, 0);
    }
L_000b0c80:;
    {
        cpu->r[12] = rd8(cpu->r[6] + + 0x31u);
    }
L_000b0c84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000040u, 0, 0);
    }
L_000b0c88:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000b0c8c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000b0c90:;
    {
        { uint32_t v = cpu->r[12] & 0x00000020u; set_nz(cpu, v); }
    }
L_000b0c94:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
    }
L_000b0c98:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000b0c9c:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_000b0ca0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[4]);
    }
L_000b0ca4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[4]);
    }
L_000b0ca8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_000b0cac:;
    {
        cpu->r[5] = 0x00000002u;
    }
L_000b0cb0:;
    {
        uint32_t base = cpu->r[11];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_000b0cb4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[5]);
    }
L_000b0cb8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[4]);
    }
L_000b0cbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b0dc8;
        }
    }
L_000b0cc0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000b0cc4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000b0cc8:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_000b0ccc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000b0cd0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[4] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000b0cd4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b0cd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b0cfc;
        }
    }
L_000b0cdc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000b0ce0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000b0ce4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000010u, 1, 1);
    }
L_000b0ce8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b0dc0;
        }
    }
L_000b0cec:;
    {
        cpu->r[12] = rd8(cpu->r[6] + + 0x31u);
    }
L_000b0cf0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[4] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000b0cf4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b0cf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b0cdc;
        }
    }
L_000b0cfc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b0d00:;
    {
        uint32_t v = cpu->r[12] & ~ shifter(cpu->r[3], 2, (cpu->r[4] & 0xffu), &shc); cpu->r[12] = v;
    }
L_000b0d04:;
    {
        wr8(cpu->r[6] + + 0x31u, cpu->r[12]);
    }
L_000b0d08:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b0d0c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0xd00u);
    }
L_000b0d10:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0xd08u);
    }
L_000b0d14:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[5]);
    }
L_000b0d18:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000b0d1c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b0d20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00009c00u, 0, 0);
    }
L_000b0d24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000040u, 0, 0);
    }
L_000b0d28:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_000b0d2c:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_000b0d30:;
    {
        cpu->r[14] = 0x000b0d34u; fn_00135cf4(cpu);
    }
L_000b0d34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_000b0d38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], cpu->r[5], 0, 0);
    }
L_000b0d3c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000b0d40:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000b0d44:;
    {
        cpu->r[2] = rd8(cpu->r[6] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000b0d48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_000b0d4c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000b0d50:;
    {
        cpu->r[9] = rd8(cpu->r[12] + + 0x1u);
    }
L_000b0d54:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000b0d58:;
    {
        cpu->r[10] = rd8(cpu->r[3] + + 0x1u);
    }
L_000b0d5c:;
    {
        cpu->r[8] = rd8(cpu->r[12] + + 0x8u);
    }
L_000b0d60:;
    {
        cpu->r[14] = rd8(cpu->r[12] + + 0x5u);
    }
L_000b0d64:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[9], 2, 8u, &shc); cpu->r[9] = v;
    }
L_000b0d68:;
    {
        cpu->r[1] = rd8(cpu->r[12] + + 0x2u);
    }
L_000b0d6c:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[10], 2, 8u, &shc); cpu->r[10] = v;
    }
L_000b0d70:;
    {
        cpu->r[2] = rd8(cpu->r[12] + + 0x4u);
    }
L_000b0d74:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[10]);
    }
L_000b0d78:;
    {
        cpu->r[8] = rd8(cpu->r[12] + + 0x6u);
    }
L_000b0d7c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[14], 2, 8u, &shc); cpu->r[2] = v;
    }
L_000b0d80:;
    {
        cpu->r[10] = rd8(cpu->r[3] + + 0x2u);
    }
L_000b0d84:;
    {
        uint32_t v = cpu->r[9] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[1] = v;
    }
L_000b0d88:;
    {
        cpu->r[14] = rd8(cpu->r[12] + + 0x3u);
    }
L_000b0d8c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x3u);
    }
L_000b0d90:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[8], 2, 16u, &shc); cpu->r[2] = v;
    }
L_000b0d94:;
    {
        cpu->r[12] = rd8(cpu->r[12] + + 0x7u);
    }
L_000b0d98:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_000b0d9c:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[14], 2, 24u, &shc); cpu->r[1] = v;
    }
L_000b0da0:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[10], 2, 16u, &shc); cpu->r[10] = v;
    }
L_000b0da4:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[12], 2, 24u, &shc); cpu->r[2] = v;
    }
L_000b0da8:;
    {
        uint32_t v = cpu->r[10] | shifter(cpu->r[3], 2, 24u, &shc); cpu->r[3] = v;
    }
L_000b0dac:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000b0db0:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b0db4:;
    {
        cpu->r[14] = 0x000b0db8u; fn_00135568(cpu);
    }
L_000b0db8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000010u, 1, 1);
    }
L_000b0dbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b0cec;
        }
    }
L_000b0dc0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000b0dc4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b0dc8u)) return;
    }
L_000b0dc8:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s8(cpu->r[6] + + 0x30u);
    }
L_000b0dcc:;
    {
        uint32_t v = cpu->r[12] & ~ 0x00000020u; cpu->r[12] = v;
    }
L_000b0dd0:;
    {
        wr8(cpu->r[6] + + 0x31u, cpu->r[12]);
    }
L_000b0dd4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000b0dd8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00005d00u, 0, 0);
    }
L_000b0ddc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b0de0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x000000c0u, 0, 0);
    }
L_000b0de4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000b0de8:;
    {
        cpu->r[14] = 0x000b0decu; fn_00135c90(cpu);
    }
L_000b0dec:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[5]);
    }
L_000b0df0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b0df4:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000b0df8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000b0dfc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b0e00:;
    {
        cpu->r[14] = 0x000b0e04u; fn_00135d9c(cpu);
    }
L_000b0e04:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000b0e08:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000b0e0c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000b0e10:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b0e14:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000b0e18:;
    {
        cpu->r[14] = 0x000b0e1cu; fn_00136660(cpu);
    }
L_000b0e1c:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x17cu);
    }
L_000b0e20:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000b0e24:;
    {
        cpu->r[1] = 0x00005dc0u;
    }
L_000b0e28:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b0e2c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b0e30:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b0e34:;
    {
        cpu->r[14] = 0x000b0e3cu;
    }
L_000b0e38:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b0e3cu)) return;
    }
L_000b0e3c:;
    {
        cpu->r[12] = rd8(cpu->r[6] + + 0x31u);
    }
L_000b0e40:;
    {
        goto L_000b0cc0;
    }
}

/* _ZN14CarSceneObject7LoadCarEiiiP10CCarAspectii @ 000b0e50 (arm) */
void fn_000b0e50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b0e50:;
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
L_000b0e54:;
    {
        cpu->r[10] = rd32(0x000b0e5cu + + 0x47cu);
    }
L_000b0e58:;
    {
        cpu->r[12] = rd32(0x000b0e60u + + 0x47cu);
    }
L_000b0e5c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_000b0e60:;
    {
        cpu->r[10] = add_flags(cpu, 0x000b0e68u, cpu->r[10], 0, 0);
    }
L_000b0e64:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b0e68:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_000b0e6c:;
    {
        cpu->r[14] = rd32(cpu->r[10] + cpu->r[12]);
    }
L_000b0e70:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x70u);
    }
L_000b0e74:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000b0e78:;
    {
        cpu->r[5] = rd32(cpu->r[14]);
    }
L_000b0e7c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000b0e80:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x6cu);
    }
L_000b0e84:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
        }
    }
L_000b0e88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b1284;
        }
    }
L_000b0e8c:;
    {
        cpu->r[1] = rd32(0x000b0e94u + + 0x44cu);
    }
L_000b0e90:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_000b0e94:;
    {
        cpu->r[3] = rd32(0x000b0e9cu + + 0x448u);
    }
L_000b0e98:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000b0e9c:;
    {
        cpu->r[12] = rd32(0x000b0ea4u + + 0x444u);
    }
L_000b0ea0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_000b0ea4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000b0ea8:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_000b0eac:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_000b0eb0:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[8] = v;
    }
L_000b0eb4:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[1]);
    }
L_000b0eb8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00004e00u, 0, 0);
    }
L_000b0ebc:;
    {
        cpu->r[1] = rd32(0x000b0ec4u + + 0x428u);
    }
L_000b0ec0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000020u, 0, 0);
    }
L_000b0ec4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000b0ec8:;
    {
        cpu->r[11] = cpu->r[10];
    }
L_000b0ecc:;
    {
        cpu->r[2] = rd32(0x000b0ed4u + + 0x41cu);
    }
L_000b0ed0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x70u);
    }
L_000b0ed4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_000b0ed8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_000b0edc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000b0ee0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000b0ee4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000b0ee8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000b0eec:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000b0ef0:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_000b0ef4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_000b0ef8:;
    {
        cpu->r[14] = 0x000b0efcu; fn_00193278(cpu);
    }
L_000b0efc:;
    {
        cpu->r[1] = 0x00005208u;
    }
L_000b0f00:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000b0f04:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b0f08:;
    {
        cpu->r[14] = 0x000b0f0cu; fn_00135c90(cpu);
    }
L_000b0f0c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000b0f10:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000b0f14:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000b0f18:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b0f1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000b0f20:;
    {
        cpu->r[14] = 0x000b0f24u; fn_00136660(cpu);
    }
L_000b0f24:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000b0f28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_000b0f2c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000b0f30:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_000b0f34:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b0f38:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000b0f3c:;
    {
        cpu->r[14] = 0x000b0f40u; fn_00193278(cpu);
    }
L_000b0f40:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b0f44:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_000b0f48:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_000b0f4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b0f50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b0f64;
        }
    }
L_000b0f54:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b0f58:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b0f5c:;
    {
        cpu->r[14] = 0x000b0f64u;
    }
L_000b0f60:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b0f64u)) return;
    }
L_000b0f64:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0xd00u);
    }
L_000b0f68:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000b0f6c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_000b0f70:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00009c00u, 0, 0);
    }
L_000b0f74:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000040u, 0, 0);
    }
L_000b0f78:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_000b0f7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b1218;
        }
    }
L_000b0f80:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b0f84:;
    {
        cpu->r[12] = 0x00001c40u;
    }
L_000b0f88:;
    {
        cpu->r[6] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_000b0f8c:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000b0f90:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000b0f94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b0f98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b1218;
        }
    }
L_000b0f9c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000b0fa0:;
    {
        cpu->r[14] = 0x000b0fa4u; fn_000f3430(cpu);
    }
L_000b0fa4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b0fa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b11f0;
        }
    }
L_000b0fac:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], 0x00007500u, 0, 0);
    }
L_000b0fb0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000030u, 0, 0);
    }
L_000b0fb4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xd08u);
    }
L_000b0fb8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000b0fbc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b0fc0:;
    {
        cpu->r[14] = 0x000b0fc4u; fn_00135c90(cpu);
    }
L_000b0fc4:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000b0fc8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xd08u);
    }
L_000b0fcc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_000b0fd0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b0fd4:;
    {
        cpu->r[14] = 0x000b0fd8u; fn_00135c90(cpu);
    }
L_000b0fd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd08u);
    }
L_000b0fdc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b0fe0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b0fe4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b0fe8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000b0fec:;
    {
        cpu->r[14] = 0x000b0ff0u; fn_001367cc(cpu);
    }
L_000b0ff0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b0ff4:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[9]);
    }
L_000b0ff8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b0ffc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd08u);
    }
L_000b1000:;
    {
        cpu->r[14] = 0x000b1004u; fn_00135d9c(cpu);
    }
L_000b1004:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd08u);
    }
L_000b1008:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b100c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000b1010:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b1014:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000b1018:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000b101c:;
    {
        cpu->r[14] = 0x000b1020u; fn_00136660(cpu);
    }
L_000b1020:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b1024:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000b1028:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000b102c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd08u);
    }
L_000b1030:;
    {
        cpu->r[14] = 0x000b1034u; fn_00135c3c(cpu);
    }
L_000b1034:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b1038:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b103c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000b1040:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd08u);
    }
L_000b1044:;
    {
        cpu->r[14] = 0x000b1048u; fn_001367cc(cpu);
    }
L_000b1048:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b104c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000b1050:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000b1054:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b1058:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b105c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b1060:;
    {
        cpu->r[14] = 0x000b1068u;
    }
L_000b1064:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1068u)) return;
    }
L_000b1068:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000b106c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b11a4;
        }
    }
L_000b1070:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000b1074:;
    {
        cpu->r[6] = rd32(cpu->r[11] + cpu->r[0]);
    }
L_000b1078:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000b107c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b1080:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b1240;
        }
    }
L_000b1084:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000b1088:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xd08u);
    }
L_000b108c:;
    {
        cpu->r[0] = rd32(cpu->r[11] + cpu->r[12]);
    }
L_000b1090:;
    {
        cpu->r[14] = 0x000b1094u; fn_00189f5c(cpu);
    }
L_000b1094:;
    {
        cpu->r[1] = 0x0000000eu;
    }
L_000b1098:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_000b109c:;
    {
        cpu->r[14] = 0x000b10a0u; fn_001897b4(cpu);
    }
L_000b10a0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b10a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b12a4;
        }
    }
L_000b10a8:;
    {
        cpu->r[14] = 0x000b10acu; fn_000fc5dc(cpu);
    }
L_000b10ac:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_000b10b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b10b4:;
    {
        cpu->r[14] = 0x000b10b8u; fn_000fc650(cpu);
    }
L_000b10b8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b10bc:;
    {
        cpu->r[12] = 0x00001c40u;
    }
L_000b10c0:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[1]);
    }
L_000b10c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b10c8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000b10cc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b10d0:;
    {
        cpu->r[9] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000b10d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b10ec;
        }
    }
L_000b10d8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b10dc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000b10e0:;
    {
        cpu->r[14] = 0x000b10e4u; fn_000f3430(cpu);
    }
L_000b10e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b10e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b1220;
        }
    }
L_000b10ec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b10f0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_000b10f4:;
    {
        cpu->r[14] = 0x000b10f8u; fn_000fc5ec(cpu);
    }
L_000b10f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b10fc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 2, 1u, &shc), 0, 0);
    }
L_000b1100:;
    {
        cpu->r[14] = 0x000b1104u; fn_000fc628(cpu);
    }
L_000b1104:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000b1108:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b110c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000b1110:;
    {
        cpu->r[14] = 0x000b1114u; fn_000fc5dc(cpu);
    }
L_000b1114:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b1118:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b111c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], shifter(cpu->r[9], 2, 1u, &shc), 0, 0);
    }
L_000b1120:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000002u, 0, 0);
    }
L_000b1124:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_000b1128:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b112c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 0);
    }
L_000b1130:;
    {
        cpu->r[14] = 0x000b1134u; fn_000fc5ec(cpu);
    }
L_000b1134:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b1138:;
    {
        cpu->r[14] = 0x000b113cu; fn_000fc628(cpu);
    }
L_000b113c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000b1140:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b1144:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000b1148:;
    {
        cpu->r[14] = 0x000b114cu; fn_000fc628(cpu);
    }
L_000b114c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b1150:;
    {
        cpu->r[9] = rd32(cpu->r[11] + cpu->r[12]);
    }
L_000b1154:;
    {
        cpu->r[1] = rd32(cpu->r[9]);
    }
L_000b1158:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00008c00u, 0, 0);
    }
L_000b115c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000c4u, 0, 0);
    }
L_000b1160:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000b1164:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b1168:;
    {
        cpu->r[14] = 0x000b116cu; fn_000fc5f4(cpu);
    }
L_000b116c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000b1170:;
    {
        cpu->r[1] = 0x0000000eu;
    }
L_000b1174:;
    {
        cpu->r[14] = 0x000b1178u; fn_00189870(cpu);
    }
L_000b1178:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[10]);
    }
L_000b117c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xd08u);
    }
L_000b1180:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b1184:;
    {
        cpu->r[14] = 0x000b1188u; fn_00135cf4(cpu);
    }
L_000b1188:;
    {
        cpu->r[1] = rd32(cpu->r[9]);
    }
L_000b118c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b1190:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00008c00u, 0, 0);
    }
L_000b1194:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000b1198:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000c4u, 0, 0);
    }
L_000b119c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000b11a0:;
    {
        cpu->r[14] = 0x000b11a4u; fn_00133748(cpu);
    }
L_000b11a4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000b11a8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000b11ac:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000003u, 1, 1);
    }
L_000b11b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b0f34;
        }
    }
L_000b11b4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x68u);
    }
L_000b11b8:;
    {
        cpu->r[3] = 0x0000002fu;
    }
L_000b11bc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b11c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b11c4:;
    {
        wr8(cpu->r[1] + + 0x31u, cpu->r[3]);
    }
L_000b11c8:;
    {
        cpu->r[14] = 0x000b11ccu; fn_000b0c4c(cpu);
    }
L_000b11cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x70u);
    }
L_000b11d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b11d4:;
    {
        cpu->r[14] = 0x000b11d8u; fn_000b09e0(cpu);
    }
L_000b11d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b11dc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x70u);
    }
L_000b11e0:;
    {
        cpu->r[14] = 0x000b11e4u; fn_000b078c(cpu);
    }
L_000b11e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_000b11e8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_000b11ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b11f0u)) return;
    }
L_000b11f0:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000b11f4:;
    {
        cpu->r[1] = 0x0000001cu;
    }
L_000b11f8:;
    {
        cpu->r[14] = 0x000b11fcu; fn_000f3430(cpu);
    }
L_000b11fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b1200:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b0fac;
        }
    }
L_000b1204:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000b1208:;
    {
        cpu->r[1] = 0x00000059u;
    }
L_000b120c:;
    {
        cpu->r[14] = 0x000b1210u; fn_000f3430(cpu);
    }
L_000b1210:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b1214:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b12b0;
        }
    }
L_000b1218:;
    {
        cpu->r[9] = cpu->r[8];
    }
L_000b121c:;
    {
        goto L_000b0fb4;
    }
L_000b1220:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000b1224:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 0);
    }
L_000b1228:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b122c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 1, 1u, &shc), 0, 0);
    }
L_000b1230:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000b1234:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000b1238:;
    {
        cpu->r[14] = 0x000b123cu; fn_000fc5ec(cpu);
    }
L_000b123c:;
    {
        goto L_000b10f8;
    }
L_000b1240:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b1244:;
    {
        cpu->r[14] = 0x000b1248u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000b1248:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b124c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b1084;
        }
    }
L_000b1250:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_000b1254:;
    {
        cpu->r[9] = rd32(cpu->r[11] + cpu->r[1]);
    }
L_000b1258:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000b125c:;
    {
        cpu->r[14] = 0x000b1260u; fn_00189f48(cpu);
    }
L_000b1260:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b1264:;
    {
        cpu->r[14] = 0x000b1268u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000b1268:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_000b126c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000b1270:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000b1274:;
    {
        cpu->r[1] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_000b1278:;
    {
        cpu->r[2] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_000b127c:;
    {
        cpu->r[14] = 0x000b1280u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000b1280:;
    {
        goto L_000b1084;
    }
L_000b1284:;
    {
        wr32(cpu->r[4] + + 0xd00u, cpu->r[2]);
    }
L_000b1288:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000b128c:;
    {
        wr32(cpu->r[4] + + 0xd04u, cpu->r[3]);
    }
L_000b1290:;
    {
        wr32(cpu->r[4] + + 0xd08u, cpu->r[12]);
    }
L_000b1294:;
    {
        wr32(cpu->r[4] + + 0xb58u, cpu->r[1]);
    }
L_000b1298:;
    {
        cpu->r[14] = 0x000b129cu; fn_000ea1a0(cpu);
    }
L_000b129c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000b12a0:;
    {
        goto L_000b0e8c;
    }
L_000b12a4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000b12a8:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000b12ac:;
    {
        goto L_000b11e4;
    }
L_000b12b0:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000b12b4:;
    {
        cpu->r[14] = 0x000b12b8u; fn_000f34c4(cpu);
    }
L_000b12b8:;
    {
        cpu->r[1] = 0x00000016u;
    }
L_000b12bc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000b12c0:;
    {
        cpu->r[14] = 0x000b12c8u;
    }
L_000b12c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b12c8u)) return;
    }
L_000b12c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b12cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b0fac;
        }
    }
L_000b12d0:;
    {
        cpu->r[9] = cpu->r[8];
    }
L_000b12d4:;
    {
        goto L_000b0fb4;
    }
}

/* _ZN14CarSceneObject16ReLoadCarTextureEv @ 000b12f4 (arm) */
void fn_000b12f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b12f4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000b12f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000b12fc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b1300:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[0], 0x000001a8u, 0, 0);
    }
L_000b1304:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000b1308:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_000b130c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0xd08u);
    }
L_000b1310:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xb58u);
    }
L_000b1314:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xd00u);
    }
L_000b1318:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xd04u);
    }
L_000b131c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000b1320:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000b1324:;
    {
        cpu->r[14] = 0x000b1328u; fn_000b0e50(cpu);
    }
L_000b1328:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000b132c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1330u)) return;
    }
}

/* _ZN14CarSceneObject19UpdateCarTireTrailsEifii @ 000b1330 (arm) */
void fn_000b1330(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b1330:;
    {
        cpu->r[2] = rd32(0x000b1338u + + 0x608u);
    }
L_000b1334:;
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
L_000b1338:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000b133c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000074u, 1, 0);
    }
L_000b1340:;
    {
        cpu->r[7] = rd32(0x000b1348u + + 0x5fcu);
    }
L_000b1344:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000b1348:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000b134c:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000b1350:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b1354:;
    {
        cpu->r[7] = add_flags(cpu, 0x000b135cu, cpu->r[7], 0, 0);
    }
L_000b1358:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000b135c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[12]);
    }
L_000b1360:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0xd00u);
    }
L_000b1364:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_000b1368:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_000b136c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000b1370:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000b1374:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_000b1378:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00008cb8u;
        }
    }
L_000b137c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = 0x00008cc0u;
        }
    }
L_000b1380:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000b1384:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000b1388:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
        }
    }
L_000b138c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[4]);
        }
    }
L_000b1390:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
        }
    }
L_000b1394:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
        }
    }
L_000b1398:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
        }
    }
L_000b139c:;
    {
        cpu->r[11] = rd32(cpu->r[12]);
    }
L_000b13a0:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000b13a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b1750;
        }
    }
L_000b13a8:;
    {
        cpu->r[12] = rd32(0x000b13b0u + + 0x598u);
    }
L_000b13ac:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b13b0:;
    {
        { uint32_t v = cpu->r[1] & 0x04000000u; set_nz(cpu, v); }
    }
L_000b13b4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[8], 0x00000b40u, 0, 0);
    }
L_000b13b8:;
    {
        cpu->r[2] = 0x00008818u;
    }
L_000b13bc:;
    {
        cpu->r[9] = 0x00000400u;
    }
L_000b13c0:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_000b13c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b13c8:;
    {
        cpu->r[12] = rd32(0x000b13d0u + + 0x57cu);
    }
L_000b13cc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_000b13d0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000b13d4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_000b13d8:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_000b13dc:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x8000u << 16);
    }
L_000b13e0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[12]);
    }
L_000b13e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000002u;
        }
    }
L_000b13e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000004u;
        }
    }
L_000b13ec:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000b13f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000b13f4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_000b13f8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_000b13fc:;
    {
        uint32_t v = cpu->r[1] & 0x08000001u; cpu->r[12] = v;
    }
L_000b1400:;
    {
        uint32_t v = cpu->r[1] & 0x00000008u; cpu->r[3] = v;
    }
L_000b1404:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_000b1408:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000b140c:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_000b1410:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b1414:;
    {
        uint32_t v = cpu->r[1] & cpu->r[9]; cpu->r[9] = v;
    }
L_000b1418:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_000b141c:;
    {
        uint32_t v = cpu->r[1] & 0x00000040u; cpu->r[1] = v;
    }
L_000b1420:;
    {
        wr8(cpu->r[13] + + 0x6cu, cpu->r[0]);
    }
L_000b1424:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_000b1428:;
    {
        wr8(cpu->r[13] + + 0x6du, cpu->r[0]);
    }
L_000b142c:;
    {
        wr8(cpu->r[13] + + 0x6eu, cpu->r[0]);
    }
L_000b1430:;
    {
        wr8(cpu->r[13] + + 0x6fu, cpu->r[0]);
    }
L_000b1434:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000b1438:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b143c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b1468;
        }
    }
L_000b1440:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_000b1444:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_000b1448:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_000b144c:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b1450:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b1950;
        }
    }
L_000b1454:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_000b1458:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[0]);
    }
L_000b145c:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0xfu);
    }
L_000b1460:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b1464:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[6] + cpu->r[4], cpu->r[3]);
        }
    }
L_000b1468:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_000b146c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_000b1470:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000b1474:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[1] & 0x00000001u; cpu->r[1] = v;
        }
    }
L_000b1478:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b147c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[6] + cpu->r[4], cpu->r[3]);
        }
    }
L_000b1480:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000b1484:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[6] + cpu->r[4], cpu->r[3]);
        }
    }
L_000b1488:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x1dcu);
    }
L_000b148c:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000b1490:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b175c;
        }
    }
L_000b1494:;
    {
        wr8(cpu->r[6] + cpu->r[4], cpu->r[12]);
    }
L_000b1498:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b149c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000b14a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b14a4:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[6] + cpu->r[4], cpu->r[12]);
        }
    }
L_000b14a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b14ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b14b0:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[6] + cpu->r[4], cpu->r[12]);
        }
    }
L_000b14b4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[0]);
    }
L_000b14b8:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_000b14bc:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000b14c0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_000b14c4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000b14c8:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0xf0u);
    }
L_000b14cc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b14d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = rd8(cpu->r[10] + + 0xd26u);
        }
    }
L_000b14d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = rd8(cpu->r[6] + cpu->r[4]);
        }
    }
L_000b14d8:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[6] + cpu->r[4], cpu->r[8]);
        }
    }
L_000b14dc:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000b14e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b176c;
        }
    }
L_000b14e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b14e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000b14ec:;
    {
        cpu->r[1] = (uint32_t)((uint8_t)cpu->r[1]);
    }
L_000b14f0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000b14f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_000b14f8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000b14fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000b1500:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_000b1504:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000b1434;
        }
    }
L_000b1508:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[10], 0x00000c20u, 0, 0);
    }
L_000b150c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000b1510:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_000b1514:;
    {
        cpu->r[12] = 0x00001d38u;
    }
L_000b1518:;
    {
        cpu->r[5] = cpu->r[9];
    }
L_000b151c:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_000b1520:;
    {
        cpu->r[10] = 0x00008c4cu;
    }
L_000b1524:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000b1528:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[10]);
    }
L_000b152c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000b1530:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b1534:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b1544;
        }
    }
L_000b1538:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[4]);
    }
L_000b153c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b1540:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b17a8;
        }
    }
L_000b1544:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000b1548:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000b154c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 1);
    }
L_000b1550:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b152c;
        }
    }
L_000b1554:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b1558:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000b155c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b1750;
        }
    }
L_000b1560:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b1564:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000b1568:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b156c:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0x17cu);
    }
L_000b1570:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000b1574:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000b157cu + + 0x3bcu);
    }
L_000b1578:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[14]);
    }
L_000b157c:;
    {
        cpu->r[14] = 0x00008cbcu;
    }
L_000b1580:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_000b1584:;
    {
        cpu->r[12] = 0x00008cc0u;
    }
L_000b1588:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_000b158c:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000b1590:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000b1594:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000b1598:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b159c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b15a0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b15a4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_000b15a8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000b15ac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[8], 0x00000d30u, 0, 0);
    }
L_000b15b0:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[12]);
    }
L_000b15b4:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000b15b8:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000b15c0u + + 0x37cu);
    }
L_000b15bc:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000b15c0:;
    {
        cpu->r[2] = 0x00008c4cu;
    }
L_000b15c4:;
    {
        cpu->r[3] = 0x00008cb8u;
    }
L_000b15c8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000b15cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000b15d0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b15d4:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_000b15d8:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_000b15dc:;
    {
        cpu->r[14] = 0x000b15e0u; fn_001745cc(cpu);
    }
L_000b15e0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xa0u);
    }
L_000b15e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_000b15e8:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[11]);
    }
L_000b15ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000060u, 0, 0);
    }
L_000b15f0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[7]);
    }
L_000b15f4:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_000b15f8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 24u, &shc); cpu->r[3] = v;
    }
L_000b15fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_000b1600:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x01000000u, 0, 0);
    }
L_000b1604:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_000b1608:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000b160c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000b1610:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_000b1614:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000b1618:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_000b161c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[2]);
    }
L_000b1620:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[6]);
    }
L_000b1624:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000b1628:;
    {
        cpu->r[3] = rd8(cpu->r[12] + cpu->r[10]);
    }
L_000b162c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b1630:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b1738;
        }
    }
L_000b1634:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_000b1638:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_000b163c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], 0x00000040u, 0, 0);
    }
L_000b1640:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000b1644:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000b1648:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000b164c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000b1650:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_000b1654:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_000b1658:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000b165c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000b1660:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000b1664:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000b1668:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b166c:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b1670:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_000b1674:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b1648;
        }
    }
L_000b1678:;
    {
        cpu->r[3] = rd8(cpu->r[8] + + 0xd1cu);
    }
L_000b167c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_000b1680:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b1684:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[11];
        }
    }
L_000b1688:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[7];
        }
    }
L_000b168c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[10];
        }
    }
L_000b1690:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[7];
        }
    }
L_000b1694:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000b1698:;
    {
        cpu->r[14] = 0x000b169cu; fn_0013c510(cpu);
    }
L_000b169c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b16a0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_000b16a4:;
    {
        cpu->r[14] = 0x000b16a8u; fn_001534f0(cpu);
    }
L_000b16a8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b16ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b16b0:;
    {
        cpu->r[14] = 0x000b16b4u; fn_0015365c(cpu);
    }
L_000b16b4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_000b16b8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b16bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x60u);
    }
L_000b16c0:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_000b16c4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x64u);
    }
L_000b16c8:;
    {
        cpu->r[12] = 0x00008c50u;
    }
L_000b16cc:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000b16d0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_000b16d4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000b16d8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_000b16dc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000b16e0:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000b16e4:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000b16e8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000b16ec:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000b16f0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000b16f4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b16f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000b16fc:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b1700:;
    {
        cpu->r[14] = 0x000b1704u; fn_00174b68(cpu);
    }
L_000b1704:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000b1708:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000b170c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x68u);
    }
L_000b1710:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000b1714:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000b1718:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b171c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b1720:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
        }
    }
L_000b1724:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 1);
    }
L_000b1728:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b17f8;
        }
    }
L_000b172c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000b1730:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b1734:;
    {
        wr8(cpu->r[0] + cpu->r[10], cpu->r[3]);
    }
L_000b1738:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_000b173c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000b1740:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_000b1744:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_000b1748:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 1);
    }
L_000b174c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000b1624;
        }
    }
L_000b1750:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_000b1754:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000b1758:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b175cu)) return;
    }
L_000b175c:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x498u);
    }
L_000b1760:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b1764:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b1498;
        }
    }
L_000b1768:;
    {
        goto L_000b1494;
    }
L_000b176c:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_000b1770:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b1774:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b14f4;
        }
    }
L_000b1778:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b177c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000b1780:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000b1784:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000b1788:;
    {
        cpu->r[14] = 0x000b178cu; fn_00097924(cpu);
    }
L_000b178c:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_000b1790:;
    {
        cpu->r[14] = 0x000b1794u; fn_00157398(cpu);
    }
L_000b1794:;
    {
        wr32(cpu->r[5], cpu->r[8]);
    }
L_000b1798:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b179c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b17a0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000b17a4:;
    {
        goto L_000b14f4;
    }
L_000b17a8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b17ac:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000b17b0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000b17b4:;
    {
        cpu->r[10] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000b17b8:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_000b17bc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_000b17c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_000b17c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
    }
L_000b17c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000b17cc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000b17d0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b17d4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b17d8:;
    {
        cpu->r[14] = 0x000b17e0u;
    }
L_000b17dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b17e0u)) return;
    }
L_000b17e0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b17e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b17e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b199c;
        }
    }
L_000b17ec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b17f0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_000b17f4:;
    {
        goto L_000b1544;
    }
L_000b17f8:;
    {
        cpu->r[0] = rd32(cpu->r[9] + - 0xdcu);
    }
L_000b17fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b1800:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b19c0;
        }
    }
L_000b1804:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_000b1808:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_000b180c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_000b1810:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_000b1814:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_000b1818:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_000b181c:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000b1820:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000b1824:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b1828:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b182c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000b1830:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_000b1834:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b1804;
        }
    }
L_000b1838:;
    {
        cpu->r[3] = rd8(cpu->r[8] + + 0xd1cu);
    }
L_000b183c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_000b1840:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b1844:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[11];
        }
    }
L_000b1848:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[7];
        }
    }
L_000b184c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[10];
        }
    }
L_000b1850:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[7];
        }
    }
L_000b1854:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000b1858:;
    {
        cpu->r[14] = 0x000b185cu; fn_0013c510(cpu);
    }
L_000b185c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b1860:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_000b1864:;
    {
        cpu->r[14] = 0x000b1868u; fn_001534f0(cpu);
    }
L_000b1868:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b186c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b1870:;
    {
        cpu->r[14] = 0x000b1874u; fn_0015365c(cpu);
    }
L_000b1874:;
    {
        cpu->r[12] = rd32(cpu->r[9] + - 0xdcu);
    }
L_000b1878:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b187c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b1880:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b1884:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b1888:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000b188c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b1890:;
    {
        wr32(cpu->r[12] + + 0x4cu, cpu->r[14]);
    }
L_000b1894:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b1898:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b189c:;
    {
        cpu->r[14] = 0x000b18a0u; fn_00156c68(cpu);
    }
L_000b18a0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b18a4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_000b18a8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000b18ac:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0xd00u);
    }
L_000b18b0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_000b18b4:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000b18b8:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000b18bc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000b18c0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000b18c4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000b18c8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
        }
    }
L_000b18cc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
        }
    }
L_000b18d0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
        }
    }
L_000b18d4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[12]);
        }
    }
L_000b18d8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
        }
    }
L_000b18dc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000b18e0:;
    {
        cpu->r[1] = rd32(cpu->r[9]);
    }
L_000b18e4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000b18e8:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000b18ec:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 1);
    }
L_000b18f0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000b18f4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000b18f8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b18fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000b1900:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b1904:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b1738;
        }
    }
L_000b1908:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_000b190c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000b1910:;
    {
        { uint32_t v = cpu->r[2] & 0x00000010u; set_nz(cpu, v); }
    }
L_000b1914:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b1738;
        }
    }
L_000b1918:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x44u);
    }
L_000b191c:;
    {
        cpu->r[1] = 0x00007858u;
    }
L_000b1920:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000b1924:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[14]);
    }
L_000b1928:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x00000008u, 0, 0);
    }
L_000b192c:;
    {
        cpu->r[14] = 0x000b1930u; fn_00159698(cpu);
    }
L_000b1930:;
    {
        wr32(cpu->r[9], cpu->r[0]);
    }
L_000b1934:;
    {
        goto L_000b1738;
    }
L_000b1950:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b1954:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000b1958:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000b195c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000b1960:;
    {
        cpu->r[14] = 0x000b1964u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000b1964:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000b1968:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b196c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b1970:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b1974:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b1454;
        }
    }
L_000b1978:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_000b197c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[14]);
    }
L_000b1980:;
    {
        cpu->r[14] = 0x000b1984u; fn_00094228(cpu);
    }
L_000b1984:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b1988:;
    {
        cpu->r[14] = 0x000b198cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000b198c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b1990:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b1994:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000b1998:;
    {
        goto L_000b1454;
    }
L_000b199c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000b19a0:;
    {
        cpu->r[14] = 0x00001bc8u;
    }
L_000b19a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000b19a8:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_000b19ac:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[14]);
    }
L_000b19b0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b19b4:;
    {
        cpu->r[14] = 0x000b19b8u; fn_00158fe8(cpu);
    }
L_000b19b8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b19bc:;
    {
        goto L_000b17ec;
    }
L_000b19c0:;
    {
        cpu->r[14] = 0x000b19c4u; fn_00097924(cpu);
    }
L_000b19c4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000b19c8:;
    {
        cpu->r[14] = 0x000b19ccu; fn_001574d4(cpu);
    }
L_000b19cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b19d0:;
    {
        wr32(cpu->r[9] + - 0xdcu, cpu->r[0]);
    }
L_000b19d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b1804;
        }
    }
L_000b19d8:;
    {
        goto L_000b1738;
    }
}

/* _ZN14CarSceneObject17UpdateDriverStateEf @ 000b19dc (arm) */
void fn_000b19dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b19dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xd28u);
    }
L_000b19e0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000b19e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b19e8:;
    {
        cpu->r[7] = rd32(0x000b19f0u + + 0x3f4u);
    }
L_000b19ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b19f0:;
    {
        cpu->r[7] = add_flags(cpu, 0x000b19f8u, cpu->r[7], 0, 0);
    }
L_000b19f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b19f8u)) return;
        }
    }
L_000b19f8:;
    {
        cpu->r[8] = rd32(0x000b1a00u + + 0x3e8u);
    }
L_000b19fc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xd04u);
    }
L_000b1a00:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000b1a04:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000b1a08:;
    {
        cpu->r[14] = 0x000b1a0cu; fn_00096f84(cpu);
    }
L_000b1a0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b1a10:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1a14u)) return;
        }
    }
L_000b1a14:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000b1a18:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000b1a1c:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000b1a20:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b1a24:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000b1a28:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b1a2c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xf0u);
    }
L_000b1a30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b1a34:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000b1a38:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0xc00u, cpu->r[3]);
        }
    }
L_000b1a3c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000b1a40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b1ad8;
        }
    }
L_000b1a44:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000b1a48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd00u);
    }
L_000b1a4c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000b1a50:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000b1a54:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000b1a58:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00008cc0u;
        }
    }
L_000b1a5c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00008cb8u;
        }
    }
L_000b1a60:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000b1a64:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000b1a68:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
        }
    }
L_000b1a6c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
        }
    }
L_000b1a70:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
        }
    }
L_000b1a74:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000b1a78:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000b1a7c:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_000b1a80:;
    {
        cpu->r[14] = 0x000b1a84u; fn_00096b88(cpu);
    }
L_000b1a84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b1a88:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x354u);
        }
    }
L_000b1a8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b1b84;
        }
    }
L_000b1a90:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000b1a94:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x520u);
    }
L_000b1a98:;
    {
        vfp_sync_flags(cpu);
    }
L_000b1a9c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_000b1aa0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_000b1aa4:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(0x000b1aacu + + 0x334u);
        }
    }
L_000b1aa8:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[6] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_000b1aac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000050u, 1, 1);
    }
L_000b1ab0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[5] = 0x00000004u;
        }
    }
L_000b1ab4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000b1ac0;
        }
    }
L_000b1ab8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000050u, 0, 1);
    }
L_000b1abc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = 0x00000005u;
        }
    }
L_000b1ac0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x518u);
    }
L_000b1ac4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 1);
    }
L_000b1ac8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[5] = 0x00000003u;
        }
    }
L_000b1acc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000b1ad8;
        }
    }
L_000b1ad0:;
    {
        add_flags(cpu, cpu->r[3], 0x00000028u, 0, 1);
    }
L_000b1ad4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = 0x00000002u;
        }
    }
L_000b1ad8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc00u);
    }
L_000b1adc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b1ae0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = cpu->r[3];
        }
    }
L_000b1ae4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_000b1ae8:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + + 0xc00u, cpu->r[3]);
        }
    }
L_000b1aec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xbfcu);
    }
L_000b1af0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000b1af4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1af8u)) return;
        }
    }
L_000b1af8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000006u, 1, 1);
    }
L_000b1afc:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[5]) {
        case 0: goto L_000b1bac;
        case 1: goto L_000b1c0c;
        case 2: goto L_000b1c30;
        case 3: goto L_000b1ce4;
        case 4: goto L_000b1c78;
        case 5: goto L_000b1c9c;
        case 6: goto L_000b1b20;
        default: guest_unimplemented(cpu, 0x000b1afcu); return; }
        }
    }
L_000b1b00:;
    {
        goto L_000b1b7c;
    }
L_000b1b20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1b24:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_000b1b28:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b1b2c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b1b30:;
    {
        cpu->r[14] = 0x000b1b38u;
    }
L_000b1b34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1b38u)) return;
    }
L_000b1b38:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1b3c:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000b1b40:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x17cu);
    }
L_000b1b44:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_000b1b48:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b1b4c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b1b50:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b1b54:;
    {
        cpu->r[14] = 0x000b1b5cu;
    }
L_000b1b58:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1b5cu)) return;
    }
L_000b1b5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1b60:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b1b64:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_000b1b68:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b1b6c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b1b70:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b1b74:;
    {
        cpu->r[14] = 0x000b1b7cu;
    }
L_000b1b78:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1b7cu)) return;
    }
L_000b1b7c:;
    {
        wr32(cpu->r[4] + + 0xbfcu, cpu->r[5]);
    }
L_000b1b80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1b84u)) return;
    }
L_000b1b84:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000b1b88:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000b1b8c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xd00u);
    }
L_000b1b90:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b1b94:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000b1b98:;
    {
        cpu->r[14] = 0x000b1b9cu; fn_000994e0(cpu);
    }
L_000b1b9c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000b1ba0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000b1ba4:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b1ba8:;
    {
        goto L_000b1a90;
    }
L_000b1bac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1bb0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_000b1bb4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b1bb8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b1bbc:;
    {
        cpu->r[14] = 0x000b1bc4u;
    }
L_000b1bc0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1bc4u)) return;
    }
L_000b1bc4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1bc8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000b1bcc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b1bd0:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_000b1bd4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x17cu);
    }
L_000b1bd8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b1bdc:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b1be0:;
    {
        cpu->r[14] = 0x000b1be8u;
    }
L_000b1be4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1be8u)) return;
    }
L_000b1be8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1bec:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_000b1bf0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b1bf4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_000b1bf8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b1bfc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b1c00:;
    {
        cpu->r[14] = 0x000b1c08u;
    }
L_000b1c04:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1c08u)) return;
    }
L_000b1c08:;
    {
        goto L_000b1b7c;
    }
L_000b1c0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_000b1c10:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_000b1dbc;
        case 1: goto L_000b1b7c;
        case 2: goto L_000b1d98;
        case 3: goto L_000b1d74;
        case 4: goto L_000b1d50;
        case 5: goto L_000b1d2c;
        default: guest_unimplemented(cpu, 0x000b1c10u); return; }
        }
    }
L_000b1c14:;
    {
        goto L_000b1b7c;
    }
L_000b1c30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1c34:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_000b1c38:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b1c3c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b1c40:;
    {
        cpu->r[14] = 0x000b1c48u;
    }
L_000b1c44:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1c48u)) return;
    }
L_000b1c48:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1c4c:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000b1c50:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x17cu);
    }
L_000b1c54:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_000b1c58:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b1c5c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b1c60:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b1c64:;
    {
        cpu->r[14] = 0x000b1c6cu;
    }
L_000b1c68:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1c6cu)) return;
    }
L_000b1c6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1c70:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_000b1c74:;
    {
        goto L_000b1b64;
    }
L_000b1c78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1c7c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_000b1c80:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b1c84:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b1c88:;
    {
        cpu->r[14] = 0x000b1c90u;
    }
L_000b1c8c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1c90u)) return;
    }
L_000b1c90:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1c94:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000b1c98:;
    {
        goto L_000b1c50;
    }
L_000b1c9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1ca0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_000b1ca4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b1ca8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b1cac:;
    {
        cpu->r[14] = 0x000b1cb4u;
    }
L_000b1cb0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1cb4u)) return;
    }
L_000b1cb4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1cb8:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_000b1cbc:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_000b1cc0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b1cc4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x17cu);
    }
L_000b1cc8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b1ccc:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b1cd0:;
    {
        cpu->r[14] = 0x000b1cd8u;
    }
L_000b1cd4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1cd8u)) return;
    }
L_000b1cd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1cdc:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_000b1ce0:;
    {
        goto L_000b1b64;
    }
L_000b1ce4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1ce8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_000b1cec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b1cf0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b1cf4:;
    {
        cpu->r[14] = 0x000b1cfcu;
    }
L_000b1cf8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1cfcu)) return;
    }
L_000b1cfc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1d00:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000b1d04:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_000b1d08:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b1d0c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x17cu);
    }
L_000b1d10:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b1d14:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b1d18:;
    {
        cpu->r[14] = 0x000b1d20u;
    }
L_000b1d1c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1d20u)) return;
    }
L_000b1d20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1d24:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_000b1d28:;
    {
        goto L_000b1b64;
    }
L_000b1d2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1d30:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_000b1d34:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b1d38:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b1d3c:;
    {
        cpu->r[14] = 0x000b1d44u;
    }
L_000b1d40:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1d44u)) return;
    }
L_000b1d44:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1d48:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_000b1d4c:;
    {
        goto L_000b1b40;
    }
L_000b1d50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1d54:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_000b1d58:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b1d5c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b1d60:;
    {
        cpu->r[14] = 0x000b1d68u;
    }
L_000b1d64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1d68u)) return;
    }
L_000b1d68:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1d6c:;
    {
        cpu->r[1] = 0x0000000eu;
    }
L_000b1d70:;
    {
        goto L_000b1b40;
    }
L_000b1d74:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1d78:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_000b1d7c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b1d80:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b1d84:;
    {
        cpu->r[14] = 0x000b1d8cu;
    }
L_000b1d88:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1d8cu)) return;
    }
L_000b1d8c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1d90:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000b1d94:;
    {
        goto L_000b1b40;
    }
L_000b1d98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1d9c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_000b1da0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b1da4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b1da8:;
    {
        cpu->r[14] = 0x000b1db0u;
    }
L_000b1dac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1db0u)) return;
    }
L_000b1db0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1db4:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_000b1db8:;
    {
        goto L_000b1b40;
    }
L_000b1dbc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1dc0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_000b1dc4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b1dc8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b1dcc:;
    {
        cpu->r[14] = 0x000b1dd4u;
    }
L_000b1dd0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1dd4u)) return;
    }
L_000b1dd4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b1dd8:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000b1ddc:;
    {
        goto L_000b1b40;
    }
}

/* _ZN14CarSceneObject24RenderCarShadowProjectedEi8Vector3dib @ 000b1dec (arm) */
void fn_000b1dec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b1dec:;
    {
        cpu->r[12] = rd32(0x000b1df4u + + 0x2f0u);
    }
L_000b1df0:;
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
L_000b1df4:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000b1df8:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000b1dfc:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000b1e04u + + 0x2d8u);
    }
L_000b1e00:;
    {
        cpu->r[2] = rd32(0x000b1e08u + + 0x2e0u);
    }
L_000b1e04:;
    {
        cpu->r[12] = add_flags(cpu, 0x000b1e0cu, cpu->r[12], 0, 0);
    }
L_000b1e08:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x17cu);
    }
L_000b1e0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b1e10:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000b1e14:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_000b1e18:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000b1e1c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b1e20:;
    {
        cpu->r[2] = rd32(0x000b1e28u + + 0x2c4u);
    }
L_000b1e24:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_000b1e28:;
    {
        cpu->r[10] = rd32(cpu->r[14]);
    }
L_000b1e2c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b1e30:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_000b1e34:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_000b1e38:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000b1e3c:;
    {
        cpu->r[12] = 0x00001314u;
    }
L_000b1e40:;
    {
        cpu->r[14] = 0x00001bc8u;
    }
L_000b1e44:;
    {
        cpu->r[6] = rd32(0x000b1e4cu + + 0x2a4u);
    }
L_000b1e48:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000b1e4c:;
    {
        cpu->r[8] = rd32(cpu->r[2]);
    }
L_000b1e50:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000b1e54:;
    {
        cpu->r[6] = add_flags(cpu, 0x000b1e5cu, cpu->r[6], 0, 0);
    }
L_000b1e58:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000b1e5c:;
    {
        cpu->r[12] = rd8(cpu->r[13] + + 0x40u);
    }
L_000b1e60:;
    {
        cpu->r[8] = rd32(cpu->r[8] + cpu->r[14]);
    }
L_000b1e64:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000b1e68:;
    {
        cpu->r[14] = 0x000b1e70u;
    }
L_000b1e6c:;
    {
        uint32_t t = rd32(cpu->r[10] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1e70u)) return;
    }
L_000b1e70:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4u);
    }
L_000b1e74:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000b1e78:;
    {
        cpu->r[14] = 0x000b1e7cu; imp_atan2f(cpu); /* atan2f */
    }
L_000b1e7c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b1e80:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_000b1e84:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000b1e88:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b1e8c:;
    {
        cpu->r[14] = 0x000b1e90u; imp_memset(cpu); /* memset */
    }
L_000b1e90:;
    {
        { uint32_t v = cpu->r[9] & 0x00000040u; set_nz(cpu, v); }
    }
L_000b1e94:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b1e98:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[6] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 16);
        }
    }
L_000b1e9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b1ec8;
        }
    }
L_000b1ea0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b1ea4:;
    {
        cpu->r[14] = 0x000b1ea8u; imp_sinf(cpu); /* sinf */
    }
L_000b1ea8:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b1eac:;
    {
        uint32_t v = cpu->r[0] ^ 0x80000000u; cpu->r[10] = v;
    }
L_000b1eb0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b1eb4:;
    {
        wr32(cpu->r[6] + + 0x20u, cpu->r[10]);
    }
L_000b1eb8:;
    {
        cpu->r[14] = 0x000b1ebcu; imp_cosf(cpu); /* cosf */
    }
L_000b1ebc:;
    {
        wr32(cpu->r[6] + + 0x28u, cpu->r[10]);
    }
L_000b1ec0:;
    {
        uint32_t v = cpu->r[0] ^ 0x80000000u; cpu->r[0] = v;
    }
L_000b1ec4:;
    {
        wr32(cpu->r[6] + + 0x24u, cpu->r[0]);
    }
L_000b1ec8:;
    {
        cpu->r[12] = rd32(0x000b1ed0u + + 0x224u);
    }
L_000b1ecc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], 0x00000d30u, 0, 0);
    }
L_000b1ed0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00000d70u, 0, 0);
    }
L_000b1ed4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000b1ed8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000b1ee0u, cpu->r[12], 0, 0);
    }
L_000b1edc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000b1ee0:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000b1ee4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000010u, 0, 0);
    }
L_000b1ee8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000020u, 0, 0);
    }
L_000b1eec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b1ef4u + + 0x1ecu);
    }
L_000b1ef0:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b1ef4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b1efcu + + 0x1e0u);
    }
L_000b1ef8:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b1efc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00000db0u, 0, 0);
    }
L_000b1f00:;
    {
        cpu->r[14] = 0x000b1f04u; fn_00152e10(cpu);
    }
L_000b1f04:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcccu);
    }
L_000b1f08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcdcu);
    }
L_000b1f0c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b1f10:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcbcu);
    }
L_000b1f14:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_000b1f18:;
    {
        cpu->r[14] = 0x000b1f1cu; fn_001538ec(cpu);
    }
L_000b1f1c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b1f20:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000b1f24:;
    {
        cpu->r[10] = 0x000011e8u;
    }
L_000b1f28:;
    {
        cpu->r[14] = 0x000b1f2cu; fn_001534f0(cpu);
    }
L_000b1f2c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_000b1f30:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_000b1f34:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b1f38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_000b1f3c:;
    {
        uint32_t v = cpu->r[1] ^ 0x80000000u; cpu->r[1] = v;
    }
L_000b1f40:;
    {
        uint32_t v = cpu->r[2] ^ 0x80000000u; cpu->r[2] = v;
    }
L_000b1f44:;
    {
        uint32_t v = cpu->r[3] ^ 0x80000000u; cpu->r[3] = v;
    }
L_000b1f48:;
    {
        cpu->r[14] = 0x000b1f4cu; fn_001538ec(cpu);
    }
L_000b1f4c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b1f50:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b1f54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b1f58:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
        }
    }
L_000b1f5c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000cb0u, 0, 0);
        }
    }
L_000b1f60:;
    {
        cpu->r[14] = 0x000b1f64u; fn_00153478(cpu);
    }
L_000b1f64:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000b1f68:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b1f6c:;
    {
        cpu->r[7] = 0x0000128cu;
    }
L_000b1f70:;
    {
        cpu->r[14] = 0x000b1f74u; fn_00153478(cpu);
    }
L_000b1f74:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b1f78:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000b1f7c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_000b1f80:;
    {
        cpu->r[14] = 0x000b1f84u; fn_00153478(cpu);
    }
L_000b1f84:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000b1f88:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b1f8c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b1f90:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b1f94:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b1f98:;
    {
        cpu->r[14] = 0x000b1fa0u;
    }
L_000b1f9c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1fa0u)) return;
    }
L_000b1fa0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b1fa4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b1fa8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b1fac:;
    {
        cpu->r[14] = 0x000b1fb4u;
    }
L_000b1fb0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1fb4u)) return;
    }
L_000b1fb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b1fb8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b1fbc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b1fc0:;
    {
        cpu->r[14] = 0x000b1fc8u;
    }
L_000b1fc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b1fc8u)) return;
    }
L_000b1fc8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b1fcc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000b1fd0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000b1fd4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000b1fd8:;
    {
        cpu->r[14] = 0x000b1fdcu; imp_glColorMask(cpu); /* glColorMask */
    }
L_000b1fdc:;
    {
        cpu->r[1] = 0x0000437cu;
    }
L_000b1fe0:;
    {
        cpu->r[2] = 0x00004380u;
    }
L_000b1fe4:;
    {
        cpu->r[3] = 0x00004384u;
    }
L_000b1fe8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000b1fec:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000b1ff0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000b1ff4:;
    {
        cpu->r[12] = 0x00004388u;
    }
L_000b1ff8:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_000b1ffc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b2000:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_000b2004:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000b2008:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000b200c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[8], 0, 0);
    }
L_000b2010:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000b2014:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b2018:;
    {
        cpu->r[14] = 0x000b201cu; fn_0012e044(cpu);
    }
L_000b201c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b2020:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000b2024:;
    {
        cpu->r[14] = 0x00000022u;
    }
L_000b2028:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000b202c:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[14]);
    }
L_000b2030:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b2034:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000b2038:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b203c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b2040:;
    {
        cpu->r[14] = 0x000b2048u;
    }
L_000b2044:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2048u)) return;
    }
L_000b2048:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000b204c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000b2050:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000b2054:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000b2058:;
    {
        cpu->r[14] = 0x000b205cu; imp_glColorMask(cpu); /* glColorMask */
    }
L_000b205c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b2060:;
    {
        cpu->r[14] = 0x00000023u;
    }
L_000b2064:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000b2068:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[14]);
    }
L_000b206c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000b2070:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b2074:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b2078:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b207c:;
    {
        cpu->r[14] = 0x000b2084u;
    }
L_000b2080:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2084u)) return;
    }
L_000b2084:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000b2088:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0xbf80u << 16);
    }
L_000b208c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b2090:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000b2094:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000b2098:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000b209c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000b20a0:;
    {
        cpu->r[14] = 0x000b20a4u; fn_0012e044(cpu);
    }
L_000b20a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000b20a8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b20ac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b20b0:;
    {
        cpu->r[14] = 0x000b20b8u;
    }
L_000b20b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b20b8u)) return;
    }
L_000b20b8:;
    {
        cpu->r[0] = 0x000000ffu;
    }
L_000b20bc:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[6]);
    }
L_000b20c0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000b20c4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000b20c8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000b20cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000b20d0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000b20d4:;
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
L_000b20d8:;
    {
        imp_glColor4ub(cpu); /* tail glColor4ub */ return;
    }
}

/* _ZN14CarSceneObjectC2Eii @ 000b20f8 (arm) */
void fn_000b20f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b20f8:;
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
L_000b20fc:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000b2100:;
    {
        cpu->r[5] = rd32(0x000b2108u + + 0x188u);
    }
L_000b2104:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b2108:;
    {
        cpu->r[14] = 0x000b210cu; fn_000ea788(cpu);
    }
L_000b210c:;
    {
        cpu->r[3] = rd32(0x000b2114u + + 0x180u);
    }
L_000b2110:;
    {
        cpu->r[5] = add_flags(cpu, 0x000b2118u, cpu->r[5], 0, 0);
    }
L_000b2114:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b2118:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000b211c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x000001fcu, 0, 0);
    }
L_000b2120:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000b2124:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b2128:;
    {
        cpu->r[10] = 0x0000094cu;
    }
L_000b212c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000b2130:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x000001a8u;
        wr32(cpu->r[0], cpu->r[3]);
        cpu->r[0] = wb_tmp;
    }
L_000b2134:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000b2138:;
    {
        cpu->r[14] = 0x000b213cu; fn_000931e4(cpu);
    }
L_000b213c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b2144u + + 0x148u);
    }
L_000b2140:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1e4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b2144:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1dcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b2148:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1e0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b214c:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[8]);
    }
L_000b2150:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b2154:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000044u, 0, 0);
    }
L_000b2158:;
    {
        cpu->r[14] = 0x000b215cu; fn_001535e0(cpu);
    }
L_000b215c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[10], 1, 1);
    }
L_000b2160:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000044u, 0, 0);
    }
L_000b2164:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b214c;
        }
    }
L_000b2168:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000c60u, 0, 0);
    }
L_000b216c:;
    {
        wr32(cpu->r[4] + + 0xcacu, cpu->r[8]);
    }
L_000b2170:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000b2174:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000b217cu + + 0x110u);
    }
L_000b2178:;
    {
        cpu->r[14] = 0x000b217cu; fn_001535e0(cpu);
    }
L_000b217c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000cb0u, 0, 0);
    }
L_000b2180:;
    {
        wr32(cpu->r[4] + + 0xcf0u, cpu->r[8]);
    }
L_000b2184:;
    {
        cpu->r[14] = 0x000b2188u; fn_001535e0(cpu);
    }
L_000b2188:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000b218c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000d30u, 0, 0);
    }
L_000b2190:;
    {
        wr32(cpu->r[4] + + 0xcf4u, cpu->r[2]);
    }
L_000b2194:;
    {
        wr32(cpu->r[4] + + 0xcf8u, cpu->r[2]);
    }
L_000b2198:;
    {
        wr32(cpu->r[4] + + 0xcfcu, cpu->r[2]);
    }
L_000b219c:;
    {
        wr32(cpu->r[4] + + 0xd70u, cpu->r[8]);
    }
L_000b21a0:;
    {
        cpu->r[14] = 0x000b21a4u; fn_001535e0(cpu);
    }
L_000b21a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000d70u, 0, 0);
    }
L_000b21a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000b21ac:;
    {
        wr32(cpu->r[4] + + 0xdb4u, cpu->r[8]);
    }
L_000b21b0:;
    {
        cpu->r[14] = 0x000b21b4u; fn_001535e0(cpu);
    }
L_000b21b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000db0u, 0, 0);
    }
L_000b21b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_000b21bc:;
    {
        wr32(cpu->r[4] + + 0xdf8u, cpu->r[8]);
    }
L_000b21c0:;
    {
        cpu->r[14] = 0x000b21c4u; fn_001535e0(cpu);
    }
L_000b21c4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000b21c8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000b21cc:;
    {
        wr8(cpu->r[4] + + 0x1f8u, cpu->r[8]);
    }
L_000b21d0:;
    {
        wr32(cpu->r[4] + + 0xb48u, cpu->r[8]);
    }
L_000b21d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b21d8:;
    {
        wr32(cpu->r[4] + + 0xb4cu, cpu->r[8]);
    }
L_000b21dc:;
    {
        wr32(cpu->r[4] + + 0xb50u, cpu->r[8]);
    }
L_000b21e0:;
    {
        wr32(cpu->r[4] + + 0xb54u, cpu->r[8]);
    }
L_000b21e4:;
    {
        wr32(cpu->r[4] + + 0xc04u, cpu->r[8]);
    }
L_000b21e8:;
    {
        wr32(cpu->r[4] + + 0xc14u, cpu->r[8]);
    }
L_000b21ec:;
    {
        wr32(cpu->r[4] + + 0xc08u, cpu->r[8]);
    }
L_000b21f0:;
    {
        wr32(cpu->r[4] + + 0xc18u, cpu->r[8]);
    }
L_000b21f4:;
    {
        wr32(cpu->r[4] + + 0xc0cu, cpu->r[8]);
    }
L_000b21f8:;
    {
        wr32(cpu->r[4] + + 0xc1cu, cpu->r[8]);
    }
L_000b21fc:;
    {
        wr32(cpu->r[4] + + 0xc24u, cpu->r[8]);
    }
L_000b2200:;
    {
        wr32(cpu->r[4] + + 0xc28u, cpu->r[8]);
    }
L_000b2204:;
    {
        wr32(cpu->r[4] + + 0xc2cu, cpu->r[8]);
    }
L_000b2208:;
    {
        wr32(cpu->r[4] + + 0xc30u, cpu->r[8]);
    }
L_000b220c:;
    {
        wr32(cpu->r[4] + + 0xc5cu, cpu->r[2]);
    }
L_000b2210:;
    {
        wr32(cpu->r[4] + + 0xc60u, cpu->r[2]);
    }
L_000b2214:;
    {
        wr32(cpu->r[4] + + 0xc64u, cpu->r[2]);
    }
L_000b2218:;
    {
        wr32(cpu->r[4] + + 0xc68u, cpu->r[2]);
    }
L_000b221c:;
    {
        wr32(cpu->r[4] + + 0xc34u, cpu->r[8]);
    }
L_000b2220:;
    {
        wr32(cpu->r[4] + + 0xb58u, cpu->r[3]);
    }
L_000b2224:;
    {
        wr32(cpu->r[4] + + 0x1e8u, cpu->r[8]);
    }
L_000b2228:;
    {
        wr32(cpu->r[4] + + 0x1ecu, cpu->r[8]);
    }
L_000b222c:;
    {
        wr32(cpu->r[4] + + 0x1f0u, cpu->r[8]);
    }
L_000b2230:;
    {
        wr32(cpu->r[4] + + 0x1f4u, cpu->r[8]);
    }
L_000b2234:;
    {
        wr32(cpu->r[4] + + 0xb5cu, cpu->r[8]);
    }
L_000b2238:;
    {
        wr32(cpu->r[4] + + 0xb60u, cpu->r[8]);
    }
L_000b223c:;
    {
        wr32(cpu->r[4] + + 0xb68u, cpu->r[3]);
    }
L_000b2240:;
    {
        wr32(cpu->r[4] + + 0xb64u, cpu->r[8]);
    }
L_000b2244:;
    {
        wr32(cpu->r[4] + + 0xbf8u, cpu->r[3]);
    }
L_000b2248:;
    {
        wr32(cpu->r[4] + + 0xcfcu, cpu->r[2]);
    }
L_000b224c:;
    {
        wr32(cpu->r[4] + + 0xcf8u, cpu->r[2]);
    }
L_000b2250:;
    {
        wr32(cpu->r[4] + + 0xcf4u, cpu->r[2]);
    }
L_000b2254:;
    {
        wr32(cpu->r[4] + + 0xd0cu, cpu->r[8]);
    }
L_000b2258:;
    {
        wr32(cpu->r[4] + + 0xd20u, cpu->r[2]);
    }
L_000b225c:;
    {
        wr32(cpu->r[4] + + 0xbfcu, cpu->r[8]);
    }
L_000b2260:;
    {
        wr32(cpu->r[4] + + 0xc00u, cpu->r[3]);
    }
L_000b2264:;
    {
        wr32(cpu->r[4] + + 0xd10u, cpu->r[8]);
    }
L_000b2268:;
    {
        wr32(cpu->r[4] + + 0xd14u, cpu->r[8]);
    }
L_000b226c:;
    {
        wr32(cpu->r[4] + + 0xd18u, cpu->r[8]);
    }
L_000b2270:;
    {
        wr8(cpu->r[4] + + 0xd1cu, cpu->r[8]);
    }
L_000b2274:;
    {
        wr8(cpu->r[4] + + 0xd24u, cpu->r[8]);
    }
L_000b2278:;
    {
        wr8(cpu->r[4] + + 0xd25u, cpu->r[8]);
    }
L_000b227c:;
    {
        wr32(cpu->r[4] + + 0xd28u, cpu->r[8]);
    }
L_000b2280:;
    {
        wr32(cpu->r[4] + + 0xd2cu, cpu->r[8]);
    }
L_000b2284:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000b2288:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b228cu)) return;
    }
}

/* _ZN18TrafficSceneObjectC1Eii @ 000b2298 (arm) */
void fn_000b2298(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b2298:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000b229c:;
    {
        cpu->r[5] = rd32(0x000b22a4u + + 0x98u);
    }
L_000b22a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b22a4:;
    {
        cpu->r[14] = 0x000b22a8u; fn_000b20f8(cpu);
    }
L_000b22a8:;
    {
        cpu->r[3] = rd32(0x000b22b0u + + 0x90u);
    }
L_000b22ac:;
    {
        cpu->r[5] = add_flags(cpu, 0x000b22b4u, cpu->r[5], 0, 0);
    }
L_000b22b0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00000e10u, 0, 0);
    }
L_000b22b4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000b22b8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_000b22bc:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000b22c0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b22c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b22ccu + + 0x6cu);
    }
L_000b22c8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b22cc:;
    {
        wr32(cpu->r[4] + + 0xe08u, cpu->r[2]);
    }
L_000b22d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000b22d4:;
    {
        wr32(cpu->r[4] + + 0xe00u, cpu->r[2]);
    }
L_000b22d8:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000b22dc:;
    {
        wr32(cpu->r[4] + + 0xe04u, cpu->r[2]);
    }
L_000b22e0:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[8]);
    }
L_000b22e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b22e8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000044u, 0, 0);
    }
L_000b22ec:;
    {
        cpu->r[14] = 0x000b22f0u; fn_001535e0(cpu);
    }
L_000b22f0:;
    {
        sub_flags(cpu, cpu->r[7], 0x000002ecu, 1, 1);
    }
L_000b22f4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000044u, 0, 0);
    }
L_000b22f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b22e0;
        }
    }
L_000b22fc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b2304u + + 0x34u);
    }
L_000b2300:;
    {
        wr8(cpu->r[4] + + 0xdfcu, cpu->r[8]);
    }
L_000b2304:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b2308:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b230c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b2310:;
    {
        wr32(cpu->r[4] + + 0xe18u, cpu->r[3]);
    }
L_000b2314:;
    {
        wr32(cpu->r[4] + + 0xe08u, cpu->r[3]);
    }
L_000b2318:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b231c:;
    {
        wr32(cpu->r[4] + + 0xe04u, cpu->r[2]);
    }
L_000b2320:;
    {
        wr8(cpu->r[4] + + 0xd1cu, cpu->r[3]);
    }
L_000b2324:;
    {
        wr32(cpu->r[4] + + 0xe00u, cpu->r[2]);
    }
L_000b2328:;
    {
        wr32(cpu->r[4] + + 0xe0cu, cpu->r[2]);
    }
L_000b232c:;
    {
        wr32(cpu->r[4] + + 0xe10u, cpu->r[2]);
    }
L_000b2330:;
    {
        wr32(cpu->r[4] + + 0xe14u, cpu->r[2]);
    }
L_000b2334:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2338u)) return;
    }
}

/* _ZN18TrafficSceneObjectC2Eii @ 000b2344 (arm) */
void fn_000b2344(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b2344:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000b2348:;
    {
        cpu->r[5] = rd32(0x000b2350u + + 0x98u);
    }
L_000b234c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b2350:;
    {
        cpu->r[14] = 0x000b2354u; fn_000b20f8(cpu);
    }
L_000b2354:;
    {
        cpu->r[3] = rd32(0x000b235cu + + 0x90u);
    }
L_000b2358:;
    {
        cpu->r[5] = add_flags(cpu, 0x000b2360u, cpu->r[5], 0, 0);
    }
L_000b235c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00000e10u, 0, 0);
    }
L_000b2360:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000b2364:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_000b2368:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000b236c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b2370:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b2378u + + 0x6cu);
    }
L_000b2374:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b2378:;
    {
        wr32(cpu->r[4] + + 0xe08u, cpu->r[2]);
    }
L_000b237c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000b2380:;
    {
        wr32(cpu->r[4] + + 0xe00u, cpu->r[2]);
    }
L_000b2384:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000b2388:;
    {
        wr32(cpu->r[4] + + 0xe04u, cpu->r[2]);
    }
L_000b238c:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[8]);
    }
L_000b2390:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b2394:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000044u, 0, 0);
    }
L_000b2398:;
    {
        cpu->r[14] = 0x000b239cu; fn_001535e0(cpu);
    }
L_000b239c:;
    {
        sub_flags(cpu, cpu->r[7], 0x000002ecu, 1, 1);
    }
L_000b23a0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000044u, 0, 0);
    }
L_000b23a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b238c;
        }
    }
L_000b23a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b23b0u + + 0x34u);
    }
L_000b23ac:;
    {
        wr8(cpu->r[4] + + 0xdfcu, cpu->r[8]);
    }
L_000b23b0:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b23b4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b23b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b23bc:;
    {
        wr32(cpu->r[4] + + 0xe18u, cpu->r[3]);
    }
L_000b23c0:;
    {
        wr32(cpu->r[4] + + 0xe08u, cpu->r[3]);
    }
L_000b23c4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b23c8:;
    {
        wr32(cpu->r[4] + + 0xe04u, cpu->r[2]);
    }
L_000b23cc:;
    {
        wr8(cpu->r[4] + + 0xd1cu, cpu->r[3]);
    }
L_000b23d0:;
    {
        wr32(cpu->r[4] + + 0xe00u, cpu->r[2]);
    }
L_000b23d4:;
    {
        wr32(cpu->r[4] + + 0xe0cu, cpu->r[2]);
    }
L_000b23d8:;
    {
        wr32(cpu->r[4] + + 0xe10u, cpu->r[2]);
    }
L_000b23dc:;
    {
        wr32(cpu->r[4] + + 0xe14u, cpu->r[2]);
    }
L_000b23e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b23e4u)) return;
    }
}

/* _ZN14CarSceneObjectC1Eii @ 000b23f0 (arm) */
void fn_000b23f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b23f0:;
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
L_000b23f4:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000b23f8:;
    {
        cpu->r[5] = rd32(0x000b2400u + + 0x188u);
    }
L_000b23fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b2400:;
    {
        cpu->r[14] = 0x000b2404u; fn_000ea788(cpu);
    }
L_000b2404:;
    {
        cpu->r[3] = rd32(0x000b240cu + + 0x180u);
    }
L_000b2408:;
    {
        cpu->r[5] = add_flags(cpu, 0x000b2410u, cpu->r[5], 0, 0);
    }
L_000b240c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b2410:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000b2414:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x000001fcu, 0, 0);
    }
L_000b2418:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000b241c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b2420:;
    {
        cpu->r[10] = 0x0000094cu;
    }
L_000b2424:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000b2428:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x000001a8u;
        wr32(cpu->r[0], cpu->r[3]);
        cpu->r[0] = wb_tmp;
    }
L_000b242c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000b2430:;
    {
        cpu->r[14] = 0x000b2434u; fn_000931e4(cpu);
    }
L_000b2434:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b243cu + + 0x148u);
    }
L_000b2438:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1e4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b243c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1dcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b2440:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1e0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b2444:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[8]);
    }
L_000b2448:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b244c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000044u, 0, 0);
    }
L_000b2450:;
    {
        cpu->r[14] = 0x000b2454u; fn_001535e0(cpu);
    }
L_000b2454:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[10], 1, 1);
    }
L_000b2458:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000044u, 0, 0);
    }
L_000b245c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b2444;
        }
    }
L_000b2460:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000c60u, 0, 0);
    }
L_000b2464:;
    {
        wr32(cpu->r[4] + + 0xcacu, cpu->r[8]);
    }
L_000b2468:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000b246c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000b2474u + + 0x110u);
    }
L_000b2470:;
    {
        cpu->r[14] = 0x000b2474u; fn_001535e0(cpu);
    }
L_000b2474:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000cb0u, 0, 0);
    }
L_000b2478:;
    {
        wr32(cpu->r[4] + + 0xcf0u, cpu->r[8]);
    }
L_000b247c:;
    {
        cpu->r[14] = 0x000b2480u; fn_001535e0(cpu);
    }
L_000b2480:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000b2484:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000d30u, 0, 0);
    }
L_000b2488:;
    {
        wr32(cpu->r[4] + + 0xcf4u, cpu->r[2]);
    }
L_000b248c:;
    {
        wr32(cpu->r[4] + + 0xcf8u, cpu->r[2]);
    }
L_000b2490:;
    {
        wr32(cpu->r[4] + + 0xcfcu, cpu->r[2]);
    }
L_000b2494:;
    {
        wr32(cpu->r[4] + + 0xd70u, cpu->r[8]);
    }
L_000b2498:;
    {
        cpu->r[14] = 0x000b249cu; fn_001535e0(cpu);
    }
L_000b249c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000d70u, 0, 0);
    }
L_000b24a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000b24a4:;
    {
        wr32(cpu->r[4] + + 0xdb4u, cpu->r[8]);
    }
L_000b24a8:;
    {
        cpu->r[14] = 0x000b24acu; fn_001535e0(cpu);
    }
L_000b24ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000db0u, 0, 0);
    }
L_000b24b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_000b24b4:;
    {
        wr32(cpu->r[4] + + 0xdf8u, cpu->r[8]);
    }
L_000b24b8:;
    {
        cpu->r[14] = 0x000b24bcu; fn_001535e0(cpu);
    }
L_000b24bc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000b24c0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000b24c4:;
    {
        wr8(cpu->r[4] + + 0x1f8u, cpu->r[8]);
    }
L_000b24c8:;
    {
        wr32(cpu->r[4] + + 0xb48u, cpu->r[8]);
    }
L_000b24cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b24d0:;
    {
        wr32(cpu->r[4] + + 0xb4cu, cpu->r[8]);
    }
L_000b24d4:;
    {
        wr32(cpu->r[4] + + 0xb50u, cpu->r[8]);
    }
L_000b24d8:;
    {
        wr32(cpu->r[4] + + 0xb54u, cpu->r[8]);
    }
L_000b24dc:;
    {
        wr32(cpu->r[4] + + 0xc04u, cpu->r[8]);
    }
L_000b24e0:;
    {
        wr32(cpu->r[4] + + 0xc14u, cpu->r[8]);
    }
L_000b24e4:;
    {
        wr32(cpu->r[4] + + 0xc08u, cpu->r[8]);
    }
L_000b24e8:;
    {
        wr32(cpu->r[4] + + 0xc18u, cpu->r[8]);
    }
L_000b24ec:;
    {
        wr32(cpu->r[4] + + 0xc0cu, cpu->r[8]);
    }
L_000b24f0:;
    {
        wr32(cpu->r[4] + + 0xc1cu, cpu->r[8]);
    }
L_000b24f4:;
    {
        wr32(cpu->r[4] + + 0xc24u, cpu->r[8]);
    }
L_000b24f8:;
    {
        wr32(cpu->r[4] + + 0xc28u, cpu->r[8]);
    }
L_000b24fc:;
    {
        wr32(cpu->r[4] + + 0xc2cu, cpu->r[8]);
    }
L_000b2500:;
    {
        wr32(cpu->r[4] + + 0xc30u, cpu->r[8]);
    }
L_000b2504:;
    {
        wr32(cpu->r[4] + + 0xc5cu, cpu->r[2]);
    }
L_000b2508:;
    {
        wr32(cpu->r[4] + + 0xc60u, cpu->r[2]);
    }
L_000b250c:;
    {
        wr32(cpu->r[4] + + 0xc64u, cpu->r[2]);
    }
L_000b2510:;
    {
        wr32(cpu->r[4] + + 0xc68u, cpu->r[2]);
    }
L_000b2514:;
    {
        wr32(cpu->r[4] + + 0xc34u, cpu->r[8]);
    }
L_000b2518:;
    {
        wr32(cpu->r[4] + + 0xb58u, cpu->r[3]);
    }
L_000b251c:;
    {
        wr32(cpu->r[4] + + 0x1e8u, cpu->r[8]);
    }
L_000b2520:;
    {
        wr32(cpu->r[4] + + 0x1ecu, cpu->r[8]);
    }
L_000b2524:;
    {
        wr32(cpu->r[4] + + 0x1f0u, cpu->r[8]);
    }
L_000b2528:;
    {
        wr32(cpu->r[4] + + 0x1f4u, cpu->r[8]);
    }
L_000b252c:;
    {
        wr32(cpu->r[4] + + 0xb5cu, cpu->r[8]);
    }
L_000b2530:;
    {
        wr32(cpu->r[4] + + 0xb60u, cpu->r[8]);
    }
L_000b2534:;
    {
        wr32(cpu->r[4] + + 0xb68u, cpu->r[3]);
    }
L_000b2538:;
    {
        wr32(cpu->r[4] + + 0xb64u, cpu->r[8]);
    }
L_000b253c:;
    {
        wr32(cpu->r[4] + + 0xbf8u, cpu->r[3]);
    }
L_000b2540:;
    {
        wr32(cpu->r[4] + + 0xcfcu, cpu->r[2]);
    }
L_000b2544:;
    {
        wr32(cpu->r[4] + + 0xcf8u, cpu->r[2]);
    }
L_000b2548:;
    {
        wr32(cpu->r[4] + + 0xcf4u, cpu->r[2]);
    }
L_000b254c:;
    {
        wr32(cpu->r[4] + + 0xd0cu, cpu->r[8]);
    }
L_000b2550:;
    {
        wr32(cpu->r[4] + + 0xd20u, cpu->r[2]);
    }
L_000b2554:;
    {
        wr32(cpu->r[4] + + 0xbfcu, cpu->r[8]);
    }
L_000b2558:;
    {
        wr32(cpu->r[4] + + 0xc00u, cpu->r[3]);
    }
L_000b255c:;
    {
        wr32(cpu->r[4] + + 0xd10u, cpu->r[8]);
    }
L_000b2560:;
    {
        wr32(cpu->r[4] + + 0xd14u, cpu->r[8]);
    }
L_000b2564:;
    {
        wr32(cpu->r[4] + + 0xd18u, cpu->r[8]);
    }
L_000b2568:;
    {
        wr8(cpu->r[4] + + 0xd1cu, cpu->r[8]);
    }
L_000b256c:;
    {
        wr8(cpu->r[4] + + 0xd24u, cpu->r[8]);
    }
L_000b2570:;
    {
        wr8(cpu->r[4] + + 0xd25u, cpu->r[8]);
    }
L_000b2574:;
    {
        wr32(cpu->r[4] + + 0xd28u, cpu->r[8]);
    }
L_000b2578:;
    {
        wr32(cpu->r[4] + + 0xd2cu, cpu->r[8]);
    }
L_000b257c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000b2580:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2584u)) return;
    }
}

/* _ZN14CarSceneObject16ComputePivotsCopEi @ 000b2590 (arm) */
void fn_000b2590(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b2590:;
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
L_000b2594:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000b2598:;
    {
        cpu->r[6] = rd8(cpu->r[0] + + 0x1f8u);
    }
L_000b259c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x17cu);
    }
L_000b25a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000b25a4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000b25a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b25ac:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000b25b0:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000b25b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b26bc;
        }
    }
L_000b25b8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x1e0u);
    }
L_000b25bc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x20u);
    }
L_000b25c0:;
    {
        vfp_vsub(cpu, 13, 13, 12);
    }
L_000b25c4:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4] + + 0x1dcu);
    }
L_000b25c8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x10u);
    }
L_000b25cc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1dcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b25d0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x1e4u);
    }
L_000b25d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x30u);
    }
L_000b25d8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1e4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b25dc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_000b25e0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000b25e4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1e0u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000b25e8:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x2cu);
    }
L_000b25ec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_000b25f0:;
    {
        vfp_vmul(cpu, 16, 13, 13);
    }
L_000b25f4:;
    {
        vfp_vsub(cpu, 14, 10, 14);
    }
L_000b25f8:;
    {
        vfp_vmla(cpu, 16, 14, 14);
    }
L_000b25fc:;
    {
        vfp_vsub(cpu, 15, 11, 15);
    }
L_000b2600:;
    {
        vfp_vmla(cpu, 16, 15, 15);
    }
L_000b2604:;
    {
        vfp_vsqrt(cpu, 16, 16);
    }
L_000b2608:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b2738;
        }
    }
L_000b260c:;
    {
        cpu->r[10] = rd32(0x000b2614u + + 0x1d4u);
    }
L_000b2610:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00000c50u, 0, 0);
    }
L_000b2614:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000cu, 0, 0);
    }
L_000b2618:;
    {
        cpu->r[11] = 0x0000004cu;
    }
L_000b261c:;
    {
        cpu->r[10] = add_flags(cpu, 0x000b2624u, cpu->r[10], 0, 0);
    }
L_000b2620:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000b2628u + + 0x1bcu);
    }
L_000b2624:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x00000060u, 0, 0);
    }
L_000b2628:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000050u, 0, 0);
    }
L_000b262c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000b2630:;
    {
        uint32_t wb_tmp = cpu->r[10] + + 0x4u;
        cpu->r[6] = rd32(cpu->r[10] + + 0x4u);
        cpu->r[10] = wb_tmp;
    }
L_000b2634:;
    {
        uint32_t v = cpu->r[11] * cpu->r[6] + cpu->r[7]; cpu->r[7] = v;
    }
L_000b2638:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_000b263c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b2640:;
    {
        cpu->r[14] = 0x000b2644u; fn_00153600(cpu);
    }
L_000b2644:;
    {
        vfp_vdiv(cpu, 14, 16, 17);
    }
L_000b2648:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[8]);
    }
L_000b264c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b2650:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000b2654:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b2658:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[8] = ea + 4u;
    }
L_000b265c:;
    {
        cpu->r[14] = 0x000b2660u; fn_00154734(cpu);
    }
L_000b2660:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 4u, &shc), 0, 0);
    }
L_000b2664:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b2668:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000b266c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000001fcu, 0, 0);
    }
L_000b2670:;
    {
        cpu->r[14] = 0x000b2674u; fn_001534f0(cpu);
    }
L_000b2674:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b2678:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000b267c:;
    {
        cpu->r[14] = 0x000b2680u; fn_001534f0(cpu);
    }
L_000b2680:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_000b2684:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 5u, &shc); cpu->r[2] = v;
    }
L_000b2688:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b268c:;
    {
        uint32_t v = cpu->r[6] & 0x0000001fu; cpu->r[6] = v;
    }
L_000b2690:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x30u);
    }
L_000b2694:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 1);
    }
L_000b2698:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000b269c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000b26a0:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[6] = v;
    }
L_000b26a4:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[6]);
    }
L_000b26a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b26fc;
        }
    }
L_000b26ac:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x2cu);
    }
L_000b26b0:;
    {
        goto L_000b2630;
    }
L_000b26b4:;
    {
        cpu->r[14] = 0x000b26b8u; fn_0013c4d8(cpu);
    }
L_000b26b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b26bc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b26c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b26c4:;
    {
        cpu->r[14] = 0x000b26ccu;
    }
L_000b26c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b26ccu)) return;
    }
L_000b26cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 4u, &shc), 0, 0);
    }
L_000b26d0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b26d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000b26d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000001fcu, 0, 0);
    }
L_000b26dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000b26e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b26e4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000b26e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000b26ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b26b4;
        }
    }
L_000b26f0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b26f4:;
    {
        wr8(cpu->r[4] + + 0x1f8u, cpu->r[3]);
    }
L_000b26f8:;
    {
        goto L_000b25b8;
    }
L_000b26fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b2700:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000b2704:;
    {
        cpu->r[14] = 0x000b2708u; fn_0013d348(cpu);
    }
L_000b2708:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b270c:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_000b2710:;
    {
        cpu->r[14] = 0x000b2714u; fn_0013d348(cpu);
    }
L_000b2714:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b2718:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000b271c:;
    {
        cpu->r[14] = 0x000b2720u; fn_0013d348(cpu);
    }
L_000b2720:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b2724:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_000b2728:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000b272c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000b2730:;
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
L_000b2734:;
    {
        return fn_0013d348(cpu);
    }
L_000b2738:;
    {
        cpu->r[10] = rd32(0x000b2740u + + 0xacu);
    }
L_000b273c:;
    {
        vfp_vneg(cpu, 16, 16);
    }
L_000b2740:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00000c50u, 0, 0);
    }
L_000b2744:;
    {
        cpu->r[11] = 0x0000004cu;
    }
L_000b2748:;
    {
        cpu->r[10] = add_flags(cpu, 0x000b2750u, cpu->r[10], 0, 0);
    }
L_000b274c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000cu, 0, 0);
    }
L_000b2750:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x00000060u, 0, 0);
    }
L_000b2754:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000050u, 0, 0);
    }
L_000b2758:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000b275c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000b2764u + + 0x80u);
    }
L_000b2760:;
    {
        uint32_t wb_tmp = cpu->r[10] + + 0x4u;
        cpu->r[6] = rd32(cpu->r[10] + + 0x4u);
        cpu->r[10] = wb_tmp;
    }
L_000b2764:;
    {
        uint32_t v = cpu->r[11] * cpu->r[6] + cpu->r[7]; cpu->r[7] = v;
    }
L_000b2768:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_000b276c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b2770:;
    {
        cpu->r[14] = 0x000b2774u; fn_00153600(cpu);
    }
L_000b2774:;
    {
        vfp_vdiv(cpu, 14, 16, 17);
    }
L_000b2778:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[8]);
    }
L_000b277c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b2780:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000b2784:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b2788:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[8] = ea + 4u;
    }
L_000b278c:;
    {
        cpu->r[14] = 0x000b2790u; fn_00154734(cpu);
    }
L_000b2790:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 4u, &shc), 0, 0);
    }
L_000b2794:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b2798:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000b279c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000001fcu, 0, 0);
    }
L_000b27a0:;
    {
        cpu->r[14] = 0x000b27a4u; fn_001534f0(cpu);
    }
L_000b27a4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b27a8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000b27ac:;
    {
        cpu->r[14] = 0x000b27b0u; fn_001534f0(cpu);
    }
L_000b27b0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_000b27b4:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 5u, &shc); cpu->r[2] = v;
    }
L_000b27b8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b27bc:;
    {
        uint32_t v = cpu->r[6] & 0x0000001fu; cpu->r[6] = v;
    }
L_000b27c0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x30u);
    }
L_000b27c4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 1);
    }
L_000b27c8:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000b27cc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000b27d0:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[6] = v;
    }
L_000b27d4:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[6]);
    }
L_000b27d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b26fc;
        }
    }
L_000b27dc:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x2cu);
    }
L_000b27e0:;
    {
        goto L_000b2760;
    }
}

/* _ZN14CarSceneObject20ComputePivotsTrafficEi @ 000b27f0 (arm) */
void fn_000b27f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b27f0:;
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
L_000b27f4:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000b27f8:;
    {
        cpu->r[6] = rd8(cpu->r[0] + + 0x1f8u);
    }
L_000b27fc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x17cu);
    }
L_000b2800:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000b2804:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000b2808:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b280c:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000b2810:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000b2814:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b291c;
        }
    }
L_000b2818:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x1e0u);
    }
L_000b281c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x20u);
    }
L_000b2820:;
    {
        vfp_vsub(cpu, 13, 13, 12);
    }
L_000b2824:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4] + + 0x1dcu);
    }
L_000b2828:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x10u);
    }
L_000b282c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1dcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b2830:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x1e4u);
    }
L_000b2834:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x30u);
    }
L_000b2838:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1e4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b283c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_000b2840:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000b2844:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1e0u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000b2848:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x2cu);
    }
L_000b284c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_000b2850:;
    {
        vfp_vmul(cpu, 16, 13, 13);
    }
L_000b2854:;
    {
        vfp_vsub(cpu, 14, 10, 14);
    }
L_000b2858:;
    {
        vfp_vmla(cpu, 16, 14, 14);
    }
L_000b285c:;
    {
        vfp_vsub(cpu, 15, 11, 15);
    }
L_000b2860:;
    {
        vfp_vmla(cpu, 16, 15, 15);
    }
L_000b2864:;
    {
        vfp_vsqrt(cpu, 16, 16);
    }
L_000b2868:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b29a0;
        }
    }
L_000b286c:;
    {
        cpu->r[10] = rd32(0x000b2874u + + 0x1dcu);
    }
L_000b2870:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00000c50u, 0, 0);
    }
L_000b2874:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000cu, 0, 0);
    }
L_000b2878:;
    {
        cpu->r[11] = 0x0000004cu;
    }
L_000b287c:;
    {
        cpu->r[10] = add_flags(cpu, 0x000b2884u, cpu->r[10], 0, 0);
    }
L_000b2880:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000b2888u + + 0x1c4u);
    }
L_000b2884:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x00000074u, 0, 0);
    }
L_000b2888:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000064u, 0, 0);
    }
L_000b288c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000b2890:;
    {
        uint32_t wb_tmp = cpu->r[10] + + 0x4u;
        cpu->r[6] = rd32(cpu->r[10] + + 0x4u);
        cpu->r[10] = wb_tmp;
    }
L_000b2894:;
    {
        uint32_t v = cpu->r[11] * cpu->r[6] + cpu->r[7]; cpu->r[7] = v;
    }
L_000b2898:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_000b289c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b28a0:;
    {
        cpu->r[14] = 0x000b28a4u; fn_00153600(cpu);
    }
L_000b28a4:;
    {
        vfp_vdiv(cpu, 14, 16, 17);
    }
L_000b28a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[8]);
    }
L_000b28ac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b28b0:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000b28b4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b28b8:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[8] = ea + 4u;
    }
L_000b28bc:;
    {
        cpu->r[14] = 0x000b28c0u; fn_00154734(cpu);
    }
L_000b28c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 4u, &shc), 0, 0);
    }
L_000b28c4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b28c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000b28cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000001fcu, 0, 0);
    }
L_000b28d0:;
    {
        cpu->r[14] = 0x000b28d4u; fn_001534f0(cpu);
    }
L_000b28d4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b28d8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000b28dc:;
    {
        cpu->r[14] = 0x000b28e0u; fn_001534f0(cpu);
    }
L_000b28e0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_000b28e4:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 5u, &shc); cpu->r[2] = v;
    }
L_000b28e8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b28ec:;
    {
        uint32_t v = cpu->r[6] & 0x0000001fu; cpu->r[6] = v;
    }
L_000b28f0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x30u);
    }
L_000b28f4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 1);
    }
L_000b28f8:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000b28fc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000b2900:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[6] = v;
    }
L_000b2904:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[6]);
    }
L_000b2908:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b295c;
        }
    }
L_000b290c:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x2cu);
    }
L_000b2910:;
    {
        goto L_000b2890;
    }
L_000b2914:;
    {
        cpu->r[14] = 0x000b2918u; fn_0013c4d8(cpu);
    }
L_000b2918:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b291c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b2920:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b2924:;
    {
        cpu->r[14] = 0x000b292cu;
    }
L_000b2928:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b292cu)) return;
    }
L_000b292c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 4u, &shc), 0, 0);
    }
L_000b2930:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b2934:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000b2938:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000001fcu, 0, 0);
    }
L_000b293c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000b2940:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b2944:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000b2948:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000b294c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b2914;
        }
    }
L_000b2950:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b2954:;
    {
        wr8(cpu->r[4] + + 0x1f8u, cpu->r[3]);
    }
L_000b2958:;
    {
        goto L_000b2818;
    }
L_000b295c:;
    {
        cpu->r[6] = 0x00000006u;
    }
L_000b2960:;
    {
        goto L_000b2968;
    }
L_000b2964:;
    {
        cpu->r[14] = 0x000b2968u; fn_0013d348(cpu);
    }
L_000b2968:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b296c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b2970:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b2974:;
    {
        cpu->r[14] = 0x000b297cu;
    }
L_000b2978:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b297cu)) return;
    }
L_000b297c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000b2980:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b2984:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000b2988:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000b298c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b2990:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b2964;
        }
    }
L_000b2994:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000b2998:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000b299c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b29a0u)) return;
    }
L_000b29a0:;
    {
        cpu->r[10] = rd32(0x000b29a8u + + 0xacu);
    }
L_000b29a4:;
    {
        vfp_vneg(cpu, 16, 16);
    }
L_000b29a8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00000c50u, 0, 0);
    }
L_000b29ac:;
    {
        cpu->r[11] = 0x0000004cu;
    }
L_000b29b0:;
    {
        cpu->r[10] = add_flags(cpu, 0x000b29b8u, cpu->r[10], 0, 0);
    }
L_000b29b4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000cu, 0, 0);
    }
L_000b29b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x00000074u, 0, 0);
    }
L_000b29bc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000064u, 0, 0);
    }
L_000b29c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000b29c4:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000b29ccu + + 0x80u);
    }
L_000b29c8:;
    {
        uint32_t wb_tmp = cpu->r[10] + + 0x4u;
        cpu->r[6] = rd32(cpu->r[10] + + 0x4u);
        cpu->r[10] = wb_tmp;
    }
L_000b29cc:;
    {
        uint32_t v = cpu->r[11] * cpu->r[6] + cpu->r[7]; cpu->r[7] = v;
    }
L_000b29d0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_000b29d4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b29d8:;
    {
        cpu->r[14] = 0x000b29dcu; fn_00153600(cpu);
    }
L_000b29dc:;
    {
        vfp_vdiv(cpu, 14, 16, 17);
    }
L_000b29e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[8]);
    }
L_000b29e4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b29e8:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000b29ec:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b29f0:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[8] = ea + 4u;
    }
L_000b29f4:;
    {
        cpu->r[14] = 0x000b29f8u; fn_00154734(cpu);
    }
L_000b29f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 4u, &shc), 0, 0);
    }
L_000b29fc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b2a00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000b2a04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000001fcu, 0, 0);
    }
L_000b2a08:;
    {
        cpu->r[14] = 0x000b2a0cu; fn_001534f0(cpu);
    }
L_000b2a0c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b2a10:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000b2a14:;
    {
        cpu->r[14] = 0x000b2a18u; fn_001534f0(cpu);
    }
L_000b2a18:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_000b2a1c:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 5u, &shc); cpu->r[2] = v;
    }
L_000b2a20:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b2a24:;
    {
        uint32_t v = cpu->r[6] & 0x0000001fu; cpu->r[6] = v;
    }
L_000b2a28:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x30u);
    }
L_000b2a2c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 1);
    }
L_000b2a30:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000b2a34:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000b2a38:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[6] = v;
    }
L_000b2a3c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[6]);
    }
L_000b2a40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b295c;
        }
    }
L_000b2a44:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x2cu);
    }
L_000b2a48:;
    {
        goto L_000b29c8;
    }
}

/* _ZN14CarSceneObject27UpdateReflectionCoordinatesEv @ 000b2a58 (arm) */
void fn_000b2a58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b2a58:;
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
L_000b2a5c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0xb60u);
    }
L_000b2a60:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000b2a64:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000b2a68:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000b2a6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b2a78;
        }
    }
L_000b2a70:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000b2a74:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2a78u)) return;
    }
L_000b2a78:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x17cu);
    }
L_000b2a7c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000b2a80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b2a84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000b2a88:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x2cu);
    }
L_000b2a8c:;
    {
        cpu->r[14] = 0x000b2a90u; fn_0013d348(cpu);
    }
L_000b2a90:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_000b2a94:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x17cu);
    }
L_000b2a98:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000050u, 0, 0);
    }
L_000b2a9c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x30u);
    }
L_000b2aa0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b2aa4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b2aa8:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000b2aac:;
    {
        uint32_t v = cpu->r[1] | 0x00000002u; cpu->r[1] = v;
    }
L_000b2ab0:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_000b2ab4:;
    {
        cpu->r[14] = 0x000b2abcu;
    }
L_000b2ab8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2abcu)) return;
    }
L_000b2abc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x17cu);
    }
L_000b2ac0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b2ac4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b2ac8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b2acc:;
    {
        cpu->r[14] = 0x000b2ad4u;
    }
L_000b2ad0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2ad4u)) return;
    }
L_000b2ad4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xbf8u);
    }
L_000b2ad8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b2adc:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x4u);
    }
L_000b2ae0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b2b14;
        }
    }
L_000b2ae4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b2ae8:;
    {
        cpu->r[14] = 0x000b2aecu; fn_0013dcb0(cpu);
    }
L_000b2aec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000b60u, 0, 0);
    }
L_000b2af0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xbf8u);
    }
L_000b2af4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b2af8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000b2afc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000b2b00:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b2b08u + + 0xbcu);
    }
L_000b2b04:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b2b08:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b2b0c:;
    {
        cpu->r[14] = 0x000b2b10u; fn_0013fde4(cpu);
    }
L_000b2b10:;
    {
        goto L_000b2a70;
    }
L_000b2b14:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000b2b18:;
    {
        wr32(cpu->r[7] + + 0xbf8u, cpu->r[6]);
    }
L_000b2b1c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b2ae4;
        }
    }
L_000b2b20:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000b2b24:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[6], 0x0000000fu, 1, 1);
        }
    }
L_000b2b28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b2b44;
        }
    }
L_000b2b2c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000010u, 1, 1);
    }
L_000b2b30:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[6], 0x00000011u, 1, 1);
        }
    }
L_000b2b34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b2b44;
        }
    }
L_000b2b38:;
    {
        sub_flags(cpu, cpu->r[6], 0x0000000au, 1, 1);
    }
L_000b2b3c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[6], 0x0000000bu, 1, 1);
        }
    }
L_000b2b40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b2b90;
        }
    }
L_000b2b44:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000b2b48:;
    {
        goto L_000b2b64;
    }
L_000b2b4c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000b2b50:;
    {
        cpu->r[14] = 0x000b2b58u;
    }
L_000b2b54:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2b58u)) return;
    }
L_000b2b58:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 0);
    }
L_000b2b5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000b2b60:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000b2ba0;
        }
    }
L_000b2b64:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b2b68:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000b2b6c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b2b70:;
    {
        cpu->r[14] = 0x000b2b78u;
    }
L_000b2b74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2b78u)) return;
    }
L_000b2b78:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000b2b7c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b2b80:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_000b2b84:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b2b88:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000b2b8c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b2b4c;
        }
    }
L_000b2b90:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000b2b94:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_000b2b98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b2b20;
        }
    }
L_000b2b9c:;
    {
        goto L_000b2ae4;
    }
L_000b2ba0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xbf8u);
    }
L_000b2ba4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000b2ba8:;
    {
        wr32(cpu->r[7] + + 0xbf8u, cpu->r[2]);
    }
L_000b2bac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000b2bb0:;
    {
        wr32(cpu->r[3] + + 0xb6cu, cpu->r[6]);
    }
L_000b2bb4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000b2bb8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_000b2bbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b2b20;
        }
    }
L_000b2bc0:;
    {
        goto L_000b2ae4;
    }
}

/* _ZN7CMatrixD1Ev @ 000b2bc8 (arm) */
void fn_000b2bc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b2bc8:;
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
L_000b2bcc:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x40u);
    }
L_000b2bd0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000b2bd4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b2bd8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b2bdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b2ce8;
        }
    }
L_000b2be0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x40u);
    }
L_000b2be4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000b2be8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b2cd8;
        }
    }
L_000b2bec:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x40u);
    }
L_000b2bf0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000b2bf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b2cc8;
        }
    }
L_000b2bf8:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x40u);
    }
L_000b2bfc:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000b2c00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b2cb8;
        }
    }
L_000b2c04:;
    {
        cpu->r[10] = rd32(cpu->r[8] + + 0x40u);
    }
L_000b2c08:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000b2c0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b2ca8;
        }
    }
L_000b2c10:;
    {
        cpu->r[9] = rd32(cpu->r[10] + + 0x40u);
    }
L_000b2c14:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000b2c18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b2c98;
        }
    }
L_000b2c1c:;
    {
        cpu->r[11] = rd32(cpu->r[9] + + 0x40u);
    }
L_000b2c20:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000b2c24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b2c88;
        }
    }
L_000b2c28:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x40u);
    }
L_000b2c2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b2c30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b2c78;
        }
    }
L_000b2c34:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x40u);
    }
L_000b2c38:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b2c3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b2c68;
        }
    }
L_000b2c40:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000b2c44:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000b2c48:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000b2c4c:;
    {
        cpu->r[14] = 0x000b2c50u; fn_000b2bc8(cpu);
    }
L_000b2c50:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b2c54:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000b2c58:;
    {
        cpu->r[14] = 0x000b2c5cu; fn_0018ba20(cpu);
    }
L_000b2c5c:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_000b2c60:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b2c64:;
    {
        wr32(cpu->r[3] + + 0x40u, cpu->r[2]);
    }
L_000b2c68:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b2c6c:;
    {
        cpu->r[14] = 0x000b2c70u; fn_0018ba20(cpu);
    }
L_000b2c70:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b2c74:;
    {
        wr32(cpu->r[11] + + 0x40u, cpu->r[3]);
    }
L_000b2c78:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000b2c7c:;
    {
        cpu->r[14] = 0x000b2c80u; fn_0018ba20(cpu);
    }
L_000b2c80:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b2c84:;
    {
        wr32(cpu->r[9] + + 0x40u, cpu->r[3]);
    }
L_000b2c88:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000b2c8c:;
    {
        cpu->r[14] = 0x000b2c90u; fn_0018ba20(cpu);
    }
L_000b2c90:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b2c94:;
    {
        wr32(cpu->r[10] + + 0x40u, cpu->r[3]);
    }
L_000b2c98:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000b2c9c:;
    {
        cpu->r[14] = 0x000b2ca0u; fn_0018ba20(cpu);
    }
L_000b2ca0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b2ca4:;
    {
        wr32(cpu->r[8] + + 0x40u, cpu->r[3]);
    }
L_000b2ca8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b2cac:;
    {
        cpu->r[14] = 0x000b2cb0u; fn_0018ba20(cpu);
    }
L_000b2cb0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b2cb4:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[3]);
    }
L_000b2cb8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b2cbc:;
    {
        cpu->r[14] = 0x000b2cc0u; fn_0018ba20(cpu);
    }
L_000b2cc0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b2cc4:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[3]);
    }
L_000b2cc8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b2ccc:;
    {
        cpu->r[14] = 0x000b2cd0u; fn_0018ba20(cpu);
    }
L_000b2cd0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b2cd4:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_000b2cd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b2cdc:;
    {
        cpu->r[14] = 0x000b2ce0u; fn_0018ba20(cpu);
    }
L_000b2ce0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b2ce4:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[3]);
    }
L_000b2ce8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b2cec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000b2cf0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2cf4u)) return;
    }
}

/* _ZN14CarSceneObject12RenderDriverEv @ 000b2cf4 (arm) */
void fn_000b2cf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b2cf4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xd28u);
    }
L_000b2cf8:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000b2cfc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b2d00:;
    {
        cpu->r[5] = rd32(0x000b2d08u + + 0x1acu);
    }
L_000b2d04:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000054u, 1, 0);
    }
L_000b2d08:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b2d0c:;
    {
        cpu->r[5] = add_flags(cpu, 0x000b2d14u, cpu->r[5], 0, 0);
    }
L_000b2d10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b2d6c;
        }
    }
L_000b2d14:;
    {
        cpu->r[7] = rd32(0x000b2d1cu + + 0x19cu);
    }
L_000b2d18:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xd04u);
    }
L_000b2d1c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000b2d20:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000b2d24:;
    {
        cpu->r[14] = 0x000b2d28u; fn_00096f84(cpu);
    }
L_000b2d28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b2d2c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[6]);
        }
    }
L_000b2d30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b2d74;
        }
    }
L_000b2d34:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000b2d38:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000b2d3c:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000b2d40:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000b2d44:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000b2d48:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000b2d4c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000b2d50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000b2d54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000b2d58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000b2d5c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000b2d60:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1dcu);
    }
L_000b2d64:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000b2d68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b2d74;
        }
    }
L_000b2d6c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_000b2d70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2d74u)) return;
    }
L_000b2d74:;
    {
        cpu->r[3] = 0x00001d38u;
    }
L_000b2d78:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000b2d7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_000b2d80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
    }
L_000b2d84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000b2d88:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000b2d8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b2d90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b2db8;
        }
    }
L_000b2d94:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b2d98:;
    {
        cpu->r[1] = 0x00000016u;
    }
L_000b2d9c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b2da0:;
    {
        cpu->r[14] = 0x000b2da8u;
    }
L_000b2da4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2da8u)) return;
    }
L_000b2da8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b2dac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b2d6c;
        }
    }
L_000b2db0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000b2db4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000b2db8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b2dbc:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000b2dc0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000040u, 0, 0);
    }
L_000b2dc4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000b2dc8:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b2dcc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000b2dd0:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b2dd4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_000b2dd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_000b2ddc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000b2de0:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b2de4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000b2de8:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b2dec:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x10u;
        wr32(cpu->r[2] + + 0x10u, cpu->r[12]);
        cpu->r[2] = wb_tmp;
    }
L_000b2df0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b2dc4;
        }
    }
L_000b2df4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xd04u);
    }
L_000b2df8:;
    {
        cpu->r[14] = 0x000b2dfcu; fn_00096f84(cpu);
    }
L_000b2dfc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b2e00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b2e44;
        }
    }
L_000b2e04:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b2e08:;
    {
        cpu->r[14] = 0x000b2e0cu; fn_000ea4dc(cpu);
    }
L_000b2e0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b2e10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b2d6c;
        }
    }
L_000b2e14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b2e18:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b2e1c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b2e20:;
    {
        cpu->r[14] = 0x000b2e28u;
    }
L_000b2e24:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2e28u)) return;
    }
L_000b2e28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b2e2c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b2e30:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b2e34:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b2e38:;
    {
        cpu->r[14] = 0x000b2e40u;
    }
L_000b2e3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2e40u)) return;
    }
L_000b2e40:;
    {
        goto L_000b2d6c;
    }
L_000b2e44:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b2e48:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000b2e4c:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_000b2e50:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[6]);
    }
L_000b2e54:;
    {
        cpu->r[14] = 0x000b2e58u; fn_001535e0(cpu);
    }
L_000b2e58:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000b2e5c:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_000b2e60:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b2e64:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_000b2e68:;
    {
        cpu->r[5] = cpu->r[13];
    }
L_000b2e6c:;
    {
        cpu->r[14] = 0x000b2e70u; fn_0013c510(cpu);
    }
L_000b2e70:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_000b2e74:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_000b2e78:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b2e80u + + 0x30u);
    }
L_000b2e7c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b2e80:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b2e84:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b2e88:;
    {
        cpu->r[14] = 0x000b2e8cu; fn_0015365c(cpu);
    }
L_000b2e8c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd28u);
    }
L_000b2e90:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_000b2e94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000b2e98:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_000b2e9c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000b2ea0:;
    {
        cpu->r[14] = 0x000b2ea4u; fn_00153e90(cpu);
    }
L_000b2ea4:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_000b2ea8:;
    {
        cpu->r[14] = 0x000b2eacu; fn_000b2bc8(cpu);
    }
L_000b2eac:;
    {
        goto L_000b2e04;
    }
}

/* _ZN14CarSceneObject9RenderCopEiP4CCar @ 000b2ebc (arm) */
void fn_000b2ebc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b2ebc:;
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
L_000b2ec0:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_000b2ec4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000094u, 1, 0);
    }
L_000b2ec8:;
    {
        cpu->r[6] = rd32(0x000b2ed0u + + 0x458u);
    }
L_000b2ecc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000b2ed0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_000b2ed4:;
    {
        cpu->r[8] = 0x000011e8u;
    }
L_000b2ed8:;
    {
        cpu->r[3] = rd32(0x000b2ee0u + + 0x44cu);
    }
L_000b2edc:;
    {
        cpu->r[6] = add_flags(cpu, 0x000b2ee4u, cpu->r[6], 0, 0);
    }
L_000b2ee0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b2ee4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_000b2ee8:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000b2eec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b2ef0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000b2ef4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000b2ef8:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000b2efc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000b2f00:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b2f04:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b2f08:;
    {
        cpu->r[14] = 0x000b2f10u;
    }
L_000b2f0c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2f10u)) return;
    }
L_000b2f10:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000b2f14:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000134u, 0, 0);
    }
L_000b2f18:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b2f1c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b2f20:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b2f24:;
    {
        cpu->r[14] = 0x000b2f2cu;
    }
L_000b2f28:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2f2cu)) return;
    }
L_000b2f2c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000b2f30:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b2f34:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b2f38:;
    {
        cpu->r[14] = 0x000b2f40u;
    }
L_000b2f3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2f40u)) return;
    }
L_000b2f40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b2f44:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b2f48:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b2f4c:;
    {
        cpu->r[14] = 0x000b2f54u;
    }
L_000b2f50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2f54u)) return;
    }
L_000b2f54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b2f58:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b2f5c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b2f60:;
    {
        cpu->r[14] = 0x000b2f68u;
    }
L_000b2f64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2f68u)) return;
    }
L_000b2f68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xb60u);
    }
L_000b2f6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000b2f70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b32d4;
        }
    }
L_000b2f74:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b2f78:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b2f7c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000b2f80:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b2f84:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b2f88:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b2f8c:;
    {
        cpu->r[14] = 0x000b2f94u;
    }
L_000b2f90:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2f94u)) return;
    }
L_000b2f94:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b2f98:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b2f9c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b2fa0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b2fa4:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000b2fa8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b2fac:;
    {
        cpu->r[14] = 0x000b2fb4u;
    }
L_000b2fb0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2fb4u)) return;
    }
L_000b2fb4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b2fb8:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000b2fbc:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_000b2fc0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b2fc4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b2fc8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b2fcc:;
    {
        cpu->r[14] = 0x000b2fd4u;
    }
L_000b2fd0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b2fd4u)) return;
    }
L_000b2fd4:;
    {
        { uint32_t v = cpu->r[7] & 0x08000001u; set_nz(cpu, v); }
    }
L_000b2fd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b3198;
        }
    }
L_000b2fdc:;
    {
        { uint32_t v = cpu->r[7] & 0x00008000u; set_nz(cpu, v); }
    }
L_000b2fe0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b3084;
        }
    }
L_000b2fe4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b2fe8:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_000b2fec:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_000b2ff0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b2ff4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b2ff8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b2ffc:;
    {
        cpu->r[14] = 0x000b3004u;
    }
L_000b3000:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b3004u)) return;
    }
L_000b3004:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b3008:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000b300c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000b3010:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b3014:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b3018:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b301c:;
    {
        cpu->r[14] = 0x000b3024u;
    }
L_000b3020:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b3024u)) return;
    }
L_000b3024:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b3028:;
    {
        cpu->r[7] = 0x000011e8u;
    }
L_000b302c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b3030:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b3034:;
    {
        cpu->r[14] = 0x000b303cu;
    }
L_000b3038:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b303cu)) return;
    }
L_000b303c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000b3040:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b3044:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b3048:;
    {
        cpu->r[14] = 0x000b3050u;
    }
L_000b304c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b3050u)) return;
    }
L_000b3050:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000b3054:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b3058:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b305c:;
    {
        cpu->r[14] = 0x000b3064u;
    }
L_000b3060:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b3064u)) return;
    }
L_000b3064:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000b3068:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000b306c:;
    {
        cpu->r[10] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000b3070:;
    {
        uint32_t v = cpu->r[10] & 0x00000040u; cpu->r[10] = v;
        set_nz(cpu, v);
    }
L_000b3074:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b30a8;
        }
    }
L_000b3078:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_000b307c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_000b3080:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b3084u)) return;
    }
L_000b3084:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b3088:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000b308c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000b3090:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b3094:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b3098:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b309c:;
    {
        cpu->r[14] = 0x000b30a4u;
    }
L_000b30a0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b30a4u)) return;
    }
L_000b30a4:;
    {
        goto L_000b3024;
    }
L_000b30a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000b30ac:;
    {
        cpu->r[1] = 0x00001314u;
    }
L_000b30b0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000b30b4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000b30b8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000b30bc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b30c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b30c4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000b30ccu + + 0x24cu);
    }
L_000b30c8:;
    {
        cpu->r[14] = 0x000b30d0u;
    }
L_000b30cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b30d0u)) return;
    }
L_000b30d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000b30d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000b30d8:;
    {
        *vfp_s(cpu,18) = *vfp_s(cpu,16);
    }
L_000b30dc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], 0x00001840u, 0, 0);
    }
L_000b30e0:;
    {
        cpu->r[2] = rd32(0x000b30e8u + + 0x248u);
    }
L_000b30e4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b30e8:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_000b30ec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b30f0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000014u, 0, 0);
    }
L_000b30f4:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_000b30f8:;
    {
        cpu->r[9] = 0x00005603u;
    }
L_000b30fc:;
    {
        cpu->r[14] = 0x000b3104u;
    }
L_000b3100:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b3104u)) return;
    }
L_000b3104:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b3108:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000b310c:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[10]);
    }
L_000b3110:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b3114:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b3118:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[4]);
    }
L_000b311c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b3120:;
    {
        cpu->r[14] = 0x000b3124u; fn_001535e0(cpu);
    }
L_000b3124:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_000b3128:;
    {
        cpu->r[14] = 0x000b312cu; fn_0009b4d0(cpu);
    }
L_000b312c:;
    {
        cpu->r[3] = rd32(0x000b3134u + + 0x200u);
    }
L_000b3130:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x000b3138u + + 0x1e4u);
    }
L_000b3134:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000b313cu + + 0x1e4u);
    }
L_000b3138:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000b313c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000b3140:;
    {
        cpu->r[2] = 0x00001c0du;
    }
L_000b3144:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000b3148:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b314c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b32bc;
        }
    }
L_000b3150:;
    {
        cpu->r[3] = rd8(cpu->r[7]);
    }
L_000b3154:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000020u, 0, 0);
    }
L_000b3158:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b315c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b31bc;
        }
    }
L_000b3160:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000b3164:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000b3168:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000002u, 1, 1);
    }
L_000b316c:;
    {
        cpu->r[9] = (uint32_t)((uint16_t)cpu->r[9]);
    }
L_000b3170:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b313c;
        }
    }
L_000b3174:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000b3178:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b317c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b3180:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b3184:;
    {
        cpu->r[14] = 0x000b318cu;
    }
L_000b3188:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b318cu)) return;
    }
L_000b318c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000b3190:;
    {
        cpu->r[14] = 0x000b3194u; fn_000b2bc8(cpu);
    }
L_000b3194:;
    {
        goto L_000b3078;
    }
L_000b3198:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b319c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000b31a0:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_000b31a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b31a8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b31ac:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b31b0:;
    {
        cpu->r[14] = 0x000b31b8u;
    }
L_000b31b4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b31b8u)) return;
    }
L_000b31b8:;
    {
        goto L_000b2fdc;
    }
L_000b31bc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_000b31c0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000b31c4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000b31c8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b31cc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000b31d0:;
    {
        cpu->r[14] = 0x000b31d4u; fn_00135cf4(cpu);
    }
L_000b31d4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b31d8:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000b31dc:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_000b31e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b31e4:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_000b31e8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[12] + + 0x8u);
    }
L_000b31ec:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000b31f0:;
    {
        *vfp_s(cpu,20) = (float)*(int32_t*)vfp_s(cpu,20);
    }
L_000b31f4:;
    {
        cpu->r[14] = 0x000b31f8u; fn_0012f12c(cpu);
    }
L_000b31f8:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_000b31fc:;
    {
        cpu->r[2] = 0x00000018u;
    }
L_000b3200:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b3204:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000b3208:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000b320c:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_000b3210:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b3214:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000b3218:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_000b321c:;
    {
        cpu->r[14] = 0x000b3220u; fn_0014814c(cpu);
    }
L_000b3220:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000b3224:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b3228:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_000b322c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000b3230:;
    {
        cpu->r[14] = 0x000b3234u; fn_0013c510(cpu);
    }
L_000b3234:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000b3238:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000b323c:;
    {
        cpu->r[14] = 0x000b3240u; fn_001534f0(cpu);
    }
L_000b3240:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000b3244:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000b3248:;
    {
        cpu->r[14] = 0x000b324cu; fn_0015365c(cpu);
    }
L_000b324c:;
    {
        vfp_vmul(cpu, 14, 20, 19);
    }
L_000b3250:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000b3254:;
    {
        wr8(cpu->r[13] + + 0x8fu, cpu->r[3]);
    }
L_000b3258:;
    {
        wr8(cpu->r[13] + + 0x8cu, cpu->r[3]);
    }
L_000b325c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b3260:;
    {
        wr8(cpu->r[13] + + 0x8du, cpu->r[3]);
    }
L_000b3264:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000b3268:;
    {
        wr8(cpu->r[13] + + 0x8eu, cpu->r[3]);
    }
L_000b326c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b3270:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8cu);
    }
L_000b3274:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000b3278:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000b327c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000b3280:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b3284:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b3288:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b328c:;
    {
        vfp_vmul(cpu, 15, 16, 19);
    }
L_000b3290:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000b3294:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000b3298:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000b329c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000b32a0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000b32a4:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b32a8:;
    {
        cpu->r[14] = 0x000b32acu; fn_00130de4(cpu);
    }
L_000b32ac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b32b0:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_000b32b4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[12]);
    }
L_000b32b8:;
    {
        goto L_000b3160;
    }
L_000b32bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_000b32c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[8], 2, 5u, &shc), 0, 0);
    }
L_000b32c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001840u, 0, 0);
    }
L_000b32c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000014u, 0, 0);
    }
L_000b32cc:;
    {
        cpu->r[14] = 0x000b32d0u; fn_00160754(cpu);
    }
L_000b32d0:;
    {
        goto L_000b3150;
    }
L_000b32d4:;
    {
        cpu->r[3] = rd32(0x000b32dcu + + 0x58u);
    }
L_000b32d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b32dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000b32e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x354u);
    }
L_000b32e4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000b32e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b32ec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_000b32f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_000b32f4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_000b32f8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000b32fc:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000b3300:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b3308u + + 0x1cu);
    }
L_000b3304:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000b3308:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000b330c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b3310:;
    {
        cpu->r[14] = 0x000b3314u; fn_000b2590(cpu);
    }
L_000b3314:;
    {
        goto L_000b2f74;
    }
}

/* _ZN14CarSceneObject19UpdateSparksEffectsEv @ 000b3338 (arm) */
void fn_000b3338(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b3338:;
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
L_000b333c:;
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
L_000b3340:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000234u, 1, 0);
    }
L_000b3344:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_000b3348:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000b334c:;
    {
        cpu->r[0] = rd32(0x000b3354u + + 0x1e4u);
    }
L_000b3350:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x178u);
    }
L_000b3354:;
    {
        cpu->r[0] = add_flags(cpu, 0x000b335cu, cpu->r[0], 0, 0);
    }
L_000b3358:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_000b335c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b3360:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b3370;
        }
    }
L_000b3364:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x179u);
    }
L_000b3368:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b336c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b3510;
        }
    }
L_000b3370:;
    {
        cpu->r[2] = rd32(0x000b3378u + + 0x1c4u);
    }
L_000b3374:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000b3378:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b337c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b3380:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000b3384:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000b3388:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000b338c:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000b3390:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000b3394:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000b3398:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x15cu);
    }
L_000b339c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000b33a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b3510;
        }
    }
L_000b33a4:;
    {
        cpu->r[3] = rd32(0x000b33acu + + 0x194u);
    }
L_000b33a8:;
    {
        cpu->r[4] = 0x00008cbcu;
    }
L_000b33ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000b33b0:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000b33b4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b33bcu, cpu->r[3], 0, 0);
    }
L_000b33b8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x000001fcu, 0, 0);
    }
L_000b33bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000078u, 0, 0);
    }
L_000b33c0:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xd00u);
    }
L_000b33c4:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
    }
L_000b33c8:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_000b33cc:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[4]);
    }
L_000b33d0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000b33d4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000b351c;
        }
    }
L_000b33d8:;
    {
        cpu->r[3] = 0x00008cb8u;
    }
L_000b33dc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b33e0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000b33e4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000b33e8:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_000b33ec:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000b33f0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_000b33f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b3510;
        }
    }
L_000b33f8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x484u);
    }
L_000b33fc:;
    {
        { uint32_t v = cpu->r[3] & 0x00001000u; set_nz(cpu, v); }
    }
L_000b3400:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00001788u;
        }
    }
L_000b3404:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
        }
    }
L_000b3408:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] | 0x00040000u; cpu->r[1] = v;
        }
    }
L_000b340c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
        }
    }
L_000b3410:;
    {
        { uint32_t v = cpu->r[3] & 0x0000000fu; set_nz(cpu, v); }
    }
L_000b3414:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00001788u;
        }
    }
L_000b3418:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_000b341c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
        }
    }
L_000b3420:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] | 0x00080000u; cpu->r[2] = v;
        }
    }
L_000b3424:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
        }
    }
L_000b3428:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b342c:;
    {
        cpu->r[14] = 0x000b3430u; fn_00173e08(cpu);
    }
L_000b3430:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000b3434:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b3438:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b343c:;
    {
        cpu->r[14] = 0x000b3440u; fn_00173e84(cpu);
    }
L_000b3440:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b3444:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_000b3448:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x54u);
    }
L_000b344c:;
    {
        *vfp_s(cpu, 24) = *(float*)G(cpu->r[4] + + 0x58u);
    }
L_000b3450:;
    {
        *vfp_s(cpu, 21) = *(float*)G(cpu->r[4] + + 0x5cu);
    }
L_000b3454:;
    {
        cpu->r[5] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_000b3458:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_000b345c:;
    {
        *vfp_s(cpu,21) = (float)*(int32_t*)vfp_s(cpu,21);
    }
L_000b3460:;
    {
        *(uint32_t*)vfp_s(cpu,20) = cpu->r[2];
    }
L_000b3464:;
    {
        uint32_t v = cpu->r[5] & 0x00000008u; cpu->r[6] = v;
        set_nz(cpu, v);
    }
L_000b3468:;
    {
        *vfp_s(cpu,20) = (float)*(int32_t*)vfp_s(cpu,20);
    }
L_000b346c:;
    {
        *vfp_s(cpu,24) = (float)*(int32_t*)vfp_s(cpu,24);
    }
L_000b3470:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x54u);
    }
L_000b3474:;
    {
        *vfp_s(cpu, 25) = *(float*)G(cpu->r[0] + + 0x58u);
    }
L_000b3478:;
    {
        *vfp_s(cpu, 23) = *(float*)G(cpu->r[0] + + 0x5cu);
    }
L_000b347c:;
    {
        *vfp_s(cpu,25) = (float)*(int32_t*)vfp_s(cpu,25);
    }
L_000b3480:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_000b3484:;
    {
        *(uint32_t*)vfp_s(cpu,22) = cpu->r[3];
    }
L_000b3488:;
    {
        *vfp_s(cpu,23) = (float)*(int32_t*)vfp_s(cpu,23);
    }
L_000b348c:;
    {
        *vfp_s(cpu,22) = (float)*(int32_t*)vfp_s(cpu,22);
    }
L_000b3490:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b3500;
        }
    }
L_000b3494:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000b3498:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x000b34a0u + + 0xb0u);
    }
L_000b349c:;
    {
        *vfp_s(cpu, 30) = *(float*)G(0x000b34a4u + + 0x90u);
    }
L_000b34a0:;
    {
        *vfp_s(cpu, 26) = *(float*)G(0x000b34a8u + + 0xa0u);
    }
L_000b34a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000b34a8:;
    {
        *vfp_s(cpu, 27) = *(float*)G(0x000b34b0u + + 0x9cu);
    }
L_000b34ac:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_000b34b0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000b34b8u + + 0xbcu);
    }
L_000b34b4:;
    {
        { uint32_t v = cpu->r[5] & 0x00040000u; set_nz(cpu, v); }
    }
L_000b34b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b34d8;
        }
    }
L_000b34bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b34c0:;
    {
        { uint32_t v = cpu->r[5] & 0x00000020u; set_nz(cpu, v); }
    }
L_000b34c4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x1c4u);
    }
L_000b34c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b42a8;
        }
    }
L_000b34cc:;
    {
        cpu->r[2] = rd32(cpu->r[9] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000b34d0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000b34d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b42d8;
        }
    }
L_000b34d8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000b34dc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_000b34e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b3578;
        }
    }
L_000b34e4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b34e8:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000b34ec:;
    {
        cpu->r[5] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000b34f0:;
    {
        goto L_000b34b4;
    }
L_000b34f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b34f8:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000b34fc:;
    {
        cpu->r[5] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000b3500:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b3504:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000b3508:;
    {
        uint32_t v = cpu->r[5] & ~ 0x000c0000u; cpu->r[5] = v;
    }
L_000b350c:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[5]);
    }
L_000b3510:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000234u, 0, 0);
    }
L_000b3514:;
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
L_000b3518:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b351cu)) return;
    }
L_000b351c:;
    {
        cpu->r[2] = 0x00008cc0u;
    }
L_000b3520:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_000b3524:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000b3528:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000b352c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000b3530:;
    {
        goto L_000b33e8;
    }
L_000b3578:;
    {
        { uint32_t v = cpu->r[5] & 0x02000000u; set_nz(cpu, v); }
    }
L_000b357c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b3928;
        }
    }
L_000b3580:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_000b3584:;
    {
        *vfp_s(cpu, 31) = *(float*)G(0x000b358cu + - 0x48u);
    }
L_000b3588:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000b358c:;
    {
        *vfp_s(cpu, 26) = *(float*)G(0x000b3594u + - 0x4cu);
    }
L_000b3590:;
    {
        *vfp_s(cpu, 29) = *(float*)G(0x000b3598u + - 0x4cu);
    }
L_000b3594:;
    {
        *vfp_s(cpu, 30) = *(float*)G(0x000b359cu + - 0x4cu);
    }
L_000b3598:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000b35a0u + - 0x2cu);
    }
L_000b359c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b35a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x354u);
    }
L_000b35a4:;
    {
        vfp_vdiv(cpu, 15, 15, 31);
    }
L_000b35a8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b35ac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b35b0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000b35b4:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_000b35b8:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000b35bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b35c0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b35c4:;
    {
        vfp_vadd(cpu, 15, 15, 26);
    }
L_000b35c8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000b35cc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b35d0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000b35d4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000b35d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b35e8;
        }
    }
L_000b35dc:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000b35e0:;
    {
        cpu->r[14] = 0x000b35e4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000b35e4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_000b35e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b35ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b35f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b3914;
        }
    }
L_000b35f4:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_000b35f8:;
    {
        cpu->r[12] = 0x00001c54u;
    }
L_000b35fc:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000b3600:;
    {
        *vfp_s(cpu, 27) = *(float*)G(0x000b3608u + - 0xb4u);
    }
L_000b3604:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000b3608:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x000b3610u + - 0xb8u);
    }
L_000b360c:;
    {
        *vfp_s(cpu, 28) = *(float*)G(0x000b3614u + - 0xb8u);
    }
L_000b3610:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000b3618u + - 0xb8u);
    }
L_000b3614:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000b3618:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b361c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b3620:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000b3624:;
    {
        cpu->r[14] = 0x000b3628u; fn_0015b880(cpu);
    }
L_000b3628:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b362c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b38f0;
        }
    }
L_000b3630:;
    {
        cpu->r[1] = 0x000001f4u;
    }
L_000b3634:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b3638:;
    {
        cpu->r[14] = 0x000b363cu; fn_000964c8(cpu);
    }
L_000b363c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x000001b8u, 0, 0);
    }
L_000b3640:;
    {
        cpu->r[1] = 0x000001f4u;
    }
L_000b3644:;
    {
        cpu->r[2] = 0x000001feu;
    }
L_000b3648:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000b364c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000224u, 0, 0);
    }
L_000b3650:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_000b3654:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000b3658:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b365c:;
    {
        cpu->r[14] = 0x000b3660u; fn_0015b7b8(cpu);
    }
L_000b3660:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b3664:;
    {
        wr32(cpu->r[13] + + 0x1f8u, cpu->r[10]);
    }
L_000b3668:;
    {
        cpu->r[14] = 0x000b366cu; fn_001535e0(cpu);
    }
L_000b366c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000b3670:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000b3674:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000b3678:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000b367c:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x17cu);
    }
L_000b3680:;
    {
        cpu->r[14] = 0x000b3684u; fn_0013c510(cpu);
    }
L_000b3684:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b3688:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000b368c:;
    {
        cpu->r[14] = 0x000b3690u; fn_001534f0(cpu);
    }
L_000b3690:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b3694:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000b3698:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x224u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b369c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x228u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b36a0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x8u);
    }
L_000b36a4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x22cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b36a8:;
    {
        cpu->r[14] = 0x000b36acu; fn_0015365c(cpu);
    }
L_000b36ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000b36b0:;
    {
        cpu->r[1] = 0x00000028u;
    }
L_000b36b4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000b36b8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b36bc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], 0x00000040u, 0, 0);
    }
L_000b36c0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b36c4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b36c8:;
    {
        cpu->r[14] = 0x000b36ccu; fn_000964c8(cpu);
    }
L_000b36cc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000b36d0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000b36d4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000b36d8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000b36dc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b36e0:;
    {
        cpu->r[14] = 0x000b36e4u; fn_000964c8(cpu);
    }
L_000b36e4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000b36e8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000b36ec:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000b36f0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000b36f4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b36f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000b36fc:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3700:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000b3704:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3708:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_000b370c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_000b3710:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000b3714:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000b3718:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b371c:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3720:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_000b3724:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b36f8;
        }
    }
L_000b3728:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b372c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b3730:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000b3734:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000b3738:;
    {
        cpu->r[14] = 0x000b373cu; fn_0015364c(cpu);
    }
L_000b373c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b3740:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000020cu, 0, 0);
    }
L_000b3744:;
    {
        cpu->r[14] = 0x000b3748u; fn_00153c38(cpu);
    }
L_000b3748:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_000b374c:;
    {
        cpu->r[0] = (~0x00000013u);
    }
L_000b3750:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[13] + + 0x22cu);
    }
L_000b3754:;
    {
        cpu->r[14] = 0x000b3758u; fn_000964c8(cpu);
    }
L_000b3758:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x228u);
    }
L_000b375c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x20cu);
    }
L_000b3760:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x224u);
    }
L_000b3764:;
    {
        vfp_vadd(cpu, 14, 14, 15);
    }
L_000b3768:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x210u);
    }
L_000b376c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000b3770:;
    {
        vfp_vadd(cpu, 15, 13, 15);
    }
L_000b3774:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x224u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b3778:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x228u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b377c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000b3780:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000b3784:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b3788:;
    {
        vfp_vadd(cpu, 19, 19, 15);
    }
L_000b378c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x214u);
    }
L_000b3790:;
    {
        vfp_vadd(cpu, 19, 19, 15);
    }
L_000b3794:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x22cu) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000b3798:;
    {
        cpu->r[14] = 0x000b379cu; fn_0015b52c(cpu);
    }
L_000b379c:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,27);
    }
L_000b37a0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b37a4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x218u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b37a8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x21cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b37ac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x220u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b37b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x354u);
    }
L_000b37b4:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,29);
    }
L_000b37b8:;
    {
        vfp_vmla(cpu, 14, 15, 30);
    }
L_000b37bc:;
    {
        vfp_vnmls(cpu, 13, 15, 26);
    }
L_000b37c0:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_000b37c4:;
    {
        vfp_vneg(cpu, 15, 13);
    }
L_000b37c8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000b37cc:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b37d0:;
    {
        cpu->r[14] = 0x000b37d4u; fn_00096514(cpu);
    }
L_000b37d4:;
    {
        cpu->r[1] = 0x00000032u;
    }
L_000b37d8:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000b37dc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b37e0:;
    {
        cpu->r[14] = 0x000b37e4u; fn_000964c8(cpu);
    }
L_000b37e4:;
    {
        wr32(cpu->r[13] + + 0x21cu, cpu->r[10]);
    }
L_000b37e8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x218u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b37ec:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000b37f0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000b37f4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x220u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b37f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_000b37fc:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3800:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_000b3804:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3808:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_000b380c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_000b3810:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_000b3814:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_000b3818:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b381c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3820:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_000b3824:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b37f8;
        }
    }
L_000b3828:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b382c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000218u, 0, 0);
    }
L_000b3830:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000b3834:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000b3838:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b383c:;
    {
        cpu->r[14] = 0x000b3840u; fn_0015364c(cpu);
    }
L_000b3840:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000b3844:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b3848:;
    {
        cpu->r[14] = 0x000b384cu; fn_00153c38(cpu);
    }
L_000b384c:;
    {
        vfp_vsub(cpu, 15, 20, 22);
    }
L_000b3850:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x224u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000b3854:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x228u) = *(uint32_t*)vfp_s(cpu, 28);
    }
L_000b3858:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x22cu) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000b385c:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_000b3860:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000034u, 0, 0);
    }
L_000b3864:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000b3868:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b386c:;
    {
        vfp_vsub(cpu, 14, 21, 23);
    }
L_000b3870:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x218u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3874:;
    {
        vfp_vsub(cpu, 15, 24, 25);
    }
L_000b3878:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x21cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b387c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x220u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3880:;
    {
        cpu->r[14] = 0x000b3884u; fn_00155f80(cpu);
    }
L_000b3884:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x218u);
    }
L_000b3888:;
    {
        vfp_vmul(cpu, 15, 15, 17);
    }
L_000b388c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x21cu);
    }
L_000b3890:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x1f8u);
    }
L_000b3894:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000040u, 0, 0);
    }
L_000b3898:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b389c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x218u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b38a0:;
    {
        vfp_vmul(cpu, 14, 14, 17);
    }
L_000b38a4:;
    {
        *(uint32_t*)G(cpu->r[8] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b38a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x220u);
    }
L_000b38ac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x224u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b38b0:;
    {
        vfp_vmul(cpu, 15, 15, 17);
    }
L_000b38b4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x21cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b38b8:;
    {
        *(uint32_t*)G(cpu->r[8] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b38bc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x228u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b38c0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x220u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b38c4:;
    {
        *(uint32_t*)G(cpu->r[8] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b38c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x22cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b38cc:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_000b38d0:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000b38d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b38f0;
        }
    }
L_000b38d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b38dc:;
    {
        cpu->r[14] = 0x000b38e0u; fn_000b2bc8(cpu);
    }
L_000b38e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b38e4:;
    {
        cpu->r[14] = 0x000b38e8u; fn_0018ba20(cpu);
    }
L_000b38e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b38ec:;
    {
        wr32(cpu->r[13] + + 0x1f8u, cpu->r[3]);
    }
L_000b38f0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b38f4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_000b38f8:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 1);
    }
L_000b38fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b3914;
        }
    }
L_000b3900:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b3904:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b3908:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000b390c:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_000b3910:;
    {
        goto L_000b3614;
    }
L_000b3914:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000b3918:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000b391c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_000b3920:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000000cu, 1, 1);
    }
L_000b3924:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b359c;
        }
    }
L_000b3928:;
    {
        cpu->r[11] = 0x0000000cu;
    }
L_000b392c:;
    {
        *vfp_s(cpu, 31) = *(float*)G(0x000b3934u + - 0x3d0u);
    }
L_000b3930:;
    {
        *vfp_s(cpu, 24) = *(float*)G(0x000b3938u + - 0x3d0u);
    }
L_000b3934:;
    {
        *vfp_s(cpu, 26) = *(float*)G(0x000b393cu + - 0x3ccu);
    }
L_000b3938:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000b3940u + - 0x3ccu);
    }
L_000b393c:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x000b3944u + - 0x3d8u);
    }
L_000b3940:;
    {
        goto L_000b3950;
    }
L_000b3944:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_000b3948:;
    {
        sub_flags(cpu, cpu->r[11], 0x0000000eu, 1, 1);
    }
L_000b394c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b34f4;
        }
    }
L_000b3950:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b3954:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000b3958:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000b395c:;
    {
        uint32_t v = cpu->r[3] & 0x000c0000u; cpu->r[3] = v;
    }
L_000b3960:;
    {
        sub_flags(cpu, cpu->r[3], 0x00080000u, 1, 1);
    }
L_000b3964:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b3944;
        }
    }
L_000b3968:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000b396c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x490u);
    }
L_000b3970:;
    {
        cpu->r[14] = 0x000b3974u; fn_00173ea0(cpu);
    }
L_000b3974:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b3978:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b3fd4;
        }
    }
L_000b397c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b3980:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x354u);
    }
L_000b3984:;
    {
        vfp_vdiv(cpu, 15, 15, 31);
    }
L_000b3988:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b398c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b3990:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000b3994:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_000b3998:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000b399c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b39a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b39a4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000b39a8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b39ac:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[6] = v;
    }
L_000b39b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b39c0;
        }
    }
L_000b39b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b39b8:;
    {
        cpu->r[14] = 0x000b39bcu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000b39bc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b39c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b39c4:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x490u);
    }
L_000b39c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b39cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b45d0;
        }
    }
L_000b39d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b39d4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x194u);
    }
L_000b39d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000027u, 1, 1);
    }
L_000b39dc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000b42b8;
        }
    }
L_000b39e0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000b39e4:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_000b39e8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b39ec:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000b39f0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000b39f4:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
        }
    }
L_000b39f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b3a20;
        }
    }
L_000b39fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b3a00:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[5] = v;
    }
L_000b3a04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000b3a08:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000b3a0c:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000b3a10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000b3a14:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000b3a18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b3a0c;
        }
    }
L_000b3a1c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000b3a20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b3a24:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b3a5c;
        }
    }
L_000b3a28:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b3a2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000b3a30:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[5] = v;
    }
L_000b3a34:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000b3a38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000b3a3c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b3a40:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000b3a44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000b3a48:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000b3a4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b3a40;
        }
    }
L_000b3a50:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b3a54:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_000b3a58:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000b3a5c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b3a60:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b3a98;
        }
    }
L_000b3a64:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b3a68:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000b3a6c:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000b3a70:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000b3a74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000b3a78:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b3a7c:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000b3a80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000b3a84:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000b3a88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b3a7c;
        }
    }
L_000b3a8c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b3a90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_000b3a94:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_000b3a98:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000b3a9c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b3ad4;
        }
    }
L_000b3aa0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b3aa4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000b3aa8:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000b3aac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b3ab0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000b3ab4:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000b3ab8:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000b3abc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000b3ac0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000b3ac4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b3ab8;
        }
    }
L_000b3ac8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b3acc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_000b3ad0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000b3ad4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b3ad8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b3adc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b3944;
        }
    }
L_000b3ae0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b3ae4:;
    {
        cpu->r[3] = 0x00001c54u;
    }
L_000b3ae8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b3aec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b3af0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[11]);
    }
L_000b3af4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000b3af8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000b3afc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x000001b8u, 0, 0);
    }
L_000b3b00:;
    {
        cpu->r[10] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000b3b04:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_000b3b08:;
    {
        *vfp_s(cpu, 25) = *(float*)G(0x000b3b10u + + 0x318u);
    }
L_000b3b0c:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_000b3b10:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000b3b14:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000b3b18:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_000b3b1c:;
    {
        cpu->r[14] = 0x000b3b20u; fn_0015b880(cpu);
    }
L_000b3b20:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b3b24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b3d1c;
        }
    }
L_000b3b28:;
    {
        cpu->r[3] = rd32(cpu->r[9] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000b3b2c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b3b30:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b3b34:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b3b38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000b3b3c:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_000b3f24;
        case 1: goto L_000b3e44;
        case 2: goto L_000b3d34;
        case 3: goto L_000b3b54;
        default: guest_unimplemented(cpu, 0x000b3b3cu); return; }
        }
    }
L_000b3b40:;
    {
        goto L_000b3fcc;
    }
L_000b3b54:;
    {
        cpu->r[1] = 0x000000c8u;
    }
L_000b3b58:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b3b5c:;
    {
        cpu->r[14] = 0x000b3b60u; fn_000964c8(cpu);
    }
L_000b3b60:;
    {
        cpu->r[2] = 0x000001ffu;
    }
L_000b3b64:;
    {
        cpu->r[1] = 0x0000012cu;
    }
L_000b3b68:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000020cu, 0, 0);
    }
L_000b3b6c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000b3b70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b3b74:;
    {
        cpu->r[14] = 0x000b3b78u; fn_0015b7b8(cpu);
    }
L_000b3b78:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_000b3b7c:;
    {
        cpu->r[0] = (~0x00000013u);
    }
L_000b3b80:;
    {
        cpu->r[14] = 0x000b3b84u; fn_000964c8(cpu);
    }
L_000b3b84:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_000b3b88:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000b3b8c:;
    {
        cpu->r[0] = (~0x00000013u);
    }
L_000b3b90:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000b3b94:;
    {
        cpu->r[14] = 0x000b3b98u; fn_000964c8(cpu);
    }
L_000b3b98:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_000b3b9c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000b3ba0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b3ba4:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000b3ba8:;
    {
        cpu->r[14] = 0x000b3bacu; fn_000964c8(cpu);
    }
L_000b3bac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000b3bb0:;
    {
        cpu->r[1] = 0x0000001eu;
    }
L_000b3bb4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000b3bb8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b3bbc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b3bc0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000b3bc4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000b3bc8:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_000b3bcc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3bd0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3bd4:;
    {
        cpu->r[14] = 0x000b3bd8u; fn_000964c8(cpu);
    }
L_000b3bd8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 26);
    }
L_000b3bdc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000034u, 0, 0);
    }
L_000b3be0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000040u, 0, 0);
    }
L_000b3be4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000b3be8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000b3bec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3bf0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3bf4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3bf8:;
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
L_000b3bfc:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000b3c00:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b3c04:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b3c08:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 25);
    }
L_000b3c0c:;
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
L_000b3c10:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000b3c14:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b3c18:;
    {
        cpu->r[1] = 0x3f800000u;
    }
L_000b3c1c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0xbf80u << 16);
    }
L_000b3c20:;
    {
        cpu->r[14] = 0x000b3c24u; fn_00096514(cpu);
    }
L_000b3c24:;
    {
        cpu->r[1] = 0x3f800000u;
    }
L_000b3c28:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000b3c2c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b3c30:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0xbf80u << 16);
    }
L_000b3c34:;
    {
        cpu->r[14] = 0x000b3c38u; fn_00096514(cpu);
    }
L_000b3c38:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[8]);
    }
L_000b3c3c:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[0]);
    }
L_000b3c40:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b3c44:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000b3c48:;
    {
        wr32(cpu->r[13] + + 0x1f8u, cpu->r[8]);
    }
L_000b3c4c:;
    {
        cpu->r[14] = 0x000b3c50u; fn_001535e0(cpu);
    }
L_000b3c50:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000b3c54:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000b3c58:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000b3c5c:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x17cu);
    }
L_000b3c60:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b3c64:;
    {
        cpu->r[14] = 0x000b3c68u; fn_0013c510(cpu);
    }
L_000b3c68:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b3c6c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000b3c70:;
    {
        cpu->r[14] = 0x000b3c74u; fn_001534f0(cpu);
    }
L_000b3c74:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000b3c78:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b3c7c:;
    {
        cpu->r[14] = 0x000b3c80u; fn_0015365c(cpu);
    }
L_000b3c80:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_000b3c84:;
    {
        cpu->r[0] = (~0x00000013u);
    }
L_000b3c88:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x214u);
    }
L_000b3c8c:;
    {
        cpu->r[14] = 0x000b3c90u; fn_000964c8(cpu);
    }
L_000b3c90:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000b3c94:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000b3c98:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000b3c9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b3ca0:;
    {
        vfp_vadd(cpu, 16, 16, 15);
    }
L_000b3ca4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b3ca8:;
    {
        cpu->r[14] = 0x000b3cacu; fn_0015b52c(cpu);
    }
L_000b3cac:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_000b3cb0:;
    {
        cpu->r[0] = (~0x00000004u);
    }
L_000b3cb4:;
    {
        cpu->r[14] = 0x000b3cb8u; fn_000964c8(cpu);
    }
L_000b3cb8:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_000b3cbc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b3cc0:;
    {
        cpu->r[0] = (~0x00000004u);
    }
L_000b3cc4:;
    {
        cpu->r[14] = 0x000b3cc8u; fn_000964c8(cpu);
    }
L_000b3cc8:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_000b3ccc:;
    {
        cpu->r[5] = sub_flags(cpu, 0x00000000u, cpu->r[5], 1, 0);
    }
L_000b3cd0:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_000b3cd4:;
    {
        cpu->r[0] = (~0x00000004u);
    }
L_000b3cd8:;
    {
        cpu->r[14] = 0x000b3cdcu; fn_000964c8(cpu);
    }
L_000b3cdc:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[5];
    }
L_000b3ce0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000b3ce4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x1f8u);
    }
L_000b3ce8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_000b3cec:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000b3cf0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3cf4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b3cf8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000b3cfc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000b3d00:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3d04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b3d1c;
        }
    }
L_000b3d08:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b3d0c:;
    {
        cpu->r[14] = 0x000b3d10u; fn_000b2bc8(cpu);
    }
L_000b3d10:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b3d14:;
    {
        cpu->r[14] = 0x000b3d18u; fn_0018ba20(cpu);
    }
L_000b3d18:;
    {
        wr32(cpu->r[13] + + 0x1f8u, cpu->r[8]);
    }
L_000b3d1c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b3d20:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000b3d24:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_000b3d28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b3b0c;
        }
    }
L_000b3d2c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b3d30:;
    {
        goto L_000b3944;
    }
L_000b3d34:;
    {
        cpu->r[1] = 0x000000c8u;
    }
L_000b3d38:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b3d3c:;
    {
        cpu->r[14] = 0x000b3d40u; fn_000964c8(cpu);
    }
L_000b3d40:;
    {
        cpu->r[2] = 0x00000201u;
    }
L_000b3d44:;
    {
        cpu->r[1] = 0x000003e8u;
    }
L_000b3d48:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000020cu, 0, 0);
    }
L_000b3d4c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000b3d50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b3d54:;
    {
        cpu->r[14] = 0x000b3d58u; fn_0015b7b8(cpu);
    }
L_000b3d58:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_000b3d5c:;
    {
        cpu->r[0] = (~0x00000013u);
    }
L_000b3d60:;
    {
        cpu->r[14] = 0x000b3d64u; fn_000964c8(cpu);
    }
L_000b3d64:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_000b3d68:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000b3d6c:;
    {
        cpu->r[0] = (~0x00000013u);
    }
L_000b3d70:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000b3d74:;
    {
        cpu->r[14] = 0x000b3d78u; fn_000964c8(cpu);
    }
L_000b3d78:;
    {
        cpu->r[1] = 0x0000001eu;
    }
L_000b3d7c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000b3d80:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b3d84:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000b3d88:;
    {
        cpu->r[14] = 0x000b3d8cu; fn_000964c8(cpu);
    }
L_000b3d8c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000b3d90:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000b3d94:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000b3d98:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b3d9c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b3da0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000b3da4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000b3da8:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_000b3dac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3db0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3db4:;
    {
        cpu->r[14] = 0x000b3db8u; fn_000964c8(cpu);
    }
L_000b3db8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000034u, 0, 0);
    }
L_000b3dbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000040u, 0, 0);
    }
L_000b3dc0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000b3dc4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000b3dc8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3dcc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3dd0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3dd4:;
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
L_000b3dd8:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000b3ddc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b3de0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b3de4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b3de8:;
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
L_000b3dec:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000b3df0:;
    {
        cpu->r[1] = 0x0000999au;
    }
L_000b3df4:;
    {
        cpu->r[0] = 0x0000999au;
    }
L_000b3df8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3e99u << 16);
    }
L_000b3dfc:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0xbe99u << 16);
    }
L_000b3e00:;
    {
        cpu->r[14] = 0x000b3e04u; fn_00096514(cpu);
    }
L_000b3e04:;
    {
        cpu->r[1] = 0x0000999au;
    }
L_000b3e08:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3e99u << 16);
    }
L_000b3e0c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000b3e10:;
    {
        cpu->r[0] = 0x0000999au;
    }
L_000b3e14:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0xbe99u << 16);
    }
L_000b3e18:;
    {
        cpu->r[14] = 0x000b3e1cu; fn_00096514(cpu);
    }
L_000b3e1c:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[8]);
    }
L_000b3e20:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[0]);
    }
L_000b3e24:;
    {
        goto L_000b3c40;
    }
L_000b3e44:;
    {
        cpu->r[1] = 0x000000c8u;
    }
L_000b3e48:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b3e4c:;
    {
        cpu->r[14] = 0x000b3e50u; fn_000964c8(cpu);
    }
L_000b3e50:;
    {
        cpu->r[2] = 0x00000200u;
    }
L_000b3e54:;
    {
        cpu->r[1] = 0x00000bb8u;
    }
L_000b3e58:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000020cu, 0, 0);
    }
L_000b3e5c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000b3e60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b3e64:;
    {
        cpu->r[14] = 0x000b3e68u; fn_0015b7b8(cpu);
    }
L_000b3e68:;
    {
        cpu->r[1] = 0x000000fau;
    }
L_000b3e6c:;
    {
        cpu->r[0] = (~0x000000f9u);
    }
L_000b3e70:;
    {
        cpu->r[14] = 0x000b3e74u; fn_000964c8(cpu);
    }
L_000b3e74:;
    {
        cpu->r[1] = 0x000000fau;
    }
L_000b3e78:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000b3e7c:;
    {
        cpu->r[0] = (~0x000000f9u);
    }
L_000b3e80:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000b3e84:;
    {
        cpu->r[14] = 0x000b3e88u; fn_000964c8(cpu);
    }
L_000b3e88:;
    {
        cpu->r[1] = 0x00000258u;
    }
L_000b3e8c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000b3e90:;
    {
        cpu->r[0] = 0x000000c8u;
    }
L_000b3e94:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000b3e98:;
    {
        cpu->r[14] = 0x000b3e9cu; fn_000964c8(cpu);
    }
L_000b3e9c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000b3ea0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000b3ea4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000b3ea8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b3eac:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b3eb0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000b3eb4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000b3eb8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b3ebc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3ec0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3ec4:;
    {
        cpu->r[14] = 0x000b3ec8u; fn_000964c8(cpu);
    }
L_000b3ec8:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000b3ecc:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_000b3ed0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b3ed4:;
    {
        cpu->r[14] = 0x000b3ed8u; fn_000964c8(cpu);
    }
L_000b3ed8:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000b3edc:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000b3ee0:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[0];
    }
L_000b3ee4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b3ee8:;
    {
        cpu->r[14] = 0x000b3eecu; fn_000964c8(cpu);
    }
L_000b3eec:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,18);
    }
L_000b3ef0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000034u, 0, 0);
    }
L_000b3ef4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000040u, 0, 0);
    }
L_000b3ef8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b3efc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000b3f00:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000b3f04:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000b3f08:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3f0c:;
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
L_000b3f10:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000b3f14:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b3f18:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b3f1c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000b3f20:;
    {
        goto L_000b3c0c;
    }
L_000b3f24:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_000b3f28:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b3f2c:;
    {
        cpu->r[14] = 0x000b3f30u; fn_000964c8(cpu);
    }
L_000b3f30:;
    {
        cpu->r[2] = 0x000001ffu;
    }
L_000b3f34:;
    {
        cpu->r[1] = 0x000003e8u;
    }
L_000b3f38:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000020cu, 0, 0);
    }
L_000b3f3c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000b3f40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b3f44:;
    {
        cpu->r[14] = 0x000b3f48u; fn_0015b7b8(cpu);
    }
L_000b3f48:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_000b3f4c:;
    {
        cpu->r[0] = (~0x00000063u);
    }
L_000b3f50:;
    {
        cpu->r[14] = 0x000b3f54u; fn_000964c8(cpu);
    }
L_000b3f54:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_000b3f58:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000b3f5c:;
    {
        cpu->r[0] = (~0x00000063u);
    }
L_000b3f60:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000b3f64:;
    {
        cpu->r[14] = 0x000b3f68u; fn_000964c8(cpu);
    }
L_000b3f68:;
    {
        cpu->r[1] = 0x000000c8u;
    }
L_000b3f6c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000b3f70:;
    {
        cpu->r[0] = 0x00000032u;
    }
L_000b3f74:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000b3f78:;
    {
        cpu->r[14] = 0x000b3f7cu; fn_000964c8(cpu);
    }
L_000b3f7c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000b3f80:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000b3f84:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000b3f88:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b3f8c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b3f90:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000b3f94:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000b3f98:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000b3f9c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3fa0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3fa4:;
    {
        cpu->r[14] = 0x000b3fa8u; fn_000964c8(cpu);
    }
L_000b3fa8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 24);
    }
L_000b3fac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000034u, 0, 0);
    }
L_000b3fb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000040u, 0, 0);
    }
L_000b3fb4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000b3fb8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000b3fbc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3fc0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3fc4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b3fc8:;
    {
        goto L_000b3f0c;
    }
L_000b3fcc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000020cu, 0, 0);
    }
L_000b3fd0:;
    {
        goto L_000b3c40;
    }
L_000b3fd4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b3fd8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b3fe0u + - 0x1acu);
    }
L_000b3fdc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x354u);
    }
L_000b3fe0:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_000b3fe4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b3fecu + - 0x1c0u);
    }
L_000b3fe8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b3fec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b3ff0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000b3ff4:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_000b3ff8:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000b3ffc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b4000:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b4004:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000b4008:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000b400c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b4010:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[9] = v;
    }
L_000b4014:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4024;
        }
    }
L_000b4018:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000b401c:;
    {
        cpu->r[14] = 0x000b4020u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000b4020:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000b4024:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000b4028:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b3944;
        }
    }
L_000b402c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
    }
L_000b4030:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000b4034:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x000001b8u, 0, 0);
    }
L_000b4038:;
    {
        cpu->r[3] = 0x00001c54u;
    }
L_000b403c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b4040:;
    {
        *vfp_s(cpu, 25) = *(float*)G(0x000b4048u + - 0x21cu);
    }
L_000b4044:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000b4048:;
    {
        *vfp_s(cpu, 27) = *(float*)G(0x000b4050u + - 0x220u);
    }
L_000b404c:;
    {
        *vfp_s(cpu, 28) = *(float*)G(0x000b4054u + - 0x220u);
    }
L_000b4050:;
    {
        *vfp_s(cpu, 29) = *(float*)G(0x000b4058u + - 0x220u);
    }
L_000b4054:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000b405cu + - 0x220u);
    }
L_000b4058:;
    {
        *vfp_s(cpu, 30) = *(float*)G(0x000b4060u + - 0x220u);
    }
L_000b405c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[11]);
    }
L_000b4060:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000b4064:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b4068:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b406c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000b4070:;
    {
        cpu->r[14] = 0x000b4074u; fn_0015b880(cpu);
    }
L_000b4074:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b4078:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4288;
        }
    }
L_000b407c:;
    {
        cpu->r[1] = 0x000001f4u;
    }
L_000b4080:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b4084:;
    {
        cpu->r[14] = 0x000b4088u; fn_000964c8(cpu);
    }
L_000b4088:;
    {
        cpu->r[1] = 0x000001f4u;
    }
L_000b408c:;
    {
        cpu->r[2] = 0x000001feu;
    }
L_000b4090:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000b4094:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000218u, 0, 0);
    }
L_000b4098:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000b409c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b40a0:;
    {
        cpu->r[14] = 0x000b40a4u; fn_0015b7b8(cpu);
    }
L_000b40a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b40a8:;
    {
        wr32(cpu->r[13] + + 0x1f8u, cpu->r[7]);
    }
L_000b40ac:;
    {
        cpu->r[14] = 0x000b40b0u; fn_001535e0(cpu);
    }
L_000b40b0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000b40b4:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000b40b8:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x17cu);
    }
L_000b40bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b40c0:;
    {
        cpu->r[14] = 0x000b40c4u; fn_0013c510(cpu);
    }
L_000b40c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b40c8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000b40cc:;
    {
        cpu->r[14] = 0x000b40d0u; fn_001534f0(cpu);
    }
L_000b40d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b40d4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000b40d8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x218u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b40dc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x21cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b40e0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x220u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b40e4:;
    {
        cpu->r[14] = 0x000b40e8u; fn_0015365c(cpu);
    }
L_000b40e8:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_000b40ec:;
    {
        cpu->r[0] = (~0x00000013u);
    }
L_000b40f0:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[13] + + 0x220u);
    }
L_000b40f4:;
    {
        cpu->r[14] = 0x000b40f8u; fn_000964c8(cpu);
    }
L_000b40f8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000b40fc:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000b4100:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000b4104:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b4108:;
    {
        vfp_vadd(cpu, 18, 18, 15);
    }
L_000b410c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x220u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000b4110:;
    {
        cpu->r[14] = 0x000b4114u; fn_0015b52c(cpu);
    }
L_000b4114:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,29);
    }
L_000b4118:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b411c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b4120:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b4124:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b4128:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x354u);
    }
L_000b412c:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,27);
    }
L_000b4130:;
    {
        vfp_vmla(cpu, 14, 15, 28);
    }
L_000b4134:;
    {
        vfp_vnmls(cpu, 13, 15, 25);
    }
L_000b4138:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_000b413c:;
    {
        vfp_vneg(cpu, 15, 13);
    }
L_000b4140:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000b4144:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b4148:;
    {
        cpu->r[14] = 0x000b414cu; fn_00096514(cpu);
    }
L_000b414c:;
    {
        cpu->r[1] = 0x00000032u;
    }
L_000b4150:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000b4154:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b4158:;
    {
        cpu->r[14] = 0x000b415cu; fn_000964c8(cpu);
    }
L_000b415c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000b4160:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000b4164:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000040u, 0, 0);
    }
L_000b4168:;
    {
        wr32(cpu->r[13] + + 0x210u, cpu->r[11]);
    }
L_000b416c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b4170:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000b4174:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000b4178:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b417c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_000b4180:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b4184:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_000b4188:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b418c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_000b4190:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_000b4194:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000b4198:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000b419c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b41a0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b41a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_000b41a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b417c;
        }
    }
L_000b41ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b41b0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000020cu, 0, 0);
    }
L_000b41b4:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000b41b8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000b41bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b41c0:;
    {
        cpu->r[14] = 0x000b41c4u; fn_0015364c(cpu);
    }
L_000b41c4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000b41c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b41cc:;
    {
        cpu->r[14] = 0x000b41d0u; fn_00153c38(cpu);
    }
L_000b41d0:;
    {
        vfp_vsub(cpu, 14, 20, 22);
    }
L_000b41d4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x218u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b41d8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x21cu) = *(uint32_t*)vfp_s(cpu, 30);
    }
L_000b41dc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x220u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b41e0:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_000b41e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000034u, 0, 0);
    }
L_000b41e8:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000b41ec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b41f0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b41f4:;
    {
        vfp_vsub(cpu, 15, 21, 23);
    }
L_000b41f8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b41fc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b4200:;
    {
        cpu->r[14] = 0x000b4204u; fn_00155f80(cpu);
    }
L_000b4204:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b4208:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b420c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4348u << 16);
    }
L_000b4210:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x4248u << 16);
    }
L_000b4214:;
    {
        cpu->r[14] = 0x000b4218u; fn_00096514(cpu);
    }
L_000b4218:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x20cu);
    }
L_000b421c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x1f8u);
    }
L_000b4220:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000040u, 0, 0);
    }
L_000b4224:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000b4228:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000b422c:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_000b4230:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x214u);
    }
L_000b4234:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000b4238:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_000b423c:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000b4240:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x210u);
    }
L_000b4244:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x218u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b4248:;
    {
        vfp_vmul(cpu, 15, 15, 13);
    }
L_000b424c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b4250:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b4254:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x220u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b4258:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b425c:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b4260:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x21cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b4264:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_000b4268:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000b426c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4288;
        }
    }
L_000b4270:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b4274:;
    {
        cpu->r[14] = 0x000b4278u; fn_000b2bc8(cpu);
    }
L_000b4278:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b427c:;
    {
        cpu->r[14] = 0x000b4280u; fn_0018ba20(cpu);
    }
L_000b4280:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4284:;
    {
        wr32(cpu->r[13] + + 0x1f8u, cpu->r[3]);
    }
L_000b4288:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000b428c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 1);
    }
L_000b4290:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b3d2c;
        }
    }
L_000b4294:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b4298:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b429c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000b42a0:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_000b42a4:;
    {
        goto L_000b4060;
    }
L_000b42a8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000b42ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000b42b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_000b42b4:;
    {
        goto L_000b34cc;
    }
L_000b42b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000063u, 1, 1);
    }
L_000b42bc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000b459c;
        }
    }
L_000b42c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 3, 31u, &shc), 0, 0);
    }
L_000b42c4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000b42c8:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[6] = v;
    }
L_000b42cc:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_000b42d0:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_000b42d4:;
    {
        goto L_000b39ec;
    }
L_000b42d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b42dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x354u);
    }
L_000b42e0:;
    {
        vfp_vdiv(cpu, 15, 15, 19);
    }
L_000b42e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b42e8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b42ec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000b42f0:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_000b42f4:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000b42f8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b42fc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b4300:;
    {
        vfp_vadd(cpu, 15, 15, 30);
    }
L_000b4304:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000b4308:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b430c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000b4310:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000b4314:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b45c0;
        }
    }
L_000b4318:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b431c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b4320:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b34d8;
        }
    }
L_000b4324:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[9]);
    }
L_000b4328:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000b432c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
    }
L_000b4330:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x000001b8u, 0, 0);
    }
L_000b4334:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b4338:;
    {
        cpu->r[12] = 0x00001c54u;
    }
L_000b433c:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000b4340:;
    {
        *vfp_s(cpu, 28) = *(float*)G(0x000b4348u + + 0x29cu);
    }
L_000b4344:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000b4348:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000b4350u + + 0x298u);
    }
L_000b434c:;
    {
        *vfp_s(cpu, 29) = *(float*)G(0x000b4354u + + 0x298u);
    }
L_000b4350:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[6]);
    }
L_000b4354:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000b4358:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b435c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b4360:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000b4364:;
    {
        cpu->r[14] = 0x000b4368u; fn_0015b880(cpu);
    }
L_000b4368:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b436c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4560;
        }
    }
L_000b4370:;
    {
        cpu->r[1] = 0x000001f4u;
    }
L_000b4374:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b4378:;
    {
        cpu->r[14] = 0x000b437cu; fn_000964c8(cpu);
    }
L_000b437c:;
    {
        cpu->r[1] = 0x000001f4u;
    }
L_000b4380:;
    {
        cpu->r[2] = 0x000001feu;
    }
L_000b4384:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000b4388:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x0000020cu, 0, 0);
    }
L_000b438c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000b4390:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b4394:;
    {
        cpu->r[14] = 0x000b4398u; fn_0015b7b8(cpu);
    }
L_000b4398:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b439c:;
    {
        wr32(cpu->r[13] + + 0x1f8u, cpu->r[6]);
    }
L_000b43a0:;
    {
        cpu->r[14] = 0x000b43a4u; fn_001535e0(cpu);
    }
L_000b43a4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000b43a8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000b43ac:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000b43b0:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x17cu);
    }
L_000b43b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_000b43b8:;
    {
        cpu->r[14] = 0x000b43bcu; fn_0013c510(cpu);
    }
L_000b43bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b43c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000b43c4:;
    {
        cpu->r[14] = 0x000b43c8u; fn_001534f0(cpu);
    }
L_000b43c8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b43cc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000b43d0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b43d4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b43d8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b43dc:;
    {
        cpu->r[14] = 0x000b43e0u; fn_0015365c(cpu);
    }
L_000b43e0:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_000b43e4:;
    {
        cpu->r[0] = (~0x00000013u);
    }
L_000b43e8:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[13] + + 0x214u);
    }
L_000b43ec:;
    {
        cpu->r[14] = 0x000b43f0u; fn_000964c8(cpu);
    }
L_000b43f0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000b43f4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000b43f8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000b43fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b4400:;
    {
        vfp_vadd(cpu, 18, 18, 15);
    }
L_000b4404:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000b4408:;
    {
        cpu->r[14] = 0x000b440cu; fn_0015b52c(cpu);
    }
L_000b440c:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,28);
    }
L_000b4410:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x224u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b4414:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x228u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b4418:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x22cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b441c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[9] + + 0x354u);
    }
L_000b4420:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,27);
    }
L_000b4424:;
    {
        vfp_vmla(cpu, 14, 15, 19);
    }
L_000b4428:;
    {
        vfp_vnmls(cpu, 13, 15, 26);
    }
L_000b442c:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_000b4430:;
    {
        vfp_vneg(cpu, 15, 13);
    }
L_000b4434:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000b4438:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b443c:;
    {
        cpu->r[14] = 0x000b4440u; fn_00096514(cpu);
    }
L_000b4440:;
    {
        cpu->r[1] = 0x00000032u;
    }
L_000b4444:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000b4448:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b444c:;
    {
        cpu->r[14] = 0x000b4450u; fn_000964c8(cpu);
    }
L_000b4450:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000b4454:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000b4458:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000040u, 0, 0);
    }
L_000b445c:;
    {
        wr32(cpu->r[13] + + 0x228u, cpu->r[11]);
    }
L_000b4460:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x224u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b4464:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000b4468:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000b446c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x22cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b4470:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_000b4474:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b4478:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_000b447c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b4480:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_000b4484:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_000b4488:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000b448c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000b4490:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b4494:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b4498:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_000b449c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b4470;
        }
    }
L_000b44a0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b44a4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b44a8:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000b44ac:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000b44b0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000224u, 0, 0);
    }
L_000b44b4:;
    {
        cpu->r[14] = 0x000b44b8u; fn_0015364c(cpu);
    }
L_000b44b8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b44bc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b44c0:;
    {
        cpu->r[14] = 0x000b44c4u; fn_00153c38(cpu);
    }
L_000b44c4:;
    {
        vfp_vsub(cpu, 14, 20, 22);
    }
L_000b44c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b44cc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 29);
    }
L_000b44d0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b44d4:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_000b44d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000034u, 0, 0);
    }
L_000b44dc:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000b44e0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x22cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b44e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b44e8:;
    {
        vfp_vsub(cpu, 15, 21, 23);
    }
L_000b44ec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x224u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b44f0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x228u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b44f4:;
    {
        cpu->r[14] = 0x000b44f8u; fn_00155f80(cpu);
    }
L_000b44f8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b44fc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b4500:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4348u << 16);
    }
L_000b4504:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x4248u << 16);
    }
L_000b4508:;
    {
        cpu->r[14] = 0x000b450cu; fn_00096514(cpu);
    }
L_000b450c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x224u);
    }
L_000b4510:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000040u, 0, 0);
    }
L_000b4514:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000b4518:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_000b451c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x22cu);
    }
L_000b4520:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x224u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000b4524:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_000b4528:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000b452c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x228u);
    }
L_000b4530:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b4534:;
    {
        vfp_vmul(cpu, 15, 15, 13);
    }
L_000b4538:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x22cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b453c:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b4540:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x214u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b4544:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x228u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b4548:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b454c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x210u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b4550:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_000b4554:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000b4558:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b455c:;
    {
        cpu->r[14] = 0x000b4560u; fn_000b2bc8(cpu);
    }
L_000b4560:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b4564:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000b4568:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_000b456c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4584;
        }
    }
L_000b4570:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b4574:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b4578:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000b457c:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_000b4580:;
    {
        goto L_000b4354;
    }
L_000b4584:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b4588:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000b458c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x20u);
    }
L_000b4590:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b4594:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000b4598:;
    {
        goto L_000b34d8;
    }
L_000b459c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000003u, 0, 0);
    }
L_000b45a0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000b45a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 3, 31u, &shc), 0, 0);
    }
L_000b45a8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = cpu->r[3];
        }
    }
L_000b45ac:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_000b45b0:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 2u, &shc); cpu->r[6] = v;
    }
L_000b45b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b45b8:;
    {
        cpu->r[12] = cpu->r[6];
    }
L_000b45bc:;
    {
        goto L_000b39ec;
    }
L_000b45c0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000b45c4:;
    {
        cpu->r[14] = 0x000b45c8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000b45c8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_000b45cc:;
    {
        goto L_000b4318;
    }
L_000b45d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b45d4:;
    {
        cpu->r[14] = 0x000b45d8u; fn_00096b88(cpu);
    }
L_000b45d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b45dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b39e0;
        }
    }
L_000b45e0:;
    {
        goto L_000b39d0;
    }
}

/* _ZN14CarSceneObject13UpdateEffectsEv @ 000b45f0 (arm) */
void fn_000b45f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b45f0:;
    {
        return fn_000b3338(cpu);
    }
}

/* _ZN14CarSceneObject16ComputePivotsCarEfffb @ 000b45f4 (arm) */
void fn_000b45f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b45f4:;
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
L_000b45f8:;
    {
        cpu->r[13] -= 32u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
    }
L_000b45fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b4600:;
    {
        *(uint32_t*)vfp_s(cpu,21) = cpu->r[2];
    }
L_000b4604:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000005cu, 1, 0);
    }
L_000b4608:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000b460c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b4610:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000b4614:;
    {
        *(uint32_t*)vfp_s(cpu,20) = cpu->r[3];
    }
L_000b4618:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[1];
    }
L_000b461c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[6]);
    }
L_000b4620:;
    {
        cpu->r[7] = rd8(cpu->r[13] + + 0xa0u);
    }
L_000b4624:;
    {
        cpu->r[14] = 0x000b4628u; fn_001535e0(cpu);
    }
L_000b4628:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b462c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b4630:;
    {
        cpu->r[14] = 0x000b4634u; fn_0013d348(cpu);
    }
L_000b4634:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_000b4638:;
    {
        cpu->r[6] = rd8(cpu->r[4] + + 0x1f8u);
    }
L_000b463c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x30u);
    }
L_000b4640:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000b4644:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000b4648:;
    {
        uint32_t v = cpu->r[2] | 0x00000001u; cpu->r[2] = v;
    }
L_000b464c:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000b4650:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b47e0;
        }
    }
L_000b4654:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000b4658:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b465c:;
    {
        cpu->r[14] = 0x000b4660u; fn_0013d348(cpu);
    }
L_000b4660:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x1e0u);
    }
L_000b4664:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x20u);
    }
L_000b4668:;
    {
        vfp_vsub(cpu, 13, 13, 12);
    }
L_000b466c:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4] + + 0x1dcu);
    }
L_000b4670:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x10u);
    }
L_000b4674:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1dcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b4678:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x1e4u);
    }
L_000b467c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x30u);
    }
L_000b4680:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1e4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b4684:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_000b4688:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000b468c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1e0u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000b4690:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000002u;
        }
    }
L_000b4694:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x30u);
    }
L_000b4698:;
    {
        cpu->r[8] = rd32(cpu->r[2] + + 0x2cu);
    }
L_000b469c:;
    {
        vfp_vmul(cpu, 16, 13, 13);
    }
L_000b46a0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000b46a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_000b46a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000b46ac:;
    {
        uint32_t v = cpu->r[2] | 0x00000002u; cpu->r[2] = v;
    }
L_000b46b0:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000b46b4:;
    {
        vfp_vsub(cpu, 14, 10, 14);
    }
L_000b46b8:;
    {
        vfp_vmla(cpu, 16, 14, 14);
    }
L_000b46bc:;
    {
        vfp_vsub(cpu, 15, 11, 15);
    }
L_000b46c0:;
    {
        vfp_vmla(cpu, 16, 15, 15);
    }
L_000b46c4:;
    {
        vfp_vsqrt(cpu, 16, 16);
    }
L_000b46c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4828;
        }
    }
L_000b46cc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), 0.0f);
    }
L_000b46d0:;
    {
        cpu->r[3] = rd32(0x000b46d8u + + 0x264u);
    }
L_000b46d4:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_000b46d8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x00000d30u, 0, 0);
    }
L_000b46dc:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_000b46e0:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_000b46e4:;
    {
        cpu->r[9] = cpu->r[4];
    }
L_000b46e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000c30u, 0, 0);
    }
L_000b46ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b46f4u, cpu->r[3], 0, 0);
    }
L_000b46f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000b46f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000088u, 0, 0);
    }
L_000b46f8:;
    {
        vfp_sync_flags(cpu);
    }
L_000b46fc:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000b4700:;
    {
        *vfp_s(cpu, 22) = *(float*)G(0x000b4708u + + 0x224u);
    }
L_000b4704:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000b4708:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000b470c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000b4710:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000b4714:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000b471cu + + 0x214u);
    }
L_000b4718:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x000b4720u + + 0x214u);
    }
L_000b471c:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x000b4724u + + 0x214u);
    }
L_000b4720:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x8u);
    }
L_000b4724:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_000b4728:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_000b472c:;
    {
        cpu->r[1] = 0x0000004cu;
    }
L_000b4730:;
    {
        cpu->r[4] = rd32(cpu->r[12] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000b4734:;
    {
        uint32_t v = cpu->r[1] * cpu->r[4] + cpu->r[6]; cpu->r[6] = v;
    }
L_000b4738:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000b473c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b4740:;
    {
        cpu->r[14] = 0x000b4744u; fn_00153600(cpu);
    }
L_000b4744:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_000b4748:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000b474c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000b4750:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b490c;
        }
    }
L_000b4754:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000001u, 1, 1);
    }
L_000b4758:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b487c;
        }
    }
L_000b475c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 4u, &shc), 0, 0);
    }
L_000b4760:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b4764:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000b4768:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000001fcu, 0, 0);
    }
L_000b476c:;
    {
        cpu->r[14] = 0x000b4770u; fn_001534f0(cpu);
    }
L_000b4770:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b4774:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b4778:;
    {
        cpu->r[14] = 0x000b477cu; fn_001534f0(cpu);
    }
L_000b477c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000b4780:;
    {
        cpu->r[14] = 0x000b4784u; fn_00153600(cpu);
    }
L_000b4784:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 15) = rd32(ea + 0u);
        cpu->r[7] = ea + 4u;
    }
L_000b4788:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000b478c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b4790:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000b4794:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000b4798:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b479c:;
    {
        cpu->r[14] = 0x000b47a0u; fn_001538ec(cpu);
    }
L_000b47a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b47a4:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000b47a8:;
    {
        cpu->r[14] = 0x000b47acu; fn_001534f0(cpu);
    }
L_000b47ac:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x8u);
    }
L_000b47b0:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 5u, &shc); cpu->r[2] = v;
    }
L_000b47b4:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000b47b8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000005u, 1, 1);
    }
L_000b47bc:;
    {
        uint32_t v = cpu->r[4] & 0x0000001fu; cpu->r[4] = v;
    }
L_000b47c0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x30u);
    }
L_000b47c4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000b47c8:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 2, (cpu->r[4] & 0xffu), &shc); cpu->r[4] = v;
    }
L_000b47cc:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[4]);
    }
L_000b47d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b48b0;
        }
    }
L_000b47d4:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x2cu);
    }
L_000b47d8:;
    {
        goto L_000b4728;
    }
L_000b47dc:;
    {
        cpu->r[14] = 0x000b47e0u; fn_0013c4d8(cpu);
    }
L_000b47e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b47e4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b47e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b47ec:;
    {
        cpu->r[14] = 0x000b47f4u;
    }
L_000b47f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b47f4u)) return;
    }
L_000b47f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 4u, &shc), 0, 0);
    }
L_000b47f8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b47fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000b4800:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000001fcu, 0, 0);
    }
L_000b4804:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000b4808:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b480c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000b4810:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000b4814:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b47dc;
        }
    }
L_000b4818:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b481c:;
    {
        wr8(cpu->r[4] + + 0x1f8u, cpu->r[3]);
    }
L_000b4820:;
    {
        goto L_000b4654;
    }
L_000b4824:;
    {
        cpu->r[14] = 0x000b4828u; fn_0013d348(cpu);
    }
L_000b4828:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b482c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b4830:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b4834:;
    {
        cpu->r[14] = 0x000b483cu;
    }
L_000b4838:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b483cu)) return;
    }
L_000b483c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000b4840:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b4844:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000b4848:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000b484c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b4850:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b4824;
        }
    }
L_000b4854:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x54u);
    }
L_000b4858:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b485c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4870;
        }
    }
L_000b4860:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4864:;
    {
        cpu->r[14] = 0x000b4868u; fn_000b2bc8(cpu);
    }
L_000b4868:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b486c:;
    {
        cpu->r[14] = 0x000b4870u; fn_0018ba20(cpu);
    }
L_000b4870:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_000b4874:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        cpu->r[13] += 32u;
    }
L_000b4878:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b487cu)) return;
    }
L_000b487c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b4880:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[7] + + 0x24u);
    }
L_000b4884:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b4888:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b488c:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,18);
        }
    }
L_000b4890:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,17);
        }
    }
L_000b4894:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000b4898:;
    {
        vfp_vdiv(cpu, 15, 15, 19);
    }
L_000b489c:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000b48a0:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b48a4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b48a8:;
    {
        cpu->r[14] = 0x000b48acu; fn_00154734(cpu);
    }
L_000b48ac:;
    {
        goto L_000b475c;
    }
L_000b48b0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[12], 0, 0);
    }
L_000b48b4:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_000b48b8:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000002u, 1, 1);
    }
L_000b48bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_000b48c0:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000b48c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b4924;
        }
    }
L_000b48c8:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_000b48cc:;
    {
        cpu->r[4] = cpu->r[9];
    }
L_000b48d0:;
    {
        cpu->r[6] = 0x00000009u;
    }
L_000b48d4:;
    {
        goto L_000b48dc;
    }
L_000b48d8:;
    {
        cpu->r[14] = 0x000b48dcu; fn_0013d348(cpu);
    }
L_000b48dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b48e0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b48e4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b48e8:;
    {
        cpu->r[14] = 0x000b48f0u;
    }
L_000b48ec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b48f0u)) return;
    }
L_000b48f0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000b48f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b48f8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000b48fc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000b4900:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b4904:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b48d8;
        }
    }
L_000b4908:;
    {
        goto L_000b4854;
    }
L_000b490c:;
    {
        vfp_vmul(cpu, 15, 21, 22);
    }
L_000b4910:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b4914:;
    {
        vfp_vdiv(cpu, 14, 15, 20);
    }
L_000b4918:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000b491c:;
    {
        cpu->r[14] = 0x000b4920u; fn_00154350(cpu);
    }
L_000b4920:;
    {
        goto L_000b4754;
    }
L_000b4924:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x2cu);
    }
L_000b4928:;
    {
        goto L_000b4720;
    }
}

/* _ZN14CarSceneObject14RenderGhostCarE8Vector3djfffi @ 000b4940 (arm) */
void fn_000b4940(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b4940:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000b4944:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b4948:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000b494c:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000b4950:;
    {
        cpu->r[14] = 0x000b4954u; fn_000b0118(cpu);
    }
L_000b4954:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xb60u);
    }
L_000b4958:;
    {
        cpu->r[3] = rd32(0x000b4960u + + 0x200u);
    }
L_000b495c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_000b4960:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b4968u, cpu->r[3], 0, 0);
    }
L_000b4964:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b4970;
        }
    }
L_000b4968:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000b496c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4970u)) return;
    }
L_000b4970:;
    {
        cpu->r[0] = rd32(0x000b4978u + + 0x1ecu);
    }
L_000b4974:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000134u, 0, 0);
    }
L_000b4978:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b497c:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_000b4980:;
    {
        wr32(cpu->r[4] + + 0xb60u, cpu->r[6]);
    }
L_000b4984:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000b4988:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000b498c:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000b4990:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b4994:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b4998:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b499c:;
    {
        cpu->r[14] = 0x000b49a4u;
    }
L_000b49a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b49a4u)) return;
    }
L_000b49a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b49a8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b49ac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b49b0:;
    {
        cpu->r[14] = 0x000b49b8u;
    }
L_000b49b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b49b8u)) return;
    }
L_000b49b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b49bc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b49c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b49c4:;
    {
        cpu->r[14] = 0x000b49ccu;
    }
L_000b49c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b49ccu)) return;
    }
L_000b49cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xb60u);
    }
L_000b49d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000b49d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b4b44;
        }
    }
L_000b49d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b49dc:;
    {
        cpu->r[6] = 0x0000128cu;
    }
L_000b49e0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b49e4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b49e8:;
    {
        cpu->r[14] = 0x000b49f0u;
    }
L_000b49ec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b49f0u)) return;
    }
L_000b49f0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b49f4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b49f8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b49fc:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000b4a00:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b4a04:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b4a08:;
    {
        cpu->r[14] = 0x000b4a10u;
    }
L_000b4a0c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4a10u)) return;
    }
L_000b4a10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b4a14:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b4a18:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b4a1c:;
    {
        cpu->r[14] = 0x000b4a24u;
    }
L_000b4a20:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4a24u)) return;
    }
L_000b4a24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b4a28:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b4a2c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b4a30:;
    {
        cpu->r[14] = 0x000b4a38u;
    }
L_000b4a34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4a38u)) return;
    }
L_000b4a38:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b4a3c:;
    {
        cpu->r[14] = 0x00000011u;
    }
L_000b4a40:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000b4a44:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b4a48:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[14]);
    }
L_000b4a4c:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_000b4a50:;
    {
        cpu->r[2] = 0x00000015u;
    }
L_000b4a54:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4a58:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b4a5c:;
    {
        cpu->r[14] = 0x000b4a64u;
    }
L_000b4a60:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4a64u)) return;
    }
L_000b4a64:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b4a68:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b4a6c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b4a70:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b4a74:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000b4a78:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b4a7c:;
    {
        cpu->r[14] = 0x000b4a84u;
    }
L_000b4a80:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4a84u)) return;
    }
L_000b4a84:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b4a88:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000b4a8c:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_000b4a90:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b4a94:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4a98:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b4a9c:;
    {
        cpu->r[14] = 0x000b4aa4u;
    }
L_000b4aa0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4aa4u)) return;
    }
L_000b4aa4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b4aa8:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000b4aac:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_000b4ab0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b4ab4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4ab8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b4abc:;
    {
        cpu->r[14] = 0x000b4ac4u;
    }
L_000b4ac0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4ac4u)) return;
    }
L_000b4ac4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b4ac8:;
    {
        cpu->r[1] = 0x0000175cu;
    }
L_000b4acc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b4ad0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b4ad4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000b4ad8:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[2]);
    }
L_000b4adc:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_000b4ae0:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_000b4ae4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b4ae8:;
    {
        cpu->r[14] = 0x000b4af0u;
    }
L_000b4aec:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4af0u)) return;
    }
L_000b4af0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b4af4:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000b4af8:;
    {
        cpu->r[2] = 0x0000000bu;
    }
L_000b4afc:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b4b00:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b4b04:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b4b08:;
    {
        cpu->r[14] = 0x000b4b10u;
    }
L_000b4b0c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4b10u)) return;
    }
L_000b4b10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b4b14:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[7]);
    }
L_000b4b18:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b4b1c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b4b20:;
    {
        cpu->r[14] = 0x000b4b28u;
    }
L_000b4b24:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4b28u)) return;
    }
L_000b4b28:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000b4b2c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b4b30:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b4b34:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b4b38:;
    {
        cpu->r[14] = 0x000b4b40u;
    }
L_000b4b3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4b40u)) return;
    }
L_000b4b40:;
    {
        goto L_000b4968;
    }
L_000b4b44:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000b4b48:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000b4b4c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b4b50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4b54:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000b4b58:;
    {
        cpu->r[14] = 0x000b4b5cu; fn_000b45f4(cpu);
    }
L_000b4b5c:;
    {
        goto L_000b49d8;
    }
}

/* _ZN14CarSceneObjectD1Ev @ 000b4b68 (arm) */
void fn_000b4b68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b4b68:;
    {
        cpu->r[3] = rd32(0x000b4b70u + + 0x1bcu);
    }
L_000b4b6c:;
    {
        cpu->r[2] = rd32(0x000b4b74u + + 0x1bcu);
    }
L_000b4b70:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b4b78u, cpu->r[3], 0, 0);
    }
L_000b4b74:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000b4b78:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b4b7c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000b4b80:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000b4b84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000b4b88:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b4b8c:;
    {
        uint32_t wb_tmp = cpu->r[8] + 0x00000b40u;
        wr32(cpu->r[8], cpu->r[2]);
        cpu->r[8] = wb_tmp;
    }
L_000b4b90:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000008u, 0, 0);
    }
L_000b4b94:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_000b4b98:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_000b4b9c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000b4ba0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b4ba4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000b4ba8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000b4bac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4bc0;
        }
    }
L_000b4bb0:;
    {
        cpu->r[14] = 0x000b4bb4u; fn_00097924(cpu);
    }
L_000b4bb4:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000b4bb8:;
    {
        cpu->r[14] = 0x000b4bbcu; fn_00157398(cpu);
    }
L_000b4bbc:;
    {
        wr32(cpu->r[4], cpu->r[7]);
    }
L_000b4bc0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 1);
    }
L_000b4bc4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000b4bc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b4b9c;
        }
    }
L_000b4bcc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xd28u);
    }
L_000b4bd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b4bd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4bf0;
        }
    }
L_000b4bd8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b4bdc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b4be0:;
    {
        cpu->r[14] = 0x000b4be8u;
    }
L_000b4be4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4be8u)) return;
    }
L_000b4be8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4bec:;
    {
        wr32(cpu->r[5] + + 0xd28u, cpu->r[3]);
    }
L_000b4bf0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xd2cu);
    }
L_000b4bf4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b4bf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4c14;
        }
    }
L_000b4bfc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b4c00:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b4c04:;
    {
        cpu->r[14] = 0x000b4c0cu;
    }
L_000b4c08:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4c0cu)) return;
    }
L_000b4c0c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4c10:;
    {
        wr32(cpu->r[5] + + 0xd2cu, cpu->r[3]);
    }
L_000b4c14:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x17cu);
    }
L_000b4c18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b4c1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4c38;
        }
    }
L_000b4c20:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b4c24:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b4c28:;
    {
        cpu->r[14] = 0x000b4c30u;
    }
L_000b4c2c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4c30u)) return;
    }
L_000b4c30:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4c34:;
    {
        wr32(cpu->r[5] + + 0x17cu, cpu->r[3]);
    }
L_000b4c38:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xdf8u);
    }
L_000b4c3c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b4c40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4c5c;
        }
    }
L_000b4c44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4c48:;
    {
        cpu->r[14] = 0x000b4c4cu; fn_000b2bc8(cpu);
    }
L_000b4c4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4c50:;
    {
        cpu->r[14] = 0x000b4c54u; fn_0018ba20(cpu);
    }
L_000b4c54:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4c58:;
    {
        wr32(cpu->r[5] + + 0xdf8u, cpu->r[3]);
    }
L_000b4c5c:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xdb4u);
    }
L_000b4c60:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b4c64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4c80;
        }
    }
L_000b4c68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4c6c:;
    {
        cpu->r[14] = 0x000b4c70u; fn_000b2bc8(cpu);
    }
L_000b4c70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4c74:;
    {
        cpu->r[14] = 0x000b4c78u; fn_0018ba20(cpu);
    }
L_000b4c78:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4c7c:;
    {
        wr32(cpu->r[5] + + 0xdb4u, cpu->r[3]);
    }
L_000b4c80:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xd70u);
    }
L_000b4c84:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b4c88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4ca4;
        }
    }
L_000b4c8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4c90:;
    {
        cpu->r[14] = 0x000b4c94u; fn_000b2bc8(cpu);
    }
L_000b4c94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4c98:;
    {
        cpu->r[14] = 0x000b4c9cu; fn_0018ba20(cpu);
    }
L_000b4c9c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4ca0:;
    {
        wr32(cpu->r[5] + + 0xd70u, cpu->r[3]);
    }
L_000b4ca4:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xcf0u);
    }
L_000b4ca8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b4cac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4cc8;
        }
    }
L_000b4cb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4cb4:;
    {
        cpu->r[14] = 0x000b4cb8u; fn_000b2bc8(cpu);
    }
L_000b4cb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4cbc:;
    {
        cpu->r[14] = 0x000b4cc0u; fn_0018ba20(cpu);
    }
L_000b4cc0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4cc4:;
    {
        wr32(cpu->r[5] + + 0xcf0u, cpu->r[3]);
    }
L_000b4cc8:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xcacu);
    }
L_000b4ccc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b4cd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4cec;
        }
    }
L_000b4cd4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4cd8:;
    {
        cpu->r[14] = 0x000b4cdcu; fn_000b2bc8(cpu);
    }
L_000b4cdc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4ce0:;
    {
        cpu->r[14] = 0x000b4ce4u; fn_0018ba20(cpu);
    }
L_000b4ce4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4ce8:;
    {
        wr32(cpu->r[5] + + 0xcacu, cpu->r[3]);
    }
L_000b4cec:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x000001fcu, 0, 0);
    }
L_000b4cf0:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000b4cf4:;
    {
        cpu->r[4] = rd32(cpu->r[8] + - 0x4u);
    }
L_000b4cf8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b4cfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4d10;
        }
    }
L_000b4d00:;
    {
        cpu->r[14] = 0x000b4d04u; fn_000b2bc8(cpu);
    }
L_000b4d04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4d08:;
    {
        cpu->r[14] = 0x000b4d0cu; fn_0018ba20(cpu);
    }
L_000b4d0c:;
    {
        wr32(cpu->r[8] + - 0x4u, cpu->r[7]);
    }
L_000b4d10:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000044u, 1, 0);
    }
L_000b4d14:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_000b4d18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b4cf4;
        }
    }
L_000b4d1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b4d20:;
    {
        cpu->r[14] = 0x000b4d24u; fn_000ea6a8(cpu);
    }
L_000b4d24:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b4d28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4d2cu)) return;
    }
}

/* _ZN14CarSceneObjectD0Ev @ 000b4d34 (arm) */
void fn_000b4d34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b4d34:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000b4d38:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b4d3c:;
    {
        cpu->r[14] = 0x000b4d40u; fn_000b4b68(cpu);
    }
L_000b4d40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4d44:;
    {
        cpu->r[14] = 0x000b4d48u; fn_0018ba20(cpu);
    }
L_000b4d48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4d4c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4d50u)) return;
    }
}

/* _ZN14CarSceneObjectD2Ev @ 000b4d50 (arm) */
void fn_000b4d50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b4d50:;
    {
        cpu->r[3] = rd32(0x000b4d58u + + 0x1bcu);
    }
L_000b4d54:;
    {
        cpu->r[2] = rd32(0x000b4d5cu + + 0x1bcu);
    }
L_000b4d58:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b4d60u, cpu->r[3], 0, 0);
    }
L_000b4d5c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000b4d60:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b4d64:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000b4d68:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000b4d6c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000b4d70:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b4d74:;
    {
        uint32_t wb_tmp = cpu->r[8] + 0x00000b40u;
        wr32(cpu->r[8], cpu->r[2]);
        cpu->r[8] = wb_tmp;
    }
L_000b4d78:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000008u, 0, 0);
    }
L_000b4d7c:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_000b4d80:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_000b4d84:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000b4d88:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b4d8c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000b4d90:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000b4d94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4da8;
        }
    }
L_000b4d98:;
    {
        cpu->r[14] = 0x000b4d9cu; fn_00097924(cpu);
    }
L_000b4d9c:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000b4da0:;
    {
        cpu->r[14] = 0x000b4da4u; fn_00157398(cpu);
    }
L_000b4da4:;
    {
        wr32(cpu->r[4], cpu->r[7]);
    }
L_000b4da8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 1);
    }
L_000b4dac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000b4db0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b4d84;
        }
    }
L_000b4db4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xd28u);
    }
L_000b4db8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b4dbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4dd8;
        }
    }
L_000b4dc0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b4dc4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b4dc8:;
    {
        cpu->r[14] = 0x000b4dd0u;
    }
L_000b4dcc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4dd0u)) return;
    }
L_000b4dd0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4dd4:;
    {
        wr32(cpu->r[5] + + 0xd28u, cpu->r[3]);
    }
L_000b4dd8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xd2cu);
    }
L_000b4ddc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b4de0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4dfc;
        }
    }
L_000b4de4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b4de8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b4dec:;
    {
        cpu->r[14] = 0x000b4df4u;
    }
L_000b4df0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4df4u)) return;
    }
L_000b4df4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4df8:;
    {
        wr32(cpu->r[5] + + 0xd2cu, cpu->r[3]);
    }
L_000b4dfc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x17cu);
    }
L_000b4e00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b4e04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4e20;
        }
    }
L_000b4e08:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b4e0c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b4e10:;
    {
        cpu->r[14] = 0x000b4e18u;
    }
L_000b4e14:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4e18u)) return;
    }
L_000b4e18:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4e1c:;
    {
        wr32(cpu->r[5] + + 0x17cu, cpu->r[3]);
    }
L_000b4e20:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xdf8u);
    }
L_000b4e24:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b4e28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4e44;
        }
    }
L_000b4e2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4e30:;
    {
        cpu->r[14] = 0x000b4e34u; fn_000b2bc8(cpu);
    }
L_000b4e34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4e38:;
    {
        cpu->r[14] = 0x000b4e3cu; fn_0018ba20(cpu);
    }
L_000b4e3c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4e40:;
    {
        wr32(cpu->r[5] + + 0xdf8u, cpu->r[3]);
    }
L_000b4e44:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xdb4u);
    }
L_000b4e48:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b4e4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4e68;
        }
    }
L_000b4e50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4e54:;
    {
        cpu->r[14] = 0x000b4e58u; fn_000b2bc8(cpu);
    }
L_000b4e58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4e5c:;
    {
        cpu->r[14] = 0x000b4e60u; fn_0018ba20(cpu);
    }
L_000b4e60:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4e64:;
    {
        wr32(cpu->r[5] + + 0xdb4u, cpu->r[3]);
    }
L_000b4e68:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xd70u);
    }
L_000b4e6c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b4e70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4e8c;
        }
    }
L_000b4e74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4e78:;
    {
        cpu->r[14] = 0x000b4e7cu; fn_000b2bc8(cpu);
    }
L_000b4e7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4e80:;
    {
        cpu->r[14] = 0x000b4e84u; fn_0018ba20(cpu);
    }
L_000b4e84:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4e88:;
    {
        wr32(cpu->r[5] + + 0xd70u, cpu->r[3]);
    }
L_000b4e8c:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xcf0u);
    }
L_000b4e90:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b4e94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4eb0;
        }
    }
L_000b4e98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4e9c:;
    {
        cpu->r[14] = 0x000b4ea0u; fn_000b2bc8(cpu);
    }
L_000b4ea0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4ea4:;
    {
        cpu->r[14] = 0x000b4ea8u; fn_0018ba20(cpu);
    }
L_000b4ea8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4eac:;
    {
        wr32(cpu->r[5] + + 0xcf0u, cpu->r[3]);
    }
L_000b4eb0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xcacu);
    }
L_000b4eb4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b4eb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4ed4;
        }
    }
L_000b4ebc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4ec0:;
    {
        cpu->r[14] = 0x000b4ec4u; fn_000b2bc8(cpu);
    }
L_000b4ec4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4ec8:;
    {
        cpu->r[14] = 0x000b4eccu; fn_0018ba20(cpu);
    }
L_000b4ecc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b4ed0:;
    {
        wr32(cpu->r[5] + + 0xcacu, cpu->r[3]);
    }
L_000b4ed4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x000001fcu, 0, 0);
    }
L_000b4ed8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000b4edc:;
    {
        cpu->r[4] = rd32(cpu->r[8] + - 0x4u);
    }
L_000b4ee0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b4ee4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4ef8;
        }
    }
L_000b4ee8:;
    {
        cpu->r[14] = 0x000b4eecu; fn_000b2bc8(cpu);
    }
L_000b4eec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b4ef0:;
    {
        cpu->r[14] = 0x000b4ef4u; fn_0018ba20(cpu);
    }
L_000b4ef4:;
    {
        wr32(cpu->r[8] + - 0x4u, cpu->r[7]);
    }
L_000b4ef8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000044u, 1, 0);
    }
L_000b4efc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_000b4f00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b4edc;
        }
    }
L_000b4f04:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b4f08:;
    {
        cpu->r[14] = 0x000b4f0cu; fn_000ea6a8(cpu);
    }
L_000b4f0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b4f10:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4f14u)) return;
    }
}

/* _ZN18TrafficSceneObjectD1Ev @ 000b4f1c (arm) */
void fn_000b4f1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b4f1c:;
    {
        cpu->r[3] = rd32(0x000b4f24u + + 0x60u);
    }
L_000b4f20:;
    {
        cpu->r[2] = rd32(0x000b4f28u + + 0x60u);
    }
L_000b4f24:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b4f2cu, cpu->r[3], 0, 0);
    }
L_000b4f28:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000b4f2c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b4f30:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b4f34:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000b4f38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000b4f3c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000b4f40:;
    {
        uint32_t wb_tmp = cpu->r[6] + 0x00000e10u;
        wr32(cpu->r[6], cpu->r[2]);
        cpu->r[6] = wb_tmp;
    }
L_000b4f44:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], 0x000002f8u, 0, 0);
    }
L_000b4f48:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_000b4f4c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + - 0x4u);
    }
L_000b4f50:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000b4f54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4f68;
        }
    }
L_000b4f58:;
    {
        cpu->r[14] = 0x000b4f5cu; fn_000b2bc8(cpu);
    }
L_000b4f5c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b4f60:;
    {
        cpu->r[14] = 0x000b4f64u; fn_0018ba20(cpu);
    }
L_000b4f64:;
    {
        wr32(cpu->r[4] + - 0x4u, cpu->r[7]);
    }
L_000b4f68:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000044u, 1, 0);
    }
L_000b4f6c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_000b4f70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b4f4c;
        }
    }
L_000b4f74:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b4f78:;
    {
        cpu->r[14] = 0x000b4f7cu; fn_000b4d50(cpu);
    }
L_000b4f7c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b4f80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4f84u)) return;
    }
}

/* _ZN18TrafficSceneObjectD0Ev @ 000b4f8c (arm) */
void fn_000b4f8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b4f8c:;
    {
        cpu->r[3] = rd32(0x000b4f94u + + 0x68u);
    }
L_000b4f90:;
    {
        cpu->r[2] = rd32(0x000b4f98u + + 0x68u);
    }
L_000b4f94:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b4f9cu, cpu->r[3], 0, 0);
    }
L_000b4f98:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000b4f9c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b4fa0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b4fa4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000b4fa8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000b4fac:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000b4fb0:;
    {
        uint32_t wb_tmp = cpu->r[6] + 0x00000e10u;
        wr32(cpu->r[6], cpu->r[2]);
        cpu->r[6] = wb_tmp;
    }
L_000b4fb4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], 0x000002f8u, 0, 0);
    }
L_000b4fb8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_000b4fbc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + - 0x4u);
    }
L_000b4fc0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000b4fc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b4fd8;
        }
    }
L_000b4fc8:;
    {
        cpu->r[14] = 0x000b4fccu; fn_000b2bc8(cpu);
    }
L_000b4fcc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b4fd0:;
    {
        cpu->r[14] = 0x000b4fd4u; fn_0018ba20(cpu);
    }
L_000b4fd4:;
    {
        wr32(cpu->r[4] + - 0x4u, cpu->r[7]);
    }
L_000b4fd8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000044u, 1, 0);
    }
L_000b4fdc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_000b4fe0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b4fbc;
        }
    }
L_000b4fe4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b4fe8:;
    {
        cpu->r[14] = 0x000b4fecu; fn_000b4d50(cpu);
    }
L_000b4fec:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b4ff0:;
    {
        cpu->r[14] = 0x000b4ff4u; fn_0018ba20(cpu);
    }
L_000b4ff4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b4ff8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b4ffcu)) return;
    }
}

/* _ZN14CarSceneObject16ComputeDOT3LightEi8Vector3d @ 000b5004 (arm) */
void fn_000b5004(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5004:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000b5008:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x34u);
    }
L_000b500c:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_000b5010:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_000b5014:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000b5018:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_000b501c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b5020:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000b5024:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_000b5028:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000b502c:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_000b5030:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 4u, &shc), 0, 0);
    }
L_000b5034:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000b5038:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b503c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[6] + + 0x38u);
    }
L_000b5040:;
    {
        vfp_vsub(cpu, 15, 12, 15);
    }
L_000b5044:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5048:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[6] + + 0x3cu);
    }
L_000b504c:;
    {
        vfp_vsub(cpu, 13, 12, 13);
    }
L_000b5050:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_000b5054:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_000b5058:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b505c:;
    {
        vfp_vneg(cpu, 14, 13);
    }
L_000b5060:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5064:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b5068:;
    {
        cpu->r[14] = 0x000b506cu; fn_00155f80(cpu);
    }
L_000b506c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_000b5070:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b5074:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000001fcu, 0, 0);
    }
L_000b5078:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b507c:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_000b5080:;
    {
        cpu->r[14] = 0x000b5084u; fn_00153624(cpu);
    }
L_000b5084:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b5088:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000b508c:;
    {
        cpu->r[14] = 0x000b5090u; fn_001534f0(cpu);
    }
L_000b5090:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b5094:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000b5098:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000b509c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b50a0:;
    {
        cpu->r[14] = 0x000b50a4u; fn_0015364c(cpu);
    }
L_000b50a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b50a8:;
    {
        cpu->r[14] = 0x000b50acu; fn_00153fbc(cpu);
    }
L_000b50ac:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000b50b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b50b4:;
    {
        cpu->r[14] = 0x000b50b8u; fn_00153c38(cpu);
    }
L_000b50b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b50bc:;
    {
        cpu->r[14] = 0x000b50c0u; fn_00155f80(cpu);
    }
L_000b50c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b50c8u + + 0x64u);
    }
L_000b50c4:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,15);
    }
L_000b50c8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4]);
    }
L_000b50cc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_000b50d0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_000b50d4:;
    {
        cpu->r[3] = 0x3f800000u;
    }
L_000b50d8:;
    {
        vfp_vmla(cpu, 11, 13, 15);
    }
L_000b50dc:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,11);
    }
L_000b50e0:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,15);
    }
L_000b50e4:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000b50e8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000b50ec:;
    {
        vfp_vmla(cpu, 11, 14, 15);
    }
L_000b50f0:;
    {
        vfp_vmla(cpu, 15, 12, 15);
    }
L_000b50f4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_000b50f8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,11);
    }
L_000b50fc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5100:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b5104:;
    {
        cpu->r[14] = 0x000b5108u; imp_glColor4f(cpu); /* glColor4f */
    }
L_000b5108:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x44u);
    }
L_000b510c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b5110:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b5124;
        }
    }
L_000b5114:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b5118:;
    {
        cpu->r[14] = 0x000b511cu; fn_000b2bc8(cpu);
    }
L_000b511c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b5120:;
    {
        cpu->r[14] = 0x000b5124u; fn_0018ba20(cpu);
    }
L_000b5124:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_000b5128:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b512cu)) return;
    }
}

/* _ZN14CarSceneObject14RenderNinoNinoEv @ 000b5130 (arm) */
void fn_000b5130(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5130:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xd2cu);
    }
L_000b5134:;
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
L_000b5138:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000b513c:;
    {
        cpu->r[5] = rd32(0x000b5144u + + 0x354u);
    }
L_000b5140:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b5144:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000c4u, 1, 0);
    }
L_000b5148:;
    {
        cpu->r[5] = add_flags(cpu, 0x000b5150u, cpu->r[5], 0, 0);
    }
L_000b514c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b5150:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b5238;
        }
    }
L_000b5154:;
    {
        cpu->r[8] = rd32(0x000b515cu + + 0x340u);
    }
L_000b5158:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000b515c:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000b5160:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000b5164:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000b5168:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b516c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b5238;
        }
    }
L_000b5170:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000b5174:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000040u, 0, 0);
    }
L_000b5178:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_000b517c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5180:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_000b5184:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5188:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_000b518c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_000b5190:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000b5194:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5198:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000b519c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b51a0:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x10u;
        wr32(cpu->r[3] + + 0x10u, cpu->r[0]);
        cpu->r[3] = wb_tmp;
    }
L_000b51a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b5178;
        }
    }
L_000b51a8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_000b51ac:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b51b0:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000b51b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b51b8:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[7]);
    }
L_000b51bc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x000000b0u, 0, 0);
    }
L_000b51c0:;
    {
        cpu->r[14] = 0x000b51c4u; fn_001535e0(cpu);
    }
L_000b51c4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000b51c8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000b51cc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000b51d0:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_000b51d4:;
    {
        cpu->r[14] = 0x000b51d8u; fn_0013c510(cpu);
    }
L_000b51d8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b51dc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000b51e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b51e8u + + 0x2a4u);
    }
L_000b51e4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xb8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b51e8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b51ec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xb4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b51f0:;
    {
        cpu->r[14] = 0x000b51f4u; fn_0015365c(cpu);
    }
L_000b51f4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd2cu);
    }
L_000b51f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xb0u);
    }
L_000b51fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000b5200:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xb4u);
    }
L_000b5204:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xb8u);
    }
L_000b5208:;
    {
        cpu->r[14] = 0x000b520cu; fn_00153e90(cpu);
    }
L_000b520c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd2cu);
    }
L_000b5210:;
    {
        cpu->r[14] = 0x000b5214u; fn_000ea4dc(cpu);
    }
L_000b5214:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_000b5218:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b5244;
        }
    }
L_000b521c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xacu);
    }
L_000b5220:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b5224:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b5238;
        }
    }
L_000b5228:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b522c:;
    {
        cpu->r[14] = 0x000b5230u; fn_000b2bc8(cpu);
    }
L_000b5230:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b5234:;
    {
        cpu->r[14] = 0x000b5238u; fn_0018ba20(cpu);
    }
L_000b5238:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000c4u, 0, 0);
    }
L_000b523c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000b5240:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5244u)) return;
    }
L_000b5244:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd2cu);
    }
L_000b5248:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b524c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b5250:;
    {
        cpu->r[14] = 0x000b5258u;
    }
L_000b5254:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5258u)) return;
    }
L_000b5258:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd2cu);
    }
L_000b525c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000b5260:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b5264:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b5268:;
    {
        cpu->r[14] = 0x000b5270u;
    }
L_000b526c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5270u)) return;
    }
L_000b5270:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000b5274:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000b5278:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xd00u);
    }
L_000b527c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b5280:;
    {
        cpu->r[8] = 0x000081b5u;
    }
L_000b5284:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000b5288:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_000b528c:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x1b4eu << 16);
    }
L_000b5290:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_000b5294:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000b5298:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000b529c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000b52a0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00008cc0u;
        }
    }
L_000b52a4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000b52a8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000b52ac:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_000b52b0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[0]);
        }
    }
L_000b52b4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
        }
    }
L_000b52b8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000b52bc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000b52c0:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000b52c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_000b52c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000b52cc:;
    {
        cpu->r[14] = 0x000b52d0u; fn_0015d718(cpu);
    }
L_000b52d0:;
    {
        cpu->r[2] = 0x00004dd3u;
    }
L_000b52d4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x1062u << 16);
    }
L_000b52d8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[0]; cpu->r[1] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000b52dc:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000b52e0:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[2], 1, 6u, &shc), cpu->r[3], 1, 0);
    }
L_000b52e4:;
    {
        cpu->r[2] = 0x000003e8u;
    }
L_000b52e8:;
    {
        uint32_t v = cpu->r[0] - cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_000b52ec:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[8] * (int64_t)(int32_t)cpu->r[3]; cpu->r[2] = (uint32_t)v; cpu->r[8] = (uint32_t)(v >> 32); }
    }
L_000b52f0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000b52f4:;
    {
        cpu->r[8] = sub_flags(cpu, shifter(cpu->r[8], 1, 4u, &shc), cpu->r[3], 1, 0);
    }
L_000b52f8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000003u, 1, 1);
    }
L_000b52fc:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
        }
    }
L_000b5300:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_000b5304:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = 0x00000001u;
        }
    }
L_000b5308:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b521c;
        }
    }
L_000b530c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000b5310:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000b5314:;
    {
        cpu->r[3] = rd32(0x000b531cu + + 0x184u);
    }
L_000b5318:;
    {
        cpu->r[11] = 0x000011e8u;
    }
L_000b531c:;
    {
        cpu->r[1] = 0x00001314u;
    }
L_000b5320:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000b5324:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b5328:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_000b532c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_000b5330:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_000b5334:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b5338:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b533c:;
    {
        cpu->r[14] = 0x000b5344u;
    }
L_000b5340:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5344u)) return;
    }
L_000b5344:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_000b5348:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b534c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b5350:;
    {
        cpu->r[14] = 0x000b5358u;
    }
L_000b5354:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5358u)) return;
    }
L_000b5358:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b535c:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[8]);
    }
L_000b5360:;
    {
        cpu->r[14] = 0x000b5364u; fn_001535e0(cpu);
    }
L_000b5364:;
    {
        cpu->r[3] = rd32(0x000b536cu + + 0x138u);
    }
L_000b5368:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000b536c:;
    {
        cpu->r[1] = 0x00005604u;
    }
L_000b5370:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b5374:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000b5378:;
    {
        cpu->r[14] = 0x000b537cu; fn_00135cf4(cpu);
    }
L_000b537c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000b5380:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000b5384:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_000b5388:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b538c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_000b5390:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[12] + + 0x8u);
    }
L_000b5394:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000b5398:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000b539c:;
    {
        cpu->r[14] = 0x000b53a0u; fn_0012f12c(cpu);
    }
L_000b53a0:;
    {
        cpu->r[0] = 0x0000128cu;
    }
L_000b53a4:;
    {
        cpu->r[2] = 0x00001288u;
    }
L_000b53a8:;
    {
        cpu->r[3] = 0x00000018u;
    }
L_000b53ac:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[0]);
    }
L_000b53b0:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000b53b4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000b53b8:;
    {
        cpu->r[2] = 0x0000128cu;
    }
L_000b53bc:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_000b53c0:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_000b53c4:;
    {
        cpu->r[14] = 0x000b53c8u; fn_0014814c(cpu);
    }
L_000b53c8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b53cc:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000b53d0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000b53d4:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_000b53d8:;
    {
        cpu->r[14] = 0x000b53dcu; fn_0013c510(cpu);
    }
L_000b53dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b53e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000b53e4:;
    {
        cpu->r[14] = 0x000b53e8u; fn_001534f0(cpu);
    }
L_000b53e8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b53ec:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000b53f0:;
    {
        cpu->r[14] = 0x000b53f4u; fn_0015365c(cpu);
    }
L_000b53f4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b53fcu + + 0x94u);
    }
L_000b53f8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000b5400u + + 0x94u);
    }
L_000b53fc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5400:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5404:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5408:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b5410u + + 0x7cu);
    }
L_000b540c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5410:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5414:;
    {
        vfp_vmul(cpu, 15, 16, 14);
    }
L_000b5418:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000b541c:;
    {
        wr8(cpu->r[13] + + 0xbfu, cpu->r[3]);
    }
L_000b5420:;
    {
        wr8(cpu->r[13] + + 0xbcu, cpu->r[3]);
    }
L_000b5424:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000b5428:;
    {
        wr8(cpu->r[13] + + 0xbdu, cpu->r[3]);
    }
L_000b542c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b5430:;
    {
        wr8(cpu->r[13] + + 0xbeu, cpu->r[3]);
    }
L_000b5434:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xbcu);
    }
L_000b5438:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_000b543c:;
    {
        vfp_vmul(cpu, 14, 17, 14);
    }
L_000b5440:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000b5444:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000b5448:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000b544c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000b5450:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000b5454:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5458:;
    {
        cpu->r[14] = 0x000b545cu; fn_00130de4(cpu);
    }
L_000b545c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_000b5460:;
    {
        cpu->r[0] = 0x0000128cu;
    }
L_000b5464:;
    {
        wr32(cpu->r[7] + cpu->r[0], cpu->r[5]);
    }
L_000b5468:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b546c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b5470:;
    {
        cpu->r[14] = 0x000b5478u;
    }
L_000b5474:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5478u)) return;
    }
L_000b5478:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b547c:;
    {
        cpu->r[14] = 0x000b5480u; fn_000b2bc8(cpu);
    }
L_000b5480:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b5484:;
    {
        cpu->r[14] = 0x000b5488u; fn_000b2bc8(cpu);
    }
L_000b5488:;
    {
        goto L_000b5238;
    }
}

/* _ZN14CarSceneObject9RenderCarE8Vector3djfffi @ 000b54a8 (arm) */
void fn_000b54a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b54a8:;
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
L_000b54ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b54b0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000005cu, 1, 0);
    }
L_000b54b4:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000b54b8:;
    {
        cpu->r[5] = rd32(0x000b54c0u + + 0x554u);
    }
L_000b54bc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x80u);
    }
L_000b54c0:;
    {
        cpu->r[14] = 0x000b54c4u; fn_000b0118(cpu);
    }
L_000b54c4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x178u);
    }
L_000b54c8:;
    {
        cpu->r[5] = add_flags(cpu, 0x000b54d0u, cpu->r[5], 0, 0);
    }
L_000b54cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b54d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b54e0;
        }
    }
L_000b54d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xb60u);
    }
L_000b54d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000b54dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b54e8;
        }
    }
L_000b54e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_000b54e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b54e8u)) return;
    }
L_000b54e8:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000b54ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b54f0:;
    {
        cpu->r[14] = 0x000b54f4u; fn_000b19dc(cpu);
    }
L_000b54f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b54f8:;
    {
        cpu->r[14] = 0x000b54fcu; fn_000b2cf4(cpu);
    }
L_000b54fc:;
    {
        cpu->r[3] = rd32(0x000b5504u + + 0x514u);
    }
L_000b5500:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000b5504:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000134u, 0, 0);
    }
L_000b5508:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000b550c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000b5510:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b5514:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[10]);
    }
L_000b5518:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_000b551c:;
    {
        cpu->r[14] = 0x000b5520u; fn_00153624(cpu);
    }
L_000b5520:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000b5524:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000b5528:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000b552c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0xb5cu);
    }
L_000b5530:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000b5534:;
    {
        uint32_t v = cpu->r[8] & 0x00000001u; cpu->r[8] = v;
    }
L_000b5538:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b553c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b5540:;
    {
        cpu->r[14] = 0x000b5548u;
    }
L_000b5544:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5548u)) return;
    }
L_000b5548:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b554c:;
    {
        cpu->r[2] = 0x0000128cu;
    }
L_000b5550:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b5554:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b5558:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000b555c:;
    {
        cpu->r[14] = 0x000b5564u;
    }
L_000b5560:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5564u)) return;
    }
L_000b5564:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b5568:;
    {
        uint32_t v = cpu->r[10] | shifter(cpu->r[10], 1, 31u, &shc); cpu->r[10] = v;
    }
L_000b556c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b5570:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b5574:;
    {
        cpu->r[14] = 0x000b557cu;
    }
L_000b5578:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b557cu)) return;
    }
L_000b557c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xb60u);
    }
L_000b5580:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000b5584:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b5914;
        }
    }
L_000b5588:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b558c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b5590:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b5594:;
    {
        cpu->r[14] = 0x000b559cu;
    }
L_000b5598:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b559cu)) return;
    }
L_000b559c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b55a0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b55a4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b55a8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b55ac:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000b55b0:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b55b4:;
    {
        cpu->r[14] = 0x000b55bcu;
    }
L_000b55b8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b55bcu)) return;
    }
L_000b55bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b55c0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b55c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b55c8:;
    {
        cpu->r[14] = 0x000b55d0u;
    }
L_000b55cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b55d0u)) return;
    }
L_000b55d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b55d4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b55d8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b55dc:;
    {
        cpu->r[14] = 0x000b55e4u;
    }
L_000b55e0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b55e4u)) return;
    }
L_000b55e4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000b55e8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000b55ec:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_000b55f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b5694;
        }
    }
L_000b55f4:;
    {
        cpu->r[8] = 0x0000128cu;
    }
L_000b55f8:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_000b55fc:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000b5600:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000b5604:;
    {
        uint32_t v = cpu->r[1] & ~ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[1] = v;
    }
L_000b5608:;
    {
        cpu->r[14] = 0x000b560cu; fn_0014814c(cpu);
    }
L_000b560c:;
    {
        cpu->r[3] = rd32(0x000b5614u + + 0x408u);
    }
L_000b5610:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000b5614:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b5618:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000b561c:;
    {
        cpu->r[14] = 0x000b5620u; fn_000f3430(cpu);
    }
L_000b5620:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0xb60u);
    }
L_000b5624:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b5628:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x0000002fu;
        }
    }
L_000b562c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000038u;
        }
    }
L_000b5630:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = 0x0000002eu;
        }
    }
L_000b5634:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000037u;
        }
    }
L_000b5638:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_000b563c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_000b5640:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b56a0;
        }
    }
L_000b5644:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 1);
    }
L_000b5648:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b57bc;
        }
    }
L_000b564c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000003u, 1, 1);
    }
L_000b5650:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b58e4;
        }
    }
L_000b5654:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b5658:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b565c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b5660:;
    {
        cpu->r[14] = 0x000b5668u;
    }
L_000b5664:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5668u)) return;
    }
L_000b5668:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000b566c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000b5670:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b5674:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b5678:;
    {
        cpu->r[14] = 0x000b5680u;
    }
L_000b567c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5680u)) return;
    }
L_000b5680:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b5684:;
    {
        cpu->r[14] = 0x000b5688u; fn_000b5130(cpu);
    }
L_000b5688:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000b568c:;
    {
        cpu->r[14] = 0x000b5690u; fn_000b2bc8(cpu);
    }
L_000b5690:;
    {
        goto L_000b54e0;
    }
L_000b5694:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b5698:;
    {
        cpu->r[14] = 0x000b569cu; fn_000b2a58(cpu);
    }
L_000b569c:;
    {
        goto L_000b55f4;
    }
L_000b56a0:;
    {
        cpu->r[3] = rd32(0x000b56a8u + + 0x378u);
    }
L_000b56a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b56a8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b56ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b56b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b586c;
        }
    }
L_000b56b4:;
    {
        cpu->r[3] = rd32(0x000b56bcu + + 0x368u);
    }
L_000b56b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b56bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b56c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b56c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b56f4;
        }
    }
L_000b56c8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000b56cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b5934;
        }
    }
L_000b56d0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b56d4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000b56d8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000b56dc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b56e0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b56e4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b56e8:;
    {
        cpu->r[14] = 0x000b56f0u;
    }
L_000b56ec:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b56f0u)) return;
    }
L_000b56f0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0xb60u);
    }
L_000b56f4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_000b56f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b58b0;
        }
    }
L_000b56fc:;
    {
        cpu->r[3] = rd32(0x000b5704u + + 0x324u);
    }
L_000b5700:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b5704:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b5708:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b570c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b5654;
        }
    }
L_000b5710:;
    {
        cpu->r[1] = rd32(0x000b5718u + + 0x314u);
    }
L_000b5714:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b571cu + + 0x2f4u);
    }
L_000b5718:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x88u);
    }
L_000b571c:;
    {
        cpu->r[2] = 0x0000128cu;
    }
L_000b5720:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b5724:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000b5728:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b572c:;
    {
        cpu->r[1] = rd32(0x000b5734u + + 0x2fcu);
    }
L_000b5730:;
    {
        uint32_t v = cpu->r[0] & 0x04000000u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_000b5734:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000b5738:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000b573c:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[11]);
    }
L_000b5740:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b5744:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000b5748:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b574c:;
    {
        cpu->r[1] = rd32(0x000b5754u + + 0x2e0u);
    }
L_000b5750:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000005u;
        }
    }
L_000b5754:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000006u;
        }
    }
L_000b5758:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b575c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000b5760:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5764:;
    {
        cpu->r[1] = rd32(0x000b576cu + + 0x2ccu);
    }
L_000b5768:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000b576c:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5770:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000b5774:;
    {
        cpu->r[5] = 0x0000128cu;
    }
L_000b5778:;
    {
        cpu->r[14] = 0x000b5780u;
    }
L_000b577c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5780u)) return;
    }
L_000b5780:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b5784:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000b5788:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_000b578c:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000b5790:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000b5794:;
    {
        wr32(cpu->r[6] + cpu->r[5], cpu->r[0]);
    }
L_000b5798:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b579c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b57a0:;
    {
        cpu->r[14] = 0x000b57a8u;
    }
L_000b57a4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b57a8u)) return;
    }
L_000b57a8:;
    {
        cpu->r[3] = 0x0000175cu;
    }
L_000b57ac:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b57b0:;
    {
        wr32(cpu->r[6] + cpu->r[5], cpu->r[7]);
    }
L_000b57b4:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_000b57b8:;
    {
        goto L_000b5654;
    }
L_000b57bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b57c0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000b57c4:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000b57c8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000b57cc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b57d0:;
    {
        wr32(cpu->r[6] + cpu->r[8], cpu->r[11]);
    }
L_000b57d4:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000b57d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b57dc:;
    {
        cpu->r[14] = 0x000b57e4u;
    }
L_000b57e0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b57e4u)) return;
    }
L_000b57e4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x88u);
    }
L_000b57e8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b57ec:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000b57f0:;
    {
        uint32_t v = cpu->r[2] & 0x04000000u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_000b57f4:;
    {
        cpu->r[5] = 0x0000128cu;
    }
L_000b57f8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000005u;
        }
    }
L_000b57fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000b5800:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000006u;
        }
    }
L_000b5804:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b5808:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b580c:;
    {
        cpu->r[14] = 0x000b5814u;
    }
L_000b5810:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5814u)) return;
    }
L_000b5814:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b5818:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000b581c:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000b5820:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_000b5824:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000b5828:;
    {
        wr32(cpu->r[6] + cpu->r[5], cpu->r[0]);
    }
L_000b582c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b5830:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b5834:;
    {
        cpu->r[14] = 0x000b583cu;
    }
L_000b5838:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b583cu)) return;
    }
L_000b583c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b5840:;
    {
        cpu->r[1] = 0x0000175cu;
    }
L_000b5844:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b5848:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000b584c:;
    {
        wr32(cpu->r[6] + cpu->r[5], cpu->r[10]);
    }
L_000b5850:;
    {
        wr32(cpu->r[6] + cpu->r[1], cpu->r[3]);
    }
L_000b5854:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_000b5858:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_000b585c:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_000b5860:;
    {
        cpu->r[14] = 0x000b5868u;
    }
L_000b5864:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5868u)) return;
    }
L_000b5868:;
    {
        goto L_000b5654;
    }
L_000b586c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b5870:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000b5874:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_000b5878:;
    {
        wr32(cpu->r[6] + cpu->r[8], cpu->r[2]);
    }
L_000b587c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b5880:;
    {
        cpu->r[2] = 0x00000015u;
    }
L_000b5884:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000b5888:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b588c:;
    {
        cpu->r[14] = 0x000b5894u;
    }
L_000b5890:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5894u)) return;
    }
L_000b5894:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x88u);
    }
L_000b5898:;
    {
        uint32_t v = cpu->r[2] & 0x04000000u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_000b589c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b5970;
        }
    }
L_000b58a0:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_000b58a4:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[10]);
    }
L_000b58a8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0xb60u);
    }
L_000b58ac:;
    {
        goto L_000b56b4;
    }
L_000b58b0:;
    {
        cpu->r[3] = rd32(0x000b58b8u + + 0x184u);
    }
L_000b58b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b58b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b58bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b58c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b5990;
        }
    }
L_000b58c4:;
    {
        cpu->r[3] = rd32(0x000b58ccu + + 0x174u);
    }
L_000b58c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b58cc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b58d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b58d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b56fc;
        }
    }
L_000b58d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b58dc:;
    {
        cpu->r[14] = 0x000b58e0u; fn_000af8d4(cpu);
    }
L_000b58e0:;
    {
        goto L_000b56fc;
    }
L_000b58e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b58e8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000b58ec:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000b58f0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000b58f4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b58f8:;
    {
        wr32(cpu->r[6] + cpu->r[8], cpu->r[11]);
    }
L_000b58fc:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000b5900:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b5904:;
    {
        cpu->r[14] = 0x000b590cu;
    }
L_000b5908:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b590cu)) return;
    }
L_000b590c:;
    {
        wr32(cpu->r[6] + cpu->r[8], cpu->r[5]);
    }
L_000b5910:;
    {
        goto L_000b5654;
    }
L_000b5914:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000b5918:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000b591c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x84u);
    }
L_000b5920:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b5924:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000b5928:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000b592c:;
    {
        cpu->r[14] = 0x000b5930u; fn_000b45f4(cpu);
    }
L_000b5930:;
    {
        goto L_000b5588;
    }
L_000b5934:;
    {
        cpu->r[7] = 0x0000128cu;
    }
L_000b5938:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b593c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000b5940:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b5944:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000b5948:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b594c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b5950:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b5954:;
    {
        wr32(cpu->r[6] + cpu->r[7], cpu->r[3]);
    }
L_000b5958:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000b595c:;
    {
        cpu->r[14] = 0x000b5964u;
    }
L_000b5960:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5964u)) return;
    }
L_000b5964:;
    {
        wr32(cpu->r[6] + cpu->r[7], cpu->r[8]);
    }
L_000b5968:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0xb60u);
    }
L_000b596c:;
    {
        goto L_000b56f4;
    }
L_000b5970:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b5974:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_000b5978:;
    {
        cpu->r[2] = 0x00000016u;
    }
L_000b597c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b5980:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b5984:;
    {
        cpu->r[14] = 0x000b598cu;
    }
L_000b5988:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b598cu)) return;
    }
L_000b598c:;
    {
        goto L_000b58a0;
    }
L_000b5990:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b5994:;
    {
        cpu->r[2] = 0x00000012u;
    }
L_000b5998:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_000b599c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b59a0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b59a4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b59a8:;
    {
        cpu->r[14] = 0x000b59b0u;
    }
L_000b59ac:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b59b0u)) return;
    }
L_000b59b0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x88u);
    }
L_000b59b4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b59b8:;
    {
        uint32_t v = cpu->r[0] & 0x08000001u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_000b59bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000013u;
        }
    }
L_000b59c0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000010u;
        }
    }
L_000b59c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000012u;
        }
    }
L_000b59c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000b59cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x0000000fu;
        }
    }
L_000b59d0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b59d4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b59d8:;
    {
        cpu->r[14] = 0x000b59e0u;
    }
L_000b59dc:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b59e0u)) return;
    }
L_000b59e0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b59e4:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 1);
    }
L_000b59e8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b58c4;
        }
    }
L_000b59ec:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000b59f0:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_000b59f4:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_000b59f8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b59fc:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b5a00:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b5a04:;
    {
        cpu->r[14] = 0x000b5a0cu;
    }
L_000b5a08:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5a0cu)) return;
    }
L_000b5a0c:;
    {
        goto L_000b58c4;
    }
}

/* _ZN11CGameObject11GetUPVectorEv @ 000b5a44 (arm) */
void fn_000b5a44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5a44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b5a4cu + + 0x10u);
    }
L_000b5a48:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5a4c:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5a50:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b5a58u + + 0x8u);
    }
L_000b5a54:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5a58:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameObject16SetSpawnWaypointEP8WAYPOINT @ 000b5a64 (arm) */
void fn_000b5a64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5a64:;
    {
        wr32(cpu->r[0] + + 0xb0u, cpu->r[1]);
    }
L_000b5a68:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameObject16GetSpawnWaypointEv @ 000b5a6c (arm) */
void fn_000b5a6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5a6c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xb0u);
    }
L_000b5a70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameObject15SetNextWaypointEP8WAYPOINT @ 000b5a74 (arm) */
void fn_000b5a74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5a74:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b5a78:;
    {
        wr32(cpu->r[0] + + 0xb4u, cpu->r[1]);
    }
L_000b5a7c:;
    {
        wr8(cpu->r[1] + + 0x3cu, cpu->r[3]);
    }
L_000b5a80:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameObject15GetNextWaypointEv @ 000b5a84 (arm) */
void fn_000b5a84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5a84:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xb4u);
    }
L_000b5a88:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameObject11GetPositionEv @ 000b5a8c (arm) */
void fn_000b5a8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5a8c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000068u, 0, 0);
    }
L_000b5a90:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameObject9GetLookAtEv @ 000b5a94 (arm) */
void fn_000b5a94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5a94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000074u, 0, 0);
    }
L_000b5a98:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameObject23SetFollowGroundRotationEb @ 000b5a9c (arm) */
void fn_000b5a9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5a9c:;
    {
        wr8(cpu->r[0] + + 0xe4u, cpu->r[1]);
    }
L_000b5aa0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameObject23GetFollowGroundRotationEv @ 000b5aa4 (arm) */
void fn_000b5aa4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5aa4:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0xe4u);
    }
L_000b5aa8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameObject6GetYawEv @ 000b5aac (arm) */
void fn_000b5aac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5aac:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xb8u);
    }
L_000b5ab0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameObject12GetTargetYawEv @ 000b5ab4 (arm) */
void fn_000b5ab4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5ab4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xbcu);
    }
L_000b5ab8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameObject17SetTargetPositionE8Vector3d @ 000b5abc (arm) */
void fn_000b5abc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5abc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000080u, 0, 0);
    }
L_000b5ac0:;
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
L_000b5ac4:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000b5ac8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameObject17GetTargetPositionEv @ 000b5acc (arm) */
void fn_000b5acc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5acc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000080u, 0, 0);
    }
L_000b5ad0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameObject15SetTargetLookAtE8Vector3d @ 000b5ad4 (arm) */
void fn_000b5ad4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5ad4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000b5ad8:;
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
L_000b5adc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x0000008cu, 0, 0);
    }
L_000b5ae0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_000b5ae4:;
    {
        cpu->r[4] = rd8(cpu->r[3] + + 0xe4u);
    }
L_000b5ae8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000b5aec:;
    {
        wr8(cpu->r[3] + + 0xc0u, cpu->r[5]);
    }
L_000b5af0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_000b5af4:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x70u);
        }
    }
L_000b5af8:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000b5afc:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[3] + + 0x94u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_000b5b00:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_000b5b04:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameObject15GetTargetLookAtEv @ 000b5b08 (arm) */
void fn_000b5b08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5b08:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000008cu, 0, 0);
    }
L_000b5b0c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameObject12SetMoveSpeedEf @ 000b5b10 (arm) */
void fn_000b5b10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5b10:;
    {
        wr32(cpu->r[0] + + 0xd4u, cpu->r[1]);
    }
L_000b5b14:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK11CGameObject12GetMoveSpeedEv @ 000b5b18 (arm) */
void fn_000b5b18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5b18:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xd4u);
    }
L_000b5b1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameObject14SetLookAtSpeedEf @ 000b5b20 (arm) */
void fn_000b5b20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5b20:;
    {
        wr32(cpu->r[0] + + 0xd8u, cpu->r[1]);
    }
L_000b5b24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK11CGameObject14GetLookAtSpeedEv @ 000b5b28 (arm) */
void fn_000b5b28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5b28:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xd8u);
    }
L_000b5b2c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameObject15SetAccelerationEif @ 000b5b30 (arm) */
void fn_000b5b30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5b30:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_000b5b34:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xd4u);
    }
L_000b5b38:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_000b5b3c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_000b5b40:;
    {
        wr32(cpu->r[0] + + 0xe0u, cpu->r[1]);
    }
L_000b5b44:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000b5b48:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000b5b4c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xdcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5b50:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameObject18ExecWaypointScriptEP8WAYPOINT @ 000b5b54 (arm) */
void fn_000b5b54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5b54:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000b5b58:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0x3cu);
    }
L_000b5b5c:;
    {
        cpu->r[3] = rd32(0x000b5b64u + + 0x34u);
    }
L_000b5b60:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b5b64:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b5b6cu, cpu->r[3], 0, 0);
    }
L_000b5b68:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000b5b6c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x10u);
    }
L_000b5b70:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000b5b74:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000b5b78:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000b5b7c:;
    {
        wr8(cpu->r[2] + + 0x3cu, cpu->r[0]);
    }
L_000b5b80:;
    {
        cpu->r[2] = rd32(0x000b5b88u + + 0x14u);
    }
L_000b5b84:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b5b88:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000b5b8c:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000b5b90:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000b5b94:;
    {
        return fn_000e0890(cpu);
    }
}

/* _ZN11CGameObject21ComputeTargetPosSpeedEv @ 000b5ba0 (arm) */
void fn_000b5ba0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5ba0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xd4u);
    }
L_000b5ba4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_000b5ba8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b5bb0u + + 0x88u);
    }
L_000b5bac:;
    {
        vfp_sync_flags(cpu);
    }
L_000b5bb0:;
    {
        if (cond_test(cpu, 10)) {
        *(uint32_t*)G(cpu->r[0] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_000b5bb4:;
    {
        if (cond_test(cpu, 10)) {
        *(uint32_t*)G(cpu->r[0] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_000b5bb8:;
    {
        if (cond_test(cpu, 10)) {
        *(uint32_t*)G(cpu->r[0] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_000b5bbc:;
    {
        if (cond_test(cpu, 10)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000b5bc0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x6cu);
    }
L_000b5bc4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x84u);
    }
L_000b5bc8:;
    {
        vfp_vsub(cpu, 13, 13, 15);
    }
L_000b5bcc:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[0] + + 0x80u);
    }
L_000b5bd0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x68u);
    }
L_000b5bd4:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[0] + + 0x88u);
    }
L_000b5bd8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x70u);
    }
L_000b5bdc:;
    {
        vfp_vmul(cpu, 15, 13, 13);
    }
L_000b5be0:;
    {
        vfp_vsub(cpu, 12, 9, 12);
    }
L_000b5be4:;
    {
        vfp_vmla(cpu, 15, 12, 12);
    }
L_000b5be8:;
    {
        vfp_vsub(cpu, 11, 10, 11);
    }
L_000b5bec:;
    {
        vfp_vmla(cpu, 15, 11, 11);
    }
L_000b5bf0:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_000b5bf4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000b5bf8:;
    {
        vfp_sync_flags(cpu);
    }
L_000b5bfc:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000b5c00:;
    {
        *vfp_s(cpu, 10) = *(float*)G(0x000b5c08u + + 0x34u);
    }
L_000b5c04:;
    {
        vfp_vdiv(cpu, 14, 14, 10);
    }
L_000b5c08:;
    {
        *vfp_s(cpu, 10) = *(float*)G(0x000b5c10u + + 0x30u);
    }
L_000b5c0c:;
    {
        vfp_vdiv(cpu, 15, 10, 15);
    }
L_000b5c10:;
    {
        vfp_vmul(cpu, 12, 14, 12);
    }
L_000b5c14:;
    {
        vfp_vmul(cpu, 13, 14, 13);
    }
L_000b5c18:;
    {
        vfp_vmul(cpu, 11, 14, 11);
    }
L_000b5c1c:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_000b5c20:;
    {
        vfp_vmul(cpu, 14, 11, 15);
    }
L_000b5c24:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000b5c28:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_000b5c2c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b5c30:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5c34:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameObject9SetLookAtE8Vector3d @ 000b5c44 (arm) */
void fn_000b5c44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5c44:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_000b5c48:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b5c50u + + 0x64u);
    }
L_000b5c4c:;
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
L_000b5c50:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b5c54:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000b5c58:;
    {
        cpu->r[5] = rd32(cpu->r[12] + + 0x68u);
    }
L_000b5c5c:;
    {
        cpu->r[4] = rd32(cpu->r[12] + + 0x6cu);
    }
L_000b5c60:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], 0x00000074u, 0, 0);
    }
L_000b5c64:;
    {
        wr8(cpu->r[12] + + 0xc0u, cpu->r[3]);
    }
L_000b5c68:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000b5c6c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x70u);
    }
L_000b5c70:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5c74:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5c78:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000b5c7c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000b5c80:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x74u);
    }
L_000b5c84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_000b5c88:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000b5c8c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5c90:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x78u);
    }
L_000b5c94:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5c98:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x7cu);
    }
L_000b5c9c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5ca0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b5ca8u + + 0x10u);
    }
L_000b5ca4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5ca8:;
    {
        cpu->r[14] = 0x000b5cacu; fn_00155004(cpu);
    }
L_000b5cac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000b5cb0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5cb4u)) return;
    }
}

/* _ZN11CGameObject7SetQuatEffff @ 000b5cbc (arm) */
void fn_000b5cbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5cbc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000b5cc0:;
    {
        return fn_00153678(cpu);
    }
}

/* _ZN11CGameObject14GetTranslationER8Vector3d @ 000b5cc4 (arm) */
void fn_000b5cc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5cc4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000b5cc8:;
    {
        return fn_0015365c(cpu);
    }
}

/* _ZN11CGameObject14SetTranslationEfff @ 000b5ccc (arm) */
void fn_000b5ccc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5ccc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000b5cd0:;
    {
        return fn_0015364c(cpu);
    }
}

/* _ZN11CGameObjectC1Ev @ 000b5cd4 (arm) */
void fn_000b5cd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5cd4:;
    {
        cpu->r[3] = rd32(0x000b5cdcu + + 0xe4u);
    }
L_000b5cd8:;
    {
        cpu->r[2] = rd32(0x000b5ce0u + + 0xe4u);
    }
L_000b5cdc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b5ce4u, cpu->r[3], 0, 0);
    }
L_000b5ce0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000b5ce4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b5ce8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b5cec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b5cf0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000b5cf4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000b5cf8:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[5]);
    }
L_000b5cfc:;
    {
        uint32_t wb_tmp = cpu->r[6] + 0x00000004u;
        wr32(cpu->r[6], cpu->r[2]);
        cpu->r[6] = wb_tmp;
    }
L_000b5d00:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b5d04:;
    {
        cpu->r[14] = 0x000b5d08u; fn_001535e0(cpu);
    }
L_000b5d08:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b5d10u + + 0xacu);
    }
L_000b5d0c:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[5]);
    }
L_000b5d10:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d14:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d18:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d1c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d20:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d24:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d28:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d2c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d30:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d34:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d38:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d3c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d40:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d44:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x90u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d48:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x94u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d4c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d50:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d54:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d58:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d5c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d60:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d64:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d68:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d6c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xccu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d70:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d74:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d78:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d7c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d80:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d84:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d88:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d8c:;
    {
        wr32(cpu->r[4] + + 0xb4u, cpu->r[5]);
    }
L_000b5d90:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b5d94:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xbcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d98:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xdcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5d9c:;
    {
        wr8(cpu->r[4] + + 0x48u, cpu->r[5]);
    }
L_000b5da0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5da4:;
    {
        wr8(cpu->r[4] + + 0xc0u, cpu->r[5]);
    }
L_000b5da8:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[5]);
    }
L_000b5dac:;
    {
        wr8(cpu->r[4] + + 0xe4u, cpu->r[5]);
    }
L_000b5db0:;
    {
        cpu->r[14] = 0x000b5db4u; fn_00153efc(cpu);
    }
L_000b5db4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b5db8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5dbcu)) return;
    }
}

/* _ZN11CGameObjectC2Ev @ 000b5dc8 (arm) */
void fn_000b5dc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5dc8:;
    {
        cpu->r[3] = rd32(0x000b5dd0u + + 0xe4u);
    }
L_000b5dcc:;
    {
        cpu->r[2] = rd32(0x000b5dd4u + + 0xe4u);
    }
L_000b5dd0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b5dd8u, cpu->r[3], 0, 0);
    }
L_000b5dd4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000b5dd8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b5ddc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b5de0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b5de4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000b5de8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000b5dec:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[5]);
    }
L_000b5df0:;
    {
        uint32_t wb_tmp = cpu->r[6] + 0x00000004u;
        wr32(cpu->r[6], cpu->r[2]);
        cpu->r[6] = wb_tmp;
    }
L_000b5df4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b5df8:;
    {
        cpu->r[14] = 0x000b5dfcu; fn_001535e0(cpu);
    }
L_000b5dfc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b5e04u + + 0xacu);
    }
L_000b5e00:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[5]);
    }
L_000b5e04:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e08:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e0c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e10:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e14:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e18:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e1c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e20:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e24:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e28:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e2c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e30:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e34:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e38:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x90u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e3c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x94u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e40:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e44:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e48:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e4c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e50:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e54:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e58:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e5c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e60:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xccu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e64:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e68:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e6c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e70:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e74:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e78:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e7c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e80:;
    {
        wr32(cpu->r[4] + + 0xb4u, cpu->r[5]);
    }
L_000b5e84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b5e88:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xbcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e8c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xdcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e90:;
    {
        wr8(cpu->r[4] + + 0x48u, cpu->r[5]);
    }
L_000b5e94:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5e98:;
    {
        wr8(cpu->r[4] + + 0xc0u, cpu->r[5]);
    }
L_000b5e9c:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[5]);
    }
L_000b5ea0:;
    {
        wr8(cpu->r[4] + + 0xe4u, cpu->r[5]);
    }
L_000b5ea4:;
    {
        cpu->r[14] = 0x000b5ea8u; fn_00153efc(cpu);
    }
L_000b5ea8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b5eac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5eb0u)) return;
    }
}

/* _ZN11CGameObject24ComputeTargetLookAtSpeedEv @ 000b5ebc (arm) */
void fn_000b5ebc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5ebc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000b5ec0:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_000b5ec4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[0] + + 0xd8u);
    }
L_000b5ec8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_000b5ecc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000b5ed0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b5ed4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b5edcu + + 0xd0u);
    }
L_000b5ed8:;
    {
        vfp_sync_flags(cpu);
    }
L_000b5edc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000b5f60;
        }
    }
L_000b5ee0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xc0u);
    }
L_000b5ee4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b5ee8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b5f48;
        }
    }
L_000b5eec:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_000b5ef0:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[0] + + 0x8cu);
    }
L_000b5ef4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x74u);
    }
L_000b5ef8:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[0] + + 0x90u);
    }
L_000b5efc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x78u);
    }
L_000b5f00:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[0] + + 0x94u);
    }
L_000b5f04:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x7cu);
    }
L_000b5f08:;
    {
        vfp_vsub(cpu, 17, 17, 13);
    }
L_000b5f0c:;
    {
        vfp_sync_flags(cpu);
    }
L_000b5f10:;
    {
        vfp_vsub(cpu, 19, 19, 14);
    }
L_000b5f14:;
    {
        vfp_vsub(cpu, 18, 18, 15);
    }
L_000b5f18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b5f74;
        }
    }
L_000b5f1c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b5f24u + + 0x8cu);
    }
L_000b5f20:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_000b5f24:;
    {
        vfp_vmul(cpu, 13, 17, 15);
    }
L_000b5f28:;
    {
        vfp_vmul(cpu, 14, 18, 15);
    }
L_000b5f2c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000b5f30:;
    {
        vfp_vmul(cpu, 15, 19, 15);
    }
L_000b5f34:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b5f38:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5f3c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000b5f40:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000b5f44:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b5f48u)) return;
    }
L_000b5f48:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xbcu);
    }
L_000b5f4c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0xb8u);
    }
L_000b5f50:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000b5f54:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_000b5f58:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xd0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5f5c:;
    {
        goto L_000b5f3c;
    }
L_000b5f60:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xd0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5f64:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5f68:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5f6c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5f70:;
    {
        goto L_000b5f3c;
    }
L_000b5f74:;
    {
        cpu->r[1] = rd32(0x000b5f7cu + + 0x38u);
    }
L_000b5f78:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000b5f7c:;
    {
        cpu->r[2] = rd32(0x000b5f84u + + 0x34u);
    }
L_000b5f80:;
    {
        cpu->r[14] = 0x00000087u;
    }
L_000b5f84:;
    {
        cpu->r[3] = rd32(0x000b5f8cu + + 0x30u);
    }
L_000b5f88:;
    {
        cpu->r[1] = add_flags(cpu, 0x000b5f90u, cpu->r[1], 0, 0);
    }
L_000b5f8c:;
    {
        cpu->r[12] = rd32(0x000b5f94u + + 0x2cu);
    }
L_000b5f90:;
    {
        cpu->r[2] = add_flags(cpu, 0x000b5f98u, cpu->r[2], 0, 0);
    }
L_000b5f94:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b5f9cu, cpu->r[3], 0, 0);
    }
L_000b5f98:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000b5f9c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000b5fa4u, cpu->r[12], 0, 0);
    }
L_000b5fa0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000b5fa4:;
    {
        cpu->r[14] = 0x000b5fa8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000b5fa8:;
    {
        goto L_000b5f1c;
    }
}

/* _ZN11CGameObject11SetPositionE8Vector3d @ 000b5fc4 (arm) */
void fn_000b5fc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b5fc4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000b5fc8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b5fcc:;
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
L_000b5fd0:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0xe4u);
    }
L_000b5fd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000068u, 0, 0);
    }
L_000b5fd8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000b5fdc:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000b5fe0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b5ff4;
        }
    }
L_000b5fe4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x70u);
    }
L_000b5fe8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b5fec:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x94u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5ff0:;
    {
        cpu->r[14] = 0x000b5ff4u; fn_000b5ebc(cpu);
    }
L_000b5ff4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x68u);
    }
L_000b5ff8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b5ffc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x6cu);
    }
L_000b6000:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b6004:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x70u);
    }
L_000b6008:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b600c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b6010u)) return;
    }
}

/* _ZN11CGameObject16MoveTowardTargetEv @ 000b6010 (arm) */
void fn_000b6010(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b6010:;
    {
        cpu->r[3] = rd32(0x000b6018u + + 0x178u);
    }
L_000b6014:;
    {
        cpu->r[2] = rd32(0x000b601cu + + 0x178u);
    }
L_000b6018:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b6020u, cpu->r[3], 0, 0);
    }
L_000b601c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000b6020:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_000b6024:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b6028:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[0] + + 0x98u);
    }
L_000b602c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[0] + + 0x9cu);
    }
L_000b6030:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[0] + + 0xa0u);
    }
L_000b6034:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000b6038:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b603c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000b6040:;
    {
        cpu->r[14] = 0x000b6044u; fn_000962e0(cpu);
    }
L_000b6044:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b6048:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b6074;
        }
    }
L_000b604c:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_000b6050:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000b6054:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000b605cu + + 0x12cu);
    }
L_000b6058:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000b605c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000b6060:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000b6064:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000b6068:;
    {
        vfp_vmul(cpu, 18, 18, 15);
    }
L_000b606c:;
    {
        vfp_vmul(cpu, 16, 16, 15);
    }
L_000b6070:;
    {
        vfp_vmul(cpu, 17, 17, 15);
    }
L_000b6074:;
    {
        vfp_vmul(cpu, 15, 17, 17);
    }
L_000b6078:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x84u);
    }
L_000b607c:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[4] + + 0x6cu);
    }
L_000b6080:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xe4u);
    }
L_000b6084:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x80u);
    }
L_000b6088:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4] + + 0x68u);
    }
L_000b608c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b6090:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x70u);
        }
    }
L_000b6094:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x88u);
        }
    }
L_000b6098:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x70u);
        }
    }
L_000b609c:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[4] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_000b60a0:;
    {
        vfp_vmla(cpu, 15, 16, 16);
    }
L_000b60a4:;
    {
        vfp_vmla(cpu, 15, 18, 18);
    }
L_000b60a8:;
    {
        vfp_vsub(cpu, 11, 11, 9);
    }
L_000b60ac:;
    {
        vfp_vsqrt(cpu, 8, 15);
    }
L_000b60b0:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 15) = *(float*)G(0x000b60b8u + + 0xd4u);
        }
    }
L_000b60b4:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[4] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_000b60b8:;
    {
        vfp_vmul(cpu, 15, 11, 11);
    }
L_000b60bc:;
    {
        vfp_vsub(cpu, 12, 12, 10);
    }
L_000b60c0:;
    {
        vfp_vmla(cpu, 15, 12, 12);
    }
L_000b60c4:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,13) = *vfp_s(cpu,14);
        }
    }
L_000b60c8:;
    {
        vfp_vsub(cpu, 13, 13, 14);
    }
L_000b60cc:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_000b60d0:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_000b60d4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,8), *vfp_s(cpu,15));
    }
L_000b60d8:;
    {
        vfp_sync_flags(cpu);
    }
L_000b60dc:;
    {
        if (cond_test(cpu, 6)) {
        goto L_000b6104;
        }
    }
L_000b60e0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_000b60e4:;
    {
        vfp_sync_flags(cpu);
    }
L_000b60e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b615c;
        }
    }
L_000b60ec:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), 0.0f);
    }
L_000b60f0:;
    {
        vfp_sync_flags(cpu);
    }
L_000b60f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b615c;
        }
    }
L_000b60f8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,18), 0.0f);
    }
L_000b60fc:;
    {
        vfp_sync_flags(cpu);
    }
L_000b6100:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b615c;
        }
    }
L_000b6104:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b6108:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b613c;
        }
    }
L_000b610c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xb4u);
    }
L_000b6110:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b6114:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b613c;
        }
    }
L_000b6118:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b611c:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_000b6120:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_000b6124:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b6128:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000b612c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b6130:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000b6134:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b6138:;
    {
        cpu->r[14] = 0x000b613cu; fn_000b5fc4(cpu);
    }
L_000b613c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b6140:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b6148u + + 0x44u);
    }
L_000b6144:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b6148:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b614c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b6150:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000b6154:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000b6158:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b615cu)) return;
    }
L_000b615c:;
    {
        vfp_vadd(cpu, 17, 17, 9);
    }
L_000b6160:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b6164:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000b6168:;
    {
        vfp_vadd(cpu, 18, 18, 14);
    }
L_000b616c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000b6170:;
    {
        vfp_vadd(cpu, 16, 16, 10);
    }
L_000b6174:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000b6178:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b617c:;
    {
        cpu->r[14] = 0x000b6180u; fn_000b5fc4(cpu);
    }
L_000b6180:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000b6184:;
    {
        goto L_000b6150;
    }
}

/* _ZN11CGameObjectD2Ev @ 000b6198 (arm) */
void fn_000b6198(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b6198:;
    {
        cpu->r[3] = rd32(0x000b61a0u + + 0x44u);
    }
L_000b619c:;
    {
        cpu->r[2] = rd32(0x000b61a4u + + 0x44u);
    }
L_000b61a0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000b61a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b61acu, cpu->r[3], 0, 0);
    }
L_000b61a8:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x44u);
    }
L_000b61ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b61b0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b61b4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000b61b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000b61bc:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000b61c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b61dc;
        }
    }
L_000b61c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b61c8:;
    {
        cpu->r[14] = 0x000b61ccu; fn_000b2bc8(cpu);
    }
L_000b61cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b61d0:;
    {
        cpu->r[14] = 0x000b61d4u; fn_0018ba20(cpu);
    }
L_000b61d4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b61d8:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_000b61dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b61e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b61e4u)) return;
    }
}
