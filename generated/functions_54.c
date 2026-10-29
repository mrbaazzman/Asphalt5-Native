#include "functions.h"

/* _ZN17EmitterShape_LineD0Ev @ 0014f5c0 (arm) */
void fn_0014f5c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f5c0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014f5c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f5c8:;
    {
        cpu->r[14] = 0x0014f5ccu; fn_0014f254(cpu);
    }
L_0014f5cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f5d0:;
    {
        cpu->r[14] = 0x0014f5d4u; fn_0018ba20(cpu);
    }
L_0014f5d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f5d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f5dcu)) return;
    }
}

/* _ZN21EmitterShape_CylinderD0Ev @ 0014f5dc (arm) */
void fn_0014f5dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f5dc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014f5e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f5e4:;
    {
        cpu->r[14] = 0x0014f5e8u; fn_0014f35c(cpu);
    }
L_0014f5e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f5ec:;
    {
        cpu->r[14] = 0x0014f5f0u; fn_0018ba20(cpu);
    }
L_0014f5f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f5f4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f5f8u)) return;
    }
}

/* _ZN19EmitterShape_SphereD0Ev @ 0014f5f8 (arm) */
void fn_0014f5f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f5f8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014f5fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f600:;
    {
        cpu->r[14] = 0x0014f604u; fn_0014f464(cpu);
    }
L_0014f604:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f608:;
    {
        cpu->r[14] = 0x0014f60cu; fn_0018ba20(cpu);
    }
L_0014f60c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f610:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f614u)) return;
    }
}

/* _ZN12EmitterShape3NewEi @ 0014f614 (arm) */
void fn_0014f614(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f614:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014f618:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0014f61c:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[0]) {
        case 0: goto L_0014f67c;
        case 1: goto L_0014f664;
        case 2: goto L_0014f64c;
        case 3: goto L_0014f634;
        default: guest_unimplemented(cpu, 0x0014f61cu); return; }
        }
    }
L_0014f620:;
    {
        goto L_0014f694;
    }
L_0014f634:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_0014f638:;
    {
        cpu->r[14] = 0x0014f63cu; fn_0018ba6c(cpu);
    }
L_0014f63c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f640:;
    {
        cpu->r[14] = 0x0014f644u; fn_0014e93c(cpu);
    }
L_0014f644:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f648:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f64cu)) return;
    }
L_0014f64c:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_0014f650:;
    {
        cpu->r[14] = 0x0014f654u; fn_0018ba6c(cpu);
    }
L_0014f654:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f658:;
    {
        cpu->r[14] = 0x0014f65cu; fn_0014e9e4(cpu);
    }
L_0014f65c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f660:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f664u)) return;
    }
L_0014f664:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_0014f668:;
    {
        cpu->r[14] = 0x0014f66cu; fn_0018ba6c(cpu);
    }
L_0014f66c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f670:;
    {
        cpu->r[14] = 0x0014f674u; fn_0014ef44(cpu);
    }
L_0014f674:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f678:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f67cu)) return;
    }
L_0014f67c:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_0014f680:;
    {
        cpu->r[14] = 0x0014f684u; fn_0018ba6c(cpu);
    }
L_0014f684:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f688:;
    {
        cpu->r[14] = 0x0014f68cu; fn_0014e8b0(cpu);
    }
L_0014f68c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f690:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f694u)) return;
    }
L_0014f694:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0014f698:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f69c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f6a0u)) return;
    }
}

/* _ZN17EmitterShape_Disc4LoadEP8LZMAFile @ 0014f6a0 (arm) */
void fn_0014f6a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f6a0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0014f6a4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014f6a8:;
    {
        cpu->r[0] = 0x00000030u;
    }
L_0014f6ac:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0014f6b0:;
    {
        cpu->r[14] = 0x0014f6b4u; fn_0018ba6c(cpu);
    }
L_0014f6b4:;
    {
        cpu->r[4] = rd32(0x0014f6bcu + + 0xa0u);
    }
L_0014f6b8:;
    {
        cpu->r[4] = add_flags(cpu, 0x0014f6c0u, cpu->r[4], 0, 0);
    }
L_0014f6bc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0014f6c0:;
    {
        cpu->r[14] = 0x0014f6c4u; fn_00140224(cpu);
    }
L_0014f6c4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0014f6c8:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[7]);
    }
L_0014f6cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0014f6d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f6d4u)) return;
        }
    }
L_0014f6d4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0014f6d8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0014f6dc:;
    {
        wr32(cpu->r[7] + + 0x24u, cpu->r[3]);
    }
L_0014f6e0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0014f6e4:;
    {
        cpu->r[14] = 0x0014f6e8u; fn_001404e8(cpu);
    }
L_0014f6e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014f6ec:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_0014f6f0:;
    {
        if (cond_test(cpu, 12)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f6f4u)) return;
        }
    }
L_0014f6f4:;
    {
        cpu->r[2] = rd32(0x0014f6fcu + + 0x64u);
    }
L_0014f6f8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0014f6fc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0014f700:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014f708u + + 0x50u);
    }
L_0014f704:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014f708:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014f70c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0014f710:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[7]);
    }
L_0014f714:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[7]);
    }
L_0014f718:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[2]);
    }
L_0014f71c:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[7]);
    }
L_0014f720:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[7]);
    }
L_0014f724:;
    {
        cpu->r[14] = 0x0014f728u; fn_000fc678(cpu);
    }
L_0014f728:;
    {
        wr8(cpu->r[5] + + 0x8u, cpu->r[0]);
    }
L_0014f72c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014f730:;
    {
        cpu->r[14] = 0x0014f734u; fn_000fc678(cpu);
    }
L_0014f734:;
    {
        wr8(cpu->r[5] + + 0x9u, cpu->r[0]);
    }
L_0014f738:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014f73c:;
    {
        cpu->r[14] = 0x0014f740u; fn_000fc650(cpu);
    }
L_0014f740:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0014f744:;
    {
        wr16(cpu->r[5] + + 0xau, cpu->r[0]);
    }
L_0014f748:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_0014f74c:;
    {
        cpu->r[14] = 0x0014f750u; fn_00150ed4(cpu);
    }
L_0014f750:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0014f754:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f758u)) return;
    }
}

/* _ZN17EmitterShape_DiscD1Ev @ 0014f764 (arm) */
void fn_0014f764(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f764:;
    {
        cpu->r[3] = rd32(0x0014f76cu + + 0x4cu);
    }
L_0014f768:;
    {
        cpu->r[2] = rd32(0x0014f770u + + 0x4cu);
    }
L_0014f76c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0014f770:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014f778u, cpu->r[3], 0, 0);
    }
L_0014f774:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x4u);
    }
L_0014f778:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f77c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0014f780:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0014f784:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0014f788:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0014f78c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014f7a8;
        }
    }
L_0014f790:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014f794:;
    {
        cpu->r[14] = 0x0014f798u; fn_00140b44(cpu);
    }
L_0014f798:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014f79c:;
    {
        cpu->r[14] = 0x0014f7a0u; fn_0018ba20(cpu);
    }
L_0014f7a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014f7a4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_0014f7a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f7ac:;
    {
        cpu->r[14] = 0x0014f7b0u; fn_0014e8d4(cpu);
    }
L_0014f7b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f7b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f7b8u)) return;
    }
}

/* _ZN17EmitterShape_DiscD0Ev @ 0014f7c0 (arm) */
void fn_0014f7c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f7c0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014f7c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f7c8:;
    {
        cpu->r[14] = 0x0014f7ccu; fn_0014f764(cpu);
    }
L_0014f7cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f7d0:;
    {
        cpu->r[14] = 0x0014f7d4u; fn_0018ba20(cpu);
    }
L_0014f7d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f7d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f7dcu)) return;
    }
}

/* _ZN17EmitterShape_DiscD2Ev @ 0014f7dc (arm) */
void fn_0014f7dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f7dc:;
    {
        cpu->r[3] = rd32(0x0014f7e4u + + 0x4cu);
    }
L_0014f7e0:;
    {
        cpu->r[2] = rd32(0x0014f7e8u + + 0x4cu);
    }
L_0014f7e4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0014f7e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014f7f0u, cpu->r[3], 0, 0);
    }
L_0014f7ec:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x4u);
    }
L_0014f7f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f7f4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0014f7f8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0014f7fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0014f800:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0014f804:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014f820;
        }
    }
L_0014f808:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014f80c:;
    {
        cpu->r[14] = 0x0014f810u; fn_00140b44(cpu);
    }
L_0014f810:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014f814:;
    {
        cpu->r[14] = 0x0014f818u; fn_0018ba20(cpu);
    }
L_0014f818:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014f81c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_0014f820:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f824:;
    {
        cpu->r[14] = 0x0014f828u; fn_0014e8d4(cpu);
    }
L_0014f828:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f82c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f830u)) return;
    }
}

/* _ZN17EmitterShape_Disc13SpawnParticleEPfii @ 0014f838 (arm) */
void fn_0014f838(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f838:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0014f83c:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_0014f840:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0014f844:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0014f848:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0014f84c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0014f850:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_0014f854:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f858:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0014f85c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_0014f860:;
    {
        cpu->r[14] = 0x0014f864u; fn_00150e7c(cpu);
    }
L_0014f864:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0014f868:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_0014f86c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014f870:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014f874:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014f878:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014f87c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014f880:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014f884:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014f888:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014f88c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0014f890:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0014f894:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0014f898:;
    {
        cpu->r[14] = 0x0014f89cu; guest_call(cpu, cpu->r[12]);
    }
L_0014f89c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0014f8a0:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0014f8a4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014f8a8:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014f8ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014f8b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014f8b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014f8b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014f8bc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014f8c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0014f8c4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0014f8c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0014f8cc:;
    {
        cpu->r[14] = 0x0014f8d0u; guest_call(cpu, cpu->r[12]);
    }
L_0014f8d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0014f8d4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014f8d8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014f8dc:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014f8e0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014f8e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014f8e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014f8ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014f8f0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014f8f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0014f8f8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0014f8fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014f900:;
    {
        cpu->r[14] = 0x0014f904u; guest_call(cpu, cpu->r[12]);
    }
L_0014f904:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0014f908:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0014f90c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014f910:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014f914:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014f918:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014f91c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014f920:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014f924:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014f928:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0014f92c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0014f930:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0014f934:;
    {
        cpu->r[14] = 0x0014f938u; guest_call(cpu, cpu->r[12]);
    }
L_0014f938:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0014f93c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0014f940:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014f944:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014f948:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014f94c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014f950:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014f954:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014f958:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014f95c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0014f960:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0014f964:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0014f968:;
    {
        cpu->r[14] = 0x0014f96cu; guest_call(cpu, cpu->r[12]);
    }
L_0014f96c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0014f970:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014f978u + + 0x10cu);
    }
L_0014f974:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_0014f978:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_0014f97c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_0014f980:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0014f984:;
    {
        vfp_vmul(cpu, 16, 15, 13);
    }
L_0014f988:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014f98c:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_0014f990:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0014f994:;
    {
        cpu->r[14] = 0x0014f998u; fn_00096514(cpu);
    }
L_0014f998:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0014f99c:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[0];
    }
L_0014f9a0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0014f9a4:;
    {
        cpu->r[14] = 0x0014f9a8u; fn_00096514(cpu);
    }
L_0014f9a8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x9u);
    }
L_0014f9ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014f9b0:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[0];
    }
L_0014f9b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014fa34;
        }
    }
L_0014f9b8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8u);
    }
L_0014f9bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014f9c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014fa70;
        }
    }
L_0014f9c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_0014f9c8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_0014f9cc:;
    {
        vfp_vsub(cpu, 12, 12, 15);
    }
L_0014f9d0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x10u);
    }
L_0014f9d4:;
    {
        cpu->r[4] = rd16(cpu->r[4] + + 0xau);
    }
L_0014f9d8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[4];
    }
L_0014f9dc:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0014f9e0:;
    {
        vfp_vmul(cpu, 13, 12, 13);
    }
L_0014f9e4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0014f9e8:;
    {
        vfp_vdiv(cpu, 14, 13, 14);
    }
L_0014f9ec:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_0014f9f0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014f9f8u + + 0x90u);
    }
L_0014f9f4:;
    {
        vfp_vmul(cpu, 16, 15, 14);
    }
L_0014f9f8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0014f9fc:;
    {
        cpu->r[14] = 0x0014fa00u; imp_cosf(cpu); /* cosf */
    }
L_0014fa00:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014fa08u + + 0x84u);
    }
L_0014fa04:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014fa08:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0014fa0c:;
    {
        vfp_vmul(cpu, 15, 18, 14);
    }
L_0014fa10:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0014fa14:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014fa18:;
    {
        cpu->r[14] = 0x0014fa1cu; imp_sinf(cpu); /* sinf */
    }
L_0014fa1c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0014fa20:;
    {
        vfp_vmul(cpu, 15, 17, 13);
    }
L_0014fa24:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014fa28:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0014fa2c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_0014fa30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014fa34u)) return;
    }
L_0014fa34:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014fa38:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0014fa3c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x43b4u << 16);
    }
L_0014fa40:;
    {
        cpu->r[14] = 0x0014fa44u; fn_00096514(cpu);
    }
L_0014fa44:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8u);
    }
L_0014fa48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014fa4c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0014fa50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014f9f0;
        }
    }
L_0014fa54:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x10u);
    }
L_0014fa58:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_0014fa5c:;
    {
        cpu->r[4] = rd16(cpu->r[4] + + 0xau);
    }
L_0014fa60:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_0014fa64:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[4];
    }
L_0014fa68:;
    {
        vfp_vsub(cpu, 12, 11, 12);
    }
L_0014fa6c:;
    {
        goto L_0014f9dc;
    }
L_0014fa70:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0014fa74:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0014fa78:;
    {
        cpu->r[14] = 0x0014fa7cu; fn_00096514(cpu);
    }
L_0014fa7c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0014fa80:;
    {
        goto L_0014f9f0;
    }
}

/* _ZN10ForceFieldD1Ev @ 0014fa90 (arm) */
void fn_0014fa90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014fa90:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12GravityField7GetTypeEv @ 0014fa94 (arm) */
void fn_0014fa94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014fa94:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0014fa98:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12GravityFieldC2Ev @ 0014fa9c (arm) */
void fn_0014fa9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014fa9c:;
    {
        cpu->r[3] = rd32(0x0014faa4u + + 0x1cu);
    }
L_0014faa0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0014faa4:;
    {
        cpu->r[2] = rd32(0x0014faacu + + 0x18u);
    }
L_0014faa8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014fab0u, cpu->r[3], 0, 0);
    }
L_0014faac:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_0014fab0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0014fab4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0014fab8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0014fabc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12GravityFieldC1Ev @ 0014fac8 (arm) */
void fn_0014fac8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014fac8:;
    {
        cpu->r[3] = rd32(0x0014fad0u + + 0x1cu);
    }
L_0014facc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0014fad0:;
    {
        cpu->r[2] = rd32(0x0014fad8u + + 0x18u);
    }
L_0014fad4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014fadcu, cpu->r[3], 0, 0);
    }
L_0014fad8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_0014fadc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0014fae0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0014fae4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0014fae8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12GravityField5ApplyEP8ParticleP7CMatrix @ 0014faf4 (arm) */
void fn_0014faf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014faf4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0014faf8:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_0014fafc:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0xau);
    }
L_0014fb00:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_0014fb04:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0014fb08:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014fb0c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0014fb10:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0014fb14:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x10u);
    }
L_0014fb18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014fb3c;
        }
    }
L_0014fb1c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0xcu);
    }
L_0014fb20:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0014fb24:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0014fb34;
        }
    }
L_0014fb28:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x4au);
    }
L_0014fb2c:;
    {
        cpu->r[14] = 0x0014fb30u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0014fb30:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0014fb34:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0014fb38:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x4au);
        }
    }
L_0014fb3c:;
    {
        cpu->r[7] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x48u);
    }
L_0014fb40:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0014fb44:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0014fb48:;
    {
        cpu->r[14] = 0x0014fb4cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0014fb4c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0014fb50:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0014fb54:;
    {
        uint32_t v = cpu->r[7] - cpu->r[6] * cpu->r[0]; cpu->r[1] = v;
    }
L_0014fb58:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000au, 0, 0);
    }
L_0014fb5c:;
    {
        cpu->r[14] = 0x0014fb60u; fn_00150e7c(cpu);
    }
L_0014fb60:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0014fb64:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014fb6cu + + 0x14cu);
    }
L_0014fb68:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014fb6c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014fb70:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014fb74:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014fb78:;
    {
        cpu->r[6] = cpu->r[13];
    }
L_0014fb7c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0014fb80:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014fb84:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014fb88:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014fb8c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014fb90:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014fb94:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014fb98:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014fb9c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0014fba0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0014fba4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014fba8:;
    {
        cpu->r[14] = 0x0014fbacu; guest_call(cpu, cpu->r[12]);
    }
L_0014fbac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0014fbb0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0014fbb4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014fbb8:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014fbbc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014fbc0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014fbc4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014fbc8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014fbcc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014fbd0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0014fbd4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0014fbd8:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_0014fbdc:;
    {
        cpu->r[14] = 0x0014fbe0u; guest_call(cpu, cpu->r[12]);
    }
L_0014fbe0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13]);
    }
L_0014fbe4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014fbecu + + 0xd0u);
    }
L_0014fbe8:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_0014fbec:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_0014fbf0:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_0014fbf4:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0014fbf8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0014fbfc:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0014fc00:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0014fc04:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_0014fc08:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0014fc0c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014fc10:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014fc14:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014fc18:;
    {
        cpu->r[14] = 0x0014fc1cu; fn_001564f4(cpu);
    }
L_0014fc1c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x8u);
    }
L_0014fc20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014fc24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014fca8;
        }
    }
L_0014fc28:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x9u);
    }
L_0014fc2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014fc30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014fc70;
        }
    }
L_0014fc34:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_0014fc38:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0014fc3c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x24u);
    }
L_0014fc40:;
    {
        vfp_vmla(cpu, 12, 13, 11);
    }
L_0014fc44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x20u);
    }
L_0014fc48:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x28u);
    }
L_0014fc4c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_0014fc50:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0014fc54:;
    {
        vfp_vmla(cpu, 14, 13, 11);
    }
L_0014fc58:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13]);
    }
L_0014fc5c:;
    {
        vfp_vmla(cpu, 15, 13, 12);
    }
L_0014fc60:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014fc64:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014fc68:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0014fc6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014fc70u)) return;
    }
L_0014fc70:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_0014fc74:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0014fc78:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x18u);
    }
L_0014fc7c:;
    {
        vfp_vmla(cpu, 12, 13, 11);
    }
L_0014fc80:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_0014fc84:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x1cu);
    }
L_0014fc88:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_0014fc8c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0014fc90:;
    {
        vfp_vmla(cpu, 14, 13, 11);
    }
L_0014fc94:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13]);
    }
L_0014fc98:;
    {
        vfp_vmla(cpu, 15, 13, 12);
    }
L_0014fc9c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014fca0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014fca4:;
    {
        goto L_0014fc68;
    }
L_0014fca8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0014fcac:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_0014fcb0:;
    {
        cpu->r[14] = 0x0014fcb4u; fn_00153cec(cpu);
    }
L_0014fcb4:;
    {
        goto L_0014fc28;
    }
}

/* _ZN12GravityField4LoadEP8LZMAFile @ 0014fcc0 (arm) */
void fn_0014fcc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014fcc0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0014fcc4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014fcc8:;
    {
        cpu->r[0] = 0x00000030u;
    }
L_0014fccc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0014fcd0:;
    {
        cpu->r[14] = 0x0014fcd4u; fn_0018ba6c(cpu);
    }
L_0014fcd4:;
    {
        cpu->r[4] = rd32(0x0014fcdcu + + 0x94u);
    }
L_0014fcd8:;
    {
        cpu->r[4] = add_flags(cpu, 0x0014fce0u, cpu->r[4], 0, 0);
    }
L_0014fcdc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0014fce0:;
    {
        cpu->r[14] = 0x0014fce4u; fn_00140224(cpu);
    }
L_0014fce4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0014fce8:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[7]);
    }
L_0014fcec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0014fcf0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014fcf4u)) return;
        }
    }
L_0014fcf4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0014fcf8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0014fcfc:;
    {
        wr32(cpu->r[7] + + 0x24u, cpu->r[3]);
    }
L_0014fd00:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0014fd04:;
    {
        cpu->r[14] = 0x0014fd08u; fn_001404e8(cpu);
    }
L_0014fd08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014fd0c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_0014fd10:;
    {
        if (cond_test(cpu, 12)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014fd14u)) return;
        }
    }
L_0014fd14:;
    {
        cpu->r[2] = rd32(0x0014fd1cu + + 0x58u);
    }
L_0014fd18:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0014fd1c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0014fd20:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014fd28u + + 0x44u);
    }
L_0014fd24:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014fd28:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014fd2c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0014fd30:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[7]);
    }
L_0014fd34:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[7]);
    }
L_0014fd38:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[2]);
    }
L_0014fd3c:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[7]);
    }
L_0014fd40:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[7]);
    }
L_0014fd44:;
    {
        cpu->r[14] = 0x0014fd48u; fn_000fc678(cpu);
    }
L_0014fd48:;
    {
        wr8(cpu->r[5] + + 0x8u, cpu->r[0]);
    }
L_0014fd4c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014fd50:;
    {
        cpu->r[14] = 0x0014fd54u; fn_000fc678(cpu);
    }
L_0014fd54:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0014fd58:;
    {
        wr8(cpu->r[5] + + 0x9u, cpu->r[0]);
    }
L_0014fd5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000au, 0, 0);
    }
L_0014fd60:;
    {
        cpu->r[14] = 0x0014fd64u; fn_00150ed4(cpu);
    }
L_0014fd64:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0014fd68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014fd6cu)) return;
    }
}

/* _ZN10ForceFieldD0Ev @ 0014fd78 (arm) */
void fn_0014fd78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014fd78:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014fd7c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014fd80:;
    {
        cpu->r[14] = 0x0014fd84u; fn_0018ba20(cpu);
    }
L_0014fd84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014fd88:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014fd8cu)) return;
    }
}

/* _ZN12GravityFieldD1Ev @ 0014fd8c (arm) */
void fn_0014fd8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014fd8c:;
    {
        cpu->r[3] = rd32(0x0014fd94u + + 0x44u);
    }
L_0014fd90:;
    {
        cpu->r[2] = rd32(0x0014fd98u + + 0x44u);
    }
L_0014fd94:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0014fd98:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014fda0u, cpu->r[3], 0, 0);
    }
L_0014fd9c:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x4u);
    }
L_0014fda0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014fda4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0014fda8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0014fdac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0014fdb0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0014fdb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014fdd0;
        }
    }
L_0014fdb8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014fdbc:;
    {
        cpu->r[14] = 0x0014fdc0u; fn_00140b44(cpu);
    }
L_0014fdc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014fdc4:;
    {
        cpu->r[14] = 0x0014fdc8u; fn_0018ba20(cpu);
    }
L_0014fdc8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014fdcc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_0014fdd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014fdd4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014fdd8u)) return;
    }
}

/* _ZN12GravityFieldD0Ev @ 0014fde0 (arm) */
void fn_0014fde0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014fde0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014fde4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014fde8:;
    {
        cpu->r[14] = 0x0014fdecu; fn_0014fd8c(cpu);
    }
L_0014fdec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014fdf0:;
    {
        cpu->r[14] = 0x0014fdf4u; fn_0018ba20(cpu);
    }
L_0014fdf4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014fdf8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014fdfcu)) return;
    }
}

/* _ZN12GravityFieldD2Ev @ 0014fdfc (arm) */
void fn_0014fdfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014fdfc:;
    {
        cpu->r[3] = rd32(0x0014fe04u + + 0x44u);
    }
L_0014fe00:;
    {
        cpu->r[2] = rd32(0x0014fe08u + + 0x44u);
    }
L_0014fe04:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0014fe08:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014fe10u, cpu->r[3], 0, 0);
    }
L_0014fe0c:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x4u);
    }
L_0014fe10:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014fe14:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0014fe18:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0014fe1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0014fe20:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0014fe24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014fe40;
        }
    }
L_0014fe28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014fe2c:;
    {
        cpu->r[14] = 0x0014fe30u; fn_00140b44(cpu);
    }
L_0014fe30:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014fe34:;
    {
        cpu->r[14] = 0x0014fe38u; fn_0018ba20(cpu);
    }
L_0014fe38:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014fe3c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_0014fe40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014fe44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014fe48u)) return;
    }
}

/* _ZN10ForceField3NewEi @ 0014fe50 (arm) */
void fn_0014fe50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014fe50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0014fe54:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014fe58:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0014fe5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014fea0;
        }
    }
L_0014fe60:;
    {
        cpu->r[1] = rd32(0x0014fe68u + + 0x50u);
    }
L_0014fe64:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014fe68:;
    {
        cpu->r[2] = rd32(0x0014fe70u + + 0x4cu);
    }
L_0014fe6c:;
    {
        cpu->r[14] = 0x00000017u;
    }
L_0014fe70:;
    {
        cpu->r[3] = rd32(0x0014fe78u + + 0x48u);
    }
L_0014fe74:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014fe7cu, cpu->r[1], 0, 0);
    }
L_0014fe78:;
    {
        cpu->r[12] = rd32(0x0014fe80u + + 0x44u);
    }
L_0014fe7c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014fe84u, cpu->r[2], 0, 0);
    }
L_0014fe80:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014fe88u, cpu->r[3], 0, 0);
    }
L_0014fe84:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0014fe88:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014fe90u, cpu->r[12], 0, 0);
    }
L_0014fe8c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0014fe90:;
    {
        cpu->r[14] = 0x0014fe94u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014fe94:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0014fe98:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0014fe9c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014fea0u)) return;
    }
L_0014fea0:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_0014fea4:;
    {
        cpu->r[14] = 0x0014fea8u; fn_0018ba6c(cpu);
    }
L_0014fea8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014feac:;
    {
        cpu->r[14] = 0x0014feb0u; fn_0014fac8(cpu);
    }
L_0014feb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014feb4:;
    {
        goto L_0014fe98;
    }
}

/* _ZN8ParticleC2Ev @ 0014fec8 (arm) */
void fn_0014fec8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014fec8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014fed0u + + 0x40u);
    }
L_0014fecc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0014fed0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014fed4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014fed8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014fedc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014fee0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014fee4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014fee8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014feec:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014fef0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014fef4:;
    {
        wr16(cpu->r[0] + + 0x6cu, cpu->r[2]);
    }
L_0014fef8:;
    {
        wr16(cpu->r[0] + + 0x4eu, cpu->r[2]);
    }
L_0014fefc:;
    {
        wr16(cpu->r[0] + + 0x54u, cpu->r[2]);
    }
L_0014ff00:;
    {
        wr16(cpu->r[0] + + 0x5au, cpu->r[2]);
    }
L_0014ff04:;
    {
        wr16(cpu->r[0] + + 0x60u, cpu->r[2]);
    }
L_0014ff08:;
    {
        wr16(cpu->r[0] + + 0x66u, cpu->r[2]);
    }
L_0014ff0c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8ParticleC1Ev @ 0014ff14 (arm) */
void fn_0014ff14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ff14:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014ff1cu + + 0x40u);
    }
L_0014ff18:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0014ff1c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014ff20:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014ff24:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014ff28:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014ff2c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014ff30:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014ff34:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014ff38:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014ff3c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014ff40:;
    {
        wr16(cpu->r[0] + + 0x6cu, cpu->r[2]);
    }
L_0014ff44:;
    {
        wr16(cpu->r[0] + + 0x4eu, cpu->r[2]);
    }
L_0014ff48:;
    {
        wr16(cpu->r[0] + + 0x54u, cpu->r[2]);
    }
L_0014ff4c:;
    {
        wr16(cpu->r[0] + + 0x5au, cpu->r[2]);
    }
L_0014ff50:;
    {
        wr16(cpu->r[0] + + 0x60u, cpu->r[2]);
    }
L_0014ff54:;
    {
        wr16(cpu->r[0] + + 0x66u, cpu->r[2]);
    }
L_0014ff58:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8ParticleD2Ev @ 0014ff60 (arm) */
void fn_0014ff60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ff60:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8ParticleD1Ev @ 0014ff64 (arm) */
void fn_0014ff64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ff64:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Particle7SetSizeEff @ 0014ff68 (arm) */
void fn_0014ff68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ff68:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[2]);
    }
L_0014ff6c:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[1]);
    }
L_0014ff70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Particle10SetBaseRotEfff @ 0014ff74 (arm) */
void fn_0014ff74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ff74:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[3]);
    }
L_0014ff78:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[1]);
    }
L_0014ff7c:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[2]);
    }
L_0014ff80:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Particle12SetSRTCenterEii @ 0014ff84 (arm) */
void fn_0014ff84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ff84:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_0014ff88:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0014ff8c:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_0014ff90:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014ff98u + + 0x14u);
    }
L_0014ff94:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0014ff98:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0014ff9c:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_0014ffa0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014ffa4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014ffa8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Particle6SetPosEfff @ 0014ffb0 (arm) */
void fn_0014ffb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ffb0:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_0014ffb4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_0014ffb8:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_0014ffbc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Particle8SetSpeedEfff @ 0014ffc0 (arm) */
void fn_0014ffc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ffc0:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_0014ffc4:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[1]);
    }
L_0014ffc8:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_0014ffcc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Particle8IncAniFrERsS0_S0_ @ 0014ffd0 (arm) */
void fn_0014ffd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ffd0:;
    {
        cpu->r[0] = rd16(cpu->r[1]);
    }
L_0014ffd4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0014ffd8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0014ffdc:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0014ffe0:;
    {
        wr16(cpu->r[1], cpu->r[0]);
    }
L_0014ffe4:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_0014ffe8:;
    {
        cpu->r[4] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_0014ffec:;
    {
        cpu->r[12] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_0014fff0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 1);
    }
L_0014fff4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
        }
    }
L_0014fff8:;
    {
        if (cond_test(cpu, 11)) {
        wr16(cpu->r[1], cpu->r[0]);
        }
    }
L_0014fffc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd16(cpu->r[2]);
        }
    }
L_00150000:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_00150004:;
    {
        if (cond_test(cpu, 11)) {
        wr16(cpu->r[2], cpu->r[3]);
        }
    }
L_00150008:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0015000c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Particle6UpdateEP7CMatrix @ 00150010 (arm) */
void fn_00150010(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00150010:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x48u);
    }
L_00150014:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x4au);
    }
L_00150018:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015001c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00150020:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00150024:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00150028:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015002cu)) return;
        }
    }
L_0015002c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x14u);
    }
L_00150030:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x18u);
    }
L_00150034:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x1cu);
    }
L_00150038:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x20u);
    }
L_0015003c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x24u);
    }
L_00150040:;
    {
        vfp_vadd(cpu, 12, 12, 15);
    }
L_00150044:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x28u);
    }
L_00150048:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x70u);
    }
L_0015004c:;
    {
        vfp_vadd(cpu, 14, 11, 14);
    }
L_00150050:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00150054:;
    {
        vfp_vadd(cpu, 15, 13, 15);
    }
L_00150058:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015005c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00150060:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0xa0u);
    }
L_00150064:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00150068:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001500a4;
        }
    }
L_0015006c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00150070:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xa4u);
    }
L_00150074:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00150078:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0015007c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00150080:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00150084:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00150088:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0015008c:;
    {
        cpu->r[14] = 0x00150094u;
    }
L_00150090:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00150094u)) return;
    }
L_00150094:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_00150098:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0xa0u);
    }
L_0015009c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_001500a0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00150070;
        }
    }
L_001500a4:;
    {
        cpu->r[0] = rd16(cpu->r[4] + + 0x48u);
    }
L_001500a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x0000004eu, 0, 0);
    }
L_001500ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000050u, 0, 0);
    }
L_001500b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000004cu, 0, 0);
    }
L_001500b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001500b8:;
    {
        wr16(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_001500bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001500c0:;
    {
        cpu->r[14] = 0x001500c4u; fn_0014ffd0(cpu);
    }
L_001500c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001500c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000054u, 0, 0);
    }
L_001500cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000056u, 0, 0);
    }
L_001500d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000052u, 0, 0);
    }
L_001500d4:;
    {
        cpu->r[14] = 0x001500d8u; fn_0014ffd0(cpu);
    }
L_001500d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001500dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x0000005au, 0, 0);
    }
L_001500e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x0000005cu, 0, 0);
    }
L_001500e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000058u, 0, 0);
    }
L_001500e8:;
    {
        cpu->r[14] = 0x001500ecu; fn_0014ffd0(cpu);
    }
L_001500ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001500f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000060u, 0, 0);
    }
L_001500f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000062u, 0, 0);
    }
L_001500f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000005eu, 0, 0);
    }
L_001500fc:;
    {
        cpu->r[14] = 0x00150100u; fn_0014ffd0(cpu);
    }
L_00150100:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00150104:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000066u, 0, 0);
    }
L_00150108:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000068u, 0, 0);
    }
L_0015010c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000064u, 0, 0);
    }
L_00150110:;
    {
        cpu->r[14] = 0x00150114u; fn_0014ffd0(cpu);
    }
L_00150114:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00150118:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x0000006cu, 0, 0);
    }
L_0015011c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x0000006eu, 0, 0);
    }
L_00150120:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000006au, 0, 0);
    }
L_00150124:;
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
L_00150128:;
    {
        return fn_0014ffd0(cpu);
    }
}

/* _ZN8Particle11InitAniVarsEP16ParticleAniParmsRsS2_i @ 0015012c (arm) */
void fn_0015012c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015012c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00150130:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00150134:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00150138:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0015013c:;
    {
        wr16(cpu->r[4], cpu->r[2]);
    }
L_00150140:;
    {
        wr16(cpu->r[3], cpu->r[2]);
    }
L_00150144:;
    {
        cpu->r[3] = rd8(cpu->r[1]);
    }
L_00150148:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015014c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00150184;
        }
    }
L_00150150:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x2u);
    }
L_00150154:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00150158:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd16(cpu->r[4]);
        }
    }
L_0015015c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00150170;
        }
    }
L_00150160:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x4au);
    }
L_00150164:;
    {
        cpu->r[14] = 0x00150168u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00150168:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0015016c:;
    {
        wr16(cpu->r[4], cpu->r[0]);
    }
L_00150170:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_00150174:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00150178:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = rd16(cpu->r[5] + + 0x4au);
        }
    }
L_0015017c:;
    {
        if (cond_test(cpu, 14)) {
        wr16(cpu->r[4], cpu->r[5]);
        }
    }
L_00150180:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00150184u)) return;
    }
L_00150184:;
    {
        cpu->r[3] = rd16(cpu->r[13] + + 0x10u);
    }
L_00150188:;
    {
        wr16(cpu->r[4], cpu->r[3]);
    }
L_0015018c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00150190u)) return;
    }
}

/* _ZN8Particle16PrepareForLaunchEv @ 00150190 (arm) */
void fn_00150190(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00150190:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x70u);
    }
L_00150194:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x0000004cu, 0, 0);
    }
L_00150198:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0015019c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000084u, 0, 0);
    }
L_001501a0:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x68u);
    }
L_001501a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001501a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001501ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000050u, 0, 0);
    }
L_001501b0:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x10u);
    }
L_001501b4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001501b8:;
    {
        cpu->r[14] = 0x001501bcu; fn_0015012c(cpu);
    }
L_001501bc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x70u);
    }
L_001501c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001501c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000052u, 0, 0);
    }
L_001501c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000056u, 0, 0);
    }
L_001501cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000088u, 0, 0);
    }
L_001501d0:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x6cu);
    }
L_001501d4:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x10u);
    }
L_001501d8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001501dc:;
    {
        cpu->r[14] = 0x001501e0u; fn_0015012c(cpu);
    }
L_001501e0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x70u);
    }
L_001501e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001501e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000058u, 0, 0);
    }
L_001501ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000005cu, 0, 0);
    }
L_001501f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x0000008cu, 0, 0);
    }
L_001501f4:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x70u);
    }
L_001501f8:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x10u);
    }
L_001501fc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00150200:;
    {
        cpu->r[14] = 0x00150204u; fn_0015012c(cpu);
    }
L_00150204:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x70u);
    }
L_00150208:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015020c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x0000005eu, 0, 0);
    }
L_00150210:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000062u, 0, 0);
    }
L_00150214:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000090u, 0, 0);
    }
L_00150218:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x74u);
    }
L_0015021c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x10u);
    }
L_00150220:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00150224:;
    {
        cpu->r[14] = 0x00150228u; fn_0015012c(cpu);
    }
L_00150228:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x70u);
    }
L_0015022c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00150230:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000064u, 0, 0);
    }
L_00150234:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000068u, 0, 0);
    }
L_00150238:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000098u, 0, 0);
    }
L_0015023c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x7cu);
    }
L_00150240:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x10u);
    }
L_00150244:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00150248:;
    {
        cpu->r[14] = 0x0015024cu; fn_0015012c(cpu);
    }
L_0015024c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x70u);
    }
L_00150250:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00150254:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x0000006au, 0, 0);
    }
L_00150258:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000006eu, 0, 0);
    }
L_0015025c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x0000009cu, 0, 0);
    }
L_00150260:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x80u);
    }
L_00150264:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x10u);
    }
L_00150268:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0015026c:;
    {
        cpu->r[14] = 0x00150270u; fn_0015012c(cpu);
    }
L_00150270:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00150274:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00150278u)) return;
    }
}

/* _ZN13ParticleQueueC2Ev @ 00150278 (arm) */
void fn_00150278(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00150278:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015027c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00150280:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00150284:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00150288:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13ParticleQueueC1Ev @ 0015028c (arm) */
void fn_0015028c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015028c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00150290:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00150294:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00150298:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015029c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13ParticleQueue6AppendEP8Particle @ 001502a0 (arm) */
void fn_001502a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001502a0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001502a4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001502a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001502ac:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0], cpu->r[1]);
        }
    }
L_001502b0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x78u, cpu->r[1]);
        }
    }
L_001502b4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001502b8:;
    {
        wr32(cpu->r[1] + + 0x78u, cpu->r[2]);
    }
L_001502bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001502c0:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_001502c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Particle14DisableTexMapsEv @ 001502c8 (arm) */
void fn_001502c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001502c8:;
    {
        cpu->r[3] = rd32(0x001502d0u + + 0x14u);
    }
L_001502cc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001502d0:;
    {
        cpu->r[2] = rd32(0x001502d8u + + 0x10u);
    }
L_001502d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001502dcu, cpu->r[3], 0, 0);
    }
L_001502d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001502dc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001502e0:;
    {
        return fn_0012e1f4(cpu);
    }
}

/* _ZN8Particle3NewEh @ 001502ec (arm) */
void fn_001502ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001502ec:;
    {
        cpu->r[3] = rd32(0x001502f4u + + 0xdcu);
    }
L_001502f0:;
    {
        cpu->r[2] = rd32(0x001502f8u + + 0xdcu);
    }
L_001502f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001502fcu, cpu->r[3], 0, 0);
    }
L_001502f8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001502fc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00150300:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00150304:;
    {
        cpu->r[4] = rd32(cpu->r[2]);
    }
L_00150308:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0015030c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015036c;
        }
    }
L_00150310:;
    {
        cpu->r[1] = rd32(0x00150318u + + 0xc0u);
    }
L_00150314:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00150318:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_0015031c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 1);
    }
L_00150320:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_00150324:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[1], cpu->r[12]);
        }
    }
L_00150328:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0x78u);
        }
    }
L_0015032c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[2], cpu->r[12]);
        }
    }
L_00150330:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2], cpu->r[1]);
        }
    }
L_00150334:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_00150338:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0015036c;
        }
    }
L_0015033c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00150340:;
    {
        cpu->r[0] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_00150344:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00150348:;
    {
        uint32_t v = cpu->r[0] & 0x00000067u; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_0015034c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015038c;
        }
    }
L_00150350:;
    {
        uint32_t v = cpu->r[0] & 0x00000010u; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_00150354:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00150378;
        }
    }
L_00150358:;
    {
        { uint32_t v = cpu->r[0] & 0x00000008u; set_nz(cpu, v); }
    }
L_0015035c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(0x00150364u + + 0x78u);
        }
    }
L_00150360:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
        }
    }
L_00150364:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
        }
    }
L_00150368:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4], cpu->r[3]);
        }
    }
L_0015036c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00150370:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00150374:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00150378u)) return;
    }
L_00150378:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_0015037c:;
    {
        cpu->r[2] = rd32(0x00150384u + + 0x5cu);
    }
L_00150380:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00150384:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00150388:;
    {
        goto L_0015036c;
    }
L_0015038c:;
    {
        cpu->r[1] = rd32(0x00150394u + + 0x50u);
    }
L_00150390:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_00150394:;
    {
        cpu->r[2] = rd32(0x0015039cu + + 0x4cu);
    }
L_00150398:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0015039c:;
    {
        cpu->r[3] = rd32(0x001503a4u + + 0x48u);
    }
L_001503a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001503a8u, cpu->r[1], 0, 0);
    }
L_001503a4:;
    {
        cpu->r[12] = rd32(0x001503acu + + 0x44u);
    }
L_001503a8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001503b0u, cpu->r[2], 0, 0);
    }
L_001503ac:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[14]);
    }
L_001503b0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001503b8u, cpu->r[3], 0, 0);
    }
L_001503b4:;
    {
        wr32(cpu->r[4], cpu->r[14]);
    }
L_001503b8:;
    {
        cpu->r[12] = add_flags(cpu, 0x001503c0u, cpu->r[12], 0, 0);
    }
L_001503bc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001503c0:;
    {
        cpu->r[12] = 0x00000071u;
    }
L_001503c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001503c8:;
    {
        cpu->r[14] = 0x001503ccu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001503cc:;
    {
        goto L_0015036c;
    }
}

/* _ZN8Particle15ReleaseParticleEPS_ @ 001503f4 (arm) */
void fn_001503f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001503f4:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001503f8:;
    {
        cpu->r[4] = rd32(0x00150400u + + 0x8cu);
    }
L_001503fc:;
    {
        cpu->r[6] = rd32(0x00150404u + + 0x8cu);
    }
L_00150400:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00150404:;
    {
        cpu->r[4] = add_flags(cpu, 0x0015040cu, cpu->r[4], 0, 0);
    }
L_00150408:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0015040c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00150410:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00150414:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00150418:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x78u, cpu->r[0]);
        }
    }
L_0015041c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00150438;
        }
    }
L_00150420:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00150424:;
    {
        wr32(cpu->r[3], cpu->r[5]);
    }
L_00150428:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015042c:;
    {
        wr32(cpu->r[5] + + 0x78u, cpu->r[3]);
    }
L_00150430:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00150434:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00150438u)) return;
    }
L_00150438:;
    {
        cpu->r[7] = rd32(0x00150440u + + 0x54u);
    }
L_0015043c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00150440:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00150444:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00150448:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00150480;
        }
    }
L_0015044c:;
    {
        cpu->r[1] = rd32(0x00150454u + + 0x44u);
    }
L_00150450:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00150454:;
    {
        cpu->r[12] = rd32(0x0015045cu + + 0x40u);
    }
L_00150458:;
    {
        cpu->r[14] = 0x00000034u;
    }
L_0015045c:;
    {
        cpu->r[2] = rd32(0x00150464u + + 0x3cu);
    }
L_00150460:;
    {
        cpu->r[1] = add_flags(cpu, 0x00150468u, cpu->r[1], 0, 0);
    }
L_00150464:;
    {
        cpu->r[3] = rd32(0x0015046cu + + 0x38u);
    }
L_00150468:;
    {
        cpu->r[12] = add_flags(cpu, 0x00150470u, cpu->r[12], 0, 0);
    }
L_0015046c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00150474u, cpu->r[2], 0, 0);
    }
L_00150470:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00150474:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015047cu, cpu->r[3], 0, 0);
    }
L_00150478:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0015047c:;
    {
        cpu->r[14] = 0x00150480u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00150480:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00150484:;
    {
        wr32(cpu->r[3], cpu->r[5]);
    }
L_00150488:;
    {
        goto L_00150420;
    }
}

/* _ZN13ParticleQueue9RmElementEP8ParticleS1_ @ 001504a8 (arm) */
void fn_001504a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001504a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001504ac:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001504b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001504b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001504e4;
        }
    }
L_001504b8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x78u);
    }
L_001504bc:;
    {
        wr32(cpu->r[2] + + 0x78u, cpu->r[3]);
    }
L_001504c0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001504c4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001504c8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
        }
    }
L_001504cc:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001504d0:;
    {
        cpu->r[14] = 0x001504d4u; fn_001503f4(cpu);
    }
L_001504d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001504d8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001504dc:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001504e0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001504e4u)) return;
    }
L_001504e4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001504e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001504ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001504cc;
        }
    }
L_001504f0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001504f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001504f8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
        }
    }
L_001504fc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x78u);
    }
L_00150500:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00150504:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00150508:;
    {
        cpu->r[14] = 0x0015050cu; fn_001503f4(cpu);
    }
L_0015050c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00150510:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00150514:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00150518:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015051cu)) return;
    }
}

/* _ZN13ParticleQueue6RmHeadEv @ 0015051c (arm) */
void fn_0015051c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015051c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00150520:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00150524:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00150528:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0015052c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00150530u)) return;
        }
    }
L_00150530:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x78u);
    }
L_00150534:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00150538:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0015053c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
        }
    }
L_00150540:;
    {
        cpu->r[14] = 0x00150544u; fn_001503f4(cpu);
    }
L_00150544:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00150548:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0015054c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00150550:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00150554u)) return;
    }
}

/* _ZN13ParticleQueueD1Ev @ 00150554 (arm) */
void fn_00150554(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00150554:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00150558:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0015055c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00150560:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00150564:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015057c;
        }
    }
L_00150568:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015056c:;
    {
        cpu->r[14] = 0x00150570u; fn_0015051c(cpu);
    }
L_00150570:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00150574:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00150578:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00150568;
        }
    }
L_0015057c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00150580:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00150584u)) return;
    }
}

/* _ZN13ParticleQueueD2Ev @ 00150584 (arm) */
void fn_00150584(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00150584:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00150588:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0015058c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00150590:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00150594:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001505ac;
        }
    }
L_00150598:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015059c:;
    {
        cpu->r[14] = 0x001505a0u; fn_0015051c(cpu);
    }
L_001505a0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001505a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001505a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00150598;
        }
    }
L_001505ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001505b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001505b4u)) return;
    }
}

/* _ZN8Particle22ReleaseParticlesBufferEv @ 001505b4 (arm) */
void fn_001505b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001505b4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001505b8:;
    {
        cpu->r[5] = rd32(0x001505c0u + + 0x84u);
    }
L_001505bc:;
    {
        cpu->r[6] = rd32(0x001505c4u + + 0x84u);
    }
L_001505c0:;
    {
        cpu->r[5] = add_flags(cpu, 0x001505c8u, cpu->r[5], 0, 0);
    }
L_001505c4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001505c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001505cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001505d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00150624;
        }
    }
L_001505d4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x4u);
    }
L_001505d8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 7u, &shc); cpu->r[0] = v;
    }
L_001505dc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 1, 0);
    }
L_001505e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001505e4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001505e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001505f4;
        }
    }
L_001505ec:;
    {
        goto L_00150610;
    }
L_001505f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001505f4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x0000007cu, 1, 0);
    }
L_001505f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001505fc:;
    {
        cpu->r[14] = 0x00150600u; fn_0014ff64(cpu);
    }
L_00150600:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00150604:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00150608:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_0015060c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001505f0;
        }
    }
L_00150610:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_00150614:;
    {
        cpu->r[14] = 0x00150618u; fn_0018ba60(cpu);
    }
L_00150618:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0015061c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00150620:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00150624:;
    {
        cpu->r[2] = rd32(0x0015062cu + + 0x20u);
    }
L_00150628:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015062c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00150630:;
    {
        cpu->r[2] = rd32(0x00150638u + + 0x18u);
    }
L_00150634:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_00150638:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0015063c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00150640:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00150644u)) return;
    }
}

/* _ZN8Particle21CreateParticlesBufferEv @ 00150654 (arm) */
void fn_00150654(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00150654:;
    {
        cpu->r[0] = 0x0000e468u;
    }
L_00150658:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0015065c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_00150660:;
    {
        cpu->r[14] = 0x00150664u; imp__Znaj(cpu); /* _Znaj */
    }
L_00150664:;
    {
        cpu->r[6] = rd32(0x0015066cu + + 0x94u);
    }
L_00150668:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_0015066c:;
    {
        cpu->r[6] = add_flags(cpu, 0x00150674u, cpu->r[6], 0, 0);
    }
L_00150670:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00150674:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x0001e400u, 0, 0);
    }
L_00150678:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0015067c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000068u, 0, 0);
    }
L_00150680:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_00150684:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00150688:;
    {
        cpu->r[3] = 0x000003e8u;
    }
L_0015068c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00150690:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00150694:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000007cu, 0, 0);
    }
L_00150698:;
    {
        cpu->r[14] = 0x0015069cu; fn_0014ff14(cpu);
    }
L_0015069c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001506a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00150690;
        }
    }
L_001506a4:;
    {
        cpu->r[3] = rd32(0x001506acu + + 0x58u);
    }
L_001506a8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001506ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001506b0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001506b4:;
    {
        wr32(cpu->r[3], cpu->r[8]);
    }
L_001506b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001506bcu)) return;
        }
    }
L_001506bc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000084u, 0, 0);
    }
L_001506c0:;
    {
        wr32(cpu->r[7] + - 0x4u, cpu->r[7]);
    }
L_001506c4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000007cu, 0, 0);
    }
L_001506c8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_001506cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001506c0;
        }
    }
L_001506d0:;
    {
        cpu->r[1] = rd32(0x001506d8u + + 0x30u);
    }
L_001506d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x0001e000u, 0, 0);
    }
L_001506d8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001506dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x000003e4u, 0, 0);
    }
L_001506e0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001506e4:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_001506e8:;
    {
        cpu->r[1] = rd32(0x001506f0u + + 0x1cu);
    }
L_001506ec:;
    {
        wr32(cpu->r[4], cpu->r[8]);
    }
L_001506f0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_001506f4:;
    {
        wr32(cpu->r[1], cpu->r[12]);
    }
L_001506f8:;
    {
        wr32(cpu->r[3] + + 0x45cu, cpu->r[2]);
    }
L_001506fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00150700u)) return;
    }
}

/* _ZN8Particle6GetRotERfS0_S0_ @ 00150710 (arm) */
void fn_00150710(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00150710:;
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
L_00150714:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00150718:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0015071c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00150724u + + 0x168u);
    }
L_00150720:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x70u);
    }
L_00150724:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_00150728:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_0015072c:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_00150730:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[6] + + 0x6cu);
    }
L_00150734:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_00150738:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[6] + + 0x6eu);
    }
L_0015073c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000009cu, 0, 0);
    }
L_00150740:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[6] + + 0x6au);
    }
L_00150744:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00150748:;
    {
        cpu->r[14] = 0x0015074cu; fn_00150e7c(cpu);
    }
L_0015074c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x70u);
    }
L_00150750:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00150754:;
    {
        cpu->r[7] = cpu->r[13];
    }
L_00150758:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00150760u + + 0x130u);
    }
L_0015075c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x80u);
    }
L_00150760:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00150764:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00150768:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0015076c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150770:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_00150774:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150778:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0015077c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_00150780:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_00150784:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00150788:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0015078c:;
    {
        cpu->r[14] = 0x00150790u; guest_call(cpu, cpu->r[12]);
    }
L_00150790:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x70u);
    }
L_00150794:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00150798:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x80u);
    }
L_0015079c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001507a0:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_001507a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_001507a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_001507ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_001507b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_001507b4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_001507b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_001507bc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001507c0:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_001507c4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001507c8:;
    {
        cpu->r[14] = 0x001507ccu; guest_call(cpu, cpu->r[12]);
    }
L_001507cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_001507d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_001507d4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001507d8:;
    {
        vfp_sync_flags(cpu);
    }
L_001507dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00150880;
        }
    }
L_001507e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[4], 0, 0);
    }
L_001507e4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_001507e8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_001507ec:;
    {
        vfp_sync_flags(cpu);
    }
L_001507f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00150838;
        }
    }
L_001507f4:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_001507f8:;
    {
        vfp_vmul(cpu, 13, 15, 17);
    }
L_001507fc:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00150800:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[3]);
    }
L_00150804:;
    {
        vfp_vmul(cpu, 15, 13, 14);
    }
L_00150808:;
    {
        vfp_vneg(cpu, 14, 15);
    }
L_0015080c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00150810:;
    {
        wr32(cpu->r[7] + cpu->r[4], cpu->r[1]);
    }
L_00150814:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00150818:;
    {
        cpu->r[14] = 0x0015081cu; fn_00096514(cpu);
    }
L_0015081c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_00150820:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_00150824:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00150828:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_0015082c:;
    {
        wr32(cpu->r[7] + cpu->r[4], cpu->r[0]);
    }
L_00150830:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00150834:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[3]);
    }
L_00150838:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0015083c:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000000cu, 1, 1);
    }
L_00150840:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001507cc;
        }
    }
L_00150844:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x3cu);
    }
L_00150848:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_0015084c:;
    {
        vfp_vadd(cpu, 15, 12, 15);
    }
L_00150850:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_00150854:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_00150858:;
    {
        *(uint32_t*)G(cpu->r[8]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015085c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x40u);
    }
L_00150860:;
    {
        vfp_vadd(cpu, 15, 13, 15);
    }
L_00150864:;
    {
        *(uint32_t*)G(cpu->r[10]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00150868:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x44u);
    }
L_0015086c:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_00150870:;
    {
        *(uint32_t*)G(cpu->r[9]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00150874:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00150878:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0015087c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00150880u)) return;
    }
L_00150880:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[4], 0, 0);
    }
L_00150884:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_00150888:;
    {
        goto L_001507f4;
    }
}

/* _ZN8Particle7GetSizeERfS0_ @ 00150894 (arm) */
void fn_00150894(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00150894:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00150898:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015089c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x70u);
    }
L_001508a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001508a4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001508a8:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001508ac:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x66u);
    }
L_001508b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000098u, 0, 0);
    }
L_001508b4:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x68u);
    }
L_001508b8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x64u);
    }
L_001508bc:;
    {
        cpu->r[14] = 0x001508c0u; fn_00150e7c(cpu);
    }
L_001508c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_001508c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001508c8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x7cu);
    }
L_001508cc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001508d0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001508d4:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_001508d8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_001508dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_001508e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_001508e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_001508e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_001508ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_001508f0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001508f4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001508f8:;
    {
        cpu->r[14] = 0x001508fcu; guest_call(cpu, cpu->r[12]);
    }
L_001508fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_00150900:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00150904:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x7cu);
    }
L_00150908:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0015090c:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_00150910:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150914:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_00150918:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0015091c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_00150920:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_00150924:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_00150928:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0015092c:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00150930:;
    {
        cpu->r[14] = 0x00150934u; guest_call(cpu, cpu->r[12]);
    }
L_00150934:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_00150938:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0015093c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x7cu);
    }
L_00150940:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00150944:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_00150948:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0015094c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_00150950:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150954:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_00150958:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0015095c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_00150960:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00150964:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00150968:;
    {
        cpu->r[14] = 0x0015096cu; guest_call(cpu, cpu->r[12]);
    }
L_0015096c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_00150970:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00150978u + + 0x50u);
    }
L_00150974:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00150978:;
    {
        vfp_vneg(cpu, 12, 15);
    }
L_0015097c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00150980:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00150984:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,12);
    }
L_00150988:;
    {
        cpu->r[14] = 0x0015098cu; fn_00096514(cpu);
    }
L_0015098c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00150994u + + 0x38u);
    }
L_00150990:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x2cu);
    }
L_00150994:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[6]);
    }
L_00150998:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_0015099c:;
    {
        vfp_vadd(cpu, 15, 12, 15);
    }
L_001509a0:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_001509a4:;
    {
        vfp_vmul(cpu, 14, 13, 14);
    }
L_001509a8:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001509ac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x30u);
    }
L_001509b0:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_001509b4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5]);
    }
L_001509b8:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001509bc:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001509c0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001509c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001509c8u)) return;
    }
}

/* _ZN8Particle6GetUVsERfS0_S0_S0_ @ 001509d0 (arm) */
void fn_001509d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001509d0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001509d4:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001509d8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001509dc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x70u);
    }
L_001509e0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_001509e4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001509e8:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001509ec:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001509f0:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x62u);
    }
L_001509f4:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x60u);
    }
L_001509f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000090u, 0, 0);
    }
L_001509fc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x5eu);
    }
L_00150a00:;
    {
        cpu->r[14] = 0x00150a04u; fn_00150e7c(cpu);
    }
L_00150a04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_00150a08:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00150a0c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x74u);
    }
L_00150a10:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00150a14:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00150a18:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_00150a1c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150a20:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_00150a24:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150a28:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_00150a2c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_00150a30:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_00150a34:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00150a38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00150a3c:;
    {
        cpu->r[14] = 0x00150a40u; guest_call(cpu, cpu->r[12]);
    }
L_00150a40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_00150a44:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00150a48:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x74u);
    }
L_00150a4c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00150a50:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_00150a54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150a58:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_00150a5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150a60:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_00150a64:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_00150a68:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_00150a6c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00150a70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00150a74:;
    {
        cpu->r[14] = 0x00150a78u; guest_call(cpu, cpu->r[12]);
    }
L_00150a78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_00150a7c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00150a80:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x74u);
    }
L_00150a84:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00150a88:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_00150a8c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150a90:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_00150a94:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150a98:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_00150a9c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_00150aa0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_00150aa4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00150aa8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00150aac:;
    {
        cpu->r[14] = 0x00150ab0u; guest_call(cpu, cpu->r[12]);
    }
L_00150ab0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_00150ab4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00150abcu + + 0xf4u);
    }
L_00150ab8:;
    {
        vfp_vmul(cpu, 16, 14, 15);
    }
L_00150abc:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00150ac0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00150ac4:;
    {
        cpu->r[14] = 0x00150ac8u; imp_cosf(cpu); /* cosf */
    }
L_00150ac8:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[0];
    }
L_00150acc:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00150ad0:;
    {
        cpu->r[14] = 0x00150ad4u; imp_sinf(cpu); /* sinf */
    }
L_00150ad4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_00150ad8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_00150adc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_00150ae0:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_00150ae4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00150aecu + + 0xc8u);
    }
L_00150ae8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x74u);
    }
L_00150aec:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_00150af0:;
    {
        vfp_vmul(cpu, 14, 15, 12);
    }
L_00150af4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00150af8:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_00150afc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150b00:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_00150b04:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150b08:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_00150b0c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_00150b10:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_00150b14:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00150b18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00150b1c:;
    {
        vfp_vmul(cpu, 15, 15, 17);
    }
L_00150b20:;
    {
        vfp_vnmls(cpu, 14, 11, 17);
    }
L_00150b24:;
    {
        vfp_vmla(cpu, 15, 11, 12);
    }
L_00150b28:;
    {
        vfp_vmul(cpu, 17, 14, 13);
    }
L_00150b2c:;
    {
        vfp_vmul(cpu, 16, 15, 13);
    }
L_00150b30:;
    {
        cpu->r[14] = 0x00150b34u; guest_call(cpu, cpu->r[12]);
    }
L_00150b34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_00150b38:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00150b3c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x74u);
    }
L_00150b40:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00150b44:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_00150b48:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150b4c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_00150b50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150b54:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_00150b58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_00150b5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_00150b60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], cpu->r[1], 0, 0);
    }
L_00150b64:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00150b68:;
    {
        cpu->r[14] = 0x00150b6cu; guest_call(cpu, cpu->r[12]);
    }
L_00150b6c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_00150b70:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_00150b74:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00150b7cu + + 0x38u);
    }
L_00150b78:;
    {
        vfp_vadd(cpu, 14, 14, 15);
    }
L_00150b7c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_00150b80:;
    {
        vfp_vadd(cpu, 15, 13, 15);
    }
L_00150b84:;
    {
        vfp_vadd(cpu, 12, 14, 16);
    }
L_00150b88:;
    {
        vfp_vadd(cpu, 13, 15, 17);
    }
L_00150b8c:;
    {
        vfp_vsub(cpu, 16, 14, 16);
    }
L_00150b90:;
    {
        vfp_vsub(cpu, 17, 15, 17);
    }
L_00150b94:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00150b98:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00150b9c:;
    {
        *(uint32_t*)G(cpu->r[8]) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00150ba0:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00150ba4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00150ba8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00150bac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00150bb0u)) return;
    }
}

/* _ZN8Particle8GetColorEPh @ 00150bb8 (arm) */
void fn_00150bb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00150bb8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00150bbc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00150bc0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x70u);
    }
L_00150bc4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00150bc8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00150bcc:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x50u);
    }
L_00150bd0:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x4eu);
    }
L_00150bd4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_00150bd8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x4cu);
    }
L_00150bdc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00150be0:;
    {
        cpu->r[14] = 0x00150be4u; fn_00150e7c(cpu);
    }
L_00150be4:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x56u);
    }
L_00150be8:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x54u);
    }
L_00150bec:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x52u);
    }
L_00150bf0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00150bf4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x70u);
    }
L_00150bf8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000088u, 0, 0);
    }
L_00150bfc:;
    {
        cpu->r[14] = 0x00150c00u; fn_00150e7c(cpu);
    }
L_00150c00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_00150c04:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00150c08:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x68u);
    }
L_00150c0c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00150c10:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00150c14:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_00150c18:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150c1c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_00150c20:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150c24:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_00150c28:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_00150c2c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_00150c30:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00150c34:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00150c38:;
    {
        cpu->r[14] = 0x00150c3cu; guest_call(cpu, cpu->r[12]);
    }
L_00150c3c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00150c40:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00150c44:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x437fu << 16);
    }
L_00150c48:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00150c4c:;
    {
        cpu->r[14] = 0x00150c50u; fn_000963c0(cpu);
    }
L_00150c50:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00150c54:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00150c58:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x437fu << 16);
    }
L_00150c5c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00150c60:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_00150c64:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_00150c68:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00150c6c:;
    {
        wr8(cpu->r[5], cpu->r[3]);
    }
L_00150c70:;
    {
        cpu->r[14] = 0x00150c74u; fn_000963c0(cpu);
    }
L_00150c74:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00150c78:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x437fu << 16);
    }
L_00150c7c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00150c80:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00150c84:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_00150c88:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00150c8c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00150c90:;
    {
        wr8(cpu->r[5] + + 0x1u, cpu->r[3]);
    }
L_00150c94:;
    {
        cpu->r[14] = 0x00150c98u; fn_000963c0(cpu);
    }
L_00150c98:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00150c9c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00150ca0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_00150ca4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00150ca8:;
    {
        wr8(cpu->r[5] + + 0x2u, cpu->r[0]);
    }
L_00150cac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_00150cb0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x6cu);
    }
L_00150cb4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00150cb8:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_00150cbc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150cc0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_00150cc4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150cc8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_00150ccc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_00150cd0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_00150cd4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00150cd8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00150cdc:;
    {
        cpu->r[14] = 0x00150ce0u; guest_call(cpu, cpu->r[12]);
    }
L_00150ce0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00150ce4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00150ce8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00150cec:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x437fu << 16);
    }
L_00150cf0:;
    {
        cpu->r[14] = 0x00150cf4u; fn_000963c0(cpu);
    }
L_00150cf4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00150cf8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_00150cfc:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00150d00:;
    {
        wr8(cpu->r[5] + + 0x3u, cpu->r[0]);
    }
L_00150d04:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00150d08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00150d0cu)) return;
    }
}

/* _ZN8Particle13EnableTexMapsEv @ 00150d0c (arm) */
void fn_00150d0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00150d0c:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00150d10:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00150d14:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x70u);
    }
L_00150d18:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00150d1c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x5cu);
    }
L_00150d20:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x5au);
    }
L_00150d24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000008cu, 0, 0);
    }
L_00150d28:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x58u);
    }
L_00150d2c:;
    {
        cpu->r[14] = 0x00150d30u; fn_00150e7c(cpu);
    }
L_00150d30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_00150d34:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00150d38:;
    {
        cpu->r[5] = rd32(0x00150d40u + + 0x130u);
    }
L_00150d3c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x70u);
    }
L_00150d40:;
    {
        cpu->r[5] = add_flags(cpu, 0x00150d48u, cpu->r[5], 0, 0);
    }
L_00150d44:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00150d48:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00150d4c:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_00150d50:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150d54:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_00150d58:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150d5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_00150d60:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_00150d64:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_00150d68:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00150d6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00150d70:;
    {
        cpu->r[14] = 0x00150d74u; guest_call(cpu, cpu->r[12]);
    }
L_00150d74:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00150d7cu + + 0xf0u);
    }
L_00150d78:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_00150d7c:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_00150d80:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00150d84:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00150d88:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00150d8c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00150e64;
        }
    }
L_00150d90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_00150d94:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00150d98:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x70u);
    }
L_00150d9c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00150da0:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_00150da4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150da8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_00150dac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150db0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_00150db4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_00150db8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_00150dbc:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00150dc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00150dc4:;
    {
        cpu->r[14] = 0x00150dc8u; guest_call(cpu, cpu->r[12]);
    }
L_00150dc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_00150dcc:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00150dd0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x70u);
    }
L_00150dd4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00150dd8:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_00150ddc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150de0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_00150de4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_00150de8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_00150dec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_00150df0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_00150df4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00150df8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00150dfc:;
    {
        cpu->r[14] = 0x00150e00u; guest_call(cpu, cpu->r[12]);
    }
L_00150e00:;
    {
        cpu->r[3] = rd32(0x00150e08u + + 0x6cu);
    }
L_00150e04:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_00150e08:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00150e0c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00150e10:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00150e14:;
    {
        cpu->r[14] = 0x00150e18u; fn_00135cf4(cpu);
    }
L_00150e18:;
    {
        cpu->r[3] = rd32(0x00150e20u + + 0x58u);
    }
L_00150e1c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00150e20:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00150e24:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_00150e28:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00150e2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00150e64;
        }
    }
L_00150e30:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00150e34:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00150e38:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00150e3c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00150e40:;
    {
        cpu->r[14] = 0x00150e44u; fn_0012f12c(cpu);
    }
L_00150e44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_00150e48:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00150e4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00150e50:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00150e54:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_00150e58:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00150e5c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00150e60:;
    {
        cpu->r[14] = 0x00150e64u; fn_00134680(cpu);
    }
L_00150e64:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00150e68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00150e6cu)) return;
    }
}

/* _ZN16ParticleAniParms7getTickEiii @ 00150e7c (arm) */
void fn_00150e7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00150e7c:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x2u);
    }
L_00150e80:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00150e84:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00150e90;
        }
    }
L_00150e88:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_00150e8c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00150ec4;
        }
    }
L_00150e90:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_00150e94:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00150e98:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_00150e9c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00150ea0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00150ea4:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_00150ea8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00150ebc;
        }
    }
L_00150eac:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1u);
    }
L_00150eb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00150eb4:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 14) = *(float*)G(0x00150ebcu + + 0x14u);
        }
    }
L_00150eb8:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vsub(cpu, 15, 14, 15);
        }
    }
L_00150ebc:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00150ec0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00150ec4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00150eccu + + 0x4u);
    }
L_00150ec8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00150ecc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16ParticleAniParms4loadEP8LZMAFile @ 00150ed4 (arm) */
void fn_00150ed4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00150ed4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00150ed8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00150edc:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00150ee0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00150ee4:;
    {
        cpu->r[14] = 0x00150ee8u; fn_000fc678(cpu);
    }
L_00150ee8:;
    {
        wr8(cpu->r[4], cpu->r[0]);
    }
L_00150eec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00150ef0:;
    {
        cpu->r[14] = 0x00150ef4u; fn_000fc678(cpu);
    }
L_00150ef4:;
    {
        wr8(cpu->r[4] + + 0x1u, cpu->r[0]);
    }
L_00150ef8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00150efc:;
    {
        cpu->r[14] = 0x00150f00u; fn_000fc650(cpu);
    }
L_00150f00:;
    {
        wr16(cpu->r[4] + + 0x2u, cpu->r[0]);
    }
L_00150f04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00150f08u)) return;
    }
}

/* _ZN11ParticleMgrC2Ev @ 00150f08 (arm) */
void fn_00150f08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00150f08:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00150f0c:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_00150f10:;
    {
        cpu->r[12] = 0x00000009u;
    }
L_00150f14:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_00150f18:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_00150f1c:;
    {
        cpu->r[12] = 0x0000000bu;
    }
L_00150f20:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_00150f24:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[12]);
    }
L_00150f28:;
    {
        cpu->r[12] = 0x000000ffu;
    }
L_00150f2c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00150f30:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[12]);
    }
L_00150f34:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_00150f38:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00150f3c:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[12]);
    }
L_00150f40:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_00150f44:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_00150f48:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11ParticleMgrC1Ev @ 00150f4c (arm) */
void fn_00150f4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00150f4c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00150f50:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_00150f54:;
    {
        cpu->r[12] = 0x00000009u;
    }
L_00150f58:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_00150f5c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_00150f60:;
    {
        cpu->r[12] = 0x0000000bu;
    }
L_00150f64:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_00150f68:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[12]);
    }
L_00150f6c:;
    {
        cpu->r[12] = 0x000000ffu;
    }
L_00150f70:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00150f74:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[12]);
    }
L_00150f78:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_00150f7c:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00150f80:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[12]);
    }
L_00150f84:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_00150f88:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_00150f8c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11ParticleMgr6RenderEv @ 00150f90 (arm) */
void fn_00150f90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00150f90:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00150f94:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x4u);
    }
L_00150f98:;
    {
        cpu->r[6] = rd32(0x00150fa0u + + 0xc4u);
    }
L_00150f9c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00150fa0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00150fa4:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_00150fa8:;
    {
        cpu->r[6] = add_flags(cpu, 0x00150fb0u, cpu->r[6], 0, 0);
    }
L_00150fac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00150fe4;
        }
    }
L_00150fb0:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00150fb4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00150fb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00150fbc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00150fc0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00150fc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00150fd8;
        }
    }
L_00150fc8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xa8u);
    }
L_00150fcc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00150fd0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00150fd8;
        }
    }
L_00150fd4:;
    {
        cpu->r[14] = 0x00150fd8u; fn_0014e318(cpu);
    }
L_00150fd8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_00150fdc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000b8u, 0, 0);
    }
L_00150fe0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00150fb4;
        }
    }
L_00150fe4:;
    {
        cpu->r[8] = rd32(0x00150fecu + + 0x7cu);
    }
L_00150fe8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00150fec:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00150ff0:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_00150ff4:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00150ff8:;
    {
        cpu->r[14] = 0x00150ffcu; fn_0012e1c8(cpu);
    }
L_00150ffc:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00151000:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00151004:;
    {
        cpu->r[14] = 0x00151008u; fn_0012e19c(cpu);
    }
L_00151008:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0015100c:;
    {
        cpu->r[1] = 0x000084c0u;
    }
L_00151010:;
    {
        cpu->r[14] = 0x00151014u; fn_0012e124(cpu);
    }
L_00151014:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00151018:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0015101c:;
    {
        cpu->r[14] = 0x00151020u; fn_0012e150(cpu);
    }
L_00151020:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_00151024:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_00151028:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_0015102c:;
    {
        cpu->r[14] = 0x00151030u; fn_00151658(cpu);
    }
L_00151030:;
    {
        sub_flags(cpu, cpu->r[4], 0x000000f0u, 1, 1);
    }
L_00151034:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00151020;
        }
    }
L_00151038:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_0015103c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00151040:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00151044:;
    {
        cpu->r[14] = 0x00151048u; fn_0012e1c8(cpu);
    }
L_00151048:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0015104c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00151050:;
    {
        cpu->r[14] = 0x00151054u; fn_0012e19c(cpu);
    }
L_00151054:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00151058:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0015105c:;
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
L_00151060:;
    {
        return fn_0012e150(cpu);
    }
}

/* _ZN11ParticleMgr16ClearRenderStateEv @ 0015106c (arm) */
void fn_0015106c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015106c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00151070:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00151074:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00151078:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_0015107c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_00151080:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_00151084:;
    {
        cpu->r[14] = 0x00151088u; fn_001515a8(cpu);
    }
L_00151088:;
    {
        sub_flags(cpu, cpu->r[4], 0x000000f0u, 1, 1);
    }
L_0015108c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00151078;
        }
    }
L_00151090:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00151094u)) return;
    }
}

/* _ZN11ParticleMgr6UpdateEv @ 00151094 (arm) */
void fn_00151094(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151094:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00151098:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[4] = v0;
        cpu->r[6] = v1;
    }
L_0015109c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001510a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001510a4u)) return;
        }
    }
L_001510a4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001510a8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001510ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001510b0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001510b4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000b8u, 0, 0);
    }
L_001510b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001510bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001510c4;
        }
    }
L_001510c0:;
    {
        cpu->r[14] = 0x001510c4u; fn_0014e688(cpu);
    }
L_001510c4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001510c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001510a8;
        }
    }
L_001510cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001510d0u)) return;
    }
}

/* _ZN11ParticleMgr5SpawnEiP11SceneObjectP7CMatrixib @ 001510d0 (arm) */
void fn_001510d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001510d0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001510d4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001510d8:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001510dc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001510e0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_001510e4:;
    {
        cpu->r[0] = rd32(0x001510ecu + + 0x16cu);
    }
L_001510e8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001510ec:;
    {
        cpu->r[6] = rd8(cpu->r[13] + + 0x2cu);
    }
L_001510f0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001510f8u, cpu->r[0], 0, 0);
    }
L_001510f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00151128;
        }
    }
L_001510f8:;
    {
        cpu->r[4] = rd32(cpu->r[5]);
    }
L_001510fc:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00151100:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00151104:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_00151108:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015111c;
        }
    }
L_0015110c:;
    {
        goto L_00151138;
    }
L_00151110:;
    {
        uint32_t wb_tmp = cpu->r[4] + + 0xb8u;
        cpu->r[8] = rd32(cpu->r[4] + + 0xb8u);
        cpu->r[4] = wb_tmp;
    }
L_00151114:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00151118:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00151138;
        }
    }
L_0015111c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00151120:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_00151124:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00151110;
        }
    }
L_00151128:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0015112c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00151130:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00151134:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00151138u)) return;
    }
L_00151138:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0015113c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015112c;
        }
    }
L_00151140:;
    {
        cpu->r[12] = rd32(0x00151148u + + 0x114u);
    }
L_00151144:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_00151148:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015114c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00151150:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_00151154:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00151158:;
    {
        cpu->r[14] = 0x0015115cu; fn_001328e8(cpu);
    }
L_0015115c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00151160:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00151164:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00151128;
        }
    }
L_00151168:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_0015116c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00151170:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00151174:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00151178:;
    {
        cpu->r[14] = 0x0015117cu; fn_0014e52c(cpu);
    }
L_0015117c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00151180:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00151184:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00151188:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[4] + + 0xa8u, cpu->r[3]);
        }
    }
L_0015118c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_00151190:;
    {
        goto L_001511a0;
    }
L_00151194:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
    }
L_00151198:;
    {
        sub_flags(cpu, cpu->r[6], 0x000000f0u, 1, 1);
    }
L_0015119c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001511e0;
        }
    }
L_001511a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_001511a4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_001511a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001511ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00151194;
        }
    }
L_001511b0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001511b4:;
    {
        cpu->r[14] = 0x001511b8u; fn_0015182c(cpu);
    }
L_001511b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001511bc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
        }
    }
L_001511c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00151194;
        }
    }
L_001511c4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_001511c8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 1);
    }
L_001511cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001511e0;
        }
    }
L_001511d0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001511d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001511d8:;
    {
        cpu->r[14] = 0x001511dcu; fn_0014e304(cpu);
    }
L_001511dc:;
    {
        goto L_0015112c;
    }
L_001511e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001511e4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x14u);
    }
L_001511e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001511ec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001511f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015123c;
        }
    }
L_001511f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_001511f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000030u, 0, 0);
    }
L_001511fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001511e4;
        }
    }
L_00151200:;
    {
        cpu->r[1] = rd32(0x00151208u + + 0x58u);
    }
L_00151204:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00151208:;
    {
        cpu->r[2] = rd32(0x00151210u + + 0x54u);
    }
L_0015120c:;
    {
        cpu->r[14] = 0x00000085u;
    }
L_00151210:;
    {
        cpu->r[3] = rd32(0x00151218u + + 0x50u);
    }
L_00151214:;
    {
        cpu->r[1] = add_flags(cpu, 0x0015121cu, cpu->r[1], 0, 0);
    }
L_00151218:;
    {
        cpu->r[12] = rd32(0x00151220u + + 0x4cu);
    }
L_0015121c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00151224u, cpu->r[2], 0, 0);
    }
L_00151220:;
    {
        cpu->r[3] = add_flags(cpu, 0x00151228u, cpu->r[3], 0, 0);
    }
L_00151224:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00151228:;
    {
        cpu->r[12] = add_flags(cpu, 0x00151230u, cpu->r[12], 0, 0);
    }
L_0015122c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00151230:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00151234:;
    {
        cpu->r[14] = 0x00151238u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00151238:;
    {
        goto L_001511d0;
    }
L_0015123c:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00151240:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00151244:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00151248:;
    {
        cpu->r[14] = 0x0015124cu; fn_001517b0(cpu);
    }
L_0015124c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00151250:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001511d0;
        }
    }
L_00151254:;
    {
        goto L_00151200;
    }
}

/* _ZN11ParticleMgr5CleanEv @ 00151270 (arm) */
void fn_00151270(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151270:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00151274:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00151278:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015127c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00151280:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001512ac;
        }
    }
L_00151284:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00151288:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_0015128c:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00151290:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00151294:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_00151298:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000b8u, 0, 0);
    }
L_0015129c:;
    {
        cpu->r[14] = 0x001512a0u; fn_0014e484(cpu);
    }
L_001512a0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001512a4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001512a8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015128c;
        }
    }
L_001512ac:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001512b0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x8u);
    }
L_001512b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_001512b8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001512bc:;
    {
        cpu->r[14] = 0x001512c0u; fn_00151588(cpu);
    }
L_001512c0:;
    {
        sub_flags(cpu, cpu->r[4], 0x000000f0u, 1, 1);
    }
L_001512c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001512b0;
        }
    }
L_001512c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001512ccu)) return;
    }
}

/* _ZN11ParticleMgr4InitEi @ 001512cc (arm) */
void fn_001512cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001512cc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001512d0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001512d4:;
    {
        cpu->r[0] = 0x00000017u;
    }
L_001512d8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001512dc:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[1]);
    }
L_001512e0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1]; cpu->r[0] = v;
    }
L_001512e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001512e8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_001512ec:;
    {
        cpu->r[14] = 0x001512f0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001512f0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001512f4:;
    {
        cpu->r[3] = 0x000000b8u;
    }
L_001512f8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001512fc:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[6]);
    }
L_00151300:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00151324;
        }
    }
L_00151304:;
    {
        cpu->r[5] = cpu->r[7];
    }
L_00151308:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0015130c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00151310:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00151314:;
    {
        cpu->r[14] = 0x00151318u; fn_0014e370(cpu);
    }
L_00151318:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_0015131c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x000000b8u, 0, 0);
    }
L_00151320:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015130c;
        }
    }
L_00151324:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00151328:;
    {
        wr32(cpu->r[8], cpu->r[7]);
    }
L_0015132c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00151338;
        }
    }
L_00151330:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00151334:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00151338u)) return;
    }
L_00151338:;
    {
        cpu->r[0] = 0x000000f8u;
    }
L_0015133c:;
    {
        cpu->r[14] = 0x00151340u; imp__Znaj(cpu); /* _Znaj */
    }
L_00151340:;
    {
        cpu->r[3] = 0x00000030u;
    }
L_00151344:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00151348:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x000000f8u, 0, 0);
    }
L_0015134c:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_00151350:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00151354:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_00151358:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0015135c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00151360:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_00151364:;
    {
        cpu->r[14] = 0x00151368u; fn_00151558(cpu);
    }
L_00151368:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_0015136c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015135c;
        }
    }
L_00151370:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00151374:;
    {
        wr32(cpu->r[8] + + 0x8u, cpu->r[5]);
    }
L_00151378:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_0015137c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00151380u)) return;
        }
    }
L_00151380:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00151384:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_00151388:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_0015138c:;
    {
        cpu->r[14] = 0x00151390u; fn_00151880(cpu);
    }
L_00151390:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00151394:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001513b8;
        }
    }
L_00151398:;
    {
        sub_flags(cpu, cpu->r[4], 0x000000f0u, 1, 1);
    }
L_0015139c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001513c0;
        }
    }
L_001513a0:;
    {
        cpu->r[5] = rd32(cpu->r[8] + + 0x8u);
    }
L_001513a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_001513a8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001513ac:;
    {
        cpu->r[14] = 0x001513b0u; fn_00151880(cpu);
    }
L_001513b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001513b4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00151398;
        }
    }
L_001513b8:;
    {
        cpu->r[0] = (~0x00000002u);
    }
L_001513bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001513c0u)) return;
    }
L_001513c0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001513c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001513c8u)) return;
    }
}

/* _ZN11ParticleMgrD1Ev @ 001513c8 (arm) */
void fn_001513c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001513c8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001513cc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001513d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001513d4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001513d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00151420;
        }
    }
L_001513dc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x4u);
    }
L_001513e0:;
    {
        cpu->r[0] = 0x000000b8u;
    }
L_001513e4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[3]; cpu->r[0] = v;
    }
L_001513e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001513ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001513f8;
        }
    }
L_001513f0:;
    {
        goto L_00151410;
    }
L_001513f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001513f8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x000000b8u, 1, 0);
    }
L_001513fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00151400:;
    {
        cpu->r[14] = 0x00151404u; fn_0014e7c0(cpu);
    }
L_00151404:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00151408:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_0015140c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001513f4;
        }
    }
L_00151410:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_00151414:;
    {
        cpu->r[14] = 0x00151418u; fn_0018ba60(cpu);
    }
L_00151418:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015141c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00151420:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00151424:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00151428:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00151470;
        }
    }
L_0015142c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_00151430:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00151434:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_00151438:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0015143c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00151448;
        }
    }
L_00151440:;
    {
        goto L_00151460;
    }
L_00151444:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00151448:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000030u, 1, 0);
    }
L_0015144c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00151450:;
    {
        cpu->r[14] = 0x00151454u; fn_001518bc(cpu);
    }
L_00151454:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_00151458:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_0015145c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00151444;
        }
    }
L_00151460:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_00151464:;
    {
        cpu->r[14] = 0x00151468u; fn_0018ba60(cpu);
    }
L_00151468:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015146c:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_00151470:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00151474:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00151478u)) return;
    }
}

/* _ZN11ParticleMgrD2Ev @ 00151478 (arm) */
void fn_00151478(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151478:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0015147c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00151480:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00151484:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00151488:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001514d0;
        }
    }
L_0015148c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x4u);
    }
L_00151490:;
    {
        cpu->r[0] = 0x000000b8u;
    }
L_00151494:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[3]; cpu->r[0] = v;
    }
L_00151498:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0015149c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001514a8;
        }
    }
L_001514a0:;
    {
        goto L_001514c0;
    }
L_001514a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001514a8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x000000b8u, 1, 0);
    }
L_001514ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001514b0:;
    {
        cpu->r[14] = 0x001514b4u; fn_0014e7c0(cpu);
    }
L_001514b4:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001514b8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_001514bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001514a4;
        }
    }
L_001514c0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_001514c4:;
    {
        cpu->r[14] = 0x001514c8u; fn_0018ba60(cpu);
    }
L_001514c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001514cc:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001514d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001514d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001514d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00151520;
        }
    }
L_001514dc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_001514e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001514e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_001514e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001514ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001514f8;
        }
    }
L_001514f0:;
    {
        goto L_00151510;
    }
L_001514f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001514f8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000030u, 1, 0);
    }
L_001514fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00151500:;
    {
        cpu->r[14] = 0x00151504u; fn_001518bc(cpu);
    }
L_00151504:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_00151508:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_0015150c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001514f4;
        }
    }
L_00151510:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_00151514:;
    {
        cpu->r[14] = 0x00151518u; fn_0018ba60(cpu);
    }
L_00151518:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015151c:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_00151520:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00151524:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00151528u)) return;
    }
}

/* _ZN16ParticleRendererC2Ev @ 00151528 (arm) */
void fn_00151528(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151528:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015152c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00151530:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_00151534:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[1]);
    }
L_00151538:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015153c:;
    {
        wr16(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00151540:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00151544:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00151548:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0015154c:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[1]);
    }
L_00151550:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_00151554:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16ParticleRendererC1Ev @ 00151558 (arm) */
void fn_00151558(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151558:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015155c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00151560:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_00151564:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[1]);
    }
L_00151568:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015156c:;
    {
        wr16(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00151570:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00151574:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00151578:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0015157c:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[1]);
    }
L_00151580:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_00151584:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16ParticleRenderer15ForceCleanUsageEv @ 00151588 (arm) */
void fn_00151588(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151588:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015158c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00151590:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[3]);
    }
L_00151594:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_00151598:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015159c:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_001515a0:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_001515a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16ParticleRenderer16ClearRenderStateEv @ 001515a8 (arm) */
void fn_001515a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001515a8:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_001515ac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001515b0:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_001515b4:;
    {
        wr16(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_001515b8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001515bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16ParticleRenderer17CheckVtxAvailableEv @ 001515c0 (arm) */
void fn_001515c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001515c0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_001515c4:;
    {
        cpu->r[2] = 0x00001d39u;
    }
L_001515c8:;
    {
        cpu->r[3] = rd32(0x001515d0u + + 0x70u);
    }
L_001515cc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001515d0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001515d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001515dcu, cpu->r[3], 0, 0);
    }
L_001515d8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001515dc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001515e0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00151638;
        }
    }
L_001515e4:;
    {
        cpu->r[2] = rd32(0x001515ecu + + 0x58u);
    }
L_001515e8:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001515ec:;
    {
        cpu->r[0] = rd8(cpu->r[4]);
    }
L_001515f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001515f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00151638;
        }
    }
L_001515f8:;
    {
        cpu->r[1] = rd32(0x00151600u + + 0x48u);
    }
L_001515fc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00151600:;
    {
        cpu->r[2] = rd32(0x00151608u + + 0x44u);
    }
L_00151604:;
    {
        cpu->r[14] = 0x000000cdu;
    }
L_00151608:;
    {
        cpu->r[3] = rd32(0x00151610u + + 0x40u);
    }
L_0015160c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00151614u, cpu->r[1], 0, 0);
    }
L_00151610:;
    {
        cpu->r[12] = rd32(0x00151618u + + 0x3cu);
    }
L_00151614:;
    {
        cpu->r[2] = add_flags(cpu, 0x0015161cu, cpu->r[2], 0, 0);
    }
L_00151618:;
    {
        cpu->r[3] = add_flags(cpu, 0x00151620u, cpu->r[3], 0, 0);
    }
L_0015161c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00151620:;
    {
        cpu->r[12] = add_flags(cpu, 0x00151628u, cpu->r[12], 0, 0);
    }
L_00151624:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00151628:;
    {
        cpu->r[14] = 0x0015162cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0015162c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00151630:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00151634:;
    {
        wr8(cpu->r[4], cpu->r[3]);
    }
L_00151638:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0015163c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00151640u)) return;
    }
}

/* _ZN16ParticleRenderer6RenderEv @ 00151658 (arm) */
void fn_00151658(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151658:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_0015165c:;
    {
        cpu->r[3] = rd32(0x00151664u + + 0x144u);
    }
L_00151660:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00151664:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00151668:;
    {
        cpu->r[3] = add_flags(cpu, 0x00151670u, cpu->r[3], 0, 0);
    }
L_0015166c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00151670:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00151674u)) return;
        }
    }
L_00151674:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_00151678:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015167c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00151680u)) return;
        }
    }
L_00151680:;
    {
        cpu->r[1] = rd32(0x00151688u + + 0x124u);
    }
L_00151684:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x2cu);
    }
L_00151688:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0015168c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00151690:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_00151694:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00151698u)) return;
        }
    }
L_00151698:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0015169c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001516a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001516a4u)) return;
        }
    }
L_001516a4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001516a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001516ac:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001516b0:;
    {
        cpu->r[14] = 0x001516b4u; fn_0012f12c(cpu);
    }
L_001516b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000024u, 0, 0);
    }
L_001516b8:;
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
L_001516bc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001516c0:;
    {
        cpu->r[14] = 0x001516c4u; fn_00134680(cpu);
    }
L_001516c4:;
    {
        cpu->r[2] = 0x0000128cu;
    }
L_001516c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001516cc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001516d0:;
    {
        cpu->r[2] = 0x00001288u;
    }
L_001516d4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001516d8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001516dc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_001516e0:;
    {
        cpu->r[14] = 0x001516e4u; fn_0014814c(cpu);
    }
L_001516e4:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_001516e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001516ec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001516f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001516f4:;
    {
        cpu->r[14] = 0x001516fcu;
    }
L_001516f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001516fcu)) return;
    }
L_001516fc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00151700:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_00151704:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_00151708:;
    {
        cpu->r[2] = 0x00000018u;
    }
L_0015170c:;
    {
        cpu->r[14] = 0x00151710u; imp_glVertexPointer(cpu); /* glVertexPointer */
    }
L_00151710:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00151714:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_00151718:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_0015171c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00151720:;
    {
        cpu->r[2] = 0x00000018u;
    }
L_00151724:;
    {
        cpu->r[14] = 0x00151728u; imp_glTexCoordPointer(cpu); /* glTexCoordPointer */
    }
L_00151728:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0015172c:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00151730:;
    {
        cpu->r[1] = 0x00001401u;
    }
L_00151734:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000014u, 0, 0);
    }
L_00151738:;
    {
        cpu->r[2] = 0x00000018u;
    }
L_0015173c:;
    {
        cpu->r[14] = 0x00151740u; imp_glColorPointer(cpu); /* glColorPointer */
    }
L_00151740:;
    {
        cpu->r[1] = rd16(cpu->r[4] + + 0x4u);
    }
L_00151744:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00151748:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_0015174c:;
    {
        cpu->r[2] = 0x00001403u;
    }
L_00151750:;
    {
        cpu->r[14] = 0x00151754u; imp_glDrawElements(cpu); /* glDrawElements */
    }
L_00151754:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_00151758:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0015175c:;
    {
        cpu->r[3] = 0x0000aaabu;
    }
L_00151760:;
    {
        cpu->r[4] = rd16(cpu->r[4] + + 0x4u);
    }
L_00151764:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x2aaau << 16);
    }
L_00151768:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_0015176c:;
    {
        cpu->r[2] = 0x0000aaabu;
    }
L_00151770:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xaaaau << 16);
    }
L_00151774:;
    {
        cpu->r[12] = 0x00001738u;
    }
L_00151778:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 2u, &shc); cpu->r[6] = v;
    }
L_0015177c:;
    {
        cpu->r[1] = 0x0000173cu;
    }
L_00151780:;
    {
        { uint64_t v = (uint64_t)cpu->r[2] * (uint64_t)cpu->r[4]; cpu->r[7] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_00151784:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00151788:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[6]; cpu->r[7] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0015178c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_00151790:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 3, 1u, &shc), 0, 0);
    }
L_00151794:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[2]);
    }
L_00151798:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_0015179c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_001517a0:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[0]);
    }
L_001517a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001517a8u)) return;
    }
}

/* _ZN16ParticleRenderer8SetUpForEP15EmitterInstance @ 001517b0 (arm) */
void fn_001517b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001517b0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001517b4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001517b8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001517bc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001517c0:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001517c4:;
    {
        cpu->r[14] = 0x001517c8u; fn_0014d954(cpu);
    }
L_001517c8:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_001517cc:;
    {
        cpu->r[3] = rd32(0x001517d4u + + 0x50u);
    }
L_001517d0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[1]);
    }
L_001517d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001517dcu, cpu->r[3], 0, 0);
    }
L_001517d8:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_001517dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001517e0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xa4u);
    }
L_001517e4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001517e8:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_001517ec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00151808;
        }
    }
L_001517f0:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001517f4:;
    {
        cpu->r[0] = rd32(0x001517fcu + + 0x2cu);
    }
L_001517f8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001517fc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_00151800:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00151804:;
    {
        cpu->r[14] = 0x00151808u; fn_00135cf4(cpu);
    }
L_00151808:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[0]);
    }
L_0015180c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000028u, 0, 0);
    }
L_00151810:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_00151814:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000024u, 0, 0);
    }
L_00151818:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0015181c:;
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
L_00151820:;
    {
        return fn_0014d790(cpu);
    }
}

/* _ZN16ParticleRenderer9CanRenderEP15EmitterInstance @ 0015182c (arm) */
void fn_0015182c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015182c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00151830:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00151834:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00151838:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0015183c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00151840:;
    {
        cpu->r[14] = 0x00151844u; fn_0014d954(cpu);
    }
L_00151844:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_00151848:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0015184c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00151858;
        }
    }
L_00151850:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00151854:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00151858u)) return;
    }
L_00151858:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
    }
L_0015185c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa4u);
    }
L_00151860:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00151864:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00151850;
        }
    }
L_00151868:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x20u);
    }
L_0015186c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00151870:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00151874:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00151878:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0015187c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00151880u)) return;
    }
}

/* _ZN16ParticleRenderer4InitEv @ 00151880 (arm) */
void fn_00151880(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151880:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00151884:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00151888:;
    {
        cpu->r[0] = 0x0000ea60u;
    }
L_0015188c:;
    {
        cpu->r[14] = 0x00151890u; imp__Znaj(cpu); /* _Znaj */
    }
L_00151890:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00151894:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_00151898:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0015189c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001518a0u)) return;
        }
    }
L_001518a0:;
    {
        cpu->r[0] = 0x00001388u;
    }
L_001518a4:;
    {
        cpu->r[14] = 0x001518a8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001518a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001518ac:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001518b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000004u);
        }
    }
L_001518b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001518b8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001518bcu)) return;
    }
}

/* _ZN16ParticleRendererD1Ev @ 001518bc (arm) */
void fn_001518bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001518bc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001518c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001518c4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001518c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001518cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001518dc;
        }
    }
L_001518d0:;
    {
        cpu->r[14] = 0x001518d4u; fn_0018ba60(cpu);
    }
L_001518d4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001518d8:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001518dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_001518e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001518e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001518f4;
        }
    }
L_001518e8:;
    {
        cpu->r[14] = 0x001518ecu; fn_0018ba60(cpu);
    }
L_001518ec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001518f0:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001518f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001518f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001518fcu)) return;
    }
}

/* _ZN16ParticleRendererD2Ev @ 001518fc (arm) */
void fn_001518fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001518fc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00151900:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00151904:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00151908:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0015190c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015191c;
        }
    }
L_00151910:;
    {
        cpu->r[14] = 0x00151914u; fn_0018ba60(cpu);
    }
L_00151914:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00151918:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0015191c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_00151920:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00151924:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00151934;
        }
    }
L_00151928:;
    {
        cpu->r[14] = 0x0015192cu; fn_0018ba60(cpu);
    }
L_0015192c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00151930:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_00151934:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00151938:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015193cu)) return;
    }
}

/* _ZN6IPARAMC2Ev @ 0015193c (arm) */
void fn_0015193c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015193c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00151944u + + 0x20u);
    }
L_00151940:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00151944:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151948:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015194c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151950:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151954:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151958:;
    {
        wr8(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015195c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00151960:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6IPARAMC1Ev @ 00151968 (arm) */
void fn_00151968(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151968:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00151970u + + 0x20u);
    }
L_0015196c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00151970:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151974:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151978:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015197c:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151980:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151984:;
    {
        wr8(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00151988:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015198c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6IPARAM6updateEv @ 00151994 (arm) */
void fn_00151994(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151994:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00151998:;
    {
        { uint32_t v = cpu->r[3] & 0x00000002u; set_nz(cpu, v); }
    }
L_0015199c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001519a0:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001519a4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001519a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_001519ac:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001519b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00151a18;
        }
    }
L_001519b4:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xcu);
    }
L_001519b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001519bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00151a10;
        }
    }
L_001519c0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x14u);
    }
L_001519c4:;
    {
        vfp_vsub(cpu, 13, 15, 14);
    }
L_001519c8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x18u);
    }
L_001519cc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), 0.0f);
    }
L_001519d0:;
    {
        vfp_sync_flags(cpu);
    }
L_001519d4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), 0.0f);
    }
L_001519d8:;
    {
        if (cond_test(cpu, 14)) {
        vfp_vneg(cpu, 13, 13);
        }
    }
L_001519dc:;
    {
        vfp_sync_flags(cpu);
    }
L_001519e0:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,10) = *vfp_s(cpu,12);
        }
    }
L_001519e4:;
    {
        if (cond_test(cpu, 14)) {
        vfp_vneg(cpu, 10, 12);
        }
    }
L_001519e8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,10));
    }
L_001519ec:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,14);
    }
L_001519f0:;
    {
        vfp_sync_flags(cpu);
    }
L_001519f4:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_001519f8:;
    {
        if (cond_test(cpu, 6)) {
        vfp_vadd(cpu, 11, 15, 12);
        }
    }
L_001519fc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), *vfp_s(cpu,14));
    }
L_00151a00:;
    {
        if (cond_test(cpu, 6)) {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 11);
        }
    }
L_00151a04:;
    {
        vfp_sync_flags(cpu);
    }
L_00151a08:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00151a0c:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[0] + + 0xcu, cpu->r[3]);
        }
    }
L_00151a10:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00151a14:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00151a18:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0xcu);
    }
L_00151a1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6IPARAM3setEfii @ 00151a20 (arm) */
void fn_00151a20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151a20:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00151a24:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_00151a28:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00151a2c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00151a30:;
    {
        uint32_t v = cpu->r[2] ^ 0x00000002u; cpu->r[0] = v;
    }
L_00151a34:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4]);
    }
L_00151a38:;
    {
        cpu->r[0] = (cpu->r[0] >> 1) & 0x1u;
    }
L_00151a3c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x10u);
    }
L_00151a40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00151a44:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
        }
    }
L_00151a48:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00151a4c:;
    {
        wr8(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_00151a50:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,16) = *vfp_s(cpu,15);
        }
    }
L_00151a54:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00151a58:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[1]);
    }
L_00151a5c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00151a60:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[1]);
    }
L_00151a64:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[2]);
    }
L_00151a68:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00151a6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00151a98;
        }
    }
L_00151a70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00151a74:;
    {
        cpu->r[0] = 0x00000400u;
    }
L_00151a78:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_00151a7c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000040u;
        }
    }
L_00151a80:;
    {
        vfp_vsub(cpu, 16, 15, 16);
    }
L_00151a84:;
    {
        cpu->r[14] = 0x00151a88u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00151a88:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00151a8c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00151a90:;
    {
        vfp_vdiv(cpu, 15, 16, 15);
    }
L_00151a94:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151a98:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00151a9c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00151aa0u)) return;
    }
}

/* _ZN7CCamera4setXEfii @ 00151aa0 (arm) */
void fn_00151aa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151aa0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000048u, 0, 0);
    }
L_00151aa4:;
    {
        return fn_00151a20(cpu);
    }
}

/* _ZN7CCamera4setYEfii @ 00151aa8 (arm) */
void fn_00151aa8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151aa8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_00151aac:;
    {
        return fn_00151a20(cpu);
    }
}

/* _ZN7CCamera4setZEfii @ 00151ab0 (arm) */
void fn_00151ab0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151ab0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c0u, 0, 0);
    }
L_00151ab4:;
    {
        return fn_00151a20(cpu);
    }
}

/* _ZN7CCamera6setPosER8Vector3dii @ 00151ab8 (arm) */
void fn_00151ab8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151ab8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00151abc:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00151ac0:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00151ac4:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_00151ac8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00151acc:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00151ad0:;
    {
        cpu->r[14] = 0x00151ad4u; fn_00151aa0(cpu);
    }
L_00151ad4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00151ad8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_00151adc:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00151ae0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00151ae4:;
    {
        cpu->r[14] = 0x00151ae8u; fn_00151aa8(cpu);
    }
L_00151ae8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00151aec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_00151af0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00151af4:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00151af8:;
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
L_00151afc:;
    {
        return fn_00151ab0(cpu);
    }
}

/* _ZN7CCamera6setPosEfffii @ 00151b00 (arm) */
void fn_00151b00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151b00:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00151b04:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_00151b08:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00151b0c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00151b10:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00151b14:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_00151b18:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00151b1c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_00151b20:;
    {
        cpu->r[14] = 0x00151b24u; fn_00151aa0(cpu);
    }
L_00151b24:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00151b28:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00151b2c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00151b30:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_00151b34:;
    {
        cpu->r[14] = 0x00151b38u; fn_00151aa8(cpu);
    }
L_00151b38:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00151b3c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00151b40:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00151b44:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_00151b48:;
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
L_00151b4c:;
    {
        return fn_00151ab0(cpu);
    }
}

/* _ZN7CCamera6LookAtER8Vector3dS1_ @ 00151b50 (arm) */
void fn_00151b50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151b50:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00151b54:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00151b58:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00151b5c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00151b60:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x0000016cu, 0, 0);
    }
L_00151b64:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00151b68:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00151b6c:;
    {
        cpu->r[14] = 0x00151b70u; fn_00155f80(cpu);
    }
L_00151b70:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_00151b74:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00151b78:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x84u);
    }
L_00151b7c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x8u);
    }
L_00151b80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc0u);
    }
L_00151b84:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151b88:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_00151b8c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151b90:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_00151b94:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151b98:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_00151b9c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151ba0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6]);
    }
L_00151ba4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151ba8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x4u);
    }
L_00151bac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151bb0:;
    {
        cpu->r[14] = 0x00151bb4u; fn_00154a3c(cpu);
    }
L_00151bb4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00151bb8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000000fcu, 0, 0);
    }
L_00151bbc:;
    {
        cpu->r[14] = 0x00151bc0u; fn_00154e38(cpu);
    }
L_00151bc0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_00151bc4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x114u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151bc8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_00151bcc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151bd0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_00151bd4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x110u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151bd8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00151bdc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00151be0u)) return;
    }
}

/* _ZN7CCamera12updateMatrixEv @ 00151be0 (arm) */
void fn_00151be0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151be0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00151be4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x108u);
    }
L_00151be8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00151bec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00151bf0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xfcu);
    }
L_00151bf4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x100u);
    }
L_00151bf8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x104u);
    }
L_00151bfc:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151c00:;
    {
        cpu->r[14] = 0x00151c04u; fn_00153678(cpu);
    }
L_00151c04:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_00151c08:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x84u);
    }
L_00151c0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00151c10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc0u);
    }
L_00151c14:;
    {
        uint32_t v = cpu->r[1] ^ 0x80000000u; cpu->r[1] = v;
    }
L_00151c18:;
    {
        uint32_t v = cpu->r[2] ^ 0x80000000u; cpu->r[2] = v;
    }
L_00151c1c:;
    {
        uint32_t v = cpu->r[3] ^ 0x80000000u; cpu->r[3] = v;
    }
L_00151c20:;
    {
        cpu->r[14] = 0x00151c24u; fn_00153e90(cpu);
    }
L_00151c24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00151c28:;
    {
        cpu->r[14] = 0x00151c2cu; fn_00153d94(cpu);
    }
L_00151c2c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00151c30:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000128u, 0, 0);
    }
L_00151c34:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00151c38:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00151c3c:;
    {
        return fn_00153624(cpu);
    }
}

/* _ZN7CCamera6updateEv @ 00151c40 (arm) */
extern void camera_note_cam(uint32_t cam);
extern void camera_filter_last(void);
void fn_00151c40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151c40:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00151c44:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00151c48:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000048u, 0, 0);
    }
L_00151c4c:;
    {
        cpu->r[14] = 0x00151c50u; fn_00151994(cpu);
    }
L_00151c50:;
    {
        wr8(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_00151c54:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00151c58:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000084u, 0, 0);
    }
L_00151c5c:;
    {
        cpu->r[14] = 0x00151c60u; fn_00151994(cpu);
    }
L_00151c60:;
    {
        uint32_t v = cpu->r[0] | cpu->r[5]; cpu->r[5] = v;
    }
L_00151c64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000c0u, 0, 0);
    }
L_00151c68:;
    {
        cpu->r[5] = (uint32_t)((uint8_t)cpu->r[5]);
    }
L_00151c6c:;
    {
        wr8(cpu->r[4] + + 0x44u, cpu->r[5]);
    }
L_00151c70:;
    {
        cpu->r[14] = 0x00151c74u; fn_00151994(cpu);
    }
L_00151c74:;
    {
        uint32_t v = cpu->r[5] | cpu->r[0]; cpu->r[0] = v;
    }
L_00151c78:;
    {
        wr8(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_00151c7c:;
    camera_note_cam(cpu->r[4]);
    {
        cpu->r[0] = cpu->r[4];
    }
L_00151c80:;
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
L_00151c84:;
    {
        fn_00151be0(cpu);
        camera_filter_last();
        return;
    }
}

/* _ZN7CCameraC1Ev @ 00151c88 (arm) */
void fn_00151c88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151c88:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00151c8c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00151c90:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00151c94:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00151c9cu + + 0x84u);
    }
L_00151c98:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00151c9c:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[5]);
    }
L_00151ca0:;
    {
        cpu->r[14] = 0x00151ca4u; fn_001535e0(cpu);
    }
L_00151ca4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_00151ca8:;
    {
        cpu->r[14] = 0x00151cacu; fn_00151968(cpu);
    }
L_00151cac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000084u, 0, 0);
    }
L_00151cb0:;
    {
        cpu->r[14] = 0x00151cb4u; fn_00151968(cpu);
    }
L_00151cb4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000c0u, 0, 0);
    }
L_00151cb8:;
    {
        cpu->r[14] = 0x00151cbcu; fn_00151968(cpu);
    }
L_00151cbc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000fcu, 0, 0);
    }
L_00151cc0:;
    {
        cpu->r[14] = 0x00151cc4u; fn_00155a80(cpu);
    }
L_00151cc4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000128u, 0, 0);
    }
L_00151cc8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00151ccc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x110u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00151cd0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x114u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00151cd4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x118u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00151cd8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x11cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00151cdc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x120u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00151ce0:;
    {
        wr32(cpu->r[4] + + 0x168u, cpu->r[5]);
    }
L_00151ce4:;
    {
        cpu->r[14] = 0x00151ce8u; fn_001535e0(cpu);
    }
L_00151ce8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000016cu, 0, 0);
    }
L_00151cec:;
    {
        wr32(cpu->r[4] + + 0x1acu, cpu->r[5]);
    }
L_00151cf0:;
    {
        cpu->r[14] = 0x00151cf4u; fn_001535e0(cpu);
    }
L_00151cf4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00151cf8:;
    {
        cpu->r[14] = 0x00151cfcu; fn_00153600(cpu);
    }
L_00151cfc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00151d04u + + 0x20u);
    }
L_00151d00:;
    {
        wr8(cpu->r[4] + + 0x44u, cpu->r[5]);
    }
L_00151d04:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x124u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00151d08:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x11cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00151d0c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x118u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00151d10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00151d14:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x120u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151d18:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00151d1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00151d20u)) return;
    }
}

/* _ZN7CCameraC2Ev @ 00151d28 (arm) */
void fn_00151d28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151d28:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00151d2c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00151d30:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00151d34:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00151d3cu + + 0x84u);
    }
L_00151d38:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00151d3c:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[5]);
    }
L_00151d40:;
    {
        cpu->r[14] = 0x00151d44u; fn_001535e0(cpu);
    }
L_00151d44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_00151d48:;
    {
        cpu->r[14] = 0x00151d4cu; fn_00151968(cpu);
    }
L_00151d4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000084u, 0, 0);
    }
L_00151d50:;
    {
        cpu->r[14] = 0x00151d54u; fn_00151968(cpu);
    }
L_00151d54:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000c0u, 0, 0);
    }
L_00151d58:;
    {
        cpu->r[14] = 0x00151d5cu; fn_00151968(cpu);
    }
L_00151d5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000fcu, 0, 0);
    }
L_00151d60:;
    {
        cpu->r[14] = 0x00151d64u; fn_00155a80(cpu);
    }
L_00151d64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000128u, 0, 0);
    }
L_00151d68:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00151d6c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x110u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00151d70:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x114u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00151d74:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x118u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00151d78:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x11cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00151d7c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x120u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00151d80:;
    {
        wr32(cpu->r[4] + + 0x168u, cpu->r[5]);
    }
L_00151d84:;
    {
        cpu->r[14] = 0x00151d88u; fn_001535e0(cpu);
    }
L_00151d88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000016cu, 0, 0);
    }
L_00151d8c:;
    {
        wr32(cpu->r[4] + + 0x1acu, cpu->r[5]);
    }
L_00151d90:;
    {
        cpu->r[14] = 0x00151d94u; fn_001535e0(cpu);
    }
L_00151d94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00151d98:;
    {
        cpu->r[14] = 0x00151d9cu; fn_00153600(cpu);
    }
L_00151d9c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00151da4u + + 0x20u);
    }
L_00151da0:;
    {
        wr8(cpu->r[4] + + 0x44u, cpu->r[5]);
    }
L_00151da4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x124u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00151da8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x11cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00151dac:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x118u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00151db0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00151db4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x120u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151db8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00151dbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00151dc0u)) return;
    }
}

/* _ZN7CCamera6LookAtEfff @ 00151dc8 (arm) */
void fn_00151dc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151dc8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00151dcc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000060u, 1, 0);
    }
L_00151dd0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00151dd4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00151dd8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00151ddc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00151de0:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_00151de4:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_00151de8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00151dec:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_00151df0:;
    {
        cpu->r[14] = 0x00151df4u; fn_001535e0(cpu);
    }
L_00151df4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_00151df8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x84u);
    }
L_00151dfc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00151e00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc0u);
    }
L_00151e04:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00151e0cu + + 0x58u);
    }
L_00151e08:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00151e0c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151e10:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151e14:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_00151e18:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00151e20u + + 0x48u);
    }
L_00151e1c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_00151e20:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151e24:;
    {
        cpu->r[14] = 0x00151e28u; fn_00154a3c(cpu);
    }
L_00151e28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00151e2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000000fcu, 0, 0);
    }
L_00151e30:;
    {
        cpu->r[14] = 0x00151e34u; fn_00154e38(cpu);
    }
L_00151e34:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00151e38:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[7]);
    }
L_00151e3c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00151e40:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[6]);
    }
L_00151e44:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[8]);
    }
L_00151e48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00151e5c;
        }
    }
L_00151e4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00151e50:;
    {
        cpu->r[14] = 0x00151e54u; fn_000b2bc8(cpu);
    }
L_00151e54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00151e58:;
    {
        cpu->r[14] = 0x00151e5cu; fn_0018ba20(cpu);
    }
L_00151e5c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000060u, 0, 0);
    }
L_00151e60:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00151e64u)) return;
    }
}

/* _ZN7CCamera15TranslateOnAxisER8Vector3df @ 00151e6c (arm) */
void fn_00151e6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151e6c:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00151e70:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00151e74:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1]);
    }
L_00151e78:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_00151e7c:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_00151e80:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[0] + + 0x10cu);
    }
L_00151e84:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[0] + + 0x110u);
    }
L_00151e88:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[0] + + 0x114u);
    }
L_00151e8c:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[0] + + 0x48u);
    }
L_00151e90:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x84u);
    }
L_00151e94:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0xc0u);
    }
L_00151e98:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00151e9c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00151ea0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00151ea4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00151ea8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00151eac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00151eb0:;
    {
        vfp_vmul(cpu, 13, 15, 13);
    }
L_00151eb4:;
    {
        vfp_vmul(cpu, 15, 15, 6);
    }
L_00151eb8:;
    {
        vfp_vadd(cpu, 7, 7, 13);
    }
L_00151ebc:;
    {
        vfp_vadd(cpu, 8, 8, 15);
    }
L_00151ec0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10cu) = *(uint32_t*)vfp_s(cpu, 7);
    }
L_00151ec4:;
    {
        vfp_vadd(cpu, 10, 10, 14);
    }
L_00151ec8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x110u) = *(uint32_t*)vfp_s(cpu, 8);
    }
L_00151ecc:;
    {
        vfp_vadd(cpu, 13, 9, 13);
    }
L_00151ed0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x114u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_00151ed4:;
    {
        vfp_vadd(cpu, 15, 11, 15);
    }
L_00151ed8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00151edc:;
    {
        vfp_vadd(cpu, 14, 12, 14);
    }
L_00151ee0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151ee4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00151ee8:;
    {
        cpu->r[14] = 0x00151eecu; fn_00151ab8(cpu);
    }
L_00151eec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00151ef0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10cu);
    }
L_00151ef4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x110u);
    }
L_00151ef8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_00151efc:;
    {
        cpu->r[14] = 0x00151f00u; fn_00151dc8(cpu);
    }
L_00151f00:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00151f04:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00151f08u)) return;
    }
}

/* _ZN7CCamera12StrafecameraEf @ 00151f08 (arm) */
void fn_00151f08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00151f08:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x84u);
    }
L_00151f0c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x48u);
    }
L_00151f10:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xc0u);
    }
L_00151f14:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00151f18:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[0] + + 0x114u);
    }
L_00151f1c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x10cu);
    }
L_00151f20:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x110u);
    }
L_00151f24:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00151f28:;
    {
        vfp_vsub(cpu, 11, 11, 13);
    }
L_00151f2c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_00151f30:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151f34:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00151f38:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00151f3c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00151f40:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[1];
    }
L_00151f44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000118u, 0, 0);
    }
L_00151f48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00151f4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00151f50:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00151f54:;
    {
        vfp_vsub(cpu, 14, 10, 14);
    }
L_00151f58:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00151f5c:;
    {
        vfp_vsub(cpu, 15, 12, 15);
    }
L_00151f60:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00151f64:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151f68:;
    {
        cpu->r[14] = 0x00151f6cu; fn_00155a0c(cpu);
    }
L_00151f6c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00151f70:;
    {
        cpu->r[14] = 0x00151f74u; fn_00155f80(cpu);
    }
L_00151f74:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_00151f78:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_00151f7c:;
    {
        vfp_vmul(cpu, 13, 16, 15);
    }
L_00151f80:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_00151f84:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[4] + + 0x10cu);
    }
L_00151f88:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[4] + + 0x110u);
    }
L_00151f8c:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4] + + 0x114u);
    }
L_00151f90:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_00151f94:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_00151f98:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_00151f9c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00151fa0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00151fa4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00151fa8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00151fac:;
    {
        vfp_vmul(cpu, 15, 16, 15);
    }
L_00151fb0:;
    {
        vfp_vmul(cpu, 14, 16, 14);
    }
L_00151fb4:;
    {
        vfp_vadd(cpu, 7, 7, 13);
    }
L_00151fb8:;
    {
        vfp_vadd(cpu, 8, 8, 14);
    }
L_00151fbc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10cu) = *(uint32_t*)vfp_s(cpu, 7);
    }
L_00151fc0:;
    {
        vfp_vadd(cpu, 10, 10, 15);
    }
L_00151fc4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x110u) = *(uint32_t*)vfp_s(cpu, 8);
    }
L_00151fc8:;
    {
        vfp_vadd(cpu, 13, 9, 13);
    }
L_00151fcc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x114u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_00151fd0:;
    {
        vfp_vadd(cpu, 14, 11, 14);
    }
L_00151fd4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00151fd8:;
    {
        vfp_vadd(cpu, 15, 12, 15);
    }
L_00151fdc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00151fe0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00151fe4:;
    {
        cpu->r[14] = 0x00151fe8u; fn_00151ab8(cpu);
    }
L_00151fe8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00151fec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10cu);
    }
L_00151ff0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x110u);
    }
L_00151ff4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_00151ff8:;
    {
        cpu->r[14] = 0x00151ffcu; fn_00151dc8(cpu);
    }
L_00151ffc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00152000:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00152004:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00152008u)) return;
    }
}

/* _ZN7CCamera13MoveFrontBackEf @ 00152008 (arm) */
void fn_00152008(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00152008:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x84u);
    }
L_0015200c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x48u);
    }
L_00152010:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xc0u);
    }
L_00152014:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00152018:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[0] + + 0x114u);
    }
L_0015201c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x10cu);
    }
L_00152020:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x110u);
    }
L_00152024:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00152028:;
    {
        vfp_vsub(cpu, 11, 11, 13);
    }
L_0015202c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_00152030:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00152034:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00152038:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015203c:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00152040:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[1];
    }
L_00152044:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00152048:;
    {
        vfp_vsub(cpu, 14, 10, 14);
    }
L_0015204c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00152050:;
    {
        vfp_vsub(cpu, 15, 12, 15);
    }
L_00152054:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00152058:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015205c:;
    {
        cpu->r[14] = 0x00152060u; fn_00155f80(cpu);
    }
L_00152060:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13]);
    }
L_00152064:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_00152068:;
    {
        vfp_vmul(cpu, 13, 16, 15);
    }
L_0015206c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_00152070:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[4] + + 0x10cu);
    }
L_00152074:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[4] + + 0x110u);
    }
L_00152078:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4] + + 0x114u);
    }
L_0015207c:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_00152080:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_00152084:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_00152088:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0015208c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00152090:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00152094:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00152098:;
    {
        vfp_vmul(cpu, 15, 16, 15);
    }
L_0015209c:;
    {
        vfp_vmul(cpu, 14, 16, 14);
    }
L_001520a0:;
    {
        vfp_vadd(cpu, 7, 7, 13);
    }
L_001520a4:;
    {
        vfp_vadd(cpu, 8, 8, 14);
    }
L_001520a8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10cu) = *(uint32_t*)vfp_s(cpu, 7);
    }
L_001520ac:;
    {
        vfp_vadd(cpu, 10, 10, 15);
    }
L_001520b0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x110u) = *(uint32_t*)vfp_s(cpu, 8);
    }
L_001520b4:;
    {
        vfp_vadd(cpu, 13, 9, 13);
    }
L_001520b8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x114u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_001520bc:;
    {
        vfp_vadd(cpu, 14, 11, 14);
    }
L_001520c0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001520c4:;
    {
        vfp_vadd(cpu, 15, 12, 15);
    }
L_001520c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001520cc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001520d0:;
    {
        cpu->r[14] = 0x001520d4u; fn_00151ab8(cpu);
    }
L_001520d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001520d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10cu);
    }
L_001520dc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x110u);
    }
L_001520e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001520e4:;
    {
        cpu->r[14] = 0x001520e8u; fn_00151dc8(cpu);
    }
L_001520e8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001520ec:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001520f0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001520f4u)) return;
    }
}

/* _ZN7CCamera6RotateE8Vector3df @ 001520f4 (arm) */
void fn_001520f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001520f4:;
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
L_001520f8:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001520fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000064u, 1, 0);
    }
L_00152100:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_00152104:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_00152108:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015210c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_00152110:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00152114:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_00152118:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0015211c:;
    {
        cpu->r[14] = 0x00152120u; fn_00155a80(cpu);
    }
L_00152120:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00152124:;
    {
        cpu->r[14] = 0x00152128u; fn_00155a80(cpu);
    }
L_00152128:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0015212c:;
    {
        cpu->r[14] = 0x00152130u; fn_00155a80(cpu);
    }
L_00152130:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00152134:;
    {
        cpu->r[14] = 0x00152138u; fn_00155f80(cpu);
    }
L_00152138:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00152140u + + 0xd4u);
    }
L_0015213c:;
    {
        vfp_vmul(cpu, 16, 16, 15);
    }
L_00152140:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00152144:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00152148:;
    {
        cpu->r[5] = cpu->r[13];
    }
L_0015214c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00152150:;
    {
        cpu->r[14] = 0x00152154u; imp_sinf(cpu); /* sinf */
    }
L_00152154:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[11] + + 0x4u);
    }
L_00152158:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[11] + + 0x8u);
    }
L_0015215c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00152160:;
    {
        vfp_vmul(cpu, 12, 15, 14);
    }
L_00152164:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[11]);
    }
L_00152168:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0015216c:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00152170:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00152174:;
    {
        vfp_vmul(cpu, 15, 15, 13);
    }
L_00152178:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015217c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00152180:;
    {
        cpu->r[14] = 0x00152184u; imp_cosf(cpu); /* cosf */
    }
L_00152184:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x110u);
    }
L_00152188:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x114u);
    }
L_0015218c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x48u);
    }
L_00152190:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x10cu);
    }
L_00152194:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x84u);
    }
L_00152198:;
    {
        vfp_vsub(cpu, 12, 12, 15);
    }
L_0015219c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xc0u);
    }
L_001521a0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001521a4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001521a8:;
    {
        *vfp_s(cpu, 10) = *(float*)G(0x001521b0u + + 0x68u);
    }
L_001521ac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_001521b0:;
    {
        vfp_vsub(cpu, 14, 11, 14);
    }
L_001521b4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001521b8:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_001521bc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001521c0:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[0]);
    }
L_001521c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001521c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001521cc:;
    {
        cpu->r[14] = 0x001521d0u; fn_00155bf4(cpu);
    }
L_001521d0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001521d4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001521d8:;
    {
        cpu->r[14] = 0x001521dcu; fn_00155bb4(cpu);
    }
L_001521dc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001521e0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001521e4:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001521e8:;
    {
        cpu->r[14] = 0x001521ecu; fn_00155bf4(cpu);
    }
L_001521ec:;
    {
        uint32_t base = cpu->r[5];
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
L_001521f0:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001521f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001521f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001521fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_00152200:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_00152204:;
    {
        cpu->r[14] = 0x00152208u; fn_00151dc8(cpu);
    }
L_00152208:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_0015220c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00152210:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00152214u)) return;
    }
}

/* _ZN7CCamera13TurnLeftRightEf @ 0015221c (arm) */
void fn_0015221c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015221c:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_00152220:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00152228u + + 0x24u);
    }
L_00152224:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00152228:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00152230u + + 0x20u);
    }
L_0015222c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00152230:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00152234:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00152238:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015223c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00152240:;
    {
        cpu->r[14] = 0x00152244u; fn_001520f4(cpu);
    }
L_00152244:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00152248:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015224cu)) return;
    }
}

/* _ZN7CCamera10LookUpDownEf @ 00152254 (arm) */
void fn_00152254(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00152254:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x84u);
    }
L_00152258:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x114u);
    }
L_0015225c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xc0u);
    }
L_00152260:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x10cu);
    }
L_00152264:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x110u);
    }
L_00152268:;
    {
        vfp_vsub(cpu, 14, 11, 14);
    }
L_0015226c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00152270:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000028u, 1, 0);
    }
L_00152274:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00152278:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000118u, 0, 0);
    }
L_0015227c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00152280:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00152284:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00152288:;
    {
        vfp_vsub(cpu, 12, 12, 15);
    }
L_0015228c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x48u);
    }
L_00152290:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00152294:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00152298:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_0015229c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001522a0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001522a4:;
    {
        cpu->r[14] = 0x001522a8u; fn_00155a0c(cpu);
    }
L_001522a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001522ac:;
    {
        cpu->r[14] = 0x001522b0u; fn_00155f80(cpu);
    }
L_001522b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001522b4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001522b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001522bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_001522c0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001522c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_001522c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001522cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x18u);
    }
L_001522d0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001522d4:;
    {
        cpu->r[14] = 0x001522d8u; fn_001520f4(cpu);
    }
L_001522d8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001522dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001522e0u)) return;
    }
}

/* _Z11InterpolatePKtjj @ 001522e0 (arm) */
void fn_001522e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001522e0:;
    {
        cpu->r[3] = (~0xf0000000u);
    }
L_001522e4:;
    {
        cpu->r[3] = (~shifter(cpu->r[3], 2, (cpu->r[1] & 0xffu), &shc));
    }
L_001522e8:;
    {
        uint32_t v = cpu->r[2] & ~ cpu->r[3]; cpu->r[12] = v;
    }
L_001522ec:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001522f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015231c;
        }
    }
L_001522f4:;
    {
        uint32_t v = shifter(cpu->r[2], 3, (cpu->r[1] & 0xffu), &shc); cpu->r[12] = v;
    }
L_001522f8:;
    {
        uint32_t v = cpu->r[3] & cpu->r[2]; cpu->r[3] = v;
    }
L_001522fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_00152300:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
    }
L_00152304:;
    {
        cpu->r[2] = rd16(cpu->r[2] + + 0x2u);
    }
L_00152308:;
    {
        cpu->r[0] = rd16(cpu->r[0] + cpu->r[12]);
    }
L_0015230c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 0);
    }
L_00152310:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[3] = v;
    }
L_00152314:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 3, (cpu->r[1] & 0xffu), &shc), 0, 0);
    }
L_00152318:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0015231c:;
    {
        uint32_t v = shifter(cpu->r[12], 3, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00152320:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_00152324:;
    {
        cpu->r[0] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_00152328:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z6FSqrtIj @ 0015232c (arm) */
void fn_0015232c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015232c:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 16u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00152330:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00152334:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00152358;
        }
    }
L_00152338:;
    {
        { uint32_t v = cpu->r[0] & 0xff000000u; set_nz(cpu, v); }
    }
L_0015233c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00152378;
        }
    }
L_00152340:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00152344:;
    {
        cpu->r[0] = rd32(0x0015234cu + + 0x64u);
    }
L_00152348:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_0015234c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00152354u, cpu->r[0], 0, 0);
    }
L_00152350:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00152354:;
    {
        return fn_001522e0(cpu);
    }
L_00152358:;
    {
        { uint32_t v = cpu->r[0] & 0x0000f000u; set_nz(cpu, v); }
    }
L_0015235c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00152394;
        }
    }
L_00152360:;
    {
        cpu->r[3] = rd32(0x00152368u + + 0x4cu);
    }
L_00152364:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00152368:;
    {
        cpu->r[3] = add_flags(cpu, 0x00152370u, cpu->r[3], 0, 0);
    }
L_0015236c:;
    {
        cpu->r[0] = rd16(cpu->r[3] + cpu->r[0]);
    }
L_00152370:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 10u, &shc); cpu->r[0] = v;
    }
L_00152374:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00152378u)) return;
    }
L_00152378:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0015237c:;
    {
        cpu->r[0] = rd32(0x00152384u + + 0x34u);
    }
L_00152380:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_00152384:;
    {
        cpu->r[0] = add_flags(cpu, 0x0015238cu, cpu->r[0], 0, 0);
    }
L_00152388:;
    {
        cpu->r[14] = 0x0015238cu; fn_001522e0(cpu);
    }
L_0015238c:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 4u, &shc); cpu->r[0] = v;
    }
L_00152390:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00152394u)) return;
    }
L_00152394:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00152398:;
    {
        cpu->r[0] = rd32(0x001523a0u + + 0x1cu);
    }
L_0015239c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001523a0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001523a8u, cpu->r[0], 0, 0);
    }
L_001523a4:;
    {
        cpu->r[14] = 0x001523a8u; fn_001522e0(cpu);
    }
L_001523a8:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 8u, &shc); cpu->r[0] = v;
    }
L_001523ac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001523b0u)) return;
    }
}

/* _ZN8CMathInt3SinEi @ 001523c0 (arm) */
void fn_001523c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001523c0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 20u, &shc); cpu->r[1] = v;
    }
L_001523c4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001523c8:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 20u, &shc); cpu->r[1] = v;
    }
L_001523cc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001523d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CMathInt3CosEi @ 001523d4 (arm) */
void fn_001523d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001523d4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 20u, &shc); cpu->r[1] = v;
    }
L_001523d8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001523dc:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 20u, &shc); cpu->r[1] = v;
    }
L_001523e0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001523e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CMathInt3TanEi @ 001523e8 (arm) */
void fn_001523e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001523e8:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 20u, &shc); cpu->r[1] = v;
    }
L_001523ec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001523f0:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 20u, &shc); cpu->r[1] = v;
    }
L_001523f4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001523f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CMathInt4AsinEi @ 001523fc (arm) */
void fn_001523fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001523fc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_00152400:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 5u, &shc); cpu->r[1] = v;
    }
L_00152404:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000800u, 0, 0);
    }
L_00152408:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0015240c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CMathInt4AcosEi @ 00152410 (arm) */
void fn_00152410(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00152410:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_00152414:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 5u, &shc); cpu->r[1] = v;
    }
L_00152418:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000800u, 0, 0);
    }
L_0015241c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00152420:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CMathInt4AtanEi @ 00152424 (arm) */
void fn_00152424(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00152424:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00152428:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CMathInt5Atan2Eii @ 0015242c (arm) */
void fn_0015242c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015242c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00152430:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CMathInt4SqrtEi @ 00152434 (arm) */
void fn_00152434(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00152434:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00152438:;
    {
        return fn_0015232c(cpu);
    }
}

/* _ZN5CMath3SinEf @ 0015243c (arm) */
void fn_0015243c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015243c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x28u);
    }
L_00152440:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_00152444:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0015244cu + + 0x18u);
    }
L_00152448:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_0015244c:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_00152450:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00152454:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 20u, &shc); cpu->r[3] = v;
    }
L_00152458:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 20u, &shc); cpu->r[3] = v;
    }
L_0015245c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00152460:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5CMath3CosEf @ 00152468 (arm) */
void fn_00152468(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00152468:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x28u);
    }
L_0015246c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_00152470:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00152478u + + 0x18u);
    }
L_00152474:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_00152478:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_0015247c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00152480:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 20u, &shc); cpu->r[3] = v;
    }
L_00152484:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 20u, &shc); cpu->r[3] = v;
    }
L_00152488:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0015248c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5CMath3TanEf @ 00152494 (arm) */
void fn_00152494(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00152494:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x28u);
    }
L_00152498:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_0015249c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001524a4u + + 0x18u);
    }
L_001524a0:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_001524a4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_001524a8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001524ac:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 20u, &shc); cpu->r[3] = v;
    }
L_001524b0:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 20u, &shc); cpu->r[3] = v;
    }
L_001524b4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001524b8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5CMath4AsinEf @ 001524c0 (arm) */
void fn_001524c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001524c0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_001524c4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001524ccu + + 0x24u);
    }
L_001524c8:;
    {
        vfp_vadd(cpu, 13, 15, 13);
    }
L_001524cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001524d4u + + 0x20u);
    }
L_001524d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x28u);
    }
L_001524d4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_001524d8:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_001524dc:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001524e0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 20u, &shc); cpu->r[3] = v;
    }
L_001524e4:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 20u, &shc); cpu->r[3] = v;
    }
L_001524e8:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001524ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5CMath4AcosEf @ 001524f8 (arm) */
void fn_001524f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001524f8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_001524fc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00152504u + + 0x24u);
    }
L_00152500:;
    {
        vfp_vadd(cpu, 13, 15, 13);
    }
L_00152504:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0015250cu + + 0x20u);
    }
L_00152508:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x28u);
    }
L_0015250c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
    }
L_00152510:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_00152514:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00152518:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 20u, &shc); cpu->r[3] = v;
    }
L_0015251c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 20u, &shc); cpu->r[3] = v;
    }
L_00152520:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00152524:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5CMath4AtanEf @ 00152530 (arm) */
void fn_00152530(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00152530:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00152534:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5CMath5Atan2Eff @ 00152538 (arm) */
void fn_00152538(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00152538:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0015253c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5CMath7CleanupEv @ 00152540 (arm) */
void fn_00152540(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00152540:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00152544:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00152548:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0015254c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00152550:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00152560;
        }
    }
L_00152554:;
    {
        cpu->r[14] = 0x00152558u; fn_0018ba60(cpu);
    }
L_00152558:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015255c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00152560:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00152564:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00152568:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00152578;
        }
    }
L_0015256c:;
    {
        cpu->r[14] = 0x00152570u; fn_0018ba60(cpu);
    }
L_00152570:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00152574:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00152578:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0015257c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00152580:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00152590;
        }
    }
L_00152584:;
    {
        cpu->r[14] = 0x00152588u; fn_0018ba60(cpu);
    }
L_00152588:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015258c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00152590:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_00152594:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00152598:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001525a8;
        }
    }
L_0015259c:;
    {
        cpu->r[14] = 0x001525a0u; fn_0018ba60(cpu);
    }
L_001525a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001525a4:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001525a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001525ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001525b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001525c0;
        }
    }
L_001525b4:;
    {
        cpu->r[14] = 0x001525b8u; fn_0018ba60(cpu);
    }
L_001525b8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001525bc:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001525c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001525c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001525c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001525d8;
        }
    }
L_001525cc:;
    {
        cpu->r[14] = 0x001525d0u; fn_0018ba60(cpu);
    }
L_001525d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001525d4:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001525d8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_001525dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001525e0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001525e4u)) return;
        }
    }
L_001525e4:;
    {
        cpu->r[14] = 0x001525e8u; fn_0018ba60(cpu);
    }
L_001525e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001525ec:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001525f0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001525f4u)) return;
    }
}

/* _ZN8CMathInt7CleanupEv @ 001525f4 (arm) */
void fn_001525f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001525f4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001525f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001525fc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_00152600:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00152604:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00152614;
        }
    }
L_00152608:;
    {
        cpu->r[14] = 0x0015260cu; fn_0018ba60(cpu);
    }
L_0015260c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00152610:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00152614:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00152618:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0015261c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015262c;
        }
    }
L_00152620:;
    {
        cpu->r[14] = 0x00152624u; fn_0018ba60(cpu);
    }
L_00152624:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00152628:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0015262c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00152630:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00152634:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00152644;
        }
    }
L_00152638:;
    {
        cpu->r[14] = 0x0015263cu; fn_0018ba60(cpu);
    }
L_0015263c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00152640:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00152644:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_00152648:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0015264c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015265c;
        }
    }
L_00152650:;
    {
        cpu->r[14] = 0x00152654u; fn_0018ba60(cpu);
    }
L_00152654:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00152658:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_0015265c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00152660:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00152664:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00152674;
        }
    }
L_00152668:;
    {
        cpu->r[14] = 0x0015266cu; fn_0018ba60(cpu);
    }
L_0015266c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00152670:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00152674:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_00152678:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0015267c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015268c;
        }
    }
L_00152680:;
    {
        cpu->r[14] = 0x00152684u; fn_0018ba60(cpu);
    }
L_00152684:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00152688:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_0015268c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_00152690:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00152694:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00152698u)) return;
        }
    }
L_00152698:;
    {
        cpu->r[14] = 0x0015269cu; fn_0018ba60(cpu);
    }
L_0015269c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001526a0:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001526a4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001526a8u)) return;
    }
}

/* _ZN5CMath4SqrtEf @ 001526a8 (arm) */
void fn_001526a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001526a8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_001526ac:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_001526b0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001526b4:;
    {
        *vfp_d(cpu,7) = sqrt(*vfp_d(cpu,6));
    }
L_001526b8:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,7), *vfp_d(cpu,7));
    }
L_001526bc:;
    {
        vfp_sync_flags(cpu);
    }
L_001526c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001526d0;
        }
    }
L_001526c4:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001526c8:;
    {
        cpu->r[14] = 0x001526ccu; imp_sqrt(cpu); /* sqrt */
    }
L_001526cc:;
    {
        *(uint64_t*)vfp_d(cpu,7) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001526d0:;
    {
        *vfp_s(cpu,13) = (float)*vfp_d(cpu,7);
    }
L_001526d4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_001526d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001526dcu)) return;
    }
}

/* _ZN5CMath4InitEv @ 001526e0 (arm) */
void fn_001526e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001526e0:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001526e4:;
    {
        cpu->r[13] -= 32u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
    }
L_001526e8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001526ec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001526f0:;
    {
        cpu->r[3] = 0x00001000u;
    }
L_001526f4:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_001526f8:;
    {
        wr32(cpu->r[6] + + 0x1cu, cpu->r[3]);
    }
L_001526fc:;
    {
        cpu->r[14] = 0x00152700u; imp__Znaj(cpu); /* _Znaj */
    }
L_00152700:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00152704:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_00152708:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015270c:;
    {
        cpu->r[14] = 0x00152710u; imp__Znaj(cpu); /* _Znaj */
    }
L_00152710:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00152714:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[0]);
    }
L_00152718:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015271c:;
    {
        cpu->r[14] = 0x00152720u; imp__Znaj(cpu); /* _Znaj */
    }
L_00152720:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00152724:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[0]);
    }
L_00152728:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015272c:;
    {
        cpu->r[14] = 0x00152730u; imp__Znaj(cpu); /* _Znaj */
    }
L_00152730:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00152734:;
    {
        wr32(cpu->r[6] + + 0xcu, cpu->r[0]);
    }
L_00152738:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015273c:;
    {
        cpu->r[14] = 0x00152740u; imp__Znaj(cpu); /* _Znaj */
    }
L_00152740:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00152744:;
    {
        wr32(cpu->r[6] + + 0x10u, cpu->r[0]);
    }
L_00152748:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015274c:;
    {
        cpu->r[14] = 0x00152750u; imp__Znaj(cpu); /* _Znaj */
    }
L_00152750:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[0]);
    }
L_00152754:;
    {
        cpu->r[0] = 0x00000400u;
    }
L_00152758:;
    {
        cpu->r[14] = 0x0015275cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0015275c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[6] + + 0x1cu);
    }
L_00152760:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,17);
    }
L_00152764:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00152768:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[0]);
    }
L_0015276c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00152880;
        }
    }
L_00152770:;
    {
        *vfp_d(cpu, 11) = *(double*)G(0x00152778u + + 0x1e0u);
    }
L_00152774:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00152778:;
    {
        *vfp_s(cpu, 20) = *(float*)G(0x00152780u + + 0x1e0u);
    }
L_0015277c:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00152780:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_00152784:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,12);
    }
L_00152788:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 6) * *vfp_d(cpu, 11);
    }
L_0015278c:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,17);
    }
L_00152790:;
    {
        *vfp_d(cpu, 9) = *vfp_d(cpu, 6) / *vfp_d(cpu, 7);
    }
L_00152794:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[4];
    }
L_00152798:;
    {
        *vfp_s(cpu,18) = (float)*vfp_d(cpu,9);
    }
L_0015279c:;
    {
        *vfp_d(cpu,9) = (double)*vfp_s(cpu,18);
    }
L_001527a0:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,9); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001527a4:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_001527a8:;
    {
        cpu->r[14] = 0x001527acu; imp_sin(cpu); /* sin */
    }
L_001527ac:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001527b0:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_001527b4:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001527b8:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,6);
    }
L_001527bc:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,9); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001527c0:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001527c4:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
    }
L_001527c8:;
    {
        cpu->r[14] = 0x001527ccu; imp_cos(cpu); /* cos */
    }
L_001527cc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001527d0:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001527d4:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,6);
    }
L_001527d8:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,9); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001527dc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001527e0:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
    }
L_001527e4:;
    {
        cpu->r[14] = 0x001527e8u; imp_tan(cpu); /* tan */
    }
L_001527e8:;
    {
        vfp_vadd(cpu, 15, 16, 16);
    }
L_001527ec:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001527f0:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0xcu);
    }
L_001527f4:;
    {
        vfp_vdiv(cpu, 18, 15, 17);
    }
L_001527f8:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001527fc:;
    {
        vfp_vsub(cpu, 18, 18, 20);
    }
L_00152800:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,6);
    }
L_00152804:;
    {
        *vfp_d(cpu,9) = (double)*vfp_s(cpu,18);
    }
L_00152808:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0015280c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
    }
L_00152810:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,9); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00152814:;
    {
        cpu->r[14] = 0x00152818u; imp_asin(cpu); /* asin */
    }
L_00152818:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x10u);
    }
L_0015281c:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00152820:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,6);
    }
L_00152824:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,9); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00152828:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0015282c:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
    }
L_00152830:;
    {
        cpu->r[14] = 0x00152834u; imp_acos(cpu); /* acos */
    }
L_00152834:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[6] + + 0x1cu);
    }
L_00152838:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_0015283c:;
    {
        vfp_vdiv(cpu, 15, 16, 15);
    }
L_00152840:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00152844:;
    {
        *vfp_s(cpu,14) = (float)*vfp_d(cpu,6);
    }
L_00152848:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_0015284c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00152850:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[1]);
    }
L_00152854:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00152858:;
    {
        cpu->r[14] = 0x0015285cu; imp_atan(cpu); /* atan */
    }
L_0015285c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_00152860:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,17);
    }
L_00152864:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00152868:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,6);
    }
L_0015286c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00152870:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[1]);
    }
L_00152874:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00152878:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_0015287c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015277c;
        }
    }
L_00152880:;
    {
        cpu->r[12] = rd32(0x00152888u + + 0xe4u);
    }
L_00152884:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00152888:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015288c:;
    {
        wr32(cpu->r[6] + + 0x20u, cpu->r[0]);
    }
L_00152890:;
    {
        cpu->r[12] = add_flags(cpu, 0x00152898u, cpu->r[12], 0, 0);
    }
L_00152894:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00152898:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_0015289c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000014u, 0, 0);
    }
L_001528a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001528a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001528acu + + 0xb8u);
    }
L_001528a8:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001528ac:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001528b0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x4b40u << 16);
    }
L_001528b4:;
    {
        wr32(cpu->r[6] + + 0x28u, cpu->r[3]);
    }
L_001528b8:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_001528bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001528c4u + + 0xa4u);
    }
L_001528c0:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001528c4:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001528c8:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001528cc:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001528d0:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 7u, &shc); cpu->r[5] = v;
    }
L_001528d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001528d8:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 16u, &shc); cpu->r[2] = v;
    }
L_001528dc:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
    }
L_001528e0:;
    {
        uint32_t v = cpu->r[2] | 0x00008000u; cpu->r[2] = v;
    }
L_001528e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_001528e8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + - 0x8u);
    }
L_001528ec:;
    {
        uint32_t v = cpu->r[2] | cpu->r[3]; cpu->r[3] = v;
    }
L_001528f0:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_001528f4:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,12);
    }
L_001528f8:;
    {
        *vfp_d(cpu,7) = sqrt(*vfp_d(cpu,6));
    }
L_001528fc:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00152900:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,7), *vfp_d(cpu,7));
    }
L_00152904:;
    {
        vfp_sync_flags(cpu);
    }
L_00152908:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00152914;
        }
    }
L_0015290c:;
    {
        cpu->r[14] = 0x00152910u; imp_sqrt(cpu); /* sqrt */
    }
L_00152910:;
    {
        *(uint64_t*)vfp_d(cpu,7) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00152914:;
    {
        *vfp_s(cpu,14) = (float)*vfp_d(cpu,7);
    }
L_00152918:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_0015291c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00152920:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_00152924:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00152928:;
    {
        uint32_t v = cpu->r[1] & ~ 0xff000000u; cpu->r[2] = v;
    }
L_0015292c:;
    {
        uint32_t v = cpu->r[2] & ~ 0x00800000u; cpu->r[2] = v;
    }
L_00152930:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
    }
L_00152934:;
    {
        cpu->r[1] = rd32(cpu->r[5] + - 0x10u);
    }
L_00152938:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_0015293c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
    }
L_00152940:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00152944:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000100u, 1, 1);
    }
L_00152948:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001528d0;
        }
    }
L_0015294c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00152950:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        cpu->r[13] += 32u;
    }
L_00152954:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00152958u)) return;
    }
}

/* _ZN8CMathInt4InitEv @ 00152970 (arm) */
void fn_00152970(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00152970:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00152974:;
    {
        cpu->r[13] -= 48u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
        wr64(cpu->r[13] + 32u, *(uint64_t*)vfp_d(cpu, 12));
        wr64(cpu->r[13] + 40u, *(uint64_t*)vfp_d(cpu, 13));
    }
L_00152978:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0015297c:;
    {
        cpu->r[3] = 0x00001000u;
    }
L_00152980:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_00152984:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[3]);
    }
L_00152988:;
    {
        cpu->r[14] = 0x0015298cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0015298c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_00152990:;
    {
        wr32(cpu->r[5], cpu->r[0]);
    }
L_00152994:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00152998:;
    {
        cpu->r[14] = 0x0015299cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0015299c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001529a0:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[0]);
    }
L_001529a4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001529a8:;
    {
        cpu->r[14] = 0x001529acu; imp__Znaj(cpu); /* _Znaj */
    }
L_001529ac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001529b0:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[0]);
    }
L_001529b4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001529b8:;
    {
        cpu->r[14] = 0x001529bcu; imp__Znaj(cpu); /* _Znaj */
    }
L_001529bc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001529c0:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[0]);
    }
L_001529c4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001529c8:;
    {
        cpu->r[14] = 0x001529ccu; imp__Znaj(cpu); /* _Znaj */
    }
L_001529cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001529d0:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[0]);
    }
L_001529d4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001529d8:;
    {
        cpu->r[14] = 0x001529dcu; imp__Znaj(cpu); /* _Znaj */
    }
L_001529dc:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[0]);
    }
L_001529e0:;
    {
        cpu->r[0] = 0x00000400u;
    }
L_001529e4:;
    {
        cpu->r[14] = 0x001529e8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001529e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001529ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001529f0:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[0]);
    }
L_001529f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00152b40;
        }
    }
L_001529f8:;
    {
        *vfp_d(cpu, 13) = *(double*)G(0x00152a00u + + 0x148u);
    }
L_001529fc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00152a00:;
    {
        *vfp_d(cpu, 10) = *(double*)G(0x00152a08u + + 0x148u);
    }
L_00152a04:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00152a0cu + + 0x15cu);
    }
L_00152a08:;
    {
        *vfp_d(cpu, 11) = *(double*)G(0x00152a10u + + 0x148u);
    }
L_00152a0c:;
    {
        *vfp_d(cpu, 12) = *(double*)G(0x00152a14u + + 0x14cu);
    }
L_00152a10:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00152a14:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_00152a18:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,12);
    }
L_00152a1c:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[3];
    }
L_00152a20:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[4];
    }
L_00152a24:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 6) * *vfp_d(cpu, 13);
    }
L_00152a28:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,10);
    }
L_00152a2c:;
    {
        *vfp_d(cpu, 9) = *vfp_d(cpu, 6) / *vfp_d(cpu, 7);
    }
L_00152a30:;
    {
        *vfp_s(cpu,18) = (float)*vfp_d(cpu,9);
    }
L_00152a34:;
    {
        *vfp_d(cpu,9) = (double)*vfp_s(cpu,18);
    }
L_00152a38:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,9); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00152a3c:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_00152a40:;
    {
        cpu->r[14] = 0x00152a44u; imp_sin(cpu); /* sin */
    }
L_00152a44:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00152a48:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00152a4c:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) * *vfp_d(cpu, 10);
    }
L_00152a50:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,9); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00152a54:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_d(cpu,7);
    }
L_00152a58:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00152a5c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
    }
L_00152a60:;
    {
        cpu->r[14] = 0x00152a64u; imp_cos(cpu); /* cos */
    }
L_00152a64:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00152a68:;
    {
        *(uint64_t*)vfp_d(cpu,5) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00152a6c:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 5) * *vfp_d(cpu, 10);
    }
L_00152a70:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,9); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00152a74:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_d(cpu,7);
    }
L_00152a78:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00152a7c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
    }
L_00152a80:;
    {
        cpu->r[14] = 0x00152a84u; imp_tan(cpu); /* tan */
    }
L_00152a84:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00152a88:;
    {
        vfp_vadd(cpu, 14, 16, 16);
    }
L_00152a8c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0xcu);
    }
L_00152a90:;
    {
        *(uint64_t*)vfp_d(cpu,5) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00152a94:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 5) * *vfp_d(cpu, 10);
    }
L_00152a98:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_d(cpu,6);
    }
L_00152a9c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00152aa0:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
    }
L_00152aa4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x1cu);
    }
L_00152aa8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00152aac:;
    {
        vfp_vdiv(cpu, 18, 14, 15);
    }
L_00152ab0:;
    {
        vfp_vsub(cpu, 18, 18, 17);
    }
L_00152ab4:;
    {
        *vfp_d(cpu,9) = (double)*vfp_s(cpu,18);
    }
L_00152ab8:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,9); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00152abc:;
    {
        cpu->r[14] = 0x00152ac0u; imp_asin(cpu); /* asin */
    }
L_00152ac0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x10u);
    }
L_00152ac4:;
    {
        *(uint64_t*)vfp_d(cpu,5) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00152ac8:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 5) * *vfp_d(cpu, 11);
    }
L_00152acc:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,9); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00152ad0:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) / *vfp_d(cpu, 12);
    }
L_00152ad4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_d(cpu,7);
    }
L_00152ad8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00152adc:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
    }
L_00152ae0:;
    {
        cpu->r[14] = 0x00152ae4u; imp_acos(cpu); /* acos */
    }
L_00152ae4:;
    {
        *(uint64_t*)vfp_d(cpu,5) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00152ae8:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 5) * *vfp_d(cpu, 11);
    }
L_00152aec:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) / *vfp_d(cpu, 12);
    }
L_00152af0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_d(cpu,7);
    }
L_00152af4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00152af8:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
    }
L_00152afc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x1cu);
    }
L_00152b00:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00152b04:;
    {
        vfp_vdiv(cpu, 15, 16, 15);
    }
L_00152b08:;
    {
        *vfp_d(cpu,5) = (double)*vfp_s(cpu,15);
    }
L_00152b0c:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,5); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00152b10:;
    {
        cpu->r[14] = 0x00152b14u; imp_atan(cpu); /* atan */
    }
L_00152b14:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_00152b18:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00152b1c:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) * *vfp_d(cpu, 11);
    }
L_00152b20:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) / *vfp_d(cpu, 12);
    }
L_00152b24:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_d(cpu,7);
    }
L_00152b28:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00152b2c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
    }
L_00152b30:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_00152b34:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00152b38:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00152b3c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00152a10;
        }
    }
L_00152b40:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        *(uint64_t*)vfp_d(cpu, 12) = rd64(cpu->r[13] + 32u);
        *(uint64_t*)vfp_d(cpu, 13) = rd64(cpu->r[13] + 40u);
        cpu->r[13] += 48u;
    }
L_00152b44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00152b48u)) return;
    }
}

/* _ZN8MathUtil12NormAngleDEGEf @ 00152b70 (arm) */
void fn_00152b70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00152b70:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00152b74:;
    {
        *vfp_s(cpu, 10) = *(float*)G(0x00152b7cu + + 0x64u);
    }
L_00152b78:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x00152b80u + + 0x64u);
    }
L_00152b7c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00152b84u + + 0x64u);
    }
L_00152b80:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00152b88u + + 0x64u);
    }
L_00152b84:;
    {
        goto L_00152bb4;
    }
L_00152b88:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,11));
    }
L_00152b8c:;
    {
        vfp_sync_flags(cpu);
    }
L_00152b90:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00152b94:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00152b98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00152b9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00152bd8;
        }
    }
L_00152ba0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00152ba4:;
    {
        vfp_sync_flags(cpu);
    }
L_00152ba8:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,13);
        }
    }
L_00152bac:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,12);
        }
    }
L_00152bb0:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_00152bb4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00152bb8:;
    {
        vfp_sync_flags(cpu);
    }
L_00152bbc:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00152b88;
        }
    }
L_00152bc0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,10));
    }
L_00152bc4:;
    {
        vfp_sync_flags(cpu);
    }
L_00152bc8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00152bcc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00152bd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00152bd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00152ba0;
        }
    }
L_00152bd8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00152bdc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8MathUtil11AddAngleDEGEff @ 00152bf0 (arm) */
void fn_00152bf0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00152bf0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00152bf4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_00152bf8:;
    {
        vfp_vadd(cpu, 14, 14, 15);
    }
L_00152bfc:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00152c00:;
    {
        return fn_00152b70(cpu);
    }
}

/* _ZN8MathUtil10PitchAngleE8Vector3d @ 00152c08 (arm) */
void fn_00152c08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00152c08:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00152c0c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00152c10:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00152c14:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_00152c18:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00152c1c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00152c24u + + 0x8cu);
    }
L_00152c20:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00152c24:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00152c28:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00152c2c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00152c30:;
    {
        cpu->r[14] = 0x00152c34u; fn_00155f80(cpu);
    }
L_00152c34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00152c38:;
    {
        cpu->r[14] = 0x00152c3cu; fn_00155f80(cpu);
    }
L_00152c3c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00152c40:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_00152c44:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00152c48:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4]);
    }
L_00152c4c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_00152c50:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_00152c54:;
    {
        vfp_vmla(cpu, 15, 12, 14);
    }
L_00152c58:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_00152c5c:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_00152c60:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_00152c64:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00152c68:;
    {
        cpu->r[14] = 0x00152c6cu; imp_acos(cpu); /* acos */
    }
L_00152c6c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_00152c70:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_00152c74:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x00152c7cu + + 0x24u);
    }
L_00152c78:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x00152c80u + + 0x28u);
    }
L_00152c7c:;
    {
        vfp_sync_flags(cpu);
    }
L_00152c80:;
    {
        if (cond_test(cpu, 11)) {
        *vfp_d(cpu,7) = *vfp_d(cpu,6);
        }
    }
L_00152c84:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00152c88:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) * *vfp_d(cpu, 7);
    }
L_00152c8c:;
    {
        *vfp_s(cpu,13) = (float)*vfp_d(cpu,7);
    }
L_00152c90:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00152c94:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00152c98:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00152c9c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00152ca0u)) return;
    }
}

/* _ZN8MathUtil10PitchAngleE8Vector3dS0_ @ 00152cb8 (arm) */
void fn_00152cb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00152cb8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_00152cbc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00152cc0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1]);
    }
L_00152cc4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00152cc8:;
    {
        vfp_vsub(cpu, 12, 12, 15);
    }
L_00152ccc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00152cd0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_00152cd4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_00152cd8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00152cdc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00152ce0:;
    {
        vfp_vsub(cpu, 14, 11, 14);
    }
L_00152ce4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00152ce8:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_00152cec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00152cf0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00152cf4:;
    {
        cpu->r[14] = 0x00152cf8u; fn_00152c08(cpu);
    }
L_00152cf8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00152cfc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00152d00u)) return;
    }
}

/* _ZN8MathUtil18AngleDiffInDegreesEfff @ 00152d00 (arm) */
void fn_00152d00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00152d00:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[1];
    }
L_00152d04:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00152d08:;
    {
        *vfp_d(cpu,7) = (double)*vfp_s(cpu,8);
    }
L_00152d0c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00152d10:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00152d14:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_00152d18:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,13);
    }
L_00152d1c:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,7); cpu->r[2]= (uint32_t)v; cpu->r[3]=(uint32_t)(v>>32);
    }
L_00152d20:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00152d24:;
    {
        *vfp_d(cpu,8) = (double)*vfp_s(cpu,16);
    }
L_00152d28:;
    {
        cpu->r[14] = 0x00152d2cu; imp_atan2(cpu); /* atan2 */
    }
L_00152d2c:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x00152d34u + + 0x64u);
    }
L_00152d30:;
    {
        *vfp_d(cpu, 5) = *(double*)G(0x00152d38u + + 0x68u);
    }
L_00152d34:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00152d3cu + + 0x6cu);
    }
L_00152d38:;
    {
        *(uint64_t*)vfp_d(cpu,4) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00152d3c:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) + *vfp_d(cpu, 4) * *vfp_d(cpu, 5);
    }
L_00152d40:;
    {
        *vfp_d(cpu, 8) = *vfp_d(cpu, 7) - *vfp_d(cpu, 8);
    }
L_00152d44:;
    {
        *vfp_s(cpu,16) = (float)*vfp_d(cpu,8);
    }
L_00152d48:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,13));
    }
L_00152d4c:;
    {
        vfp_sync_flags(cpu);
    }
L_00152d50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00152d74;
        }
    }
L_00152d54:;
    {
        vfp_vdiv(cpu, 15, 16, 13);
    }
L_00152d58:;
    {
        cpu->r[3] = 0x00000168u;
    }
L_00152d5c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00152d60:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00152d64:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[2] = v;
    }
L_00152d68:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_00152d6c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00152d70:;
    {
        vfp_vsub(cpu, 16, 16, 15);
    }
L_00152d74:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00152d7cu + + 0x30u);
    }
L_00152d78:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_00152d7c:;
    {
        vfp_sync_flags(cpu);
    }
L_00152d80:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 15) = *(float*)G(0x00152d88u + + 0x20u);
        }
    }
L_00152d84:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 16, 16, 15);
        }
    }
L_00152d88:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00152d8c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00152d90:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00152d94u)) return;
    }
}

/* _ZN8MathUtil8YawAngleE8Vector3dS0_ @ 00152db0 (arm) */
void fn_00152db0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00152db0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00152db4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00152db8:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_00152dbc:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00152dc0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_00152dc4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00152dc8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00152dcc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00152dd0:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00152dd4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_00152dd8:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_00152ddc:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00152de0:;
    {
        cpu->r[14] = 0x00152de4u; fn_00152d00(cpu);
    }
L_00152de4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00152de8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xbf80u << 16);
    }
L_00152dec:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00152df0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00152df4:;
    {
        cpu->r[14] = 0x00152df8u; fn_00152d00(cpu);
    }
L_00152df8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00152e00u + + 0xcu);
    }
L_00152dfc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00152e00:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_00152e04:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00152e08:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00152e0cu)) return;
    }
}

/* _ZN7CMatrix4InitEPfS0_S0_ @ 00152e10 (arm) */
void fn_00152e10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00152e10:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_00152e14:;
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
L_00152e18:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00152e1c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 15) = rd32(ea + 0u);
        cpu->r[4] = ea + 4u;
    }
L_00152e20:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[12] = ea + 4u;
    }
L_00152e24:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00152e28:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00152e2c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00152e30:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00152e34:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00152e3cu + + 0xb4u);
    }
L_00152e38:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00152e3c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_00152e40:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_00152e44:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_00152e48:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00152e4c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00152e50:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00152e54:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_00152e58:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_00152e5c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00152e60:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_00152e64:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 14) = rd32(ea + 0u);
        cpu->r[5] = ea + 4u;
    }
L_00152e68:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00152e6c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00152e70:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00152e74:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 14) = rd32(ea + 0u);
        cpu->r[0] = ea + 4u;
    }
L_00152e78:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00152e7c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00152e80:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00152e84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00152e88:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00152e8c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_00152e90:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00152e94:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_00152e98:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00152e9c:;
    {
        *(uint32_t*)G(cpu->r[8] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00152ea0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00152ea4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00152ea8:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00152eac:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00152eb0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00152eb4:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00152eb8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_00152ebc:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00152ec0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00152ec4:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00152ec8:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00152ecc:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00152ed0:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00152ed4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00152ed8:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00152edc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00152ee4u + + 0x10u);
    }
L_00152ee0:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00152ee4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00152ee8:;
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
L_00152eec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix11SetWeightedEPS_f @ 00152ef8 (arm) */
void fn_00152ef8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00152ef8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_00152efc:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00152f00:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 14) = rd32(ea + 0u);
        cpu->r[3] = ea + 4u;
    }
L_00152f04:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00152f08:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00152f0c:;
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
L_00152f10:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00152f14:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00152f18:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000040u, 1, 0);
    }
L_00152f1c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00152f20:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00152f24:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_00152f28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00152f2c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_00152f30:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00152f34:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[4]);
    }
L_00152f38:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00152f3c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_00152f40:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00152f44:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[4]);
    }
L_00152f48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00152f4c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_00152f50:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 14));
        cpu->r[2] = ea + 4u;
    }
L_00152f54:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00152f58:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00152f5c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00152f60:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_00152f64:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00152f68:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_00152f6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00152f70:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00152f74:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[4]);
    }
L_00152f78:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_00152f7c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[4]);
    }
L_00152f80:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00152f84:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_00152f88:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00152f8c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[4]);
    }
L_00152f90:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00152f94:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_00152f98:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00152f9c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[4]);
    }
L_00152fa0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00152fa4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_00152fa8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00152fac:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_00152fb0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00152fb4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x38u);
    }
L_00152fb8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00152fbc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00152fc0:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00152fc4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00152fc8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00152fcc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00152fd0:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00152fd4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[9] + + 0x4u);
    }
L_00152fd8:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00152fdc:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00152fe0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[8] + + 0x4u);
    }
L_00152fe4:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00152fe8:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00152fec:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[6] + + 0x4u);
    }
L_00152ff0:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00152ff4:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00152ff8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00152ffc:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00153000:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00153004:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153008:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_0015300c:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00153010:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153014:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x30u);
    }
L_00153018:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_0015301c:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00153020:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_00153024:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x28u);
    }
L_00153028:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015302c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00153030:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00153034:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00153038:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x20u);
    }
L_0015303c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153040:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00153044:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00153048:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0015304c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x18u);
    }
L_00153050:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153054:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00153058:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0015305c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00153060:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x10u);
    }
L_00153064:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153068:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_0015306c:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00153070:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00153074:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x8u);
    }
L_00153078:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015307c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00153080:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00153084:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00153088:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015308c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_00153090:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00153094:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153098:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12] + + 0x8u);
    }
L_0015309c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001530a0:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001530a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_001530a8:;
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
L_001530ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix11AddWeightedEPS_f @ 001530b0 (arm) */
void fn_001530b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001530b0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_001530b4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_001530b8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001530bc:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 13) = rd32(ea + 0u);
        cpu->r[2] = ea + 4u;
    }
L_001530c0:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_001530c4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001530c8:;
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
L_001530cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000048u, 1, 0);
    }
L_001530d0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001530d4:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[9]);
    }
L_001530d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_001530dc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001530e0:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[12]);
    }
L_001530e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_001530e8:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[9]);
    }
L_001530ec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001530f0:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_001530f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_001530f8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[9]);
    }
L_001530fc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00153100:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_00153104:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00153108:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[9]);
    }
L_0015310c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00153110:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_00153114:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00153118:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[9]);
    }
L_0015311c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00153120:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_00153124:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00153128:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0015312c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_00153130:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 14));
        cpu->r[3] = ea + 4u;
    }
L_00153134:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00153138:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_0015313c:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_00153140:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00153144:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_00153148:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0015314c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_00153150:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00153154:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00153158:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0015315c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00153160:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00153164:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_00153168:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_0015316c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00153170:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[9]);
    }
L_00153174:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00153178:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_0015317c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00153180:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_00153184:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x40u);
    }
L_00153188:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015318c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00153190:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00153194:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_00153198:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015319c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x44u);
    }
L_001531a0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[10] + + 0x4u);
    }
L_001531a4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001531a8:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_001531ac:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001531b0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[9] + + 0x4u);
    }
L_001531b4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[8] + + 0x4u);
    }
L_001531b8:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_001531bc:;
    {
        *(uint32_t*)G(cpu->r[8] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001531c0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[7] + + 0x4u);
    }
L_001531c4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001531c8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001531cc:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_001531d0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x38u);
    }
L_001531d4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_001531d8:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001531dc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[9] + + 0x4u);
    }
L_001531e0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[6] + + 0x4u);
    }
L_001531e4:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_001531e8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x30u);
    }
L_001531ec:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001531f0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001531f4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_001531f8:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_001531fc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00153200:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153204:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[9] + + 0x4u);
    }
L_00153208:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_0015320c:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_00153210:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x28u);
    }
L_00153214:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153218:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_0015321c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_00153220:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_00153224:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_00153228:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015322c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[9] + + 0x4u);
    }
L_00153230:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00153234:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_00153238:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0015323c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x14u);
    }
L_00153240:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153244:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_00153248:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[11] + + 0x4u);
    }
L_0015324c:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_00153250:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00153254:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153258:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_0015325c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[9] + + 0x4u);
    }
L_00153260:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_00153264:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00153268:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015326c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_00153270:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00153274:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_00153278:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015327c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_00153280:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00153284:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[9] + + 0x4u);
    }
L_00153288:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_0015328c:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_00153290:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00153294:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153298:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[9] + + 0x8u);
    }
L_0015329c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001532a0:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_001532a4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001532a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001532ac:;
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
L_001532b0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix13LoadScaled_33EPS_f @ 001532b4 (arm) */
void fn_001532b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001532b4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_001532b8:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001532bc:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 14) = rd32(ea + 0u);
        cpu->r[3] = ea + 4u;
    }
L_001532c0:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_001532c4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001532c8:;
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
L_001532cc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001532d0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_001532d4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001532d8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[6], 0x00000008u, 0, 0);
    }
L_001532dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_001532e0:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 14));
        cpu->r[2] = ea + 4u;
    }
L_001532e4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_001532e8:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_001532ec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001532f0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_001532f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001532f8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001532fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00153300:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153304:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00153308:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0015330c:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153310:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[10] + + 0x4u);
    }
L_00153314:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00153318:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015331c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[8] + + 0x4u);
    }
L_00153320:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00153324:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153328:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[6] + + 0x4u);
    }
L_0015332c:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00153330:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153334:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[11] + + 0x4u);
    }
L_00153338:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0015333c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153340:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_00153344:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00153348:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015334c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12] + + 0x8u);
    }
L_00153350:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00153354:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153358:;
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
L_0015335c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix7Load_33EPS_ @ 00153360 (arm) */
void fn_00153360(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00153360:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00153364:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00153368:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 15) = rd32(ea + 0u);
        cpu->r[2] = ea + 4u;
    }
L_0015336c:;
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
L_00153370:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[3] = ea + 4u;
    }
L_00153374:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00153378:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0015337c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00153380:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_00153384:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00153388:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0015338c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], 0x00000008u, 0, 0);
    }
L_00153390:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00153394:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00153398:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_0015339c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001533a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001533a4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001533a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001533ac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[9] + + 0x4u);
    }
L_001533b0:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001533b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[8] + + 0x4u);
    }
L_001533b8:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001533bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x4u);
    }
L_001533c0:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001533c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_001533c8:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001533cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001533d0:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001533d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_001533d8:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001533dc:;
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
L_001533e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix15TransformVectorEPfS0_ @ 001533e4 (arm) */
void fn_001533e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001533e4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_001533e8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001533ec:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001533f0:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[0]);
    }
L_001533f4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2]);
    }
L_001533f8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_001533fc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00153400:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_00153404:;
    {
        vfp_vmla(cpu, 15, 10, 11);
    }
L_00153408:;
    {
        vfp_vmla(cpu, 15, 12, 13);
    }
L_0015340c:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_00153410:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153414:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x14u);
    }
L_00153418:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_0015341c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00153420:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[0] + + 0x10u);
    }
L_00153424:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2]);
    }
L_00153428:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x18u);
    }
L_0015342c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00153430:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x1cu);
    }
L_00153434:;
    {
        vfp_vmla(cpu, 15, 10, 11);
    }
L_00153438:;
    {
        vfp_vmla(cpu, 15, 12, 13);
    }
L_0015343c:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_00153440:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153444:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x24u);
    }
L_00153448:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_0015344c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00153450:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[0] + + 0x20u);
    }
L_00153454:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2]);
    }
L_00153458:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_0015345c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x28u);
    }
L_00153460:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x2cu);
    }
L_00153464:;
    {
        vfp_vmla(cpu, 15, 10, 11);
    }
L_00153468:;
    {
        vfp_vmla(cpu, 15, 12, 13);
    }
L_0015346c:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_00153470:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153474:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix4MultEPS_ @ 00153478 (arm) */
void fn_00153478(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
    /* CMatrix::Mult scalar replacement. */
    guest_cmatrix_mul(cpu, 0); return;
L_00153478:;
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
L_0015347c:;
    {
        cpu->r[3] = 0x83000000u;
    }
L_00153480:;
    {
        uint32_t v = cpu->r[3] | 0x00000010u; cpu->r[3] = v;
    }
L_00153484:;
    {
        uint32_t v = cpu->r[3] | 0x00030000u; cpu->r[3] = v;
    }
L_00153488:;
    {
        cpu->fpscr = cpu->r[3];
    }
L_0015348c:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 16) = rd32(ea + 0u);
        *(uint32_t*)vfp_s(cpu, 17) = rd32(ea + 4u);
        *(uint32_t*)vfp_s(cpu, 18) = rd32(ea + 8u);
        *(uint32_t*)vfp_s(cpu, 19) = rd32(ea + 12u);
        *(uint32_t*)vfp_s(cpu, 20) = rd32(ea + 16u);
        *(uint32_t*)vfp_s(cpu, 21) = rd32(ea + 20u);
        *(uint32_t*)vfp_s(cpu, 22) = rd32(ea + 24u);
        *(uint32_t*)vfp_s(cpu, 23) = rd32(ea + 28u);
        *(uint32_t*)vfp_s(cpu, 24) = rd32(ea + 32u);
        *(uint32_t*)vfp_s(cpu, 25) = rd32(ea + 36u);
        *(uint32_t*)vfp_s(cpu, 26) = rd32(ea + 40u);
        *(uint32_t*)vfp_s(cpu, 27) = rd32(ea + 44u);
        *(uint32_t*)vfp_s(cpu, 28) = rd32(ea + 48u);
        *(uint32_t*)vfp_s(cpu, 29) = rd32(ea + 52u);
        *(uint32_t*)vfp_s(cpu, 30) = rd32(ea + 56u);
        *(uint32_t*)vfp_s(cpu, 31) = rd32(ea + 60u);
    }
L_00153490:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 0) = rd32(ea + 0u);
        *(uint32_t*)vfp_s(cpu, 1) = rd32(ea + 4u);
        *(uint32_t*)vfp_s(cpu, 2) = rd32(ea + 8u);
        *(uint32_t*)vfp_s(cpu, 3) = rd32(ea + 12u);
        *(uint32_t*)vfp_s(cpu, 4) = rd32(ea + 16u);
        *(uint32_t*)vfp_s(cpu, 5) = rd32(ea + 20u);
        *(uint32_t*)vfp_s(cpu, 6) = rd32(ea + 24u);
        *(uint32_t*)vfp_s(cpu, 7) = rd32(ea + 28u);
    }
L_00153494:;
    {
        vfp_vmul(cpu, 8, 16, 0);
    }
L_00153498:;
    {
        vfp_vmla(cpu, 8, 20, 1);
    }
L_0015349c:;
    {
        vfp_vmla(cpu, 8, 24, 2);
    }
L_001534a0:;
    {
        vfp_vmla(cpu, 8, 28, 3);
    }
L_001534a4:;
    {
        vfp_vmul(cpu, 12, 16, 4);
    }
L_001534a8:;
    {
        vfp_vmla(cpu, 12, 20, 5);
    }
L_001534ac:;
    {
        vfp_vmla(cpu, 12, 24, 6);
    }
L_001534b0:;
    {
        vfp_vmla(cpu, 12, 28, 7);
    }
L_001534b4:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 8));
        wr32(ea + 4u, *(uint32_t*)vfp_s(cpu, 9));
        wr32(ea + 8u, *(uint32_t*)vfp_s(cpu, 10));
        wr32(ea + 12u, *(uint32_t*)vfp_s(cpu, 11));
        wr32(ea + 16u, *(uint32_t*)vfp_s(cpu, 12));
        wr32(ea + 20u, *(uint32_t*)vfp_s(cpu, 13));
        wr32(ea + 24u, *(uint32_t*)vfp_s(cpu, 14));
        wr32(ea + 28u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[0] = ea + 32u;
    }
L_001534b8:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 0) = rd32(ea + 0u);
        *(uint32_t*)vfp_s(cpu, 1) = rd32(ea + 4u);
        *(uint32_t*)vfp_s(cpu, 2) = rd32(ea + 8u);
        *(uint32_t*)vfp_s(cpu, 3) = rd32(ea + 12u);
        *(uint32_t*)vfp_s(cpu, 4) = rd32(ea + 16u);
        *(uint32_t*)vfp_s(cpu, 5) = rd32(ea + 20u);
        *(uint32_t*)vfp_s(cpu, 6) = rd32(ea + 24u);
        *(uint32_t*)vfp_s(cpu, 7) = rd32(ea + 28u);
    }
L_001534bc:;
    {
        vfp_vmul(cpu, 8, 16, 0);
    }
L_001534c0:;
    {
        vfp_vmla(cpu, 8, 20, 1);
    }
L_001534c4:;
    {
        vfp_vmla(cpu, 8, 24, 2);
    }
L_001534c8:;
    {
        vfp_vmla(cpu, 8, 28, 3);
    }
L_001534cc:;
    {
        vfp_vmul(cpu, 12, 16, 4);
    }
L_001534d0:;
    {
        vfp_vmla(cpu, 12, 20, 5);
    }
L_001534d4:;
    {
        vfp_vmla(cpu, 12, 24, 6);
    }
L_001534d8:;
    {
        vfp_vmla(cpu, 12, 28, 7);
    }
L_001534dc:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 8));
        wr32(ea + 4u, *(uint32_t*)vfp_s(cpu, 9));
        wr32(ea + 8u, *(uint32_t*)vfp_s(cpu, 10));
        wr32(ea + 12u, *(uint32_t*)vfp_s(cpu, 11));
        wr32(ea + 16u, *(uint32_t*)vfp_s(cpu, 12));
        wr32(ea + 20u, *(uint32_t*)vfp_s(cpu, 13));
        wr32(ea + 24u, *(uint32_t*)vfp_s(cpu, 14));
        wr32(ea + 28u, *(uint32_t*)vfp_s(cpu, 15));
    }
L_001534e0:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00ff0000u; cpu->r[3] = v;
    }
L_001534e4:;
    {
        cpu->fpscr = cpu->r[3];
    }
L_001534e8:;
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
L_001534ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix7PreMultEPS_ @ 001534f0 (arm) */
void fn_001534f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
    /* CMatrix::PreMult scalar replacement. */
    guest_cmatrix_mul(cpu, 1); return;
L_001534f0:;
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
L_001534f4:;
    {
        cpu->r[3] = 0x83000000u;
    }
L_001534f8:;
    {
        uint32_t v = cpu->r[3] | 0x00000010u; cpu->r[3] = v;
    }
L_001534fc:;
    {
        uint32_t v = cpu->r[3] | 0x00030000u; cpu->r[3] = v;
    }
L_00153500:;
    {
        cpu->fpscr = cpu->r[3];
    }
L_00153504:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 16) = rd32(ea + 0u);
        *(uint32_t*)vfp_s(cpu, 17) = rd32(ea + 4u);
        *(uint32_t*)vfp_s(cpu, 18) = rd32(ea + 8u);
        *(uint32_t*)vfp_s(cpu, 19) = rd32(ea + 12u);
        *(uint32_t*)vfp_s(cpu, 20) = rd32(ea + 16u);
        *(uint32_t*)vfp_s(cpu, 21) = rd32(ea + 20u);
        *(uint32_t*)vfp_s(cpu, 22) = rd32(ea + 24u);
        *(uint32_t*)vfp_s(cpu, 23) = rd32(ea + 28u);
        *(uint32_t*)vfp_s(cpu, 24) = rd32(ea + 32u);
        *(uint32_t*)vfp_s(cpu, 25) = rd32(ea + 36u);
        *(uint32_t*)vfp_s(cpu, 26) = rd32(ea + 40u);
        *(uint32_t*)vfp_s(cpu, 27) = rd32(ea + 44u);
        *(uint32_t*)vfp_s(cpu, 28) = rd32(ea + 48u);
        *(uint32_t*)vfp_s(cpu, 29) = rd32(ea + 52u);
        *(uint32_t*)vfp_s(cpu, 30) = rd32(ea + 56u);
        *(uint32_t*)vfp_s(cpu, 31) = rd32(ea + 60u);
    }
L_00153508:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 0) = rd32(ea + 0u);
        *(uint32_t*)vfp_s(cpu, 1) = rd32(ea + 4u);
        *(uint32_t*)vfp_s(cpu, 2) = rd32(ea + 8u);
        *(uint32_t*)vfp_s(cpu, 3) = rd32(ea + 12u);
        *(uint32_t*)vfp_s(cpu, 4) = rd32(ea + 16u);
        *(uint32_t*)vfp_s(cpu, 5) = rd32(ea + 20u);
        *(uint32_t*)vfp_s(cpu, 6) = rd32(ea + 24u);
        *(uint32_t*)vfp_s(cpu, 7) = rd32(ea + 28u);
        cpu->r[1] = ea + 32u;
    }
L_0015350c:;
    {
        vfp_vmul(cpu, 8, 16, 0);
    }
L_00153510:;
    {
        vfp_vmla(cpu, 8, 20, 1);
    }
L_00153514:;
    {
        vfp_vmla(cpu, 8, 24, 2);
    }
L_00153518:;
    {
        vfp_vmla(cpu, 8, 28, 3);
    }
L_0015351c:;
    {
        vfp_vmul(cpu, 12, 16, 4);
    }
L_00153520:;
    {
        vfp_vmla(cpu, 12, 20, 5);
    }
L_00153524:;
    {
        vfp_vmla(cpu, 12, 24, 6);
    }
L_00153528:;
    {
        vfp_vmla(cpu, 12, 28, 7);
    }
L_0015352c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 8));
        wr32(ea + 4u, *(uint32_t*)vfp_s(cpu, 9));
        wr32(ea + 8u, *(uint32_t*)vfp_s(cpu, 10));
        wr32(ea + 12u, *(uint32_t*)vfp_s(cpu, 11));
        wr32(ea + 16u, *(uint32_t*)vfp_s(cpu, 12));
        wr32(ea + 20u, *(uint32_t*)vfp_s(cpu, 13));
        wr32(ea + 24u, *(uint32_t*)vfp_s(cpu, 14));
        wr32(ea + 28u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[0] = ea + 32u;
    }
L_00153530:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 0) = rd32(ea + 0u);
        *(uint32_t*)vfp_s(cpu, 1) = rd32(ea + 4u);
        *(uint32_t*)vfp_s(cpu, 2) = rd32(ea + 8u);
        *(uint32_t*)vfp_s(cpu, 3) = rd32(ea + 12u);
        *(uint32_t*)vfp_s(cpu, 4) = rd32(ea + 16u);
        *(uint32_t*)vfp_s(cpu, 5) = rd32(ea + 20u);
        *(uint32_t*)vfp_s(cpu, 6) = rd32(ea + 24u);
        *(uint32_t*)vfp_s(cpu, 7) = rd32(ea + 28u);
    }
L_00153534:;
    {
        vfp_vmul(cpu, 8, 16, 0);
    }
L_00153538:;
    {
        vfp_vmla(cpu, 8, 20, 1);
    }
L_0015353c:;
    {
        vfp_vmla(cpu, 8, 24, 2);
    }
L_00153540:;
    {
        vfp_vmla(cpu, 8, 28, 3);
    }
L_00153544:;
    {
        vfp_vmul(cpu, 12, 16, 4);
    }
L_00153548:;
    {
        vfp_vmla(cpu, 12, 20, 5);
    }
L_0015354c:;
    {
        vfp_vmla(cpu, 12, 24, 6);
    }
L_00153550:;
    {
        vfp_vmla(cpu, 12, 28, 7);
    }
L_00153554:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 8));
        wr32(ea + 4u, *(uint32_t*)vfp_s(cpu, 9));
        wr32(ea + 8u, *(uint32_t*)vfp_s(cpu, 10));
        wr32(ea + 12u, *(uint32_t*)vfp_s(cpu, 11));
        wr32(ea + 16u, *(uint32_t*)vfp_s(cpu, 12));
        wr32(ea + 20u, *(uint32_t*)vfp_s(cpu, 13));
        wr32(ea + 24u, *(uint32_t*)vfp_s(cpu, 14));
        wr32(ea + 28u, *(uint32_t*)vfp_s(cpu, 15));
    }
L_00153558:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00ff0000u; cpu->r[3] = v;
    }
L_0015355c:;
    {
        cpu->fpscr = cpu->r[3];
    }
L_00153560:;
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
L_00153564:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix7SetMultEPS_S0_ @ 00153568 (arm) */
void fn_00153568(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
    /* CMatrix::SetMult scalar replacement. */
    guest_cmatrix_mul(cpu, 2); return;
L_00153568:;
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
L_0015356c:;
    {
        cpu->r[3] = 0x83000000u;
    }
L_00153570:;
    {
        uint32_t v = cpu->r[3] | 0x00000010u; cpu->r[3] = v;
    }
L_00153574:;
    {
        uint32_t v = cpu->r[3] | 0x00030000u; cpu->r[3] = v;
    }
L_00153578:;
    {
        cpu->fpscr = cpu->r[3];
    }
L_0015357c:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 16) = rd32(ea + 0u);
        *(uint32_t*)vfp_s(cpu, 17) = rd32(ea + 4u);
        *(uint32_t*)vfp_s(cpu, 18) = rd32(ea + 8u);
        *(uint32_t*)vfp_s(cpu, 19) = rd32(ea + 12u);
        *(uint32_t*)vfp_s(cpu, 20) = rd32(ea + 16u);
        *(uint32_t*)vfp_s(cpu, 21) = rd32(ea + 20u);
        *(uint32_t*)vfp_s(cpu, 22) = rd32(ea + 24u);
        *(uint32_t*)vfp_s(cpu, 23) = rd32(ea + 28u);
        *(uint32_t*)vfp_s(cpu, 24) = rd32(ea + 32u);
        *(uint32_t*)vfp_s(cpu, 25) = rd32(ea + 36u);
        *(uint32_t*)vfp_s(cpu, 26) = rd32(ea + 40u);
        *(uint32_t*)vfp_s(cpu, 27) = rd32(ea + 44u);
        *(uint32_t*)vfp_s(cpu, 28) = rd32(ea + 48u);
        *(uint32_t*)vfp_s(cpu, 29) = rd32(ea + 52u);
        *(uint32_t*)vfp_s(cpu, 30) = rd32(ea + 56u);
        *(uint32_t*)vfp_s(cpu, 31) = rd32(ea + 60u);
    }
L_00153580:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 0) = rd32(ea + 0u);
        *(uint32_t*)vfp_s(cpu, 1) = rd32(ea + 4u);
        *(uint32_t*)vfp_s(cpu, 2) = rd32(ea + 8u);
        *(uint32_t*)vfp_s(cpu, 3) = rd32(ea + 12u);
        *(uint32_t*)vfp_s(cpu, 4) = rd32(ea + 16u);
        *(uint32_t*)vfp_s(cpu, 5) = rd32(ea + 20u);
        *(uint32_t*)vfp_s(cpu, 6) = rd32(ea + 24u);
        *(uint32_t*)vfp_s(cpu, 7) = rd32(ea + 28u);
        cpu->r[1] = ea + 32u;
    }
L_00153584:;
    {
        vfp_vmul(cpu, 8, 16, 0);
    }
L_00153588:;
    {
        vfp_vmla(cpu, 8, 20, 1);
    }
L_0015358c:;
    {
        vfp_vmla(cpu, 8, 24, 2);
    }
L_00153590:;
    {
        vfp_vmla(cpu, 8, 28, 3);
    }
L_00153594:;
    {
        vfp_vmul(cpu, 12, 16, 4);
    }
L_00153598:;
    {
        vfp_vmla(cpu, 12, 20, 5);
    }
L_0015359c:;
    {
        vfp_vmla(cpu, 12, 24, 6);
    }
L_001535a0:;
    {
        vfp_vmla(cpu, 12, 28, 7);
    }
L_001535a4:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 8));
        wr32(ea + 4u, *(uint32_t*)vfp_s(cpu, 9));
        wr32(ea + 8u, *(uint32_t*)vfp_s(cpu, 10));
        wr32(ea + 12u, *(uint32_t*)vfp_s(cpu, 11));
        wr32(ea + 16u, *(uint32_t*)vfp_s(cpu, 12));
        wr32(ea + 20u, *(uint32_t*)vfp_s(cpu, 13));
        wr32(ea + 24u, *(uint32_t*)vfp_s(cpu, 14));
        wr32(ea + 28u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[0] = ea + 32u;
    }
L_001535a8:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 0) = rd32(ea + 0u);
        *(uint32_t*)vfp_s(cpu, 1) = rd32(ea + 4u);
        *(uint32_t*)vfp_s(cpu, 2) = rd32(ea + 8u);
        *(uint32_t*)vfp_s(cpu, 3) = rd32(ea + 12u);
        *(uint32_t*)vfp_s(cpu, 4) = rd32(ea + 16u);
        *(uint32_t*)vfp_s(cpu, 5) = rd32(ea + 20u);
        *(uint32_t*)vfp_s(cpu, 6) = rd32(ea + 24u);
        *(uint32_t*)vfp_s(cpu, 7) = rd32(ea + 28u);
    }
L_001535ac:;
    {
        vfp_vmul(cpu, 8, 16, 0);
    }
L_001535b0:;
    {
        vfp_vmla(cpu, 8, 20, 1);
    }
L_001535b4:;
    {
        vfp_vmla(cpu, 8, 24, 2);
    }
L_001535b8:;
    {
        vfp_vmla(cpu, 8, 28, 3);
    }
L_001535bc:;
    {
        vfp_vmul(cpu, 12, 16, 4);
    }
L_001535c0:;
    {
        vfp_vmla(cpu, 12, 20, 5);
    }
L_001535c4:;
    {
        vfp_vmla(cpu, 12, 24, 6);
    }
L_001535c8:;
    {
        vfp_vmla(cpu, 12, 28, 7);
    }
L_001535cc:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 8));
        wr32(ea + 4u, *(uint32_t*)vfp_s(cpu, 9));
        wr32(ea + 8u, *(uint32_t*)vfp_s(cpu, 10));
        wr32(ea + 12u, *(uint32_t*)vfp_s(cpu, 11));
        wr32(ea + 16u, *(uint32_t*)vfp_s(cpu, 12));
        wr32(ea + 20u, *(uint32_t*)vfp_s(cpu, 13));
        wr32(ea + 24u, *(uint32_t*)vfp_s(cpu, 14));
        wr32(ea + 28u, *(uint32_t*)vfp_s(cpu, 15));
    }
L_001535d0:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00ff0000u; cpu->r[3] = v;
    }
L_001535d4:;
    {
        cpu->fpscr = cpu->r[3];
    }
L_001535d8:;
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
L_001535dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix4ZeroEv @ 001535e0 (arm) */
void fn_001535e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001535e0:;
    {
        cpu->r[3] = rd32(0x001535e8u + + 0x14u);
    }
L_001535e4:;
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
L_001535e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001535f0u, cpu->r[3], 0, 0);
    }
L_001535ec:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 16) = rd32(ea + 0u);
        *(uint32_t*)vfp_s(cpu, 17) = rd32(ea + 4u);
        *(uint32_t*)vfp_s(cpu, 18) = rd32(ea + 8u);
        *(uint32_t*)vfp_s(cpu, 19) = rd32(ea + 12u);
        *(uint32_t*)vfp_s(cpu, 20) = rd32(ea + 16u);
        *(uint32_t*)vfp_s(cpu, 21) = rd32(ea + 20u);
        *(uint32_t*)vfp_s(cpu, 22) = rd32(ea + 24u);
        *(uint32_t*)vfp_s(cpu, 23) = rd32(ea + 28u);
        *(uint32_t*)vfp_s(cpu, 24) = rd32(ea + 32u);
        *(uint32_t*)vfp_s(cpu, 25) = rd32(ea + 36u);
        *(uint32_t*)vfp_s(cpu, 26) = rd32(ea + 40u);
        *(uint32_t*)vfp_s(cpu, 27) = rd32(ea + 44u);
        *(uint32_t*)vfp_s(cpu, 28) = rd32(ea + 48u);
        *(uint32_t*)vfp_s(cpu, 29) = rd32(ea + 52u);
        *(uint32_t*)vfp_s(cpu, 30) = rd32(ea + 56u);
        *(uint32_t*)vfp_s(cpu, 31) = rd32(ea + 60u);
    }
L_001535f0:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 16));
        wr32(ea + 4u, *(uint32_t*)vfp_s(cpu, 17));
        wr32(ea + 8u, *(uint32_t*)vfp_s(cpu, 18));
        wr32(ea + 12u, *(uint32_t*)vfp_s(cpu, 19));
        wr32(ea + 16u, *(uint32_t*)vfp_s(cpu, 20));
        wr32(ea + 20u, *(uint32_t*)vfp_s(cpu, 21));
        wr32(ea + 24u, *(uint32_t*)vfp_s(cpu, 22));
        wr32(ea + 28u, *(uint32_t*)vfp_s(cpu, 23));
        wr32(ea + 32u, *(uint32_t*)vfp_s(cpu, 24));
        wr32(ea + 36u, *(uint32_t*)vfp_s(cpu, 25));
        wr32(ea + 40u, *(uint32_t*)vfp_s(cpu, 26));
        wr32(ea + 44u, *(uint32_t*)vfp_s(cpu, 27));
        wr32(ea + 48u, *(uint32_t*)vfp_s(cpu, 28));
        wr32(ea + 52u, *(uint32_t*)vfp_s(cpu, 29));
        wr32(ea + 56u, *(uint32_t*)vfp_s(cpu, 30));
        wr32(ea + 60u, *(uint32_t*)vfp_s(cpu, 31));
    }
L_001535f4:;
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
L_001535f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix12LoadIdentityEv @ 00153600 (arm) */
void fn_00153600(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00153600:;
    {
        cpu->r[3] = rd32(0x00153608u + + 0x18u);
    }
L_00153604:;
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
L_00153608:;
    {
        cpu->r[3] = add_flags(cpu, 0x00153610u, cpu->r[3], 0, 0);
    }
L_0015360c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000040u, 0, 0);
    }
L_00153610:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 16) = rd32(ea + 0u);
        *(uint32_t*)vfp_s(cpu, 17) = rd32(ea + 4u);
        *(uint32_t*)vfp_s(cpu, 18) = rd32(ea + 8u);
        *(uint32_t*)vfp_s(cpu, 19) = rd32(ea + 12u);
        *(uint32_t*)vfp_s(cpu, 20) = rd32(ea + 16u);
        *(uint32_t*)vfp_s(cpu, 21) = rd32(ea + 20u);
        *(uint32_t*)vfp_s(cpu, 22) = rd32(ea + 24u);
        *(uint32_t*)vfp_s(cpu, 23) = rd32(ea + 28u);
        *(uint32_t*)vfp_s(cpu, 24) = rd32(ea + 32u);
        *(uint32_t*)vfp_s(cpu, 25) = rd32(ea + 36u);
        *(uint32_t*)vfp_s(cpu, 26) = rd32(ea + 40u);
        *(uint32_t*)vfp_s(cpu, 27) = rd32(ea + 44u);
        *(uint32_t*)vfp_s(cpu, 28) = rd32(ea + 48u);
        *(uint32_t*)vfp_s(cpu, 29) = rd32(ea + 52u);
        *(uint32_t*)vfp_s(cpu, 30) = rd32(ea + 56u);
        *(uint32_t*)vfp_s(cpu, 31) = rd32(ea + 60u);
    }
L_00153614:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 16));
        wr32(ea + 4u, *(uint32_t*)vfp_s(cpu, 17));
        wr32(ea + 8u, *(uint32_t*)vfp_s(cpu, 18));
        wr32(ea + 12u, *(uint32_t*)vfp_s(cpu, 19));
        wr32(ea + 16u, *(uint32_t*)vfp_s(cpu, 20));
        wr32(ea + 20u, *(uint32_t*)vfp_s(cpu, 21));
        wr32(ea + 24u, *(uint32_t*)vfp_s(cpu, 22));
        wr32(ea + 28u, *(uint32_t*)vfp_s(cpu, 23));
        wr32(ea + 32u, *(uint32_t*)vfp_s(cpu, 24));
        wr32(ea + 36u, *(uint32_t*)vfp_s(cpu, 25));
        wr32(ea + 40u, *(uint32_t*)vfp_s(cpu, 26));
        wr32(ea + 44u, *(uint32_t*)vfp_s(cpu, 27));
        wr32(ea + 48u, *(uint32_t*)vfp_s(cpu, 28));
        wr32(ea + 52u, *(uint32_t*)vfp_s(cpu, 29));
        wr32(ea + 56u, *(uint32_t*)vfp_s(cpu, 30));
        wr32(ea + 60u, *(uint32_t*)vfp_s(cpu, 31));
    }
L_00153618:;
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
L_0015361c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix4LoadEPS_ @ 00153624 (arm) */
void fn_00153624(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00153624:;
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
L_00153628:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 16) = rd32(ea + 0u);
        *(uint32_t*)vfp_s(cpu, 17) = rd32(ea + 4u);
        *(uint32_t*)vfp_s(cpu, 18) = rd32(ea + 8u);
        *(uint32_t*)vfp_s(cpu, 19) = rd32(ea + 12u);
        *(uint32_t*)vfp_s(cpu, 20) = rd32(ea + 16u);
        *(uint32_t*)vfp_s(cpu, 21) = rd32(ea + 20u);
        *(uint32_t*)vfp_s(cpu, 22) = rd32(ea + 24u);
        *(uint32_t*)vfp_s(cpu, 23) = rd32(ea + 28u);
        *(uint32_t*)vfp_s(cpu, 24) = rd32(ea + 32u);
        *(uint32_t*)vfp_s(cpu, 25) = rd32(ea + 36u);
        *(uint32_t*)vfp_s(cpu, 26) = rd32(ea + 40u);
        *(uint32_t*)vfp_s(cpu, 27) = rd32(ea + 44u);
        *(uint32_t*)vfp_s(cpu, 28) = rd32(ea + 48u);
        *(uint32_t*)vfp_s(cpu, 29) = rd32(ea + 52u);
        *(uint32_t*)vfp_s(cpu, 30) = rd32(ea + 56u);
        *(uint32_t*)vfp_s(cpu, 31) = rd32(ea + 60u);
    }
L_0015362c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 16));
        wr32(ea + 4u, *(uint32_t*)vfp_s(cpu, 17));
        wr32(ea + 8u, *(uint32_t*)vfp_s(cpu, 18));
        wr32(ea + 12u, *(uint32_t*)vfp_s(cpu, 19));
        wr32(ea + 16u, *(uint32_t*)vfp_s(cpu, 20));
        wr32(ea + 20u, *(uint32_t*)vfp_s(cpu, 21));
        wr32(ea + 24u, *(uint32_t*)vfp_s(cpu, 22));
        wr32(ea + 28u, *(uint32_t*)vfp_s(cpu, 23));
        wr32(ea + 32u, *(uint32_t*)vfp_s(cpu, 24));
        wr32(ea + 36u, *(uint32_t*)vfp_s(cpu, 25));
        wr32(ea + 40u, *(uint32_t*)vfp_s(cpu, 26));
        wr32(ea + 44u, *(uint32_t*)vfp_s(cpu, 27));
        wr32(ea + 48u, *(uint32_t*)vfp_s(cpu, 28));
        wr32(ea + 52u, *(uint32_t*)vfp_s(cpu, 29));
        wr32(ea + 56u, *(uint32_t*)vfp_s(cpu, 30));
        wr32(ea + 60u, *(uint32_t*)vfp_s(cpu, 31));
    }
L_00153630:;
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
L_00153634:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix4LoadEPf @ 00153638 (arm) */
void fn_00153638(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00153638:;
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
L_0015363c:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 16) = rd32(ea + 0u);
        *(uint32_t*)vfp_s(cpu, 17) = rd32(ea + 4u);
        *(uint32_t*)vfp_s(cpu, 18) = rd32(ea + 8u);
        *(uint32_t*)vfp_s(cpu, 19) = rd32(ea + 12u);
        *(uint32_t*)vfp_s(cpu, 20) = rd32(ea + 16u);
        *(uint32_t*)vfp_s(cpu, 21) = rd32(ea + 20u);
        *(uint32_t*)vfp_s(cpu, 22) = rd32(ea + 24u);
        *(uint32_t*)vfp_s(cpu, 23) = rd32(ea + 28u);
        *(uint32_t*)vfp_s(cpu, 24) = rd32(ea + 32u);
        *(uint32_t*)vfp_s(cpu, 25) = rd32(ea + 36u);
        *(uint32_t*)vfp_s(cpu, 26) = rd32(ea + 40u);
        *(uint32_t*)vfp_s(cpu, 27) = rd32(ea + 44u);
        *(uint32_t*)vfp_s(cpu, 28) = rd32(ea + 48u);
        *(uint32_t*)vfp_s(cpu, 29) = rd32(ea + 52u);
        *(uint32_t*)vfp_s(cpu, 30) = rd32(ea + 56u);
        *(uint32_t*)vfp_s(cpu, 31) = rd32(ea + 60u);
    }
L_00153640:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 16));
        wr32(ea + 4u, *(uint32_t*)vfp_s(cpu, 17));
        wr32(ea + 8u, *(uint32_t*)vfp_s(cpu, 18));
        wr32(ea + 12u, *(uint32_t*)vfp_s(cpu, 19));
        wr32(ea + 16u, *(uint32_t*)vfp_s(cpu, 20));
        wr32(ea + 20u, *(uint32_t*)vfp_s(cpu, 21));
        wr32(ea + 24u, *(uint32_t*)vfp_s(cpu, 22));
        wr32(ea + 28u, *(uint32_t*)vfp_s(cpu, 23));
        wr32(ea + 32u, *(uint32_t*)vfp_s(cpu, 24));
        wr32(ea + 36u, *(uint32_t*)vfp_s(cpu, 25));
        wr32(ea + 40u, *(uint32_t*)vfp_s(cpu, 26));
        wr32(ea + 44u, *(uint32_t*)vfp_s(cpu, 27));
        wr32(ea + 48u, *(uint32_t*)vfp_s(cpu, 28));
        wr32(ea + 52u, *(uint32_t*)vfp_s(cpu, 29));
        wr32(ea + 56u, *(uint32_t*)vfp_s(cpu, 30));
        wr32(ea + 60u, *(uint32_t*)vfp_s(cpu, 31));
    }
L_00153644:;
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
L_00153648:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix14SetTranslationEfff @ 0015364c (arm) */
void fn_0015364c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015364c:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[3]);
    }
L_00153650:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_00153654:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_00153658:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix14GetTranslationER8Vector3d @ 0015365c (arm) */
void fn_0015365c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015365c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_00153660:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x1cu);
    }
L_00153664:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x2cu);
    }
L_00153668:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015366c:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00153670:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153674:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix13SetQuaternionEffff @ 00153678 (arm) */
void fn_00153678(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00153678:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_0015367c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_00153680:;
    {
        vfp_vmul(cpu, 2, 12, 12);
    }
L_00153684:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015368cu + + 0xc4u);
    }
L_00153688:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_0015368c:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[13]);
    }
L_00153690:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153694:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153698:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015369c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001536a0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001536a4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001536a8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x001536b0u + + 0xa4u);
    }
L_001536ac:;
    {
        *vfp_s(cpu, 10) = *(float*)G(0x001536b4u + + 0xa4u);
    }
L_001536b0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_001536b4:;
    {
        vfp_vmul(cpu, 3, 13, 13);
    }
L_001536b8:;
    {
        vfp_vmul(cpu, 7, 13, 14);
    }
L_001536bc:;
    {
        vfp_vmul(cpu, 5, 12, 14);
    }
L_001536c0:;
    {
        vfp_vmul(cpu, 4, 12, 13);
    }
L_001536c4:;
    {
        vfp_vmul(cpu, 15, 14, 14);
    }
L_001536c8:;
    {
        vfp_vmul(cpu, 6, 13, 9);
    }
L_001536cc:;
    {
        vfp_vmul(cpu, 13, 14, 9);
    }
L_001536d0:;
    {
        vfp_vadd(cpu, 14, 2, 3);
    }
L_001536d4:;
    {
        vfp_vmul(cpu, 8, 12, 9);
    }
L_001536d8:;
    {
        *vfp_s(cpu,12) = *vfp_s(cpu,11);
    }
L_001536dc:;
    {
        vfp_vmla(cpu, 12, 14, 10);
    }
L_001536e0:;
    {
        vfp_vadd(cpu, 2, 2, 15);
    }
L_001536e4:;
    {
        vfp_vadd(cpu, 15, 3, 15);
    }
L_001536e8:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,12);
    }
L_001536ec:;
    {
        *vfp_s(cpu,12) = *vfp_s(cpu,11);
    }
L_001536f0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001536f4:;
    {
        vfp_vmla(cpu, 12, 15, 10);
    }
L_001536f8:;
    {
        vfp_vmla(cpu, 11, 2, 10);
    }
L_001536fc:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00153700:;
    {
        vfp_vsub(cpu, 10, 4, 13);
    }
L_00153704:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00153708:;
    {
        vfp_vadd(cpu, 12, 4, 13);
    }
L_0015370c:;
    {
        vfp_vsub(cpu, 14, 5, 6);
    }
L_00153710:;
    {
        vfp_vadd(cpu, 15, 7, 8);
    }
L_00153714:;
    {
        vfp_vadd(cpu, 11, 5, 6);
    }
L_00153718:;
    {
        vfp_vsub(cpu, 13, 7, 8);
    }
L_0015371c:;
    {
        vfp_vadd(cpu, 10, 10, 10);
    }
L_00153720:;
    {
        vfp_vadd(cpu, 11, 11, 11);
    }
L_00153724:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_00153728:;
    {
        vfp_vadd(cpu, 12, 12, 12);
    }
L_0015372c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00153730:;
    {
        vfp_vadd(cpu, 13, 13, 13);
    }
L_00153734:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00153738:;
    {
        vfp_vadd(cpu, 14, 14, 14);
    }
L_0015373c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00153740:;
    {
        vfp_vadd(cpu, 15, 15, 15);
    }
L_00153744:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153748:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015374c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix8SetOrthoEffffff @ 0015375c (arm) */
void fn_0015375c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015375c:;
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
L_00153760:;
    {
        *(uint32_t*)vfp_s(cpu,7) = cpu->r[3];
    }
L_00153764:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_00153768:;
    {
        vfp_vsub(cpu, 12, 6, 7);
    }
L_0015376c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00153774u + + 0xc0u);
    }
L_00153770:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_00153774:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_00153778:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[1];
    }
L_0015377c:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[2];
    }
L_00153780:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00153784:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015378cu + + 0xacu);
    }
L_00153788:;
    {
        vfp_vdiv(cpu, 12, 14, 12);
    }
L_0015378c:;
    {
        vfp_vsub(cpu, 13, 8, 9);
    }
L_00153790:;
    {
        vfp_vsub(cpu, 11, 10, 11);
    }
L_00153794:;
    {
        vfp_vdiv(cpu, 13, 14, 13);
    }
L_00153798:;
    {
        vfp_vdiv(cpu, 11, 14, 11);
    }
L_0015379c:;
    {
        vfp_vadd(cpu, 7, 6, 7);
    }
L_001537a0:;
    {
        vfp_vadd(cpu, 9, 8, 9);
    }
L_001537a4:;
    {
        vfp_vadd(cpu, 8, 12, 12);
    }
L_001537a8:;
    {
        vfp_vnmul(cpu, 12, 7, 12);
    }
L_001537ac:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 8));
        cpu->r[3] = ea + 4u;
    }
L_001537b0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001537b4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001537b8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001537bc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_001537c0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_001537c4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001537c8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001537cc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001537d0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001537d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001537d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001537dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001537e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001537e4:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001537e8:;
    {
        vfp_vnmul(cpu, 9, 9, 13);
    }
L_001537ec:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001537f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001537f4:;
    {
        vfp_vnmul(cpu, 12, 10, 11);
    }
L_001537f8:;
    {
        vfp_vadd(cpu, 13, 13, 13);
    }
L_001537fc:;
    {
        vfp_vneg(cpu, 11, 11);
    }
L_00153800:;
    {
        *(uint32_t*)G(cpu->r[8] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00153804:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153808:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 9);
    }
L_0015380c:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153810:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153814:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00153818:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0015381c:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153820:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153824:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153828:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015382c:;
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
L_00153830:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix13SetLightOrthoEffff @ 0015383c (arm) */
void fn_0015383c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015383c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00153844u + + 0xa0u);
    }
L_00153840:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[2];
    }
L_00153844:;
    {
        vfp_vdiv(cpu, 11, 14, 9);
    }
L_00153848:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[1];
    }
L_0015384c:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_00153850:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
    }
L_00153854:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00153858:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_0015385c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00153864u + + 0x84u);
    }
L_00153860:;
    {
        vfp_vdiv(cpu, 10, 14, 9);
    }
L_00153864:;
    {
        vfp_vmul(cpu, 11, 11, 12);
    }
L_00153868:;
    {
        vfp_vmul(cpu, 12, 10, 12);
    }
L_0015386c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 11));
        cpu->r[3] = ea + 4u;
    }
L_00153870:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00153874:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153878:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0015387c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153880:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00153884:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00153888:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0015388c:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153890:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00153894:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00153898:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0015389c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001538a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001538a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001538a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001538ac:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001538b0:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001538b4:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001538b8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001538bc:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001538c0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001538c4:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001538c8:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001538cc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001538d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001538d4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001538d8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001538dc:;
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
L_001538e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix12DefTranslateEfff @ 001538ec (arm) */
void fn_001538ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001538ec:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001538f0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001538f8u + + 0x7cu);
    }
L_001538f4:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_001538f8:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 14));
        cpu->r[12] = ea + 4u;
    }
L_001538fc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00153900:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00153908u + + 0x70u);
    }
L_00153904:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00153908:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015390c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00153910:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153914:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00153918:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[1]);
    }
L_0015391c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00153920:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153924:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00153928:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015392c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00153930:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153934:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00153938:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[2]);
    }
L_0015393c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00153940:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153944:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00153948:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015394c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00153950:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153954:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00153958:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015395c:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153960:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00153964:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153968:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015396c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_00153970:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix11LoadFromODEEPKfS1_ @ 0015397c (arm) */
void fn_0015397c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015397c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_00153980:;
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
L_00153984:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0015398cu + + 0xd0u);
    }
L_00153988:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0015398c:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[9] = ea + 4u;
    }
L_00153990:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00153994:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153998:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_0015399c:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001539a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_001539a4:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_001539a8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_001539ac:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_001539b0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001539b4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_001539b8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001539c0u + + 0xa0u);
    }
L_001539bc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001539c0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001539c4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001539c8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001539cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001539d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001539d4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001539d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_001539dc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001539e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001539e4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001539e8:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001539ec:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x10u);
    }
L_001539f0:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001539f4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x14u);
    }
L_001539f8:;
    {
        *(uint32_t*)G(cpu->r[8] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001539fc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x18u);
    }
L_00153a00:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00153a04:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00153a08:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_00153a0c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00153a10:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00153a14:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x20u);
    }
L_00153a18:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00153a1c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x24u);
    }
L_00153a20:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00153a24:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x28u);
    }
L_00153a28:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00153a2c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00153a30:;
    {
        vfp_vmul(cpu, 14, 13, 14);
    }
L_00153a34:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153a38:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153a3c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00153a44u + + 0x20u);
    }
L_00153a40:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153a44:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00153a48:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153a4c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153a50:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00153a54:;
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
L_00153a58:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix5DetIJEii @ 00153a68 (arm) */
void fn_00153a68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00153a68:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00153a6c:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_00153a70:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_00153a74:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_00153a78:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00153a7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00153ac0;
        }
    }
L_00153a80:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00153a84:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00153a88:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_00153a8c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_00153a90:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_00153a94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00153ab0;
        }
    }
L_00153a98:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00153a9c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00153aa0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[8], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_00153aa4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00153aa8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[8]);
    }
L_00153aac:;
    {
        *(uint32_t*)G(cpu->r[5] + - 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153ab0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00153ab4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000004u, 1, 1);
    }
L_00153ab8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00153a8c;
        }
    }
L_00153abc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00153ac0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00153ac4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_00153ac8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_00153acc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00153a78;
        }
    }
L_00153ad0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x18u);
    }
L_00153ad4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_00153ad8:;
    {
        vfp_vmul(cpu, 15, 13, 14);
    }
L_00153adc:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_00153ae0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_00153ae4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_00153ae8:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_00153aec:;
    {
        vfp_vnmls(cpu, 15, 9, 12);
    }
L_00153af0:;
    {
        vfp_vmul(cpu, 13, 11, 13);
    }
L_00153af4:;
    {
        vfp_vnmls(cpu, 13, 10, 9);
    }
L_00153af8:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_00153afc:;
    {
        vfp_vmul(cpu, 14, 10, 14);
    }
L_00153b00:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_00153b04:;
    {
        vfp_vmul(cpu, 15, 15, 9);
    }
L_00153b08:;
    {
        vfp_vnmls(cpu, 14, 11, 12);
    }
L_00153b0c:;
    {
        vfp_vnmls(cpu, 15, 13, 10);
    }
L_00153b10:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_00153b14:;
    {
        vfp_vmla(cpu, 15, 14, 13);
    }
L_00153b18:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00153b1c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00153b20:;
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
L_00153b24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix8DefScaleEfff @ 00153b28 (arm) */
void fn_00153b28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00153b28:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00153b30u + + 0x44u);
    }
L_00153b2c:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00153b30:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153b34:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153b38:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153b3c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153b40:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153b44:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153b48:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153b4c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153b50:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153b54:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153b58:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153b5c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153b60:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00153b64:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00153b6cu + + 0xcu);
    }
L_00153b68:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_00153b6c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153b70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix12UniformScaleEf @ 00153b7c (arm) */
void fn_00153b7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00153b7c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_00153b80:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_00153b84:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00153b88:;
    {
        vfp_vmul(cpu, 6, 14, 15);
    }
L_00153b8c:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_00153b90:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[0] + + 0x10u);
    }
L_00153b94:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x14u);
    }
L_00153b98:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x18u);
    }
L_00153b9c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x20u);
    }
L_00153ba0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x24u);
    }
L_00153ba4:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[0] + + 0x28u);
    }
L_00153ba8:;
    {
        vfp_vmul(cpu, 8, 8, 15);
    }
L_00153bac:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 6);
    }
L_00153bb0:;
    {
        vfp_vmul(cpu, 7, 7, 15);
    }
L_00153bb4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 8);
    }
L_00153bb8:;
    {
        vfp_vmul(cpu, 9, 9, 15);
    }
L_00153bbc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 7);
    }
L_00153bc0:;
    {
        vfp_vmul(cpu, 10, 10, 15);
    }
L_00153bc4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 9);
    }
L_00153bc8:;
    {
        vfp_vmul(cpu, 11, 11, 15);
    }
L_00153bcc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_00153bd0:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_00153bd4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00153bd8:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00153bdc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00153be0:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_00153be4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00153be8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153bec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix7Make2x4Ev @ 00153bf0 (arm) */
void fn_00153bf0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00153bf0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00153bf8u + + 0x20u);
    }
L_00153bf4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153bf8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153bfc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153c00:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153c04:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153c08:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153c0c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153c10:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153c14:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix7Make3x4Ev @ 00153c1c (arm) */
void fn_00153c1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00153c1c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00153c24u + + 0x10u);
    }
L_00153c20:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153c24:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153c28:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153c2c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153c30:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix15TransformVectorEPf @ 00153c38 (arm) */
void fn_00153c38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00153c38:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00153c3c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00153c40:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00153c44:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00153c48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00153c4c:;
    {
        cpu->r[14] = 0x00153c50u; fn_001533e4(cpu);
    }
L_00153c50:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_00153c54:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153c58:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_00153c5c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153c60:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_00153c64:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153c68:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00153c6c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00153c70u)) return;
    }
}

/* _ZN7CMatrix12RotateVectorEPfS0_ @ 00153c70 (arm) */
void fn_00153c70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00153c70:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00153c74:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00153c78:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00153c7c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0]);
    }
L_00153c80:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2]);
    }
L_00153c84:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_00153c88:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00153c8c:;
    {
        vfp_vmla(cpu, 15, 11, 12);
    }
L_00153c90:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_00153c94:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153c98:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x14u);
    }
L_00153c9c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00153ca0:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00153ca4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x10u);
    }
L_00153ca8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2]);
    }
L_00153cac:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x18u);
    }
L_00153cb0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00153cb4:;
    {
        vfp_vmla(cpu, 15, 11, 12);
    }
L_00153cb8:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_00153cbc:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153cc0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x24u);
    }
L_00153cc4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00153cc8:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00153ccc:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x20u);
    }
L_00153cd0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2]);
    }
L_00153cd4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x28u);
    }
L_00153cd8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00153cdc:;
    {
        vfp_vmla(cpu, 15, 11, 12);
    }
L_00153ce0:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_00153ce4:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153ce8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix12RotateVectorEPf @ 00153cec (arm) */
void fn_00153cec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00153cec:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00153cf0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00153cf4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00153cf8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00153cfc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00153d00:;
    {
        cpu->r[14] = 0x00153d04u; fn_00153c70(cpu);
    }
L_00153d04:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_00153d08:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153d0c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_00153d10:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153d14:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_00153d18:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153d1c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00153d20:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00153d24u)) return;
    }
}

/* _ZN7CMatrix6DbgMtxEv @ 00153d24 (arm) */
void fn_00153d24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00153d24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CMatrix5ScaleEfff @ 00153d28 (arm) */
void fn_00153d28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00153d28:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00153d2c:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x40u);
    }
L_00153d30:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00153d34:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00153d38:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00153d3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00153d5c;
        }
    }
L_00153d40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00153d44:;
    {
        cpu->r[14] = 0x00153d48u; fn_00153b28(cpu);
    }
L_00153d48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00153d4c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x40u);
    }
L_00153d50:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00153d54:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00153d58:;
    {
        return fn_00153478(cpu);
    }
L_00153d5c:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_00153d60:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00153d64:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_00153d68:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00153d6c:;
    {
        cpu->r[14] = 0x00153d70u; fn_0018ba6c(cpu);
    }
L_00153d70:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00153d74:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[12]);
    }
L_00153d78:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00153d7c:;
    {
        cpu->r[14] = 0x00153d80u; fn_001535e0(cpu);
    }
L_00153d80:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[5]);
    }
L_00153d84:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00153d88:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00153d8c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00153d90:;
    {
        goto L_00153d40;
    }
}

/* _ZN7CMatrix7InverseEv @ 00153d94 (arm) */
void fn_00153d94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00153d94:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00153d98:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00153d9c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x40u);
    }
L_00153da0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00153da4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00153da8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00153e6c;
        }
    }
L_00153dac:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00153db0:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00153db8u + + 0xd0u);
    }
L_00153db4:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_00153db8:;
    {
        uint32_t v = cpu->r[4] & 0x00000001u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00153dbc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00153dc0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00153dc4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
        }
    }
L_00153dc8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_00153dcc:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[2]);
        }
    }
L_00153dd0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00153dd4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_00153dd8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
        }
    }
L_00153ddc:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vneg(cpu, 16, 16);
        }
    }
L_00153de0:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3]);
        }
    }
L_00153de4:;
    {
        cpu->r[14] = 0x00153de8u; fn_00153a68(cpu);
    }
L_00153de8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00153dec:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00153df0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000010u, 1, 1);
    }
L_00153df4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00153df8:;
    {
        vfp_vmul(cpu, 15, 16, 14);
    }
L_00153dfc:;
    {
        vfp_vadd(cpu, 17, 17, 15);
    }
L_00153e00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00153db8;
        }
    }
L_00153e04:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00153e0cu + + 0x80u);
    }
L_00153e08:;
    {
        vfp_vdiv(cpu, 16, 15, 17);
    }
L_00153e0c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00153e10:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00153e14:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[7] = v;
    }
L_00153e18:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00153e1c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00153e20:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00153e24:;
    {
        cpu->r[14] = 0x00153e28u; fn_00153a68(cpu);
    }
L_00153e28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_00153e2c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00153e30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[4], 0, 0);
    }
L_00153e34:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00153e38:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00153e3c:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vnmul(cpu, 15, 15, 16);
        }
    }
L_00153e40:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x40u);
    }
L_00153e44:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vmul(cpu, 15, 16, 15);
        }
    }
L_00153e48:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 1);
    }
L_00153e4c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00153e50:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
    }
L_00153e54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00153e18;
        }
    }
L_00153e58:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00153e5c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 1);
    }
L_00153e60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00153e10;
        }
    }
L_00153e64:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00153e68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00153e6cu)) return;
    }
L_00153e6c:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_00153e70:;
    {
        cpu->r[14] = 0x00153e74u; fn_0018ba6c(cpu);
    }
L_00153e74:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[4]);
    }
L_00153e78:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00153e7c:;
    {
        cpu->r[14] = 0x00153e80u; fn_001535e0(cpu);
    }
L_00153e80:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[5]);
    }
L_00153e84:;
    {
        goto L_00153dac;
    }
}

/* _ZN7CMatrix9TranslateEfff @ 00153e90 (arm) */
void fn_00153e90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00153e90:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00153e94:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x40u);
    }
L_00153e98:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00153e9c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00153ea0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00153ea4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00153ec4;
        }
    }
L_00153ea8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00153eac:;
    {
        cpu->r[14] = 0x00153eb0u; fn_001538ec(cpu);
    }
L_00153eb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00153eb4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x40u);
    }
L_00153eb8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00153ebc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00153ec0:;
    {
        return fn_00153478(cpu);
    }
L_00153ec4:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_00153ec8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00153ecc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_00153ed0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00153ed4:;
    {
        cpu->r[14] = 0x00153ed8u; fn_0018ba6c(cpu);
    }
L_00153ed8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00153edc:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[12]);
    }
L_00153ee0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00153ee4:;
    {
        cpu->r[14] = 0x00153ee8u; fn_001535e0(cpu);
    }
L_00153ee8:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[5]);
    }
L_00153eec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00153ef0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00153ef4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00153ef8:;
    {
        goto L_00153ea8;
    }
}

/* _ZN7CMatrix9TransposeEv @ 00153efc (arm) */
void fn_00153efc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00153efc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00153f00:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x40u);
    }
L_00153f04:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00153f08:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00153f0c:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_00153f10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00153f9c;
        }
    }
L_00153f14:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_00153f18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00153f1c:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153f20:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x10u);
    }
L_00153f24:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153f28:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x20u);
    }
L_00153f2c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153f30:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x30u);
    }
L_00153f34:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153f38:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_00153f3c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153f40:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x14u);
    }
L_00153f44:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153f48:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x24u);
    }
L_00153f4c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153f50:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x34u);
    }
L_00153f54:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153f58:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_00153f5c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153f60:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x18u);
    }
L_00153f64:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153f68:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x28u);
    }
L_00153f6c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153f70:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x38u);
    }
L_00153f74:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153f78:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_00153f7c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153f80:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x1cu);
    }
L_00153f84:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153f88:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x2cu);
    }
L_00153f8c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153f90:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x3cu);
    }
L_00153f94:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153f98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00153f9cu)) return;
    }
L_00153f9c:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_00153fa0:;
    {
        cpu->r[14] = 0x00153fa4u; fn_0018ba6c(cpu);
    }
L_00153fa4:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[4]);
    }
L_00153fa8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00153fac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00153fb0:;
    {
        cpu->r[14] = 0x00153fb4u; fn_001535e0(cpu);
    }
L_00153fb4:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[6]);
    }
L_00153fb8:;
    {
        goto L_00153f14;
    }
}

/* _ZN7CMatrix12InverseXPoseEv @ 00153fbc (arm) */
void fn_00153fbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00153fbc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00153fc0:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x40u);
    }
L_00153fc4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00153fc8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00153fcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00154018;
        }
    }
L_00153fd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00153fd4:;
    {
        cpu->r[14] = 0x00153fd8u; fn_00153d94(cpu);
    }
L_00153fd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000040u, 0, 0);
    }
L_00153fdc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_00153fe0:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153fe4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00153fe8:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153fec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_00153ff0:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00153ff4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_00153ff8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_00153ffc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00154000:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154004:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_00154008:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00153fdc;
        }
    }
L_0015400c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x40u);
    }
L_00154010:;
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
L_00154014:;
    {
        return fn_00153efc(cpu);
    }
L_00154018:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0015401c:;
    {
        cpu->r[14] = 0x00154020u; fn_0018ba6c(cpu);
    }
L_00154020:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00154024:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[3]);
    }
L_00154028:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0015402c:;
    {
        cpu->r[14] = 0x00154030u; fn_001535e0(cpu);
    }
L_00154030:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[5]);
    }
L_00154034:;
    {
        goto L_00153fd0;
    }
}

/* _ZN7CMatrix14GetEulerAnglesERfS0_S0_i @ 00154038 (arm) */
void fn_00154038(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00154038:;
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
L_0015403c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00154040:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00154044:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00154048:;
    {
        cpu->r[0] = rd32(0x00154050u + + 0x248u);
    }
L_0015404c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_00154050:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00154054:;
    {
        cpu->r[0] = add_flags(cpu, 0x0015405cu, cpu->r[0], 0, 0);
    }
L_00154058:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_0015405c:;
    {
        cpu->r[14] = (cpu->r[12] >> 3) & 0x3u;
    }
L_00154060:;
    {
        cpu->r[5] = (cpu->r[12] >> 2) & 0x1u;
    }
L_00154064:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[0], cpu->r[14], 0, 0);
    }
L_00154068:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_0015406c:;
    {
        { uint32_t v = cpu->r[12] & 0x00000002u; set_nz(cpu, v); }
    }
L_00154070:;
    {
        uint32_t v = cpu->r[12] & 0x00000001u; cpu->r[12] = v;
    }
L_00154074:;
    {
        cpu->r[7] = rd8(cpu->r[14] + + 0x80u);
    }
L_00154078:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_0015407c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_00154080:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 0);
    }
L_00154084:;
    {
        cpu->r[10] = rd8(cpu->r[1] + + 0x88u);
    }
L_00154088:;
    {
        cpu->r[9] = rd8(cpu->r[0] + + 0x89u);
    }
L_0015408c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001541cc;
        }
    }
L_00154090:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[1] = v;
    }
L_00154094:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_00154098:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_0015409c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_001540a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_001540a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001540a8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_001540ac:;
    {
        vfp_vmul(cpu, 16, 14, 14);
    }
L_001540b0:;
    {
        vfp_vmla(cpu, 16, 15, 15);
    }
L_001540b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001540bcu + + 0x1d4u);
    }
L_001540b8:;
    {
        vfp_vsqrt(cpu, 16, 16);
    }
L_001540bc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_001540c0:;
    {
        vfp_sync_flags(cpu);
    }
L_001540c4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00154138;
        }
    }
L_001540c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[9], 0, 0);
    }
L_001540cc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[1], cpu->r[10], 0, 0);
    }
L_001540d0:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_001540d4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_001540d8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001540dc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_001540e0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001540e4:;
    {
        uint32_t v = cpu->r[0] ^ 0x80000000u; cpu->r[0] = v;
    }
L_001540e8:;
    {
        cpu->r[14] = 0x001540ecu; imp_atan2f(cpu); /* atan2f */
    }
L_001540ec:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001540f0:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_001540f4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001540f8:;
    {
        uint32_t v = cpu->r[0] ^ 0x80000000u; cpu->r[0] = v;
    }
L_001540fc:;
    {
        cpu->r[14] = 0x00154100u; imp_atan2f(cpu); /* atan2f */
    }
L_00154100:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[12] = v1;
    }
L_00154104:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015410cu + + 0x188u);
    }
L_00154108:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_0015410c:;
    {
        *(uint32_t*)G(cpu->r[8]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154110:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_00154114:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001541a4;
        }
    }
L_00154118:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_0015411c:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6]);
        }
    }
L_00154120:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[8]);
        }
    }
L_00154124:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_00154128:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[8]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_0015412c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00154130:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00154134:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00154138u)) return;
    }
L_00154138:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 2u, &shc); cpu->r[1] = v;
    }
L_0015413c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00154140:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[1], cpu->r[10], 0, 0);
    }
L_00154144:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[1], cpu->r[9], 0, 0);
    }
L_00154148:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0015414c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_00154150:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_00154154:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00154158:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0015415c:;
    {
        cpu->r[14] = 0x00154160u; imp_atan2f(cpu); /* atan2f */
    }
L_00154160:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00154164:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_00154168:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0015416c:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_00154170:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_00154174:;
    {
        uint32_t v = cpu->r[0] ^ 0x80000000u; cpu->r[0] = v;
    }
L_00154178:;
    {
        cpu->r[14] = 0x0015417cu; imp_atan2f(cpu); /* atan2f */
    }
L_0015417c:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_00154180:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00154184:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_00154188:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[11], 2, 2u, &shc));
    }
L_0015418c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00154190:;
    {
        cpu->r[14] = 0x00154194u; imp_atan2f(cpu); /* atan2f */
    }
L_00154194:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_00154198:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[12] = v1;
    }
L_0015419c:;
    {
        wr32(cpu->r[8], cpu->r[0]);
    }
L_001541a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00154118;
        }
    }
L_001541a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6]);
    }
L_001541a8:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_001541ac:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001541b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_001541b4:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_001541b8:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001541bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[8]);
    }
L_001541c0:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_001541c4:;
    {
        *(uint32_t*)G(cpu->r[8]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001541c8:;
    {
        goto L_00154118;
    }
L_001541cc:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[11] = v;
    }
L_001541d0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001541d8u + + 0xb8u);
    }
L_001541d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], cpu->r[9], 0, 0);
    }
L_001541d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[10], 0, 0);
    }
L_001541dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001541e0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_001541e4:;
    {
        vfp_vmul(cpu, 16, 14, 14);
    }
L_001541e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001541ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_001541f0:;
    {
        vfp_vmla(cpu, 16, 15, 15);
    }
L_001541f4:;
    {
        vfp_vsqrt(cpu, 16, 16);
    }
L_001541f8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,13));
    }
L_001541fc:;
    {
        vfp_sync_flags(cpu);
    }
L_00154200:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00154258;
        }
    }
L_00154204:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00154208:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0015420c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00154210:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[7], 0, 0);
    }
L_00154214:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00154218:;
    {
        cpu->r[14] = 0x0015421cu; imp_atan2f(cpu); /* atan2f */
    }
L_0015421c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[7], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_00154220:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_00154224:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_00154228:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0015422c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[11], 2, 2u, &shc));
    }
L_00154230:;
    {
        cpu->r[14] = 0x00154234u; imp_atan2f(cpu); /* atan2f */
    }
L_00154234:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_00154238:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_0015423c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_00154240:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_00154244:;
    {
        uint32_t v = cpu->r[1] ^ 0x80000000u; cpu->r[1] = v;
    }
L_00154248:;
    {
        cpu->r[14] = 0x0015424cu; imp_atan2f(cpu); /* atan2f */
    }
L_0015424c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[12] = v1;
    }
L_00154250:;
    {
        wr32(cpu->r[8], cpu->r[0]);
    }
L_00154254:;
    {
        goto L_00154110;
    }
L_00154258:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[3] = v;
    }
L_0015425c:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00154260:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_00154264:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_00154268:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0015426c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[11], cpu->r[7], 0, 0);
    }
L_00154270:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_00154274:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_00154278:;
    {
        uint32_t v = cpu->r[0] ^ 0x80000000u; cpu->r[0] = v;
    }
L_0015427c:;
    {
        cpu->r[14] = 0x00154280u; imp_atan2f(cpu); /* atan2f */
    }
L_00154280:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_00154284:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00154288:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_0015428c:;
    {
        goto L_001540fc;
    }
}

/* _ZN7CMatrix10DefRotateZEf @ 0015429c (arm) */
void fn_0015429c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015429c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001542a0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001542a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001542a8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001542ac:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001542b0:;
    {
        cpu->r[14] = 0x001542b4u; imp_sinf(cpu); /* sinf */
    }
L_001542b4:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_001542b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001542bc:;
    {
        cpu->r[14] = 0x001542c0u; imp_cosf(cpu); /* cosf */
    }
L_001542c0:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001542c4:;
    {
        vfp_vneg(cpu, 13, 16);
    }
L_001542c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001542d0u + + 0x78u);
    }
L_001542cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001542d4u + + 0x78u);
    }
L_001542d0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[0]);
        cpu->r[3] = wb_tmp;
    }
L_001542d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001542d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001542dc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001542e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001542e4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001542e8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001542ec:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001542f0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001542f4:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001542f8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001542fc:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[0]);
    }
L_00154300:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00154304:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154308:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0015430c:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154310:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00154314:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154318:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0015431c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154320:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00154324:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00154328:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015432c:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154330:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154334:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00154338:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015433c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154340:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00154344:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00154348u)) return;
    }
}

/* _ZN7CMatrix7RotateZEf @ 00154350 (arm) */
void fn_00154350(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00154350:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00154354:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x40u);
    }
L_00154358:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0015435c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00154360:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00154364:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00154384;
        }
    }
L_00154368:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015436c:;
    {
        cpu->r[14] = 0x00154370u; fn_0015429c(cpu);
    }
L_00154370:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00154374:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x40u);
    }
L_00154378:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0015437c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00154380:;
    {
        return fn_00153478(cpu);
    }
L_00154384:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_00154388:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_0015438c:;
    {
        cpu->r[14] = 0x00154390u; fn_0018ba6c(cpu);
    }
L_00154390:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00154394:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[3]);
    }
L_00154398:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015439c:;
    {
        cpu->r[14] = 0x001543a0u; fn_001535e0(cpu);
    }
L_001543a0:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[4]);
    }
L_001543a4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001543a8:;
    {
        goto L_00154368;
    }
}

/* _ZN7CMatrix16DefRotateY_XPoseEf @ 001543ac (arm) */
void fn_001543ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001543ac:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001543b0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001543b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001543b8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001543bc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001543c0:;
    {
        cpu->r[14] = 0x001543c4u; imp_sinf(cpu); /* sinf */
    }
L_001543c4:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_001543c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001543cc:;
    {
        cpu->r[14] = 0x001543d0u; imp_cosf(cpu); /* cosf */
    }
L_001543d0:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001543d4:;
    {
        vfp_vneg(cpu, 13, 16);
    }
L_001543d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001543e0u + + 0x78u);
    }
L_001543dc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001543e4u + + 0x78u);
    }
L_001543e0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[0]);
        cpu->r[3] = wb_tmp;
    }
L_001543e4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001543e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001543ec:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001543f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001543f4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001543f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001543fc:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154400:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00154404:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154408:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0015440c:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00154410:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00154414:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154418:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0015441c:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154420:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00154424:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00154428:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0015442c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154430:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00154434:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[0]);
    }
L_00154438:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015443c:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154440:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154444:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00154448:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015444c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154450:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00154454:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00154458u)) return;
    }
}

/* _ZN7CMatrix10DefRotateYEf @ 00154460 (arm) */
void fn_00154460(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00154460:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00154464:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00154468:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015446c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00154470:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00154474:;
    {
        cpu->r[14] = 0x00154478u; imp_sinf(cpu); /* sinf */
    }
L_00154478:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_0015447c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00154480:;
    {
        cpu->r[14] = 0x00154484u; imp_cosf(cpu); /* cosf */
    }
L_00154484:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_00154488:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00154490u + + 0x7cu);
    }
L_0015448c:;
    {
        vfp_vneg(cpu, 13, 16);
    }
L_00154490:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00154498u + + 0x78u);
    }
L_00154494:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[0]);
        cpu->r[3] = wb_tmp;
    }
L_00154498:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0015449c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001544a0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001544a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001544a8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001544ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001544b0:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001544b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001544b8:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001544bc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001544c0:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001544c4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001544c8:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001544cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001544d0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001544d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001544d8:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001544dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001544e0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001544e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001544e8:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[0]);
    }
L_001544ec:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001544f0:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001544f4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001544f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001544fc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00154500:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154504:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00154508:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015450cu)) return;
    }
}

/* _ZN7CMatrix7RotateYEf @ 00154514 (arm) */
void fn_00154514(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00154514:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00154518:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x40u);
    }
L_0015451c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00154520:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00154524:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00154528:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00154548;
        }
    }
L_0015452c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00154530:;
    {
        cpu->r[14] = 0x00154534u; fn_00154460(cpu);
    }
L_00154534:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00154538:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x40u);
    }
L_0015453c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00154540:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00154544:;
    {
        return fn_00153478(cpu);
    }
L_00154548:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0015454c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00154550:;
    {
        cpu->r[14] = 0x00154554u; fn_0018ba6c(cpu);
    }
L_00154554:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00154558:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[3]);
    }
L_0015455c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00154560:;
    {
        cpu->r[14] = 0x00154564u; fn_001535e0(cpu);
    }
L_00154564:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[4]);
    }
L_00154568:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0015456c:;
    {
        goto L_0015452c;
    }
}
