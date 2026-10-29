#include "functions.h"

/* _ZN3vox29DriverCallbackSourceInterface18FillBufferStereo16EPii @ 001dc6b4 (arm) */
void fn_001dc6b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dc6b4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x50u);
    }
L_001dc6b8:;
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
L_001dc6bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001dc6c0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001dc6c4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001dc6c8:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001dc6cc:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001dc6d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dc6dc;
        }
    }
L_001dc6d4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001dc6d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dc6dcu)) return;
    }
L_001dc6dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001dc6e0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x60u);
    }
L_001dc6e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001dc6e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001dc6ec:;
    {
        cpu->r[10] = rd8(cpu->r[3] + + 0x14u);
    }
L_001dc6f0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001dc6f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dc6d4;
        }
    }
L_001dc6f8:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x40u);
    }
L_001dc6fc:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0xcu);
    }
L_001dc700:;
    {
        uint32_t v = cpu->r[9] * cpu->r[7]; cpu->r[9] = v;
    }
L_001dc704:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 14u, &shc); cpu->r[11] = v;
    }
L_001dc708:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000003u, 0, 0);
    }
L_001dc70c:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 2u, &shc); cpu->r[11] = v;
    }
L_001dc710:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001dc714:;
    {
        cpu->r[14] = 0x001dc718u; fn_001db4fc(cpu);
    }
L_001dc718:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001dc71c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001dc720:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dc724:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001dc728:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x50u, cpu->r[3]);
        }
    }
L_001dc72c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dc6d4;
        }
    }
L_001dc730:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_001dc734:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001dc738:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001dc73c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dc740:;
    {
        cpu->r[14] = 0x001dc744u; fn_001dc420(cpu);
    }
L_001dc744:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x40u);
    }
L_001dc748:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001dc74c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000003u, 0, 0);
    }
L_001dc750:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001dc754:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 2u, &shc); cpu->r[0] = v;
    }
L_001dc758:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 14u, &shc); cpu->r[0] = v;
    }
L_001dc75c:;
    {
        cpu->r[14] = 0x001dc760u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001dc760:;
    {
        cpu->r[8] = rd32(cpu->r[8] + + 0x4u);
    }
L_001dc764:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_001dc768:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001dc988;
        }
    }
L_001dc76c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x20u);
    }
L_001dc770:;
    {
        cpu->r[11] = cpu->r[10];
    }
L_001dc774:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001dc778:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_001dc77c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_001dc780:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001dc784:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
        }
    }
L_001dc788:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001dc798;
        }
    }
L_001dc78c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001dc790:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[7];
        }
    }
L_001dc794:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001dc798:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x24u);
    }
L_001dc79c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x2cu);
    }
L_001dc7a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dc7a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dc974;
        }
    }
L_001dc7a8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001dc7ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dc7b0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001dc7b4:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
        }
    }
L_001dc7b8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dc7d8;
        }
    }
L_001dc7bc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x28u);
    }
L_001dc7c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001dc7c4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_001dc7c8:;
    {
        cpu->r[14] = 0x001dc7ccu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001dc7cc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001dc7d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001dc7d4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_001dc7d8:;
    {
        uint32_t v = cpu->r[3] | cpu->r[11]; cpu->r[11] = v;
        set_nz(cpu, v);
    }
L_001dc7dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dc8d4;
        }
    }
L_001dc7e0:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_001dc7e4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001dc7e8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dc8c8;
        }
    }
L_001dc7ec:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001dc7f0:;
    {
        cpu->r[11] = cpu->r[5];
    }
L_001dc7f4:;
    {
        goto L_001dc8a0;
    }
L_001dc7f8:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 14u, &shc); cpu->r[12] = v;
    }
L_001dc7fc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001dc800:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001dc804:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 18u, &shc); cpu->r[3] = v;
    }
L_001dc808:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_001dc80c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_001dc810:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_001dc814:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_001dc818:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001dc81c:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
    }
L_001dc820:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001dc824:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x2u);
    }
L_001dc828:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[8] + cpu->r[12]);
    }
L_001dc82c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 18u, &shc); cpu->r[3] = v;
    }
L_001dc830:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[8] + cpu->r[2]);
    }
L_001dc834:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[9], 1, 1);
    }
L_001dc838:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = cpu->r[5] | 0x00000001u; cpu->r[5] = v;
        }
    }
L_001dc83c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x2u);
    }
L_001dc840:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001dc844:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 0);
    }
L_001dc848:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001dc84c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001dc850:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_001dc854:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[2] = v;
    }
L_001dc858:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
        }
    }
L_001dc85c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[1] = v;
    }
L_001dc860:;
    {
        cpu->r[5] = rd32(cpu->r[13]);
    }
L_001dc864:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001dc868:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_001dc86c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_001dc870:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[2], 1, 14u, &shc), 0, 0);
    }
L_001dc874:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 1, 14u, &shc), 0, 0);
    }
L_001dc878:;
    {
        uint32_t v = cpu->r[2] * cpu->r[10]; cpu->r[2] = v;
    }
L_001dc87c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[10]; cpu->r[1] = v;
    }
L_001dc880:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 14u, &shc), 0, 0);
    }
L_001dc884:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001dc888:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 1, 14u, &shc), 0, 0);
    }
L_001dc88c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_001dc890:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001dc894:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dc8c4;
        }
    }
L_001dc898:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x40u);
    }
L_001dc89c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_001dc8a0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[9], 1, 1);
    }
L_001dc8a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dc7f8;
        }
    }
L_001dc8a8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001dc8ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001dc8b0:;
    {
        cpu->r[14] = 0x001dc8b4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001dc8b4:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001dc8b8:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[0], 1, 31u, &shc), cpu->r[2], 1, 0);
    }
L_001dc8bc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001dc8c0:;
    {
        goto L_001dc7f8;
    }
L_001dc8c4:;
    {
        cpu->r[5] = cpu->r[11];
    }
L_001dc8c8:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x28u);
    }
L_001dc8cc:;
    {
        wr32(cpu->r[5] + + 0x2cu, cpu->r[10]);
    }
L_001dc8d0:;
    {
        goto L_001dc6d4;
    }
L_001dc8d4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001dc8d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dc8cc;
        }
    }
L_001dc8dc:;
    {
        cpu->r[9] = rd32(cpu->r[13]);
    }
L_001dc8e0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001dc8e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dc8cc;
        }
    }
L_001dc8e8:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 14u, &shc); cpu->r[1] = v;
    }
L_001dc8ec:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 18u, &shc); cpu->r[3] = v;
    }
L_001dc8f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001dc8f4:;
    {
        cpu->r[9] = rd32(cpu->r[13]);
    }
L_001dc8f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001dc8fc:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001dc900:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_001dc904:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
    }
L_001dc908:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[8] + cpu->r[1]);
    }
L_001dc90c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 18u, &shc); cpu->r[3] = v;
    }
L_001dc910:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x2u);
    }
L_001dc914:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001dc918:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[8] + cpu->r[12]);
    }
L_001dc91c:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 1);
    }
L_001dc920:;
    {
        cpu->r[7] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x2u);
    }
L_001dc924:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_001dc928:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001dc92c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_001dc930:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x4u);
    }
L_001dc934:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[12] = v;
    }
L_001dc938:;
    {
        uint32_t v = cpu->r[3] * cpu->r[7]; cpu->r[3] = v;
    }
L_001dc93c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 1, 14u, &shc), 0, 0);
    }
L_001dc940:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 14u, &shc), 0, 0);
    }
L_001dc944:;
    {
        uint32_t v = cpu->r[10] * cpu->r[1]; cpu->r[1] = v;
    }
L_001dc948:;
    {
        uint32_t v = cpu->r[10] * cpu->r[3]; cpu->r[3] = v;
    }
L_001dc94c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 1, 14u, &shc), 0, 0);
    }
L_001dc950:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_001dc954:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 1, 14u, &shc), 0, 0);
    }
L_001dc958:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[9]);
    }
L_001dc95c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_001dc960:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001dc964:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_001dc968:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dc8e8;
        }
    }
L_001dc96c:;
    {
        wr32(cpu->r[5] + + 0x2cu, cpu->r[10]);
    }
L_001dc970:;
    {
        goto L_001dc6d4;
    }
L_001dc974:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001dc978:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x28u);
    }
L_001dc97c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001dc980:;
    {
        wr8(cpu->r[5] + + 0x24u, cpu->r[2]);
    }
L_001dc984:;
    {
        goto L_001dc7d8;
    }
L_001dc988:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x20u);
    }
L_001dc98c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001dc990:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_001dc994:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001dc998:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001dc99c:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001dc9b8;
        }
    }
L_001dc9a0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001dc9a4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001dc9a8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_001dc9ac:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_001dc9b0:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001dc9b4:;
    {
        goto L_001dc780;
    }
L_001dc9b8:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001dc9bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001dc9c0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_001dc9c4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_001dc9c8:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_001dc9cc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001dc9d0:;
    {
        goto L_001dc780;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface16GetStereoPanningEPiS1_ @ 001dc9d4 (arm) */
void fn_001dc9d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dc9d4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dc9d8:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001dc9dc:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001dc9e0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x90u);
    }
L_001dc9e4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001dc9e8:;
    {
        cpu->r[3] = rd32(0x001dc9f0u + + 0x17cu);
    }
L_001dc9ec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001dc9f0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001dc9f8u, cpu->r[3], 0, 0);
    }
L_001dc9f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dca98;
        }
    }
L_001dc9f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x70u);
    }
L_001dc9fc:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_001dca00:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x6cu);
    }
L_001dca04:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x74u);
    }
L_001dca08:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_001dca0c:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_001dca10:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_001dca14:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001dca18:;
    {
        vfp_sync_flags(cpu);
    }
L_001dca1c:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vdiv(cpu, 15, 14, 15);
        }
    }
L_001dca20:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dcb20;
        }
    }
L_001dca24:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001dca2cu + + 0x130u);
    }
L_001dca28:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_001dca2c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001dca34u + + 0x12cu);
    }
L_001dca30:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_001dca34:;
    {
        vfp_vsqrt(cpu, 16, 15);
    }
L_001dca38:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,16));
    }
L_001dca3c:;
    {
        vfp_sync_flags(cpu);
    }
L_001dca40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dca50;
        }
    }
L_001dca44:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001dca48:;
    {
        cpu->r[14] = 0x001dca4cu; imp_sqrtf(cpu); /* sqrtf */
    }
L_001dca4c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_001dca50:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001dca58u + + 0x104u);
    }
L_001dca54:;
    {
        vfp_vmls(cpu, 14, 16, 16);
    }
L_001dca58:;
    {
        vfp_vsqrt(cpu, 15, 14);
    }
L_001dca5c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,15));
    }
L_001dca60:;
    {
        vfp_sync_flags(cpu);
    }
L_001dca64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dca74;
        }
    }
L_001dca68:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001dca6c:;
    {
        cpu->r[14] = 0x001dca70u; imp_sqrtf(cpu); /* sqrtf */
    }
L_001dca70:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_001dca74:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001dca7cu + + 0xe8u);
    }
L_001dca78:;
    {
        vfp_vmul(cpu, 13, 16, 14);
    }
L_001dca7c:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_001dca80:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,13);
    }
L_001dca84:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_001dca88:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001dca8c:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dca90:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001dca94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dca98u)) return;
    }
L_001dca98:;
    {
        cpu->r[2] = rd32(0x001dcaa0u + + 0xd0u);
    }
L_001dca9c:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[0] + + 0x70u);
    }
L_001dcaa0:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[0] + + 0x6cu);
    }
L_001dcaa4:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[0] + + 0x74u);
    }
L_001dcaa8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001dcaac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001dcab0:;
    {
        vfp_vsub(cpu, 8, 8, 15);
    }
L_001dcab4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3]);
    }
L_001dcab8:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[3] + + 0x18u);
    }
L_001dcabc:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[3] + + 0x2cu);
    }
L_001dcac0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x24u);
    }
L_001dcac4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x20u);
    }
L_001dcac8:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[3] + + 0x28u);
    }
L_001dcacc:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_001dcad0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x1cu);
    }
L_001dcad4:;
    {
        vfp_vmul(cpu, 14, 8, 8);
    }
L_001dcad8:;
    {
        vfp_vsub(cpu, 9, 9, 11);
    }
L_001dcadc:;
    {
        vfp_vmul(cpu, 11, 5, 7);
    }
L_001dcae0:;
    {
        vfp_vmla(cpu, 14, 9, 9);
    }
L_001dcae4:;
    {
        vfp_vnmls(cpu, 11, 12, 15);
    }
L_001dcae8:;
    {
        vfp_vmul(cpu, 12, 12, 6);
    }
L_001dcaec:;
    {
        vfp_vsub(cpu, 10, 4, 10);
    }
L_001dcaf0:;
    {
        vfp_vnmls(cpu, 12, 13, 5);
    }
L_001dcaf4:;
    {
        vfp_vmla(cpu, 14, 10, 10);
    }
L_001dcaf8:;
    {
        vfp_vmul(cpu, 13, 13, 15);
    }
L_001dcafc:;
    {
        vfp_vmul(cpu, 15, 11, 11);
    }
L_001dcb00:;
    {
        vfp_vnmls(cpu, 13, 6, 7);
    }
L_001dcb04:;
    {
        vfp_vmla(cpu, 15, 12, 12);
    }
L_001dcb08:;
    {
        vfp_vsqrt(cpu, 14, 14);
    }
L_001dcb0c:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_001dcb10:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_001dcb14:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_001dcb18:;
    {
        vfp_sync_flags(cpu);
    }
L_001dcb1c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001dcb28;
        }
    }
L_001dcb20:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001dcb28u + + 0x40u);
    }
L_001dcb24:;
    {
        goto L_001dca24;
    }
L_001dcb28:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001dcb2c:;
    {
        vfp_sync_flags(cpu);
    }
L_001dcb30:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dcb20;
        }
    }
L_001dcb34:;
    {
        vfp_vdiv(cpu, 7, 8, 14);
    }
L_001dcb38:;
    {
        vfp_vdiv(cpu, 8, 11, 15);
    }
L_001dcb3c:;
    {
        vfp_vdiv(cpu, 9, 9, 14);
    }
L_001dcb40:;
    {
        vfp_vdiv(cpu, 11, 12, 15);
    }
L_001dcb44:;
    {
        vfp_vdiv(cpu, 12, 10, 14);
    }
L_001dcb48:;
    {
        vfp_vdiv(cpu, 14, 13, 15);
    }
L_001dcb4c:;
    {
        vfp_vmul(cpu, 15, 7, 8);
    }
L_001dcb50:;
    {
        vfp_vmla(cpu, 15, 9, 11);
    }
L_001dcb54:;
    {
        vfp_vmla(cpu, 15, 12, 14);
    }
L_001dcb58:;
    {
        goto L_001dca24;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface15GetDopplerPitchEv @ 001dcb74 (arm) */
void fn_001dcb74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dcb74:;
    {
        cpu->r[3] = rd32(0x001dcb7cu + + 0x140u);
    }
L_001dcb78:;
    {
        cpu->r[2] = rd32(0x001dcb80u + + 0x140u);
    }
L_001dcb7c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001dcb84u, cpu->r[3], 0, 0);
    }
L_001dcb80:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001dcb84:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_001dcb88:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001dcb8c:;
    {
        vfp_sync_flags(cpu);
    }
L_001dcb90:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dcc80;
        }
    }
L_001dcb94:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x90u);
    }
L_001dcb98:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001dcb9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dcc88;
        }
    }
L_001dcba0:;
    {
        cpu->r[2] = rd32(0x001dcba8u + + 0x11cu);
    }
L_001dcba4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x70u);
    }
L_001dcba8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x6cu);
    }
L_001dcbac:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x74u);
    }
L_001dcbb0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001dcbb4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001dcbb8:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_001dcbbc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x10u);
    }
L_001dcbc0:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[2]);
    }
L_001dcbc4:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_001dcbc8:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001dcbcc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x14u);
    }
L_001dcbd0:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001dcbd4:;
    {
        vfp_vsub(cpu, 11, 8, 11);
    }
L_001dcbd8:;
    {
        vfp_vmla(cpu, 15, 11, 9);
    }
L_001dcbdc:;
    {
        vfp_vsub(cpu, 12, 10, 12);
    }
L_001dcbe0:;
    {
        vfp_vmla(cpu, 15, 12, 13);
    }
L_001dcbe4:;
    {
        vfp_vmul(cpu, 13, 14, 14);
    }
L_001dcbe8:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[0] + + 0x7cu);
    }
L_001dcbec:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[0] + + 0x78u);
    }
L_001dcbf0:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[0] + + 0x80u);
    }
L_001dcbf4:;
    {
        cpu->r[2] = rd32(0x001dcbfcu + + 0xccu);
    }
L_001dcbf8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001dcbfc:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[3]);
    }
L_001dcc00:;
    {
        vfp_vmla(cpu, 13, 11, 11);
    }
L_001dcc04:;
    {
        vfp_vmla(cpu, 13, 12, 12);
    }
L_001dcc08:;
    {
        vfp_vmul(cpu, 14, 14, 7);
    }
L_001dcc0c:;
    {
        vfp_vsqrt(cpu, 13, 13);
    }
L_001dcc10:;
    {
        vfp_vmla(cpu, 14, 11, 8);
    }
L_001dcc14:;
    {
        vfp_vmla(cpu, 14, 12, 9);
    }
L_001dcc18:;
    {
        vfp_vmul(cpu, 13, 13, 10);
    }
L_001dcc1c:;
    {
        vfp_vsub(cpu, 12, 13, 14);
    }
L_001dcc20:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_001dcc24:;
    {
        vfp_sync_flags(cpu);
    }
L_001dcc28:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), 0.0f);
    }
L_001dcc2c:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,13);
        }
    }
L_001dcc30:;
    {
        vfp_sync_flags(cpu);
    }
L_001dcc34:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dcc80;
        }
    }
L_001dcc38:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_001dcc3c:;
    {
        vfp_vdiv(cpu, 14, 15, 12);
    }
L_001dcc40:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001dcc48u + + 0x60u);
    }
L_001dcc44:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001dcc48:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001dcc50u + + 0x5cu);
    }
L_001dcc4c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001dcc50:;
    {
        vfp_sync_flags(cpu);
    }
L_001dcc54:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x0000b999u;
        }
    }
L_001dcc58:;
    {
        if (cond_test(cpu, 13)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001dcc5c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001dcc64u + + 0x4cu);
    }
L_001dcc60:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001dcc64:;
    {
        vfp_sync_flags(cpu);
    }
L_001dcc68:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 14) = *(float*)G(0x001dcc70u + + 0x44u);
        }
    }
L_001dcc6c:;
    {
        if (cond_test(cpu, 6)) {
        vfp_vmul(cpu, 15, 15, 14);
        }
    }
L_001dcc70:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[0] = 0x00000010u;
        }
    }
L_001dcc74:;
    {
        if (cond_test(cpu, 6)) {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
        }
    }
L_001dcc78:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_001dcc7c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001dcc80:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_001dcc84:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001dcc88:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x6cu);
    }
L_001dcc8c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x70u);
    }
L_001dcc90:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x74u);
    }
L_001dcc94:;
    {
        vfp_vneg(cpu, 11, 11);
    }
L_001dcc98:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001dcca0u + + 0x18u);
    }
L_001dcc9c:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_001dcca0:;
    {
        vfp_vneg(cpu, 12, 12);
    }
L_001dcca4:;
    {
        goto L_001dcbe4;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface15GetDistanceGainEv @ 001dcccc (arm) */
void fn_001dcccc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dcccc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x90u);
    }
L_001dccd0:;
    {
        cpu->r[3] = rd32(0x001dccd8u + + 0x230u);
    }
L_001dccd4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001dccd8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001dcce0u, cpu->r[3], 0, 0);
    }
L_001dccdc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001dcce0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dcda0;
        }
    }
L_001dcce4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x6cu);
    }
L_001dcce8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x70u);
    }
L_001dccec:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x74u);
    }
L_001dccf0:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_001dccf4:;
    {
        cpu->r[2] = rd32(0x001dccfcu + + 0x210u);
    }
L_001dccf8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001dccfc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001dcd00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001dcd04:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_001dcd08:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_001dcd0c:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x98u);
        }
    }
L_001dcd10:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_001dcd14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dcd6c;
        }
    }
L_001dcd18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001dcd1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dcd48;
        }
    }
L_001dcd20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001dcd24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dcdd0;
        }
    }
L_001dcd28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001dcd2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dce20;
        }
    }
L_001dcd30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_001dcd34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dcedc;
        }
    }
L_001dcd38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_001dcd3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dce70;
        }
    }
L_001dcd40:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_001dcd44:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001dcd48u)) return;
    }
L_001dcd48:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x98u);
    }
L_001dcd4c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001dcd50:;
    {
        vfp_sync_flags(cpu);
    }
L_001dcd54:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_001dcd58:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001dcd6c;
        }
    }
L_001dcd5c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x94u);
    }
L_001dcd60:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,15));
    }
L_001dcd64:;
    {
        vfp_sync_flags(cpu);
    }
L_001dcd68:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,13);
        }
    }
L_001dcd6c:;
    {
        vfp_vsub(cpu, 15, 15, 14);
    }
L_001dcd70:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x9cu);
    }
L_001dcd74:;
    {
        *vfp_s(cpu,12) = *vfp_s(cpu,14);
    }
L_001dcd78:;
    {
        vfp_vmla(cpu, 12, 15, 13);
    }
L_001dcd7c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), 0.0f);
    }
L_001dcd80:;
    {
        vfp_sync_flags(cpu);
    }
L_001dcd84:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dcd40;
        }
    }
L_001dcd88:;
    {
        vfp_vdiv(cpu, 14, 14, 12);
    }
L_001dcd8c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001dcd94u + + 0x16cu);
    }
L_001dcd90:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001dcd94:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001dcd98:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001dcd9c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001dcda0u)) return;
    }
L_001dcda0:;
    {
        cpu->r[2] = rd32(0x001dcda8u + + 0x168u);
    }
L_001dcda4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x6cu);
    }
L_001dcda8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x70u);
    }
L_001dcdac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x74u);
    }
L_001dcdb0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001dcdb4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001dcdb8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2]);
    }
L_001dcdbc:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_001dcdc0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001dcdc4:;
    {
        vfp_vsub(cpu, 13, 11, 13);
    }
L_001dcdc8:;
    {
        vfp_vsub(cpu, 15, 12, 15);
    }
L_001dcdcc:;
    {
        goto L_001dccf0;
    }
L_001dcdd0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x94u);
    }
L_001dcdd4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x98u);
    }
L_001dcdd8:;
    {
        vfp_vsub(cpu, 14, 14, 13);
    }
L_001dcddc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x9cu);
    }
L_001dcde0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_001dcde4:;
    {
        vfp_sync_flags(cpu);
    }
L_001dcde8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dcd40;
        }
    }
L_001dcdec:;
    {
        vfp_vsub(cpu, 15, 15, 13);
    }
L_001dcdf0:;
    {
        vfp_vmul(cpu, 15, 15, 12);
    }
L_001dcdf4:;
    {
        vfp_vdiv(cpu, 15, 15, 14);
    }
L_001dcdf8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001dce00u + + 0x104u);
    }
L_001dcdfc:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_001dce00:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001dce04:;
    {
        vfp_sync_flags(cpu);
    }
L_001dce08:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 14) = *(float*)G(0x001dce10u + + 0xf0u);
        }
    }
L_001dce0c:;
    {
        if (cond_test(cpu, 6)) {
        vfp_vmul(cpu, 15, 15, 14);
        }
    }
L_001dce10:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001dce14:;
    {
        if (cond_test(cpu, 6)) {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
        }
    }
L_001dce18:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_001dce1c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001dce20u)) return;
    }
L_001dce20:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x98u);
    }
L_001dce24:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001dce28:;
    {
        vfp_sync_flags(cpu);
    }
L_001dce2c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001dce64;
        }
    }
L_001dce30:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x94u);
    }
L_001dce34:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,15));
    }
L_001dce38:;
    {
        vfp_sync_flags(cpu);
    }
L_001dce3c:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,13);
        }
    }
L_001dce40:;
    {
        vfp_vsub(cpu, 13, 13, 14);
    }
L_001dce44:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x9cu);
    }
L_001dce48:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), 0.0f);
    }
L_001dce4c:;
    {
        vfp_sync_flags(cpu);
    }
L_001dce50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dcd40;
        }
    }
L_001dce54:;
    {
        vfp_vsub(cpu, 15, 15, 14);
    }
L_001dce58:;
    {
        vfp_vmul(cpu, 15, 15, 12);
    }
L_001dce5c:;
    {
        vfp_vdiv(cpu, 15, 15, 13);
    }
L_001dce60:;
    {
        goto L_001dcdf8;
    }
L_001dce64:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x94u);
    }
L_001dce68:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
    }
L_001dce6c:;
    {
        goto L_001dce40;
    }
L_001dce70:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x9cu);
    }
L_001dce74:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_001dce78:;
    {
        vfp_sync_flags(cpu);
    }
L_001dce7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dcd40;
        }
    }
L_001dce80:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x98u);
    }
L_001dce84:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), 0.0f);
    }
L_001dce88:;
    {
        vfp_sync_flags(cpu);
    }
L_001dce8c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dcd40;
        }
    }
L_001dce90:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,15));
    }
L_001dce94:;
    {
        vfp_sync_flags(cpu);
    }
L_001dce98:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,13);
        }
    }
L_001dce9c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001dceb0;
        }
    }
L_001dcea0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x94u);
    }
L_001dcea4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,15));
    }
L_001dcea8:;
    {
        vfp_sync_flags(cpu);
    }
L_001dceac:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,12);
        }
    }
L_001dceb0:;
    {
        vfp_vdiv(cpu, 12, 15, 13);
    }
L_001dceb4:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_001dceb8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,12);
    }
L_001dcebc:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001dcec0:;
    {
        cpu->r[14] = 0x001dcec4u; imp_powf(cpu); /* powf */
    }
L_001dcec4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001dceccu + + 0x34u);
    }
L_001dcec8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001dcecc:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001dced0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001dced4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001dced8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001dcedcu)) return;
    }
L_001dcedc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x9cu);
    }
L_001dcee0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_001dcee4:;
    {
        vfp_sync_flags(cpu);
    }
L_001dcee8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dcd40;
        }
    }
L_001dceec:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x98u);
    }
L_001dcef0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), 0.0f);
    }
L_001dcef4:;
    {
        vfp_sync_flags(cpu);
    }
L_001dcef8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dcd40;
        }
    }
L_001dcefc:;
    {
        goto L_001dceb0;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface18GetDirectionalGainEv @ 001dcf18 (arm) */
void fn_001dcf18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dcf18:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xa0u);
    }
L_001dcf1c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001dcf24u + + 0x1a4u);
    }
L_001dcf20:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001dcf24:;
    {
        cpu->r[3] = rd32(0x001dcf2cu + + 0x1acu);
    }
L_001dcf28:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001dcf2c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001dcf30:;
    {
        cpu->r[3] = add_flags(cpu, 0x001dcf38u, cpu->r[3], 0, 0);
    }
L_001dcf34:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dcf38:;
    {
        vfp_sync_flags(cpu);
    }
L_001dcf3c:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001dd020;
        }
    }
L_001dcf40:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x84u);
    }
L_001dcf44:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), 0.0f);
    }
L_001dcf48:;
    {
        vfp_sync_flags(cpu);
    }
L_001dcf4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dd02c;
        }
    }
L_001dcf50:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x88u);
    }
L_001dcf54:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x8cu);
    }
L_001dcf58:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x90u);
    }
L_001dcf5c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001dcf60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dd054;
        }
    }
L_001dcf64:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[4] + + 0x6cu);
    }
L_001dcf68:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[4] + + 0x70u);
    }
L_001dcf6c:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4] + + 0x74u);
    }
L_001dcf70:;
    {
        vfp_vneg(cpu, 9, 9);
    }
L_001dcf74:;
    {
        vfp_vneg(cpu, 8, 8);
    }
L_001dcf78:;
    {
        vfp_vneg(cpu, 10, 10);
    }
L_001dcf7c:;
    {
        vfp_vmul(cpu, 15, 12, 12);
    }
L_001dcf80:;
    {
        vfp_vmul(cpu, 16, 8, 12);
    }
L_001dcf84:;
    {
        vfp_vmul(cpu, 14, 8, 8);
    }
L_001dcf88:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_001dcf8c:;
    {
        vfp_vmla(cpu, 16, 9, 13);
    }
L_001dcf90:;
    {
        vfp_vmla(cpu, 14, 9, 9);
    }
L_001dcf94:;
    {
        vfp_vmla(cpu, 16, 10, 11);
    }
L_001dcf98:;
    {
        vfp_vmla(cpu, 14, 10, 10);
    }
L_001dcf9c:;
    {
        vfp_vmla(cpu, 15, 11, 11);
    }
L_001dcfa0:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001dcfa4:;
    {
        vfp_vmul(cpu, 14, 16, 16);
    }
L_001dcfa8:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_001dcfac:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_001dcfb0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001dcfb4:;
    {
        cpu->r[14] = 0x001dcfb8u; imp_acosf(cpu); /* acosf */
    }
L_001dcfb8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001dcfc0u + + 0x10cu);
    }
L_001dcfbc:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x001dcfc4u + + 0xfcu);
    }
L_001dcfc0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_001dcfc4:;
    {
        vfp_sync_flags(cpu);
    }
L_001dcfc8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_001dcfcc:;
    {
        vfp_vmul(cpu, 10, 15, 14);
    }
L_001dcfd0:;
    {
        *vfp_d(cpu,5) = (double)*vfp_s(cpu,10);
    }
L_001dcfd4:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 5) / *vfp_d(cpu, 6);
    }
L_001dcfd8:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,6);
    }
L_001dcfdc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001dcfe4u + + 0xecu);
    }
L_001dcfe0:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vsub(cpu, 15, 14, 15);
        }
    }
L_001dcfe4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0xa0u);
    }
L_001dcfe8:;
    {
        vfp_vmul(cpu, 14, 14, 13);
    }
L_001dcfec:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001dcff0:;
    {
        vfp_sync_flags(cpu);
    }
L_001dcff4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dd020;
        }
    }
L_001dcff8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0xa4u);
    }
L_001dcffc:;
    {
        vfp_vmul(cpu, 13, 12, 13);
    }
L_001dd000:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_001dd004:;
    {
        vfp_sync_flags(cpu);
    }
L_001dd008:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001dd0a8;
        }
    }
L_001dd00c:;
    {
        vfp_vsub(cpu, 12, 13, 14);
    }
L_001dd010:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0xa8u);
    }
L_001dd014:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), 0.0f);
    }
L_001dd018:;
    {
        vfp_sync_flags(cpu);
    }
L_001dd01c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001dd084;
        }
    }
L_001dd020:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_001dd024:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001dd028:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001dd02cu)) return;
    }
L_001dd02c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x88u);
    }
L_001dd030:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), 0.0f);
    }
L_001dd034:;
    {
        vfp_sync_flags(cpu);
    }
L_001dd038:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x8cu);
        }
    }
L_001dd03c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dcf58;
        }
    }
L_001dd040:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x8cu);
    }
L_001dd044:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), 0.0f);
    }
L_001dd048:;
    {
        vfp_sync_flags(cpu);
    }
L_001dd04c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dcf58;
        }
    }
L_001dd050:;
    {
        goto L_001dd020;
    }
L_001dd054:;
    {
        cpu->r[2] = rd32(0x001dd05cu + + 0x80u);
    }
L_001dd058:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x6cu);
    }
L_001dd05c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x70u);
    }
L_001dd060:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4] + + 0x74u);
    }
L_001dd064:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001dd068:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_001dd06c:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001dd070:;
    {
        vfp_vsub(cpu, 10, 9, 10);
    }
L_001dd074:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3]);
    }
L_001dd078:;
    {
        vfp_vsub(cpu, 8, 8, 15);
    }
L_001dd07c:;
    {
        vfp_vsub(cpu, 9, 9, 14);
    }
L_001dd080:;
    {
        goto L_001dcf7c;
    }
L_001dd084:;
    {
        vfp_vsub(cpu, 14, 15, 14);
    }
L_001dd088:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_001dd08c:;
    {
        vfp_vmla(cpu, 15, 11, 14);
    }
L_001dd090:;
    {
        vfp_vdiv(cpu, 14, 15, 12);
    }
L_001dd094:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001dd09cu + + 0x38u);
    }
L_001dd098:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001dd09c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001dd0a0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001dd0a4:;
    {
        goto L_001dd024;
    }
L_001dd0a8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0xa8u);
    }
L_001dd0ac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001dd0b4u + + 0x20u);
    }
L_001dd0b0:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001dd0b4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001dd0b8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001dd0bc:;
    {
        goto L_001dd024;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface23FillBufferMono16NoInterEPii @ 001dd0e0 (arm) */
void fn_001dd0e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dd0e0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x50u);
    }
L_001dd0e4:;
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
L_001dd0e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001dd0ec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_001dd0f0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_001dd0f4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_001dd0f8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001dd0fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dd108;
        }
    }
L_001dd100:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_001dd104:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dd108u)) return;
    }
L_001dd108:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001dd10c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x60u);
    }
L_001dd110:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001dd114:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001dd118:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x14u);
    }
L_001dd11c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001dd120:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dd100;
        }
    }
L_001dd124:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_001dd128:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x28u);
    }
L_001dd12c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001dd130:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dd134:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
        }
    }
L_001dd138:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[3] + + 0x10u);
        }
    }
L_001dd13c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_001dd140:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
        }
    }
L_001dd144:;
    {
        cpu->r[14] = 0x001dd148u; fn_001dcccc(cpu);
    }
L_001dd148:;
    {
        uint32_t v = cpu->r[4] * cpu->r[0]; cpu->r[4] = v;
    }
L_001dd14c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dd150:;
    {
        cpu->r[14] = 0x001dd154u; fn_001dcf18(cpu);
    }
L_001dd154:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_001dd158:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_001dd15c:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 14u, &shc); cpu->r[4] = v;
    }
L_001dd160:;
    {
        uint32_t v = cpu->r[0] * cpu->r[4]; cpu->r[4] = v;
    }
L_001dd164:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dd168:;
    {
        cpu->r[14] = 0x001dd16cu; fn_001dc9d4(cpu);
    }
L_001dd16c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_001dd170:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_001dd174:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001dd178:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dd17c:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 14u, &shc); cpu->r[4] = v;
    }
L_001dd180:;
    {
        uint32_t v = cpu->r[3] * cpu->r[4]; cpu->r[3] = v;
    }
L_001dd184:;
    {
        uint32_t v = cpu->r[2] * cpu->r[4]; cpu->r[4] = v;
    }
L_001dd188:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 14u, &shc); cpu->r[3] = v;
    }
L_001dd18c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_001dd190:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 14u, &shc); cpu->r[4] = v;
    }
L_001dd194:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[4]);
    }
L_001dd198:;
    {
        cpu->r[14] = 0x001dd19cu; fn_001dad58(cpu);
    }
L_001dd19c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001dd1a0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001dd1a4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001dd514;
        }
    }
L_001dd1a8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dd1ac:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001dd1b0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001dd1b4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_001dd1b8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x20u);
    }
L_001dd1bc:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_001dd1c0:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[11]);
        }
    }
L_001dd1c4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001dd1d8;
        }
    }
L_001dd1c8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001dd1cc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001dd1d0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_001dd1d4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_001dd1d8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dd1dc:;
    {
        cpu->r[3] = rd8(cpu->r[12] + + 0x24u);
    }
L_001dd1e0:;
    {
        cpu->r[7] = rd32(cpu->r[12] + + 0x2cu);
    }
L_001dd1e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dd1e8:;
    {
        cpu->r[8] = rd32(cpu->r[12] + + 0x30u);
    }
L_001dd1ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dd4f0;
        }
    }
L_001dd1f0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001dd1f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001dd1f8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_001dd1fc:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
        }
    }
L_001dd200:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
        }
    }
L_001dd204:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dd230;
        }
    }
L_001dd208:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_001dd20c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001dd210:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 0);
    }
L_001dd214:;
    {
        cpu->r[14] = 0x001dd218u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001dd218:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_001dd21c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001dd220:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_001dd224:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_001dd228:;
    {
        cpu->r[14] = 0x001dd22cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001dd22c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001dd230:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001dd234:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001dd238:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dd35c;
        }
    }
L_001dd23c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dd240:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001dd244:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001dd248:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_001dd24c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x60u);
    }
L_001dd250:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dd254:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001dd258:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001dd25c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001dd260:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_001dd264:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dd268:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001dd26c:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4cu);
    }
L_001dd270:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001dd274:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001dd278:;
    {
        cpu->r[9] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 3u, &shc));
    }
L_001dd27c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001dd280:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_001dd284:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x10u);
    }
L_001dd288:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 1u, &shc), cpu->r[2], 1, 0);
    }
L_001dd28c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_001dd290:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001dd294:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001dd298:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001dd29c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001dd2a0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001dd2a4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001dd2a8:;
    {
        uint32_t v = cpu->r[12] | cpu->r[1]; cpu->r[12] = v;
        set_nz(cpu, v);
    }
L_001dd2ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001dd2b0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] | 0x00000001u; cpu->r[1] = v;
        }
    }
L_001dd2b4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001dd2b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dd36c;
        }
    }
L_001dd2bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dd2c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dd4e8;
        }
    }
L_001dd2c4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001dd2c8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[10] = v;
    }
L_001dd2cc:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[9] + cpu->r[1]);
    }
L_001dd2d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_001dd2d4:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_001dd2d8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 1);
    }
L_001dd2dc:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x4u);
    }
L_001dd2e0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[8]; cpu->r[5] = v;
    }
L_001dd2e4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[7]; cpu->r[0] = v;
    }
L_001dd2e8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 1, 14u, &shc), 0, 0);
    }
L_001dd2ec:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[4]);
    }
L_001dd2f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 1, 14u, &shc), 0, 0);
    }
L_001dd2f4:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_001dd2f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001dd2fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dd2cc;
        }
    }
L_001dd300:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dd304:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_001dd308:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4cu);
    }
L_001dd30c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001dd310:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_001dd314:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dd318:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001dd31c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x58u);
    }
L_001dd320:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001dd324:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_001dd328:;
    {
        wr32(cpu->r[12] + + 0x58u, cpu->r[10]);
    }
L_001dd32c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dd47c;
        }
    }
L_001dd330:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001dd334:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001dd338:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_001dd33c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
    }
L_001dd340:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001dd344:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_001dd348:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001dd34c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001dd350:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001dd354:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001dd358:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001dd264;
        }
    }
L_001dd35c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dd360:;
    {
        wr32(cpu->r[1] + + 0x30u, cpu->r[8]);
    }
L_001dd364:;
    {
        wr32(cpu->r[1] + + 0x2cu, cpu->r[7]);
    }
L_001dd368:;
    {
        goto L_001dd100;
    }
L_001dd36c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dd370:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dd4e0;
        }
    }
L_001dd374:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[10] = v;
    }
L_001dd378:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_001dd37c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x24u);
    }
L_001dd380:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001dd384:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001dd388:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_001dd38c:;
    {
        goto L_001dd3f0;
    }
L_001dd390:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_001dd394:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001dd398:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001dd39c:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_001dd3a0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[11], 1, 1);
    }
L_001dd3a4:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = cpu->r[3] | 0x00000001u; cpu->r[3] = v;
        }
    }
L_001dd3a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001dd3ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dd3b0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[9] + cpu->r[6]);
    }
L_001dd3b4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_001dd3b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
        }
    }
L_001dd3bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
        }
    }
L_001dd3c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
        }
    }
L_001dd3c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[1], 0, 0);
        }
    }
L_001dd3c8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_001dd3cc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_001dd3d0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[0] = v;
    }
L_001dd3d4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[7]; cpu->r[3] = v;
    }
L_001dd3d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 1, 14u, &shc), 0, 0);
    }
L_001dd3dc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_001dd3e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 14u, &shc), 0, 0);
    }
L_001dd3e4:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001dd3e8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001dd3ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dd434;
        }
    }
L_001dd3f0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[11], 1, 1);
    }
L_001dd3f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dd390;
        }
    }
L_001dd3f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001dd3fc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001dd400:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001dd404:;
    {
        cpu->r[14] = 0x001dd408u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001dd408:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001dd40c:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001dd410:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[0], 1, 31u, &shc), cpu->r[2], 1, 0);
    }
L_001dd414:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001dd418:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_001dd41c:;
    {
        cpu->r[14] = 0x001dd420u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001dd420:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_001dd424:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001dd428:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[0], 1, 31u, &shc), cpu->r[3], 1, 0);
    }
L_001dd42c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001dd430:;
    {
        goto L_001dd390;
    }
L_001dd434:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_001dd438:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_001dd43c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dd440:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_001dd444:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_001dd448:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dd44c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001dd450:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4cu);
    }
L_001dd454:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001dd458:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001dd45c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_001dd460:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001dd464:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x58u);
    }
L_001dd468:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x38u);
    }
L_001dd46c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_001dd470:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x34u);
    }
L_001dd474:;
    {
        wr32(cpu->r[12] + + 0x58u, cpu->r[10]);
    }
L_001dd478:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dd330;
        }
    }
L_001dd47c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001dd480:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001dd484:;
    {
        wr32(cpu->r[12] + + 0x4cu, cpu->r[2]);
    }
L_001dd488:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001dd48c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001dd490:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001dd494:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_001dd498:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dd49c:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x44u);
    }
L_001dd4a0:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001dd4a4:;
    {
        wr8(cpu->r[2] + + 0x14u, cpu->r[12]);
    }
L_001dd4a8:;
    {
        cpu->r[14] = 0x001dd4acu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001dd4ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dd4b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001dd4b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001dd4b8:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[1]);
    }
L_001dd4bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001dd4c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_001dd4c4:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0x14u);
    }
L_001dd4c8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001dd4cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dd348;
        }
    }
L_001dd4d0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dd4d4:;
    {
        wr32(cpu->r[1] + + 0x30u, cpu->r[8]);
    }
L_001dd4d8:;
    {
        wr32(cpu->r[1] + + 0x2cu, cpu->r[7]);
    }
L_001dd4dc:;
    {
        goto L_001dd100;
    }
L_001dd4e0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x38u);
    }
L_001dd4e4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x34u);
    }
L_001dd4e8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[10] = v;
    }
L_001dd4ec:;
    {
        goto L_001dd314;
    }
L_001dd4f0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001dd4f4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001dd4f8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dd4fc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001dd500:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x38u);
    }
L_001dd504:;
    {
        wr8(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_001dd508:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x34u);
    }
L_001dd50c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_001dd510:;
    {
        goto L_001dd230;
    }
L_001dd514:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dd518:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x20u);
    }
L_001dd51c:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001dd520:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_001dd524:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001dd528:;
    {
        if (cond_test(cpu, 5)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
        }
    }
L_001dd52c:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_001dd530:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
        }
    }
L_001dd534:;
    {
        goto L_001dd1bc;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface16FillBufferMono16EPii @ 001dd538 (arm) */
void fn_001dd538(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dd538:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x50u);
    }
L_001dd53c:;
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
L_001dd540:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001dd544:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_001dd548:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001dd54c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001dd550:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001dd554:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dd560;
        }
    }
L_001dd558:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001dd55c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dd560u)) return;
    }
L_001dd560:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001dd564:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x60u);
    }
L_001dd568:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001dd56c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001dd570:;
    {
        cpu->r[10] = rd8(cpu->r[3] + + 0x14u);
    }
L_001dd574:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001dd578:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dd558;
        }
    }
L_001dd57c:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x28u);
    }
L_001dd580:;
    {
        cpu->r[14] = 0x001dd584u; fn_001dcccc(cpu);
    }
L_001dd584:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001dd588:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dd58c:;
    {
        cpu->r[14] = 0x001dd590u; fn_001dcf18(cpu);
    }
L_001dd590:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001dd594:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001dd598:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001dd59c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dd5a0:;
    {
        cpu->r[14] = 0x001dd5a4u; fn_001dc9d4(cpu);
    }
L_001dd5a4:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x40u);
    }
L_001dd5a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4cu);
    }
L_001dd5ac:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x60u);
    }
L_001dd5b0:;
    {
        uint32_t v = cpu->r[11] * cpu->r[7]; cpu->r[11] = v;
    }
L_001dd5b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001dd5b8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001dd5bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001dd5c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001dd5c4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_001dd5c8:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 14u, &shc); cpu->r[2] = v;
    }
L_001dd5cc:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0xcu);
    }
L_001dd5d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_001dd5d4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_001dd5d8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001dd5dc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001dd5e0:;
    {
        cpu->r[14] = 0x001dd5e4u; fn_001db4fc(cpu);
    }
L_001dd5e4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dd5e8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001dd5ec:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001dd5f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dd5f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001dd5f8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x50u, cpu->r[3]);
        }
    }
L_001dd5fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dd558;
        }
    }
L_001dd600:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_001dd604:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001dd608:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001dd60c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dd610:;
    {
        cpu->r[14] = 0x001dd614u; fn_001dc420(cpu);
    }
L_001dd614:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x40u);
    }
L_001dd618:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 3, 31u, &shc), 0, 0);
    }
L_001dd61c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_001dd620:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 14u, &shc); cpu->r[0] = v;
    }
L_001dd624:;
    {
        cpu->r[14] = 0x001dd628u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001dd628:;
    {
        cpu->r[8] = rd32(cpu->r[8] + + 0x4u);
    }
L_001dd62c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_001dd630:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001dd79c;
        }
    }
L_001dd634:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x20u);
    }
L_001dd638:;
    {
        cpu->r[12] = cpu->r[10];
    }
L_001dd63c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001dd640:;
    {
        cpu->r[11] = cpu->r[7];
    }
L_001dd644:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[10]);
    }
L_001dd648:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001dd64c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
        }
    }
L_001dd650:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001dd660;
        }
    }
L_001dd654:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_001dd658:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[7];
        }
    }
L_001dd65c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_001dd660:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001dd664:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_001dd668:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x2cu);
    }
L_001dd66c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[2]; cpu->r[1] = v;
    }
L_001dd670:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x24u);
    }
L_001dd674:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0x30u);
    }
L_001dd678:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001dd67c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 14u, &shc); cpu->r[1] = v;
    }
L_001dd680:;
    {
        uint32_t v = cpu->r[7] * cpu->r[1]; cpu->r[1] = v;
    }
L_001dd684:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x18u);
    }
L_001dd688:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 14u, &shc); cpu->r[1] = v;
    }
L_001dd68c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[1]; cpu->r[0] = v;
    }
L_001dd690:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x20u);
    }
L_001dd694:;
    {
        uint32_t v = cpu->r[7] * cpu->r[1]; cpu->r[1] = v;
    }
L_001dd698:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 14u, &shc); cpu->r[0] = v;
    }
L_001dd69c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_001dd6a0:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 14u, &shc); cpu->r[1] = v;
    }
L_001dd6a4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_001dd6a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dd780;
        }
    }
L_001dd6ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001dd6b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001dd6b4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001dd6b8:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
        }
    }
L_001dd6bc:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
        }
    }
L_001dd6c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dd704;
        }
    }
L_001dd6c4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001dd6c8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001dd6cc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 0);
    }
L_001dd6d0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001dd6d4:;
    {
        cpu->r[14] = 0x001dd6d8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001dd6d8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_001dd6dc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001dd6e0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_001dd6e4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[7], cpu->r[9], 1, 0);
    }
L_001dd6e8:;
    {
        cpu->r[14] = 0x001dd6ecu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001dd6ec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001dd6f0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[12] = v1;
    }
L_001dd6f4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001dd6f8:;
    {
        uint32_t v = cpu->r[0] | cpu->r[1]; cpu->r[0] = v;
        set_nz(cpu, v);
    }
L_001dd6fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001dd700:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001dd704:;
    {
        uint32_t v = cpu->r[2] | cpu->r[12]; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001dd708:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dd7c8;
        }
    }
L_001dd70c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001dd710:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dd774;
        }
    }
L_001dd714:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 14u, &shc); cpu->r[1] = v;
    }
L_001dd718:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 18u, &shc); cpu->r[3] = v;
    }
L_001dd71c:;
    {
        cpu->r[7] = rd32(cpu->r[4]);
    }
L_001dd720:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001dd724:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001dd728:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_001dd72c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 18u, &shc); cpu->r[3] = v;
    }
L_001dd730:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001dd734:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[8] + cpu->r[1]);
    }
L_001dd738:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_001dd73c:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[12] + + 0x2u);
    }
L_001dd740:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_001dd744:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[3] = v;
    }
L_001dd748:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 1, 14u, &shc), 0, 0);
    }
L_001dd74c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[1]; cpu->r[3] = v;
    }
L_001dd750:;
    {
        uint32_t v = cpu->r[10] * cpu->r[1]; cpu->r[1] = v;
    }
L_001dd754:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 1, 14u, &shc), 0, 0);
    }
L_001dd758:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001dd75c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[1], 1, 14u, &shc), 0, 0);
    }
L_001dd760:;
    {
        wr32(cpu->r[4], cpu->r[7]);
    }
L_001dd764:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_001dd768:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001dd76c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_001dd770:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dd714;
        }
    }
L_001dd774:;
    {
        wr32(cpu->r[5] + + 0x30u, cpu->r[9]);
    }
L_001dd778:;
    {
        wr32(cpu->r[5] + + 0x2cu, cpu->r[10]);
    }
L_001dd77c:;
    {
        goto L_001dd558;
    }
L_001dd780:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001dd784:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_001dd788:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
    }
L_001dd78c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001dd790:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_001dd794:;
    {
        wr8(cpu->r[5] + + 0x24u, cpu->r[1]);
    }
L_001dd798:;
    {
        goto L_001dd704;
    }
L_001dd79c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x20u);
    }
L_001dd7a0:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001dd7a4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_001dd7a8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001dd7ac:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001dd8b8;
        }
    }
L_001dd7b0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001dd7b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001dd7b8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001dd7bc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_001dd7c0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001dd7c4:;
    {
        goto L_001dd648;
    }
L_001dd7c8:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001dd7cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dd8ac;
        }
    }
L_001dd7d0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[11]);
    }
L_001dd7d4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001dd7d8:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_001dd7dc:;
    {
        goto L_001dd870;
    }
L_001dd7e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001dd7e4:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 14u, &shc); cpu->r[2] = v;
    }
L_001dd7e8:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 18u, &shc); cpu->r[3] = v;
    }
L_001dd7ec:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_001dd7f0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_001dd7f4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001dd7f8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001dd7fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001dd800:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[11], 1, 1);
    }
L_001dd804:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = cpu->r[0] | 0x00000001u; cpu->r[0] = v;
        }
    }
L_001dd808:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001dd80c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001dd810:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001dd814:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[8] + cpu->r[2]);
    }
L_001dd818:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 18u, &shc); cpu->r[3] = v;
    }
L_001dd81c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
        }
    }
L_001dd820:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[0], 0, 0);
        }
    }
L_001dd824:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_001dd828:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[0], 0, 0);
        }
    }
L_001dd82c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001dd830:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_001dd834:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x2u);
    }
L_001dd838:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_001dd83c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_001dd840:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[3] = v;
    }
L_001dd844:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 14u, &shc), 0, 0);
    }
L_001dd848:;
    {
        uint32_t v = cpu->r[2] * cpu->r[9]; cpu->r[3] = v;
    }
L_001dd84c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[10]; cpu->r[2] = v;
    }
L_001dd850:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 1, 14u, &shc), 0, 0);
    }
L_001dd854:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_001dd858:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[2], 1, 14u, &shc), 0, 0);
    }
L_001dd85c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001dd860:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001dd864:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_001dd868:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dd8ac;
        }
    }
L_001dd86c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_001dd870:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[11], 1, 1);
    }
L_001dd874:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dd7e0;
        }
    }
L_001dd878:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001dd87c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001dd880:;
    {
        cpu->r[14] = 0x001dd884u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001dd884:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001dd888:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001dd88c:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[0], 1, 31u, &shc), cpu->r[2], 1, 0);
    }
L_001dd890:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001dd894:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_001dd898:;
    {
        cpu->r[14] = 0x001dd89cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001dd89c:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001dd8a0:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[0], 1, 31u, &shc), cpu->r[3], 1, 0);
    }
L_001dd8a4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001dd8a8:;
    {
        goto L_001dd7e0;
    }
L_001dd8ac:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_001dd8b0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
    }
L_001dd8b4:;
    {
        goto L_001dd774;
    }
L_001dd8b8:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001dd8bc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001dd8c0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_001dd8c4:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001dd8c8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[11]);
    }
L_001dd8cc:;
    {
        goto L_001dd648;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface10FillBufferEPii @ 001dd8d0 (arm) */
void fn_001dd8d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dd8d0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001dd8d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dd8d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001dd8dc:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001dd8e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dd8e4:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001dd8e8:;
    {
        cpu->r[14] = 0x001dd8ecu; fn_001ebcfc(cpu);
    }
L_001dd8ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_001dd8f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001dd8f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dd904;
        }
    }
L_001dd8f8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dd8fc:;
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
L_001dd900:;
    {
        return fn_001ebcf8(cpu);
    }
L_001dd904:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001dd908:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x60u);
    }
L_001dd90c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001dd910:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001dd914:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x14u);
    }
L_001dd918:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dd91c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dd8f8;
        }
    }
L_001dd920:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x38u);
    }
L_001dd924:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x34u);
    }
L_001dd928:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001dd92c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dd958;
        }
    }
L_001dd930:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001dd934:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_001dd938:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[12] = v;
    }
L_001dd93c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_001dd940:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[0] = v;
    }
L_001dd944:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_001dd948:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_001dd94c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x38u, cpu->r[1]);
        }
    }
L_001dd950:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
        }
    }
L_001dd954:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
        }
    }
L_001dd958:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001dd95c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001dd960:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dda34;
        }
    }
L_001dd964:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001dd968:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x38u);
    }
L_001dd96c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001dd970:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[2] = v;
    }
L_001dd974:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 14u, &shc); cpu->r[2] = v;
    }
L_001dd978:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_001dd97c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 14u, &shc); cpu->r[2] = v;
    }
L_001dd980:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[2]);
    }
L_001dd984:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001dd988:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001dd98c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x40u, cpu->r[2]);
        }
    }
L_001dd990:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dd9d4;
        }
    }
L_001dd994:;
    {
        sub_flags(cpu, cpu->r[2], 0x00004000u, 1, 1);
    }
L_001dd998:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dd9d4;
        }
    }
L_001dd99c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001dd9a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dda48;
        }
    }
L_001dd9a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001dd9a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dd8f8;
        }
    }
L_001dd9ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001dd9b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_001dd9b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dd8f8;
        }
    }
L_001dd9b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_001dd9bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dd8f8;
        }
    }
L_001dd9c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dd9c4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001dd9c8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001dd9cc:;
    {
        cpu->r[14] = 0x001dd9d0u; fn_001dae18(cpu);
    }
L_001dd9d0:;
    {
        goto L_001dd8f8;
    }
L_001dd9d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001dd9d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dda0c;
        }
    }
L_001dd9dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001dd9e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dd8f8;
        }
    }
L_001dd9e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001dd9e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_001dd9ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dd8f8;
        }
    }
L_001dd9f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_001dd9f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dd8f8;
        }
    }
L_001dd9f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dd9fc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001dda00:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001dda04:;
    {
        cpu->r[14] = 0x001dda08u; fn_001dc6b4(cpu);
    }
L_001dda08:;
    {
        goto L_001dd8f8;
    }
L_001dda0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001dda10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_001dda14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dd8f8;
        }
    }
L_001dda18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_001dda1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dd8f8;
        }
    }
L_001dda20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dda24:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001dda28:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001dda2c:;
    {
        cpu->r[14] = 0x001dda30u; fn_001dd538(cpu);
    }
L_001dda30:;
    {
        goto L_001dd8f8;
    }
L_001dda34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dda38:;
    {
        cpu->r[14] = 0x001dda3cu; fn_001dcb74(cpu);
    }
L_001dda3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001dda40:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[0]);
    }
L_001dda44:;
    {
        goto L_001dd964;
    }
L_001dda48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001dda4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_001dda50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dd8f8;
        }
    }
L_001dda54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_001dda58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dd8f8;
        }
    }
L_001dda5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dda60:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001dda64:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001dda68:;
    {
        cpu->r[14] = 0x001dda6cu; fn_001dd0e0(cpu);
    }
L_001dda6c:;
    {
        goto L_001dd8f8;
    }
}

/* _ZN3vox23DriverCallbackInterface11_FillBufferEPsi @ 001dda70 (arm) */
void fn_001dda70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dda70:;
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
L_001dda74:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001dda78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001dda7c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001dda80:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001dda84:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001dda88:;
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
L_001dda8c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000030u, 1, 0);
    }
L_001dda90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001dda94:;
    {
        cpu->r[12] = cpu->r[13];
    }
L_001dda98:;
    {
        cpu->r[4] = rd32(0x001ddaa0u + + 0x108u);
    }
L_001dda9c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], 0x00000024u, 0, 0);
    }
L_001ddaa0:;
    {
        cpu->r[6] = rd32(0x001ddaa8u + + 0x104u);
    }
L_001ddaa4:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[9] = v;
    }
L_001ddaa8:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001ddaac:;
    {
        cpu->r[4] = add_flags(cpu, 0x001ddab4u, cpu->r[4], 0, 0);
    }
L_001ddab0:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[14] = base + 16u;
    }
L_001ddab4:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001ddab8:;
    {
        uint32_t base = cpu->r[14];
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
L_001ddabc:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001ddac0:;
    {
        uint32_t base = cpu->r[10];
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
L_001ddac4:;
    {
        cpu->r[14] = 0x001ddac8u; fn_001db1b0(cpu);
    }
L_001ddac8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ddacc:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001ddad0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001ddad4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ddb0c;
        }
    }
L_001ddad8:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4u);
    }
L_001ddadc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ddae0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ddae8;
        }
    }
L_001ddae4:;
    {
        cpu->r[14] = 0x001ddae8u; fn_00097dc8(cpu);
    }
L_001ddae8:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001ddaec:;
    {
        cpu->r[14] = 0x001ddaf0u; fn_00097dd4(cpu);
    }
L_001ddaf0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ddaf4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ddaf8:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_001ddafc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3], cpu->r[5]);
        }
    }
L_001ddb00:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[5];
        }
    }
L_001ddb04:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3], cpu->r[0]);
        }
    }
L_001ddb08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ddba0;
        }
    }
L_001ddb0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ddb10:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ddba0;
        }
    }
L_001ddb14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ddb18:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ddb1c:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001ddb20:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001ddb24:;
    {
        cpu->r[14] = 0x001ddb28u; imp_memset(cpu); /* memset */
    }
L_001ddb28:;
    {
        uint32_t wb_tmp = cpu->r[8] + + 0x10u;
        cpu->r[10] = rd32(cpu->r[8] + + 0x10u);
        cpu->r[8] = wb_tmp;
    }
L_001ddb2c:;
    {
        goto L_001ddb44;
    }
L_001ddb30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ddb34:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x8u);
    }
L_001ddb38:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001ddb3c:;
    {
        cpu->r[14] = 0x001ddb40u; fn_001dd8d0(cpu);
    }
L_001ddb40:;
    {
        cpu->r[10] = rd32(cpu->r[10]);
    }
L_001ddb44:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_001ddb48:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001ddb4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ddb30;
        }
    }
L_001ddb50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ddb54:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001ddb58:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001ddb5c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ddba0;
        }
    }
L_001ddb60:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 1u, &shc); cpu->r[9] = v;
    }
L_001ddb64:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ddb68:;
    {
        cpu->r[12] = 0x0000ffffu;
    }
L_001ddb6c:;
    {
        cpu->r[4] = 0x00007fffu;
    }
L_001ddb70:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 1u, &shc));
    }
L_001ddb74:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00008000u, 0, 0);
    }
L_001ddb78:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_001ddb7c:;
    {
        if (cond_test(cpu, 10)) {
        wr16(cpu->r[7] + cpu->r[3], cpu->r[2]);
        }
    }
L_001ddb80:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001ddb94;
        }
    }
L_001ddb84:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ddb88:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_001ddb8c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00008000u;
        }
    }
L_001ddb90:;
    {
        wr16(cpu->r[7] + cpu->r[3], cpu->r[2]);
    }
L_001ddb94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001ddb98:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_001ddb9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ddb70;
        }
    }
L_001ddba0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_001ddba4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ddba8u)) return;
    }
}

/* _ZN3vox23DriverCallbackInterface10FillBufferEPsi @ 001ddbb0 (arm) */
void fn_001ddbb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ddbb0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ddbb4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ddbb8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001ddbbc:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001ddbc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ddbc4:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001ddbc8:;
    {
        cpu->r[14] = 0x001ddbccu; fn_001ebcfc(cpu);
    }
L_001ddbcc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8u);
    }
L_001ddbd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ddbd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ddbe8;
        }
    }
L_001ddbd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ddbdc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001ddbe0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001ddbe4:;
    {
        cpu->r[14] = 0x001ddbe8u; fn_001dda70(cpu);
    }
L_001ddbe8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ddbec:;
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
L_001ddbf0:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox29DriverCallbackSourceInterface4InitEv @ 001ddbf4 (arm) */
void fn_001ddbf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ddbf4:;
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
L_001ddbf8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001ddbfc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_001ddc00:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ddc04:;
    {
        cpu->r[8] = rd32(0x001ddc0cu + + 0x33cu);
    }
L_001ddc08:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001ddc0c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001ddc10:;
    {
        cpu->r[14] = 0x001ddc14u; fn_001ebcfc(cpu);
    }
L_001ddc14:;
    {
        cpu->r[3] = rd32(0x001ddc1cu + + 0x330u);
    }
L_001ddc18:;
    {
        cpu->r[8] = add_flags(cpu, 0x001ddc20u, cpu->r[8], 0, 0);
    }
L_001ddc1c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x14u);
    }
L_001ddc20:;
    {
        cpu->r[6] = 0x00004000u;
    }
L_001ddc24:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[6]);
    }
L_001ddc28:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001ddc2c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001ddc30:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[6]);
    }
L_001ddc34:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 14u, &shc); cpu->r[0] = v;
    }
L_001ddc38:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001ddc3c:;
    {
        cpu->r[14] = 0x001ddc40u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001ddc40:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001ddc44:;
    {
        cpu->r[12] = 0x000000fau;
    }
L_001ddc48:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001ddc4c:;
    {
        cpu->r[3] = 0x00004dd3u;
    }
L_001ddc50:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001ddc58u + + 0x2e0u);
    }
L_001ddc54:;
    {
        uint32_t v = cpu->r[7] * cpu->r[1]; cpu->r[7] = v;
    }
L_001ddc58:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ddc5c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[2] = v;
    }
L_001ddc60:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ddc64:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x1062u << 16);
    }
L_001ddc68:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ddc6c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[1] = v;
    }
L_001ddc70:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ddc74:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ddc78:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ddc7c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ddc80:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ddc84:;
    {
        uint32_t v = cpu->r[12] * cpu->r[7]; cpu->r[7] = v;
    }
L_001ddc88:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ddc8c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ddc90:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[6]);
    }
L_001ddc94:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001ddc9cu + + 0x2a0u);
    }
L_001ddc98:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[5]);
    }
L_001ddc9c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ddca0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x94u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ddca4:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[5]);
    }
L_001ddca8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001ddcb0u + + 0x290u);
    }
L_001ddcac:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[5]);
    }
L_001ddcb0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ddcb4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[7]; cpu->r[7] = v;
    }
L_001ddcb8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ddcbc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001ddcc4u + + 0x280u);
    }
L_001ddcc0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ddcc4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ddcc8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[7]; cpu->r[2] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
    }
L_001ddccc:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 31u, &shc); cpu->r[7] = v;
    }
L_001ddcd0:;
    {
        cpu->r[11] = sub_flags(cpu, shifter(cpu->r[11], 1, 6u, &shc), cpu->r[7], 1, 0);
    }
L_001ddcd4:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001ddcd8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001ddcdc:;
    {
        cpu->r[14] = 0x001ddce0u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001ddce0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001ddce4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001ddce8:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 0);
    }
L_001ddcec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ddf08;
        }
    }
L_001ddcf0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_001ddcf4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001ddcf8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = rd32(cpu->r[4] + + 0x64u);
        }
    }
L_001ddcfc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dded8;
        }
    }
L_001ddd00:;
    {
        cpu->r[3] = 0x0000aaaau;
    }
L_001ddd04:;
    {
        cpu->r[12] = 0x0000aaabu;
    }
L_001ddd08:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0aaau << 16);
    }
L_001ddd0c:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0aaau << 16);
    }
L_001ddd10:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001ddd14:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x64u);
    }
L_001ddd18:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001ddd1c:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_001ddd20:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001ddd24:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_001ddd28:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001ddd2c:;
    {
        goto L_001ddd78;
    }
L_001ddd30:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_001ddd34:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_001ddd38:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[8]);
    }
L_001ddd3c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001ddd40:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[11]);
    }
L_001ddd44:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[8]);
    }
L_001ddd48:;
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
L_001ddd4c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[8]);
    }
L_001ddd50:;
    {
        wr8(cpu->r[13] + + 0x2cu, cpu->r[5]);
    }
L_001ddd54:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[6] = base + 16u;
    }
L_001ddd58:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001ddd5c:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001ddd60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_001ddd64:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x64u);
    }
L_001ddd68:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001ddd6c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_001ddd70:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[6]);
    }
L_001ddd74:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dded8;
        }
    }
L_001ddd78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x68u);
    }
L_001ddd7c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001ddd80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ddd30;
        }
    }
L_001ddd84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001ddd88:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001ddd8c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_001ddd90:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001ddd94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001ddd98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_001ddd9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_001ddda0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_001ddda4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001ddda8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001dddac:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001dddb0:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001dddb4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_001dddb8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001ddf20;
        }
    }
L_001dddbc:;
    {
        cpu->r[1] = (~0x0000000fu);
    }
L_001dddc0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001dddc4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001dddc8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001dddcc:;
    {
        cpu->r[14] = 0x001dddd0u; fn_00097dd0(cpu);
    }
L_001dddd0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x60u);
    }
L_001dddd4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 0);
    }
L_001dddd8:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 3u, &shc); cpu->r[6] = v;
    }
L_001ddddc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001ddde0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_001ddde4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 8u, &shc), 0, 0);
    }
L_001ddde8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 16u, &shc), 0, 0);
    }
L_001dddec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001dddf0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001dddf4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dddf8:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001dddfc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[14] = cpu->r[0];
        }
    }
L_001dde00:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dde40;
        }
    }
L_001dde04:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4u);
    }
L_001dde08:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001dde0c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
    }
L_001dde10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[9], cpu->r[5], 0, 0);
    }
L_001dde14:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001dde18:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001dde1c:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[14] = base + 16u;
    }
L_001dde20:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001dde24:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001dde28:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001dde2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dde0c;
        }
    }
L_001dde30:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001dde34:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x60u);
    }
L_001dde38:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001dde3c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[9], shifter(cpu->r[14], 2, 3u, &shc), 0, 0);
    }
L_001dde40:;
    {
        cpu->r[5] = rd32(cpu->r[13]);
    }
L_001dde44:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[14], 0x00000018u, 0, 0);
    }
L_001dde48:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[8]);
    }
L_001dde4c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[11]);
    }
L_001dde50:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[8]);
    }
L_001dde54:;
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
        cpu->r[5] = base + 16u;
    }
L_001dde58:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[8]);
    }
L_001dde5c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x64u);
    }
L_001dde60:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[10], 1, 1);
    }
L_001dde64:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001dde68:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_001dde6c:;
    {
        wr8(cpu->r[13] + + 0x2cu, cpu->r[5]);
    }
L_001dde70:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[14] = base + 16u;
    }
L_001dde74:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001dde78:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001dde7c:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001dde80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ddeac;
        }
    }
L_001dde84:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], 0x00000018u, 1, 0);
    }
L_001dde88:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_001dde8c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
    }
L_001dde90:;
    {
        cpu->r[1] = (~0x00000017u);
    }
L_001dde94:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 3u, &shc); cpu->r[3] = v;
    }
L_001dde98:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3]; cpu->r[3] = v;
    }
L_001dde9c:;
    {
        uint32_t v = cpu->r[3] & ~ 0xe0000000u; cpu->r[3] = v;
    }
L_001ddea0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[3] = v;
    }
L_001ddea4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_001ddea8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_001ddeac:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001ddeb0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001ddeb4:;
    {
        cpu->r[14] = 0x001ddeb8u; fn_00097dc8(cpu);
    }
L_001ddeb8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001ddebc:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[9]);
    }
L_001ddec0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[2], 0, 0);
    }
L_001ddec4:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_001ddec8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_001ddecc:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[6]);
    }
L_001dded0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001dded4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001ddd78;
        }
    }
L_001dded8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001ddedc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_001ddee0:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 3u, &shc); cpu->r[6] = v;
    }
L_001ddee4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001ddee8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_001ddeec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 8u, &shc), 0, 0);
    }
L_001ddef0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 16u, &shc), 0, 0);
    }
L_001ddef4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001ddef8:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[6]);
    }
L_001ddefc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001ddf00:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001ddf04:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
        }
    }
L_001ddf08:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ddf0c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001ddf10:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001ddf14:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001ddf18:;
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
L_001ddf1c:;
    {
        return fn_001ebcf8(cpu);
    }
L_001ddf20:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ddf24:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
        }
    }
L_001ddf28:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[2], 2, 3u, &shc); cpu->r[2] = v;
        }
    }
L_001ddf2c:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
        }
    }
L_001ddf30:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001dddc4;
        }
    }
L_001ddf34:;
    {
        goto L_001dddbc;
    }
}

/* _ZN3vox17VoxEngineInternal18RegisterStreamTypeEPFPNS_15StreamInterfaceEPvE @ 001ddf50 (arm) */
void fn_001ddf50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ddf50:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001ddf54:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x484u);
    }
L_001ddf58:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000001eu, 1, 1);
    }
L_001ddf5c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
        }
    }
L_001ddf60:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_001ddf64:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001ddf68:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[3] + + 0x484u, cpu->r[12]);
        }
    }
L_001ddf6c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[2] + + 0x404u, cpu->r[1]);
        }
    }
L_001ddf70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox17VoxEngineInternal19RegisterDecoderTypeEPFPNS_16DecoderInterfaceEPvE @ 001ddf74 (arm) */
void fn_001ddf74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ddf74:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001ddf78:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x508u);
    }
L_001ddf7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000001eu, 1, 1);
    }
L_001ddf80:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000120u, 0, 0);
        }
    }
L_001ddf84:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_001ddf88:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
        }
    }
L_001ddf8c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001ddf90:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[3] + + 0x508u, cpu->r[12]);
        }
    }
L_001ddf94:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
        }
    }
L_001ddf98:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox17VoxEngineInternal17UpdateDebugServerEv @ 001ddf9c (arm) */
void fn_001ddf9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ddf9c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox17VoxEngineInternal8Update3DEv @ 001ddfa0 (arm) */
void fn_001ddfa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ddfa0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x50cu);
    }
L_001ddfa4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ddfa8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ddfac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_001ddfb0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ddfb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de044;
        }
    }
L_001ddfb8:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x3f4u);
    }
L_001ddfbc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ddfc0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de04c;
        }
    }
L_001ddfc4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x3f5u);
    }
L_001ddfc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ddfcc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de078;
        }
    }
L_001ddfd0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x3f6u);
    }
L_001ddfd4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ddfd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de0a8;
        }
    }
L_001ddfdc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x3f7u);
    }
L_001ddfe0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ddfe4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de0d8;
        }
    }
L_001ddfe8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x3f8u);
    }
L_001ddfec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ddff0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de108;
        }
    }
L_001ddff4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x3f9u);
    }
L_001ddff8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ddffc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de044;
        }
    }
L_001de000:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000003d0u, 0, 0);
    }
L_001de004:;
    {
        cpu->r[12] = cpu->r[13];
    }
L_001de008:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x000003dcu, 0, 0);
    }
L_001de00c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x50cu);
    }
L_001de010:;
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
L_001de014:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001de018:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001de01c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001de020:;
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
L_001de024:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001de028:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001de02c:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_001de030:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001de034:;
    {
        cpu->r[14] = 0x001de03cu;
    }
L_001de038:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de03cu)) return;
    }
L_001de03c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001de040:;
    {
        wr8(cpu->r[4] + + 0x3f9u, cpu->r[3]);
    }
L_001de044:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001de048:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001de04cu)) return;
    }
L_001de04c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de050:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001de054:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de058:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000003e8u, 0, 0);
    }
L_001de05c:;
    {
        cpu->r[14] = 0x001de064u;
    }
L_001de060:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de064u)) return;
    }
L_001de064:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001de068:;
    {
        wr8(cpu->r[4] + + 0x3f4u, cpu->r[3]);
    }
L_001de06c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x3f5u);
    }
L_001de070:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de074:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ddfd0;
        }
    }
L_001de078:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50cu);
    }
L_001de07c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001de080:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000003ecu, 0, 0);
    }
L_001de084:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de088:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de08c:;
    {
        cpu->r[14] = 0x001de094u;
    }
L_001de090:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de094u)) return;
    }
L_001de094:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001de098:;
    {
        wr8(cpu->r[4] + + 0x3f5u, cpu->r[3]);
    }
L_001de09c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x3f6u);
    }
L_001de0a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de0a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ddfdc;
        }
    }
L_001de0a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50cu);
    }
L_001de0ac:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001de0b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000003f0u, 0, 0);
    }
L_001de0b4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de0b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de0bc:;
    {
        cpu->r[14] = 0x001de0c4u;
    }
L_001de0c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de0c4u)) return;
    }
L_001de0c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001de0c8:;
    {
        wr8(cpu->r[4] + + 0x3f6u, cpu->r[3]);
    }
L_001de0cc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x3f7u);
    }
L_001de0d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de0d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ddfe8;
        }
    }
L_001de0d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50cu);
    }
L_001de0dc:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001de0e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000003b8u, 0, 0);
    }
L_001de0e4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de0e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de0ec:;
    {
        cpu->r[14] = 0x001de0f4u;
    }
L_001de0f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de0f4u)) return;
    }
L_001de0f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001de0f8:;
    {
        wr8(cpu->r[4] + + 0x3f7u, cpu->r[3]);
    }
L_001de0fc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x3f8u);
    }
L_001de100:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de104:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ddff4;
        }
    }
L_001de108:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50cu);
    }
L_001de10c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001de110:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000003c4u, 0, 0);
    }
L_001de114:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de118:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de11c:;
    {
        cpu->r[14] = 0x001de124u;
    }
L_001de120:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de124u)) return;
    }
L_001de124:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001de128:;
    {
        wr8(cpu->r[4] + + 0x3f8u, cpu->r[3]);
    }
L_001de12c:;
    {
        goto L_001ddff4;
    }
}

/* _ZN3vox17VoxEngineInternal9UpdateDSPEf @ 001de130 (arm) */
void fn_001de130(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001de130:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x50cu);
    }
L_001de134:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001de138:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de13c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001de140u)) return;
        }
    }
L_001de140:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de144:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de148:;
    {
        cpu->r[14] = 0x001de150u;
    }
L_001de14c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de150u)) return;
    }
L_001de150:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001de154u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal23_SetDefault3DParametersEv @ 001de154 (arm) */
void fn_001de154(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001de154:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox17VoxEngineInternal16SetRoutingVolumeEPcS1_NS_22VoxDSPGeneralParameter14BusRoutingTypeEfff @ 001de158 (arm) */
void fn_001de158(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001de158:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox17VoxEngineInternal13GetOutputModeEv @ 001de15c (arm) */
void fn_001de15c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001de15c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x50cu);
    }
L_001de160:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001de164:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de168:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001de16c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001de170u)) return;
        }
    }
L_001de170:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de174:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de178:;
    {
        cpu->r[14] = 0x001de180u;
    }
L_001de17c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de180u)) return;
    }
L_001de180:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001de184u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal13SetOutputModeENS_13VoxOutputModeE @ 001de184 (arm) */
void fn_001de184(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001de184:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x50cu);
    }
L_001de188:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001de18c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de190:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001de194:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001de198u)) return;
        }
    }
L_001de198:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de19c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de1a0:;
    {
        cpu->r[14] = 0x001de1a8u;
    }
L_001de1a4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de1a8u)) return;
    }
L_001de1a8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001de1acu)) return;
    }
}

/* _ZNK3vox6HandleeqERKS0_ @ 001de1ac (arm) */
void fn_001de1ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001de1ac:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_001de1b0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001de1b4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_001de1b8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001de1bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de1c8;
        }
    }
L_001de1c0:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[0] = v;
    }
L_001de1c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001de1c8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001de1cc:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_001de1d0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001de1d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001de1d8:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[0] = v;
    }
L_001de1dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox18HandlableContainer4FindEx @ 001de1e0 (arm) */
void fn_001de1e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001de1e0:;
    {
        cpu->r[1] = rd32(cpu->r[0]);
    }
L_001de1e4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001de1e8:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_001de1ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001de1f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de254;
        }
    }
L_001de1f4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001de1f8:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x14u);
    }
L_001de1fc:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001de200:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001de22c;
        }
    }
L_001de204:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de220;
        }
    }
L_001de208:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_001de20c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001de210:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001de214:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de240;
        }
    }
L_001de218:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001de21c:;
    {
        goto L_001de1f8;
    }
L_001de220:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x10u);
    }
L_001de224:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001de228:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001de208;
        }
    }
L_001de22c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0xcu);
    }
L_001de230:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001de234:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001de238:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001de23c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de218;
        }
    }
L_001de240:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001de244:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de280;
        }
    }
L_001de248:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x14u);
    }
L_001de24c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001de250:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001de26c;
        }
    }
L_001de254:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001de258:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001de25c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
        }
    }
L_001de260:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de280;
        }
    }
L_001de264:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001de268:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001de26c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de258;
        }
    }
L_001de270:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_001de274:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001de278:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001de258;
        }
    }
L_001de27c:;
    {
        goto L_001de254;
    }
L_001de280:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001de284:;
    {
        goto L_001de264;
    }
}

/* _ZN3vox18HandlableContainer15GetFreeHandleIdEv @ 001de288 (arm) */
void fn_001de288(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001de288:;
    {
        uint64_t v = rd64(cpu->r[0] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001de28c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_001de290:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001de294:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 1);
    }
L_001de298:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001de29c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], (cpu->cpsr >> 29) & 1, 1);
    }
L_001de2a0:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001de2a4:;
    {
        wr64(cpu->r[0] + + 0x8u, ((uint64_t)cpu->r[5] << 32) | cpu->r[4]);
    }
L_001de2a8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001de2ac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_001de2b0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox18HandlableContainer5beginEv @ 001de2b4 (arm) */
void fn_001de2b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001de2b4:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001de2b8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_001de2bc:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001de2c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox18HandlableContainer3endEv @ 001de2c4 (arm) */
void fn_001de2c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001de2c4:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001de2c8:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001de2cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox10EmitterObj20ProcessNonNativeDataEf @ 001de2d0 (arm) */
void fn_001de2d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001de2d0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x110u);
    }
L_001de2d4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001de2d8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001de2dc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de2e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de2e4:;
    {
        cpu->r[14] = 0x001de2ecu;
    }
L_001de2e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de2ecu)) return;
    }
L_001de2ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001de2f0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001de2f4u)) return;
        }
    }
L_001de2f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001de2f8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de2fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de300:;
    {
        cpu->r[14] = 0x001de308u;
    }
L_001de304:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de308u)) return;
    }
L_001de308:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001de30c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001de310u)) return;
        }
    }
L_001de310:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x100u);
    }
L_001de314:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001de318:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001de31c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001de320:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de324:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de380;
        }
    }
L_001de328:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001de32c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x108u);
    }
L_001de330:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de334:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de338:;
    {
        cpu->r[14] = 0x001de340u;
    }
L_001de33c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de340u)) return;
    }
L_001de340:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001de344:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x100u);
    }
L_001de348:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001de34c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_001de350:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001de354:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de358:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de35c:;
    {
        cpu->r[14] = 0x001de364u;
    }
L_001de360:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de364u)) return;
    }
L_001de364:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x100u);
    }
L_001de368:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x104u);
    }
L_001de36c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001de370:;
    {
        wr32(cpu->r[4] + + 0x100u, cpu->r[0]);
    }
L_001de374:;
    {
        cpu->r[14] = 0x001de378u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001de378:;
    {
        wr32(cpu->r[4] + + 0x100u, cpu->r[1]);
    }
L_001de37c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001de380u)) return;
    }
L_001de380:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001de384:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de388:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de38c:;
    {
        cpu->r[14] = 0x001de394u;
    }
L_001de390:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de394u)) return;
    }
L_001de394:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001de398:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001de39c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
        }
    }
L_001de3a0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001de3a4u)) return;
        }
    }
L_001de3a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x100u);
    }
L_001de3a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001de3ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001de3b0:;
    {
        goto L_001de328;
    }
}

/* _ZN3vox10EmitterObj8Update3DEv @ 001de3b4 (arm) */
void fn_001de3b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001de3b4:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xe0u);
    }
L_001de3b8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001de3bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de3c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001de3c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de5a8;
        }
    }
L_001de3c8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xe1u);
    }
L_001de3cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de3d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de580;
        }
    }
L_001de3d4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xe2u);
    }
L_001de3d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de3dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de558;
        }
    }
L_001de3e0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xe3u);
    }
L_001de3e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de3e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de530;
        }
    }
L_001de3ec:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xe4u);
    }
L_001de3f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de3f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de508;
        }
    }
L_001de3f8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xe5u);
    }
L_001de3fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de400:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de4e0;
        }
    }
L_001de404:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xe6u);
    }
L_001de408:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de40c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de4b8;
        }
    }
L_001de410:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xe8u);
    }
L_001de414:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de418:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de490;
        }
    }
L_001de41c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xe9u);
    }
L_001de420:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de424:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de45c;
        }
    }
L_001de428:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xeau);
    }
L_001de42c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de430:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001de434u)) return;
        }
    }
L_001de434:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001de438:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_001de43c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000000a8u, 0, 0);
    }
L_001de440:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de444:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de448:;
    {
        cpu->r[14] = 0x001de450u;
    }
L_001de44c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de450u)) return;
    }
L_001de450:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001de454:;
    {
        wr8(cpu->r[4] + + 0xeau, cpu->r[3]);
    }
L_001de458:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001de45cu)) return;
    }
L_001de45c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001de460:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_001de464:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000000b4u, 0, 0);
    }
L_001de468:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de46c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de470:;
    {
        cpu->r[14] = 0x001de478u;
    }
L_001de474:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de478u)) return;
    }
L_001de478:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001de47c:;
    {
        wr8(cpu->r[4] + + 0xe9u, cpu->r[3]);
    }
L_001de480:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xeau);
    }
L_001de484:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de488:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001de48cu)) return;
        }
    }
L_001de48c:;
    {
        goto L_001de434;
    }
L_001de490:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001de494:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001de498:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x0000009cu, 0, 0);
    }
L_001de49c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de4a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de4a4:;
    {
        cpu->r[14] = 0x001de4acu;
    }
L_001de4a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de4acu)) return;
    }
L_001de4ac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001de4b0:;
    {
        wr8(cpu->r[4] + + 0xe8u, cpu->r[3]);
    }
L_001de4b4:;
    {
        goto L_001de41c;
    }
L_001de4b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001de4bc:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001de4c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000000d8u, 0, 0);
    }
L_001de4c4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de4c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de4cc:;
    {
        cpu->r[14] = 0x001de4d4u;
    }
L_001de4d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de4d4u)) return;
    }
L_001de4d4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001de4d8:;
    {
        wr8(cpu->r[4] + + 0xe6u, cpu->r[3]);
    }
L_001de4dc:;
    {
        goto L_001de410;
    }
L_001de4e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001de4e4:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001de4e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000000d4u, 0, 0);
    }
L_001de4ec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de4f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de4f4:;
    {
        cpu->r[14] = 0x001de4fcu;
    }
L_001de4f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de4fcu)) return;
    }
L_001de4fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001de500:;
    {
        wr8(cpu->r[4] + + 0xe5u, cpu->r[3]);
    }
L_001de504:;
    {
        goto L_001de404;
    }
L_001de508:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001de50c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001de510:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000000d0u, 0, 0);
    }
L_001de514:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de518:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de51c:;
    {
        cpu->r[14] = 0x001de524u;
    }
L_001de520:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de524u)) return;
    }
L_001de524:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001de528:;
    {
        wr8(cpu->r[4] + + 0xe4u, cpu->r[3]);
    }
L_001de52c:;
    {
        goto L_001de3f8;
    }
L_001de530:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001de534:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001de538:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000000ccu, 0, 0);
    }
L_001de53c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de540:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de544:;
    {
        cpu->r[14] = 0x001de54cu;
    }
L_001de548:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de54cu)) return;
    }
L_001de54c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001de550:;
    {
        wr8(cpu->r[4] + + 0xe3u, cpu->r[3]);
    }
L_001de554:;
    {
        goto L_001de3ec;
    }
L_001de558:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001de55c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001de560:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000000c8u, 0, 0);
    }
L_001de564:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de568:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de56c:;
    {
        cpu->r[14] = 0x001de574u;
    }
L_001de570:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de574u)) return;
    }
L_001de574:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001de578:;
    {
        wr8(cpu->r[4] + + 0xe2u, cpu->r[3]);
    }
L_001de57c:;
    {
        goto L_001de3e0;
    }
L_001de580:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001de584:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001de588:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000000c4u, 0, 0);
    }
L_001de58c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de590:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de594:;
    {
        cpu->r[14] = 0x001de59cu;
    }
L_001de598:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de59cu)) return;
    }
L_001de59c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001de5a0:;
    {
        wr8(cpu->r[4] + + 0xe1u, cpu->r[3]);
    }
L_001de5a4:;
    {
        goto L_001de3d4;
    }
L_001de5a8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x110u);
    }
L_001de5ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x000000c0u, 0, 0);
    }
L_001de5b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001de5b4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001de5b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001de5bc:;
    {
        cpu->r[14] = 0x001de5c4u;
    }
L_001de5c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de5c4u)) return;
    }
L_001de5c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001de5c8:;
    {
        wr8(cpu->r[4] + + 0xe0u, cpu->r[3]);
    }
L_001de5cc:;
    {
        goto L_001de3c8;
    }
}

/* _ZN3vox10EmitterObj15SetGainModifierEf @ 001de5d0 (arm) */
void fn_001de5d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001de5d0:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[1]);
    }
L_001de5d4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox10EmitterObj7IsReadyEv @ 001de5d8 (arm) */
void fn_001de5d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001de5d8:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x1cu);
    }
L_001de5dc:;
    {
        uint32_t v = cpu->r[0] ^ 0x00000001u; cpu->r[0] = v;
    }
L_001de5e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox10EmitterObj7_IsDoneEv @ 001de5e4 (arm) */
void fn_001de5e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001de5e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x90u);
    }
L_001de5e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001de5ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de60c;
        }
    }
L_001de5f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de5f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001de5f8:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001de5fc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x94u);
    }
L_001de600:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_001de604:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001de608:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001de60c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x94u);
    }
L_001de610:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_001de614:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001de618:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001de61c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox19PriorityBankManager14_CanAddEmitterEii @ 001de620 (arm) */
void fn_001de620(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001de620:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001de624:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001de628:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001de62c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001de630:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001de634:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001de638:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de68c;
        }
    }
L_001de63c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001de640:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001de644:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_001de648:;
    {
        cpu->r[1] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 3u, &shc));
    }
L_001de64c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001de650:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001de68c;
        }
    }
L_001de654:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0xcu);
    }
L_001de658:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x10u);
    }
L_001de65c:;
    {
        cpu->r[4] = rd32(cpu->r[12] + + 0x4u);
    }
L_001de660:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001de664:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[1] = v;
    }
L_001de668:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001de66c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001de698;
        }
    }
L_001de670:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x8u);
    }
L_001de674:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_001de678:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de6a0;
        }
    }
L_001de67c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000002u, 1, 1);
    }
L_001de680:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de6d8;
        }
    }
L_001de684:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001de688:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de698;
        }
    }
L_001de68c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001de690:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001de694:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001de698:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001de69c:;
    {
        goto L_001de690;
    }
L_001de6a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001de6a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001de68c;
        }
    }
L_001de6a8:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_001de6ac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_001de6b0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001de6c4;
        }
    }
L_001de6b4:;
    {
        goto L_001de698;
    }
L_001de6b8:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_001de6bc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_001de6c0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001de698;
        }
    }
L_001de6c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001de6c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001de6cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001de6d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de6b8;
        }
    }
L_001de6d4:;
    {
        goto L_001de68c;
    }
L_001de6d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001de6dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001de68c;
        }
    }
L_001de6e0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_001de6e4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_001de6e8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001de6fc;
        }
    }
L_001de6ec:;
    {
        goto L_001de698;
    }
L_001de6f0:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_001de6f4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_001de6f8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001de698;
        }
    }
L_001de6fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001de700:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001de704:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001de708:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de6f0;
        }
    }
L_001de70c:;
    {
        goto L_001de68c;
    }
}

/* _Z8DestructIN3vox15StreamInterfaceEEvPT_ @ 001de710 (arm) */
void fn_001de710(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001de710:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001de714:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001de718:;
    {
        cpu->r[14] = 0x001de720u;
    }
L_001de71c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001de720u)) return;
    }
L_001de720:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001de724u)) return;
    }
}

/* _ZNSt6vectorIN3vox19PriorityBankElementENS0_10SAllocatorIS1_LNS0_10VoxMemHintE0EEEE5eraseEPS1_ @ 001de724 (arm) */
void fn_001de724(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001de724:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_001de728:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4u);
    }
L_001de72c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001de730:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001de734:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 1);
    }
L_001de738:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001de73c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de76c;
        }
    }
L_001de740:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 0);
    }
L_001de744:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[12] = v;
    }
L_001de748:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001de74c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001de76c;
        }
    }
L_001de750:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001de754:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001de758:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_001de75c:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001de760:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001de764:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001de768:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de754;
        }
    }
L_001de76c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000008u, 1, 0);
    }
L_001de770:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001de774:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[4]);
    }
L_001de778:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_001de77c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNSt4priv10_Rb_globalIbE20_Rebalance_for_eraseEPNS_18_Rb_tree_node_baseERS3_S4_S4_ @ 001de780 (arm) */
void fn_001de780(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001de780:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
    }
L_001de784:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x8u);
    }
L_001de788:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001de78c:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_001de790:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = rd32(cpu->r[0] + + 0xcu);
        }
    }
L_001de794:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001deaf4;
        }
    }
L_001de798:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0xcu);
    }
L_001de79c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001de7a0:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_001de7a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de7b0;
        }
    }
L_001de7a8:;
    {
        goto L_001deaf4;
    }
L_001de7ac:;
    {
        cpu->r[5] = cpu->r[12];
    }
L_001de7b0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x8u);
    }
L_001de7b4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001de7b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de7ac;
        }
    }
L_001de7bc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001de7c0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xcu);
    }
L_001de7c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001deaf8;
        }
    }
L_001de7c8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001de7cc:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[7]);
    }
L_001de7d0:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[5]);
    }
L_001de7d4:;
    {
        cpu->r[12] = cpu->r[6];
    }
L_001de7d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de800;
        }
    }
L_001de7dc:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x4u);
    }
L_001de7e0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001de7e4:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[6]);
    }
L_001de7e8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_001de7ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_001de7f0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[12]);
        }
    }
L_001de7f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
        }
    }
L_001de7f8:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[5]);
    }
L_001de7fc:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[4]);
    }
L_001de800:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001de804:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001de808:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001deb80;
        }
    }
L_001de80c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001de810:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_001de814:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_001de818:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0x8u, cpu->r[5]);
        }
    }
L_001de81c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0xcu, cpu->r[5]);
        }
    }
L_001de820:;
    {
        cpu->r[6] = rd8(cpu->r[0]);
    }
L_001de824:;
    {
        cpu->r[2] = rd8(cpu->r[5]);
    }
L_001de828:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_001de82c:;
    {
        wr8(cpu->r[5], cpu->r[6]);
    }
L_001de830:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001de834:;
    {
        wr8(cpu->r[0], cpu->r[2]);
    }
L_001de838:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001de83c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_001de840:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_001de844:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de870;
        }
    }
L_001de848:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001de84c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001de850:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001deae8;
        }
    }
L_001de854:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001de858:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de87c;
        }
    }
L_001de85c:;
    {
        cpu->r[3] = rd8(cpu->r[4]);
    }
L_001de860:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001de864:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de87c;
        }
    }
L_001de868:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001de86c:;
    {
        wr8(cpu->r[4], cpu->r[3]);
    }
L_001de870:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001de874:;
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
L_001de878:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001de87c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x8u);
    }
L_001de880:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001de884:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de928;
        }
    }
L_001de888:;
    {
        cpu->r[2] = rd8(cpu->r[3]);
    }
L_001de88c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001de890:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de8e4;
        }
    }
L_001de894:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xcu);
    }
L_001de898:;
    {
        wr8(cpu->r[3], cpu->r[7]);
    }
L_001de89c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001de8a0:;
    {
        wr8(cpu->r[12], cpu->r[2]);
    }
L_001de8a4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
        }
    }
L_001de8a8:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x4u);
    }
L_001de8ac:;
    {
        wr32(cpu->r[12] + + 0x8u, cpu->r[0]);
    }
L_001de8b0:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001de8b4:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_001de8b8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001de8bc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[1], cpu->r[3]);
        }
    }
L_001de8c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de8d8;
        }
    }
L_001de8c4:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x4u);
    }
L_001de8c8:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0xcu);
    }
L_001de8cc:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_001de8d0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[2] + + 0xcu, cpu->r[3]);
        }
    }
L_001de8d4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + + 0x8u, cpu->r[3]);
        }
    }
L_001de8d8:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[3]);
    }
L_001de8dc:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[12]);
    }
L_001de8e0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x8u);
    }
L_001de8e4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001de8e8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001de8ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de8fc;
        }
    }
L_001de8f0:;
    {
        cpu->r[0] = rd8(cpu->r[2]);
    }
L_001de8f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001de8f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dea18;
        }
    }
L_001de8fc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x8u);
    }
L_001de900:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001de904:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de914;
        }
    }
L_001de908:;
    {
        cpu->r[2] = rd8(cpu->r[0]);
    }
L_001de90c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001de910:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dea8c;
        }
    }
L_001de914:;
    {
        wr8(cpu->r[3], cpu->r[6]);
    }
L_001de918:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_001de91c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x4u);
    }
L_001de920:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_001de924:;
    {
        goto L_001de848;
    }
L_001de928:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0xcu);
    }
L_001de92c:;
    {
        cpu->r[2] = rd8(cpu->r[3]);
    }
L_001de930:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001de934:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de988;
        }
    }
L_001de938:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x8u);
    }
L_001de93c:;
    {
        wr8(cpu->r[3], cpu->r[7]);
    }
L_001de940:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001de944:;
    {
        wr8(cpu->r[12], cpu->r[2]);
    }
L_001de948:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
        }
    }
L_001de94c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x4u);
    }
L_001de950:;
    {
        wr32(cpu->r[12] + + 0xcu, cpu->r[0]);
    }
L_001de954:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001de958:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_001de95c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001de960:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[1], cpu->r[3]);
        }
    }
L_001de964:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de97c;
        }
    }
L_001de968:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x4u);
    }
L_001de96c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x8u);
    }
L_001de970:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_001de974:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[2] + + 0x8u, cpu->r[3]);
        }
    }
L_001de978:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + + 0xcu, cpu->r[3]);
        }
    }
L_001de97c:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[3]);
    }
L_001de980:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[12]);
    }
L_001de984:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0xcu);
    }
L_001de988:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_001de98c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001de990:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de9a0;
        }
    }
L_001de994:;
    {
        cpu->r[0] = rd8(cpu->r[2]);
    }
L_001de998:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001de99c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001deb8c;
        }
    }
L_001de9a0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xcu);
    }
L_001de9a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001de9a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de914;
        }
    }
L_001de9ac:;
    {
        cpu->r[2] = rd8(cpu->r[0]);
    }
L_001de9b0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001de9b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de914;
        }
    }
L_001de9b8:;
    {
        cpu->r[6] = rd8(cpu->r[12]);
    }
L_001de9bc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001de9c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001de9c4:;
    {
        wr8(cpu->r[3], cpu->r[6]);
    }
L_001de9c8:;
    {
        wr8(cpu->r[12], cpu->r[2]);
    }
L_001de9cc:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[0], cpu->r[2]);
        }
    }
L_001de9d0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_001de9d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001de9d8:;
    {
        wr32(cpu->r[12] + + 0xcu, cpu->r[2]);
    }
L_001de9dc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + + 0x4u, cpu->r[12]);
        }
    }
L_001de9e0:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x4u);
    }
L_001de9e4:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001de9e8:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_001de9ec:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001de9f0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[1], cpu->r[3]);
        }
    }
L_001de9f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dea0c;
        }
    }
L_001de9f8:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x4u);
    }
L_001de9fc:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_001dea00:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_001dea04:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[2] + + 0x8u, cpu->r[3]);
        }
    }
L_001dea08:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + + 0xcu, cpu->r[3]);
        }
    }
L_001dea0c:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[3]);
    }
L_001dea10:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[12]);
    }
L_001dea14:;
    {
        goto L_001deae8;
    }
L_001dea18:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x8u);
    }
L_001dea1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001dea20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dea30;
        }
    }
L_001dea24:;
    {
        cpu->r[6] = rd8(cpu->r[0]);
    }
L_001dea28:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001dea2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dea8c;
        }
    }
L_001dea30:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x8u);
    }
L_001dea34:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001dea38:;
    {
        wr8(cpu->r[2], cpu->r[6]);
    }
L_001dea3c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001dea40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001dea44:;
    {
        wr8(cpu->r[3], cpu->r[6]);
    }
L_001dea48:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_001dea4c:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[0]);
    }
L_001dea50:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001dea54:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[0]);
    }
L_001dea58:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_001dea5c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001dea60:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[1], cpu->r[2]);
        }
    }
L_001dea64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dea7c;
        }
    }
L_001dea68:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001dea6c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x8u);
    }
L_001dea70:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001dea74:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
        }
    }
L_001dea78:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
        }
    }
L_001dea7c:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[3]);
    }
L_001dea80:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001dea84:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x8u);
    }
L_001dea88:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x8u);
    }
L_001dea8c:;
    {
        cpu->r[6] = rd8(cpu->r[12]);
    }
L_001dea90:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001dea94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001dea98:;
    {
        wr8(cpu->r[3], cpu->r[6]);
    }
L_001dea9c:;
    {
        wr8(cpu->r[12], cpu->r[2]);
    }
L_001deaa0:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[0], cpu->r[2]);
        }
    }
L_001deaa4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001deaa8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001deaac:;
    {
        wr32(cpu->r[12] + + 0x8u, cpu->r[2]);
    }
L_001deab0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + + 0x4u, cpu->r[12]);
        }
    }
L_001deab4:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x4u);
    }
L_001deab8:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001deabc:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_001deac0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001deac4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[1], cpu->r[3]);
        }
    }
L_001deac8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001deae0;
        }
    }
L_001deacc:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x4u);
    }
L_001dead0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0xcu);
    }
L_001dead4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_001dead8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[2] + + 0xcu, cpu->r[3]);
        }
    }
L_001deadc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + + 0x8u, cpu->r[3]);
        }
    }
L_001deae0:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[3]);
    }
L_001deae4:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[12]);
    }
L_001deae8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001deaec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de870;
        }
    }
L_001deaf0:;
    {
        goto L_001de868;
    }
L_001deaf4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001deaf8:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x4u);
    }
L_001deafc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001deb00:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[12]);
        }
    }
L_001deb04:;
    {
        cpu->r[6] = rd32(cpu->r[1]);
    }
L_001deb08:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_001deb0c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[1], cpu->r[4]);
        }
    }
L_001deb10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001deb28;
        }
    }
L_001deb14:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x4u);
    }
L_001deb18:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x8u);
    }
L_001deb1c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_001deb20:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6] + + 0x8u, cpu->r[4]);
        }
    }
L_001deb24:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + + 0xcu, cpu->r[4]);
        }
    }
L_001deb28:;
    {
        cpu->r[6] = rd32(cpu->r[2]);
    }
L_001deb2c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_001deb30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dec04;
        }
    }
L_001deb34:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001deb38:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_001deb3c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd8(cpu->r[5]);
        }
    }
L_001deb40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001de838;
        }
    }
L_001deb44:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_001deb48:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001deb4c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
        }
    }
L_001deb50:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd8(cpu->r[5]);
        }
    }
L_001deb54:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3], cpu->r[0]);
        }
    }
L_001deb58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de838;
        }
    }
L_001deb5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001deb60:;
    {
        goto L_001deb68;
    }
L_001deb64:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001deb68:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_001deb6c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001deb70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001deb64;
        }
    }
L_001deb74:;
    {
        cpu->r[2] = rd8(cpu->r[5]);
    }
L_001deb78:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001deb7c:;
    {
        goto L_001de838;
    }
L_001deb80:;
    {
        wr32(cpu->r[1], cpu->r[5]);
    }
L_001deb84:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001deb88:;
    {
        goto L_001de820;
    }
L_001deb8c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xcu);
    }
L_001deb90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001deb94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001deba4;
        }
    }
L_001deb98:;
    {
        cpu->r[6] = rd8(cpu->r[0]);
    }
L_001deb9c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001deba0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001de9b8;
        }
    }
L_001deba4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0xcu);
    }
L_001deba8:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001debac:;
    {
        wr8(cpu->r[2], cpu->r[6]);
    }
L_001debb0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001debb4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001debb8:;
    {
        wr8(cpu->r[3], cpu->r[6]);
    }
L_001debbc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_001debc0:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[0]);
    }
L_001debc4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001debc8:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[0]);
    }
L_001debcc:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_001debd0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001debd4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[1], cpu->r[2]);
        }
    }
L_001debd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001debf0;
        }
    }
L_001debdc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001debe0:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0xcu);
    }
L_001debe4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001debe8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
        }
    }
L_001debec:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
        }
    }
L_001debf0:;
    {
        wr32(cpu->r[2] + + 0xcu, cpu->r[3]);
    }
L_001debf4:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001debf8:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0xcu);
    }
L_001debfc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xcu);
    }
L_001dec00:;
    {
        goto L_001de9b8;
    }
L_001dec04:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0xcu);
    }
L_001dec08:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001dec0c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = rd32(cpu->r[0] + + 0x4u);
        }
    }
L_001dec10:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[2], cpu->r[6]);
        }
    }
L_001dec14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001deb34;
        }
    }
L_001dec18:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_001dec1c:;
    {
        goto L_001dec24;
    }
L_001dec20:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_001dec24:;
    {
        cpu->r[6] = rd32(cpu->r[7] + + 0x8u);
    }
L_001dec28:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001dec2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dec20;
        }
    }
L_001dec30:;
    {
        wr32(cpu->r[2], cpu->r[7]);
    }
L_001dec34:;
    {
        goto L_001deb34;
    }
}

/* _ZN3vox9HandlableD1Ev @ 001dec38 (arm) */
void fn_001dec38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dec38:;
    {
        cpu->r[3] = rd32(0x001dec40u + + 0x24u);
    }
L_001dec3c:;
    {
        cpu->r[2] = rd32(0x001dec44u + + 0x24u);
    }
L_001dec40:;
    {
        cpu->r[3] = add_flags(cpu, 0x001dec48u, cpu->r[3], 0, 0);
    }
L_001dec44:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001dec48:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001dec4c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dec50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001dec54:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000018u;
        wr32(cpu->r[0], cpu->r[2]);
        cpu->r[0] = wb_tmp;
    }
L_001dec58:;
    {
        cpu->r[14] = 0x001dec5cu; fn_001ebe28(cpu);
    }
L_001dec5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dec60:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001dec64u)) return;
    }
}

/* _ZN3vox18VoxCallbackManager7SendAllEv @ 001dec6c (arm) */
void fn_001dec6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dec6c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dec70:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dec74:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001dec78:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001dec7c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dec80u)) return;
        }
    }
L_001dec80:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001dec84:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001dec88:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001dec8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dec84;
        }
    }
L_001dec90:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001dec94:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001dec98:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[5] = v1;
    }
L_001dec9c:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_001deca0:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_001deca4:;
    {
        cpu->r[14] = 0x001deca8u; fn_00097dc8(cpu);
    }
L_001deca8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001decac:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001decb0:;
    {
        cpu->r[14] = 0x001decb8u;
    }
L_001decb4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001decb8u)) return;
    }
L_001decb8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001decbc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001decc0:;
    {
        cpu->r[14] = 0x001decc8u;
    }
L_001decc4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001decc8u)) return;
    }
L_001decc8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001deccc:;
    {
        cpu->r[14] = 0x001decd0u; fn_00097dc8(cpu);
    }
L_001decd0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001decd4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001decd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dec80;
        }
    }
L_001decdc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dece0u)) return;
    }
}

/* _ZN3vox18VoxCallbackManagerD1Ev @ 001dece0 (arm) */
void fn_001dece0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dece0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dece4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dece8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001decec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001decf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ded48;
        }
    }
L_001decf4:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001decf8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001decfc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001ded00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001decf8;
        }
    }
L_001ded04:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001ded08:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ded0c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[5] = v1;
    }
L_001ded10:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_001ded14:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_001ded18:;
    {
        cpu->r[14] = 0x001ded1cu; fn_00097dc8(cpu);
    }
L_001ded1c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001ded20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dece8;
        }
    }
L_001ded24:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ded28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ded2c:;
    {
        cpu->r[14] = 0x001ded34u;
    }
L_001ded30:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ded34u)) return;
    }
L_001ded34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ded38:;
    {
        cpu->r[14] = 0x001ded3cu; fn_00097dc8(cpu);
    }
L_001ded3c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ded40:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001ded44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001decf4;
        }
    }
L_001ded48:;
    {
        wr32(cpu->r[4], cpu->r[4]);
    }
L_001ded4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ded50:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[4]);
    }
L_001ded54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ded58u)) return;
    }
}

/* _ZN3vox18VoxCallbackManagerD2Ev @ 001ded58 (arm) */
void fn_001ded58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ded58:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ded5c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ded60:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ded64:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001ded68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dedc0;
        }
    }
L_001ded6c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001ded70:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001ded74:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001ded78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ded70;
        }
    }
L_001ded7c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001ded80:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ded84:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[5] = v1;
    }
L_001ded88:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_001ded8c:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_001ded90:;
    {
        cpu->r[14] = 0x001ded94u; fn_00097dc8(cpu);
    }
L_001ded94:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001ded98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ded60;
        }
    }
L_001ded9c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001deda0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001deda4:;
    {
        cpu->r[14] = 0x001dedacu;
    }
L_001deda8:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001dedacu)) return;
    }
L_001dedac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dedb0:;
    {
        cpu->r[14] = 0x001dedb4u; fn_00097dc8(cpu);
    }
L_001dedb4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001dedb8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001dedbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ded6c;
        }
    }
L_001dedc0:;
    {
        wr32(cpu->r[4], cpu->r[4]);
    }
L_001dedc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dedc8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[4]);
    }
L_001dedcc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dedd0u)) return;
    }
}

/* _ZN3vox10EmitterObj9UpdateDSPEf @ 001dedd0 (arm) */
void fn_001dedd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dedd0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xf0u);
    }
L_001dedd4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dedd8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001deddc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dede0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001dede4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dee1c;
        }
    }
L_001dede8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xecu);
    }
L_001dedec:;
    {
        cpu->r[14] = 0x001dedf0u; fn_00097dc8(cpu);
    }
L_001dedf0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001dedf4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xf0u);
    }
L_001dedf8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001dedfc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001dee00:;
    {
        wr32(cpu->r[4] + + 0xf0u, cpu->r[1]);
    }
L_001dee04:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[2]);
    }
L_001dee08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dee0cu)) return;
        }
    }
L_001dee0c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001dee10:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001dee14:;
    {
        cpu->r[14] = 0x001dee1cu;
    }
L_001dee18:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001dee1cu)) return;
    }
L_001dee1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001dee20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dee24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dee28u)) return;
        }
    }
L_001dee28:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001dee2c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001dee30:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001dee34:;
    {
        cpu->r[14] = 0x001dee3cu;
    }
L_001dee38:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001dee3cu)) return;
    }
L_001dee3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dee40u)) return;
    }
}

/* _ZN3vox10EmitterObj7CleanUpEv @ 001dee40 (arm) */
void fn_001dee40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dee40:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x114u);
    }
L_001dee44:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dee48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dee4c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001dee50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dee9c;
        }
    }
L_001dee54:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001dee58:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001dee5c:;
    {
        cpu->r[14] = 0x001dee64u;
    }
L_001dee60:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001dee64u)) return;
    }
L_001dee64:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001dee68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dee9c;
        }
    }
L_001dee6c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x104u);
    }
L_001dee70:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001dee74:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dee9c;
        }
    }
L_001dee78:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xf4u);
    }
L_001dee7c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001dee80:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001dee84:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dee88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dee94;
        }
    }
L_001dee8c:;
    {
        cpu->r[14] = 0x001dee90u; fn_00097dc8(cpu);
    }
L_001dee90:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x104u);
    }
L_001dee94:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001dee98:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001dee78;
        }
    }
L_001dee9c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xecu);
    }
L_001deea0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001deea4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001deeac;
        }
    }
L_001deea8:;
    {
        cpu->r[14] = 0x001deeacu; fn_00097dc8(cpu);
    }
L_001deeac:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xf0u);
    }
L_001deeb0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001deeb4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001deeb8u)) return;
        }
    }
L_001deeb8:;
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
L_001deebc:;
    {
        return fn_00097dc8(cpu);
    }
}

/* _ZNSt4priv8_Rb_treeIxSt4lessIxESt4pairIKxPN3vox9HandlableEENS_10_Select1stIS8_EENS_11_MapTraitsTIS8_EENS5_10SAllocatorIS3_IxS7_ELNS5_10VoxMemHintE0EEEE8_M_eraseEPNS_18_Rb_tree_node_baseE @ 001deec0 (arm) */
void fn_001deec0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001deec0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001deec4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001deec8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001deecc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001deed0u)) return;
        }
    }
L_001deed0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001deed4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001deed8:;
    {
        cpu->r[14] = 0x001deedcu; fn_001deec0(cpu);
    }
L_001deedc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x8u);
    }
L_001deee0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001deee4:;
    {
        cpu->r[14] = 0x001deee8u; fn_00097dc8(cpu);
    }
L_001deee8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001deeec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001deed0;
        }
    }
L_001deef0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001deef4u)) return;
    }
}

/* _ZN3vox18HandlableContainer5ClearEv @ 001deef4 (arm) */
void fn_001deef4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001deef4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001deef8:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_001deefc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001def00:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x8u);
    }
L_001def04:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001def08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001def5c;
        }
    }
L_001def0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001def10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001def14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001def30;
        }
    }
L_001def18:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001def1c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001def20:;
    {
        cpu->r[14] = 0x001def28u;
    }
L_001def24:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001def28u)) return;
    }
L_001def28:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_001def2c:;
    {
        cpu->r[14] = 0x001def30u; fn_00097dc8(cpu);
    }
L_001def30:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001def34:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001def38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001def44;
        }
    }
L_001def3c:;
    {
        goto L_001def90;
    }
L_001def40:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001def44:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001def48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001def4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001def40;
        }
    }
L_001def50:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001def54:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001def58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001def0c;
        }
    }
L_001def5c:;
    {
        cpu->r[4] = rd32(cpu->r[6]);
    }
L_001def60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001def64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001def68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001def6cu)) return;
        }
    }
L_001def6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001def70:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_001def74:;
    {
        cpu->r[14] = 0x001def78u; fn_001deec0(cpu);
    }
L_001def78:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001def7c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[4]);
    }
L_001def80:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[4]);
    }
L_001def84:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001def88:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001def8c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001def90u)) return;
    }
L_001def90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001def94:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_001def98:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001def9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001defb8;
        }
    }
L_001defa0:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001defa4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001defa8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001defac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001defb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001defa0;
        }
    }
L_001defb4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001defb8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001defbc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_001defc0:;
    {
        goto L_001def04;
    }
}

/* _ZN3vox18HandlableContainerD1Ev @ 001defc4 (arm) */
void fn_001defc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001defc4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001defc8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001defcc:;
    {
        cpu->r[14] = 0x001defd0u; fn_001deef4(cpu);
    }
L_001defd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001defd4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001defd8u)) return;
    }
}

/* _ZN3vox18HandlableContainerD2Ev @ 001defd8 (arm) */
void fn_001defd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001defd8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001defdc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001defe0:;
    {
        cpu->r[14] = 0x001defe4u; fn_001deef4(cpu);
    }
L_001defe4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001defe8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001defecu)) return;
    }
}

/* _ZN3vox18HandlableContainer5EraseEx @ 001defec (arm) */
void fn_001defec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001defec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001deff0:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001deff4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001deff8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_001deffc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001df000:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df064;
        }
    }
L_001df004:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001df008:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x14u);
    }
L_001df00c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001df010:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001df03c;
        }
    }
L_001df014:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df030;
        }
    }
L_001df018:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_001df01c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001df020:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001df024:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df050;
        }
    }
L_001df028:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001df02c:;
    {
        goto L_001df008;
    }
L_001df030:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_001df034:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001df038:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001df018;
        }
    }
L_001df03c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xcu);
    }
L_001df040:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001df044:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001df048:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001df04c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001df028;
        }
    }
L_001df050:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001df054:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001df058u)) return;
        }
    }
L_001df058:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x14u);
    }
L_001df05c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001df060:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001df0c0;
        }
    }
L_001df064:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_001df068:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001df06c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001df070u)) return;
        }
    }
L_001df070:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_001df074:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001df078:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df098;
        }
    }
L_001df07c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001df080:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001df084:;
    {
        cpu->r[14] = 0x001df08cu;
    }
L_001df088:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001df08cu)) return;
    }
L_001df08c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_001df090:;
    {
        cpu->r[14] = 0x001df094u; fn_00097dc8(cpu);
    }
L_001df094:;
    {
        cpu->r[4] = rd32(cpu->r[5]);
    }
L_001df098:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_001df09c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001df0a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001df0a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001df0a8:;
    {
        cpu->r[14] = 0x001df0acu; fn_001de780(cpu);
    }
L_001df0ac:;
    {
        cpu->r[14] = 0x001df0b0u; fn_00097dc8(cpu);
    }
L_001df0b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001df0b4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001df0b8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001df0bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001df0c0u)) return;
    }
L_001df0c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001df068;
        }
    }
L_001df0c4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_001df0c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001df0cc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001df068;
        }
    }
L_001df0d0:;
    {
        goto L_001df064;
    }
}

/* _ZN3vox7DataObjD1Ev @ 001df0d4 (arm) */
void fn_001df0d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df0d4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001df0d8:;
    {
        cpu->r[7] = rd32(0x001df0e0u + + 0x6cu);
    }
L_001df0dc:;
    {
        cpu->r[3] = rd32(0x001df0e4u + + 0x6cu);
    }
L_001df0e0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001df0e4:;
    {
        cpu->r[7] = add_flags(cpu, 0x001df0ecu, cpu->r[7], 0, 0);
    }
L_001df0e8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000040u, 0, 0);
    }
L_001df0ec:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001df0f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001df0f4:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000058u;
        wr32(cpu->r[0], cpu->r[3]);
        cpu->r[0] = wb_tmp;
    }
L_001df0f8:;
    {
        cpu->r[14] = 0x001df0fcu; fn_001ebe28(cpu);
    }
L_001df0fc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x40u);
    }
L_001df100:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001df104:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df124;
        }
    }
L_001df108:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001df10c:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001df110:;
    {
        cpu->r[14] = 0x001df114u; fn_00097dc8(cpu);
    }
L_001df114:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001df118:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001df11c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001df10c;
        }
    }
L_001df120:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001df124:;
    {
        cpu->r[2] = rd32(0x001df12cu + + 0x28u);
    }
L_001df128:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001df12c:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_001df130:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[3]);
    }
L_001df134:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_001df138:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001df13c:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000018u;
        wr32(cpu->r[0], cpu->r[2]);
        cpu->r[0] = wb_tmp;
    }
L_001df140:;
    {
        cpu->r[14] = 0x001df144u; fn_001ebe28(cpu);
    }
L_001df144:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001df148:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001df14cu)) return;
    }
}

/* _ZN3vox18VoxCallbackManager3AddEPNS_11VoxCallbackE @ 001df158 (arm) */
void fn_001df158(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df158:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001df15c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001df160:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001df164:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001df168u)) return;
        }
    }
L_001df168:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001df16c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001df170:;
    {
        cpu->r[14] = 0x001df174u; fn_00097dd0(cpu);
    }
L_001df174:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001df178:;
    {
        wr32(cpu->r[0], cpu->r[4]);
    }
L_001df17c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[5]);
    }
L_001df180:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001df184:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001df188:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001df18cu)) return;
    }
}

/* _ZNSt6vectorIN3vox19PriorityBankElementENS0_10SAllocatorIS1_LNS0_10VoxMemHintE0EEEEaSERKS5_ @ 001df18c (arm) */
void fn_001df18c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df18c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001df190:;
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
L_001df194:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001df198:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001df19c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df21c;
        }
    }
L_001df1a0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001df1a4:;
    {
        cpu->r[5] = rd32(cpu->r[8]);
    }
L_001df1a8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001df1ac:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_001df1b0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
    }
L_001df1b4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001df1b8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001df1bc:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 3u, &shc); cpu->r[4] = v;
    }
L_001df1c0:;
    {
        cpu->r[10] = cpu->r[4];
    }
L_001df1c4:;
    {
        sub_flags(cpu, cpu->r[4], shifter(cpu->r[2], 1, 3u, &shc), 1, 1);
    }
L_001df1c8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001df2ac;
        }
    }
L_001df1cc:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x4u);
    }
L_001df1d0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_001df1d4:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 3u, &shc); cpu->r[7] = v;
    }
L_001df1d8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_001df1dc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001df224;
        }
    }
L_001df1e0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001df1e4:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = shifter(cpu->r[4], 2, 3u, &shc); cpu->r[4] = v;
        }
    }
L_001df1e8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001df214;
        }
    }
L_001df1ec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001df1f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_001df1f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001df1f8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_001df1fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001df200:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001df204:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001df208:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001df1f0;
        }
    }
L_001df20c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001df210:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 3u, &shc); cpu->r[4] = v;
    }
L_001df214:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_001df218:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[4]);
    }
L_001df21c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001df220:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001df224u)) return;
    }
L_001df224:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001df228:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], shifter(cpu->r[7], 2, 3u, &shc), 0, 0);
    }
L_001df22c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001df268;
        }
    }
L_001df230:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001df234:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_001df238:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001df23c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001df240:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001df244:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001df248:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001df24c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001df234;
        }
    }
L_001df250:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[12] = v1;
    }
L_001df254:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001df258:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_001df25c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x4u);
    }
L_001df260:;
    {
        uint32_t v = cpu->r[7] & ~ 0x00000007u; cpu->r[7] = v;
    }
L_001df264:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_001df268:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 0);
    }
L_001df26c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[2] = v;
    }
L_001df270:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001df274:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 3u, &shc), 0, 0);
        }
    }
L_001df278:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001df218;
        }
    }
L_001df27c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001df280:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_001df284:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_001df288:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001df28c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001df290:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001df294:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001df298:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001df280;
        }
    }
L_001df29c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001df2a0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 3u, &shc), 0, 0);
    }
L_001df2a4:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[4]);
    }
L_001df2a8:;
    {
        goto L_001df21c;
    }
L_001df2ac:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 3u, &shc); cpu->r[8] = v;
    }
L_001df2b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001df2b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001df2b8:;
    {
        cpu->r[14] = 0x001df2bcu; fn_00097dd0(cpu);
    }
L_001df2bc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001df2c0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001df2c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001df2e8;
        }
    }
L_001df2c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001df2cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001df2d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_001df2d4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_001df2d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001df2dc:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001df2e0:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001df2e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001df2cc;
        }
    }
L_001df2e8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001df2ec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_001df2f0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_001df2f4:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_001df2f8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001df2fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
        }
    }
L_001df300:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_001df304:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~shifter(cpu->r[3], 3, 3u, &shc));
        }
    }
L_001df308:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
        }
    }
L_001df30c:;
    {
        cpu->r[14] = 0x001df310u; fn_00097dc8(cpu);
    }
L_001df310:;
    {
        wr32(cpu->r[6], cpu->r[7]);
    }
L_001df314:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_001df318:;
    {
        goto L_001df21c;
    }
}

/* _ZN3vox19PriorityBankManager12GetDebugInfoEPNS_15DebugChunk_bankE @ 001df31c (arm) */
void fn_001df31c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df31c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001df320:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001df324:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_001df328:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001df32c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df330:;
    {
        cpu->r[14] = 0x001df334u; fn_001ebcfc(cpu);
    }
L_001df334:;
    {
        cpu->r[7] = rd32(cpu->r[4]);
    }
L_001df338:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001df33c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001df394;
        }
    }
L_001df340:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001df344:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001df348:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001df34c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_001df350:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_001df354:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001df358:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x8u);
    }
L_001df35c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_001df360:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0xcu);
    }
L_001df364:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x10u);
    }
L_001df368:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[4]);
    }
L_001df36c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_001df370:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[8], cpu->r[12], 1, 0);
    }
L_001df374:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000018u, 0, 0);
    }
L_001df378:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[12] = v;
    }
L_001df37c:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[4]);
    }
L_001df380:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001df384:;
    {
        wr32(cpu->r[6] + + 0x10u, cpu->r[12]);
    }
L_001df388:;
    {
        wr32(cpu->r[6] + + 0xcu, cpu->r[3]);
    }
L_001df38c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000014u, 0, 0);
    }
L_001df390:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001df34c;
        }
    }
L_001df394:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df398:;
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
L_001df39c:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox19PriorityBankManager13CanAddEmitterEii @ 001df3a0 (arm) */
void fn_001df3a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df3a0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001df3a4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_001df3a8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001df3ac:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001df3b0:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001df3b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001df3b8:;
    {
        cpu->r[14] = 0x001df3bcu; fn_001ebcfc(cpu);
    }
L_001df3bc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001df3c0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001df3c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df3c8:;
    {
        cpu->r[14] = 0x001df3ccu; fn_001de620(cpu);
    }
L_001df3cc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001df3d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001df3d4:;
    {
        cpu->r[14] = 0x001df3d8u; fn_001ebcf8(cpu);
    }
L_001df3d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df3dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001df3e0u)) return;
    }
}

/* _ZN3vox10EmitterObj9GetStatusEv @ 001df3e0 (arm) */
void fn_001df3e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df3e0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001df3e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001df3e8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001df3ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df3f0:;
    {
        cpu->r[14] = 0x001df3f4u; fn_001ebcfc(cpu);
    }
L_001df3f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x90u);
    }
L_001df3f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001df3fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df444;
        }
    }
L_001df400:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001df404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df430;
        }
    }
L_001df408:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001df40c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
        }
    }
L_001df410:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df414:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001df418:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001df41c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_001df420:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = 0x00000004u;
        }
    }
L_001df424:;
    {
        cpu->r[14] = 0x001df428u; fn_001ebcf8(cpu);
    }
L_001df428:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001df42c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001df430u)) return;
    }
L_001df430:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001df434:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df438:;
    {
        cpu->r[14] = 0x001df43cu; fn_001ebcf8(cpu);
    }
L_001df43c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001df440:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001df444u)) return;
    }
L_001df444:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x6cu);
    }
L_001df448:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001df44c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001df430;
        }
    }
L_001df450:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x94u);
    }
L_001df454:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df458:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_001df45c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = 0x00000011u;
        }
    }
L_001df460:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000021u;
        }
    }
L_001df464:;
    {
        cpu->r[14] = 0x001df468u; fn_001ebcf8(cpu);
    }
L_001df468:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001df46c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001df470u)) return;
    }
}

/* _ZN3vox10EmitterObj30NeedToSendStateChangedCallbackERPFvRNS_13EmitterHandleEPvNS_18EmitterExternStateEERS3_RS4_ @ 001df470 (arm) */
void fn_001df470(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df470:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001df474:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001df478:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001df47c:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001df480:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df484:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001df488:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001df48c:;
    {
        cpu->r[14] = 0x001df490u; fn_001ebcfc(cpu);
    }
L_001df490:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x98u);
    }
L_001df494:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001df498:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df4dc;
        }
    }
L_001df49c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x138u);
    }
L_001df4a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001df4a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df4dc;
        }
    }
L_001df4a8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x13cu);
    }
L_001df4ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x90u);
    }
L_001df4b0:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_001df4b4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001df4b8:;
    {
        wr32(cpu->r[7], cpu->r[1]);
    }
L_001df4bc:;
    {
        wr8(cpu->r[4] + + 0x98u, cpu->r[3]);
    }
L_001df4c0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_001df4c4:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[2]) {
        case 0: goto L_001df4f0;
        case 1: goto L_001df52c;
        case 2: goto L_001df51c;
        case 3: goto L_001df4f0;
        default: guest_unimplemented(cpu, 0x001df4c4u); return; }
        }
    }
L_001df4c8:;
    {
        goto L_001df50c;
    }
L_001df4dc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001df4e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df4e4:;
    {
        cpu->r[14] = 0x001df4e8u; fn_001ebcf8(cpu);
    }
L_001df4e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001df4ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001df4f0u)) return;
    }
L_001df4f0:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_001df4f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df4f8:;
    {
        wr32(cpu->r[8], cpu->r[3]);
    }
L_001df4fc:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001df500:;
    {
        cpu->r[14] = 0x001df504u; fn_001ebcf8(cpu);
    }
L_001df504:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001df508:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001df50cu)) return;
    }
L_001df50c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001df510:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001df514:;
    {
        wr32(cpu->r[8], cpu->r[3]);
    }
L_001df518:;
    {
        goto L_001df4e0;
    }
L_001df51c:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001df520:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001df524:;
    {
        wr32(cpu->r[8], cpu->r[3]);
    }
L_001df528:;
    {
        goto L_001df4e0;
    }
L_001df52c:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001df530:;
    {
        wr32(cpu->r[8], cpu->r[4]);
    }
L_001df534:;
    {
        goto L_001df4e0;
    }
}

/* _ZN3vox10EmitterObj30UnregisterStateChangedCallbackEv @ 001df538 (arm) */
void fn_001df538(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df538:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001df53c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001df540:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001df544:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df548:;
    {
        cpu->r[14] = 0x001df54cu; fn_001ebcfc(cpu);
    }
L_001df54c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001df550:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df554:;
    {
        wr32(cpu->r[4] + + 0x13cu, cpu->r[3]);
    }
L_001df558:;
    {
        wr32(cpu->r[4] + + 0x138u, cpu->r[3]);
    }
L_001df55c:;
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
L_001df560:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox10EmitterObj28RegisterStateChangedCallbackEPFvRNS_13EmitterHandleEPvNS_18EmitterExternStateEES3_ @ 001df564 (arm) */
void fn_001df564(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df564:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001df568:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001df56c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001df570:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df574:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001df578:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001df57c:;
    {
        cpu->r[14] = 0x001df580u; fn_001ebcfc(cpu);
    }
L_001df580:;
    {
        wr32(cpu->r[4] + + 0x13cu, cpu->r[7]);
    }
L_001df584:;
    {
        wr32(cpu->r[4] + + 0x138u, cpu->r[6]);
    }
L_001df588:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df58c:;
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
L_001df590:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal11IsSuspendedEv @ 001df594 (arm) */
void fn_001df594(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df594:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001df598:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001df59c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001df5a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001df5a4:;
    {
        cpu->r[14] = 0x001df5a8u; fn_001ebcfc(cpu);
    }
L_001df5a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x554u);
    }
L_001df5ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001df5b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001df5b4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001df5b8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_001df5bc:;
    {
        cpu->r[14] = 0x001df5c0u; fn_001ebcf8(cpu);
    }
L_001df5c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001df5c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001df5c8u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal6ResumeEv @ 001df5c8 (arm) */
void fn_001df5c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df5c8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x50cu);
    }
L_001df5cc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001df5d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001df5d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001df5d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001df5dcu)) return;
        }
    }
L_001df5dc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001df5e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df5e4:;
    {
        cpu->r[14] = 0x001df5e8u; fn_001ebcfc(cpu);
    }
L_001df5e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x554u);
    }
L_001df5ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001df5f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001df60c;
        }
    }
L_001df5f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x554u);
    }
L_001df5f8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001df5fc:;
    {
        wr32(cpu->r[4] + + 0x554u, cpu->r[3]);
    }
L_001df600:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df604:;
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
L_001df608:;
    {
        return fn_001ebcf8(cpu);
    }
L_001df60c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x554u);
    }
L_001df610:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001df614:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001df600;
        }
    }
L_001df618:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50cu);
    }
L_001df61c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001df620:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df5f4;
        }
    }
L_001df624:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001df628:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001df62c:;
    {
        cpu->r[14] = 0x001df634u;
    }
L_001df630:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001df634u)) return;
    }
L_001df634:;
    {
        goto L_001df5f4;
    }
}

/* _ZN3vox17VoxEngineInternal7SuspendEv @ 001df638 (arm) */
void fn_001df638(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df638:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x50cu);
    }
L_001df63c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001df640:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001df644:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001df648:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001df64cu)) return;
        }
    }
L_001df64c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001df650:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df654:;
    {
        cpu->r[14] = 0x001df658u; fn_001ebcfc(cpu);
    }
L_001df658:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x554u);
    }
L_001df65c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001df660:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001df680;
        }
    }
L_001df664:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50cu);
    }
L_001df668:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001df66c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df680;
        }
    }
L_001df670:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001df674:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001df678:;
    {
        cpu->r[14] = 0x001df680u;
    }
L_001df67c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001df680u)) return;
    }
L_001df680:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x554u);
    }
L_001df684:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df688:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001df68c:;
    {
        wr32(cpu->r[4] + + 0x554u, cpu->r[3]);
    }
L_001df690:;
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
L_001df694:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox10EmitterObj10PrintDebugEv @ 001df698 (arm) */
void fn_001df698(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df698:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001df69c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001df6a0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001df6a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001df6a8:;
    {
        cpu->r[14] = 0x001df6acu; fn_001ebcfc(cpu);
    }
L_001df6ac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x110u);
    }
L_001df6b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001df6b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df6c8;
        }
    }
L_001df6b8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001df6bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001df6c0:;
    {
        cpu->r[14] = 0x001df6c8u;
    }
L_001df6c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001df6c8u)) return;
    }
L_001df6c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001df6cc:;
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
L_001df6d0:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox10EmitterObj16Get3DParameterfvEiRNS_11VoxVector3fE @ 001df6d4 (arm) */
void fn_001df6d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df6d4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001df6d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001df6dc:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001df6e0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001df6e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df6e8:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001df6ec:;
    {
        cpu->r[14] = 0x001df6f0u; fn_001ebcfc(cpu);
    }
L_001df6f0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000009u, 1, 1);
    }
L_001df6f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df734;
        }
    }
L_001df6f8:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000000au, 1, 1);
    }
L_001df6fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df724;
        }
    }
L_001df700:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000008u, 1, 1);
    }
L_001df704:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df714;
        }
    }
L_001df708:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df70c:;
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
L_001df710:;
    {
        return fn_001ebcf8(cpu);
    }
L_001df714:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000009cu, 0, 0);
    }
L_001df718:;
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
L_001df71c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001df720:;
    {
        goto L_001df708;
    }
L_001df724:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x000000a8u, 0, 0);
    }
L_001df728:;
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
L_001df72c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001df730:;
    {
        goto L_001df708;
    }
L_001df734:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x000000b4u, 0, 0);
    }
L_001df738:;
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
L_001df73c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001df740:;
    {
        goto L_001df708;
    }
}

/* _ZN3vox10EmitterObj16Get3DParameter3fEiRfS1_S1_ @ 001df744 (arm) */
void fn_001df744(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df744:;
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
L_001df748:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001df74c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001df750:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001df754:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001df758:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001df75c:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001df760:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x20u);
    }
L_001df764:;
    {
        cpu->r[14] = 0x001df768u; fn_001ebcfc(cpu);
    }
L_001df768:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000009u, 1, 1);
    }
L_001df76c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df7c4;
        }
    }
L_001df770:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000au, 1, 1);
    }
L_001df774:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df7a8;
        }
    }
L_001df778:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000008u, 1, 1);
    }
L_001df77c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df78c;
        }
    }
L_001df780:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001df784:;
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
L_001df788:;
    {
        return fn_001ebcf8(cpu);
    }
L_001df78c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x9cu);
    }
L_001df790:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001df794:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xa0u);
    }
L_001df798:;
    {
        *(uint32_t*)G(cpu->r[10]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001df79c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xa4u);
    }
L_001df7a0:;
    {
        *(uint32_t*)G(cpu->r[8]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001df7a4:;
    {
        goto L_001df780;
    }
L_001df7a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xa8u);
    }
L_001df7ac:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001df7b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xacu);
    }
L_001df7b4:;
    {
        *(uint32_t*)G(cpu->r[10]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001df7b8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xb0u);
    }
L_001df7bc:;
    {
        *(uint32_t*)G(cpu->r[8]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001df7c0:;
    {
        goto L_001df780;
    }
L_001df7c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xb4u);
    }
L_001df7c8:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001df7cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xb8u);
    }
L_001df7d0:;
    {
        *(uint32_t*)G(cpu->r[10]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001df7d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xbcu);
    }
L_001df7d8:;
    {
        *(uint32_t*)G(cpu->r[8]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001df7dc:;
    {
        goto L_001df780;
    }
}

/* _ZN3vox10EmitterObj15Get3DParameterfEiRf @ 001df7e0 (arm) */
void fn_001df7e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df7e0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001df7e4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001df7e8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001df7ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001df7f0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_001df7f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df7f8:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001df7fc:;
    {
        cpu->r[14] = 0x001df800u; fn_001ebcfc(cpu);
    }
L_001df800:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000006u, 1, 1);
    }
L_001df804:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[6]) {
        case 0: goto L_001df828;
        case 1: goto L_001df854;
        case 2: goto L_001df860;
        case 3: goto L_001df86c;
        case 4: goto L_001df878;
        case 5: goto L_001df83c;
        case 6: goto L_001df848;
        default: guest_unimplemented(cpu, 0x001df804u); return; }
        }
    }
L_001df808:;
    {
        goto L_001df830;
    }
L_001df828:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xc4u);
    }
L_001df82c:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001df830:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df834:;
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
L_001df838:;
    {
        return fn_001ebcf8(cpu);
    }
L_001df83c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xd8u);
    }
L_001df840:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001df844:;
    {
        goto L_001df830;
    }
L_001df848:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xdcu);
    }
L_001df84c:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001df850:;
    {
        goto L_001df830;
    }
L_001df854:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xc8u);
    }
L_001df858:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001df85c:;
    {
        goto L_001df830;
    }
L_001df860:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xccu);
    }
L_001df864:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001df868:;
    {
        goto L_001df830;
    }
L_001df86c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xd0u);
    }
L_001df870:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001df874:;
    {
        goto L_001df830;
    }
L_001df878:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xd4u);
    }
L_001df87c:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001df880:;
    {
        goto L_001df830;
    }
}

/* _ZN3vox10EmitterObj15Get3DParameteriEiRi @ 001df884 (arm) */
void fn_001df884(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df884:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001df888:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001df88c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001df890:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df894:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001df898:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001df89c:;
    {
        cpu->r[14] = 0x001df8a0u; fn_001ebcfc(cpu);
    }
L_001df8a0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001df8a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df8a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc0u);
        }
    }
L_001df8ac:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[7], cpu->r[3]);
        }
    }
L_001df8b0:;
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
L_001df8b4:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox10EmitterObj16Set3DParameterfvEiRKNS_11VoxVector3fE @ 001df8b8 (arm) */
void fn_001df8b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df8b8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001df8bc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001df8c0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001df8c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001df8c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df8cc:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001df8d0:;
    {
        cpu->r[14] = 0x001df8d4u; fn_001ebcfc(cpu);
    }
L_001df8d4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000009u, 1, 1);
    }
L_001df8d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df928;
        }
    }
L_001df8dc:;
    {
        sub_flags(cpu, cpu->r[6], 0x0000000au, 1, 1);
    }
L_001df8e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df910;
        }
    }
L_001df8e4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_001df8e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df8f8;
        }
    }
L_001df8ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df8f0:;
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
L_001df8f4:;
    {
        return fn_001ebcf8(cpu);
    }
L_001df8f8:;
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
L_001df8fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000009cu, 0, 0);
    }
L_001df900:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001df904:;
    {
        wr8(cpu->r[4] + + 0xe8u, cpu->r[12]);
    }
L_001df908:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001df90c:;
    {
        goto L_001df8ec;
    }
L_001df910:;
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
L_001df914:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000000a8u, 0, 0);
    }
L_001df918:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001df91c:;
    {
        wr8(cpu->r[4] + + 0xeau, cpu->r[12]);
    }
L_001df920:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001df924:;
    {
        goto L_001df8ec;
    }
L_001df928:;
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
L_001df92c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000000b4u, 0, 0);
    }
L_001df930:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001df934:;
    {
        wr8(cpu->r[4] + + 0xe9u, cpu->r[12]);
    }
L_001df938:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001df93c:;
    {
        goto L_001df8ec;
    }
}

/* _ZN3vox10EmitterObj16Set3DParameter3fEifff @ 001df940 (arm) */
void fn_001df940(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df940:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001df944:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001df948:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001df94c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_001df950:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001df954:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001df958:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001df95c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001df960:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001df964:;
    {
        cpu->r[14] = 0x001df968u; fn_001ebcfc(cpu);
    }
L_001df968:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000009u, 1, 1);
    }
L_001df96c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df9c0;
        }
    }
L_001df970:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000au, 1, 1);
    }
L_001df974:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df9a8;
        }
    }
L_001df978:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000008u, 1, 1);
    }
L_001df97c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001df990;
        }
    }
L_001df980:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001df984:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001df988:;
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
L_001df98c:;
    {
        return fn_001ebcf8(cpu);
    }
L_001df990:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001df994:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[7]);
    }
L_001df998:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[8]);
    }
L_001df99c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001df9a0:;
    {
        wr8(cpu->r[4] + + 0xe8u, cpu->r[3]);
    }
L_001df9a4:;
    {
        goto L_001df980;
    }
L_001df9a8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001df9ac:;
    {
        wr32(cpu->r[4] + + 0xa8u, cpu->r[7]);
    }
L_001df9b0:;
    {
        wr32(cpu->r[4] + + 0xacu, cpu->r[8]);
    }
L_001df9b4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001df9b8:;
    {
        wr8(cpu->r[4] + + 0xeau, cpu->r[3]);
    }
L_001df9bc:;
    {
        goto L_001df980;
    }
L_001df9c0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001df9c4:;
    {
        wr32(cpu->r[4] + + 0xb4u, cpu->r[7]);
    }
L_001df9c8:;
    {
        wr32(cpu->r[4] + + 0xb8u, cpu->r[8]);
    }
L_001df9cc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xbcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001df9d0:;
    {
        wr8(cpu->r[4] + + 0xe9u, cpu->r[3]);
    }
L_001df9d4:;
    {
        goto L_001df980;
    }
}

/* _ZN3vox10EmitterObj15Set3DParameterfEif @ 001df9d8 (arm) */
void fn_001df9d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001df9d8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001df9dc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001df9e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001df9e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001df9e8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_001df9ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001df9f0:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001df9f4:;
    {
        cpu->r[14] = 0x001df9f8u; fn_001ebcfc(cpu);
    }
L_001df9f8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000006u, 1, 1);
    }
L_001df9fc:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[6]) {
        case 0: goto L_001dfa20;
        case 1: goto L_001dfa58;
        case 2: goto L_001dfa68;
        case 3: goto L_001dfa78;
        case 4: goto L_001dfa88;
        case 5: goto L_001dfa38;
        case 6: goto L_001dfa48;
        default: guest_unimplemented(cpu, 0x001df9fcu); return; }
        }
    }
L_001dfa00:;
    {
        goto L_001dfa2c;
    }
L_001dfa20:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001dfa24:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[7]);
    }
L_001dfa28:;
    {
        wr8(cpu->r[4] + + 0xe1u, cpu->r[3]);
    }
L_001dfa2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfa30:;
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
L_001dfa34:;
    {
        return fn_001ebcf8(cpu);
    }
L_001dfa38:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001dfa3c:;
    {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[7]);
    }
L_001dfa40:;
    {
        wr8(cpu->r[4] + + 0xe6u, cpu->r[3]);
    }
L_001dfa44:;
    {
        goto L_001dfa2c;
    }
L_001dfa48:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001dfa4c:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[7]);
    }
L_001dfa50:;
    {
        wr8(cpu->r[4] + + 0xe7u, cpu->r[3]);
    }
L_001dfa54:;
    {
        goto L_001dfa2c;
    }
L_001dfa58:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001dfa5c:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[7]);
    }
L_001dfa60:;
    {
        wr8(cpu->r[4] + + 0xe2u, cpu->r[3]);
    }
L_001dfa64:;
    {
        goto L_001dfa2c;
    }
L_001dfa68:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001dfa6c:;
    {
        wr32(cpu->r[4] + + 0xccu, cpu->r[7]);
    }
L_001dfa70:;
    {
        wr8(cpu->r[4] + + 0xe3u, cpu->r[3]);
    }
L_001dfa74:;
    {
        goto L_001dfa2c;
    }
L_001dfa78:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001dfa7c:;
    {
        wr32(cpu->r[4] + + 0xd0u, cpu->r[7]);
    }
L_001dfa80:;
    {
        wr8(cpu->r[4] + + 0xe4u, cpu->r[3]);
    }
L_001dfa84:;
    {
        goto L_001dfa2c;
    }
L_001dfa88:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001dfa8c:;
    {
        wr32(cpu->r[4] + + 0xd4u, cpu->r[7]);
    }
L_001dfa90:;
    {
        wr8(cpu->r[4] + + 0xe5u, cpu->r[3]);
    }
L_001dfa94:;
    {
        goto L_001dfa2c;
    }
}

/* _ZN3vox10EmitterObj15Set3DParameteriEii @ 001dfa98 (arm) */
void fn_001dfa98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dfa98:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001dfa9c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001dfaa0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dfaa4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfaa8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001dfaac:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001dfab0:;
    {
        cpu->r[14] = 0x001dfab4u; fn_001ebcfc(cpu);
    }
L_001dfab4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001dfab8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001dfabc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[7]);
        }
    }
L_001dfac0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfac4:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0xe0u, cpu->r[3]);
        }
    }
L_001dfac8:;
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
L_001dfacc:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox10EmitterObj20SetDefaultParametersEv @ 001dfad0 (arm) */
void fn_001dfad0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dfad0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dfad4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001dfad8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001dfadc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dfae0:;
    {
        cpu->r[14] = 0x001dfae4u; fn_001dfa98(cpu);
    }
L_001dfae4:;
    {
        cpu->r[2] = 0x0000ffffu;
    }
L_001dfae8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfaec:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001dfaf0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x7f7fu << 16);
    }
L_001dfaf4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001dfaf8:;
    {
        cpu->r[14] = 0x001dfafcu; fn_001df9d8(cpu);
    }
L_001dfafc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001dfb00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfb04:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001dfb08:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4120u << 16);
    }
L_001dfb0c:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x43b4u << 16);
    }
L_001dfb10:;
    {
        cpu->r[14] = 0x001dfb14u; fn_001df9d8(cpu);
    }
L_001dfb14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfb18:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001dfb1c:;
    {
        cpu->r[2] = 0x3f800000u;
    }
L_001dfb20:;
    {
        cpu->r[14] = 0x001dfb24u; fn_001df9d8(cpu);
    }
L_001dfb24:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001dfb28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfb2c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001dfb30:;
    {
        cpu->r[14] = 0x001dfb34u; fn_001df9d8(cpu);
    }
L_001dfb34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfb38:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001dfb3c:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001dfb40:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001dfb44:;
    {
        cpu->r[14] = 0x001dfb48u; fn_001df9d8(cpu);
    }
L_001dfb48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfb4c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001dfb50:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001dfb54:;
    {
        cpu->r[14] = 0x001dfb58u; fn_001df9d8(cpu);
    }
L_001dfb58:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001dfb5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfb60:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[5]);
    }
L_001dfb64:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x9cu;
        wr32(cpu->r[2] + + 0x9cu, cpu->r[5]);
        cpu->r[2] = wb_tmp;
    }
L_001dfb68:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001dfb6c:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[5]);
    }
L_001dfb70:;
    {
        cpu->r[14] = 0x001dfb74u; fn_001df8b8(cpu);
    }
L_001dfb74:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001dfb78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfb7c:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[5]);
    }
L_001dfb80:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0xb4u;
        wr32(cpu->r[2] + + 0xb4u, cpu->r[5]);
        cpu->r[2] = wb_tmp;
    }
L_001dfb84:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_001dfb88:;
    {
        wr32(cpu->r[4] + + 0xb8u, cpu->r[5]);
    }
L_001dfb8c:;
    {
        cpu->r[14] = 0x001dfb90u; fn_001df8b8(cpu);
    }
L_001dfb90:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001dfb94:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[5]);
    }
L_001dfb98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfb9c:;
    {
        wr32(cpu->r[4] + + 0xacu, cpu->r[5]);
    }
L_001dfba0:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_001dfba4:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0xa8u;
        wr32(cpu->r[2] + + 0xa8u, cpu->r[5]);
        cpu->r[2] = wb_tmp;
    }
L_001dfba8:;
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
L_001dfbac:;
    {
        return fn_001df8b8(cpu);
    }
}

/* _ZN3vox10EmitterObj11GetUserDataEv @ 001dfbb0 (arm) */
void fn_001dfbb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dfbb0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dfbb4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001dfbb8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001dfbbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfbc0:;
    {
        cpu->r[14] = 0x001dfbc4u; fn_001ebcfc(cpu);
    }
L_001dfbc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfbc8:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x134u);
    }
L_001dfbcc:;
    {
        cpu->r[14] = 0x001dfbd0u; fn_001ebcf8(cpu);
    }
L_001dfbd0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfbd4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dfbd8u)) return;
    }
}

/* _ZN3vox10EmitterObj11SetUserDataERNS_21EmitterHandleUserDataE @ 001dfbd8 (arm) */
void fn_001dfbd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dfbd8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dfbdc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001dfbe0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dfbe4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfbe8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001dfbec:;
    {
        cpu->r[14] = 0x001dfbf0u; fn_001ebcfc(cpu);
    }
L_001dfbf0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfbf4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001dfbf8:;
    {
        wr32(cpu->r[4] + + 0x134u, cpu->r[3]);
    }
L_001dfbfc:;
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
L_001dfc00:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox10EmitterObj13SetPlayCursorEf @ 001dfc04 (arm) */
void fn_001dfc04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dfc04:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dfc08:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001dfc0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dfc10:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[1];
    }
L_001dfc14:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001dfc18:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfc1c:;
    {
        cpu->r[14] = 0x001dfc20u; fn_001ebcfc(cpu);
    }
L_001dfc20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001dfc24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dfc28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dfd00;
        }
    }
L_001dfc2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001dfc30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dfc34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dfd00;
        }
    }
L_001dfc38:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_001dfc3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dfc40:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dfd00;
        }
    }
L_001dfc44:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x118u);
    }
L_001dfc48:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x50u);
    }
L_001dfc4c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001dfc50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001dfc54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x3cu);
        }
    }
L_001dfc58:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001dfc5c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001dfc60:;
    {
        cpu->r[14] = 0x001dfc68u;
    }
L_001dfc64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001dfc68u)) return;
    }
L_001dfc68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 1);
    }
L_001dfc6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dfd00;
        }
    }
L_001dfc70:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_001dfc74:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x114u);
    }
L_001dfc78:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001dfc7c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001dfc84u + + 0x8cu);
    }
L_001dfc80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001dfc84:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001dfc88:;
    {
        vfp_sync_flags(cpu);
    }
L_001dfc8c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001dfc90:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001dfc94:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,16) = *vfp_s(cpu,14);
        }
    }
L_001dfc98:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_001dfc9c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_001dfca0:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001dfca4:;
    {
        cpu->r[14] = 0x001dfcacu;
    }
L_001dfca8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001dfcacu)) return;
    }
L_001dfcac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x114u);
    }
L_001dfcb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001dfcb4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0xcu);
    }
L_001dfcb8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001dfcbc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_001dfcc0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001dfcc4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[1] = v;
    }
L_001dfcc8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1]; cpu->r[1] = v;
    }
L_001dfccc:;
    {
        uint32_t v = cpu->r[1] * cpu->r[6]; cpu->r[1] = v;
    }
L_001dfcd0:;
    {
        cpu->r[14] = 0x001dfcd8u;
    }
L_001dfcd4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001dfcd8u)) return;
    }
L_001dfcd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001dfcdc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001dfce0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001dfce4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001dfce8:;
    {
        cpu->r[14] = 0x001dfcf0u;
    }
L_001dfcec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001dfcf0u)) return;
    }
L_001dfcf0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001dfcf4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001dfcf8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000003u;
        }
    }
L_001dfcfc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
        }
    }
L_001dfd00:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfd04:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001dfd08:;
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
L_001dfd0c:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox10EmitterObj13GetPlayCursorEv @ 001dfd14 (arm) */
void fn_001dfd14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dfd14:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dfd18:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001dfd1c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dfd20:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001dfd24:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfd28:;
    {
        cpu->r[14] = 0x001dfd2cu; fn_001ebcfc(cpu);
    }
L_001dfd2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001dfd30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dfd34:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dfd7c;
        }
    }
L_001dfd38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001dfd3c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001dfd40:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001dfd44:;
    {
        cpu->r[14] = 0x001dfd4cu;
    }
L_001dfd48:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001dfd4cu)) return;
    }
L_001dfd4c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001dfd50:;
    {
        cpu->r[14] = 0x001dfd54u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001dfd54:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x20u);
    }
L_001dfd58:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001dfd5c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfd60:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_001dfd64:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001dfd68:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_001dfd6c:;
    {
        cpu->r[14] = 0x001dfd70u; fn_001ebcf8(cpu);
    }
L_001dfd70:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001dfd74:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001dfd78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dfd7cu)) return;
    }
L_001dfd7c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001dfd84u);
    }
L_001dfd80:;
    {
        goto L_001dfd70;
    }
}

/* _ZN3vox10EmitterObj6IsDoneEv @ 001dfd88 (arm) */
void fn_001dfd88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dfd88:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dfd8c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001dfd90:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001dfd94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfd98:;
    {
        cpu->r[14] = 0x001dfd9cu; fn_001ebcfc(cpu);
    }
L_001dfd9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfda0:;
    {
        cpu->r[14] = 0x001dfda4u; fn_001de5e4(cpu);
    }
L_001dfda4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001dfda8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfdac:;
    {
        cpu->r[14] = 0x001dfdb0u; fn_001ebcf8(cpu);
    }
L_001dfdb0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfdb4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dfdb8u)) return;
    }
}

/* _ZN3vox10EmitterObj9IsPlayingEv @ 001dfdb8 (arm) */
void fn_001dfdb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dfdb8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dfdbc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dfdc0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001dfdc4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfdc8:;
    {
        cpu->r[14] = 0x001dfdccu; fn_001ebcfc(cpu);
    }
L_001dfdcc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x90u);
    }
L_001dfdd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001dfdd4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_001dfdd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dfdec;
        }
    }
L_001dfddc:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x94u);
    }
L_001dfde0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_001dfde4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001dfde8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_001dfdec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfdf0:;
    {
        cpu->r[14] = 0x001dfdf4u; fn_001ebcf8(cpu);
    }
L_001dfdf4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfdf8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dfdfcu)) return;
    }
}

/* _ZN3vox10EmitterObj5ResetEv @ 001dfdfc (arm) */
void fn_001dfdfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dfdfc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dfe00:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001dfe04:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dfe08:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfe0c:;
    {
        cpu->r[14] = 0x001dfe10u; fn_001ebcfc(cpu);
    }
L_001dfe10:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001dfe14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfe18:;
    {
        wr8(cpu->r[4] + + 0x99u, cpu->r[3]);
    }
L_001dfe1c:;
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
L_001dfe20:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox10EmitterObj7SetLoopEb @ 001dfe24 (arm) */
void fn_001dfe24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dfe24:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dfe28:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001dfe2c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dfe30:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfe34:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001dfe38:;
    {
        cpu->r[14] = 0x001dfe3cu; fn_001ebcfc(cpu);
    }
L_001dfe3c:;
    {
        wr8(cpu->r[4] + + 0x8du, cpu->r[6]);
    }
L_001dfe40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfe44:;
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
L_001dfe48:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox10EmitterObj7GetLoopEv @ 001dfe4c (arm) */
void fn_001dfe4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dfe4c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dfe50:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001dfe54:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001dfe58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfe5c:;
    {
        cpu->r[14] = 0x001dfe60u; fn_001ebcfc(cpu);
    }
L_001dfe60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfe64:;
    {
        cpu->r[5] = rd8(cpu->r[5] + + 0x8cu);
    }
L_001dfe68:;
    {
        cpu->r[14] = 0x001dfe6cu; fn_001ebcf8(cpu);
    }
L_001dfe6c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfe70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dfe74u)) return;
    }
}

/* _ZN3vox10EmitterObj8SetStateEi @ 001dfe74 (arm) */
void fn_001dfe74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dfe74:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dfe78:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001dfe7c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dfe80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfe84:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001dfe88:;
    {
        cpu->r[14] = 0x001dfe8cu; fn_001ebcfc(cpu);
    }
L_001dfe8c:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[6]);
    }
L_001dfe90:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfe94:;
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
L_001dfe98:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox10EmitterObj8GetStateEv @ 001dfe9c (arm) */
void fn_001dfe9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dfe9c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dfea0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001dfea4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001dfea8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfeac:;
    {
        cpu->r[14] = 0x001dfeb0u; fn_001ebcfc(cpu);
    }
L_001dfeb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfeb4:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x90u);
    }
L_001dfeb8:;
    {
        cpu->r[14] = 0x001dfebcu; fn_001ebcf8(cpu);
    }
L_001dfebc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfec0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dfec4u)) return;
    }
}

/* _ZN3vox10EmitterObj8GetPitchEv @ 001dfec4 (arm) */
void fn_001dfec4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dfec4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dfec8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001dfecc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001dfed0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfed4:;
    {
        cpu->r[14] = 0x001dfed8u; fn_001ebcfc(cpu);
    }
L_001dfed8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfedc:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x74u);
    }
L_001dfee0:;
    {
        cpu->r[14] = 0x001dfee4u; fn_001ebcf8(cpu);
    }
L_001dfee4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dfee8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dfeecu)) return;
    }
}

/* _ZN3vox10EmitterObj7GetGainEv @ 001dfeec (arm) */
void fn_001dfeec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dfeec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dfef0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001dfef4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001dfef8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfefc:;
    {
        cpu->r[14] = 0x001dff00u; fn_001ebcfc(cpu);
    }
L_001dff00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dff04:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001dff08:;
    {
        cpu->r[14] = 0x001dff0cu; fn_001ebcf8(cpu);
    }
L_001dff0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dff10:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dff14u)) return;
    }
}

/* _ZN3vox10EmitterObj7IsGroupEj @ 001dff14 (arm) */
void fn_001dff14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dff14:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dff18:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dff1c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001dff20:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001dff24:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dff28:;
    {
        cpu->r[14] = 0x001dff2cu; fn_001ebcfc(cpu);
    }
L_001dff2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001dff30:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001dff34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dff38:;
    {
        uint32_t v = cpu->r[6] & shifter(cpu->r[2], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001dff3c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001dff40:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_001dff44:;
    {
        cpu->r[14] = 0x001dff48u; fn_001ebcf8(cpu);
    }
L_001dff48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dff4c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dff50u)) return;
    }
}

/* _ZN3vox10EmitterObj8SetGroupEi @ 001dff50 (arm) */
void fn_001dff50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dff50:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dff54:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001dff58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dff5c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dff60:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001dff64:;
    {
        cpu->r[14] = 0x001dff68u; fn_001ebcfc(cpu);
    }
L_001dff68:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[6]);
    }
L_001dff6c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dff70:;
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
L_001dff74:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox10EmitterObj8GetGroupEv @ 001dff78 (arm) */
void fn_001dff78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dff78:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dff7c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001dff80:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001dff84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dff88:;
    {
        cpu->r[14] = 0x001dff8cu; fn_001ebcfc(cpu);
    }
L_001dff8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dff90:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x28u);
    }
L_001dff94:;
    {
        cpu->r[14] = 0x001dff98u; fn_001ebcf8(cpu);
    }
L_001dff98:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dff9c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dffa0u)) return;
    }
}

/* _ZN3vox10EmitterObj9ShouldDieEv @ 001dffa0 (arm) */
void fn_001dffa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dffa0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dffa4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001dffa8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dffac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dffb0:;
    {
        cpu->r[14] = 0x001dffb4u; fn_001ebcfc(cpu);
    }
L_001dffb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dffb8:;
    {
        cpu->r[14] = 0x001dffbcu; fn_001de5e4(cpu);
    }
L_001dffbc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001dffc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dffd0;
        }
    }
L_001dffc4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001dffc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dffcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dfffc;
        }
    }
L_001dffd0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x11cu);
    }
L_001dffd4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dffd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dfffc;
        }
    }
L_001dffdc:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x90u);
    }
L_001dffe0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dffe4:;
    {
        cpu->r[14] = 0x001dffe8u; fn_001ebcf8(cpu);
    }
L_001dffe8:;
    {
        add_flags(cpu, cpu->r[4], 0x00000001u, 0, 1);
    }
L_001dffec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001dfff0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_001dfff4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dfff8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dfffcu)) return;
    }
L_001dfffc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0000:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001e0004:;
    {
        cpu->r[14] = 0x001e0008u; fn_001ebcf8(cpu);
    }
L_001e0008:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e000c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e0010u)) return;
    }
}

/* _ZN3vox10EmitterObj7IsAliveEv @ 001e0010 (arm) */
void fn_001e0010(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0010:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e0014:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e0018:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e001c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e0020:;
    {
        cpu->r[14] = 0x001e0024u; fn_001ebcfc(cpu);
    }
L_001e0024:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0028:;
    {
        cpu->r[14] = 0x001e002cu; fn_001dffa0(cpu);
    }
L_001e002c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e0030:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e0034:;
    {
        cpu->r[14] = 0x001e0038u; fn_001ebcf8(cpu);
    }
L_001e0038:;
    {
        uint32_t v = cpu->r[5] ^ 0x00000001u; cpu->r[0] = v;
    }
L_001e003c:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001e0040:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e0044u)) return;
    }
}

/* _ZN3vox10EmitterObj9NeedToDieEv @ 001e0044 (arm) */
void fn_001e0044(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0044:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e0048:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e004c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e0050:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0054:;
    {
        cpu->r[14] = 0x001e0058u; fn_001ebcfc(cpu);
    }
L_001e0058:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e005c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0060:;
    {
        wr8(cpu->r[4] + + 0x11cu, cpu->r[3]);
    }
L_001e0064:;
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
L_001e0068:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox10EmitterObj20SetAutoKillAfterDoneEb @ 001e006c (arm) */
void fn_001e006c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e006c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e0070:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e0074:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e0078:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e007c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e0080:;
    {
        cpu->r[14] = 0x001e0084u; fn_001ebcfc(cpu);
    }
L_001e0084:;
    {
        wr8(cpu->r[4] + + 0x11du, cpu->r[6]);
    }
L_001e0088:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e008c:;
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
L_001e0090:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox7DataObj11GetUserDataEv @ 001e0094 (arm) */
void fn_001e0094(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0094:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e0098:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e009c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e00a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e00a4:;
    {
        cpu->r[14] = 0x001e00a8u; fn_001ebcfc(cpu);
    }
L_001e00a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e00ac:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x48u);
    }
L_001e00b0:;
    {
        cpu->r[14] = 0x001e00b4u; fn_001ebcf8(cpu);
    }
L_001e00b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e00b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e00bcu)) return;
    }
}

/* _ZN3vox7DataObj11SetUserDataERNS_18DataHandleUserDataE @ 001e00bc (arm) */
void fn_001e00bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e00bc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e00c0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e00c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e00c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e00cc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e00d0:;
    {
        cpu->r[14] = 0x001e00d4u; fn_001ebcfc(cpu);
    }
L_001e00d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e00d8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001e00dc:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001e00e0:;
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
L_001e00e4:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox7DataObj7IsReadyEv @ 001e00e8 (arm) */
void fn_001e00e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e00e8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e00ec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e00f0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000058u, 0, 0);
    }
L_001e00f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e00f8:;
    {
        cpu->r[14] = 0x001e00fcu; fn_001ebcfc(cpu);
    }
L_001e00fc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x50u);
    }
L_001e0100:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e0104:;
    {
        cpu->r[4] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 1);
    }
L_001e0108:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001e010c:;
    {
        cpu->r[14] = 0x001e0110u; fn_001ebcf8(cpu);
    }
L_001e0110:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e0114:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e0118u)) return;
    }
}

/* _ZN3vox7DataObj11GetDurationEv @ 001e0118 (arm) */
void fn_001e0118(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0118:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e011c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001e0120:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e0124:;
    {
        cpu->r[14] = 0x001e0128u; fn_001e00e8(cpu);
    }
L_001e0128:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e012c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e0140;
        }
    }
L_001e0130:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001e0138u + + 0x34u);
    }
L_001e0134:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001e0138:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001e013c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e0140u)) return;
    }
L_001e0140:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001e0144:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0148:;
    {
        cpu->r[14] = 0x001e014cu; fn_001ebcfc(cpu);
    }
L_001e014c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x2cu);
    }
L_001e0150:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x34u);
    }
L_001e0154:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001e0158:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e015c:;
    {
        *vfp_s(cpu,14) = (float)*(uint32_t*)vfp_s(cpu,14);
    }
L_001e0160:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_001e0164:;
    {
        cpu->r[14] = 0x001e0168u; fn_001ebcf8(cpu);
    }
L_001e0168:;
    {
        goto L_001e0134;
    }
}

/* _ZN3vox7DataObj12GetDebugInfoERNS_21DebugChunk_dataSourceE @ 001e0170 (arm) */
void fn_001e0170(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0170:;
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
L_001e0174:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001e0178:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e017c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e0180:;
    {
        cpu->r[14] = 0x001e0184u; fn_001e0118(cpu);
    }
L_001e0184:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001e0188:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e018c:;
    {
        cpu->r[14] = 0x001e0190u; fn_001ebcfc(cpu);
    }
L_001e0190:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001e0194:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_001e0198:;
    {
        uint64_t v = rd64(cpu->r[4] + + 0x8u);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
    }
L_001e019c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e01a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e01a4:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[2]);
    }
L_001e01a8:;
    {
        wr64(cpu->r[5], ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_001e01ac:;
    {
        cpu->r[14] = 0x001e01b4u;
    }
L_001e01b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e01b4u)) return;
    }
L_001e01b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x38u);
    }
L_001e01b8:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001e01bc:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[0]);
    }
L_001e01c0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001e01c4:;
    {
        cpu->r[14] = 0x001e01ccu;
    }
L_001e01c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e01ccu)) return;
    }
L_001e01cc:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[7]);
    }
L_001e01d0:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[0]);
    }
L_001e01d4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e01d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001e01dc:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
    }
L_001e01e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001e01e4:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[3]);
    }
L_001e01e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_001e01ec:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[3]);
    }
L_001e01f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001e01f4:;
    {
        wr32(cpu->r[5] + + 0x24u, cpu->r[3]);
    }
L_001e01f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001e01fc:;
    {
        wr32(cpu->r[5] + + 0x28u, cpu->r[3]);
    }
L_001e0200:;
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
L_001e0204:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox7DataObj10PrintDebugEv @ 001e0208 (arm) */
void fn_001e0208(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0208:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001e020c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e0210:;
    {
        cpu->r[14] = 0x001e0214u; fn_001e0118(cpu);
    }
L_001e0214:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001e0218:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e021c:;
    {
        cpu->r[14] = 0x001e0220u; fn_001ebcfc(cpu);
    }
L_001e0220:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e0224:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001e0228:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox7DataObj7IsGroupEj @ 001e022c (arm) */
void fn_001e022c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e022c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e0230:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e0234:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e0238:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e023c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0240:;
    {
        cpu->r[14] = 0x001e0244u; fn_001ebcfc(cpu);
    }
L_001e0244:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001e0248:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001e024c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0250:;
    {
        uint32_t v = cpu->r[6] & shifter(cpu->r[2], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001e0254:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001e0258:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_001e025c:;
    {
        cpu->r[14] = 0x001e0260u; fn_001ebcf8(cpu);
    }
L_001e0260:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e0264:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e0268u)) return;
    }
}

/* _ZN3vox7DataObj8GetGroupEv @ 001e0268 (arm) */
void fn_001e0268(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0268:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e026c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e0270:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e0274:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e0278:;
    {
        cpu->r[14] = 0x001e027cu; fn_001ebcfc(cpu);
    }
L_001e027c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e0280:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001e0284:;
    {
        cpu->r[14] = 0x001e0288u; fn_001ebcf8(cpu);
    }
L_001e0288:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e028c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e0290u)) return;
    }
}

/* _ZN3vox7DataObj9ShouldDieEv @ 001e0290 (arm) */
void fn_001e0290(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0290:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e0294:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e0298:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e029c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e02a0:;
    {
        cpu->r[14] = 0x001e02a4u; fn_001ebcfc(cpu);
    }
L_001e02a4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001e02a8:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x40u;
        cpu->r[3] = rd32(cpu->r[2] + + 0x40u);
        cpu->r[2] = wb_tmp;
    }
L_001e02ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e02b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e02ec;
        }
    }
L_001e02b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e02b8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001e02bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e02b4;
        }
    }
L_001e02c0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x4du);
    }
L_001e02c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e02c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e02f8;
        }
    }
L_001e02cc:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x50u);
    }
L_001e02d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e02d4:;
    {
        cpu->r[14] = 0x001e02d8u; fn_001ebcf8(cpu);
    }
L_001e02d8:;
    {
        add_flags(cpu, cpu->r[4], 0x00000001u, 0, 1);
    }
L_001e02dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001e02e0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_001e02e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e02e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e02ecu)) return;
    }
L_001e02ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001e02f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e02f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e02c0;
        }
    }
L_001e02f8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e02fc:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001e0300:;
    {
        cpu->r[14] = 0x001e0304u; fn_001ebcf8(cpu);
    }
L_001e0304:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e0308:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e030cu)) return;
    }
}

/* _ZN3vox7DataObj9NeedToDieEv @ 001e030c (arm) */
void fn_001e030c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e030c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e0310:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e0314:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e0318:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000058u, 0, 0);
    }
L_001e031c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e0320:;
    {
        cpu->r[14] = 0x001e0324u; fn_001ebcfc(cpu);
    }
L_001e0324:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e0328:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e032c:;
    {
        wr8(cpu->r[4] + + 0x4du, cpu->r[3]);
    }
L_001e0330:;
    {
        cpu->r[14] = 0x001e0334u; fn_001ebcf8(cpu);
    }
L_001e0334:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0338:;
    {
        cpu->r[14] = 0x001e033cu; fn_001ebcfc(cpu);
    }
L_001e033c:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_001e0340:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0344:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001e0348:;
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
L_001e034c:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox7DataObj17UnregisterEmitterEx @ 001e0350 (arm) */
void fn_001e0350(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0350:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e0354:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e0358:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e035c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001e0360:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e0364:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001e0368:;
    {
        cpu->r[14] = 0x001e036cu; fn_001ebcfc(cpu);
    }
L_001e036c:;
    {
        uint32_t wb_tmp = cpu->r[4] + + 0x40u;
        cpu->r[2] = rd32(cpu->r[4] + + 0x40u);
        cpu->r[4] = wb_tmp;
    }
L_001e0370:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001e0374:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e0390;
        }
    }
L_001e0378:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e037c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001e0380:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e039c;
        }
    }
L_001e0384:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001e0388:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001e038c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e0378;
        }
    }
L_001e0390:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e0394:;
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
L_001e0398:;
    {
        return fn_001ebcf8(cpu);
    }
L_001e039c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0xcu);
    }
L_001e03a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001e03a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e0384;
        }
    }
L_001e03a8:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_001e03ac:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001e03b0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_001e03b4:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_001e03b8:;
    {
        wr32(cpu->r[3], cpu->r[1]);
    }
L_001e03bc:;
    {
        cpu->r[14] = 0x001e03c0u; fn_00097dc8(cpu);
    }
L_001e03c0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e03c4:;
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
L_001e03c8:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox7DataObj15RegisterEmitterEx @ 001e03cc (arm) */
void fn_001e03cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e03cc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e03d0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e03d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e03d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e03dc:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001e03e0:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001e03e4:;
    {
        cpu->r[14] = 0x001e03e8u; fn_001ebcfc(cpu);
    }
L_001e03e8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e03ec:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001e03f0:;
    {
        cpu->r[14] = 0x001e03f4u; fn_00097dd0(cpu);
    }
L_001e03f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_001e03f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000040u, 0, 0);
    }
L_001e03fc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e0400:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0404:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
    }
L_001e0408:;
    {
        wr64(cpu->r[3] + + 0x8u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_001e040c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001e0410:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_001e0414:;
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
L_001e0418:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox9Handlable7ReleaseEv @ 001e041c (arm) */
void fn_001e041c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e041c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e0420:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e0424:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e0428:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e042c:;
    {
        cpu->r[14] = 0x001e0430u; fn_001ebcfc(cpu);
    }
L_001e0430:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0434:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001e0438:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e043c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_001e0440:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
        }
    }
L_001e0444:;
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
L_001e0448:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox9Handlable6RetainEv @ 001e044c (arm) */
void fn_001e044c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e044c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e0450:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e0454:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e0458:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e045c:;
    {
        cpu->r[14] = 0x001e0460u; fn_001ebcfc(cpu);
    }
L_001e0460:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0464:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001e0468:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001e046c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001e0470:;
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
L_001e0474:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal18SetSFXPresetActiveEibf @ 001e0478 (arm) */
void fn_001e0478(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0478:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e047c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e0480:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001e0484:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001e0488:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e048c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e0490:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001e0494:;
    {
        cpu->r[14] = 0x001e0498u; fn_001ebcfc(cpu);
    }
L_001e0498:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x50cu);
    }
L_001e049c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001e04a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e04c0;
        }
    }
L_001e04a4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001e04a8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e04ac:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001e04b0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001e04b4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001e04b8:;
    {
        cpu->r[14] = 0x001e04c0u;
    }
L_001e04bc:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e04c0u)) return;
    }
L_001e04c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e04c4:;
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
L_001e04c8:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal20SetDynamicBusRoutingEPc @ 001e04cc (arm) */
void fn_001e04cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e04cc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e04d0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e04d4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001e04d8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e04dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e04e0:;
    {
        cpu->r[14] = 0x001e04e4u; fn_001ebcfc(cpu);
    }
L_001e04e4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x50cu);
    }
L_001e04e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e04ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e0504;
        }
    }
L_001e04f0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e04f4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e04f8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e04fc:;
    {
        cpu->r[14] = 0x001e0504u;
    }
L_001e0500:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e0504u)) return;
    }
L_001e0504:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e0508:;
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
L_001e050c:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal19SetStaticBusRoutingEPc @ 001e0510 (arm) */
void fn_001e0510(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0510:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e0514:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e0518:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001e051c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e0520:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e0524:;
    {
        cpu->r[14] = 0x001e0528u; fn_001ebcfc(cpu);
    }
L_001e0528:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x50cu);
    }
L_001e052c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e0530:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e0548;
        }
    }
L_001e0534:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e0538:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e053c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e0540:;
    {
        cpu->r[14] = 0x001e0548u;
    }
L_001e0544:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e0548u)) return;
    }
L_001e0548:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e054c:;
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
L_001e0550:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal22Get3DGeneralParameteriEiRi @ 001e0554 (arm) */
void fn_001e0554(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0554:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e0558:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001e055c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e0560:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0564:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e0568:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e056c:;
    {
        cpu->r[14] = 0x001e0570u; fn_001ebcfc(cpu);
    }
L_001e0570:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_001e0574:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0578:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3f0u);
        }
    }
L_001e057c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[7], cpu->r[3]);
        }
    }
L_001e0580:;
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
L_001e0584:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal22Get3DGeneralParameterfEiRf @ 001e0588 (arm) */
void fn_001e0588(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0588:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e058c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001e0590:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e0594:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e0598:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e059c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e05a0:;
    {
        cpu->r[14] = 0x001e05a4u; fn_001ebcfc(cpu);
    }
L_001e05a4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001e05a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e05c0;
        }
    }
L_001e05ac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x3e8u);
    }
L_001e05b0:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e05b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e05b8:;
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
L_001e05bc:;
    {
        return fn_001ebcf8(cpu);
    }
L_001e05c0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001e05c4:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x3ecu);
        }
    }
L_001e05c8:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_001e05cc:;
    {
        goto L_001e05b4;
    }
}

/* _ZN3vox17VoxEngineInternal21Get3DGeneralParameterERNS_22Vox3DGeneralParametersE @ 001e05d0 (arm) */
void fn_001e05d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e05d0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e05d4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001e05d8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e05dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e05e0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001e05e4:;
    {
        cpu->r[14] = 0x001e05e8u; fn_001ebcfc(cpu);
    }
L_001e05e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x000003e8u, 0, 0);
    }
L_001e05ec:;
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
L_001e05f0:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001e05f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e05f8:;
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
L_001e05fc:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal24Get3DListenerOrientationERfS1_S1_S1_S1_S1_ @ 001e0600 (arm) */
void fn_001e0600(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0600:;
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
L_001e0604:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001e0608:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001e060c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e0610:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0614:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e0618:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e061c:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_001e0620:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x28u);
    }
L_001e0624:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001e0628:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x30u);
    }
L_001e062c:;
    {
        cpu->r[14] = 0x001e0630u; fn_001ebcfc(cpu);
    }
L_001e0630:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x3d0u);
    }
L_001e0634:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0638:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e063c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x3d4u);
    }
L_001e0640:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0644:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x3d8u);
    }
L_001e0648:;
    {
        *(uint32_t*)G(cpu->r[11]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e064c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x3dcu);
    }
L_001e0650:;
    {
        *(uint32_t*)G(cpu->r[9]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0654:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x3e0u);
    }
L_001e0658:;
    {
        *(uint32_t*)G(cpu->r[10]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e065c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x3e4u);
    }
L_001e0660:;
    {
        *(uint32_t*)G(cpu->r[8]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0664:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e0668:;
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
L_001e066c:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal21Get3DListenerVelocityERfS1_S1_ @ 001e0670 (arm) */
void fn_001e0670(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0670:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e0674:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001e0678:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e067c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0680:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e0684:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e0688:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001e068c:;
    {
        cpu->r[14] = 0x001e0690u; fn_001ebcfc(cpu);
    }
L_001e0690:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x3c4u);
    }
L_001e0694:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0698:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e069c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x3c8u);
    }
L_001e06a0:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e06a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x3ccu);
    }
L_001e06a8:;
    {
        *(uint32_t*)G(cpu->r[8]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e06ac:;
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
L_001e06b0:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal21Get3DListenerPositionERfS1_S1_ @ 001e06b4 (arm) */
void fn_001e06b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e06b4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e06b8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001e06bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e06c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e06c4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e06c8:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e06cc:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001e06d0:;
    {
        cpu->r[14] = 0x001e06d4u; fn_001ebcfc(cpu);
    }
L_001e06d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x3b8u);
    }
L_001e06d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e06dc:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e06e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x3bcu);
    }
L_001e06e4:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e06e8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x3c0u);
    }
L_001e06ec:;
    {
        *(uint32_t*)G(cpu->r[8]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e06f0:;
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
L_001e06f4:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal22Set3DGeneralParameteriEii @ 001e06f8 (arm) */
void fn_001e06f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e06f8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e06fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001e0700:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e0704:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0708:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e070c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e0710:;
    {
        cpu->r[14] = 0x001e0714u; fn_001ebcfc(cpu);
    }
L_001e0714:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_001e0718:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001e071c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x3f0u, cpu->r[7]);
        }
    }
L_001e0720:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0724:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x3f6u, cpu->r[3]);
        }
    }
L_001e0728:;
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
L_001e072c:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal22Set3DGeneralParameterfEif @ 001e0730 (arm) */
void fn_001e0730(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0730:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e0734:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001e0738:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e073c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0740:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e0744:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e0748:;
    {
        cpu->r[14] = 0x001e074cu; fn_001ebcfc(cpu);
    }
L_001e074c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001e0750:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001e0754:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x3e8u, cpu->r[7]);
        }
    }
L_001e0758:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x3f4u, cpu->r[3]);
        }
    }
L_001e075c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e0768;
        }
    }
L_001e0760:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001e0764:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e0774;
        }
    }
L_001e0768:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e076c:;
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
L_001e0770:;
    {
        return fn_001ebcf8(cpu);
    }
L_001e0774:;
    {
        wr8(cpu->r[4] + + 0x3f5u, cpu->r[6]);
    }
L_001e0778:;
    {
        wr32(cpu->r[4] + + 0x3ecu, cpu->r[7]);
    }
L_001e077c:;
    {
        goto L_001e0768;
    }
}

/* _ZN3vox17VoxEngineInternal21Set3DGeneralParameterERKNS_22Vox3DGeneralParametersE @ 001e0780 (arm) */
void fn_001e0780(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0780:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e0784:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001e0788:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e078c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0790:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e0794:;
    {
        cpu->r[14] = 0x001e0798u; fn_001ebcfc(cpu);
    }
L_001e0798:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000003e8u, 0, 0);
    }
L_001e079c:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001e07a0:;
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
L_001e07a4:;
    {
        wr8(cpu->r[4] + + 0x3f6u, cpu->r[12]);
    }
L_001e07a8:;
    {
        wr8(cpu->r[4] + + 0x3f4u, cpu->r[12]);
    }
L_001e07ac:;
    {
        wr8(cpu->r[4] + + 0x3f5u, cpu->r[12]);
    }
L_001e07b0:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001e07b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e07b8:;
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
L_001e07bc:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal24Set3DListenerOrientationEffffff @ 001e07c0 (arm) */
void fn_001e07c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e07c0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e07c4:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_001e07c8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001e07cc:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x28u);
    }
L_001e07d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e07d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e07d8:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001e07dc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e07e0:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e07e4:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[13] + + 0x2cu);
    }
L_001e07e8:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[13] + + 0x30u);
    }
L_001e07ec:;
    {
        cpu->r[14] = 0x001e07f0u; fn_001ebcfc(cpu);
    }
L_001e07f0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e07f4:;
    {
        wr32(cpu->r[4] + + 0x3d0u, cpu->r[6]);
    }
L_001e07f8:;
    {
        wr32(cpu->r[4] + + 0x3d4u, cpu->r[7]);
    }
L_001e07fc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3dcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e0800:;
    {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[8]);
    }
L_001e0804:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3e0u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001e0808:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3e4u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_001e080c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0810:;
    {
        wr8(cpu->r[4] + + 0x3f9u, cpu->r[3]);
    }
L_001e0814:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_001e0818:;
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
L_001e081c:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal21Set3DListenerVelocityEfff @ 001e0820 (arm) */
void fn_001e0820(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0820:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e0824:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001e0828:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e082c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0830:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001e0834:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e0838:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e083c:;
    {
        cpu->r[14] = 0x001e0840u; fn_001ebcfc(cpu);
    }
L_001e0840:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e0844:;
    {
        wr32(cpu->r[4] + + 0x3c4u, cpu->r[6]);
    }
L_001e0848:;
    {
        wr32(cpu->r[4] + + 0x3c8u, cpu->r[7]);
    }
L_001e084c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0850:;
    {
        wr32(cpu->r[4] + + 0x3ccu, cpu->r[8]);
    }
L_001e0854:;
    {
        wr8(cpu->r[4] + + 0x3f8u, cpu->r[3]);
    }
L_001e0858:;
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
L_001e085c:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal21Set3DListenerPositionEfff @ 001e0860 (arm) */
void fn_001e0860(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0860:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e0864:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001e0868:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e086c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0870:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001e0874:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e0878:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e087c:;
    {
        cpu->r[14] = 0x001e0880u; fn_001ebcfc(cpu);
    }
L_001e0880:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e0884:;
    {
        wr32(cpu->r[4] + + 0x3b8u, cpu->r[6]);
    }
L_001e0888:;
    {
        wr32(cpu->r[4] + + 0x3bcu, cpu->r[7]);
    }
L_001e088c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0890:;
    {
        wr32(cpu->r[4] + + 0x3c0u, cpu->r[8]);
    }
L_001e0894:;
    {
        wr8(cpu->r[4] + + 0x3f7u, cpu->r[3]);
    }
L_001e0898:;
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
L_001e089c:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal12GetGroupGainEi @ 001e08a0 (arm) */
void fn_001e08a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e08a0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e08a4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001e08a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e08ac:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001e08b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e08b4:;
    {
        cpu->r[14] = 0x001e08b8u; fn_001ebcfc(cpu);
    }
L_001e08b8:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000001fu, 1, 1);
    }
L_001e08bc:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
        }
    }
L_001e08c0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001e08c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e08c8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
        }
    }
L_001e08cc:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[4] = rd32(cpu->r[4] + + 0xb8u);
        }
    }
L_001e08d0:;
    {
        cpu->r[14] = 0x001e08d4u; fn_001ebcf8(cpu);
    }
L_001e08d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e08d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e08dcu)) return;
    }
}

/* _ZN3vox17VoxEngineInternal13GetMasterGainEv @ 001e08dc (arm) */
void fn_001e08dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e08dc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e08e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001e08e4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e08e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e08ec:;
    {
        cpu->r[14] = 0x001e08f0u; fn_001ebcfc(cpu);
    }
L_001e08f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e08f4:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0xa4u);
    }
L_001e08f8:;
    {
        cpu->r[14] = 0x001e08fcu; fn_001ebcf8(cpu);
    }
L_001e08fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0900:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e0904u)) return;
    }
}

/* _ZNSt6vectorIN3vox19PriorityBankElementENS0_10SAllocatorIS1_LNS0_10VoxMemHintE0EEEE9push_backERKS1_ @ 001e0904 (arm) */
void fn_001e0904(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0904:;
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
L_001e0908:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001e090c:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x4u);
    }
L_001e0910:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e0914:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001e0918:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001e091c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e0938;
        }
    }
L_001e0920:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001e0924:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001e0928:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e092c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e0930:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001e0934:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e0938u)) return;
    }
L_001e0938:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001e093c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_001e0940:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001e0944:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001e0948:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001e094c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[8] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001e0950:;
    {
        add_flags(cpu, cpu->r[8], 0xe0000001u, 0, 1);
    }
L_001e0954:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001e09ec;
        }
    }
L_001e0958:;
    {
        cpu->r[8] = (~0x00000007u);
    }
L_001e095c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e0960:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e0964:;
    {
        cpu->r[14] = 0x001e0968u; fn_00097dd0(cpu);
    }
L_001e0968:;
    {
        cpu->r[14] = rd32(cpu->r[4]);
    }
L_001e096c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[14], 1, 0);
    }
L_001e0970:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 3u, &shc); cpu->r[5] = v;
    }
L_001e0974:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001e0978:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e097c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = cpu->r[0];
        }
    }
L_001e0980:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e09b0;
        }
    }
L_001e0984:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001e0988:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e098c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[3], 0, 0);
    }
L_001e0990:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_001e0994:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001e0998:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e099c:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001e09a0:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001e09a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e098c;
        }
    }
L_001e09a8:;
    {
        cpu->r[14] = rd32(cpu->r[4]);
    }
L_001e09ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], shifter(cpu->r[5], 2, 3u, &shc), 0, 0);
    }
L_001e09b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e09b4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001e09b8:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001e09bc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], cpu->r[8], 0, 0);
    }
L_001e09c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[14], 1, 1);
    }
L_001e09c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
        }
    }
L_001e09c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = sub_flags(cpu, cpu->r[2], cpu->r[14], 1, 0);
        }
    }
L_001e09cc:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001e09d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = (~shifter(cpu->r[14], 3, 3u, &shc));
        }
    }
L_001e09d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[14], 2, 3u, &shc), 0, 0);
        }
    }
L_001e09d8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e09dc:;
    {
        cpu->r[14] = 0x001e09e0u; fn_00097dc8(cpu);
    }
L_001e09e0:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[8]);
    }
L_001e09e4:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[10]);
    }
L_001e09e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e09ecu)) return;
    }
L_001e09ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001e09f0:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[8], 2, 3u, &shc); cpu->r[8] = v;
        }
    }
L_001e09f4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001e095c;
        }
    }
L_001e09f8:;
    {
        goto L_001e0958;
    }
}

/* _ZNSt6vectorIN3vox19PriorityBankElementENS0_10SAllocatorIS1_LNS0_10VoxMemHintE0EEEE7reserveEj @ 001e09fc (arm) */
void fn_001e09fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e09fc:;
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
L_001e0a00:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001e0a04:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_001e0a08:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001e0a0c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e0a10:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_001e0a14:;
    {
        sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 1, 3u, &shc), 1, 1);
    }
L_001e0a18:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001e0aa8;
        }
    }
L_001e0a1c:;
    {
        add_flags(cpu, cpu->r[1], 0xe0000001u, 0, 1);
    }
L_001e0a20:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001e0ab0;
        }
    }
L_001e0a24:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x4u);
    }
L_001e0a28:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001e0a2c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 0);
    }
L_001e0a30:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 3u, &shc); cpu->r[8] = v;
    }
L_001e0a34:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_001e0a38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e0acc;
        }
    }
L_001e0a3c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 3u, &shc); cpu->r[10] = v;
    }
L_001e0a40:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e0a44:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e0a48:;
    {
        cpu->r[14] = 0x001e0a4cu; fn_00097dd0(cpu);
    }
L_001e0a4c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001e0a50:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001e0a54:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001e0a58:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e0a7c;
        }
    }
L_001e0a5c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e0a60:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001e0a64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_001e0a68:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_001e0a6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e0a70:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001e0a74:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001e0a78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e0a60;
        }
    }
L_001e0a7c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001e0a80:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_001e0a84:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001e0a88:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
        }
    }
L_001e0a8c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_001e0a90:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~shifter(cpu->r[3], 3, 3u, &shc));
        }
    }
L_001e0a94:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
        }
    }
L_001e0a98:;
    {
        cpu->r[14] = 0x001e0a9cu; fn_00097dc8(cpu);
    }
L_001e0a9c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], cpu->r[10], 0, 0);
    }
L_001e0aa0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], shifter(cpu->r[8], 2, 3u, &shc), 0, 0);
    }
L_001e0aa4:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[8]);
        wr32(ea + 8u, cpu->r[10]);
    }
L_001e0aa8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001e0aac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e0ab0u)) return;
    }
L_001e0ab0:;
    {
        cpu->r[0] = rd32(0x001e0ab8u + + 0x2cu);
    }
L_001e0ab4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e0ab8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001e0ac0u, cpu->r[0], 0, 0);
    }
L_001e0abc:;
    {
        cpu->r[14] = 0x001e0ac0u; fn_00208298(cpu);
    }
L_001e0ac0:;
    {
        cpu->r[5] = rd32(cpu->r[6]);
    }
L_001e0ac4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e0ac8:;
    {
        goto L_001e0a24;
    }
L_001e0acc:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 3u, &shc); cpu->r[10] = v;
    }
L_001e0ad0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e0ad4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e0ad8:;
    {
        cpu->r[14] = 0x001e0adcu; fn_00097dd0(cpu);
    }
L_001e0adc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001e0ae0:;
    {
        goto L_001e0a9c;
    }
}

/* _ZN3vox19PriorityBankManager15SetPriorityBankEiiiNS_20PriorityBankBehaviorE @ 001e0ae8 (arm) */
void fn_001e0ae8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0ae8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e0aec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e0af0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_001e0af4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e0af8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0afc:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001e0b00:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e0b04:;
    {
        cpu->r[14] = 0x001e0b08u; fn_001ebcfc(cpu);
    }
L_001e0b08:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001e0b0c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001e0b10:;
    {
        if (cond_test(cpu, 11)) {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
        }
    }
L_001e0b14:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001e0b18:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001e0b1c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_001e0b20:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001e0b34;
        }
    }
L_001e0b24:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0b28:;
    {
        cpu->r[14] = 0x001e0b2cu; fn_001ebcf8(cpu);
    }
L_001e0b2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e0b30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e0b34u)) return;
    }
L_001e0b34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e0b38:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_001e0b3c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e0b40:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001e0b44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[6], 2, 3u, &shc), 0, 0);
    }
L_001e0b48:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[6], 2, 3u, &shc), cpu->r[7]);
    }
L_001e0b4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_001e0b50:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e0b54:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[8]);
    }
L_001e0b58:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[2]);
    }
L_001e0b5c:;
    {
        cpu->r[14] = 0x001e0b60u; fn_001e09fc(cpu);
    }
L_001e0b60:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0b64:;
    {
        cpu->r[14] = 0x001e0b68u; fn_001ebcf8(cpu);
    }
L_001e0b68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e0b6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e0b70u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal15SetPriorityBankEiiiNS_20PriorityBankBehaviorE @ 001e0b70 (arm) */
void fn_001e0b70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0b70:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x9cu);
    }
L_001e0b74:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_001e0b78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e0b7c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001e0b80:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001e0b84:;
    {
        return fn_001e0ae8(cpu);
    }
}

/* _ZN3vox10EmitterObjC1ExiiPNS_21DriverSourceInterfaceEPNS_7DataObjE @ 001e0b88 (arm) */
void fn_001e0b88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0b88:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e0b8c:;
    {
        cpu->r[6] = rd32(0x001e0b94u + + 0x23cu);
    }
L_001e0b90:;
    {
        cpu->r[1] = rd32(0x001e0b98u + + 0x23cu);
    }
L_001e0b94:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e0b98:;
    {
        cpu->r[6] = add_flags(cpu, 0x001e0ba0u, cpu->r[6], 0, 0);
    }
L_001e0b9c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e0ba0:;
    {
        wr64(cpu->r[0] + + 0x8u, ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
    }
L_001e0ba4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_001e0ba8:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[5]);
    }
L_001e0bac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e0bb0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001e0bb4:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_001e0bb8:;
    {
        cpu->r[14] = 0x001e0bbcu; fn_001ebe50(cpu);
    }
L_001e0bbc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001e0bc0:;
    {
        cpu->r[1] = rd32(0x001e0bc8u + + 0x210u);
    }
L_001e0bc4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e0bccu + + 0x1f0u);
    }
L_001e0bc8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001e0bd0u + + 0x1f0u);
    }
L_001e0bcc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0bd0:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[12]);
    }
L_001e0bd4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0bd8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e0bdc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0be0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_001e0be4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0be8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[5]);
    }
L_001e0bec:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0bf0:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[12]);
    }
L_001e0bf4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001e0bf8:;
    {
        wr8(cpu->r[4] + + 0x34u, cpu->r[5]);
    }
L_001e0bfc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0c00:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_001e0c04:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0c08:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001e0c0c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0c10:;
    {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[1]);
    }
L_001e0c14:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0c18:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[1]);
    }
L_001e0c1c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0c20:;
    {
        wr8(cpu->r[4] + + 0x58u, cpu->r[1]);
    }
L_001e0c24:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0c28:;
    {
        wr8(cpu->r[4] + + 0x8cu, cpu->r[5]);
    }
L_001e0c2c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0c30:;
    {
        wr8(cpu->r[4] + + 0x8du, cpu->r[5]);
    }
L_001e0c34:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0c38:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[5]);
    }
L_001e0c3c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0c40:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0c44:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0c48:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0c4c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0c50:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[5]);
    }
L_001e0c54:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001e0c58:;
    {
        wr8(cpu->r[4] + + 0x6cu, cpu->r[1]);
    }
L_001e0c5c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001e0c60:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e0c64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0c68:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x001e0c70u + + 0x154u);
    }
L_001e0c6c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001e0c74u + + 0x154u);
    }
L_001e0c70:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[1]);
    }
L_001e0c74:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x001e0c7cu + + 0x150u);
    }
L_001e0c78:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[12]);
    }
L_001e0c7c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_001e0c80:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e0c84:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001e0c88:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[1]);
    }
L_001e0c8c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xdcu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001e0c90:;
    {
        wr8(cpu->r[4] + + 0x98u, cpu->r[5]);
    }
L_001e0c94:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x124u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0c98:;
    {
        wr32(cpu->r[4] + + 0x118u, cpu->r[12]);
    }
L_001e0c9c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0ca0:;
    {
        wr8(cpu->r[4] + + 0x99u, cpu->r[5]);
    }
L_001e0ca4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0ca8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0cac:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0cb0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0cb4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0cb8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0cbc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0cc0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xbcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0cc4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001e0cc8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xccu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0ccc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd0u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001e0cd0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0cd4:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[5]);
    }
L_001e0cd8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x120u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0cdc:;
    {
        wr32(cpu->r[4] + + 0xf0u, cpu->r[5]);
    }
L_001e0ce0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x128u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0ce4:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[5]);
    }
L_001e0ce8:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[5]);
    }
L_001e0cec:;
    {
        wr32(cpu->r[4] + + 0xfcu, cpu->r[5]);
    }
L_001e0cf0:;
    {
        wr32(cpu->r[4] + + 0x108u, cpu->r[5]);
    }
L_001e0cf4:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[5]);
    }
L_001e0cf8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x12cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0cfc:;
    {
        wr8(cpu->r[4] + + 0x130u, cpu->r[1]);
    }
L_001e0d00:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001e0d04:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[5]);
    }
L_001e0d08:;
    {
        wr8(cpu->r[4] + + 0x11cu, cpu->r[5]);
    }
L_001e0d0c:;
    {
        wr8(cpu->r[4] + + 0x11du, cpu->r[5]);
    }
L_001e0d10:;
    {
        wr32(cpu->r[4] + + 0x134u, cpu->r[1]);
    }
L_001e0d14:;
    {
        wr32(cpu->r[4] + + 0x138u, cpu->r[5]);
    }
L_001e0d18:;
    {
        wr32(cpu->r[4] + + 0x13cu, cpu->r[5]);
    }
L_001e0d1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001e0d20:;
    {
        wr8(cpu->r[2] + + 0xe0u, cpu->r[0]);
    }
L_001e0d24:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 1);
    }
L_001e0d28:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001e0d2c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e0d30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e0d1c;
        }
    }
L_001e0d34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x118u);
    }
L_001e0d38:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[1]);
    }
L_001e0d3c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001e0d40:;
    {
        wr32(cpu->r[4] + + 0x100u, cpu->r[1]);
    }
L_001e0d44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e0d70;
        }
    }
L_001e0d48:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x30u);
    }
L_001e0d4c:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x28u);
    }
L_001e0d50:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x34u);
    }
L_001e0d54:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 3u, &shc); cpu->r[0] = v;
    }
L_001e0d58:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x2cu);
    }
L_001e0d5c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[3] = v;
    }
L_001e0d60:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_001e0d64:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[3] = v;
    }
L_001e0d68:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[2]);
    }
L_001e0d6c:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001e0d70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e0d74:;
    {
        cpu->r[14] = 0x001e0d78u; fn_001dfad0(cpu);
    }
L_001e0d78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x118u);
    }
L_001e0d7c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x50u);
    }
L_001e0d80:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e0d84:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001e0d88:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x3cu);
        }
    }
L_001e0d8c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e0d90:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e0d94:;
    {
        cpu->r[14] = 0x001e0d9cu;
    }
L_001e0d98:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e0d9cu)) return;
    }
L_001e0d9c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e0da0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001e0da4:;
    {
        wr8(cpu->r[4] + + 0x146u, cpu->r[3]);
    }
L_001e0da8:;
    {
        wr8(cpu->r[4] + + 0x145u, cpu->r[2]);
    }
L_001e0dac:;
    {
        wr8(cpu->r[4] + + 0x144u, cpu->r[3]);
    }
L_001e0db0:;
    {
        wr32(cpu->r[4] + + 0x140u, cpu->r[0]);
    }
L_001e0db4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e0db8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e0dbcu)) return;
    }
}

/* _ZN3vox10EmitterObjC2ExiiPNS_21DriverSourceInterfaceEPNS_7DataObjE @ 001e0ddc (arm) */
void fn_001e0ddc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e0ddc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e0de0:;
    {
        cpu->r[6] = rd32(0x001e0de8u + + 0x23cu);
    }
L_001e0de4:;
    {
        cpu->r[1] = rd32(0x001e0decu + + 0x23cu);
    }
L_001e0de8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e0dec:;
    {
        cpu->r[6] = add_flags(cpu, 0x001e0df4u, cpu->r[6], 0, 0);
    }
L_001e0df0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e0df4:;
    {
        wr64(cpu->r[0] + + 0x8u, ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
    }
L_001e0df8:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_001e0dfc:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[5]);
    }
L_001e0e00:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e0e04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001e0e08:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_001e0e0c:;
    {
        cpu->r[14] = 0x001e0e10u; fn_001ebe50(cpu);
    }
L_001e0e10:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001e0e14:;
    {
        cpu->r[1] = rd32(0x001e0e1cu + + 0x210u);
    }
L_001e0e18:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e0e20u + + 0x1f0u);
    }
L_001e0e1c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001e0e24u + + 0x1f0u);
    }
L_001e0e20:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0e24:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[12]);
    }
L_001e0e28:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0e2c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e0e30:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0e34:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_001e0e38:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0e3c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[5]);
    }
L_001e0e40:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0e44:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[12]);
    }
L_001e0e48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001e0e4c:;
    {
        wr8(cpu->r[4] + + 0x34u, cpu->r[5]);
    }
L_001e0e50:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0e54:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_001e0e58:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0e5c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001e0e60:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0e64:;
    {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[1]);
    }
L_001e0e68:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0e6c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[1]);
    }
L_001e0e70:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0e74:;
    {
        wr8(cpu->r[4] + + 0x58u, cpu->r[1]);
    }
L_001e0e78:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0e7c:;
    {
        wr8(cpu->r[4] + + 0x8cu, cpu->r[5]);
    }
L_001e0e80:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0e84:;
    {
        wr8(cpu->r[4] + + 0x8du, cpu->r[5]);
    }
L_001e0e88:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0e8c:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[5]);
    }
L_001e0e90:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0e94:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0e98:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0e9c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0ea0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0ea4:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[5]);
    }
L_001e0ea8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001e0eac:;
    {
        wr8(cpu->r[4] + + 0x6cu, cpu->r[1]);
    }
L_001e0eb0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001e0eb4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e0eb8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e0ebc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x001e0ec4u + + 0x154u);
    }
L_001e0ec0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001e0ec8u + + 0x154u);
    }
L_001e0ec4:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[1]);
    }
L_001e0ec8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x001e0ed0u + + 0x150u);
    }
L_001e0ecc:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[12]);
    }
L_001e0ed0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_001e0ed4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e0ed8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001e0edc:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[1]);
    }
L_001e0ee0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xdcu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001e0ee4:;
    {
        wr8(cpu->r[4] + + 0x98u, cpu->r[5]);
    }
L_001e0ee8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x124u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0eec:;
    {
        wr32(cpu->r[4] + + 0x118u, cpu->r[12]);
    }
L_001e0ef0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0ef4:;
    {
        wr8(cpu->r[4] + + 0x99u, cpu->r[5]);
    }
L_001e0ef8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0efc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0f00:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0f04:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0f08:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0f0c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0f10:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0f14:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xbcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0f18:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001e0f1c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xccu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e0f20:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd0u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001e0f24:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0f28:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[5]);
    }
L_001e0f2c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x120u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0f30:;
    {
        wr32(cpu->r[4] + + 0xf0u, cpu->r[5]);
    }
L_001e0f34:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x128u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0f38:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[5]);
    }
L_001e0f3c:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[5]);
    }
L_001e0f40:;
    {
        wr32(cpu->r[4] + + 0xfcu, cpu->r[5]);
    }
L_001e0f44:;
    {
        wr32(cpu->r[4] + + 0x108u, cpu->r[5]);
    }
L_001e0f48:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[5]);
    }
L_001e0f4c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x12cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e0f50:;
    {
        wr8(cpu->r[4] + + 0x130u, cpu->r[1]);
    }
L_001e0f54:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001e0f58:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[5]);
    }
L_001e0f5c:;
    {
        wr8(cpu->r[4] + + 0x11cu, cpu->r[5]);
    }
L_001e0f60:;
    {
        wr8(cpu->r[4] + + 0x11du, cpu->r[5]);
    }
L_001e0f64:;
    {
        wr32(cpu->r[4] + + 0x134u, cpu->r[1]);
    }
L_001e0f68:;
    {
        wr32(cpu->r[4] + + 0x138u, cpu->r[5]);
    }
L_001e0f6c:;
    {
        wr32(cpu->r[4] + + 0x13cu, cpu->r[5]);
    }
L_001e0f70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001e0f74:;
    {
        wr8(cpu->r[2] + + 0xe0u, cpu->r[0]);
    }
L_001e0f78:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 1);
    }
L_001e0f7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001e0f80:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e0f84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e0f70;
        }
    }
L_001e0f88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x118u);
    }
L_001e0f8c:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[1]);
    }
L_001e0f90:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001e0f94:;
    {
        wr32(cpu->r[4] + + 0x100u, cpu->r[1]);
    }
L_001e0f98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e0fc4;
        }
    }
L_001e0f9c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x30u);
    }
L_001e0fa0:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x28u);
    }
L_001e0fa4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x34u);
    }
L_001e0fa8:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 3u, &shc); cpu->r[0] = v;
    }
L_001e0fac:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x2cu);
    }
L_001e0fb0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[3] = v;
    }
L_001e0fb4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_001e0fb8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[3] = v;
    }
L_001e0fbc:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[2]);
    }
L_001e0fc0:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001e0fc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e0fc8:;
    {
        cpu->r[14] = 0x001e0fccu; fn_001dfad0(cpu);
    }
L_001e0fcc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x118u);
    }
L_001e0fd0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x50u);
    }
L_001e0fd4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e0fd8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001e0fdc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x3cu);
        }
    }
L_001e0fe0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e0fe4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e0fe8:;
    {
        cpu->r[14] = 0x001e0ff0u;
    }
L_001e0fec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e0ff0u)) return;
    }
L_001e0ff0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e0ff4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001e0ff8:;
    {
        wr8(cpu->r[4] + + 0x146u, cpu->r[3]);
    }
L_001e0ffc:;
    {
        wr8(cpu->r[4] + + 0x145u, cpu->r[2]);
    }
L_001e1000:;
    {
        wr8(cpu->r[4] + + 0x144u, cpu->r[3]);
    }
L_001e1004:;
    {
        wr32(cpu->r[4] + + 0x140u, cpu->r[0]);
    }
L_001e1008:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e100c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1010u)) return;
    }
}

/* _ZN3vox10EmitterObj12GetDebugInfoERNS_18DebugChunk_emitterE @ 001e1030 (arm) */
void fn_001e1030(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e1030:;
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
L_001e1034:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e1038:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e103c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001e1040:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e1044:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001e1048:;
    {
        cpu->r[14] = 0x001e104cu; fn_001ebcfc(cpu);
    }
L_001e104c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x38u);
    }
L_001e1050:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e1054:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x60u);
    }
L_001e1058:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x44u);
    }
L_001e105c:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_001e1060:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x4cu);
    }
L_001e1064:;
    {
        uint64_t v = rd64(cpu->r[4] + + 0x8u);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
    }
L_001e1068:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x118u);
    }
L_001e106c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_001e1070:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x94u);
    }
L_001e1074:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x0000003cu, 0, 0);
    }
L_001e1078:;
    {
        wr64(cpu->r[5], ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_001e107c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000048u, 0, 0);
    }
L_001e1080:;
    {
        uint64_t v = rd64(cpu->r[12] + + 0x8u);
        cpu->r[10] = (uint32_t)v;
        cpu->r[11] = (uint32_t)(v >> 32);
    }
L_001e1084:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x000000c0u, 0, 0);
    }
L_001e1088:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[0]);
    }
L_001e108c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x00000054u, 0, 0);
    }
L_001e1090:;
    {
        cpu->r[12] = cpu->r[7];
    }
L_001e1094:;
    {
        wr64(cpu->r[5] + + 0x8u, ((uint64_t)cpu->r[11] << 32) | cpu->r[10]);
    }
L_001e1098:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001e109c:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e10a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x70u);
    }
L_001e10a4:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e10a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x74u);
    }
L_001e10ac:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e10b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x9cu);
    }
L_001e10b4:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e10b8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xa0u);
    }
L_001e10bc:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e10c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xa4u);
    }
L_001e10c4:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e10c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xb4u);
    }
L_001e10cc:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e10d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xb8u);
    }
L_001e10d4:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e10d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xbcu);
    }
L_001e10dc:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e10e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xa8u);
    }
L_001e10e4:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e10e8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xacu);
    }
L_001e10ec:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e10f0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xb0u);
    }
L_001e10f4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e10f8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8cu);
    }
L_001e10fc:;
    {
        wr32(cpu->r[5] + + 0x30u, cpu->r[3]);
    }
L_001e1100:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001e1104:;
    {
        wr32(cpu->r[5] + + 0x38u, cpu->r[3]);
    }
L_001e1108:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001e110c:;
    {
        wr32(cpu->r[5] + + 0x34u, cpu->r[3]);
    }
L_001e1110:;
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
L_001e1114:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001e1118:;
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
    }
L_001e111c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001e1120:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001e1124:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e1128:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e112c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001e1130:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001e1134:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0x54u, cpu->r[3]);
        }
    }
L_001e1138:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e113c:;
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
L_001e1140:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZNSt6vectorIPhN3vox10SAllocatorIS0_LNS1_10VoxMemHintE0EEEE7reserveEj @ 001e1144 (arm) */
void fn_001e1144(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e1144:;
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
L_001e1148:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001e114c:;
    {
        cpu->r[8] = rd32(cpu->r[0]);
    }
L_001e1150:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001e1154:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e1158:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_001e115c:;
    {
        sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 1, 2u, &shc), 1, 1);
    }
L_001e1160:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001e11c0;
        }
    }
L_001e1164:;
    {
        add_flags(cpu, cpu->r[1], 0xc0000001u, 0, 1);
    }
L_001e1168:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001e11c8;
        }
    }
L_001e116c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e1170:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001e1174:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 0);
    }
L_001e1178:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 2u, &shc); cpu->r[7] = v;
    }
L_001e117c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e11e4;
        }
    }
L_001e1180:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[6] = v;
    }
L_001e1184:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e1188:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e118c:;
    {
        cpu->r[14] = 0x001e1190u; fn_00097dd0(cpu);
    }
L_001e1190:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_001e1194:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e1198:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e11a8;
        }
    }
L_001e119c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e11a0:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001e11a4:;
    {
        cpu->r[14] = 0x001e11a8u; imp_memcpy(cpu); /* memcpy */
    }
L_001e11a8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001e11ac:;
    {
        cpu->r[14] = 0x001e11b0u; fn_00097dc8(cpu);
    }
L_001e11b0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_001e11b4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_001e11b8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[6]);
    }
L_001e11bc:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[7]);
    }
L_001e11c0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e11c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e11c8u)) return;
    }
L_001e11c8:;
    {
        cpu->r[0] = rd32(0x001e11d0u + + 0x2cu);
    }
L_001e11cc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e11d0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001e11d8u, cpu->r[0], 0, 0);
    }
L_001e11d4:;
    {
        cpu->r[14] = 0x001e11d8u; fn_00208298(cpu);
    }
L_001e11d8:;
    {
        cpu->r[8] = rd32(cpu->r[4]);
    }
L_001e11dc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e11e0:;
    {
        goto L_001e116c;
    }
L_001e11e4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[6] = v;
    }
L_001e11e8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e11ec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e11f0:;
    {
        cpu->r[14] = 0x001e11f4u; fn_00097dd0(cpu);
    }
L_001e11f4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e11f8:;
    {
        goto L_001e11b0;
    }
}

/* _ZN3vox10EmitterObj30SetInteractiveMusicStateChangeEPKc @ 001e1200 (arm) */
void fn_001e1200(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e1200:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e1204:;
    {
        uint32_t wb_tmp = cpu->r[0] + + 0x144u;
        wr8(cpu->r[0] + + 0x144u, cpu->r[3]);
        cpu->r[0] = wb_tmp;
    }
L_001e1208:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_001e120c:;
    {
        imp_strcpy(cpu); /* tail strcpy */ return;
    }
}

/* _ZN3vox10EmitterObj15SetDSPParameterEiPv @ 001e1210 (arm) */
void fn_001e1210(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e1210:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e1214:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e1218:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e121c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e1220:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1224:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e1228:;
    {
        cpu->r[14] = 0x001e122cu; fn_001ebcfc(cpu);
    }
L_001e122c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001e1230:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e1268;
        }
    }
L_001e1234:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e1238:;
    {
        cpu->r[14] = 0x001e123cu; imp_strlen(cpu); /* strlen */
    }
L_001e123c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1240:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e1268;
        }
    }
L_001e1244:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xf0u);
    }
L_001e1248:;
    {
        cpu->r[14] = 0x001e124cu; fn_00097dc8(cpu);
    }
L_001e124c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001e1250:;
    {
        cpu->r[14] = 0x001e1254u; fn_00097dd4(cpu);
    }
L_001e1254:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1258:;
    {
        wr32(cpu->r[5] + + 0xf0u, cpu->r[0]);
    }
L_001e125c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1268;
        }
    }
L_001e1260:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e1264:;
    {
        cpu->r[14] = 0x001e1268u; imp_strcpy(cpu); /* strcpy */
    }
L_001e1268:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e126c:;
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
L_001e1270:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox10EmitterObj17ProcessNativeDataEf @ 001e1274 (arm) */
void fn_001e1274(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e1274:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x144u);
    }
L_001e1278:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001e127c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e1280:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001e1284:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e1288:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e12b0;
        }
    }
L_001e128c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001e1290:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e1294:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e1298:;
    {
        cpu->r[14] = 0x001e12a0u;
    }
L_001e129c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e12a0u)) return;
    }
L_001e12a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e12a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e1324;
        }
    }
L_001e12a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001e12ac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001e12b0u)) return;
    }
L_001e12b0:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x145u);
    }
L_001e12b4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e12b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e13b8;
        }
    }
L_001e12bc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x114u);
    }
L_001e12c0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e12c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e12c8:;
    {
        cpu->r[14] = 0x001e12d0u;
    }
L_001e12cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e12d0u)) return;
    }
L_001e12d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000144u, 0, 0);
    }
L_001e12d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_001e12d8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x114u);
    }
L_001e12dc:;
    {
        cpu->r[14] = 0x001e12e0u; fn_001d7658(cpu);
    }
L_001e12e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001e12e4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e12e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e12ec:;
    {
        cpu->r[14] = 0x001e12f4u;
    }
L_001e12f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e12f4u)) return;
    }
L_001e12f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e12f8:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[3]);
    }
L_001e12fc:;
    {
        wr32(cpu->r[4] + + 0x100u, cpu->r[3]);
    }
L_001e1300:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e1304:;
    {
        wr8(cpu->r[4] + + 0x144u, cpu->r[3]);
    }
L_001e1308:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001e130c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e1310:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e1314:;
    {
        cpu->r[14] = 0x001e131cu;
    }
L_001e1318:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e131cu)) return;
    }
L_001e131c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1320:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e12a8;
        }
    }
L_001e1324:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001e1328:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e132c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e1330:;
    {
        cpu->r[14] = 0x001e1338u;
    }
L_001e1334:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1338u)) return;
    }
L_001e1338:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e133c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e12a8;
        }
    }
L_001e1340:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x100u);
    }
L_001e1344:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001e1348:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001e134c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001e1350:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e1354:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001e1358:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
        }
    }
L_001e135c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e12a8;
        }
    }
L_001e1360:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001e1364:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x108u);
    }
L_001e1368:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e136c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e1370:;
    {
        cpu->r[14] = 0x001e1378u;
    }
L_001e1374:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1378u)) return;
    }
L_001e1378:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001e137c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x100u);
    }
L_001e1380:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001e1384:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_001e1388:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001e138c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e1390:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e1394:;
    {
        cpu->r[14] = 0x001e139cu;
    }
L_001e1398:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e139cu)) return;
    }
L_001e139c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x100u);
    }
L_001e13a0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x104u);
    }
L_001e13a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001e13a8:;
    {
        wr32(cpu->r[4] + + 0x100u, cpu->r[0]);
    }
L_001e13ac:;
    {
        cpu->r[14] = 0x001e13b0u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001e13b0:;
    {
        wr32(cpu->r[4] + + 0x100u, cpu->r[1]);
    }
L_001e13b4:;
    {
        goto L_001e12a8;
    }
L_001e13b8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x114u);
    }
L_001e13bc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e13c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001e13c4:;
    {
        uint32_t wb_tmp = cpu->r[5] + - 0x8u;
        wr32(cpu->r[5] + - 0x8u, cpu->r[2]);
        cpu->r[5] = wb_tmp;
    }
L_001e13c8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e13cc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e13d0:;
    {
        cpu->r[14] = 0x001e13d8u;
    }
L_001e13d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e13d8u)) return;
    }
L_001e13d8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x110u);
    }
L_001e13dc:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_001e13e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e13e4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001e13e8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001e13ec:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001e13f0:;
    {
        cpu->r[14] = 0x001e13f8u;
    }
L_001e13f4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e13f8u)) return;
    }
L_001e13f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e13fc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e1400:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e1300;
        }
    }
L_001e1404:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x100u);
    }
L_001e1408:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001e140c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001e1410:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0x104u);
        }
    }
L_001e1414:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
        }
    }
L_001e1418:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001e141c:;
    {
        wr32(cpu->r[4] + + 0x100u, cpu->r[3]);
    }
L_001e1420:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001e1424:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e1428:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e142c:;
    {
        cpu->r[14] = 0x001e1434u;
    }
L_001e1430:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1434u)) return;
    }
L_001e1434:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x100u);
    }
L_001e1438:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001e143c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001e1440:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e1444:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1464;
        }
    }
L_001e1448:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001e144c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e1450:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e1454:;
    {
        cpu->r[14] = 0x001e145cu;
    }
L_001e1458:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e145cu)) return;
    }
L_001e145c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e1460:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e1470;
        }
    }
L_001e1464:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e1468:;
    {
        wr8(cpu->r[4] + + 0x144u, cpu->r[3]);
    }
L_001e146c:;
    {
        goto L_001e12a8;
    }
L_001e1470:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001e1474:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x100u);
    }
L_001e1478:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001e147c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e1480:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x108u);
    }
L_001e1484:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e1488:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_001e148c:;
    {
        cpu->r[14] = 0x001e1494u;
    }
L_001e1490:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1494u)) return;
    }
L_001e1494:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001e1498:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x100u);
    }
L_001e149c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001e14a0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_001e14a4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001e14a8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e14ac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e14b0:;
    {
        cpu->r[14] = 0x001e14b8u;
    }
L_001e14b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e14b8u)) return;
    }
L_001e14b8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x100u);
    }
L_001e14bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e14c0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x104u);
    }
L_001e14c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001e14c8:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[3]);
    }
L_001e14cc:;
    {
        wr32(cpu->r[4] + + 0x100u, cpu->r[0]);
    }
L_001e14d0:;
    {
        cpu->r[14] = 0x001e14d4u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001e14d4:;
    {
        wr32(cpu->r[4] + + 0x100u, cpu->r[1]);
    }
L_001e14d8:;
    {
        goto L_001e1464;
    }
}

/* _ZNSt6vectorIPhN3vox10SAllocatorIS0_LNS1_10VoxMemHintE0EEEEC1Ej @ 001e14dc (arm) */
void fn_001e14dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e14dc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e14e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e14e4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001e14e8:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[7] = v;
    }
L_001e14ec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e14f0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e14f4:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_001e14f8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_001e14fc:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[6]);
    }
L_001e1500:;
    {
        cpu->r[14] = 0x001e1504u; fn_00097dd0(cpu);
    }
L_001e1504:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e1508:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001e150c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_001e1510:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_001e1514:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[5]);
    }
L_001e1518:;
    {
        cpu->r[14] = 0x001e151cu; imp_memset(cpu); /* memset */
    }
L_001e151c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_001e1520:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e1524:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1528u)) return;
    }
}

/* _ZNSt6vectorIPhN3vox10SAllocatorIS0_LNS1_10VoxMemHintE0EEEE9push_backERKS0_ @ 001e1528 (arm) */
void fn_001e1528(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e1528:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e152c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001e1530:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x4u);
    }
L_001e1534:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e1538:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001e153c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_001e1540:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e1554;
        }
    }
L_001e1544:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001e1548:;
    {
        uint32_t wb_tmp = cpu->r[8] + 0x00000004u;
        wr32(cpu->r[8], cpu->r[3]);
        cpu->r[8] = wb_tmp;
    }
L_001e154c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[8]);
    }
L_001e1550:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e1554u)) return;
    }
L_001e1554:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001e1558:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_001e155c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001e1560:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001e1564:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001e1568:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001e156c:;
    {
        add_flags(cpu, cpu->r[7], 0xc0000001u, 0, 1);
    }
L_001e1570:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001e15c8;
        }
    }
L_001e1574:;
    {
        cpu->r[7] = (~0x00000003u);
    }
L_001e1578:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e157c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e1580:;
    {
        cpu->r[14] = 0x001e1584u; fn_00097dd0(cpu);
    }
L_001e1584:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001e1588:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_001e158c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e1590:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[0];
        }
    }
L_001e1594:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e15a8;
        }
    }
L_001e1598:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001e159c:;
    {
        cpu->r[14] = 0x001e15a0u; imp_memmove(cpu); /* memmove */
    }
L_001e15a0:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001e15a4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_001e15a8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001e15ac:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001e15b0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_001e15b4:;
    {
        uint32_t wb_tmp = cpu->r[8] + 0x00000004u;
        wr32(cpu->r[8], cpu->r[3]);
        cpu->r[8] = wb_tmp;
    }
L_001e15b8:;
    {
        cpu->r[14] = 0x001e15bcu; fn_00097dc8(cpu);
    }
L_001e15bc:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[7]);
    }
L_001e15c0:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_001e15c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e15c8u)) return;
    }
L_001e15c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001e15cc:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[7] = v;
        }
    }
L_001e15d0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001e1578;
        }
    }
L_001e15d4:;
    {
        goto L_001e1574;
    }
}
