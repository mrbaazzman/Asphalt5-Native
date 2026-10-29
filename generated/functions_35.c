#include "functions.h"

/* _ZN5Scene25UpdateTrafficCarsMatricesEh @ 000e56e0 (arm) */
void fn_000e56e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e56e0:;
    {
        cpu->r[3] = 0x000082a0u;
    }
L_000e56e4:;
    {
        cpu->r[1] = rd32(0x000e56ecu + + 0x4e0u);
    }
L_000e56e8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e56ec:;
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
L_000e56f0:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_000e56f4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e56f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000fcu, 1, 0);
    }
L_000e56fc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e5704u, cpu->r[1], 0, 0);
    }
L_000e5700:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e5704:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000e5708:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_000e570c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e5f8c;
        }
    }
L_000e5710:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e5714:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e5718:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e571c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e5720:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e5f8c;
        }
    }
L_000e5724:;
    {
        cpu->r[3] = rd32(0x000e572cu + + 0x4a4u);
    }
L_000e5728:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00064000u, 0, 0);
    }
L_000e572c:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_000e5730:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], 0x000000f8u, 0, 0);
    }
L_000e5734:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e573cu, cpu->r[3], 0, 0);
    }
L_000e5738:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_000e573c:;
    {
        cpu->r[3] = rd32(0x000e5744u + + 0x490u);
    }
L_000e5740:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], 0x000000b4u, 0, 0);
    }
L_000e5744:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_000e5748:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000013cu, 0, 0);
    }
L_000e574c:;
    {
        cpu->r[10] = cpu->r[11];
    }
L_000e5750:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000e5754:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_000e5758:;
    {
        cpu->r[3] = rd32(0x000e5760u + + 0x478u);
    }
L_000e575c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e5764u, cpu->r[3], 0, 0);
    }
L_000e5760:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_000e5764:;
    {
        cpu->r[3] = rd32(0x000e576cu + + 0x470u);
    }
L_000e5768:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e5770u, cpu->r[3], 0, 0);
    }
L_000e576c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_000e5770:;
    {
        cpu->r[3] = rd32(0x000e5778u + + 0x468u);
    }
L_000e5774:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e577cu, cpu->r[3], 0, 0);
    }
L_000e5778:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_000e577c:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000e5780:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e5784:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000e5788:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[9], 0, 1);
    }
L_000e578c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e5f6c;
        }
    }
L_000e5790:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e5794:;
    {
        cpu->r[14] = 0x000e5798u; fn_00153600(cpu);
    }
L_000e5798:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x62cu);
    }
L_000e579c:;
    {
        uint32_t v = cpu->r[3] & 0x00000008u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_000e57a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e58e0;
        }
    }
L_000e57a4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x1d8u);
    }
L_000e57a8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000800u, 1, 1);
    }
L_000e57ac:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000e61a0;
        }
    }
L_000e57b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e57b4:;
    {
        cpu->r[12] = 0x00008c50u;
    }
L_000e57b8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_000e57bc:;
    {
        cpu->r[14] = 0x000e57c0u; fn_00173e08(cpu);
    }
L_000e57c0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000e57c4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000e57ccu + + 0x3f4u);
    }
L_000e57c8:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000e57d0u + + 0x3f4u);
    }
L_000e57cc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000e57d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e57d4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000e57d8:;
    {
        cpu->r[14] = 0x000e57dcu; fn_00173e3c(cpu);
    }
L_000e57dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e57e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e57e4:;
    {
        cpu->r[14] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0xb6u);
    }
L_000e57e8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000e57ec:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000e57f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000f4u, 0, 0);
    }
L_000e57f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e57f8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0xb4u);
    }
L_000e57fc:;
    {
        wr32(cpu->r[13] + + 0xe8u, cpu->r[14]);
    }
L_000e5800:;
    {
        wr32(cpu->r[13] + + 0xf0u, cpu->r[3]);
    }
L_000e5804:;
    {
        cpu->r[3] = 0x00000800u;
    }
L_000e5808:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0xb6u);
    }
L_000e580c:;
    {
        cpu->r[14] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0xb4u);
    }
L_000e5810:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000e5814:;
    {
        wr32(cpu->r[13] + + 0xecu, cpu->r[2]);
    }
L_000e5818:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000000f0u, 0, 0);
    }
L_000e581c:;
    {
        wr32(cpu->r[13] + + 0xf4u, cpu->r[14]);
    }
L_000e5820:;
    {
        cpu->r[14] = 0x000e5824u; fn_00180474(cpu);
    }
L_000e5824:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e5828:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000000e8u, 0, 0);
    }
L_000e582c:;
    {
        cpu->r[3] = 0x00000800u;
    }
L_000e5830:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000ecu, 0, 0);
    }
L_000e5834:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_000e5838:;
    {
        cpu->r[14] = 0x000e583cu; fn_00180474(cpu);
    }
L_000e583c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe8u);
    }
L_000e5840:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xecu);
    }
L_000e5844:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000800u, cpu->r[7], 1, 0);
    }
L_000e5848:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xf0u);
    }
L_000e584c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e5850:;
    {
        uint32_t v = cpu->r[3] * cpu->r[7]; cpu->r[3] = v;
    }
L_000e5854:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1] + cpu->r[3]; cpu->r[2] = v;
    }
L_000e5858:;
    {
        uint32_t v = cpu->r[12] * cpu->r[7]; cpu->r[12] = v;
    }
L_000e585c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x000007f0u, 0, 0);
    }
L_000e5860:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e5864:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_000e5868:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_000e586c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xf4u);
    }
L_000e5870:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 11u, &shc); cpu->r[7] = v;
    }
L_000e5874:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[7];
    }
L_000e5878:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000e587c:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_000e5880:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1] + cpu->r[12]; cpu->r[3] = v;
    }
L_000e5884:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x000007f0u, 0, 0);
    }
L_000e5888:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e588c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000fu, 0, 0);
    }
L_000e5890:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000e5894:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_000e5898:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 11u, &shc); cpu->r[3] = v;
    }
L_000e589c:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[3];
    }
L_000e58a0:;
    {
        vfp_vmul(cpu, 12, 15, 17);
    }
L_000e58a4:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,18);
    }
L_000e58a8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000e58ac:;
    {
        cpu->r[14] = 0x000e58b0u; fn_0015429c(cpu);
    }
L_000e58b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e58b4:;
    {
        vfp_vmul(cpu, 15, 18, 16);
    }
L_000e58b8:;
    {
        vfp_vmul(cpu, 13, 15, 17);
    }
L_000e58bc:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000e58c0:;
    {
        cpu->r[14] = 0x000e58c4u; fn_00154734(cpu);
    }
L_000e58c4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[7];
    }
L_000e58c8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000e58cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e58d0:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000e58d4:;
    {
        vfp_vmul(cpu, 14, 15, 17);
    }
L_000e58d8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000e58dc:;
    {
        cpu->r[14] = 0x000e58e0u; fn_00154350(cpu);
    }
L_000e58e0:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000e58e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e58e8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000e58ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000e4u, 0, 0);
    }
L_000e58f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000000e0u, 0, 0);
    }
L_000e58f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000dcu, 0, 0);
    }
L_000e58f8:;
    {
        cpu->r[12] = 0x00000015u;
    }
L_000e58fc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e5900:;
    {
        cpu->r[14] = 0x000e5904u; fn_00154038(cpu);
    }
L_000e5904:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e5908:;
    {
        cpu->r[14] = 0x000e590cu; fn_00096b6c(cpu);
    }
L_000e590c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e5910:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e608c;
        }
    }
L_000e5914:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000e5918:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000e591c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e5920:;
    {
        cpu->r[14] = 0x000e5924u; fn_00096b88(cpu);
    }
L_000e5924:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e5928:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e60ec;
        }
    }
L_000e592c:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000e5930:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x550u);
    }
L_000e5934:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e5938:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000e593c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000e5940:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000e5944:;
    {
        wr32(cpu->r[13] + + 0xd8u, cpu->r[7]);
    }
L_000e5948:;
    {
        wr32(cpu->r[13] + + 0xd4u, cpu->r[2]);
    }
L_000e594c:;
    {
        wr32(cpu->r[13] + + 0xd0u, cpu->r[7]);
    }
L_000e5950:;
    {
        cpu->r[14] = 0x000e5954u; fn_00096b6c(cpu);
    }
L_000e5954:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e5958:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_000e595c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e6174;
        }
    }
L_000e5960:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000e5964:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000e5968:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e596c:;
    {
        cpu->r[14] = 0x000e5970u; fn_00096b88(cpu);
    }
L_000e5970:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e5974:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e6024;
        }
    }
L_000e5978:;
    {
        cpu->r[1] = rd32(0x000e5980u + + 0x270u);
    }
L_000e597c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000e5980:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000e5984:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000e5988:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000e598c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x424u);
    }
L_000e5990:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x420u);
    }
L_000e5994:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x41cu);
    }
L_000e5998:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_000e599c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000e59a0:;
    {
        cpu->r[14] = 0x000e59a4u; fn_00096b88(cpu);
    }
L_000e59a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e59a8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e59ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3dcu);
        }
    }
L_000e59b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3d8u);
        }
    }
L_000e59b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = rd32(cpu->r[4] + + 0x3d4u);
        }
    }
L_000e59b8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
        }
    }
L_000e59bc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x24u, cpu->r[14]);
        }
    }
L_000e59c0:;
    {
        cpu->r[14] = 0x000e59c4u; fn_00153600(cpu);
    }
L_000e59c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x39cu);
    }
L_000e59c8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000e59cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e59f4;
        }
    }
L_000e59d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e59d4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xd8u);
    }
L_000e59d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xd4u);
    }
L_000e59dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xd0u);
    }
L_000e59e0:;
    {
        cpu->r[14] = 0x000e59e4u; fn_00172a84(cpu);
    }
L_000e59e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xcu);
    }
L_000e59e8:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_000e59ec:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000e59f0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xd8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e59f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3a8u);
    }
L_000e59f8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000e59fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e5a14;
        }
    }
L_000e5a00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e5a04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000d8u, 0, 0);
    }
L_000e5a08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000000d0u, 0, 0);
    }
L_000e5a0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000d4u, 0, 0);
    }
L_000e5a10:;
    {
        cpu->r[14] = 0x000e5a14u; fn_00173250(cpu);
    }
L_000e5a14:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e5a18:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e5a1c:;
    {
        cpu->r[14] = 0x000e5a20u; fn_00153478(cpu);
    }
L_000e5a20:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xd4u);
    }
L_000e5a24:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000e5a28:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000e5a30u + + 0x190u);
    }
L_000e5a2c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000e5a34u + + 0x190u);
    }
L_000e5a30:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e5a34:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_000e5a38:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000e5a3c:;
    {
        vfp_vmul(cpu, 11, 15, 17);
    }
L_000e5a40:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,11);
    }
L_000e5a44:;
    {
        cpu->r[14] = 0x000e5a48u; fn_00154350(cpu);
    }
L_000e5a48:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xd8u);
    }
L_000e5a4c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e5a50:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_000e5a54:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000e5a58:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000e5a5c:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000e5a60:;
    {
        vfp_vmul(cpu, 12, 15, 17);
    }
L_000e5a64:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000e5a68:;
    {
        cpu->r[14] = 0x000e5a6cu; fn_00154734(cpu);
    }
L_000e5a6c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xd0u);
    }
L_000e5a70:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000e5a74:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e5a78:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000e5a7c:;
    {
        vfp_vmul(cpu, 13, 15, 17);
    }
L_000e5a80:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000e5a84:;
    {
        cpu->r[14] = 0x000e5a88u; fn_00154514(cpu);
    }
L_000e5a88:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[7];
    }
L_000e5a8c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000e5a90:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x28u);
    }
L_000e5a94:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e5a98:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e5a9c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000e5aa0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_000e5aa4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000e5aa8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000e5aac:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e5ab0:;
    {
        cpu->r[14] = 0x000e5ab4u; fn_0015364c(cpu);
    }
L_000e5ab4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_000e5ab8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000e5abc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e61fc;
        }
    }
L_000e5ac0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_000e5ac4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e5ac8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e5acc:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[3]);
    }
L_000e5ad0:;
    {
        cpu->r[14] = 0x000e5ad4u; fn_001535e0(cpu);
    }
L_000e5ad4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e5ad8:;
    {
        cpu->r[14] = 0x000e5adcu; fn_00153600(cpu);
    }
L_000e5adc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e5ae0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e5ae8u + + 0xe0u);
    }
L_000e5ae4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x90u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e5ae8:;
    {
        cpu->r[14] = 0x000e5aecu; fn_00153600(cpu);
    }
L_000e5aec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000e5af0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e5af4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e5af8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x4248u << 16);
    }
L_000e5afc:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000e5b00:;
    {
        cpu->r[12] = 0x00001c90u;
    }
L_000e5b04:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000e5b08:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000e5b0c:;
    {
        cpu->r[14] = 0x000e5b10u; fn_0015364c(cpu);
    }
L_000e5b10:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e5b14:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000e5b18:;
    {
        cpu->r[14] = 0x000e5b1cu; fn_00096b88(cpu);
    }
L_000e5b1c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e5b20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e5b24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e5f98;
        }
    }
L_000e5b28:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_000e5b2c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000e5b30:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e5b34:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000e5b38:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000e5b3c:;
    {
        cpu->r[14] = 0x000e5b40u; fn_00099560(cpu);
    }
L_000e5b40:;
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
    }
L_000e5b44:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000e5b48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x000000a8u, 0, 0);
    }
L_000e5b4c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000e5b50:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_000e5b54:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e5b58:;
    {
        cpu->r[14] = 0x000e5b5cu; fn_00096b6c(cpu);
    }
L_000e5b5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e5b60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e6010;
        }
    }
L_000e5b64:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xb4u);
    }
L_000e5b68:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000e5b6c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e5b74u + + 0x88u);
    }
L_000e5b70:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xa8u);
    }
L_000e5b74:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0xb0u);
    }
L_000e5b78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000098u, 0, 0);
    }
L_000e5b7c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000e5b80:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000e5b84:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000e5b88:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000e5b8c:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000e5b90:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000e5b94:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000e5b98:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xacu);
    }
L_000e5b9c:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000e5ba0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000e5ba4:;
    {
        vfp_vmul(cpu, 11, 12, 15);
    }
L_000e5ba8:;
    {
        vfp_vmul(cpu, 12, 13, 15);
    }
L_000e5bac:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,11);
    }
L_000e5bb0:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_000e5bb4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000e5bb8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000e5bbc:;
    {
        goto L_000e5c00;
    }
L_000e5c00:;
    {
        cpu->r[14] = 0x000e5c04u; fn_00155ab4(cpu);
    }
L_000e5c04:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e5c08:;
    {
        cpu->r[14] = 0x000e5c0cu; fn_00153600(cpu);
    }
L_000e5c0c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x98u);
    }
L_000e5c10:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xa4u);
    }
L_000e5c14:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xa0u);
    }
L_000e5c18:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x9cu);
    }
L_000e5c1c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e5c20:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e5c24:;
    {
        cpu->r[14] = 0x000e5c28u; fn_00153678(cpu);
    }
L_000e5c28:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e5c2c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e5c30:;
    {
        cpu->r[14] = 0x000e5c34u; fn_001534f0(cpu);
    }
L_000e5c34:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000e5c38:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e5c3c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000e5c40:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xc248u << 16);
    }
L_000e5c44:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e5c48:;
    {
        cpu->r[14] = 0x000e5c4cu; fn_0015364c(cpu);
    }
L_000e5c4c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e5c50:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e5c54:;
    {
        cpu->r[14] = 0x000e5c58u; fn_00153478(cpu);
    }
L_000e5c58:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e5c5c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000e5c60:;
    {
        cpu->r[14] = 0x000e5c64u; fn_00156154(cpu);
    }
L_000e5c64:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e5c68:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x550u);
    }
L_000e5c6c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[1];
    }
L_000e5c70:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000e5c74:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000e5c78:;
    {
        cpu->r[14] = 0x000e5c7cu; fn_00156154(cpu);
    }
L_000e5c7c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e5c84u + - 0x90u);
    }
L_000e5c80:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_000e5c84:;
    {
        vfp_vmul(cpu, 14, 11, 15);
    }
L_000e5c88:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e5c90u + - 0x98u);
    }
L_000e5c8c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e5c90:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000e5c94:;
    {
        vfp_vadd(cpu, 15, 16, 15);
    }
L_000e5c98:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000e5c9c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e5ca0:;
    {
        wr32(cpu->r[4] + + 0x554u, cpu->r[1]);
    }
L_000e5ca4:;
    {
        cpu->r[14] = 0x000e5ca8u; fn_00096b6c(cpu);
    }
L_000e5ca8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e5cac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e6230;
        }
    }
L_000e5cb0:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000e5cb4:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000e5cb8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e5cbc:;
    {
        cpu->r[14] = 0x000e5cc0u; fn_00096b88(cpu);
    }
L_000e5cc0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e5cc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e5cf4;
        }
    }
L_000e5cc8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e5ccc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000e5cd0:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000e5cd4:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_000e5cd8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000e5cdc:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000e5ce0:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000e5ce4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000e5ce8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e5cec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e5cf0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e625c;
        }
    }
L_000e5cf4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e5cf8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e5cfc:;
    {
        cpu->r[14] = 0x000e5d00u; fn_00153478(cpu);
    }
L_000e5d00:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x94u);
    }
L_000e5d04:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000e5d08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e5d24;
        }
    }
L_000e5d0c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e5d10:;
    {
        cpu->r[14] = 0x000e5d14u; fn_000b2bc8(cpu);
    }
L_000e5d14:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e5d18:;
    {
        cpu->r[14] = 0x000e5d1cu; fn_0018ba20(cpu);
    }
L_000e5d1c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e5d20:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[3]);
    }
L_000e5d24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1f8u);
    }
L_000e5d28:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000e5d2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e5ea8;
        }
    }
L_000e5d30:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e5d34:;
    {
        cpu->r[7] = 0x000082a4u;
    }
L_000e5d38:;
    {
        cpu->r[14] = 0x000e5d3cu; fn_00153600(cpu);
    }
L_000e5d3c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000e5d40:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000e5d44:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e5d48:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x4248u << 16);
    }
L_000e5d4c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e5d50:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000e5d54:;
    {
        cpu->r[14] = 0x000e5d58u; fn_0015364c(cpu);
    }
L_000e5d58:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e5d5c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_000e5d60:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e5de4;
        }
    }
L_000e5d64:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_000e5d68:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e5d6c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_000e5d70:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000e5d74:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000e5d78:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_000e5d7c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000e5d80:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000e5d84:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000e5d88:;
    {
        cpu->r[14] = 0x000e5d8cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e5d8c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e5d90:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e5d94:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_000e5d98:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e5de4;
        }
    }
L_000e5d9c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_000e5da0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e5da4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000e5da8:;
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
L_000e5dac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000e5db0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000e5db4:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000e5db8:;
    {
        cpu->r[14] = 0x000e5dbcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e5dbc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e5dc0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e5dc4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_000e5dc8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e5de4;
        }
    }
L_000e5dcc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000e5dd0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e5dd4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000e5dd8:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
        cpu->r[3] = v2;
        cpu->r[12] = v3;
    }
L_000e5ddc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e5de0:;
    {
        cpu->r[14] = 0x000e5de4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e5de4:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000e5de8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000a8u, 0, 0);
    }
L_000e5dec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e5df0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000e5df4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_000e5df8:;
    {
        cpu->r[14] = 0x000e5dfcu; fn_0018491c(cpu);
    }
L_000e5dfc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xb4u);
    }
L_000e5e00:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000e5e04:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e5e0cu + - 0x210u);
    }
L_000e5e08:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xa8u);
    }
L_000e5e0c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0xb0u);
    }
L_000e5e10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000098u, 0, 0);
    }
L_000e5e14:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000e5e18:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000e5e1c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000e5e20:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xacu);
    }
L_000e5e24:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000e5e28:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000e5e2c:;
    {
        vfp_vmul(cpu, 11, 12, 15);
    }
L_000e5e30:;
    {
        vfp_vmul(cpu, 12, 13, 15);
    }
L_000e5e34:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,11);
    }
L_000e5e38:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_000e5e3c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000e5e40:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000e5e44:;
    {
        cpu->r[14] = 0x000e5e48u; fn_00155ab4(cpu);
    }
L_000e5e48:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e5e4c:;
    {
        cpu->r[14] = 0x000e5e50u; fn_00153600(cpu);
    }
L_000e5e50:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x9cu);
    }
L_000e5e54:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xa0u);
    }
L_000e5e58:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xa4u);
    }
L_000e5e5c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x98u);
    }
L_000e5e60:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e5e64:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e5e68:;
    {
        cpu->r[14] = 0x000e5e6cu; fn_00153678(cpu);
    }
L_000e5e6c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e5e70:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e5e74:;
    {
        cpu->r[14] = 0x000e5e78u; fn_001534f0(cpu);
    }
L_000e5e78:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000e5e7c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e5e80:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000e5e84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e5e88:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xc248u << 16);
    }
L_000e5e8c:;
    {
        cpu->r[14] = 0x000e5e90u; fn_0015364c(cpu);
    }
L_000e5e90:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e5e94:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e5e98:;
    {
        cpu->r[14] = 0x000e5e9cu; fn_00153478(cpu);
    }
L_000e5e9c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e5ea0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e5ea4:;
    {
        cpu->r[14] = 0x000e5ea8u; fn_00153478(cpu);
    }
L_000e5ea8:;
    {
        cpu->r[3] = 0x000082c4u;
    }
L_000e5eac:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000e5eb0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e5eb4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000e5eb8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_000e5ebc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000040u, 0, 0);
    }
L_000e5ec0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000e5ec4:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e5ec8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_000e5ecc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e5ed0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_000e5ed4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e5ed8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_000e5edc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e5ee0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_000e5ee4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_000e5ee8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000e5eec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e5ec0;
        }
    }
L_000e5ef0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000e5ef4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e5ef8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000e5efc:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000e5f00:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000e5f04:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e5f08:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e5f0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e5f6c;
        }
    }
L_000e5f10:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_000e5f14:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_000e5f18:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000e5f1c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_000e5f20:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_000e5f24:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_000e5f28:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[12];
    }
L_000e5f2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000400u, 0, 0);
    }
L_000e5f30:;
    {
        wr32(cpu->r[4] + + 0x420u, cpu->r[1]);
    }
L_000e5f34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000e5f38:;
    {
        wr32(cpu->r[4] + + 0x41cu, cpu->r[0]);
    }
L_000e5f3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000003f8u, 0, 0);
    }
L_000e5f40:;
    {
        wr32(cpu->r[4] + + 0x424u, cpu->r[12]);
    }
L_000e5f44:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e5f48:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000e5f4c:;
    {
        wr32(cpu->r[4] + + 0x404u, cpu->r[1]);
    }
L_000e5f50:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000e5f54:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000e5f58:;
    {
        wr32(cpu->r[4] + + 0x408u, cpu->r[1]);
    }
L_000e5f5c:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e5f60:;
    {
        wr32(cpu->r[4] + + 0x40cu, cpu->r[12]);
    }
L_000e5f64:;
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
L_000e5f68:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000e5f6c:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e5f70:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000e5f74:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e5f78:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000680u, 0, 0);
    }
L_000e5f7c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000044u, 0, 0);
    }
L_000e5f80:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000e5f84:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_000e5f88:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e577c;
        }
    }
L_000e5f8c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000fcu, 0, 0);
    }
L_000e5f90:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000e5f94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e5f98u)) return;
    }
L_000e5f98:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e5f9c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e5fa0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000e5fa4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_000e5fa8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e5fe0;
        }
    }
L_000e5fac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000e5fb0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e5fb4:;
    {
        cpu->r[3] = rd32(0x000e5fbcu + - 0x3d8u);
    }
L_000e5fb8:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000e5fbc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e5fc4u, cpu->r[2], 0, 0);
    }
L_000e5fc0:;
    {
        cpu->r[2] = rd32(0x000e5fc8u + - 0x3e0u);
    }
L_000e5fc4:;
    {
        cpu->r[12] = rd32(0x000e5fccu + - 0x3e0u);
    }
L_000e5fc8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e5fd0u, cpu->r[3], 0, 0);
    }
L_000e5fcc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e5fd4u, cpu->r[2], 0, 0);
    }
L_000e5fd0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e5fd4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e5fdcu, cpu->r[12], 0, 0);
    }
L_000e5fd8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e5fdc:;
    {
        cpu->r[14] = 0x000e5fe0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e5fe0:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000e5fe4:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000e5fe8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e5fec:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000e5ff0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000a8u, 0, 0);
    }
L_000e5ff4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000e5ff8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_000e5ffc:;
    {
        cpu->r[14] = 0x000e6000u; fn_0018498c(cpu);
    }
L_000e6000:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e6004:;
    {
        cpu->r[14] = 0x000e6008u; fn_00096b6c(cpu);
    }
L_000e6008:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e600c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e5b64;
        }
    }
L_000e6010:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e6014:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000e6018:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000e601c:;
    {
        cpu->r[14] = 0x000e6020u; fn_00099554(cpu);
    }
L_000e6020:;
    {
        goto L_000e5b64;
    }
L_000e6024:;
    {
        cpu->r[3] = rd32(0x000e602cu + - 0x43cu);
    }
L_000e6028:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000e602c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000e6030:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000e6034:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_000e6038:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e603c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000e6040:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[14]);
    }
L_000e6044:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000e6048:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000e604c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e6050:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e6054:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e598c;
        }
    }
L_000e6058:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e605c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000b8u, 0, 0);
    }
L_000e6060:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e6064:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000e6068:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_000e606c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000e6070:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000e6074:;
    {
        cpu->r[14] = 0x000e6078u; fn_0009950c(cpu);
    }
L_000e6078:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e607c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xbcu);
    }
L_000e6080:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000e6084:;
    {
        wr32(cpu->r[4] + + 0x550u, cpu->r[3]);
    }
L_000e6088:;
    {
        goto L_000e598c;
    }
L_000e608c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xe0u);
    }
L_000e6090:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e6098u + + 0x1ecu);
    }
L_000e6094:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xe4u);
    }
L_000e6098:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000e609c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e60a0:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000e60a4:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000e60a8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000e60ac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e60b0:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000e60b4:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_000e60b8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000e60bc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000e60c0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000e60c4:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_000e60c8:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000e60cc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000e60d0:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000e60d4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e60d8:;
    {
        cpu->r[14] = 0x000e60dcu; fn_0009965c(cpu);
    }
L_000e60dc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e60e0:;
    {
        cpu->r[14] = 0x000e60e4u; fn_00096b88(cpu);
    }
L_000e60e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e60e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e592c;
        }
    }
L_000e60ec:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e60f0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x000000c4u, 0, 0);
    }
L_000e60f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e60f8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000e60fc:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_000e6100:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000e6104:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e6108:;
    {
        cpu->r[14] = 0x000e610cu; fn_0009950c(cpu);
    }
L_000e610c:;
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
L_000e6110:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000e6118u + + 0x170u);
    }
L_000e6114:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000b8u, 0, 0);
    }
L_000e6118:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000e611c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xbcu);
    }
L_000e6120:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000e6124:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xb8u);
    }
L_000e6128:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e612c:;
    {
        vfp_vmul(cpu, 11, 15, 16);
    }
L_000e6130:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xe0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e6134:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000e6138:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,11);
    }
L_000e613c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xe4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000e6140:;
    {
        cpu->r[14] = 0x000e6144u; fn_0015429c(cpu);
    }
L_000e6144:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xe4u);
    }
L_000e6148:;
    {
        vfp_vmul(cpu, 12, 15, 16);
    }
L_000e614c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e6150:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000e6154:;
    {
        cpu->r[14] = 0x000e6158u; fn_00154734(cpu);
    }
L_000e6158:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e6160u + + 0x12cu);
    }
L_000e615c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xe0u);
    }
L_000e6160:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_000e6164:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e6168:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000e616c:;
    {
        cpu->r[14] = 0x000e6170u; fn_00154350(cpu);
    }
L_000e6170:;
    {
        goto L_000e592c;
    }
L_000e6174:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000e6178:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000e617c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000e6180:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000e6184:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xd0u);
    }
L_000e6188:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xd8u);
    }
L_000e618c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xd4u);
    }
L_000e6190:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000e6194:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e6198:;
    {
        cpu->r[14] = 0x000e619cu; fn_0009965c(cpu);
    }
L_000e619c:;
    {
        goto L_000e5960;
    }
L_000e61a0:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000e61a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_000e61a8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e61ac:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000e61b0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000e61b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000e61b8:;
    {
        cpu->r[14] = 0x000e61bcu; fn_00180c78(cpu);
    }
L_000e61bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e61c0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000e61c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000e61c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x70u);
    }
L_000e61cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000e61d0:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e61d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x74u);
    }
L_000e61d8:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e61dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x78u);
    }
L_000e61e0:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e61e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x7cu);
    }
L_000e61e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_000e61ec:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e61f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_000e61f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e61c4;
        }
    }
L_000e61f8:;
    {
        goto L_000e58e0;
    }
L_000e61fc:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000e6200:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000e6204:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e6208:;
    {
        cpu->r[14] = 0x000e620cu; fn_00096b88(cpu);
    }
L_000e620c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e6210:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e5d24;
        }
    }
L_000e6214:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e6218:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000e621c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000e6220:;
    {
        cpu->r[14] = 0x000e6224u; fn_00099548(cpu);
    }
L_000e6224:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e6228:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e5d24;
        }
    }
L_000e622c:;
    {
        goto L_000e5ac0;
    }
L_000e6230:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000e6234:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e6238:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x554u);
    }
L_000e623c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000e6240:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000e6244:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e6248:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000e624c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000e6250:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000e6254:;
    {
        cpu->r[14] = 0x000e6258u; fn_0009965c(cpu);
    }
L_000e6258:;
    {
        goto L_000e5cb0;
    }
L_000e625c:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000e6260:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e6264:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000e6268:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000b8u, 0, 0);
    }
L_000e626c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000e6270:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e6274:;
    {
        cpu->r[14] = 0x000e6278u; fn_0009950c(cpu);
    }
L_000e6278:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xb8u);
    }
L_000e627c:;
    {
        wr32(cpu->r[4] + + 0x554u, cpu->r[3]);
    }
L_000e6280:;
    {
        goto L_000e5cf4;
    }
}

/* _ZN5Scene20RenderTrafficShadowsEv @ 000e6290 (arm) */
void fn_000e6290(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e6290:;
    {
        cpu->r[3] = 0x000082a0u;
    }
L_000e6294:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6298:;
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
L_000e629c:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_000e62a0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e62a4:;
    {
        cpu->r[8] = rd32(0x000e62acu + + 0x274u);
    }
L_000e62a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_000e62ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e62b0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000e62b4:;
    {
        cpu->r[8] = add_flags(cpu, 0x000e62bcu, cpu->r[8], 0, 0);
    }
L_000e62b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e62c8;
        }
    }
L_000e62bc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000e62c0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000e62c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e62c8u)) return;
    }
L_000e62c8:;
    {
        cpu->r[3] = 0x00008444u;
    }
L_000e62cc:;
    {
        cpu->r[9] = rd32(0x000e62d4u + + 0x250u);
    }
L_000e62d0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e62d4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e62d8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e62dc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000e62e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e62e4:;
    {
        cpu->r[14] = 0x000e62ecu;
    }
L_000e62e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000e62ecu)) return;
    }
L_000e62ec:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_000e62f0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000e62f4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000e62f8:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[0]);
    }
L_000e62fc:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000e6300:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000e6304:;
    {
        cpu->r[14] = 0x000e6308u; fn_0012e19c(cpu);
    }
L_000e6308:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e630c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6310:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000e6314:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e6318:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e62bc;
        }
    }
L_000e631c:;
    {
        cpu->r[3] = rd32(0x000e6324u + + 0x204u);
    }
L_000e6320:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000e6324:;
    {
        cpu->r[2] = rd32(0x000e632cu + + 0x200u);
    }
L_000e6328:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_000e632c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e6334u, cpu->r[3], 0, 0);
    }
L_000e6330:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000e6334:;
    {
        cpu->r[3] = rd32(0x000e633cu + + 0x1f4u);
    }
L_000e6338:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_000e633c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000e6340:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e6348u, cpu->r[3], 0, 0);
    }
L_000e6344:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000e6348:;
    {
        cpu->r[3] = rd32(0x000e6350u + + 0x1e4u);
    }
L_000e634c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e6354u, cpu->r[3], 0, 0);
    }
L_000e6350:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000e6354:;
    {
        cpu->r[3] = rd32(0x000e635cu + + 0x1dcu);
    }
L_000e6358:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e6360u, cpu->r[3], 0, 0);
    }
L_000e635c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000e6360:;
    {
        goto L_000e6394;
    }
L_000e6364:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x188u);
    }
L_000e6368:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e6370u + + 0x1acu);
    }
L_000e636c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000e6370:;
    {
        vfp_sync_flags(cpu);
    }
L_000e6374:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000e6464;
        }
    }
L_000e6378:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e637c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e6380:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6384:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000680u, 0, 0);
    }
L_000e6388:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000e638c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000e6390:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000e62bc;
        }
    }
L_000e6394:;
    {
        cpu->r[6] = 0x000082a8u;
    }
L_000e6398:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000e639c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000e63a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000e63a4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x674u);
    }
L_000e63a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e63ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e6410;
        }
    }
L_000e63b0:;
    {
        cpu->r[2] = 0x000082a4u;
    }
L_000e63b4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e63b8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000e63bc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_000e63c0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e6404;
        }
    }
L_000e63c4:;
    {
        cpu->r[1] = rd32(0x000e63ccu + + 0x170u);
    }
L_000e63c8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e63cc:;
    {
        cpu->r[2] = rd32(0x000e63d4u + + 0x16cu);
    }
L_000e63d0:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000e63d4:;
    {
        cpu->r[3] = rd32(0x000e63dcu + + 0x168u);
    }
L_000e63d8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e63e0u, cpu->r[1], 0, 0);
    }
L_000e63dc:;
    {
        cpu->r[12] = rd32(0x000e63e4u + + 0x164u);
    }
L_000e63e0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e63e8u, cpu->r[2], 0, 0);
    }
L_000e63e4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e63ecu, cpu->r[3], 0, 0);
    }
L_000e63e8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e63ec:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e63f4u, cpu->r[12], 0, 0);
    }
L_000e63f0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e63f4:;
    {
        cpu->r[14] = 0x000e63f8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e63f8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000e63fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000e6400:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x674u);
    }
L_000e6404:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x2u);
    }
L_000e6408:;
    {
        { uint32_t v = cpu->r[3] & 0x00000040u; set_nz(cpu, v); }
    }
L_000e640c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e6378;
        }
    }
L_000e6410:;
    {
        cpu->r[10] = 0x000082c0u;
    }
L_000e6414:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[6] = v;
    }
L_000e6418:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000e641c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000e6420:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000e6424:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x178u);
    }
L_000e6428:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e642c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e6364;
        }
    }
L_000e6430:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e6434:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_000e6438:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000e643c:;
    {
        cpu->r[14] = 0x000e6440u; fn_00096b88(cpu);
    }
L_000e6440:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e6444:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e6378;
        }
    }
L_000e6448:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000e644c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e6454u + + 0xc8u);
    }
L_000e6450:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000e6454:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x188u);
    }
L_000e6458:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000e645c:;
    {
        vfp_sync_flags(cpu);
    }
L_000e6460:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000e6378;
        }
    }
L_000e6464:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e6468:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e646c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000e6470:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e6474:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e6498;
        }
    }
L_000e6478:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e647c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e6480:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000e6484:;
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
L_000e6488:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e648c:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000e6490:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000e6494:;
    {
        cpu->r[14] = 0x000e6498u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e6498:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000e649c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e64a0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000e64a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000e64a8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x62cu);
    }
L_000e64ac:;
    {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_000e64b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e6378;
        }
    }
L_000e64b4:;
    {
        cpu->r[10] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_000e64b8:;
    {
        cpu->r[9] = 0x000011e8u;
    }
L_000e64bc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000e64c0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000e64c4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000e64c8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000e64cc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e64d0:;
    {
        cpu->r[14] = 0x000e64d8u;
    }
L_000e64d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000e64d8u)) return;
    }
L_000e64d8:;
    {
        cpu->r[3] = 0x000082c0u;
    }
L_000e64dc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e64e0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e64e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000e64e8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000e64ec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000e64f0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000e64f4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000e64f8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000e64fc:;
    {
        cpu->r[14] = 0x000e6500u; fn_000af6ec(cpu);
    }
L_000e6500:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000e6504:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000e6508:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000e650c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e6510:;
    {
        cpu->r[14] = 0x000e6518u;
    }
L_000e6514:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000e6518u)) return;
    }
L_000e6518:;
    {
        goto L_000e6378;
    }
}

/* _ZN5Scene22InitializeTrafficStateEv @ 000e654c (arm) */
void fn_000e654c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e654c:;
    {
        cpu->r[3] = 0x000082a0u;
    }
L_000e6550:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6554:;
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
L_000e6558:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e655c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_000e6560:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000e6564:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e6568:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e6574;
        }
    }
L_000e656c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000e6570:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e6574u)) return;
    }
L_000e6574:;
    {
        cpu->r[3] = 0x000082d0u;
    }
L_000e6578:;
    {
        cpu->r[5] = 0x0000829cu;
    }
L_000e657c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6580:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000e6584:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e6588:;
    {
        cpu->r[14] = 0x000e658cu; fn_00096654(cpu);
    }
L_000e658c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000e6590:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000e6594:;
    {
        cpu->r[3] = 0x000082d8u;
    }
L_000e6598:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e659c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_000e65a0:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000e65a4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[0] = v;
    }
L_000e65a8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000e65ac:;
    {
        cpu->r[14] = 0x000e65b0u; imp__Znaj(cpu); /* _Znaj */
    }
L_000e65b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000e65b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000e65b8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_000e65bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e65e0;
        }
    }
L_000e65c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e65c4:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000e65c8:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_000e65cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000e65d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000e65d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_000e65d8:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 1u, &shc), 1, 1);
    }
L_000e65dc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e65c8;
        }
    }
L_000e65e0:;
    {
        cpu->r[5] = 0x00008c50u;
    }
L_000e65e4:;
    {
        cpu->r[3] = 0x000082c8u;
    }
L_000e65e8:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000e65ec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e65f0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000e65f4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_000e65f8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000e65fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6600:;
    {
        cpu->r[3] = rd32(0x000e6608u + + 0xae8u);
    }
L_000e6604:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000e6608:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_000e660c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_000e6610:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000e6614:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000e6618:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000e661c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000e6620:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1b0u);
    }
L_000e6624:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000e6628:;
    {
        cpu->r[14] = 0x000e662cu; fn_000966b0(cpu);
    }
L_000e662c:;
    {
        cpu->r[3] = rd32(0x000e6634u + + 0xac0u);
    }
L_000e6630:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000e6634:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e663cu, cpu->r[3], 0, 0);
    }
L_000e6638:;
    {
        cpu->r[2] = rd32(0x000e6640u + + 0xab8u);
    }
L_000e663c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000e6640:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_000e6644:;
    {
        cpu->r[3] = rd32(0x000e664cu + + 0xab0u);
    }
L_000e6648:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e6650u, cpu->r[2], 0, 0);
    }
L_000e664c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000030u, 0, 0);
    }
L_000e6650:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000e6654:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e665cu, cpu->r[3], 0, 0);
    }
L_000e6658:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_000e665c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000e6660:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_000e6664:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000e6668:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_000e666c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e6670:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000e6b28;
        }
    }
L_000e6674:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e6678:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e70ac;
        }
    }
L_000e667c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e6680:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_000e6684:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], cpu->r[5], 1, 0);
    }
L_000e6688:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000e668c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_000e6690:;
    {
        sub_flags(cpu, cpu->r[2], shifter(cpu->r[1], 1, 1u, &shc), 1, 1);
    }
L_000e6694:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e66b8;
        }
    }
L_000e6698:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_000e669c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
        }
    }
L_000e66a0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = cpu->r[5];
        }
    }
L_000e66a4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
        }
    }
L_000e66a8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
        }
    }
L_000e66ac:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_000e66b0:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000e66b4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_000e66b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000014u, 1, 1);
    }
L_000e66bc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_000e66c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e666c;
        }
    }
L_000e66c4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000e66c8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_000e66cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e6848;
        }
    }
L_000e66d0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e66d4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e66ec;
        }
    }
L_000e66d8:;
    {
        cpu->r[3] = 0x000082acu;
    }
L_000e66dc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e66e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e66e4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e66e8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e6720;
        }
    }
L_000e66ec:;
    {
        cpu->r[1] = rd32(0x000e66f4u + + 0xa0cu);
    }
L_000e66f0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e66f4:;
    {
        cpu->r[12] = rd32(0x000e66fcu + + 0xa08u);
    }
L_000e66f8:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000e66fc:;
    {
        cpu->r[2] = rd32(0x000e6704u + + 0xa04u);
    }
L_000e6700:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e6708u, cpu->r[1], 0, 0);
    }
L_000e6704:;
    {
        cpu->r[3] = rd32(0x000e670cu + + 0xa00u);
    }
L_000e6708:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e6710u, cpu->r[12], 0, 0);
    }
L_000e670c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e6714u, cpu->r[2], 0, 0);
    }
L_000e6710:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_000e6714:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e671cu, cpu->r[3], 0, 0);
    }
L_000e6718:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e671c:;
    {
        cpu->r[14] = 0x000e6720u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e6720:;
    {
        cpu->r[3] = 0x000082b0u;
    }
L_000e6724:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e6728:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e672c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_000e6730:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e6734:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000e6738:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e673c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 3u, &shc); cpu->r[7] = v;
    }
L_000e6740:;
    {
        wr8(cpu->r[3] + shifter(cpu->r[2], 2, 3u, &shc), cpu->r[6]);
    }
L_000e6744:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e675c;
        }
    }
L_000e6748:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e674c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6750:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6754:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000e6758:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e6790;
        }
    }
L_000e675c:;
    {
        cpu->r[1] = rd32(0x000e6764u + + 0x9acu);
    }
L_000e6760:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e6764:;
    {
        cpu->r[2] = rd32(0x000e676cu + + 0x9a8u);
    }
L_000e6768:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000e676c:;
    {
        cpu->r[3] = rd32(0x000e6774u + + 0x9a4u);
    }
L_000e6770:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e6778u, cpu->r[1], 0, 0);
    }
L_000e6774:;
    {
        cpu->r[12] = rd32(0x000e677cu + + 0x9a0u);
    }
L_000e6778:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e6780u, cpu->r[2], 0, 0);
    }
L_000e677c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e6784u, cpu->r[3], 0, 0);
    }
L_000e6780:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e6784:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e678cu, cpu->r[12], 0, 0);
    }
L_000e6788:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e678c:;
    {
        cpu->r[14] = 0x000e6790u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e6790:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000e6794:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e6798:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e679c:;
    {
        cpu->r[8] = 0x00000680u;
    }
L_000e67a0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e67a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e67a8:;
    {
        uint32_t v = cpu->r[8] * cpu->r[2] + cpu->r[3]; cpu->r[8] = v;
    }
L_000e67ac:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e67c4;
        }
    }
L_000e67b0:;
    {
        cpu->r[3] = 0x000082acu;
    }
L_000e67b4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e67b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e67bc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e67c0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e67f8;
        }
    }
L_000e67c4:;
    {
        cpu->r[1] = rd32(0x000e67ccu + + 0x954u);
    }
L_000e67c8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e67cc:;
    {
        cpu->r[12] = rd32(0x000e67d4u + + 0x950u);
    }
L_000e67d0:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000e67d4:;
    {
        cpu->r[2] = rd32(0x000e67dcu + + 0x94cu);
    }
L_000e67d8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e67e0u, cpu->r[1], 0, 0);
    }
L_000e67dc:;
    {
        cpu->r[3] = rd32(0x000e67e4u + + 0x948u);
    }
L_000e67e0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e67e8u, cpu->r[12], 0, 0);
    }
L_000e67e4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e67ecu, cpu->r[2], 0, 0);
    }
L_000e67e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_000e67ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e67f4u, cpu->r[3], 0, 0);
    }
L_000e67f0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e67f4:;
    {
        cpu->r[14] = 0x000e67f8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e67f8:;
    {
        cpu->r[3] = 0x000082b0u;
    }
L_000e67fc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6800:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6804:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000e6808:;
    {
        cpu->r[14] = 0x000e680cu; imp_lrand48(cpu); /* lrand48 */
    }
L_000e680c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x564u);
    }
L_000e6810:;
    {
        cpu->r[14] = 0x000e6814u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000e6814:;
    {
        cpu->r[3] = 0x0000829cu;
    }
L_000e6818:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e681c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e6820:;
    {
        wr8(cpu->r[7] + + 0x1u, cpu->r[1]);
    }
L_000e6824:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6828:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_000e682c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[1] = v;
    }
L_000e6830:;
    {
        cpu->r[14] = 0x000e6834u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000e6834:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e6838:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e683c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6840:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_000e6844:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_000e6848:;
    {
        cpu->r[0] = 0x000082c8u;
    }
L_000e684c:;
    {
        cpu->r[1] = rd32(0x000e6854u + + 0x8dcu);
    }
L_000e6850:;
    {
        cpu->r[2] = rd32(0x000e6858u + + 0x8dcu);
    }
L_000e6854:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000e6858:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e6860u, cpu->r[1], 0, 0);
    }
L_000e685c:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_000e6860:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e6868u, cpu->r[2], 0, 0);
    }
L_000e6864:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_000e6868:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000030u, 0, 0);
    }
L_000e686c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000e6870:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000e6874:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000e6878:;
    {
        goto L_000e6894;
    }
L_000e687c:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e6880:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e6884:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6888:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000e688c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6890:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_000e6894:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_000e6898:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e689c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000e6ad0;
        }
    }
L_000e68a0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x30u);
    }
L_000e68a4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e68a8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e68dc;
        }
    }
L_000e68ac:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_000e68b0:;
    {
        cpu->r[1] = rd32(0x000e68b8u + + 0x880u);
    }
L_000e68b4:;
    {
        cpu->r[2] = rd32(0x000e68bcu + + 0x880u);
    }
L_000e68b8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e68bc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000e68c0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e68c8u, cpu->r[1], 0, 0);
    }
L_000e68c4:;
    {
        cpu->r[3] = rd32(0x000e68ccu + + 0x874u);
    }
L_000e68c8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e68d0u, cpu->r[2], 0, 0);
    }
L_000e68cc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000e68d0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e68d8u, cpu->r[3], 0, 0);
    }
L_000e68d4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e68d8:;
    {
        cpu->r[14] = 0x000e68dcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e68dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_000e68e0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000e68e4:;
    {
        cpu->r[14] = 0x000e68e8u; fn_00180c78(cpu);
    }
L_000e68e8:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e68ec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e68f0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e68f4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x30u);
    }
L_000e68f8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e68fc:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x30u);
    }
L_000e6900:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e6934;
        }
    }
L_000e6904:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_000e6908:;
    {
        cpu->r[1] = rd32(0x000e6910u + + 0x834u);
    }
L_000e690c:;
    {
        cpu->r[2] = rd32(0x000e6914u + + 0x834u);
    }
L_000e6910:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e6914:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000e6918:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e6920u, cpu->r[1], 0, 0);
    }
L_000e691c:;
    {
        cpu->r[3] = rd32(0x000e6924u + + 0x828u);
    }
L_000e6920:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e6928u, cpu->r[2], 0, 0);
    }
L_000e6924:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e6928:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e6930u, cpu->r[3], 0, 0);
    }
L_000e692c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e6930:;
    {
        cpu->r[14] = 0x000e6934u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e6934:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_000e6938:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000e693c:;
    {
        cpu->r[14] = 0x000e6940u; fn_00180c78(cpu);
    }
L_000e6940:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e6944:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6948:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e694c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x30u);
    }
L_000e6950:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e6954:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e6988;
        }
    }
L_000e6958:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_000e695c:;
    {
        cpu->r[1] = rd32(0x000e6964u + + 0x7ecu);
    }
L_000e6960:;
    {
        cpu->r[2] = rd32(0x000e6968u + + 0x7ecu);
    }
L_000e6964:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e6968:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000e696c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e6974u, cpu->r[1], 0, 0);
    }
L_000e6970:;
    {
        cpu->r[3] = rd32(0x000e6978u + + 0x7e0u);
    }
L_000e6974:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e697cu, cpu->r[2], 0, 0);
    }
L_000e6978:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e697c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e6984u, cpu->r[3], 0, 0);
    }
L_000e6980:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e6984:;
    {
        cpu->r[14] = 0x000e6988u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e6988:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_000e698c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000e6990:;
    {
        cpu->r[14] = 0x000e6994u; fn_00180c78(cpu);
    }
L_000e6994:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e6998:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e699c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e69a0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x30u);
    }
L_000e69a4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000e69a8:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x38u);
    }
L_000e69ac:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e69e0;
        }
    }
L_000e69b0:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_000e69b4:;
    {
        cpu->r[1] = rd32(0x000e69bcu + + 0x7a0u);
    }
L_000e69b8:;
    {
        cpu->r[2] = rd32(0x000e69c0u + + 0x7a0u);
    }
L_000e69bc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e69c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000e69c4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e69ccu, cpu->r[1], 0, 0);
    }
L_000e69c8:;
    {
        cpu->r[3] = rd32(0x000e69d0u + + 0x794u);
    }
L_000e69cc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e69d4u, cpu->r[2], 0, 0);
    }
L_000e69d0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000e69d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e69dcu, cpu->r[3], 0, 0);
    }
L_000e69d8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e69dc:;
    {
        cpu->r[14] = 0x000e69e0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e69e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_000e69e4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e69e8:;
    {
        cpu->r[14] = 0x000e69ecu; fn_00180c78(cpu);
    }
L_000e69ec:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e69f0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e69f4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e69f8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x30u);
    }
L_000e69fc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000e6a00:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x30u);
    }
L_000e6a04:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e6a3c;
        }
    }
L_000e6a08:;
    {
        cpu->r[1] = rd32(0x000e6a10u + + 0x758u);
    }
L_000e6a0c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e6a10:;
    {
        cpu->r[12] = rd32(0x000e6a18u + + 0x754u);
    }
L_000e6a14:;
    {
        cpu->r[14] = 0x0000003au;
    }
L_000e6a18:;
    {
        cpu->r[2] = rd32(0x000e6a20u + + 0x750u);
    }
L_000e6a1c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e6a24u, cpu->r[1], 0, 0);
    }
L_000e6a20:;
    {
        cpu->r[3] = rd32(0x000e6a28u + + 0x74cu);
    }
L_000e6a24:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e6a2cu, cpu->r[12], 0, 0);
    }
L_000e6a28:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e6a30u, cpu->r[2], 0, 0);
    }
L_000e6a2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000030u, 0, 0);
    }
L_000e6a30:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e6a38u, cpu->r[3], 0, 0);
    }
L_000e6a34:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e6a38:;
    {
        cpu->r[14] = 0x000e6a3cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e6a3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_000e6a40:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e6a44:;
    {
        cpu->r[14] = 0x000e6a48u; fn_00180c78(cpu);
    }
L_000e6a48:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e6a4c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6a50:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6a54:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x30u);
    }
L_000e6a58:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000e6a5c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e6a94;
        }
    }
L_000e6a60:;
    {
        cpu->r[1] = rd32(0x000e6a68u + + 0x710u);
    }
L_000e6a64:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e6a68:;
    {
        cpu->r[12] = rd32(0x000e6a70u + + 0x70cu);
    }
L_000e6a6c:;
    {
        cpu->r[14] = 0x0000003au;
    }
L_000e6a70:;
    {
        cpu->r[2] = rd32(0x000e6a78u + + 0x708u);
    }
L_000e6a74:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e6a7cu, cpu->r[1], 0, 0);
    }
L_000e6a78:;
    {
        cpu->r[3] = rd32(0x000e6a80u + + 0x704u);
    }
L_000e6a7c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e6a84u, cpu->r[12], 0, 0);
    }
L_000e6a80:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e6a88u, cpu->r[2], 0, 0);
    }
L_000e6a84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000030u, 0, 0);
    }
L_000e6a88:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e6a90u, cpu->r[3], 0, 0);
    }
L_000e6a8c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e6a90:;
    {
        cpu->r[14] = 0x000e6a94u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e6a94:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e6a98:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_000e6a9c:;
    {
        cpu->r[14] = 0x000e6aa0u; fn_00180c78(cpu);
    }
L_000e6aa0:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 4u, &shc); cpu->r[10] = v;
    }
L_000e6aa4:;
    {
        cpu->r[10] = sub_flags(cpu, shifter(cpu->r[11], 1, 4u, &shc), cpu->r[10], 1, 0);
    }
L_000e6aa8:;
    {
        uint32_t v = cpu->r[10] * cpu->r[10]; cpu->r[10] = v;
    }
L_000e6aac:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x38u);
    }
L_000e6ab0:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 4u, &shc); cpu->r[0] = v;
    }
L_000e6ab4:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[9], 1, 4u, &shc), cpu->r[0], 1, 0);
    }
L_000e6ab8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[10]; cpu->r[0] = v;
    }
L_000e6abc:;
    {
        cpu->r[14] = 0x000e6ac0u; fn_0017fa74(cpu);
    }
L_000e6ac0:;
    {
        cpu->r[3] = 0x00003a98u;
    }
L_000e6ac4:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 4u, &shc), 1, 1);
    }
L_000e6ac8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000e687c;
        }
    }
L_000e6acc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e6ad0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x0000000au, 0, 0);
    }
L_000e6ad4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000e6ad8:;
    {
        cpu->r[14] = 0x000e6adcu; fn_000966b0(cpu);
    }
L_000e6adc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e6ae0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e6ae4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000e6ae8:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[2] = v;
    }
L_000e6aec:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000e6af0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_000e6af4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e6b08;
        }
    }
L_000e6af8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_000e6afc:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001du, 1, 1);
    }
L_000e6b00:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000001eu, 0, 0);
        }
    }
L_000e6b04:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000e6b08:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e6b0c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e6b10:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6b14:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6b18:;
    {
        wr32(cpu->r[12] + cpu->r[2], cpu->r[5]);
    }
L_000e6b1c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_000e6b20:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e6b24:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e6674;
        }
    }
L_000e6b28:;
    {
        cpu->r[0] = 0x0000829cu;
    }
L_000e6b2c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000e6b30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000e6b34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000e6b38:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e6b60;
        }
    }
L_000e6b3c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e6b40:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e6b44:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000e6b48:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_000e6b4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000e6b50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000e6b54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_000e6b58:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 1u, &shc), 1, 1);
    }
L_000e6b5c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e6b48;
        }
    }
L_000e6b60:;
    {
        cpu->r[1] = rd32(0x000e6b68u + + 0x620u);
    }
L_000e6b64:;
    {
        cpu->r[3] = 0x000082c8u;
    }
L_000e6b68:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6b6c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000e6b70:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_000e6b74:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[1]);
    }
L_000e6b78:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6b7c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_000e6b80:;
    {
        cpu->r[14] = 0x000e6b84u; fn_000966b0(cpu);
    }
L_000e6b84:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e6b88:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6b8c:;
    {
        cpu->r[1] = rd32(0x000e6b94u + + 0x5f8u);
    }
L_000e6b90:;
    {
        cpu->r[2] = rd32(0x000e6b98u + + 0x5f8u);
    }
L_000e6b94:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6b98:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e6ba0u, cpu->r[1], 0, 0);
    }
L_000e6b9c:;
    {
        cpu->r[3] = rd32(0x000e6ba4u + + 0x5f0u);
    }
L_000e6ba0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e6ba8u, cpu->r[2], 0, 0);
    }
L_000e6ba4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_000e6ba8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000030u, 0, 0);
    }
L_000e6bac:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e6bb4u, cpu->r[3], 0, 0);
    }
L_000e6bb0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000e6bb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_000e6bb8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000e6bbc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_000e6bc0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000e6bc4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000e6bc8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_000e6bcc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e6bd0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000e7094;
        }
    }
L_000e6bd4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e6bd8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_000e6bdc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_000e6be0:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000e6be4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_000e6be8:;
    {
        sub_flags(cpu, cpu->r[2], shifter(cpu->r[1], 1, 1u, &shc), 1, 1);
    }
L_000e6bec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e6c14;
        }
    }
L_000e6bf0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e6bf4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_000e6bf8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
        }
    }
L_000e6bfc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = cpu->r[5];
        }
    }
L_000e6c00:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
        }
    }
L_000e6c04:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
        }
    }
L_000e6c08:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_000e6c0c:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000e6c10:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_000e6c14:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000014u, 1, 1);
    }
L_000e6c18:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_000e6c1c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e6bcc;
        }
    }
L_000e6c20:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000e6c24:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_000e6c28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e6dc0;
        }
    }
L_000e6c2c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e6c30:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e6c48;
        }
    }
L_000e6c34:;
    {
        cpu->r[3] = 0x000082b4u;
    }
L_000e6c38:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6c3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6c40:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e6c44:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e6c7c;
        }
    }
L_000e6c48:;
    {
        cpu->r[1] = rd32(0x000e6c50u + + 0x548u);
    }
L_000e6c4c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e6c50:;
    {
        cpu->r[12] = rd32(0x000e6c58u + + 0x544u);
    }
L_000e6c54:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000e6c58:;
    {
        cpu->r[2] = rd32(0x000e6c60u + + 0x540u);
    }
L_000e6c5c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e6c64u, cpu->r[1], 0, 0);
    }
L_000e6c60:;
    {
        cpu->r[3] = rd32(0x000e6c68u + + 0x53cu);
    }
L_000e6c64:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e6c6cu, cpu->r[12], 0, 0);
    }
L_000e6c68:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e6c70u, cpu->r[2], 0, 0);
    }
L_000e6c6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_000e6c70:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e6c78u, cpu->r[3], 0, 0);
    }
L_000e6c74:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e6c78:;
    {
        cpu->r[14] = 0x000e6c7cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e6c7c:;
    {
        cpu->r[3] = 0x0000829cu;
    }
L_000e6c80:;
    {
        cpu->r[0] = 0x000082b8u;
    }
L_000e6c84:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6c88:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000e6c8c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e6c90:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_000e6c94:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6c98:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000e6c9c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 3u, &shc); cpu->r[7] = v;
    }
L_000e6ca0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 3, 31u, &shc), 0, 0);
    }
L_000e6ca4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 1, 1u, &shc), 0, 0);
    }
L_000e6ca8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000e6cac:;
    {
        wr8(cpu->r[0] + shifter(cpu->r[2], 2, 3u, &shc), cpu->r[1]);
    }
L_000e6cb0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6cb4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 3, 31u, &shc), 0, 0);
    }
L_000e6cb8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], shifter(cpu->r[6], 1, 1u, &shc), 0, 1);
    }
L_000e6cbc:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000e6cd4;
        }
    }
L_000e6cc0:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e6cc4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6cc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6ccc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e6cd0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e6d08;
        }
    }
L_000e6cd4:;
    {
        cpu->r[1] = rd32(0x000e6cdcu + + 0x4ccu);
    }
L_000e6cd8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e6cdc:;
    {
        cpu->r[2] = rd32(0x000e6ce4u + + 0x4c8u);
    }
L_000e6ce0:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000e6ce4:;
    {
        cpu->r[3] = rd32(0x000e6cecu + + 0x4c4u);
    }
L_000e6ce8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e6cf0u, cpu->r[1], 0, 0);
    }
L_000e6cec:;
    {
        cpu->r[12] = rd32(0x000e6cf4u + + 0x4c0u);
    }
L_000e6cf0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e6cf8u, cpu->r[2], 0, 0);
    }
L_000e6cf4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e6cfcu, cpu->r[3], 0, 0);
    }
L_000e6cf8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e6cfc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e6d04u, cpu->r[12], 0, 0);
    }
L_000e6d00:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e6d04:;
    {
        cpu->r[14] = 0x000e6d08u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e6d08:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000e6d0c:;
    {
        cpu->r[2] = 0x00000680u;
    }
L_000e6d10:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6d14:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e6d18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6d1c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[6] + cpu->r[3]; cpu->r[6] = v;
    }
L_000e6d20:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e6d38;
        }
    }
L_000e6d24:;
    {
        cpu->r[3] = 0x000082b4u;
    }
L_000e6d28:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6d2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6d30:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e6d34:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e6d6c;
        }
    }
L_000e6d38:;
    {
        cpu->r[1] = rd32(0x000e6d40u + + 0x478u);
    }
L_000e6d3c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e6d40:;
    {
        cpu->r[12] = rd32(0x000e6d48u + + 0x474u);
    }
L_000e6d44:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000e6d48:;
    {
        cpu->r[2] = rd32(0x000e6d50u + + 0x470u);
    }
L_000e6d4c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e6d54u, cpu->r[1], 0, 0);
    }
L_000e6d50:;
    {
        cpu->r[3] = rd32(0x000e6d58u + + 0x46cu);
    }
L_000e6d54:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e6d5cu, cpu->r[12], 0, 0);
    }
L_000e6d58:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e6d60u, cpu->r[2], 0, 0);
    }
L_000e6d5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_000e6d60:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e6d68u, cpu->r[3], 0, 0);
    }
L_000e6d64:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e6d68:;
    {
        cpu->r[14] = 0x000e6d6cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e6d6c:;
    {
        cpu->r[3] = 0x000082b8u;
    }
L_000e6d70:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6d74:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6d78:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000e6d7c:;
    {
        cpu->r[14] = 0x000e6d80u; imp_lrand48(cpu); /* lrand48 */
    }
L_000e6d80:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x564u);
    }
L_000e6d84:;
    {
        cpu->r[14] = 0x000e6d88u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000e6d88:;
    {
        cpu->r[3] = 0x0000829cu;
    }
L_000e6d8c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6d90:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e6d94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000e6d98:;
    {
        wr8(cpu->r[7] + + 0x1u, cpu->r[1]);
    }
L_000e6d9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6da0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_000e6da4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[1] = v;
    }
L_000e6da8:;
    {
        cpu->r[14] = 0x000e6dacu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000e6dac:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e6db0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6db4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6db8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_000e6dbc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_000e6dc0:;
    {
        cpu->r[2] = 0x000082c8u;
    }
L_000e6dc4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000e6dc8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e6dcc:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_000e6dd0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e6dd8u, cpu->r[12], 0, 0);
    }
L_000e6dd4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_000e6dd8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000e6ddc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000e6de0:;
    {
        goto L_000e6dfc;
    }
L_000e6de4:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e6de8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000e6dec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6df0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000e6df4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6df8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_000e6dfc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_000e6e00:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e6e04:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000e7038;
        }
    }
L_000e6e08:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x30u);
    }
L_000e6e0c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e6e10:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e6e44;
        }
    }
L_000e6e14:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_000e6e18:;
    {
        cpu->r[1] = rd32(0x000e6e20u + + 0x3a8u);
    }
L_000e6e1c:;
    {
        cpu->r[2] = rd32(0x000e6e24u + + 0x3a8u);
    }
L_000e6e20:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e6e24:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000e6e28:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e6e30u, cpu->r[1], 0, 0);
    }
L_000e6e2c:;
    {
        cpu->r[3] = rd32(0x000e6e34u + + 0x39cu);
    }
L_000e6e30:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e6e38u, cpu->r[2], 0, 0);
    }
L_000e6e34:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000e6e38:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e6e40u, cpu->r[3], 0, 0);
    }
L_000e6e3c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e6e40:;
    {
        cpu->r[14] = 0x000e6e44u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e6e44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_000e6e48:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000e6e4c:;
    {
        cpu->r[14] = 0x000e6e50u; fn_00180c78(cpu);
    }
L_000e6e50:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e6e54:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6e58:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6e5c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x30u);
    }
L_000e6e60:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e6e64:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x30u);
    }
L_000e6e68:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e6e9c;
        }
    }
L_000e6e6c:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_000e6e70:;
    {
        cpu->r[1] = rd32(0x000e6e78u + + 0x35cu);
    }
L_000e6e74:;
    {
        cpu->r[2] = rd32(0x000e6e7cu + + 0x35cu);
    }
L_000e6e78:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e6e7c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000e6e80:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e6e88u, cpu->r[1], 0, 0);
    }
L_000e6e84:;
    {
        cpu->r[3] = rd32(0x000e6e8cu + + 0x350u);
    }
L_000e6e88:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e6e90u, cpu->r[2], 0, 0);
    }
L_000e6e8c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e6e90:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e6e98u, cpu->r[3], 0, 0);
    }
L_000e6e94:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e6e98:;
    {
        cpu->r[14] = 0x000e6e9cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e6e9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_000e6ea0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000e6ea4:;
    {
        cpu->r[14] = 0x000e6ea8u; fn_00180c78(cpu);
    }
L_000e6ea8:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e6eac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6eb0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6eb4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x30u);
    }
L_000e6eb8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e6ebc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e6ef0;
        }
    }
L_000e6ec0:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_000e6ec4:;
    {
        cpu->r[1] = rd32(0x000e6eccu + + 0x314u);
    }
L_000e6ec8:;
    {
        cpu->r[2] = rd32(0x000e6ed0u + + 0x314u);
    }
L_000e6ecc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e6ed0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000e6ed4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e6edcu, cpu->r[1], 0, 0);
    }
L_000e6ed8:;
    {
        cpu->r[3] = rd32(0x000e6ee0u + + 0x308u);
    }
L_000e6edc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e6ee4u, cpu->r[2], 0, 0);
    }
L_000e6ee0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e6ee4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e6eecu, cpu->r[3], 0, 0);
    }
L_000e6ee8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e6eec:;
    {
        cpu->r[14] = 0x000e6ef0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e6ef0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_000e6ef4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000e6ef8:;
    {
        cpu->r[14] = 0x000e6efcu; fn_00180c78(cpu);
    }
L_000e6efc:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e6f00:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6f04:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6f08:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x30u);
    }
L_000e6f0c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e6f10:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x38u);
    }
L_000e6f14:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e6f48;
        }
    }
L_000e6f18:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_000e6f1c:;
    {
        cpu->r[1] = rd32(0x000e6f24u + + 0x2c8u);
    }
L_000e6f20:;
    {
        cpu->r[2] = rd32(0x000e6f28u + + 0x2c8u);
    }
L_000e6f24:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e6f28:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000e6f2c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e6f34u, cpu->r[1], 0, 0);
    }
L_000e6f30:;
    {
        cpu->r[3] = rd32(0x000e6f38u + + 0x2bcu);
    }
L_000e6f34:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e6f3cu, cpu->r[2], 0, 0);
    }
L_000e6f38:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000e6f3c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e6f44u, cpu->r[3], 0, 0);
    }
L_000e6f40:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e6f44:;
    {
        cpu->r[14] = 0x000e6f48u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e6f48:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_000e6f4c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e6f50:;
    {
        cpu->r[14] = 0x000e6f54u; fn_00180c78(cpu);
    }
L_000e6f54:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e6f58:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6f5c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6f60:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x30u);
    }
L_000e6f64:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e6f68:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x30u);
    }
L_000e6f6c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e6fa4;
        }
    }
L_000e6f70:;
    {
        cpu->r[1] = rd32(0x000e6f78u + + 0x280u);
    }
L_000e6f74:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e6f78:;
    {
        cpu->r[12] = rd32(0x000e6f80u + + 0x27cu);
    }
L_000e6f7c:;
    {
        cpu->r[14] = 0x0000003au;
    }
L_000e6f80:;
    {
        cpu->r[2] = rd32(0x000e6f88u + + 0x278u);
    }
L_000e6f84:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e6f8cu, cpu->r[1], 0, 0);
    }
L_000e6f88:;
    {
        cpu->r[3] = rd32(0x000e6f90u + + 0x274u);
    }
L_000e6f8c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e6f94u, cpu->r[12], 0, 0);
    }
L_000e6f90:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e6f98u, cpu->r[2], 0, 0);
    }
L_000e6f94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000030u, 0, 0);
    }
L_000e6f98:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e6fa0u, cpu->r[3], 0, 0);
    }
L_000e6f9c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e6fa0:;
    {
        cpu->r[14] = 0x000e6fa4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e6fa4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_000e6fa8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e6fac:;
    {
        cpu->r[14] = 0x000e6fb0u; fn_00180c78(cpu);
    }
L_000e6fb0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e6fb4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e6fb8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e6fbc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x30u);
    }
L_000e6fc0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e6fc4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e6ffc;
        }
    }
L_000e6fc8:;
    {
        cpu->r[1] = rd32(0x000e6fd0u + + 0x238u);
    }
L_000e6fcc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e6fd0:;
    {
        cpu->r[12] = rd32(0x000e6fd8u + + 0x234u);
    }
L_000e6fd4:;
    {
        cpu->r[14] = 0x0000003au;
    }
L_000e6fd8:;
    {
        cpu->r[2] = rd32(0x000e6fe0u + + 0x230u);
    }
L_000e6fdc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e6fe4u, cpu->r[1], 0, 0);
    }
L_000e6fe0:;
    {
        cpu->r[3] = rd32(0x000e6fe8u + + 0x22cu);
    }
L_000e6fe4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e6fecu, cpu->r[12], 0, 0);
    }
L_000e6fe8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e6ff0u, cpu->r[2], 0, 0);
    }
L_000e6fec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000030u, 0, 0);
    }
L_000e6ff0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e6ff8u, cpu->r[3], 0, 0);
    }
L_000e6ff4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e6ff8:;
    {
        cpu->r[14] = 0x000e6ffcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e6ffc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e7000:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_000e7004:;
    {
        cpu->r[14] = 0x000e7008u; fn_00180c78(cpu);
    }
L_000e7008:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 4u, &shc); cpu->r[10] = v;
    }
L_000e700c:;
    {
        cpu->r[10] = sub_flags(cpu, shifter(cpu->r[11], 1, 4u, &shc), cpu->r[10], 1, 0);
    }
L_000e7010:;
    {
        uint32_t v = cpu->r[10] * cpu->r[10]; cpu->r[10] = v;
    }
L_000e7014:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x38u);
    }
L_000e7018:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 4u, &shc); cpu->r[0] = v;
    }
L_000e701c:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[9], 1, 4u, &shc), cpu->r[0], 1, 0);
    }
L_000e7020:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[10]; cpu->r[0] = v;
    }
L_000e7024:;
    {
        cpu->r[14] = 0x000e7028u; fn_0017fa74(cpu);
    }
L_000e7028:;
    {
        cpu->r[3] = 0x00003a98u;
    }
L_000e702c:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 4u, &shc), 1, 1);
    }
L_000e7030:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000e6de4;
        }
    }
L_000e7034:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000e7038:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_000e703c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000e7040:;
    {
        cpu->r[14] = 0x000e7044u; fn_000966b0(cpu);
    }
L_000e7044:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e7048:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e704c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000e7050:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000e7054:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[2] = v;
    }
L_000e7058:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000e705c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_000e7060:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7074;
        }
    }
L_000e7064:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_000e7068:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001du, 1, 1);
    }
L_000e706c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000001eu, 0, 0);
        }
    }
L_000e7070:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000e7074:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e7078:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e707c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e7080:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e7084:;
    {
        wr32(cpu->r[12] + cpu->r[2], cpu->r[5]);
    }
L_000e7088:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_000e708c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e7090:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e6bd4;
        }
    }
L_000e7094:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e7098:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e709c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e656c;
        }
    }
L_000e70a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000e70a4:;
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
L_000e70a8:;
    {
        return fn_0018ba60(cpu);
    }
L_000e70ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000e70b0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e70b4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000e70b8:;
    {
        cpu->r[2] = rd32(0x000e70c0u + + 0x158u);
    }
L_000e70bc:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000e70c0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e70c8u, cpu->r[12], 0, 0);
    }
L_000e70c4:;
    {
        cpu->r[3] = rd32(0x000e70ccu + + 0x150u);
    }
L_000e70c8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e70d0u, cpu->r[2], 0, 0);
    }
L_000e70cc:;
    {
        cpu->r[12] = 0x0000034cu;
    }
L_000e70d0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000e70d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e70dcu, cpu->r[3], 0, 0);
    }
L_000e70d8:;
    {
        cpu->r[14] = 0x000e70dcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e70dc:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e70e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e70e4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e70e8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_000e70ec:;
    {
        goto L_000e667c;
    }
}

/* _ZN5Scene14TraficGenerateEiRK10RoadStruct @ 000e7220 (arm) */
void fn_000e7220(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e7220:;
    {
        cpu->r[3] = 0x000082a0u;
    }
L_000e7224:;
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
L_000e7228:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e722c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000e7230:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000c4u, 1, 0);
    }
L_000e7234:;
    {
        cpu->r[0] = rd32(0x000e723cu + + 0xfb4u);
    }
L_000e7238:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e723c:;
    {
        cpu->r[0] = add_flags(cpu, 0x000e7244u, cpu->r[0], 0, 0);
    }
L_000e7240:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
    }
L_000e7244:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e7248:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[0]);
    }
L_000e724c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_000e7250:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7460;
        }
    }
L_000e7254:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e7258:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e725c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e7260:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000e7264:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e7480;
        }
    }
L_000e7268:;
    {
        cpu->r[3] = rd32(0x000e7270u + + 0xf84u);
    }
L_000e726c:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000e7270:;
    {
        cpu->r[10] = 0x000082a8u;
    }
L_000e7274:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_000e7278:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e7280u, cpu->r[3], 0, 0);
    }
L_000e727c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_000e7280:;
    {
        cpu->r[3] = rd32(0x000e7288u + + 0xf70u);
    }
L_000e7284:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000e7288:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_000e728c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e7294u, cpu->r[3], 0, 0);
    }
L_000e7290:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_000e7294:;
    {
        cpu->r[3] = rd32(0x000e729cu + + 0xf60u);
    }
L_000e7298:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e72a0u, cpu->r[3], 0, 0);
    }
L_000e729c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_000e72a0:;
    {
        cpu->r[3] = rd32(0x000e72a8u + + 0xf58u);
    }
L_000e72a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e72acu, cpu->r[3], 0, 0);
    }
L_000e72a8:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_000e72ac:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000e72b0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000e72b4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[11], 1, 1);
    }
L_000e72b8:;
    {
        cpu->r[4] = 0x000082a4u;
    }
L_000e72bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[8], 0, 0);
    }
L_000e72c0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e72c4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_000e72c8:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000e72cc:;
    {
        cpu->r[9] = rd32(cpu->r[12] + + 0x62cu);
    }
L_000e72d0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000680u, 0, 0);
    }
L_000e72d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_000e72d8:;
    {
        uint32_t v = cpu->r[9] | 0x00000001u; cpu->r[6] = v;
    }
L_000e72dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_000e72e0:;
    {
        wr32(cpu->r[12] + + 0x62cu, cpu->r[6]);
    }
L_000e72e4:;
    {
        wr32(cpu->r[12] + + 0x630u, cpu->r[9]);
    }
L_000e72e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7468;
        }
    }
L_000e72ec:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000e72f0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_000e72f4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e72ac;
        }
    }
L_000e72f8:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000e72fc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000e7300:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000e7304:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e7308:;
    {
        cpu->r[14] = 0x000e730cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e730c:;
    {
        goto L_000e72ac;
    }
L_000e7310:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e7314:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e7318:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e731c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1cu);
    }
L_000e7320:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_000e7324:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 0);
    }
L_000e7328:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_000e732c:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[7] = v;
    }
L_000e7330:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_000e7334:;
    {
        sub_flags(cpu, cpu->r[7], shifter(cpu->r[2], 1, 1u, &shc), 1, 1);
    }
L_000e7338:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e735c;
        }
    }
L_000e733c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_000e7340:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[9], 1, 1);
    }
L_000e7344:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
        }
    }
L_000e7348:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
        }
    }
L_000e734c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
        }
    }
L_000e7350:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 0);
    }
L_000e7354:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[7] = v;
    }
L_000e7358:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_000e735c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000e7360:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000e737c;
        }
    }
L_000e7364:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_000e7368:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_000e736c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000e7370:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000e7374:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e7378:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e7368;
        }
    }
L_000e737c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000e7380:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e73a0;
        }
    }
L_000e7384:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_000e7388:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_000e738c:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_000e7390:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_000e7394:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000e7398:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000e739c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000e738c;
        }
    }
L_000e73a0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e73a4:;
    {
        wr32(cpu->r[13] + + 0xbcu, cpu->r[9]);
    }
L_000e73a8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e73ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e73b0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_000e73b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000e73b8:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000e73bc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
        }
    }
L_000e73c0:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[13] + + 0xbcu, cpu->r[9]);
        }
    }
L_000e73c4:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000e73c8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000e73cc:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000e73d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_000e73d4:;
    {
        cpu->r[14] = 0x000e73d8u; fn_00180c78(cpu);
    }
L_000e73d8:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e73dc:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000e73e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e73e4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000e73e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e73ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000e73f0:;
    {
        cpu->r[14] = 0x000e73f4u; fn_00180c78(cpu);
    }
L_000e73f4:;
    {
        cpu->r[3] = 0x000082d8u;
    }
L_000e73f8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e73fc:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000001du, 1, 1);
    }
L_000e7400:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000e7404:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000e7408:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e760c;
        }
    }
L_000e740c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x2u);
    }
L_000e7410:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000e7414:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] & ~ 0x0000003fu; cpu->r[3] = v;
        }
    }
L_000e7418:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[5] + + 0x2u, cpu->r[3]);
        }
    }
L_000e741c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000e7420:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[5] + + 0x3u, cpu->r[3]);
        }
    }
L_000e7424:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e7428:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e7b1c;
        }
    }
L_000e742c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000e7430:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_000e7434:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e753c;
        }
    }
L_000e7438:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000e743c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000e7440:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000018u, 0, 0);
    }
L_000e7444:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[12], 1, 1);
    }
L_000e7448:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e7524;
        }
    }
L_000e744c:;
    {
        cpu->r[3] = 0x000082d8u;
    }
L_000e7450:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x78u);
    }
L_000e7454:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e7458:;
    {
        uint32_t v = cpu->r[11] ^ 0x00000001u; cpu->r[2] = v;
    }
L_000e745c:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000e7460:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000c4u, 0, 0);
    }
L_000e7464:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e7468u)) return;
    }
L_000e7468:;
    {
        cpu->r[3] = 0x000082a0u;
    }
L_000e746c:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_000e7470:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e7474:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000e7478:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e747c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7460;
        }
    }
L_000e7480:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_000e7484:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000e7488:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e748c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000e7490:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e7460;
        }
    }
L_000e7494:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000e7498:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000e749c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e74a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e74a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e7460;
        }
    }
L_000e74a8:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e74ac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e74b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e74b4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000e74b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000e74bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000e74c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000e74c4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000e74c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e74cc:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[3]);
    }
L_000e74d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e819c;
        }
    }
L_000e74d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_000e74d8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_000e74dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e74e0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000e74e4:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[0]);
    }
L_000e74e8:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x78u, cpu->r[1]);
        }
    }
L_000e74ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e744c;
        }
    }
L_000e74f0:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000e74f4:;
    {
        cpu->r[2] = rd32(0x000e74fcu + + 0xd08u);
    }
L_000e74f8:;
    {
        cpu->r[3] = rd32(0x000e7500u + + 0xd08u);
    }
L_000e74fc:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_000e7500:;
    {
        cpu->r[1] = rd32(0x000e7508u + + 0xd04u);
    }
L_000e7504:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e750cu, cpu->r[2], 0, 0);
    }
L_000e7508:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e7510u, cpu->r[3], 0, 0);
    }
L_000e750c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000024u, 0, 0);
    }
L_000e7510:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000024u, 0, 0);
    }
L_000e7514:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[10]);
    }
L_000e7518:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[2]);
    }
L_000e751c:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[3]);
    }
L_000e7520:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[1]);
    }
L_000e7524:;
    {
        cpu->r[0] = rd32(0x000e752cu + + 0xce4u);
    }
L_000e7528:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000e752c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x50u);
    }
L_000e7530:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_000e7534:;
    {
        cpu->r[14] = add_flags(cpu, 0x000e753cu, cpu->r[14], 0, 0);
    }
L_000e7538:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[14]);
    }
L_000e753c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e7540:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e7b7c;
        }
    }
L_000e7544:;
    {
        cpu->r[3] = 0x000082acu;
    }
L_000e7548:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e754c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e7550:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_000e7554:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e7588;
        }
    }
L_000e7558:;
    {
        cpu->r[3] = 0x0000000du;
    }
L_000e755c:;
    {
        cpu->r[1] = rd32(0x000e7564u + + 0xcb0u);
    }
L_000e7560:;
    {
        cpu->r[2] = rd32(0x000e7568u + + 0xcb0u);
    }
L_000e7564:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e7568:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000e756c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e7574u, cpu->r[1], 0, 0);
    }
L_000e7570:;
    {
        cpu->r[3] = rd32(0x000e7578u + + 0xca4u);
    }
L_000e7574:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e757cu, cpu->r[2], 0, 0);
    }
L_000e7578:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x60u);
    }
L_000e757c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e7584u, cpu->r[3], 0, 0);
    }
L_000e7580:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000e7584:;
    {
        cpu->r[14] = 0x000e7588u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e7588:;
    {
        cpu->r[3] = 0x000082b0u;
    }
L_000e758c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e7590:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e7594:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
    }
L_000e7598:;
    {
        cpu->r[3] = 0x000082d4u;
    }
L_000e759c:;
    {
        cpu->r[11] = rd8(cpu->r[5]);
    }
L_000e75a0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e75a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e75a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e75ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e7854;
        }
    }
L_000e75b0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e75b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e785c;
        }
    }
L_000e75b8:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0x10u);
    }
L_000e75bc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000e75c0:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[0]);
    }
L_000e75c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00000ff0u, 0, 0);
    }
L_000e75c8:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 1);
    }
L_000e75cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_000e75d0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = cpu->r[3];
        }
    }
L_000e75d4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[9], 1, 12u, &shc), 1, 0);
    }
L_000e75d8:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000e75dc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000e7310;
        }
    }
L_000e75e0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e75e4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e75e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e75ec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1cu);
    }
L_000e75f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_000e75f4:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_000e75f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000e75fc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000e7600:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e7604:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e75f4;
        }
    }
L_000e7608:;
    {
        goto L_000e7320;
    }
L_000e760c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000e7610:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7424;
        }
    }
L_000e7614:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e7618:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e761c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e7620:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_000e7624:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e7424;
        }
    }
L_000e7628:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000001u, 1, 1);
    }
L_000e762c:;
    {
        if (cond_test(cpu, 4)) {
        goto L_000e7638;
        }
    }
L_000e7630:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_000e7634:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e766c;
        }
    }
L_000e7638:;
    {
        cpu->r[1] = rd32(0x000e7640u + + 0xbe0u);
    }
L_000e763c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e7640:;
    {
        cpu->r[2] = rd32(0x000e7648u + + 0xbdcu);
    }
L_000e7644:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000e7648:;
    {
        cpu->r[3] = rd32(0x000e7650u + + 0xbd8u);
    }
L_000e764c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e7654u, cpu->r[1], 0, 0);
    }
L_000e7650:;
    {
        cpu->r[12] = rd32(0x000e7658u + + 0xbd4u);
    }
L_000e7654:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e765cu, cpu->r[2], 0, 0);
    }
L_000e7658:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e7660u, cpu->r[3], 0, 0);
    }
L_000e765c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e7660:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e7668u, cpu->r[12], 0, 0);
    }
L_000e7664:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e7668:;
    {
        cpu->r[14] = 0x000e766cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e766c:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000e7670:;
    {
        cpu->r[7] = 0x00000680u;
    }
L_000e7674:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e7678:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e767c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[11] + cpu->r[3]; cpu->r[7] = v;
    }
L_000e7680:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1dcu);
    }
L_000e7684:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000e7688:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7ce4;
        }
    }
L_000e768c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x62cu);
    }
L_000e7690:;
    {
        wr32(cpu->r[7] + + 0x674u, cpu->r[5]);
    }
L_000e7694:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000001u; cpu->r[3] = v;
    }
L_000e7698:;
    {
        wr32(cpu->r[7] + + 0x62cu, cpu->r[3]);
    }
L_000e769c:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x14u);
    }
L_000e76a0:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x10u);
    }
L_000e76a4:;
    {
        wr32(cpu->r[7] + + 0x678u, cpu->r[8]);
    }
L_000e76a8:;
    {
        wr32(cpu->r[7] + + 0x67cu, cpu->r[6]);
    }
L_000e76ac:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x3u);
    }
L_000e76b0:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[14]);
    }
L_000e76b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e76b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e76cc;
        }
    }
L_000e76bc:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x2u);
    }
L_000e76c0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000e76c4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_000e76c8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[7] + + 0x1dcu, cpu->r[3]);
        }
    }
L_000e76cc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e76d0:;
    {
        cpu->r[14] = 0x000e76d4u; fn_00184a0c(cpu);
    }
L_000e76d4:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x2u);
    }
L_000e76d8:;
    {
        uint32_t v = cpu->r[2] & 0x00000002u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_000e76dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e7bd0;
        }
    }
L_000e76e0:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000e76e4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & 0x000000c0u; cpu->r[2] = v;
        }
    }
L_000e76e8:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[5] + + 0x2u, cpu->r[2]);
        }
    }
L_000e76ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e783c;
        }
    }
L_000e76f0:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x1dcu);
    }
L_000e76f4:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_000e76f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7774;
        }
    }
L_000e76fc:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_000e7700:;
    {
        wr32(cpu->r[7] + + 0x1f8u, cpu->r[12]);
    }
L_000e7704:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x3u);
    }
L_000e7708:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x4u);
    }
L_000e770c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_000e7710:;
    {
        wr32(cpu->r[7] + + 0x1dcu, cpu->r[2]);
    }
L_000e7714:;
    {
        uint32_t v = cpu->r[1] & 0x0000000fu; cpu->r[1] = v;
    }
L_000e7718:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x3u);
    }
L_000e771c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000e7720:;
    {
        wr32(cpu->r[7] + + 0x4d4u, cpu->r[1]);
    }
L_000e7724:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000e7728:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_000e772c:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[2]);
    }
L_000e7730:;
    {
        wr8(cpu->r[5] + + 0x3u, cpu->r[2]);
    }
L_000e7734:;
    {
        wr32(cpu->r[7] + + 0x1dcu, cpu->r[2]);
    }
L_000e7738:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x3u);
    }
L_000e773c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_000e7740:;
    {
        cpu->r[14] = 0x000e7744u; fn_00171b64(cpu);
    }
L_000e7744:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000e7748:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000e774c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000e7750:;
    {
        cpu->r[1] = rd32(cpu->r[0]);
    }
L_000e7754:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000e7758:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e7774;
        }
    }
L_000e775c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x554u);
    }
L_000e7760:;
    {
        wr8(cpu->r[7] + + 0x4u, cpu->r[3]);
    }
L_000e7764:;
    {
        wr32(cpu->r[7] + + 0x39cu, cpu->r[12]);
    }
L_000e7768:;
    {
        wr32(cpu->r[7] + + 0x550u, cpu->r[2]);
    }
L_000e776c:;
    {
        wr32(cpu->r[7] + + 0x1dcu, cpu->r[12]);
    }
L_000e7770:;
    {
        goto L_000e7778;
    }
L_000e7774:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x550u);
    }
L_000e7778:;
    {
        cpu->r[0] = rd32(0x000e7780u + + 0xab0u);
    }
L_000e777c:;
    {
        wr32(cpu->r[7] + + 0x88u, cpu->r[2]);
    }
L_000e7780:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[0]);
    }
L_000e7784:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e7788:;
    {
        cpu->r[14] = 0x000e778cu; fn_00174970(cpu);
    }
L_000e778c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e7790:;
    {
        cpu->r[14] = 0x000e7794u; fn_00179204(cpu);
    }
L_000e7794:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_000e7798:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000e779c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000e77a0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000e77a4:;
    {
        cpu->r[14] = 0x000e77a8u; fn_00096b88(cpu);
    }
L_000e77a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e77ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e77dc;
        }
    }
L_000e77b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x000003d4u, 0, 0);
    }
L_000e77b4:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[1] = v0;
        cpu->r[3] = v1;
        cpu->r[12] = v2;
    }
L_000e77b8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x428u);
    }
L_000e77bc:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x42cu);
    }
L_000e77c0:;
    {
        cpu->r[14] = rd32(cpu->r[7] + + 0x430u);
    }
L_000e77c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000e77c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000e77cc:;
    {
        wr32(cpu->r[7] + + 0x3d4u, cpu->r[2]);
    }
L_000e77d0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[14], 0, 0);
    }
L_000e77d4:;
    {
        wr32(cpu->r[7] + + 0x3d8u, cpu->r[3]);
    }
L_000e77d8:;
    {
        wr32(cpu->r[7] + + 0x3dcu, cpu->r[12]);
    }
L_000e77dc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e77e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_000e77e4:;
    {
        cpu->r[14] = 0x000e77e8u; fn_001745cc(cpu);
    }
L_000e77e8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e77ec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_000e77f0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000e77f4:;
    {
        cpu->r[14] = 0x000e77f8u; fn_00177118(cpu);
    }
L_000e77f8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x40u);
    }
L_000e77fc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000e7800:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000e7804:;
    {
        wr8(cpu->r[7] + + 0x250u, cpu->r[2]);
    }
L_000e7808:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_000e780c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000e7810:;
    {
        cpu->r[14] = 0x000e7814u; fn_00096b88(cpu);
    }
L_000e7814:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e7818:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7d00;
        }
    }
L_000e781c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1dcu);
    }
L_000e7820:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000e7824:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000e7828:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x78u, cpu->r[0]);
        }
    }
L_000e782c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e742c;
        }
    }
L_000e7830:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x2u);
    }
L_000e7834:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000e7838:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[1]);
    }
L_000e783c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000040u; set_nz(cpu, v); }
    }
L_000e7840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7880;
        }
    }
L_000e7844:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x62cu);
    }
L_000e7848:;
    {
        uint32_t v = cpu->r[3] | 0x00000001u; cpu->r[3] = v;
    }
L_000e784c:;
    {
        wr32(cpu->r[7] + + 0x62cu, cpu->r[3]);
    }
L_000e7850:;
    {
        goto L_000e742c;
    }
L_000e7854:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000e7858:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e75b8;
        }
    }
L_000e785c:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0x10u);
    }
L_000e7860:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000e7864:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
    }
L_000e7868:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00000ff0u, 0, 0);
    }
L_000e786c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000e7870:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_000e7874:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = cpu->r[3];
        }
    }
L_000e7878:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], shifter(cpu->r[9], 1, 12u, &shc), 0, 0);
    }
L_000e787c:;
    {
        goto L_000e75d8;
    }
L_000e7880:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xbcu);
    }
L_000e7884:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e7888:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000e788c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000e7890:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[2]);
    }
L_000e7894:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000e7898:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000e789c:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
        }
    }
L_000e78a0:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[14] = rd32(cpu->r[13] + + 0x48u);
        }
    }
L_000e78a4:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[12] = rd32(cpu->r[12] + + 0x10u);
        }
    }
L_000e78a8:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[14] = rd32(cpu->r[14] + + 0x10u);
        }
    }
L_000e78ac:;
    {
        if (cond_test(cpu, 6)) {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
        }
    }
L_000e78b0:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 31u, &shc); cpu->r[12] = v;
    }
L_000e78b4:;
    {
        if (cond_test(cpu, 5)) {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[14]);
        }
    }
L_000e78b8:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 20u, &shc); cpu->r[12] = v;
    }
L_000e78bc:;
    {
        if (cond_test(cpu, 5)) {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[14]);
        }
    }
L_000e78c0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[12], 0, 0);
    }
L_000e78c4:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[11]);
    }
L_000e78c8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x64u);
    }
L_000e78cc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000e78d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_000e78d4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000e78d8:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_000e78dc:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 20u, &shc); cpu->r[3] = v;
    }
L_000e78e0:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 20u, &shc); cpu->r[3] = v;
    }
L_000e78e4:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_000e78e8:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000e78ec:;
    {
        cpu->r[14] = 0x000e78f0u; fn_000e5430(cpu);
    }
L_000e78f0:;
    {
        cpu->r[3] = 0x000082d4u;
    }
L_000e78f4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e78f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e78fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000e7900:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7d40;
        }
    }
L_000e7904:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000e7908:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7ea8;
        }
    }
L_000e790c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x62cu);
    }
L_000e7910:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_000e7914:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e7d14;
        }
    }
L_000e7918:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_000e791c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[9], 0x00000024u, 0, 0);
    }
L_000e7920:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_000e7924:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[9], 0x00000030u, 0, 0);
    }
L_000e7928:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000024u, 0, 0);
    }
L_000e792c:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[12]);
    }
L_000e7930:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_000e7934:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[2]);
    }
L_000e7938:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[3]);
    }
L_000e793c:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[14]);
    }
L_000e7940:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x58u);
    }
L_000e7944:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x74u);
    }
L_000e7948:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x58u);
    }
L_000e794c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[12] = v;
    }
L_000e7950:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x3u);
    }
L_000e7954:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x2u);
    }
L_000e7958:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000a0u, 0, 0);
    }
L_000e795c:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 20u, &shc); cpu->r[12] = v;
    }
L_000e7960:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000e7964:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_000e7968:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e796c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_000e7970:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = 0x00000000u;
        }
    }
L_000e7974:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 20u, &shc); cpu->r[3] = v;
    }
L_000e7978:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_000e797c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x70u);
    }
L_000e7980:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 20u, &shc); cpu->r[3] = v;
    }
L_000e7984:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x6cu);
    }
L_000e7988:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_000e798c:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000e7990:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x64u);
    }
L_000e7994:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000e7998:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000e799c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000e79a0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000e79a4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_000e79a8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_000e79ac:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000e79b0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000e79b4:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x4u);
    }
L_000e79b8:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[14]);
    }
L_000e79bc:;
    {
        cpu->r[14] = rd32(0x000e79c4u + + 0x86cu);
    }
L_000e79c0:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 5u, &shc); cpu->r[12] = v;
    }
L_000e79c4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_000e79c8:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[14]);
    }
L_000e79cc:;
    {
        cpu->r[14] = 0x000e79d0u; fn_000e5184(cpu);
    }
L_000e79d0:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000e79d4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000e79d8:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x2u);
    }
L_000e79dc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000e79e0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x74u);
    }
L_000e79e4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000e79e8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x58u);
    }
L_000e79ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000e79f0:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x3u);
    }
L_000e79f4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_000e79f8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x70u);
    }
L_000e79fc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000e7a00:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x6cu);
    }
L_000e7a04:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_000e7a08:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x64u);
    }
L_000e7a0c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000e7a10:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_000e7a14:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x4u);
    }
L_000e7a18:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 5u, &shc); cpu->r[12] = v;
    }
L_000e7a1c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_000e7a20:;
    {
        cpu->r[14] = 0x000e7a24u; fn_000e5184(cpu);
    }
L_000e7a24:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_000e7a28:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000e7a2c:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x3f0u);
    }
L_000e7a30:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x3ecu);
    }
L_000e7a34:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_000e7a38:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x3e0u);
    }
L_000e7a3c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x3e4u);
    }
L_000e7a40:;
    {
        cpu->r[14] = rd32(cpu->r[7] + + 0x3f4u);
    }
L_000e7a44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000e7a48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_000e7a4c:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x3e8u);
    }
L_000e7a50:;
    {
        wr32(cpu->r[7] + + 0x3e0u, cpu->r[2]);
    }
L_000e7a54:;
    {
        wr32(cpu->r[7] + + 0x3e4u, cpu->r[1]);
    }
L_000e7a58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[14], 0, 0);
    }
L_000e7a5c:;
    {
        wr32(cpu->r[7] + + 0x3e8u, cpu->r[2]);
    }
L_000e7a60:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xbcu);
    }
L_000e7a64:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_000e7a68:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x7cu);
    }
L_000e7a6c:;
    {
        wr32(cpu->r[7] + + 0x1b0u, cpu->r[2]);
    }
L_000e7a70:;
    {
        wr32(cpu->r[7] + + 0x1b4u, cpu->r[1]);
    }
L_000e7a74:;
    {
        wr32(cpu->r[7] + + 0x1b8u, cpu->r[0]);
    }
L_000e7a78:;
    {
        wr32(cpu->r[7] + + 0x1d8u, cpu->r[11]);
    }
L_000e7a7c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000e7a80:;
    {
        cpu->r[14] = 0x000e7a84u; fn_00096b88(cpu);
    }
L_000e7a84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e7a88:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x58u);
        }
    }
L_000e7a8c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        }
    }
L_000e7a90:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x000003d4u, 0, 0);
        }
    }
L_000e7a94:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        }
    }
L_000e7a98:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e7a9c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000e7aa0:;
    {
        wr8(cpu->r[7] + + 0x250u, cpu->r[3]);
    }
L_000e7aa4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e7aa8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_000e7aac:;
    {
        cpu->r[14] = 0x000e7ab0u; fn_00177118(cpu);
    }
L_000e7ab0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e7ab4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_000e7ab8:;
    {
        cpu->r[14] = 0x000e7abcu; fn_001745cc(cpu);
    }
L_000e7abc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e7ac0:;
    {
        cpu->r[14] = 0x000e7ac4u; fn_00179204(cpu);
    }
L_000e7ac4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x68u);
    }
L_000e7ac8:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x1dcu);
    }
L_000e7acc:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000e7ad0:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000e7ad4:;
    {
        cpu->r[11] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_000e7ad8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7d78;
        }
    }
L_000e7adc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_000e7ae0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000e7ae4:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[11]);
    }
L_000e7ae8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000e7aec:;
    {
        cpu->r[14] = 0x000e7af0u; fn_00096b88(cpu);
    }
L_000e7af0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e7af4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e7b1c;
        }
    }
L_000e7af8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x480u);
    }
L_000e7afc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x98u);
    }
L_000e7b00:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000e7b04:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000e7b1c;
        }
    }
L_000e7b08:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[3]);
    }
L_000e7b0c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x000003d4u, 0, 0);
    }
L_000e7b10:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x58u);
    }
L_000e7b14:;
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
L_000e7b18:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000e7b1c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x2u);
    }
L_000e7b20:;
    {
        { uint32_t v = cpu->r[3] & 0x00000003u; set_nz(cpu, v); }
    }
L_000e7b24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e742c;
        }
    }
L_000e7b28:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x30u);
    }
L_000e7b2c:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x30u);
    }
L_000e7b30:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x38u);
    }
L_000e7b34:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x30u);
    }
L_000e7b38:;
    {
        cpu->r[0] = rd32(cpu->r[11] + + 0x38u);
    }
L_000e7b3c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 4u, &shc); cpu->r[2] = v;
    }
L_000e7b40:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 4u, &shc); cpu->r[1] = v;
    }
L_000e7b44:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 4u, &shc), cpu->r[2], 1, 0);
    }
L_000e7b48:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 1, 4u, &shc), cpu->r[1], 1, 0);
    }
L_000e7b4c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3]; cpu->r[3] = v;
    }
L_000e7b50:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[3]; cpu->r[0] = v;
    }
L_000e7b54:;
    {
        cpu->r[14] = 0x000e7b58u; fn_0017fa74(cpu);
    }
L_000e7b58:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x10u);
    }
L_000e7b5c:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[7]);
    }
L_000e7b60:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[1] = v;
    }
L_000e7b64:;
    {
        cpu->r[0] = 0x0000fda0u;
    }
L_000e7b68:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0002u << 16);
    }
L_000e7b6c:;
    {
        cpu->r[14] = 0x000e7b70u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000e7b70:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_000e7b74:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[0]);
    }
L_000e7b78:;
    {
        goto L_000e742c;
    }
L_000e7b7c:;
    {
        cpu->r[3] = 0x000082b4u;
    }
L_000e7b80:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e7b84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e7b88:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_000e7b8c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e7bbc;
        }
    }
L_000e7b90:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_000e7b94:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e7b98:;
    {
        cpu->r[3] = rd32(0x000e7ba0u + + 0x694u);
    }
L_000e7b9c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000e7ba0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e7ba8u, cpu->r[12], 0, 0);
    }
L_000e7ba4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_000e7ba8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e7bb0u, cpu->r[3], 0, 0);
    }
L_000e7bac:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000e7bb0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000e7bb4:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000e7bb8:;
    {
        cpu->r[14] = 0x000e7bbcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e7bbc:;
    {
        cpu->r[3] = 0x000082b8u;
    }
L_000e7bc0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e7bc4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e7bc8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
    }
L_000e7bcc:;
    {
        goto L_000e7598;
    }
L_000e7bd0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e7bd4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e7bd8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e7bdc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_000e7be0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e7be4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000e7be8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000e7bec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000e7bf0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000e7bf4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000e7bf8:;
    {
        cpu->r[14] = 0x000e7bfcu; fn_00174dfc(cpu);
    }
L_000e7bfc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000e7c00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e7c04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e7ee0;
        }
    }
L_000e7c08:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x3u);
    }
L_000e7c0c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x4d8u);
    }
L_000e7c10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000e7c14:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[3]);
    }
L_000e7c18:;
    {
        wr8(cpu->r[5] + + 0x3u, cpu->r[3]);
    }
L_000e7c1c:;
    {
        wr32(cpu->r[7] + + 0x1f8u, cpu->r[3]);
    }
L_000e7c20:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x3u);
    }
L_000e7c24:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_000e7c28:;
    {
        cpu->r[14] = 0x000e7c2cu; fn_00171b64(cpu);
    }
L_000e7c2c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000e7c30:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000e7c34:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000e7c38:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd8(cpu->r[5] + + 0x2u);
        }
    }
L_000e7c3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e783c;
        }
    }
L_000e7c40:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000e7c44:;
    {
        wr32(cpu->r[7] + + 0x1f8u, cpu->r[3]);
    }
L_000e7c48:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x2u);
    }
L_000e7c4c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000e7c50:;
    {
        wr8(cpu->r[5] + + 0x3u, cpu->r[2]);
    }
L_000e7c54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e7c58:;
    {
        uint32_t v = cpu->r[3] & ~ 0x0000003fu; cpu->r[3] = v;
    }
L_000e7c5c:;
    {
        wr8(cpu->r[5] + + 0x2u, cpu->r[3]);
    }
L_000e7c60:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x41cu);
    }
L_000e7c64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000000acu, 0, 0);
    }
L_000e7c68:;
    {
        cpu->r[14] = rd32(cpu->r[7] + + 0x420u);
    }
L_000e7c6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000bcu, 0, 0);
    }
L_000e7c70:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000e7c74:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[12]);
    }
L_000e7c78:;
    {
        wr32(cpu->r[13] + + 0xb0u, cpu->r[14]);
    }
L_000e7c7c:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x424u);
    }
L_000e7c80:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000e7c84:;
    {
        wr32(cpu->r[13] + + 0xb4u, cpu->r[12]);
    }
L_000e7c88:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000e7c8c:;
    {
        cpu->r[14] = 0x000e7c90u; fn_000e5570(cpu);
    }
L_000e7c90:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xbcu);
    }
L_000e7c94:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000e7c98:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000e7c9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e81d4;
        }
    }
L_000e7ca0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000e7ca4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_000e7ca8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e7cac:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x10u);
    }
L_000e7cb0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_000e7cb4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_000e7cb8:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000e7cbc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_000e7cc0:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00001000u, cpu->r[1], 1, 0);
    }
L_000e7cc4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000e7cc8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 12u, &shc), 0, 0);
    }
L_000e7ccc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_000e7cd0:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_000e7cd4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_000e7cd8:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x2u);
    }
L_000e7cdc:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
    }
L_000e7ce0:;
    {
        goto L_000e783c;
    }
L_000e7ce4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1f8u);
    }
L_000e7ce8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000e7cec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e768c;
        }
    }
L_000e7cf0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_000e7cf4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000e7cf8:;
    {
        cpu->r[14] = 0x000e7cfcu; fn_00174d70(cpu);
    }
L_000e7cfc:;
    {
        goto L_000e768c;
    }
L_000e7d00:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x480u);
    }
L_000e7d04:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x3d8u);
    }
L_000e7d08:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000e7d0c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[7] + + 0x3d8u, cpu->r[3]);
        }
    }
L_000e7d10:;
    {
        goto L_000e781c;
    }
L_000e7d14:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000e7d18:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[9], 0x00000030u, 0, 0);
    }
L_000e7d1c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_000e7d20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], 0x0000003cu, 0, 0);
    }
L_000e7d24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000030u, 0, 0);
    }
L_000e7d28:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[0]);
    }
L_000e7d2c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x0000003cu, 0, 0);
    }
L_000e7d30:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[12]);
    }
L_000e7d34:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[14]);
    }
L_000e7d38:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[1]);
    }
L_000e7d3c:;
    {
        goto L_000e7940;
    }
L_000e7d40:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x62cu);
    }
L_000e7d44:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_000e7d48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e80b4;
        }
    }
L_000e7d4c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_000e7d50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], 0x00000030u, 0, 0);
    }
L_000e7d54:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_000e7d58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x0000003cu, 0, 0);
    }
L_000e7d5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_000e7d60:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[2]);
    }
L_000e7d64:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000003cu, 0, 0);
    }
L_000e7d68:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[0]);
    }
L_000e7d6c:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[1]);
    }
L_000e7d70:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
    }
L_000e7d74:;
    {
        goto L_000e7940;
    }
L_000e7d78:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x68u);
    }
L_000e7d7c:;
    {
        cpu->r[12] = rd32(cpu->r[14] + + 0x498u);
    }
L_000e7d80:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000e7d84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e7adc;
        }
    }
L_000e7d88:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x1b0u);
    }
L_000e7d8c:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x1b0u);
    }
L_000e7d90:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000e7d94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e7adc;
        }
    }
L_000e7d98:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x1d8u);
    }
L_000e7d9c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x1d8u);
    }
L_000e7da0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000e7da4:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000e7da8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_000e7dac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000200u, 1, 1);
    }
L_000e7db0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000e7adc;
        }
    }
L_000e7db4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_000e7db8:;
    {
        cpu->r[11] = (cpu->r[11] >> 5) & 0x1u;
    }
L_000e7dbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7fbc;
        }
    }
L_000e7dc0:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000e7dc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7f38;
        }
    }
L_000e7dc8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x40u);
    }
L_000e7dcc:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000e7dd0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000e7dd4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_000e7dd8:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_000e7ddc:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_000e7de0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000e7de4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_000e7de8:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000e7dec:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4a0u);
    }
L_000e7df0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000e7df4:;
    {
        cpu->r[14] = 0x000e7df8u; fn_000fd224(cpu);
    }
L_000e7df8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000e7dfc:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000e7e00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e829c;
        }
    }
L_000e7e04:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x68u);
    }
L_000e7e08:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x1c4u);
    }
L_000e7e0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e7e10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e7f2c;
        }
    }
L_000e7e14:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000e7e18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7adc;
        }
    }
L_000e7e1c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_000e7e20:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000e7e24:;
    {
        cpu->r[11] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000e7e28:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000e7e2c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000e7e30:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_000e7e34:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4a4u);
    }
L_000e7e38:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000e7e3c:;
    {
        cpu->r[14] = 0x000e7e40u; fn_000fd224(cpu);
    }
L_000e7e40:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000e7e44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e7adc;
        }
    }
L_000e7e48:;
    {
        cpu->r[12] = rd32(cpu->r[11]);
    }
L_000e7e4c:;
    {
        cpu->r[1] = 0x00000090u;
    }
L_000e7e50:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000008fu, 0, 0);
    }
L_000e7e54:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_000e7e58:;
    {
        cpu->r[14] = 0x000e7e5cu; fn_000964c8(cpu);
    }
L_000e7e5c:;
    {
        cpu->r[14] = rd32(cpu->r[11]);
    }
L_000e7e60:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000e7e64:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000e7e68:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000e7e6c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000e7e70:;
    {
        wr32(cpu->r[12] + + 0x4a4u, cpu->r[0]);
    }
L_000e7e74:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000e7e78:;
    {
        cpu->r[1] = rd32(cpu->r[14] + + 0x4a4u);
    }
L_000e7e7c:;
    {
        cpu->r[0] = rd32(cpu->r[14] + + 0x490u);
    }
L_000e7e80:;
    {
        cpu->r[14] = 0x000e7e84u; fn_000fd248(cpu);
    }
L_000e7e84:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_000e7e88:;
    {
        cpu->r[14] = 0x000e7e8cu; fn_00096b6c(cpu);
    }
L_000e7e8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e7e90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7adc;
        }
    }
L_000e7e94:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_000e7e98:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000e7e9c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4a4u);
    }
L_000e7ea0:;
    {
        cpu->r[14] = 0x000e7ea4u; fn_00099454(cpu);
    }
L_000e7ea4:;
    {
        goto L_000e7adc;
    }
L_000e7ea8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x62cu);
    }
L_000e7eac:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_000e7eb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e80e0;
        }
    }
L_000e7eb4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_000e7eb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[9], 0x00000024u, 0, 0);
    }
L_000e7ebc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_000e7ec0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[9], 0x00000030u, 0, 0);
    }
L_000e7ec4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000024u, 0, 0);
    }
L_000e7ec8:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[12]);
    }
L_000e7ecc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_000e7ed0:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[2]);
    }
L_000e7ed4:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
    }
L_000e7ed8:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[14]);
    }
L_000e7edc:;
    {
        goto L_000e7940;
    }
L_000e7ee0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x10u);
    }
L_000e7ee4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000410u, 0, 0);
    }
L_000e7ee8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e7eec:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_000e7ef0:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[12] = v;
    }
L_000e7ef4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_000e7ef8:;
    {
        wr8(cpu->r[5] + + 0x3u, cpu->r[14]);
    }
L_000e7efc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000b8u, 0, 0);
    }
L_000e7f00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000e7f04:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 20u, &shc); cpu->r[12] = v;
    }
L_000e7f08:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000e7f0c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e7f10:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 20u, &shc); cpu->r[12] = v;
    }
L_000e7f14:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[12]);
    }
L_000e7f18:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000e7f1c:;
    {
        cpu->r[14] = 0x000e7f20u; fn_0017bf58(cpu);
    }
L_000e7f20:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xb8u);
    }
L_000e7f24:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[3]);
    }
L_000e7f28:;
    {
        goto L_000e7c08;
    }
L_000e7f2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000e7f30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e7adc;
        }
    }
L_000e7f34:;
    {
        goto L_000e7e14;
    }
L_000e7f38:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_000e7f3c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000e7f40:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000e7f44:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000e7f48:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_000e7f4c:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000e7f50:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_000e7f54:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4a0u);
    }
L_000e7f58:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000e7f5c:;
    {
        cpu->r[14] = 0x000e7f60u; fn_000fd224(cpu);
    }
L_000e7f60:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000e7f64:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000e7f68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e7e04;
        }
    }
L_000e7f6c:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000e7f70:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000e7f74:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000e7f78:;
    {
        cpu->r[1] = 0x00000091u;
    }
L_000e7f7c:;
    {
        wr32(cpu->r[0] + + 0x4a0u, cpu->r[1]);
    }
L_000e7f80:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000e7f84:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4a0u);
    }
L_000e7f88:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000e7f8c:;
    {
        cpu->r[14] = 0x000e7f90u; fn_000fd248(cpu);
    }
L_000e7f90:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000e7f94:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000e7f98:;
    {
        cpu->r[14] = 0x000e7f9cu; fn_00096b6c(cpu);
    }
L_000e7f9c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000e7fa0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e7fa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7e04;
        }
    }
L_000e7fa8:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000e7fac:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000e7fb0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4a0u);
    }
L_000e7fb4:;
    {
        cpu->r[14] = 0x000e7fb8u; fn_00099454(cpu);
    }
L_000e7fb8:;
    {
        goto L_000e7e04;
    }
L_000e7fbc:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000e7fc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e8118;
        }
    }
L_000e7fc4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_000e7fc8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000e7fcc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000e7fd0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000e7fd4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_000e7fd8:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_000e7fdc:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[0]);
    }
L_000e7fe0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000e7fe4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4a0u);
    }
L_000e7fe8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000e7fec:;
    {
        cpu->r[14] = 0x000e7ff0u; fn_000fd224(cpu);
    }
L_000e7ff0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000e7ff4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000e7ff8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e8248;
        }
    }
L_000e7ffc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x68u);
    }
L_000e8000:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x1c4u);
    }
L_000e8004:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e8008:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e810c;
        }
    }
L_000e800c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000e8010:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e7adc;
        }
    }
L_000e8014:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_000e8018:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000e801c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000e8020:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000e8024:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[2]);
    }
L_000e8028:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000e802c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_000e8030:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000e8034:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4a4u);
    }
L_000e8038:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000e803c:;
    {
        cpu->r[14] = 0x000e8040u; fn_000fd224(cpu);
    }
L_000e8040:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000e8044:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e7adc;
        }
    }
L_000e8048:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x54u);
    }
L_000e804c:;
    {
        cpu->r[1] = 0x00000090u;
    }
L_000e8050:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000008fu, 0, 0);
    }
L_000e8054:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_000e8058:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[14]);
    }
L_000e805c:;
    {
        cpu->r[14] = 0x000e8060u; fn_000964c8(cpu);
    }
L_000e8060:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_000e8064:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000e8068:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x64u);
    }
L_000e806c:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000e8070:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_000e8074:;
    {
        wr32(cpu->r[14] + + 0x4a4u, cpu->r[0]);
    }
L_000e8078:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000e807c:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x4a4u);
    }
L_000e8080:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x490u);
    }
L_000e8084:;
    {
        cpu->r[14] = 0x000e8088u; fn_000fd248(cpu);
    }
L_000e8088:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_000e808c:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000e8090:;
    {
        cpu->r[14] = 0x000e8094u; fn_00096b6c(cpu);
    }
L_000e8094:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e8098:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7adc;
        }
    }
L_000e809c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_000e80a0:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000e80a4:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000e80a8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4a4u);
    }
L_000e80ac:;
    {
        cpu->r[14] = 0x000e80b0u; fn_00099454(cpu);
    }
L_000e80b0:;
    {
        goto L_000e7adc;
    }
L_000e80b4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000e80b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[9], 0x00000024u, 0, 0);
    }
L_000e80bc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_000e80c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], 0x00000030u, 0, 0);
    }
L_000e80c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_000e80c8:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[0]);
    }
L_000e80cc:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000030u, 0, 0);
    }
L_000e80d0:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[12]);
    }
L_000e80d4:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[14]);
    }
L_000e80d8:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[1]);
    }
L_000e80dc:;
    {
        goto L_000e7940;
    }
L_000e80e0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_000e80e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], 0x00000030u, 0, 0);
    }
L_000e80e8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_000e80ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x0000003cu, 0, 0);
    }
L_000e80f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_000e80f4:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[2]);
    }
L_000e80f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000003cu, 0, 0);
    }
L_000e80fc:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[0]);
    }
L_000e8100:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[1]);
    }
L_000e8104:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[3]);
    }
L_000e8108:;
    {
        goto L_000e7940;
    }
L_000e810c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000e8110:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e7adc;
        }
    }
L_000e8114:;
    {
        goto L_000e800c;
    }
L_000e8118:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_000e811c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000e8120:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000e8124:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000e8128:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_000e812c:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000e8130:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_000e8134:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4a0u);
    }
L_000e8138:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000e813c:;
    {
        cpu->r[14] = 0x000e8140u; fn_000fd224(cpu);
    }
L_000e8140:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000e8144:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000e8148:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e7ffc;
        }
    }
L_000e814c:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000e8150:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000e8154:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000e8158:;
    {
        cpu->r[1] = 0x00000091u;
    }
L_000e815c:;
    {
        wr32(cpu->r[0] + + 0x4a0u, cpu->r[1]);
    }
L_000e8160:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000e8164:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4a0u);
    }
L_000e8168:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000e816c:;
    {
        cpu->r[14] = 0x000e8170u; fn_000fd248(cpu);
    }
L_000e8170:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000e8174:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000e8178:;
    {
        cpu->r[14] = 0x000e817cu; fn_00096b6c(cpu);
    }
L_000e817c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000e8180:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e8184:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7ffc;
        }
    }
L_000e8188:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000e818c:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000e8190:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4a0u);
    }
L_000e8194:;
    {
        cpu->r[14] = 0x000e8198u; fn_00099454(cpu);
    }
L_000e8198:;
    {
        goto L_000e7ffc;
    }
L_000e819c:;
    {
        cpu->r[1] = rd32(0x000e81a4u + + 0x94u);
    }
L_000e81a0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e81a4:;
    {
        cpu->r[12] = rd32(0x000e81acu + + 0x90u);
    }
L_000e81a8:;
    {
        cpu->r[14] = 0x00000066u;
    }
L_000e81ac:;
    {
        cpu->r[2] = rd32(0x000e81b4u + + 0x8cu);
    }
L_000e81b0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e81b8u, cpu->r[1], 0, 0);
    }
L_000e81b4:;
    {
        cpu->r[3] = rd32(0x000e81bcu + + 0x88u);
    }
L_000e81b8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e81c0u, cpu->r[12], 0, 0);
    }
L_000e81bc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e81c4u, cpu->r[2], 0, 0);
    }
L_000e81c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000040u, 0, 0);
    }
L_000e81c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e81ccu, cpu->r[3], 0, 0);
    }
L_000e81c8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e81cc:;
    {
        cpu->r[14] = 0x000e81d0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e81d0:;
    {
        goto L_000e74d4;
    }
L_000e81d4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_000e81d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_000e81dc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000e81e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001000u, 0, 0);
    }
L_000e81e4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_000e81e8:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_000e81ec:;
    {
        goto L_000e7cd4;
    }
L_000e8248:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_000e824c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000e8250:;
    {
        cpu->r[1] = 0x0000008du;
    }
L_000e8254:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000e8258:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000e825c:;
    {
        wr32(cpu->r[0] + + 0x4a0u, cpu->r[1]);
    }
L_000e8260:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e8264:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4a0u);
    }
L_000e8268:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000e826c:;
    {
        cpu->r[14] = 0x000e8270u; fn_000fd248(cpu);
    }
L_000e8270:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x54u);
    }
L_000e8274:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000e8278:;
    {
        cpu->r[14] = 0x000e827cu; fn_00096b6c(cpu);
    }
L_000e827c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e8280:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7ffc;
        }
    }
L_000e8284:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_000e8288:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000e828c:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000e8290:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4a0u);
    }
L_000e8294:;
    {
        cpu->r[14] = 0x000e8298u; fn_00099454(cpu);
    }
L_000e8298:;
    {
        goto L_000e7ffc;
    }
L_000e829c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_000e82a0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000e82a4:;
    {
        cpu->r[1] = 0x0000008du;
    }
L_000e82a8:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000e82ac:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000e82b0:;
    {
        wr32(cpu->r[0] + + 0x4a0u, cpu->r[1]);
    }
L_000e82b4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e82b8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4a0u);
    }
L_000e82bc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000e82c0:;
    {
        cpu->r[14] = 0x000e82c4u; fn_000fd248(cpu);
    }
L_000e82c4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x54u);
    }
L_000e82c8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000e82cc:;
    {
        cpu->r[14] = 0x000e82d0u; fn_00096b6c(cpu);
    }
L_000e82d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e82d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e7e04;
        }
    }
L_000e82d8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_000e82dc:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000e82e0:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000e82e4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4a0u);
    }
L_000e82e8:;
    {
        cpu->r[14] = 0x000e82ecu; fn_00099454(cpu);
    }
L_000e82ec:;
    {
        goto L_000e7e04;
    }
}

/* _ZN5Scene17RenderTrafficCarsEv @ 000e82f0 (arm) */
void fn_000e82f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e82f0:;
    {
        cpu->r[3] = 0x000082a0u;
    }
L_000e82f4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e82f8:;
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
L_000e82fc:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000e8300:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e8304:;
    {
        cpu->r[8] = rd32(0x000e830cu + + 0x1a8u);
    }
L_000e8308:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_000e830c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e8310:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000e8314:;
    {
        cpu->r[8] = add_flags(cpu, 0x000e831cu, cpu->r[8], 0, 0);
    }
L_000e8318:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e8328;
        }
    }
L_000e831c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_000e8320:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000e8324:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e8328u)) return;
    }
L_000e8328:;
    {
        cpu->r[3] = 0x00008444u;
    }
L_000e832c:;
    {
        cpu->r[0] = rd32(0x000e8334u + + 0x184u);
    }
L_000e8330:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8334:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e8338:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000e833c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e8340:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000e8344:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e8348:;
    {
        cpu->r[14] = 0x000e8350u;
    }
L_000e834c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000e8350u)) return;
    }
L_000e8350:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e8354:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_000e8358:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000e835c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000e8360:;
    {
        cpu->r[14] = 0x000e8364u; fn_0012e19c(cpu);
    }
L_000e8364:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e8368:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e836c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e8370:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e8374:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e831c;
        }
    }
L_000e8378:;
    {
        cpu->r[3] = rd32(0x000e8380u + + 0x13cu);
    }
L_000e837c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000e8380:;
    {
        cpu->r[5] = cpu->r[7];
    }
L_000e8384:;
    {
        cpu->r[10] = rd32(0x000e838cu + + 0x134u);
    }
L_000e8388:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e8390u, cpu->r[3], 0, 0);
    }
L_000e838c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_000e8390:;
    {
        cpu->r[3] = rd32(0x000e8398u + + 0x12cu);
    }
L_000e8394:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e839cu, cpu->r[3], 0, 0);
    }
L_000e8398:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_000e839c:;
    {
        cpu->r[3] = rd32(0x000e83a4u + + 0x124u);
    }
L_000e83a0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e83a8u, cpu->r[3], 0, 0);
    }
L_000e83a4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_000e83a8:;
    {
        cpu->r[3] = rd32(0x000e83b0u + + 0x11cu);
    }
L_000e83ac:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e83b4u, cpu->r[3], 0, 0);
    }
L_000e83b0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_000e83b4:;
    {
        goto L_000e8408;
    }
L_000e83b8:;
    {
        cpu->r[3] = 0x000082c0u;
    }
L_000e83bc:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[9] = v;
    }
L_000e83c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e83c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e83c8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000e83cc:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x178u);
    }
L_000e83d0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e83d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e83ec;
        }
    }
L_000e83d8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x188u);
    }
L_000e83dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e83e4u + + 0xccu);
    }
L_000e83e0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000e83e4:;
    {
        vfp_sync_flags(cpu);
    }
L_000e83e8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000e8528;
        }
    }
L_000e83ec:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e83f0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000e83f4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e83f8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000680u, 0, 0);
    }
L_000e83fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e8400:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e8404:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000e831c;
        }
    }
L_000e8408:;
    {
        cpu->r[6] = 0x000082a8u;
    }
L_000e840c:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000e8410:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000e8414:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000e8418:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x674u);
    }
L_000e841c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e8420:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e8484;
        }
    }
L_000e8424:;
    {
        cpu->r[2] = 0x000082a4u;
    }
L_000e8428:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e842c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000e8430:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000e8434:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e8478;
        }
    }
L_000e8438:;
    {
        cpu->r[1] = rd32(0x000e8440u + + 0x90u);
    }
L_000e843c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e8440:;
    {
        cpu->r[2] = rd32(0x000e8448u + + 0x8cu);
    }
L_000e8444:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000e8448:;
    {
        cpu->r[3] = rd32(0x000e8450u + + 0x88u);
    }
L_000e844c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e8454u, cpu->r[1], 0, 0);
    }
L_000e8450:;
    {
        cpu->r[12] = rd32(0x000e8458u + + 0x84u);
    }
L_000e8454:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e845cu, cpu->r[2], 0, 0);
    }
L_000e8458:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e8460u, cpu->r[3], 0, 0);
    }
L_000e845c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e8460:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e8468u, cpu->r[12], 0, 0);
    }
L_000e8464:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e8468:;
    {
        cpu->r[14] = 0x000e846cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e846c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000e8470:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000e8474:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x674u);
    }
L_000e8478:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x2u);
    }
L_000e847c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000040u; set_nz(cpu, v); }
    }
L_000e8480:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e83ec;
        }
    }
L_000e8484:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_000e8488:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000e848c:;
    {
        cpu->r[14] = 0x000e8490u; fn_00096b88(cpu);
    }
L_000e8490:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e8494:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e83b8;
        }
    }
L_000e8498:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_000e849c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_000e84a0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000e84a4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000e84a8:;
    {
        cpu->r[14] = 0x000e84acu; fn_0009957c(cpu);
    }
L_000e84ac:;
    {
        goto L_000e83b8;
    }
L_000e8528:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e852c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8530:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e8534:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000e8538:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e8570;
        }
    }
L_000e853c:;
    {
        cpu->r[1] = rd32(0x000e8544u + - 0x64u);
    }
L_000e8540:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e8544:;
    {
        cpu->r[2] = rd32(0x000e854cu + - 0x68u);
    }
L_000e8548:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000e854c:;
    {
        cpu->r[3] = rd32(0x000e8554u + - 0x6cu);
    }
L_000e8550:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e8558u, cpu->r[1], 0, 0);
    }
L_000e8554:;
    {
        cpu->r[12] = rd32(0x000e855cu + - 0x70u);
    }
L_000e8558:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e8560u, cpu->r[2], 0, 0);
    }
L_000e855c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e8564u, cpu->r[3], 0, 0);
    }
L_000e8560:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e8564:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e856cu, cpu->r[12], 0, 0);
    }
L_000e8568:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e856c:;
    {
        cpu->r[14] = 0x000e8570u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e8570:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000e8574:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8578:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e857c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000e8580:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x62cu);
    }
L_000e8584:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000e8588:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e83ec;
        }
    }
L_000e858c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e8590:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_000e8594:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000e8598:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000e859c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e85a0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000e85a4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e85a8:;
    {
        cpu->r[14] = 0x000e85b0u;
    }
L_000e85ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000e85b0u)) return;
    }
L_000e85b0:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000e85b4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e85b8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e85bc:;
    {
        cpu->r[14] = 0x000e85c0u; fn_00096b6c(cpu);
    }
L_000e85c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e85c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e898c;
        }
    }
L_000e85c8:;
    {
        cpu->r[6] = 0x00001c90u;
    }
L_000e85cc:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000e85d0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000e85d4:;
    {
        cpu->r[14] = 0x000e85d8u; fn_00096b88(cpu);
    }
L_000e85d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e85dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e8604;
        }
    }
L_000e85e0:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_000e85e4:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_000e85e8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000e85ec:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000e85f0:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000e85f4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000e85f8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e85fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e8600:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e8a10;
        }
    }
L_000e8604:;
    {
        cpu->r[6] = 0x000082a4u;
    }
L_000e8608:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000e860c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000e8610:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000e8614:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e863c;
        }
    }
L_000e8618:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_000e861c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e8620:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000e8624:;
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
L_000e8628:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e862c:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000e8630:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000e8634:;
    {
        cpu->r[14] = 0x000e8638u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e8638:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000e863c:;
    {
        cpu->r[2] = 0x000082a8u;
    }
L_000e8640:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e8644:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000e8648:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_000e864c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x674u);
    }
L_000e8650:;
    {
        cpu->r[11] = rd8(cpu->r[2] + + 0x1u);
    }
L_000e8654:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000e8658:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e8938;
        }
    }
L_000e865c:;
    {
        cpu->r[2] = rd32(0x000e8664u + - 0x174u);
    }
L_000e8660:;
    {
        cpu->r[6] = 0x000082a8u;
    }
L_000e8664:;
    {
        cpu->r[14] = rd32(0x000e866cu + - 0x178u);
    }
L_000e8668:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 1u, &shc); cpu->r[12] = v;
    }
L_000e866c:;
    {
        cpu->r[0] = rd32(0x000e8674u + - 0x17cu);
    }
L_000e8670:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000e8674:;
    {
        cpu->r[1] = rd32(0x000e867cu + - 0x180u);
    }
L_000e8678:;
    {
        cpu->r[14] = add_flags(cpu, 0x000e8680u, cpu->r[14], 0, 0);
    }
L_000e867c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000e8680:;
    {
        cpu->r[0] = add_flags(cpu, 0x000e8688u, cpu->r[0], 0, 0);
    }
L_000e8684:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_000e8688:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e8690u, cpu->r[1], 0, 0);
    }
L_000e868c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_000e8690:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e8694:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000e8698:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_000e869c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e86a0:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000e86a8u + - 0x188u);
    }
L_000e86a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000e86a8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e86ac:;
    {
        cpu->r[14] = add_flags(cpu, 0x000e86b4u, cpu->r[14], 0, 0);
    }
L_000e86b0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_000e86b4:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000e86b8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_000e86bc:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000e86c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000e86c4:;
    {
        cpu->r[14] = 0x000e86c8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e86c8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_000e86cc:;
    {
        cpu->r[12] = 0x000082a4u;
    }
L_000e86d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000e86d4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000e86d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], cpu->r[11], 0, 0);
    }
L_000e86dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000e86e0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_000e86e4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000e86e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000e86ec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000e86f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000560u, 0, 0);
    }
L_000e86f4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000e86f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000e86fc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000e8700:;
    {
        vfp_vdiv(cpu, 16, 15, 17);
    }
L_000e8704:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e896c;
        }
    }
L_000e8708:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e870c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e8710:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000e8714:;
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
L_000e8718:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000e871c:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000e8720:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000e8724:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e8728:;
    {
        cpu->r[14] = 0x000e872cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e872c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e8730:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000e8734:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000e8738:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000e873c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000e8740:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000e8744:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_000e8748:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000570u, 0, 0);
    }
L_000e874c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000e8750:;
    {
        vfp_vdiv(cpu, 17, 15, 17);
    }
L_000e8754:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e8780;
        }
    }
L_000e8758:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e875c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e8760:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e8764:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000e8768:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e876c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000e8770:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e8774:;
    {
        cpu->r[14] = 0x000e8778u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e8778:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000e877c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000e8780:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000e8784:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e878cu + - 0x26cu);
    }
L_000e8788:;
    {
        cpu->r[6] = 0x00001c90u;
    }
L_000e878c:;
    {
        cpu->r[2] = rd32(0x000e8794u + - 0x294u);
    }
L_000e8790:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_000e8794:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000e8798:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_000e879c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_000e87a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000570u, 0, 0);
    }
L_000e87a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000e87a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000e87ac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000e87b0:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000e87b4:;
    {
        cpu->r[3] = rd32(0x000e87bcu + - 0x2b8u);
    }
L_000e87b8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000e87c0u + - 0x29cu);
    }
L_000e87bc:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000e87c0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e87c4:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000e87c8:;
    {
        cpu->r[3] = rd32(0x000e87d0u + - 0x2c8u);
    }
L_000e87cc:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e87d0:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000e87d4:;
    {
        cpu->r[3] = rd32(0x000e87dcu + - 0x2d0u);
    }
L_000e87d8:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e87dc:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e87e0:;
    {
        cpu->r[14] = 0x000e87e4u; fn_00096b88(cpu);
    }
L_000e87e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e87e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e887c;
        }
    }
L_000e87ec:;
    {
        cpu->r[3] = 0x000082c0u;
    }
L_000e87f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000e87f4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e87f8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000e87fc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000e8800:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e8804:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000e8808:;
    {
        cpu->r[14] = 0x000e880cu; fn_00099548(cpu);
    }
L_000e880c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_000e8810:;
    {
        cpu->r[1] = 0x0000021cu;
    }
L_000e8814:;
    {
        cpu->r[3] = 0x00006667u;
    }
L_000e8818:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6666u << 16);
    }
L_000e881c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000e8820:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x418u);
    }
L_000e8824:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_000e8828:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[1] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000e882c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000e8830:;
    {
        cpu->r[1] = 0x00008001u;
    }
L_000e8834:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[3], 1, 6u, &shc), cpu->r[2], 1, 0);
    }
L_000e8838:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_000e883c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000e8840:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e8844:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e8848:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e884c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000e8850:;
    {
        cpu->r[14] = 0x000e8854u; fn_000afdd8(cpu);
    }
L_000e8854:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e8858:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[14]);
    }
L_000e885c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000e8860:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000e8864:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e8868:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000e886c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e8870:;
    {
        cpu->r[14] = 0x000e8878u;
    }
L_000e8874:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000e8878u)) return;
    }
L_000e8878:;
    {
        goto L_000e83ec;
    }
L_000e887c:;
    {
        cpu->r[2] = 0x000082a4u;
    }
L_000e8880:;
    {
        cpu->r[3] = 0x000082c0u;
    }
L_000e8884:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e8888:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e888c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000e8890:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e8894:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000e8898:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000e889c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e88d4;
        }
    }
L_000e88a0:;
    {
        cpu->r[1] = rd32(0x000e88a8u + - 0x398u);
    }
L_000e88a4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e88a8:;
    {
        cpu->r[2] = rd32(0x000e88b0u + - 0x39cu);
    }
L_000e88ac:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000e88b0:;
    {
        cpu->r[3] = rd32(0x000e88b8u + - 0x3a0u);
    }
L_000e88b4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e88bcu, cpu->r[1], 0, 0);
    }
L_000e88b8:;
    {
        cpu->r[12] = rd32(0x000e88c0u + - 0x3a4u);
    }
L_000e88bc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e88c4u, cpu->r[2], 0, 0);
    }
L_000e88c0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e88c8u, cpu->r[3], 0, 0);
    }
L_000e88c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e88c8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e88d0u, cpu->r[12], 0, 0);
    }
L_000e88cc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e88d0:;
    {
        cpu->r[14] = 0x000e88d4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e88d4:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_000e88d8:;
    {
        cpu->r[12] = 0x0000021cu;
    }
L_000e88dc:;
    {
        cpu->r[3] = 0x00006667u;
    }
L_000e88e0:;
    {
        cpu->r[1] = 0x000082a8u;
    }
L_000e88e4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6666u << 16);
    }
L_000e88e8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000e88ec:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000e88f0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e88f4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000e88f8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x418u);
    }
L_000e88fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_000e8900:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x674u);
    }
L_000e8904:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2]; cpu->r[2] = v;
    }
L_000e8908:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0x2u);
    }
L_000e890c:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_000e8910:;
    {
        cpu->r[1] = 0x00008001u;
    }
L_000e8914:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000e8918:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[12] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000e891c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000e8920:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[3], 1, 6u, &shc), cpu->r[2], 1, 0);
    }
L_000e8924:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_000e8928:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000e892c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e8930:;
    {
        cpu->r[14] = 0x000e8934u; fn_000afdd8(cpu);
    }
L_000e8934:;
    {
        goto L_000e8854;
    }
L_000e8938:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000e893c:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 1u, &shc); cpu->r[0] = v;
    }
L_000e8940:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8944:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_000e8948:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e8950u + + 0xe8u);
    }
L_000e894c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_000e8950:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e8954:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000e8958:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000e895c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000560u, 0, 0);
    }
L_000e8960:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000e8964:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000e8968:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_000e896c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000e8970:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e8978u + + 0xc0u);
    }
L_000e8974:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[11], 0, 0);
    }
L_000e8978:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000e897c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000570u, 0, 0);
    }
L_000e8980:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000e8984:;
    {
        vfp_vdiv(cpu, 17, 14, 15);
    }
L_000e8988:;
    {
        goto L_000e8780;
    }
L_000e898c:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e8990:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8994:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e8998:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000e899c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e89d4;
        }
    }
L_000e89a0:;
    {
        cpu->r[1] = rd32(0x000e89a8u + + 0x94u);
    }
L_000e89a4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e89a8:;
    {
        cpu->r[2] = rd32(0x000e89b0u + + 0x90u);
    }
L_000e89ac:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000e89b0:;
    {
        cpu->r[3] = rd32(0x000e89b8u + + 0x8cu);
    }
L_000e89b4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e89bcu, cpu->r[1], 0, 0);
    }
L_000e89b8:;
    {
        cpu->r[12] = rd32(0x000e89c0u + + 0x88u);
    }
L_000e89bc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e89c4u, cpu->r[2], 0, 0);
    }
L_000e89c0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e89c8u, cpu->r[3], 0, 0);
    }
L_000e89c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e89c8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e89d0u, cpu->r[12], 0, 0);
    }
L_000e89cc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e89d0:;
    {
        cpu->r[14] = 0x000e89d4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e89d4:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000e89d8:;
    {
        cpu->r[0] = 0x00001c90u;
    }
L_000e89dc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e89e0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000e89e4:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000e89e8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000e89ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e89f0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000e89f4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000e89f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000e89fc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x674u);
    }
L_000e8a00:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x1u);
    }
L_000e8a04:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e8a08:;
    {
        cpu->r[14] = 0x000e8a0cu; fn_0009962c(cpu);
    }
L_000e8a0c:;
    {
        goto L_000e85c8;
    }
L_000e8a10:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000e8a14:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000e8a18:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000e8a1c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000e8a20:;
    {
        cpu->r[14] = 0x000e8a24u; fn_000994e0(cpu);
    }
L_000e8a24:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e8a28:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8a2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e8a30:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000e8a34:;
    {
        goto L_000e8654;
    }
}

/* _ZN5Scene12TraficDeinitEv @ 000e8a4c (arm) */
void fn_000e8a4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e8a4c:;
    {
        cpu->r[3] = 0x000082a0u;
    }
L_000e8a50:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8a54:;
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
L_000e8a58:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e8a5c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000e8a60:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000e8a64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e8a68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e8b5c;
        }
    }
L_000e8a6c:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e8a70:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8a74:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e8a78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e8a7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e8b00;
        }
    }
L_000e8a80:;
    {
        cpu->r[8] = rd32(0x000e8a88u + + 0xdcu);
    }
L_000e8a84:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000e8a88:;
    {
        cpu->r[10] = rd32(0x000e8a90u + + 0xd8u);
    }
L_000e8a8c:;
    {
        cpu->r[7] = 0x000082a8u;
    }
L_000e8a90:;
    {
        cpu->r[9] = rd32(0x000e8a98u + + 0xd4u);
    }
L_000e8a94:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000e8a98:;
    {
        cpu->r[11] = rd32(0x000e8aa0u + + 0xd0u);
    }
L_000e8a9c:;
    {
        cpu->r[8] = add_flags(cpu, 0x000e8aa4u, cpu->r[8], 0, 0);
    }
L_000e8aa0:;
    {
        cpu->r[10] = add_flags(cpu, 0x000e8aa8u, cpu->r[10], 0, 0);
    }
L_000e8aa4:;
    {
        cpu->r[9] = add_flags(cpu, 0x000e8aacu, cpu->r[9], 0, 0);
    }
L_000e8aa8:;
    {
        cpu->r[11] = add_flags(cpu, 0x000e8ab0u, cpu->r[11], 0, 0);
    }
L_000e8aac:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_000e8ab0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000e8ab4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e8ab8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_000e8abc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000680u, 0, 0);
    }
L_000e8ac0:;
    {
        cpu->r[14] = 0x000e8ac4u; fn_001735fc(cpu);
    }
L_000e8ac4:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e8ac8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8acc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000e8ad0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000e8ad4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000e8b00;
        }
    }
L_000e8ad8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000e8adc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000e8ab0;
        }
    }
L_000e8ae0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000e8ae4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000e8ae8:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000e8aec:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e8af0:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000e8af4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000e8af8:;
    {
        cpu->r[14] = 0x000e8afcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e8afc:;
    {
        goto L_000e8ab0;
    }
L_000e8b00:;
    {
        cpu->r[4] = 0x000082b0u;
    }
L_000e8b04:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000e8b08:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_000e8b0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e8b10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e8b20;
        }
    }
L_000e8b14:;
    {
        cpu->r[14] = 0x000e8b18u; fn_0018ba60(cpu);
    }
L_000e8b18:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e8b1c:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[3]);
    }
L_000e8b20:;
    {
        cpu->r[4] = 0x000082b8u;
    }
L_000e8b24:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000e8b28:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000e8b2c:;
    {
        cpu->r[3] = 0x000082acu;
    }
L_000e8b30:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8b34:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_000e8b38:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[5]);
    }
L_000e8b3c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_000e8b40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e8b4c;
        }
    }
L_000e8b44:;
    {
        cpu->r[14] = 0x000e8b48u; fn_0018ba60(cpu);
    }
L_000e8b48:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[5]);
    }
L_000e8b4c:;
    {
        cpu->r[3] = 0x000082b4u;
    }
L_000e8b50:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000e8b54:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8b58:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_000e8b5c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000e8b60:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e8b64u)) return;
    }
}

/* _ZN5Scene10TraficInitEb @ 000e8b74 (arm) */
void fn_000e8b74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e8b74:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e8b78:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8b7c:;
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
L_000e8b80:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000e8b84:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e8b88:;
    {
        cpu->r[3] = 0x000010d0u;
    }
L_000e8b8c:;
    {
        cpu->r[4] = rd32(0x000e8b94u + + 0x99cu);
    }
L_000e8b90:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000012cu, 1, 0);
    }
L_000e8b94:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000e8b98:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e8b9c:;
    {
        cpu->r[4] = add_flags(cpu, 0x000e8ba4u, cpu->r[4], 0, 0);
    }
L_000e8ba0:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_000e8ba4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000e8ba8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e93e0;
        }
    }
L_000e8bac:;
    {
        cpu->r[10] = rd32(0x000e8bb4u + + 0x980u);
    }
L_000e8bb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000e8bb4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e8bb8:;
    {
        cpu->r[9] = rd8(cpu->r[3] + + 0x41du);
    }
L_000e8bbc:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000e8bc0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e93e0;
        }
    }
L_000e8bc4:;
    {
        cpu->r[7] = 0x000082a0u;
    }
L_000e8bc8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000e8bcc:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000e8bd0:;
    {
        cpu->r[0] = 0x0000001bu;
    }
L_000e8bd4:;
    {
        cpu->r[5] = 0x0000829cu;
    }
L_000e8bd8:;
    {
        wr32(cpu->r[6] + cpu->r[7], cpu->r[3]);
    }
L_000e8bdc:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000e8be0:;
    {
        cpu->r[14] = 0x000e8be4u; fn_00093f34(cpu);
    }
L_000e8be4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000e8be8:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000e8bec:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000e8bf0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000e8bf4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000e8bf8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000e8bfc:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000e8c00:;
    {
        wr32(cpu->r[6] + cpu->r[7], cpu->r[3]);
    }
L_000e8c04:;
    {
        wr32(cpu->r[6] + cpu->r[5], cpu->r[0]);
    }
L_000e8c08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e9464;
        }
    }
L_000e8c0c:;
    {
        cpu->r[7] = 0x000082a8u;
    }
L_000e8c10:;
    {
        cpu->r[2] = 0x0000829cu;
    }
L_000e8c14:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000e8c18:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e8c1c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000e8c20:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000e8c24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e8c28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e8c80;
        }
    }
L_000e8c2c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x4u);
    }
L_000e8c30:;
    {
        cpu->r[0] = 0x00000680u;
    }
L_000e8c34:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[3]; cpu->r[0] = v;
    }
L_000e8c38:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000e8c3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e8c48;
        }
    }
L_000e8c40:;
    {
        goto L_000e8c68;
    }
L_000e8c44:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e8c48:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000680u, 1, 0);
    }
L_000e8c4c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + - 0x680u);
    }
L_000e8c50:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e8c54:;
    {
        cpu->r[14] = 0x000e8c5cu;
    }
L_000e8c58:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000e8c5cu)) return;
    }
L_000e8c5c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000e8c60:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_000e8c64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e8c44;
        }
    }
L_000e8c68:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_000e8c6c:;
    {
        cpu->r[14] = 0x000e8c70u; fn_0018ba60(cpu);
    }
L_000e8c70:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000e8c74:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8c78:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000e8c7c:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_000e8c80:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e8c84:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000e8c88:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8c8c:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[8]);
    }
L_000e8c90:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e8ce4;
        }
    }
L_000e8c94:;
    {
        cpu->r[0] = 0x000000d0u;
    }
L_000e8c98:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000e8c9c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[8]; cpu->r[0] = v;
    }
L_000e8ca0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000e8ca4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_000e8ca8:;
    {
        cpu->r[14] = 0x000e8cacu; imp__Znaj(cpu); /* _Znaj */
    }
L_000e8cac:;
    {
        cpu->r[3] = 0x00000680u;
    }
L_000e8cb0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_000e8cb4:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000e8cb8:;
    {
        cpu->r[5] = cpu->r[9];
    }
L_000e8cbc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[8]);
    }
L_000e8cc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e8cc4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000e8cc8:;
    {
        cpu->r[14] = 0x000e8cccu; fn_00184cdc(cpu);
    }
L_000e8ccc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 1);
    }
L_000e8cd0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000680u, 0, 0);
    }
L_000e8cd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e8cc0;
        }
    }
L_000e8cd8:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000e8cdc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8ce0:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[9]);
    }
L_000e8ce4:;
    {
        cpu->r[14] = 0x000e8ce8u; fn_00096590(cpu);
    }
L_000e8ce8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000e8cec:;
    {
        cpu->r[3] = 0x000082d0u;
    }
L_000e8cf0:;
    {
        cpu->r[2] = 0x000082c8u;
    }
L_000e8cf4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e8cf8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8cfc:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000e8d00:;
    {
        cpu->r[12] = 0x0000003cu;
    }
L_000e8d04:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[12]);
    }
L_000e8d08:;
    {
        cpu->r[5] = 0x000082b0u;
    }
L_000e8d0c:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000e8d10:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000e8d14:;
    {
        cpu->r[7] = 0x000082ccu;
    }
L_000e8d18:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000e8d1c:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[0]);
    }
L_000e8d20:;
    {
        cpu->r[0] = 0x00007100u;
    }
L_000e8d24:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x418u);
    }
L_000e8d28:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_000e8d2c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0002u << 16);
    }
L_000e8d30:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_000e8d34:;
    {
        cpu->r[14] = 0x000e8d38u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000e8d38:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000e8d3c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e8d40:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000e8d44:;
    {
        cpu->r[3] = 0x000082d4u;
    }
L_000e8d48:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000e8d4c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8d50:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 1);
    }
L_000e8d54:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[8]);
    }
L_000e8d58:;
    {
        wr32(cpu->r[6] + cpu->r[7], cpu->r[0]);
    }
L_000e8d5c:;
    {
        cpu->r[7] = rd32(cpu->r[2] + + 0x1cu);
    }
L_000e8d60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e8d70;
        }
    }
L_000e8d64:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000e8d68:;
    {
        cpu->r[14] = 0x000e8d6cu; fn_0018ba60(cpu);
    }
L_000e8d6c:;
    {
        wr32(cpu->r[6] + cpu->r[5], cpu->r[8]);
    }
L_000e8d70:;
    {
        cpu->r[3] = 0x000082acu;
    }
L_000e8d74:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000e8d78:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8d7c:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[7]);
    }
L_000e8d80:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e8de8;
        }
    }
L_000e8d84:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_000e8d88:;
    {
        uint32_t v = cpu->r[0] * cpu->r[7]; cpu->r[0] = v;
    }
L_000e8d8c:;
    {
        cpu->r[14] = 0x000e8d90u; imp__Znaj(cpu); /* _Znaj */
    }
L_000e8d90:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000e8d94:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000e8d98:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000e8d9c:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x4u);
    }
L_000e8da0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000e8da4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_000e8da8:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_000e8dac:;
    {
        uint32_t v = cpu->r[12] & 0x000000e0u; cpu->r[12] = v;
    }
L_000e8db0:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[2]);
    }
L_000e8db4:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_000e8db8:;
    {
        cpu->r[12] = cpu->r[12] & ~0xe0u;
    }
L_000e8dbc:;
    {
        wr8(cpu->r[3] + + 0x3u, cpu->r[2]);
    }
L_000e8dc0:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[12]);
    }
L_000e8dc4:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[2]);
    }
L_000e8dc8:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_000e8dcc:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_000e8dd0:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_000e8dd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_000e8dd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e8d9c;
        }
    }
L_000e8ddc:;
    {
        cpu->r[3] = 0x000082b0u;
    }
L_000e8de0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8de4:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[0]);
    }
L_000e8de8:;
    {
        cpu->r[7] = 0x000082b8u;
    }
L_000e8dec:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e8df0:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000e8df4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8df8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000e8dfc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000e8e00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e8e04:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x1cu);
    }
L_000e8e08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e8e18;
        }
    }
L_000e8e0c:;
    {
        cpu->r[14] = 0x000e8e10u; fn_0018ba60(cpu);
    }
L_000e8e10:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e8e14:;
    {
        wr32(cpu->r[6] + cpu->r[7], cpu->r[3]);
    }
L_000e8e18:;
    {
        cpu->r[3] = 0x000082b4u;
    }
L_000e8e1c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e8e20:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8e24:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[5]);
    }
L_000e8e28:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e8e90;
        }
    }
L_000e8e2c:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_000e8e30:;
    {
        uint32_t v = cpu->r[0] * cpu->r[5]; cpu->r[0] = v;
    }
L_000e8e34:;
    {
        cpu->r[14] = 0x000e8e38u; imp__Znaj(cpu); /* _Znaj */
    }
L_000e8e38:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000e8e3c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000e8e40:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000e8e44:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x4u);
    }
L_000e8e48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000e8e4c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_000e8e50:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_000e8e54:;
    {
        uint32_t v = cpu->r[12] & 0x000000e0u; cpu->r[12] = v;
    }
L_000e8e58:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[2]);
    }
L_000e8e5c:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_000e8e60:;
    {
        cpu->r[12] = cpu->r[12] & ~0xe0u;
    }
L_000e8e64:;
    {
        wr8(cpu->r[3] + + 0x3u, cpu->r[2]);
    }
L_000e8e68:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[12]);
    }
L_000e8e6c:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[2]);
    }
L_000e8e70:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_000e8e74:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_000e8e78:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_000e8e7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_000e8e80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e8e44;
        }
    }
L_000e8e84:;
    {
        cpu->r[3] = 0x000082b8u;
    }
L_000e8e88:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8e8c:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[0]);
    }
L_000e8e90:;
    {
        cpu->r[12] = 0x000082acu;
    }
L_000e8e94:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000e8e98:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_000e8e9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e8ea0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e8ef8;
        }
    }
L_000e8ea4:;
    {
        cpu->r[3] = 0x000082b0u;
    }
L_000e8ea8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000e8eac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8eb0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000e8eb4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000e8eb8:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x4u);
    }
L_000e8ebc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000e8ec0:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_000e8ec4:;
    {
        uint32_t v = cpu->r[0] & 0x0000000fu; cpu->r[0] = v;
    }
L_000e8ec8:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_000e8ecc:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_000e8ed0:;
    {
        cpu->r[0] = (cpu->r[0] & ~0xfu) | ((cpu->r[2] & 0xfu) << 0);
    }
L_000e8ed4:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[2]);
    }
L_000e8ed8:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_000e8edc:;
    {
        wr8(cpu->r[3] + + 0x3u, cpu->r[2]);
    }
L_000e8ee0:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_000e8ee4:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[2]);
    }
L_000e8ee8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000018u;
        wr8(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000e8eec:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_000e8ef0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_000e8ef4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e8eb8;
        }
    }
L_000e8ef8:;
    {
        cpu->r[12] = 0x000082b4u;
    }
L_000e8efc:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000e8f00:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_000e8f04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e8f08:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e8f60;
        }
    }
L_000e8f0c:;
    {
        cpu->r[3] = 0x000082b8u;
    }
L_000e8f10:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000e8f14:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8f18:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000e8f1c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000e8f20:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x4u);
    }
L_000e8f24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000e8f28:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_000e8f2c:;
    {
        uint32_t v = cpu->r[0] & 0x0000000fu; cpu->r[0] = v;
    }
L_000e8f30:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_000e8f34:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_000e8f38:;
    {
        cpu->r[0] = (cpu->r[0] & ~0xfu) | ((cpu->r[2] & 0xfu) << 0);
    }
L_000e8f3c:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[2]);
    }
L_000e8f40:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_000e8f44:;
    {
        wr8(cpu->r[3] + + 0x3u, cpu->r[2]);
    }
L_000e8f48:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_000e8f4c:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[2]);
    }
L_000e8f50:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000018u;
        wr8(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000e8f54:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_000e8f58:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_000e8f5c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e8f20;
        }
    }
L_000e8f60:;
    {
        cpu->r[3] = rd32(0x000e8f68u + + 0x5d0u);
    }
L_000e8f64:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e8f68:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000e8f6c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000e8f70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e9420;
        }
    }
L_000e8f74:;
    {
        cpu->r[5] = rd32(0x000e8f7cu + + 0x5c0u);
    }
L_000e8f78:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000e8f7c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000e8f80:;
    {
        cpu->r[14] = 0x000e8f84u; fn_00189f5c(cpu);
    }
L_000e8f84:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e8f88:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e8f8c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000e8f90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e8f94:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_000e8f98:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e93d4;
        }
    }
L_000e8f9c:;
    {
        cpu->r[3] = rd32(0x000e8fa4u + + 0x59cu);
    }
L_000e8fa0:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000e8fa4:;
    {
        cpu->r[2] = rd32(0x000e8facu + + 0x598u);
    }
L_000e8fa8:;
    {
        cpu->r[7] = cpu->r[8];
    }
L_000e8fac:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e8fb4u, cpu->r[3], 0, 0);
    }
L_000e8fb0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_000e8fb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000050u, 0, 0);
    }
L_000e8fb8:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_000e8fbc:;
    {
        cpu->r[3] = rd32(0x000e8fc4u + + 0x584u);
    }
L_000e8fc0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e8fc8u, cpu->r[2], 0, 0);
    }
L_000e8fc4:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_000e8fc8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000114u, 0, 0);
    }
L_000e8fcc:;
    {
        cpu->r[2] = rd32(0x000e8fd4u + + 0x578u);
    }
L_000e8fd0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e8fd8u, cpu->r[3], 0, 0);
    }
L_000e8fd4:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[3]);
    }
L_000e8fd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000124u, 0, 0);
    }
L_000e8fdc:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_000e8fe0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000bcu, 0, 0);
    }
L_000e8fe4:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_000e8fe8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000124u, 0, 0);
    }
L_000e8fec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000010cu, 0, 0);
    }
L_000e8ff0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e8ff8u, cpu->r[2], 0, 0);
    }
L_000e8ff4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_000e8ff8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_000e8ffc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000011cu, 0, 0);
    }
L_000e9000:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_000e9004:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_000e9008:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000104u, 0, 0);
    }
L_000e900c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x000000fcu, 0, 0);
    }
L_000e9010:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000e9014:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_000e9018:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000120u, 0, 0);
    }
L_000e901c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_000e9020:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000f4u, 0, 0);
    }
L_000e9024:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_000e9028:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x000000d8u, 0, 0);
    }
L_000e902c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000e8u, 0, 0);
    }
L_000e9030:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[2]);
    }
L_000e9034:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000e9038:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_000e903c:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[12]);
    }
L_000e9040:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000e9044:;
    {
        cpu->r[0] = 0x000082a8u;
    }
L_000e9048:;
    {
        cpu->r[2] = 0x000082a4u;
    }
L_000e904c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000e9050:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e9054:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e9058:;
    {
        uint32_t v = cpu->r[7] & 0x00000001u; cpu->r[1] = v;
    }
L_000e905c:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[0]);
    }
L_000e9060:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[8], 0, 0);
    }
L_000e9064:;
    {
        wr32(cpu->r[5] + + 0x678u, cpu->r[3]);
    }
L_000e9068:;
    {
        wr32(cpu->r[5] + + 0x67cu, cpu->r[3]);
    }
L_000e906c:;
    {
        wr32(cpu->r[5] + + 0x62cu, cpu->r[3]);
    }
L_000e9070:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000e9074:;
    {
        wr32(cpu->r[5] + + 0x674u, cpu->r[3]);
    }
L_000e9078:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_000e907c:;
    {
        sub_flags(cpu, cpu->r[7], shifter(cpu->r[2], 1, 1u, &shc), 1, 1);
    }
L_000e9080:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e90b8;
        }
    }
L_000e9084:;
    {
        cpu->r[0] = 0x000082d4u;
    }
L_000e9088:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_000e908c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000e9090:;
    {
        wr32(cpu->r[5] + + 0x62cu, cpu->r[3]);
    }
L_000e9094:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_000e9098:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[0]);
    }
L_000e909c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e90a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000006u;
        }
    }
L_000e90a4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x62cu, cpu->r[2]);
        }
    }
L_000e90a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[0]);
        }
    }
L_000e90ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000e90b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000c00u;
        }
    }
L_000e90b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e90d4;
        }
    }
L_000e90b8:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_000e90bc:;
    {
        cpu->r[2] = 0x000082d4u;
    }
L_000e90c0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e90c4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000e90c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000e90cc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000e90d0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 10u, &shc); cpu->r[3] = v;
    }
L_000e90d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_000e90d8:;
    {
        wr32(cpu->r[5] + + 0x634u, cpu->r[3]);
    }
L_000e90dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000e90e0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000e90e4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[5] + + 0x62cu);
        }
    }
L_000e90e8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] | 0x00000002u; cpu->r[2] = v;
        }
    }
L_000e90ec:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x62cu, cpu->r[2]);
        }
    }
L_000e90f0:;
    {
        cpu->r[14] = 0x000e90f4u; fn_001897b4(cpu);
    }
L_000e90f4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e90f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e93fc;
        }
    }
L_000e90fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9100:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000e9104:;
    {
        cpu->r[14] = 0x000e9108u; fn_000fc5dc(cpu);
    }
L_000e9108:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000e910c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9110:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000e9114:;
    {
        cpu->r[14] = 0x000e9118u; fn_000fc650(cpu);
    }
L_000e9118:;
    {
        cpu->r[2] = 0x00001c90u;
    }
L_000e911c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e9120:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000e9124:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0x45cu);
    }
L_000e9128:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x460u);
    }
L_000e912c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 0);
    }
L_000e9130:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_000e9134:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000e9138:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_000e913c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 8u, &shc), 0, 0);
    }
L_000e9140:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 16u, &shc), 0, 0);
    }
L_000e9144:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000e9148:;
    {
        cpu->r[11] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_000e914c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e9150:;
    {
        cpu->r[14] = 0x000e9154u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000e9154:;
    {
        cpu->r[0] = rd32(cpu->r[9] + + 0x4u);
    }
L_000e9158:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x54cu);
    }
L_000e915c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000e9160:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_000e9164:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9168:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[9], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000e916c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000e9170:;
    {
        cpu->r[12] = rd16(cpu->r[12] + + 0x8u);
    }
L_000e9174:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000e9178:;
    {
        wr16(cpu->r[14] + + 0x8u, cpu->r[12]);
    }
L_000e917c:;
    {
        cpu->r[14] = 0x000e9180u; fn_000fc5ec(cpu);
    }
L_000e9180:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9184:;
    {
        cpu->r[14] = 0x000e9188u; fn_000fc628(cpu);
    }
L_000e9188:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000e918c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9190:;
    {
        cpu->r[14] = 0x000e9194u; fn_000fc5dc(cpu);
    }
L_000e9194:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_000e9198:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e919c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000002u, 0, 0);
    }
L_000e91a0:;
    {
        cpu->r[2] = (uint32_t)((int32_t)(int16_t)(cpu->r[11] & 0xffff) * (int32_t)(int16_t)(cpu->r[2] & 0xffff));
    }
L_000e91a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], cpu->r[2], 0, 0);
    }
L_000e91a8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_000e91ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e91b0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000e91b4:;
    {
        cpu->r[14] = 0x000e91b8u; fn_000fc5ec(cpu);
    }
L_000e91b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e91bc:;
    {
        cpu->r[14] = 0x000e91c0u; fn_000fc678(cpu);
    }
L_000e91c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000e91c4:;
    {
        cpu->r[3] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_000e91c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e91cc:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000e91d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000e91d4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000e91d8:;
    {
        cpu->r[14] = 0x000e91dcu; fn_000fc5f4(cpu);
    }
L_000e91dc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000e91e0:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_000e91e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e91e8:;
    {
        cpu->r[14] = 0x000e91ecu; fn_000fc5f4(cpu);
    }
L_000e91ec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_000e91f0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000e91f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e91f8:;
    {
        cpu->r[14] = 0x000e91fcu; fn_000fc5f4(cpu);
    }
L_000e91fc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_000e9200:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_000e9204:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9208:;
    {
        cpu->r[14] = 0x000e920cu; fn_000fc5f4(cpu);
    }
L_000e920c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_000e9210:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000e9214:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9218:;
    {
        cpu->r[14] = 0x000e921cu; fn_000fc5f4(cpu);
    }
L_000e921c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000e9220:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_000e9224:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9228:;
    {
        cpu->r[14] = 0x000e922cu; fn_000fc5f4(cpu);
    }
L_000e922c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_000e9230:;
    {
        cpu->r[2] = 0x0000001au;
    }
L_000e9234:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9238:;
    {
        cpu->r[14] = 0x000e923cu; fn_000fc5f4(cpu);
    }
L_000e923c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e9240:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_000e9244:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9248:;
    {
        cpu->r[14] = 0x000e924cu; fn_000fc5f4(cpu);
    }
L_000e924c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_000e9250:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000e9254:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9258:;
    {
        cpu->r[14] = 0x000e925cu; fn_000fc5f4(cpu);
    }
L_000e925c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e9260:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_000e9264:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9268:;
    {
        cpu->r[14] = 0x000e926cu; fn_000fc5f4(cpu);
    }
L_000e926c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000540u, 0, 0);
    }
L_000e9270:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000e9274:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9278:;
    {
        cpu->r[14] = 0x000e927cu; fn_000fc5f4(cpu);
    }
L_000e927c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9280:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000e9284:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000e9288:;
    {
        wr8(cpu->r[13] + + 0x127u, cpu->r[10]);
    }
L_000e928c:;
    {
        cpu->r[14] = 0x000e9290u; fn_000fc5f4(cpu);
    }
L_000e9290:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x127u);
    }
L_000e9294:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000e9298:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e92ac;
        }
    }
L_000e929c:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[5] + + 0x53cu, cpu->r[10]);
        }
    }
L_000e92a0:;
    {
        if (cond_test(cpu, 4)) {
        goto L_000e92b0;
        }
    }
L_000e92a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000e92a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_000e92ac:;
    {
        wr32(cpu->r[5] + + 0x53cu, cpu->r[3]);
    }
L_000e92b0:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_000e92b4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_000e92b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e92bc:;
    {
        cpu->r[14] = 0x000e92c0u; fn_000fc5f4(cpu);
    }
L_000e92c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e92c4:;
    {
        cpu->r[14] = 0x000e92c8u; fn_000fc628(cpu);
    }
L_000e92c8:;
    {
        wr32(cpu->r[5] + + 0x564u, cpu->r[0]);
    }
L_000e92cc:;
    {
        cpu->r[14] = 0x000e92d0u; imp_lrand48(cpu); /* lrand48 */
    }
L_000e92d0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x564u);
    }
L_000e92d4:;
    {
        cpu->r[14] = 0x000e92d8u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000e92d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e92dc:;
    {
        wr32(cpu->r[5] + + 0x568u, cpu->r[1]);
    }
L_000e92e0:;
    {
        cpu->r[14] = 0x000e92e4u; fn_000fc628(cpu);
    }
L_000e92e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e92e8:;
    {
        cpu->r[14] = 0x000e92ecu; fn_000fc628(cpu);
    }
L_000e92ec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x564u);
    }
L_000e92f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e92f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e936c;
        }
    }
L_000e92f8:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_000e92fc:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_000e9300:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000e9308u + + 0x224u);
    }
L_000e9304:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9308:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000e930c:;
    {
        cpu->r[14] = 0x000e9310u; fn_000fc5fc(cpu);
    }
L_000e9310:;
    {
        wr32(cpu->r[9] + + 0x56cu, cpu->r[0]);
    }
L_000e9314:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9318:;
    {
        cpu->r[14] = 0x000e931cu; fn_000fc5fc(cpu);
    }
L_000e931c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000e9320:;
    {
        vfp_vmul(cpu, 15, 14, 16);
    }
L_000e9324:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9328:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e932c:;
    {
        wr32(cpu->r[9] + + 0x570u, cpu->r[1]);
    }
L_000e9330:;
    {
        cpu->r[14] = 0x000e9334u; fn_000fc5fc(cpu);
    }
L_000e9334:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000e9338:;
    {
        vfp_vmul(cpu, 15, 14, 16);
    }
L_000e933c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e9340:;
    {
        wr32(cpu->r[9] + + 0x574u, cpu->r[0]);
    }
L_000e9344:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000e9348:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e934c:;
    {
        cpu->r[14] = 0x000e9350u; fn_000fc5fc(cpu);
    }
L_000e9350:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000009u, 1, 1);
    }
L_000e9354:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e9344;
        }
    }
L_000e9358:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x564u);
    }
L_000e935c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_000e9360:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x0000000cu, 0, 0);
    }
L_000e9364:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_000e9368:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e9304;
        }
    }
L_000e936c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000e9370:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e9374:;
    {
        cpu->r[14] = 0x000e9378u; fn_001785fc(cpu);
    }
L_000e9378:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000e937c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000e9380:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000e9384:;
    {
        cpu->r[14] = 0x000e9388u; fn_00189870(cpu);
    }
L_000e9388:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e938c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e9390:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e9394:;
    {
        wr32(cpu->r[5] + + 0x670u, cpu->r[3]);
    }
L_000e9398:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000680u, 0, 0);
    }
L_000e939c:;
    {
        wr32(cpu->r[13] + + 0xf0u, cpu->r[3]);
    }
L_000e93a0:;
    {
        wr32(cpu->r[13] + + 0xe8u, cpu->r[3]);
    }
L_000e93a4:;
    {
        wr32(cpu->r[13] + + 0xecu, cpu->r[3]);
    }
L_000e93a8:;
    {
        cpu->r[14] = 0x000e93acu; fn_00173920(cpu);
    }
L_000e93ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e93b0:;
    {
        cpu->r[14] = 0x000e93b4u; fn_00184a0c(cpu);
    }
L_000e93b4:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e93b8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x62cu);
    }
L_000e93bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e93c0:;
    {
        uint32_t v = cpu->r[2] | 0x00000001u; cpu->r[2] = v;
    }
L_000e93c4:;
    {
        wr32(cpu->r[5] + + 0x62cu, cpu->r[2]);
    }
L_000e93c8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000e93cc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000e93d0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e9044;
        }
    }
L_000e93d4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e93d8:;
    {
        cpu->r[14] = 0x000e93dcu; fn_000e654c(cpu);
    }
L_000e93dc:;
    {
        goto L_000e93f0;
    }
L_000e93e0:;
    {
        cpu->r[3] = 0x000082a0u;
    }
L_000e93e4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000e93e8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e93ec:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_000e93f0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000012cu, 0, 0);
    }
L_000e93f4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000e93f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e93fcu)) return;
    }
L_000e93fc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_000e9400:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e9404:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_000e9408:;
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
L_000e940c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e9410:;
    {
        cpu->r[12] = 0x0000042au;
    }
L_000e9414:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000e9418:;
    {
        cpu->r[14] = 0x000e941cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e941c:;
    {
        goto L_000e90fc;
    }
L_000e9420:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e9424:;
    {
        cpu->r[14] = 0x000e9428u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000e9428:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e942c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e8f74;
        }
    }
L_000e9430:;
    {
        cpu->r[5] = rd32(0x000e9438u + + 0x104u);
    }
L_000e9434:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000e9438:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e943c:;
    {
        cpu->r[14] = 0x000e9440u; fn_00189f48(cpu);
    }
L_000e9440:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e9444:;
    {
        cpu->r[14] = 0x000e9448u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000e9448:;
    {
        cpu->r[3] = rd32(0x000e9450u + + 0x100u);
    }
L_000e944c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e9450:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e9454:;
    {
        cpu->r[3] = rd32(0x000e945cu + + 0xf8u);
    }
L_000e9458:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e945c:;
    {
        cpu->r[14] = 0x000e9460u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000e9460:;
    {
        goto L_000e8f78;
    }
L_000e9464:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000e9468:;
    {
        cpu->r[7] = 0x00000044u;
    }
L_000e946c:;
    {
        cpu->r[14] = 0x000e9470u; imp__Znaj(cpu); /* _Znaj */
    }
L_000e9470:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000e9474:;
    {
        cpu->r[3] = 0x000082c0u;
    }
L_000e9478:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e947c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[8]; cpu->r[2] = v;
    }
L_000e9480:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[0]);
    }
L_000e9484:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000e9488:;
    {
        cpu->r[14] = 0x000e948cu; imp__Znaj(cpu); /* _Znaj */
    }
L_000e948c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000e9490:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_000e9494:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_000e9498:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e94c0;
        }
    }
L_000e949c:;
    {
        cpu->r[5] = cpu->r[9];
    }
L_000e94a0:;
    {
        cpu->r[7] = cpu->r[11];
    }
L_000e94a4:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[9]);
    }
L_000e94a8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e94ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000e94b0:;
    {
        cpu->r[14] = 0x000e94b4u; fn_001535e0(cpu);
    }
L_000e94b4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 1);
    }
L_000e94b8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000044u, 0, 0);
    }
L_000e94bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e94a4;
        }
    }
L_000e94c0:;
    {
        cpu->r[2] = 0x0000829cu;
    }
L_000e94c4:;
    {
        cpu->r[3] = 0x000082c4u;
    }
L_000e94c8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e94cc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e94d0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000e94d4:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[11]);
    }
L_000e94d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e94dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e8c0c;
        }
    }
L_000e94e0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000e94e4:;
    {
        cpu->r[8] = 0x000082c0u;
    }
L_000e94e8:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000e94ec:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_000e94f0:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_000e94f4:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_000e94f8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000e94fc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000e9500:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000e9504:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[7], 2, 2u, &shc), cpu->r[9]);
    }
L_000e9508:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_000e950c:;
    {
        cpu->r[14] = 0x000e9510u; fn_001535e0(cpu);
    }
L_000e9510:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_000e9514:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000e9518:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000044u, 0, 0);
    }
L_000e951c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_000e9520:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e9524:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e94f8;
        }
    }
L_000e9528:;
    {
        goto L_000e8c0c;
    }
}

/* _ZN11SceneObject11GetNumAnimsEv @ 000e9558 (arm) */
void fn_000e9558(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e9558:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000e955c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11SceneObject10GetCrtAnimEv @ 000e9560 (arm) */
void fn_000e9560(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e9560:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000e9564:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13ObjAttributesC2Ev @ 000e9568 (arm) */
void fn_000e9568(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e9568:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000e956c:;
    {
        wr8(cpu->r[0] + + 0x3cu, cpu->r[2]);
    }
L_000e9570:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000e9574:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_000e9578:;
    {
        wr8(cpu->r[0] + + 0x30u, cpu->r[2]);
    }
L_000e957c:;
    {
        wr8(cpu->r[0] + + 0x31u, cpu->r[2]);
    }
L_000e9580:;
    {
        wr8(cpu->r[0] + + 0x32u, cpu->r[2]);
    }
L_000e9584:;
    {
        wr8(cpu->r[0] + + 0x33u, cpu->r[2]);
    }
L_000e9588:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[2]);
    }
L_000e958c:;
    {
        wr8(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_000e9590:;
    {
        wr8(cpu->r[0] + + 0x3du, cpu->r[2]);
    }
L_000e9594:;
    {
        wr8(cpu->r[0] + + 0x3eu, cpu->r[2]);
    }
L_000e9598:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13ObjAttributesC1Ev @ 000e959c (arm) */
void fn_000e959c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e959c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000e95a0:;
    {
        wr8(cpu->r[0] + + 0x3cu, cpu->r[2]);
    }
L_000e95a4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000e95a8:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_000e95ac:;
    {
        wr8(cpu->r[0] + + 0x30u, cpu->r[2]);
    }
L_000e95b0:;
    {
        wr8(cpu->r[0] + + 0x31u, cpu->r[2]);
    }
L_000e95b4:;
    {
        wr8(cpu->r[0] + + 0x32u, cpu->r[2]);
    }
L_000e95b8:;
    {
        wr8(cpu->r[0] + + 0x33u, cpu->r[2]);
    }
L_000e95bc:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[2]);
    }
L_000e95c0:;
    {
        wr8(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_000e95c4:;
    {
        wr8(cpu->r[0] + + 0x3du, cpu->r[2]);
    }
L_000e95c8:;
    {
        wr8(cpu->r[0] + + 0x3eu, cpu->r[2]);
    }
L_000e95cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13ObjAttributesaSERS_ @ 000e95d0 (arm) */
void fn_000e95d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e95d0:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_000e95d4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x1cu);
    }
L_000e95d8:;
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
L_000e95dc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_000e95e0:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_000e95e4:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x8u);
    }
L_000e95e8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x20u);
    }
L_000e95ec:;
    {
        cpu->r[10] = rd32(cpu->r[1]);
    }
L_000e95f0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_000e95f4:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_000e95f8:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0xcu);
    }
L_000e95fc:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x24u);
    }
L_000e9600:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x18u);
    }
L_000e9604:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_000e9608:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_000e960c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x10u);
    }
L_000e9610:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x28u);
    }
L_000e9614:;
    {
        cpu->r[5] = rd8(cpu->r[1] + + 0x30u);
    }
L_000e9618:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[12]);
    }
L_000e961c:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[2]);
    }
L_000e9620:;
    {
        cpu->r[4] = rd8(cpu->r[1] + + 0x31u);
    }
L_000e9624:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0x14u);
    }
L_000e9628:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x2cu);
    }
L_000e962c:;
    {
        cpu->r[12] = rd8(cpu->r[1] + + 0x32u);
    }
L_000e9630:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0x33u);
    }
L_000e9634:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0x38u);
    }
L_000e9638:;
    {
        wr32(cpu->r[0], cpu->r[10]);
    }
L_000e963c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[8]);
    }
L_000e9640:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[7]);
    }
L_000e9644:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[6]);
    }
L_000e9648:;
    {
        wr8(cpu->r[0] + + 0x30u, cpu->r[5]);
    }
L_000e964c:;
    {
        wr8(cpu->r[0] + + 0x31u, cpu->r[4]);
    }
L_000e9650:;
    {
        wr8(cpu->r[0] + + 0x32u, cpu->r[12]);
    }
L_000e9654:;
    {
        wr8(cpu->r[0] + + 0x33u, cpu->r[2]);
    }
L_000e9658:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0x3cu);
    }
L_000e965c:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[9]);
    }
L_000e9660:;
    {
        wr8(cpu->r[0] + + 0x3cu, cpu->r[2]);
    }
L_000e9664:;
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
L_000e9668:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11SceneObject6UpdateEv @ 000e966c (arm) */
void fn_000e966c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e966c:;
    {
        return fn_000b651c(cpu);
    }
}

/* _ZN11SceneObject13InitAttributeEPcS0_ @ 000e9670 (arm) */
void fn_000e9670(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e9670:;
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
L_000e9674:;
    {
        cpu->r[8] = rd32(0x000e967cu + + 0x458u);
    }
L_000e9678:;
    {
        cpu->r[3] = rd32(0x000e9680u + + 0x458u);
    }
L_000e967c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000012cu, 1, 0);
    }
L_000e9680:;
    {
        cpu->r[8] = add_flags(cpu, 0x000e9688u, cpu->r[8], 0, 0);
    }
L_000e9684:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_000e9688:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000e968c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000e9690:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000e9694:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e9698:;
    {
        cpu->r[1] = rd32(0x000e96a0u + + 0x43cu);
    }
L_000e969c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000e96a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e96a4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e96acu, cpu->r[1], 0, 0);
    }
L_000e96a8:;
    {
        wr32(cpu->r[13] + + 0x124u, cpu->r[3]);
    }
L_000e96ac:;
    {
        cpu->r[14] = 0x000e96b0u; imp_strcmp(cpu); /* strcmp */
    }
L_000e96b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e96b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e979c;
        }
    }
L_000e96b8:;
    {
        cpu->r[3] = rd32(0x000e96c0u + + 0x420u);
    }
L_000e96bc:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000e96c0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e96c4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000e96c8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e96d0u, cpu->r[3], 0, 0);
    }
L_000e96cc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000e96d0:;
    {
        cpu->r[3] = rd32(0x000e96d8u + + 0x40cu);
    }
L_000e96d4:;
    {
        cpu->r[5] = cpu->r[7];
    }
L_000e96d8:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[0]);
    }
L_000e96dc:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_000e96e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e96e8u, cpu->r[3], 0, 0);
    }
L_000e96e4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000e96e8:;
    {
        cpu->r[3] = rd32(0x000e96f0u + + 0x3f8u);
    }
L_000e96ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e96f4u, cpu->r[3], 0, 0);
    }
L_000e96f0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000e96f4:;
    {
        cpu->r[3] = rd32(0x000e96fcu + + 0x3f0u);
    }
L_000e96f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e9700u, cpu->r[3], 0, 0);
    }
L_000e96fc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000e9700:;
    {
        goto L_000e970c;
    }
L_000e9704:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e9708:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e9798;
        }
    }
L_000e970c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e9710:;
    {
        cpu->r[1] = 0x0000002cu;
    }
L_000e9714:;
    {
        cpu->r[14] = 0x000e9718u; imp_strchr(cpu); /* strchr */
    }
L_000e9718:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e971c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e98c4;
        }
    }
L_000e9720:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 0);
    }
L_000e9724:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000e9728:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000e972c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e9730:;
    {
        cpu->r[14] = 0x000e9734u; imp_strncpy(cpu); /* strncpy */
    }
L_000e9734:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000e9738:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000128u, 0, 0);
    }
L_000e973c:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_000e9740:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[12], cpu->r[8], 0, 0);
    }
L_000e9744:;
    {
        wr8(cpu->r[8] + - 0x104u, cpu->r[11]);
    }
L_000e9748:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e974c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0xecu);
    }
L_000e9750:;
    {
        cpu->r[14] = 0x000e9754u; imp_atoi(cpu); /* atoi */
    }
L_000e9754:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000e9758:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[3]);
    }
L_000e975c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_000e9760:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_000e9764:;
    {
        wr32(cpu->r[8] + + 0xf0u, cpu->r[0]);
    }
L_000e9768:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e9704;
        }
    }
L_000e976c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e9770:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e9774:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e9778:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000e977c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e9780:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e9784:;
    {
        cpu->r[12] = 0x0000008eu;
    }
L_000e9788:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000e978c:;
    {
        cpu->r[14] = 0x000e9790u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e9790:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e9794:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e970c;
        }
    }
L_000e9798:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_000e979c:;
    {
        cpu->r[1] = rd32(0x000e97a4u + + 0x34cu);
    }
L_000e97a0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000e97a4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e97acu, cpu->r[1], 0, 0);
    }
L_000e97a8:;
    {
        cpu->r[14] = 0x000e97acu; imp_strcmp(cpu); /* strcmp */
    }
L_000e97ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e97b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e98d4;
        }
    }
L_000e97b4:;
    {
        cpu->r[3] = rd32(0x000e97bcu + + 0x338u);
    }
L_000e97b8:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000e97bc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e97c0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000e97c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e97ccu, cpu->r[3], 0, 0);
    }
L_000e97c8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000e97cc:;
    {
        cpu->r[3] = rd32(0x000e97d4u + + 0x324u);
    }
L_000e97d0:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_000e97d4:;
    {
        cpu->r[11] = rd32(0x000e97dcu + + 0x320u);
    }
L_000e97d8:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_000e97dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e97e4u, cpu->r[3], 0, 0);
    }
L_000e97e0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000e97e4:;
    {
        cpu->r[3] = rd32(0x000e97ecu + + 0x314u);
    }
L_000e97e8:;
    {
        cpu->r[11] = add_flags(cpu, 0x000e97f0u, cpu->r[11], 0, 0);
    }
L_000e97ec:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[0]);
    }
L_000e97f0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e97f8u, cpu->r[3], 0, 0);
    }
L_000e97f4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000e97f8:;
    {
        goto L_000e9804;
    }
L_000e97fc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e9800:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e9890;
        }
    }
L_000e9804:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e9808:;
    {
        cpu->r[1] = 0x0000002cu;
    }
L_000e980c:;
    {
        cpu->r[14] = 0x000e9810u; imp_strchr(cpu); /* strchr */
    }
L_000e9810:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e9814:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e98b4;
        }
    }
L_000e9818:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 0);
    }
L_000e981c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000e9820:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000e9824:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e9828:;
    {
        cpu->r[14] = 0x000e982cu; imp_strncpy(cpu); /* strncpy */
    }
L_000e982c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000e9830:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000128u, 0, 0);
    }
L_000e9834:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_000e9838:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_000e983c:;
    {
        wr8(cpu->r[8] + - 0x104u, cpu->r[9]);
    }
L_000e9840:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e9844:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x104u);
    }
L_000e9848:;
    {
        cpu->r[14] = 0x000e984cu; imp_atoi(cpu); /* atoi */
    }
L_000e984c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000e9850:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[3]);
    }
L_000e9854:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_000e9858:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_000e985c:;
    {
        wr32(cpu->r[8] + + 0x108u, cpu->r[0]);
    }
L_000e9860:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e97fc;
        }
    }
L_000e9864:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000e9868:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e986c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000e9870:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e9874:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e9878:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e987c:;
    {
        cpu->r[12] = 0x000000a9u;
    }
L_000e9880:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000e9884:;
    {
        cpu->r[14] = 0x000e9888u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e9888:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e988c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e9804;
        }
    }
L_000e9890:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_000e9894:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e9898:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_000e989c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x124u);
    }
L_000e98a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e98a4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000e98a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e9ac4;
        }
    }
L_000e98ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000012cu, 0, 0);
    }
L_000e98b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e98b4u)) return;
    }
L_000e98b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e98b8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000e98bc:;
    {
        cpu->r[14] = 0x000e98c0u; imp_strcpy(cpu); /* strcpy */
    }
L_000e98c0:;
    {
        goto L_000e9840;
    }
L_000e98c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e98c8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000e98cc:;
    {
        cpu->r[14] = 0x000e98d0u; imp_strcpy(cpu); /* strcpy */
    }
L_000e98d0:;
    {
        goto L_000e9748;
    }
L_000e98d4:;
    {
        cpu->r[1] = rd32(0x000e98dcu + + 0x228u);
    }
L_000e98d8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000e98dc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e98e4u, cpu->r[1], 0, 0);
    }
L_000e98e0:;
    {
        cpu->r[14] = 0x000e98e4u; imp_strcmp(cpu); /* strcmp */
    }
L_000e98e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e98e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e9928;
        }
    }
L_000e98ec:;
    {
        cpu->r[1] = rd32(0x000e98f4u + + 0x214u);
    }
L_000e98f0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e98f4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e98fcu, cpu->r[1], 0, 0);
    }
L_000e98f8:;
    {
        cpu->r[14] = 0x000e98fcu; imp_strcmp(cpu); /* strcmp */
    }
L_000e98fc:;
    {
        cpu->r[1] = rd32(0x000e9904u + + 0x208u);
    }
L_000e9900:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e9908u, cpu->r[1], 0, 0);
    }
L_000e9904:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e9908:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e990c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000e9910:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x11cu, cpu->r[3]);
        }
    }
L_000e9914:;
    {
        cpu->r[14] = 0x000e9918u; imp_strcmp(cpu); /* strcmp */
    }
L_000e9918:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e991c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000e9920:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x11cu, cpu->r[3]);
        }
    }
L_000e9924:;
    {
        goto L_000e9894;
    }
L_000e9928:;
    {
        cpu->r[1] = rd32(0x000e9930u + + 0x1e0u);
    }
L_000e992c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000e9930:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e9938u, cpu->r[1], 0, 0);
    }
L_000e9934:;
    {
        cpu->r[14] = 0x000e9938u; imp_strcmp(cpu); /* strcmp */
    }
L_000e9938:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e993c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e99f0;
        }
    }
L_000e9940:;
    {
        cpu->r[1] = rd32(0x000e9948u + + 0x1ccu);
    }
L_000e9944:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000e9948:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e9950u, cpu->r[1], 0, 0);
    }
L_000e994c:;
    {
        cpu->r[14] = 0x000e9950u; imp_strcmp(cpu); /* strcmp */
    }
L_000e9950:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e9954:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e9a10;
        }
    }
L_000e9958:;
    {
        cpu->r[1] = rd32(0x000e9960u + + 0x1b8u);
    }
L_000e995c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000e9960:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e9968u, cpu->r[1], 0, 0);
    }
L_000e9964:;
    {
        cpu->r[14] = 0x000e9968u; imp_strcmp(cpu); /* strcmp */
    }
L_000e9968:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e996c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e9a64;
        }
    }
L_000e9970:;
    {
        cpu->r[1] = rd32(0x000e9978u + + 0x1a4u);
    }
L_000e9974:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000e9978:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e9980u, cpu->r[1], 0, 0);
    }
L_000e997c:;
    {
        cpu->r[14] = 0x000e9980u; imp_strcmp(cpu); /* strcmp */
    }
L_000e9980:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e9984:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e9a30;
        }
    }
L_000e9988:;
    {
        cpu->r[1] = rd32(0x000e9990u + + 0x190u);
    }
L_000e998c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000e9990:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e9998u, cpu->r[1], 0, 0);
    }
L_000e9994:;
    {
        cpu->r[14] = 0x000e9998u; imp_strcmp(cpu); /* strcmp */
    }
L_000e9998:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e999c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e9a84;
        }
    }
L_000e99a0:;
    {
        cpu->r[1] = rd32(0x000e99a8u + + 0x17cu);
    }
L_000e99a4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000e99a8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e99b0u, cpu->r[1], 0, 0);
    }
L_000e99ac:;
    {
        cpu->r[14] = 0x000e99b0u; imp_strcmp(cpu); /* strcmp */
    }
L_000e99b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e99b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e9aa4;
        }
    }
L_000e99b8:;
    {
        cpu->r[1] = rd32(0x000e99c0u + + 0x168u);
    }
L_000e99bc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000e99c0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e99c8u, cpu->r[1], 0, 0);
    }
L_000e99c4:;
    {
        cpu->r[14] = 0x000e99c8u; imp_strcmp(cpu); /* strcmp */
    }
L_000e99c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e99cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e9894;
        }
    }
L_000e99d0:;
    {
        cpu->r[1] = rd32(0x000e99d8u + + 0x154u);
    }
L_000e99d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e99d8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e99e0u, cpu->r[1], 0, 0);
    }
L_000e99dc:;
    {
        cpu->r[14] = 0x000e99e0u; imp_strcmp(cpu); /* strcmp */
    }
L_000e99e0:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_000e99e4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000e99e8:;
    {
        wr8(cpu->r[4] + + 0x129u, cpu->r[0]);
    }
L_000e99ec:;
    {
        goto L_000e9894;
    }
L_000e99f0:;
    {
        cpu->r[1] = rd32(0x000e99f8u + + 0x138u);
    }
L_000e99f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e99f8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e9a00u, cpu->r[1], 0, 0);
    }
L_000e99fc:;
    {
        cpu->r[14] = 0x000e9a00u; imp_strcmp(cpu); /* strcmp */
    }
L_000e9a00:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_000e9a04:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000e9a08:;
    {
        wr8(cpu->r[4] + + 0x11du, cpu->r[0]);
    }
L_000e9a0c:;
    {
        goto L_000e9894;
    }
L_000e9a10:;
    {
        cpu->r[1] = rd32(0x000e9a18u + + 0x11cu);
    }
L_000e9a14:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e9a18:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e9a20u, cpu->r[1], 0, 0);
    }
L_000e9a1c:;
    {
        cpu->r[14] = 0x000e9a20u; imp_strcmp(cpu); /* strcmp */
    }
L_000e9a20:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_000e9a24:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000e9a28:;
    {
        wr8(cpu->r[4] + + 0x11fu, cpu->r[0]);
    }
L_000e9a2c:;
    {
        goto L_000e9894;
    }
L_000e9a30:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e9a34:;
    {
        cpu->r[14] = 0x000e9a38u; imp_strtod(cpu); /* strtod */
    }
L_000e9a38:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e9a40u + + 0x88u);
    }
L_000e9a3c:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_000e9a40:;
    {
        *vfp_s(cpu,14) = (float)*vfp_d(cpu,6);
    }
L_000e9a44:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000e9a48:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e9a50u + + 0x7cu);
    }
L_000e9a4c:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000e9a50:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e9a58u + + 0x78u);
    }
L_000e9a54:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000e9a58:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000e9a5c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x124u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e9a60:;
    {
        goto L_000e9894;
    }
L_000e9a64:;
    {
        cpu->r[1] = rd32(0x000e9a6cu + + 0xccu);
    }
L_000e9a68:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e9a6c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e9a74u, cpu->r[1], 0, 0);
    }
L_000e9a70:;
    {
        cpu->r[14] = 0x000e9a74u; imp_strcmp(cpu); /* strcmp */
    }
L_000e9a74:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_000e9a78:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000e9a7c:;
    {
        wr8(cpu->r[4] + + 0x11eu, cpu->r[0]);
    }
L_000e9a80:;
    {
        goto L_000e9894;
    }
L_000e9a84:;
    {
        cpu->r[1] = rd32(0x000e9a8cu + + 0xb0u);
    }
L_000e9a88:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e9a8c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e9a94u, cpu->r[1], 0, 0);
    }
L_000e9a90:;
    {
        cpu->r[14] = 0x000e9a94u; imp_strcmp(cpu); /* strcmp */
    }
L_000e9a94:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_000e9a98:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000e9a9c:;
    {
        wr8(cpu->r[4] + + 0x128u, cpu->r[0]);
    }
L_000e9aa0:;
    {
        goto L_000e9894;
    }
L_000e9aa4:;
    {
        cpu->r[1] = rd32(0x000e9aacu + + 0x94u);
    }
L_000e9aa8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e9aac:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e9ab4u, cpu->r[1], 0, 0);
    }
L_000e9ab0:;
    {
        cpu->r[14] = 0x000e9ab4u; imp_strcmp(cpu); /* strcmp */
    }
L_000e9ab4:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_000e9ab8:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000e9abc:;
    {
        wr8(cpu->r[4] + + 0x120u, cpu->r[0]);
    }
L_000e9ac0:;
    {
        goto L_000e9894;
    }
L_000e9ac4:;
    {
        cpu->r[14] = 0x000e9ac8u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000e9ac8:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 30));
        wr32(ea + 4u, *(uint32_t*)vfp_s(cpu, 31));
        }
    }
L_000e9acc:;
    {
        if (cond_test(cpu, 5)) {
        wr32(cpu->r[0], cpu->r[0]);
        }
    }
L_000e9ad0:;
    {
        if (cond_test(cpu, 5)) {
        uint32_t wb_tmp = cpu->r[9] + 0x000000fbu;
        uint64_t v = rd64(cpu->r[9]);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
        cpu->r[9] = wb_tmp;
        }
    }
L_000e9ad4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] * cpu->r[13]; cpu->r[6] = v;
        set_nz(cpu, v);
        }
    }
L_000e9ad8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000e9adc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[8], 1, 4u, &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000e9ae0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[12], 4, (cpu->r[6] & 0xffu), &shc); cpu->r[4] = v;
        set_nz(cpu, v);
        }
    }
L_000e9ae4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[12], 4, 12u, &shc); cpu->r[4] = v;
        set_nz(cpu, v);
        }
    }
L_000e9ae8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[12], 2, 4u, &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000e9aec:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[4], 4, 3u, &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000e9af0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[4], 1, 3u, &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000e9af4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[8], 2, 11u, &shc); cpu->r[4] = v;
        set_nz(cpu, v);
        }
    }
L_000e9af8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[12], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000e9afc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[12], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[4] = v;
        set_nz(cpu, v);
        }
    }
L_000e9b00:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[12], 4, 1u, &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000e9b04:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[0]; cpu->r[2] = v;
        set_nz(cpu, v);
        }
    }
L_000e9b08:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[8], 2, 1u, &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000e9b0c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[0], 2, 1u, &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000e9b10:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[8], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000e9b14:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[4], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000e9b18:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[0], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000e9b1c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[4], 1, 32u, &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000e9b20:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[8], 3, (cpu->r[0] & 0xffu), &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000e9b24:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[4], 3, (cpu->r[0] & 0xffu), &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000e9b28:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[8], 3, 32u, &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000e9b2c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[2] + (-cpu->r[12]);
        cpu->r[7] = rd16(cpu->r[2]);
        cpu->r[2] = wb_tmp;
        }
    }
L_000e9b30:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[12] * 0x000e9b38u; cpu->r[2] = v;
        set_nz(cpu, v);
        }
    }
L_000e9b34:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] * 0x000e9b3cu; cpu->r[2] = v;
        set_nz(cpu, v);
        }
    }
L_000e9b38:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[8], 3, 30u, &shc); cpu->r[7] = v;
        set_nz(cpu, v);
        }
    }
L_000e9b3c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[8], 2, 30u, &shc); cpu->r[7] = v;
        set_nz(cpu, v);
        }
    }
L_000e9b40:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[8], 4, 29u, &shc); cpu->r[7] = v;
        set_nz(cpu, v);
        }
    }
}

/* _ZN11SceneObject18ParseLineAttributeEPcS0_S0_ @ 000e9b44 (arm) */
void fn_000e9b44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e9b44:;
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
L_000e9b48:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000e9b4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9b50:;
    {
        cpu->r[1] = 0x0000003du;
    }
L_000e9b54:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000e9b58:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000e9b5c:;
    {
        cpu->r[14] = 0x000e9b60u; imp_strchr(cpu); /* strchr */
    }
L_000e9b60:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000e9b64:;
    {
        wr8(cpu->r[5], cpu->r[6]);
    }
L_000e9b68:;
    {
        wr8(cpu->r[7], cpu->r[6]);
    }
L_000e9b6c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e9b70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e9ba4;
        }
    }
L_000e9b74:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[8], cpu->r[4], 1, 0);
    }
L_000e9b78:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000e9b7c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000e9b80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e9b84:;
    {
        cpu->r[14] = 0x000e9b88u; imp_strncpy(cpu); /* strncpy */
    }
L_000e9b88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9b8c:;
    {
        wr8(cpu->r[5] + cpu->r[10], cpu->r[6]);
    }
L_000e9b90:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000e9b94:;
    {
        cpu->r[14] = 0x000e9b98u; imp_strlen(cpu); /* strlen */
    }
L_000e9b98:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[8], cpu->r[4], 1, 0);
    }
L_000e9b9c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_000e9ba0:;
    {
        if (cond_test(cpu, 4)) {
        goto L_000e9bb8;
        }
    }
L_000e9ba4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e9ba8:;
    {
        cpu->r[14] = 0x000e9bacu; fn_000ae660(cpu);
    }
L_000e9bac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e9bb0:;
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
L_000e9bb4:;
    {
        return fn_000ae660(cpu);
    }
L_000e9bb8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000e9bbc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e9bc0:;
    {
        cpu->r[14] = 0x000e9bc4u; imp_strcpy(cpu); /* strcpy */
    }
L_000e9bc4:;
    {
        goto L_000e9ba4;
    }
}

/* _ZN11SceneObject21ParseObjectAttributesEPc @ 000e9bc8 (arm) */
void fn_000e9bc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e9bc8:;
    {
        cpu->r[2] = rd32(0x000e9bd0u + + 0x100u);
    }
L_000e9bcc:;
    {
        cpu->r[3] = rd32(0x000e9bd4u + + 0x100u);
    }
L_000e9bd0:;
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
L_000e9bd4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e9bdcu, cpu->r[2], 0, 0);
    }
L_000e9bd8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000274u, 1, 0);
    }
L_000e9bdc:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_000e9be0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000e9be4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000e9be8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000e9bec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000108u, 0, 0);
    }
L_000e9bf0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e9bf4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000208u, 0, 0);
    }
L_000e9bf8:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000e9bfc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000e9c00:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_000e9c04:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e9c08:;
    {
        wr32(cpu->r[13] + + 0x26cu, cpu->r[3]);
    }
L_000e9c0c:;
    {
        goto L_000e9c64;
    }
L_000e9c10:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[4], cpu->r[9], 1, 0);
    }
L_000e9c14:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000e9c18:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000e9c1c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e9c20:;
    {
        cpu->r[14] = 0x000e9c24u; imp_strncpy(cpu); /* strncpy */
    }
L_000e9c24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000270u, 0, 0);
    }
L_000e9c28:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[12], cpu->r[10], 0, 0);
    }
L_000e9c2c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000e9c30:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e9c34:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000e9c38:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000e9c3c:;
    {
        wr8(cpu->r[10] + - 0x168u, cpu->r[11]);
    }
L_000e9c40:;
    {
        cpu->r[14] = 0x000e9c44u; fn_000e9b44(cpu);
    }
L_000e9c44:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e9c48:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e9c4c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000e9c50:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000e9c54:;
    {
        cpu->r[9] = cpu->r[4];
    }
L_000e9c58:;
    {
        cpu->r[14] = 0x000e9c5cu; fn_000e9670(cpu);
    }
L_000e9c5c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000e9c60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e9ca8;
        }
    }
L_000e9c64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9c68:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000e9c6c:;
    {
        cpu->r[14] = 0x000e9c70u; imp_strchr(cpu); /* strchr */
    }
L_000e9c70:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e9c74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e9c10;
        }
    }
L_000e9c78:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000e9c7c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000e9c80:;
    {
        cpu->r[14] = 0x000e9c84u; imp_strcpy(cpu); /* strcpy */
    }
L_000e9c84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e9c88:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000e9c8c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000e9c90:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000e9c94:;
    {
        cpu->r[14] = 0x000e9c98u; fn_000e9b44(cpu);
    }
L_000e9c98:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e9c9c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000e9ca0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000e9ca4:;
    {
        cpu->r[14] = 0x000e9ca8u; fn_000e9670(cpu);
    }
L_000e9ca8:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_000e9cac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000e9cb0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000e9cb4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x26cu);
    }
L_000e9cb8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e9cbc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000e9cc0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e9ccc;
        }
    }
L_000e9cc4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000274u, 0, 0);
    }
L_000e9cc8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9cccu)) return;
    }
L_000e9ccc:;
    {
        cpu->r[14] = 0x000e9cd0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000e9cd0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[12], 3, (cpu->r[8] & 0xffu), &shc); cpu->r[0] = v;
        set_nz(cpu, v);
        }
    }
L_000e9cd4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN11SceneObjectC1Eii @ 000e9cd8 (arm) */
void fn_000e9cd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e9cd8:;
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
L_000e9cdc:;
    {
        cpu->r[4] = rd32(0x000e9ce4u + + 0x74u);
    }
L_000e9ce0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000e9ce4:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000e9ce8:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_000e9cec:;
    {
        cpu->r[14] = 0x000e9cf0u; fn_000b5dc8(cpu);
    }
L_000e9cf0:;
    {
        cpu->r[3] = rd32(0x000e9cf8u + + 0x64u);
    }
L_000e9cf4:;
    {
        cpu->r[4] = add_flags(cpu, 0x000e9cfcu, cpu->r[4], 0, 0);
    }
L_000e9cf8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e9cfc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x00000134u, 0, 0);
    }
L_000e9d00:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000e9d04:;
    {
        cpu->r[10] = (uint32_t)((uint16_t)cpu->r[10]);
    }
L_000e9d08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e9d0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000e9d10:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x000000ecu;
        wr32(cpu->r[0], cpu->r[3]);
        cpu->r[0] = wb_tmp;
    }
L_000e9d14:;
    {
        cpu->r[14] = 0x000e9d18u; fn_000e959c(cpu);
    }
L_000e9d18:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e9d1c:;
    {
        wr32(cpu->r[6] + + 0x174u, cpu->r[7]);
    }
L_000e9d20:;
    {
        cpu->r[14] = 0x000e9d24u; fn_001535e0(cpu);
    }
L_000e9d24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000e9d28:;
    {
        cpu->r[14] = 0x000e9d2cu; fn_00153600(cpu);
    }
L_000e9d2c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e9d30:;
    {
        cpu->r[14] = 0x000e9d34u; fn_00153efc(cpu);
    }
L_000e9d34:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e9d38:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0fffu << 16);
    }
L_000e9d3c:;
    {
        wr32(cpu->r[6] + + 0x130u, cpu->r[7]);
    }
L_000e9d40:;
    {
        uint32_t v = cpu->r[3] & shifter(cpu->r[5], 2, 16u, &shc); cpu->r[3] = v;
    }
L_000e9d44:;
    {
        wr32(cpu->r[6] + + 0x12cu, cpu->r[5]);
    }
L_000e9d48:;
    {
        uint32_t v = cpu->r[3] | cpu->r[10]; cpu->r[3] = v;
    }
L_000e9d4c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e9d50:;
    {
        wr32(cpu->r[6] + + 0xe8u, cpu->r[3]);
    }
L_000e9d54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9d58u)) return;
    }
}

/* _ZN11SceneObjectC2Eii @ 000e9d60 (arm) */
void fn_000e9d60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e9d60:;
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
L_000e9d64:;
    {
        cpu->r[4] = rd32(0x000e9d6cu + + 0x74u);
    }
L_000e9d68:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000e9d6c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000e9d70:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_000e9d74:;
    {
        cpu->r[14] = 0x000e9d78u; fn_000b5dc8(cpu);
    }
L_000e9d78:;
    {
        cpu->r[3] = rd32(0x000e9d80u + + 0x64u);
    }
L_000e9d7c:;
    {
        cpu->r[4] = add_flags(cpu, 0x000e9d84u, cpu->r[4], 0, 0);
    }
L_000e9d80:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e9d84:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x00000134u, 0, 0);
    }
L_000e9d88:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000e9d8c:;
    {
        cpu->r[10] = (uint32_t)((uint16_t)cpu->r[10]);
    }
L_000e9d90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e9d94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000e9d98:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x000000ecu;
        wr32(cpu->r[0], cpu->r[3]);
        cpu->r[0] = wb_tmp;
    }
L_000e9d9c:;
    {
        cpu->r[14] = 0x000e9da0u; fn_000e959c(cpu);
    }
L_000e9da0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e9da4:;
    {
        wr32(cpu->r[6] + + 0x174u, cpu->r[7]);
    }
L_000e9da8:;
    {
        cpu->r[14] = 0x000e9dacu; fn_001535e0(cpu);
    }
L_000e9dac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000e9db0:;
    {
        cpu->r[14] = 0x000e9db4u; fn_00153600(cpu);
    }
L_000e9db4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e9db8:;
    {
        cpu->r[14] = 0x000e9dbcu; fn_00153efc(cpu);
    }
L_000e9dbc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e9dc0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0fffu << 16);
    }
L_000e9dc4:;
    {
        wr32(cpu->r[6] + + 0x130u, cpu->r[7]);
    }
L_000e9dc8:;
    {
        uint32_t v = cpu->r[3] & shifter(cpu->r[5], 2, 16u, &shc); cpu->r[3] = v;
    }
L_000e9dcc:;
    {
        wr32(cpu->r[6] + + 0x12cu, cpu->r[5]);
    }
L_000e9dd0:;
    {
        uint32_t v = cpu->r[3] | cpu->r[10]; cpu->r[3] = v;
    }
L_000e9dd4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e9dd8:;
    {
        wr32(cpu->r[6] + + 0xe8u, cpu->r[3]);
    }
L_000e9ddc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9de0u)) return;
    }
}

/* _ZN11SceneObjectD2Ev @ 000e9de8 (arm) */
void fn_000e9de8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e9de8:;
    {
        cpu->r[3] = rd32(0x000e9df0u + + 0x64u);
    }
L_000e9dec:;
    {
        cpu->r[2] = rd32(0x000e9df4u + + 0x64u);
    }
L_000e9df0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e9df8u, cpu->r[3], 0, 0);
    }
L_000e9df4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000e9df8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000e9dfc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x130u);
    }
L_000e9e00:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000e9e04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e9e08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000e9e0c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_000e9e10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e9e20;
        }
    }
L_000e9e14:;
    {
        cpu->r[14] = 0x000e9e18u; fn_0018ba20(cpu);
    }
L_000e9e18:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e9e1c:;
    {
        wr32(cpu->r[4] + + 0x130u, cpu->r[3]);
    }
L_000e9e20:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x174u);
    }
L_000e9e24:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e9e28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e9e44;
        }
    }
L_000e9e2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e9e30:;
    {
        cpu->r[14] = 0x000e9e34u; fn_000b2bc8(cpu);
    }
L_000e9e34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e9e38:;
    {
        cpu->r[14] = 0x000e9e3cu; fn_0018ba20(cpu);
    }
L_000e9e3c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e9e40:;
    {
        wr32(cpu->r[4] + + 0x174u, cpu->r[3]);
    }
L_000e9e44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9e48:;
    {
        cpu->r[14] = 0x000e9e4cu; fn_000b6198(cpu);
    }
L_000e9e4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9e50:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9e54u)) return;
    }
}

/* _ZN11SceneObjectD1Ev @ 000e9e5c (arm) */
void fn_000e9e5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e9e5c:;
    {
        cpu->r[3] = rd32(0x000e9e64u + + 0x64u);
    }
L_000e9e60:;
    {
        cpu->r[2] = rd32(0x000e9e68u + + 0x64u);
    }
L_000e9e64:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e9e6cu, cpu->r[3], 0, 0);
    }
L_000e9e68:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000e9e6c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000e9e70:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x130u);
    }
L_000e9e74:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000e9e78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e9e7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000e9e80:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_000e9e84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e9e94;
        }
    }
L_000e9e88:;
    {
        cpu->r[14] = 0x000e9e8cu; fn_0018ba20(cpu);
    }
L_000e9e8c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e9e90:;
    {
        wr32(cpu->r[4] + + 0x130u, cpu->r[3]);
    }
L_000e9e94:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x174u);
    }
L_000e9e98:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e9e9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e9eb8;
        }
    }
L_000e9ea0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e9ea4:;
    {
        cpu->r[14] = 0x000e9ea8u; fn_000b2bc8(cpu);
    }
L_000e9ea8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e9eac:;
    {
        cpu->r[14] = 0x000e9eb0u; fn_0018ba20(cpu);
    }
L_000e9eb0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e9eb4:;
    {
        wr32(cpu->r[4] + + 0x174u, cpu->r[3]);
    }
L_000e9eb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9ebc:;
    {
        cpu->r[14] = 0x000e9ec0u; fn_000b6198(cpu);
    }
L_000e9ec0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9ec4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9ec8u)) return;
    }
}

/* _ZN11SceneObjectD0Ev @ 000e9ed0 (arm) */
void fn_000e9ed0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e9ed0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000e9ed4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000e9ed8:;
    {
        cpu->r[14] = 0x000e9edcu; fn_000e9e5c(cpu);
    }
L_000e9edc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9ee0:;
    {
        cpu->r[14] = 0x000e9ee4u; fn_0018ba20(cpu);
    }
L_000e9ee4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e9ee8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9eecu)) return;
    }
}

/* _ZN17StaticSceneObject7SetAnimEibi @ 000e9eec (arm) */
void fn_000e9eec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e9eec:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x17cu);
    }
L_000e9ef0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000e9ef4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000e9ef8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000e9efc:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000e9f00:;
    {
        cpu->r[14] = 0x000e9f08u;
    }
L_000e9f04:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9f08u)) return;
    }
L_000e9f08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000e9f0c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000e9f10:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e9f14:;
    {
        cpu->r[14] = 0x000e9f1cu;
    }
L_000e9f18:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9f1cu)) return;
    }
L_000e9f1c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9f20u)) return;
    }
}

/* _ZN17StaticSceneObject11GetNumAnimsEv @ 000e9f20 (arm) */
void fn_000e9f20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e9f20:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x17cu);
    }
L_000e9f24:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000e9f28:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000e9f2c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e9f30:;
    {
        cpu->r[14] = 0x000e9f38u;
    }
L_000e9f34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9f38u)) return;
    }
L_000e9f38:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_000e9f3c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9f40u)) return;
    }
}

/* _ZN17StaticSceneObject10GetCrtAnimEv @ 000e9f40 (arm) */
void fn_000e9f40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e9f40:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x17cu);
    }
L_000e9f44:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000e9f48:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000e9f4c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e9f50:;
    {
        cpu->r[14] = 0x000e9f58u;
    }
L_000e9f54:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x68u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9f58u)) return;
    }
L_000e9f58:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9f5cu)) return;
    }
}

/* _ZN17StaticSceneObject8SetFrameEf @ 000e9f5c (arm) */
void fn_000e9f5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e9f5c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x17cu);
    }
L_000e9f60:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000e9f64:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000e9f68:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e9f6c:;
    {
        cpu->r[14] = 0x000e9f74u;
    }
L_000e9f70:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x70u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9f74u)) return;
    }
L_000e9f74:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9f78u)) return;
    }
}

/* _ZN17StaticSceneObject11GetCrtFrameEv @ 000e9f78 (arm) */
void fn_000e9f78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e9f78:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x17cu);
    }
L_000e9f7c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000e9f80:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000e9f84:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e9f88:;
    {
        cpu->r[14] = 0x000e9f90u;
    }
L_000e9f8c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x6cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9f90u)) return;
    }
L_000e9f90:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9f94u)) return;
    }
}

/* _ZN17StaticSceneObject6RenderEj @ 000e9f94 (arm) */
void fn_000e9f94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e9f94:;
    {
        cpu->r[3] = rd32(0x000e9f9cu + + 0xfcu);
    }
L_000e9f98:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000134u, 0, 0);
    }
L_000e9f9c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000e9fa0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000e9fa4:;
    {
        cpu->r[0] = rd32(0x000e9facu + + 0xf0u);
    }
L_000e9fa8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e9fb0u, cpu->r[3], 0, 0);
    }
L_000e9fac:;
    {
        cpu->r[5] = 0x000011e8u;
    }
L_000e9fb0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000e9fb4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000e9fb8:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_000e9fbc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000e9fc0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000e9fc4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e9fc8:;
    {
        cpu->r[14] = 0x000e9fd0u;
    }
L_000e9fcc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9fd0u)) return;
    }
L_000e9fd0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000e9fd4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000e9fd8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e9fdc:;
    {
        cpu->r[14] = 0x000e9fe4u;
    }
L_000e9fe0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9fe4u)) return;
    }
L_000e9fe4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000e9fe8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000e9fec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e9ff0:;
    {
        cpu->r[14] = 0x000e9ff8u;
    }
L_000e9ff4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000e9ff8u)) return;
    }
L_000e9ff8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000e9ffc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ea000:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ea004:;
    {
        cpu->r[14] = 0x000ea00cu;
    }
L_000ea008:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea00cu)) return;
    }
L_000ea00c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000ea010:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ea014:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ea018:;
    {
        cpu->r[14] = 0x000ea020u;
    }
L_000ea01c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea020u)) return;
    }
L_000ea020:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000ea024:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ea028:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000ea02c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000ea030:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000ea034:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000ea038:;
    {
        cpu->r[14] = 0x000ea040u;
    }
L_000ea03c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea040u)) return;
    }
L_000ea040:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000ea044:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ea048:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000ea04c:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x2cu);
    }
L_000ea050:;
    {
        cpu->r[14] = 0x000ea058u;
    }
L_000ea054:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea058u)) return;
    }
L_000ea058:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ea05c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000ea060:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_000ea064:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ea068:;
    {
        cpu->r[14] = 0x000ea06cu; guest_call(cpu, cpu->r[7]);
    }
L_000ea06c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000ea070:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ea074:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ea078:;
    {
        cpu->r[14] = 0x000ea080u;
    }
L_000ea07c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea080u)) return;
    }
L_000ea080:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000ea084:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ea088:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ea08c:;
    {
        cpu->r[14] = 0x000ea094u;
    }
L_000ea090:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea094u)) return;
    }
L_000ea094:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea098u)) return;
    }
}

/* _ZN17StaticSceneObject9SetTexMapEiPP7Texture @ 000ea0a0 (arm) */
void fn_000ea0a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ea0a0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x17cu);
    }
L_000ea0a4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ea0a8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ea0ac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ea0b0:;
    {
        cpu->r[14] = 0x000ea0b8u;
    }
L_000ea0b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea0b8u)) return;
    }
L_000ea0b8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea0bcu)) return;
    }
}

/* _ZN17StaticSceneObject17CheckTransparencyEv @ 000ea0bc (arm) */
void fn_000ea0bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ea0bc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x17cu);
    }
L_000ea0c0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ea0c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ea0c8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ea0cc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ea0d0:;
    {
        cpu->r[14] = 0x000ea0d8u;
    }
L_000ea0d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea0d8u)) return;
    }
L_000ea0d8:;
    {
        wr8(cpu->r[4] + + 0x184u, cpu->r[0]);
    }
L_000ea0dc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea0e0u)) return;
    }
}

/* _ZN17StaticSceneObject14OnBodyCollidedEif @ 000ea0e0 (arm) */
void fn_000ea0e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ea0e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17StaticSceneObject7ShiftUVEff @ 000ea0e4 (arm) */
void fn_000ea0e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ea0e4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_000ea0e8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000ea0f0u + + 0x9cu);
    }
L_000ea0ec:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000ea0f0:;
    {
        cpu->r[3] = rd32(0x000ea0f8u + + 0x9cu);
    }
L_000ea0f4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_000ea0f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ea100u, cpu->r[3], 0, 0);
    }
L_000ea0fc:;
    {
        vfp_sync_flags(cpu);
    }
L_000ea100:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,13);
        }
    }
L_000ea104:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000ea118;
        }
    }
L_000ea108:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000ea110u + + 0x80u);
    }
L_000ea10c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000ea110:;
    {
        vfp_sync_flags(cpu);
    }
L_000ea114:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,13);
        }
    }
L_000ea118:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000ea120u + + 0x6cu);
    }
L_000ea11c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,13));
    }
L_000ea120:;
    {
        vfp_sync_flags(cpu);
    }
L_000ea124:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,13);
        }
    }
L_000ea128:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000ea13c;
        }
    }
L_000ea12c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000ea134u + + 0x5cu);
    }
L_000ea130:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,13));
    }
L_000ea134:;
    {
        vfp_sync_flags(cpu);
    }
L_000ea138:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,13);
        }
    }
L_000ea13c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000ea140:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1a0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea144:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1a4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000ea148:;
    {
        vfp_sync_flags(cpu);
    }
L_000ea14c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000ea150:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ea164;
        }
    }
L_000ea154:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_000ea158:;
    {
        vfp_sync_flags(cpu);
    }
L_000ea15c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000ea160:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000ea164:;
    {
        wr8(cpu->r[0] + + 0x1a8u, cpu->r[2]);
    }
L_000ea168:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000ea16c:;
    {
        cpu->r[2] = rd32(0x000ea174u + + 0x24u);
    }
L_000ea170:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ea174:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000ea178:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000ea17c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000ea180:;
    {
        cpu->r[3] = 0x0000a1fcu;
    }
L_000ea184:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000ea188:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17StaticSceneObject6UpdateEv @ 000ea19c (arm) */
void fn_000ea19c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ea19c:;
    {
        return fn_000e966c(cpu);
    }
}

/* _ZN17StaticSceneObject4LoadEii @ 000ea1a0 (arm) */
void fn_000ea1a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ea1a0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x17cu);
    }
L_000ea1a4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000ea1a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ea1ac:;
    {
        cpu->r[5] = rd32(0x000ea1b4u + + 0x154u);
    }
L_000ea1b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ea1b4:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000ea1b8:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000ea1bc:;
    {
        cpu->r[5] = add_flags(cpu, 0x000ea1c4u, cpu->r[5], 0, 0);
    }
L_000ea1c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ea1dc;
        }
    }
L_000ea1c4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ea1c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ea1cc:;
    {
        cpu->r[14] = 0x000ea1d4u;
    }
L_000ea1d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea1d4u)) return;
    }
L_000ea1d4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ea1d8:;
    {
        wr32(cpu->r[4] + + 0x17cu, cpu->r[3]);
    }
L_000ea1dc:;
    {
        cpu->r[3] = rd32(0x000ea1e4u + + 0x128u);
    }
L_000ea1e0:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_000ea1e4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000ea1e8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000ea1ec:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000ea1f0:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000ea1f4:;
    {
        cpu->r[14] = 0x000ea1f8u; fn_001328e8(cpu);
    }
L_000ea1f8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ea1fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ea2d4;
        }
    }
L_000ea200:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ea204:;
    {
        cpu->r[14] = 0x000ea208u; fn_00141370(cpu);
    }
L_000ea208:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ea20c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000ea210:;
    {
        wr32(cpu->r[4] + + 0x17cu, cpu->r[0]);
    }
L_000ea214:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000068u);
        }
    }
L_000ea218:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea21cu)) return;
        }
    }
L_000ea21c:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000ea220:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ea224:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000ea228:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_000ea22c:;
    {
        cpu->r[14] = 0x000ea234u;
    }
L_000ea230:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea234u)) return;
    }
L_000ea234:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000ea238:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ea23c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ea240:;
    {
        cpu->r[14] = 0x000ea248u;
    }
L_000ea244:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea248u)) return;
    }
L_000ea248:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ea24c:;
    {
        cpu->r[14] = 0x000ea250u; fn_000ea0bc(cpu);
    }
L_000ea250:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ea254:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000ea258:;
    {
        cpu->r[14] = 0x000ea260u;
    }
L_000ea25c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea260u)) return;
    }
L_000ea260:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000005eu, 1, 0);
    }
L_000ea264:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_000ea268:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000ea274;
        }
    }
L_000ea26c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000ea270:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea274u)) return;
    }
L_000ea274:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000ea278:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[0] = v;
    }
L_000ea27c:;
    {
        { uint32_t v = cpu->r[0] & 0x00000095u; set_nz(cpu, v); }
    }
L_000ea280:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ea26c;
        }
    }
L_000ea284:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x184u);
    }
L_000ea288:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ea28c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ea26c;
        }
    }
L_000ea290:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_000ea294:;
    {
        cpu->r[14] = 0x000ea298u; fn_0018ba6c(cpu);
    }
L_000ea298:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ea29c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000ea2a0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000ea2a4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[4]);
    }
L_000ea2a8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000ea2ac:;
    {
        wr32(cpu->r[3], cpu->r[1]);
    }
L_000ea2b0:;
    {
        cpu->r[1] = 0x20000000u;
    }
L_000ea2b4:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_000ea2b8:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[1]);
    }
L_000ea2bc:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[2]);
    }
L_000ea2c0:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_000ea2c4:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[2]);
    }
L_000ea2c8:;
    {
        wr32(cpu->r[3] + + 0x1cu, cpu->r[2]);
    }
L_000ea2cc:;
    {
        wr32(cpu->r[4] + + 0x130u, cpu->r[3]);
    }
L_000ea2d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea2d4u)) return;
    }
L_000ea2d4:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000ea2d8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000ea2dc:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000ea2e0:;
    {
        cpu->r[14] = 0x000ea2e4u; fn_00132cdc(cpu);
    }
L_000ea2e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ea2e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x00000064u);
        }
    }
L_000ea2ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea2f0u)) return;
        }
    }
L_000ea2f0:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000ea2f4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000ea2f8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000ea2fc:;
    {
        cpu->r[14] = 0x000ea300u; fn_001328e8(cpu);
    }
L_000ea300:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000ea304:;
    {
        goto L_000ea200;
    }
}

/* _ZN17StaticSceneObject10IsVisible2Ev @ 000ea310 (arm) */
void fn_000ea310(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ea310:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000ea314:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_000ea318:;
    {
        cpu->r[5] = rd32(0x000ea320u + + 0x1b4u);
    }
L_000ea31c:;
    {
        cpu->r[6] = rd32(0x000ea324u + + 0x1b4u);
    }
L_000ea320:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ea324:;
    {
        cpu->r[5] = add_flags(cpu, 0x000ea32cu, cpu->r[5], 0, 0);
    }
L_000ea328:;
    {
        wr8(cpu->r[0] + + 0x178u, cpu->r[3]);
    }
L_000ea32c:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x17au);
    }
L_000ea330:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ea334:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000ea338:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000ea33c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ea340:;
    {
        cpu->r[2] = 0x00001314u;
    }
L_000ea344:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ea348:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ea34c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ea460;
        }
    }
L_000ea350:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x194u);
    }
L_000ea354:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ea358:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ea454;
        }
    }
L_000ea35c:;
    {
        cpu->r[2] = 0x00001310u;
    }
L_000ea360:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000ea368u + + 0x164u);
    }
L_000ea364:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000ea368:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000ea36c:;
    {
        vfp_vmul(cpu, 13, 15, 13);
    }
L_000ea370:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x18cu);
    }
L_000ea374:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x10u);
    }
L_000ea378:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[0] + + 0x48u);
    }
L_000ea37c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000ea380:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[0] + + 0x84u);
    }
L_000ea384:;
    {
        wr8(cpu->r[4] + + 0x178u, cpu->r[3]);
    }
L_000ea388:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[0] + + 0xc0u);
    }
L_000ea38c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,13));
    }
L_000ea390:;
    {
        vfp_vsub(cpu, 16, 16, 14);
    }
L_000ea394:;
    {
        vfp_sync_flags(cpu);
    }
L_000ea398:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x20u);
    }
L_000ea39c:;
    {
        vfp_vsub(cpu, 17, 17, 14);
    }
L_000ea3a0:;
    {
        if (cond_test(cpu, 6)) {
        goto L_000ea3e0;
        }
    }
L_000ea3a4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_000ea3a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ea3ac:;
    {
        wr8(cpu->r[4] + + 0x178u, cpu->r[3]);
    }
L_000ea3b0:;
    {
        vfp_sync_flags(cpu);
    }
L_000ea3b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ea460;
        }
    }
L_000ea3b8:;
    {
        vfp_vneg(cpu, 14, 15);
    }
L_000ea3bc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,14));
    }
L_000ea3c0:;
    {
        vfp_sync_flags(cpu);
    }
L_000ea3c4:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000ea460;
        }
    }
L_000ea3c8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,15));
    }
L_000ea3cc:;
    {
        vfp_sync_flags(cpu);
    }
L_000ea3d0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ea460;
        }
    }
L_000ea3d4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,14));
    }
L_000ea3d8:;
    {
        vfp_sync_flags(cpu);
    }
L_000ea3dc:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000ea460;
        }
    }
L_000ea3e0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x186u);
    }
L_000ea3e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000ea3e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ea470;
        }
    }
L_000ea3ec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000ea3f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ea3f4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000ea3f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000068u, 0, 0);
    }
L_000ea3fc:;
    {
        wr8(cpu->r[4] + + 0x178u, cpu->r[3]);
    }
L_000ea400:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ea408u + + 0xc8u);
    }
L_000ea404:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea408:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea40c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea410:;
    {
        cpu->r[14] = 0x000ea414u; fn_001533e4(cpu);
    }
L_000ea414:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000ea418:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000ea41c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18cu);
    }
L_000ea420:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000ea424:;
    {
        cpu->r[14] = 0x000ea428u; fn_0012de90(cpu);
    }
L_000ea428:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ea42c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ea460;
        }
    }
L_000ea430:;
    {
        vfp_vmul(cpu, 15, 17, 17);
    }
L_000ea434:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x30u);
    }
L_000ea438:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000ea43c:;
    {
        wr8(cpu->r[4] + + 0x178u, cpu->r[0]);
    }
L_000ea440:;
    {
        vfp_vmla(cpu, 15, 16, 16);
    }
L_000ea444:;
    {
        vfp_vsub(cpu, 18, 18, 14);
    }
L_000ea448:;
    {
        vfp_vmla(cpu, 15, 18, 18);
    }
L_000ea44c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x188u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea450:;
    {
        goto L_000ea464;
    }
L_000ea454:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x186u);
    }
L_000ea458:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_000ea45c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ea35c;
        }
    }
L_000ea460:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000ea464:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000ea468:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000ea46c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea470u)) return;
    }
L_000ea470:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000134u, 0, 0);
    }
L_000ea474:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ea478:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ea47c:;
    {
        cpu->r[14] = 0x000ea480u; fn_00153624(cpu);
    }
L_000ea480:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000ea484:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ea488:;
    {
        cpu->r[14] = 0x000ea48cu; fn_00153478(cpu);
    }
L_000ea48c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000ea490:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ea494:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ea498:;
    {
        cpu->r[14] = 0x000ea4a0u;
    }
L_000ea49c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea4a0u)) return;
    }
L_000ea4a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000ea4a4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ea4a8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000ea4ac:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ea4b0:;
    {
        wr8(cpu->r[4] + + 0x178u, cpu->r[2]);
    }
L_000ea4b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ea4b8:;
    {
        cpu->r[14] = 0x000ea4c0u;
    }
L_000ea4bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea4c0u)) return;
    }
L_000ea4c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ea4c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ea430;
        }
    }
L_000ea4c8:;
    {
        goto L_000ea460;
    }
}

/* _ZN17StaticSceneObject9IsVisibleEv @ 000ea4dc (arm) */
void fn_000ea4dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ea4dc:;
    {
        cpu->r[3] = rd32(0x000ea4e4u + + 0x144u);
    }
L_000ea4e0:;
    {
        cpu->r[1] = rd32(0x000ea4e8u + + 0x144u);
    }
L_000ea4e4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ea4ecu, cpu->r[3], 0, 0);
    }
L_000ea4e8:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x17au);
    }
L_000ea4ec:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000ea4f0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000ea4f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ea4f8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ea4fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000ea500:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000ea504:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000ea508:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_000ea50c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[4] + + 0x178u, cpu->r[0]);
        }
    }
L_000ea510:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000ea514:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ea5b8;
        }
    }
L_000ea518:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x48u);
    }
L_000ea51c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x10u);
    }
L_000ea520:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ea524:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000ea52cu + + 0xf0u);
    }
L_000ea528:;
    {
        wr8(cpu->r[4] + + 0x178u, cpu->r[2]);
    }
L_000ea52c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1] + + 0x84u);
    }
L_000ea530:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[1] + + 0xc0u);
    }
L_000ea534:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x20u);
    }
L_000ea538:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000ea53c:;
    {
        vfp_sync_flags(cpu);
    }
L_000ea540:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ea5b4;
        }
    }
L_000ea544:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000ea54cu + + 0xd4u);
    }
L_000ea548:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000ea54c:;
    {
        vfp_sync_flags(cpu);
    }
L_000ea550:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000ea5b4;
        }
    }
L_000ea554:;
    {
        vfp_vsub(cpu, 12, 11, 12);
    }
L_000ea558:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,14));
    }
L_000ea55c:;
    {
        vfp_sync_flags(cpu);
    }
L_000ea560:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ea5b4;
        }
    }
L_000ea564:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,13));
    }
L_000ea568:;
    {
        vfp_sync_flags(cpu);
    }
L_000ea56c:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000ea5b4;
        }
    }
L_000ea570:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000134u, 0, 0);
    }
L_000ea574:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_000ea578:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ea57c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea580:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000ea584:;
    {
        cpu->r[14] = 0x000ea588u; fn_00153624(cpu);
    }
L_000ea588:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ea58c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000ea590:;
    {
        cpu->r[14] = 0x000ea594u; fn_00153478(cpu);
    }
L_000ea594:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000ea598:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000ea59c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ea5a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ea5a4:;
    {
        cpu->r[14] = 0x000ea5acu;
    }
L_000ea5a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea5acu)) return;
    }
L_000ea5ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ea5b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ea5c0;
        }
    }
L_000ea5b4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000ea5b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000ea5bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea5c0u)) return;
    }
L_000ea5c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ea5c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000ea5c8:;
    {
        cpu->r[14] = 0x000ea5ccu; fn_0015365c(cpu);
    }
L_000ea5cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_000ea5d0:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_000ea5d4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_000ea5d8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_000ea5dc:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_000ea5e0:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_000ea5e4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000ea5ecu + + 0x38u);
    }
L_000ea5e8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000ea5ec:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x188u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea5f0:;
    {
        vfp_sync_flags(cpu);
    }
L_000ea5f4:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000ea604;
        }
    }
L_000ea5f8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000ea5fc:;
    {
        wr8(cpu->r[4] + + 0x178u, cpu->r[0]);
    }
L_000ea600:;
    {
        goto L_000ea5b8;
    }
L_000ea604:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000ea608:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ea60c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ea610:;
    {
        cpu->r[14] = 0x000ea618u;
    }
L_000ea614:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea618u)) return;
    }
L_000ea618:;
    {
        goto L_000ea5f8;
    }
}

/* _ZN17StaticSceneObjectD1Ev @ 000ea630 (arm) */
void fn_000ea630(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ea630:;
    {
        cpu->r[2] = rd32(0x000ea638u + + 0x4cu);
    }
L_000ea634:;
    {
        cpu->r[1] = rd32(0x000ea63cu + + 0x4cu);
    }
L_000ea638:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ea640u, cpu->r[2], 0, 0);
    }
L_000ea63c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x17cu);
    }
L_000ea640:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ea644:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000ea648:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ea64c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ea650:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000ea654:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_000ea658:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ea674;
        }
    }
L_000ea65c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ea660:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ea664:;
    {
        cpu->r[14] = 0x000ea66cu;
    }
L_000ea668:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea66cu)) return;
    }
L_000ea66c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ea670:;
    {
        wr32(cpu->r[4] + + 0x17cu, cpu->r[3]);
    }
L_000ea674:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ea678:;
    {
        cpu->r[14] = 0x000ea67cu; fn_000e9de8(cpu);
    }
L_000ea67c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ea680:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea684u)) return;
    }
}

/* _ZN17StaticSceneObjectD0Ev @ 000ea68c (arm) */
void fn_000ea68c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ea68c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ea690:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ea694:;
    {
        cpu->r[14] = 0x000ea698u; fn_000ea630(cpu);
    }
L_000ea698:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ea69c:;
    {
        cpu->r[14] = 0x000ea6a0u; fn_0018ba20(cpu);
    }
L_000ea6a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ea6a4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea6a8u)) return;
    }
}

/* _ZN17StaticSceneObjectD2Ev @ 000ea6a8 (arm) */
void fn_000ea6a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ea6a8:;
    {
        cpu->r[2] = rd32(0x000ea6b0u + + 0x4cu);
    }
L_000ea6ac:;
    {
        cpu->r[1] = rd32(0x000ea6b4u + + 0x4cu);
    }
L_000ea6b0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ea6b8u, cpu->r[2], 0, 0);
    }
L_000ea6b4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x17cu);
    }
L_000ea6b8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ea6bc:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000ea6c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ea6c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ea6c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000ea6cc:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_000ea6d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ea6ec;
        }
    }
L_000ea6d4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ea6d8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ea6dc:;
    {
        cpu->r[14] = 0x000ea6e4u;
    }
L_000ea6e0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea6e4u)) return;
    }
L_000ea6e4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ea6e8:;
    {
        wr32(cpu->r[4] + + 0x17cu, cpu->r[3]);
    }
L_000ea6ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ea6f0:;
    {
        cpu->r[14] = 0x000ea6f4u; fn_000e9de8(cpu);
    }
L_000ea6f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ea6f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea6fcu)) return;
    }
}

/* _ZN17StaticSceneObjectC1Eii @ 000ea704 (arm) */
void fn_000ea704(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ea704:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000ea708:;
    {
        cpu->r[5] = rd32(0x000ea710u + + 0x70u);
    }
L_000ea70c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ea710:;
    {
        cpu->r[14] = 0x000ea714u; fn_000e9d60(cpu);
    }
L_000ea714:;
    {
        cpu->r[2] = rd32(0x000ea71cu + + 0x68u);
    }
L_000ea718:;
    {
        cpu->r[5] = add_flags(cpu, 0x000ea720u, cpu->r[5], 0, 0);
    }
L_000ea71c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ea720:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ea728u + + 0x54u);
    }
L_000ea724:;
    {
        wr8(cpu->r[4] + + 0x1a8u, cpu->r[3]);
    }
L_000ea728:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1a4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea72c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000ea730:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x188u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea734:;
    {
        wr32(cpu->r[4] + + 0x17cu, cpu->r[3]);
    }
L_000ea738:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1a0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea73c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000ea740:;
    {
        wr32(cpu->r[4] + + 0x180u, cpu->r[3]);
    }
L_000ea744:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_000ea748:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000134u, 0, 0);
    }
L_000ea74c:;
    {
        wr8(cpu->r[4] + + 0x185u, cpu->r[3]);
    }
L_000ea750:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000ea754:;
    {
        wr8(cpu->r[4] + + 0x186u, cpu->r[3]);
    }
L_000ea758:;
    {
        wr8(cpu->r[4] + + 0x19cu, cpu->r[2]);
    }
L_000ea75c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000ea760:;
    {
        wr8(cpu->r[4] + + 0x178u, cpu->r[3]);
    }
L_000ea764:;
    {
        wr32(cpu->r[4] + + 0x190u, cpu->r[2]);
    }
L_000ea768:;
    {
        wr8(cpu->r[4] + + 0x17au, cpu->r[3]);
    }
L_000ea76c:;
    {
        wr32(cpu->r[4] + + 0x198u, cpu->r[3]);
    }
L_000ea770:;
    {
        cpu->r[14] = 0x000ea774u; fn_00153efc(cpu);
    }
L_000ea774:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ea778:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea77cu)) return;
    }
}

/* _ZN17StaticSceneObjectC2Eii @ 000ea788 (arm) */
void fn_000ea788(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ea788:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000ea78c:;
    {
        cpu->r[5] = rd32(0x000ea794u + + 0x70u);
    }
L_000ea790:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ea794:;
    {
        cpu->r[14] = 0x000ea798u; fn_000e9d60(cpu);
    }
L_000ea798:;
    {
        cpu->r[2] = rd32(0x000ea7a0u + + 0x68u);
    }
L_000ea79c:;
    {
        cpu->r[5] = add_flags(cpu, 0x000ea7a4u, cpu->r[5], 0, 0);
    }
L_000ea7a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ea7a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ea7acu + + 0x54u);
    }
L_000ea7a8:;
    {
        wr8(cpu->r[4] + + 0x1a8u, cpu->r[3]);
    }
L_000ea7ac:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1a4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea7b0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000ea7b4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x188u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea7b8:;
    {
        wr32(cpu->r[4] + + 0x17cu, cpu->r[3]);
    }
L_000ea7bc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1a0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea7c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000ea7c4:;
    {
        wr32(cpu->r[4] + + 0x180u, cpu->r[3]);
    }
L_000ea7c8:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_000ea7cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000134u, 0, 0);
    }
L_000ea7d0:;
    {
        wr8(cpu->r[4] + + 0x185u, cpu->r[3]);
    }
L_000ea7d4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000ea7d8:;
    {
        wr8(cpu->r[4] + + 0x186u, cpu->r[3]);
    }
L_000ea7dc:;
    {
        wr8(cpu->r[4] + + 0x19cu, cpu->r[2]);
    }
L_000ea7e0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000ea7e4:;
    {
        wr8(cpu->r[4] + + 0x178u, cpu->r[3]);
    }
L_000ea7e8:;
    {
        wr32(cpu->r[4] + + 0x190u, cpu->r[2]);
    }
L_000ea7ec:;
    {
        wr8(cpu->r[4] + + 0x17au, cpu->r[3]);
    }
L_000ea7f0:;
    {
        wr32(cpu->r[4] + + 0x198u, cpu->r[3]);
    }
L_000ea7f4:;
    {
        cpu->r[14] = 0x000ea7f8u; fn_00153efc(cpu);
    }
L_000ea7f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ea7fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea800u)) return;
    }
}

/* _ZN17StaticSceneObject12RayIntersectEP8Vector3dS1_S1_PfPP7TextureS2_S2_ @ 000ea80c (arm) */
void fn_000ea80c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ea80c:;
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
L_000ea810:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_000ea814:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ea818:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
        }
    }
L_000ea81c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000c4u, 1, 0);
    }
L_000ea820:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_000ea824:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_000ea828:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000ea82c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_000ea830:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eaa58;
        }
    }
L_000ea834:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ea838:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eaa58;
        }
    }
L_000ea83c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000ea840:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000ea844:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ea848:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_000ea84c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_000ea850:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_000ea854:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea858:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_000ea85c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea860:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000ea864:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea868:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_000ea86c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea870:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000ea874:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea878:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_000ea87c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea880:;
    {
        cpu->r[14] = 0x000ea884u; fn_00153d94(cpu);
    }
L_000ea884:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[5]);
    }
L_000ea888:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x000000a4u, 0, 0);
    }
L_000ea88c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000098u, 0, 0);
    }
L_000ea890:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x000ea898u + + 0x210u);
    }
L_000ea894:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ea898:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ea89c:;
    {
        cpu->r[14] = 0x000ea8a0u; fn_00153624(cpu);
    }
L_000ea8a0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x98u);
    }
L_000ea8a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xa4u);
    }
L_000ea8a8:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ea8ac:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x9cu);
    }
L_000ea8b0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xa8u);
    }
L_000ea8b4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ea8b8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000ea8bc:;
    {
        vfp_vadd(cpu, 14, 13, 14);
    }
L_000ea8c0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea8c4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xa0u);
    }
L_000ea8c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xacu);
    }
L_000ea8cc:;
    {
        vfp_vadd(cpu, 15, 13, 15);
    }
L_000ea8d0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000ea8d4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea8d8:;
    {
        cpu->r[14] = 0x000ea8dcu; fn_00153c38(cpu);
    }
L_000ea8dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ea8e0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000ea8e4:;
    {
        cpu->r[14] = 0x000ea8e8u; fn_00153c38(cpu);
    }
L_000ea8e8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x98u);
    }
L_000ea8ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xa4u);
    }
L_000ea8f0:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ea8f4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x9cu);
    }
L_000ea8f8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xa8u);
    }
L_000ea8fc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x17cu);
    }
L_000ea900:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8cu) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000ea904:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x90u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000ea908:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x94u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000ea90c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ea910:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ea914:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_000ea918:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea91c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xa0u);
    }
L_000ea920:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xacu);
    }
L_000ea924:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_000ea928:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000ea92c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ea930:;
    {
        cpu->r[14] = 0x000ea938u;
    }
L_000ea934:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ea938u)) return;
    }
L_000ea938:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4u);
    }
L_000ea93c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_000ea940:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000eaa3c;
        }
    }
L_000ea944:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[5]);
    }
L_000ea948:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000b0u, 0, 0);
    }
L_000ea94c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ea950:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_000ea954:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_000ea958:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x000000bcu, 0, 0);
    }
L_000ea95c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x000000b8u, 0, 0);
    }
L_000ea960:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x000000b4u, 0, 0);
    }
L_000ea964:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_000ea968:;
    {
        *vfp_s(cpu,20) = *vfp_s(cpu,19);
    }
L_000ea96c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000ea970:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_000ea974:;
    {
        *vfp_s(cpu,18) = *vfp_s(cpu,19);
    }
L_000ea978:;
    {
        *vfp_s(cpu,16) = *vfp_s(cpu,19);
    }
L_000ea97c:;
    {
        goto L_000ea9d4;
    }
L_000ea980:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ea984:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ea988:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[13] + + 0xbcu);
        }
    }
L_000ea98c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ea9a0;
        }
    }
L_000ea990:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[13] + + 0xbcu);
    }
L_000ea994:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,18), *vfp_s(cpu,17));
    }
L_000ea998:;
    {
        vfp_sync_flags(cpu);
    }
L_000ea99c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000eaa1c;
        }
    }
L_000ea9a0:;
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
L_000ea9a4:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[13] + + 0xb4u);
    }
L_000ea9a8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xb8u);
    }
L_000ea9ac:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[13] + + 0xb0u);
    }
L_000ea9b0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ea9b4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_000ea9b8:;
    {
        add_flags(cpu, cpu->r[4], 0x00000001u, 0, 1);
    }
L_000ea9bc:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000ea9c0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_000ea9c4:;
    {
        *vfp_s(cpu,18) = *vfp_s(cpu,17);
    }
L_000ea9c8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_000ea9cc:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000ea9d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eaa30;
        }
    }
L_000ea9d4:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x17cu);
    }
L_000ea9d8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ea9dc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ea9e0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ea9e4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000ea9e8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000ea9ec:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000ea9f0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ea9f4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ea9f8:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000ea9fc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[10]);
    }
L_000eaa00:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_000eaa04:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[11]);
    }
L_000eaa08:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_000eaa0c:;
    {
        cpu->r[14] = 0x000eaa14u;
    }
L_000eaa10:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000eaa14u)) return;
    }
L_000eaa14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eaa18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ea980;
        }
    }
L_000eaa1c:;
    {
        *vfp_s(cpu,17) = *vfp_s(cpu,18);
    }
L_000eaa20:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_000eaa24:;
    {
        add_flags(cpu, cpu->r[4], 0x00000001u, 0, 1);
    }
L_000eaa28:;
    {
        *vfp_s(cpu,18) = *vfp_s(cpu,17);
    }
L_000eaa2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ea9d4;
        }
    }
L_000eaa30:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000eaa34:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000eaa38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eaa60;
        }
    }
L_000eaa3c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000eaa40:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000eaa44:;
    {
        cpu->r[14] = 0x000eaa48u; fn_000b2bc8(cpu);
    }
L_000eaa48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eaa4c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000c4u, 0, 0);
    }
L_000eaa50:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_000eaa54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000eaa58u)) return;
    }
L_000eaa58:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000eaa5c:;
    {
        goto L_000eaa48;
    }
L_000eaa60:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_000eaa64:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_000eaa68:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000eaa6c:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_000eaa70:;
    {
        cpu->r[14] = 0x000eaa74u; fn_00153c38(cpu);
    }
L_000eaa74:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x104u);
    }
L_000eaa78:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_000eaa7c:;
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
L_000eaa80:;
    {
        wr32(cpu->r[3], cpu->r[14]);
    }
L_000eaa84:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_000eaa88:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000eaa8c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x100u);
    }
L_000eaa90:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000eaa94:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x108u);
    }
L_000eaa98:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 20);
    }
L_000eaa9c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10cu);
    }
L_000eaaa0:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000eaaa4:;
    {
        goto L_000eaa40;
    }
}

/* _ZN6gxMenu10OnMenuLeftEv @ 000eaaac (arm) */
void fn_000eaaac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eaaac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6gxMenu11OnMenuRightEv @ 000eaab0 (arm) */
void fn_000eaab0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eaab0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6GS_Run8isKindOfEi @ 000eaab4 (arm) */
void fn_000eaab4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eaab4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_000eaab8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000eaabc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000eaac0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9RectEntry4InitEiiiii @ 000eaac4 (arm) */
void fn_000eaac4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eaac4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_000eaac8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000eaad0u + + 0x50u);
    }
L_000eaacc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000eaad0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000eaad4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000eaad8:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_000eaadc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000eaae0:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[1]);
    }
L_000eaae4:;
    {
        wr8(cpu->r[0] + + 0x40u, cpu->r[2]);
    }
L_000eaae8:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_000eaaec:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_000eaaf0:;
    {
        wr8(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_000eaaf4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000eaaf8:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000eaafc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13]);
    }
L_000eab00:;
    {
        wr8(cpu->r[0] + + 0x35u, cpu->r[2]);
    }
L_000eab04:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000eab08:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000eab0c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_000eab10:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000eab14:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000eab18:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000eab1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9RectEntryC1Eiiiii @ 000eab24 (arm) */
void fn_000eab24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eab24:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000eab28:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000eab2c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000eab30:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000eab34:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000eab38:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000eab3c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000eab40:;
    {
        cpu->r[14] = 0x000eab44u; fn_000eaac4(cpu);
    }
L_000eab44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eab48:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000eab4c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000eab50u)) return;
    }
}

/* _ZN9RectEntryC2Eiiiii @ 000eab50 (arm) */
void fn_000eab50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eab50:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000eab54:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000eab58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000eab5c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000eab60:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000eab64:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000eab68:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000eab6c:;
    {
        cpu->r[14] = 0x000eab70u; fn_000eaac4(cpu);
    }
L_000eab70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eab74:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000eab78:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000eab7cu)) return;
    }
}

/* _ZN9RectEntry10IsSelectedERiS0_ @ 000eab7c (arm) */
void fn_000eab7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eab7c:;
    {
        cpu->r[3] = rd32(0x000eab84u + + 0xc8u);
    }
L_000eab80:;
    {
        cpu->r[12] = rd32(0x000eab88u + + 0xc8u);
    }
L_000eab84:;
    {
        cpu->r[3] = add_flags(cpu, 0x000eab8cu, cpu->r[3], 0, 0);
    }
L_000eab88:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
    }
L_000eab8c:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000eab90:;
    {
        cpu->r[4] = rd16(cpu->r[12]);
    }
L_000eab94:;
    {
        cpu->r[12] = (uint32_t)((int16_t)cpu->r[4]);
    }
L_000eab98:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000eab9c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000eac44;
        }
    }
L_000eaba0:;
    {
        cpu->r[7] = 0x0000000cu;
    }
L_000eaba4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000eaba8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000eabac:;
    {
        cpu->r[7] = (uint32_t)((int32_t)(int16_t)(cpu->r[4] & 0xffff) * (int32_t)(int16_t)(cpu->r[7] & 0xffff));
    }
L_000eabb0:;
    {
        cpu->r[4] = rd32(0x000eabb8u + + 0x9cu);
    }
L_000eabb4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_000eabb8:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_000eabbc:;
    {
        cpu->r[5] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000eabc0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[5];
    }
L_000eabc4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000eabc8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_000eabcc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_000eabd0:;
    {
        cpu->r[6] = rd32(cpu->r[6] + + 0x4u);
    }
L_000eabd4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000eabd8:;
    {
        vfp_sync_flags(cpu);
    }
L_000eabdc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000eac38;
        }
    }
L_000eabe0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000eabe4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000eabe8:;
    {
        vfp_sync_flags(cpu);
    }
L_000eabec:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000eac38;
        }
    }
L_000eabf0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[6];
    }
L_000eabf4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000eabf8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000eabfc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,15));
    }
L_000eac00:;
    {
        vfp_sync_flags(cpu);
    }
L_000eac04:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000eac38;
        }
    }
L_000eac08:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_000eac0c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000eac10:;
    {
        vfp_sync_flags(cpu);
    }
L_000eac14:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000eac38;
        }
    }
L_000eac18:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_000eac1c:;
    {
        wr32(cpu->r[1], cpu->r[5]);
    }
L_000eac20:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000eac24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000eac28:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000eac2c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_000eac30:;
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
L_000eac34:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000eac38:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[7], 1, 1);
    }
L_000eac3c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000eac40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eabbc;
        }
    }
L_000eac44:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000eac48:;
    {
        goto L_000eac30;
    }
}

/* _ZN11gxGameState8isKindOfEi @ 000eac58 (arm) */
void fn_000eac58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eac58:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000eac5c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState6CreateEv @ 000eac60 (arm) */
void fn_000eac60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eac60:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000eac64:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState7ReleaseEv @ 000eac68 (arm) */
void fn_000eac68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eac68:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState6ResumeEv @ 000eac6c (arm) */
void fn_000eac6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eac6c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState17SwitchOrientationEv @ 000eac70 (arm) */
void fn_000eac70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eac70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState7SetGameEP4Game @ 000eac74 (arm) */
void fn_000eac74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eac74:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_000eac78:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState8GetLastXEv @ 000eac7c (arm) */
void fn_000eac7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eac7c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x6cu);
    }
L_000eac80:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState8GetLastYEv @ 000eac84 (arm) */
void fn_000eac84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eac84:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x70u);
    }
L_000eac88:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState11GetLastRectEv @ 000eac8c (arm) */
void fn_000eac8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eac8c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x60u);
    }
L_000eac90:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState12OnMouseEnterEib @ 000eac94 (arm) */
void fn_000eac94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eac94:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState12OnMouseLeaveEi @ 000eac98 (arm) */
void fn_000eac98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eac98:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState13OnMouseActionEi @ 000eac9c (arm) */
void fn_000eac9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eac9c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState11OnMouseDragEiiii @ 000eaca0 (arm) */
void fn_000eaca0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eaca0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameStateC2Ev @ 000eaca4 (arm) */
void fn_000eaca4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eaca4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000eaca8:;
    {
        cpu->r[6] = rd32(0x000eacb0u + + 0x68u);
    }
L_000eacac:;
    {
        cpu->r[3] = rd32(0x000eacb4u + + 0x68u);
    }
L_000eacb0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000eacb4:;
    {
        cpu->r[6] = add_flags(cpu, 0x000eacbcu, cpu->r[6], 0, 0);
    }
L_000eacb8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000eacbc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000eacc0:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[5]);
    }
L_000eacc4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000eacc8:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000eaccc:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[5]);
    }
L_000eacd0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000eacd4:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_000eacd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000eacdc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000001cu, 0, 0);
    }
L_000eace0:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000eace4:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000eace8:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000eacec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000eacf0:;
    {
        cpu->r[14] = 0x000eacf4u; fn_000eab24(cpu);
    }
L_000eacf4:;
    {
        cpu->r[3] = rd32(0x000eacfcu + + 0x24u);
    }
L_000eacf8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eacfc:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[5]);
    }
L_000ead00:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000ead04:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ead08:;
    {
        wr8(cpu->r[4] + + 0x64u, cpu->r[5]);
    }
L_000ead0c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_000ead10:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000ead14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ead18u)) return;
    }
}

/* _ZN11gxGameStateC1Ev @ 000ead24 (arm) */
void fn_000ead24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ead24:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000ead28:;
    {
        cpu->r[6] = rd32(0x000ead30u + + 0x68u);
    }
L_000ead2c:;
    {
        cpu->r[3] = rd32(0x000ead34u + + 0x68u);
    }
L_000ead30:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ead34:;
    {
        cpu->r[6] = add_flags(cpu, 0x000ead3cu, cpu->r[6], 0, 0);
    }
L_000ead38:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000ead3c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000ead40:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[5]);
    }
L_000ead44:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000ead48:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000ead4c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[5]);
    }
L_000ead50:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000ead54:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_000ead58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000ead5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000001cu, 0, 0);
    }
L_000ead60:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000ead64:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000ead68:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000ead6c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000ead70:;
    {
        cpu->r[14] = 0x000ead74u; fn_000eab24(cpu);
    }
L_000ead74:;
    {
        cpu->r[3] = rd32(0x000ead7cu + + 0x24u);
    }
L_000ead78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ead7c:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[5]);
    }
L_000ead80:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000ead84:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ead88:;
    {
        wr8(cpu->r[4] + + 0x64u, cpu->r[5]);
    }
L_000ead8c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_000ead90:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000ead94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ead98u)) return;
    }
}

/* _ZN11gxGameState8DoActionEii @ 000eada4 (arm) */
void fn_000eada4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eada4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState6RenderEv @ 000eada8 (arm) */
void fn_000eada8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eada8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState19ProcessOnMousePinchEv @ 000eadac (arm) */
void fn_000eadac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eadac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8GS_Error6UpdateEv @ 000eadb0 (arm) */
void fn_000eadb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eadb0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6gxMenuC2Ei @ 000eadb4 (arm) */
void fn_000eadb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eadb4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000eadb8:;
    {
        cpu->r[4] = rd32(0x000eadc0u + + 0x44u);
    }
L_000eadbc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000eadc0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000eadc4:;
    {
        cpu->r[14] = 0x000eadc8u; fn_000eaca4(cpu);
    }
L_000eadc8:;
    {
        cpu->r[2] = rd32(0x000eadd0u + + 0x38u);
    }
L_000eadcc:;
    {
        cpu->r[4] = add_flags(cpu, 0x000eadd4u, cpu->r[4], 0, 0);
    }
L_000eadd0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000eadd4:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000eadd8:;
    {
        wr32(cpu->r[5] + + 0x90u, cpu->r[6]);
    }
L_000eaddc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000eade0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000eade4:;
    {
        wr32(cpu->r[5] + + 0x88u, cpu->r[3]);
    }
L_000eade8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000eadec:;
    {
        wr32(cpu->r[5] + + 0x80u, cpu->r[1]);
    }
L_000eadf0:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_000eadf4:;
    {
        wr32(cpu->r[5] + + 0x78u, cpu->r[3]);
    }
L_000eadf8:;
    {
        wr32(cpu->r[5] + + 0x7cu, cpu->r[1]);
    }
L_000eadfc:;
    {
        wr32(cpu->r[5] + + 0x84u, cpu->r[3]);
    }
L_000eae00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000eae04u)) return;
    }
}

/* _ZN6gxMenuC1Ei @ 000eae0c (arm) */
void fn_000eae0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eae0c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000eae10:;
    {
        cpu->r[4] = rd32(0x000eae18u + + 0x44u);
    }
L_000eae14:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000eae18:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000eae1c:;
    {
        cpu->r[14] = 0x000eae20u; fn_000eaca4(cpu);
    }
L_000eae20:;
    {
        cpu->r[2] = rd32(0x000eae28u + + 0x38u);
    }
L_000eae24:;
    {
        cpu->r[4] = add_flags(cpu, 0x000eae2cu, cpu->r[4], 0, 0);
    }
L_000eae28:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000eae2c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000eae30:;
    {
        wr32(cpu->r[5] + + 0x90u, cpu->r[6]);
    }
L_000eae34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000eae38:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000eae3c:;
    {
        wr32(cpu->r[5] + + 0x88u, cpu->r[3]);
    }
L_000eae40:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000eae44:;
    {
        wr32(cpu->r[5] + + 0x80u, cpu->r[1]);
    }
L_000eae48:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_000eae4c:;
    {
        wr32(cpu->r[5] + + 0x78u, cpu->r[3]);
    }
L_000eae50:;
    {
        wr32(cpu->r[5] + + 0x7cu, cpu->r[1]);
    }
L_000eae54:;
    {
        wr32(cpu->r[5] + + 0x84u, cpu->r[3]);
    }
L_000eae58:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000eae5cu)) return;
    }
}

/* _ZN6gxMenu12OnMouseEnterEib @ 000eae64 (arm) */
void fn_000eae64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eae64:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000eae68:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x84u);
    }
L_000eae6c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000eae70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000eaea8;
        }
    }
L_000eae74:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x88u);
    }
L_000eae78:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_000eae7c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000eae80:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000eae84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eaeb0;
        }
    }
L_000eae88:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000eae8c:;
    {
        goto L_000eae9c;
    }
L_000eae90:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x18u;
        cpu->r[12] = rd32(cpu->r[2] + + 0x18u);
        cpu->r[2] = wb_tmp;
    }
L_000eae94:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_000eae98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eaeb0;
        }
    }
L_000eae9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000eaea0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000eaea4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eae90;
        }
    }
L_000eaea8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000eaeac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000eaeb0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000eaeb4:;
    {
        { uint32_t v = cpu->r[2] & 0x02000000u; set_nz(cpu, v); }
    }
L_000eaeb8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x80u, cpu->r[3]);
        }
    }
L_000eaebc:;
    {
        goto L_000eaea8;
    }
}

/* _ZN6gxMenu12OnMouseLeaveEi @ 000eaec0 (arm) */
void fn_000eaec0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eaec0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6gxMenu8OnMenuUpEv @ 000eaec4 (arm) */
void fn_000eaec4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eaec4:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_000eaec8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x84u);
    }
L_000eaecc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000eaed0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000eaf1c;
        }
    }
L_000eaed4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x78u);
    }
L_000eaed8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000eaedc:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x88u);
    }
L_000eaee0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_000eaee4:;
    {
        goto L_000eaef0;
    }
L_000eaee8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_000eaeec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eaf18;
        }
    }
L_000eaef0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000eaef4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000eaef8:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000eaefc:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = cpu->r[6];
        }
    }
L_000eaf00:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[1] = cpu->r[6];
        }
    }
L_000eaf04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000eaf08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_000eaf0c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x8u);
    }
L_000eaf10:;
    {
        { uint32_t v = cpu->r[12] & 0x02000000u; set_nz(cpu, v); }
    }
L_000eaf14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eaee8;
        }
    }
L_000eaf18:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[1]);
    }
L_000eaf1c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_000eaf20:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6gxMenu10OnMenuDownEv @ 000eaf24 (arm) */
void fn_000eaf24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eaf24:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x84u);
    }
L_000eaf28:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_000eaf2c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000eaf30:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000eaf84;
        }
    }
L_000eaf34:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x78u);
    }
L_000eaf38:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000eaf3c:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x88u);
    }
L_000eaf40:;
    {
        goto L_000eaf4c;
    }
L_000eaf44:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_000eaf48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eaf80;
        }
    }
L_000eaf4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000eaf50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000eaf54:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000eaf58:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000eaf5c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000eaf60:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000eaf64:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_000eaf68:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_000eaf6c:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[4], 2, 3u, &shc); cpu->r[4] = v;
        }
    }
L_000eaf70:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_000eaf74:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x8u);
    }
L_000eaf78:;
    {
        { uint32_t v = cpu->r[4] & 0x02000000u; set_nz(cpu, v); }
    }
L_000eaf7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eaf44;
        }
    }
L_000eaf80:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[3]);
    }
L_000eaf84:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_000eaf88:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6gxMenu8DoActionEii @ 000eaf8c (arm) */
void fn_000eaf8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eaf8c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6gxMenu15SetSelectedItemEi @ 000eaf90 (arm) */
void fn_000eaf90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eaf90:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000eaf94:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[1]);
    }
L_000eaf98:;
    {
        wr32(cpu->r[0] + + 0x80u, cpu->r[3]);
    }
L_000eaf9c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6gxMenu16PaintSoftButtonsEv @ 000eafa0 (arm) */
void fn_000eafa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eafa0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6GS_Run8DoActionEii @ 000eafa4 (arm) */
void fn_000eafa4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eafa4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6GS_Run13UpdateGameFpsEv @ 000eafa8 (arm) */
void fn_000eafa8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eafa8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6GS_Run14ForceTerminateEv @ 000eafac (arm) */
void fn_000eafac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eafac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6GS_Run13OnMouseActionEi @ 000eafb0 (arm) */
void fn_000eafb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eafb0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_3 @ 000eafb4 (arm) */
void fn_000eafb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eafb4:;
    {
        cpu->r[3] = rd32(0x000eafbcu + + 0x20u);
    }
L_000eafb8:;
    {
        cpu->r[1] = rd32(0x000eafc0u + + 0x20u);
    }
L_000eafbc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000eafc4u, cpu->r[3], 0, 0);
    }
L_000eafc0:;
    {
        cpu->r[2] = rd32(0x000eafc8u + + 0x1cu);
    }
L_000eafc4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000eafc8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000eafd0u, cpu->r[2], 0, 0);
    }
L_000eafcc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000eafd0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_000eafd4:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_000eafd8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10CSingletonI9CKeyQueueE11GetInstanceEv @ 000eafe8 (arm) */
void fn_000eafe8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eafe8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000eafec:;
    {
        cpu->r[4] = rd32(0x000eaff4u + + 0x6cu);
    }
L_000eaff0:;
    {
        cpu->r[3] = rd32(0x000eaff8u + + 0x6cu);
    }
L_000eaff4:;
    {
        cpu->r[4] = add_flags(cpu, 0x000eaffcu, cpu->r[4], 0, 0);
    }
L_000eaff8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000eaffc:;
    {
        cpu->r[6] = rd32(cpu->r[5]);
    }
L_000eb000:;
    {
        uint32_t v = cpu->r[6] & 0x00000001u; cpu->r[6] = v;
        set_nz(cpu, v);
    }
L_000eb004:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb014;
        }
    }
L_000eb008:;
    {
        cpu->r[7] = rd32(0x000eb010u + + 0x58u);
    }
L_000eb00c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000eb010:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb014u)) return;
    }
L_000eb014:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000eb018:;
    {
        cpu->r[14] = 0x000eb01cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000eb01c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eb020:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb008;
        }
    }
L_000eb024:;
    {
        cpu->r[7] = rd32(0x000eb02cu + + 0x3cu);
    }
L_000eb028:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000eb02c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000eb030:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000eb034:;
    {
        wr32(cpu->r[3] + + 0x1b0u, cpu->r[6]);
    }
L_000eb038:;
    {
        wr32(cpu->r[3] + + 0x1a8u, cpu->r[2]);
    }
L_000eb03c:;
    {
        wr32(cpu->r[3] + + 0xc8u, cpu->r[6]);
    }
L_000eb040:;
    {
        wr32(cpu->r[3] + + 0xccu, cpu->r[2]);
    }
L_000eb044:;
    {
        wr8(cpu->r[3] + + 0xd0u, cpu->r[6]);
    }
L_000eb048:;
    {
        wr32(cpu->r[3] + + 0xd4u, cpu->r[6]);
    }
L_000eb04c:;
    {
        wr32(cpu->r[3] + + 0x1a4u, cpu->r[6]);
    }
L_000eb050:;
    {
        wr8(cpu->r[3] + + 0x1acu, cpu->r[6]);
    }
L_000eb054:;
    {
        cpu->r[14] = 0x000eb058u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000eb058:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000eb05c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb060u)) return;
    }
}

/* _ZN6GS_Run7OpenIGMEv @ 000eb06c (arm) */
void fn_000eb06c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eb06c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000eb070:;
    {
        cpu->r[5] = rd32(0x000eb078u + + 0x16cu);
    }
L_000eb074:;
    {
        cpu->r[6] = rd32(0x000eb07cu + + 0x16cu);
    }
L_000eb078:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000eb07c:;
    {
        cpu->r[5] = add_flags(cpu, 0x000eb084u, cpu->r[5], 0, 0);
    }
L_000eb080:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000eb084:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000eb088:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000eb08c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000eb090:;
    {
        cpu->r[8] = rd32(cpu->r[7]);
    }
L_000eb094:;
    {
        cpu->r[3] = rd8(cpu->r[8] + cpu->r[3]);
    }
L_000eb098:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_000eb09c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000eb0a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb0cc;
        }
    }
L_000eb0a4:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_000eb0a8:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000eb0ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000eb0b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb0cc;
        }
    }
L_000eb0b4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x317u);
    }
L_000eb0b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000eb0bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb1d4;
        }
    }
L_000eb0c0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000eb0c4:;
    {
        cpu->r[14] = 0x000eb0c8u; fn_000ba460(cpu);
    }
L_000eb0c8:;
    {
        cpu->r[8] = rd32(cpu->r[7]);
    }
L_000eb0cc:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_000eb0d0:;
    {
        cpu->r[14] = 0x000eb0d4u; fn_0018ba6c(cpu);
    }
L_000eb0d4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000eb0d8:;
    {
        cpu->r[14] = 0x000eb0dcu; fn_0010c950(cpu);
    }
L_000eb0dc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000eb0e0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000eb0e4:;
    {
        cpu->r[14] = 0x000eb0e8u; fn_000f361c(cpu);
    }
L_000eb0e8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000eb0ec:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_000eb0f0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000eb0f4:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000eb0f8:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000eb0fc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000eb100:;
    {
        cpu->r[14] = 0x000eb104u; fn_000c0d80(cpu);
    }
L_000eb104:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000eb108:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000eb10c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000eb110:;
    {
        cpu->r[14] = 0x000eb114u; fn_0018cbb0(cpu);
    }
L_000eb114:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000eb118:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0xcu);
    }
L_000eb11c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000eb120:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000eb124:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = (~0x00000000u);
        }
    }
L_000eb128:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[3] + + 0x484u);
        }
    }
L_000eb12c:;
    {
        cpu->r[14] = 0x000eb130u; fn_0018cb94(cpu);
    }
L_000eb130:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000eb134:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000eb138:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000eb13c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000eb140:;
    {
        cpu->r[14] = 0x000eb144u; fn_0018b5d8(cpu);
    }
L_000eb144:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000eb148:;
    {
        cpu->r[14] = 0x000eb14cu; fn_0018b950(cpu);
    }
L_000eb14c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000eb150:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000eb154:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xcu);
    }
L_000eb158:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000eb15c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb188;
        }
    }
L_000eb160:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000eb164:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000eb168:;
    {
        cpu->r[1] = 0x00000097u;
    }
L_000eb16c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000eb170:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000eb174:;
    {
        cpu->r[14] = 0x000eb178u; fn_000fd224(cpu);
    }
L_000eb178:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000eb17c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000eb1b0;
        }
    }
L_000eb180:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000eb184:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb188u)) return;
    }
L_000eb188:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000eb18c:;
    {
        cpu->r[14] = 0x000eb190u; fn_00099b14(cpu);
    }
L_000eb190:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000eb194:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000eb198:;
    {
        cpu->r[1] = 0x00000097u;
    }
L_000eb19c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000eb1a0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000eb1a4:;
    {
        cpu->r[14] = 0x000eb1a8u; fn_000fd224(cpu);
    }
L_000eb1a8:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000eb1ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000eb180;
        }
    }
L_000eb1b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000eb1b4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000eb1b8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000eb1bc:;
    {
        cpu->r[1] = 0x00000097u;
    }
L_000eb1c0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000eb1c4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000eb1c8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000eb1cc:;
    {
        cpu->r[14] = 0x000eb1d0u; fn_000fd248(cpu);
    }
L_000eb1d0:;
    {
        goto L_000eb180;
    }
L_000eb1d4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000eb1d8:;
    {
        cpu->r[14] = 0x000eb1dcu; fn_000bd190(cpu);
    }
L_000eb1dc:;
    {
        cpu->r[8] = rd32(cpu->r[7]);
    }
L_000eb1e0:;
    {
        goto L_000eb0cc;
    }
}

/* _ZN6GS_Run12updateReplayEb @ 000eb1ec (arm) */
void fn_000eb1ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eb1ec:;
    {
        cpu->r[3] = rd32(0x000eb1f4u + + 0x20u);
    }
L_000eb1f0:;
    {
        cpu->r[2] = rd32(0x000eb1f8u + + 0x20u);
    }
L_000eb1f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000eb1fcu, cpu->r[3], 0, 0);
    }
L_000eb1f8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000eb1fc:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000eb200:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000eb204:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000eb208:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eb20c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000eb210:;
    {
        return fn_000c5990(cpu);
    }
}

/* _ZN6GS_Run18UpdateCarsConstFPSEv @ 000eb21c (arm) */
void fn_000eb21c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eb21c:;
    {
        cpu->r[3] = rd32(0x000eb224u + + 0x20u);
    }
L_000eb220:;
    {
        cpu->r[2] = rd32(0x000eb228u + + 0x20u);
    }
L_000eb224:;
    {
        cpu->r[3] = add_flags(cpu, 0x000eb22cu, cpu->r[3], 0, 0);
    }
L_000eb228:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000eb22c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000eb230:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000eb234:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000eb238:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eb23c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000eb240:;
    {
        return fn_000d2994(cpu);
    }
}

/* _ZN6GS_Run20SavePositionConstFPSEv @ 000eb24c (arm) */
void fn_000eb24c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eb24c:;
    {
        cpu->r[3] = rd32(0x000eb254u + + 0x20u);
    }
L_000eb250:;
    {
        cpu->r[2] = rd32(0x000eb258u + + 0x20u);
    }
L_000eb254:;
    {
        cpu->r[3] = add_flags(cpu, 0x000eb25cu, cpu->r[3], 0, 0);
    }
L_000eb258:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000eb25c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000eb260:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000eb264:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000eb268:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eb26c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000eb270:;
    {
        return fn_000c50f4(cpu);
    }
}

/* _ZN6GS_Run15ResetSlowMotionEv @ 000eb27c (arm) */
void fn_000eb27c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eb27c:;
    {
        cpu->r[3] = rd32(0x000eb284u + + 0x20u);
    }
L_000eb280:;
    {
        cpu->r[2] = rd32(0x000eb288u + + 0x20u);
    }
L_000eb284:;
    {
        cpu->r[3] = add_flags(cpu, 0x000eb28cu, cpu->r[3], 0, 0);
    }
L_000eb288:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000eb28c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000eb290:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000eb294:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000eb298:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eb29c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000eb2a0:;
    {
        return fn_000c6594(cpu);
    }
}

/* _ZN6GS_RunC1Eb @ 000eb2ac (arm) */
void fn_000eb2ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eb2ac:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000eb2b0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000eb2b4:;
    {
        cpu->r[5] = rd32(0x000eb2bcu + + 0x98u);
    }
L_000eb2b8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000eb2bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000eb2c0:;
    {
        cpu->r[14] = 0x000eb2c4u; fn_000eadb4(cpu);
    }
L_000eb2c4:;
    {
        cpu->r[3] = rd32(0x000eb2ccu + + 0x8cu);
    }
L_000eb2c8:;
    {
        cpu->r[5] = add_flags(cpu, 0x000eb2d0u, cpu->r[5], 0, 0);
    }
L_000eb2cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eb2d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000eb2d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000eb2d8:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x000000c8u;
        wr32(cpu->r[0], cpu->r[3]);
        cpu->r[0] = wb_tmp;
    }
L_000eb2dc:;
    {
        cpu->r[14] = 0x000eb2e0u; fn_000a6488(cpu);
    }
L_000eb2e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000f0u, 0, 0);
    }
L_000eb2e4:;
    {
        cpu->r[14] = 0x000eb2e8u; fn_000a6488(cpu);
    }
L_000eb2e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000118u, 0, 0);
    }
L_000eb2ec:;
    {
        cpu->r[14] = 0x000eb2f0u; fn_000a6488(cpu);
    }
L_000eb2f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000140u, 0, 0);
    }
L_000eb2f4:;
    {
        cpu->r[14] = 0x000eb2f8u; fn_000a6488(cpu);
    }
L_000eb2f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000168u, 0, 0);
    }
L_000eb2fc:;
    {
        cpu->r[14] = 0x000eb300u; fn_000a6488(cpu);
    }
L_000eb300:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000190u, 0, 0);
    }
L_000eb304:;
    {
        cpu->r[14] = 0x000eb308u; fn_000a6488(cpu);
    }
L_000eb308:;
    {
        cpu->r[2] = rd32(0x000eb310u + + 0x4cu);
    }
L_000eb30c:;
    {
        wr8(cpu->r[4] + + 0x9cu, cpu->r[6]);
    }
L_000eb310:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000eb314:;
    {
        wr8(cpu->r[4] + + 0x9du, cpu->r[3]);
    }
L_000eb318:;
    {
        cpu->r[0] = 0x00005f60u;
    }
L_000eb31c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000eb320:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000eb324:;
    {
        wr8(cpu->r[4] + + 0x9eu, cpu->r[2]);
    }
L_000eb328:;
    {
        cpu->r[12] = 0x00005f52u;
    }
L_000eb32c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000eb330:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000eb334:;
    {
        cpu->r[0] = rd8(cpu->r[1] + cpu->r[0]);
    }
L_000eb338:;
    {
        wr8(cpu->r[1] + cpu->r[12], cpu->r[3]);
    }
L_000eb33c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eb340:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[2]);
    }
L_000eb344:;
    {
        wr32(cpu->r[4] + + 0xb8u, cpu->r[2]);
    }
L_000eb348:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eb34c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x98u, cpu->r[3]);
        }
    }
L_000eb350:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb354u)) return;
    }
}

/* _ZN6GS_RunC2Eb @ 000eb360 (arm) */
void fn_000eb360(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eb360:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000eb364:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000eb368:;
    {
        cpu->r[5] = rd32(0x000eb370u + + 0x98u);
    }
L_000eb36c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000eb370:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000eb374:;
    {
        cpu->r[14] = 0x000eb378u; fn_000eadb4(cpu);
    }
L_000eb378:;
    {
        cpu->r[3] = rd32(0x000eb380u + + 0x8cu);
    }
L_000eb37c:;
    {
        cpu->r[5] = add_flags(cpu, 0x000eb384u, cpu->r[5], 0, 0);
    }
L_000eb380:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eb384:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000eb388:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000eb38c:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x000000c8u;
        wr32(cpu->r[0], cpu->r[3]);
        cpu->r[0] = wb_tmp;
    }
L_000eb390:;
    {
        cpu->r[14] = 0x000eb394u; fn_000a6488(cpu);
    }
L_000eb394:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000f0u, 0, 0);
    }
L_000eb398:;
    {
        cpu->r[14] = 0x000eb39cu; fn_000a6488(cpu);
    }
L_000eb39c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000118u, 0, 0);
    }
L_000eb3a0:;
    {
        cpu->r[14] = 0x000eb3a4u; fn_000a6488(cpu);
    }
L_000eb3a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000140u, 0, 0);
    }
L_000eb3a8:;
    {
        cpu->r[14] = 0x000eb3acu; fn_000a6488(cpu);
    }
L_000eb3ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000168u, 0, 0);
    }
L_000eb3b0:;
    {
        cpu->r[14] = 0x000eb3b4u; fn_000a6488(cpu);
    }
L_000eb3b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000190u, 0, 0);
    }
L_000eb3b8:;
    {
        cpu->r[14] = 0x000eb3bcu; fn_000a6488(cpu);
    }
L_000eb3bc:;
    {
        cpu->r[2] = rd32(0x000eb3c4u + + 0x4cu);
    }
L_000eb3c0:;
    {
        wr8(cpu->r[4] + + 0x9cu, cpu->r[6]);
    }
L_000eb3c4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000eb3c8:;
    {
        wr8(cpu->r[4] + + 0x9du, cpu->r[3]);
    }
L_000eb3cc:;
    {
        cpu->r[0] = 0x00005f60u;
    }
L_000eb3d0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000eb3d4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000eb3d8:;
    {
        wr8(cpu->r[4] + + 0x9eu, cpu->r[2]);
    }
L_000eb3dc:;
    {
        cpu->r[12] = 0x00005f52u;
    }
L_000eb3e0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000eb3e4:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000eb3e8:;
    {
        cpu->r[0] = rd8(cpu->r[1] + cpu->r[0]);
    }
L_000eb3ec:;
    {
        wr8(cpu->r[1] + cpu->r[12], cpu->r[3]);
    }
L_000eb3f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000eb3f4:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[2]);
    }
L_000eb3f8:;
    {
        wr32(cpu->r[4] + + 0xb8u, cpu->r[2]);
    }
L_000eb3fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000eb400:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x98u, cpu->r[3]);
        }
    }
L_000eb404:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000eb408u)) return;
    }
}

/* _ZN6gxMenu6OnBackEv @ 000eb414 (arm) */
void fn_000eb414(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000eb414:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_000eb418:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000eb41c:;
    {
        return fn_000f34e8(cpu);
    }
}
