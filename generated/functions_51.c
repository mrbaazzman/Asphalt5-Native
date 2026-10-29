#include "functions.h"

/* _ZN9AniObj_v47InitObjEv @ 0013e758 (arm) */
void fn_0013e758(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013e758:;
    {
        cpu->r[1] = rd32(0x0013e760u + + 0x8e4u);
    }
L_0013e75c:;
    {
        cpu->r[2] = rd32(0x0013e764u + + 0x8e4u);
    }
L_0013e760:;
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
L_0013e764:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0013e768:;
    {
        cpu->r[1] = add_flags(cpu, 0x0013e770u, cpu->r[1], 0, 0);
    }
L_0013e76c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000018cu, 1, 0);
    }
L_0013e770:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_0013e774:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0013e778:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0013e77c:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[2]);
    }
L_0013e780:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0013e784:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0013e788:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[1]);
    }
L_0013e78c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_0013e790:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0013e794:;
    {
        wr8(cpu->r[0] + + 0x100u, cpu->r[4]);
    }
L_0013e798:;
    {
        wr32(cpu->r[13] + + 0x184u, cpu->r[2]);
    }
L_0013e79c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013e820;
        }
    }
L_0013e7a0:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_0013e7a4:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_0013e7a8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_0013e7ac:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_0013e7b0:;
    {
        cpu->r[7] = cpu->r[12];
    }
L_0013e7b4:;
    {
        goto L_0013e7e0;
    }
L_0013e7b8:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x20u);
    }
L_0013e7bc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0013e7c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_0013e7c4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000005cu, 0, 0);
    }
L_0013e7c8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x48u);
    }
L_0013e7cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013e7d0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_0013e7d4:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[7] + + 0x100u, cpu->r[6]);
        }
    }
L_0013e7d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0013e7dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013e820;
        }
    }
L_0013e7e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_0013e7e4:;
    {
        cpu->r[14] = 0x0013e7e8u; fn_001390d0(cpu);
    }
L_0013e7e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013e7ec:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013e7b8;
        }
    }
L_0013e7f0:;
    {
        cpu->r[4] = (~0x00000000u);
    }
L_0013e7f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x94u);
    }
L_0013e7f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_0013e7fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x184u);
    }
L_0013e800:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_0013e804:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013e808:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013e80c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0013e810:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013f18c;
        }
    }
L_0013e814:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000018cu, 0, 0);
    }
L_0013e818:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0013e81c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0013e820u)) return;
    }
L_0013e820:;
    {
        cpu->r[2] = rd32(0x0013e828u + + 0x824u);
    }
L_0013e824:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0013e828:;
    {
        cpu->r[1] = rd32(0x0013e830u + + 0x820u);
    }
L_0013e82c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0013e834u, cpu->r[2], 0, 0);
    }
L_0013e830:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[14]);
    }
L_0013e834:;
    {
        cpu->r[1] = add_flags(cpu, 0x0013e83cu, cpu->r[1], 0, 0);
    }
L_0013e838:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_0013e83c:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[14]);
    }
L_0013e840:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[14]);
    }
L_0013e844:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[1]);
    }
L_0013e848:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[2]);
    }
L_0013e84c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[14]);
    }
L_0013e850:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_0013e854:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x88u);
    }
L_0013e858:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_0013e85c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013f020;
        }
    }
L_0013e860:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013e864:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000a0u, 0, 0);
    }
L_0013e868:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x50u);
    }
L_0013e86c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013e870:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_0013e874:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[1]);
    }
L_0013e878:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x20u);
    }
L_0013e87c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_0013e880:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[2]);
    }
L_0013e884:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0013e888:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[5]);
    }
L_0013e88c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0013e890:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_0013e894:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013e888;
        }
    }
L_0013e898:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x84u);
    }
L_0013e89c:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0013e8a0:;
    {
        cpu->r[8] = rd32(0x0013e8a8u + + 0x7acu);
    }
L_0013e8a4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0013e8a8:;
    {
        cpu->r[7] = rd32(0x0013e8b0u + + 0x7a8u);
    }
L_0013e8ac:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_0013e8b0:;
    {
        cpu->r[4] = rd32(cpu->r[12] + + 0x50u);
    }
L_0013e8b4:;
    {
        cpu->r[8] = add_flags(cpu, 0x0013e8bcu, cpu->r[8], 0, 0);
    }
L_0013e8b8:;
    {
        cpu->r[10] = rd32(0x0013e8c0u + + 0x79cu);
    }
L_0013e8bc:;
    {
        cpu->r[7] = add_flags(cpu, 0x0013e8c4u, cpu->r[7], 0, 0);
    }
L_0013e8c0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0013e8c4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000010u, 0, 0);
    }
L_0013e8c8:;
    {
        cpu->r[10] = add_flags(cpu, 0x0013e8d0u, cpu->r[10], 0, 0);
    }
L_0013e8cc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_0013e8d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0x8u);
    }
L_0013e8d4:;
    {
        cpu->r[11] = cpu->r[5];
    }
L_0013e8d8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[5]);
    }
L_0013e8dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_0013e8e0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[5]);
    }
L_0013e8e4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[5]);
    }
L_0013e8e8:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[5]);
    }
L_0013e8ec:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[5]);
    }
L_0013e8f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013e9b8;
        }
    }
L_0013e8f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + - 0x4u);
    }
L_0013e8f8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013e8fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013e9a8;
        }
    }
L_0013e900:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001bu, 1, 1);
    }
L_0013e904:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_0013e97c;
        case 1: goto L_0013e9a8;
        case 2: goto L_0013e9a8;
        case 3: goto L_0013e9a8;
        case 4: goto L_0013e9a8;
        case 5: goto L_0013e9a8;
        case 6: goto L_0013e9a8;
        case 7: goto L_0013e9a8;
        case 8: goto L_0013e9a8;
        case 9: goto L_0013ef64;
        case 10: goto L_0013ef50;
        case 11: goto L_0013ef38;
        case 12: goto L_0013e9a8;
        case 13: goto L_0013ef18;
        case 14: goto L_0013ef18;
        case 15: goto L_0013ef18;
        case 16: goto L_0013ef18;
        case 17: goto L_0013ef18;
        case 18: goto L_0013ef18;
        case 19: goto L_0013ef18;
        case 20: goto L_0013ef18;
        case 21: goto L_0013e9a8;
        case 22: goto L_0013e9a8;
        case 23: goto L_0013e9a8;
        case 24: goto L_0013e9a8;
        case 25: goto L_0013eefc;
        case 26: goto L_0013eef0;
        case 27: goto L_0013eed8;
        default: guest_unimplemented(cpu, 0x0013e904u); return; }
        }
    }
L_0013e908:;
    {
        goto L_0013e9a8;
    }
L_0013e97c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0013e980:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_0013e984:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013e9a8;
        }
    }
L_0013e988:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x9cu);
    }
L_0013e98c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0013e990:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0013e994:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0013e998:;
    {
        cpu->r[12] = 0x000000b0u;
    }
L_0013e99c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_0013e9a0:;
    {
        cpu->r[14] = 0x0013e9a4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0013e9a4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0013e9a8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0013e9ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0x8u);
    }
L_0013e9b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_0013e9b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013e8f4;
        }
    }
L_0013e9b8:;
    {
        uint32_t v = cpu->r[6] ^ 0x00000001u; cpu->r[3] = v;
    }
L_0013e9bc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_0013e9c0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0013e9c4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] | 0x00000001u; cpu->r[3] = v;
        }
    }
L_0013e9c8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[9]);
    }
L_0013e9cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013e9d0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[11]);
    }
L_0013e9d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013ee78;
        }
    }
L_0013e9d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013e9dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013ee78;
        }
    }
L_0013e9e0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0013e9e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_0013e9e8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x24u);
    }
L_0013e9ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_0013e9f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0013e9f4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_0013e9f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_0013e9fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_0013ea00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_0013ea04:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0013ea08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_0013ea0c:;
    {
        cpu->r[1] = 0x0000001eu;
    }
L_0013ea10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_0013ea14:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013ea18:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0] + cpu->r[2]; cpu->r[1] = v;
    }
L_0013ea1c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_0013ea20:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0013ea24:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[1]);
    }
L_0013ea28:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0013ea2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0013ea30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_0013ea34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_0013ea38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013ea28;
        }
    }
L_0013ea3c:;
    {
        cpu->r[3] = rd32(0x0013ea44u + + 0x61cu);
    }
L_0013ea40:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0013ea44:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[2]);
    }
L_0013ea48:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013ea50u, cpu->r[3], 0, 0);
    }
L_0013ea4c:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[12]);
    }
L_0013ea50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_0013ea54:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[12]);
    }
L_0013ea58:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[3]);
    }
L_0013ea5c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x84u);
    }
L_0013ea60:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x80u);
    }
L_0013ea64:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x1cu);
    }
L_0013ea68:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 1);
    }
L_0013ea6c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013f410;
        }
    }
L_0013ea70:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x84u);
    }
L_0013ea74:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013ea78:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x58u);
    }
L_0013ea7c:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[0]);
    }
L_0013ea80:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x20u);
    }
L_0013ea84:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[0]);
    }
L_0013ea88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0013ea8c:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[3]);
    }
L_0013ea90:;
    {
        cpu->r[3] = rd32(0x0013ea98u + + 0x5ccu);
    }
L_0013ea94:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013ea9cu, cpu->r[3], 0, 0);
    }
L_0013ea98:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[3]);
    }
L_0013ea9c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x90u);
    }
L_0013eaa0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x7cu);
    }
L_0013eaa4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0xcu);
    }
L_0013eaa8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0013eaac:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013f3f4;
        }
    }
L_0013eab0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x90u);
    }
L_0013eab4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0013eab8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x10u);
    }
L_0013eabc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x64u);
    }
L_0013eac0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0013eac4:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_0013eac8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_0013eacc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x18u);
    }
L_0013ead0:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x14u);
    }
L_0013ead4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013ead8:;
    {
        wr32(cpu->r[13] + + 0xc4u, cpu->r[3]);
    }
L_0013eadc:;
    {
        cpu->r[14] = 0x0013eae0u; fn_00141d1c(cpu);
    }
L_0013eae0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x48u);
    }
L_0013eae4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x64u);
    }
L_0013eae8:;
    {
        cpu->r[1] = rd32(cpu->r[14] + + 0x14u);
    }
L_0013eaec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013eaf0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0013eaf4:;
    {
        cpu->r[14] = 0x0013eaf8u; fn_00141c4c(cpu);
    }
L_0013eaf8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_0013eafc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0013eb00:;
    {
        wr32(cpu->r[1] + + 0x2cu, cpu->r[0]);
    }
L_0013eb04:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0013eb08:;
    {
        cpu->r[14] = 0x0013eb0cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0013eb0c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_0013eb10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013eb14:;
    {
        wr32(cpu->r[2] + + 0x30u, cpu->r[0]);
    }
L_0013eb18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f3ec;
        }
    }
L_0013eb1c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x48u);
    }
L_0013eb20:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[0] = v;
    }
L_0013eb24:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[4]);
    }
L_0013eb28:;
    {
        cpu->r[14] = 0x0013eb2cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0013eb2c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_0013eb30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013eb34:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0013eb38:;
    {
        wr32(cpu->r[12] + + 0x28u, cpu->r[0]);
    }
L_0013eb3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013e7f0;
        }
    }
L_0013eb40:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x48u);
    }
L_0013eb44:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013eb48:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_0013eb4c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0013eb50:;
    {
        cpu->r[14] = rd32(cpu->r[14] + + 0x30u);
    }
L_0013eb54:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x14u);
    }
L_0013eb58:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[14]);
    }
L_0013eb5c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0013eb60:;
    {
        wr32(cpu->r[14], cpu->r[2]);
    }
L_0013eb64:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[1]);
    }
L_0013eb68:;
    {
        cpu->r[2] = rd8(cpu->r[3]);
    }
L_0013eb6c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8cu);
    }
L_0013eb70:;
    {
        uint32_t v = cpu->r[2] & 0x000000f8u; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0013eb74:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0013eb78:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0013eb7c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0013eb80:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0013eb84:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[2] = v;
        }
    }
L_0013eb88:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013eb8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013ee5c;
        }
    }
L_0013eb90:;
    {
        cpu->r[2] = rd32(0x0013eb98u + + 0x4d0u);
    }
L_0013eb94:;
    {
        cpu->r[2] = add_flags(cpu, 0x0013eb9cu, cpu->r[2], 0, 0);
    }
L_0013eb98:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[2]);
    }
L_0013eb9c:;
    {
        cpu->r[2] = rd32(0x0013eba4u + + 0x4c8u);
    }
L_0013eba0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0013eba8u, cpu->r[2], 0, 0);
    }
L_0013eba4:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[2]);
    }
L_0013eba8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000090u, 1, 1);
    }
L_0013ebac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000004u;
        }
    }
L_0013ebb0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = rd32(cpu->r[13] + + 0x48u);
        }
    }
L_0013ebb4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[14] + + 0x34u, cpu->r[2]);
        }
    }
L_0013ebb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013ebf8;
        }
    }
L_0013ebbc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000098u, 1, 1);
    }
L_0013ebc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f008;
        }
    }
L_0013ebc4:;
    {
        cpu->r[3] = 0x0000010du;
    }
L_0013ebc8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x98u);
    }
L_0013ebcc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0013ebd0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0013ebd4:;
    {
        cpu->r[1] = rd32(0x0013ebdcu + + 0x494u);
    }
L_0013ebd8:;
    {
        cpu->r[2] = rd32(0x0013ebe0u + + 0x494u);
    }
L_0013ebdc:;
    {
        cpu->r[3] = rd32(0x0013ebe4u + + 0x494u);
    }
L_0013ebe0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0013ebe8u, cpu->r[1], 0, 0);
    }
L_0013ebe4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0013ebecu, cpu->r[2], 0, 0);
    }
L_0013ebe8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0013ebec:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013ebf4u, cpu->r[3], 0, 0);
    }
L_0013ebf0:;
    {
        cpu->r[14] = 0x0013ebf4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0013ebf4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0013ebf8:;
    {
        cpu->r[14] = rd16(cpu->r[3] + + 0x1u);
    }
L_0013ebfc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_0013ec00:;
    {
        wr32(cpu->r[13] + + 0xc4u, cpu->r[3]);
    }
L_0013ec04:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_0013ec08:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[14]);
    }
L_0013ec0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013ee1c;
        }
    }
L_0013ec10:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x000000c8u, 0, 0);
    }
L_0013ec14:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x000000c4u, 0, 0);
    }
L_0013ec18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], shifter(cpu->r[14], 2, 1u, &shc), 0, 0);
    }
L_0013ec1c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_0013ec20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0013ec24:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[8]);
    }
L_0013ec28:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_0013ec2c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0013ec30:;
    {
        cpu->r[9] = 0x0000aaabu;
    }
L_0013ec34:;
    {
        cpu->r[14] = 0x0013ec38u; fn_00146c9c(cpu);
    }
L_0013ec38:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0013ec3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013ec40:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_0013ec44:;
    {
        cpu->r[14] = 0x0013ec48u; fn_00146b50(cpu);
    }
L_0013ec48:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0013ec4c:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0xaaaau << 16);
    }
L_0013ec50:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[7], 0x0000001eu, 0, 0);
    }
L_0013ec54:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013ec58:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0013ec5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000aaabu;
        }
    }
L_0013ec60:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_0013ec64:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xaaaau << 16);
        }
    }
L_0013ec68:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0013ec6c:;
    {
        wr8(cpu->r[13] + + 0xe2u, cpu->r[0]);
    }
L_0013ec70:;
    {
        if (cond_test(cpu, 2)) {
        { uint64_t v = (uint64_t)cpu->r[3] * (uint64_t)cpu->r[0]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
        }
    }
L_0013ec74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013ec78:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[3], 3, 1u, &shc); cpu->r[3] = v;
        }
    }
L_0013ec7c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[13] + + 0xe2u, cpu->r[3]);
        }
    }
L_0013ec80:;
    {
        cpu->r[14] = 0x0013ec84u; fn_00146b50(cpu);
    }
L_0013ec84:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_0013ec88:;
    {
        wr16(cpu->r[13] + + 0xc8u, cpu->r[0]);
    }
L_0013ec8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013ec90:;
    {
        cpu->r[14] = 0x0013ec94u; fn_00146b50(cpu);
    }
L_0013ec94:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0013ec98:;
    {
        wr16(cpu->r[13] + + 0xdcu, cpu->r[0]);
    }
L_0013ec9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013eca0:;
    {
        cpu->r[14] = 0x0013eca4u; fn_00146b50(cpu);
    }
L_0013eca4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0013eca8:;
    {
        wr16(cpu->r[13] + + 0xdeu, cpu->r[0]);
    }
L_0013ecac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013ecb0:;
    {
        cpu->r[14] = 0x0013ecb4u; fn_00146b50(cpu);
    }
L_0013ecb4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_0013ecb8:;
    {
        wr16(cpu->r[13] + + 0xe0u, cpu->r[0]);
    }
L_0013ecbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013ecc0:;
    {
        cpu->r[14] = 0x0013ecc4u; fn_00146b50(cpu);
    }
L_0013ecc4:;
    {
        wr16(cpu->r[13] + + 0xdau, cpu->r[0]);
    }
L_0013ecc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013eccc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0013ecd0:;
    {
        cpu->r[14] = 0x0013ecd4u; fn_00146b50(cpu);
    }
L_0013ecd4:;
    {
        { uint64_t v = (uint64_t)cpu->r[9] * (uint64_t)cpu->r[0]; cpu->r[3] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_0013ecd8:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 1u, &shc); cpu->r[0] = v;
    }
L_0013ecdc:;
    {
        wr8(cpu->r[10] + + 0x1bu, cpu->r[0]);
    }
L_0013ece0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0013ece4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[11], 1, 1);
    }
L_0013ece8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013ecc8;
        }
    }
L_0013ecec:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], 0x00000078u, 0, 0);
    }
L_0013ecf0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0013ecf8u + + 0x348u);
    }
L_0013ecf4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0013ecf8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013ecfc:;
    {
        cpu->r[14] = 0x0013ed00u; fn_00146b50(cpu);
    }
L_0013ed00:;
    {
        cpu->r[14] = 0x0013ed04u; fn_00146b94(cpu);
    }
L_0013ed04:;
    {
        wr32(cpu->r[8] + + 0x3cu, cpu->r[0]);
    }
L_0013ed08:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0013ed0c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 1);
    }
L_0013ed10:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0013ed14:;
    {
        vfp_vadd(cpu, 16, 16, 15);
    }
L_0013ed18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013ecf4;
        }
    }
L_0013ed1c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0013ed20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013ed4c;
        }
    }
L_0013ed24:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0013ed2cu + + 0x380u);
    }
L_0013ed28:;
    {
        vfp_vsub(cpu, 16, 16, 15);
    }
L_0013ed2c:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x0013ed34u + + 0x304u);
    }
L_0013ed30:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_0013ed34:;
    {
        vfp_sync_flags(cpu);
    }
L_0013ed38:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vneg(cpu, 16, 16);
        }
    }
L_0013ed3c:;
    {
        *vfp_d(cpu,8) = (double)*vfp_s(cpu,16);
    }
L_0013ed40:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,8), *vfp_d(cpu,7));
    }
L_0013ed44:;
    {
        vfp_sync_flags(cpu);
    }
L_0013ed48:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0013ef7c;
        }
    }
L_0013ed4c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x40u);
    }
L_0013ed50:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0013ed54:;
    {
        cpu->r[1] = rd32(cpu->r[10] + shifter(cpu->r[8], 2, 1u, &shc));
    }
L_0013ed58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013ed5c:;
    {
        cpu->r[14] = 0x0013ed60u; fn_00146b50(cpu);
    }
L_0013ed60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_0013ed64:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_0013ed68:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000010u, 1, 1);
    }
L_0013ed6c:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[0]);
    }
L_0013ed70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013ed54;
        }
    }
L_0013ed74:;
    {
        cpu->r[0] = rd16(cpu->r[13] + + 0xc8u);
    }
L_0013ed78:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0013ed7c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_0013ed80:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013edcc;
        }
    }
L_0013ed84:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0013ed88:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0013ed8c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_0013ed90:;
    {
        cpu->r[14] = 0x0013ed94u; imp_realloc(cpu); /* realloc */
    }
L_0013ed94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013ed98:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_0013ed9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013eff8;
        }
    }
L_0013eda0:;
    {
        cpu->r[3] = rd16(cpu->r[13] + + 0xc8u);
    }
L_0013eda4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013eda8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_0013edac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0013edb0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[14], 1, 0);
    }
L_0013edb4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[14], 2, 2u, &shc), 0, 0);
    }
L_0013edb8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0013edbc:;
    {
        cpu->r[14] = 0x0013edc0u; imp_memset(cpu); /* memset */
    }
L_0013edc0:;
    {
        cpu->r[0] = rd16(cpu->r[13] + + 0xc8u);
    }
L_0013edc4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0013edc8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_0013edcc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0013edd0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0013edd4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0013edd8:;
    {
        cpu->r[14] = 0x0013eddcu; fn_00146ad8(cpu);
    }
L_0013eddc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013ede0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013efa0;
        }
    }
L_0013ede4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0013ede8:;
    {
        cpu->r[0] = rd16(cpu->r[0] + + 0xb4u);
    }
L_0013edec:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_0013edf0:;
    {
        wr16(cpu->r[3] + - 0x2u, cpu->r[0]);
    }
L_0013edf4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0013edf8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0013edfc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0013ee00:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0013ee04:;
    {
        cpu->r[14] = 0x0013ee08u; fn_00146988(cpu);
    }
L_0013ee08:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0013ee0c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x44u);
    }
L_0013ee10:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 1);
    }
L_0013ee14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013ec2c;
        }
    }
L_0013ee18:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0013ee1c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_0013ee20:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x78u);
    }
L_0013ee24:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8cu);
    }
L_0013ee28:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000004u;
        cpu->r[2] = rd32(cpu->r[0]);
        cpu->r[0] = wb_tmp;
    }
L_0013ee2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0013ee30:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[0]);
    }
L_0013ee34:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0013ee38:;
    {
        cpu->r[1] = rd8(cpu->r[3]);
    }
L_0013ee3c:;
    {
        uint32_t v = cpu->r[1] & 0x000000f8u; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0013ee40:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0013ee44:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0013ee48:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0013ee4c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0013ee50:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[2] = v;
        }
    }
L_0013ee54:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013ee58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013eba8;
        }
    }
L_0013ee5c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x7cu);
    }
L_0013ee60:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0013ee64:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_0013ee68:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[14]);
    }
L_0013ee6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000038u, 0, 0);
    }
L_0013ee70:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[0]);
    }
L_0013ee74:;
    {
        goto L_0013ea9c;
    }
L_0013ee78:;
    {
        uint32_t v = cpu->r[6] | cpu->r[5]; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_0013ee7c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0013ee80:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0013ee84:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0013ee88:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013ee8c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] | 0x00000001u; cpu->r[2] = v;
        }
    }
L_0013ee90:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013ee94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013e9e0;
        }
    }
L_0013ee98:;
    {
        uint32_t v = cpu->r[3] | cpu->r[1]; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0013ee9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013e9e0;
        }
    }
L_0013eea0:;
    {
        cpu->r[1] = rd32(0x0013eea8u + + 0x1d4u);
    }
L_0013eea4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0013eea8:;
    {
        cpu->r[12] = rd32(0x0013eeb0u + + 0x1d0u);
    }
L_0013eeac:;
    {
        cpu->r[14] = 0x000000dfu;
    }
L_0013eeb0:;
    {
        cpu->r[2] = rd32(0x0013eeb8u + + 0x1ccu);
    }
L_0013eeb4:;
    {
        cpu->r[1] = add_flags(cpu, 0x0013eebcu, cpu->r[1], 0, 0);
    }
L_0013eeb8:;
    {
        cpu->r[3] = rd32(0x0013eec0u + + 0x1c8u);
    }
L_0013eebc:;
    {
        cpu->r[12] = add_flags(cpu, 0x0013eec4u, cpu->r[12], 0, 0);
    }
L_0013eec0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0013eec8u, cpu->r[2], 0, 0);
    }
L_0013eec4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000010u, 0, 0);
    }
L_0013eec8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013eed0u, cpu->r[3], 0, 0);
    }
L_0013eecc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0013eed0:;
    {
        cpu->r[14] = 0x0013eed4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0013eed4:;
    {
        goto L_0013e9e0;
    }
L_0013eed8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013eedc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0013eee0:;
    {
        cpu->r[5] = 0x00000004u;
    }
L_0013eee4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0013eee8:;
    {
        wr8(cpu->r[0] + + 0x158u, cpu->r[3]);
    }
L_0013eeec:;
    {
        goto L_0013e9ac;
    }
L_0013eef0:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_0013eef4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0013eef8:;
    {
        goto L_0013e9ac;
    }
L_0013eefc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0013ef00:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0013ef04:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = 0x00000002u;
        }
    }
L_0013ef08:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = 0x00000001u;
        }
    }
L_0013ef0c:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_0013ef10:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[9]);
    }
L_0013ef14:;
    {
        goto L_0013e9ac;
    }
L_0013ef18:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000188u, 0, 0);
    }
L_0013ef1c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0013ef20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0013ef24:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0013ef28:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_0013ef2c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0013ef30:;
    {
        wr32(cpu->r[3] + - 0x11cu, cpu->r[2]);
    }
L_0013ef34:;
    {
        goto L_0013e9ac;
    }
L_0013ef38:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0013ef3c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0013ef40:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0013ef44:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_0013ef48:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_0013ef4c:;
    {
        goto L_0013e9ac;
    }
L_0013ef50:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0013ef54:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0013ef58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_0013ef5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000002u;
        }
    }
L_0013ef60:;
    {
        goto L_0013e9ac;
    }
L_0013ef64:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0013ef68:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0013ef6c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0013ef70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_0013ef74:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_0013ef78:;
    {
        goto L_0013e9ac;
    }
L_0013ef7c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x74u);
    }
L_0013ef80:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0013ef84:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x70u);
    }
L_0013ef88:;
    {
        cpu->r[12] = 0x0000012eu;
    }
L_0013ef8c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_0013ef90:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0013ef94:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_0013ef98:;
    {
        cpu->r[14] = 0x0013ef9cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0013ef9c:;
    {
        goto L_0013ed4c;
    }
L_0013efa0:;
    {
        cpu->r[0] = 0x000000bcu;
    }
L_0013efa4:;
    {
        cpu->r[14] = 0x0013efa8u; fn_0018ba6c(cpu);
    }
L_0013efa8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0013efac:;
    {
        cpu->r[14] = 0x0013efb0u; fn_00146c9c(cpu);
    }
L_0013efb0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0013efb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f018;
        }
    }
L_0013efb8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0013efbc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0013efc0:;
    {
        cpu->r[14] = 0x0013efc4u; fn_00146c28(cpu);
    }
L_0013efc4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0013efc8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_0013efcc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0013efd0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0013efd4:;
    {
        wr32(cpu->r[8] + + 0xb4u, cpu->r[12]);
    }
L_0013efd8:;
    {
        cpu->r[8] = cpu->r[14];
    }
L_0013efdc:;
    {
        wr16(cpu->r[14] + - 0x2u, cpu->r[12]);
    }
L_0013efe0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0013efe4:;
    {
        cpu->r[0] = rd16(cpu->r[13] + + 0xc8u);
    }
L_0013efe8:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[12]);
    }
L_0013efec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0013eff0:;
    {
        cpu->r[14] = 0x0013eff4u; fn_00146b18(cpu);
    }
L_0013eff4:;
    {
        goto L_0013edf4;
    }
L_0013eff8:;
    {
        cpu->r[4] = (~0x00000020u);
    }
L_0013effc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0013f000:;
    {
        cpu->r[14] = 0x0013f004u; fn_00146988(cpu);
    }
L_0013f004:;
    {
        goto L_0013e7f4;
    }
L_0013f008:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_0013f00c:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_0013f010:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_0013f014:;
    {
        goto L_0013ebf8;
    }
L_0013f018:;
    {
        cpu->r[4] = (~0x00000001u);
    }
L_0013f01c:;
    {
        goto L_0013effc;
    }
L_0013f020:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0013f024:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0013f028:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_0013f02c:;
    {
        cpu->r[6] = cpu->r[12];
    }
L_0013f030:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0013f034:;
    {
        goto L_0013f0c4;
    }
L_0013f0b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013f0b4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0013f0b8:;
    {
        cpu->r[14] = 0x0013f0bcu; fn_00146b28(cpu);
    }
L_0013f0bc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0013f0c0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_0013f0c4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_0013f0c8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[14], 1, 1);
    }
L_0013f0cc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013f0b0;
        }
    }
L_0013f0d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013f0d4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0013f0d8:;
    {
        cpu->r[3] = rd32(0x0013f0e0u + - 0x54u);
    }
L_0013f0dc:;
    {
        cpu->r[11] = cpu->r[4];
    }
L_0013f0e0:;
    {
        cpu->r[2] = rd32(0x0013f0e8u + - 0x58u);
    }
L_0013f0e4:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_0013f0e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013f0f0u, cpu->r[3], 0, 0);
    }
L_0013f0ec:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x58u);
    }
L_0013f0f0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0013f0f8u, cpu->r[2], 0, 0);
    }
L_0013f0f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_0013f0f8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_0013f0fc:;
    {
        cpu->r[10] = cpu->r[4];
    }
L_0013f100:;
    {
        cpu->r[2] = rd32(0x0013f108u + - 0x74u);
    }
L_0013f104:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_0013f108:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_0013f10c:;
    {
        cpu->r[9] = cpu->r[4];
    }
L_0013f110:;
    {
        cpu->r[3] = rd32(0x0013f118u + - 0x80u);
    }
L_0013f114:;
    {
        cpu->r[2] = add_flags(cpu, 0x0013f11cu, cpu->r[2], 0, 0);
    }
L_0013f118:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[4]);
    }
L_0013f11c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013f124u, cpu->r[3], 0, 0);
    }
L_0013f120:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_0013f124:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_0013f128:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[4]);
    }
L_0013f12c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_0013f130:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_0013f134:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f218;
        }
    }
L_0013f138:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 1);
    }
L_0013f13c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f1f8;
        }
    }
L_0013f140:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013f190;
        }
    }
L_0013f144:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013f148:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013f1d4;
        }
    }
L_0013f14c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0013f150:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x4u);
    }
L_0013f154:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 1);
    }
L_0013f158:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f184;
        }
    }
L_0013f15c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0013f160:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0013f164:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0013f168:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_0013f16c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_0013f170:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_0013f174:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0013f178:;
    {
        cpu->r[12] = 0x0000018du;
    }
L_0013f17c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0013f180:;
    {
        cpu->r[14] = 0x0013f184u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0013f184:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0013f188:;
    {
        goto L_0013f12c;
    }
L_0013f18c:;
    {
        cpu->r[14] = 0x0013f190u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_0013f190:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001au, 1, 1);
    }
L_0013f194:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_0013f198:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f184;
        }
    }
L_0013f19c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001bu, 1, 1);
    }
L_0013f1a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = 0x00000004u;
        }
    }
L_0013f1a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f184;
        }
    }
L_0013f1a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000019u, 1, 1);
    }
L_0013f1ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013f184;
        }
    }
L_0013f1b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0013f1b4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0013f1b8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0013f1bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0013f1c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = 0x00000002u;
        }
    }
L_0013f1c4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x00000001u;
        }
    }
L_0013f1c8:;
    {
        cpu->r[9] = cpu->r[8];
    }
L_0013f1cc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[8]);
    }
L_0013f1d0:;
    {
        goto L_0013f12c;
    }
L_0013f1d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_0013f1d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013f184;
        }
    }
L_0013f1dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0013f1e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0013f1e4:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x4u);
    }
L_0013f1e8:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000002u, 1, 1);
    }
L_0013f1ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = 0x00000001u;
        }
    }
L_0013f1f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = 0x00000002u;
        }
    }
L_0013f1f4:;
    {
        goto L_0013f12c;
    }
L_0013f1f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0013f1fc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0013f200:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0013f204:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0013f208:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0013f20c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_0013f210:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_0013f214:;
    {
        goto L_0013f12c;
    }
L_0013f218:;
    {
        uint32_t v = cpu->r[7] ^ 0x00000001u; cpu->r[3] = v;
    }
L_0013f21c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0013f220:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] | 0x00000001u; cpu->r[3] = v;
        }
    }
L_0013f224:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013f228:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013f234;
        }
    }
L_0013f22c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0013f230:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f28c;
        }
    }
L_0013f234:;
    {
        uint32_t v = cpu->r[7] | cpu->r[11]; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_0013f238:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0013f23c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0013f240:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0013f244:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] | 0x00000001u; cpu->r[2] = v;
        }
    }
L_0013f248:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013f24c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f28c;
        }
    }
L_0013f250:;
    {
        uint32_t v = cpu->r[3] | cpu->r[10]; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_0013f254:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f28c;
        }
    }
L_0013f258:;
    {
        cpu->r[1] = rd32(0x0013f260u + - 0x1c4u);
    }
L_0013f25c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0013f260:;
    {
        cpu->r[12] = rd32(0x0013f268u + - 0x1c8u);
    }
L_0013f264:;
    {
        cpu->r[14] = 0x000001bbu;
    }
L_0013f268:;
    {
        cpu->r[2] = rd32(0x0013f270u + - 0x1ccu);
    }
L_0013f26c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0013f274u, cpu->r[1], 0, 0);
    }
L_0013f270:;
    {
        cpu->r[3] = rd32(0x0013f278u + - 0x1d0u);
    }
L_0013f274:;
    {
        cpu->r[12] = add_flags(cpu, 0x0013f27cu, cpu->r[12], 0, 0);
    }
L_0013f278:;
    {
        cpu->r[2] = add_flags(cpu, 0x0013f280u, cpu->r[2], 0, 0);
    }
L_0013f27c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000010u, 0, 0);
    }
L_0013f280:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013f288u, cpu->r[3], 0, 0);
    }
L_0013f284:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0013f288:;
    {
        cpu->r[14] = 0x0013f28cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0013f28c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013f290:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_0013f294:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x5cu);
    }
L_0013f298:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013f29c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013f2a0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 3u, &shc); cpu->r[3] = v;
    }
L_0013f2a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0013f2a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
        }
    }
L_0013f2ac:;
    {
        wr32(cpu->r[14] + + 0x104u, cpu->r[2]);
    }
L_0013f2b0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[14] + + 0x104u, cpu->r[3]);
        }
    }
L_0013f2b4:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0013f2b8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0013f2bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
        }
    }
L_0013f2c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[1] + + 0x104u);
        }
    }
L_0013f2c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
        }
    }
L_0013f2c8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[1] + + 0x104u, cpu->r[3]);
        }
    }
L_0013f2cc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013f2d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
        }
    }
L_0013f2d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[12] + + 0x104u);
        }
    }
L_0013f2d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
        }
    }
L_0013f2dc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12] + + 0x104u, cpu->r[3]);
        }
    }
L_0013f2e0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0013f2e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
        }
    }
L_0013f2e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[14] + + 0x104u);
        }
    }
L_0013f2ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
        }
    }
L_0013f2f0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[14] + + 0x104u, cpu->r[3]);
        }
    }
L_0013f2f4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0013f2f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013f2fc:;
    {
        wr32(cpu->r[0] + + 0x11cu, cpu->r[3]);
    }
L_0013f300:;
    {
        wr32(cpu->r[0] + + 0x118u, cpu->r[3]);
    }
L_0013f304:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f434;
        }
    }
L_0013f308:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0013f30c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[5]; cpu->r[3] = v;
    }
L_0013f310:;
    {
        uint32_t v = cpu->r[3] * cpu->r[7]; cpu->r[2] = v;
    }
L_0013f314:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_0013f318:;
    {
        uint32_t v = cpu->r[2] & ~ 0x00000003u; cpu->r[2] = v;
    }
L_0013f31c:;
    {
        wr32(cpu->r[0] + + 0x11cu, cpu->r[2]);
    }
L_0013f320:;
    {
        uint32_t v = cpu->r[3] * cpu->r[11] + cpu->r[2]; cpu->r[0] = v;
    }
L_0013f324:;
    {
        cpu->r[14] = 0x0013f328u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013f328:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013f32c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013f330:;
    {
        wr32(cpu->r[2] + + 0x108u, cpu->r[0]);
    }
L_0013f334:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = (~0x00000027u);
        }
    }
L_0013f338:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013e7f4;
        }
    }
L_0013f33c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013f340:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x104u);
    }
L_0013f344:;
    {
        uint32_t v = cpu->r[0] * cpu->r[5]; cpu->r[0] = v;
    }
L_0013f348:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000003u, 0, 0);
    }
L_0013f34c:;
    {
        cpu->r[14] = 0x0013f350u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013f350:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013f354:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013f358:;
    {
        wr32(cpu->r[12] + + 0x10cu, cpu->r[0]);
    }
L_0013f35c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = (~0x00000028u);
        }
    }
L_0013f360:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013e7f4;
        }
    }
L_0013f364:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_0013f368:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0013f36c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000018u;
        }
    }
L_0013f370:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000000cu;
        }
    }
L_0013f374:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_0013f378:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_0013f37c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x0000000cu;
        }
    }
L_0013f380:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013f384:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_0013f388:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0013f38c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0013f390:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x0000000cu;
        }
    }
L_0013f394:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0013f398:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013f39c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_0013f3a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000004u;
        }
    }
L_0013f3a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0013f3a8:;
    {
        wr32(cpu->r[14] + + 0x124u, cpu->r[0]);
    }
L_0013f3ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_0013f3b0:;
    {
        cpu->r[0] = rd32(cpu->r[14] + + 0x5cu);
    }
L_0013f3b4:;
    {
        wr32(cpu->r[14] + + 0x14cu, cpu->r[3]);
    }
L_0013f3b8:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_0013f3bc:;
    {
        wr32(cpu->r[14] + + 0x148u, cpu->r[3]);
    }
L_0013f3c0:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_0013f3c4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013f3c8:;
    {
        wr32(cpu->r[14] + + 0x150u, cpu->r[12]);
    }
L_0013f3cc:;
    {
        wr32(cpu->r[14] + + 0x120u, cpu->r[2]);
    }
L_0013f3d0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0013f3d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0013f3d8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013f44c;
        }
    }
L_0013f3dc:;
    {
        wr32(cpu->r[3] + + 0x124u, cpu->r[1]);
    }
L_0013f3e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0013f3e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_0013f3e8:;
    {
        goto L_0013f3d0;
    }
L_0013f3ec:;
    {
        cpu->r[4] = (~0x0000006eu);
    }
L_0013f3f0:;
    {
        goto L_0013e7f4;
    }
L_0013f3f4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_0013f3f8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x58u);
    }
L_0013f3fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0013f400:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[3]);
    }
L_0013f404:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000030u, 0, 0);
    }
L_0013f408:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[8]);
    }
L_0013f40c:;
    {
        goto L_0013ea5c;
    }
L_0013f410:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013f414:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x88u);
    }
L_0013f418:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x50u);
    }
L_0013f41c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0013f420:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0013f424:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000005cu, 0, 0);
    }
L_0013f428:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[1]);
    }
L_0013f42c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[2]);
    }
L_0013f430:;
    {
        goto L_0013e854;
    }
L_0013f434:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013f438:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000003u, 0, 0);
    }
L_0013f43c:;
    {
        uint32_t v = cpu->r[0] & ~ 0x00000003u; cpu->r[0] = v;
    }
L_0013f440:;
    {
        wr32(cpu->r[1] + + 0x11cu, cpu->r[0]);
    }
L_0013f444:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_0013f448:;
    {
        goto L_0013f324;
    }
L_0013f44c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013f450:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013f454:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_0013f458:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x000000c0u, 0, 0);
    }
L_0013f45c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013f460:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0013f468u + - 0x3bcu);
    }
L_0013f464:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x108u);
    }
L_0013f468:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x118u);
    }
L_0013f46c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x11cu);
    }
L_0013f470:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0013f474:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[12]);
    }
L_0013f478:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0013f47c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_0013f480:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_0013f484:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[8]);
    }
L_0013f488:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[9]);
    }
L_0013f48c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x30u);
    }
L_0013f490:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0013f494:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[12], 1, 1);
    }
L_0013f498:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013f838;
        }
    }
L_0013f49c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_0013f4a0:;
    {
        cpu->r[9] = 0x00000003u;
    }
L_0013f4a4:;
    {
        cpu->r[7] = 0x0000000cu;
    }
L_0013f4a8:;
    {
        cpu->r[5] = rd32(cpu->r[14]);
    }
L_0013f4ac:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0013f4b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f81c;
        }
    }
L_0013f4b4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0013f4b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xb4u);
    }
L_0013f4bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f7c4;
        }
    }
L_0013f4c0:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x1au);
    }
L_0013f4c4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0013f4c8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0013f4cc:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0013f4d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_0013f4d4:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_0013f4d8:;
    {
        cpu->r[1] = rd16(cpu->r[5]);
    }
L_0013f4dc:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_0013f4e0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x10cu);
    }
L_0013f4e4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x104u);
    }
L_0013f4e8:;
    {
        uint32_t v = cpu->r[9] * cpu->r[1]; cpu->r[1] = v;
    }
L_0013f4ec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x120u);
    }
L_0013f4f0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3] + cpu->r[12]; cpu->r[6] = v;
    }
L_0013f4f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x64u);
    }
L_0013f4f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_0013f4fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0013f500:;
    {
        cpu->r[14] = 0x0013f504u; imp_memcpy(cpu); /* memcpy */
    }
L_0013f504:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013f508:;
    {
        cpu->r[1] = rd16(cpu->r[5]);
    }
L_0013f50c:;
    {
        cpu->r[14] = 0x0013f510u; fn_0013dad4(cpu);
    }
L_0013f510:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013f514:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f53c;
        }
    }
L_0013f518:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013f51c:;
    {
        cpu->r[14] = 0x0013f520u; fn_0013e734(cpu);
    }
L_0013f520:;
    {
        cpu->r[2] = rd16(cpu->r[5]);
    }
L_0013f524:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x120u);
    }
L_0013f528:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x64u);
    }
L_0013f52c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[2]; cpu->r[2] = v;
    }
L_0013f530:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[1], 0, 0);
    }
L_0013f534:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0013f538:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[3]);
        wr32(ea + 8u, cpu->r[7]);
    }
L_0013f53c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_0013f540:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0013f544:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013f768;
        }
    }
L_0013f548:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_0013f54c:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_0013f550:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013f700;
        }
    }
L_0013f554:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_0013f558:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013f55c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013f698;
        }
    }
L_0013f560:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0013f564:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013f568:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013f624;
        }
    }
L_0013f56c:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_0013f570:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_0013f574:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[11]);
    }
L_0013f578:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[10]);
    }
L_0013f57c:;
    {
        goto L_0013f594;
    }
L_0013f580:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0013f584:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0013f588:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000002u, 0, 0);
    }
L_0013f58c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_0013f590:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_0013f594:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5cu);
    }
L_0013f598:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0013f59c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0013f5a0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013f60c;
        }
    }
L_0013f5a4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], cpu->r[11], 0, 0);
    }
L_0013f5a8:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x80u);
    }
L_0013f5ac:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_0013f5b0:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x128u);
    }
L_0013f5b4:;
    {
        cpu->r[1] = rd16(cpu->r[10] + + 0x2u);
    }
L_0013f5b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_0013f5bc:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[3]; cpu->r[1] = v;
    }
L_0013f5c0:;
    {
        cpu->r[14] = 0x0013f5c4u; imp_memcpy(cpu); /* memcpy */
    }
L_0013f5c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013f5c8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0013f5cc:;
    {
        cpu->r[2] = rd16(cpu->r[10] + + 0x2u);
    }
L_0013f5d0:;
    {
        cpu->r[14] = 0x0013f5d4u; fn_0013db74(cpu);
    }
L_0013f5d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013f5d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f580;
        }
    }
L_0013f5dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013f5e0:;
    {
        cpu->r[14] = 0x0013f5e4u; fn_0013e734(cpu);
    }
L_0013f5e4:;
    {
        cpu->r[1] = rd16(cpu->r[10] + + 0x2u);
    }
L_0013f5e8:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x80u);
    }
L_0013f5ec:;
    {
        cpu->r[12] = 0x00000008u;
    }
L_0013f5f0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x128u);
    }
L_0013f5f4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[12] + cpu->r[2]; cpu->r[2] = v;
    }
L_0013f5f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_0013f5fc:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_0013f600:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0013f604:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0013f608:;
    {
        goto L_0013f580;
    }
L_0013f60c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0013f610:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0013f614:;
    {
        cpu->r[14] = 0x0013f618u; fn_00146b98(cpu);
    }
L_0013f618:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0013f61c:;
    {
        cpu->r[5] = rd32(cpu->r[1]);
    }
L_0013f620:;
    {
        goto L_0013f4ac;
    }
L_0013f624:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_0013f628:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_0013f62c:;
    {
        cpu->r[1] = rd16(cpu->r[5] + + 0x12u);
    }
L_0013f630:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_0013f634:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_0013f638:;
    {
        wr32(cpu->r[13] + + 0xc0u, cpu->r[12]);
    }
L_0013f63c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[1] + cpu->r[3]; cpu->r[1] = v;
    }
L_0013f640:;
    {
        cpu->r[14] = 0x0013f644u; imp_memcpy(cpu); /* memcpy */
    }
L_0013f644:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013f648:;
    {
        cpu->r[1] = rd16(cpu->r[5] + + 0x12u);
    }
L_0013f64c:;
    {
        cpu->r[14] = 0x0013f650u; fn_0013db24(cpu);
    }
L_0013f650:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013f654:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f680;
        }
    }
L_0013f658:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013f65c:;
    {
        cpu->r[14] = 0x0013f660u; fn_0013e734(cpu);
    }
L_0013f660:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x6cu);
    }
L_0013f664:;
    {
        cpu->r[1] = rd16(cpu->r[5] + + 0x12u);
    }
L_0013f668:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x124u);
    }
L_0013f66c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[1] + cpu->r[2]; cpu->r[2] = v;
    }
L_0013f670:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_0013f674:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[9]);
    }
L_0013f678:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0013f67c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0013f680:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x124u);
    }
L_0013f684:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0013f688:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_0013f68c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_0013f690:;
    {
        cpu->r[14] = 0x0013f694u; imp_memcpy(cpu); /* memcpy */
    }
L_0013f694:;
    {
        goto L_0013f56c;
    }
L_0013f698:;
    {
        cpu->r[3] = rd16(cpu->r[5] + + 0x18u);
    }
L_0013f69c:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_0013f6a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x150u);
    }
L_0013f6a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0013f6a8:;
    {
        uint32_t v = cpu->r[7] * cpu->r[3]; cpu->r[3] = v;
    }
L_0013f6ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_0013f6b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_0013f6b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_0013f6b8:;
    {
        cpu->r[14] = 0x0013f6bcu; imp_memcpy(cpu); /* memcpy */
    }
L_0013f6bc:;
    {
        cpu->r[1] = rd16(cpu->r[5] + + 0x18u);
    }
L_0013f6c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013f6c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_0013f6c8:;
    {
        cpu->r[14] = 0x0013f6ccu; fn_0013dc1c(cpu);
    }
L_0013f6cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013f6d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f560;
        }
    }
L_0013f6d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013f6d8:;
    {
        cpu->r[14] = 0x0013f6dcu; fn_0013e734(cpu);
    }
L_0013f6dc:;
    {
        cpu->r[2] = rd16(cpu->r[5] + + 0x18u);
    }
L_0013f6e0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x150u);
    }
L_0013f6e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0013f6e8:;
    {
        uint32_t v = cpu->r[7] * cpu->r[2]; cpu->r[2] = v;
    }
L_0013f6ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[1], 0, 0);
    }
L_0013f6f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000018u, 0, 0);
    }
L_0013f6f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0013f6f8:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[3]);
        wr32(ea + 8u, cpu->r[7]);
    }
L_0013f6fc:;
    {
        goto L_0013f560;
    }
L_0013f700:;
    {
        cpu->r[1] = rd16(cpu->r[5] + + 0x16u);
    }
L_0013f704:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_0013f708:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0013f70c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14cu);
    }
L_0013f710:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0013f714:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_0013f718:;
    {
        uint32_t v = cpu->r[7] * cpu->r[1] + cpu->r[3]; cpu->r[1] = v;
    }
L_0013f71c:;
    {
        cpu->r[14] = 0x0013f720u; imp_memcpy(cpu); /* memcpy */
    }
L_0013f720:;
    {
        cpu->r[1] = rd16(cpu->r[5] + + 0x16u);
    }
L_0013f724:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013f728:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0013f72c:;
    {
        cpu->r[14] = 0x0013f730u; fn_0013dc1c(cpu);
    }
L_0013f730:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013f734:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f554;
        }
    }
L_0013f738:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013f73c:;
    {
        cpu->r[14] = 0x0013f740u; fn_0013e734(cpu);
    }
L_0013f740:;
    {
        cpu->r[1] = rd16(cpu->r[5] + + 0x16u);
    }
L_0013f744:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0013f748:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0013f74c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14cu);
    }
L_0013f750:;
    {
        uint32_t v = cpu->r[7] * cpu->r[1] + cpu->r[2]; cpu->r[2] = v;
    }
L_0013f754:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_0013f758:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[7]);
    }
L_0013f75c:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0013f760:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0013f764:;
    {
        goto L_0013f554;
    }
L_0013f768:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0013f76c:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_0013f770:;
    {
        cpu->r[1] = rd16(cpu->r[5] + + 0x14u);
    }
L_0013f774:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x148u);
    }
L_0013f778:;
    {
        uint32_t v = cpu->r[7] * cpu->r[1] + cpu->r[3]; cpu->r[1] = v;
    }
L_0013f77c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_0013f780:;
    {
        cpu->r[14] = 0x0013f784u; imp_memcpy(cpu); /* memcpy */
    }
L_0013f784:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013f788:;
    {
        cpu->r[1] = rd16(cpu->r[5] + + 0x14u);
    }
L_0013f78c:;
    {
        cpu->r[14] = 0x0013f790u; fn_0013dbcc(cpu);
    }
L_0013f790:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013f794:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f548;
        }
    }
L_0013f798:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013f79c:;
    {
        cpu->r[14] = 0x0013f7a0u; fn_0013e734(cpu);
    }
L_0013f7a0:;
    {
        cpu->r[1] = rd16(cpu->r[5] + + 0x14u);
    }
L_0013f7a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0013f7a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x148u);
    }
L_0013f7ac:;
    {
        uint32_t v = cpu->r[7] * cpu->r[1] + cpu->r[2]; cpu->r[2] = v;
    }
L_0013f7b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_0013f7b4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[7]);
    }
L_0013f7b8:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0013f7bc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0013f7c0:;
    {
        goto L_0013f548;
    }
L_0013f7c4:;
    {
        cpu->r[8] = 0x0000001eu;
    }
L_0013f7c8:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_0013f7cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013f7d0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0013f7d4:;
    {
        uint32_t v = cpu->r[8] * cpu->r[3]; cpu->r[14] = v;
    }
L_0013f7d8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0013f7dc:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0013f7e0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], cpu->r[14], 0, 0);
    }
L_0013f7e4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x38u);
    }
L_0013f7e8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[8], shifter(cpu->r[14], 2, 2u, &shc), 0, 0);
    }
L_0013f7ec:;
    {
        cpu->r[8] = rd8(cpu->r[12] + + 0x1bu);
    }
L_0013f7f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0013f7f4:;
    {
        wr8(cpu->r[6] + cpu->r[2], cpu->r[8]);
    }
L_0013f7f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0013f7fc:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000001eu, 1, 1);
    }
L_0013f800:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x3cu);
    }
L_0013f804:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0013f808:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0013f80c:;
    {
        wr32(cpu->r[14] + cpu->r[1], cpu->r[8]);
    }
L_0013f810:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0013f814:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013f7ec;
        }
    }
L_0013f818:;
    {
        goto L_0013f4d8;
    }
L_0013f81c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_0013f820:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0013f824:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0013f828:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_0013f82c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0013f830:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0013f834:;
    {
        goto L_0013f48c;
    }
L_0013f838:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0013f83c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013f840:;
    {
        cpu->r[14] = 0x0013f844u; imp_free(cpu); /* free */
    }
L_0013f844:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013f848:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0013f84c:;
    {
        cpu->r[11] = cpu->r[5];
    }
L_0013f850:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_0013f854:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_0013f858:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013f8f8;
        }
    }
L_0013f85c:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x20u);
    }
L_0013f860:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0013f864:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0013f868:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0013f86c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_0013f870:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0013f874:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_0013f878:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_0013f87c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0013f880:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1cu);
    }
L_0013f884:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_0013f888:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013fa5c;
        }
    }
L_0013f88c:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x20u);
    }
L_0013f890:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0013f894:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_0013f898:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_0013f89c:;
    {
        goto L_0013f8e0;
    }
L_0013f8a0:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x10u);
    }
L_0013f8a4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0013f8a8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0013f8ac:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[7], 0, 0);
    }
L_0013f8b0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_0013f8b4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0013f8b8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0013f8bc:;
    {
        cpu->r[14] = 0x0013f8c0u; fn_00138d20(cpu);
    }
L_0013f8c0:;
    {
        cpu->r[0] = rd32(cpu->r[9] + + 0x30u);
    }
L_0013f8c4:;
    {
        cpu->r[12] = rd32(cpu->r[9] + + 0x2cu);
    }
L_0013f8c8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000038u, 0, 0);
    }
L_0013f8cc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0013f8d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013f8d4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_0013f8d8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0013f8dc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[0], 0, 0);
    }
L_0013f8e0:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xcu);
    }
L_0013f8e4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 1);
    }
L_0013f8e8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013f8a0;
        }
    }
L_0013f8ec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0013f8f0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
    }
L_0013f8f4:;
    {
        goto L_0013f880;
    }
L_0013f8f8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[0] = v;
    }
L_0013f8fc:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0013f900:;
    {
        cpu->r[14] = 0x0013f904u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013f904:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013f908:;
    {
        wr32(cpu->r[1] + + 0x114u, cpu->r[4]);
    }
L_0013f90c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013f910:;
    {
        wr32(cpu->r[1] + + 0x110u, cpu->r[0]);
    }
L_0013f914:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = (~0x00000036u);
        }
    }
L_0013f918:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013e7f4;
        }
    }
L_0013f91c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013f920:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x154u);
    }
L_0013f924:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013f928:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013f93c;
        }
    }
L_0013f92c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013f930:;
    {
        cpu->r[14] = 0x0013f934u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013f934:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013f938:;
    {
        wr32(cpu->r[3] + + 0x154u, cpu->r[0]);
    }
L_0013f93c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013f940:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_0013f944:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_0013f948:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013f94c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0013f950:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4u);
    }
L_0013f954:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0013f958:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013fa54;
        }
    }
L_0013f95c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013f960:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0013f964:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_0013f968:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[5]);
    }
L_0013f96c:;
    {
        cpu->r[8] = rd32(cpu->r[12] + + 0x20u);
    }
L_0013f970:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_0013f974:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x1cu);
    }
L_0013f978:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0013f97c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013fa3c;
        }
    }
L_0013f980:;
    {
        cpu->r[11] = rd32(cpu->r[8] + + 0x20u);
    }
L_0013f984:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013f988:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_0013f98c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[6], 0, 0);
    }
L_0013f990:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[11] + + 0xcu);
    }
L_0013f994:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_0013f998:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013fa30;
        }
    }
L_0013f99c:;
    {
        cpu->r[4] = rd32(cpu->r[11] + + 0x10u);
    }
L_0013f9a0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013f9a4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_0013f9a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0013f9ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_0013f9b0:;
    {
        cpu->r[0] = rd32(cpu->r[14] + + 0x110u);
    }
L_0013f9b4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x28u);
    }
L_0013f9b8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0013f9bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_0013f9c0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0013f9c4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0013f9c8:;
    {
        cpu->r[14] = 0x0013f9ccu; imp_memcpy(cpu); /* memcpy */
    }
L_0013f9cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_0013f9d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013f9d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013f9e4;
        }
    }
L_0013f9d8:;
    {
        cpu->r[14] = 0x0013f9dcu; fn_0018ba60(cpu);
    }
L_0013f9dc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013f9e0:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[0]);
    }
L_0013f9e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0013f9e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013f9ec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013fa1c;
        }
    }
L_0013f9f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013f9f4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x30u);
    }
L_0013f9f8:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0013f9fc:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0013fa00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0013fa04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_0013fa08:;
    {
        wr32(cpu->r[1] + cpu->r[3], cpu->r[0]);
    }
L_0013fa0c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0013fa10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0013fa14:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0013fa18:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013f9fc;
        }
    }
L_0013fa1c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0013fa20:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0013fa24:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000038u, 0, 0);
    }
L_0013fa28:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[1], 0, 0);
    }
L_0013fa2c:;
    {
        goto L_0013f990;
    }
L_0013fa30:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0013fa34:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
    }
L_0013fa38:;
    {
        goto L_0013f974;
    }
L_0013fa3c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0013fa40:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x20u);
    }
L_0013fa44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0013fa48:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0013fa4c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000005cu, 0, 0);
    }
L_0013fa50:;
    {
        goto L_0013f948;
    }
L_0013fa54:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0013fa58:;
    {
        goto L_0013e7f4;
    }
L_0013fa5c:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_0013fa60:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_0013fa64:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_0013fa68:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000005cu, 0, 0);
    }
L_0013fa6c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0013fa70:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0013fa74:;
    {
        goto L_0013f850;
    }
}

/* _ZN9AniObj_v410EvalMorphsEP11gxAnimationf @ 0013fa78 (arm) */
void fn_0013fa78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013fa78:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0xb0u);
    }
L_0013fa7c:;
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
L_0013fa80:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0013fa84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013fa88:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_0013fa8c:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0013fa90:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0013fa94:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0xc8u);
    }
L_0013fa98:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0013fa9c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013fb10;
        }
    }
L_0013faa0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013faa4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0013faa8:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_0013faac:;
    {
        cpu->r[10] = 0x0000000cu;
    }
L_0013fab0:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_0013fab4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0013fab8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_0013fabc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0013fac0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013fac4:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x2u);
    }
L_0013fac8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 1, 1u, &shc), 0, 0);
    }
L_0013facc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[3], 1, 1u, &shc));
        }
    }
L_0013fad0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4]);
        }
    }
L_0013fad4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[4]);
        }
    }
L_0013fad8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0013fadc:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0013fae0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0013fae4:;
    {
        cpu->r[14] = 0x0013fae8u; guest_call(cpu, cpu->r[12]);
    }
L_0013fae8:;
    {
        cpu->r[3] = rd16(cpu->r[7] + cpu->r[5]);
    }
L_0013faec:;
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
L_0013faf0:;
    {
        cpu->r[12] = rd32(cpu->r[9] + + 0x64u);
    }
L_0013faf4:;
    {
        cpu->r[3] = (uint32_t)((int32_t)(int16_t)(cpu->r[3] & 0xffff) * (int32_t)(int16_t)(cpu->r[10] & 0xffff));
    }
L_0013faf8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0013fafc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0013fb00:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0013fb04:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[9] + + 0xb0u);
    }
L_0013fb08:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_0013fb0c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013fab4;
        }
    }
L_0013fb10:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x5cu);
    }
L_0013fb14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013fb18:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013fbd0;
        }
    }
L_0013fb1c:;
    {
        cpu->r[7] = cpu->r[9];
    }
L_0013fb20:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[9], 0x000000b4u, 0, 0);
    }
L_0013fb24:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_0013fb28:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0013fb2c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x8u);
    }
L_0013fb30:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013fb34:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0013fb38:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[11]);
    }
L_0013fb3c:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0xd0u);
    }
L_0013fb40:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013fb44:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013fbb0;
        }
    }
L_0013fb48:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013fb4c:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0013fb50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0013fb54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_0013fb58:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0013fb5c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013fb60:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x2u);
    }
L_0013fb64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 1, 1u, &shc), 0, 0);
    }
L_0013fb68:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[3], 1, 1u, &shc));
        }
    }
L_0013fb6c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4]);
        }
    }
L_0013fb70:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[4]);
        }
    }
L_0013fb74:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0013fb78:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0013fb7c:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0013fb80:;
    {
        cpu->r[14] = 0x0013fb84u; guest_call(cpu, cpu->r[12]);
    }
L_0013fb84:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[8] + cpu->r[5]);
    }
L_0013fb88:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x80u);
    }
L_0013fb8c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0013fb90:;
    {
        uint32_t base = cpu->r[10];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0013fb94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_0013fb98:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_0013fb9c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[11]);
    }
L_0013fba0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0013fba4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013fb50;
        }
    }
L_0013fba8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0013fbac:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x5cu);
    }
L_0013fbb0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0013fbb4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0013fbb8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000002u, 0, 0);
    }
L_0013fbbc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0013fbc0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0013fbc4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0013fbc8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013fb38;
        }
    }
L_0013fbcc:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_0013fbd0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[9] + + 0xb2u);
    }
L_0013fbd4:;
    {
        cpu->r[8] = rd32(cpu->r[9] + + 0xccu);
    }
L_0013fbd8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013fbdc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013fcb4;
        }
    }
L_0013fbe0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013fbe4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0013fbe8:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_0013fbec:;
    {
        cpu->r[11] = 0x00000003u;
    }
L_0013fbf0:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_0013fbf4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0013fbf8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_0013fbfc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0013fc00:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013fc04:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x2u);
    }
L_0013fc08:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 1, 1u, &shc), 0, 0);
    }
L_0013fc0c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[3], 1, 1u, &shc));
        }
    }
L_0013fc10:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4]);
        }
    }
L_0013fc14:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[4]);
        }
    }
L_0013fc18:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0013fc1c:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0013fc20:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0013fc24:;
    {
        cpu->r[14] = 0x0013fc28u; guest_call(cpu, cpu->r[12]);
    }
L_0013fc28:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013fc2c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013fc30:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x437fu << 16);
    }
L_0013fc34:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013fc38:;
    {
        cpu->r[14] = 0x0013fc3cu; fn_000963c0(cpu);
    }
L_0013fc3c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013fc40:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013fc44:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x437fu << 16);
    }
L_0013fc48:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[0];
    }
L_0013fc4c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0013fc50:;
    {
        cpu->r[14] = 0x0013fc54u; fn_000963c0(cpu);
    }
L_0013fc54:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013fc58:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013fc5c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x437fu << 16);
    }
L_0013fc60:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_0013fc64:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,17);
    }
L_0013fc68:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_0013fc6c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0013fc70:;
    {
        cpu->r[14] = 0x0013fc74u; fn_000963c0(cpu);
    }
L_0013fc74:;
    {
        cpu->r[2] = rd16(cpu->r[8] + cpu->r[5]);
    }
L_0013fc78:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_0013fc7c:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x6cu);
    }
L_0013fc80:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0013fc84:;
    {
        cpu->r[2] = (uint32_t)((int32_t)(int16_t)(cpu->r[2] & 0xffff) * (int32_t)(int16_t)(cpu->r[11] & 0xffff));
    }
L_0013fc88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0013fc8c:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0013fc90:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[6]);
    }
L_0013fc94:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[12]);
    }
L_0013fc98:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0013fc9c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0013fca0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0013fca4:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[0]);
    }
L_0013fca8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[9] + + 0xb2u);
    }
L_0013fcac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0013fcb0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013fbf4;
        }
    }
L_0013fcb4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[9] + + 0xc4u);
    }
L_0013fcb8:;
    {
        cpu->r[7] = rd32(cpu->r[9] + + 0xf0u);
    }
L_0013fcbc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013fcc0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013fd34;
        }
    }
L_0013fcc4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013fcc8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_0013fccc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0013fcd0:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_0013fcd4:;
    {
        cpu->r[10] = 0x0000000cu;
    }
L_0013fcd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0013fcdc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_0013fce0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0013fce4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013fce8:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x2u);
    }
L_0013fcec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 1, 1u, &shc), 0, 0);
    }
L_0013fcf0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[3], 1, 1u, &shc));
        }
    }
L_0013fcf4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4]);
        }
    }
L_0013fcf8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[4]);
        }
    }
L_0013fcfc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0013fd00:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0013fd04:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0013fd08:;
    {
        cpu->r[14] = 0x0013fd0cu; guest_call(cpu, cpu->r[12]);
    }
L_0013fd0c:;
    {
        cpu->r[3] = rd16(cpu->r[7] + cpu->r[5]);
    }
L_0013fd10:;
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
L_0013fd14:;
    {
        cpu->r[12] = rd32(cpu->r[9] + + 0xa4u);
    }
L_0013fd18:;
    {
        cpu->r[3] = (uint32_t)((int32_t)(int16_t)(cpu->r[3] & 0xffff) * (int32_t)(int16_t)(cpu->r[10] & 0xffff));
    }
L_0013fd1c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0013fd20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0013fd24:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0013fd28:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[9] + + 0xc4u);
    }
L_0013fd2c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_0013fd30:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013fcd8;
        }
    }
L_0013fd34:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[9] + + 0xc6u);
    }
L_0013fd38:;
    {
        cpu->r[7] = rd32(cpu->r[9] + + 0xf4u);
    }
L_0013fd3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013fd40:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013fdb4;
        }
    }
L_0013fd44:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013fd48:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_0013fd4c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0013fd50:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_0013fd54:;
    {
        cpu->r[10] = 0x0000000cu;
    }
L_0013fd58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0013fd5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_0013fd60:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0013fd64:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013fd68:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x2u);
    }
L_0013fd6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 1, 1u, &shc), 0, 0);
    }
L_0013fd70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[3], 1, 1u, &shc));
        }
    }
L_0013fd74:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4]);
        }
    }
L_0013fd78:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[4]);
        }
    }
L_0013fd7c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0013fd80:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0013fd84:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0013fd88:;
    {
        cpu->r[14] = 0x0013fd8cu; guest_call(cpu, cpu->r[12]);
    }
L_0013fd8c:;
    {
        cpu->r[3] = rd16(cpu->r[7] + cpu->r[5]);
    }
L_0013fd90:;
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
L_0013fd94:;
    {
        cpu->r[12] = rd32(cpu->r[9] + + 0xacu);
    }
L_0013fd98:;
    {
        cpu->r[3] = (uint32_t)((int32_t)(int16_t)(cpu->r[3] & 0xffff) * (int32_t)(int16_t)(cpu->r[10] & 0xffff));
    }
L_0013fd9c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0013fda0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0013fda4:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0013fda8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[9] + + 0xc6u);
    }
L_0013fdac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_0013fdb0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013fd58;
        }
    }
L_0013fdb4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0013fdb8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0013fdbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0013fdc0u)) return;
    }
}

/* _ZN9AniMgr_v410EvalMorphsEv @ 0013fdc0 (arm) */
void fn_0013fdc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013fdc0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013fdc4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0013fdc8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_0013fdcc:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0013fdd0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x14u);
    }
L_0013fdd4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x48u);
    }
L_0013fdd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0013fddc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_0013fde0:;
    {
        return fn_0013fa78(cpu);
    }
}

/* _ZN9AniObj_v423UpdateSphericalTexCoordEP7CMatrixPiiff @ 0013fde4 (arm) */
void fn_0013fde4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013fde4:;
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
L_0013fde8:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_0013fdec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000010cu, 1, 0);
    }
L_0013fdf0:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[13] + + 0x140u);
    }
L_0013fdf4:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x10cu);
    }
L_0013fdf8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013fdfc:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[2]);
    }
L_0013fe00:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[13] + + 0x144u);
    }
L_0013fe04:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x110u);
    }
L_0013fe08:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_0013fe0c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013fe10:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
        }
    }
L_0013fe14:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_0013fe18:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0013fe1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013fef4;
        }
    }
L_0013fe20:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x154u);
    }
L_0013fe24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013fe28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013fef4;
        }
    }
L_0013fe2c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x5cu);
    }
L_0013fe30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0013fe34:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013fef4;
        }
    }
L_0013fe38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_0013fe3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_0013fe40:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0013fe44:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0013fe48:;
    {
        wr32(cpu->r[13] + + 0xccu, cpu->r[6]);
    }
L_0013fe4c:;
    {
        cpu->r[14] = 0x0013fe50u; fn_00153624(cpu);
    }
L_0013fe50:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0013fe54:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[6]);
    }
L_0013fe58:;
    {
        cpu->r[14] = 0x0013fe5cu; fn_00153624(cpu);
    }
L_0013fe5c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013fe60:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_0013fe64:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0013fe68:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0013fe6c:;
    {
        cpu->r[14] = 0x0013fe70u; fn_0015364c(cpu);
    }
L_0013fe70:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x120u);
    }
L_0013fe74:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x148u);
    }
L_0013fe78:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5cu);
    }
L_0013fe7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_0013fe80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_0013fe84:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_0013fe88:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0013fe8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000000d0u, 0, 0);
    }
L_0013fe90:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0013fe94:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_0013fe98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0013fe9c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013ff00;
        }
    }
L_0013fea0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x124u);
    }
L_0013fea4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_0013fea8:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[0]);
    }
L_0013feac:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0013feb0:;
    {
        goto L_0013fe94;
    }
L_0013feb4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x88u);
    }
L_0013feb8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0013febc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013fed8;
        }
    }
L_0013fec0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013fec4:;
    {
        cpu->r[14] = 0x0013fec8u; fn_000b2bc8(cpu);
    }
L_0013fec8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013fecc:;
    {
        cpu->r[14] = 0x0013fed0u; fn_0018ba20(cpu);
    }
L_0013fed0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013fed4:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[3]);
    }
L_0013fed8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xccu);
    }
L_0013fedc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0013fee0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013fef4;
        }
    }
L_0013fee4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013fee8:;
    {
        cpu->r[14] = 0x0013feecu; fn_000b2bc8(cpu);
    }
L_0013feec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013fef0:;
    {
        cpu->r[14] = 0x0013fef4u; fn_0018ba20(cpu);
    }
L_0013fef4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000010cu, 0, 0);
    }
L_0013fef8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_0013fefc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0013ff00u)) return;
    }
L_0013ff00:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xd4u);
    }
L_0013ff04:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013ff08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000000fcu, 0, 0);
    }
L_0013ff0c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_0013ff10:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0013ff14:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0013ff1cu + + 0x2ccu);
    }
L_0013ff18:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_0013ff1c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_0013ff20:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0013ff24:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013feb4;
        }
    }
L_0013ff28:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_0013ff2c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_0013ff30:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0013ff34:;
    {
        cpu->r[1] = 0x0000005cu;
    }
L_0013ff38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_0013ff3c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_0013ff40:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_0013ff44:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1cu);
    }
L_0013ff48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013ff4c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001401d8;
        }
    }
L_0013ff50:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013ff54:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x0013ff5cu + + 0x290u);
    }
L_0013ff58:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_0013ff5c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_0013ff60:;
    {
        goto L_0013ff8c;
    }
L_0013ff64:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_0013ff68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013ffb0;
        }
    }
L_0013ff6c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_0013ff70:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_0013ff74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0013ff78:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_0013ff7c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0013ff80:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_0013ff84:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_0013ff88:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001401d8;
        }
    }
L_0013ff8c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0013ff90:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x20u);
    }
L_0013ff94:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_0013ff98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_0013ff9c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_0013ffa0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_0013ffa4:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x8u);
    }
L_0013ffa8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 1);
    }
L_0013ffac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013ff64;
        }
    }
L_0013ffb0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0013ffb4:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0xcu);
    }
L_0013ffb8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013ffbc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013ff6c;
        }
    }
L_0013ffc0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013ffc4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000f0u, 0, 0);
    }
L_0013ffc8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0013ffcc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_0013ffd0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_0013ffd4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0013ffd8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x10u);
    }
L_0013ffdc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0013ffe0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0013ffe4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0013ffe8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x2cu);
    }
L_0013ffec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013fff0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001401ac;
        }
    }
L_0013fff4:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_0013fff8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0013fffc:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00140000:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00140004:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xfcu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00140008:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x100u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0014000c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x104u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00140010:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xf0u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00140014:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xf4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00140018:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x30u);
    }
L_0014001c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xf8u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00140020:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_00140024:;
    {
        cpu->r[8] = rd32(cpu->r[2] + shifter(cpu->r[11], 2, 2u, &shc));
    }
L_00140028:;
    {
        cpu->r[9] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0014002c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[8], 1, 0);
    }
L_00140030:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00140034:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0014018c;
        }
    }
L_00140038:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0014003c:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 1u, &shc); cpu->r[9] = v;
    }
L_00140040:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00140044:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[2], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_00140048:;
    {
        goto L_00140054;
    }
L_0014004c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[9], 1, 1);
    }
L_00140050:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140184;
        }
    }
L_00140054:;
    {
        cpu->r[3] = rd16(cpu->r[8] + cpu->r[5]);
    }
L_00140058:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_0014005c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x154u);
    }
L_00140060:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_00140064:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00140068:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014004c;
        }
    }
L_0014006c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00140070:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_00140074:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x104u);
    }
L_00140078:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0014007c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_00140080:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[6] = v;
    }
L_00140084:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00140088:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0014008c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_00140090:;
    {
        cpu->r[14] = 0x00140094u; fn_001533e4(cpu);
    }
L_00140094:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x100u);
    }
L_00140098:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_0014009c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xfcu);
    }
L_001400a0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x104u);
    }
L_001400a4:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_001400a8:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_001400ac:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001400b0:;
    {
        cpu->r[14] = 0x001400b4u; fn_0012dcf4(cpu);
    }
L_001400b4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x104u);
    }
L_001400b8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001400bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001400c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_001400c4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_001400c8:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_001400cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xfcu);
    }
L_001400d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001400d4:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_001400d8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x104u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001400dc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x100u);
    }
L_001400e0:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_001400e4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xfcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001400e8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x100u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001400ec:;
    {
        cpu->r[14] = 0x001400f0u; fn_001533e4(cpu);
    }
L_001400f0:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[13] + + 0xf4u);
    }
L_001400f4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x100u);
    }
L_001400f8:;
    {
        vfp_vmul(cpu, 15, 12, 10);
    }
L_001400fc:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0xfcu);
    }
L_00140100:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[13] + + 0xf0u);
    }
L_00140104:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x104u);
    }
L_00140108:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xf8u);
    }
L_0014010c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[9], 1, 1);
    }
L_00140110:;
    {
        vfp_vmla(cpu, 15, 11, 9);
    }
L_00140114:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_00140118:;
    {
        vfp_vadd(cpu, 15, 15, 15);
    }
L_0014011c:;
    {
        vfp_vmul(cpu, 9, 15, 9);
    }
L_00140120:;
    {
        vfp_vsub(cpu, 11, 11, 9);
    }
L_00140124:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xf0u) = *(uint32_t*)vfp_s(cpu, 9);
    }
L_00140128:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_0014012c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xfcu) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00140130:;
    {
        vfp_vmul(cpu, 15, 15, 10);
    }
L_00140134:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xf8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00140138:;
    {
        *vfp_s(cpu,10) = *vfp_s(cpu,16);
    }
L_0014013c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xf4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00140140:;
    {
        vfp_vmla(cpu, 10, 11, 16);
    }
L_00140144:;
    {
        vfp_vsub(cpu, 15, 12, 15);
    }
L_00140148:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,10);
    }
L_0014014c:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_00140150:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x100u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00140154:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,10);
    }
L_00140158:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x104u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014015c:;
    {
        wr32(cpu->r[7] + cpu->r[6], cpu->r[1]);
    }
L_00140160:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x100u);
    }
L_00140164:;
    {
        *vfp_s(cpu,10) = *vfp_s(cpu,16);
    }
L_00140168:;
    {
        vfp_vmla(cpu, 10, 15, 16);
    }
L_0014016c:;
    {
        vfp_vadd(cpu, 14, 11, 19);
    }
L_00140170:;
    {
        vfp_vadd(cpu, 15, 10, 18);
    }
L_00140174:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00140178:;
    {
        wr32(cpu->r[7] + cpu->r[6], cpu->r[1]);
    }
L_0014017c:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00140180:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00140054;
        }
    }
L_00140184:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00140188:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x2cu);
    }
L_0014018c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_00140190:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_00140194:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_00140198:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0014019c:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001401a0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00140000;
        }
    }
L_001401a4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001401a8:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0xcu);
    }
L_001401ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_001401b0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_001401b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001401b8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[1]);
    }
L_001401bc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001401c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000038u, 0, 0);
    }
L_001401c4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001401c8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013ffd4;
        }
    }
L_001401cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001401d0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x1cu);
    }
L_001401d4:;
    {
        goto L_0013ff6c;
    }
L_001401d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_001401dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001401e0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_001401e4:;
    {
        goto L_0013ff18;
    }
}

/* _ZN13gxLookAtCurve7GetTypeEv @ 001401f0 (arm) */
void fn_001401f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001401f0:;
    {
        cpu->r[0] = 0x00000005u;
    }
L_001401f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13gxLookAtCurve4evalEfPf @ 001401f8 (arm) */
void fn_001401f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001401f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14gxCopyRotCurve7GetTypeEv @ 001401fc (arm) */
void fn_001401fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001401fc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00140200:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14gxCopyRotCurve4evalEfPf @ 00140204 (arm) */
void fn_00140204(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140204:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxAnimationC2Ev @ 00140208 (arm) */
void fn_00140208(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140208:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0014020c:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_00140210:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_00140214:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_00140218:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0014021c:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_00140220:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxAnimationC1Ev @ 00140224 (arm) */
void fn_00140224(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140224:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00140228:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_0014022c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_00140230:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_00140234:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00140238:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_0014023c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxAnimation8evalLerpEifPf @ 00140240 (arm) */
void fn_00140240(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140240:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00140244:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_00140248:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_0014024c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00140250:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00140254:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00140258:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0014025c:;
    {
        cpu->r[7] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00140260:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
    }
L_00140264:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00140268:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0014026c:;
    {
        cpu->r[14] = 0x00140274u;
    }
L_00140270:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00140274u)) return;
    }
L_00140274:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_00140278:;
    {
        cpu->r[2] = rd8(cpu->r[7] + + 0x4u);
    }
L_0014027c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_00140280:;
    {
        cpu->r[0] = rd16(cpu->r[1] + cpu->r[5]);
    }
L_00140284:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00140288:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0014028c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00140290u)) return;
        }
    }
L_00140290:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00140294:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00140298:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0014029c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_001402a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_001402a4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1]);
    }
L_001402a8:;
    {
        vfp_vsub(cpu, 13, 13, 15);
    }
L_001402ac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x2cu);
    }
L_001402b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001402b4:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_001402b8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001402bc:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[1]);
    }
L_001402c0:;
    {
        cpu->r[1] = rd8(cpu->r[7] + + 0x4u);
    }
L_001402c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001402c8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001402cc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00140298;
        }
    }
L_001402d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001402d4u)) return;
    }
}

/* _Z14qFastNormalizePf @ 001402d4 (arm) */
void fn_001402d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001402d4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_001402d8:;
    {
        vfp_vmul(cpu, 15, 12, 12);
    }
L_001402dc:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0]);
    }
L_001402e0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_001402e4:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_001402e8:;
    {
        *vfp_s(cpu, 8) = *(float*)G(0x001402f0u + + 0x64u);
    }
L_001402ec:;
    {
        *vfp_s(cpu, 9) = *(float*)G(0x001402f4u + + 0x64u);
    }
L_001402f0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001402f8u + + 0x64u);
    }
L_001402f4:;
    {
        vfp_vmla(cpu, 15, 11, 11);
    }
L_001402f8:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_001402fc:;
    {
        vfp_vmla(cpu, 15, 10, 10);
    }
L_00140300:;
    {
        vfp_vsub(cpu, 8, 15, 8);
    }
L_00140304:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,9));
    }
L_00140308:;
    {
        *vfp_s(cpu, 9) = *(float*)G(0x00140310u + + 0x50u);
    }
L_0014030c:;
    {
        vfp_vmla(cpu, 14, 8, 9);
    }
L_00140310:;
    {
        vfp_sync_flags(cpu);
    }
L_00140314:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_00140318:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00140330;
        }
    }
L_0014031c:;
    {
        *vfp_s(cpu, 9) = *(float*)G(0x00140324u + + 0x40u);
    }
L_00140320:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,9));
    }
L_00140324:;
    {
        vfp_vmul(cpu, 15, 14, 14);
    }
L_00140328:;
    {
        vfp_sync_flags(cpu);
    }
L_0014032c:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vmul(cpu, 15, 15, 14);
        }
    }
L_00140330:;
    {
        vfp_vmul(cpu, 14, 10, 15);
    }
L_00140334:;
    {
        vfp_vmul(cpu, 11, 15, 11);
    }
L_00140338:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014033c:;
    {
        vfp_vmul(cpu, 14, 12, 15);
    }
L_00140340:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00140344:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_00140348:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014034c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00140350:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxAnimation9evalSlerpEifPf @ 00140368 (arm) */
void fn_00140368(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140368:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0014036c:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_00140370:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_00140374:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00140378:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014037c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00140380:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00140384:;
    {
        cpu->r[7] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00140388:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
    }
L_0014038c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00140390:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00140394:;
    {
        cpu->r[14] = 0x0014039cu;
    }
L_00140398:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014039cu)) return;
    }
L_0014039c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_001403a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001403a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001403a8:;
    {
        cpu->r[5] = rd16(cpu->r[2] + cpu->r[5]);
    }
L_001403ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_001403b0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001403b4:;
    {
        cpu->r[14] = 0x001403b8u; fn_0014330c(cpu);
    }
L_001403b8:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x4u);
    }
L_001403bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001403c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140404;
        }
    }
L_001403c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001403c8:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001403cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001403d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_001403d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_001403d8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1]);
    }
L_001403dc:;
    {
        vfp_vsub(cpu, 13, 13, 15);
    }
L_001403e0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x2cu);
    }
L_001403e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001403e8:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_001403ec:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001403f0:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[1]);
    }
L_001403f4:;
    {
        cpu->r[1] = rd8(cpu->r[7] + + 0x4u);
    }
L_001403f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001403fc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00140400:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001403cc;
        }
    }
L_00140404:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00140408:;
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
L_0014040c:;
    {
        return fn_001402d4(cpu);
    }
}

/* _ZN11gxAnimation4evalEifPf @ 00140410 (arm) */
void fn_00140410(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140410:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00140414:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00140418:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014041c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00140420:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00140424:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_00140428:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00140438;
        }
    }
L_0014042c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_00140430:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00140434:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0014046c;
        }
    }
L_00140438:;
    {
        cpu->r[1] = rd32(0x00140440u + + 0x54u);
    }
L_0014043c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00140440:;
    {
        cpu->r[2] = rd32(0x00140448u + + 0x50u);
    }
L_00140444:;
    {
        cpu->r[14] = 0x0000012du;
    }
L_00140448:;
    {
        cpu->r[3] = rd32(0x00140450u + + 0x4cu);
    }
L_0014044c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00140454u, cpu->r[1], 0, 0);
    }
L_00140450:;
    {
        cpu->r[12] = rd32(0x00140458u + + 0x48u);
    }
L_00140454:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014045cu, cpu->r[2], 0, 0);
    }
L_00140458:;
    {
        cpu->r[3] = add_flags(cpu, 0x00140460u, cpu->r[3], 0, 0);
    }
L_0014045c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00140460:;
    {
        cpu->r[12] = add_flags(cpu, 0x00140468u, cpu->r[12], 0, 0);
    }
L_00140464:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00140468:;
    {
        cpu->r[14] = 0x0014046cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014046c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_00140470:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00140474:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00140478:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0014047c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00140480:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00140484:;
    {
        cpu->r[14] = 0x0014048cu;
    }
L_00140488:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014048cu)) return;
    }
L_0014048c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00140490:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00140494u)) return;
    }
}

/* _ZN13gxGlobalPivot8LoadNameEP8LZMAFile @ 001404a4 (arm) */
void fn_001404a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001404a4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001404a8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001404ac:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001404b0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001404b4:;
    {
        cpu->r[14] = 0x001404b8u; fn_000fc678(cpu);
    }
L_001404b8:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001404bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001404c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001404c4u)) return;
        }
    }
L_001404c4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001404c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001404cc:;
    {
        cpu->r[14] = 0x001404d0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001404d0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001404d4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001404d8:;
    {
        wr32(cpu->r[6] + + 0x48u, cpu->r[0]);
    }
L_001404dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001404e0:;
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
L_001404e4:;
    {
        return fn_000fc5f4(cpu);
    }
}

/* _ZN11gxAnimation4loadEP8LZMAFile @ 001404e8 (arm) */
void fn_001404e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001404e8:;
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
L_001404ec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001404f0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000003cu, 1, 0);
    }
L_001404f4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001404f8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001404fc:;
    {
        cpu->r[14] = 0x00140500u; fn_000fc650(cpu);
    }
L_00140500:;
    {
        cpu->r[4] = rd32(0x00140508u + + 0x60cu);
    }
L_00140504:;
    {
        cpu->r[4] = add_flags(cpu, 0x0014050cu, cpu->r[4], 0, 0);
    }
L_00140508:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_0014050c:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[0]);
    }
L_00140510:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00140514:;
    {
        cpu->r[14] = 0x00140518u; fn_000fc628(cpu);
    }
L_00140518:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[7] = v;
    }
L_0014051c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00140520:;
    {
        cpu->r[14] = 0x00140524u; imp__Znaj(cpu); /* _Znaj */
    }
L_00140524:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00140528:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[0]);
    }
L_0014052c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00140530:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014053c;
        }
    }
L_00140534:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_00140538:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014053cu)) return;
    }
L_0014053c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00140540:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00140544:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00140548:;
    {
        cpu->r[14] = 0x0014054cu; fn_000fc5f4(cpu);
    }
L_0014054c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00140550:;
    {
        cpu->r[14] = 0x00140554u; fn_000fc650(cpu);
    }
L_00140554:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_00140558:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[0]);
    }
L_0014055c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00140560:;
    {
        cpu->r[14] = 0x00140564u; imp__Znaj(cpu); /* _Znaj */
    }
L_00140564:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00140568:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[0]);
    }
L_0014056c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x0000000au);
        }
    }
L_00140570:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140534;
        }
    }
L_00140574:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x20u);
    }
L_00140578:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014057c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_00140580:;
    {
        cpu->r[14] = 0x00140584u; imp_memset(cpu); /* memset */
    }
L_00140584:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x20u);
    }
L_00140588:;
    {
        cpu->r[14] = 0x0014058cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0014058c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00140590:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_00140594:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140534;
        }
    }
L_00140598:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014059c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001405a0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x20u);
    }
L_001405a4:;
    {
        cpu->r[14] = 0x001405a8u; fn_000fc5f4(cpu);
    }
L_001405a8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x20u);
    }
L_001405ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001405b0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_001405b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0014062c;
        }
    }
L_001405b8:;
    {
        cpu->r[3] = rd32(0x001405c0u + + 0x558u);
    }
L_001405bc:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001405c0:;
    {
        cpu->r[9] = rd32(0x001405c8u + + 0x554u);
    }
L_001405c4:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_001405c8:;
    {
        cpu->r[11] = rd32(0x001405d0u + + 0x550u);
    }
L_001405cc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001405d4u, cpu->r[3], 0, 0);
    }
L_001405d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001405d4:;
    {
        cpu->r[9] = add_flags(cpu, 0x001405dcu, cpu->r[9], 0, 0);
    }
L_001405d8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001405dc:;
    {
        cpu->r[11] = add_flags(cpu, 0x001405e4u, cpu->r[11], 0, 0);
    }
L_001405e0:;
    {
        cpu->r[3] = rd32(0x001405e8u + + 0x53cu);
    }
L_001405e4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001405ecu, cpu->r[3], 0, 0);
    }
L_001405e8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001405ec:;
    {
        cpu->r[3] = rd8(cpu->r[8] + cpu->r[7]);
    }
L_001405f0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001405f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_001405f8:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_0014070c;
        case 1: goto L_0014061c;
        case 2: goto L_0014061c;
        case 3: goto L_00140740;
        case 4: goto L_0014070c;
        case 5: goto L_00140748;
        case 6: goto L_0014061c;
        default: guest_unimplemented(cpu, 0x001405f8u); return; }
        }
    }
L_001405fc:;
    {
        goto L_00140714;
    }
L_0014061c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000014u, 0, 0);
    }
L_00140620:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00140624:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_00140628:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001405ec;
        }
    }
L_0014062c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00140630:;
    {
        cpu->r[14] = 0x00140634u; imp__Znaj(cpu); /* _Znaj */
    }
L_00140634:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00140638:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[0]);
    }
L_0014063c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140b04;
        }
    }
L_00140640:;
    {
        cpu->r[14] = 0x00140644u; fn_0018b9ac(cpu);
    }
L_00140644:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x20u);
    }
L_00140648:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x14u);
    }
L_0014064c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00140650:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_00140654:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001407ec;
        }
    }
L_00140658:;
    {
        cpu->r[0] = rd32(0x00140660u + + 0x4c8u);
    }
L_0014065c:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_00140660:;
    {
        cpu->r[1] = rd32(0x00140668u + + 0x4c4u);
    }
L_00140664:;
    {
        cpu->r[7] = cpu->r[9];
    }
L_00140668:;
    {
        cpu->r[2] = rd32(0x00140670u + + 0x4c0u);
    }
L_0014066c:;
    {
        cpu->r[10] = cpu->r[9];
    }
L_00140670:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_00140674:;
    {
        cpu->r[3] = rd32(0x0014067cu + + 0x4b8u);
    }
L_00140678:;
    {
        cpu->r[12] = rd32(0x00140680u + + 0x4b8u);
    }
L_0014067c:;
    {
        cpu->r[14] = rd32(0x00140684u + + 0x4b8u);
    }
L_00140680:;
    {
        cpu->r[0] = rd32(0x00140688u + + 0x4b8u);
    }
L_00140684:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_00140688:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_0014068c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00140690:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_00140694:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[14]);
    }
L_00140698:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_0014069c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[4]);
    }
L_001406a0:;
    {
        cpu->r[3] = rd8(cpu->r[8] + cpu->r[7]);
    }
L_001406a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_001406a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140a8c;
        }
    }
L_001406ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_001406b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140a54;
        }
    }
L_001406b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001406b8:;
    {
        cpu->r[14] = 0x001406bcu; fn_000fc678(cpu);
    }
L_001406bc:;
    {
        cpu->r[0] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_001406c0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_001406c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001406c8:;
    {
        cpu->r[14] = 0x001406ccu; fn_000fc678(cpu);
    }
L_001406cc:;
    {
        cpu->r[11] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_001406d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001406d4:;
    {
        cpu->r[14] = 0x001406d8u; fn_000fc650(cpu);
    }
L_001406d8:;
    {
        cpu->r[3] = rd8(cpu->r[8] + cpu->r[7]);
    }
L_001406dc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001406e0:;
    {
        cpu->r[4] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_001406e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_001406e8:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_0014086c;
        case 1: goto L_00140750;
        case 2: goto L_001409cc;
        case 3: goto L_0014093c;
        case 4: goto L_001407cc;
        case 5: goto L_001407cc;
        case 6: goto L_001408b8;
        default: guest_unimplemented(cpu, 0x001406e8u); return; }
        }
    }
L_001406ec:;
    {
        goto L_001407cc;
    }
L_0014070c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000000cu, 0, 0);
    }
L_00140710:;
    {
        goto L_00140620;
    }
L_00140714:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00140718:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014071c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00140720:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00140724:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00140728:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0014072c:;
    {
        cpu->r[12] = 0x00000090u;
    }
L_00140730:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00140734:;
    {
        cpu->r[14] = 0x00140738u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00140738:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x20u);
    }
L_0014073c:;
    {
        goto L_00140620;
    }
L_00140740:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000018u, 0, 0);
    }
L_00140744:;
    {
        goto L_00140620;
    }
L_00140748:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000008u, 0, 0);
    }
L_0014074c:;
    {
        goto L_00140620;
    }
L_00140750:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_00140754:;
    {
        cpu->r[14] = 0x00140758u; fn_0018ba6c(cpu);
    }
L_00140758:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[10]);
    }
L_0014075c:;
    {
        wr8(cpu->r[0] + + 0x10u, cpu->r[10]);
    }
L_00140760:;
    {
        wr32(cpu->r[0], cpu->r[10]);
    }
L_00140764:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[10]);
    }
L_00140768:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[10]);
    }
L_0014076c:;
    {
        wr16(cpu->r[0] + + 0x12u, cpu->r[10]);
    }
L_00140770:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_00140774:;
    {
        cpu->r[14] = 0x00140778u; fn_00142d38(cpu);
    }
L_00140778:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_0014077c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_00140780:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00140784:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00140788:;
    {
        uint32_t v = cpu->r[11] * cpu->r[4]; cpu->r[0] = v;
    }
L_0014078c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_00140790:;
    {
        cpu->r[1] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_00140794:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00140798:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0014079c:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x18u);
    }
L_001407a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001407a4:;
    {
        wr32(cpu->r[3], cpu->r[1]);
    }
L_001407a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001407ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001407b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_001407b4:;
    {
        wr32(cpu->r[14] + cpu->r[9], cpu->r[3]);
    }
L_001407b8:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[2]);
    }
L_001407bc:;
    {
        wr8(cpu->r[3] + + 0x10u, cpu->r[1]);
    }
L_001407c0:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[12]);
    }
L_001407c4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001407c8:;
    {
        wr16(cpu->r[3] + + 0x12u, cpu->r[4]);
    }
L_001407cc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
    }
L_001407d0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[9]);
    }
L_001407d4:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[11]);
    }
L_001407d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x20u);
    }
L_001407dc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001407e0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_001407e4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001407e8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001406a0;
        }
    }
L_001407ec:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001407f0:;
    {
        cpu->r[14] = 0x001407f4u; fn_0018b9ac(cpu);
    }
L_001407f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001407f8:;
    {
        cpu->r[14] = 0x001407fcu; fn_0018ba60(cpu);
    }
L_001407fc:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x24u);
    }
L_00140800:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00140804:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[5] + + 0x20u);
        }
    }
L_00140808:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00140534;
        }
    }
L_0014080c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x20u);
    }
L_00140810:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00140814:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00140818:;
    {
        cpu->r[14] = 0x0014081cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0014081c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00140820:;
    {
        wr32(cpu->r[5] + + 0x24u, cpu->r[0]);
    }
L_00140824:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[0];
        }
    }
L_00140828:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000035u);
        }
    }
L_0014082c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[5] + + 0x20u);
        }
    }
L_00140830:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[4];
        }
    }
L_00140834:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00140854;
        }
    }
L_00140838:;
    {
        goto L_00140534;
    }
L_0014083c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x18u);
    }
L_00140840:;
    {
        wr16(cpu->r[2] + cpu->r[1], cpu->r[4]);
    }
L_00140844:;
    {
        cpu->r[1] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00140848:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0014084c:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0x4u);
    }
L_00140850:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_00140854:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00140858:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[1] = v;
    }
L_0014085c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0014083c;
        }
    }
L_00140860:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[3] = v;
    }
L_00140864:;
    {
        wr16(cpu->r[2] + cpu->r[3], cpu->r[4]);
    }
L_00140868:;
    {
        goto L_00140534;
    }
L_0014086c:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_00140870:;
    {
        cpu->r[14] = 0x00140874u; fn_0018ba6c(cpu);
    }
L_00140874:;
    {
        wr32(cpu->r[0], cpu->r[10]);
    }
L_00140878:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014087c:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[10]);
    }
L_00140880:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[10]);
    }
L_00140884:;
    {
        cpu->r[14] = 0x00140888u; fn_00142d38(cpu);
    }
L_00140888:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0014088c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_00140890:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_00140894:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
    }
L_00140898:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_0014089c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[14]);
    }
L_001408a0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_001408a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001408a8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_001408ac:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001408b0:;
    {
        wr32(cpu->r[2] + cpu->r[9], cpu->r[4]);
    }
L_001408b4:;
    {
        goto L_001407d0;
    }
L_001408b8:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_001408bc:;
    {
        cpu->r[14] = 0x001408c0u; fn_0018ba6c(cpu);
    }
L_001408c0:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[10]);
    }
L_001408c4:;
    {
        wr8(cpu->r[0] + + 0x10u, cpu->r[10]);
    }
L_001408c8:;
    {
        wr32(cpu->r[0], cpu->r[10]);
    }
L_001408cc:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[10]);
    }
L_001408d0:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[10]);
    }
L_001408d4:;
    {
        wr16(cpu->r[0] + + 0x12u, cpu->r[10]);
    }
L_001408d8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001408dc:;
    {
        cpu->r[14] = 0x001408e0u; fn_00142d38(cpu);
    }
L_001408e0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001408e4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001408e8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001408ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001408f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001408f4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_001408f8:;
    {
        uint32_t v = cpu->r[11] * cpu->r[4]; cpu->r[2] = v;
    }
L_001408fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00140900:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[12]);
    }
L_00140904:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00140908:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[1]);
    }
L_0014090c:;
    {
        wr16(cpu->r[3] + + 0x12u, cpu->r[4]);
    }
L_00140910:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_00140914:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00140918:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x18u);
    }
L_0014091c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00140920:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00140924:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00140928:;
    {
        wr32(cpu->r[14] + cpu->r[9], cpu->r[3]);
    }
L_0014092c:;
    {
        wr8(cpu->r[3] + + 0x10u, cpu->r[12]);
    }
L_00140930:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00140934:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
    }
L_00140938:;
    {
        goto L_001407d0;
    }
L_0014093c:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_00140940:;
    {
        cpu->r[14] = 0x00140944u; fn_0018ba6c(cpu);
    }
L_00140944:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[10]);
    }
L_00140948:;
    {
        wr8(cpu->r[0] + + 0x10u, cpu->r[10]);
    }
L_0014094c:;
    {
        wr32(cpu->r[0], cpu->r[10]);
    }
L_00140950:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[10]);
    }
L_00140954:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[10]);
    }
L_00140958:;
    {
        wr16(cpu->r[0] + + 0x12u, cpu->r[10]);
    }
L_0014095c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[10]);
    }
L_00140960:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_00140964:;
    {
        cpu->r[14] = 0x00140968u; fn_00142d38(cpu);
    }
L_00140968:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0014096c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_00140970:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
    }
L_00140974:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00140978:;
    {
        uint32_t v = cpu->r[11] * cpu->r[4]; cpu->r[0] = v;
    }
L_0014097c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00140980:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_00140984:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00140988:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_0014098c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x18u);
    }
L_00140990:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00140994:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00140998:;
    {
        wr32(cpu->r[3], cpu->r[1]);
    }
L_0014099c:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[14]);
    }
L_001409a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_001409a4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_001409a8:;
    {
        wr32(cpu->r[12] + cpu->r[9], cpu->r[3]);
    }
L_001409ac:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[0]);
    }
L_001409b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_001409b4:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[2]);
    }
L_001409b8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001409bc:;
    {
        wr16(cpu->r[3] + + 0x12u, cpu->r[4]);
    }
L_001409c0:;
    {
        wr8(cpu->r[3] + + 0x10u, cpu->r[14]);
    }
L_001409c4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
    }
L_001409c8:;
    {
        goto L_001407d0;
    }
L_001409cc:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_001409d0:;
    {
        cpu->r[14] = 0x001409d4u; fn_0018ba6c(cpu);
    }
L_001409d4:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[10]);
    }
L_001409d8:;
    {
        wr8(cpu->r[0] + + 0x10u, cpu->r[10]);
    }
L_001409dc:;
    {
        wr32(cpu->r[0], cpu->r[10]);
    }
L_001409e0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[10]);
    }
L_001409e4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[10]);
    }
L_001409e8:;
    {
        wr16(cpu->r[0] + + 0x12u, cpu->r[10]);
    }
L_001409ec:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001409f0:;
    {
        cpu->r[14] = 0x001409f4u; fn_00142d38(cpu);
    }
L_001409f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001409f8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001409fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
    }
L_00140a00:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00140a04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00140a08:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00140a0c:;
    {
        uint32_t v = cpu->r[11] * cpu->r[4]; cpu->r[0] = v;
    }
L_00140a10:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_00140a14:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_00140a18:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x18u);
    }
L_00140a1c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00140a20:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00140a24:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_00140a28:;
    {
        wr32(cpu->r[3], cpu->r[1]);
    }
L_00140a2c:;
    {
        wr32(cpu->r[12] + cpu->r[9], cpu->r[3]);
    }
L_00140a30:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00140a34:;
    {
        wr8(cpu->r[3] + + 0x10u, cpu->r[14]);
    }
L_00140a38:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00140a3c:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[2]);
    }
L_00140a40:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_00140a44:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[1]);
    }
L_00140a48:;
    {
        wr16(cpu->r[3] + + 0x12u, cpu->r[4]);
    }
L_00140a4c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
    }
L_00140a50:;
    {
        goto L_001407d0;
    }
L_00140a54:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_00140a58:;
    {
        cpu->r[14] = 0x00140a5cu; fn_0018ba6c(cpu);
    }
L_00140a5c:;
    {
        wr32(cpu->r[0], cpu->r[10]);
    }
L_00140a60:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00140a64:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[10]);
    }
L_00140a68:;
    {
        cpu->r[14] = 0x00140a6cu; fn_00142d38(cpu);
    }
L_00140a6c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00140a70:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_00140a74:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
    }
L_00140a78:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_00140a7c:;
    {
        wr32(cpu->r[2] + cpu->r[9], cpu->r[4]);
    }
L_00140a80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00140a84:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00140a88:;
    {
        goto L_001407d8;
    }
L_00140a8c:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_00140a90:;
    {
        cpu->r[14] = 0x00140a94u; fn_0018ba6c(cpu);
    }
L_00140a94:;
    {
        wr32(cpu->r[0], cpu->r[10]);
    }
L_00140a98:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00140a9c:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[10]);
    }
L_00140aa0:;
    {
        wr8(cpu->r[0] + + 0x5u, cpu->r[10]);
    }
L_00140aa4:;
    {
        wr8(cpu->r[0] + + 0x6u, cpu->r[10]);
    }
L_00140aa8:;
    {
        wr8(cpu->r[0] + + 0x7u, cpu->r[10]);
    }
L_00140aac:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[10]);
    }
L_00140ab0:;
    {
        cpu->r[14] = 0x00140ab4u; fn_00142d38(cpu);
    }
L_00140ab4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00140ab8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00140abc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00140ac0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
    }
L_00140ac4:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_00140ac8:;
    {
        wr32(cpu->r[2] + cpu->r[9], cpu->r[4]);
    }
L_00140acc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00140ad0:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00140ad4:;
    {
        cpu->r[14] = 0x00140ad8u; fn_000fc678(cpu);
    }
L_00140ad8:;
    {
        wr8(cpu->r[4] + + 0x5u, cpu->r[0]);
    }
L_00140adc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00140ae0:;
    {
        cpu->r[14] = 0x00140ae4u; fn_000fc678(cpu);
    }
L_00140ae4:;
    {
        wr8(cpu->r[4] + + 0x6u, cpu->r[0]);
    }
L_00140ae8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00140aec:;
    {
        cpu->r[14] = 0x00140af0u; fn_000fc678(cpu);
    }
L_00140af0:;
    {
        wr8(cpu->r[4] + + 0x7u, cpu->r[0]);
    }
L_00140af4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00140af8:;
    {
        cpu->r[14] = 0x00140afcu; fn_000fc678(cpu);
    }
L_00140afc:;
    {
        wr8(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_00140b00:;
    {
        goto L_001407d8;
    }
L_00140b04:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00140b08:;
    {
        cpu->r[14] = 0x00140b0cu; fn_0018ba60(cpu);
    }
L_00140b0c:;
    {
        cpu->r[0] = (~0x00000002u);
    }
L_00140b10:;
    {
        goto L_00140534;
    }
}

/* _ZN11gxAnimationD1Ev @ 00140b44 (arm) */
void fn_00140b44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140b44:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00140b48:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00140b4c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_00140b50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00140b54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140b64;
        }
    }
L_00140b58:;
    {
        cpu->r[14] = 0x00140b5cu; fn_0018ba60(cpu);
    }
L_00140b5c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00140b60:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
    }
L_00140b64:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_00140b68:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00140b6c:;
    {
        wr32(cpu->r[5] + + 0x24u, cpu->r[4]);
    }
L_00140b70:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00140b74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140bdc;
        }
    }
L_00140b78:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00140b7c:;
    {
        cpu->r[14] = 0x00140b80u; fn_0018b9ac(cpu);
    }
L_00140b80:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x20u);
    }
L_00140b84:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_00140b88:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00140bbc;
        }
    }
L_00140b8c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
    }
L_00140b90:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_00140b94:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00140b98:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00140b9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140bb0;
        }
    }
L_00140ba0:;
    {
        cpu->r[14] = 0x00140ba4u; fn_0018ba20(cpu);
    }
L_00140ba4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
    }
L_00140ba8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x20u);
    }
L_00140bac:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[6]);
    }
L_00140bb0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00140bb4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_00140bb8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00140b94;
        }
    }
L_00140bbc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00140bc0:;
    {
        cpu->r[14] = 0x00140bc4u; fn_0018b9ac(cpu);
    }
L_00140bc4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x18u);
    }
L_00140bc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00140bcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140bdc;
        }
    }
L_00140bd0:;
    {
        cpu->r[14] = 0x00140bd4u; fn_0018ba60(cpu);
    }
L_00140bd4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00140bd8:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[3]);
    }
L_00140bdc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1cu);
    }
L_00140be0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00140be4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140bf4;
        }
    }
L_00140be8:;
    {
        cpu->r[14] = 0x00140becu; fn_0018ba60(cpu);
    }
L_00140bec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00140bf0:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[3]);
    }
L_00140bf4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00140bf8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00140bfcu)) return;
    }
}

/* _ZN11gxAnimationD2Ev @ 00140bfc (arm) */
void fn_00140bfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140bfc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00140c00:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00140c04:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_00140c08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00140c0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140c1c;
        }
    }
L_00140c10:;
    {
        cpu->r[14] = 0x00140c14u; fn_0018ba60(cpu);
    }
L_00140c14:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00140c18:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
    }
L_00140c1c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_00140c20:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00140c24:;
    {
        wr32(cpu->r[5] + + 0x24u, cpu->r[4]);
    }
L_00140c28:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00140c2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140c94;
        }
    }
L_00140c30:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00140c34:;
    {
        cpu->r[14] = 0x00140c38u; fn_0018b9ac(cpu);
    }
L_00140c38:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x20u);
    }
L_00140c3c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_00140c40:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00140c74;
        }
    }
L_00140c44:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
    }
L_00140c48:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_00140c4c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00140c50:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00140c54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140c68;
        }
    }
L_00140c58:;
    {
        cpu->r[14] = 0x00140c5cu; fn_0018ba20(cpu);
    }
L_00140c5c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
    }
L_00140c60:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x20u);
    }
L_00140c64:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[6]);
    }
L_00140c68:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00140c6c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_00140c70:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00140c4c;
        }
    }
L_00140c74:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00140c78:;
    {
        cpu->r[14] = 0x00140c7cu; fn_0018b9ac(cpu);
    }
L_00140c7c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x18u);
    }
L_00140c80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00140c84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140c94;
        }
    }
L_00140c88:;
    {
        cpu->r[14] = 0x00140c8cu; fn_0018ba60(cpu);
    }
L_00140c8c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00140c90:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[3]);
    }
L_00140c94:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1cu);
    }
L_00140c98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00140c9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140cac;
        }
    }
L_00140ca0:;
    {
        cpu->r[14] = 0x00140ca4u; fn_0018ba60(cpu);
    }
L_00140ca4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00140ca8:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[3]);
    }
L_00140cac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00140cb0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00140cb4u)) return;
    }
}

/* _ZN11gxMeshPivotC1Ev @ 00140cb4 (arm) */
void fn_00140cb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140cb4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00140cb8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x000000b8u, 0, 0);
    }
L_00140cbc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00140cc0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00140cc4:;
    {
        wr32(cpu->r[0] + + 0xf8u, cpu->r[5]);
    }
L_00140cc8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00140ccc:;
    {
        cpu->r[14] = 0x00140cd0u; fn_001535e0(cpu);
    }
L_00140cd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00140cd4:;
    {
        cpu->r[7] = 0x00000078u;
    }
L_00140cd8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00140cdc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00140ce0:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000004u;
        wr32(cpu->r[0], cpu->r[5]);
        cpu->r[0] = wb_tmp;
    }
L_00140ce4:;
    {
        cpu->r[14] = 0x00140ce8u; imp_memset(cpu); /* memset */
    }
L_00140ce8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00140cec:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00140cf0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000040u, 0, 0);
    }
L_00140cf4:;
    {
        cpu->r[14] = 0x00140cf8u; imp_memset(cpu); /* memset */
    }
L_00140cf8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00140cfc:;
    {
        cpu->r[14] = 0x00140d00u; fn_00153efc(cpu);
    }
L_00140d00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00140d04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00140d08u)) return;
    }
}

/* _ZN11gxMeshPivotC2Ev @ 00140d08 (arm) */
void fn_00140d08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140d08:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00140d0c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x000000b8u, 0, 0);
    }
L_00140d10:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00140d14:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00140d18:;
    {
        wr32(cpu->r[0] + + 0xf8u, cpu->r[5]);
    }
L_00140d1c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00140d20:;
    {
        cpu->r[14] = 0x00140d24u; fn_001535e0(cpu);
    }
L_00140d24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00140d28:;
    {
        cpu->r[7] = 0x00000078u;
    }
L_00140d2c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00140d30:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00140d34:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000004u;
        wr32(cpu->r[0], cpu->r[5]);
        cpu->r[0] = wb_tmp;
    }
L_00140d38:;
    {
        cpu->r[14] = 0x00140d3cu; imp_memset(cpu); /* memset */
    }
L_00140d3c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00140d40:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00140d44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000040u, 0, 0);
    }
L_00140d48:;
    {
        cpu->r[14] = 0x00140d4cu; imp_memset(cpu); /* memset */
    }
L_00140d4c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00140d50:;
    {
        cpu->r[14] = 0x00140d54u; fn_00153efc(cpu);
    }
L_00140d54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00140d58:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00140d5cu)) return;
    }
}

/* _ZN12gxLocalPivotC1Ev @ 00140d5c (arm) */
void fn_00140d5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140d5c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00140d60:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00140d64:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00140d68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00140d6c:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[5]);
    }
L_00140d70:;
    {
        cpu->r[14] = 0x00140d74u; fn_001535e0(cpu);
    }
L_00140d74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_00140d78:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[5]);
    }
L_00140d7c:;
    {
        cpu->r[14] = 0x00140d80u; fn_001535e0(cpu);
    }
L_00140d80:;
    {
        wr16(cpu->r[4], cpu->r[5]);
    }
L_00140d84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00140d88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00140d8cu)) return;
    }
}

/* _ZN12gxLocalPivotC2Ev @ 00140d8c (arm) */
void fn_00140d8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140d8c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00140d90:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00140d94:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00140d98:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00140d9c:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[5]);
    }
L_00140da0:;
    {
        cpu->r[14] = 0x00140da4u; fn_001535e0(cpu);
    }
L_00140da4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_00140da8:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[5]);
    }
L_00140dac:;
    {
        cpu->r[14] = 0x00140db0u; fn_001535e0(cpu);
    }
L_00140db0:;
    {
        wr16(cpu->r[4], cpu->r[5]);
    }
L_00140db4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00140db8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00140dbcu)) return;
    }
}

/* _ZN13gxGlobalPivotC1Ev @ 00140dbc (arm) */
void fn_00140dbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140dbc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00140dc0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00140dc4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00140dc8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00140dcc:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[5]);
    }
L_00140dd0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00140dd4:;
    {
        cpu->r[14] = 0x00140dd8u; fn_001535e0(cpu);
    }
L_00140dd8:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[5]);
    }
L_00140ddc:;
    {
        wr16(cpu->r[4], cpu->r[5]);
    }
L_00140de0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00140de4:;
    {
        wr16(cpu->r[4] + + 0x2u, cpu->r[5]);
    }
L_00140de8:;
    {
        cpu->r[14] = 0x00140decu; fn_00153efc(cpu);
    }
L_00140dec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00140df0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00140df4u)) return;
    }
}

/* _ZN13gxGlobalPivotC2Ev @ 00140df4 (arm) */
void fn_00140df4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140df4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00140df8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00140dfc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00140e00:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00140e04:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[5]);
    }
L_00140e08:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00140e0c:;
    {
        cpu->r[14] = 0x00140e10u; fn_001535e0(cpu);
    }
L_00140e10:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[5]);
    }
L_00140e14:;
    {
        wr16(cpu->r[4], cpu->r[5]);
    }
L_00140e18:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00140e1c:;
    {
        wr16(cpu->r[4] + + 0x2u, cpu->r[5]);
    }
L_00140e20:;
    {
        cpu->r[14] = 0x00140e24u; fn_00153efc(cpu);
    }
L_00140e24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00140e28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00140e2cu)) return;
    }
}

/* _ZN13gxGlobalPivotD2Ev @ 00140e2c (arm) */
void fn_00140e2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140e2c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00140e30:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00140e34:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x48u);
    }
L_00140e38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00140e3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140e4c;
        }
    }
L_00140e40:;
    {
        cpu->r[14] = 0x00140e44u; fn_0018ba60(cpu);
    }
L_00140e44:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00140e48:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_00140e4c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x44u);
    }
L_00140e50:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00140e54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140e70;
        }
    }
L_00140e58:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00140e5c:;
    {
        cpu->r[14] = 0x00140e60u; fn_000b2bc8(cpu);
    }
L_00140e60:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00140e64:;
    {
        cpu->r[14] = 0x00140e68u; fn_0018ba20(cpu);
    }
L_00140e68:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00140e6c:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_00140e70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00140e74:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00140e78u)) return;
    }
}

/* _ZN13gxGlobalPivotD1Ev @ 00140e78 (arm) */
void fn_00140e78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140e78:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00140e7c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00140e80:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x48u);
    }
L_00140e84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00140e88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140e98;
        }
    }
L_00140e8c:;
    {
        cpu->r[14] = 0x00140e90u; fn_0018ba60(cpu);
    }
L_00140e90:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00140e94:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_00140e98:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x44u);
    }
L_00140e9c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00140ea0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00140ebc;
        }
    }
L_00140ea4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00140ea8:;
    {
        cpu->r[14] = 0x00140eacu; fn_000b2bc8(cpu);
    }
L_00140eac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00140eb0:;
    {
        cpu->r[14] = 0x00140eb4u; fn_0018ba20(cpu);
    }
L_00140eb4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00140eb8:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_00140ebc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00140ec0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00140ec4u)) return;
    }
}

/* _ZN7CAniObj11LoadMinimalEP8LZMAFile @ 00140ec4 (arm) */
void fn_00140ec4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140ec4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00140ec8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniObj7GetTypeEv @ 00140ecc (arm) */
void fn_00140ecc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140ecc:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00140ed0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgr19ClearComputedPivotsEv @ 00140ed4 (arm) */
void fn_00140ed4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140ed4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgr16ComputeBasePivotEv @ 00140ed8 (arm) */
void fn_00140ed8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140ed8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgr17ComputeMeshPivotsEi @ 00140edc (arm) */
void fn_00140edc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140edc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgr16SendBuffersToGPUEbii @ 00140ee0 (arm) */
void fn_00140ee0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140ee0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgr19ClearBuffersFromGPUEv @ 00140ee4 (arm) */
void fn_00140ee4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140ee4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgr7SetAnimEibi @ 00140ee8 (arm) */
void fn_00140ee8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140ee8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgr9QueueAnimEib @ 00140eec (arm) */
void fn_00140eec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140eec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgr13ClearAniQueueEv @ 00140ef0 (arm) */
void fn_00140ef0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140ef0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgr18GetLastAnimInQueueEv @ 00140ef4 (arm) */
void fn_00140ef4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140ef4:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00140ef8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgr10UpdateAnimEv @ 00140efc (arm) */
void fn_00140efc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140efc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgr8EvalMtlsEv @ 00140f00 (arm) */
void fn_00140f00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140f00:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgr10EvalMorphsEv @ 00140f04 (arm) */
void fn_00140f04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140f04:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgr10GetCrtAnimEv @ 00140f08 (arm) */
void fn_00140f08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140f08:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00140f0c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgr11GetCrtFrameEv @ 00140f10 (arm) */
void fn_00140f10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140f10:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00140f14:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgr8SetFrameEf @ 00140f18 (arm) */
void fn_00140f18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140f18:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgr17GetBoundingCenterEv @ 00140f1c (arm) */
void fn_00140f1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140f1c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00140f20:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgr17GetBoundingRadiusEv @ 00140f24 (arm) */
void fn_00140f24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140f24:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00140f28:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgr18ComputeBoundingBoxEPfS0_ @ 00140f2c (arm) */
void fn_00140f2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140f2c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00140f30:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniObjC2Ev @ 00140f34 (arm) */
void fn_00140f34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140f34:;
    {
        cpu->r[1] = rd32(0x00140f3cu + + 0x30u);
    }
L_00140f38:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00140f3c:;
    {
        cpu->r[12] = rd32(0x00140f44u + + 0x2cu);
    }
L_00140f40:;
    {
        cpu->r[1] = add_flags(cpu, 0x00140f48u, cpu->r[1], 0, 0);
    }
L_00140f44:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00140f48:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00140f4c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_00140f50:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00140f54:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00140f58:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_00140f5c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_00140f60:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_00140f64:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00140f68:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniObjC1Ev @ 00140f74 (arm) */
void fn_00140f74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140f74:;
    {
        cpu->r[1] = rd32(0x00140f7cu + + 0x30u);
    }
L_00140f78:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00140f7c:;
    {
        cpu->r[12] = rd32(0x00140f84u + + 0x2cu);
    }
L_00140f80:;
    {
        cpu->r[1] = add_flags(cpu, 0x00140f88u, cpu->r[1], 0, 0);
    }
L_00140f84:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00140f88:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00140f8c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_00140f90:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00140f94:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00140f98:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_00140f9c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_00140fa0:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_00140fa4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00140fa8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniObjD2Ev @ 00140fb4 (arm) */
void fn_00140fb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140fb4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniObjD1Ev @ 00140fb8 (arm) */
void fn_00140fb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140fb8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniObj14LoadMinimalObjEP8LZMAFile @ 00140fbc (arm) */
void fn_00140fbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140fbc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00140fc0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgrC2Ev @ 00140fc4 (arm) */
void fn_00140fc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140fc4:;
    {
        cpu->r[3] = rd32(0x00140fccu + + 0x1cu);
    }
L_00140fc8:;
    {
        cpu->r[12] = 0x00000064u;
    }
L_00140fcc:;
    {
        cpu->r[2] = rd32(0x00140fd4u + + 0x18u);
    }
L_00140fd0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00140fd8u, cpu->r[3], 0, 0);
    }
L_00140fd4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_00140fd8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00140fdc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00140fe0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00140fe4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgrC1Ev @ 00140ff0 (arm) */
void fn_00140ff0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00140ff0:;
    {
        cpu->r[3] = rd32(0x00140ff8u + + 0x1cu);
    }
L_00140ff4:;
    {
        cpu->r[12] = 0x00000064u;
    }
L_00140ff8:;
    {
        cpu->r[2] = rd32(0x00141000u + + 0x18u);
    }
L_00140ffc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00141004u, cpu->r[3], 0, 0);
    }
L_00141000:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_00141004:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00141008:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0014100c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00141010:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgrD2Ev @ 0014101c (arm) */
void fn_0014101c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014101c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7CAniMgrD1Ev @ 00141020 (arm) */
void fn_00141020(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141020:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z15GetDListVtxSizeP13GXVtxDescList @ 00141024 (arm) */
void fn_00141024(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141024:;
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
L_00141028:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0014102c:;
    {
        cpu->r[7] = rd32(0x00141034u + + 0x144u);
    }
L_00141030:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00141034:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0x8u);
    }
L_00141038:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0014103c:;
    {
        cpu->r[6] = rd32(0x00141044u + + 0x138u);
    }
L_00141040:;
    {
        cpu->r[7] = add_flags(cpu, 0x00141048u, cpu->r[7], 0, 0);
    }
L_00141044:;
    {
        cpu->r[8] = rd32(0x0014104cu + + 0x134u);
    }
L_00141048:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_0014104c:;
    {
        cpu->r[9] = rd32(0x00141054u + + 0x130u);
    }
L_00141050:;
    {
        cpu->r[6] = add_flags(cpu, 0x00141058u, cpu->r[6], 0, 0);
    }
L_00141054:;
    {
        cpu->r[8] = add_flags(cpu, 0x0014105cu, cpu->r[8], 0, 0);
    }
L_00141058:;
    {
        cpu->r[10] = 0x000000dcu;
    }
L_0014105c:;
    {
        cpu->r[9] = add_flags(cpu, 0x00141064u, cpu->r[9], 0, 0);
    }
L_00141060:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00141100;
        }
    }
L_00141064:;
    {
        cpu->r[2] = rd32(cpu->r[4] + - 0x4u);
    }
L_00141068:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0014106c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001410f0;
        }
    }
L_00141070:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001bu, 1, 1);
    }
L_00141074:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_0014110c;
        case 1: goto L_00141118;
        case 2: goto L_00141118;
        case 3: goto L_00141118;
        case 4: goto L_00141118;
        case 5: goto L_00141118;
        case 6: goto L_00141118;
        case 7: goto L_00141118;
        case 8: goto L_00141118;
        case 9: goto L_00141154;
        case 10: goto L_00141154;
        case 11: goto L_00141154;
        case 12: goto L_00141118;
        case 13: goto L_00141154;
        case 14: goto L_00141154;
        case 15: goto L_00141154;
        case 16: goto L_00141154;
        case 17: goto L_00141154;
        case 18: goto L_00141154;
        case 19: goto L_00141154;
        case 20: goto L_00141154;
        case 21: goto L_00141118;
        case 22: goto L_00141118;
        case 23: goto L_00141118;
        case 24: goto L_00141118;
        case 25: goto L_0014113c;
        case 26: goto L_0014116c;
        case 27: goto L_001410ec;
        default: guest_unimplemented(cpu, 0x00141074u); return; }
        }
    }
L_00141078:;
    {
        goto L_00141118;
    }
L_001410ec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000078u, 0, 0);
    }
L_001410f0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001410f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0x8u);
    }
L_001410f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_001410fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00141064;
        }
    }
L_00141100:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00141104:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00141108:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014110cu)) return;
    }
L_0014110c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00141110:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00141114:;
    {
        goto L_001410f4;
    }
L_00141118:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014111c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00141120:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00141124:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00141128:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_0014112c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00141130:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_00141134:;
    {
        cpu->r[14] = 0x00141138u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00141138:;
    {
        goto L_001410f4;
    }
L_0014113c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_00141140:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00141144:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000003u;
        }
    }
L_00141148:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000006u;
        }
    }
L_0014114c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_00141150:;
    {
        goto L_001410f4;
    }
L_00141154:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_00141158:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0014115c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00141160:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_00141164:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_00141168:;
    {
        goto L_001410f4;
    }
L_0014116c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000001eu, 0, 0);
    }
L_00141170:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00141174:;
    {
        goto L_001410f4;
    }
}

/* _Z12GetDListInfoPhiP13GXVtxDescListRiS2_ @ 00141188 (arm) */
void fn_00141188(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141188:;
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
L_0014118c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00141190:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00141194:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00141198:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0014119c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_001411a0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x38u);
    }
L_001411a4:;
    {
        cpu->r[14] = 0x001411a8u; fn_00141024(cpu);
    }
L_001411a8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001411ac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001411b0:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_001411b4:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_001411b8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001411bc:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0014126c;
        }
    }
L_001411c0:;
    {
        cpu->r[11] = rd32(0x001411c8u + + 0xc4u);
    }
L_001411c4:;
    {
        cpu->r[10] = rd32(0x001411ccu + + 0xc4u);
    }
L_001411c8:;
    {
        cpu->r[9] = rd32(0x001411d0u + + 0xc4u);
    }
L_001411cc:;
    {
        cpu->r[11] = add_flags(cpu, 0x001411d4u, cpu->r[11], 0, 0);
    }
L_001411d0:;
    {
        cpu->r[3] = rd32(0x001411d8u + + 0xc0u);
    }
L_001411d4:;
    {
        cpu->r[10] = add_flags(cpu, 0x001411dcu, cpu->r[10], 0, 0);
    }
L_001411d8:;
    {
        cpu->r[9] = add_flags(cpu, 0x001411e0u, cpu->r[9], 0, 0);
    }
L_001411dc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000010u, 0, 0);
    }
L_001411e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001411e8u, cpu->r[3], 0, 0);
    }
L_001411e4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001411e8:;
    {
        goto L_00141224;
    }
L_001411ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000098u, 1, 1);
    }
L_001411f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00141274;
        }
    }
L_001411f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001411f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_001411fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014121c;
        }
    }
L_00141200:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00141204:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00141208:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0014120c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00141210:;
    {
        cpu->r[12] = 0x00000139u;
    }
L_00141214:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_00141218:;
    {
        cpu->r[14] = 0x0014121cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014121c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_00141220:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0014126c;
        }
    }
L_00141224:;
    {
        cpu->r[3] = rd8(cpu->r[4]);
    }
L_00141228:;
    {
        uint32_t v = cpu->r[3] & 0x000000f8u; cpu->r[3] = v;
    }
L_0014122c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000090u, 1, 1);
    }
L_00141230:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001411ec;
        }
    }
L_00141234:;
    {
        cpu->r[3] = rd16(cpu->r[4] + + 0x1u);
    }
L_00141238:;
    {
        cpu->r[2] = 0x00005556u;
    }
L_0014123c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x5555u << 16);
    }
L_00141240:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_00141244:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[0] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_00141248:;
    {
        uint32_t v = cpu->r[8] * cpu->r[3] + cpu->r[4]; cpu->r[4] = v;
    }
L_0014124c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_00141250:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000003u, 0, 0);
    }
L_00141254:;
    {
        wr32(cpu->r[6], cpu->r[2]);
    }
L_00141258:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_0014125c:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_00141260:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00141264:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_00141268:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00141224;
        }
    }
L_0014126c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00141270:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00141274u)) return;
    }
L_00141274:;
    {
        cpu->r[3] = rd16(cpu->r[4] + + 0x1u);
    }
L_00141278:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0014127c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 0);
    }
L_00141280:;
    {
        uint32_t v = cpu->r[8] * cpu->r[3] + cpu->r[4]; cpu->r[4] = v;
    }
L_00141284:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00141288:;
    {
        goto L_00141250;
    }
}

/* _Z10SetupDListPhiP13GXVtxDescListi @ 0014129c (arm) */
void fn_0014129c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014129c:;
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
L_001412a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001412a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001412a8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001412ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_001412b0:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001412b4:;
    {
        cpu->r[14] = 0x001412b8u; fn_00141024(cpu);
    }
L_001412b8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001412bc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001412c0:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00141358;
        }
    }
L_001412c4:;
    {
        cpu->r[9] = rd32(0x001412ccu + + 0x94u);
    }
L_001412c8:;
    {
        cpu->r[8] = rd32(0x001412d0u + + 0x94u);
    }
L_001412cc:;
    {
        cpu->r[10] = rd32(0x001412d4u + + 0x94u);
    }
L_001412d0:;
    {
        cpu->r[9] = add_flags(cpu, 0x001412d8u, cpu->r[9], 0, 0);
    }
L_001412d4:;
    {
        cpu->r[11] = rd32(0x001412dcu + + 0x90u);
    }
L_001412d8:;
    {
        cpu->r[8] = add_flags(cpu, 0x001412e0u, cpu->r[8], 0, 0);
    }
L_001412dc:;
    {
        cpu->r[10] = add_flags(cpu, 0x001412e4u, cpu->r[10], 0, 0);
    }
L_001412e0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000020u, 0, 0);
    }
L_001412e4:;
    {
        cpu->r[11] = add_flags(cpu, 0x001412ecu, cpu->r[11], 0, 0);
    }
L_001412e8:;
    {
        goto L_00141324;
    }
L_001412ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000098u, 1, 1);
    }
L_001412f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014133c;
        }
    }
L_001412f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001412f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_001412fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014131c;
        }
    }
L_00141300:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00141304:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00141308:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0014130c:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_00141310:;
    {
        cpu->r[12] = 0x00000104u;
    }
L_00141314:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_00141318:;
    {
        cpu->r[14] = 0x0014131cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014131c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_00141320:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00141358;
        }
    }
L_00141324:;
    {
        cpu->r[3] = rd8(cpu->r[4]);
    }
L_00141328:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0014132c:;
    {
        uint32_t v = cpu->r[3] | cpu->r[6]; cpu->r[1] = v;
    }
L_00141330:;
    {
        uint32_t v = cpu->r[3] & 0x000000f8u; cpu->r[3] = v;
    }
L_00141334:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000090u, 1, 1);
    }
L_00141338:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001412ec;
        }
    }
L_0014133c:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000001u;
        wr8(cpu->r[2], cpu->r[1]);
        cpu->r[2] = wb_tmp;
    }
L_00141340:;
    {
        cpu->r[4] = rd16(cpu->r[4] + + 0x1u);
    }
L_00141344:;
    {
        uint32_t v = cpu->r[7] * cpu->r[4]; cpu->r[4] = v;
    }
L_00141348:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_0014134c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_00141350:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_00141354:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00141324;
        }
    }
L_00141358:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014135c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00141360u)) return;
    }
}

/* _ZN7CAniMgr7LoadAniEP7CAniObj @ 00141370 (arm) */
void fn_00141370(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141370:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00141374:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00141378:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014137c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001414bc;
        }
    }
L_00141380:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00141384:;
    {
        cpu->r[14] = 0x0014138cu;
    }
L_00141388:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014138cu)) return;
    }
L_0014138c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000005du, 1, 0);
    }
L_00141390:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 1);
    }
L_00141394:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[0]) {
        case 0: goto L_0014142c;
        case 1: goto L_001413c0;
        case 2: goto L_001414a4;
        case 3: goto L_001413c0;
        case 4: goto L_00141460;
        case 5: goto L_001413f4;
        case 6: goto L_001414a4;
        case 7: goto L_001414a4;
        case 8: goto L_001413f4;
        default: guest_unimplemented(cpu, 0x00141394u); return; }
        }
    }
L_00141398:;
    {
        goto L_001414a4;
    }
L_001413c0:;
    {
        cpu->r[1] = rd32(0x001413c8u + + 0x13cu);
    }
L_001413c4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001413c8:;
    {
        cpu->r[12] = rd32(0x001413d0u + + 0x138u);
    }
L_001413cc:;
    {
        cpu->r[14] = 0x0000009bu;
    }
L_001413d0:;
    {
        cpu->r[2] = rd32(0x001413d8u + + 0x134u);
    }
L_001413d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001413dcu, cpu->r[1], 0, 0);
    }
L_001413d8:;
    {
        cpu->r[3] = rd32(0x001413e0u + + 0x130u);
    }
L_001413dc:;
    {
        cpu->r[12] = add_flags(cpu, 0x001413e4u, cpu->r[12], 0, 0);
    }
L_001413e0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001413e8u, cpu->r[2], 0, 0);
    }
L_001413e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000002cu, 0, 0);
    }
L_001413e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001413f0u, cpu->r[3], 0, 0);
    }
L_001413ec:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001413f0:;
    {
        cpu->r[14] = 0x001413f4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001413f4:;
    {
        cpu->r[0] = 0x000000e4u;
    }
L_001413f8:;
    {
        cpu->r[14] = 0x001413fcu; fn_0018ba6c(cpu);
    }
L_001413fc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00141400:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00141404:;
    {
        cpu->r[14] = 0x00141408u; fn_0013b038(cpu);
    }
L_00141408:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014140c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00141410:;
    {
        cpu->r[14] = 0x00141418u;
    }
L_00141414:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00141418u)) return;
    }
L_00141418:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014141c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0014148c;
        }
    }
L_00141420:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00141424:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00141428:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014142cu)) return;
    }
L_0014142c:;
    {
        cpu->r[1] = rd32(0x00141434u + + 0xe0u);
    }
L_00141430:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00141434:;
    {
        cpu->r[12] = rd32(0x0014143cu + + 0xdcu);
    }
L_00141438:;
    {
        cpu->r[14] = 0x00000094u;
    }
L_0014143c:;
    {
        cpu->r[2] = rd32(0x00141444u + + 0xd8u);
    }
L_00141440:;
    {
        cpu->r[1] = add_flags(cpu, 0x00141448u, cpu->r[1], 0, 0);
    }
L_00141444:;
    {
        cpu->r[3] = rd32(0x0014144cu + + 0xd4u);
    }
L_00141448:;
    {
        cpu->r[12] = add_flags(cpu, 0x00141450u, cpu->r[12], 0, 0);
    }
L_0014144c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00141454u, cpu->r[2], 0, 0);
    }
L_00141450:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000002cu, 0, 0);
    }
L_00141454:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014145cu, cpu->r[3], 0, 0);
    }
L_00141458:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014145c:;
    {
        cpu->r[14] = 0x00141460u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00141460:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_00141464:;
    {
        cpu->r[14] = 0x00141468u; fn_0018ba6c(cpu);
    }
L_00141468:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0014146c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00141470:;
    {
        cpu->r[14] = 0x00141474u; fn_0014217c(cpu);
    }
L_00141474:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00141478:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0014147c:;
    {
        cpu->r[14] = 0x00141484u;
    }
L_00141480:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00141484u)) return;
    }
L_00141484:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00141488:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00141420;
        }
    }
L_0014148c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00141490:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00141494:;
    {
        cpu->r[14] = 0x0014149cu;
    }
L_00141498:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014149cu)) return;
    }
L_0014149c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001414a0:;
    {
        goto L_00141420;
    }
L_001414a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001414a8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001414ac:;
    {
        cpu->r[14] = 0x001414b4u;
    }
L_001414b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001414b4u)) return;
    }
L_001414b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000064u, 1, 1);
    }
L_001414b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001414c4;
        }
    }
L_001414bc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001414c0:;
    {
        goto L_00141420;
    }
L_001414c4:;
    {
        cpu->r[1] = rd32(0x001414ccu + + 0x58u);
    }
L_001414c8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001414cc:;
    {
        cpu->r[12] = rd32(0x001414d4u + + 0x54u);
    }
L_001414d0:;
    {
        cpu->r[14] = 0x000000a2u;
    }
L_001414d4:;
    {
        cpu->r[2] = rd32(0x001414dcu + + 0x50u);
    }
L_001414d8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001414e0u, cpu->r[1], 0, 0);
    }
L_001414dc:;
    {
        cpu->r[3] = rd32(0x001414e4u + + 0x4cu);
    }
L_001414e0:;
    {
        cpu->r[12] = add_flags(cpu, 0x001414e8u, cpu->r[12], 0, 0);
    }
L_001414e4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001414ecu, cpu->r[2], 0, 0);
    }
L_001414e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000002cu, 0, 0);
    }
L_001414ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x001414f4u, cpu->r[3], 0, 0);
    }
L_001414f0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001414f4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001414f8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001414fc:;
    {
        cpu->r[14] = 0x00141500u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00141500:;
    {
        goto L_00141420;
    }
}

/* _ZN7CAniMgrD0Ev @ 00141534 (arm) */
void fn_00141534(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141534:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00141538:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014153c:;
    {
        cpu->r[14] = 0x00141540u; fn_00141020(cpu);
    }
L_00141540:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00141544:;
    {
        cpu->r[14] = 0x00141548u; fn_0018ba20(cpu);
    }
L_00141548:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014154c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00141550u)) return;
    }
}

/* _ZN7CAniObjD0Ev @ 00141550 (arm) */
void fn_00141550(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141550:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00141554:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00141558:;
    {
        cpu->r[14] = 0x0014155cu; fn_00140fb8(cpu);
    }
L_0014155c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00141560:;
    {
        cpu->r[14] = 0x00141564u; fn_0018ba20(cpu);
    }
L_00141564:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00141568:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014156cu)) return;
    }
}

/* _ZN7CAniObj7LoadObjEP8LZMAFilePttPssS3_sbit @ 0014156c (arm) */
void fn_0014156c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014156c:;
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
L_00141570:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_00141574:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00141578:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0014157c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00141580:;
    {
        cpu->r[5] = rd16(cpu->r[13] + + 0x54u);
    }
L_00141584:;
    {
        cpu->r[14] = 0x00141588u; fn_000fc678(cpu);
    }
L_00141588:;
    {
        cpu->r[8] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0014158c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000058u, 1, 1);
    }
L_00141590:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001415a0;
        }
    }
L_00141594:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00141598:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0014159c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001415a0u)) return;
    }
L_001415a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001415a4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x50u);
    }
L_001415a8:;
    {
        cpu->r[14] = 0x001415acu; fn_000fc678(cpu);
    }
L_001415ac:;
    {
        cpu->r[8] = (uint32_t)((int8_t)cpu->r[8]);
    }
L_001415b0:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], 0x00000002u, 1, 0);
    }
L_001415b4:;
    {
        cpu->r[0] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_001415b8:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[8] = v;
    }
L_001415bc:;
    {
        cpu->r[8] = (uint32_t)((int16_t)cpu->r[8]);
    }
L_001415c0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], 0x0000005du, 1, 0);
    }
L_001415c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_001415c8:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_00141690;
        case 1: goto L_001415f4;
        case 2: goto L_001416e4;
        case 3: goto L_001415f4;
        case 4: goto L_001416c4;
        case 5: goto L_00141628;
        case 6: goto L_00141594;
        case 7: goto L_00141594;
        case 8: goto L_00141628;
        default: guest_unimplemented(cpu, 0x001415c8u); return; }
        }
    }
L_001415cc:;
    {
        goto L_00141594;
    }
L_001415f4:;
    {
        cpu->r[1] = rd32(0x001415fcu + + 0x174u);
    }
L_001415f8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001415fc:;
    {
        cpu->r[12] = rd32(0x00141604u + + 0x170u);
    }
L_00141600:;
    {
        cpu->r[14] = 0x00000052u;
    }
L_00141604:;
    {
        cpu->r[2] = rd32(0x0014160cu + + 0x16cu);
    }
L_00141608:;
    {
        cpu->r[1] = add_flags(cpu, 0x00141610u, cpu->r[1], 0, 0);
    }
L_0014160c:;
    {
        cpu->r[3] = rd32(0x00141614u + + 0x168u);
    }
L_00141610:;
    {
        cpu->r[12] = add_flags(cpu, 0x00141618u, cpu->r[12], 0, 0);
    }
L_00141614:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014161cu, cpu->r[2], 0, 0);
    }
L_00141618:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_0014161c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00141624u, cpu->r[3], 0, 0);
    }
L_00141620:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00141624:;
    {
        cpu->r[14] = 0x00141628u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00141628:;
    {
        cpu->r[0] = 0x000001a0u;
    }
L_0014162c:;
    {
        cpu->r[14] = 0x00141630u; fn_0018ba6c(cpu);
    }
L_00141630:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00141634:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00141638:;
    {
        cpu->r[14] = 0x0014163cu; fn_0013bd80(cpu);
    }
L_0014163c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00141640:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00141594;
        }
    }
L_00141644:;
    {
        cpu->r[12] = rd32(cpu->r[10]);
    }
L_00141648:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014164c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00141650:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00141654:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00141658:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_0014165c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_00141660:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00141664:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_00141668:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0014166c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_00141670:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_00141674:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[4]);
    }
L_00141678:;
    {
        cpu->r[14] = 0x00141680u;
    }
L_0014167c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00141680u)) return;
    }
L_00141680:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_00141684:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00141758;
        }
    }
L_00141688:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0014168c:;
    {
        goto L_00141598;
    }
L_00141690:;
    {
        cpu->r[1] = rd32(0x00141698u + + 0xe8u);
    }
L_00141694:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00141698:;
    {
        cpu->r[12] = rd32(0x001416a0u + + 0xe4u);
    }
L_0014169c:;
    {
        cpu->r[14] = 0x0000003fu;
    }
L_001416a0:;
    {
        cpu->r[2] = rd32(0x001416a8u + + 0xe0u);
    }
L_001416a4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001416acu, cpu->r[1], 0, 0);
    }
L_001416a8:;
    {
        cpu->r[3] = rd32(0x001416b0u + + 0xdcu);
    }
L_001416ac:;
    {
        cpu->r[12] = add_flags(cpu, 0x001416b4u, cpu->r[12], 0, 0);
    }
L_001416b0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001416b8u, cpu->r[2], 0, 0);
    }
L_001416b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_001416b8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001416c0u, cpu->r[3], 0, 0);
    }
L_001416bc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001416c0:;
    {
        cpu->r[14] = 0x001416c4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001416c4:;
    {
        cpu->r[0] = 0x00000104u;
    }
L_001416c8:;
    {
        cpu->r[14] = 0x001416ccu; fn_0018ba6c(cpu);
    }
L_001416cc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001416d0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001416d4:;
    {
        cpu->r[14] = 0x001416d8u; fn_00142bc0(cpu);
    }
L_001416d8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001416dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00141644;
        }
    }
L_001416e0:;
    {
        goto L_00141594;
    }
L_001416e4:;
    {
        cpu->r[0] = 0x000003f0u;
    }
L_001416e8:;
    {
        cpu->r[14] = 0x001416ecu; fn_0018ba6c(cpu);
    }
L_001416ec:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001416f0:;
    {
        cpu->r[14] = 0x001416f4u; fn_0015b2c8(cpu);
    }
L_001416f4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001416f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00141594;
        }
    }
L_001416fc:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00141700:;
    {
        cpu->r[12] = rd32(cpu->r[10]);
    }
L_00141704:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00141708:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0014170c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_00141710:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00141714:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_00141718:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0014171c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00141720:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_00141724:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_00141728:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_0014172c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_00141730:;
    {
        cpu->r[14] = 0x00141738u;
    }
L_00141734:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00141738u)) return;
    }
L_00141738:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_0014173c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00141688;
        }
    }
L_00141740:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00141744:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00141748:;
    {
        cpu->r[14] = 0x00141750u;
    }
L_0014174c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00141750u)) return;
    }
L_00141750:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00141754:;
    {
        goto L_00141598;
    }
L_00141758:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0014175c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00141760:;
    {
        cpu->r[14] = 0x00141768u;
    }
L_00141764:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00141768u)) return;
    }
L_00141768:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014176c:;
    {
        goto L_00141598;
    }
}

/* _ZN13CAniObjDLists11GetFrmCountEi @ 00141790 (arm) */
void fn_00141790(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141790:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00141794:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CAniObjDLists7GetTypeEv @ 00141798 (arm) */
void fn_00141798(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141798:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_0014179c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CAniObjDLists17GetMeshGroupCountEi @ 001417a0 (arm) */
void fn_001417a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001417a0:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x28u);
    }
L_001417a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CAniObjDLists18GetMeshGroupShaderEii @ 001417a8 (arm) */
void fn_001417a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001417a8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x9cu);
    }
L_001417ac:;
    {
        cpu->r[1] = 0x0000004cu;
    }
L_001417b0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_001417b4:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x30u);
    }
L_001417b8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CAniObjDLists17GetMeshGroupVertsEii @ 001417bc (arm) */
void fn_001417bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001417bc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x9cu);
    }
L_001417c0:;
    {
        cpu->r[1] = 0x0000004cu;
    }
L_001417c4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_001417c8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x38u);
    }
L_001417cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CAniObjDLists17GetMeshGroupFacesEii @ 001417d0 (arm) */
void fn_001417d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001417d0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x9cu);
    }
L_001417d4:;
    {
        cpu->r[1] = 0x0000004cu;
    }
L_001417d8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_001417dc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x34u);
    }
L_001417e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CAniObjDLists17GetBoundingCenterEv @ 001417e4 (arm) */
void fn_001417e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001417e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000064u, 0, 0);
    }
L_001417e8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CAniObjDLists17GetBoundingRadiusEv @ 001417ec (arm) */
void fn_001417ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001417ec:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x70u);
    }
L_001417f0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CAniMgrDLists21GetMeshGroupTextureIdEii @ 001417f4 (arm) */
void fn_001417f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001417f4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001417f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CAniMgrDLists19ReplaceColorTextureEiib @ 001417fc (arm) */
void fn_001417fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001417fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CAniMgrDLists9GetAniObjEv @ 00141800 (arm) */
void fn_00141800(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141800:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_00141804:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CAniObjDLists12RayIntersectEP8Vector3dS1_S1_PfPiS2_S2_ @ 00141808 (arm) */
void fn_00141808(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141808:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0014180c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CAniObjDLists20RayIntersectTriangleEP8Vector3dS1_S1_S1_S1_PfS2_S2_ @ 00141810 (arm) */
void fn_00141810(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141810:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00141814:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CAniMgrDLists9SetTexMapEiPP7Texture @ 00141818 (arm) */
void fn_00141818(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141818:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0014181c:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x28u);
    }
L_00141820:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00141824:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00141828:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0014182c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00141830:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00141834:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00141838:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000010u;
        wr32(cpu->r[1], cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_0014183c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00141840:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00141834;
        }
    }
L_00141844:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CAniMgrDLists16GetGroupStageTexEii @ 00141848 (arm) */
void fn_00141848(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141848:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_0014184c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00141850:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00141854:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00141858:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[0]);
        }
    }
L_0014185c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CAniMgrDLists12RayIntersectEiP8Vector3dS1_S1_PfPP7TextureS2_S2_ @ 00141860 (arm) */
void fn_00141860(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141860:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00141864:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_00141868:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014186c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_00141870:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_00141874:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00141878:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0014187c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_00141880:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00141884:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00141888:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0014188c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00141890:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00141894:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_00141898:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0014189c:;
    {
        cpu->r[14] = 0x001418a0u; fn_00141808(cpu);
    }
L_001418a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001418a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001418c4;
        }
    }
L_001418a8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001418ac:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001418b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001418b4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 4u, &shc));
    }
L_001418b8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001418bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_001418c0:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001418c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001418c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001418ccu)) return;
    }
}

/* _ZN7gxGroup18CountNumPrimitivesEv @ 001418cc (arm) */
void fn_001418cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001418cc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x44u);
    }
L_001418d0:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_001418d4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001418d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001418f4;
        }
    }
L_001418dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001418e0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x48u);
    }
L_001418e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001418e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014192c;
        }
    }
L_001418ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_001418f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00141900;
        }
    }
L_001418f4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001418f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_001418fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00141900:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00141904:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00141908:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x4u);
    }
L_0014190c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00141910:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        cpu->r[4] = rd32(cpu->r[2]);
        cpu->r[2] = wb_tmp;
    }
L_00141914:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00141918:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000002u, 1, 0);
    }
L_0014191c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 0);
    }
L_00141920:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_00141924:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00141908;
        }
    }
L_00141928:;
    {
        goto L_001418f8;
    }
L_0014192c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00141930:;
    {
        cpu->r[5] = 0x00005556u;
    }
L_00141934:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x5555u << 16);
    }
L_00141938:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0014193c:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x4u);
    }
L_00141940:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00141944:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        cpu->r[12] = rd32(cpu->r[2]);
        cpu->r[2] = wb_tmp;
    }
L_00141948:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0014194c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 0);
    }
L_00141950:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[5] * (int64_t)(int32_t)cpu->r[12]; cpu->r[6] = (uint32_t)v; cpu->r[4] = (uint32_t)(v >> 32); }
    }
L_00141954:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[4], shifter(cpu->r[12], 1, 31u, &shc), 1, 0);
    }
L_00141958:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_0014195c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014193c;
        }
    }
L_00141960:;
    {
        goto L_001418f8;
    }
}

/* _ZN13CAniMgrDLists16RenderMeshGroupsEiPh @ 00141964 (arm) */
void fn_00141964(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141964:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_00141968:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_0014196c:;
    {
        return fn_00137e88(cpu);
    }
}

/* _ZN13CAniMgrDLists15RenderMeshRangeEiib @ 00141970 (arm) */
void fn_00141970(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141970:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_00141974:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00141978:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_0014197c:;
    {
        return fn_0013841c(cpu);
    }
}

/* _ZN13CAniMgrDLists10RenderMeshEij @ 00141980 (arm) */
void fn_00141980(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141980:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_00141984:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_00141988:;
    {
        return fn_0013841c(cpu);
    }
}

/* _ZN13CAniMgrDLists19ClearBuffersFromGPUEv @ 0014198c (arm) */
void fn_0014198c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014198c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_00141990:;
    {
        return fn_00136fc0(cpu);
    }
}

/* _ZN13CAniMgrDLists16SendBuffersToGPUEbii @ 00141994 (arm) */
void fn_00141994(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141994:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_00141998:;
    {
        return fn_00137c84(cpu);
    }
}

/* _ZN7gxGroup10DeStripifyEv @ 0014199c (arm) */
void fn_0014199c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014199c:;
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
L_001419a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001419a4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001419a8:;
    {
        cpu->r[14] = 0x001419acu; fn_001418cc(cpu);
    }
L_001419ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001419b0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_001419b4:;
    {
        cpu->r[14] = 0x001419b8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001419b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001419bc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_001419c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00141b14;
        }
    }
L_001419c4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001419c8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x44u);
    }
L_001419cc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001419d0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001419d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00141bb0;
        }
    }
L_001419d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001419dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001419e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001419e4:;
    {
        cpu->r[7] = 0x00005556u;
    }
L_001419e8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x5555u << 16);
    }
L_001419ec:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001419f0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x48u);
    }
L_001419f4:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001419f8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x3cu);
    }
L_001419fc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[7]);
    }
L_00141a00:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_00141a04:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00141a08:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00141a0c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00141a10:;
    {
        cpu->r[11] = rd32(cpu->r[2] + + 0x40u);
    }
L_00141a14:;
    {
        goto L_00141a3c;
    }
L_00141a18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_00141a1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00141b1c;
        }
    }
L_00141a20:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00141a24:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00141a28:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x8u);
    }
L_00141a2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00141a30:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00141a34:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00141a38:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00141ad4;
        }
    }
L_00141a3c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00141a40:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[5] = v1;
    }
L_00141a44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_00141a48:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_00141a4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00141a18;
        }
    }
L_00141a50:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x14u);
    }
L_00141a54:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[7] * (int64_t)(int32_t)cpu->r[5]; cpu->r[7] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_00141a58:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[5], 1, 31u, &shc), 1, 0);
    }
L_00141a5c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00141a60:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00141a20;
        }
    }
L_00141a64:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[6] = v;
    }
L_00141a68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], cpu->r[0], 0, 0);
    }
L_00141a6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_00141a70:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00141a74:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[11], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00141a78:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00141a7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_00141a80:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00141a84:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00141a88:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00141a8c:;
    {
        uint32_t wb_tmp = cpu->r[1] + cpu->r[2];
        cpu->r[7] = rd16(cpu->r[1] + cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_00141a90:;
    {
        uint32_t wb_tmp = cpu->r[3] + cpu->r[2];
        wr16(cpu->r[3] + cpu->r[2], cpu->r[7]);
        cpu->r[3] = wb_tmp;
    }
L_00141a94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000006u, 0, 0);
    }
L_00141a98:;
    {
        cpu->r[7] = rd16(cpu->r[1] + + 0x2u);
    }
L_00141a9c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_00141aa0:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[7]);
    }
L_00141aa4:;
    {
        cpu->r[1] = rd16(cpu->r[1] + + 0x4u);
    }
L_00141aa8:;
    {
        wr16(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_00141aac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00141a84;
        }
    }
L_00141ab0:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00141ab4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_00141ab8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x8u);
    }
L_00141abc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
    }
L_00141ac0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00141ac4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00141ac8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00141acc:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00141ad0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00141a3c;
        }
    }
L_00141ad4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_00141ad8:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00141adc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00141ae0:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_00141ae4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00141ae8:;
    {
        wr32(cpu->r[7] + + 0x3cu, cpu->r[3]);
    }
L_00141aec:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00141af0:;
    {
        wr32(cpu->r[7] + + 0x44u, cpu->r[3]);
    }
L_00141af4:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[10]);
    }
L_00141af8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00141b08;
        }
    }
L_00141afc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00141b00:;
    {
        cpu->r[14] = 0x00141b04u; fn_0018ba60(cpu);
    }
L_00141b04:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[4]);
    }
L_00141b08:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00141b0c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00141b10:;
    {
        wr32(cpu->r[3] + + 0x40u, cpu->r[2]);
    }
L_00141b14:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00141b18:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00141b1cu)) return;
    }
L_00141b1c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00141b20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00141b24:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 1);
    }
L_00141b28:;
    {
        cpu->r[7] = rd16(cpu->r[11] + cpu->r[2]);
    }
L_00141b2c:;
    {
        cpu->r[1] = rd16(cpu->r[3] + + 0x2u);
    }
L_00141b30:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00141a20;
        }
    }
L_00141b34:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00141b38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_00141b3c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00141b40:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000003u, 1, 0);
    }
L_00141b44:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[2], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_00141b48:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[9]);
    }
L_00141b4c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00141b50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x00000003u, 0, 0);
    }
L_00141b54:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00141b58:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_00141b5c:;
    {
        cpu->r[12] = rd16(cpu->r[11] + cpu->r[0]);
    }
L_00141b60:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_00141b64:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_00141b68:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00141b6c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[5] + cpu->r[6];
        wr16(cpu->r[5] + cpu->r[6], cpu->r[7]);
        cpu->r[5] = wb_tmp;
        }
    }
L_00141b70:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_00141b74:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[4] + cpu->r[6];
        wr16(cpu->r[4] + cpu->r[6], cpu->r[7]);
        cpu->r[4] = wb_tmp;
        }
    }
L_00141b78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_00141b7c:;
    {
        if (cond_test(cpu, 1)) {
        wr16(cpu->r[5] + + 0x2u, cpu->r[1]);
        }
    }
L_00141b80:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00141b84:;
    {
        if (cond_test(cpu, 2)) {
        wr16(cpu->r[4] + + 0x4u, cpu->r[1]);
        }
    }
L_00141b88:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_00141b8c:;
    {
        if (cond_test(cpu, 1)) {
        wr16(cpu->r[5] + + 0x4u, cpu->r[12]);
        }
    }
L_00141b90:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_00141b94:;
    {
        if (cond_test(cpu, 2)) {
        wr16(cpu->r[4] + + 0x2u, cpu->r[12]);
        }
    }
L_00141b98:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_00141b9c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000006u, 0, 0);
    }
L_00141ba0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00141ba4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00141b5c;
        }
    }
L_00141ba8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_00141bac:;
    {
        goto L_00141a20;
    }
L_00141bb0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00141bb4:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00141bb8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00141bbc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x48u);
    }
L_00141bc0:;
    {
        cpu->r[11] = rd32(cpu->r[2] + + 0x40u);
    }
L_00141bc4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_00141bc8:;
    {
        goto L_00141ad4;
    }
}

/* _ZN7gxGroupD1Ev @ 00141bcc (arm) */
void fn_00141bcc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141bcc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00141bd0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00141bd4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x28u);
    }
L_00141bd8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00141bdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00141bec;
        }
    }
L_00141be0:;
    {
        cpu->r[14] = 0x00141be4u; fn_0018ba60(cpu);
    }
L_00141be4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00141be8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_00141bec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_00141bf0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00141bf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00141c04;
        }
    }
L_00141bf8:;
    {
        cpu->r[14] = 0x00141bfcu; fn_0018ba60(cpu);
    }
L_00141bfc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00141c00:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_00141c04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00141c08:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00141c0cu)) return;
    }
}

/* _ZN7gxGroupD2Ev @ 00141c0c (arm) */
void fn_00141c0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141c0c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00141c10:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00141c14:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x28u);
    }
L_00141c18:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00141c1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00141c2c;
        }
    }
L_00141c20:;
    {
        cpu->r[14] = 0x00141c24u; fn_0018ba60(cpu);
    }
L_00141c24:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00141c28:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_00141c2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_00141c30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00141c34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00141c44;
        }
    }
L_00141c38:;
    {
        cpu->r[14] = 0x00141c3cu; fn_0018ba60(cpu);
    }
L_00141c3c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00141c40:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_00141c44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00141c48:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00141c4cu)) return;
    }
}

/* _Z18CountDListCommandsPhii @ 00141c4c (arm) */
void fn_00141c4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141c4c:;
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
L_00141c50:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00141c54:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_00141c58:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00141c5c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00141c60:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00141c64:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_00141c68:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00141d00;
        }
    }
L_00141c6c:;
    {
        cpu->r[10] = rd32(0x00141c74u + + 0x98u);
    }
L_00141c70:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00141c74:;
    {
        cpu->r[9] = rd32(0x00141c7cu + + 0x94u);
    }
L_00141c78:;
    {
        cpu->r[8] = 0x000003c4u;
    }
L_00141c7c:;
    {
        cpu->r[11] = rd32(0x00141c84u + + 0x90u);
    }
L_00141c80:;
    {
        cpu->r[10] = add_flags(cpu, 0x00141c88u, cpu->r[10], 0, 0);
    }
L_00141c84:;
    {
        cpu->r[3] = rd32(0x00141c8cu + + 0x8cu);
    }
L_00141c88:;
    {
        cpu->r[9] = add_flags(cpu, 0x00141c90u, cpu->r[9], 0, 0);
    }
L_00141c8c:;
    {
        cpu->r[11] = add_flags(cpu, 0x00141c94u, cpu->r[11], 0, 0);
    }
L_00141c90:;
    {
        cpu->r[3] = add_flags(cpu, 0x00141c98u, cpu->r[3], 0, 0);
    }
L_00141c94:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00141c98:;
    {
        goto L_00141cd8;
    }
L_00141c9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000098u, 1, 1);
    }
L_00141ca0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00141cec;
        }
    }
L_00141ca4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00141ca8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_00141cac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00141cd0;
        }
    }
L_00141cb0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00141cb4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00141cb8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00141cbc:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00141cc0:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_00141cc4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_00141cc8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00141ccc:;
    {
        cpu->r[14] = 0x00141cd0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00141cd0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_00141cd4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00141d00;
        }
    }
L_00141cd8:;
    {
        cpu->r[3] = rd8(cpu->r[4]);
    }
L_00141cdc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000003u, 0, 0);
    }
L_00141ce0:;
    {
        uint32_t v = cpu->r[3] & 0x000000f8u; cpu->r[3] = v;
    }
L_00141ce4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000090u, 1, 1);
    }
L_00141ce8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00141c9c;
        }
    }
L_00141cec:;
    {
        cpu->r[4] = rd16(cpu->r[4] + + 0x1u);
    }
L_00141cf0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00141cf4:;
    {
        uint32_t v = cpu->r[7] * cpu->r[4] + cpu->r[2]; cpu->r[4] = v;
    }
L_00141cf8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_00141cfc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00141cd8;
        }
    }
L_00141d00:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00141d04:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00141d08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00141d0cu)) return;
    }
}

/* _Z15CountDListVertsPhii @ 00141d1c (arm) */
void fn_00141d1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141d1c:;
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
L_00141d20:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00141d24:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_00141d28:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00141d2c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00141d30:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00141d34:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_00141d38:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00141dc8;
        }
    }
L_00141d3c:;
    {
        cpu->r[9] = rd32(0x00141d44u + + 0x90u);
    }
L_00141d40:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00141d44:;
    {
        cpu->r[8] = rd32(0x00141d4cu + + 0x8cu);
    }
L_00141d48:;
    {
        cpu->r[10] = rd32(0x00141d50u + + 0x8cu);
    }
L_00141d4c:;
    {
        cpu->r[9] = add_flags(cpu, 0x00141d54u, cpu->r[9], 0, 0);
    }
L_00141d50:;
    {
        cpu->r[11] = rd32(0x00141d58u + + 0x88u);
    }
L_00141d54:;
    {
        cpu->r[8] = add_flags(cpu, 0x00141d5cu, cpu->r[8], 0, 0);
    }
L_00141d58:;
    {
        cpu->r[10] = add_flags(cpu, 0x00141d60u, cpu->r[10], 0, 0);
    }
L_00141d5c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000014u, 0, 0);
    }
L_00141d60:;
    {
        cpu->r[11] = add_flags(cpu, 0x00141d68u, cpu->r[11], 0, 0);
    }
L_00141d64:;
    {
        goto L_00141da0;
    }
L_00141d68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000098u, 1, 1);
    }
L_00141d6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00141db4;
        }
    }
L_00141d70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00141d74:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_00141d78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00141d98;
        }
    }
L_00141d7c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00141d80:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00141d84:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00141d88:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_00141d8c:;
    {
        cpu->r[12] = 0x0000039du;
    }
L_00141d90:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_00141d94:;
    {
        cpu->r[14] = 0x00141d98u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00141d98:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_00141d9c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00141dc8;
        }
    }
L_00141da0:;
    {
        cpu->r[3] = rd8(cpu->r[4]);
    }
L_00141da4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000003u, 0, 0);
    }
L_00141da8:;
    {
        uint32_t v = cpu->r[3] & 0x000000f8u; cpu->r[3] = v;
    }
L_00141dac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000090u, 1, 1);
    }
L_00141db0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00141d68;
        }
    }
L_00141db4:;
    {
        cpu->r[4] = rd16(cpu->r[4] + + 0x1u);
    }
L_00141db8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_00141dbc:;
    {
        uint32_t v = cpu->r[7] * cpu->r[4] + cpu->r[2]; cpu->r[4] = v;
    }
L_00141dc0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_00141dc4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00141da0;
        }
    }
L_00141dc8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00141dcc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00141dd0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00141dd4u)) return;
    }
}

/* _ZN7gxGroupC1Ev @ 00141de4 (arm) */
void fn_00141de4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141de4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00141de8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00141dec:;
    {
        cpu->r[1] = 0x000000ffu;
    }
L_00141df0:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_00141df4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00141df8:;
    {
        cpu->r[14] = 0x00141dfcu; imp_memset(cpu); /* memset */
    }
L_00141dfc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00141e00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00141e04:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_00141e08:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_00141e0c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_00141e10:;
    {
        wr8(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_00141e14:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_00141e18:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00141e1cu)) return;
    }
}

/* _ZN7gxGroupC2Ev @ 00141e1c (arm) */
void fn_00141e1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141e1c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00141e20:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00141e24:;
    {
        cpu->r[1] = 0x000000ffu;
    }
L_00141e28:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_00141e2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00141e30:;
    {
        cpu->r[14] = 0x00141e34u; imp_memset(cpu); /* memset */
    }
L_00141e34:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00141e38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00141e3c:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_00141e40:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_00141e44:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_00141e48:;
    {
        wr8(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_00141e4c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_00141e50:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00141e54u)) return;
    }
}

/* _ZN13CAniMgrDLists4InitEv @ 00141e54 (arm) */
void fn_00141e54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141e54:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00141e58:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00141e5c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00141e60:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x28u);
    }
L_00141e64:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 4u, &shc); cpu->r[5] = v;
    }
L_00141e68:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00141e6c:;
    {
        cpu->r[14] = 0x00141e70u; imp__Znaj(cpu); /* _Znaj */
    }
L_00141e70:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00141e74:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_00141e78:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_00141e7c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00141e80u)) return;
        }
    }
L_00141e80:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00141e84:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00141e88:;
    {
        cpu->r[14] = 0x00141e8cu; imp_memset(cpu); /* memset */
    }
L_00141e8c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00141e90:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00141e94u)) return;
    }
}

/* _ZN13CAniMgrDLists9IsVisibleEP7CMatrix @ 00141e94 (arm) */
void fn_00141e94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141e94:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00141e98:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00141ea0u + + 0x54u);
    }
L_00141e9c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00141ea0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00141ea4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00141ea8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_00141eac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00141eb0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00141eb4:;
    {
        cpu->r[4] = rd32(0x00141ebcu + + 0x3cu);
    }
L_00141eb8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000064u, 0, 0);
    }
L_00141ebc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00141ec0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00141ec4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00141ec8:;
    {
        cpu->r[14] = 0x00141eccu; fn_001533e4(cpu);
    }
L_00141ecc:;
    {
        cpu->r[3] = rd32(0x00141ed4u + + 0x28u);
    }
L_00141ed0:;
    {
        cpu->r[4] = add_flags(cpu, 0x00141ed8u, cpu->r[4], 0, 0);
    }
L_00141ed4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_00141ed8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00141edc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00141ee0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x70u);
    }
L_00141ee4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00141ee8:;
    {
        cpu->r[14] = 0x00141eecu; fn_0012de90(cpu);
    }
L_00141eec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00141ef0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00141ef4u)) return;
    }
}

/* _ZN13CAniMgrDLists8HasAlphaEv @ 00141f00 (arm) */
void fn_00141f00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141f00:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00141f04:;
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
L_00141f08:;
    {
        cpu->r[2] = rd32(0x00141f10u + + 0x70u);
    }
L_00141f0c:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x28u);
    }
L_00141f10:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00141f14:;
    {
        cpu->r[2] = add_flags(cpu, 0x00141f1cu, cpu->r[2], 0, 0);
    }
L_00141f18:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00141f1c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00141f78;
        }
    }
L_00141f20:;
    {
        cpu->r[1] = rd32(0x00141f28u + + 0x5cu);
    }
L_00141f24:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00141f28:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_00141f2c:;
    {
        cpu->r[10] = 0x00001288u;
    }
L_00141f30:;
    {
        cpu->r[8] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00141f34:;
    {
        goto L_00141f44;
    }
L_00141f38:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_00141f3c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00141f78;
        }
    }
L_00141f40:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_00141f44:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x9cu);
    }
L_00141f48:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00141f4c:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_00141f50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_00141f54:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000004cu, 0, 0);
    }
L_00141f58:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x30u);
    }
L_00141f5c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[10]);
    }
L_00141f60:;
    {
        cpu->r[14] = 0x00141f64u; fn_00147cd8(cpu);
    }
L_00141f64:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x2cu);
    }
L_00141f68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00141f6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00141f38;
        }
    }
L_00141f70:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00141f74:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00141f78u)) return;
    }
L_00141f78:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00141f7c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00141f80u)) return;
    }
}

/* _ZN13CAniMgrDLists11SetTexturesEv @ 00141f88 (arm) */
void fn_00141f88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00141f88:;
    {
        cpu->r[2] = rd32(0x00141f90u + + 0x120u);
    }
L_00141f8c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00141f90:;
    {
        cpu->r[1] = rd32(0x00141f98u + + 0x11cu);
    }
L_00141f94:;
    {
        cpu->r[2] = add_flags(cpu, 0x00141f9cu, cpu->r[2], 0, 0);
    }
L_00141f98:;
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
L_00141f9c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00141fa0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00141fa4:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00141fa8:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x28u);
    }
L_00141fac:;
    {
        cpu->r[11] = rd32(cpu->r[3] + + 0x14u);
    }
L_00141fb0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00141fb4:;
    {
        cpu->r[9] = rd32(cpu->r[2]);
    }
L_00141fb8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00141fbc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001420a8;
        }
    }
L_00141fc0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00141fc4:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00141fc8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00141fcc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_00141fd0:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x9cu);
    }
L_00141fd4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00141fd8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_00141fdc:;
    {
        cpu->r[3] = rd8(cpu->r[8] + + 0x24u);
    }
L_00141fe0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00141fe4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142074;
        }
    }
L_00141fe8:;
    {
        cpu->r[6] = rd32(cpu->r[13]);
    }
L_00141fec:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00141ff0:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_00141ff4:;
    {
        goto L_0014202c;
    }
L_00141ff8:;
    {
        cpu->r[14] = 0x00141ffcu; fn_00135d9c(cpu);
    }
L_00141ffc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00142000:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00142004:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00142008:;
    {
        cpu->r[7] = rd32(cpu->r[10] + + 0xcu);
    }
L_0014200c:;
    {
        cpu->r[14] = 0x00142010u; fn_00135cf4(cpu);
    }
L_00142010:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00142014:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00142018:;
    {
        wr32(cpu->r[7] + cpu->r[5], cpu->r[0]);
    }
L_0014201c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00142020:;
    {
        cpu->r[3] = rd8(cpu->r[8] + + 0x24u);
    }
L_00142024:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00142028:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00142074;
        }
    }
L_0014202c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_00142030:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00142034:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00142038:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_0014203c:;
    {
        cpu->r[7] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x4u);
    }
L_00142040:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00142044:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_00142048:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0014204c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00141ff8;
        }
    }
L_00142050:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0xcu);
    }
L_00142054:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00142058:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0014205c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00142060:;
    {
        wr32(cpu->r[3] + cpu->r[6], cpu->r[1]);
    }
L_00142064:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00142068:;
    {
        cpu->r[3] = rd8(cpu->r[8] + + 0x24u);
    }
L_0014206c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00142070:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0014202c;
        }
    }
L_00142074:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00142078:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0014207c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00142080:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00142084:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_00142088:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0014208c:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_00142090:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000004cu, 0, 0);
    }
L_00142094:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00142098:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_0014209c:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_001420a0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[10] + + 0x8u);
        }
    }
L_001420a4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00141fd0;
        }
    }
L_001420a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001420ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001420b0u)) return;
    }
}

/* _ZN13CAniMgrDListsD1Ev @ 001420b8 (arm) */
void fn_001420b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001420b8:;
    {
        cpu->r[3] = rd32(0x001420c0u + + 0x44u);
    }
L_001420bc:;
    {
        cpu->r[2] = rd32(0x001420c4u + + 0x44u);
    }
L_001420c0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001420c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001420ccu, cpu->r[3], 0, 0);
    }
L_001420c8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001420cc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001420d0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001420d4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001420d8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001420dc:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_001420e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001420e4:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001420e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001420f4;
        }
    }
L_001420ec:;
    {
        cpu->r[14] = 0x001420f0u; fn_0018ba60(cpu);
    }
L_001420f0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_001420f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001420f8:;
    {
        cpu->r[14] = 0x001420fcu; fn_0014101c(cpu);
    }
L_001420fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00142100:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00142104u)) return;
    }
}

/* _ZN13CAniMgrDListsD0Ev @ 0014210c (arm) */
void fn_0014210c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014210c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00142110:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00142114:;
    {
        cpu->r[14] = 0x00142118u; fn_001420b8(cpu);
    }
L_00142118:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014211c:;
    {
        cpu->r[14] = 0x00142120u; fn_0018ba20(cpu);
    }
L_00142120:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00142124:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00142128u)) return;
    }
}

/* _ZN13CAniMgrDListsD2Ev @ 00142128 (arm) */
void fn_00142128(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00142128:;
    {
        cpu->r[3] = rd32(0x00142130u + + 0x44u);
    }
L_0014212c:;
    {
        cpu->r[2] = rd32(0x00142134u + + 0x44u);
    }
L_00142130:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00142134:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014213cu, cpu->r[3], 0, 0);
    }
L_00142138:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014213c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_00142140:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00142144:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00142148:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_0014214c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_00142150:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00142154:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00142158:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142164;
        }
    }
L_0014215c:;
    {
        cpu->r[14] = 0x00142160u; fn_0018ba60(cpu);
    }
L_00142160:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_00142164:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00142168:;
    {
        cpu->r[14] = 0x0014216cu; fn_0014101c(cpu);
    }
L_0014216c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00142170:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00142174u)) return;
    }
}

/* _ZN13CAniMgrDListsC1EP13CAniObjDLists @ 0014217c (arm) */
void fn_0014217c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014217c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00142180:;
    {
        cpu->r[4] = rd32(0x00142188u + + 0x30u);
    }
L_00142184:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00142188:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0014218c:;
    {
        cpu->r[14] = 0x00142190u; fn_00140fc4(cpu);
    }
L_00142190:;
    {
        cpu->r[3] = rd32(0x00142198u + + 0x24u);
    }
L_00142194:;
    {
        cpu->r[4] = add_flags(cpu, 0x0014219cu, cpu->r[4], 0, 0);
    }
L_00142198:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0014219c:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[6]);
    }
L_001421a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001421a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001421a8:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[2]);
    }
L_001421ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001421b0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001421b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001421b8u)) return;
    }
}

/* _ZN13CAniMgrDListsC2EP13CAniObjDLists @ 001421c0 (arm) */
void fn_001421c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001421c0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001421c4:;
    {
        cpu->r[4] = rd32(0x001421ccu + + 0x30u);
    }
L_001421c8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001421cc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001421d0:;
    {
        cpu->r[14] = 0x001421d4u; fn_00140fc4(cpu);
    }
L_001421d4:;
    {
        cpu->r[3] = rd32(0x001421dcu + + 0x24u);
    }
L_001421d8:;
    {
        cpu->r[4] = add_flags(cpu, 0x001421e0u, cpu->r[4], 0, 0);
    }
L_001421dc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001421e0:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[6]);
    }
L_001421e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001421e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001421ec:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[2]);
    }
L_001421f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001421f4:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001421f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001421fcu)) return;
    }
}

/* _ZN13CAniObjDLists11LoadMinimalEP8LZMAFile @ 00142204 (arm) */
void fn_00142204(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00142204:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00142208:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014220c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00142210:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00142214:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_00142218:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0014221c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00142220:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00142224:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_00142228:;
    {
        cpu->r[14] = 0x0014222cu; fn_000fc650(cpu);
    }
L_0014222c:;
    {
        wr16(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_00142230:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00142234:;
    {
        cpu->r[14] = 0x00142238u; fn_000fc650(cpu);
    }
L_00142238:;
    {
        wr16(cpu->r[4] + + 0x26u, cpu->r[0]);
    }
L_0014223c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142240:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00142244u)) return;
    }
}

/* _ZN13CAniObjDLists4LoadEP8LZMAFilePttPssS3_sbit @ 00142244 (arm) */
void fn_00142244(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00142244:;
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
L_00142248:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000001dcu, 1, 0);
    }
L_0014224c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000200u, 0, 0);
    }
L_00142250:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00142254:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00142258:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[6]);
    }
L_0014225c:;
    {
        cpu->r[3] = rd16(cpu->r[2] + + 0x18u);
    }
L_00142260:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00142264:;
    {
        wr8(cpu->r[4] + + 0x2au, cpu->r[6]);
    }
L_00142268:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0014226c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[2]);
    }
L_00142270:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_00142274:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00142278:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_0014227c:;
    {
        cpu->r[14] = 0x00142280u; fn_000fc650(cpu);
    }
L_00142280:;
    {
        cpu->r[10] = rd32(0x00142288u + + 0x624u);
    }
L_00142284:;
    {
        cpu->r[10] = add_flags(cpu, 0x0014228cu, cpu->r[10], 0, 0);
    }
L_00142288:;
    {
        wr16(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_0014228c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142290:;
    {
        cpu->r[14] = 0x00142294u; fn_000fc650(cpu);
    }
L_00142294:;
    {
        wr16(cpu->r[4] + + 0x26u, cpu->r[0]);
    }
L_00142298:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014229c:;
    {
        cpu->r[14] = 0x001422a0u; fn_000fc650(cpu);
    }
L_001422a0:;
    {
        wr16(cpu->r[4] + + 0x28u, cpu->r[0]);
    }
L_001422a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001422a8:;
    {
        cpu->r[14] = 0x001422acu; fn_000fc5fc(cpu);
    }
L_001422ac:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[0]);
    }
L_001422b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001422b4:;
    {
        cpu->r[14] = 0x001422b8u; fn_000fc5fc(cpu);
    }
L_001422b8:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[0]);
    }
L_001422bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001422c0:;
    {
        cpu->r[14] = 0x001422c4u; fn_000fc5fc(cpu);
    }
L_001422c4:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[0]);
    }
L_001422c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001422cc:;
    {
        cpu->r[14] = 0x001422d0u; fn_000fc5fc(cpu);
    }
L_001422d0:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001422d4:;
    {
        wr8(cpu->r[4] + + 0x2du, cpu->r[6]);
    }
L_001422d8:;
    {
        wr8(cpu->r[4] + + 0x2cu, cpu->r[6]);
    }
L_001422dc:;
    {
        wr8(cpu->r[4] + + 0x2bu, cpu->r[3]);
    }
L_001422e0:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[0]);
    }
L_001422e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001422e8:;
    {
        cpu->r[14] = 0x001422ecu; fn_000fc678(cpu);
    }
L_001422ec:;
    {
        cpu->r[7] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001422f0:;
    {
        sub_flags(cpu, cpu->r[7], 0x000000ffu, 1, 1);
    }
L_001422f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142720;
        }
    }
L_001422f8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001422fc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], 0x00000010u, 0, 0);
    }
L_00142300:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142304:;
    {
        wr32(cpu->r[6] + - 0x10u, cpu->r[7]);
    }
L_00142308:;
    {
        cpu->r[14] = 0x0014230cu; fn_000fc678(cpu);
    }
L_0014230c:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00142310:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142314:;
    {
        wr32(cpu->r[6] + - 0xcu, cpu->r[3]);
    }
L_00142318:;
    {
        cpu->r[14] = 0x0014231cu; fn_000fc678(cpu);
    }
L_0014231c:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00142320:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142324:;
    {
        wr32(cpu->r[6] + - 0x8u, cpu->r[3]);
    }
L_00142328:;
    {
        cpu->r[14] = 0x0014232cu; fn_000fc678(cpu);
    }
L_0014232c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + - 0x10u);
    }
L_00142330:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_00142334:;
    {
        wr8(cpu->r[6] + - 0x4u, cpu->r[0]);
    }
L_00142338:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000fu, 1, 1);
    }
L_0014233c:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_001424c8;
        case 1: goto L_001424a4;
        case 2: goto L_00142390;
        case 3: goto L_001424d8;
        case 4: goto L_001424d8;
        case 5: goto L_001424d8;
        case 6: goto L_001424d8;
        case 7: goto L_001424d8;
        case 8: goto L_001424d8;
        case 9: goto L_001424d8;
        case 10: goto L_001424d8;
        case 11: goto L_00142390;
        case 12: goto L_00142390;
        case 13: goto L_00142390;
        case 14: goto L_00142390;
        case 15: goto L_00142384;
        default: guest_unimplemented(cpu, 0x0014233cu); return; }
        }
    }
L_00142340:;
    {
        goto L_00142390;
    }
L_00142384:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00142388:;
    {
        uint32_t v = cpu->r[3] | 0x00000008u; cpu->r[3] = v;
    }
L_0014238c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00142390:;
    {
        sub_flags(cpu, cpu->r[7], 0x000000ffu, 1, 1);
    }
L_00142394:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142398:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000010u, 0, 0);
    }
L_0014239c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001423a8;
        }
    }
L_001423a0:;
    {
        cpu->r[14] = 0x001423a4u; fn_000fc678(cpu);
    }
L_001423a4:;
    {
        cpu->r[7] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001423a8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + - 0x20u);
    }
L_001423ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_001423b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00142300;
        }
    }
L_001423b4:;
    {
        cpu->r[11] = rd32(0x001423bcu + + 0x4f4u);
    }
L_001423b8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001423bc:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[11]);
    }
L_001423c0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001423c4:;
    {
        cpu->r[14] = 0x001423c8u; fn_0012f2c4(cpu);
    }
L_001423c8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x24u);
    }
L_001423cc:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x2bu);
    }
L_001423d0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_001423d4:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001423d8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001423dc:;
    {
        cpu->r[14] = 0x001423e0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001423e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001423e4:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[0]);
    }
L_001423e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001423ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014249c;
        }
    }
L_001423f0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x2bu);
    }
L_001423f4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001423f8:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x24u);
    }
L_001423fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142400:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_00142404:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_00142408:;
    {
        cpu->r[14] = 0x0014240cu; fn_000fc5f4(cpu);
    }
L_0014240c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00142410:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_00142414:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001427f0;
        }
    }
L_00142418:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_0014241c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001427b0;
        }
    }
L_00142420:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x2au);
    }
L_00142424:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00142428:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = cpu->r[4];
        }
    }
L_0014242c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_00142430:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = 0x00000002u;
        }
    }
L_00142434:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00142458;
        }
    }
L_00142438:;
    {
        goto L_001424e8;
    }
L_0014243c:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x2cu);
    }
L_00142440:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_00142444:;
    {
        uint32_t v = cpu->r[9] * cpu->r[2]; cpu->r[2] = v;
    }
L_00142448:;
    {
        cpu->r[14] = 0x0014244cu; fn_000fc5f4(cpu);
    }
L_0014244c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x2au);
    }
L_00142450:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_00142454:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001424e8;
        }
    }
L_00142458:;
    {
        wr8(cpu->r[4] + + 0x2cu, cpu->r[8]);
    }
L_0014245c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142460:;
    {
        cpu->r[14] = 0x00142464u; fn_000fc650(cpu);
    }
L_00142464:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x2cu);
    }
L_00142468:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0014246c:;
    {
        cpu->r[9] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00142470:;
    {
        uint32_t v = cpu->r[3] * cpu->r[9]; cpu->r[3] = v;
    }
L_00142474:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00142478:;
    {
        cpu->r[14] = 0x0014247cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0014247c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00142480:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00142484:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00142488:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[3]);
    }
L_0014248c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142490:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00142494:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014243c;
        }
    }
L_00142498:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_0014249c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000001dcu, 0, 0);
    }
L_001424a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001424a4u)) return;
    }
L_001424a4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + - 0xcu);
    }
L_001424a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001424ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001424b0:;
    {
        uint32_t v = cpu->r[2] | 0x00000002u; cpu->r[2] = v;
    }
L_001424b4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000003u;
        }
    }
L_001424b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000004u;
        }
    }
L_001424bc:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[2]);
    }
L_001424c0:;
    {
        wr8(cpu->r[4] + + 0x2du, cpu->r[3]);
    }
L_001424c4:;
    {
        goto L_00142390;
    }
L_001424c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001424cc:;
    {
        uint32_t v = cpu->r[3] | 0x00000004u; cpu->r[3] = v;
    }
L_001424d0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001424d4:;
    {
        goto L_00142390;
    }
L_001424d8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x2au);
    }
L_001424dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001424e0:;
    {
        wr8(cpu->r[4] + + 0x2au, cpu->r[3]);
    }
L_001424e4:;
    {
        goto L_00142390;
    }
L_001424e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001424ec:;
    {
        { uint32_t v = cpu->r[3] & 0x00000002u; set_nz(cpu, v); }
    }
L_001424f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142530;
        }
    }
L_001424f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001424f8:;
    {
        cpu->r[14] = 0x001424fcu; fn_000fc650(cpu);
    }
L_001424fc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x2du);
    }
L_00142500:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00142504:;
    {
        uint32_t v = cpu->r[3] * cpu->r[6]; cpu->r[0] = v;
    }
L_00142508:;
    {
        cpu->r[14] = 0x0014250cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0014250c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00142510:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[0]);
    }
L_00142514:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000002u);
        }
    }
L_00142518:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014249c;
        }
    }
L_0014251c:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x2du);
    }
L_00142520:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00142524:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142528:;
    {
        uint32_t v = cpu->r[2] * cpu->r[6]; cpu->r[2] = v;
    }
L_0014252c:;
    {
        cpu->r[14] = 0x00142530u; fn_000fc5f4(cpu);
    }
L_00142530:;
    {
        cpu->r[8] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x28u);
    }
L_00142534:;
    {
        cpu->r[6] = 0x0000004cu;
    }
L_00142538:;
    {
        uint32_t v = cpu->r[6] * cpu->r[8]; cpu->r[0] = v;
    }
L_0014253c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00142540:;
    {
        cpu->r[14] = 0x00142544u; imp__Znaj(cpu); /* _Znaj */
    }
L_00142544:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00142548:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0014254c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_00142550:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142574;
        }
    }
L_00142554:;
    {
        cpu->r[7] = cpu->r[9];
    }
L_00142558:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0014255c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00142560:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00142564:;
    {
        cpu->r[14] = 0x00142568u; fn_00141de4(cpu);
    }
L_00142568:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_0014256c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000004cu, 0, 0);
    }
L_00142570:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014255c;
        }
    }
L_00142574:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00142578:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[9]);
    }
L_0014257c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000003u);
        }
    }
L_00142580:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014249c;
        }
    }
L_00142584:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00142588:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014258c:;
    {
        cpu->r[14] = 0x00142594u;
    }
L_00142590:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00142594u)) return;
    }
L_00142594:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000061u, 1, 1);
    }
L_00142598:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142824;
        }
    }
L_0014259c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x28u);
    }
L_001425a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001425a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00142708;
        }
    }
L_001425a8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001425ac:;
    {
        cpu->r[10] = rd32(cpu->r[10] + cpu->r[11]);
    }
L_001425b0:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_001425b4:;
    {
        cpu->r[9] = 0x00001288u;
    }
L_001425b8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x9cu);
    }
L_001425bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001425c0:;
    {
        cpu->r[11] = rd32(cpu->r[10]);
    }
L_001425c4:;
    {
        uint32_t wb_tmp = cpu->r[7] + cpu->r[6];
        wr32(cpu->r[7] + cpu->r[6], cpu->r[4]);
        cpu->r[7] = wb_tmp;
    }
L_001425c8:;
    {
        cpu->r[14] = 0x001425ccu; fn_000fc678(cpu);
    }
L_001425cc:;
    {
        cpu->r[1] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001425d0:;
    {
        cpu->r[0] = rd32(cpu->r[11] + cpu->r[9]);
    }
L_001425d4:;
    {
        cpu->r[14] = 0x001425d8u; fn_00147ca4(cpu);
    }
L_001425d8:;
    {
        wr8(cpu->r[7] + + 0x30u, cpu->r[0]);
    }
L_001425dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001425e0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x9cu);
    }
L_001425e4:;
    {
        cpu->r[14] = 0x001425e8u; fn_000fc678(cpu);
    }
L_001425e8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_001425ec:;
    {
        wr8(cpu->r[7] + + 0x24u, cpu->r[0]);
    }
L_001425f0:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x9cu);
    }
L_001425f4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[6], 0, 0);
    }
L_001425f8:;
    {
        cpu->r[3] = rd8(cpu->r[11] + + 0x24u);
    }
L_001425fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00142600:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142648;
        }
    }
L_00142604:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00142608:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014260c:;
    {
        cpu->r[14] = 0x00142610u; fn_000fc650(cpu);
    }
L_00142610:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00142614:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x9cu);
    }
L_00142618:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[6], 0, 0);
    }
L_0014261c:;
    {
        wr16(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_00142620:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142624:;
    {
        cpu->r[14] = 0x00142628u; fn_000fc650(cpu);
    }
L_00142628:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x9cu);
    }
L_0014262c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00142630:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00142634:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_00142638:;
    {
        cpu->r[2] = rd8(cpu->r[11] + + 0x24u);
    }
L_0014263c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_00142640:;
    {
        wr16(cpu->r[3] + + 0x14u, cpu->r[0]);
    }
L_00142644:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00142608;
        }
    }
L_00142648:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014264c:;
    {
        cpu->r[14] = 0x00142650u; fn_000fc628(cpu);
    }
L_00142650:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x9cu);
    }
L_00142654:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[6], 0, 0);
    }
L_00142658:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[6], 0, 0);
    }
L_0014265c:;
    {
        uint32_t v = cpu->r[0] & 0x0000001fu; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_00142660:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00142664:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, 0x00000020u, cpu->r[2], 1, 0);
        }
    }
L_00142668:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_0014266c:;
    {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[2]);
    }
L_00142670:;
    {
        cpu->r[0] = rd32(cpu->r[11] + + 0x2cu);
    }
L_00142674:;
    {
        cpu->r[14] = 0x00142678u; imp__Znaj(cpu); /* _Znaj */
    }
L_00142678:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x9cu);
    }
L_0014267c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_00142680:;
    {
        wr32(cpu->r[11] + + 0x28u, cpu->r[0]);
    }
L_00142684:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x28u);
    }
L_00142688:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014268c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001427a8;
        }
    }
L_00142690:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x2cu);
    }
L_00142694:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00142698:;
    {
        cpu->r[14] = 0x0014269cu; imp_memset(cpu); /* memset */
    }
L_0014269c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x9cu);
    }
L_001426a0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001426a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001426a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_001426ac:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001426b0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x28u);
    }
L_001426b4:;
    {
        cpu->r[14] = 0x001426b8u; fn_000fc5f4(cpu);
    }
L_001426b8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x9cu);
    }
L_001426bc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001426c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x30u);
    }
L_001426c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_001426c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001426cc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x28u);
    }
L_001426d0:;
    {
        cpu->r[14] = 0x001426d4u; fn_0014129c(cpu);
    }
L_001426d4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x9cu);
    }
L_001426d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x30u);
    }
L_001426dc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001426e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[6], 0, 0);
    }
L_001426e4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000004cu, 0, 0);
    }
L_001426e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_001426ec:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x28u);
    }
L_001426f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000038u, 0, 0);
    }
L_001426f4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001426f8:;
    {
        cpu->r[14] = 0x001426fcu; fn_00141188(cpu);
    }
L_001426fc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x28u);
    }
L_00142700:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_00142704:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001425b8;
        }
    }
L_00142708:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014270c:;
    {
        cpu->r[14] = 0x00142710u; fn_0013713c(cpu);
    }
L_00142710:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00142714:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x000000e7u);
        }
    }
L_00142718:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0014271c:;
    {
        goto L_0014249c;
    }
L_00142720:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142724:;
    {
        cpu->r[14] = 0x00142728u; fn_000fc5fc(cpu);
    }
L_00142728:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[0]);
    }
L_0014272c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142730:;
    {
        cpu->r[14] = 0x00142734u; fn_000fc5fc(cpu);
    }
L_00142734:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[0]);
    }
L_00142738:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014273c:;
    {
        cpu->r[14] = 0x00142740u; fn_000fc5fc(cpu);
    }
L_00142740:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[0]);
    }
L_00142744:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142748:;
    {
        cpu->r[14] = 0x0014274cu; fn_000fc5fc(cpu);
    }
L_0014274c:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[0]);
    }
L_00142750:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142754:;
    {
        cpu->r[14] = 0x00142758u; fn_000fc5fc(cpu);
    }
L_00142758:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[0]);
    }
L_0014275c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142760:;
    {
        cpu->r[14] = 0x00142764u; fn_000fc5fc(cpu);
    }
L_00142764:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[0]);
    }
L_00142768:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014276c:;
    {
        cpu->r[14] = 0x00142770u; fn_000fc5fc(cpu);
    }
L_00142770:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[0]);
    }
L_00142774:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142778:;
    {
        cpu->r[14] = 0x0014277cu; fn_000fc5fc(cpu);
    }
L_0014277c:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[0]);
    }
L_00142780:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142784:;
    {
        cpu->r[14] = 0x00142788u; fn_000fc5fc(cpu);
    }
L_00142788:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[0]);
    }
L_0014278c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142790:;
    {
        cpu->r[14] = 0x00142794u; fn_000fc5fc(cpu);
    }
L_00142794:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[0]);
    }
L_00142798:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014279c:;
    {
        cpu->r[14] = 0x001427a0u; fn_000fc678(cpu);
    }
L_001427a0:;
    {
        cpu->r[7] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001427a4:;
    {
        goto L_001422f8;
    }
L_001427a8:;
    {
        cpu->r[0] = (~0x00000005u);
    }
L_001427ac:;
    {
        goto L_0014249c;
    }
L_001427b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001427b4:;
    {
        cpu->r[14] = 0x001427b8u; fn_000fc650(cpu);
    }
L_001427b8:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001427bc:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_001427c0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[6]; cpu->r[0] = v;
    }
L_001427c4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001427c8:;
    {
        cpu->r[14] = 0x001427ccu; imp__Znaj(cpu); /* _Znaj */
    }
L_001427cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001427d0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001427d4:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[0]);
    }
L_001427d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014281c;
        }
    }
L_001427dc:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_001427e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001427e4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[6]; cpu->r[2] = v;
    }
L_001427e8:;
    {
        cpu->r[14] = 0x001427ecu; fn_000fc5f4(cpu);
    }
L_001427ec:;
    {
        goto L_00142420;
    }
L_001427f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001427f4:;
    {
        cpu->r[14] = 0x001427f8u; fn_000fc650(cpu);
    }
L_001427f8:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001427fc:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_00142800:;
    {
        uint32_t v = cpu->r[0] * cpu->r[6]; cpu->r[0] = v;
    }
L_00142804:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00142808:;
    {
        cpu->r[14] = 0x0014280cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0014280c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00142810:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00142814:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_00142818:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001427dc;
        }
    }
L_0014281c:;
    {
        cpu->r[0] = (~0x0000000au);
    }
L_00142820:;
    {
        goto L_0014249c;
    }
L_00142824:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142828:;
    {
        cpu->r[14] = 0x0014282cu; fn_000fc678(cpu);
    }
L_0014282c:;
    {
        cpu->r[7] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_00142830:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00142834:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_00142838:;
    {
        cpu->r[14] = 0x0014283cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0014283c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00142840:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_00142844:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_00142848:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x0000000bu);
        }
    }
L_0014284c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00142880;
        }
    }
L_00142850:;
    {
        goto L_0014249c;
    }
L_00142854:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x30u);
    }
L_00142858:;
    {
        cpu->r[14] = 0x0014285cu; fn_000fc678(cpu);
    }
L_0014285c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_00142860:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_00142864:;
    {
        cpu->r[0] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_00142868:;
    {
        wr32(cpu->r[9] + shifter(cpu->r[6], 2, 3u, &shc), cpu->r[0]);
    }
L_0014286c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142870:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00142874:;
    {
        cpu->r[14] = 0x00142878u; fn_000fc678(cpu);
    }
L_00142878:;
    {
        cpu->r[0] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_0014287c:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[0]);
    }
L_00142880:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_00142884:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142888:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 3u, &shc); cpu->r[8] = v;
    }
L_0014288c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00142854;
        }
    }
L_00142890:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_00142894:;
    {
        cpu->r[1] = 0x000000ffu;
    }
L_00142898:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[7], 2, 3u, &shc), 0, 0);
    }
L_0014289c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[7], 2, 3u, &shc), cpu->r[1]);
    }
L_001428a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001428a4:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_001428a8:;
    {
        goto L_0014259c;
    }
}

/* _ZN13CAniObjDListsD1Ev @ 001428b4 (arm) */
void fn_001428b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001428b4:;
    {
        cpu->r[3] = rd32(0x001428bcu + + 0x168u);
    }
L_001428b8:;
    {
        cpu->r[2] = rd32(0x001428c0u + + 0x168u);
    }
L_001428bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001428c4u, cpu->r[3], 0, 0);
    }
L_001428c0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001428c4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001428c8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xb0u);
    }
L_001428cc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001428d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001428d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001428d8:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_001428dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001428ec;
        }
    }
L_001428e0:;
    {
        cpu->r[14] = 0x001428e4u; fn_0018ba60(cpu);
    }
L_001428e4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001428e8:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[3]);
    }
L_001428ec:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xb4u);
    }
L_001428f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001428f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142904;
        }
    }
L_001428f8:;
    {
        cpu->r[14] = 0x001428fcu; fn_0018ba60(cpu);
    }
L_001428fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00142900:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[3]);
    }
L_00142904:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xb8u);
    }
L_00142908:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014290c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014291c;
        }
    }
L_00142910:;
    {
        cpu->r[14] = 0x00142914u; fn_0018ba60(cpu);
    }
L_00142914:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00142918:;
    {
        wr32(cpu->r[5] + + 0xb8u, cpu->r[3]);
    }
L_0014291c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x34u);
    }
L_00142920:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00142924:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142934;
        }
    }
L_00142928:;
    {
        cpu->r[14] = 0x0014292cu; fn_0018ba60(cpu);
    }
L_0014292c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00142930:;
    {
        wr32(cpu->r[5] + + 0x34u, cpu->r[3]);
    }
L_00142934:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x3cu);
    }
L_00142938:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014293c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014294c;
        }
    }
L_00142940:;
    {
        cpu->r[14] = 0x00142944u; fn_0018ba60(cpu);
    }
L_00142944:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00142948:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[3]);
    }
L_0014294c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x38u);
    }
L_00142950:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00142954:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142964;
        }
    }
L_00142958:;
    {
        cpu->r[14] = 0x0014295cu; fn_0018ba60(cpu);
    }
L_0014295c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00142960:;
    {
        wr32(cpu->r[5] + + 0x38u, cpu->r[3]);
    }
L_00142964:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00142968:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_0014296c:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_00142970:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x40u);
    }
L_00142974:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00142978:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014297c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142988;
        }
    }
L_00142980:;
    {
        cpu->r[14] = 0x00142984u; fn_0018ba60(cpu);
    }
L_00142984:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[7]);
    }
L_00142988:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_0014298c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00142990:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00142970;
        }
    }
L_00142994:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x60u);
    }
L_00142998:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014299c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001429ac;
        }
    }
L_001429a0:;
    {
        cpu->r[14] = 0x001429a4u; fn_0018ba60(cpu);
    }
L_001429a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001429a8:;
    {
        wr32(cpu->r[5] + + 0x60u, cpu->r[3]);
    }
L_001429ac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x9cu);
    }
L_001429b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001429b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001429fc;
        }
    }
L_001429b8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x4u);
    }
L_001429bc:;
    {
        cpu->r[0] = 0x0000004cu;
    }
L_001429c0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[3]; cpu->r[0] = v;
    }
L_001429c4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001429c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001429d4;
        }
    }
L_001429cc:;
    {
        goto L_001429ec;
    }
L_001429d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001429d4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x0000004cu, 1, 0);
    }
L_001429d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001429dc:;
    {
        cpu->r[14] = 0x001429e0u; fn_00141bcc(cpu);
    }
L_001429e0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x9cu);
    }
L_001429e4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_001429e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001429d0;
        }
    }
L_001429ec:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_001429f0:;
    {
        cpu->r[14] = 0x001429f4u; fn_0018ba60(cpu);
    }
L_001429f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001429f8:;
    {
        wr32(cpu->r[5] + + 0x9cu, cpu->r[3]);
    }
L_001429fc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x30u);
    }
L_00142a00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00142a04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142a14;
        }
    }
L_00142a08:;
    {
        cpu->r[14] = 0x00142a0cu; fn_0018ba60(cpu);
    }
L_00142a0c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00142a10:;
    {
        wr32(cpu->r[5] + + 0x30u, cpu->r[3]);
    }
L_00142a14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142a18:;
    {
        cpu->r[14] = 0x00142a1cu; fn_00140fb4(cpu);
    }
L_00142a1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142a20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00142a24u)) return;
    }
}

/* _ZN13CAniObjDListsD0Ev @ 00142a2c (arm) */
void fn_00142a2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00142a2c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00142a30:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00142a34:;
    {
        cpu->r[14] = 0x00142a38u; fn_001428b4(cpu);
    }
L_00142a38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00142a3c:;
    {
        cpu->r[14] = 0x00142a40u; fn_0018ba20(cpu);
    }
L_00142a40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00142a44:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00142a48u)) return;
    }
}

/* _ZN13CAniObjDListsD2Ev @ 00142a48 (arm) */
void fn_00142a48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00142a48:;
    {
        cpu->r[3] = rd32(0x00142a50u + + 0x168u);
    }
L_00142a4c:;
    {
        cpu->r[2] = rd32(0x00142a54u + + 0x168u);
    }
L_00142a50:;
    {
        cpu->r[3] = add_flags(cpu, 0x00142a58u, cpu->r[3], 0, 0);
    }
L_00142a54:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00142a58:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00142a5c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xb0u);
    }
L_00142a60:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00142a64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00142a68:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00142a6c:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_00142a70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142a80;
        }
    }
L_00142a74:;
    {
        cpu->r[14] = 0x00142a78u; fn_0018ba60(cpu);
    }
L_00142a78:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00142a7c:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[3]);
    }
L_00142a80:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xb4u);
    }
L_00142a84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00142a88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142a98;
        }
    }
L_00142a8c:;
    {
        cpu->r[14] = 0x00142a90u; fn_0018ba60(cpu);
    }
L_00142a90:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00142a94:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[3]);
    }
L_00142a98:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xb8u);
    }
L_00142a9c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00142aa0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142ab0;
        }
    }
L_00142aa4:;
    {
        cpu->r[14] = 0x00142aa8u; fn_0018ba60(cpu);
    }
L_00142aa8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00142aac:;
    {
        wr32(cpu->r[5] + + 0xb8u, cpu->r[3]);
    }
L_00142ab0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x34u);
    }
L_00142ab4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00142ab8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142ac8;
        }
    }
L_00142abc:;
    {
        cpu->r[14] = 0x00142ac0u; fn_0018ba60(cpu);
    }
L_00142ac0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00142ac4:;
    {
        wr32(cpu->r[5] + + 0x34u, cpu->r[3]);
    }
L_00142ac8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x3cu);
    }
L_00142acc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00142ad0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142ae0;
        }
    }
L_00142ad4:;
    {
        cpu->r[14] = 0x00142ad8u; fn_0018ba60(cpu);
    }
L_00142ad8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00142adc:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[3]);
    }
L_00142ae0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x38u);
    }
L_00142ae4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00142ae8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142af8;
        }
    }
L_00142aec:;
    {
        cpu->r[14] = 0x00142af0u; fn_0018ba60(cpu);
    }
L_00142af0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00142af4:;
    {
        wr32(cpu->r[5] + + 0x38u, cpu->r[3]);
    }
L_00142af8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00142afc:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_00142b00:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_00142b04:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x40u);
    }
L_00142b08:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00142b0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00142b10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142b1c;
        }
    }
L_00142b14:;
    {
        cpu->r[14] = 0x00142b18u; fn_0018ba60(cpu);
    }
L_00142b18:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[7]);
    }
L_00142b1c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_00142b20:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00142b24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00142b04;
        }
    }
L_00142b28:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x60u);
    }
L_00142b2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00142b30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142b40;
        }
    }
L_00142b34:;
    {
        cpu->r[14] = 0x00142b38u; fn_0018ba60(cpu);
    }
L_00142b38:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00142b3c:;
    {
        wr32(cpu->r[5] + + 0x60u, cpu->r[3]);
    }
L_00142b40:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x9cu);
    }
L_00142b44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00142b48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142b90;
        }
    }
L_00142b4c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x4u);
    }
L_00142b50:;
    {
        cpu->r[0] = 0x0000004cu;
    }
L_00142b54:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[3]; cpu->r[0] = v;
    }
L_00142b58:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00142b5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00142b68;
        }
    }
L_00142b60:;
    {
        goto L_00142b80;
    }
L_00142b64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00142b68:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x0000004cu, 1, 0);
    }
L_00142b6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00142b70:;
    {
        cpu->r[14] = 0x00142b74u; fn_00141bcc(cpu);
    }
L_00142b74:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x9cu);
    }
L_00142b78:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_00142b7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00142b64;
        }
    }
L_00142b80:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_00142b84:;
    {
        cpu->r[14] = 0x00142b88u; fn_0018ba60(cpu);
    }
L_00142b88:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00142b8c:;
    {
        wr32(cpu->r[5] + + 0x9cu, cpu->r[3]);
    }
L_00142b90:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x30u);
    }
L_00142b94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00142b98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00142ba8;
        }
    }
L_00142b9c:;
    {
        cpu->r[14] = 0x00142ba0u; fn_0018ba60(cpu);
    }
L_00142ba0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00142ba4:;
    {
        wr32(cpu->r[5] + + 0x30u, cpu->r[3]);
    }
L_00142ba8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142bac:;
    {
        cpu->r[14] = 0x00142bb0u; fn_00140fb4(cpu);
    }
L_00142bb0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142bb4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00142bb8u)) return;
    }
}

/* _ZN13CAniObjDListsC1Ei @ 00142bc0 (arm) */
void fn_00142bc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00142bc0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00142bc4:;
    {
        cpu->r[4] = rd32(0x00142bccu + + 0x94u);
    }
L_00142bc8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00142bcc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00142bd0:;
    {
        cpu->r[14] = 0x00142bd4u; fn_00140f34(cpu);
    }
L_00142bd4:;
    {
        cpu->r[2] = rd32(0x00142bdcu + + 0x88u);
    }
L_00142bd8:;
    {
        cpu->r[4] = add_flags(cpu, 0x00142be0u, cpu->r[4], 0, 0);
    }
L_00142bdc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00142be0:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00142be4:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[6]);
    }
L_00142be8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00142bec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142bf0:;
    {
        wr32(cpu->r[5] + + 0xb8u, cpu->r[3]);
    }
L_00142bf4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00142bf8:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[1]);
    }
L_00142bfc:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_00142c00:;
    {
        wr16(cpu->r[5] + + 0x24u, cpu->r[3]);
    }
L_00142c04:;
    {
        wr16(cpu->r[5] + + 0x26u, cpu->r[3]);
    }
L_00142c08:;
    {
        wr16(cpu->r[5] + + 0x28u, cpu->r[3]);
    }
L_00142c0c:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
    }
L_00142c10:;
    {
        wr32(cpu->r[5] + + 0x34u, cpu->r[3]);
    }
L_00142c14:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[3]);
    }
L_00142c18:;
    {
        wr32(cpu->r[5] + + 0x38u, cpu->r[3]);
    }
L_00142c1c:;
    {
        wr32(cpu->r[5] + + 0x60u, cpu->r[3]);
    }
L_00142c20:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[3]);
    }
L_00142c24:;
    {
        wr32(cpu->r[5] + + 0x44u, cpu->r[3]);
    }
L_00142c28:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[3]);
    }
L_00142c2c:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[3]);
    }
L_00142c30:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[3]);
    }
L_00142c34:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[3]);
    }
L_00142c38:;
    {
        wr32(cpu->r[5] + + 0x58u, cpu->r[3]);
    }
L_00142c3c:;
    {
        wr32(cpu->r[5] + + 0x5cu, cpu->r[3]);
    }
L_00142c40:;
    {
        wr32(cpu->r[5] + + 0x9cu, cpu->r[3]);
    }
L_00142c44:;
    {
        wr32(cpu->r[5] + + 0x30u, cpu->r[3]);
    }
L_00142c48:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[3]);
    }
L_00142c4c:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[3]);
    }
L_00142c50:;
    {
        wr32(cpu->r[5] + + 0xa8u, cpu->r[1]);
    }
L_00142c54:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[3]);
    }
L_00142c58:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[3]);
    }
L_00142c5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00142c60u)) return;
    }
}

/* _ZN13CAniObjDListsC2Ei @ 00142c68 (arm) */
void fn_00142c68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00142c68:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00142c6c:;
    {
        cpu->r[4] = rd32(0x00142c74u + + 0x94u);
    }
L_00142c70:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00142c74:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00142c78:;
    {
        cpu->r[14] = 0x00142c7cu; fn_00140f34(cpu);
    }
L_00142c7c:;
    {
        cpu->r[2] = rd32(0x00142c84u + + 0x88u);
    }
L_00142c80:;
    {
        cpu->r[4] = add_flags(cpu, 0x00142c88u, cpu->r[4], 0, 0);
    }
L_00142c84:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00142c88:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00142c8c:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[6]);
    }
L_00142c90:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00142c94:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142c98:;
    {
        wr32(cpu->r[5] + + 0xb8u, cpu->r[3]);
    }
L_00142c9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00142ca0:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[1]);
    }
L_00142ca4:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_00142ca8:;
    {
        wr16(cpu->r[5] + + 0x24u, cpu->r[3]);
    }
L_00142cac:;
    {
        wr16(cpu->r[5] + + 0x26u, cpu->r[3]);
    }
L_00142cb0:;
    {
        wr16(cpu->r[5] + + 0x28u, cpu->r[3]);
    }
L_00142cb4:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
    }
L_00142cb8:;
    {
        wr32(cpu->r[5] + + 0x34u, cpu->r[3]);
    }
L_00142cbc:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[3]);
    }
L_00142cc0:;
    {
        wr32(cpu->r[5] + + 0x38u, cpu->r[3]);
    }
L_00142cc4:;
    {
        wr32(cpu->r[5] + + 0x60u, cpu->r[3]);
    }
L_00142cc8:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[3]);
    }
L_00142ccc:;
    {
        wr32(cpu->r[5] + + 0x44u, cpu->r[3]);
    }
L_00142cd0:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[3]);
    }
L_00142cd4:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[3]);
    }
L_00142cd8:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[3]);
    }
L_00142cdc:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[3]);
    }
L_00142ce0:;
    {
        wr32(cpu->r[5] + + 0x58u, cpu->r[3]);
    }
L_00142ce4:;
    {
        wr32(cpu->r[5] + + 0x5cu, cpu->r[3]);
    }
L_00142ce8:;
    {
        wr32(cpu->r[5] + + 0x9cu, cpu->r[3]);
    }
L_00142cec:;
    {
        wr32(cpu->r[5] + + 0x30u, cpu->r[3]);
    }
L_00142cf0:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[3]);
    }
L_00142cf4:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[3]);
    }
L_00142cf8:;
    {
        wr32(cpu->r[5] + + 0xa8u, cpu->r[1]);
    }
L_00142cfc:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[3]);
    }
L_00142d00:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[3]);
    }
L_00142d04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00142d08u)) return;
    }
}

/* _ZN7gxConst7GetTypeEv @ 00142d10 (arm) */
void fn_00142d10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00142d10:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00142d14:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9gxBSpline7GetTypeEv @ 00142d18 (arm) */
void fn_00142d18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00142d18:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_00142d1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13gxBSplineQuat7GetTypeEv @ 00142d20 (arm) */
void fn_00142d20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00142d20:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_00142d24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19gxBSplineQuatOffset7GetTypeEv @ 00142d28 (arm) */
void fn_00142d28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00142d28:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00142d2c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16gxBSplineExpQuat7GetTypeEv @ 00142d30 (arm) */
void fn_00142d30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00142d30:;
    {
        cpu->r[0] = 0x00000007u;
    }
L_00142d34:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7gxCurveC2Ev @ 00142d38 (arm) */
void fn_00142d38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00142d38:;
    {
        cpu->r[3] = rd32(0x00142d40u + + 0x1cu);
    }
L_00142d3c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00142d40:;
    {
        cpu->r[2] = rd32(0x00142d48u + + 0x18u);
    }
L_00142d44:;
    {
        cpu->r[3] = add_flags(cpu, 0x00142d4cu, cpu->r[3], 0, 0);
    }
L_00142d48:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_00142d4c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00142d50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00142d54:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00142d58:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7gxCurveC1Ev @ 00142d64 (arm) */
void fn_00142d64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00142d64:;
    {
        cpu->r[3] = rd32(0x00142d6cu + + 0x1cu);
    }
L_00142d68:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00142d6c:;
    {
        cpu->r[2] = rd32(0x00142d74u + + 0x18u);
    }
L_00142d70:;
    {
        cpu->r[3] = add_flags(cpu, 0x00142d78u, cpu->r[3], 0, 0);
    }
L_00142d74:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_00142d78:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00142d7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00142d80:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00142d84:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7gxConst4evalEfPf @ 00142d90 (arm) */
void fn_00142d90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00142d90:;
    {
        cpu->r[1] = rd8(cpu->r[0] + + 0x4u);
    }
L_00142d94:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_00142d98:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00142d9c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00142da0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00142da4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00142da8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00142dac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00142db0:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_00142db4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_00142db8:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00142dbc:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[12]);
    }
L_00142dc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00142dc4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00142da8;
        }
    }
L_00142dc8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9gxBSpline10getIndicesEfRiS0_ @ 00142dcc (arm) */
void fn_00142dcc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00142dcc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_00142dd0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_00142dd4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_00142dd8:;
    {
        vfp_sync_flags(cpu);
    }
L_00142ddc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00142e74;
        }
    }
L_00142de0:;
    {
        cpu->r[1] = rd16(cpu->r[0] + + 0x12u);
    }
L_00142de4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0xcu);
    }
L_00142de8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00142dec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_00142df0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00142df4:;
    {
        vfp_sync_flags(cpu);
    }
L_00142df8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00142e5c;
        }
    }
L_00142dfc:;
    {
        cpu->r[5] = rd8(cpu->r[0] + + 0x10u);
    }
L_00142e00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00142e04:;
    {
        wr32(cpu->r[3], cpu->r[5]);
    }
L_00142e08:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00142e0c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_00142e10:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00142e14:;
    {
        vfp_sync_flags(cpu);
    }
L_00142e18:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = cpu->r[5];
        }
    }
L_00142e1c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00142e4c;
        }
    }
L_00142e20:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_00142e24:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00142e28:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00142e2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_00142e30:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x8u);
    }
L_00142e34:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00142e38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00142e3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00142e40:;
    {
        vfp_sync_flags(cpu);
    }
L_00142e44:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00142e2c;
        }
    }
L_00142e48:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00142e4c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 0);
    }
L_00142e50:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_00142e54:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_00142e58:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00142e5c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00142e60:;
    {
        wr32(cpu->r[3], cpu->r[1]);
    }
L_00142e64:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x10u);
    }
L_00142e68:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00142e6c:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_00142e70:;
    {
        goto L_00142e54;
    }
L_00142e74:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00142e78:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_00142e7c:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x10u);
    }
L_00142e80:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00142e84:;
    {
        goto L_00142e54;
    }
}

/* _ZN9gxBSpline8getBasesEfii @ 00142e88 (arm) */
void fn_00142e88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00142e88:;
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
L_00142e8c:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[1];
    }
L_00142e90:;
    {
        cpu->r[6] = rd8(cpu->r[0] + + 0x10u);
    }
L_00142e94:;
    {
        *vfp_s(cpu, 9) = *(float*)G(0x00142e9cu + + 0x1a4u);
    }
L_00142e98:;
    {
        cpu->r[2] = rd32(0x00142ea0u + + 0x1a4u);
    }
L_00142e9c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_00142ea0:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_00142ea4:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,9);
    }
L_00142ea8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00142eb0u, cpu->r[2], 0, 0);
    }
L_00142eac:;
    {
        add_flags(cpu, cpu->r[11], 0x00000001u, 0, 1);
    }
L_00142eb0:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[1] = v;
    }
L_00142eb4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00142eb8:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[12]);
    }
L_00142ebc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_00142ec0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_00142ec4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014302c;
        }
    }
L_00142ec8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_00142ecc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00142ed0:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 2u, &shc); cpu->r[11] = v;
    }
L_00142ed4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00142ed8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00142edc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00142ee0:;
    {
        cpu->r[0] = rd32(0x00142ee8u + + 0x160u);
    }
L_00142ee4:;
    {
        cpu->r[7] = cpu->r[9];
    }
L_00142ee8:;
    {
        cpu->r[3] = rd32(0x00142ef0u + + 0x15cu);
    }
L_00142eec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00142ef0:;
    {
        cpu->r[0] = add_flags(cpu, 0x00142ef8u, cpu->r[0], 0, 0);
    }
L_00142ef4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_00142ef8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00142f00u, cpu->r[3], 0, 0);
    }
L_00142efc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_00142f00:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00142f04:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_00142f08:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[7]);
    }
L_00142f0c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_00142f10:;
    {
        vfp_vsub(cpu, 15, 13, 11);
    }
L_00142f14:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00142f18:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00142f1c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00142f20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_00142f24:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_00142f28:;
    {
        vfp_vsub(cpu, 13, 13, 14);
    }
L_00142f2c:;
    {
        vfp_vdiv(cpu, 12, 9, 13);
    }
L_00142f30:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12]);
    }
L_00142f34:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00142f38:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00142f3c:;
    {
        vfp_sync_flags(cpu);
    }
L_00142f40:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vmul(cpu, 15, 15, 12);
        }
    }
L_00142f44:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_00142f48:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_00142f4c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00142f50:;
    {
        wr32(cpu->r[12] + cpu->r[11], cpu->r[3]);
    }
L_00142f54:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00142fe4;
        }
    }
L_00142f58:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00142f5c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00142f60:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_00142f64:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_00142f68:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[2], cpu->r[11], 0, 0);
    }
L_00142f6c:;
    {
        vfp_vsub(cpu, 15, 11, 14);
    }
L_00142f70:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_00142f74:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_00142f78:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[11]);
    }
L_00142f7c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_00142f80:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_00142f84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_00142f88:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00142f8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00142f90:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00142f94:;
    {
        vfp_sync_flags(cpu);
    }
L_00142f98:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vmul(cpu, 15, 15, 12);
        }
    }
L_00142f9c:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_00142fa0:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00142fa4:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[11]);
    }
L_00142fa8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_00142fac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00142fb0:;
    {
        vfp_vsub(cpu, 15, 12, 11);
    }
L_00142fb4:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[12] + + 0x8u);
    }
L_00142fb8:;
    {
        vfp_vsub(cpu, 12, 12, 14);
    }
L_00142fbc:;
    {
        vfp_vdiv(cpu, 12, 9, 12);
    }
L_00142fc0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00142fc4:;
    {
        vfp_sync_flags(cpu);
    }
L_00142fc8:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vmul(cpu, 15, 15, 12);
        }
    }
L_00142fcc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_00142fd0:;
    {
        vfp_vmla(cpu, 13, 15, 10);
    }
L_00142fd4:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00142fd8:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[12]);
    }
L_00142fdc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00142f6c;
        }
    }
L_00142fe0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4u);
    }
L_00142fe4:;
    {
        vfp_vsub(cpu, 14, 11, 14);
    }
L_00142fe8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00142fec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_00142ff0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00142ff4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00142ff8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_00142ffc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00143000:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000004u, 1, 0);
    }
L_00143004:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_00143008:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0014300c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00143010:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_00143014:;
    {
        vfp_sync_flags(cpu);
    }
L_00143018:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vmul(cpu, 14, 14, 12);
        }
    }
L_0014301c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_00143020:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_00143024:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00143028:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00142f04;
        }
    }
L_0014302c:;
    {
        cpu->r[0] = rd32(0x00143034u + + 0x1cu);
    }
L_00143030:;
    {
        cpu->r[0] = add_flags(cpu, 0x00143038u, cpu->r[0], 0, 0);
    }
L_00143034:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00143038:;
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
L_0014303c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9gxBSpline4evalEfPf @ 00143054 (arm) */
void fn_00143054(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00143054:;
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
L_00143058:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014305c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00143060:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00143064:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_00143068:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0014306c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00143070:;
    {
        cpu->r[14] = 0x00143074u; fn_00142dcc(cpu);
    }
L_00143074:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00143078:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_0014307c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00143080:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00143084:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00143088:;
    {
        cpu->r[14] = 0x00143090u;
    }
L_0014308c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00143090u)) return;
    }
L_00143090:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x4u);
    }
L_00143094:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00143098:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00143108;
        }
    }
L_0014309c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001430a0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4u);
    }
L_001430a4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x8u);
    }
L_001430a8:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_001430ac:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x001430b4u + + 0x5cu);
    }
L_001430b0:;
    {
        uint32_t v = cpu->r[10] * cpu->r[1] + cpu->r[7]; cpu->r[1] = v;
    }
L_001430b4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,12);
    }
L_001430b8:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,12);
    }
L_001430bc:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[2]);
    }
L_001430c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001430c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001430c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001430cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_001430d0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1]);
    }
L_001430d4:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_001430d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001430dc:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001430e0:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[1]);
    }
L_001430e4:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x10u);
    }
L_001430e8:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x4u);
    }
L_001430ec:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001430f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001430f4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001430c8;
        }
    }
L_001430f8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001430fc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00143100:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_00143104:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001430b0;
        }
    }
L_00143108:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014310c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00143110u)) return;
    }
}

/* _ZN16gxBSplineExpQuat8getBasesEfii @ 00143114 (arm) */
void fn_00143114(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00143114:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00143118:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014311c:;
    {
        cpu->r[14] = 0x00143120u; fn_00142e88(cpu);
    }
L_00143120:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00143128u + + 0x24u);
    }
L_00143124:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x10u);
    }
L_00143128:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0014312c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_00143130:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_00143134:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00143138:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0014313c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00143140:;
    {
        uint32_t wb_tmp = cpu->r[2] + (-0x00000004u);
        wr32(cpu->r[2], cpu->r[1]);
        cpu->r[2] = wb_tmp;
    }
L_00143144:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014312c;
        }
    }
L_00143148:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014314cu)) return;
    }
}

/* _Z9qMulInvABPfS_S_ @ 00143150 (arm) */
void fn_00143150(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00143150:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1]);
    }
L_00143154:;
    {
        vfp_vneg(cpu, 11, 11);
    }
L_00143158:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_0014315c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_00143160:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[2]);
    }
L_00143164:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00143168:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_0014316c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00143170:;
    {
        vfp_vmul(cpu, 15, 11, 15);
    }
L_00143174:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00143178:;
    {
        vfp_vmla(cpu, 15, 12, 8);
    }
L_0014317c:;
    {
        vfp_vneg(cpu, 13, 13);
    }
L_00143180:;
    {
        vfp_vmla(cpu, 15, 13, 9);
    }
L_00143184:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_00143188:;
    {
        vfp_vmls(cpu, 15, 14, 10);
    }
L_0014318c:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00143190:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_00143194:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_00143198:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_0014319c:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2]);
    }
L_001431a0:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001431a4:;
    {
        vfp_vmla(cpu, 15, 12, 8);
    }
L_001431a8:;
    {
        vfp_vmla(cpu, 15, 14, 9);
    }
L_001431ac:;
    {
        vfp_vmls(cpu, 15, 11, 10);
    }
L_001431b0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001431b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_001431b8:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001431bc:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001431c0:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001431c4:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2]);
    }
L_001431c8:;
    {
        vfp_vmla(cpu, 15, 12, 8);
    }
L_001431cc:;
    {
        vfp_vmla(cpu, 15, 11, 9);
    }
L_001431d0:;
    {
        vfp_vmls(cpu, 15, 13, 10);
    }
L_001431d4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001431d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_001431dc:;
    {
        vfp_vmul(cpu, 15, 11, 15);
    }
L_001431e0:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_001431e4:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001431e8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001431ec:;
    {
        vfp_vnmls(cpu, 15, 12, 9);
    }
L_001431f0:;
    {
        vfp_vmls(cpu, 15, 13, 10);
    }
L_001431f4:;
    {
        vfp_vmls(cpu, 15, 14, 11);
    }
L_001431f8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001431fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z6qMulABPfS_S_ @ 00143200 (arm) */
void fn_00143200(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00143200:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1]);
    }
L_00143204:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_00143208:;
    {
        vfp_vmul(cpu, 15, 11, 15);
    }
L_0014320c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_00143210:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[2]);
    }
L_00143214:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00143218:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_0014321c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00143220:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00143224:;
    {
        vfp_vmla(cpu, 15, 12, 8);
    }
L_00143228:;
    {
        vfp_vmla(cpu, 15, 13, 9);
    }
L_0014322c:;
    {
        vfp_vmls(cpu, 15, 14, 10);
    }
L_00143230:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00143234:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_00143238:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_0014323c:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00143240:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2]);
    }
L_00143244:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00143248:;
    {
        vfp_vmla(cpu, 15, 12, 8);
    }
L_0014324c:;
    {
        vfp_vmla(cpu, 15, 14, 9);
    }
L_00143250:;
    {
        vfp_vmls(cpu, 15, 11, 10);
    }
L_00143254:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00143258:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_0014325c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00143260:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00143264:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00143268:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2]);
    }
L_0014326c:;
    {
        vfp_vmla(cpu, 15, 12, 8);
    }
L_00143270:;
    {
        vfp_vmla(cpu, 15, 11, 9);
    }
L_00143274:;
    {
        vfp_vmls(cpu, 15, 13, 10);
    }
L_00143278:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014327c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_00143280:;
    {
        vfp_vmul(cpu, 15, 11, 15);
    }
L_00143284:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_00143288:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_0014328c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00143290:;
    {
        vfp_vnmls(cpu, 15, 12, 9);
    }
L_00143294:;
    {
        vfp_vmls(cpu, 15, 13, 10);
    }
L_00143298:;
    {
        vfp_vmls(cpu, 15, 14, 11);
    }
L_0014329c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001432a0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z4qMulPfS_ @ 001432a4 (arm) */
void fn_001432a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001432a4:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001432a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001432ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001432b0:;
    {
        cpu->r[5] = cpu->r[13];
    }
L_001432b4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001432b8:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001432bc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001432c0:;
    {
        cpu->r[14] = 0x001432c4u; fn_00143200(cpu);
    }
L_001432c4:;
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
L_001432c8:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001432cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001432d0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001432d4u)) return;
    }
}

/* _Z4qMulPff @ 001432d4 (arm) */
void fn_001432d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001432d4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_001432d8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_001432dc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_001432e0:;
    {
        vfp_vmul(cpu, 11, 14, 15);
    }
L_001432e4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_001432e8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_001432ec:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_001432f0:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_001432f4:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_001432f8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001432fc:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_00143300:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00143304:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00143308:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z12qMakeClosestPfS_ @ 0014330c (arm) */
void fn_0014330c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014330c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00143310:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00143314:;
    {
        vfp_vmul(cpu, 15, 12, 15);
    }
L_00143318:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0]);
    }
L_0014331c:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[1]);
    }
L_00143320:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_00143324:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00143328:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_0014332c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_00143330:;
    {
        vfp_vmla(cpu, 15, 11, 8);
    }
L_00143334:;
    {
        vfp_vmla(cpu, 15, 13, 9);
    }
L_00143338:;
    {
        vfp_vmla(cpu, 15, 14, 10);
    }
L_0014333c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00143340:;
    {
        vfp_sync_flags(cpu);
    }
L_00143344:;
    {
        if (cond_test(cpu, 6)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00143348:;
    {
        vfp_vneg(cpu, 11, 11);
    }
L_0014334c:;
    {
        vfp_vneg(cpu, 12, 12);
    }
L_00143350:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00143354:;
    {
        vfp_vneg(cpu, 13, 13);
    }
L_00143358:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0014335c:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_00143360:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00143364:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00143368:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14gxBezierCurve24evalEf @ 0014336c (arm) */
void fn_0014336c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014336c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_00143370:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00143374:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[1] + + 0x10u);
    }
L_00143378:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_0014337c:;
    {
        vfp_vmla(cpu, 9, 15, 14);
    }
L_00143380:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_00143384:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1] + + 0x14u);
    }
L_00143388:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + + 0x18u);
    }
L_0014338c:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_00143390:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_00143394:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00143398:;
    {
        vfp_vmla(cpu, 10, 15, 8);
    }
L_0014339c:;
    {
        vfp_vmla(cpu, 12, 15, 9);
    }
L_001433a0:;
    {
        vfp_vmla(cpu, 11, 15, 10);
    }
L_001433a4:;
    {
        vfp_vmla(cpu, 14, 15, 12);
    }
L_001433a8:;
    {
        vfp_vmla(cpu, 13, 15, 11);
    }
L_001433ac:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001433b0:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001433b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14gxBezierCurve219evalFirstDerivativeEf @ 001433b8 (arm) */
void fn_001433b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001433b8:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_001433bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001433c4u + + 0x3cu);
    }
L_001433c0:;
    {
        vfp_vmul(cpu, 10, 12, 15);
    }
L_001433c4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x10u);
    }
L_001433c8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_001433cc:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_001433d0:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_001433d4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x14u);
    }
L_001433d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x18u);
    }
L_001433dc:;
    {
        vfp_vadd(cpu, 13, 13, 13);
    }
L_001433e0:;
    {
        vfp_vadd(cpu, 11, 11, 11);
    }
L_001433e4:;
    {
        vfp_vmla(cpu, 13, 10, 9);
    }
L_001433e8:;
    {
        vfp_vmla(cpu, 11, 10, 8);
    }
L_001433ec:;
    {
        vfp_vmla(cpu, 15, 12, 13);
    }
L_001433f0:;
    {
        vfp_vmla(cpu, 14, 12, 11);
    }
L_001433f4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001433f8:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001433fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9gxComplexC2Eff @ 00143404 (arm) */
void fn_00143404(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00143404:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00143408:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_0014340c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9gxComplexC1Eff @ 00143410 (arm) */
void fn_00143410(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00143410:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00143414:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00143418:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9gxComplexC2Ev @ 0014341c (arm) */
void fn_0014341c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014341c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00143424u + + 0x8u);
    }
L_00143420:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00143424:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00143428:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9gxComplexC1Ev @ 00143430 (arm) */
void fn_00143430(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00143430:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00143438u + + 0x8u);
    }
L_00143434:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00143438:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014343c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9gxComplex7InverseEv @ 00143444 (arm) */
void fn_00143444(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00143444:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00143448:;
    {
        vfp_vmul(cpu, 13, 14, 14);
    }
L_0014344c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_00143450:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00143458u + + 0x18u);
    }
L_00143454:;
    {
        vfp_vmla(cpu, 13, 15, 15);
    }
L_00143458:;
    {
        vfp_vdiv(cpu, 13, 12, 13);
    }
L_0014345c:;
    {
        vfp_vnmul(cpu, 14, 13, 14);
    }
L_00143460:;
    {
        vfp_vmul(cpu, 15, 15, 13);
    }
L_00143464:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00143468:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014346c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12gxPolynomialC2Ei @ 00143474 (arm) */
void fn_00143474(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00143474:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[1]);
    }
L_00143478:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12gxPolynomialC1Ei @ 0014347c (arm) */
void fn_0014347c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014347c:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[1]);
    }
L_00143480:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12gxPolynomial4evalEf @ 00143484 (arm) */
void fn_00143484(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00143484:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x28u);
    }
L_00143488:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_0014348c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00143490:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001434c4;
        }
    }
L_00143494:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00143498:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_0014349c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001434a4u + + 0x28u);
    }
L_001434a0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001434a4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_001434a8:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_001434ac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_001434b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001434b4:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
    }
L_001434b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001434a0;
        }
    }
L_001434bc:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001434c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001434c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001434ccu);
    }
L_001434c8:;
    {
        goto L_001434bc;
    }
}

/* _ZN12gxPolynomial8compressEv @ 001434d0 (arm) */
void fn_001434d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001434d0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x28u);
    }
L_001434d4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001434d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001434dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_001434e0:;
    {
        vfp_vabs(cpu, 15, 15);
    }
L_001434e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001435a4;
        }
    }
L_001434e8:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001434ec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001434f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001434f4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_001434f8:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_001434fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00143500:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00143504:;
    {
        vfp_sync_flags(cpu);
    }
L_00143508:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_0014350c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00143510:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001434f0;
        }
    }
L_00143514:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014351cu + + 0x90u);
    }
L_00143518:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_0014351c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00143520:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00143524:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00143528:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_0014352c:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_00143530:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00143534:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00143538:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014353c:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[12]);
    }
L_00143540:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00143544:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00143524;
        }
    }
L_00143548:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0014354c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00143550:;
    {
        vfp_vabs(cpu, 15, 15);
    }
L_00143554:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014355cu + + 0x54u);
    }
L_00143558:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0014355c:;
    {
        vfp_sync_flags(cpu);
    }
L_00143560:;
    {
        if (cond_test(cpu, 9)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00143564:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00143568:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_0014356c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00143570:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + - 0x4u);
    }
L_00143574:;
    {
        vfp_vabs(cpu, 15, 15);
    }
L_00143578:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0014357c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_00143580:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00143584:;
    {
        vfp_sync_flags(cpu);
    }
L_00143588:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00143594;
        }
    }
L_0014358c:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[1]);
    }
L_00143590:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00143594:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00143598:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00143570;
        }
    }
L_0014359c:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[1]);
    }
L_001435a0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001435a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00143554;
        }
    }
L_001435a8:;
    {
        goto L_00143514;
    }
}

/* _ZN12gxPolynomial9normalizeEv @ 001435b4 (arm) */
void fn_001435b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001435b4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x28u);
    }
L_001435b8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001435c0u + + 0x3cu);
    }
L_001435bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001435c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001435c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_001435c8:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_001435cc:;
    {
        if (cond_test(cpu, 12)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001435d0:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001435d4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001435d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001435dc:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001435e0:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001435e4:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base - 4u;
        *(uint32_t*)vfp_s(cpu, 15) = rd32(ea + 0u);
        cpu->r[3] = ea;
    }
L_001435e8:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001435ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001435f0:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001435f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001435e4;
        }
    }
L_001435f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12gxPolynomial5derivEPS_ @ 00143600 (arm) */
void fn_00143600(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00143600:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x28u);
    }
L_00143604:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00143608:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0014360c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00143644;
        }
    }
L_00143610:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00143614:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00143618:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0014361c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_00143620:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00143624:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00143628:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_0014362c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00143630:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00143634:;
    {
        cpu->r[4] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00143638:;
    {
        wr32(cpu->r[1] + cpu->r[2], cpu->r[4]);
    }
L_0014363c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00143640:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00143618;
        }
    }
L_00143644:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_00143648:;
    {
        wr32(cpu->r[1] + + 0x28u, cpu->r[12]);
    }
L_0014364c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00143650:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12gxPolynomial19computeRoots_LinearEPf @ 00143654 (arm) */
void fn_00143654(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00143654:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_00143658:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_0014365c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00143660:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00143664:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_00143668:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014366c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12gxPolynomial11extractRootEf @ 00143670 (arm) */
void fn_00143670(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00143670:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00143674:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00143678:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0014367c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_00143680:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x28u);
    }
L_00143684:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00143688:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0014368c:;
    {
        cpu->r[14] = 0x00143690u; fn_0014347c(cpu);
    }
L_00143690:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_00143694:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00143698:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0014369c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001436a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_001436a4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001436a8:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_001436ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001436d0;
        }
    }
L_001436b0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001436b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001436b8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_001436bc:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base - 4u;
        *(uint32_t*)vfp_s(cpu, 15) = rd32(ea + 0u);
        cpu->r[4] = ea;
    }
L_001436c0:;
    {
        vfp_vmla(cpu, 15, 16, 14);
    }
L_001436c4:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base - 4u;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[3] = ea;
    }
L_001436c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001436cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001436b8;
        }
    }
L_001436d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001436d4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001436d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001436dcu)) return;
    }
}

/* _ZN12gxPolynomial11extractRootER9gxComplex @ 001436dc (arm) */
void fn_001436dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001436dc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001436e0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001436e4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x28u);
    }
L_001436e8:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001436ec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001436f0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 0);
    }
L_001436f4:;
    {
        cpu->r[14] = 0x001436f8u; fn_0014347c(cpu);
    }
L_001436f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6]);
    }
L_001436fc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00143704u + + 0x7cu);
    }
L_00143700:;
    {
        vfp_vmul(cpu, 12, 15, 14);
    }
L_00143704:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_00143708:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[6] + + 0x4u);
    }
L_0014370c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 0);
    }
L_00143710:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00143714:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00143718:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3]);
    }
L_0014371c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00143720:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,11);
    }
L_00143724:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[0], 2, 2u, &shc), cpu->r[12]);
    }
L_00143728:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_0014372c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 0);
    }
L_00143730:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_00143734:;
    {
        vfp_vmls(cpu, 14, 12, 11);
    }
L_00143738:;
    {
        vfp_vmul(cpu, 13, 13, 13);
    }
L_0014373c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00143740:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_00143744:;
    {
        vfp_vmla(cpu, 13, 15, 15);
    }
L_00143748:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00143778;
        }
    }
L_0014374c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00143750:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00143754:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + - 0x8u);
    }
L_00143758:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_0014375c:;
    {
        vfp_vmls(cpu, 15, 12, 14);
    }
L_00143760:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00143764:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 0);
    }
L_00143768:;
    {
        vfp_vmls(cpu, 15, 13, 14);
    }
L_0014376c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base - 4u;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[3] = ea;
    }
L_00143770:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00143774:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00143754;
        }
    }
L_00143778:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014377c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00143780u)) return;
    }
}

/* _ZNK14gxBezierCurve318GetThirdDerivativeEf @ 00143784 (arm) */
void fn_00143784(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00143784:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00143788:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0014378c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_00143790:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_00143794:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00143798:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014379c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001437a0:;
    {
        vfp_sync_flags(cpu);
    }
L_001437a4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001438b4;
        }
    }
L_001437a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001437b0u + + 0x158u);
    }
L_001437ac:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_001437b0:;
    {
        vfp_sync_flags(cpu);
    }
L_001437b4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001438b4;
        }
    }
L_001437b8:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_001437bc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000002u, 1, 1);
    }
L_001437c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001438f4;
        }
    }
L_001437c4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001437ccu + + 0x13cu);
    }
L_001437c8:;
    {
        vfp_vsub(cpu, 14, 14, 16);
    }
L_001437cc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], 0x00000003u, 1, 0);
    }
L_001437d0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x14u);
    }
L_001437d4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001437d8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[6]);
    }
L_001437dc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[6] + + 0x4u);
    }
L_001437e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x8u);
    }
L_001437e4:;
    {
        vfp_vmul(cpu, 11, 14, 12);
    }
L_001437e8:;
    {
        vfp_vmul(cpu, 10, 14, 15);
    }
L_001437ec:;
    {
        vfp_vmul(cpu, 12, 14, 13);
    }
L_001437f0:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,13) = *vfp_s(cpu,16);
        }
    }
L_001437f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00143850;
        }
    }
L_001437f8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x18u);
    }
L_001437fc:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,16);
    }
L_00143800:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00143804:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00143808:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0014380c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00143810:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_00143814:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_00143818:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_0014381c:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_00143820:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[3] + + 0x14u);
    }
L_00143824:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00143828:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0014382c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00143830:;
    {
        vfp_vmla(cpu, 10, 15, 7);
    }
L_00143834:;
    {
        vfp_vmla(cpu, 11, 15, 8);
    }
L_00143838:;
    {
        vfp_vmla(cpu, 12, 15, 9);
    }
L_0014383c:;
    {
        vfp_vmul(cpu, 11, 14, 11);
    }
L_00143840:;
    {
        vfp_vmul(cpu, 12, 14, 12);
    }
L_00143844:;
    {
        vfp_vmul(cpu, 10, 14, 10);
    }
L_00143848:;
    {
        vfp_vmul(cpu, 13, 13, 16);
    }
L_0014384c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0014380c;
        }
    }
L_00143850:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00143854:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_00143858:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], 0x00000002u, 1, 0);
    }
L_0014385c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00143860:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_00143864:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[0]);
    }
L_00143868:;
    {
        vfp_vmla(cpu, 10, 13, 15);
    }
L_0014386c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00143870:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_00143874:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00143878:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[3] = v;
    }
L_0014387c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_00143880:;
    {
        vfp_vmla(cpu, 11, 13, 9);
    }
L_00143884:;
    {
        vfp_vmla(cpu, 12, 13, 15);
    }
L_00143888:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0014388c:;
    {
        vfp_vmul(cpu, 11, 14, 11);
    }
L_00143890:;
    {
        vfp_vmul(cpu, 13, 14, 12);
    }
L_00143894:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00143898:;
    {
        vfp_vmul(cpu, 15, 14, 10);
    }
L_0014389c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001438a0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001438a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001438a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001438ac:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001438b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001438b4u)) return;
    }
L_001438b4:;
    {
        cpu->r[1] = rd32(0x001438bcu + + 0x54u);
    }
L_001438b8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001438bc:;
    {
        cpu->r[2] = rd32(0x001438c4u + + 0x50u);
    }
L_001438c0:;
    {
        cpu->r[14] = 0x0000053eu;
    }
L_001438c4:;
    {
        cpu->r[3] = rd32(0x001438ccu + + 0x4cu);
    }
L_001438c8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001438d0u, cpu->r[1], 0, 0);
    }
L_001438cc:;
    {
        cpu->r[12] = rd32(0x001438d4u + + 0x48u);
    }
L_001438d0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001438d8u, cpu->r[2], 0, 0);
    }
L_001438d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001438dcu, cpu->r[3], 0, 0);
    }
L_001438d8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001438dc:;
    {
        cpu->r[12] = add_flags(cpu, 0x001438e4u, cpu->r[12], 0, 0);
    }
L_001438e0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001438e4:;
    {
        cpu->r[14] = 0x001438e8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001438e8:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_001438ec:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000002u, 1, 1);
    }
L_001438f0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001437c4;
        }
    }
L_001438f4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001438fcu + + 0x10u);
    }
L_001438f8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001438fc:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00143900:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00143904:;
    {
        goto L_001438a4;
    }
}

/* _ZNK14gxBezierCurve319GetSecondDerivativeEf @ 00143920 (arm) */
void fn_00143920(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00143920:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00143924:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00143928:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_0014392c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_00143930:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00143934:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00143938:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0014393c:;
    {
        vfp_sync_flags(cpu);
    }
L_00143940:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00143a5c;
        }
    }
L_00143944:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014394cu + + 0x148u);
    }
L_00143948:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_0014394c:;
    {
        vfp_sync_flags(cpu);
    }
L_00143950:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00143a5c;
        }
    }
L_00143954:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014395cu + + 0x138u);
    }
L_00143958:;
    {
        vfp_vsub(cpu, 14, 14, 16);
    }
L_0014395c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x10u);
    }
L_00143960:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_00143964:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[12]);
    }
L_00143968:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x8u);
    }
L_0014396c:;
    {
        cpu->r[6] = rd32(cpu->r[5]);
    }
L_00143970:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 0);
    }
L_00143974:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00143978:;
    {
        vfp_vmul(cpu, 10, 14, 13);
    }
L_0014397c:;
    {
        vfp_vmul(cpu, 12, 14, 12);
    }
L_00143980:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_00143984:;
    {
        vfp_vmul(cpu, 11, 14, 15);
    }
L_00143988:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0014398c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00143990:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,13) = *vfp_s(cpu,16);
        }
    }
L_00143994:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001439fc;
        }
    }
L_00143998:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x18u);
    }
L_0014399c:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,16);
    }
L_001439a0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001439a4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001439a8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001439ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001439b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_001439b4:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_001439b8:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_001439bc:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_001439c0:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[3] + + 0x14u);
    }
L_001439c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001439c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_001439cc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001439d0:;
    {
        vfp_vmla(cpu, 11, 15, 7);
    }
L_001439d4:;
    {
        vfp_vmla(cpu, 12, 15, 8);
    }
L_001439d8:;
    {
        vfp_vmla(cpu, 10, 15, 9);
    }
L_001439dc:;
    {
        vfp_vmul(cpu, 12, 14, 12);
    }
L_001439e0:;
    {
        vfp_vmul(cpu, 10, 14, 10);
    }
L_001439e4:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001439e8:;
    {
        vfp_vmul(cpu, 11, 14, 11);
    }
L_001439ec:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_001439f0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_001439f4:;
    {
        vfp_vmul(cpu, 13, 13, 16);
    }
L_001439f8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001439ac;
        }
    }
L_001439fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00143a00:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00143a04:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_00143a08:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_00143a0c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00143a10:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00143a14:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2]);
    }
L_00143a18:;
    {
        vfp_vmla(cpu, 11, 13, 14);
    }
L_00143a1c:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00143a20:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[6] = v;
    }
L_00143a24:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[6];
    }
L_00143a28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00143a2c:;
    {
        vfp_vmla(cpu, 15, 13, 10);
    }
L_00143a30:;
    {
        vfp_vmla(cpu, 12, 13, 9);
    }
L_00143a34:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00143a38:;
    {
        vfp_vmul(cpu, 11, 14, 11);
    }
L_00143a3c:;
    {
        vfp_vmul(cpu, 13, 14, 12);
    }
L_00143a40:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00143a44:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00143a48:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00143a4c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00143a50:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00143a54:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00143a58:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00143a5cu)) return;
    }
L_00143a5c:;
    {
        cpu->r[1] = rd32(0x00143a64u + + 0x34u);
    }
L_00143a60:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00143a64:;
    {
        cpu->r[12] = rd32(0x00143a6cu + + 0x30u);
    }
L_00143a68:;
    {
        cpu->r[14] = 0x00000526u;
    }
L_00143a6c:;
    {
        cpu->r[2] = rd32(0x00143a74u + + 0x2cu);
    }
L_00143a70:;
    {
        cpu->r[1] = add_flags(cpu, 0x00143a78u, cpu->r[1], 0, 0);
    }
L_00143a74:;
    {
        cpu->r[3] = rd32(0x00143a7cu + + 0x28u);
    }
L_00143a78:;
    {
        cpu->r[12] = add_flags(cpu, 0x00143a80u, cpu->r[12], 0, 0);
    }
L_00143a7c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00143a84u, cpu->r[2], 0, 0);
    }
L_00143a80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000014u, 0, 0);
    }
L_00143a84:;
    {
        cpu->r[3] = add_flags(cpu, 0x00143a8cu, cpu->r[3], 0, 0);
    }
L_00143a88:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00143a8c:;
    {
        cpu->r[14] = 0x00143a90u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00143a90:;
    {
        goto L_00143954;
    }
}

/* _ZNK14gxBezierCurve318GetFirstDerivativeEf @ 00143aa8 (arm) */
void fn_00143aa8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00143aa8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00143aac:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00143ab0:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_00143ab4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_00143ab8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00143abc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00143ac0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00143ac4:;
    {
        vfp_sync_flags(cpu);
    }
L_00143ac8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00143bdc;
        }
    }
L_00143acc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00143ad4u + + 0x140u);
    }
L_00143ad0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_00143ad4:;
    {
        vfp_sync_flags(cpu);
    }
L_00143ad8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00143bdc;
        }
    }
L_00143adc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00143ae4u + + 0x130u);
    }
L_00143ae0:;
    {
        vfp_vsub(cpu, 14, 14, 16);
    }
L_00143ae4:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_00143ae8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_00143aec:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[12]);
    }
L_00143af0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x8u);
    }
L_00143af4:;
    {
        cpu->r[6] = rd32(cpu->r[5]);
    }
L_00143af8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_00143afc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00143b00:;
    {
        vfp_vmul(cpu, 10, 14, 13);
    }
L_00143b04:;
    {
        vfp_vmul(cpu, 12, 14, 12);
    }
L_00143b08:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_00143b0c:;
    {
        vfp_vmul(cpu, 11, 14, 15);
    }
L_00143b10:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00143b14:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00143b18:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,13) = *vfp_s(cpu,16);
        }
    }
L_00143b1c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00143b84;
        }
    }
L_00143b20:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x18u);
    }
L_00143b24:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,16);
    }
L_00143b28:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00143b2c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00143b30:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00143b34:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00143b38:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_00143b3c:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_00143b40:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_00143b44:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_00143b48:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[3] + + 0x14u);
    }
L_00143b4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00143b50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00143b54:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00143b58:;
    {
        vfp_vmla(cpu, 11, 15, 7);
    }
L_00143b5c:;
    {
        vfp_vmla(cpu, 12, 15, 8);
    }
L_00143b60:;
    {
        vfp_vmla(cpu, 10, 15, 9);
    }
L_00143b64:;
    {
        vfp_vmul(cpu, 12, 14, 12);
    }
L_00143b68:;
    {
        vfp_vmul(cpu, 10, 14, 10);
    }
L_00143b6c:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00143b70:;
    {
        vfp_vmul(cpu, 11, 14, 11);
    }
L_00143b74:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_00143b78:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00143b7c:;
    {
        vfp_vmul(cpu, 13, 13, 16);
    }
L_00143b80:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00143b34;
        }
    }
L_00143b84:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00143b88:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00143b8c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_00143b90:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[6];
    }
L_00143b94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00143b98:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,10);
    }
L_00143b9c:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3]);
    }
L_00143ba0:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00143ba4:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00143ba8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00143bac:;
    {
        vfp_vmla(cpu, 11, 13, 8);
    }
L_00143bb0:;
    {
        vfp_vmla(cpu, 15, 13, 10);
    }
L_00143bb4:;
    {
        vfp_vmla(cpu, 12, 13, 9);
    }
L_00143bb8:;
    {
        vfp_vmul(cpu, 11, 14, 11);
    }
L_00143bbc:;
    {
        vfp_vmul(cpu, 13, 14, 12);
    }
L_00143bc0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00143bc4:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00143bc8:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00143bcc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00143bd0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00143bd4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00143bd8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00143bdcu)) return;
    }
L_00143bdc:;
    {
        cpu->r[1] = rd32(0x00143be4u + + 0x34u);
    }
L_00143be0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00143be4:;
    {
        cpu->r[12] = rd32(0x00143becu + + 0x30u);
    }
L_00143be8:;
    {
        cpu->r[14] = 0x0000050eu;
    }
L_00143bec:;
    {
        cpu->r[2] = rd32(0x00143bf4u + + 0x2cu);
    }
L_00143bf0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00143bf8u, cpu->r[1], 0, 0);
    }
L_00143bf4:;
    {
        cpu->r[3] = rd32(0x00143bfcu + + 0x28u);
    }
L_00143bf8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00143c00u, cpu->r[12], 0, 0);
    }
L_00143bfc:;
    {
        cpu->r[2] = add_flags(cpu, 0x00143c04u, cpu->r[2], 0, 0);
    }
L_00143c00:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000028u, 0, 0);
    }
L_00143c04:;
    {
        cpu->r[3] = add_flags(cpu, 0x00143c0cu, cpu->r[3], 0, 0);
    }
L_00143c08:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00143c0c:;
    {
        cpu->r[14] = 0x00143c10u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00143c10:;
    {
        goto L_00143adc;
    }
}

/* _ZNK14gxBezierCurve34evalEf @ 00143c28 (arm) */
void fn_00143c28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00143c28:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00143c2c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00143c30:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_00143c34:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_00143c38:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00143c3c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00143c40:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00143c44:;
    {
        vfp_sync_flags(cpu);
    }
L_00143c48:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00143d44;
        }
    }
L_00143c4c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00143c54u + + 0x128u);
    }
L_00143c50:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_00143c54:;
    {
        vfp_sync_flags(cpu);
    }
L_00143c58:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00143d44;
        }
    }
L_00143c5c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00143c64u + + 0x118u);
    }
L_00143c60:;
    {
        vfp_vsub(cpu, 14, 14, 16);
    }
L_00143c64:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00143c68:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00143c6c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3]);
    }
L_00143c70:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00143c74:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_00143c78:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00143c7c:;
    {
        vfp_vmul(cpu, 10, 14, 13);
    }
L_00143c80:;
    {
        vfp_vmul(cpu, 12, 14, 12);
    }
L_00143c84:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_00143c88:;
    {
        vfp_vmul(cpu, 11, 14, 15);
    }
L_00143c8c:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00143c90:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00143c94:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,13) = *vfp_s(cpu,16);
        }
    }
L_00143c98:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00143d00;
        }
    }
L_00143c9c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x18u);
    }
L_00143ca0:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,16);
    }
L_00143ca4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00143ca8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00143cac:;
    {
        cpu->r[12] = rd32(cpu->r[12] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00143cb0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00143cb4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_00143cb8:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_00143cbc:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_00143cc0:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[1] + + 0x10u);
    }
L_00143cc4:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[1] + + 0x14u);
    }
L_00143cc8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00143ccc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_00143cd0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00143cd4:;
    {
        vfp_vmla(cpu, 11, 15, 7);
    }
L_00143cd8:;
    {
        vfp_vmla(cpu, 12, 15, 8);
    }
L_00143cdc:;
    {
        vfp_vmla(cpu, 10, 15, 9);
    }
L_00143ce0:;
    {
        vfp_vmul(cpu, 12, 14, 12);
    }
L_00143ce4:;
    {
        vfp_vmul(cpu, 10, 14, 10);
    }
L_00143ce8:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00143cec:;
    {
        vfp_vmul(cpu, 11, 14, 11);
    }
L_00143cf0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_00143cf4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00143cf8:;
    {
        vfp_vmul(cpu, 13, 13, 16);
    }
L_00143cfc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00143cb0;
        }
    }
L_00143d00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00143d04:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00143d08:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_00143d0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00143d10:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00143d14:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00143d18:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[1]);
    }
L_00143d1c:;
    {
        vfp_vmla(cpu, 14, 13, 11);
    }
L_00143d20:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00143d24:;
    {
        vfp_vmla(cpu, 12, 13, 10);
    }
L_00143d28:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00143d2c:;
    {
        vfp_vmla(cpu, 15, 13, 11);
    }
L_00143d30:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00143d34:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00143d38:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00143d3c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00143d40:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00143d44u)) return;
    }
L_00143d44:;
    {
        cpu->r[1] = rd32(0x00143d4cu + + 0x34u);
    }
L_00143d48:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00143d4c:;
    {
        cpu->r[12] = rd32(0x00143d54u + + 0x30u);
    }
L_00143d50:;
    {
        cpu->r[14] = 0x000004f8u;
    }
L_00143d54:;
    {
        cpu->r[2] = rd32(0x00143d5cu + + 0x2cu);
    }
L_00143d58:;
    {
        cpu->r[1] = add_flags(cpu, 0x00143d60u, cpu->r[1], 0, 0);
    }
L_00143d5c:;
    {
        cpu->r[3] = rd32(0x00143d64u + + 0x28u);
    }
L_00143d60:;
    {
        cpu->r[12] = add_flags(cpu, 0x00143d68u, cpu->r[12], 0, 0);
    }
L_00143d64:;
    {
        cpu->r[2] = add_flags(cpu, 0x00143d6cu, cpu->r[2], 0, 0);
    }
L_00143d68:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000003cu, 0, 0);
    }
L_00143d6c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00143d74u, cpu->r[3], 0, 0);
    }
L_00143d70:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00143d74:;
    {
        cpu->r[14] = 0x00143d78u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00143d78:;
    {
        goto L_00143c5c;
    }
}

/* _ZNK14gxBezierCurve312GetVariationEffPK8Vector3dS2_ @ 00143d90 (arm) */
void fn_00143d90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00143d90:;
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
L_00143d94:;
    {
        cpu->r[13] -= 40u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
        wr64(cpu->r[13] + 32u, *(uint64_t*)vfp_d(cpu, 12));
    }
L_00143d98:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00143d9c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00143da4u + + 0x3a8u);
    }
L_00143da0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_00143da4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00143da8:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[1];
    }
L_00143dac:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[2];
    }
L_00143db0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00143db4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00143db8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00143dbc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00143dc0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00143dc4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00143dc8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x90u);
    }
L_00143dcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001440fc;
        }
    }
L_00143dd0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00143dd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00144124;
        }
    }
L_00143dd8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x20u);
    }
L_00143ddc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00143de4u + + 0x36cu);
    }
L_00143de0:;
    {
        vfp_vsub(cpu, 14, 13, 17);
    }
L_00143de4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00143de8:;
    {
        vfp_vsub(cpu, 13, 13, 16);
    }
L_00143dec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001440d4;
        }
    }
L_00143df0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_00143df4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00143df8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x38u);
    }
L_00143dfc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00143e00:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00143e04:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x34u);
    }
L_00143e08:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00143e0c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00143e10:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00143e14:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_00143e18:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_00143e1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00143e20:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[8], 1, 1);
    }
L_00143e24:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00143e28:;
    {
        uint32_t wb_tmp = cpu->r[0] + + 0x4u;
        wr32(cpu->r[0] + + 0x4u, cpu->r[7]);
        cpu->r[0] = wb_tmp;
    }
L_00143e2c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_00143e30:;
    {
        vfp_vmul(cpu, 15, 15, 17);
    }
L_00143e34:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00143e38:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x4u;
        wr32(cpu->r[2] + + 0x4u, cpu->r[7]);
        cpu->r[2] = wb_tmp;
    }
L_00143e3c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_00143e40:;
    {
        vfp_vmul(cpu, 15, 15, 13);
    }
L_00143e44:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00143e48:;
    {
        uint32_t wb_tmp = cpu->r[1] + + 0x4u;
        wr32(cpu->r[1] + + 0x4u, cpu->r[7]);
        cpu->r[1] = wb_tmp;
    }
L_00143e4c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00143e50:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_00143e54:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00143e58:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x4u;
        wr32(cpu->r[3] + + 0x4u, cpu->r[7]);
        cpu->r[3] = wb_tmp;
    }
L_00143e5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00143e14;
        }
    }
L_00143e60:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[6] + + 0x4u);
    }
L_00143e64:;
    {
        *vfp_s(cpu, 23) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_00143e68:;
    {
        vfp_vmul(cpu, 13, 20, 20);
    }
L_00143e6c:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[6]);
    }
L_00143e70:;
    {
        *vfp_s(cpu, 22) = *(float*)G(cpu->r[5]);
    }
L_00143e74:;
    {
        *vfp_s(cpu, 21) = *(float*)G(cpu->r[6] + + 0x8u);
    }
L_00143e78:;
    {
        *vfp_s(cpu, 24) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_00143e7c:;
    {
        cpu->r[7] = rd32(cpu->r[4]);
    }
L_00143e80:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x28u);
    }
L_00143e84:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_00143e88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_00143e8c:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_00143e90:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00143e94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00143e98:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2]);
    }
L_00143e9c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00143ea0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00143ea4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1]);
    }
L_00143ea8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00143eac:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2]);
    }
L_00143eb0:;
    {
        vfp_vmul(cpu, 14, 20, 23);
    }
L_00143eb4:;
    {
        vfp_vmul(cpu, 15, 23, 23);
    }
L_00143eb8:;
    {
        vfp_vmla(cpu, 14, 19, 22);
    }
L_00143ebc:;
    {
        vfp_vmla(cpu, 13, 19, 19);
    }
L_00143ec0:;
    {
        vfp_vmla(cpu, 15, 22, 22);
    }
L_00143ec4:;
    {
        vfp_vmla(cpu, 13, 21, 21);
    }
L_00143ec8:;
    {
        vfp_vmla(cpu, 14, 21, 24);
    }
L_00143ecc:;
    {
        vfp_vmla(cpu, 15, 24, 24);
    }
L_00143ed0:;
    {
        vfp_vsub(cpu, 17, 17, 16);
    }
L_00143ed4:;
    {
        vfp_vadd(cpu, 14, 13, 14);
    }
L_00143ed8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00143ee0u + + 0x274u);
    }
L_00143edc:;
    {
        vfp_vmul(cpu, 12, 17, 13);
    }
L_00143ee0:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_00143ee4:;
    {
        vfp_vsub(cpu, 22, 22, 19);
    }
L_00143ee8:;
    {
        vfp_vmul(cpu, 1, 12, 15);
    }
L_00143eec:;
    {
        vfp_vsub(cpu, 23, 23, 20);
    }
L_00143ef0:;
    {
        vfp_vsub(cpu, 24, 24, 21);
    }
L_00143ef4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001440e8;
        }
    }
L_00143ef8:;
    {
        vfp_vsub(cpu, 15, 9, 11);
    }
L_00143efc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00143f00:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[5] = v;
    }
L_00143f04:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_00143f08:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_00143f0c:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_00143f10:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x00143f18u + + 0x234u);
    }
L_00143f14:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
    }
L_00143f18:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00143f1c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_00143f20:;
    {
        cpu->r[11] = rd32(cpu->r[2] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_00143f24:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00143f28:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00143f2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x34u);
    }
L_00143f30:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_00143f34:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[8]);
    }
L_00143f38:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_00143f3c:;
    {
        vfp_vmul(cpu, 10, 15, 10);
    }
L_00143f40:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_00143f44:;
    {
        cpu->r[10] = cpu->r[4];
    }
L_00143f48:;
    {
        *vfp_s(cpu,4) = *vfp_s(cpu,11);
    }
L_00143f4c:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,11);
    }
L_00143f50:;
    {
        *vfp_s(cpu,9) = *vfp_s(cpu,11);
    }
L_00143f54:;
    {
        cpu->r[4] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_00143f58:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_00143f5c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[8], cpu->r[4], 0, 0);
    }
L_00143f60:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_00143f64:;
    {
        vfp_vmul(cpu, 13, 12, 15);
    }
L_00143f68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00143f6c:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[0]);
    }
L_00143f70:;
    {
        *vfp_s(cpu, 0) = *(float*)G(cpu->r[12]);
    }
L_00143f74:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_00143f78:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00143f7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00143f80:;
    {
        *vfp_s(cpu, 2) = *(float*)G(cpu->r[12]);
    }
L_00143f84:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00143f88:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00143f8c:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[2]);
    }
L_00143f90:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_00143f94:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[5]);
    }
L_00143f98:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00143f9c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_00143fa0:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[4]);
    }
L_00143fa4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_00143fa8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00143fac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_00143fb0:;
    {
        vfp_vmul(cpu, 12, 12, 18);
    }
L_00143fb4:;
    {
        vfp_vnmls(cpu, 13, 14, 0);
    }
L_00143fb8:;
    {
        vfp_vnmls(cpu, 12, 14, 2);
    }
L_00143fbc:;
    {
        vfp_vmul(cpu, 14, 23, 15);
    }
L_00143fc0:;
    {
        vfp_vmul(cpu, 15, 20, 15);
    }
L_00143fc4:;
    {
        vfp_vmla(cpu, 13, 9, 11);
    }
L_00143fc8:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[1];
    }
L_00143fcc:;
    {
        *vfp_s(cpu,9) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_00143fd0:;
    {
        vfp_vmla(cpu, 12, 9, 10);
    }
L_00143fd4:;
    {
        vfp_vmla(cpu, 14, 22, 5);
    }
L_00143fd8:;
    {
        vfp_vmla(cpu, 15, 19, 5);
    }
L_00143fdc:;
    {
        vfp_vmul(cpu, 10, 6, 12);
    }
L_00143fe0:;
    {
        vfp_vmul(cpu, 11, 13, 6);
    }
L_00143fe4:;
    {
        vfp_vmla(cpu, 14, 24, 7);
    }
L_00143fe8:;
    {
        vfp_vmla(cpu, 15, 21, 7);
    }
L_00143fec:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,10);
    }
L_00143ff0:;
    {
        vfp_vmls(cpu, 13, 16, 11);
    }
L_00143ff4:;
    {
        vfp_vmul(cpu, 14, 8, 14);
    }
L_00143ff8:;
    {
        vfp_vmul(cpu, 15, 8, 15);
    }
L_00143ffc:;
    {
        vfp_vmla(cpu, 4, 13, 14);
    }
L_00144000:;
    {
        vfp_vmla(cpu, 3, 15, 11);
    }
L_00144004:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00143f54;
        }
    }
L_00144008:;
    {
        cpu->r[4] = cpu->r[10];
    }
L_0014400c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x8u);
    }
L_00144010:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xcu);
    }
L_00144014:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00144018:;
    {
        vfp_vdiv(cpu, 6, 4, 17);
    }
L_0014401c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00144020:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001440f4;
        }
    }
L_00144024:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00144028:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00144030u + + 0x11cu);
    }
L_0014402c:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_00144030:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,14);
    }
L_00144034:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[8] = v;
    }
L_00144038:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x24u);
    }
L_0014403c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00144040:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00144044:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x34u);
    }
L_00144048:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], cpu->r[8], 0, 0);
    }
L_0014404c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_00144050:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00144054:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_00144058:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_0014405c:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[7]);
    }
L_00144060:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_00144064:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[7]);
    }
L_00144068:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_0014406c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_00144070:;
    {
        vfp_vmul(cpu, 15, 7, 15);
    }
L_00144074:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[8], 0, 0);
    }
L_00144078:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[1]);
    }
L_0014407c:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[2];
    }
L_00144080:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_00144084:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00144088:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_0014408c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00144090:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[7]);
    }
L_00144094:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00144098:;
    {
        vfp_vnmls(cpu, 15, 8, 9);
    }
L_0014409c:;
    {
        *vfp_s(cpu,10) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_001440a0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1]);
    }
L_001440a4:;
    {
        vfp_vmla(cpu, 15, 10, 14);
    }
L_001440a8:;
    {
        vfp_vmul(cpu, 14, 15, 11);
    }
L_001440ac:;
    {
        vfp_vmla(cpu, 13, 14, 12);
    }
L_001440b0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00144054;
        }
    }
L_001440b4:;
    {
        vfp_vadd(cpu, 3, 3, 6);
    }
L_001440b8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001440c0u + + 0x98u);
    }
L_001440bc:;
    {
        vfp_vmla(cpu, 1, 3, 15);
    }
L_001440c0:;
    {
        vfp_vadd(cpu, 1, 1, 13);
    }
L_001440c4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,1);
    }
L_001440c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_001440cc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        *(uint64_t*)vfp_d(cpu, 12) = rd64(cpu->r[13] + 32u);
        cpu->r[13] += 40u;
    }
L_001440d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001440d4u)) return;
    }
L_001440d4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x30u);
    }
L_001440d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x38u);
    }
L_001440dc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001440e0:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_001440e4:;
    {
        goto L_00143e60;
    }
L_001440e8:;
    {
        *vfp_s(cpu, 4) = *(float*)G(0x001440f0u + + 0x5cu);
    }
L_001440ec:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,4);
    }
L_001440f0:;
    {
        goto L_00144014;
    }
L_001440f4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001440fcu + + 0x50u);
    }
L_001440f8:;
    {
        goto L_001440b4;
    }
L_001440fc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00144100:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00144104:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00144108:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014410c:;
    {
        cpu->r[14] = 0x00144110u; fn_00143c28(cpu);
    }
L_00144110:;
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
L_00144114:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00144118:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0014411c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00144120:;
    {
        goto L_00143dd0;
    }
L_00144124:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00144128:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014412c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00144130:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,17);
    }
L_00144134:;
    {
        cpu->r[14] = 0x00144138u; fn_00143c28(cpu);
    }
L_00144138:;
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
L_0014413c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00144140:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_00144144:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00144148:;
    {
        goto L_00143dd8;
    }
}

/* _ZN12gxPolynomial19computeRoots_LinearEffPf @ 0014415c (arm) */
void fn_0014415c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014415c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00144160:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_00144164:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00144168:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014416c:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_00144170:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00144174:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[1];
    }
L_00144178:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0014417c:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[2];
    }
L_00144180:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_00144184:;
    {
        vfp_sync_flags(cpu);
    }
L_00144188:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_0014418c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001441c4;
        }
    }
L_00144190:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,17));
    }
L_00144194:;
    {
        vfp_sync_flags(cpu);
    }
L_00144198:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001441bc;
        }
    }
L_0014419c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,18));
    }
L_001441a0:;
    {
        vfp_sync_flags(cpu);
    }
L_001441a4:;
    {
        if (cond_test(cpu, 10)) {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 16);
        }
    }
L_001441a8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001441ac:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001441bc;
        }
    }
L_001441b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001441b4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_001441b8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001441bcu)) return;
    }
L_001441bc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001441c0:;
    {
        goto L_001441b0;
    }
L_001441c4:;
    {
        cpu->r[1] = rd32(0x001441ccu + + 0x30u);
    }
L_001441c8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001441cc:;
    {
        cpu->r[12] = rd32(0x001441d4u + + 0x2cu);
    }
L_001441d0:;
    {
        cpu->r[14] = 0x0000024au;
    }
L_001441d4:;
    {
        cpu->r[2] = rd32(0x001441dcu + + 0x28u);
    }
L_001441d8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001441e0u, cpu->r[1], 0, 0);
    }
L_001441dc:;
    {
        cpu->r[3] = rd32(0x001441e4u + + 0x24u);
    }
L_001441e0:;
    {
        cpu->r[12] = add_flags(cpu, 0x001441e8u, cpu->r[12], 0, 0);
    }
L_001441e4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001441ecu, cpu->r[2], 0, 0);
    }
L_001441e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000044u, 0, 0);
    }
L_001441ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x001441f4u, cpu->r[3], 0, 0);
    }
L_001441f0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001441f4:;
    {
        cpu->r[14] = 0x001441f8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001441f8:;
    {
        goto L_00144190;
    }
}
