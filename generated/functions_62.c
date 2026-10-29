#include "functions.h"

/* _ZN11CCollideCar13TestDistance2ERK8Vector4sS2_iRi @ 0017a640 (arm) */
void fn_0017a640(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017a640:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_0017a644:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_0017a648:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_0017a64c:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x8u);
    }
L_0017a650:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 0);
    }
L_0017a654:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x8u);
    }
L_0017a658:;
    {
        uint32_t v = cpu->r[12] ^ shifter(cpu->r[12], 1, 31u, &shc); cpu->r[4] = v;
    }
L_0017a65c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], shifter(cpu->r[12], 1, 31u, &shc), 1, 0);
    }
L_0017a660:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_0017a664:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017a67c;
        }
    }
L_0017a668:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_0017a66c:;
    {
        uint32_t v = cpu->r[4] ^ shifter(cpu->r[4], 1, 31u, &shc); cpu->r[5] = v;
    }
L_0017a670:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[4], 1, 31u, &shc), 1, 0);
    }
L_0017a674:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0017a678:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0017a688;
        }
    }
L_0017a67c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0017a680:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_0017a684:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017a688:;
    {
        uint32_t v = cpu->r[12] * cpu->r[12]; cpu->r[12] = v;
    }
L_0017a68c:;
    {
        uint32_t v = cpu->r[4] * cpu->r[4] + cpu->r[12]; cpu->r[4] = v;
    }
L_0017a690:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2]; cpu->r[5] = v;
    }
L_0017a694:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_0017a698:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017a67c;
        }
    }
L_0017a69c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0017a6a0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_0017a6a4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0017a6a8:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[0] = v;
    }
L_0017a6ac:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_0017a6b0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0017a6b4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017a67c;
        }
    }
L_0017a6b8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1] + cpu->r[4]; cpu->r[1] = v;
    }
L_0017a6bc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_0017a6c0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017a67c;
        }
    }
L_0017a6c4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
    }
L_0017a6c8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0017a6cc:;
    {
        wr32(cpu->r[3], cpu->r[1]);
    }
L_0017a6d0:;
    {
        goto L_0017a680;
    }
}

/* sub_0017a6d4 @ 0017a6d4 (arm) */
void fn_0017a6d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017a6d4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_0017a6d8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017a6dc:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x8u);
    }
L_0017a6e0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0017a6e4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
        }
    }
L_0017a6e8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
        }
    }
L_0017a6ec:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0017a6f0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_0017a6f4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_0017a6f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017a6fc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017a700:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017a724;
        }
    }
L_0017a704:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_0017a708:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 0);
        }
    }
L_0017a70c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
        }
    }
L_0017a710:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_0017a714:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_0017a718:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_0017a71c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0017a720:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017a730;
        }
    }
L_0017a724:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0017a728:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_0017a72c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017a730:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 0);
    }
L_0017a734:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0017a738:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
        }
    }
L_0017a73c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = cpu->r[0];
        }
    }
L_0017a740:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0017a744:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
        }
    }
L_0017a748:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
        }
    }
L_0017a74c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_0017a750:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[3], cpu->r[12]);
        }
    }
L_0017a754:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
        }
    }
L_0017a758:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[3], cpu->r[2]);
        }
    }
L_0017a75c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 0);
        }
    }
L_0017a760:;
    {
        goto L_0017a728;
    }
}

/* _ZN11CCollideCar20CheckPoint2DPositionE8Vector2sS0_S0_ @ 0017a764 (arm) */
void fn_0017a764(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017a764:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_0017a768:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_0017a76c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0017a770:;
    {
        cpu->r[4] = cpu->r[13];
    }
L_0017a774:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0017a778:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_0017a77c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_0017a780:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_0017a784:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0017a788:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0017a78c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0017a790:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_0017a794:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1]; cpu->r[2] = v;
    }
L_0017a798:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017a79c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0017a7a0:;
    {
        uint32_t v = cpu->r[2] - cpu->r[3] * cpu->r[12]; cpu->r[3] = v;
    }
L_0017a7a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017a7a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000002u;
        }
    }
L_0017a7ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a7b8;
        }
    }
L_0017a7b0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0017a7b4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0017a7b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0017a7bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_0017a7c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CCollideCar22CheckPoint2DPositionExE8Vector2sS0_S0_i @ 0017a7c4 (arm) */
void fn_0017a7c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017a7c4:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_0017a7c8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0017a7cc:;
    {
        cpu->r[5] = cpu->r[13];
    }
L_0017a7d0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0017a7d4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_0017a7d8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x20u);
    }
L_0017a7dc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0017a7e0:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_0017a7e4:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_0017a7e8:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_0017a7ec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017a7f0:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_0017a7f4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0017a7f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a844;
        }
    }
L_0017a7fc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_0017a800:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 0);
    }
L_0017a804:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0017a808:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 0);
    }
L_0017a80c:;
    {
        uint32_t v = shifter(cpu->r[5], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[5] = v;
    }
L_0017a810:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[0] = v;
    }
L_0017a814:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0017a818:;
    {
        uint32_t v = shifter(cpu->r[4], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0017a81c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[5]; cpu->r[3] = v;
    }
L_0017a820:;
    {
        uint32_t v = cpu->r[3] - cpu->r[2] * cpu->r[12]; cpu->r[3] = v;
    }
L_0017a824:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017a828:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000002u;
        }
    }
L_0017a82c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a838;
        }
    }
L_0017a830:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0017a834:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0017a838:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0017a83c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_0017a840:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017a844:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_0017a848:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 0);
    }
L_0017a84c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0017a850:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 0);
    }
L_0017a854:;
    {
        uint32_t v = cpu->r[0] * cpu->r[5]; cpu->r[3] = v;
    }
L_0017a858:;
    {
        uint32_t v = cpu->r[3] - cpu->r[2] * cpu->r[1]; cpu->r[3] = v;
    }
L_0017a85c:;
    {
        goto L_0017a824;
    }
}

/* _ZN11CCollideCar22ComputeLaneForPositionE8Vector2sPK11RoadSectionS3_ @ 0017a860 (arm) */
void fn_0017a860(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017a860:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0017a864:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0017a868:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_0017a86c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x20u);
    }
L_0017a870:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0017a874:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x18u);
    }
L_0017a878:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0017a87c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0017a880:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0017a884:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0017a888:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_0017a88c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0017a890:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_0017a894:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x20u);
    }
L_0017a898:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0017a89c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0017a8a0:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_0017a8a4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0017a8a8:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_0017a8ac:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_0017a8b0:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0017a8b4:;
    {
        cpu->r[14] = 0x0017a8b8u; fn_0017a764(cpu);
    }
L_0017a8b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0017a8bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a9d0;
        }
    }
L_0017a8c0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x50u);
    }
L_0017a8c4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x48u);
    }
L_0017a8c8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x50u);
    }
L_0017a8cc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0017a8d0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0017a8d4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x48u);
    }
L_0017a8d8:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0017a8dc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0017a8e0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0017a8e4:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_0017a8e8:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_0017a8ec:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_0017a8f0:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0017a8f4:;
    {
        cpu->r[14] = 0x0017a8f8u; fn_0017a764(cpu);
    }
L_0017a8f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017a8fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000006u;
        }
    }
L_0017a900:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a9d0;
        }
    }
L_0017a904:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x2cu);
    }
L_0017a908:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x24u);
    }
L_0017a90c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x2cu);
    }
L_0017a910:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_0017a914:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0017a918:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x24u);
    }
L_0017a91c:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0017a920:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0017a924:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0017a928:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_0017a92c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_0017a930:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_0017a934:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0017a938:;
    {
        cpu->r[14] = 0x0017a93cu; fn_0017a764(cpu);
    }
L_0017a93c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0017a940:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000002u;
        }
    }
L_0017a944:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a9d0;
        }
    }
L_0017a948:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x44u);
    }
L_0017a94c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x3cu);
    }
L_0017a950:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x44u);
    }
L_0017a954:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0017a958:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0017a95c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x3cu);
    }
L_0017a960:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0017a964:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0017a968:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0017a96c:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_0017a970:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_0017a974:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_0017a978:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0017a97c:;
    {
        cpu->r[14] = 0x0017a980u; fn_0017a764(cpu);
    }
L_0017a980:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017a984:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000005u;
        }
    }
L_0017a988:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a9d0;
        }
    }
L_0017a98c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x30u);
    }
L_0017a990:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x38u);
    }
L_0017a994:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x30u);
    }
L_0017a998:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0017a99c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0017a9a0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x38u);
    }
L_0017a9a4:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0017a9a8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0017a9ac:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0017a9b0:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_0017a9b4:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_0017a9b8:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_0017a9bc:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0017a9c0:;
    {
        cpu->r[14] = 0x0017a9c4u; fn_0017a764(cpu);
    }
L_0017a9c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017a9c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000004u;
        }
    }
L_0017a9cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000003u;
        }
    }
L_0017a9d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0017a9d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017a9d8u)) return;
    }
}

/* _ZN11CCollideCar10GetGroundYEiiPK11RoadSectionS2_ii @ 0017a9d8 (arm) */
void fn_0017a9d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017a9d8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0017a9dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017a9e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017a9e4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017a9e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017aa30;
        }
    }
L_0017a9ec:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_0017a9f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000040u, 0, 0);
    }
L_0017a9f4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], 0x00000038u, 0, 0);
    }
L_0017a9f8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000048u, 0, 0);
    }
L_0017a9fc:;
    {
        cpu->r[4] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0017aa00:;
    {
        cpu->r[12] = rd32(cpu->r[2] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_0017aa04:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0017aa08:;
    {
        uint32_t v = cpu->r[4] * cpu->r[0]; cpu->r[0] = v;
    }
L_0017aa0c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[14], 2, 2u, &shc));
    }
L_0017aa10:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1] + cpu->r[0]; cpu->r[0] = v;
    }
L_0017aa14:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0017aa18:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_0017aa1c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0017aa20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0017aa24:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0017aa28:;
    {
        cpu->r[14] = 0x0017aa2cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017aa2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017aa30u)) return;
    }
L_0017aa30:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], 0x00000050u, 0, 0);
    }
L_0017aa34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000060u, 0, 0);
    }
L_0017aa38:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], 0x00000058u, 0, 0);
    }
L_0017aa3c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000068u, 0, 0);
    }
L_0017aa40:;
    {
        cpu->r[4] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0017aa44:;
    {
        cpu->r[12] = rd32(cpu->r[2] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_0017aa48:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0017aa4c:;
    {
        uint32_t v = cpu->r[4] * cpu->r[0]; cpu->r[0] = v;
    }
L_0017aa50:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[14], 2, 2u, &shc));
    }
L_0017aa54:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1] + cpu->r[0]; cpu->r[0] = v;
    }
L_0017aa58:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0017aa5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_0017aa60:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0017aa64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0017aa68:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0017aa6c:;
    {
        cpu->r[14] = 0x0017aa70u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017aa70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017aa74u)) return;
    }
}

/* _ZN11CCollideCar28CollideCarWithImpassableRoadEP8CCarBase @ 0017aa74 (arm) */
void fn_0017aa74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017aa74:;
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
L_0017aa78:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0017aa7c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0017aa80:;
    {
        cpu->r[4] = rd32(0x0017aa88u + + 0x364u);
    }
L_0017aa84:;
    {
        cpu->r[14] = 0x0017aa8cu;
    }
L_0017aa88:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017aa8cu)) return;
    }
L_0017aa8c:;
    {
        cpu->r[4] = add_flags(cpu, 0x0017aa94u, cpu->r[4], 0, 0);
    }
L_0017aa90:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017aa94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017aab4;
        }
    }
L_0017aa98:;
    {
        cpu->r[6] = 0x00001788u;
    }
L_0017aa9c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0017aaa0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_0017aaa4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017aab4;
        }
    }
L_0017aaa8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x1dcu);
    }
L_0017aaac:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_0017aab0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017aabc;
        }
    }
L_0017aab4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0017aab8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017aabcu)) return;
    }
L_0017aabc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x498u);
    }
L_0017aac0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0017aac4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017aab4;
        }
    }
L_0017aac8:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_0017aacc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017aab4;
        }
    }
L_0017aad0:;
    {
        cpu->r[1] = rd32(0x0017aad8u + + 0x318u);
    }
L_0017aad4:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_0017aad8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0017aadc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0017aae0:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_0017aae4:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_0017aae8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_0017aaec:;
    {
        cpu->r[8] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0017aaf0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x0000000cu, 0, 1);
    }
L_0017aaf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017adb0;
        }
    }
L_0017aaf8:;
    {
        { uint32_t v = cpu->r[3] & 0x00002000u; set_nz(cpu, v); }
    }
L_0017aafc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017ad18;
        }
    }
L_0017ab00:;
    {
        { uint32_t v = cpu->r[3] & 0x00000020u; set_nz(cpu, v); }
    }
L_0017ab04:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = rd32(cpu->r[5] + + 0x528u);
        }
    }
L_0017ab08:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x52cu);
        }
    }
L_0017ab0c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = rd32(cpu->r[5] + + 0x530u);
        }
    }
L_0017ab10:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x534u);
        }
    }
L_0017ab14:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0017ab18:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = cpu->r[3];
        }
    }
L_0017ab1c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017ab20:;
    {
        cpu->r[14] = 0x0017ab24u; fn_00173d94(cpu);
    }
L_0017ab24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017ab28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017abc4;
        }
    }
L_0017ab2c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017ab30:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0017ab34:;
    {
        cpu->r[14] = 0x0017ab38u; fn_00180c78(cpu);
    }
L_0017ab38:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0017ab3c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0017ab40:;
    {
        { uint32_t v = cpu->r[3] & 0x00002000u; set_nz(cpu, v); }
    }
L_0017ab44:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0017ab48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017ad38;
        }
    }
L_0017ab4c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0017ab50:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0017ab54:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017ab58:;
    {
        cpu->r[14] = 0x0017ab5cu; fn_00180bf0(cpu);
    }
L_0017ab5c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0017ab60:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0017ab64:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0017ab68:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017ab6c:;
    {
        cpu->r[14] = 0x0017ab70u; fn_001805dc(cpu);
    }
L_0017ab70:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0017ab74:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[10] + + 0xb4u);
    }
L_0017ab78:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[9] + + 0xb4u);
    }
L_0017ab7c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0017ab80:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0017ab84:;
    {
        { uint32_t v = cpu->r[2] & 0x00002000u; set_nz(cpu, v); }
    }
L_0017ab88:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
        }
    }
L_0017ab8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017ab90:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = (~cpu->r[3]);
        }
    }
L_0017ab94:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000800u, 0, 0);
        }
    }
L_0017ab98:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[2], 3, 11u, &shc); cpu->r[2] = v;
        }
    }
L_0017ab9c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 11u, &shc), 0, 0);
        }
    }
L_0017aba0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 1);
    }
L_0017aba4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 0);
        }
    }
L_0017aba8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_0017abac:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[2], 3, 11u, &shc); cpu->r[2] = v;
        }
    }
L_0017abb0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 11u, &shc), 1, 0);
        }
    }
L_0017abb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000400u, 1, 1);
    }
L_0017abb8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017acac;
        }
    }
L_0017abbc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 1);
    }
L_0017abc0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0017acac;
        }
    }
L_0017abc4:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x1b0u);
    }
L_0017abc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017abcc:;
    {
        cpu->r[14] = 0x0017abd0u; fn_00173d94(cpu);
    }
L_0017abd0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017abd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017aab4;
        }
    }
L_0017abd8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017abdc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017abe0:;
    {
        cpu->r[14] = 0x0017abe4u; fn_00180c78(cpu);
    }
L_0017abe4:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0017abe8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0017abec:;
    {
        { uint32_t v = cpu->r[3] & 0x00002000u; set_nz(cpu, v); }
    }
L_0017abf0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0017abf4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017ad60;
        }
    }
L_0017abf8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0017abfc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017ac00:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017ac04:;
    {
        cpu->r[14] = 0x0017ac08u; fn_00180b68(cpu);
    }
L_0017ac08:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017ac0c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0017ac10:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0017ac14:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017ac18:;
    {
        cpu->r[14] = 0x0017ac1cu; fn_00180634(cpu);
    }
L_0017ac1c:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0017ac20:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[6] + + 0xb4u);
    }
L_0017ac24:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[10] + + 0xb4u);
    }
L_0017ac28:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0017ac2c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0017ac30:;
    {
        { uint32_t v = cpu->r[2] & 0x00002000u; set_nz(cpu, v); }
    }
L_0017ac34:;
    {
        uint32_t v = cpu->r[2] ^ 0x00000010u; cpu->r[2] = v;
    }
L_0017ac38:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
        }
    }
L_0017ac3c:;
    {
        cpu->r[2] = (cpu->r[2] >> 4) & 0x1u;
    }
L_0017ac40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017ac44:;
    {
        wr8(cpu->r[5] + + 0x4d1u, cpu->r[2]);
    }
L_0017ac48:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = (~cpu->r[3]);
        }
    }
L_0017ac4c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000800u, 0, 0);
        }
    }
L_0017ac50:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[2], 3, 11u, &shc); cpu->r[2] = v;
        }
    }
L_0017ac54:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 11u, &shc), 0, 0);
        }
    }
L_0017ac58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 1);
    }
L_0017ac5c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 0);
        }
    }
L_0017ac60:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_0017ac64:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[2], 3, 11u, &shc); cpu->r[2] = v;
        }
    }
L_0017ac68:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 11u, &shc), 1, 0);
        }
    }
L_0017ac6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000400u, 1, 1);
    }
L_0017ac70:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017aab4;
        }
    }
L_0017ac74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017ac78:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017aab4;
        }
    }
L_0017ac7c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x484u);
    }
L_0017ac80:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0017ac84:;
    {
        wr8(cpu->r[5] + + 0x4d0u, cpu->r[2]);
    }
L_0017ac88:;
    {
        uint32_t v = cpu->r[3] | 0x00004000u; cpu->r[3] = v;
    }
L_0017ac8c:;
    {
        wr32(cpu->r[5] + + 0x484u, cpu->r[3]);
    }
L_0017ac90:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x1cu);
    }
L_0017ac94:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0017ac98:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0017ad9c;
        }
    }
L_0017ac9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0017aca0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0017aca4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0017aca8:;
    {
        goto L_0017acf8;
    }
L_0017acac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017acb0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0017acb4:;
    {
        wr8(cpu->r[5] + + 0x4d0u, cpu->r[3]);
    }
L_0017acb8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0017acbc:;
    {
        cpu->r[14] = 0x0017acc4u;
    }
L_0017acc0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017acc4u)) return;
    }
L_0017acc4:;
    {
        cpu->r[3] = rd32(0x0017acccu + + 0x128u);
    }
L_0017acc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0017accc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0017acd0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0017acd4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x484u);
        }
    }
L_0017acd8:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = cpu->r[3] | 0x00004000u; cpu->r[3] = v;
        }
    }
L_0017acdc:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[5] + + 0x484u, cpu->r[3]);
        }
    }
L_0017ace0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x1cu);
    }
L_0017ace4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0017ace8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0017ad88;
        }
    }
L_0017acec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0017acf0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0017acf4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0017acf8:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0017acfc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0017ad00:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000208u, 0, 0);
    }
L_0017ad04:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0017ad08:;
    {
        uint32_t v = cpu->r[3] ^ 0x00002000u; cpu->r[3] = v;
    }
L_0017ad0c:;
    {
        cpu->r[3] = (cpu->r[3] >> 13) & 0x1u;
    }
L_0017ad10:;
    {
        cpu->r[14] = 0x0017ad14u; fn_00175be4(cpu);
    }
L_0017ad14:;
    {
        goto L_0017aab4;
    }
L_0017ad18:;
    {
        { uint32_t v = cpu->r[3] & 0x00000020u; set_nz(cpu, v); }
    }
L_0017ad1c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = rd32(cpu->r[5] + + 0x530u);
        }
    }
L_0017ad20:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x534u);
        }
    }
L_0017ad24:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = rd32(cpu->r[5] + + 0x528u);
        }
    }
L_0017ad28:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x52cu);
        }
    }
L_0017ad2c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0017ad30:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = cpu->r[3];
        }
    }
L_0017ad34:;
    {
        goto L_0017ab1c;
    }
L_0017ad38:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0017ad3c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0017ad40:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017ad44:;
    {
        cpu->r[14] = 0x0017ad48u; fn_00180b68(cpu);
    }
L_0017ad48:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0017ad4c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0017ad50:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0017ad54:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017ad58:;
    {
        cpu->r[14] = 0x0017ad5cu; fn_00180634(cpu);
    }
L_0017ad5c:;
    {
        goto L_0017ab70;
    }
L_0017ad60:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017ad64:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017ad68:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0017ad6c:;
    {
        cpu->r[14] = 0x0017ad70u; fn_00180bf0(cpu);
    }
L_0017ad70:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017ad74:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0017ad78:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0017ad7c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017ad80:;
    {
        cpu->r[14] = 0x0017ad84u; fn_001805dc(cpu);
    }
L_0017ad84:;
    {
        goto L_0017ac1c;
    }
L_0017ad88:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0017ad8c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017ad90:;
    {
        cpu->r[14] = 0x0017ad94u; fn_00180968(cpu);
    }
L_0017ad94:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0017ad98:;
    {
        goto L_0017acec;
    }
L_0017ad9c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017ada0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017ada4:;
    {
        cpu->r[14] = 0x0017ada8u; fn_00180968(cpu);
    }
L_0017ada8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017adac:;
    {
        goto L_0017ac9c;
    }
L_0017adb0:;
    {
        cpu->r[1] = rd32(0x0017adb8u + + 0x40u);
    }
L_0017adb4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0017adb8:;
    {
        cpu->r[2] = rd32(0x0017adc0u + + 0x3cu);
    }
L_0017adbc:;
    {
        cpu->r[14] = 0x00000a3bu;
    }
L_0017adc0:;
    {
        cpu->r[3] = rd32(0x0017adc8u + + 0x38u);
    }
L_0017adc4:;
    {
        cpu->r[1] = add_flags(cpu, 0x0017adccu, cpu->r[1], 0, 0);
    }
L_0017adc8:;
    {
        cpu->r[12] = rd32(0x0017add0u + + 0x34u);
    }
L_0017adcc:;
    {
        cpu->r[2] = add_flags(cpu, 0x0017add4u, cpu->r[2], 0, 0);
    }
L_0017add0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017add8u, cpu->r[3], 0, 0);
    }
L_0017add4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0017add8:;
    {
        cpu->r[12] = add_flags(cpu, 0x0017ade0u, cpu->r[12], 0, 0);
    }
L_0017addc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0017ade0:;
    {
        cpu->r[14] = 0x0017ade4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0017ade4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0017ade8:;
    {
        goto L_0017aaf8;
    }
}

/* _ZN15CCollidableBody6UpdateEv @ 0017ae08 (arm) */
void fn_0017ae08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017ae08:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0017ae0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017ae10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000054u, 0, 0);
    }
L_0017ae14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_0017ae18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0017ae1c:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_0017ae20:;
    {
        cpu->r[14] = 0x0017ae24u; fn_0018572c(cpu);
    }
L_0017ae24:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x60u);
    }
L_0017ae28:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0017ae2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x64u);
    }
L_0017ae30:;
    {
        uint32_t v = cpu->r[0] * cpu->r[5]; cpu->r[0] = v;
    }
L_0017ae34:;
    {
        cpu->r[14] = 0x0017ae38u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017ae38:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x54u);
    }
L_0017ae3c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[5]; cpu->r[3] = v;
    }
L_0017ae40:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x5cu);
    }
L_0017ae44:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x68u);
    }
L_0017ae48:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x6cu);
    }
L_0017ae4c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5]; cpu->r[2] = v;
    }
L_0017ae50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0017ae54:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_0017ae58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_0017ae5c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 1u, &shc), 1, 0);
    }
L_0017ae60:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_0017ae64:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0017ae68:;
    {
        if (cond_test(cpu, 11)) {
        wr8(cpu->r[4] + + 0x76u, cpu->r[3]);
        }
    }
L_0017ae6c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[1] = v;
    }
L_0017ae70:;
    {
        uint32_t v = cpu->r[6] * cpu->r[0]; cpu->r[0] = v;
    }
L_0017ae74:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[1]);
    }
L_0017ae78:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_0017ae7c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017ae80u)) return;
    }
}

/* _ZN11CCollideCar13CollideBodiesERK14CCollisionBodyRK8Vector4siS2_S5_iRS3_S6_S6_RiS7_S6_iib @ 0017ae80 (arm) */
void fn_0017ae80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017ae80:;
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
L_0017ae84:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000008cu, 1, 0);
    }
L_0017ae88:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0017ae8c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0017ae90:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xb0u);
    }
L_0017ae94:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_0017ae98:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_0017ae9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000078u, 0, 0);
    }
L_0017aea0:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_0017aea4:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x8u);
    }
L_0017aea8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_0017aeac:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[2]);
    }
L_0017aeb0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_0017aeb4:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x8u);
    }
L_0017aeb8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 0);
    }
L_0017aebc:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_0017aec0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_0017aec4:;
    {
        cpu->r[11] = rd32(cpu->r[7]);
    }
L_0017aec8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_0017aecc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_0017aed0:;
    {
        cpu->r[1] = rd8(cpu->r[13] + + 0xd8u);
    }
L_0017aed4:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 0);
    }
L_0017aed8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x4u);
    }
L_0017aedc:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x4u);
    }
L_0017aee0:;
    {
        cpu->r[8] = rd32(cpu->r[6]);
    }
L_0017aee4:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[10], cpu->r[14], 1, 0);
    }
L_0017aee8:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[2]);
    }
L_0017aeec:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[3]);
    }
L_0017aef0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[8], 0, 0);
    }
L_0017aef4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_0017aef8:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[14]);
    }
L_0017aefc:;
    {
        cpu->r[14] = 0x0017af00u; fn_0018572c(cpu);
    }
L_0017af00:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
        cpu->r[3] = v2;
    }
L_0017af04:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[12] = v;
    }
L_0017af08:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_0017af0c:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[0] = v;
    }
L_0017af10:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_0017af14:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_0017af18:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = cpu->r[0];
        }
    }
L_0017af1c:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[0] = v;
    }
L_0017af20:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_0017af24:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_0017af28:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = cpu->r[12];
        }
    }
L_0017af2c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[0];
        }
    }
L_0017af30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017af34:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0017af38:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
        }
    }
L_0017af3c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017af90;
        }
    }
L_0017af40:;
    {
        cpu->r[14] = rd32(cpu->r[7]);
    }
L_0017af44:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x4u);
    }
L_0017af48:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x8u);
    }
L_0017af4c:;
    {
        uint32_t v = cpu->r[14] ^ shifter(cpu->r[14], 1, 31u, &shc); cpu->r[8] = v;
    }
L_0017af50:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[14], 1, 31u, &shc), 1, 0);
    }
L_0017af54:;
    {
        uint32_t v = cpu->r[12] ^ shifter(cpu->r[12], 1, 31u, &shc); cpu->r[10] = v;
    }
L_0017af58:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], shifter(cpu->r[12], 1, 31u, &shc), 1, 0);
    }
L_0017af5c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_0017af60:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = cpu->r[8];
        }
    }
L_0017af64:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[8] = v;
    }
L_0017af68:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_0017af6c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_0017af70:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[8] = cpu->r[10];
        }
    }
L_0017af74:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[8] = cpu->r[8];
        }
    }
L_0017af78:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0017af7c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_0017af80:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[8] = 0x00000001u;
        }
    }
L_0017af84:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[8]);
    }
L_0017af88:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0017af8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017b954;
        }
    }
L_0017af90:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0xcu);
    }
L_0017af94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000084u, 0, 0);
    }
L_0017af98:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017af9c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_0017afa0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0017afa4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_0017afa8:;
    {
        uint32_t v = cpu->r[14] * cpu->r[8]; cpu->r[14] = v;
    }
L_0017afac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_0017afb0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3] + cpu->r[14]; cpu->r[14] = v;
    }
L_0017afb4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_0017afb8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[8]; cpu->r[1] = v;
    }
L_0017afbc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x24u);
    }
L_0017afc0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[1]; cpu->r[1] = v;
    }
L_0017afc4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x78u);
    }
L_0017afc8:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 12u, &shc); cpu->r[14] = v;
    }
L_0017afcc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_0017afd0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x80u);
    }
L_0017afd4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[8]; cpu->r[2] = v;
    }
L_0017afd8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_0017afdc:;
    {
        uint32_t v = cpu->r[14] * cpu->r[3] + cpu->r[2]; cpu->r[2] = v;
    }
L_0017afe0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017afe4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 12u, &shc); cpu->r[1] = v;
    }
L_0017afe8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_0017afec:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x24u);
    }
L_0017aff0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[14]; cpu->r[12] = v;
    }
L_0017aff4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x28u);
    }
L_0017aff8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_0017affc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 12u, &shc); cpu->r[2] = v;
    }
L_0017b000:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x20u);
    }
L_0017b004:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0017b008:;
    {
        uint32_t v = cpu->r[12] ^ shifter(cpu->r[12], 1, 31u, &shc); cpu->r[14] = v;
    }
L_0017b00c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], shifter(cpu->r[12], 1, 31u, &shc), 1, 0);
    }
L_0017b010:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0017b014:;
    {
        uint32_t v = cpu->r[8] * cpu->r[11]; cpu->r[8] = v;
    }
L_0017b018:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0017b01c:;
    {
        uint32_t v = cpu->r[10] * cpu->r[9]; cpu->r[10] = v;
    }
L_0017b020:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12] + cpu->r[8]; cpu->r[8] = v;
    }
L_0017b024:;
    {
        uint32_t v = cpu->r[10] ^ shifter(cpu->r[10], 1, 31u, &shc); cpu->r[12] = v;
    }
L_0017b028:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[10], 1, 31u, &shc), 1, 0);
    }
L_0017b02c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[14], 0, 0);
    }
L_0017b030:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_0017b034:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_0017b038:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 12u, &shc); cpu->r[8] = v;
    }
L_0017b03c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 0);
    }
L_0017b040:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], cpu->r[8], 0, 0);
    }
L_0017b044:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[8], cpu->r[12], 1, 0);
    }
L_0017b048:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0017b04c:;
    {
        cpu->r[14] = 0x0017b050u; fn_0017a6d4(cpu);
    }
L_0017b050:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017b054:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017b970;
        }
    }
L_0017b058:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_0017b05c:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_0017b060:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017b97c;
        }
    }
L_0017b064:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x84u);
    }
L_0017b068:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0017b06c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017b070:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0017b074:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0017b078:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0017b07c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0017b080:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_0017b084:;
    {
        uint32_t v = cpu->r[14] * cpu->r[8]; cpu->r[3] = v;
    }
L_0017b088:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x24u);
    }
L_0017b08c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[8]; cpu->r[1] = v;
    }
L_0017b090:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xc8u);
    }
L_0017b094:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017b098:;
    {
        wr32(cpu->r[9], cpu->r[2]);
    }
L_0017b09c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0017b0a0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_0017b0a4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0017b0a8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_0017b0ac:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000008u;
        }
    }
L_0017b0b0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000004u;
        }
    }
L_0017b0b4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x80u);
    }
L_0017b0b8:;
    {
        uint32_t v = cpu->r[1] | cpu->r[3]; cpu->r[3] = v;
    }
L_0017b0bc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x78u);
    }
L_0017b0c0:;
    {
        wr32(cpu->r[14], cpu->r[3]);
    }
L_0017b0c4:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x18u);
    }
L_0017b0c8:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017b0cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x20u);
    }
L_0017b0d0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_0017b0d4:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x18u);
    }
L_0017b0d8:;
    {
        uint32_t v = cpu->r[14] * cpu->r[10]; cpu->r[14] = v;
    }
L_0017b0dc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x28u);
    }
L_0017b0e0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[10]; cpu->r[2] = v;
    }
L_0017b0e4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3] + cpu->r[2]; cpu->r[2] = v;
    }
L_0017b0e8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[14]; cpu->r[14] = v;
    }
L_0017b0ec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x20u);
    }
L_0017b0f0:;
    {
        uint32_t v = cpu->r[9] * cpu->r[10]; cpu->r[9] = v;
    }
L_0017b0f4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[9]; cpu->r[9] = v;
    }
L_0017b0f8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_0017b0fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_0017b100:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 12u, &shc); cpu->r[14] = v;
    }
L_0017b104:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[14]);
    }
L_0017b108:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0017b10c:;
    {
        uint32_t v = cpu->r[10] * cpu->r[11]; cpu->r[10] = v;
    }
L_0017b110:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0017b114:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 12u, &shc); cpu->r[9] = v;
    }
L_0017b118:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[9]);
    }
L_0017b11c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[14]; cpu->r[9] = v;
    }
L_0017b120:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x28u);
    }
L_0017b124:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_0017b128:;
    {
        uint32_t v = cpu->r[14] * cpu->r[2]; cpu->r[12] = v;
    }
L_0017b12c:;
    {
        uint32_t v = cpu->r[9] ^ shifter(cpu->r[9], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0017b130:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[9], 1, 31u, &shc), 1, 0);
    }
L_0017b134:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_0017b138:;
    {
        uint32_t v = cpu->r[12] ^ shifter(cpu->r[12], 1, 31u, &shc); cpu->r[14] = v;
    }
L_0017b13c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], shifter(cpu->r[12], 1, 31u, &shc), 1, 0);
    }
L_0017b140:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_0017b144:;
    {
        uint32_t v = cpu->r[3] * cpu->r[9] + cpu->r[10]; cpu->r[10] = v;
    }
L_0017b148:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_0017b14c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[2] = v;
    }
L_0017b150:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 12u, &shc); cpu->r[14] = v;
    }
L_0017b154:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_0017b158:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[14], 1, 0);
    }
L_0017b15c:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 12u, &shc); cpu->r[10] = v;
    }
L_0017b160:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], cpu->r[10], 0, 0);
    }
L_0017b164:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[10], cpu->r[14], 1, 0);
    }
L_0017b168:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0017b16c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0017b170:;
    {
        cpu->r[14] = 0x0017b174u; fn_0017a6d4(cpu);
    }
L_0017b174:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017b178:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017b970;
        }
    }
L_0017b17c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_0017b180:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_0017b184:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = rd32(cpu->r[13] + + 0x84u);
        }
    }
L_0017b188:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017ba20;
        }
    }
L_0017b18c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0017b190:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[10], 1, 1);
    }
L_0017b194:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017b9c8;
        }
    }
L_0017b198:;
    {
        cpu->r[10] = cpu->r[14];
    }
L_0017b19c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_0017b1a0:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[8]);
    }
L_0017b1a4:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_0017b1a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x28u);
    }
L_0017b1ac:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0x24u);
    }
L_0017b1b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0017b1b4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017b1b8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017b1bc:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[3] = v;
    }
L_0017b1c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x78u);
    }
L_0017b1c4:;
    {
        uint32_t v = cpu->r[9] * cpu->r[12]; cpu->r[9] = v;
    }
L_0017b1c8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x80u);
    }
L_0017b1cc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x14u);
    }
L_0017b1d0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[8]; cpu->r[2] = v;
    }
L_0017b1d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_0017b1d8:;
    {
        uint32_t v = cpu->r[14] * cpu->r[12] + cpu->r[2]; cpu->r[14] = v;
    }
L_0017b1dc:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0017b1e0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_0017b1e4:;
    {
        uint32_t v = cpu->r[9] ^ shifter(cpu->r[9], 1, 31u, &shc); cpu->r[12] = v;
    }
L_0017b1e8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[9], 1, 31u, &shc), 1, 0);
    }
L_0017b1ec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0017b1f0:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x14u);
    }
L_0017b1f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_0017b1f8:;
    {
        uint32_t v = cpu->r[8] * cpu->r[11]; cpu->r[8] = v;
    }
L_0017b1fc:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_0017b200:;
    {
        uint32_t v = cpu->r[9] * cpu->r[3] + cpu->r[8]; cpu->r[8] = v;
    }
L_0017b204:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 12u, &shc); cpu->r[2] = v;
    }
L_0017b208:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_0017b20c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_0017b210:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0017b214:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 0);
    }
L_0017b218:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0017b21c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_0017b220:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 12u, &shc); cpu->r[8] = v;
    }
L_0017b224:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], cpu->r[8], 0, 0);
    }
L_0017b228:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[8], cpu->r[12], 1, 0);
    }
L_0017b22c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0017b230:;
    {
        cpu->r[14] = 0x0017b234u; fn_0017a6d4(cpu);
    }
L_0017b234:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017b238:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017b970;
        }
    }
L_0017b23c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0017b240:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0017b244:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = rd32(cpu->r[13] + + 0x84u);
        }
    }
L_0017b248:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017b294;
        }
    }
L_0017b24c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017b250:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x10u);
    }
L_0017b254:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_0017b258:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[3] = v;
    }
L_0017b25c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_0017b260:;
    {
        uint32_t v = cpu->r[8] * cpu->r[0]; cpu->r[8] = v;
    }
L_0017b264:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x44u);
    }
L_0017b268:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[1] = v;
    }
L_0017b26c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_0017b270:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 12u, &shc), cpu->r[2], 1, 0);
    }
L_0017b274:;
    {
        cpu->r[8] = sub_flags(cpu, shifter(cpu->r[8], 1, 12u, &shc), cpu->r[9], 1, 0);
    }
L_0017b278:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3]; cpu->r[2] = v;
    }
L_0017b27c:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[1], 1, 12u, &shc), cpu->r[12], 1, 0);
    }
L_0017b280:;
    {
        uint32_t v = cpu->r[8] * cpu->r[8] + cpu->r[2]; cpu->r[8] = v;
    }
L_0017b284:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3] + cpu->r[8]; cpu->r[3] = v;
    }
L_0017b288:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x84u);
    }
L_0017b28c:;
    {
        uint32_t v = cpu->r[8] * cpu->r[3]; cpu->r[8] = v;
    }
L_0017b290:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[8]);
    }
L_0017b294:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_0017b298:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[14] = 0x00000000u;
        }
    }
L_0017b29c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = cpu->r[10];
        }
    }
L_0017b2a0:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[14]);
        }
    }
L_0017b2a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017b304;
        }
    }
L_0017b2a8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017b2ac:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_0017b2b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0017b2b4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_0017b2b8:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_0017b2bc:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[3] = v;
    }
L_0017b2c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xc8u);
    }
L_0017b2c4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[14] = v;
    }
L_0017b2c8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[9]);
    }
L_0017b2cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017b2d0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[10]);
    }
L_0017b2d4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[10];
        }
    }
L_0017b2d8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_0017b2dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017b2e0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = cpu->r[10];
        }
    }
L_0017b2e4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000002u;
        }
    }
L_0017b2e8:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_0017b2ec:;
    {
        wr32(cpu->r[12], cpu->r[0]);
    }
L_0017b2f0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[14] = 0x00000008u;
        }
    }
L_0017b2f4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[14] = 0x00000004u;
        }
    }
L_0017b2f8:;
    {
        uint32_t v = cpu->r[14] | cpu->r[3]; cpu->r[3] = v;
    }
L_0017b2fc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0017b300:;
    {
        wr32(cpu->r[14], cpu->r[3]);
    }
L_0017b304:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x28u);
    }
L_0017b308:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0x24u);
    }
L_0017b30c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_0017b310:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0017b314:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x18u);
    }
L_0017b318:;
    {
        uint32_t v = cpu->r[14] * cpu->r[1]; cpu->r[14] = v;
    }
L_0017b31c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x78u);
    }
L_0017b320:;
    {
        uint32_t v = cpu->r[9] * cpu->r[2]; cpu->r[9] = v;
    }
L_0017b324:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x20u);
    }
L_0017b328:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80u);
    }
L_0017b32c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[10]; cpu->r[3] = v;
    }
L_0017b330:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_0017b334:;
    {
        uint32_t v = cpu->r[2] * cpu->r[12] + cpu->r[3]; cpu->r[2] = v;
    }
L_0017b338:;
    {
        uint32_t v = cpu->r[9] ^ shifter(cpu->r[9], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0017b33c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[9], 1, 31u, &shc), 1, 0);
    }
L_0017b340:;
    {
        uint32_t v = cpu->r[14] ^ shifter(cpu->r[14], 1, 31u, &shc); cpu->r[12] = v;
    }
L_0017b344:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[14], 1, 31u, &shc), 1, 0);
    }
L_0017b348:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x20u);
    }
L_0017b34c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_0017b350:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0017b354:;
    {
        uint32_t v = cpu->r[10] * cpu->r[11]; cpu->r[11] = v;
    }
L_0017b358:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x24u);
    }
L_0017b35c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[14] + cpu->r[11]; cpu->r[11] = v;
    }
L_0017b360:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_0017b364:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 12u, &shc); cpu->r[2] = v;
    }
L_0017b368:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0017b36c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_0017b370:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0017b374:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 0);
    }
L_0017b378:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_0017b37c:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 12u, &shc); cpu->r[11] = v;
    }
L_0017b380:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], cpu->r[11], 0, 0);
    }
L_0017b384:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[11], cpu->r[12], 1, 0);
    }
L_0017b388:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0017b38c:;
    {
        cpu->r[14] = 0x0017b390u; fn_0017a6d4(cpu);
    }
L_0017b390:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017b394:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017b970;
        }
    }
L_0017b398:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x28u);
    }
L_0017b39c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0017b3a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017ba78;
        }
    }
L_0017b3a4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x84u);
    }
L_0017b3a8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0017b3ac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0017b3b0:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[12], 1, 1);
    }
L_0017b3b4:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x18u, cpu->r[8]);
        }
    }
L_0017b3b8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017b418;
        }
    }
L_0017b3bc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0017b3c0:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_0017b3c4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_0017b3c8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_0017b3cc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xc8u);
    }
L_0017b3d0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[1] = v;
    }
L_0017b3d4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0017b3d8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[9] = v;
    }
L_0017b3dc:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_0017b3e0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0017b3e4:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[8]);
    }
L_0017b3e8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[10];
        }
    }
L_0017b3ec:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00000002u;
        }
    }
L_0017b3f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017b3f4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[10]);
    }
L_0017b3f8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000008u;
        }
    }
L_0017b3fc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000004u;
        }
    }
L_0017b400:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0017b404:;
    {
        wr32(cpu->r[11], cpu->r[0]);
    }
L_0017b408:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = 0x00000008u;
        }
    }
L_0017b40c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[9] = 0x00000004u;
        }
    }
L_0017b410:;
    {
        uint32_t v = cpu->r[9] | cpu->r[1]; cpu->r[1] = v;
    }
L_0017b414:;
    {
        wr32(cpu->r[12], cpu->r[1]);
    }
L_0017b418:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x18u);
    }
L_0017b41c:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0x1cu);
    }
L_0017b420:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_0017b424:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x14u);
    }
L_0017b428:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0017b42c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0017b430:;
    {
        uint32_t v = cpu->r[9] * cpu->r[10]; cpu->r[8] = v;
    }
L_0017b434:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0017b438:;
    {
        uint32_t v = cpu->r[2] * cpu->r[11]; cpu->r[10] = v;
    }
L_0017b43c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x10u);
    }
L_0017b440:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017b444:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x20u);
    }
L_0017b448:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x20u);
    }
L_0017b44c:;
    {
        uint32_t v = cpu->r[11] * cpu->r[3]; cpu->r[11] = v;
    }
L_0017b450:;
    {
        uint32_t v = cpu->r[8] - cpu->r[0] * cpu->r[2]; cpu->r[2] = v;
    }
L_0017b454:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017b458:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[11]);
    }
L_0017b45c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x14u);
    }
L_0017b460:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 12u, &shc); cpu->r[2] = v;
    }
L_0017b464:;
    {
        uint32_t v = cpu->r[1] * cpu->r[11]; cpu->r[11] = v;
    }
L_0017b468:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[11]);
    }
L_0017b46c:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0xcu);
    }
L_0017b470:;
    {
        uint32_t v = cpu->r[0] * cpu->r[11]; cpu->r[11] = v;
    }
L_0017b474:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0017b478:;
    {
        uint32_t v = cpu->r[10] - cpu->r[9] * cpu->r[0]; cpu->r[10] = v;
    }
L_0017b47c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0017b480:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[11]);
    }
L_0017b484:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017b488:;
    {
        uint32_t v = cpu->r[12] * cpu->r[11]; cpu->r[11] = v;
    }
L_0017b48c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_0017b490:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x58u);
    }
L_0017b494:;
    {
        uint32_t v = cpu->r[10] - cpu->r[1] * cpu->r[8]; cpu->r[9] = v;
    }
L_0017b498:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[11]);
    }
L_0017b49c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x10u);
    }
L_0017b4a0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x18u);
    }
L_0017b4a4:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x14u);
    }
L_0017b4a8:;
    {
        uint32_t v = cpu->r[0] - cpu->r[12] * cpu->r[11]; cpu->r[11] = v;
    }
L_0017b4ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_0017b4b0:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[2]);
    }
L_0017b4b4:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 12u, &shc); cpu->r[9] = v;
    }
L_0017b4b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_0017b4bc:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[11]);
    }
L_0017b4c0:;
    {
        uint32_t v = cpu->r[0] - cpu->r[10] * cpu->r[8]; cpu->r[11] = v;
    }
L_0017b4c4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x54u);
    }
L_0017b4c8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017b4cc:;
    {
        uint32_t v = cpu->r[8] - cpu->r[2] * cpu->r[3]; cpu->r[0] = v;
    }
L_0017b4d0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0017b4d4:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 12u, &shc); cpu->r[2] = v;
    }
L_0017b4d8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[8] = v;
    }
L_0017b4dc:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 12u, &shc); cpu->r[3] = v;
    }
L_0017b4e0:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[8]);
    }
L_0017b4e4:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
    }
L_0017b4e8:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[2]);
    }
L_0017b4ec:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[3]);
    }
L_0017b4f0:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[9]);
    }
L_0017b4f4:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[0]);
    }
L_0017b4f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017b798;
        }
    }
L_0017b4fc:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_0017b500:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x4u);
    }
L_0017b504:;
    {
        uint32_t v = cpu->r[2] * cpu->r[9] + cpu->r[0]; cpu->r[9] = v;
    }
L_0017b508:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x8u);
    }
L_0017b50c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0017b510:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x8u);
    }
L_0017b514:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x2cu);
    }
L_0017b518:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_0017b51c:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[14], 1, 0);
    }
L_0017b520:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[1]; cpu->r[12] = v;
    }
L_0017b524:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x4u);
    }
L_0017b528:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_0017b52c:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 12u, &shc); cpu->r[9] = v;
    }
L_0017b530:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0017b534:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x8u);
    }
L_0017b538:;
    {
        cpu->r[10] = rd32(cpu->r[7] + + 0x8u);
    }
L_0017b53c:;
    {
        cpu->r[6] = rd32(cpu->r[6] + + 0x4u);
    }
L_0017b540:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[9]);
    }
L_0017b544:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[1], cpu->r[14], 1, 0);
    }
L_0017b548:;
    {
        cpu->r[14] = rd32(cpu->r[7] + + 0x4u);
    }
L_0017b54c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[11], cpu->r[10], 1, 0);
    }
L_0017b550:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0017b554:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[8], 0, 0);
    }
L_0017b558:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[6], cpu->r[14], 1, 0);
    }
L_0017b55c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x28u);
    }
L_0017b560:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[14], cpu->r[9], 0, 0);
    }
L_0017b564:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_0017b568:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_0017b56c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0017b570:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0017b574:;
    {
        uint32_t v = cpu->r[6] * cpu->r[12]; cpu->r[12] = v;
    }
L_0017b578:;
    {
        uint32_t v = cpu->r[7] * cpu->r[14]; cpu->r[6] = v;
    }
L_0017b57c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_0017b580:;
    {
        uint32_t v = cpu->r[3] * cpu->r[9]; cpu->r[14] = v;
    }
L_0017b584:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_0017b588:;
    {
        uint32_t v = cpu->r[12] ^ shifter(cpu->r[12], 1, 31u, &shc); cpu->r[7] = v;
    }
L_0017b58c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[12], 1, 31u, &shc), 1, 0);
    }
L_0017b590:;
    {
        uint32_t v = cpu->r[11] * cpu->r[2] + cpu->r[14]; cpu->r[14] = v;
    }
L_0017b594:;
    {
        uint32_t v = cpu->r[6] ^ shifter(cpu->r[6], 1, 31u, &shc); cpu->r[12] = v;
    }
L_0017b598:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[6], 1, 31u, &shc), 1, 0);
    }
L_0017b59c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[10]; cpu->r[6] = v;
    }
L_0017b5a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], cpu->r[12], 0, 0);
    }
L_0017b5a4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8] + cpu->r[6]; cpu->r[6] = v;
    }
L_0017b5a8:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_0017b5ac:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 12u, &shc); cpu->r[2] = v;
    }
L_0017b5b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_0017b5b4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 0);
    }
L_0017b5b8:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 12u, &shc); cpu->r[6] = v;
    }
L_0017b5bc:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], cpu->r[6], 0, 0);
    }
L_0017b5c0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[6], cpu->r[12], 1, 0);
    }
L_0017b5c4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0017b5c8:;
    {
        cpu->r[14] = 0x0017b5ccu; fn_0017a6d4(cpu);
    }
L_0017b5cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017b5d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017b970;
        }
    }
L_0017b5d4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_0017b5d8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0017b5dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017bcec;
        }
    }
L_0017b5e0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x84u);
    }
L_0017b5e4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x74u);
    }
L_0017b5e8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_0017b5ec:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x70u);
    }
L_0017b5f0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x18u);
    }
L_0017b5f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017b5f8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 1);
    }
L_0017b5fc:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x14u, cpu->r[7]);
        }
    }
L_0017b600:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017b648;
        }
    }
L_0017b604:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0017b608:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0017b60c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0017b610:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_0017b614:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_0017b618:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_0017b61c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[3] = v;
    }
L_0017b620:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00020000u;
        }
    }
L_0017b624:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00040000u;
        }
    }
L_0017b628:;
    {
        wr32(cpu->r[12], cpu->r[0]);
    }
L_0017b62c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xc8u);
    }
L_0017b630:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0017b634:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[6]);
    }
L_0017b638:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00020000u;
        }
    }
L_0017b63c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00040000u;
        }
    }
L_0017b640:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[7]);
    }
L_0017b644:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0017b648:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x64u);
    }
L_0017b64c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_0017b650:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x1cu);
    }
L_0017b654:;
    {
        uint32_t v = cpu->r[14] * cpu->r[3]; cpu->r[14] = v;
    }
L_0017b658:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x28u);
    }
L_0017b65c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[14]; cpu->r[14] = v;
    }
L_0017b660:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x20u);
    }
L_0017b664:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[12] = v;
    }
L_0017b668:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x2cu);
    }
L_0017b66c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[12]; cpu->r[12] = v;
    }
L_0017b670:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0017b674:;
    {
        uint32_t v = cpu->r[2] * cpu->r[11]; cpu->r[11] = v;
    }
L_0017b678:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 12u, &shc); cpu->r[14] = v;
    }
L_0017b67c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_0017b680:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0017b684:;
    {
        uint32_t v = cpu->r[3] * cpu->r[9] + cpu->r[11]; cpu->r[11] = v;
    }
L_0017b688:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_0017b68c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_0017b690:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_0017b694:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0017b698:;
    {
        uint32_t v = cpu->r[6] * cpu->r[12]; cpu->r[12] = v;
    }
L_0017b69c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_0017b6a0:;
    {
        uint32_t v = cpu->r[7] * cpu->r[9]; cpu->r[7] = v;
    }
L_0017b6a4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[10]; cpu->r[14] = v;
    }
L_0017b6a8:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 12u, &shc); cpu->r[2] = v;
    }
L_0017b6ac:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8] + cpu->r[14]; cpu->r[14] = v;
    }
L_0017b6b0:;
    {
        uint32_t v = cpu->r[7] ^ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[6] = v;
    }
L_0017b6b4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[7], 1, 31u, &shc), 1, 0);
    }
L_0017b6b8:;
    {
        uint32_t v = cpu->r[12] ^ shifter(cpu->r[12], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0017b6bc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[12], 1, 31u, &shc), 1, 0);
    }
L_0017b6c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0017b6c4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[12] = v;
    }
L_0017b6c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_0017b6cc:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 12u, &shc); cpu->r[14] = v;
    }
L_0017b6d0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 0);
    }
L_0017b6d4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_0017b6d8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_0017b6dc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0017b6e0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0017b6e4:;
    {
        cpu->r[14] = 0x0017b6e8u; fn_0017a6d4(cpu);
    }
L_0017b6e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017b6ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017b970;
        }
    }
L_0017b6f0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x28u);
    }
L_0017b6f4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0017b6f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x84u);
        }
    }
L_0017b6fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017b748;
        }
    }
L_0017b700:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x60u);
    }
L_0017b704:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x40u);
    }
L_0017b708:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x48u);
    }
L_0017b70c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[2] = v;
    }
L_0017b710:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x64u);
    }
L_0017b714:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[1] = v;
    }
L_0017b718:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x68u);
    }
L_0017b71c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[12] = v;
    }
L_0017b720:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[2], 1, 12u, &shc), cpu->r[11], 1, 0);
    }
L_0017b724:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_0017b728:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3]; cpu->r[3] = v;
    }
L_0017b72c:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 1, 12u, &shc), cpu->r[2], 1, 0);
    }
L_0017b730:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1] + cpu->r[3]; cpu->r[3] = v;
    }
L_0017b734:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[12], 1, 12u, &shc), cpu->r[6], 1, 0);
    }
L_0017b738:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2] + cpu->r[3]; cpu->r[2] = v;
    }
L_0017b73c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x84u);
    }
L_0017b740:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[3] = v;
    }
L_0017b744:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[3]);
    }
L_0017b748:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017b74c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0017b750:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017b798;
        }
    }
L_0017b754:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x18u);
    }
L_0017b758:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017b75c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xc8u);
    }
L_0017b760:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_0017b764:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0017b768:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000060u, 0, 0);
    }
L_0017b76c:;
    {
        uint32_t v = cpu->r[8] * cpu->r[0]; cpu->r[3] = v;
    }
L_0017b770:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_0017b774:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00020000u;
        }
    }
L_0017b778:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00040000u;
        }
    }
L_0017b77c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_0017b780:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017b784:;
    {
        wr32(cpu->r[11], cpu->r[0]);
    }
L_0017b788:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00020000u;
        }
    }
L_0017b78c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00040000u;
        }
    }
L_0017b790:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[10]);
    }
L_0017b794:;
    {
        wr32(cpu->r[12], cpu->r[3]);
    }
L_0017b798:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_0017b79c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0017b7a0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x34u);
    }
L_0017b7a4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0017b7a8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xccu);
    }
L_0017b7ac:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1]; cpu->r[3] = v;
    }
L_0017b7b0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xb4u);
    }
L_0017b7b4:;
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
L_0017b7b8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x38u);
    }
L_0017b7bc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xb8u);
    }
L_0017b7c0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xbcu);
    }
L_0017b7c4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_0017b7c8:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0017b7cc:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_0017b7d0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_0017b7d4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[3] = v;
    }
L_0017b7d8:;
    {
        uint32_t v = cpu->r[8] * cpu->r[7]; cpu->r[8] = v;
    }
L_0017b7dc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 12u, &shc); cpu->r[2] = v;
    }
L_0017b7e0:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
    }
L_0017b7e4:;
    {
        wr32(cpu->r[10] + + 0x8u, cpu->r[2]);
    }
L_0017b7e8:;
    {
        wr32(cpu->r[10], cpu->r[0]);
    }
L_0017b7ec:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x8u);
    }
L_0017b7f0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_0017b7f4:;
    {
        cpu->r[1] = rd32(cpu->r[9]);
    }
L_0017b7f8:;
    {
        wr32(cpu->r[10] + + 0x4u, cpu->r[3]);
    }
L_0017b7fc:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 12u, &shc); cpu->r[8] = v;
    }
L_0017b800:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x4u);
    }
L_0017b804:;
    {
        uint32_t v = cpu->r[2] * cpu->r[8]; cpu->r[2] = v;
    }
L_0017b808:;
    {
        uint32_t v = cpu->r[1] * cpu->r[8]; cpu->r[1] = v;
    }
L_0017b80c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[8] = v;
    }
L_0017b810:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_0017b814:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_0017b818:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 12u, &shc); cpu->r[2] = v;
    }
L_0017b81c:;
    {
        wr32(cpu->r[11] + + 0x8u, cpu->r[2]);
    }
L_0017b820:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[8], 1, 0);
    }
L_0017b824:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 12u, &shc); cpu->r[1] = v;
    }
L_0017b828:;
    {
        wr32(cpu->r[11], cpu->r[1]);
    }
L_0017b82c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_0017b830:;
    {
        wr32(cpu->r[11] + + 0x4u, cpu->r[3]);
    }
L_0017b834:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017bbd0;
        }
    }
L_0017b838:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0017b83c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0017b840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017bac4;
        }
    }
L_0017b844:;
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
L_0017b848:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0017b84c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0017b850:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0017b854:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017b858:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0017b85c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017bc30;
        }
    }
L_0017b860:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_0017b864:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x14u);
    }
L_0017b868:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x10u);
    }
L_0017b86c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_0017b870:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3]; cpu->r[4] = v;
    }
L_0017b874:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[12] = v;
    }
L_0017b878:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[3] = v;
    }
L_0017b87c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0017b880:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[4], 1, 12u, &shc), 0, 0);
    }
L_0017b884:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 1, 12u, &shc), 0, 0);
    }
L_0017b888:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_0017b88c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 12u, &shc), 0, 0);
    }
L_0017b890:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[3]);
    }
L_0017b894:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0017b898:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0017b89c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_0017b8a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017bbec;
        }
    }
L_0017b8a4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x28u);
    }
L_0017b8a8:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x1cu);
    }
L_0017b8ac:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x20u);
    }
L_0017b8b0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x18u);
    }
L_0017b8b4:;
    {
        uint32_t v = cpu->r[4] * cpu->r[1]; cpu->r[4] = v;
    }
L_0017b8b8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0017b8bc:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[12] = v;
    }
L_0017b8c0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[1]; cpu->r[1] = v;
    }
L_0017b8c4:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_0017b8c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 1, 12u, &shc), 0, 0);
    }
L_0017b8cc:;
    {
        wr32(cpu->r[9] + + 0x4u, cpu->r[2]);
    }
L_0017b8d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 1, 12u, &shc), 0, 0);
    }
L_0017b8d4:;
    {
        wr32(cpu->r[9], cpu->r[0]);
    }
L_0017b8d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, 12u, &shc), 0, 0);
    }
L_0017b8dc:;
    {
        wr32(cpu->r[9] + + 0x8u, cpu->r[3]);
    }
L_0017b8e0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0017b8e4:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0017b8e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017bbc8;
        }
    }
L_0017b8ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0017b8f0:;
    {
        cpu->r[1] = rd32(cpu->r[12]);
    }
L_0017b8f4:;
    {
        { uint32_t v = cpu->r[1] & 0x00020000u; set_nz(cpu, v); }
    }
L_0017b8f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017bd3c;
        }
    }
L_0017b8fc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x2cu);
    }
L_0017b900:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0017b904:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x70u);
    }
L_0017b908:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_0017b90c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0017b910:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0017b914:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x74u);
    }
L_0017b918:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_0017b91c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x2cu);
    }
L_0017b920:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[5] = v;
    }
L_0017b924:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_0017b928:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0017b92c:;
    {
        uint32_t v = cpu->r[4] * cpu->r[1]; cpu->r[4] = v;
    }
L_0017b930:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 1, 12u, &shc), 0, 0);
    }
L_0017b934:;
    {
        uint32_t v = cpu->r[6] * cpu->r[1]; cpu->r[1] = v;
    }
L_0017b938:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0017b93c:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[2]);
    }
L_0017b940:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[4], 1, 12u, &shc), 0, 0);
    }
L_0017b944:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_0017b948:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, 12u, &shc), 0, 0);
    }
L_0017b94c:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_0017b950:;
    {
        goto L_0017b974;
    }
L_0017b954:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[1], 1, 0);
    }
L_0017b958:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_0017b95c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_0017b960:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[14]);
    }
L_0017b964:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[12]);
    }
L_0017b968:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[0]);
    }
L_0017b96c:;
    {
        goto L_0017af90;
    }
L_0017b970:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0017b974:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_0017b978:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017b97cu)) return;
    }
L_0017b97c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_0017b980:;
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
L_0017b984:;
    {
        uint32_t v = cpu->r[1] * cpu->r[8]; cpu->r[1] = v;
    }
L_0017b988:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x40u);
    }
L_0017b98c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[8]; cpu->r[2] = v;
    }
L_0017b990:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x44u);
    }
L_0017b994:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[3] = v;
    }
L_0017b998:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_0017b99c:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 1, 12u, &shc), cpu->r[9], 1, 0);
    }
L_0017b9a0:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 12u, &shc), cpu->r[10], 1, 0);
    }
L_0017b9a4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1]; cpu->r[1] = v;
    }
L_0017b9a8:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 12u, &shc), cpu->r[12], 1, 0);
    }
L_0017b9ac:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2] + cpu->r[1]; cpu->r[2] = v;
    }
L_0017b9b0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_0017b9b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x84u);
    }
L_0017b9b8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_0017b9bc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_0017b9c0:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[2]);
    }
L_0017b9c4:;
    {
        goto L_0017b06c;
    }
L_0017b9c8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0017b9cc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_0017b9d0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x30u);
    }
L_0017b9d4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0017b9d8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[3] = v;
    }
L_0017b9dc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xc8u);
    }
L_0017b9e0:;
    {
        uint32_t v = cpu->r[8] * cpu->r[0]; cpu->r[2] = v;
    }
L_0017b9e4:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_0017b9e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017b9ec:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[9]);
    }
L_0017b9f0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0017b9f4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_0017b9f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017b9fc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000008u;
        }
    }
L_0017ba00:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000004u;
        }
    }
L_0017ba04:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0017ba08:;
    {
        wr32(cpu->r[12], cpu->r[0]);
    }
L_0017ba0c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000008u;
        }
    }
L_0017ba10:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000004u;
        }
    }
L_0017ba14:;
    {
        uint32_t v = cpu->r[2] | cpu->r[3]; cpu->r[2] = v;
    }
L_0017ba18:;
    {
        wr32(cpu->r[14], cpu->r[2]);
    }
L_0017ba1c:;
    {
        goto L_0017b1a8;
    }
L_0017ba20:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x18u);
    }
L_0017ba24:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_0017ba28:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x20u);
    }
L_0017ba2c:;
    {
        uint32_t v = cpu->r[10] * cpu->r[0]; cpu->r[10] = v;
    }
L_0017ba30:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_0017ba34:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[3] = v;
    }
L_0017ba38:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x44u);
    }
L_0017ba3c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[1] = v;
    }
L_0017ba40:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_0017ba44:;
    {
        cpu->r[10] = sub_flags(cpu, shifter(cpu->r[10], 1, 12u, &shc), cpu->r[2], 1, 0);
    }
L_0017ba48:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0017ba4c:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 12u, &shc), cpu->r[9], 1, 0);
    }
L_0017ba50:;
    {
        uint32_t v = cpu->r[10] * cpu->r[10]; cpu->r[2] = v;
    }
L_0017ba54:;
    {
        cpu->r[10] = sub_flags(cpu, shifter(cpu->r[1], 1, 12u, &shc), cpu->r[12], 1, 0);
    }
L_0017ba58:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_0017ba5c:;
    {
        uint32_t v = cpu->r[10] * cpu->r[10] + cpu->r[3]; cpu->r[3] = v;
    }
L_0017ba60:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x84u);
    }
L_0017ba64:;
    {
        uint32_t v = cpu->r[10] * cpu->r[3]; cpu->r[10] = v;
    }
L_0017ba68:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[10], 1, 1);
    }
L_0017ba6c:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[10]);
    }
L_0017ba70:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017b9c8;
        }
    }
L_0017ba74:;
    {
        goto L_0017b198;
    }
L_0017ba78:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_0017ba7c:;
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
L_0017ba80:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[1] = v;
    }
L_0017ba84:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x40u);
    }
L_0017ba88:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[2] = v;
    }
L_0017ba8c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x44u);
    }
L_0017ba90:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[3] = v;
    }
L_0017ba94:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x48u);
    }
L_0017ba98:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 1, 12u, &shc), cpu->r[9], 1, 0);
    }
L_0017ba9c:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 12u, &shc), cpu->r[10], 1, 0);
    }
L_0017baa0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1]; cpu->r[1] = v;
    }
L_0017baa4:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 12u, &shc), cpu->r[11], 1, 0);
    }
L_0017baa8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2] + cpu->r[1]; cpu->r[2] = v;
    }
L_0017baac:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_0017bab0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x84u);
    }
L_0017bab4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_0017bab8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0017babc:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[2]);
    }
L_0017bac0:;
    {
        goto L_0017b3ac;
    }
L_0017bac4:;
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
L_0017bac8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0017bacc:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xc8u);
    }
L_0017bad0:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0017bad4:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_0017bad8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0017badc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017bcb0;
        }
    }
L_0017bae0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_0017bae4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x10u);
    }
L_0017bae8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x14u);
    }
L_0017baec:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017baf0:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3]; cpu->r[5] = v;
    }
L_0017baf4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[12] = v;
    }
L_0017baf8:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[3] = v;
    }
L_0017bafc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 1, 12u, &shc), 0, 0);
    }
L_0017bb00:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[1]);
    }
L_0017bb04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 1, 12u, &shc), 0, 0);
    }
L_0017bb08:;
    {
        wr32(cpu->r[8], cpu->r[0]);
    }
L_0017bb0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 12u, &shc), 0, 0);
    }
L_0017bb10:;
    {
        wr32(cpu->r[8] + + 0x8u, cpu->r[3]);
    }
L_0017bb14:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xc8u);
    }
L_0017bb18:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_0017bb1c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_0017bb20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017bc6c;
        }
    }
L_0017bb24:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x28u);
    }
L_0017bb28:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0017bb2c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x20u);
    }
L_0017bb30:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x18u);
    }
L_0017bb34:;
    {
        uint32_t v = cpu->r[5] * cpu->r[1]; cpu->r[5] = v;
    }
L_0017bb38:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0017bb3c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[12] = v;
    }
L_0017bb40:;
    {
        uint32_t v = cpu->r[6] * cpu->r[1]; cpu->r[1] = v;
    }
L_0017bb44:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_0017bb48:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 1, 12u, &shc), 0, 0);
    }
L_0017bb4c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0017bb50:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 1, 12u, &shc), 0, 0);
    }
L_0017bb54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, 12u, &shc), 0, 0);
    }
L_0017bb58:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[2]);
        wr32(ea + 8u, cpu->r[3]);
    }
L_0017bb5c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0017bb60:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0017bb64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017bbc8;
        }
    }
L_0017bb68:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xc8u);
    }
L_0017bb6c:;
    {
        cpu->r[1] = rd32(cpu->r[9]);
    }
L_0017bb70:;
    {
        { uint32_t v = cpu->r[1] & 0x00020000u; set_nz(cpu, v); }
    }
L_0017bb74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017bd90;
        }
    }
L_0017bb78:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0017bb7c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0017bb80:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0017bb84:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x64u);
    }
L_0017bb88:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_0017bb8c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x60u);
    }
L_0017bb90:;
    {
        wr32(cpu->r[11] + + 0x4u, cpu->r[2]);
    }
L_0017bb94:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x68u);
    }
L_0017bb98:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0017bb9c:;
    {
        cpu->r[4] = rd32(cpu->r[11]);
    }
L_0017bba0:;
    {
        uint32_t v = cpu->r[5] * cpu->r[1]; cpu->r[5] = v;
    }
L_0017bba4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[12] = v;
    }
L_0017bba8:;
    {
        uint32_t v = cpu->r[6] * cpu->r[1]; cpu->r[1] = v;
    }
L_0017bbac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[5], 1, 12u, &shc), 1, 0);
    }
L_0017bbb0:;
    {
        wr32(cpu->r[11] + + 0x4u, cpu->r[2]);
    }
L_0017bbb4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[4], shifter(cpu->r[12], 1, 12u, &shc), 1, 0);
    }
L_0017bbb8:;
    {
        wr32(cpu->r[11], cpu->r[2]);
    }
L_0017bbbc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, 12u, &shc), 1, 0);
    }
L_0017bbc0:;
    {
        wr32(cpu->r[11] + + 0x8u, cpu->r[3]);
    }
L_0017bbc4:;
    {
        goto L_0017b974;
    }
L_0017bbc8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0017bbcc:;
    {
        goto L_0017b974;
    }
L_0017bbd0:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
        cpu->r[3] = v2;
    }
L_0017bbd4:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_0017bbd8:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_0017bbdc:;
    {
        wr32(cpu->r[9], cpu->r[1]);
    }
L_0017bbe0:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_0017bbe4:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_0017bbe8:;
    {
        goto L_0017b838;
    }
L_0017bbec:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x28u);
    }
L_0017bbf0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x1cu);
    }
L_0017bbf4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x20u);
    }
L_0017bbf8:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x18u);
    }
L_0017bbfc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0017bc00:;
    {
        uint32_t v = cpu->r[4] * cpu->r[1]; cpu->r[4] = v;
    }
L_0017bc04:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[12] = v;
    }
L_0017bc08:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x4u);
    }
L_0017bc0c:;
    {
        uint32_t v = cpu->r[6] * cpu->r[1]; cpu->r[1] = v;
    }
L_0017bc10:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x8u);
    }
L_0017bc14:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[4], 1, 12u, &shc), 1, 0);
    }
L_0017bc18:;
    {
        wr32(cpu->r[10] + + 0x4u, cpu->r[2]);
    }
L_0017bc1c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[12], 1, 12u, &shc), 1, 0);
    }
L_0017bc20:;
    {
        wr32(cpu->r[10], cpu->r[0]);
    }
L_0017bc24:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, 12u, &shc), 1, 0);
    }
L_0017bc28:;
    {
        wr32(cpu->r[10] + + 0x8u, cpu->r[3]);
    }
L_0017bc2c:;
    {
        goto L_0017b8e0;
    }
L_0017bc30:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_0017bc34:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x10u);
    }
L_0017bc38:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x14u);
    }
L_0017bc3c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_0017bc40:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3]; cpu->r[4] = v;
    }
L_0017bc44:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0017bc48:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[12] = v;
    }
L_0017bc4c:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[3] = v;
    }
L_0017bc50:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[4], 1, 12u, &shc), 1, 0);
    }
L_0017bc54:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[1]);
    }
L_0017bc58:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[12], 1, 12u, &shc), 1, 0);
    }
L_0017bc5c:;
    {
        wr32(cpu->r[7], cpu->r[0]);
    }
L_0017bc60:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 12u, &shc), 1, 0);
    }
L_0017bc64:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_0017bc68:;
    {
        goto L_0017b894;
    }
L_0017bc6c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x28u);
    }
L_0017bc70:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0017bc74:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x20u);
    }
L_0017bc78:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x18u);
    }
L_0017bc7c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0017bc80:;
    {
        uint32_t v = cpu->r[5] * cpu->r[1]; cpu->r[5] = v;
    }
L_0017bc84:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[12] = v;
    }
L_0017bc88:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
    }
L_0017bc8c:;
    {
        uint32_t v = cpu->r[6] * cpu->r[1]; cpu->r[1] = v;
    }
L_0017bc90:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_0017bc94:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[5], 1, 12u, &shc), 1, 0);
    }
L_0017bc98:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[2]);
    }
L_0017bc9c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[12], 1, 12u, &shc), 1, 0);
    }
L_0017bca0:;
    {
        wr32(cpu->r[7], cpu->r[0]);
    }
L_0017bca4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, 12u, &shc), 1, 0);
    }
L_0017bca8:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_0017bcac:;
    {
        goto L_0017bb5c;
    }
L_0017bcb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_0017bcb4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x10u);
    }
L_0017bcb8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x14u);
    }
L_0017bcbc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017bcc0:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3]; cpu->r[5] = v;
    }
L_0017bcc4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0017bcc8:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[12] = v;
    }
L_0017bccc:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[3] = v;
    }
L_0017bcd0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[5], 1, 12u, &shc), 1, 0);
    }
L_0017bcd4:;
    {
        wr32(cpu->r[10] + + 0x4u, cpu->r[1]);
    }
L_0017bcd8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[12], 1, 12u, &shc), 1, 0);
    }
L_0017bcdc:;
    {
        wr32(cpu->r[10], cpu->r[0]);
    }
L_0017bce0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 12u, &shc), 1, 0);
    }
L_0017bce4:;
    {
        wr32(cpu->r[10] + + 0x8u, cpu->r[3]);
    }
L_0017bce8:;
    {
        goto L_0017bb14;
    }
L_0017bcec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0017bcf0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x70u);
    }
L_0017bcf4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x40u);
    }
L_0017bcf8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[3] = v;
    }
L_0017bcfc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x74u);
    }
L_0017bd00:;
    {
        uint32_t v = cpu->r[14] * cpu->r[0]; cpu->r[2] = v;
    }
L_0017bd04:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x44u);
    }
L_0017bd08:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[12] = v;
    }
L_0017bd0c:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 12u, &shc), cpu->r[6], 1, 0);
    }
L_0017bd10:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x48u);
    }
L_0017bd14:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 12u, &shc), cpu->r[7], 1, 0);
    }
L_0017bd18:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3]; cpu->r[3] = v;
    }
L_0017bd1c:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[12], 1, 12u, &shc), cpu->r[6], 1, 0);
    }
L_0017bd20:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_0017bd24:;
    {
        uint32_t v = cpu->r[12] * cpu->r[12] + cpu->r[3]; cpu->r[12] = v;
    }
L_0017bd28:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x84u);
    }
L_0017bd2c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[3] = v;
    }
L_0017bd30:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0017bd34:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[3]);
    }
L_0017bd38:;
    {
        goto L_0017b5f0;
    }
L_0017bd3c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0017bd40:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0017bd44:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x2cu);
    }
L_0017bd48:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x70u);
    }
L_0017bd4c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_0017bd50:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[2]);
    }
L_0017bd54:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x2cu);
    }
L_0017bd58:;
    {
        cpu->r[4] = rd32(cpu->r[6]);
    }
L_0017bd5c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x74u);
    }
L_0017bd60:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[5] = v;
    }
L_0017bd64:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0017bd68:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0017bd6c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[12] = v;
    }
L_0017bd70:;
    {
        uint32_t v = cpu->r[6] * cpu->r[1]; cpu->r[1] = v;
    }
L_0017bd74:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[5], 1, 12u, &shc), 1, 0);
    }
L_0017bd78:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[2]);
    }
L_0017bd7c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[4], shifter(cpu->r[12], 1, 12u, &shc), 1, 0);
    }
L_0017bd80:;
    {
        wr32(cpu->r[7], cpu->r[2]);
    }
L_0017bd84:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, 12u, &shc), 1, 0);
    }
L_0017bd88:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_0017bd8c:;
    {
        goto L_0017b974;
    }
L_0017bd90:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0017bd94:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0017bd98:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0017bd9c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x64u);
    }
L_0017bda0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_0017bda4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x68u);
    }
L_0017bda8:;
    {
        wr32(cpu->r[10] + + 0x4u, cpu->r[2]);
    }
L_0017bdac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0017bdb0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x60u);
    }
L_0017bdb4:;
    {
        cpu->r[12] = rd32(cpu->r[10]);
    }
L_0017bdb8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[1]; cpu->r[5] = v;
    }
L_0017bdbc:;
    {
        uint32_t v = cpu->r[4] * cpu->r[1]; cpu->r[4] = v;
    }
L_0017bdc0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[1]; cpu->r[1] = v;
    }
L_0017bdc4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 1, 12u, &shc), 0, 0);
    }
L_0017bdc8:;
    {
        wr32(cpu->r[10] + + 0x4u, cpu->r[2]);
    }
L_0017bdcc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[4], 1, 12u, &shc), 0, 0);
    }
L_0017bdd0:;
    {
        wr32(cpu->r[10], cpu->r[2]);
    }
L_0017bdd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, 12u, &shc), 0, 0);
    }
L_0017bdd8:;
    {
        wr32(cpu->r[10] + + 0x8u, cpu->r[3]);
    }
L_0017bddc:;
    {
        goto L_0017b974;
    }
}

/* _ZN15CCollidableBody7CollideEP4CCar @ 0017bde0 (arm) */
void fn_0017bde0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017bde0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0017bde4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017bde8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0017bdec:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0017bdf0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0017bdf4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0017bdf8:;
    {
        wr8(cpu->r[4] + + 0x75u, cpu->r[7]);
    }
L_0017bdfc:;
    {
        cpu->r[14] = 0x0017be00u; fn_000a5c98(cpu);
    }
L_0017be00:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x48u);
    }
L_0017be04:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x50u);
    }
L_0017be08:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000054u, 0, 0);
    }
L_0017be0c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x3d4u);
    }
L_0017be10:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x3dcu);
    }
L_0017be14:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_0017be18:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[7]);
    }
L_0017be1c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0017be20:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[1]);
    }
L_0017be24:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_0017be28:;
    {
        cpu->r[14] = 0x0017be2cu; fn_0018572c(cpu);
    }
L_0017be2c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0017be30:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017be34:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x460u);
    }
L_0017be38:;
    {
        cpu->r[14] = 0x0017be40u;
    }
L_0017be3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017be40u)) return;
    }
L_0017be40:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[7]);
    }
L_0017be44:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0017be48:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[7]);
    }
L_0017be4c:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[7]);
    }
L_0017be50:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0017be54:;
    {
        cpu->r[0] = 0x000000c8u;
    }
L_0017be58:;
    {
        uint32_t v = cpu->r[0] * cpu->r[8]; cpu->r[0] = v;
    }
L_0017be5c:;
    {
        cpu->r[14] = 0x0017be60u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017be60:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0017be64:;
    {
        cpu->r[5] = rd32(0x0017be6cu + + 0xe4u);
    }
L_0017be68:;
    {
        cpu->r[5] = add_flags(cpu, 0x0017be70u, cpu->r[5], 0, 0);
    }
L_0017be6c:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[0]);
    }
L_0017be70:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_0017be74:;
    {
        uint32_t v = cpu->r[0] * cpu->r[8]; cpu->r[0] = v;
    }
L_0017be78:;
    {
        cpu->r[14] = 0x0017be7cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017be7c:;
    {
        cpu->r[3] = 0x00006667u;
    }
L_0017be80:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6666u << 16);
    }
L_0017be84:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[7]);
    }
L_0017be88:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0017be8c:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[0]);
    }
L_0017be90:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017be94:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[1] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0017be98:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0017be9c:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 1u, &shc), cpu->r[2], 1, 0);
    }
L_0017bea0:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_0017bea4:;
    {
        cpu->r[14] = 0x0017bea8u; fn_0015d920(cpu);
    }
L_0017bea8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_0017beac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017bf30;
        }
    }
L_0017beb0:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_0017beb4:;
    {
        cpu->r[12] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_0017beb8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[7], 1, 1);
    }
L_0017bebc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017bf30;
        }
    }
L_0017bec0:;
    {
        cpu->r[6] = rd32(0x0017bec8u + + 0x8cu);
    }
L_0017bec4:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_0017bec8:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_0017becc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0017bed0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0017bed4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0017bed8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0017bedc:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0017bee0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x34u);
    }
L_0017bee4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000085u, 1, 1);
    }
L_0017bee8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017bf38;
        }
    }
L_0017beec:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_0017bef0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0017bef4:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0017bef8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0017befc:;
    {
        cpu->r[14] = 0x0017bf00u; fn_000fd288(cpu);
    }
L_0017bf00:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[4] + + 0x74u);
    }
L_0017bf04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0017bf08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017bf30;
        }
    }
L_0017bf0c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0017bf10:;
    {
        cpu->r[3] = 0x00004254u;
    }
L_0017bf14:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0017bf18:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0017bf1c:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0017bf20:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0017bf24:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0017bf28:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0017bf2c:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_0017bf30:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0017bf34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017bf38u)) return;
    }
L_0017bf38:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_0017bf3c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0017bf40:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0017bf44:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0017bf48:;
    {
        cpu->r[14] = 0x0017bf4cu; fn_000fd248(cpu);
    }
L_0017bf4c:;
    {
        goto L_0017bf00;
    }
}

/* _ZN11CCollideCar13UpdateSectionEP8CCarBasePK10RoadStructRK8Vector4sRib @ 0017bf58 (arm) */
void fn_0017bf58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017bf58:;
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
L_0017bf5c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_0017bf60:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_0017bf64:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017bf68:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0x50u);
    }
L_0017bf6c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0017bf70:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1b0u);
    }
L_0017bf74:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_0017bf78:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0017bf7c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0017bf80:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0017bf84:;
    {
        cpu->r[14] = 0x0017bf88u; fn_00173e58(cpu);
    }
L_0017bf88:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0017bf8c:;
    {
        cpu->r[11] = rd32(0x0017bf94u + + 0x328u);
    }
L_0017bf90:;
    {
        cpu->r[11] = add_flags(cpu, 0x0017bf98u, cpu->r[11], 0, 0);
    }
L_0017bf94:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_0017bf98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017bf9c:;
    {
        cpu->r[14] = 0x0017bfa0u; fn_00173e14(cpu);
    }
L_0017bfa0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_0017bfa4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017bfa8:;
    {
        cpu->r[14] = 0x0017bfacu; fn_00173e08(cpu);
    }
L_0017bfac:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0017bfb0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0017bfb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017bfb8:;
    {
        cpu->r[14] = 0x0017bfbcu; fn_00173e3c(cpu);
    }
L_0017bfbc:;
    {
        cpu->r[12] = rd32(cpu->r[9]);
    }
L_0017bfc0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x8u);
    }
L_0017bfc4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0017bfc8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0017bfcc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017bfd0:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x54u);
    }
L_0017bfd4:;
    {
        cpu->r[7] = rd32(cpu->r[2] + + 0x5cu);
    }
L_0017bfd8:;
    {
        cpu->r[10] = rd32(cpu->r[2] + + 0x14u);
    }
L_0017bfdc:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 0);
    }
L_0017bfe0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xcu);
    }
L_0017bfe4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[7], 1, 0);
    }
L_0017bfe8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 0);
    }
L_0017bfec:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 0);
    }
L_0017bff0:;
    {
        uint32_t v = cpu->r[8] * cpu->r[10]; cpu->r[8] = v;
    }
L_0017bff4:;
    {
        uint32_t v = cpu->r[8] - cpu->r[7] * cpu->r[6]; cpu->r[7] = v;
    }
L_0017bff8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0017bffc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017c20c;
        }
    }
L_0017c000:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x54u);
    }
L_0017c004:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x5cu);
    }
L_0017c008:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x14u);
    }
L_0017c00c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_0017c010:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0xcu);
    }
L_0017c014:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_0017c018:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_0017c01c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
    }
L_0017c020:;
    {
        uint32_t v = cpu->r[8] * cpu->r[7]; cpu->r[7] = v;
    }
L_0017c024:;
    {
        uint32_t v = cpu->r[7] - cpu->r[6] * cpu->r[2]; cpu->r[6] = v;
    }
L_0017c028:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0017c02c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017c058;
        }
    }
L_0017c030:;
    {
        cpu->r[14] = 0x0017c034u; fn_00173e58(cpu);
    }
L_0017c034:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0017c038:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0017c03c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017c040:;
    {
        cpu->r[14] = 0x0017c044u; fn_00173e58(cpu);
    }
L_0017c044:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0017c048:;
    {
        wr32(cpu->r[4] + + 0x1b0u, cpu->r[5]);
    }
L_0017c04c:;
    {
        wr32(cpu->r[4] + + 0x1b4u, cpu->r[3]);
    }
L_0017c050:;
    {
        wr32(cpu->r[4] + + 0x1b8u, cpu->r[0]);
    }
L_0017c054:;
    {
        goto L_0017bfa4;
    }
L_0017c058:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017c05c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0017c060:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017c1e4;
        }
    }
L_0017c064:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0017c068:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0017c06c:;
    {
        cpu->r[14] = rd32(cpu->r[9] + + 0x4u);
    }
L_0017c070:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0017c074:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_0017c078:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0017c07c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_0017c080:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_0017c084:;
    {
        cpu->r[14] = 0x0017c088u; fn_00180f98(cpu);
    }
L_0017c088:;
    {
        cpu->r[6] = rd32(0x0017c090u + + 0x230u);
    }
L_0017c08c:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_0017c090:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0017c094:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[6]);
    }
L_0017c098:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0017c09c:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0017c0a0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0017c0a4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0017c0a8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_0017c0ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_0017c0b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_0017c0b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0017c0b8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_0017c0bc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_0017c0c0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0017c0c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017c0f0;
        }
    }
L_0017c0c8:;
    {
        cpu->r[2] = 0x00003e84u;
    }
L_0017c0cc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_0017c0d0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0017c0d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_0017c0d8:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[2]) {
        case 0: goto L_0017c1d0;
        case 1: goto L_0017c260;
        case 2: goto L_0017c234;
        case 3: goto L_0017c15c;
        default: guest_unimplemented(cpu, 0x0017c0d8u); return; }
        }
    }
L_0017c0dc:;
    {
        goto L_0017c110;
    }
L_0017c0f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017c0f4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017c110;
        }
    }
L_0017c0f8:;
    {
        cpu->r[2] = 0x00003e88u;
    }
L_0017c0fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0017c100:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_0017c104:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0017c108:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0017c10c:;
    {
        wr8(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_0017c110:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0017c114:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0017c118:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017c154;
        }
    }
L_0017c11c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0017c120:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0017c124:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_0017c128:;
    {
        wr32(cpu->r[2], cpu->r[7]);
    }
L_0017c12c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0017c130:;
    {
        cpu->r[14] = 0x0017c134u; fn_001805dc(cpu);
    }
L_0017c134:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0017c138:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0017c13c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0017c140:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_0017c144:;
    {
        cpu->r[14] = 0x0017c148u; fn_00180634(cpu);
    }
L_0017c148:;
    {
        wr32(cpu->r[4] + + 0x1b0u, cpu->r[7]);
    }
L_0017c14c:;
    {
        wr32(cpu->r[4] + + 0x1b8u, cpu->r[5]);
    }
L_0017c150:;
    {
        wr32(cpu->r[4] + + 0x1b4u, cpu->r[0]);
    }
L_0017c154:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_0017c158:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017c15cu)) return;
    }
L_0017c15c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017c160:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017c164:;
    {
        cpu->r[14] = 0x0017c16cu;
    }
L_0017c168:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017c16cu)) return;
    }
L_0017c16c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017c170:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017c2b0;
        }
    }
L_0017c174:;
    {
        cpu->r[6] = rd32(cpu->r[11] + cpu->r[6]);
    }
L_0017c178:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_0017c17c:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0017c180:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_0017c184:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017c188:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017c280;
        }
    }
L_0017c18c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017c190:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017c194:;
    {
        cpu->r[14] = 0x0017c19cu;
    }
L_0017c198:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017c19cu)) return;
    }
L_0017c19c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0017c1a0:;
    {
        cpu->r[2] = 0x000063f0u;
    }
L_0017c1a4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0017c1a8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x58cu);
    }
L_0017c1ac:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0017c1b0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0017c1b4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0017c1b8:;
    {
        cpu->r[1] = 0x00005f60u;
    }
L_0017c1bc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_0017c1c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017c1c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017c1d0;
        }
    }
L_0017c1c8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0017c1cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017c110;
        }
    }
L_0017c1d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0017c1d4:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_0017c1d8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0017c1dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017c11c;
        }
    }
L_0017c1e0:;
    {
        goto L_0017c154;
    }
L_0017c1e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0017c1e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0017c1ec:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_0017c1f0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017c1f4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017c1f8:;
    {
        wr32(cpu->r[4] + + 0x1b4u, cpu->r[3]);
    }
L_0017c1fc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017c200:;
    {
        wr32(cpu->r[4] + + 0x1b0u, cpu->r[2]);
    }
L_0017c204:;
    {
        wr32(cpu->r[4] + + 0x1b8u, cpu->r[3]);
    }
L_0017c208:;
    {
        goto L_0017c154;
    }
L_0017c20c:;
    {
        cpu->r[14] = 0x0017c210u; fn_00173e14(cpu);
    }
L_0017c210:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0017c214:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0017c218:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0017c21c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017c220:;
    {
        cpu->r[14] = 0x0017c224u; fn_00173e14(cpu);
    }
L_0017c224:;
    {
        wr32(cpu->r[4] + + 0x1b0u, cpu->r[6]);
    }
L_0017c228:;
    {
        wr32(cpu->r[4] + + 0x1b8u, cpu->r[5]);
    }
L_0017c22c:;
    {
        wr32(cpu->r[4] + + 0x1b4u, cpu->r[0]);
    }
L_0017c230:;
    {
        goto L_0017bfa4;
    }
L_0017c234:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x5u);
    }
L_0017c238:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0017c23c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017c110;
        }
    }
L_0017c240:;
    {
        cpu->r[2] = 0x00003e88u;
    }
L_0017c244:;
    {
        cpu->r[1] = 0x00001684u;
    }
L_0017c248:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_0017c24c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0017c250:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0017c254:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0017c258:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0017c110;
        }
    }
L_0017c25c:;
    {
        goto L_0017c1d0;
    }
L_0017c260:;
    {
        cpu->r[2] = 0x00003e88u;
    }
L_0017c264:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0017c268:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_0017c26c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0017c270:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x4u);
    }
L_0017c274:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017c278:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017c110;
        }
    }
L_0017c27c:;
    {
        goto L_0017c1d0;
    }
L_0017c280:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017c284:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017c288:;
    {
        cpu->r[14] = 0x0017c290u;
    }
L_0017c28c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017c290u)) return;
    }
L_0017c290:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0017c294:;
    {
        cpu->r[2] = 0x000063f0u;
    }
L_0017c298:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0017c29c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x58cu);
    }
L_0017c2a0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0017c2a4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0017c2a8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0017c2ac:;
    {
        goto L_0017c1b8;
    }
L_0017c2b0:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[6]);
    }
L_0017c2b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0017c2b8:;
    {
        goto L_0017c1b8;
    }
}

/* _ZN11CCollideCar16RecomputeSectionEP8CCarBasePK10RoadStructRK8Vector4sRib @ 0017c2c4 (arm) */
void fn_0017c2c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017c2c4:;
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
L_0017c2c8:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0017c2cc:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x24u);
    }
L_0017c2d0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0017c2d4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_0017c2d8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[5], 1, 1);
    }
L_0017c2dc:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_0017c2e0:;
    {
        wr32(cpu->r[3], cpu->r[5]);
    }
L_0017c2e4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0017c2e8:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0017c2ec:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0017c2f0:;
    {
        cpu->r[11] = rd8(cpu->r[13] + + 0x30u);
    }
L_0017c2f4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0017c2f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017c37c;
        }
    }
L_0017c2fc:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0017c304u + + 0xc8u);
    }
L_0017c300:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0017c304:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017c308:;
    {
        cpu->r[14] = 0x0017c30cu; fn_00180c78(cpu);
    }
L_0017c30c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0017c310:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0017c314:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0017c318:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017c31c:;
    {
        cpu->r[14] = 0x0017c320u; fn_00180bf0(cpu);
    }
L_0017c320:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x8u);
    }
L_0017c324:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x5cu);
    }
L_0017c328:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0017c32c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x54u);
    }
L_0017c330:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0017c334:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_0017c338:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0017c33c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0017c340:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_0017c344:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0017c348:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_0017c34c:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_0017c350:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0017c354:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_0017c358:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_0017c35c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_0017c360:;
    {
        vfp_sync_flags(cpu);
    }
L_0017c364:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[8]);
        }
    }
L_0017c368:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,16) = *vfp_s(cpu,15);
        }
    }
L_0017c36c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[10], 1, 1);
    }
L_0017c370:;
    {
        wr32(cpu->r[8], cpu->r[3]);
    }
L_0017c374:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017c300;
        }
    }
L_0017c378:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0017c37c:;
    {
        wr32(cpu->r[9] + + 0x1b0u, cpu->r[3]);
    }
L_0017c380:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0017c384:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_0017c388:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017c38c:;
    {
        cpu->r[14] = 0x0017c390u; fn_00180634(cpu);
    }
L_0017c390:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0017c394:;
    {
        wr32(cpu->r[9] + + 0x1b4u, cpu->r[0]);
    }
L_0017c398:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017c39c:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_0017c3a0:;
    {
        cpu->r[14] = 0x0017c3a4u; fn_001805dc(cpu);
    }
L_0017c3a4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[11]);
    }
L_0017c3a8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017c3ac:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0017c3b0:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0017c3b4:;
    {
        wr32(cpu->r[9] + + 0x1b8u, cpu->r[0]);
    }
L_0017c3b8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0017c3bc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0017c3c0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0017c3c4:;
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
L_0017c3c8:;
    {
        return fn_0017bf58(cpu);
    }
}

/* _ZN11CCollideCar19WillCollideWithWallER8CCarBaseRK11RoadSectionS4_i @ 0017c3d0 (arm) */
void fn_0017c3d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017c3d0:;
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
L_0017c3d4:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0017c3d8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x428u);
    }
L_0017c3dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017c3e0:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x430u);
    }
L_0017c3e4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0017c3e8:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x14u);
    }
L_0017c3ec:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0017c3f0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_0017c3f4:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0xcu);
    }
L_0017c3f8:;
    {
        uint32_t v = cpu->r[9] * cpu->r[3]; cpu->r[9] = v;
    }
L_0017c3fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_0017c400:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x14u);
    }
L_0017c404:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0017c408:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0xcu);
    }
L_0017c40c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017c410:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[8], 1, 0);
    }
L_0017c414:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_0017c418:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 0);
    }
L_0017c41c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0017c420:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0017c424:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[11], 1, 0);
    }
L_0017c428:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0017c42c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 0);
    }
L_0017c430:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_0017c434:;
    {
        cpu->r[14] = 0x0017c438u; fn_001857e0(cpu);
    }
L_0017c438:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0017c43c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017c440:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_0017c444:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_0017c448:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 0);
    }
L_0017c44c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[2] = v;
    }
L_0017c450:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0017c454:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017c458:;
    {
        uint32_t v = cpu->r[0] * cpu->r[9] + cpu->r[2]; cpu->r[0] = v;
    }
L_0017c45c:;
    {
        cpu->r[14] = 0x0017c460u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017c460:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0017c464:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017c468:;
    {
        cpu->r[14] = 0x0017c46cu; fn_001721fc(cpu);
    }
L_0017c46c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_0017c470:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017c474:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0017c478:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017c4e8;
        }
    }
L_0017c47c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x54u);
    }
L_0017c480:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017c484:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x5cu);
    }
L_0017c488:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x54u);
    }
L_0017c48c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x5cu);
    }
L_0017c490:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_0017c494:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0017c498:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_0017c49c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_0017c4a0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 0);
    }
L_0017c4a4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0017c4a8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_0017c4ac:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0017c4b0:;
    {
        cpu->r[14] = 0x0017c4b4u; fn_001857e0(cpu);
    }
L_0017c4b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_0017c4b8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[6]; cpu->r[6] = v;
    }
L_0017c4bc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0017c4c0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017c4c4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[5] + cpu->r[6]; cpu->r[0] = v;
    }
L_0017c4c8:;
    {
        cpu->r[14] = 0x0017c4ccu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017c4cc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0017c4d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017c4d4:;
    {
        cpu->r[14] = 0x0017c4d8u; fn_001721fc(cpu);
    }
L_0017c4d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_0017c4dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017c4e0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0017c4e4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0017c4e8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0017c4ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017c4f0u)) return;
    }
}

/* _ZN11CCollideCar28CollideCarWithStaticColliderER8CCarBaseR14CCollisionBodybb @ 0017c4f0 (arm) */
void fn_0017c4f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017c4f0:;
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
L_0017c4f4:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0017c4f8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x30u);
    }
L_0017c4fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000090u, 1, 0);
    }
L_0017c500:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0017c504:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_0017c508:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017c50c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017c510:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017c520;
        }
    }
L_0017c514:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0017c518:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_0017c51c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017c520u)) return;
    }
L_0017c520:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000214u, 0, 0);
    }
L_0017c524:;
    {
        cpu->r[14] = 0x0017c528u; fn_00177c90(cpu);
    }
L_0017c528:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0017c52c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x244u);
    }
L_0017c530:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0017c534:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_0017c538:;
    {
        cpu->r[14] = 0x0017c53cu; fn_0017a5b0(cpu);
    }
L_0017c53c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017c540:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017c514;
        }
    }
L_0017c544:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0017c548:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017c6b4;
        }
    }
L_0017c54c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_0017c550:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3ccu);
    }
L_0017c554:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0017c558:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_0017c55c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017c560:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_0017c564:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0017c568:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3c8u);
    }
L_0017c56c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_0017c570:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3d0u);
    }
L_0017c574:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[3]);
    }
L_0017c578:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_0017c57c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_0017c580:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[3]);
    }
L_0017c584:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[2]);
    }
L_0017c588:;
    {
        cpu->r[14] = 0x0017c58cu; fn_001721e4(cpu);
    }
L_0017c58c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017c590:;
    {
        cpu->r[14] = 0x0017c594u; fn_001721f0(cpu);
    }
L_0017c594:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0017c598:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0017c59c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_0017c5a0:;
    {
        cpu->r[2] = 0x00001000u;
    }
L_0017c5a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_0017c5a8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[6]);
    }
L_0017c5ac:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0017c5b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_0017c5b4:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[7]);
    }
L_0017c5b8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0017c5bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_0017c5c0:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[7]);
    }
L_0017c5c4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0017c5c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_0017c5cc:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[7]);
    }
L_0017c5d0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0017c5d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_0017c5d8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_0017c5dc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0017c5e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_0017c5e4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_0017c5e8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0017c5ec:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[7]);
    }
L_0017c5f0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[7]);
    }
L_0017c5f4:;
    {
        cpu->r[14] = 0x0017c5f8u; fn_0017ae80(cpu);
    }
L_0017c5f8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_0017c5fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017c514;
        }
    }
L_0017c600:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 1);
    }
L_0017c604:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017c6ac;
        }
    }
L_0017c608:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x64u);
    }
L_0017c60c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000003d4u, 0, 0);
    }
L_0017c610:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_0017c614:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000003c8u, 0, 0);
    }
L_0017c618:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_0017c61c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_0017c620:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[1], 0, 0);
    }
L_0017c624:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x68u);
    }
L_0017c628:;
    {
        wr32(cpu->r[4] + + 0x3d4u, cpu->r[1]);
    }
L_0017c62c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0017c630:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], cpu->r[0], 0, 0);
    }
L_0017c634:;
    {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[0]);
    }
L_0017c638:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_0017c63c:;
    {
        wr32(cpu->r[4] + + 0x3dcu, cpu->r[1]);
    }
L_0017c640:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x484u);
    }
L_0017c644:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x8cu);
    }
L_0017c648:;
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
L_0017c64c:;
    {
        uint32_t v = cpu->r[6] | cpu->r[12]; cpu->r[6] = v;
    }
L_0017c650:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x88u);
    }
L_0017c654:;
    {
        uint32_t v = cpu->r[6] | 0x00002000u; cpu->r[6] = v;
    }
L_0017c658:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0017c65c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x54u);
    }
L_0017c660:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x84u);
    }
L_0017c664:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[12], 2, 4u, &shc); cpu->r[6] = v;
    }
L_0017c668:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x7cu);
    }
L_0017c66c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x80u);
    }
L_0017c670:;
    {
        cpu->r[8] = sub_flags(cpu, 0x00000000u, cpu->r[8], 1, 0);
    }
L_0017c674:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0017c678:;
    {
        wr32(cpu->r[4] + + 0x484u, cpu->r[6]);
    }
L_0017c67c:;
    {
        wr32(cpu->r[4] + + 0x4b4u, cpu->r[5]);
    }
L_0017c680:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017c684:;
    {
        wr32(cpu->r[4] + + 0x4b0u, cpu->r[14]);
    }
L_0017c688:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0017c68c:;
    {
        wr8(cpu->r[4] + + 0x250u, cpu->r[7]);
    }
L_0017c690:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0017c694:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_0017c698:;
    {
        cpu->r[10] = sub_flags(cpu, 0x00000000u, cpu->r[10], 1, 0);
    }
L_0017c69c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_0017c6a0:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[8]);
    }
L_0017c6a4:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[10]);
    }
L_0017c6a8:;
    {
        cpu->r[14] = 0x0017c6acu; fn_00173bd0(cpu);
    }
L_0017c6ac:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0017c6b0:;
    {
        goto L_0017c518;
    }
L_0017c6b4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0xb4u);
    }
L_0017c6b8:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_0017c6bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0017c6c4u + + 0x74u);
    }
L_0017c6c0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0017c6c4:;
    {
        vfp_sync_flags(cpu);
    }
L_0017c6c8:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0017c54c;
        }
    }
L_0017c6cc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_0017c6d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3ccu);
    }
L_0017c6d4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x2cu);
    }
L_0017c6d8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0017c6dc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x4u);
    }
L_0017c6e0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x240u);
    }
L_0017c6e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x218u);
    }
L_0017c6e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0017c6ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_0017c6f0:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_0017c6f4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0017c6f8:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0017c6fc:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 0);
    }
L_0017c700:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = 0x00000001u;
        }
    }
L_0017c704:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[9] = (~0x00000000u);
        }
    }
L_0017c708:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0017c70c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_0017c710:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = (~0x00000000u);
        }
    }
L_0017c714:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[7], 1, 1);
    }
L_0017c718:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017c558;
        }
    }
L_0017c71c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0017c720:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_0017c724:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[7] = v;
    }
L_0017c728:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_0017c72c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_0017c730:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017c514;
        }
    }
L_0017c734:;
    {
        goto L_0017c558;
    }
}

/* _ZN11CCollideCar25JumpCarWithStaticColliderER4CCarR14CCollisionBody8Vector4s @ 0017c73c (arm) */
void fn_0017c73c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017c73c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0017c740:;
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
L_0017c744:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0017c748:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000094u, 1, 0);
    }
L_0017c74c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017c750:;
    {
        uint32_t v = cpu->r[5] & 0x00000008u; cpu->r[5] = v;
        set_nz(cpu, v);
    }
L_0017c754:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0017c758:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0017c75c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017c76c;
        }
    }
L_0017c760:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0017c764:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_0017c768:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017c76cu)) return;
    }
L_0017c76c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000214u, 0, 0);
    }
L_0017c770:;
    {
        cpu->r[14] = 0x0017c774u; fn_00177c90(cpu);
    }
L_0017c774:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0017c778:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x244u);
    }
L_0017c77c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0017c780:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x30u);
    }
L_0017c784:;
    {
        cpu->r[14] = 0x0017c788u; fn_0017a5b0(cpu);
    }
L_0017c788:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017c78c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017c760;
        }
    }
L_0017c790:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_0017c794:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0017c798:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3ccu);
    }
L_0017c79c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_0017c7a0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_0017c7a4:;
    {
        cpu->r[2] = 0x00001000u;
    }
L_0017c7a8:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x3d0u);
    }
L_0017c7ac:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0017c7b0:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_0017c7b4:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_0017c7b8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x3c8u);
    }
L_0017c7bc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[10], cpu->r[9], 1, 0);
    }
L_0017c7c0:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[14]);
    }
L_0017c7c4:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[12]);
    }
L_0017c7c8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[11], cpu->r[8], 1, 0);
    }
L_0017c7cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_0017c7d0:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[8]);
    }
L_0017c7d4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0017c7d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_0017c7dc:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[5]);
    }
L_0017c7e0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0017c7e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_0017c7e8:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[5]);
    }
L_0017c7ec:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0017c7f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_0017c7f4:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[5]);
    }
L_0017c7f8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0017c7fc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_0017c800:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0017c804:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0017c808:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_0017c80c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[5]);
    }
L_0017c810:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0017c814:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_0017c818:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_0017c81c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_0017c820:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[5]);
    }
L_0017c824:;
    {
        cpu->r[14] = 0x0017c828u; fn_0017ae80(cpu);
    }
L_0017c828:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017c82c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017c760;
        }
    }
L_0017c830:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0017c834:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0017c838:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[5]);
    }
L_0017c83c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[5]);
    }
L_0017c840:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[5]);
    }
L_0017c844:;
    {
        cpu->r[14] = 0x0017c848u; fn_00180008(cpu);
    }
L_0017c848:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_0017c84c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000400u, 0, 0);
    }
L_0017c850:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0017c854:;
    {
        add_flags(cpu, cpu->r[2], 0x00000400u, 0, 1);
    }
L_0017c858:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0017c874;
        }
    }
L_0017c85c:;
    {
        cpu->r[1] = 0x0000fbffu;
    }
L_0017c860:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000800u, 0, 0);
    }
L_0017c864:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xffffu << 16);
    }
L_0017c868:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0017c86c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 11u, &shc); cpu->r[2] = v;
    }
L_0017c870:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 11u, &shc), 0, 0);
    }
L_0017c874:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000400u, 1, 1);
    }
L_0017c878:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000400u, 1, 0);
        }
    }
L_0017c87c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000800u, 1, 0);
        }
    }
L_0017c880:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
        }
    }
L_0017c884:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[1], 3, 11u, &shc); cpu->r[1] = v;
        }
    }
L_0017c888:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 11u, &shc), 1, 0);
        }
    }
L_0017c88c:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0017c890:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_0017c894:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000200u, 1, 1);
    }
L_0017c898:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017c92c;
        }
    }
L_0017c89c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000420u, 0, 0);
    }
L_0017c8a0:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[3]);
    }
L_0017c8a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0017c8a8:;
    {
        cpu->r[14] = 0x0017c8acu; fn_0018572c(cpu);
    }
L_0017c8ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000040u, 1, 1);
    }
L_0017c8b0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = cpu->r[0];
        }
    }
L_0017c8b4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x00000040u;
        }
    }
L_0017c8b8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017c8bc:;
    {
        cpu->r[14] = 0x0017c8c0u; fn_00185554(cpu);
    }
L_0017c8c0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0017c8c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017c8c8:;
    {
        cpu->r[14] = 0x0017c8ccu; fn_00173920(cpu);
    }
L_0017c8cc:;
    {
        cpu->r[7] = rd32(cpu->r[7] + + 0x4u);
    }
L_0017c8d0:;
    {
        cpu->r[0] = 0x000016a0u;
    }
L_0017c8d4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0017c8d8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x1b8u);
    }
L_0017c8dc:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0017c8e0:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[7]);
    }
L_0017c8e4:;
    {
        cpu->r[0] = 0x000016a4u;
    }
L_0017c8e8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0017c8ec:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0017c8f0:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[12]);
    }
L_0017c8f4:;
    {
        cpu->r[12] = 0x000016a8u;
    }
L_0017c8f8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x1b4u);
    }
L_0017c8fc:;
    {
        uint32_t v = cpu->r[1] | 0x00000008u; cpu->r[1] = v;
    }
L_0017c900:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[6]);
    }
L_0017c904:;
    {
        cpu->r[12] = 0x00001758u;
    }
L_0017c908:;
    {
        cpu->r[6] = 0x00000012u;
    }
L_0017c90c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_0017c910:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[6]);
    }
L_0017c914:;
    {
        cpu->r[2] = 0x000016b4u;
    }
L_0017c918:;
    {
        cpu->r[12] = 0x000016acu;
    }
L_0017c91c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0017c920:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0017c924:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[5]);
    }
L_0017c928:;
    {
        goto L_0017c764;
    }
L_0017c92c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017c930:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0017c934:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0017c938:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017c93c:;
    {
        cpu->r[14] = 0x0017c940u; fn_0017c4f0(cpu);
    }
L_0017c940:;
    {
        goto L_0017c764;
    }
}

/* _ZN11CCollideCar11CollideCarsER8CCarBaseS1_j @ 0017c944 (arm) */
void fn_0017c944(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017c944:;
    {
        uint32_t v = cpu->r[2] & 0x00000003u; cpu->r[2] = v;
    }
L_0017c948:;
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
L_0017c94c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0017c950:;
    {
        cpu->r[5] = rd32(0x0017c958u + + 0x790u);
    }
L_0017c954:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_0017c958:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000010cu, 1, 0);
    }
L_0017c95c:;
    {
        cpu->r[5] = add_flags(cpu, 0x0017c964u, cpu->r[5], 0, 0);
    }
L_0017c960:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0017c964:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0017c968:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017c9a8;
        }
    }
L_0017c96c:;
    {
        cpu->r[14] = 0x0017c970u; fn_00177c90(cpu);
    }
L_0017c970:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00000214u, 0, 0);
    }
L_0017c974:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017c978:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00000214u, 0, 0);
    }
L_0017c97c:;
    {
        cpu->r[14] = 0x0017c980u; fn_00177c90(cpu);
    }
L_0017c980:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017c984:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x244u);
    }
L_0017c988:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0017c98c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x244u);
    }
L_0017c990:;
    {
        cpu->r[14] = 0x0017c994u; fn_0017a5b0(cpu);
    }
L_0017c994:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017c998:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017c9a8;
        }
    }
L_0017c99c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x1dcu);
    }
L_0017c9a0:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0017c9a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017c9b8;
        }
    }
L_0017c9a8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0017c9ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000010cu, 0, 0);
    }
L_0017c9b0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0017c9b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017c9b8u)) return;
    }
L_0017c9b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_0017c9bc:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0017c9c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017c9a8;
        }
    }
L_0017c9c4:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x3d8u);
    }
L_0017c9c8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017c9cc:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0x3ccu);
    }
L_0017c9d0:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0017c9d4:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x3dcu);
    }
L_0017c9d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000f4u, 0, 0);
    }
L_0017c9dc:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x3d4u);
    }
L_0017c9e0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[14], cpu->r[10], 1, 0);
    }
L_0017c9e4:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x3d0u);
    }
L_0017c9e8:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_0017c9ec:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3ccu);
    }
L_0017c9f0:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x3c8u);
    }
L_0017c9f4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[9], cpu->r[12], 1, 0);
    }
L_0017c9f8:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_0017c9fc:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_0017ca00:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_0017ca04:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[10]);
    }
L_0017ca08:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[14], 1, 0);
    }
L_0017ca0c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x3c8u);
    }
L_0017ca10:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_0017ca14:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x3d0u);
    }
L_0017ca18:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[12]);
    }
L_0017ca1c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[8], 1, 0);
    }
L_0017ca20:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 0);
    }
L_0017ca24:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x48u);
    }
L_0017ca28:;
    {
        wr32(cpu->r[13] + + 0xf0u, cpu->r[9]);
    }
L_0017ca2c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0017ca30:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0017ca34:;
    {
        wr32(cpu->r[13] + + 0xf4u, cpu->r[7]);
    }
L_0017ca38:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x000000d0u, 0, 0);
    }
L_0017ca3c:;
    {
        wr32(cpu->r[13] + + 0xf8u, cpu->r[8]);
    }
L_0017ca40:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x000000b8u, 0, 0);
    }
L_0017ca44:;
    {
        wr32(cpu->r[13] + + 0xe8u, cpu->r[14]);
    }
L_0017ca48:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x000000e8u, 0, 0);
    }
L_0017ca4c:;
    {
        wr32(cpu->r[13] + + 0xfcu, cpu->r[9]);
    }
L_0017ca50:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0017ca54:;
    {
        cpu->r[14] = 0x00000c00u;
    }
L_0017ca58:;
    {
        wr32(cpu->r[13] + + 0xecu, cpu->r[11]);
    }
L_0017ca5c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0017ca60:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x000000c4u, 0, 0);
    }
L_0017ca64:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_0017ca68:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_0017ca6c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x000000dcu, 0, 0);
    }
L_0017ca70:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_0017ca74:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_0017ca78:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000104u, 0, 0);
    }
L_0017ca7c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[8]);
    }
L_0017ca80:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_0017ca84:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000100u, 0, 0);
    }
L_0017ca88:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_0017ca8c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_0017ca90:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_0017ca94:;
    {
        cpu->r[14] = 0x0017ca98u; fn_0017ae80(cpu);
    }
L_0017ca98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017ca9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017c9a8;
        }
    }
L_0017caa0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xf8u);
    }
L_0017caa4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000acu, 0, 0);
    }
L_0017caa8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xecu);
    }
L_0017caac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xfcu);
    }
L_0017cab0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0017cab4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xf0u);
    }
L_0017cab8:;
    {
        wr32(cpu->r[13] + + 0xb0u, cpu->r[3]);
    }
L_0017cabc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0017cac0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe8u);
    }
L_0017cac4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xf4u);
    }
L_0017cac8:;
    {
        wr32(cpu->r[13] + + 0xb4u, cpu->r[2]);
    }
L_0017cacc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0017cad0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x100u);
    }
L_0017cad4:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[3]);
    }
L_0017cad8:;
    {
        cpu->r[14] = 0x0017cadcu; fn_0018572c(cpu);
    }
L_0017cadc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xf8u);
    }
L_0017cae0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xecu);
    }
L_0017cae4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xfcu);
    }
L_0017cae8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0017caec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xf0u);
    }
L_0017caf0:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[3]);
    }
L_0017caf4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0017caf8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe8u);
    }
L_0017cafc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xf4u);
    }
L_0017cb00:;
    {
        wr32(cpu->r[13] + + 0xa8u, cpu->r[2]);
    }
L_0017cb04:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0017cb08:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[3]);
    }
L_0017cb0c:;
    {
        wr32(cpu->r[6] + + 0x194u, cpu->r[0]);
    }
L_0017cb10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000a0u, 0, 0);
    }
L_0017cb14:;
    {
        cpu->r[14] = 0x0017cb18u; fn_0018572c(cpu);
    }
L_0017cb18:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x104u);
    }
L_0017cb1c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0017cb20:;
    {
        wr32(cpu->r[4] + + 0x194u, cpu->r[0]);
    }
L_0017cb24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017cb78;
        }
    }
L_0017cb28:;
    {
        { uint32_t v = cpu->r[10] & 0x00000001u; set_nz(cpu, v); }
    }
L_0017cb2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017cb78;
        }
    }
L_0017cb30:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x4u);
    }
L_0017cb34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017cb38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017cb78;
        }
    }
L_0017cb3c:;
    {
        cpu->r[1] = rd32(0x0017cb44u + + 0x5a8u);
    }
L_0017cb40:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0017cb44:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0017cb48:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0017cb4c:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_0017cb50:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_0017cb54:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_0017cb58:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0017cb5c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0017cb60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0017cb64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0017cb68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0017cb6c:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x4u);
    }
L_0017cb70:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 1);
    }
L_0017cb74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017d500;
        }
    }
L_0017cb78:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x100u);
    }
L_0017cb7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017cb80:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x484u);
    }
L_0017cb84:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017cb88:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[1], 2, 4u, &shc); cpu->r[12] = v;
    }
L_0017cb8c:;
    {
        uint32_t v = cpu->r[12] | cpu->r[2]; cpu->r[12] = v;
    }
L_0017cb90:;
    {
        wr32(cpu->r[6] + + 0x484u, cpu->r[12]);
    }
L_0017cb94:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x484u);
    }
L_0017cb98:;
    {
        uint32_t v = cpu->r[12] | cpu->r[1]; cpu->r[1] = v;
    }
L_0017cb9c:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[2], 2, 4u, &shc); cpu->r[2] = v;
    }
L_0017cba0:;
    {
        wr32(cpu->r[4] + + 0x484u, cpu->r[2]);
    }
L_0017cba4:;
    {
        cpu->r[14] = 0x0017cbacu;
    }
L_0017cba8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017cbacu)) return;
    }
L_0017cbac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017cbb0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00006667u;
        }
    }
L_0017cbb4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x6666u << 16);
        }
    }
L_0017cbb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017cc04;
        }
    }
L_0017cbbc:;
    {
        goto L_0017cc14;
    }
L_0017cbc0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000d0u, 0, 0);
    }
L_0017cbc4:;
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
L_0017cbc8:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 2, 3u, &shc), cpu->r[1], 1, 0);
    }
L_0017cbcc:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 2, 3u, &shc), cpu->r[2], 1, 0);
    }
L_0017cbd0:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 3u, &shc), cpu->r[3], 1, 0);
    }
L_0017cbd4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[14] = v;
    }
L_0017cbd8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[12] = v;
    }
L_0017cbdc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[10] * (int64_t)(int32_t)cpu->r[1]; cpu->r[11] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_0017cbe0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[10] * (int64_t)(int32_t)cpu->r[2]; cpu->r[0] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_0017cbe4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[0] = v;
    }
L_0017cbe8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[10] * (int64_t)(int32_t)cpu->r[3]; cpu->r[9] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0017cbec:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 1, 2u, &shc), cpu->r[14], 1, 0);
    }
L_0017cbf0:;
    {
        wr32(cpu->r[13] + + 0xd0u, cpu->r[1]);
    }
L_0017cbf4:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 2u, &shc), cpu->r[12], 1, 0);
    }
L_0017cbf8:;
    {
        wr32(cpu->r[13] + + 0xd4u, cpu->r[2]);
    }
L_0017cbfc:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 2u, &shc), cpu->r[0], 1, 0);
    }
L_0017cc00:;
    {
        wr32(cpu->r[13] + + 0xd8u, cpu->r[3]);
    }
L_0017cc04:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017cc08:;
    {
        cpu->r[14] = 0x0017cc0cu; fn_0018572c(cpu);
    }
L_0017cc0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000003cu, 1, 1);
    }
L_0017cc10:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017cbc0;
        }
    }
L_0017cc14:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x3d4u);
    }
L_0017cc18:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_0017cc1c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xd0u);
    }
L_0017cc20:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0x3d8u);
    }
L_0017cc24:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_0017cc28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_0017cc2c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xd4u);
    }
L_0017cc30:;
    {
        wr32(cpu->r[6] + + 0x3d4u, cpu->r[3]);
    }
L_0017cc34:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[14]);
    }
L_0017cc38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], cpu->r[2], 0, 0);
    }
L_0017cc3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_0017cc40:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0017cc44:;
    {
        wr32(cpu->r[6] + + 0x3d8u, cpu->r[2]);
    }
L_0017cc48:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xc8u);
    }
L_0017cc4c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[3], 0, 0);
    }
L_0017cc50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_0017cc54:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x3c8u);
    }
L_0017cc58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0017cc5c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_0017cc60:;
    {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[3]);
    }
L_0017cc64:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_0017cc68:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x3d8u);
    }
L_0017cc6c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x3ccu);
    }
L_0017cc70:;
    {
        wr32(cpu->r[4] + + 0x3d4u, cpu->r[14]);
    }
L_0017cc74:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x3d4u);
    }
L_0017cc78:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 0);
    }
L_0017cc7c:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x3dcu);
    }
L_0017cc80:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_0017cc84:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[11]);
    }
L_0017cc88:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_0017cc8c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_0017cc90:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_0017cc94:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xd8u);
    }
L_0017cc98:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2]; cpu->r[2] = v;
    }
L_0017cc9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_0017cca0:;
    {
        uint32_t v = cpu->r[7] * cpu->r[7]; cpu->r[12] = v;
    }
L_0017cca4:;
    {
        wr32(cpu->r[6] + + 0x3dcu, cpu->r[3]);
    }
L_0017cca8:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[0]);
    }
L_0017ccac:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[11]);
    }
L_0017ccb0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1] + cpu->r[2]; cpu->r[0] = v;
    }
L_0017ccb4:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_0017ccb8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xccu);
    }
L_0017ccbc:;
    {
        uint32_t v = cpu->r[10] * cpu->r[10] + cpu->r[12]; cpu->r[12] = v;
    }
L_0017ccc0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x3d0u);
    }
L_0017ccc4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[11], 0, 0);
    }
L_0017ccc8:;
    {
        wr32(cpu->r[4] + + 0x3dcu, cpu->r[2]);
    }
L_0017cccc:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x3dcu);
    }
L_0017ccd0:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_0017ccd4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0017ccd8:;
    {
        uint32_t v = cpu->r[9] * cpu->r[9] + cpu->r[12]; cpu->r[12] = v;
    }
L_0017ccdc:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[1]);
    }
L_0017cce0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3] + cpu->r[0]; cpu->r[0] = v;
    }
L_0017cce4:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x3c8u);
    }
L_0017cce8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0017ccec:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[12]);
    }
L_0017ccf0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 0);
    }
L_0017ccf4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3ccu);
    }
L_0017ccf8:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[0]);
    }
L_0017ccfc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_0017cd00:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x64u);
    }
L_0017cd04:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_0017cd08:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3d0u);
    }
L_0017cd0c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[11], cpu->r[0], 1, 0);
    }
L_0017cd10:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x3c8u);
    }
L_0017cd14:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_0017cd18:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[14], cpu->r[11], 1, 0);
    }
L_0017cd1c:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[11]);
    }
L_0017cd20:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x3ccu);
    }
L_0017cd24:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 0);
    }
L_0017cd28:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0017cd2c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[0]);
    }
L_0017cd30:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x68u);
    }
L_0017cd34:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 1);
    }
L_0017cd38:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3d0u);
    }
L_0017cd3c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 0);
    }
L_0017cd40:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[0]);
    }
L_0017cd44:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017cd6c;
        }
    }
L_0017cd48:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x58u);
    }
L_0017cd4c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x54u);
    }
L_0017cd50:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 0);
    }
L_0017cd54:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x50u);
    }
L_0017cd58:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_0017cd5c:;
    {
        wr32(cpu->r[6] + + 0x3d0u, cpu->r[9]);
    }
L_0017cd60:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[11], cpu->r[7], 1, 0);
    }
L_0017cd64:;
    {
        wr32(cpu->r[6] + + 0x3ccu, cpu->r[10]);
    }
L_0017cd68:;
    {
        wr32(cpu->r[6] + + 0x3c8u, cpu->r[7]);
    }
L_0017cd6c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0017cd70:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x48u);
    }
L_0017cd74:;
    {
        uint32_t v = cpu->r[12] * cpu->r[12]; cpu->r[7] = v;
    }
L_0017cd78:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0]; cpu->r[11] = v;
    }
L_0017cd7c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[9] + cpu->r[11]; cpu->r[10] = v;
    }
L_0017cd80:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0017cd84:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1] + cpu->r[7]; cpu->r[7] = v;
    }
L_0017cd88:;
    {
        uint32_t v = cpu->r[11] * cpu->r[11] + cpu->r[10]; cpu->r[10] = v;
    }
L_0017cd8c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3] + cpu->r[7]; cpu->r[7] = v;
    }
L_0017cd90:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[7], 1, 1);
    }
L_0017cd94:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017cdb4;
        }
    }
L_0017cd98:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_0017cd9c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_0017cda0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0017cda4:;
    {
        wr32(cpu->r[4] + + 0x3c8u, cpu->r[12]);
    }
L_0017cda8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[14], cpu->r[1], 1, 0);
    }
L_0017cdac:;
    {
        wr32(cpu->r[4] + + 0x3d0u, cpu->r[3]);
    }
L_0017cdb0:;
    {
        wr32(cpu->r[4] + + 0x3ccu, cpu->r[1]);
    }
L_0017cdb4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_0017cdb8:;
    {
        wr32(cpu->r[6] + + 0x490u, cpu->r[4]);
    }
L_0017cdbc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017cdc0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0017cdc4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0017cdc8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0017cdd0u + + 0x30cu);
    }
L_0017cdcc:;
    {
        wr32(cpu->r[4] + + 0x490u, cpu->r[6]);
    }
L_0017cdd0:;
    {
        cpu->r[14] = 0x0017cdd8u;
    }
L_0017cdd4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017cdd8u)) return;
    }
L_0017cdd8:;
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
L_0017cddc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_0017cde0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0017cde4:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0017cde8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017cdec:;
    {
        cpu->r[14] = 0x0017cdf4u;
    }
L_0017cdf0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017cdf4u)) return;
    }
L_0017cdf4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017cdf8:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0017cdfc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017ce00:;
    {
        cpu->r[14] = 0x0017ce08u;
    }
L_0017ce04:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017ce08u)) return;
    }
L_0017ce08:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0017ce0c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0017ce10:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017ce14:;
    {
        cpu->r[14] = 0x0017ce1cu;
    }
L_0017ce18:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017ce1cu)) return;
    }
L_0017ce1c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 0);
    }
L_0017ce20:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[9];
    }
L_0017ce24:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0017ce28:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017ce2c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0017ce30:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0017ce34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017ce38:;
    {
        vfp_vdiv(cpu, 17, 14, 15);
    }
L_0017ce3c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,16));
    }
L_0017ce40:;
    {
        vfp_sync_flags(cpu);
    }
L_0017ce44:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,17) = *vfp_s(cpu,16);
        }
    }
L_0017ce48:;
    {
        cpu->r[14] = 0x0017ce50u;
    }
L_0017ce4c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017ce50u)) return;
    }
L_0017ce50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017ce54:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017ce8c;
        }
    }
L_0017ce58:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017ce5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017ce60:;
    {
        cpu->r[14] = 0x0017ce68u;
    }
L_0017ce64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017ce68u)) return;
    }
L_0017ce68:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017ce6c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_0017ce70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017ce74:;
    {
        cpu->r[14] = 0x0017ce7cu;
    }
L_0017ce78:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017ce7cu)) return;
    }
L_0017ce7c:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_0017ce80:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0017ce84:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0017ce88:;
    {
        vfp_vdiv(cpu, 16, 16, 15);
    }
L_0017ce8c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0017ce94u + + 0x24cu);
    }
L_0017ce90:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0017ce98u + + 0x24cu);
    }
L_0017ce94:;
    {
        vfp_vmla(cpu, 15, 16, 14);
    }
L_0017ce98:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017ce9c:;
    {
        vfp_vmul(cpu, 15, 15, 17);
    }
L_0017cea0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0017cea4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0017cea8:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 1);
    }
L_0017ceac:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x0000000au;
        }
    }
L_0017ceb0:;
    {
        cpu->r[14] = 0x0017ceb4u; fn_00185554(cpu);
    }
L_0017ceb4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3b8u);
    }
L_0017ceb8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x94u);
    }
L_0017cebc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x98u);
    }
L_0017cec0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3bcu);
    }
L_0017cec4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1]; cpu->r[7] = v;
    }
L_0017cec8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3c0u);
    }
L_0017cecc:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3]; cpu->r[14] = v;
    }
L_0017ced0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x9cu);
    }
L_0017ced4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[12] + cpu->r[7]; cpu->r[12] = v;
    }
L_0017ced8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2] + cpu->r[14]; cpu->r[14] = v;
    }
L_0017cedc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[12]; cpu->r[0] = v;
    }
L_0017cee0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1] + cpu->r[14]; cpu->r[12] = v;
    }
L_0017cee4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_0017cee8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017cf04;
        }
    }
L_0017ceec:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x6au);
    }
L_0017cef0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017cef4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017d254;
        }
    }
L_0017cef8:;
    {
        wr32(cpu->r[4] + + 0x3c0u, cpu->r[1]);
    }
L_0017cefc:;
    {
        wr32(cpu->r[4] + + 0x3bcu, cpu->r[2]);
    }
L_0017cf00:;
    {
        wr32(cpu->r[4] + + 0x3b8u, cpu->r[3]);
    }
L_0017cf04:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017cf08:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017cf0c:;
    {
        cpu->r[14] = 0x0017cf10u; fn_00173ea0(cpu);
    }
L_0017cf10:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017cf14:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0017cf18:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017cf1c:;
    {
        cpu->r[14] = 0x0017cf20u; fn_00174298(cpu);
    }
L_0017cf20:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017cf24:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0017cf28:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017cf2c:;
    {
        cpu->r[14] = 0x0017cf30u; fn_001734ac(cpu);
    }
L_0017cf30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017cf34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017cf4c;
        }
    }
L_0017cf38:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0017cf3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017d0c0;
        }
    }
L_0017cf40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017cf44:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0017cf48:;
    {
        cpu->r[14] = 0x0017cf4cu; fn_001743e0(cpu);
    }
L_0017cf4c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0017cf50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017d0b0;
        }
    }
L_0017cf54:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0017cf58:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017cf5c:;
    {
        cpu->r[14] = 0x0017cf64u;
    }
L_0017cf60:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017cf64u)) return;
    }
L_0017cf64:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017cf68:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0017cf6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017cf70:;
    {
        cpu->r[14] = 0x0017cf78u;
    }
L_0017cf74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017cf78u)) return;
    }
L_0017cf78:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 0);
    }
L_0017cf7c:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0017cf80:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_0017cf84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_0017cf88:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017cfd0;
        }
    }
L_0017cf8c:;
    {
        cpu->r[1] = rd32(0x0017cf94u + + 0x158u);
    }
L_0017cf90:;
    {
        cpu->r[11] = 0x00001bc8u;
    }
L_0017cf94:;
    {
        cpu->r[9] = 0x00008c50u;
    }
L_0017cf98:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_0017cf9c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0017cfa0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0017cfa4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[11]);
    }
L_0017cfa8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_0017cfac:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_0017cfb0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_0017cfb4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_0017cfb8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0017cfbc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_0017cfc0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_0017cfc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017d444;
        }
    }
L_0017cfc8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_0017cfcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017d3e0;
        }
    }
L_0017cfd0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0017cfd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017d028;
        }
    }
L_0017cfd8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0017cfdc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017d0f4;
        }
    }
L_0017cfe0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x100u);
    }
L_0017cfe4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0017cfe8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017d028;
        }
    }
L_0017cfec:;
    {
        cpu->r[2] = rd32(0x0017cff4u + + 0xf8u);
    }
L_0017cff0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0017cff4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0017cff8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0017cffc:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0017d000:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0017d004:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0017d008:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0017d00c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0017d010:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0017d014:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0017d018:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0017d01c:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x4u);
    }
L_0017d020:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_0017d024:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017d2e0;
        }
    }
L_0017d028:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xecu);
    }
L_0017d02c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017d030:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xf8u);
    }
L_0017d034:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_0017d038:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xf0u);
    }
L_0017d03c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0017d040:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_0017d044:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xfcu);
    }
L_0017d048:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[3]);
    }
L_0017d04c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_0017d050:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xf4u);
    }
L_0017d054:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xe8u);
    }
L_0017d058:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[12]);
    }
L_0017d05c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 0);
    }
L_0017d060:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[3]);
    }
L_0017d064:;
    {
        cpu->r[14] = 0x0017d068u; fn_00173a20(cpu);
    }
L_0017d068:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_0017d06c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017d070:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0017d074:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_0017d078:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_0017d07c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x84u);
    }
L_0017d080:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_0017d084:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_0017d088:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[3]);
    }
L_0017d08c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x7cu);
    }
L_0017d090:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_0017d094:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[3]);
    }
L_0017d098:;
    {
        cpu->r[14] = 0x0017d09cu; fn_00173a20(cpu);
    }
L_0017d09c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017d0a0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0017d0a4:;
    {
        wr8(cpu->r[6] + + 0x250u, cpu->r[3]);
    }
L_0017d0a8:;
    {
        wr8(cpu->r[4] + + 0x250u, cpu->r[3]);
    }
L_0017d0ac:;
    {
        goto L_0017c9ac;
    }
L_0017d0b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017d0b4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0017d0b8:;
    {
        cpu->r[14] = 0x0017d0bcu; fn_00173fe8(cpu);
    }
L_0017d0bc:;
    {
        goto L_0017cf54;
    }
L_0017d0c0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017d0c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017d0c8:;
    {
        cpu->r[14] = 0x0017d0d0u;
    }
L_0017d0cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d0d0u)) return;
    }
L_0017d0d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017d0d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017cf40;
        }
    }
L_0017d0d8:;
    {
        goto L_0017cf4c;
    }
L_0017d0f4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017d0f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017d0fc:;
    {
        cpu->r[14] = 0x0017d104u;
    }
L_0017d100:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d104u)) return;
    }
L_0017d104:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017d108:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017d118;
        }
    }
L_0017d10c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x39cu);
    }
L_0017d110:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0017d114:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017d494;
        }
    }
L_0017d118:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0017d11c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017cfe0;
        }
    }
L_0017d120:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x104u);
    }
L_0017d124:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0017d128:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017cfe0;
        }
    }
L_0017d12c:;
    {
        cpu->r[2] = rd32(0x0017d134u + - 0x48u);
    }
L_0017d130:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0017d134:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0017d138:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0017d13c:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0017d140:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0017d144:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0017d148:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0017d14c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0017d150:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0017d154:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0017d158:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0017d15c:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4u);
    }
L_0017d160:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_0017d164:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017cfe0;
        }
    }
L_0017d168:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0017d16c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017d170:;
    {
        cpu->r[14] = 0x0017d178u;
    }
L_0017d174:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d178u)) return;
    }
L_0017d178:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000000fu, 1, 1);
    }
L_0017d17c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017d180:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0017d184:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 15) = *(float*)G(0x0017d18cu + - 0x9cu);
        }
    }
L_0017d188:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[6] + + 0x39cu, cpu->r[3]);
        }
    }
L_0017d18c:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[6] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_0017d190:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0017d194:;
    {
        cpu->r[14] = 0x0017d19cu;
    }
L_0017d198:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d19cu)) return;
    }
L_0017d19c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000005f0u, 0, 0);
    }
L_0017d1a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0017d1a4:;
    {
        cpu->r[14] = 0x0017d1a8u; fn_0018572c(cpu);
    }
L_0017d1a8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017d1ac:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x340u);
    }
L_0017d1b0:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0017d1b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017d1b8:;
    {
        cpu->r[14] = 0x0017d1c0u;
    }
L_0017d1bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d1c0u)) return;
    }
L_0017d1c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017d1c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017d298;
        }
    }
L_0017d1c8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0017d1cc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017d1d0:;
    {
        cpu->r[14] = 0x0017d1d8u;
    }
L_0017d1d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d1d8u)) return;
    }
L_0017d1d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000005f0u, 0, 0);
    }
L_0017d1dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0017d1e0:;
    {
        cpu->r[14] = 0x0017d1e4u; fn_0018572c(cpu);
    }
L_0017d1e4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x100u);
    }
L_0017d1e8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0017d1ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017d2b8;
        }
    }
L_0017d1f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0017d1f4:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_0017d1f8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_0017d1fc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[2] = v;
    }
L_0017d200:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[11] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0017d204:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0017d208:;
    {
        cpu->r[9] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[2], 1, 0);
    }
L_0017d20c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017d210:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017d214:;
    {
        cpu->r[14] = 0x0017d21cu;
    }
L_0017d218:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d21cu)) return;
    }
L_0017d21c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017d220:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017cfe0;
        }
    }
L_0017d224:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0017d228:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017d22c:;
    {
        cpu->r[14] = 0x0017d234u;
    }
L_0017d230:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d234u)) return;
    }
L_0017d234:;
    {
        cpu->r[14] = 0x0017d238u; fn_0015ec54(cpu);
    }
L_0017d238:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017d23c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017cfe0;
        }
    }
L_0017d240:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017d244:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0017d248:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0017d24c:;
    {
        cpu->r[14] = 0x0017d250u; fn_0017373c(cpu);
    }
L_0017d250:;
    {
        goto L_0017cfe0;
    }
L_0017d254:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017d258:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017d25c:;
    {
        cpu->r[14] = 0x0017d264u;
    }
L_0017d260:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d264u)) return;
    }
L_0017d264:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017d268:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017cf04;
        }
    }
L_0017d26c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0017d270:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017d274:;
    {
        cpu->r[14] = 0x0017d27cu;
    }
L_0017d278:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d27cu)) return;
    }
L_0017d27c:;
    {
        cpu->r[14] = 0x0017d280u; fn_0015ec54(cpu);
    }
L_0017d280:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017d284:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017cf04;
        }
    }
L_0017d288:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x94u);
    }
L_0017d28c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x98u);
    }
L_0017d290:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x9cu);
    }
L_0017d294:;
    {
        goto L_0017cef8;
    }
L_0017d298:;
    {
        cpu->r[2] = 0x0000005au;
    }
L_0017d29c:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_0017d2a0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_0017d2a4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[9]; cpu->r[2] = v;
    }
L_0017d2a8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[9] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0017d2ac:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0017d2b0:;
    {
        cpu->r[9] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[2], 1, 0);
    }
L_0017d2b4:;
    {
        goto L_0017d20c;
    }
L_0017d2b8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0017d2bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017d2c0:;
    {
        cpu->r[14] = 0x0017d2c8u;
    }
L_0017d2c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d2c8u)) return;
    }
L_0017d2c8:;
    {
        cpu->r[3] = 0x00000046u;
    }
L_0017d2cc:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_0017d2d0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_0017d2d4:;
    {
        cpu->r[14] = 0x0017d2d8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017d2d8:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0017d2dc:;
    {
        goto L_0017d20c;
    }
L_0017d2e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0017d2e8u + - 0x1f8u);
    }
L_0017d2e4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017d2e8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017d2ec:;
    {
        wr32(cpu->r[4] + + 0x39cu, cpu->r[3]);
    }
L_0017d2f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017d2f4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017d2f8:;
    {
        cpu->r[14] = 0x0017d300u;
    }
L_0017d2fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d300u)) return;
    }
L_0017d300:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000005f0u, 0, 0);
    }
L_0017d304:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0017d308:;
    {
        cpu->r[14] = 0x0017d30cu; fn_0018572c(cpu);
    }
L_0017d30c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0017d310:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x340u);
    }
L_0017d314:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0017d318:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017d31c:;
    {
        cpu->r[14] = 0x0017d324u;
    }
L_0017d320:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d324u)) return;
    }
L_0017d324:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017d328:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017d5c4;
        }
    }
L_0017d32c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017d330:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017d334:;
    {
        cpu->r[14] = 0x0017d33cu;
    }
L_0017d338:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d33cu)) return;
    }
L_0017d33c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000005f0u, 0, 0);
    }
L_0017d340:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0017d344:;
    {
        cpu->r[14] = 0x0017d348u; fn_0018572c(cpu);
    }
L_0017d348:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x104u);
    }
L_0017d34c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0017d350:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017d3b8;
        }
    }
L_0017d354:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0017d358:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_0017d35c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_0017d360:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[2] = v;
    }
L_0017d364:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[14] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0017d368:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0017d36c:;
    {
        cpu->r[10] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[2], 1, 0);
    }
L_0017d370:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0017d374:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017d378:;
    {
        cpu->r[14] = 0x0017d380u;
    }
L_0017d37c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d380u)) return;
    }
L_0017d380:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017d384:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017d028;
        }
    }
L_0017d388:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0017d38c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0017d390:;
    {
        cpu->r[14] = 0x0017d398u;
    }
L_0017d394:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d398u)) return;
    }
L_0017d398:;
    {
        cpu->r[14] = 0x0017d39cu; fn_0015ec54(cpu);
    }
L_0017d39c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017d3a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017d028;
        }
    }
L_0017d3a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0017d3a8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0017d3ac:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0017d3b0:;
    {
        cpu->r[14] = 0x0017d3b4u; fn_0017373c(cpu);
    }
L_0017d3b4:;
    {
        goto L_0017d028;
    }
L_0017d3b8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017d3bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017d3c0:;
    {
        cpu->r[14] = 0x0017d3c8u;
    }
L_0017d3c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d3c8u)) return;
    }
L_0017d3c8:;
    {
        cpu->r[3] = 0x00000046u;
    }
L_0017d3cc:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_0017d3d0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_0017d3d4:;
    {
        cpu->r[14] = 0x0017d3d8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017d3d8:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0017d3dc:;
    {
        goto L_0017d370;
    }
L_0017d3e0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017d3e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017d3e8:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_0017d3ec:;
    {
        cpu->r[9] = 0x000016b8u;
    }
L_0017d3f0:;
    {
        cpu->r[14] = 0x0017d3f8u;
    }
L_0017d3f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d3f8u)) return;
    }
L_0017d3f8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_0017d3fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017d400:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017cfd0;
        }
    }
L_0017d404:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017d408:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017d40c:;
    {
        cpu->r[14] = 0x0017d414u;
    }
L_0017d410:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d414u)) return;
    }
L_0017d414:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0017d418:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_0017d41c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0017d420:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0017d424:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_0017d428:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0017d42c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0017d430:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017d434:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0017d438:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_0017d43c:;
    {
        wr32(cpu->r[0] + cpu->r[9], cpu->r[3]);
    }
L_0017d440:;
    {
        goto L_0017cfd0;
    }
L_0017d444:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0017d448:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017d44c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_0017d450:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_0017d454:;
    {
        cpu->r[14] = 0x0017d45cu;
    }
L_0017d458:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d45cu)) return;
    }
L_0017d45c:;
    {
        cpu->r[12] = 0x000016b8u;
    }
L_0017d460:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0017d464:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_0017d468:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_0017d46c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0017d470:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017d55c;
        }
    }
L_0017d474:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0017d478:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_0017d47c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_0017d480:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_0017d484:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_0017d488:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0017d48c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x7cu);
    }
L_0017d490:;
    {
        goto L_0017cfc8;
    }
L_0017d494:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0017d49cu + - 0x3acu);
    }
L_0017d498:;
    {
        wr32(cpu->r[4] + + 0x39cu, cpu->r[10]);
    }
L_0017d49c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017d4a0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017d4a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017d4a8:;
    {
        cpu->r[14] = 0x0017d4b0u;
    }
L_0017d4ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d4b0u)) return;
    }
L_0017d4b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017d4b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017d120;
        }
    }
L_0017d4b8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017d4bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017d4c0:;
    {
        cpu->r[14] = 0x0017d4c8u;
    }
L_0017d4c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d4c8u)) return;
    }
L_0017d4c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000005f0u, 0, 0);
    }
L_0017d4cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0017d4d0:;
    {
        cpu->r[14] = 0x0017d4d4u; fn_0018572c(cpu);
    }
L_0017d4d4:;
    {
        cpu->r[12] = 0x0000005au;
    }
L_0017d4d8:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_0017d4dc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x340u);
    }
L_0017d4e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_0017d4e4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[12] = v;
    }
L_0017d4e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017d4ec:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[12]; cpu->r[1] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0017d4f0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[12] = v;
    }
L_0017d4f4:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[12], 1, 0);
    }
L_0017d4f8:;
    {
        cpu->r[14] = 0x0017d4fcu; fn_0017373c(cpu);
    }
L_0017d4fc:;
    {
        goto L_0017d120;
    }
L_0017d500:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0017d504:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0017d508:;
    {
        cpu->r[14] = 0x0017d510u;
    }
L_0017d50c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d510u)) return;
    }
L_0017d510:;
    {
        cpu->r[14] = 0x0017d514u; fn_0015ec54(cpu);
    }
L_0017d514:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017d518:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x104u);
        }
    }
L_0017d51c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017cb78;
        }
    }
L_0017d520:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x104u);
    }
L_0017d524:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0017d528:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x100u);
    }
L_0017d52c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0017d530:;
    {
        cpu->r[12] = rd32(cpu->r[10] + + 0x484u);
    }
L_0017d534:;
    {
        wr8(cpu->r[10] + + 0x250u, cpu->r[1]);
    }
L_0017d538:;
    {
        uint32_t v = cpu->r[12] | cpu->r[3]; cpu->r[12] = v;
    }
L_0017d53c:;
    {
        wr8(cpu->r[4] + + 0x250u, cpu->r[1]);
    }
L_0017d540:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[2], 2, 4u, &shc); cpu->r[1] = v;
    }
L_0017d544:;
    {
        wr32(cpu->r[10] + + 0x484u, cpu->r[1]);
    }
L_0017d548:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x484u);
    }
L_0017d54c:;
    {
        uint32_t v = cpu->r[1] | cpu->r[2]; cpu->r[2] = v;
    }
L_0017d550:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 4u, &shc); cpu->r[3] = v;
    }
L_0017d554:;
    {
        wr32(cpu->r[4] + + 0x484u, cpu->r[3]);
    }
L_0017d558:;
    {
        goto L_0017c9ac;
    }
L_0017d55c:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0017d560:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017d564:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_0017d568:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_0017d56c:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[12]);
    }
L_0017d570:;
    {
        cpu->r[14] = 0x0017d578u;
    }
L_0017d574:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d578u)) return;
    }
L_0017d578:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_0017d57c:;
    {
        cpu->r[14] = 0x00000003u;
    }
L_0017d580:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_0017d584:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0017d588:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0017d58c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x418u);
    }
L_0017d590:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[11]);
    }
L_0017d594:;
    {
        uint32_t v = cpu->r[14] * cpu->r[3]; cpu->r[3] = v;
    }
L_0017d598:;
    {
        cpu->r[14] = rd32(cpu->r[2] + cpu->r[9]);
    }
L_0017d59c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017d5a0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_0017d5a4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[9];
        }
    }
L_0017d5a8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_0017d5ac:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[3]);
    }
L_0017d5b0:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x8u);
    }
L_0017d5b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0017d5b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0017d5bc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x7cu);
    }
L_0017d5c0:;
    {
        goto L_0017cfc8;
    }
L_0017d5c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000005au, 0, 0);
    }
L_0017d5c8:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_0017d5cc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[10]; cpu->r[0] = v;
    }
L_0017d5d0:;
    {
        cpu->r[14] = 0x0017d5d4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017d5d4:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0017d5d8:;
    {
        goto L_0017d370;
    }
}

/* _ZN14CCollisionBody6SetBoxERK8Vector4sS2_S2_ii @ 0017d5dc (arm) */
void fn_0017d5dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017d5dc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0017d5e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017d5e4:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0017d5e8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017d5ec:;
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
L_0017d5f0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_0017d5f4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_0017d5f8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000008u, 1, 0);
    }
L_0017d5fc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0017d600:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0017d604:;
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
L_0017d608:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0017d60c:;
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
L_0017d610:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0017d614:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017d618:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0017d61c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
    }
L_0017d620:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = cpu->r[2];
        }
    }
L_0017d624:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[12] * cpu->r[12]; cpu->r[2] = v;
        }
    }
L_0017d628:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017d62c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0017d630:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[12]);
    }
L_0017d634:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[3] * cpu->r[3]; cpu->r[0] = v;
        }
    }
L_0017d638:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_0017d63c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_0017d640:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_0017d644:;
    {
        cpu->r[14] = 0x0017d648u; fn_0017fa74(cpu);
    }
L_0017d648:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_0017d64c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d650u)) return;
    }
}

/* _ZN11CCollideCar24CollideSphereWithBordersER8Vector4siRK11RoadSectionS4_R8Vector2s @ 0017d650 (arm) */
void fn_0017d650(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017d650:;
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
L_0017d654:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0017d658:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_0017d65c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0017d660:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0017d664:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x14u);
    }
L_0017d668:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x14u);
    }
L_0017d66c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0017d670:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0xcu);
    }
L_0017d674:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0017d678:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x8u);
    }
L_0017d67c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 0);
    }
L_0017d680:;
    {
        cpu->r[9] = rd32(cpu->r[5]);
    }
L_0017d684:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_0017d688:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_0017d68c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017d690:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 0);
    }
L_0017d694:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_0017d698:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_0017d69c:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_0017d6a0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_0017d6a4:;
    {
        cpu->r[14] = 0x0017d6a8u; fn_001857e0(cpu);
    }
L_0017d6a8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017d6ac:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0017d6b0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017d6b4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0017d6b8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0017d6bc:;
    {
        uint32_t v = cpu->r[8] * cpu->r[9]; cpu->r[0] = v;
    }
L_0017d6c0:;
    {
        uint32_t v = cpu->r[10] * cpu->r[3] + cpu->r[0]; cpu->r[0] = v;
    }
L_0017d6c4:;
    {
        cpu->r[14] = 0x0017d6c8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017d6c8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017d6cc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_0017d6d0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0017d6d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017d808;
        }
    }
L_0017d6d8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0017d6dc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0017d6e0:;
    {
        uint32_t v = cpu->r[8] * cpu->r[9]; cpu->r[0] = v;
    }
L_0017d6e4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0017d6e8:;
    {
        cpu->r[14] = 0x0017d6ecu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017d6ec:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0017d6f0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0017d6f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0017d6f8:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0017d6fc:;
    {
        uint32_t v = cpu->r[10] * cpu->r[9]; cpu->r[0] = v;
    }
L_0017d700:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0017d704:;
    {
        cpu->r[14] = 0x0017d708u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017d708:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0x8u);
    }
L_0017d70c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0017d710:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_0017d714:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 12u, &shc); cpu->r[0] = v;
    }
L_0017d718:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[9]);
    }
L_0017d71c:;
    {
        cpu->r[14] = 0x0017d720u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017d720:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_0017d724:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0017d728:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[0]);
    }
L_0017d72c:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 12u, &shc); cpu->r[0] = v;
    }
L_0017d730:;
    {
        cpu->r[14] = 0x0017d734u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017d734:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_0017d738:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_0017d73c:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x54u);
    }
L_0017d740:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0017d744:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x5cu);
    }
L_0017d748:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x54u);
    }
L_0017d74c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5cu);
    }
L_0017d750:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 0);
    }
L_0017d754:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 0);
    }
L_0017d758:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0017d75c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_0017d760:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0017d764:;
    {
        cpu->r[14] = 0x0017d768u; fn_001857e0(cpu);
    }
L_0017d768:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017d76c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017d770:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_0017d774:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017d778:;
    {
        uint32_t v = cpu->r[6] * cpu->r[7]; cpu->r[7] = v;
    }
L_0017d77c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0017d780:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017d784:;
    {
        uint32_t v = cpu->r[10] * cpu->r[9] + cpu->r[7]; cpu->r[0] = v;
    }
L_0017d788:;
    {
        cpu->r[14] = 0x0017d78cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017d78c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017d790:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0017d794:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0017d798:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017d7fc;
        }
    }
L_0017d79c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017d7a0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0017d7a4:;
    {
        uint32_t v = cpu->r[6] * cpu->r[7]; cpu->r[0] = v;
    }
L_0017d7a8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0017d7ac:;
    {
        cpu->r[14] = 0x0017d7b0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017d7b0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0017d7b4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017d7b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0017d7bc:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0017d7c0:;
    {
        uint32_t v = cpu->r[10] * cpu->r[7]; cpu->r[0] = v;
    }
L_0017d7c4:;
    {
        cpu->r[14] = 0x0017d7c8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017d7c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_0017d7cc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017d7d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0017d7d4:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 12u, &shc); cpu->r[0] = v;
    }
L_0017d7d8:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_0017d7dc:;
    {
        cpu->r[14] = 0x0017d7e0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017d7e0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_0017d7e4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017d7e8:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_0017d7ec:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 12u, &shc); cpu->r[0] = v;
    }
L_0017d7f0:;
    {
        cpu->r[14] = 0x0017d7f4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017d7f4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_0017d7f8:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_0017d7fc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0017d800:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0017d804:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d808u)) return;
    }
L_0017d808:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0017d80c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0017d810:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0x8u);
    }
L_0017d814:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0017d818:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0017d81c:;
    {
        goto L_0017d73c;
    }
}

/* _ZN11CCollideCar19CollideCarWithPlaneEP8CCarBaseR8Vector2sS3_Ribb @ 0017d820 (arm) */
void fn_0017d820(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017d820:;
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
L_0017d824:;
    {
        cpu->r[13] -= 32u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
    }
L_0017d828:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0017d82c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000b4u, 1, 0);
    }
L_0017d830:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0017d834:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_0017d838:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_0017d83c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4u);
    }
L_0017d840:;
    {
        cpu->r[1] = rd8(cpu->r[13] + + 0xf8u);
    }
L_0017d844:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_0017d848:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_0017d84c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0017d850:;
    {
        cpu->r[0] = rd8(cpu->r[13] + + 0xfcu);
    }
L_0017d854:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_0017d858:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[12]);
    }
L_0017d85c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0017d860:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0017d864:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
        }
    }
L_0017d868:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0017d86c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000a8u, 0, 0);
    }
L_0017d870:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0017d874:;
    {
        wr32(cpu->r[13] + + 0xa8u, cpu->r[3]);
    }
L_0017d878:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
        }
    }
L_0017d87c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
        }
    }
L_0017d880:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0xacu, cpu->r[3]);
        }
    }
L_0017d884:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0xa8u, cpu->r[3]);
        }
    }
L_0017d888:;
    {
        cpu->r[14] = 0x0017d88cu; fn_001857e0(cpu);
    }
L_0017d88c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x3d4u);
    }
L_0017d890:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0017d894:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0017d898:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x3dcu);
    }
L_0017d89c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0017d8a0:;
    {
        cpu->r[6] = rd32(0x0017d8a8u + + 0x520u);
    }
L_0017d8a4:;
    {
        cpu->r[6] = add_flags(cpu, 0x0017d8acu, cpu->r[6], 0, 0);
    }
L_0017d8a8:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[0]);
    }
L_0017d8ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000009cu, 0, 0);
    }
L_0017d8b0:;
    {
        cpu->r[14] = 0x0017d8b8u;
    }
L_0017d8b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d8b8u)) return;
    }
L_0017d8b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_0017d8bc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0017d8c0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0017d8c4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x9cu);
    }
L_0017d8c8:;
    {
        cpu->r[14] = 0x0017d8d0u;
    }
L_0017d8cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d8d0u)) return;
    }
L_0017d8d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000084u, 0, 0);
    }
L_0017d8d4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0017d8d8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0017d8dc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x98u);
    }
L_0017d8e0:;
    {
        cpu->r[14] = 0x0017d8e8u;
    }
L_0017d8e4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d8e8u)) return;
    }
L_0017d8e8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x84u);
    }
L_0017d8ec:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0017d8f0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0017d8f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000078u, 0, 0);
    }
L_0017d8f8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[9]);
    }
L_0017d8fc:;
    {
        cpu->r[14] = 0x0017d904u;
    }
L_0017d900:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017d904u)) return;
    }
L_0017d904:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x80u);
    }
L_0017d908:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0017d90c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_0017d910:;
    {
        cpu->r[14] = 0x0017d914u; fn_001721fc(cpu);
    }
L_0017d914:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0017d918:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0017d91c:;
    {
        cpu->r[14] = 0x0017d920u; fn_001721f0(cpu);
    }
L_0017d920:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0017d924:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0017d928:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0017d92c:;
    {
        cpu->r[14] = 0x0017d930u; fn_001721e4(cpu);
    }
L_0017d930:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x5u);
    }
L_0017d934:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0017d938:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0017d93c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0017d940:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017d944:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017d958;
        }
    }
L_0017d948:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0017d94c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0017d950:;
    {
        { uint32_t v = cpu->r[2] & 0x00000010u; set_nz(cpu, v); }
    }
L_0017d954:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017dc38;
        }
    }
L_0017d958:;
    {
        cpu->r[2] = 0x00006667u;
    }
L_0017d95c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[5] = v;
    }
L_0017d960:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x6666u << 16);
    }
L_0017d964:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[5]);
    }
L_0017d968:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_0017d96c:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 31u, &shc); cpu->r[5] = v;
    }
L_0017d970:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0017d974:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 1u, &shc); cpu->r[3] = v;
    }
L_0017d978:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[5]);
    }
L_0017d97c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_0017d980:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[9]; cpu->r[3] = (uint32_t)v; cpu->r[5] = (uint32_t)(v >> 32); }
    }
L_0017d984:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_0017d988:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[0]; cpu->r[3] = (uint32_t)v; cpu->r[5] = (uint32_t)(v >> 32); }
    }
L_0017d98c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_0017d990:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[5]);
    }
L_0017d994:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017d998:;
    {
        uint32_t v = cpu->r[10] * cpu->r[5]; cpu->r[5] = v;
    }
L_0017d99c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[5]);
    }
L_0017d9a0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017d9a4:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[5], 1, 2u, &shc), cpu->r[2], 1, 0);
    }
L_0017d9a8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0017d9ac:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_0017d9b0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x44u);
    }
L_0017d9b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_0017d9b8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_0017d9bc:;
    {
        uint32_t v = cpu->r[1] * cpu->r[9]; cpu->r[1] = v;
    }
L_0017d9c0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0017d9c4:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[5], 1, 2u, &shc), cpu->r[3], 1, 0);
    }
L_0017d9c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_0017d9cc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_0017d9d0:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
    }
L_0017d9d4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017d9d8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017d9dc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[0], 1, 12u, &shc), 1, 0);
    }
L_0017d9e0:;
    {
        uint32_t v = cpu->r[10] * cpu->r[2]; cpu->r[10] = v;
    }
L_0017d9e4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 12u, &shc); cpu->r[1] = v;
    }
L_0017d9e8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_0017d9ec:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_0017d9f0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_0017d9f4:;
    {
        uint32_t v = cpu->r[8] * cpu->r[3]; cpu->r[5] = v;
    }
L_0017d9f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0017d9fc:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[0]);
    }
L_0017da00:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[10], 1, 12u, &shc), 0, 0);
    }
L_0017da04:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0017da08:;
    {
        uint32_t v = cpu->r[8] * cpu->r[2]; cpu->r[8] = v;
    }
L_0017da0c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0017da10:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[3] = v;
    }
L_0017da14:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
    }
L_0017da18:;
    {
        uint32_t v = cpu->r[2] * cpu->r[9]; cpu->r[9] = v;
    }
L_0017da1c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_0017da20:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], shifter(cpu->r[8], 1, 12u, &shc), 0, 0);
    }
L_0017da24:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[10], shifter(cpu->r[5], 1, 12u, &shc), 1, 0);
    }
L_0017da28:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 12u, &shc); cpu->r[0] = v;
    }
L_0017da2c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_0017da30:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 0);
    }
L_0017da34:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_0017da38:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 12u, &shc); cpu->r[9] = v;
    }
L_0017da3c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_0017da40:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[2]);
    }
L_0017da44:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 0);
    }
L_0017da48:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[7]);
    }
L_0017da4c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_0017da50:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x34u);
    }
L_0017da54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_0017da58:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x30u);
    }
L_0017da5c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[9]);
    }
L_0017da60:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[1]);
    }
L_0017da64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_0017da68:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_0017da6c:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[0]);
    }
L_0017da70:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0017da74:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[3]);
    }
L_0017da78:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017da7c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0017da80:;
    {
        wr32(cpu->r[11], cpu->r[3]);
    }
L_0017da84:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000004u;
        }
    }
L_0017da88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017dd50;
        }
    }
L_0017da8c:;
    {
        cpu->r[0] = 0x0000432cu;
    }
L_0017da90:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xa8u);
    }
L_0017da94:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_0017da98:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_0017da9c:;
    {
        cpu->r[0] = rd32(0x0017daa4u + + 0x328u);
    }
L_0017daa0:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[10];
    }
L_0017daa4:;
    {
        *vfp_d(cpu,9) = (double)*(int32_t*)vfp_s(cpu,11);
    }
L_0017daa8:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0017daac:;
    {
        *vfp_d(cpu, 8) = *(double*)G(0x0017dab4u + + 0x304u);
    }
L_0017dab0:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_0017dab4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[0]);
    }
L_0017dab8:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_0017dabc:;
    {
        *vfp_d(cpu, 10) = *(double*)G(0x0017dac4u + + 0x2fcu);
    }
L_0017dac0:;
    {
        *vfp_s(cpu, 22) = *(float*)G(cpu->r[13] + + 0xacu);
    }
L_0017dac4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[10]);
    }
L_0017dac8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_0017dacc:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0017dad0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0017dad4:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[7] = v1;
    }
L_0017dad8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_0017dadc:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[7];
    }
L_0017dae0:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,13);
    }
L_0017dae4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_0017dae8:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 9) * *vfp_d(cpu, 7);
    }
L_0017daec:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,7), *vfp_d(cpu,8));
    }
L_0017daf0:;
    {
        vfp_sync_flags(cpu);
    }
L_0017daf4:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0017db2c;
        }
    }
L_0017daf8:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,7), *vfp_d(cpu,10));
    }
L_0017dafc:;
    {
        vfp_sync_flags(cpu);
    }
L_0017db00:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017db2c;
        }
    }
L_0017db04:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,22);
    }
L_0017db08:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[9];
    }
L_0017db0c:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,11);
    }
L_0017db10:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) * *vfp_d(cpu, 7);
    }
L_0017db14:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,7), *vfp_d(cpu,8));
    }
L_0017db18:;
    {
        vfp_sync_flags(cpu);
    }
L_0017db1c:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0017db2c;
        }
    }
L_0017db20:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,7), *vfp_d(cpu,10));
    }
L_0017db24:;
    {
        vfp_sync_flags(cpu);
    }
L_0017db28:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017dbe8;
        }
    }
L_0017db2c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0017db30:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0017db34:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0017db38:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_0017db3c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017db58;
        }
    }
L_0017db40:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x24u);
    }
L_0017db44:;
    {
        uint32_t v = cpu->r[12] * cpu->r[7]; cpu->r[7] = v;
    }
L_0017db48:;
    {
        uint32_t v = cpu->r[8] * cpu->r[9] + cpu->r[7]; cpu->r[7] = v;
    }
L_0017db4c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0017db50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017db88;
        }
    }
L_0017db54:;
    {
        wr32(cpu->r[11], cpu->r[0]);
    }
L_0017db58:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0017db5c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0017db60:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000002u;
        }
    }
L_0017db64:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0017db68:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000003u;
        }
    }
L_0017db6c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0017db70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017dbc0;
        }
    }
L_0017db74:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], shifter(cpu->r[5], 2, 3u, &shc), 0, 0);
    }
L_0017db78:;
    {
        cpu->r[2] = rd32(cpu->r[10] + shifter(cpu->r[5], 2, 3u, &shc));
    }
L_0017db7c:;
    {
        cpu->r[8] = rd32(cpu->r[11]);
    }
L_0017db80:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_0017db84:;
    {
        goto L_0017dad4;
    }
L_0017db88:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0017db8c:;
    {
        cpu->r[9] = 0x00001bc8u;
    }
L_0017db90:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_0017db94:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x20u);
    }
L_0017db98:;
    {
        cpu->r[7] = rd32(cpu->r[7] + cpu->r[9]);
    }
L_0017db9c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0017dba0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017db54;
        }
    }
L_0017dba4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0017dba8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0017dbac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000002u;
        }
    }
L_0017dbb0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0017dbb4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000003u;
        }
    }
L_0017dbb8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0017dbbc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017db74;
        }
    }
L_0017dbc0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0017dbc4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017dbd8;
        }
    }
L_0017dbc8:;
    {
        cpu->r[6] = rd32(cpu->r[11]);
    }
L_0017dbcc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0017dbd0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_0017dbd4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_0017dbd8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017dbdc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000b4u, 0, 0);
    }
L_0017dbe0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        cpu->r[13] += 32u;
    }
L_0017dbe4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017dbe8u)) return;
    }
L_0017dbe8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0017dbec:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,22);
    }
L_0017dbf0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0017dbf4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0017dbf8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[7]; cpu->r[0] = v;
    }
L_0017dbfc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_0017dc00:;
    {
        uint32_t v = cpu->r[2] * cpu->r[9] + cpu->r[0]; cpu->r[0] = v;
    }
L_0017dc04:;
    {
        cpu->r[14] = 0x0017dc08u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017dc08:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0017dc0c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017dc10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017dc14:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0017dc18:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0017dc1c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000005u, 1, 1);
    }
L_0017dc20:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0017dc24:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & 0x00000001u; cpu->r[2] = v;
        }
    }
L_0017dc28:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 1);
    }
L_0017dc2c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0017dc30:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & 0x00000001u; cpu->r[1] = v;
        }
    }
L_0017dc34:;
    {
        goto L_0017db38;
    }
L_0017dc38:;
    {
        cpu->r[2] = 0x00006667u;
    }
L_0017dc3c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[5] = v;
    }
L_0017dc40:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x6666u << 16);
    }
L_0017dc44:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_0017dc48:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0017dc4c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_0017dc50:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0017dc54:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[5]);
    }
L_0017dc58:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[5] = v;
    }
L_0017dc5c:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[5]);
    }
L_0017dc60:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[5] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_0017dc64:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0017dc68:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0017dc6c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[0]; cpu->r[5] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_0017dc70:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_0017dc74:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0017dc78:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[9]; cpu->r[5] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_0017dc7c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017dc80:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_0017dc84:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_0017dc88:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[5], 1, 2u, &shc), cpu->r[2], 1, 0);
    }
L_0017dc8c:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_0017dc90:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0017dc94:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_0017dc98:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_0017dc9c:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[3], 1, 2u, &shc), cpu->r[2], 1, 0);
    }
L_0017dca0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_0017dca4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_0017dca8:;
    {
        uint32_t v = cpu->r[10] * cpu->r[5]; cpu->r[2] = v;
    }
L_0017dcac:;
    {
        uint32_t v = cpu->r[10] * cpu->r[0]; cpu->r[10] = v;
    }
L_0017dcb0:;
    {
        uint32_t v = cpu->r[8] * cpu->r[0]; cpu->r[0] = v;
    }
L_0017dcb4:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_0017dcb8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0017dcbc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], shifter(cpu->r[10], 1, 12u, &shc), 0, 0);
    }
L_0017dcc0:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[2], 1, 2u, &shc), cpu->r[3], 1, 0);
    }
L_0017dcc4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_0017dcc8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_0017dccc:;
    {
        uint32_t v = cpu->r[1] * cpu->r[9]; cpu->r[2] = v;
    }
L_0017dcd0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0017dcd4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[1], 1, 12u, &shc), 1, 0);
    }
L_0017dcd8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0017dcdc:;
    {
        uint32_t v = cpu->r[1] * cpu->r[9]; cpu->r[9] = v;
    }
L_0017dce0:;
    {
        uint32_t v = cpu->r[8] * cpu->r[5]; cpu->r[1] = v;
    }
L_0017dce4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x20u);
    }
L_0017dce8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 12u, &shc); cpu->r[5] = v;
    }
L_0017dcec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], shifter(cpu->r[0], 1, 12u, &shc), 0, 0);
    }
L_0017dcf0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_0017dcf4:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 12u, &shc); cpu->r[9] = v;
    }
L_0017dcf8:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[2]);
    }
L_0017dcfc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[10], cpu->r[5], 1, 0);
    }
L_0017dd00:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[2]);
    }
L_0017dd04:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[1], 1, 12u, &shc), 1, 0);
    }
L_0017dd08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0017dd0c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], cpu->r[9], 1, 0);
    }
L_0017dd10:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[9], 0, 0);
    }
L_0017dd14:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[2]);
    }
L_0017dd18:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 0);
    }
L_0017dd1c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[2]);
    }
L_0017dd20:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_0017dd24:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0017dd28:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
    }
L_0017dd2c:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_0017dd30:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017dd34:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0017dd38:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[1]);
    }
L_0017dd3c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_0017dd40:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[7]);
    }
L_0017dd44:;
    {
        wr32(cpu->r[11], cpu->r[3]);
    }
L_0017dd48:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000004u;
        }
    }
L_0017dd4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017da8c;
        }
    }
L_0017dd50:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x50u);
    }
L_0017dd54:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_0017dd58:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x54u);
    }
L_0017dd5c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_0017dd60:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x60u);
    }
L_0017dd64:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[1], cpu->r[9], 0, 0);
    }
L_0017dd68:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x58u);
    }
L_0017dd6c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0017dd70:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 3, 31u, &shc), 0, 0);
    }
L_0017dd74:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x64u);
    }
L_0017dd78:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_0017dd7c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 3, 31u, &shc), 0, 0);
    }
L_0017dd80:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 1u, &shc); cpu->r[7] = v;
    }
L_0017dd84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0017dd88:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 3, 31u, &shc), 0, 0);
    }
L_0017dd8c:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 1u, &shc); cpu->r[9] = v;
    }
L_0017dd90:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_0017dd94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 3, 31u, &shc), 0, 0);
    }
L_0017dd98:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 1u, &shc); cpu->r[5] = v;
    }
L_0017dd9c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0017dda0:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_0017dda4:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[7]);
    }
L_0017dda8:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[9]);
    }
L_0017ddac:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[5]);
    }
L_0017ddb0:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[0]);
    }
L_0017ddb4:;
    {
        goto L_0017da8c;
    }
}

/* _ZN14CCollisionBody18SetBoxFromVerticesERK8Vector4sS2_S2_S2_ @ 0017ddd0 (arm) */
void fn_0017ddd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017ddd0:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_0017ddd4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_0017ddd8:;
    {
        *vfp_s(cpu,5) = (float)*(int32_t*)vfp_s(cpu,5);
    }
L_0017dddc:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_0017dde0:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[1]);
    }
L_0017dde4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2]);
    }
L_0017dde8:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0017ddec:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_0017ddf0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000008cu, 1, 0);
    }
L_0017ddf4:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[3]);
    }
L_0017ddf8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0017de00u + + 0x31cu);
    }
L_0017ddfc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0017de04u + + 0x31cu);
    }
L_0017de00:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xb0u);
    }
L_0017de04:;
    {
        *vfp_s(cpu, 1) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_0017de08:;
    {
        *vfp_s(cpu, 3) = *(float*)G(cpu->r[12]);
    }
L_0017de0c:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_0017de10:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0017de14:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_0017de18:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_0017de1c:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[12] + + 0x8u);
    }
L_0017de20:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0017de24:;
    {
        vfp_vadd(cpu, 13, 5, 13);
    }
L_0017de28:;
    {
        *vfp_s(cpu,9) = (float)*(int32_t*)vfp_s(cpu,9);
    }
L_0017de2c:;
    {
        *vfp_s(cpu,6) = (float)*(int32_t*)vfp_s(cpu,6);
    }
L_0017de30:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0017de34:;
    {
        vfp_vadd(cpu, 2, 9, 13);
    }
L_0017de38:;
    {
        vfp_vadd(cpu, 12, 6, 12);
    }
L_0017de3c:;
    {
        *vfp_s(cpu,1) = (float)*(int32_t*)vfp_s(cpu,1);
    }
L_0017de40:;
    {
        *vfp_s(cpu,10) = (float)*(int32_t*)vfp_s(cpu,10);
    }
L_0017de44:;
    {
        vfp_vadd(cpu, 1, 1, 2);
    }
L_0017de48:;
    {
        vfp_vadd(cpu, 2, 10, 12);
    }
L_0017de4c:;
    {
        *vfp_s(cpu,3) = (float)*(int32_t*)vfp_s(cpu,3);
    }
L_0017de50:;
    {
        vfp_vmul(cpu, 17, 1, 14);
    }
L_0017de54:;
    {
        vfp_vadd(cpu, 3, 3, 2);
    }
L_0017de58:;
    {
        vfp_vmul(cpu, 16, 3, 14);
    }
L_0017de5c:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,17);
    }
L_0017de60:;
    {
        vfp_vnmls(cpu, 3, 13, 15);
    }
L_0017de64:;
    {
        *vfp_s(cpu,7) = (float)*(int32_t*)vfp_s(cpu,7);
    }
L_0017de68:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_0017de6c:;
    {
        vfp_vadd(cpu, 11, 7, 11);
    }
L_0017de70:;
    {
        *vfp_s(cpu,8) = (float)*(int32_t*)vfp_s(cpu,8);
    }
L_0017de74:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,3);
    }
L_0017de78:;
    {
        vfp_vadd(cpu, 3, 8, 11);
    }
L_0017de7c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0017de80:;
    {
        *vfp_s(cpu,4) = (float)*(int32_t*)vfp_s(cpu,4);
    }
L_0017de84:;
    {
        vfp_vadd(cpu, 4, 4, 3);
    }
L_0017de88:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,16);
    }
L_0017de8c:;
    {
        vfp_vmul(cpu, 18, 4, 14);
    }
L_0017de90:;
    {
        vfp_vnmls(cpu, 3, 12, 15);
    }
L_0017de94:;
    {
        vfp_vmul(cpu, 14, 13, 13);
    }
L_0017de98:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 3);
    }
L_0017de9c:;
    {
        vfp_vadd(cpu, 9, 5, 9);
    }
L_0017dea0:;
    {
        *vfp_s(cpu,5) = *vfp_s(cpu,18);
    }
L_0017dea4:;
    {
        vfp_vnmls(cpu, 5, 11, 15);
    }
L_0017dea8:;
    {
        vfp_vmla(cpu, 14, 3, 3);
    }
L_0017deac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 5);
    }
L_0017deb0:;
    {
        *vfp_s(cpu,12) = *vfp_s(cpu,3);
    }
L_0017deb4:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,17);
    }
L_0017deb8:;
    {
        vfp_vnmls(cpu, 3, 9, 15);
    }
L_0017debc:;
    {
        vfp_vadd(cpu, 10, 6, 10);
    }
L_0017dec0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 3);
    }
L_0017dec4:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,5);
    }
L_0017dec8:;
    {
        *vfp_s(cpu,5) = *vfp_s(cpu,16);
    }
L_0017decc:;
    {
        vfp_vnmls(cpu, 5, 10, 15);
    }
L_0017ded0:;
    {
        vfp_vmla(cpu, 14, 11, 11);
    }
L_0017ded4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 5);
    }
L_0017ded8:;
    {
        vfp_vmul(cpu, 19, 3, 3);
    }
L_0017dedc:;
    {
        vfp_vadd(cpu, 8, 7, 8);
    }
L_0017dee0:;
    {
        *vfp_s(cpu,6) = *vfp_s(cpu,18);
    }
L_0017dee4:;
    {
        vfp_vmla(cpu, 19, 5, 5);
    }
L_0017dee8:;
    {
        vfp_vnmls(cpu, 6, 8, 15);
    }
L_0017deec:;
    {
        vfp_vsqrt(cpu, 14, 14);
    }
L_0017def0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 6);
    }
L_0017def4:;
    {
        vfp_vmla(cpu, 19, 6, 6);
    }
L_0017def8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_0017defc:;
    {
        vfp_vsqrt(cpu, 19, 19);
    }
L_0017df00:;
    {
        vfp_sync_flags(cpu);
    }
L_0017df04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017e008;
        }
    }
L_0017df08:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0017df10u + + 0x214u);
    }
L_0017df0c:;
    {
        vfp_vdiv(cpu, 15, 15, 14);
    }
L_0017df10:;
    {
        *vfp_s(cpu, 10) = *(float*)G(0x0017df18u + + 0x210u);
    }
L_0017df14:;
    {
        vfp_vmul(cpu, 9, 12, 10);
    }
L_0017df18:;
    {
        vfp_vmul(cpu, 11, 11, 10);
    }
L_0017df1c:;
    {
        vfp_vmul(cpu, 12, 13, 10);
    }
L_0017df20:;
    {
        vfp_vmul(cpu, 11, 11, 15);
    }
L_0017df24:;
    {
        vfp_vmul(cpu, 13, 9, 15);
    }
L_0017df28:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_0017df2c:;
    {
        vfp_vmul(cpu, 15, 12, 15);
    }
L_0017df30:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0017df34:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0017df38:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017df3c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,19), 0.0f);
    }
L_0017df40:;
    {
        cpu->r[4] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0017df44:;
    {
        vfp_sync_flags(cpu);
    }
L_0017df48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017e090;
        }
    }
L_0017df4c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0017df54u + + 0x1d0u);
    }
L_0017df50:;
    {
        vfp_vdiv(cpu, 14, 15, 19);
    }
L_0017df54:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x78u);
    }
L_0017df58:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0017df60u + + 0x1c8u);
    }
L_0017df5c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x74u);
    }
L_0017df60:;
    {
        vfp_vmul(cpu, 11, 13, 15);
    }
L_0017df64:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x70u);
    }
L_0017df68:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_0017df6c:;
    {
        vfp_vmul(cpu, 13, 13, 15);
    }
L_0017df70:;
    {
        vfp_vmul(cpu, 15, 11, 14);
    }
L_0017df74:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_0017df78:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017df7c:;
    {
        vfp_vmul(cpu, 14, 12, 14);
    }
L_0017df80:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0017df84:;
    {
        *(int32_t*)vfp_s(cpu,19) = (int32_t)*vfp_s(cpu,19);
    }
L_0017df88:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0017df8c:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,19);
    }
L_0017df90:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x80u);
    }
L_0017df94:;
    {
        *(int32_t*)vfp_s(cpu,12) = (int32_t)*vfp_s(cpu,12);
    }
L_0017df98:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x84u);
    }
L_0017df9c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017dfa0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_0017dfa4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_0017dfa8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_0017dfac:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_0017dfb0:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_0017dfb4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0017dfb8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x7cu);
    }
L_0017dfbc:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_0017dfc0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0017dfc4:;
    {
        *(int32_t*)vfp_s(cpu,18) = (int32_t)*vfp_s(cpu,18);
    }
L_0017dfc8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0017dfcc:;
    {
        *(int32_t*)vfp_s(cpu,11) = (int32_t)*vfp_s(cpu,11);
    }
L_0017dfd0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_0017dfd4:;
    {
        *(int32_t*)vfp_s(cpu,12) = (int32_t)*vfp_s(cpu,12);
    }
L_0017dfd8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_0017dfdc:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_0017dfe0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0017dfe4:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0017dfe8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0017dfec:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0017dff0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0017dff4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017dff8:;
    {
        cpu->r[14] = 0x0017dffcu; fn_0017d5dc(cpu);
    }
L_0017dffc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_0017e000:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_0017e004:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017e008u)) return;
    }
L_0017e008:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0017e00c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017e010:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017e014:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_0017e018:;
    {
        cpu->r[14] = 0x0017e01cu; fn_001535e0(cpu);
    }
L_0017e01c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_0017e020:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_0017e024:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_0017e028:;
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
L_0017e02c:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0017e030:;
    {
        cpu->r[1] = 0x00000fdbu;
    }
L_0017e034:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017e038:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3fc9u << 16);
    }
L_0017e03c:;
    {
        cpu->r[14] = 0x0017e040u; fn_00154460(cpu);
    }
L_0017e040:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0017e044:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017e048:;
    {
        cpu->r[14] = 0x0017e04cu; fn_00153c38(cpu);
    }
L_0017e04c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0017e050:;
    {
        cpu->r[14] = 0x0017e054u; fn_00155f80(cpu);
    }
L_0017e054:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x7cu);
    }
L_0017e058:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0017e060u + + 0xc8u);
    }
L_0017e05c:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_0017e060:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x84u);
    }
L_0017e064:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017e068:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0017e06c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0017e070:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x80u);
    }
L_0017e074:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_0017e078:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0017e07c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017e080:;
    {
        cpu->r[14] = 0x0017e084u; fn_000b2bc8(cpu);
    }
L_0017e084:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,19), 0.0f);
    }
L_0017e088:;
    {
        vfp_sync_flags(cpu);
    }
L_0017e08c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017df4c;
        }
    }
L_0017e090:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0017e094:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017e098:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017e09c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_0017e0a0:;
    {
        cpu->r[14] = 0x0017e0a4u; fn_001535e0(cpu);
    }
L_0017e0a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_0017e0a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_0017e0ac:;
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
L_0017e0b0:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0017e0b4:;
    {
        cpu->r[1] = 0x0000cbe4u;
    }
L_0017e0b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017e0bc:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4096u << 16);
    }
L_0017e0c0:;
    {
        cpu->r[14] = 0x0017e0c4u; fn_00154460(cpu);
    }
L_0017e0c4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0017e0c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017e0cc:;
    {
        cpu->r[14] = 0x0017e0d0u; fn_00153c38(cpu);
    }
L_0017e0d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0017e0d4:;
    {
        cpu->r[14] = 0x0017e0d8u; fn_00155f80(cpu);
    }
L_0017e0d8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x70u);
    }
L_0017e0dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0017e0e4u + + 0x44u);
    }
L_0017e0e0:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_0017e0e4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x78u);
    }
L_0017e0e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017e0ec:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0017e0f0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0017e0f4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x74u);
    }
L_0017e0f8:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_0017e0fc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0017e100:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017e104:;
    {
        cpu->r[14] = 0x0017e108u; fn_000b2bc8(cpu);
    }
L_0017e108:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x70u);
    }
L_0017e10c:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0017e110:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x74u);
    }
L_0017e114:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x78u);
    }
L_0017e118:;
    {
        goto L_0017df90;
    }
}

/* _ZN11CCollideCar21CollideCarWithBordersER8CCarBaseRK11RoadSectionS4_ @ 0017e12c (arm) */
void fn_0017e12c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017e12c:;
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
L_0017e130:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0017e134:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0017e138:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0017e13c:;
    {
        wr32(cpu->r[0] + + 0x1c4u, cpu->r[12]);
    }
L_0017e140:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000006cu, 1, 0);
    }
L_0017e144:;
    {
        wr32(cpu->r[0] + + 0x1c8u, cpu->r[12]);
    }
L_0017e148:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_0017e14c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x24u);
    }
L_0017e150:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_0017e154:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0x24u);
    }
L_0017e158:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_0017e15c:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x2cu);
    }
L_0017e160:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0017e164:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x2cu);
    }
L_0017e168:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0017e16c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0017e170:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0017e174:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[9]);
    }
L_0017e178:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017e17c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[14]);
    }
L_0017e180:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_0017e184:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0017e188:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[11]);
    }
L_0017e18c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x18u);
    }
L_0017e190:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[14]);
    }
L_0017e194:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0017e198:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[11]);
    }
L_0017e19c:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[12]);
    }
L_0017e1a0:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_0017e1a4:;
    {
        cpu->r[14] = 0x0017e1a8u; fn_0017d820(cpu);
    }
L_0017e1a8:;
    {
        cpu->r[14] = rd32(0x0017e1b0u + + 0x60cu);
    }
L_0017e1ac:;
    {
        cpu->r[14] = add_flags(cpu, 0x0017e1b4u, cpu->r[14], 0, 0);
    }
L_0017e1b0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_0017e1b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017e1b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000200u;
        }
    }
L_0017e1bc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
        }
    }
L_0017e1c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017e1f0;
        }
    }
L_0017e1c4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x64u);
    }
L_0017e1c8:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_0017e1cc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0017e1d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017e1d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_0017e1d8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0017e1dc:;
    {
        wr32(cpu->r[4] + + 0x1c4u, cpu->r[9]);
    }
L_0017e1e0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 4u, &shc); cpu->r[3] = v;
    }
L_0017e1e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_0017e1e8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000010u;
        }
    }
L_0017e1ec:;
    {
        wr32(cpu->r[4] + + 0x1c8u, cpu->r[3]);
    }
L_0017e1f0:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x44u);
    }
L_0017e1f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017e1f8:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x3cu);
    }
L_0017e1fc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0017e200:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x3cu);
    }
L_0017e204:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0017e208:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0x44u);
    }
L_0017e20c:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0017e210:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[12]);
    }
L_0017e214:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0017e218:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[14]);
    }
L_0017e21c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[9]);
    }
L_0017e220:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[11]);
    }
L_0017e224:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0017e228:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[12]);
    }
L_0017e22c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0017e230:;
    {
        cpu->r[14] = 0x0017e234u; fn_0017d820(cpu);
    }
L_0017e234:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017e238:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017e26c;
        }
    }
L_0017e23c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x64u);
    }
L_0017e240:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0017e244:;
    {
        wr32(cpu->r[4] + + 0x1c4u, cpu->r[2]);
    }
L_0017e248:;
    {
        cpu->r[9] = 0x00000400u;
    }
L_0017e24c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017e250:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_0017e254:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0017e258:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_0017e25c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 4u, &shc); cpu->r[3] = v;
    }
L_0017e260:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_0017e264:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000010u;
        }
    }
L_0017e268:;
    {
        wr32(cpu->r[4] + + 0x1c8u, cpu->r[3]);
    }
L_0017e26c:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x18u);
    }
L_0017e270:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0017e274:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x18u);
    }
L_0017e278:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0017e27c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x20u);
    }
L_0017e280:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0017e284:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[11]);
    }
L_0017e288:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017e28c:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x20u);
    }
L_0017e290:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_0017e294:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[14]);
    }
L_0017e298:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_0017e29c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[12]);
    }
L_0017e2a0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0017e2a4:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[11]);
    }
L_0017e2a8:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[14]);
    }
L_0017e2ac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0017e2b0:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[12]);
    }
L_0017e2b4:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_0017e2b8:;
    {
        cpu->r[14] = 0x0017e2bcu; fn_0017d820(cpu);
    }
L_0017e2bc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0017e2c0:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0017e2c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017e2c8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x1c4u, cpu->r[9]);
        }
    }
L_0017e2cc:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x50u);
    }
L_0017e2d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000800u;
        }
    }
L_0017e2d4:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x48u);
    }
L_0017e2d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017e2dc:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x48u);
    }
L_0017e2e0:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0x50u);
    }
L_0017e2e4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
        }
    }
L_0017e2e8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0017e2ec:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[12]);
    }
L_0017e2f0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0017e2f4:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[14]);
    }
L_0017e2f8:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[9]);
    }
L_0017e2fc:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[11]);
    }
L_0017e300:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0017e304:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[12]);
    }
L_0017e308:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0017e30c:;
    {
        cpu->r[14] = 0x0017e310u; fn_0017d820(cpu);
    }
L_0017e310:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017e314:;
    {
        cpu->r[0] = 0x0000c34fu;
    }
L_0017e318:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000800u;
        }
    }
L_0017e31c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_0017e320:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
        }
    }
L_0017e324:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x1c4u, cpu->r[3]);
        }
    }
L_0017e328:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_0017e32c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x14u);
    }
L_0017e330:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xcu);
    }
L_0017e334:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0017e338:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_0017e33c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0017e340:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[2]);
    }
L_0017e344:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0017e348:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x0000c350u;
        }
    }
L_0017e34c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[3]);
    }
L_0017e350:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[2]);
        }
    }
L_0017e354:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017e370;
        }
    }
L_0017e358:;
    {
        cpu->r[1] = 0x00003cb1u;
    }
L_0017e35c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xffffu << 16);
    }
L_0017e360:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0017e364:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00003cb0u;
        }
    }
L_0017e368:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xffffu << 16);
        }
    }
L_0017e36c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[2]);
        }
    }
L_0017e370:;
    {
        cpu->r[2] = 0x0000c34fu;
    }
L_0017e374:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0017e378:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x0000c350u;
        }
    }
L_0017e37c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x50u, cpu->r[3]);
        }
    }
L_0017e380:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017e39c;
        }
    }
L_0017e384:;
    {
        cpu->r[2] = 0x00003cb1u;
    }
L_0017e388:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xffffu << 16);
    }
L_0017e38c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0017e390:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00003cb0u;
        }
    }
L_0017e394:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
        }
    }
L_0017e398:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x50u, cpu->r[3]);
        }
    }
L_0017e39c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017e3a0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_0017e3a4:;
    {
        cpu->r[14] = 0x0017e3a8u; fn_001857e0(cpu);
    }
L_0017e3a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_0017e3ac:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x14u);
    }
L_0017e3b0:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0017e3b4:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0xcu);
    }
L_0017e3b8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0017e3bc:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0017e3c0:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0017e3c4:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x14u);
    }
L_0017e3c8:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[11]);
    }
L_0017e3cc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x20u);
    }
L_0017e3d0:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[12]);
    }
L_0017e3d4:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0017e3d8:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[14]);
    }
L_0017e3dc:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0017e3e0:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[11]);
    }
L_0017e3e4:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[14]);
    }
L_0017e3e8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0017e3ec:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0017e3f0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_0017e3f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017e3f8:;
    {
        cpu->r[14] = 0x0017e3fcu; fn_0017d820(cpu);
    }
L_0017e3fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x64u);
    }
L_0017e400:;
    {
        cpu->r[3] = 0x00002710u;
    }
L_0017e404:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0017e408:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
        }
    }
L_0017e40c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017e410:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017e56c;
        }
    }
L_0017e414:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x64u);
    }
L_0017e418:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_0017e41c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00001001u;
        }
    }
L_0017e420:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
        }
    }
L_0017e424:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_0017e428:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017e43c;
        }
    }
L_0017e42c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0017e430:;
    {
        cpu->r[3] = 0x00001002u;
    }
L_0017e434:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00001000u;
        }
    }
L_0017e438:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0017e43c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0017e440:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0017e444:;
    {
        wr32(cpu->r[4] + + 0x1c4u, cpu->r[3]);
    }
L_0017e448:;
    {
        cpu->r[3] = rd32(0x0017e450u + + 0x370u);
    }
L_0017e44c:;
    {
        cpu->r[11] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0017e450:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_0017e454:;
    {
        cpu->r[14] = 0x0017e458u; fn_00096b88(cpu);
    }
L_0017e458:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017e45c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017e480;
        }
    }
L_0017e460:;
    {
        cpu->r[1] = rd32(cpu->r[11]);
    }
L_0017e464:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0017e468:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_0017e46c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0017e470:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0017e474:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0017e478:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017e47c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017e794;
        }
    }
L_0017e480:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_0017e484:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0017e488:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_0017e48c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[14], 0x00000002u, 0, 0);
    }
L_0017e490:;
    {
        uint32_t v = cpu->r[12] * cpu->r[11]; cpu->r[0] = v;
    }
L_0017e494:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_0017e498:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0017e49c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0017e4a0:;
    {
        cpu->r[14] = 0x0017e4a4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017e4a4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0017e4a8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0017e4ac:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0017e4b0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0017e4b4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[11]; cpu->r[0] = v;
    }
L_0017e4b8:;
    {
        cpu->r[14] = 0x0017e4bcu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017e4bc:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_0017e4c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017e4c4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], 0x000004b0u, 0, 0);
    }
L_0017e4c8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[11]);
    }
L_0017e4cc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017e4d0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0017e4d4:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0017e4d8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
    }
L_0017e4dc:;
    {
        wr32(cpu->r[4] + + 0x3dcu, cpu->r[14]);
    }
L_0017e4e0:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_0017e4e4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_0017e4e8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017e4ec:;
    {
        wr32(cpu->r[4] + + 0x3d4u, cpu->r[11]);
    }
L_0017e4f0:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_0017e4f4:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 12u, &shc); cpu->r[0] = v;
    }
L_0017e4f8:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3d0u);
    }
L_0017e4fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3c8u);
    }
L_0017e500:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
    }
L_0017e504:;
    {
        wr32(cpu->r[4] + + 0x3d0u, cpu->r[3]);
    }
L_0017e508:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_0017e50c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0017e510:;
    {
        wr32(cpu->r[4] + + 0x3c8u, cpu->r[2]);
    }
L_0017e514:;
    {
        cpu->r[14] = 0x0017e518u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017e518:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0017e51c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0017e520:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017e524:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_0017e528:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_0017e52c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 12u, &shc); cpu->r[0] = v;
    }
L_0017e530:;
    {
        cpu->r[14] = 0x0017e534u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017e534:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x430u);
    }
L_0017e538:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x42cu);
    }
L_0017e53c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_0017e540:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x428u);
    }
L_0017e544:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0017e548:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_0017e54c:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_0017e550:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_0017e554:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_0017e558:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[14], 1, 0);
    }
L_0017e55c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_0017e560:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[0]);
    }
L_0017e564:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017e568:;
    {
        cpu->r[14] = 0x0017e56cu; fn_00173bd0(cpu);
    }
L_0017e56c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5cu);
    }
L_0017e570:;
    {
        cpu->r[0] = 0x0000c34fu;
    }
L_0017e574:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x5cu);
    }
L_0017e578:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x54u);
    }
L_0017e57c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0017e580:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x54u);
    }
L_0017e584:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0017e588:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[2]);
    }
L_0017e58c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0017e590:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x0000c350u;
        }
    }
L_0017e594:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[3]);
    }
L_0017e598:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[2]);
        }
    }
L_0017e59c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017e5b8;
        }
    }
L_0017e5a0:;
    {
        cpu->r[1] = 0x00003cb1u;
    }
L_0017e5a4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xffffu << 16);
    }
L_0017e5a8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0017e5ac:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00003cb0u;
        }
    }
L_0017e5b0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xffffu << 16);
        }
    }
L_0017e5b4:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[2]);
        }
    }
L_0017e5b8:;
    {
        cpu->r[2] = 0x0000c34fu;
    }
L_0017e5bc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0017e5c0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x0000c350u;
        }
    }
L_0017e5c4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x60u, cpu->r[3]);
        }
    }
L_0017e5c8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017e5e4;
        }
    }
L_0017e5cc:;
    {
        cpu->r[2] = 0x00003cb1u;
    }
L_0017e5d0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xffffu << 16);
    }
L_0017e5d4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0017e5d8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00003cb0u;
        }
    }
L_0017e5dc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
        }
    }
L_0017e5e0:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x60u, cpu->r[3]);
        }
    }
L_0017e5e4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0017e5e8:;
    {
        cpu->r[14] = 0x0017e5ecu; fn_001857e0(cpu);
    }
L_0017e5ec:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x5cu);
    }
L_0017e5f0:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x54u);
    }
L_0017e5f4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0017e5f8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x5cu);
    }
L_0017e5fc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0017e600:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x54u);
    }
L_0017e604:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0017e608:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[14]);
    }
L_0017e60c:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0017e610:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[12]);
    }
L_0017e614:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0017e618:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[8]);
    }
L_0017e61c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[5]);
    }
L_0017e620:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0017e624:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0017e628:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[14]);
    }
L_0017e62c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0017e630:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017e634:;
    {
        cpu->r[14] = 0x0017e638u; fn_0017d820(cpu);
    }
L_0017e638:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x64u);
    }
L_0017e63c:;
    {
        cpu->r[3] = 0x00002710u;
    }
L_0017e640:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0017e644:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
        }
    }
L_0017e648:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017e64c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017e77c;
        }
    }
L_0017e650:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_0017e654:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x64u);
    }
L_0017e658:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001001u;
        }
    }
L_0017e65c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
        }
    }
L_0017e660:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017e674;
        }
    }
L_0017e664:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0017e668:;
    {
        cpu->r[3] = 0x00001002u;
    }
L_0017e66c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00001000u;
        }
    }
L_0017e670:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0017e674:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0017e678:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_0017e67c:;
    {
        wr32(cpu->r[4] + + 0x1c4u, cpu->r[3]);
    }
L_0017e680:;
    {
        cpu->r[3] = rd32(0x0017e688u + + 0x138u);
    }
L_0017e684:;
    {
        cpu->r[5] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_0017e688:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0017e68c:;
    {
        cpu->r[14] = 0x0017e690u; fn_00096b88(cpu);
    }
L_0017e690:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017e694:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017e6b8;
        }
    }
L_0017e698:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_0017e69c:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0017e6a0:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_0017e6a4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0017e6a8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0017e6ac:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0017e6b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017e6b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017e7a8;
        }
    }
L_0017e6b8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0017e6bc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_0017e6c0:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0017e6c4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x60u);
    }
L_0017e6c8:;
    {
        uint32_t v = cpu->r[6] * cpu->r[8]; cpu->r[0] = v;
    }
L_0017e6cc:;
    {
        cpu->r[14] = 0x0017e6d0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017e6d0:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0017e6d4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0017e6d8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[8]; cpu->r[0] = v;
    }
L_0017e6dc:;
    {
        cpu->r[14] = 0x0017e6e0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017e6e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000004b0u, 0, 0);
    }
L_0017e6e4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_0017e6e8:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_0017e6ec:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x3c8u);
    }
L_0017e6f0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x3d0u);
    }
L_0017e6f4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[7], 0, 0);
    }
L_0017e6f8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[10], 0, 0);
    }
L_0017e6fc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0017e700:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0017e704:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_0017e708:;
    {
        wr32(cpu->r[4] + + 0x3d4u, cpu->r[14]);
    }
L_0017e70c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0017e710:;
    {
        wr32(cpu->r[4] + + 0x3dcu, cpu->r[12]);
    }
L_0017e714:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_0017e718:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0017e71c:;
    {
        wr32(cpu->r[4] + + 0x3d0u, cpu->r[3]);
    }
L_0017e720:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 12u, &shc); cpu->r[0] = v;
    }
L_0017e724:;
    {
        wr32(cpu->r[4] + + 0x3c8u, cpu->r[7]);
    }
L_0017e728:;
    {
        cpu->r[14] = 0x0017e72cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017e72c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0017e730:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017e734:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_0017e738:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_0017e73c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 12u, &shc); cpu->r[0] = v;
    }
L_0017e740:;
    {
        cpu->r[14] = 0x0017e744u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017e744:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x430u);
    }
L_0017e748:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x42cu);
    }
L_0017e74c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0017e750:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x428u);
    }
L_0017e754:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0017e758:;
    {
        cpu->r[14] = sub_flags(cpu, 0x00000000u, cpu->r[14], 1, 0);
    }
L_0017e75c:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_0017e760:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_0017e764:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_0017e768:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_0017e76c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_0017e770:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[0]);
    }
L_0017e774:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017e778:;
    {
        cpu->r[14] = 0x0017e77cu; fn_00173bd0(cpu);
    }
L_0017e77c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_0017e780:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0017e784:;
    {
        uint32_t v = cpu->r[3] | cpu->r[2]; cpu->r[3] = v;
    }
L_0017e788:;
    {
        wr32(cpu->r[4] + + 0x484u, cpu->r[3]);
    }
L_0017e78c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_0017e790:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017e794u)) return;
    }
L_0017e794:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_0017e798:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0017e79c:;
    {
        uint32_t v = cpu->r[3] | cpu->r[9]; cpu->r[3] = v;
    }
L_0017e7a0:;
    {
        wr32(cpu->r[4] + + 0x484u, cpu->r[3]);
    }
L_0017e7a4:;
    {
        goto L_0017e78c;
    }
L_0017e7a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_0017e7ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0017e7b0:;
    {
        uint32_t v = cpu->r[3] | cpu->r[1]; cpu->r[3] = v;
    }
L_0017e7b4:;
    {
        wr32(cpu->r[4] + + 0x484u, cpu->r[3]);
    }
L_0017e7b8:;
    {
        goto L_0017e78c;
    }
}

/* _ZN11CCollideCar31CollideSphereWithImpassableRoadER8Vector4siiR8Vector2s @ 0017e7c4 (arm) */
void fn_0017e7c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017e7c4:;
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
L_0017e7c8:;
    {
        cpu->r[4] = rd32(0x0017e7d0u + + 0x374u);
    }
L_0017e7cc:;
    {
        cpu->r[8] = rd32(0x0017e7d4u + + 0x374u);
    }
L_0017e7d0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_0017e7d4:;
    {
        cpu->r[4] = add_flags(cpu, 0x0017e7dcu, cpu->r[4], 0, 0);
    }
L_0017e7d8:;
    {
        cpu->r[5] = 0x00001bc8u;
    }
L_0017e7dc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0017e7e0:;
    {
        cpu->r[12] = 0x00008d74u;
    }
L_0017e7e4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_0017e7e8:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_0017e7ec:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0017e7f0:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0017e7f4:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_0017e7f8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0017e7fc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_0017e800:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_0017e804:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0017e808:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0017e80c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0017e810:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4u);
    }
L_0017e814:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0017e818:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0017e81c:;
    {
        uint32_t v = cpu->r[3] & 0x00000008u; cpu->r[11] = v;
        set_nz(cpu, v);
    }
L_0017e820:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017e830;
        }
    }
L_0017e824:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x1dcu);
    }
L_0017e828:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_0017e82c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017e840;
        }
    }
L_0017e830:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017e834:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0017e838:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_0017e83c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017e840u)) return;
    }
L_0017e840:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_0017e844:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017e830;
        }
    }
L_0017e848:;
    {
        cpu->r[12] = 0x00008c50u;
    }
L_0017e84c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017e850:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_0017e854:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0017e858:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_0017e85c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[10]);
    }
L_0017e860:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_0017e864:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[10]);
    }
L_0017e868:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_0017e86c:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_0017e870:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_0017e874:;
    {
        cpu->r[14] = 0x0017e878u; fn_0017bf58(cpu);
    }
L_0017e878:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0017e87c:;
    {
        cpu->r[12] = 0x00008818u;
    }
L_0017e880:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_0017e884:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0017e888:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017e88c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_0017e890:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_0017e894:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_0017e898:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_0017e89c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000130u, 0, 0);
    }
L_0017e8a0:;
    {
        cpu->r[14] = 0x0017e8a4u; fn_0017bf58(cpu);
    }
L_0017e8a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0017e8a8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_0017e8ac:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0017e8b0:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0017e8b4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_0017e8b8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0017e8bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017e900;
        }
    }
L_0017e8c0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0017e8c4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_0017e8c8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0017e8cc:;
    {
        goto L_0017e8ec;
    }
L_0017e8d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0017e8d4:;
    {
        cpu->r[14] = 0x0017e8d8u; fn_00173d94(cpu);
    }
L_0017e8d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017e8dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017ea64;
        }
    }
L_0017e8e0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0017e8e4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0017e8e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_0017e8ec:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0017e8f0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0017e8f4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[3];
        }
    }
L_0017e8f8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0017e8fc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017e8d0;
        }
    }
L_0017e900:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0017e904:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017e908:;
    {
        cpu->r[14] = 0x0017e90cu; fn_00180c78(cpu);
    }
L_0017e90c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017e910:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0017e914:;
    {
        cpu->r[14] = 0x0017e918u; fn_00173d94(cpu);
    }
L_0017e918:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017e91c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017e830;
        }
    }
L_0017e920:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017e924:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017e928:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0017e92c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017e930:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_0017e934:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_0017e938:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0017e93c:;
    {
        cpu->r[14] = 0x0017e940u; fn_00180b68(cpu);
    }
L_0017e940:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x3dcu);
    }
L_0017e944:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0017e948:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0017e94c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0017e950:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0017e954:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x3d4u);
    }
L_0017e958:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_0017e95c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_0017e960:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_0017e964:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017e968:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0017e96c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_0017e970:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x5cu);
    }
L_0017e974:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x54u);
    }
L_0017e978:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_0017e97c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_0017e980:;
    {
        cpu->r[14] = cpu->r[13];
    }
L_0017e984:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_0017e988:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0017e98c:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_0017e990:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0017e994:;
    {
        cpu->r[14] = 0x0017e998u; fn_0017a764(cpu);
    }
L_0017e998:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017e99c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017ea94;
        }
    }
L_0017e9a0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017e9a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0017e9a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_0017e9ac:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x5cu);
    }
L_0017e9b0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x54u);
    }
L_0017e9b4:;
    {
        cpu->r[8] = rd32(cpu->r[9]);
    }
L_0017e9b8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_0017e9bc:;
    {
        cpu->r[7] = rd32(cpu->r[9] + + 0x8u);
    }
L_0017e9c0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0017e9c4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 0);
    }
L_0017e9c8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0017e9cc:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 0);
    }
L_0017e9d0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0017e9d4:;
    {
        cpu->r[14] = 0x0017e9d8u; fn_001857e0(cpu);
    }
L_0017e9d8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_0017e9dc:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0017e9e0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0017e9e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017e9e8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[8]; cpu->r[0] = v;
    }
L_0017e9ec:;
    {
        uint32_t v = cpu->r[6] * cpu->r[7] + cpu->r[0]; cpu->r[0] = v;
    }
L_0017e9f0:;
    {
        cpu->r[14] = 0x0017e9f4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017e9f4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017e9f8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_0017e9fc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0017ea00:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017e830;
        }
    }
L_0017ea04:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017ea08:;
    {
        uint32_t v = cpu->r[5] * cpu->r[7]; cpu->r[0] = v;
    }
L_0017ea0c:;
    {
        cpu->r[14] = 0x0017ea10u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017ea10:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_0017ea14:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017ea18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0017ea1c:;
    {
        wr32(cpu->r[9], cpu->r[3]);
    }
L_0017ea20:;
    {
        uint32_t v = cpu->r[6] * cpu->r[7]; cpu->r[0] = v;
    }
L_0017ea24:;
    {
        cpu->r[14] = 0x0017ea28u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017ea28:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x8u);
    }
L_0017ea2c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017ea30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0017ea34:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 12u, &shc); cpu->r[0] = v;
    }
L_0017ea38:;
    {
        wr32(cpu->r[9] + + 0x8u, cpu->r[3]);
    }
L_0017ea3c:;
    {
        cpu->r[14] = 0x0017ea40u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017ea40:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017ea44:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017ea48:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_0017ea4c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 12u, &shc); cpu->r[0] = v;
    }
L_0017ea50:;
    {
        cpu->r[14] = 0x0017ea54u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017ea54:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017ea58:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0017ea5c:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_0017ea60:;
    {
        goto L_0017e834;
    }
L_0017ea64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_0017ea68:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_0017ea6c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0017ea70:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0017ea74:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_0017ea78:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0017ea7c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0017ea80:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0017ea84:;
    {
        cpu->r[14] = 0x0017ea88u; fn_00148c60(cpu);
    }
L_0017ea88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017ea8c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = cpu->r[5];
        }
    }
L_0017ea90:;
    {
        goto L_0017e900;
    }
L_0017ea94:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_0017ea98:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0017ea9c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_0017eaa0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x5cu);
    }
L_0017eaa4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x54u);
    }
L_0017eaa8:;
    {
        cpu->r[8] = rd32(cpu->r[9]);
    }
L_0017eaac:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_0017eab0:;
    {
        cpu->r[7] = rd32(cpu->r[9] + + 0x8u);
    }
L_0017eab4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_0017eab8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 0);
    }
L_0017eabc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0017eac0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 0);
    }
L_0017eac4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0017eac8:;
    {
        cpu->r[14] = 0x0017eaccu; fn_001857e0(cpu);
    }
L_0017eacc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_0017ead0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0017ead4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0017ead8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017eadc:;
    {
        uint32_t v = cpu->r[5] * cpu->r[8]; cpu->r[0] = v;
    }
L_0017eae0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[7] + cpu->r[0]; cpu->r[0] = v;
    }
L_0017eae4:;
    {
        cpu->r[14] = 0x0017eae8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017eae8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017eaec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0017eaf0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0017eaf4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017e830;
        }
    }
L_0017eaf8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017eafc:;
    {
        uint32_t v = cpu->r[5] * cpu->r[7]; cpu->r[0] = v;
    }
L_0017eb00:;
    {
        cpu->r[14] = 0x0017eb04u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017eb04:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_0017eb08:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017eb0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0017eb10:;
    {
        wr32(cpu->r[9], cpu->r[3]);
    }
L_0017eb14:;
    {
        uint32_t v = cpu->r[6] * cpu->r[7]; cpu->r[0] = v;
    }
L_0017eb18:;
    {
        cpu->r[14] = 0x0017eb1cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017eb1c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x8u);
    }
L_0017eb20:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017eb24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0017eb28:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 12u, &shc); cpu->r[0] = v;
    }
L_0017eb2c:;
    {
        wr32(cpu->r[9] + + 0x8u, cpu->r[3]);
    }
L_0017eb30:;
    {
        cpu->r[14] = 0x0017eb34u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017eb34:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017eb38:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017eb3c:;
    {
        wr32(cpu->r[14] + + 0x4u, cpu->r[0]);
    }
L_0017eb40:;
    {
        goto L_0017ea4c;
    }
}

/* _ZN11CCollideCar21ConstrainSphereToRoadEP8CCarBaseR8Vector4siiPK10RoadStructib @ 0017eb4c (arm) */
void fn_0017eb4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017eb4c:;
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
L_0017eb50:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_0017eb54:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0017eb58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_0017eb5c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x38u);
    }
L_0017eb60:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0017eb64:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0017eb68:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0017eb6c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017eb70:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0017eb74:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0017eb78:;
    {
        cpu->r[10] = rd8(cpu->r[13] + + 0x40u);
    }
L_0017eb7c:;
    {
        cpu->r[14] = 0x0017eb80u; fn_0017bf58(cpu);
    }
L_0017eb80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0017eb84:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017eb88:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], 0x000003d4u, 0, 0);
    }
L_0017eb8c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0017eb90:;
    {
        uint32_t wb_tmp = cpu->r[3] + - 0x4u;
        wr32(cpu->r[3] + - 0x4u, cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_0017eb94:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0017eb98:;
    {
        cpu->r[14] = 0x0017eb9cu; fn_0017bf58(cpu);
    }
L_0017eb9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017eba0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0017eba4:;
    {
        cpu->r[14] = 0x0017eba8u; fn_00180c78(cpu);
    }
L_0017eba8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0017ebac:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0017ebb0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0017ebb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017ebb8:;
    {
        cpu->r[14] = 0x0017ebbcu; fn_00180b68(cpu);
    }
L_0017ebbc:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0017ebc0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
        }
    }
L_0017ebc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017ebe4;
        }
    }
L_0017ebc8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0017ebcc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0017ebd0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017ebd4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0017ebd8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0017ebdc:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0017ebe0:;
    {
        cpu->r[14] = 0x0017ebe4u; fn_0017d650(cpu);
    }
L_0017ebe4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017ebe8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0017ebec:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0017ebf0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0017ebf4:;
    {
        cpu->r[14] = 0x0017ebf8u; fn_0017e7c4(cpu);
    }
L_0017ebf8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0017ebfc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017ec00u)) return;
    }
}

/* _ZN11CConvexHull6isLeftERK14ConvexHullAtomS2_S2_ @ 0017ec00 (arm) */
void fn_0017ec00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017ec00:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_0017ec04:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_0017ec08:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0017ec0c:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_0017ec10:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0017ec14:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_0017ec18:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x4u);
    }
L_0017ec1c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0017ec20:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 0);
    }
L_0017ec24:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 0);
    }
L_0017ec28:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_0017ec2c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[3] = v;
    }
L_0017ec30:;
    {
        uint32_t v = cpu->r[1] * cpu->r[12] + cpu->r[3]; cpu->r[0] = v;
    }
L_0017ec34:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_0017ec38:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CConvexHull8TooCloseERK8Vector4sS2_ @ 0017ec3c (arm) */
void fn_0017ec3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017ec3c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_0017ec40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0017ec44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017ec98;
        }
    }
L_0017ec48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0017ec4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017ec70;
        }
    }
L_0017ec50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017ec54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017ec68;
        }
    }
L_0017ec58:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_0017ec5c:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_0017ec60:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0017ec64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017ecb0;
        }
    }
L_0017ec68:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0017ec6c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017ec70:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_0017ec74:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_0017ec78:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0017ec7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017ec68;
        }
    }
L_0017ec80:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x8u);
    }
L_0017ec84:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_0017ec88:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0017ec8c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0017ec90:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0017ec94:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017ec98:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_0017ec9c:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_0017eca0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0017eca4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017ec80;
        }
    }
L_0017eca8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0017ecac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017ecb0:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_0017ecb4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_0017ecb8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0017ecbc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0017ecc0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0017ecc4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CConvexHull7isValidERK8Vector4s @ 0017ecc8 (arm) */
void fn_0017ecc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017ecc8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_0017eccc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0017ecd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017ed20;
        }
    }
L_0017ecd4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0017ecd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017ed08;
        }
    }
L_0017ecdc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017ece0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017ed18;
        }
    }
L_0017ece4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_0017ece8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_0017ecec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0017ecf0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017ed18;
        }
    }
L_0017ecf4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_0017ecf8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0017ecfc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0017ed00:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0017ed04:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017ed08:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_0017ed0c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_0017ed10:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0017ed14:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0017ecf4;
        }
    }
L_0017ed18:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0017ed1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017ed20:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_0017ed24:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_0017ed28:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0017ed2c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017ed18;
        }
    }
L_0017ed30:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_0017ed34:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0017ed38:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0017ed3c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0017ed40:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z21CompareConvexHullAtomPKvS0_ @ 0017ed44 (arm) */
void fn_0017ed44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017ed44:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_0017ed48:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_0017ed4c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0017ed50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017ed5c;
        }
    }
L_0017ed54:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0017ed58:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017ed5c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017ed78;
        }
    }
L_0017ed60:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_0017ed64:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_0017ed68:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0017ed6c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017ed54;
        }
    }
L_0017ed70:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0017ed74:;
    {
        if (cond_test(cpu, 11)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0017ed78:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_0017ed7c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CConvexHullD1Ev @ 0017ed80 (arm) */
void fn_0017ed80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017ed80:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0017ed84:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017ed88:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0017ed8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017ed90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017eda0;
        }
    }
L_0017ed94:;
    {
        cpu->r[14] = 0x0017ed98u; fn_0018ba60(cpu);
    }
L_0017ed98:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017ed9c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_0017eda0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017eda4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017eda8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_0017edac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017edb0u)) return;
    }
}

/* _ZN11CConvexHullD2Ev @ 0017edb0 (arm) */
void fn_0017edb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017edb0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0017edb4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017edb8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0017edbc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017edc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017edd0;
        }
    }
L_0017edc4:;
    {
        cpu->r[14] = 0x0017edc8u; fn_0018ba60(cpu);
    }
L_0017edc8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017edcc:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_0017edd0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017edd4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017edd8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_0017eddc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017ede0u)) return;
    }
}

/* _ZN11CConvexHull11ComputeHullEv @ 0017ede0 (arm) */
void fn_0017ede0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017ede0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0017ede4:;
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
L_0017ede8:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0017edec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0017edf0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_0017edf4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0017edf8:;
    {
        cpu->r[14] = 0x0017edfcu; imp__Znaj(cpu); /* _Znaj */
    }
L_0017edfc:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x4u);
    }
L_0017ee00:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0017ee04:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0017ee08:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_0017ee0c:;
    {
        wr32(cpu->r[10] + + 0x8u, cpu->r[5]);
    }
L_0017ee10:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_0017ee14:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0017ee18:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017f2ac;
        }
    }
L_0017ee1c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_0017ee20:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0017ee24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017f2ac;
        }
    }
L_0017ee28:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_0017ee2c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0017ee30:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017ee34:;
    {
        goto L_0017ee48;
    }
L_0017ee38:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0017ee3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0017ee40:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0017ee44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017f1fc;
        }
    }
L_0017ee48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0017ee4c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0017ee50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017ee38;
        }
    }
L_0017ee54:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0017ee58:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[4]);
    }
L_0017ee5c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[4]);
    }
L_0017ee60:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0017ee64:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017ee68:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0017ee6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017f21c;
        }
    }
L_0017ee70:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0017ee74:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0017ee78:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017ee7c:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[6] = cpu->r[0];
        }
    }
L_0017ee80:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017ee84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_0017ee88:;
    {
        if (cond_test(cpu, 5)) {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[6] = v;
        }
    }
L_0017ee8c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_0017ee90:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_0017ee94:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0017ee98:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_0017ee9c:;
    {
        if (cond_test(cpu, 5)) {
        wr32(cpu->r[13] + + 0x20u, cpu->r[6]);
        }
    }
L_0017eea0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_0017eea4:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0017ef08;
        }
    }
L_0017eea8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0017eeac:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x8u);
    }
L_0017eeb0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017eeb4:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
    }
L_0017eeb8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_0017eebc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_0017eec0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0017eec4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_0017eec8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017ef08;
        }
    }
L_0017eecc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 0);
    }
L_0017eed0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017eed4:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_0017eed8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0017eedc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0017eee0:;
    {
        goto L_0017eef4;
    }
L_0017eee4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0017eee8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000000cu, 1, 0);
    }
L_0017eeec:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_0017eef0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017f29c;
        }
    }
L_0017eef4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0017eef8:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0017eee4;
        }
    }
L_0017eefc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0017ef00:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_0017ef04:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_0017ef08:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0017ef0c:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0017ef10:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017ef14:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_0017ef18:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017ef1c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0017ef20:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0017ef24:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_0017ef28:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017ef2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0017ef30:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0017ef34:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0017ef38:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017ef3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0017ef40:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0017ef44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0017ef48:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8u);
    }
L_0017ef4c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_0017ef50:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_0017ef54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0017ef58:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[0]);
    }
L_0017ef5c:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_0017ef60:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_0017ef64:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[12]);
    }
L_0017ef68:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0017ef6c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017f038;
        }
    }
L_0017ef70:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[12] = v1;
    }
L_0017ef74:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_0017ef78:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017ef7c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_0017ef80:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0017ef84:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0017ef88:;
    {
        cpu->r[14] = 0x0017ef8cu; fn_0017ec00(cpu);
    }
L_0017ef8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017ef90:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017efa0;
        }
    }
L_0017ef94:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017ef98:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[11], 1, 1);
    }
L_0017ef9c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017f01c;
        }
    }
L_0017efa0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0017efa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017f1e8;
        }
    }
L_0017efa8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 0);
    }
L_0017efac:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_0017efb0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_0017efb4:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[7] = v;
    }
L_0017efb8:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[6] = v;
    }
L_0017efbc:;
    {
        goto L_0017efd0;
    }
L_0017efc0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0017efc4:;
    {
        cpu->r[10] = cpu->r[4];
    }
L_0017efc8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_0017efcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017f1e8;
        }
    }
L_0017efd0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_0017efd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_0017efd8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0017efdc:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0017efe0:;
    {
        cpu->r[14] = 0x0017efe4u; fn_0017ec00(cpu);
    }
L_0017efe4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x0000000cu, 1, 0);
    }
L_0017efe8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x0000000cu, 1, 0);
    }
L_0017efec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017eff0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017efc0;
        }
    }
L_0017eff4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0017eff8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_0017effc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0017f000:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x8u);
    }
L_0017f004:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_0017f008:;
    {
        cpu->r[12] = rd32(cpu->r[8]);
    }
L_0017f00c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x4u);
    }
L_0017f010:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[1]);
    }
L_0017f014:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[12]);
    }
L_0017f018:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_0017f01c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017f020:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0017f024:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0017f028:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_0017f02c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_0017f030:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0017f034:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0017ef70;
        }
    }
L_0017f038:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0017f03c:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_0017f040:;
    {
        cpu->r[10] = cpu->r[9];
    }
L_0017f044:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0017f048:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017f07c;
        }
    }
L_0017f04c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017f050:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0017f054:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0017f058:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x24u);
    }
L_0017f05c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_0017f060:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0017f064:;
    {
        cpu->r[0] = rd32(cpu->r[12] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_0017f068:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_0017f06c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_0017f070:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[0]);
    }
L_0017f074:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[12]);
    }
L_0017f078:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[1]);
    }
L_0017f07c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017f080:;
    {
        cpu->r[9] = cpu->r[8];
    }
L_0017f084:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x20u);
    }
L_0017f088:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x8u);
    }
L_0017f08c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017f090:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0017f094:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0017f098:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_0017f09c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017f0a0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0017f0a4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_0017f0a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0017f0ac:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_0017f0b0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0017f0b4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[8]);
    }
L_0017f0b8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017f1a8;
        }
    }
L_0017f0bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017f0c0:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_0017f0c4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017f0c8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0017f0cc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0017f0d0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0017f0d4:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0017f0d8:;
    {
        cpu->r[14] = 0x0017f0dcu; fn_0017ec00(cpu);
    }
L_0017f0dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017f0e0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017f0f4;
        }
    }
L_0017f0e4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017f0e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_0017f0ec:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0017f0f0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017f180;
        }
    }
L_0017f0f4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017f0f8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[9], 1, 1);
    }
L_0017f0fc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0017f15c;
        }
    }
L_0017f100:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 0);
    }
L_0017f104:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 2, 1u, &shc), 0, 0);
    }
L_0017f108:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_0017f10c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017f110:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_0017f114:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[7] = v;
    }
L_0017f118:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[6] = v;
    }
L_0017f11c:;
    {
        goto L_0017f130;
    }
L_0017f120:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[9], 1, 1);
    }
L_0017f124:;
    {
        cpu->r[11] = cpu->r[4];
    }
L_0017f128:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_0017f12c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017f1f4;
        }
    }
L_0017f130:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_0017f134:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_0017f138:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0017f13c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0017f140:;
    {
        cpu->r[14] = 0x0017f144u; fn_0017ec00(cpu);
    }
L_0017f144:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x0000000cu, 1, 0);
    }
L_0017f148:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x0000000cu, 1, 0);
    }
L_0017f14c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0017f150:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017f154:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017f120;
        }
    }
L_0017f158:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_0017f15c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0017f160:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x8u);
    }
L_0017f164:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0017f168:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 2, 1u, &shc), 0, 0);
    }
L_0017f16c:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0x4u);
    }
L_0017f170:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0017f174:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[0]);
    }
L_0017f178:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[1]);
    }
L_0017f17c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[12]);
    }
L_0017f180:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x8u);
    }
L_0017f184:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017f188:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_0017f18c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_0017f190:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0017f194:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_0017f198:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0017f19c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000000cu, 1, 0);
    }
L_0017f1a0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0017f1a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017f0bc;
        }
    }
L_0017f1a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017f1ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017f1dc;
        }
    }
L_0017f1b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017f1b4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0017f1b8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017f1bc:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x8u);
    }
L_0017f1c0:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_0017f1c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 2, 1u, &shc), 0, 0);
    }
L_0017f1c8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_0017f1cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0017f1d0:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[12]);
    }
L_0017f1d4:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[0]);
    }
L_0017f1d8:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_0017f1dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0017f1e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_0017f1e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017f1e8u)) return;
    }
L_0017f1e8:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_0017f1ec:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_0017f1f0:;
    {
        goto L_0017f000;
    }
L_0017f1f4:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_0017f1f8:;
    {
        goto L_0017f15c;
    }
L_0017f1fc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0017f200:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0017f204:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0017f208:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0017f20c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0017f210:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017f214:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0017f218:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017ee70;
        }
    }
L_0017f21c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017f220:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0017f224:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0017f228:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0017f22c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[12] = v1;
    }
L_0017f230:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[1]);
    }
L_0017f234:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_0017f238:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0017f23c:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[12]);
    }
L_0017f240:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0017f244:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x0000000cu;
        }
    }
L_0017f248:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000002u;
        }
    }
L_0017f24c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017f27c;
        }
    }
L_0017f250:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_0017f254:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017f258:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[1]);
    }
L_0017f25c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017f260:;
    {
        cpu->r[4] = rd32(cpu->r[6] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0017f264:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_0017f268:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x8u);
    }
L_0017f26c:;
    {
        cpu->r[2] = 0x00000018u;
    }
L_0017f270:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_0017f274:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[4]);
    }
L_0017f278:;
    {
        wr32(cpu->r[12] + + 0x8u, cpu->r[6]);
    }
L_0017f27c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017f280:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_0017f284:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_0017f288:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0x8u);
    }
L_0017f28c:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_0017f290:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[4]);
    }
L_0017f294:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[12]);
    }
L_0017f298:;
    {
        goto L_0017f1e0;
    }
L_0017f29c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[12] = v;
    }
L_0017f2a0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0017f2a4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_0017f2a8:;
    {
        goto L_0017ef08;
    }
L_0017f2ac:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0017f2b0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0017f2b4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_0017f2b8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_0017f2bc:;
    {
        goto L_0017ee60;
    }
}

/* _ZN11CConvexHull14TestConstraintERK5CMeshNS_15ProjectionPlaneEii @ 0017f2c0 (arm) */
void fn_0017f2c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017f2c0:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0017f2c4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0017f2c8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017f2cc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0017f2d0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0017f2d4:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_0017f2d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0017f2dc:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
        }
    }
L_0017f2e0:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
        }
    }
L_0017f2e4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x8u);
    }
L_0017f2e8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x14u, cpu->r[12]);
        }
    }
L_0017f2ec:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0] + + 0x18u, cpu->r[12]);
        }
    }
L_0017f2f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017f2f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017f350;
        }
    }
L_0017f2f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0017f2fc:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0xcu);
    }
L_0017f300:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017f304:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_0017f308:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017f344;
        }
    }
L_0017f30c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0017f310:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_0017f314:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017f318:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017f31c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0017f320:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0017f324:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0017f328:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0017f32c:;
    {
        cpu->r[14] = 0x0017f330u; fn_0017ecc8(cpu);
    }
L_0017f330:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0017f334:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017f338:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
        }
    }
L_0017f33c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0017f340:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017f314;
        }
    }
L_0017f344:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017f348:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0017f34c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017f350u)) return;
    }
L_0017f350:;
    {
        cpu->r[1] = rd32(0x0017f358u + + 0x30u);
    }
L_0017f354:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0017f358:;
    {
        cpu->r[2] = rd32(0x0017f360u + + 0x2cu);
    }
L_0017f35c:;
    {
        cpu->r[14] = 0x00000036u;
    }
L_0017f360:;
    {
        cpu->r[3] = rd32(0x0017f368u + + 0x28u);
    }
L_0017f364:;
    {
        cpu->r[1] = add_flags(cpu, 0x0017f36cu, cpu->r[1], 0, 0);
    }
L_0017f368:;
    {
        cpu->r[12] = rd32(0x0017f370u + + 0x24u);
    }
L_0017f36c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0017f374u, cpu->r[2], 0, 0);
    }
L_0017f370:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017f378u, cpu->r[3], 0, 0);
    }
L_0017f374:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0017f378:;
    {
        cpu->r[12] = add_flags(cpu, 0x0017f380u, cpu->r[12], 0, 0);
    }
L_0017f37c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0017f380:;
    {
        cpu->r[14] = 0x0017f384u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0017f384:;
    {
        goto L_0017f2f8;
    }
}

/* _ZN11CConvexHull15ApplyContraintsERK5CMeshNS_15ProjectionPlaneEii @ 0017f398 (arm) */
void fn_0017f398(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017f398:;
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
L_0017f39c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0017f3a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017f3a4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0017f3a8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_0017f3ac:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[2]);
    }
L_0017f3b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0017f3b4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
        }
    }
L_0017f3b8:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
        }
    }
L_0017f3bc:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x14u, cpu->r[12]);
        }
    }
L_0017f3c0:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0] + + 0x18u, cpu->r[12]);
        }
    }
L_0017f3c4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_0017f3c8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0017f3cc:;
    {
        cpu->r[14] = 0x0017f3d0u; imp__Znaj(cpu); /* _Znaj */
    }
L_0017f3d0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[6] + + 0x8u);
    }
L_0017f3d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017f3d8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0017f3dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017f4b0;
        }
    }
L_0017f3e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0017f3e4:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0xcu);
    }
L_0017f3e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017f3ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017f4e8;
        }
    }
L_0017f3f0:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0017f3f4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017f3f8:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_0017f3fc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_0017f400:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017f404:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_0017f408:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0017f40c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0017f410:;
    {
        cpu->r[14] = 0x0017f414u; fn_0017ecc8(cpu);
    }
L_0017f414:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017f418:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017f41c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
        }
    }
L_0017f420:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[6], 2, 2u, &shc));
        }
    }
L_0017f424:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0017f428:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + shifter(cpu->r[7], 2, 2u, &shc), cpu->r[3]);
        }
    }
L_0017f42c:;
    {
        cpu->r[7] = cpu->r[8];
    }
L_0017f430:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0017f434:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0017f438:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017f3fc;
        }
    }
L_0017f43c:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[6] = v;
    }
L_0017f440:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017f444:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017f44c;
        }
    }
L_0017f448:;
    {
        cpu->r[14] = 0x0017f44cu; fn_0018ba60(cpu);
    }
L_0017f44c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017f450:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[8]);
    }
L_0017f454:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0017f458:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[6]);
    }
L_0017f45c:;
    {
        cpu->r[14] = 0x0017f460u; imp__Znaj(cpu); /* _Znaj */
    }
L_0017f460:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0017f464:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0017f468:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_0017f46c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017f478;
        }
    }
L_0017f470:;
    {
        goto L_0017f490;
    }
L_0017f474:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017f478:;
    {
        cpu->r[3] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_0017f47c:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[3]);
    }
L_0017f480:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0017f484:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0017f488:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0017f48c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017f474;
        }
    }
L_0017f490:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0017f494:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017f4a8;
        }
    }
L_0017f498:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0017f49c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0017f4a0:;
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
L_0017f4a4:;
    {
        return fn_0018ba60(cpu);
    }
L_0017f4a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0017f4ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017f4b0u)) return;
    }
L_0017f4b0:;
    {
        cpu->r[1] = rd32(0x0017f4b8u + + 0x40u);
    }
L_0017f4b4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0017f4b8:;
    {
        cpu->r[2] = rd32(0x0017f4c0u + + 0x3cu);
    }
L_0017f4bc:;
    {
        cpu->r[14] = 0x00000036u;
    }
L_0017f4c0:;
    {
        cpu->r[3] = rd32(0x0017f4c8u + + 0x38u);
    }
L_0017f4c4:;
    {
        cpu->r[1] = add_flags(cpu, 0x0017f4ccu, cpu->r[1], 0, 0);
    }
L_0017f4c8:;
    {
        cpu->r[12] = rd32(0x0017f4d0u + + 0x34u);
    }
L_0017f4cc:;
    {
        cpu->r[2] = add_flags(cpu, 0x0017f4d4u, cpu->r[2], 0, 0);
    }
L_0017f4d0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017f4d8u, cpu->r[3], 0, 0);
    }
L_0017f4d4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0017f4d8:;
    {
        cpu->r[12] = add_flags(cpu, 0x0017f4e0u, cpu->r[12], 0, 0);
    }
L_0017f4dc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0017f4e0:;
    {
        cpu->r[14] = 0x0017f4e4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0017f4e4:;
    {
        goto L_0017f3e0;
    }
L_0017f4e8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0017f4ec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017f4f0:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_0017f4f4:;
    {
        goto L_0017f440;
    }
}

/* _ZN11CConvexHull15PrepareVerticesERK5CMeshNS_15ProjectionPlaneEii @ 0017f508 (arm) */
void fn_0017f508(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017f508:;
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
L_0017f50c:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x8u);
    }
L_0017f510:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017f514:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017f518:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0017f51c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0017f520:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0017f524:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0017f528:;
    {
        cpu->r[8] = rd32(0x0017f530u + + 0x1acu);
    }
L_0017f52c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0017f530:;
    {
        cpu->r[14] = 0x0017f534u; imp__Znaj(cpu); /* _Znaj */
    }
L_0017f534:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_0017f538:;
    {
        cpu->r[8] = add_flags(cpu, 0x0017f540u, cpu->r[8], 0, 0);
    }
L_0017f53c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017f540:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0017f544:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017f6a4;
        }
    }
L_0017f548:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0017f54c:;
    {
        cpu->r[7] = rd32(cpu->r[7] + + 0xcu);
    }
L_0017f550:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017f5f4;
        }
    }
L_0017f554:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0017f558:;
    {
        goto L_0017f59c;
    }
L_0017f55c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0017f560:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017f680;
        }
    }
L_0017f564:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017f568:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017f58c;
        }
    }
L_0017f56c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0017f570:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0017f574:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_0017f578:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0017f57c:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0017f580:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0017f584:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[0]);
    }
L_0017f588:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[10]);
    }
L_0017f58c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0017f590:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_0017f594:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 1);
    }
L_0017f598:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0017f5f4;
        }
    }
L_0017f59c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0017f5a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017f5a4:;
    {
        cpu->r[14] = 0x0017f5a8u; fn_0017ecc8(cpu);
    }
L_0017f5a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017f5ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017f58c;
        }
    }
L_0017f5b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0017f5b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0017f5b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017f55c;
        }
    }
L_0017f5bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0017f5c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0017f5c4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_0017f5c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0017f5cc:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0017f5d0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x8u);
    }
L_0017f5d4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_0017f5d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0017f5dc:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[0]);
    }
L_0017f5e0:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[10]);
    }
L_0017f5e4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0017f5e8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 1);
    }
L_0017f5ec:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_0017f5f0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017f59c;
        }
    }
L_0017f5f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0017f5f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0017f5fc:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0017f600:;
    {
        cpu->r[14] = 0x0017f604u; imp__Znaj(cpu); /* _Znaj */
    }
L_0017f604:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_0017f608:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0017f60c:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_0017f610:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017f650;
        }
    }
L_0017f614:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017f618:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0017f61c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_0017f620:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0017f624:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0017f628:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0017f62c:;
    {
        cpu->r[6] = rd32(cpu->r[12] + + 0x8u);
    }
L_0017f630:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_0017f634:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[7]);
    }
L_0017f638:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0017f63c:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[6]);
    }
L_0017f640:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[12]);
    }
L_0017f644:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_0017f648:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0017f64c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017f61c;
        }
    }
L_0017f650:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0017f654:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017f664;
        }
    }
L_0017f658:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0017f65c:;
    {
        cpu->r[14] = 0x0017f660u; fn_0018ba60(cpu);
    }
L_0017f660:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_0017f664:;
    {
        cpu->r[3] = rd32(0x0017f66cu + + 0x74u);
    }
L_0017f668:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_0017f66c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0017f670:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0017f674:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0017f678:;
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
L_0017f67c:;
    {
        imp_qsort(cpu); /* tail qsort */ return;
    }
L_0017f680:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0017f684:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0017f688:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_0017f68c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0017f690:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0017f694:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0017f698:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[0]);
    }
L_0017f69c:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[10]);
    }
L_0017f6a0:;
    {
        goto L_0017f58c;
    }
L_0017f6a4:;
    {
        cpu->r[1] = rd32(0x0017f6acu + + 0x38u);
    }
L_0017f6a8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0017f6ac:;
    {
        cpu->r[2] = rd32(0x0017f6b4u + + 0x34u);
    }
L_0017f6b0:;
    {
        cpu->r[14] = 0x00000036u;
    }
L_0017f6b4:;
    {
        cpu->r[3] = rd32(0x0017f6bcu + + 0x30u);
    }
L_0017f6b8:;
    {
        cpu->r[1] = add_flags(cpu, 0x0017f6c0u, cpu->r[1], 0, 0);
    }
L_0017f6bc:;
    {
        cpu->r[12] = rd32(0x0017f6c4u + + 0x2cu);
    }
L_0017f6c0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0017f6c8u, cpu->r[2], 0, 0);
    }
L_0017f6c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017f6ccu, cpu->r[3], 0, 0);
    }
L_0017f6c8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0017f6cc:;
    {
        cpu->r[12] = add_flags(cpu, 0x0017f6d4u, cpu->r[12], 0, 0);
    }
L_0017f6d0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0017f6d4:;
    {
        cpu->r[14] = 0x0017f6d8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0017f6d8:;
    {
        goto L_0017f548;
    }
}

/* _ZN11CConvexHullC1ERK5CMeshNS_15ProjectionPlaneEii @ 0017f6f4 (arm) */
void fn_0017f6f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017f6f4:;
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
L_0017f6f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0017f6fc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0017f700:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_0017f704:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_0017f708:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0017f70c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017f710:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_0017f714:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0017f718:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_0017f71c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
        }
    }
L_0017f720:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
        }
    }
L_0017f724:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x14u, cpu->r[12]);
        }
    }
L_0017f728:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0] + + 0x18u, cpu->r[12]);
        }
    }
L_0017f72c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_0017f730:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_0017f734:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_0017f738:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0017f73c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0017f740:;
    {
        cpu->r[14] = 0x0017f744u; fn_0017f508(cpu);
    }
L_0017f744:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017f748:;
    {
        cpu->r[14] = 0x0017f74cu; fn_0017ede0(cpu);
    }
L_0017f74c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_0017f750:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0017f754:;
    {
        cpu->r[14] = 0x0017f758u; imp__Znaj(cpu); /* _Znaj */
    }
L_0017f758:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x8u);
    }
L_0017f75c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017f760:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_0017f764:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017f86c;
        }
    }
L_0017f768:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0017f76c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0xcu);
    }
L_0017f770:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017f774:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_0017f778:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
        }
    }
L_0017f77c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017f820;
        }
    }
L_0017f780:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0017f784:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0017f788:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_0017f78c:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_0017f790:;
    {
        goto L_0017f7bc;
    }
L_0017f794:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_0017f798:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017f79c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0017f7a0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_0017f7a4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_0017f7a8:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[8], 2, 2u, &shc), cpu->r[2]);
    }
L_0017f7ac:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0017f7b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0017f7b4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0017f7b8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017f820;
        }
    }
L_0017f7bc:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0017f7c0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_0017f7c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017f794;
        }
    }
L_0017f7c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017f7cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_0017f7d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017f7d4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_0017f7d8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0017f7dc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0017f7e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0017f7e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0017f7e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0017f7ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0017f7f0:;
    {
        cpu->r[14] = 0x0017f7f4u; fn_0017ec3c(cpu);
    }
L_0017f7f4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_0017f7f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017f85c;
        }
    }
L_0017f7fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017f800:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
        }
    }
L_0017f804:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017f794;
        }
    }
L_0017f808:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0017f80c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0017f810:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0017f814:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_0017f818:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0017f81c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017f7bc;
        }
    }
L_0017f820:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017f824:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[8]);
    }
L_0017f828:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017f830;
        }
    }
L_0017f82c:;
    {
        cpu->r[14] = 0x0017f830u; fn_0018ba60(cpu);
    }
L_0017f830:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0017f834:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017f838:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_0017f83c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0017f840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017f848;
        }
    }
L_0017f844:;
    {
        cpu->r[14] = 0x0017f848u; fn_0018ba60(cpu);
    }
L_0017f848:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017f84c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017f850:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0017f854:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0017f858:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017f85cu)) return;
    }
L_0017f85c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017f860:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017f808;
        }
    }
L_0017f864:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0017f868:;
    {
        goto L_0017f7c8;
    }
L_0017f86c:;
    {
        cpu->r[1] = rd32(0x0017f874u + + 0x30u);
    }
L_0017f870:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0017f874:;
    {
        cpu->r[2] = rd32(0x0017f87cu + + 0x2cu);
    }
L_0017f878:;
    {
        cpu->r[14] = 0x00000036u;
    }
L_0017f87c:;
    {
        cpu->r[3] = rd32(0x0017f884u + + 0x28u);
    }
L_0017f880:;
    {
        cpu->r[1] = add_flags(cpu, 0x0017f888u, cpu->r[1], 0, 0);
    }
L_0017f884:;
    {
        cpu->r[12] = rd32(0x0017f88cu + + 0x24u);
    }
L_0017f888:;
    {
        cpu->r[2] = add_flags(cpu, 0x0017f890u, cpu->r[2], 0, 0);
    }
L_0017f88c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017f894u, cpu->r[3], 0, 0);
    }
L_0017f890:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0017f894:;
    {
        cpu->r[12] = add_flags(cpu, 0x0017f89cu, cpu->r[12], 0, 0);
    }
L_0017f898:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0017f89c:;
    {
        cpu->r[14] = 0x0017f8a0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0017f8a0:;
    {
        goto L_0017f768;
    }
}

/* _ZN11CConvexHullC2ERK5CMeshNS_15ProjectionPlaneEii @ 0017f8b4 (arm) */
void fn_0017f8b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017f8b4:;
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
L_0017f8b8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0017f8bc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0017f8c0:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_0017f8c4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_0017f8c8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0017f8cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017f8d0:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_0017f8d4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0017f8d8:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_0017f8dc:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
        }
    }
L_0017f8e0:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
        }
    }
L_0017f8e4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x14u, cpu->r[12]);
        }
    }
L_0017f8e8:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0] + + 0x18u, cpu->r[12]);
        }
    }
L_0017f8ec:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_0017f8f0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_0017f8f4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_0017f8f8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0017f8fc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0017f900:;
    {
        cpu->r[14] = 0x0017f904u; fn_0017f508(cpu);
    }
L_0017f904:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017f908:;
    {
        cpu->r[14] = 0x0017f90cu; fn_0017ede0(cpu);
    }
L_0017f90c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_0017f910:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0017f914:;
    {
        cpu->r[14] = 0x0017f918u; imp__Znaj(cpu); /* _Znaj */
    }
L_0017f918:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x8u);
    }
L_0017f91c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017f920:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_0017f924:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017fa2c;
        }
    }
L_0017f928:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0017f92c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0xcu);
    }
L_0017f930:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017f934:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_0017f938:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
        }
    }
L_0017f93c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017f9e0;
        }
    }
L_0017f940:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0017f944:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0017f948:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_0017f94c:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_0017f950:;
    {
        goto L_0017f97c;
    }
L_0017f954:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_0017f958:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017f95c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0017f960:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_0017f964:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_0017f968:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[8], 2, 2u, &shc), cpu->r[2]);
    }
L_0017f96c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0017f970:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0017f974:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0017f978:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017f9e0;
        }
    }
L_0017f97c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0017f980:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_0017f984:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017f954;
        }
    }
L_0017f988:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017f98c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_0017f990:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017f994:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_0017f998:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0017f99c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0017f9a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0017f9a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0017f9a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0017f9ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0017f9b0:;
    {
        cpu->r[14] = 0x0017f9b4u; fn_0017ec3c(cpu);
    }
L_0017f9b4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_0017f9b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017fa1c;
        }
    }
L_0017f9bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017f9c0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
        }
    }
L_0017f9c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017f954;
        }
    }
L_0017f9c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0017f9cc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0017f9d0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0017f9d4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_0017f9d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0017f9dc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017f97c;
        }
    }
L_0017f9e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017f9e4:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[8]);
    }
L_0017f9e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017f9f0;
        }
    }
L_0017f9ec:;
    {
        cpu->r[14] = 0x0017f9f0u; fn_0018ba60(cpu);
    }
L_0017f9f0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0017f9f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017f9f8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_0017f9fc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0017fa00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017fa08;
        }
    }
L_0017fa04:;
    {
        cpu->r[14] = 0x0017fa08u; fn_0018ba60(cpu);
    }
L_0017fa08:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017fa0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017fa10:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0017fa14:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0017fa18:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017fa1cu)) return;
    }
L_0017fa1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017fa20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017f9c8;
        }
    }
L_0017fa24:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0017fa28:;
    {
        goto L_0017f988;
    }
L_0017fa2c:;
    {
        cpu->r[1] = rd32(0x0017fa34u + + 0x30u);
    }
L_0017fa30:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0017fa34:;
    {
        cpu->r[2] = rd32(0x0017fa3cu + + 0x2cu);
    }
L_0017fa38:;
    {
        cpu->r[14] = 0x00000036u;
    }
L_0017fa3c:;
    {
        cpu->r[3] = rd32(0x0017fa44u + + 0x28u);
    }
L_0017fa40:;
    {
        cpu->r[1] = add_flags(cpu, 0x0017fa48u, cpu->r[1], 0, 0);
    }
L_0017fa44:;
    {
        cpu->r[12] = rd32(0x0017fa4cu + + 0x24u);
    }
L_0017fa48:;
    {
        cpu->r[2] = add_flags(cpu, 0x0017fa50u, cpu->r[2], 0, 0);
    }
L_0017fa4c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017fa54u, cpu->r[3], 0, 0);
    }
L_0017fa50:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0017fa54:;
    {
        cpu->r[12] = add_flags(cpu, 0x0017fa5cu, cpu->r[12], 0, 0);
    }
L_0017fa58:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0017fa5c:;
    {
        cpu->r[14] = 0x0017fa60u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0017fa60:;
    {
        goto L_0017f928;
    }
}

/* _ZN15Lib3D_NameSpace5ISqrtEj @ 0017fa74 (arm) */
void fn_0017fa74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017fa74:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 16u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_0017fa78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017fa98;
        }
    }
L_0017fa7c:;
    {
        { uint32_t v = cpu->r[0] & 0xff000000u; set_nz(cpu, v); }
    }
L_0017fa80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017fab4;
        }
    }
L_0017fa84:;
    {
        cpu->r[3] = rd32(0x0017fa8cu + + 0x58u);
    }
L_0017fa88:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 20u, &shc); cpu->r[0] = v;
    }
L_0017fa8c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017fa94u, cpu->r[3], 0, 0);
    }
L_0017fa90:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0017fa94:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017fa98:;
    {
        { uint32_t v = cpu->r[0] & 0x0000f000u; set_nz(cpu, v); }
    }
L_0017fa9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017facc;
        }
    }
L_0017faa0:;
    {
        cpu->r[3] = rd32(0x0017faa8u + + 0x40u);
    }
L_0017faa4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017faacu, cpu->r[3], 0, 0);
    }
L_0017faa8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0017faac:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 10u, &shc); cpu->r[0] = v;
    }
L_0017fab0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017fab4:;
    {
        cpu->r[3] = rd32(0x0017fabcu + + 0x30u);
    }
L_0017fab8:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 12u, &shc); cpu->r[0] = v;
    }
L_0017fabc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017fac4u, cpu->r[3], 0, 0);
    }
L_0017fac0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0017fac4:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 4u, &shc); cpu->r[0] = v;
    }
L_0017fac8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017facc:;
    {
        cpu->r[3] = rd32(0x0017fad4u + + 0x1cu);
    }
L_0017fad0:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 4u, &shc); cpu->r[0] = v;
    }
L_0017fad4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017fadcu, cpu->r[3], 0, 0);
    }
L_0017fad8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0017fadc:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 8u, &shc); cpu->r[0] = v;
    }
L_0017fae0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15Lib3D_NameSpace14InterpolateIntEiii @ 0017faf4 (arm) */
void fn_0017faf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017faf4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0017faf8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1]; cpu->r[1] = v;
    }
L_0017fafc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0017fb00:;
    {
        { int32_t v = (int32_t)(cpu->r[1] << 1); cpu->r[1] = (uint32_t)(v >> 10); }
    }
L_0017fb04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_0017fb08:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15Lib3D_NameSpace14InterpolateIntEiiiii @ 0017fb0c (arm) */
void fn_0017fb0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017fb0c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0017fb10:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0017fb14:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017fb18:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_0017fb1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017fb50;
        }
    }
L_0017fb20:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0017fb24:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = cpu->r[0];
        }
    }
L_0017fb28:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
        }
    }
L_0017fb2c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = cpu->r[1];
        }
    }
L_0017fb30:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
        }
    }
L_0017fb34:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = cpu->r[0];
        }
    }
L_0017fb38:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_0017fb3c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 0);
    }
L_0017fb40:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_0017fb44:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_0017fb48:;
    {
        cpu->r[14] = 0x0017fb4cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017fb4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_0017fb50:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0017fb54:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017fb58u)) return;
    }
}

/* _ZN15Lib3D_NameSpace21InterpolateIntLimitedEiiiii @ 0017fb58 (arm) */
void fn_0017fb58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017fb58:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0017fb5c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0017fb60:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017fb64:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_0017fb68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017fbb4;
        }
    }
L_0017fb6c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0017fb70:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
        }
    }
L_0017fb74:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = cpu->r[0];
        }
    }
L_0017fb78:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
        }
    }
L_0017fb7c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = cpu->r[1];
        }
    }
L_0017fb80:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = cpu->r[0];
        }
    }
L_0017fb84:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0017fb88:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_0017fb8c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017fbb4;
        }
    }
L_0017fb90:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0017fb94:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_0017fb98:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017fbb4;
        }
    }
L_0017fb9c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_0017fba0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 0);
    }
L_0017fba4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_0017fba8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_0017fbac:;
    {
        cpu->r[14] = 0x0017fbb0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017fbb0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_0017fbb4:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0017fbb8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017fbbcu)) return;
    }
}

/* _ZN15Lib3D_NameSpace16InterpolateFloatEfffff @ 0017fbbc (arm) */
void fn_0017fbbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017fbbc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13]);
    }
L_0017fbc0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_0017fbc4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_0017fbc8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0017fbcc:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_0017fbd0:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_0017fbd4:;
    {
        vfp_sync_flags(cpu);
    }
L_0017fbd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017fc10;
        }
    }
L_0017fbdc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,12));
    }
L_0017fbe0:;
    {
        vfp_sync_flags(cpu);
    }
L_0017fbe4:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 11, 13, 11);
        }
    }
L_0017fbe8:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 11, 11, 15);
        }
    }
L_0017fbec:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,10) = *vfp_s(cpu,14);
        }
    }
L_0017fbf0:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,12);
        }
    }
L_0017fbf4:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,12) = *vfp_s(cpu,10);
        }
    }
L_0017fbf8:;
    {
        vfp_vsub(cpu, 11, 11, 15);
    }
L_0017fbfc:;
    {
        vfp_vsub(cpu, 12, 12, 14);
    }
L_0017fc00:;
    {
        vfp_vmul(cpu, 12, 12, 11);
    }
L_0017fc04:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_0017fc08:;
    {
        vfp_vdiv(cpu, 15, 12, 15);
    }
L_0017fc0c:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_0017fc10:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0017fc14:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15Lib3D_NameSpace23InterpolateFloatLimitedEfffff @ 0017fc18 (arm) */
void fn_0017fc18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017fc18:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13]);
    }
L_0017fc1c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_0017fc20:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_0017fc24:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0017fc28:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[1];
    }
L_0017fc2c:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_0017fc30:;
    {
        vfp_sync_flags(cpu);
    }
L_0017fc34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017fc88;
        }
    }
L_0017fc38:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,11));
    }
L_0017fc3c:;
    {
        vfp_sync_flags(cpu);
    }
L_0017fc40:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 12, 13, 12);
        }
    }
L_0017fc44:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 12, 12, 15);
        }
    }
L_0017fc48:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,10) = *vfp_s(cpu,14);
        }
    }
L_0017fc4c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,15));
    }
L_0017fc50:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,11);
        }
    }
L_0017fc54:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,11) = *vfp_s(cpu,10);
        }
    }
L_0017fc58:;
    {
        vfp_sync_flags(cpu);
    }
L_0017fc5c:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_0017fc60:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0017fc88;
        }
    }
L_0017fc64:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,13));
    }
L_0017fc68:;
    {
        vfp_sync_flags(cpu);
    }
L_0017fc6c:;
    {
        if (cond_test(cpu, 14)) {
        vfp_vsub(cpu, 12, 12, 15);
        }
    }
L_0017fc70:;
    {
        if (cond_test(cpu, 14)) {
        vfp_vsub(cpu, 11, 11, 14);
        }
    }
L_0017fc74:;
    {
        if (cond_test(cpu, 14)) {
        vfp_vmul(cpu, 12, 11, 12);
        }
    }
L_0017fc78:;
    {
        if (cond_test(cpu, 14)) {
        vfp_vsub(cpu, 15, 13, 15);
        }
    }
L_0017fc7c:;
    {
        if (cond_test(cpu, 14)) {
        vfp_vdiv(cpu, 15, 12, 15);
        }
    }
L_0017fc80:;
    {
        if (cond_test(cpu, 14)) {
        vfp_vadd(cpu, 15, 15, 14);
        }
    }
L_0017fc84:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,11);
        }
    }
L_0017fc88:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0017fc8c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15Lib3D_NameSpace6ISqrtIEj @ 0017fc90 (arm) */
void fn_0017fc90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017fc90:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 16u, &shc); cpu->r[3] = v;
    }
L_0017fc94:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 16u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_0017fc98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017fce4;
        }
    }
L_0017fc9c:;
    {
        uint32_t v = cpu->r[0] & 0xff000000u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_0017fca0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017fd24;
        }
    }
L_0017fca4:;
    {
        uint32_t v = cpu->r[0] & ~ 0xff000000u; cpu->r[3] = v;
    }
L_0017fca8:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00f00000u; cpu->r[3] = v;
    }
L_0017fcac:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0017fcb0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0017fcb4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0017fcb8:;
    {
        cpu->r[3] = rd32(0x0017fcc0u + + 0xacu);
    }
L_0017fcbc:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 20u, &shc); cpu->r[2] = v;
    }
L_0017fcc0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0017fcc4:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0017fcc8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017fcd0u, cpu->r[3], 0, 0);
    }
L_0017fccc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0017fcd0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0017fcd4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0017fcd8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[0] = v;
    }
L_0017fcdc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 3, 20u, &shc), 0, 0);
    }
L_0017fce0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017fce4:;
    {
        { uint32_t v = cpu->r[0] & 0x0000f000u; set_nz(cpu, v); }
    }
L_0017fce8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017fd10;
        }
    }
L_0017fcec:;
    {
        uint32_t v = cpu->r[0] & 0x0000000fu; cpu->r[2] = v;
    }
L_0017fcf0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0017fcf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017fd64;
        }
    }
L_0017fcf8:;
    {
        cpu->r[3] = rd32(0x0017fd00u + + 0x70u);
    }
L_0017fcfc:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 4u, &shc); cpu->r[0] = v;
    }
L_0017fd00:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017fd08u, cpu->r[3], 0, 0);
    }
L_0017fd04:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0017fd08:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 8u, &shc); cpu->r[0] = v;
    }
L_0017fd0c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017fd10:;
    {
        cpu->r[3] = rd32(0x0017fd18u + + 0x5cu);
    }
L_0017fd14:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017fd1cu, cpu->r[3], 0, 0);
    }
L_0017fd18:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0017fd1c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 10u, &shc); cpu->r[0] = v;
    }
L_0017fd20:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017fd24:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 20u, &shc); cpu->r[2] = v;
    }
L_0017fd28:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 20u, &shc); cpu->r[2] = v;
    }
L_0017fd2c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0017fd30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017fd64;
        }
    }
L_0017fd34:;
    {
        cpu->r[3] = rd32(0x0017fd3cu + + 0x3cu);
    }
L_0017fd38:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 12u, &shc); cpu->r[2] = v;
    }
L_0017fd3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0017fd40:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[0] = v;
    }
L_0017fd44:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017fd4cu, cpu->r[3], 0, 0);
    }
L_0017fd48:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0017fd4c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0017fd50:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0017fd54:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[0] = v;
    }
L_0017fd58:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 3, 12u, &shc), 0, 0);
    }
L_0017fd5c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 4u, &shc); cpu->r[0] = v;
    }
L_0017fd60:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017fd64:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0017fd68:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15Lib3D_NameSpace6ISqrt4Ej @ 0017fd7c (arm) */
void fn_0017fd7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017fd7c:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 16u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_0017fd80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017fda4;
        }
    }
L_0017fd84:;
    {
        { uint32_t v = cpu->r[0] & 0xff000000u; set_nz(cpu, v); }
    }
L_0017fd88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017fdc0;
        }
    }
L_0017fd8c:;
    {
        cpu->r[3] = rd32(0x0017fd94u + + 0x58u);
    }
L_0017fd90:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 20u, &shc); cpu->r[0] = v;
    }
L_0017fd94:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017fd9cu, cpu->r[3], 0, 0);
    }
L_0017fd98:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0017fd9c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[0] = v;
    }
L_0017fda0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017fda4:;
    {
        { uint32_t v = cpu->r[0] & 0x0000f000u; set_nz(cpu, v); }
    }
L_0017fda8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017fdd4;
        }
    }
L_0017fdac:;
    {
        cpu->r[3] = rd32(0x0017fdb4u + + 0x3cu);
    }
L_0017fdb0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017fdb8u, cpu->r[3], 0, 0);
    }
L_0017fdb4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0017fdb8:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 6u, &shc); cpu->r[0] = v;
    }
L_0017fdbc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017fdc0:;
    {
        cpu->r[3] = rd32(0x0017fdc8u + + 0x2cu);
    }
L_0017fdc4:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 12u, &shc); cpu->r[0] = v;
    }
L_0017fdc8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017fdd0u, cpu->r[3], 0, 0);
    }
L_0017fdcc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0017fdd0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017fdd4:;
    {
        cpu->r[3] = rd32(0x0017fddcu + + 0x1cu);
    }
L_0017fdd8:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 4u, &shc); cpu->r[0] = v;
    }
L_0017fddc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017fde4u, cpu->r[3], 0, 0);
    }
L_0017fde0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0017fde4:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 4u, &shc); cpu->r[0] = v;
    }
L_0017fde8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15Lib3D_NameSpace6ISqrt8Ej @ 0017fdfc (arm) */
void fn_0017fdfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017fdfc:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 16u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_0017fe00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017fe24;
        }
    }
L_0017fe04:;
    {
        { uint32_t v = cpu->r[0] & 0xff000000u; set_nz(cpu, v); }
    }
L_0017fe08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017fe40;
        }
    }
L_0017fe0c:;
    {
        cpu->r[3] = rd32(0x0017fe14u + + 0x58u);
    }
L_0017fe10:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 20u, &shc); cpu->r[0] = v;
    }
L_0017fe14:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017fe1cu, cpu->r[3], 0, 0);
    }
L_0017fe18:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0017fe1c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_0017fe20:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017fe24:;
    {
        { uint32_t v = cpu->r[0] & 0x0000f000u; set_nz(cpu, v); }
    }
L_0017fe28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017fe58;
        }
    }
L_0017fe2c:;
    {
        cpu->r[3] = rd32(0x0017fe34u + + 0x3cu);
    }
L_0017fe30:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017fe38u, cpu->r[3], 0, 0);
    }
L_0017fe34:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0017fe38:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 2u, &shc); cpu->r[0] = v;
    }
L_0017fe3c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017fe40:;
    {
        cpu->r[3] = rd32(0x0017fe48u + + 0x2cu);
    }
L_0017fe44:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 12u, &shc); cpu->r[0] = v;
    }
L_0017fe48:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017fe50u, cpu->r[3], 0, 0);
    }
L_0017fe4c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0017fe50:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[0] = v;
    }
L_0017fe54:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017fe58:;
    {
        cpu->r[3] = rd32(0x0017fe60u + + 0x18u);
    }
L_0017fe5c:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 4u, &shc); cpu->r[0] = v;
    }
L_0017fe60:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017fe68u, cpu->r[3], 0, 0);
    }
L_0017fe64:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0017fe68:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15Lib3D_NameSpace6Atan2iEii @ 0017fe7c (arm) */
void fn_0017fe7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017fe7c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017fe80:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0017fe84:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0017fe88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017fe9c;
        }
    }
L_0017fe8c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0017fe90:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000200u;
        }
    }
L_0017fe94:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000600u;
        }
    }
L_0017fe98:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017fe9cu)) return;
    }
L_0017fe9c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017ff00;
        }
    }
L_0017fea0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0017fea4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017fed0;
        }
    }
L_0017fea8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0017feac:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017ff38;
        }
    }
L_0017feb0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 9u, &shc); cpu->r[0] = v;
    }
L_0017feb4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0017feb8:;
    {
        cpu->r[14] = 0x0017febcu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017febc:;
    {
        cpu->r[3] = rd32(0x0017fec4u + + 0x124u);
    }
L_0017fec0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017fec8u, cpu->r[3], 0, 0);
    }
L_0017fec4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0017fec8:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x14u);
    }
L_0017fecc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017fed0u)) return;
    }
L_0017fed0:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_0017fed4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0017fed8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017ff78;
        }
    }
L_0017fedc:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 9u, &shc); cpu->r[0] = v;
    }
L_0017fee0:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0017fee4:;
    {
        cpu->r[14] = 0x0017fee8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017fee8:;
    {
        cpu->r[3] = rd32(0x0017fef0u + + 0xfcu);
    }
L_0017feec:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017fef4u, cpu->r[3], 0, 0);
    }
L_0017fef0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0017fef4:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x14u);
    }
L_0017fef8:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000800u, cpu->r[0], 1, 0);
    }
L_0017fefc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017ff00u)) return;
    }
L_0017ff00:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0017ff04:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_0017ff08:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017ff98;
        }
    }
L_0017ff0c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0017ff10:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017ff58;
        }
    }
L_0017ff14:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 9u, &shc); cpu->r[0] = v;
    }
L_0017ff18:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0017ff1c:;
    {
        cpu->r[14] = 0x0017ff20u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017ff20:;
    {
        cpu->r[3] = rd32(0x0017ff28u + + 0xc8u);
    }
L_0017ff24:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017ff2cu, cpu->r[3], 0, 0);
    }
L_0017ff28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0017ff2c:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x14u);
    }
L_0017ff30:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000400u, cpu->r[0], 1, 0);
    }
L_0017ff34:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017ff38u)) return;
    }
L_0017ff38:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 9u, &shc); cpu->r[0] = v;
    }
L_0017ff3c:;
    {
        cpu->r[4] = rd32(0x0017ff44u + + 0xb0u);
    }
L_0017ff40:;
    {
        cpu->r[14] = 0x0017ff44u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017ff44:;
    {
        cpu->r[4] = add_flags(cpu, 0x0017ff4cu, cpu->r[4], 0, 0);
    }
L_0017ff48:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0017ff4c:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x14u);
    }
L_0017ff50:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000200u, cpu->r[0], 1, 0);
    }
L_0017ff54:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017ff58u)) return;
    }
L_0017ff58:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 9u, &shc); cpu->r[0] = v;
    }
L_0017ff5c:;
    {
        cpu->r[4] = rd32(0x0017ff64u + + 0x94u);
    }
L_0017ff60:;
    {
        cpu->r[14] = 0x0017ff64u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017ff64:;
    {
        cpu->r[4] = add_flags(cpu, 0x0017ff6cu, cpu->r[4], 0, 0);
    }
L_0017ff68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0017ff6c:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x14u);
    }
L_0017ff70:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000200u, 0, 0);
    }
L_0017ff74:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017ff78u)) return;
    }
L_0017ff78:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 9u, &shc); cpu->r[0] = v;
    }
L_0017ff7c:;
    {
        cpu->r[14] = 0x0017ff80u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017ff80:;
    {
        cpu->r[3] = rd32(0x0017ff88u + + 0x74u);
    }
L_0017ff84:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017ff8cu, cpu->r[3], 0, 0);
    }
L_0017ff88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0017ff8c:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x14u);
    }
L_0017ff90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000600u, 0, 0);
    }
L_0017ff94:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017ff98u)) return;
    }
L_0017ff98:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_0017ff9c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0017ffa0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0017ffc4;
        }
    }
L_0017ffa4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 9u, &shc); cpu->r[0] = v;
    }
L_0017ffa8:;
    {
        cpu->r[14] = 0x0017ffacu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017ffac:;
    {
        cpu->r[3] = rd32(0x0017ffb4u + + 0x4cu);
    }
L_0017ffb0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017ffb8u, cpu->r[3], 0, 0);
    }
L_0017ffb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0017ffb8:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x14u);
    }
L_0017ffbc:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000600u, cpu->r[0], 1, 0);
    }
L_0017ffc0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017ffc4u)) return;
    }
L_0017ffc4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 9u, &shc); cpu->r[0] = v;
    }
L_0017ffc8:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0017ffcc:;
    {
        cpu->r[14] = 0x0017ffd0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017ffd0:;
    {
        cpu->r[3] = rd32(0x0017ffd8u + + 0x2cu);
    }
L_0017ffd4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017ffdcu, cpu->r[3], 0, 0);
    }
L_0017ffd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0017ffdc:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x14u);
    }
L_0017ffe0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000400u, 0, 0);
    }
L_0017ffe4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017ffe8u)) return;
    }
}

/* _ZN15Lib3D_NameSpace10GetYOrientERK8Vector4sS2_ @ 00180008 (arm) */
void fn_00180008(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180008:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_0018000c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_00180010:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00180014:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00180018:;
    {
        cpu->r[4] = rd32(cpu->r[1]);
    }
L_0018001c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00180020:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 0);
    }
L_00180024:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00180028:;
    {
        return fn_0017fe7c(cpu);
    }
}
