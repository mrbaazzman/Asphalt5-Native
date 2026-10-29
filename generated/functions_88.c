#include "functions.h"

/* sub_00206658 @ 00206658 (arm) */
void fn_00206658(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00206658:;
    {
        cpu->r[12] = rd32(0x00206660u + + 0x4b0u);
    }
L_0020665c:;
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
L_00206660:;
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
L_00206664:;
    {
        cpu->r[12] = add_flags(cpu, 0x0020666cu, cpu->r[12], 0, 0);
    }
L_00206668:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 7u, &shc); cpu->r[10] = v;
    }
L_0020666c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_00206670:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_00206674:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[2], 0x00001180u, 0, 0);
    }
L_00206678:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[12], 0x00000800u, 0, 0);
    }
L_0020667c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x7cu);
    }
L_00206680:;
    {
        *vfp_s(cpu, 3) = *(float*)G(cpu->r[2] + + 0x6cu);
    }
L_00206684:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2] + + 0x50u);
    }
L_00206688:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + + 0x40u);
    }
L_0020668c:;
    {
        *vfp_s(cpu, 30) = *(float*)G(cpu->r[2]);
    }
L_00206690:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[2] + + 0x10u);
    }
L_00206694:;
    {
        vfp_vadd(cpu, 30, 30, 15);
    }
L_00206698:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[2] + + 0x2cu);
    }
L_0020669c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x78u);
    }
L_002066a0:;
    {
        *vfp_s(cpu, 25) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_002066a4:;
    {
        *vfp_s(cpu, 29) = *(float*)G(cpu->r[2] + + 0x38u);
    }
L_002066a8:;
    {
        *vfp_s(cpu, 31) = *(float*)G(cpu->r[2] + + 0x44u);
    }
L_002066ac:;
    {
        *vfp_s(cpu, 26) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_002066b0:;
    {
        *vfp_s(cpu, 22) = *(float*)G(cpu->r[2] + + 0x70u);
    }
L_002066b4:;
    {
        *vfp_s(cpu, 27) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_002066b8:;
    {
        *vfp_s(cpu, 28) = *(float*)G(cpu->r[2] + + 0x48u);
    }
L_002066bc:;
    {
        *vfp_s(cpu, 24) = *(float*)G(cpu->r[2] + + 0x74u);
    }
L_002066c0:;
    {
        *vfp_s(cpu, 23) = *(float*)G(cpu->r[2] + + 0x34u);
    }
L_002066c4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2] + + 0x4cu);
    }
L_002066c8:;
    {
        *vfp_s(cpu, 21) = *(float*)G(cpu->r[2] + + 0x30u);
    }
L_002066cc:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[2] + + 0x68u);
    }
L_002066d0:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2] + + 0x54u);
    }
L_002066d4:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[2] + + 0x14u);
    }
L_002066d8:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[2] + + 0x28u);
    }
L_002066dc:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[2] + + 0x64u);
    }
L_002066e0:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[2] + + 0x60u);
    }
L_002066e4:;
    {
        vfp_vadd(cpu, 20, 20, 3);
    }
L_002066e8:;
    {
        *vfp_s(cpu, 3) = *(float*)G(cpu->r[2] + + 0x3cu);
    }
L_002066ec:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[2] + + 0x5cu);
    }
L_002066f0:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[2] + + 0x58u);
    }
L_002066f4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[2] + + 0x18u);
    }
L_002066f8:;
    {
        *vfp_s(cpu, 1) = *(float*)G(cpu->r[2] + + 0x1cu);
    }
L_002066fc:;
    {
        *vfp_s(cpu, 2) = *(float*)G(cpu->r[2] + + 0x20u);
    }
L_00206700:;
    {
        *vfp_s(cpu, 0) = *(float*)G(cpu->r[2] + + 0x24u);
    }
L_00206704:;
    {
        cpu->r[9] = 0x00009e8du;
    }
L_00206708:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00206710u + + 0x3f4u);
    }
L_0020670c:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f00u << 16);
    }
L_00206710:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00206718u + + 0x3f0u);
    }
L_00206714:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00206718:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_0020671c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00206720:;
    {
        vfp_vadd(cpu, 19, 19, 11);
    }
L_00206724:;
    {
        vfp_vadd(cpu, 11, 3, 10);
    }
L_00206728:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[9];
    }
L_0020672c:;
    {
        cpu->r[9] = 0x0000c278u;
    }
L_00206730:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f05u << 16);
    }
L_00206734:;
    {
        vfp_vadd(cpu, 26, 26, 15);
    }
L_00206738:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00206740u + + 0x3ccu);
    }
L_0020673c:;
    {
        vfp_vadd(cpu, 22, 25, 22);
    }
L_00206740:;
    {
        vfp_vadd(cpu, 25, 29, 31);
    }
L_00206744:;
    {
        vfp_vadd(cpu, 24, 27, 24);
    }
L_00206748:;
    {
        vfp_vadd(cpu, 23, 23, 28);
    }
L_0020674c:;
    {
        vfp_vadd(cpu, 21, 21, 12);
    }
L_00206750:;
    {
        vfp_vadd(cpu, 18, 18, 4);
    }
L_00206754:;
    {
        vfp_vadd(cpu, 17, 17, 9);
    }
L_00206758:;
    {
        vfp_vadd(cpu, 16, 16, 5);
    }
L_0020675c:;
    {
        vfp_vadd(cpu, 1, 1, 6);
    }
L_00206760:;
    {
        vfp_vadd(cpu, 2, 2, 7);
    }
L_00206764:;
    {
        vfp_vadd(cpu, 0, 0, 8);
    }
L_00206768:;
    {
        vfp_vsub(cpu, 3, 30, 11);
    }
L_0020676c:;
    {
        vfp_vsub(cpu, 5, 26, 25);
    }
L_00206770:;
    {
        vfp_vsub(cpu, 7, 24, 23);
    }
L_00206774:;
    {
        vfp_vsub(cpu, 9, 22, 21);
    }
L_00206778:;
    {
        vfp_vsub(cpu, 12, 20, 19);
    }
L_0020677c:;
    {
        vfp_vsub(cpu, 8, 18, 17);
    }
L_00206780:;
    {
        vfp_vsub(cpu, 6, 16, 0);
    }
L_00206784:;
    {
        vfp_vsub(cpu, 4, 1, 2);
    }
L_00206788:;
    {
        vfp_vmul(cpu, 3, 3, 10);
    }
L_0020678c:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[9];
    }
L_00206790:;
    {
        cpu->r[9] = 0x0000233fu;
    }
L_00206794:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f11u << 16);
    }
L_00206798:;
    {
        vfp_vmul(cpu, 5, 5, 10);
    }
L_0020679c:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[9];
    }
L_002067a0:;
    {
        cpu->r[9] = 0x0000961du;
    }
L_002067a4:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f25u << 16);
    }
L_002067a8:;
    {
        vfp_vmul(cpu, 7, 7, 10);
    }
L_002067ac:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[9];
    }
L_002067b0:;
    {
        cpu->r[9] = 0x0000c480u;
    }
L_002067b4:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f49u << 16);
    }
L_002067b8:;
    {
        vfp_vmul(cpu, 9, 9, 10);
    }
L_002067bc:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[9];
    }
L_002067c0:;
    {
        cpu->r[9] = 0x0000c449u;
    }
L_002067c4:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f87u << 16);
    }
L_002067c8:;
    {
        vfp_vmul(cpu, 12, 12, 10);
    }
L_002067cc:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[9];
    }
L_002067d0:;
    {
        cpu->r[9] = 0x00007926u;
    }
L_002067d4:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3fdcu << 16);
    }
L_002067d8:;
    {
        vfp_vmul(cpu, 8, 8, 10);
    }
L_002067dc:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[9];
    }
L_002067e0:;
    {
        cpu->r[9] = 0x00003c9cu;
    }
L_002067e4:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x40a3u << 16);
    }
L_002067e8:;
    {
        vfp_vmul(cpu, 6, 6, 10);
    }
L_002067ec:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[9];
    }
L_002067f0:;
    {
        cpu->r[9] = 0x000081f7u;
    }
L_002067f4:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f02u << 16);
    }
L_002067f8:;
    {
        vfp_vmul(cpu, 4, 4, 10);
    }
L_002067fc:;
    {
        vfp_vsub(cpu, 28, 5, 6);
    }
L_00206800:;
    {
        vfp_vsub(cpu, 29, 3, 4);
    }
L_00206804:;
    {
        vfp_vsub(cpu, 27, 7, 8);
    }
L_00206808:;
    {
        vfp_vsub(cpu, 31, 9, 12);
    }
L_0020680c:;
    {
        vfp_vadd(cpu, 11, 30, 11);
    }
L_00206810:;
    {
        vfp_vadd(cpu, 2, 1, 2);
    }
L_00206814:;
    {
        *(uint32_t*)vfp_s(cpu,1) = cpu->r[9];
    }
L_00206818:;
    {
        cpu->r[9] = 0x0000f1bdu;
    }
L_0020681c:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f19u << 16);
    }
L_00206820:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[9];
    }
L_00206824:;
    {
        cpu->r[9] = 0x000064d7u;
    }
L_00206828:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f66u << 16);
    }
L_0020682c:;
    {
        vfp_vadd(cpu, 25, 26, 25);
    }
L_00206830:;
    {
        vfp_vadd(cpu, 21, 22, 21);
    }
L_00206834:;
    {
        vfp_vadd(cpu, 23, 24, 23);
    }
L_00206838:;
    {
        vfp_vadd(cpu, 19, 20, 19);
    }
L_0020683c:;
    {
        vfp_vadd(cpu, 17, 18, 17);
    }
L_00206840:;
    {
        vfp_vadd(cpu, 0, 16, 0);
    }
L_00206844:;
    {
        vfp_vmul(cpu, 16, 29, 1);
    }
L_00206848:;
    {
        vfp_vmul(cpu, 1, 28, 10);
    }
L_0020684c:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[9];
    }
L_00206850:;
    {
        cpu->r[9] = 0x000006cfu;
    }
L_00206854:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x4024u << 16);
    }
L_00206858:;
    {
        vfp_vmul(cpu, 20, 27, 10);
    }
L_0020685c:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[9];
    }
L_00206860:;
    {
        cpu->r[9] = 0x000081f7u;
    }
L_00206864:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f02u << 16);
    }
L_00206868:;
    {
        vfp_vmul(cpu, 22, 31, 10);
    }
L_0020686c:;
    {
        vfp_vadd(cpu, 4, 3, 4);
    }
L_00206870:;
    {
        vfp_vadd(cpu, 6, 5, 6);
    }
L_00206874:;
    {
        vfp_vadd(cpu, 8, 7, 8);
    }
L_00206878:;
    {
        vfp_vadd(cpu, 9, 9, 12);
    }
L_0020687c:;
    {
        vfp_vsub(cpu, 7, 11, 2);
    }
L_00206880:;
    {
        vfp_vsub(cpu, 3, 25, 0);
    }
L_00206884:;
    {
        vfp_vsub(cpu, 24, 23, 17);
    }
L_00206888:;
    {
        vfp_vsub(cpu, 5, 21, 19);
    }
L_0020688c:;
    {
        vfp_vsub(cpu, 12, 1, 20);
    }
L_00206890:;
    {
        vfp_vsub(cpu, 18, 16, 22);
    }
L_00206894:;
    {
        vfp_vadd(cpu, 29, 4, 9);
    }
L_00206898:;
    {
        vfp_vadd(cpu, 28, 6, 8);
    }
L_0020689c:;
    {
        vfp_vadd(cpu, 22, 16, 22);
    }
L_002068a0:;
    {
        vfp_vadd(cpu, 20, 1, 20);
    }
L_002068a4:;
    {
        *(uint32_t*)vfp_s(cpu,1) = cpu->r[9];
    }
L_002068a8:;
    {
        cpu->r[9] = 0x0000f1bdu;
    }
L_002068ac:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f19u << 16);
    }
L_002068b0:;
    {
        vfp_vmul(cpu, 7, 7, 1);
    }
L_002068b4:;
    {
        *(uint32_t*)vfp_s(cpu,1) = cpu->r[9];
    }
L_002068b8:;
    {
        cpu->r[9] = 0x000064d7u;
    }
L_002068bc:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f66u << 16);
    }
L_002068c0:;
    {
        vfp_vmul(cpu, 5, 5, 10);
    }
L_002068c4:;
    {
        vfp_vmul(cpu, 3, 3, 1);
    }
L_002068c8:;
    {
        *(uint32_t*)vfp_s(cpu,1) = cpu->r[9];
    }
L_002068cc:;
    {
        cpu->r[9] = 0x00009e8du;
    }
L_002068d0:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f00u << 16);
    }
L_002068d4:;
    {
        vfp_vmul(cpu, 24, 24, 1);
    }
L_002068d8:;
    {
        vfp_vmul(cpu, 18, 18, 13);
    }
L_002068dc:;
    {
        vfp_vmul(cpu, 1, 12, 14);
    }
L_002068e0:;
    {
        vfp_vsub(cpu, 16, 29, 28);
    }
L_002068e4:;
    {
        vfp_vsub(cpu, 27, 22, 20);
    }
L_002068e8:;
    {
        vfp_vsub(cpu, 30, 7, 5);
    }
L_002068ec:;
    {
        vfp_vsub(cpu, 26, 3, 24);
    }
L_002068f0:;
    {
        vfp_vsub(cpu, 12, 18, 1);
    }
L_002068f4:;
    {
        vfp_vmul(cpu, 16, 16, 15);
    }
L_002068f8:;
    {
        vfp_vmul(cpu, 27, 27, 15);
    }
L_002068fc:;
    {
        vfp_vmul(cpu, 31, 30, 13);
    }
L_00206900:;
    {
        vfp_vmul(cpu, 30, 26, 14);
    }
L_00206904:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_00206908:;
    {
        vfp_vadd(cpu, 2, 11, 2);
    }
L_0020690c:;
    {
        vfp_vadd(cpu, 19, 21, 19);
    }
L_00206910:;
    {
        vfp_vsub(cpu, 9, 4, 9);
    }
L_00206914:;
    {
        vfp_vadd(cpu, 4, 16, 27);
    }
L_00206918:;
    {
        vfp_vsub(cpu, 8, 6, 8);
    }
L_0020691c:;
    {
        vfp_vadd(cpu, 17, 23, 17);
    }
L_00206920:;
    {
        vfp_vadd(cpu, 0, 25, 0);
    }
L_00206924:;
    {
        vfp_vsub(cpu, 11, 31, 30);
    }
L_00206928:;
    {
        vfp_vadd(cpu, 4, 12, 4);
    }
L_0020692c:;
    {
        vfp_vadd(cpu, 7, 7, 5);
    }
L_00206930:;
    {
        vfp_vsub(cpu, 5, 2, 19);
    }
L_00206934:;
    {
        vfp_vadd(cpu, 3, 3, 24);
    }
L_00206938:;
    {
        vfp_vmul(cpu, 9, 9, 13);
    }
L_0020693c:;
    {
        vfp_vmul(cpu, 8, 8, 14);
    }
L_00206940:;
    {
        vfp_vsub(cpu, 6, 0, 17);
    }
L_00206944:;
    {
        vfp_vadd(cpu, 1, 18, 1);
    }
L_00206948:;
    {
        vfp_vadd(cpu, 20, 22, 20);
    }
L_0020694c:;
    {
        vfp_vmul(cpu, 11, 11, 15);
    }
L_00206950:;
    {
        vfp_vmul(cpu, 22, 5, 13);
    }
L_00206954:;
    {
        vfp_vneg(cpu, 5, 4);
    }
L_00206958:;
    {
        vfp_vsub(cpu, 18, 7, 3);
    }
L_0020695c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 5);
    }
L_00206960:;
    {
        vfp_vmul(cpu, 6, 6, 14);
    }
L_00206964:;
    {
        vfp_vadd(cpu, 20, 20, 1);
    }
L_00206968:;
    {
        vfp_vsub(cpu, 21, 9, 8);
    }
L_0020696c:;
    {
        vfp_vsub(cpu, 1, 5, 1);
    }
L_00206970:;
    {
        *vfp_s(cpu,10) = *vfp_s(cpu,11);
    }
L_00206974:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 1);
    }
L_00206978:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xd0u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_0020697c:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xc8u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00206980:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xf8u) = *(uint32_t*)vfp_s(cpu, 4);
    }
L_00206984:;
    {
        vfp_vmla(cpu, 10, 18, 15);
    }
L_00206988:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_0020698c:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x78u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_00206990:;
    {
        vfp_vadd(cpu, 7, 7, 3);
    }
L_00206994:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xf0u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_00206998:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_0020699c:;
    {
        vfp_vadd(cpu, 20, 12, 20);
    }
L_002069a0:;
    {
        vfp_vmul(cpu, 1, 21, 15);
    }
L_002069a4:;
    {
        vfp_vsub(cpu, 5, 22, 6);
    }
L_002069a8:;
    {
        vfp_vadd(cpu, 19, 2, 19);
    }
L_002069ac:;
    {
        vfp_vadd(cpu, 0, 0, 17);
    }
L_002069b0:;
    {
        vfp_vadd(cpu, 8, 9, 8);
    }
L_002069b4:;
    {
        vfp_vadd(cpu, 30, 31, 30);
    }
L_002069b8:;
    {
        vfp_vadd(cpu, 16, 16, 18);
    }
L_002069bc:;
    {
        vfp_vneg(cpu, 20, 20);
    }
L_002069c0:;
    {
        vfp_vadd(cpu, 6, 22, 6);
    }
L_002069c4:;
    {
        vfp_vneg(cpu, 7, 7);
    }
L_002069c8:;
    {
        vfp_vmul(cpu, 9, 5, 15);
    }
L_002069cc:;
    {
        vfp_vsub(cpu, 2, 19, 0);
    }
L_002069d0:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xe0u) = *(uint32_t*)vfp_s(cpu, 9);
    }
L_002069d4:;
    {
        vfp_vadd(cpu, 24, 1, 12);
    }
L_002069d8:;
    {
        vfp_vsub(cpu, 5, 20, 8);
    }
L_002069dc:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xd8u) = *(uint32_t*)vfp_s(cpu, 24);
    }
L_002069e0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 24);
    }
L_002069e4:;
    {
        vfp_vsub(cpu, 7, 7, 30);
    }
L_002069e8:;
    {
        vfp_vadd(cpu, 28, 29, 28);
    }
L_002069ec:;
    {
        vfp_vsub(cpu, 16, 16, 8);
    }
L_002069f0:;
    {
        vfp_vadd(cpu, 0, 19, 0);
    }
L_002069f4:;
    {
        vfp_vadd(cpu, 30, 30, 10);
    }
L_002069f8:;
    {
        vfp_vneg(cpu, 6, 6);
    }
L_002069fc:;
    {
        vfp_vmul(cpu, 25, 2, 15);
    }
L_00206a00:;
    {
        vfp_vadd(cpu, 27, 27, 24);
    }
L_00206a04:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x100u) = *(uint32_t*)vfp_s(cpu, 25);
    }
L_00206a08:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 25);
    }
L_00206a0c:;
    {
        vfp_vsub(cpu, 5, 5, 1);
    }
L_00206a10:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 27);
    }
L_00206a14:;
    {
        vfp_vsub(cpu, 6, 6, 9);
    }
L_00206a18:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x58u) = *(uint32_t*)vfp_s(cpu, 5);
    }
L_00206a1c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 5);
    }
L_00206a20:;
    {
        vfp_vsub(cpu, 7, 7, 11);
    }
L_00206a24:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x60u) = *(uint32_t*)vfp_s(cpu, 6);
    }
L_00206a28:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 6);
    }
L_00206a2c:;
    {
        vfp_vsub(cpu, 16, 16, 1);
    }
L_00206a30:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x50u) = *(uint32_t*)vfp_s(cpu, 7);
    }
L_00206a34:;
    {
        *vfp_s(cpu, 1) = *(float*)G(cpu->r[13] + + 0x2cu);
    }
L_00206a38:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 7);
    }
L_00206a3c:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xe8u) = *(uint32_t*)vfp_s(cpu, 1);
    }
L_00206a40:;
    {
        vfp_vsub(cpu, 28, 20, 28);
    }
L_00206a44:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x68u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00206a48:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00206a4c:;
    {
        vfp_vneg(cpu, 30, 30);
    }
L_00206a50:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x48u) = *(uint32_t*)vfp_s(cpu, 28);
    }
L_00206a54:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 28);
    }
L_00206a58:;
    {
        vfp_vneg(cpu, 0, 0);
    }
L_00206a5c:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x70u) = *(uint32_t*)vfp_s(cpu, 30);
    }
L_00206a60:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 30);
    }
L_00206a64:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x40u) = *(uint32_t*)vfp_s(cpu, 0);
    }
L_00206a68:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[2] + + 0x7cu);
    }
L_00206a6c:;
    {
        *vfp_s(cpu, 25) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00206a70:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00206a74:;
    {
        *vfp_s(cpu, 2) = *(float*)G(cpu->r[2] + + 0x70u);
    }
L_00206a78:;
    {
        *vfp_s(cpu, 3) = *(float*)G(cpu->r[2] + + 0x6cu);
    }
L_00206a7c:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[2] + + 0x68u);
    }
L_00206a80:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[2] + + 0x64u);
    }
L_00206a84:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[2] + + 0x60u);
    }
L_00206a88:;
    {
        *vfp_s(cpu, 26) = *(float*)G(cpu->r[2] + + 0x58u);
    }
L_00206a8c:;
    {
        *vfp_s(cpu, 27) = *(float*)G(cpu->r[2] + + 0x28u);
    }
L_00206a90:;
    {
        *vfp_s(cpu, 28) = *(float*)G(cpu->r[2] + + 0x2cu);
    }
L_00206a94:;
    {
        *vfp_s(cpu, 29) = *(float*)G(cpu->r[2] + + 0x50u);
    }
L_00206a98:;
    {
        *vfp_s(cpu, 30) = *(float*)G(cpu->r[2] + + 0x30u);
    }
L_00206a9c:;
    {
        *vfp_s(cpu, 31) = *(float*)G(cpu->r[2] + + 0x4cu);
    }
L_00206aa0:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[2] + + 0x40u);
    }
L_00206aa4:;
    {
        *vfp_s(cpu, 24) = *(float*)G(cpu->r[2] + + 0x44u);
    }
L_00206aa8:;
    {
        *vfp_s(cpu, 23) = *(float*)G(cpu->r[2]);
    }
L_00206aac:;
    {
        *vfp_s(cpu, 22) = *(float*)G(cpu->r[2] + + 0x78u);
    }
L_00206ab0:;
    {
        vfp_vsub(cpu, 23, 23, 7);
    }
L_00206ab4:;
    {
        *vfp_s(cpu, 21) = *(float*)G(cpu->r[2] + + 0x74u);
    }
L_00206ab8:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[2] + + 0x5cu);
    }
L_00206abc:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_00206ac0:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[2] + + 0x10u);
    }
L_00206ac4:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[2] + + 0x14u);
    }
L_00206ac8:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[2] + + 0x18u);
    }
L_00206acc:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[2] + + 0x1cu);
    }
L_00206ad0:;
    {
        *vfp_s(cpu, 0) = *(float*)G(cpu->r[2] + + 0x20u);
    }
L_00206ad4:;
    {
        *vfp_s(cpu, 1) = *(float*)G(cpu->r[2] + + 0x24u);
    }
L_00206ad8:;
    {
        vfp_vsub(cpu, 22, 25, 22);
    }
L_00206adc:;
    {
        *vfp_s(cpu, 25) = *(float*)G(cpu->r[2] + + 0x54u);
    }
L_00206ae0:;
    {
        vfp_vsub(cpu, 21, 10, 21);
    }
L_00206ae4:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + + 0x38u);
    }
L_00206ae8:;
    {
        vfp_vsub(cpu, 20, 20, 2);
    }
L_00206aec:;
    {
        vfp_vsub(cpu, 19, 19, 3);
    }
L_00206af0:;
    {
        vfp_vsub(cpu, 2, 27, 25);
    }
L_00206af4:;
    {
        *vfp_s(cpu, 25) = *(float*)G(cpu->r[2] + + 0x3cu);
    }
L_00206af8:;
    {
        vfp_vsub(cpu, 3, 28, 29);
    }
L_00206afc:;
    {
        vfp_vsub(cpu, 18, 18, 4);
    }
L_00206b00:;
    {
        goto L_00206b54;
    }
L_00206b54:;
    {
        vfp_vsub(cpu, 17, 17, 5);
    }
L_00206b58:;
    {
        vfp_vsub(cpu, 4, 30, 31);
    }
L_00206b5c:;
    {
        vfp_vsub(cpu, 16, 16, 6);
    }
L_00206b60:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[2] + + 0x34u);
    }
L_00206b64:;
    {
        vfp_vsub(cpu, 0, 0, 7);
    }
L_00206b68:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[2] + + 0x48u);
    }
L_00206b6c:;
    {
        vfp_vsub(cpu, 1, 1, 26);
    }
L_00206b70:;
    {
        vfp_vsub(cpu, 5, 6, 7);
    }
L_00206b74:;
    {
        vfp_vsub(cpu, 6, 10, 24);
    }
L_00206b78:;
    {
        *vfp_s(cpu, 24) = *(float*)G(0x00206b80u + - 0x6cu);
    }
L_00206b7c:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[9];
    }
L_00206b80:;
    {
        cpu->r[9] = 0x0000c278u;
    }
L_00206b84:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f05u << 16);
    }
L_00206b88:;
    {
        vfp_vsub(cpu, 7, 25, 8);
    }
L_00206b8c:;
    {
        vfp_vmul(cpu, 31, 23, 24);
    }
L_00206b90:;
    {
        *vfp_s(cpu, 23) = *(float*)G(0x00206b98u + - 0x80u);
    }
L_00206b94:;
    {
        vfp_vmul(cpu, 29, 22, 23);
    }
L_00206b98:;
    {
        *vfp_s(cpu, 22) = *(float*)G(0x00206ba0u + - 0x84u);
    }
L_00206b9c:;
    {
        vfp_vmul(cpu, 27, 21, 22);
    }
L_00206ba0:;
    {
        *vfp_s(cpu, 21) = *(float*)G(0x00206ba8u + - 0x88u);
    }
L_00206ba4:;
    {
        vfp_vmul(cpu, 25, 20, 21);
    }
L_00206ba8:;
    {
        *vfp_s(cpu, 20) = *(float*)G(0x00206bb0u + - 0x8cu);
    }
L_00206bac:;
    {
        vfp_vmul(cpu, 23, 19, 20);
    }
L_00206bb0:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x00206bb8u + - 0x90u);
    }
L_00206bb4:;
    {
        vfp_vmul(cpu, 21, 18, 19);
    }
L_00206bb8:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x00206bc0u + - 0x94u);
    }
L_00206bbc:;
    {
        vfp_vmul(cpu, 19, 17, 18);
    }
L_00206bc0:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00206bc8u + - 0x98u);
    }
L_00206bc4:;
    {
        vfp_vmul(cpu, 17, 16, 17);
    }
L_00206bc8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00206bd0u + - 0x9cu);
    }
L_00206bcc:;
    {
        vfp_vmul(cpu, 16, 0, 16);
    }
L_00206bd0:;
    {
        *vfp_s(cpu, 0) = *(float*)G(0x00206bd8u + - 0xa0u);
    }
L_00206bd4:;
    {
        vfp_vmul(cpu, 18, 1, 0);
    }
L_00206bd8:;
    {
        *vfp_s(cpu, 1) = *(float*)G(0x00206be0u + - 0xa4u);
    }
L_00206bdc:;
    {
        vfp_vmul(cpu, 20, 2, 1);
    }
L_00206be0:;
    {
        *vfp_s(cpu, 2) = *(float*)G(0x00206be8u + - 0xa8u);
    }
L_00206be4:;
    {
        vfp_vmul(cpu, 22, 3, 2);
    }
L_00206be8:;
    {
        *vfp_s(cpu, 3) = *(float*)G(0x00206bf0u + - 0xacu);
    }
L_00206bec:;
    {
        vfp_vmul(cpu, 24, 4, 3);
    }
L_00206bf0:;
    {
        *vfp_s(cpu, 4) = *(float*)G(0x00206bf8u + - 0xb0u);
    }
L_00206bf4:;
    {
        vfp_vmul(cpu, 26, 5, 4);
    }
L_00206bf8:;
    {
        *vfp_s(cpu, 5) = *(float*)G(0x00206c00u + - 0xb4u);
    }
L_00206bfc:;
    {
        vfp_vmul(cpu, 28, 6, 5);
    }
L_00206c00:;
    {
        *vfp_s(cpu, 6) = *(float*)G(0x00206c08u + - 0xb8u);
    }
L_00206c04:;
    {
        vfp_vmul(cpu, 30, 7, 6);
    }
L_00206c08:;
    {
        vfp_vsub(cpu, 3, 31, 30);
    }
L_00206c0c:;
    {
        vfp_vsub(cpu, 4, 29, 28);
    }
L_00206c10:;
    {
        vfp_vsub(cpu, 2, 17, 16);
    }
L_00206c14:;
    {
        vfp_vsub(cpu, 5, 27, 26);
    }
L_00206c18:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 2);
    }
L_00206c1c:;
    {
        vfp_vsub(cpu, 6, 25, 24);
    }
L_00206c20:;
    {
        vfp_vsub(cpu, 7, 23, 22);
    }
L_00206c24:;
    {
        vfp_vsub(cpu, 1, 21, 20);
    }
L_00206c28:;
    {
        vfp_vsub(cpu, 8, 19, 18);
    }
L_00206c2c:;
    {
        vfp_vmul(cpu, 0, 3, 10);
    }
L_00206c30:;
    {
        *(uint32_t*)vfp_s(cpu,3) = cpu->r[9];
    }
L_00206c34:;
    {
        cpu->r[9] = 0x0000233fu;
    }
L_00206c38:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f11u << 16);
    }
L_00206c3c:;
    {
        vfp_vmul(cpu, 2, 4, 3);
    }
L_00206c40:;
    {
        *(uint32_t*)vfp_s(cpu,3) = cpu->r[9];
    }
L_00206c44:;
    {
        cpu->r[9] = 0x0000961du;
    }
L_00206c48:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f25u << 16);
    }
L_00206c4c:;
    {
        vfp_vmul(cpu, 4, 5, 3);
    }
L_00206c50:;
    {
        *(uint32_t*)vfp_s(cpu,3) = cpu->r[9];
    }
L_00206c54:;
    {
        cpu->r[9] = 0x0000c480u;
    }
L_00206c58:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f49u << 16);
    }
L_00206c5c:;
    {
        vfp_vmul(cpu, 6, 6, 3);
    }
L_00206c60:;
    {
        *(uint32_t*)vfp_s(cpu,3) = cpu->r[9];
    }
L_00206c64:;
    {
        cpu->r[9] = 0x0000c449u;
    }
L_00206c68:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f87u << 16);
    }
L_00206c6c:;
    {
        vfp_vmul(cpu, 7, 7, 3);
    }
L_00206c70:;
    {
        *(uint32_t*)vfp_s(cpu,3) = cpu->r[9];
    }
L_00206c74:;
    {
        cpu->r[9] = 0x00007926u;
    }
L_00206c78:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3fdcu << 16);
    }
L_00206c7c:;
    {
        vfp_vmul(cpu, 5, 1, 3);
    }
L_00206c80:;
    {
        *(uint32_t*)vfp_s(cpu,1) = cpu->r[9];
    }
L_00206c84:;
    {
        cpu->r[9] = 0x00003c9cu;
    }
L_00206c88:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x40a3u << 16);
    }
L_00206c8c:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[9];
    }
L_00206c90:;
    {
        cpu->r[9] = 0x000081f7u;
    }
L_00206c94:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f02u << 16);
    }
L_00206c98:;
    {
        vfp_vadd(cpu, 31, 31, 30);
    }
L_00206c9c:;
    {
        vfp_vmul(cpu, 3, 8, 1);
    }
L_00206ca0:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_00206ca4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 31);
    }
L_00206ca8:;
    {
        vfp_vmul(cpu, 1, 8, 10);
    }
L_00206cac:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_00206cb0:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[9];
    }
L_00206cb4:;
    {
        cpu->r[9] = 0x0000f1bdu;
    }
L_00206cb8:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f19u << 16);
    }
L_00206cbc:;
    {
        vfp_vadd(cpu, 29, 29, 28);
    }
L_00206cc0:;
    {
        vfp_vadd(cpu, 31, 27, 26);
    }
L_00206cc4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 29);
    }
L_00206cc8:;
    {
        vfp_vadd(cpu, 20, 21, 20);
    }
L_00206ccc:;
    {
        vfp_vadd(cpu, 18, 19, 18);
    }
L_00206cd0:;
    {
        vfp_vadd(cpu, 30, 25, 24);
    }
L_00206cd4:;
    {
        vfp_vadd(cpu, 22, 23, 22);
    }
L_00206cd8:;
    {
        vfp_vadd(cpu, 16, 17, 16);
    }
L_00206cdc:;
    {
        vfp_vadd(cpu, 27, 0, 1);
    }
L_00206ce0:;
    {
        vfp_vadd(cpu, 25, 2, 3);
    }
L_00206ce4:;
    {
        vfp_vadd(cpu, 24, 4, 5);
    }
L_00206ce8:;
    {
        vfp_vadd(cpu, 26, 6, 7);
    }
L_00206cec:;
    {
        vfp_vsub(cpu, 21, 29, 18);
    }
L_00206cf0:;
    {
        vfp_vsub(cpu, 17, 31, 20);
    }
L_00206cf4:;
    {
        vfp_vsub(cpu, 19, 8, 16);
    }
L_00206cf8:;
    {
        vfp_vsub(cpu, 29, 30, 22);
    }
L_00206cfc:;
    {
        vfp_vsub(cpu, 3, 2, 3);
    }
L_00206d00:;
    {
        vfp_vsub(cpu, 28, 0, 1);
    }
L_00206d04:;
    {
        *(uint32_t*)vfp_s(cpu,1) = cpu->r[9];
    }
L_00206d08:;
    {
        cpu->r[9] = 0x000064d7u;
    }
L_00206d0c:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f66u << 16);
    }
L_00206d10:;
    {
        *(uint32_t*)vfp_s(cpu,2) = cpu->r[9];
    }
L_00206d14:;
    {
        cpu->r[9] = 0x000006cfu;
    }
L_00206d18:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x4024u << 16);
    }
L_00206d1c:;
    {
        vfp_vsub(cpu, 23, 27, 26);
    }
L_00206d20:;
    {
        vfp_vsub(cpu, 7, 6, 7);
    }
L_00206d24:;
    {
        vfp_vsub(cpu, 5, 4, 5);
    }
L_00206d28:;
    {
        vfp_vsub(cpu, 6, 25, 24);
    }
L_00206d2c:;
    {
        vfp_vmul(cpu, 0, 21, 1);
    }
L_00206d30:;
    {
        vfp_vmul(cpu, 1, 17, 2);
    }
L_00206d34:;
    {
        *(uint32_t*)vfp_s(cpu,2) = cpu->r[9];
    }
L_00206d38:;
    {
        cpu->r[9] = 0x0000f1bdu;
    }
L_00206d3c:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f19u << 16);
    }
L_00206d40:;
    {
        vfp_vmul(cpu, 19, 19, 10);
    }
L_00206d44:;
    {
        vfp_vmul(cpu, 17, 29, 2);
    }
L_00206d48:;
    {
        *(uint32_t*)vfp_s(cpu,2) = cpu->r[9];
    }
L_00206d4c:;
    {
        cpu->r[9] = 0x000064d7u;
    }
L_00206d50:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x3f66u << 16);
    }
L_00206d54:;
    {
        vfp_vmul(cpu, 3, 3, 2);
    }
L_00206d58:;
    {
        *(uint32_t*)vfp_s(cpu,2) = cpu->r[9];
    }
L_00206d5c:;
    {
        cpu->r[9] = 0x000006cfu;
    }
L_00206d60:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x4024u << 16);
    }
L_00206d64:;
    {
        vfp_vmul(cpu, 21, 28, 10);
    }
L_00206d68:;
    {
        vfp_vmul(cpu, 4, 5, 2);
    }
L_00206d6c:;
    {
        *(uint32_t*)vfp_s(cpu,5) = cpu->r[9];
    }
L_00206d70:;
    {
        vfp_vmul(cpu, 6, 6, 14);
    }
L_00206d74:;
    {
        vfp_vmul(cpu, 2, 7, 5);
    }
L_00206d78:;
    {
        vfp_vmul(cpu, 5, 23, 13);
    }
L_00206d7c:;
    {
        vfp_vsub(cpu, 29, 19, 17);
    }
L_00206d80:;
    {
        vfp_vsub(cpu, 28, 0, 1);
    }
L_00206d84:;
    {
        vfp_vadd(cpu, 7, 21, 2);
    }
L_00206d88:;
    {
        vfp_vadd(cpu, 10, 3, 4);
    }
L_00206d8c:;
    {
        vfp_vsub(cpu, 23, 5, 6);
    }
L_00206d90:;
    {
        vfp_vsub(cpu, 2, 21, 2);
    }
L_00206d94:;
    {
        vfp_vsub(cpu, 4, 3, 4);
    }
L_00206d98:;
    {
        vfp_vmul(cpu, 21, 28, 14);
    }
L_00206d9c:;
    {
        vfp_vmul(cpu, 3, 29, 13);
    }
L_00206da0:;
    {
        vfp_vsub(cpu, 28, 7, 10);
    }
L_00206da4:;
    {
        vfp_vmul(cpu, 23, 23, 15);
    }
L_00206da8:;
    {
        vfp_vadd(cpu, 17, 19, 17);
    }
L_00206dac:;
    {
        vfp_vadd(cpu, 1, 0, 1);
    }
L_00206db0:;
    {
        vfp_vadd(cpu, 6, 5, 6);
    }
L_00206db4:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_00206db8:;
    {
        vfp_vadd(cpu, 26, 27, 26);
    }
L_00206dbc:;
    {
        vfp_vadd(cpu, 24, 25, 24);
    }
L_00206dc0:;
    {
        vfp_vmul(cpu, 2, 2, 13);
    }
L_00206dc4:;
    {
        vfp_vmul(cpu, 4, 4, 14);
    }
L_00206dc8:;
    {
        vfp_vadd(cpu, 16, 8, 16);
    }
L_00206dcc:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[13] + + 0x30u);
    }
L_00206dd0:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x88u) = *(uint32_t*)vfp_s(cpu, 8);
    }
L_00206dd4:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_00206dd8:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x8u) = *(uint32_t*)vfp_s(cpu, 8);
    }
L_00206ddc:;
    {
        vfp_vadd(cpu, 18, 5, 18);
    }
L_00206de0:;
    {
        vfp_vadd(cpu, 20, 31, 20);
    }
L_00206de4:;
    {
        vfp_vmul(cpu, 5, 28, 15);
    }
L_00206de8:;
    {
        vfp_vadd(cpu, 22, 30, 22);
    }
L_00206dec:;
    {
        vfp_vsub(cpu, 25, 17, 1);
    }
L_00206df0:;
    {
        vfp_vsub(cpu, 27, 3, 21);
    }
L_00206df4:;
    {
        vfp_vadd(cpu, 6, 6, 23);
    }
L_00206df8:;
    {
        vfp_vsub(cpu, 19, 26, 24);
    }
L_00206dfc:;
    {
        vfp_vmul(cpu, 27, 27, 15);
    }
L_00206e00:;
    {
        vfp_vsub(cpu, 0, 2, 4);
    }
L_00206e04:;
    {
        vfp_vmul(cpu, 25, 25, 15);
    }
L_00206e08:;
    {
        vfp_vsub(cpu, 29, 16, 22);
    }
L_00206e0c:;
    {
        vfp_vsub(cpu, 28, 18, 20);
    }
L_00206e10:;
    {
        vfp_vadd(cpu, 16, 16, 22);
    }
L_00206e14:;
    {
        vfp_vadd(cpu, 18, 18, 20);
    }
L_00206e18:;
    {
        vfp_vadd(cpu, 4, 2, 4);
    }
L_00206e1c:;
    {
        vfp_vadd(cpu, 10, 7, 10);
    }
L_00206e20:;
    {
        vfp_vadd(cpu, 24, 26, 24);
    }
L_00206e24:;
    {
        vfp_vadd(cpu, 6, 5, 6);
    }
L_00206e28:;
    {
        vfp_vmul(cpu, 7, 19, 15);
    }
L_00206e2c:;
    {
        vfp_vmul(cpu, 2, 28, 14);
    }
L_00206e30:;
    {
        vfp_vmul(cpu, 13, 29, 13);
    }
L_00206e34:;
    {
        vfp_vmul(cpu, 14, 0, 15);
    }
L_00206e38:;
    {
        vfp_vsub(cpu, 22, 16, 18);
    }
L_00206e3c:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xc4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00206e40:;
    {
        vfp_vadd(cpu, 19, 25, 27);
    }
L_00206e44:;
    {
        vfp_vadd(cpu, 24, 24, 10);
    }
L_00206e48:;
    {
        vfp_vadd(cpu, 6, 4, 6);
    }
L_00206e4c:;
    {
        *vfp_s(cpu,8) = *vfp_s(cpu,7);
    }
L_00206e50:;
    {
        vfp_vmla(cpu, 8, 22, 15);
    }
L_00206e54:;
    {
        vfp_vsub(cpu, 0, 13, 2);
    }
L_00206e58:;
    {
        vfp_vadd(cpu, 7, 7, 19);
    }
L_00206e5c:;
    {
        vfp_vadd(cpu, 24, 4, 24);
    }
L_00206e60:;
    {
        vfp_vadd(cpu, 6, 14, 6);
    }
L_00206e64:;
    {
        vfp_vsub(cpu, 10, 5, 10);
    }
L_00206e68:;
    {
        vfp_vmul(cpu, 26, 0, 15);
    }
L_00206e6c:;
    {
        vfp_vneg(cpu, 6, 6);
    }
L_00206e70:;
    {
        vfp_vadd(cpu, 15, 27, 14);
    }
L_00206e74:;
    {
        vfp_vadd(cpu, 7, 5, 7);
    }
L_00206e78:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xccu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00206e7c:;
    {
        vfp_vadd(cpu, 24, 14, 24);
    }
L_00206e80:;
    {
        vfp_vadd(cpu, 10, 6, 10);
    }
L_00206e84:;
    {
        vfp_vadd(cpu, 1, 17, 1);
    }
L_00206e88:;
    {
        vfp_vadd(cpu, 20, 14, 7);
    }
L_00206e8c:;
    {
        vfp_vneg(cpu, 24, 24);
    }
L_00206e90:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xf4u) = *(uint32_t*)vfp_s(cpu, 20);
    }
L_00206e94:;
    {
        vfp_vadd(cpu, 7, 23, 15);
    }
L_00206e98:;
    {
        vfp_vadd(cpu, 22, 5, 8);
    }
L_00206e9c:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xd4u) = *(uint32_t*)vfp_s(cpu, 7);
    }
L_00206ea0:;
    {
        vfp_vadd(cpu, 3, 3, 21);
    }
L_00206ea4:;
    {
        vfp_vsub(cpu, 19, 24, 1);
    }
L_00206ea8:;
    {
        vfp_vsub(cpu, 0, 6, 25);
    }
L_00206eac:;
    {
        vfp_vadd(cpu, 13, 13, 2);
    }
L_00206eb0:;
    {
        *vfp_s(cpu, 2) = *(float*)G(cpu->r[13] + + 0x2cu);
    }
L_00206eb4:;
    {
        vfp_vsub(cpu, 1, 10, 1);
    }
L_00206eb8:;
    {
        vfp_vadd(cpu, 23, 26, 23);
    }
L_00206ebc:;
    {
        vfp_vadd(cpu, 22, 14, 22);
    }
L_00206ec0:;
    {
        vfp_vneg(cpu, 20, 20);
    }
L_00206ec4:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xfcu) = *(uint32_t*)vfp_s(cpu, 22);
    }
L_00206ec8:;
    {
        vfp_vadd(cpu, 25, 25, 7);
    }
L_00206ecc:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x8cu) = *(uint32_t*)vfp_s(cpu, 20);
    }
L_00206ed0:;
    {
        vfp_vadd(cpu, 23, 14, 23);
    }
L_00206ed4:;
    {
        vfp_vadd(cpu, 16, 16, 18);
    }
L_00206ed8:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_00206edc:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xdcu) = *(uint32_t*)vfp_s(cpu, 23);
    }
L_00206ee0:;
    {
        vfp_vsub(cpu, 19, 19, 3);
    }
L_00206ee4:;
    {
        vfp_vsub(cpu, 0, 0, 3);
    }
L_00206ee8:;
    {
        vfp_vsub(cpu, 10, 10, 13);
    }
L_00206eec:;
    {
        vfp_vsub(cpu, 1, 1, 3);
    }
L_00206ef0:;
    {
        vfp_vsub(cpu, 13, 6, 13);
    }
L_00206ef4:;
    {
        vfp_vsub(cpu, 3, 20, 3);
    }
L_00206ef8:;
    {
        vfp_vadd(cpu, 25, 5, 25);
    }
L_00206efc:;
    {
        vfp_vneg(cpu, 22, 22);
    }
L_00206f00:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xecu) = *(uint32_t*)vfp_s(cpu, 25);
    }
L_00206f04:;
    {
        vfp_vadd(cpu, 5, 5, 23);
    }
L_00206f08:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x84u) = *(uint32_t*)vfp_s(cpu, 22);
    }
L_00206f0c:;
    {
        vfp_vsub(cpu, 10, 10, 26);
    }
L_00206f10:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xe4u) = *(uint32_t*)vfp_s(cpu, 5);
    }
L_00206f14:;
    {
        vfp_vsub(cpu, 19, 19, 27);
    }
L_00206f18:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x5cu) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_00206f1c:;
    {
        vfp_vsub(cpu, 3, 3, 4);
    }
L_00206f20:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x4cu) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_00206f24:;
    {
        vfp_vsub(cpu, 0, 0, 27);
    }
L_00206f28:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x74u) = *(uint32_t*)vfp_s(cpu, 3);
    }
L_00206f2c:;
    {
        vfp_vsub(cpu, 1, 1, 27);
    }
L_00206f30:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x6cu) = *(uint32_t*)vfp_s(cpu, 0);
    }
L_00206f34:;
    {
        vfp_vsub(cpu, 16, 24, 16);
    }
L_00206f38:;
    {
        *vfp_s(cpu, 24) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_00206f3c:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x54u) = *(uint32_t*)vfp_s(cpu, 1);
    }
L_00206f40:;
    {
        vfp_vsub(cpu, 4, 22, 4);
    }
L_00206f44:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x44u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00206f48:;
    {
        vfp_vsub(cpu, 13, 13, 26);
    }
L_00206f4c:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 4);
    }
L_00206f50:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x7cu) = *(uint32_t*)vfp_s(cpu, 4);
    }
L_00206f54:;
    {
        vfp_vneg(cpu, 8, 18);
    }
L_00206f58:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x64u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00206f5c:;
    {
        vfp_vneg(cpu, 6, 24);
    }
L_00206f60:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x80u) = *(uint32_t*)vfp_s(cpu, 8);
    }
L_00206f64:;
    {
        vfp_vneg(cpu, 9, 9);
    }
L_00206f68:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x90u) = *(uint32_t*)vfp_s(cpu, 6);
    }
L_00206f6c:;
    {
        vfp_vneg(cpu, 25, 25);
    }
L_00206f70:;
    {
        vfp_vneg(cpu, 5, 5);
    }
L_00206f74:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x94u) = *(uint32_t*)vfp_s(cpu, 25);
    }
L_00206f78:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xa0u) = *(uint32_t*)vfp_s(cpu, 9);
    }
L_00206f7c:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[13] + + 0x18u);
    }
L_00206f80:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[13] + + 0x34u);
    }
L_00206f84:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x24u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_00206f88:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[13] + + 0x3cu);
    }
L_00206f8c:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[13] + + 0x38u);
    }
L_00206f90:;
    {
        vfp_vneg(cpu, 9, 4);
    }
L_00206f94:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x9cu) = *(uint32_t*)vfp_s(cpu, 5);
    }
L_00206f98:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xcu) = *(uint32_t*)vfp_s(cpu, 3);
    }
L_00206f9c:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_00206fa0:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x14u) = *(uint32_t*)vfp_s(cpu, 0);
    }
L_00206fa4:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x10u) = *(uint32_t*)vfp_s(cpu, 5);
    }
L_00206fa8:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x18u) = *(uint32_t*)vfp_s(cpu, 6);
    }
L_00206fac:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x1cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00206fb0:;
    {
        vfp_vneg(cpu, 7, 7);
    }
L_00206fb4:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xa8u) = *(uint32_t*)vfp_s(cpu, 9);
    }
L_00206fb8:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x28u) = *(uint32_t*)vfp_s(cpu, 8);
    }
L_00206fbc:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[13] + + 0x28u);
    }
L_00206fc0:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x2cu) = *(uint32_t*)vfp_s(cpu, 1);
    }
L_00206fc4:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x30u) = *(uint32_t*)vfp_s(cpu, 9);
    }
L_00206fc8:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x34u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_00206fcc:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x38u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_00206fd0:;
    {
        vfp_vneg(cpu, 27, 2);
    }
L_00206fd4:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xacu) = *(uint32_t*)vfp_s(cpu, 7);
    }
L_00206fd8:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x3cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00206fdc:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_00206fe0:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x20u) = *(uint32_t*)vfp_s(cpu, 7);
    }
L_00206fe4:;
    {
        vfp_vneg(cpu, 23, 23);
    }
L_00206fe8:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x98u) = *(uint32_t*)vfp_s(cpu, 27);
    }
L_00206fec:;
    {
        vfp_vneg(cpu, 11, 11);
    }
L_00206ff0:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xa4u) = *(uint32_t*)vfp_s(cpu, 23);
    }
L_00206ff4:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_00206ff8:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xb0u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00206ffc:;
    {
        vfp_vneg(cpu, 12, 12);
    }
L_00207000:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xb4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00207004:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_00207008:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xb8u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0020700c:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xbcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00207010:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x80u);
    }
L_00207014:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00207018:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0020701c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[5] + - 0x100u);
    }
L_00207020:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4]);
    }
L_00207024:;
    {
        *vfp_s(cpu, 28) = *(float*)G(cpu->r[5] + + 0x100u);
    }
L_00207028:;
    {
        *vfp_s(cpu, 27) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_0020702c:;
    {
        *vfp_s(cpu, 26) = *(float*)G(cpu->r[5] + + 0x280u);
    }
L_00207030:;
    {
        *vfp_s(cpu, 25) = *(float*)G(cpu->r[4] + + 0xcu);
    }
L_00207034:;
    {
        *vfp_s(cpu, 24) = *(float*)G(cpu->r[5] + + 0x300u);
    }
L_00207038:;
    {
        *vfp_s(cpu, 23) = *(float*)G(cpu->r[4] + + 0x10u);
    }
L_0020703c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000480u, 0, 0);
    }
L_00207040:;
    {
        *vfp_s(cpu, 21) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_00207044:;
    {
        *vfp_s(cpu, 22) = *(float*)G(cpu->r[9]);
    }
L_00207048:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[4] + + 0x18u);
    }
L_0020704c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000500u, 0, 0);
    }
L_00207050:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[9]);
    }
L_00207054:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[4] + + 0x1cu);
    }
L_00207058:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000680u, 0, 0);
    }
L_0020705c:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[9]);
    }
L_00207060:;
    {
        *vfp_s(cpu, 0) = *(float*)G(cpu->r[4] + + 0x20u);
    }
L_00207064:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000700u, 0, 0);
    }
L_00207068:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[9]);
    }
L_0020706c:;
    {
        *vfp_s(cpu, 2) = *(float*)G(cpu->r[4] + + 0x24u);
    }
L_00207070:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000880u, 0, 0);
    }
L_00207074:;
    {
        *vfp_s(cpu, 1) = *(float*)G(cpu->r[9]);
    }
L_00207078:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_0020707c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000900u, 0, 0);
    }
L_00207080:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[4] + + 0x28u);
    }
L_00207084:;
    {
        *vfp_s(cpu, 3) = *(float*)G(cpu->r[9]);
    }
L_00207088:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[4] + + 0x2cu);
    }
L_0020708c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000a80u, 0, 0);
    }
L_00207090:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[9]);
    }
L_00207094:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[4] + + 0x30u);
    }
L_00207098:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000b00u, 0, 0);
    }
L_0020709c:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[9]);
    }
L_002070a0:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4] + + 0x34u);
    }
L_002070a4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000c80u, 0, 0);
    }
L_002070a8:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[9]);
    }
L_002070ac:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x38u);
    }
L_002070b0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000d00u, 0, 0);
    }
L_002070b4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[9]);
    }
L_002070b8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x3cu);
    }
L_002070bc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000e80u, 0, 0);
    }
L_002070c0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[9]);
    }
L_002070c4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000040u, 0, 0);
    }
L_002070c8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_002070cc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_002070d0:;
    {
        vfp_vmla(cpu, 15, 28, 27);
    }
L_002070d4:;
    {
        vfp_vmla(cpu, 15, 26, 25);
    }
L_002070d8:;
    {
        vfp_vmla(cpu, 15, 24, 23);
    }
L_002070dc:;
    {
        vfp_vmla(cpu, 15, 22, 21);
    }
L_002070e0:;
    {
        vfp_vmla(cpu, 15, 20, 19);
    }
L_002070e4:;
    {
        vfp_vmla(cpu, 15, 18, 17);
    }
L_002070e8:;
    {
        vfp_vmla(cpu, 15, 16, 0);
    }
L_002070ec:;
    {
        vfp_vmla(cpu, 15, 1, 2);
    }
L_002070f0:;
    {
        vfp_vmla(cpu, 15, 3, 4);
    }
L_002070f4:;
    {
        vfp_vmla(cpu, 15, 5, 6);
    }
L_002070f8:;
    {
        vfp_vmla(cpu, 15, 7, 8);
    }
L_002070fc:;
    {
        vfp_vmla(cpu, 15, 9, 10);
    }
L_00207100:;
    {
        vfp_vmla(cpu, 15, 11, 12);
    }
L_00207104:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_00207108:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0020710c:;
    {
        uint32_t wb_tmp = cpu->r[6] + cpu->r[3];
        wr32(cpu->r[6], cpu->r[9]);
        cpu->r[6] = wb_tmp;
    }
L_00207110:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00207010;
        }
    }
L_00207114:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 1);
    }
L_00207118:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000100u, 1, 0);
        }
    }
L_0020711c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
        }
    }
L_00207120:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000080u, 0, 0);
        }
    }
L_00207124:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020667c;
        }
    }
L_00207128:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_0020712c:;
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
L_00207130:;
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
L_00207134:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mpc_random_int @ 00207138 (arm) */
void fn_00207138(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207138:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0020713c:;
    {
        cpu->r[0] = rd32(0x00207144u + + 0x48u);
    }
L_00207140:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00207144:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x2cu);
    }
L_00207148:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x28u);
    }
L_0020714c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00207154u, cpu->r[0], 0, 0);
    }
L_00207150:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 25u, &shc); cpu->r[4] = v;
    }
L_00207154:;
    {
        uint32_t v = cpu->r[2] & 0x000000f5u; cpu->r[12] = v;
    }
L_00207158:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_0020715c:;
    {
        uint32_t v = cpu->r[4] & 0x00000063u; cpu->r[4] = v;
    }
L_00207160:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_00207164:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 1u, &shc); cpu->r[2] = v;
    }
L_00207168:;
    {
        cpu->r[12] = rd8(cpu->r[12] + + 0x800u);
    }
L_0020716c:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x800u);
    }
L_00207170:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[12], 2, 31u, &shc); cpu->r[2] = v;
    }
L_00207174:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_00207178:;
    {
        uint32_t v = cpu->r[1] ^ cpu->r[2]; cpu->r[0] = v;
    }
L_0020717c:;
    {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[1]);
    }
L_00207180:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[2]);
    }
L_00207184:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00207188:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mpc_decoder_synthese_filter_float @ 00207190 (arm) */
void fn_00207190(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207190:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00207194:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207198:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001780u, 0, 0);
    }
L_0020719c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_002071a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_002071a4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_002071a8:;
    {
        cpu->r[2] = 0x00000f00u;
    }
L_002071ac:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_002071b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00002400u, 0, 0);
    }
L_002071b4:;
    {
        cpu->r[14] = 0x002071b8u; imp_memmove(cpu); /* memmove */
    }
L_002071b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00003b80u, 0, 0);
    }
L_002071bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00007d00u, 0, 0);
    }
L_002071c0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_002071c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_002071c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000090u, 0, 0);
    }
L_002071cc:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_002071d0:;
    {
        cpu->r[14] = 0x002071d4u; fn_00206658(cpu);
    }
L_002071d4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_002071d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x002071dcu)) return;
        }
    }
L_002071dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00004a00u, 0, 0);
    }
L_002071e0:;
    {
        cpu->r[2] = 0x00000f00u;
    }
L_002071e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000090u, 0, 0);
    }
L_002071e8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_002071ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00002400u, 0, 0);
    }
L_002071f0:;
    {
        cpu->r[14] = 0x002071f4u; imp_memmove(cpu); /* memmove */
    }
L_002071f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00008f00u, 0, 0);
    }
L_002071f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00006e00u, 0, 0);
    }
L_002071fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00207200:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000090u, 0, 0);
    }
L_00207204:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000090u, 0, 0);
    }
L_00207208:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0020720c:;
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
L_00207210:;
    {
        return fn_00206658(cpu);
    }
}

/* sub_00207214 @ 00207214 (arm) */
void fn_00207214(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207214:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00207218:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_0020721c:;
    {
        cpu->r[3] = (~shifter(cpu->r[3], 2, (cpu->r[2] & 0xffu), &shc));
        set_nz(cpu, cpu->r[3]);
        if (shc) cpu->cpsr = (cpu->cpsr & ~0x20000000u) | 0x20000000u;
    }
L_00207220:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000010u, cpu->r[2], 1, 0);
    }
L_00207224:;
    {
        if (cond_test(cpu, 5)) {
        goto L_002072a0;
        }
    }
L_00207228:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0020722c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00207230:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_00207234:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[12] = v;
    }
L_00207238:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_0020723c:;
    {
        cpu->r[12] = rd16(cpu->r[0] + cpu->r[12]);
    }
L_00207240:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[12], 1, (cpu->r[7] & 0xffu), &shc), 1, 1);
    }
L_00207244:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0020727c;
        }
    }
L_00207248:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x2u);
    }
L_0020724c:;
    {
        wr8(cpu->r[1], cpu->r[12]);
    }
L_00207250:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x3u);
    }
L_00207254:;
    {
        wr8(cpu->r[1] + + 0x1u, cpu->r[12]);
    }
L_00207258:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0020725c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 0);
    }
L_00207260:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00207264:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002072a0;
        }
    }
L_00207268:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[12] = v;
    }
L_0020726c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_00207270:;
    {
        cpu->r[12] = rd16(cpu->r[0] + cpu->r[12]);
    }
L_00207274:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[12], 1, (cpu->r[7] & 0xffu), &shc), 1, 1);
    }
L_00207278:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00207248;
        }
    }
L_0020727c:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x2u);
    }
L_00207280:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00207284:;
    {
        if (cond_test(cpu, 12)) {
        wr8(cpu->r[1], cpu->r[8]);
        }
    }
L_00207288:;
    {
        if (cond_test(cpu, 11)) {
        wr8(cpu->r[1], cpu->r[12]);
        }
    }
L_0020728c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = rd8(cpu->r[4] + + 0x3u);
        }
    }
L_00207290:;
    {
        if (cond_test(cpu, 12)) {
        wr8(cpu->r[1] + + 0x1u, cpu->r[6]);
        }
    }
L_00207294:;
    {
        if (cond_test(cpu, 11)) {
        wr8(cpu->r[1] + + 0x1u, cpu->r[12]);
        }
    }
L_00207298:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0020729c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002072a8;
        }
    }
L_002072a0:;
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
L_002072a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_002072a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_002072ac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_002072b0:;
    {
        uint32_t wb_tmp = cpu->r[4] + 0x00000004u;
        cpu->r[5] = rd16(cpu->r[4]);
        cpu->r[4] = wb_tmp;
    }
L_002072b4:;
    {
        cpu->r[6] = cpu->r[12];
    }
L_002072b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_002072bc:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[5], 1, (cpu->r[7] & 0xffu), &shc), 1, 1);
    }
L_002072c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002072b0;
        }
    }
L_002072c4:;
    {
        goto L_00207258;
    }
}

/* sub_002072c8 @ 002072c8 (arm) */
void fn_002072c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002072c8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_002072cc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[10]);
    }
L_002072d0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[2] = v;
    }
L_002072d4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_002072d8:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000010u, cpu->r[1], 1, 0);
    }
L_002072dc:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[7] = v0;
        cpu->r[10] = v1;
    }
L_002072e0:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00207394;
        }
    }
L_002072e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_002072e8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_002072ec:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_002072f0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_002072f4:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[0] = v;
    }
L_002072f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_002072fc:;
    {
        cpu->r[0] = rd16(cpu->r[7] + cpu->r[0]);
    }
L_00207300:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, (cpu->r[6] & 0xffu), &shc), 1, 1);
    }
L_00207304:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0020735c;
        }
    }
L_00207308:;
    {
        cpu->r[0] = rd8(cpu->r[2] + + 0x2u);
    }
L_0020730c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_00207310:;
    {
        if (cond_test(cpu, 12)) {
        wr8(cpu->r[5] + - 0x2u, cpu->r[8]);
        }
    }
L_00207314:;
    {
        if (cond_test(cpu, 11)) {
        wr8(cpu->r[5] + - 0x2u, cpu->r[0]);
        }
    }
L_00207318:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = rd8(cpu->r[2] + + 0x2u);
        }
    }
L_0020731c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = (uint32_t)(int32_t)s8(cpu->r[2] + + 0x3u);
        }
    }
L_00207320:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
        }
    }
L_00207324:;
    {
        if (cond_test(cpu, 12)) {
        wr8(cpu->r[5] + - 0x1u, cpu->r[4]);
        }
    }
L_00207328:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[3], 1, (cpu->r[2] & 0xffu), &shc), 1, 0);
        }
    }
L_0020732c:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = cpu->r[2] & 0x000000ffu; cpu->r[2] = v;
        }
    }
L_00207330:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd8(cpu->r[10] + cpu->r[2]);
        }
    }
L_00207334:;
    {
        if (cond_test(cpu, 11)) {
        wr8(cpu->r[5] + - 0x1u, cpu->r[2]);
        }
    }
L_00207338:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0020733c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 0);
    }
L_00207340:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00207344:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00207394;
        }
    }
L_00207348:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0020734c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_00207350:;
    {
        cpu->r[0] = rd16(cpu->r[7] + cpu->r[0]);
    }
L_00207354:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, (cpu->r[6] & 0xffu), &shc), 1, 1);
    }
L_00207358:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00207308;
        }
    }
L_0020735c:;
    {
        cpu->r[0] = rd8(cpu->r[2] + + 0x2u);
    }
L_00207360:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_00207364:;
    {
        if (cond_test(cpu, 12)) {
        wr8(cpu->r[5] + - 0x2u, cpu->r[8]);
        }
    }
L_00207368:;
    {
        if (cond_test(cpu, 11)) {
        wr8(cpu->r[5] + - 0x2u, cpu->r[0]);
        }
    }
L_0020736c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = rd8(cpu->r[2] + + 0x2u);
        }
    }
L_00207370:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = (uint32_t)(int32_t)s8(cpu->r[2] + + 0x3u);
        }
    }
L_00207374:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
        }
    }
L_00207378:;
    {
        if (cond_test(cpu, 12)) {
        wr8(cpu->r[5] + - 0x1u, cpu->r[4]);
        }
    }
L_0020737c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[3], 1, (cpu->r[2] & 0xffu), &shc), 1, 0);
        }
    }
L_00207380:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = cpu->r[2] & 0x000000ffu; cpu->r[2] = v;
        }
    }
L_00207384:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd8(cpu->r[10] + cpu->r[2]);
        }
    }
L_00207388:;
    {
        if (cond_test(cpu, 11)) {
        wr8(cpu->r[5] + - 0x1u, cpu->r[2]);
        }
    }
L_0020738c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00207390:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020739c;
        }
    }
L_00207394:;
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
L_00207398:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0020739c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_002073a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_002073a4:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000004u;
        cpu->r[12] = rd16(cpu->r[0]);
        cpu->r[0] = wb_tmp;
    }
L_002073a8:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_002073ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_002073b0:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[12], 1, (cpu->r[6] & 0xffu), &shc), 1, 1);
    }
L_002073b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002073a4;
        }
    }
L_002073b8:;
    {
        goto L_00207338;
    }
}

/* huff_init_lut @ 002073bc (arm) */
void fn_002073bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002073bc:;
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
L_002073c0:;
    {
        cpu->r[7] = rd32(0x002073c8u + + 0x164u);
    }
L_002073c4:;
    {
        cpu->r[3] = rd32(0x002073ccu + + 0x164u);
    }
L_002073c8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_002073cc:;
    {
        cpu->r[7] = add_flags(cpu, 0x002073d4u, cpu->r[7], 0, 0);
    }
L_002073d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_002073d4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_002073d8:;
    {
        cpu->r[11] = rd32(0x002073e0u + + 0x154u);
    }
L_002073dc:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_002073e0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_002073e4:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000004u;
        cpu->r[0] = rd32(cpu->r[1]);
        cpu->r[1] = wb_tmp;
    }
L_002073e8:;
    {
        cpu->r[14] = 0x002073ecu; fn_00207214(cpu);
    }
L_002073ec:;
    {
        cpu->r[3] = rd32(0x002073f4u + + 0x144u);
    }
L_002073f0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_002073f4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_002073f8:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000004u;
        cpu->r[0] = rd32(cpu->r[1]);
        cpu->r[1] = wb_tmp;
    }
L_002073fc:;
    {
        cpu->r[14] = 0x00207400u; fn_00207214(cpu);
    }
L_00207400:;
    {
        cpu->r[3] = rd32(0x00207408u + + 0x134u);
    }
L_00207404:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00207408:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0020740c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00207410:;
    {
        cpu->r[14] = 0x00207414u; fn_002072c8(cpu);
    }
L_00207414:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000088u, 0, 0);
    }
L_00207418:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0020741c:;
    {
        cpu->r[14] = 0x00207420u; fn_002072c8(cpu);
    }
L_00207420:;
    {
        cpu->r[3] = rd32(0x00207428u + + 0x118u);
    }
L_00207424:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00207428:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0020742c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00207430:;
    {
        cpu->r[14] = 0x00207434u; fn_002072c8(cpu);
    }
L_00207434:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000088u, 0, 0);
    }
L_00207438:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0020743c:;
    {
        cpu->r[14] = 0x00207440u; fn_002072c8(cpu);
    }
L_00207440:;
    {
        cpu->r[3] = rd32(0x00207448u + + 0xfcu);
    }
L_00207444:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00207448:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0020744c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00207450:;
    {
        cpu->r[14] = 0x00207454u; fn_002072c8(cpu);
    }
L_00207454:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000088u, 0, 0);
    }
L_00207458:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0020745c:;
    {
        cpu->r[14] = 0x00207460u; fn_002072c8(cpu);
    }
L_00207460:;
    {
        cpu->r[3] = rd32(0x00207468u + + 0xe0u);
    }
L_00207464:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00207468:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0020746c:;
    {
        cpu->r[14] = 0x00207470u; fn_002072c8(cpu);
    }
L_00207470:;
    {
        cpu->r[3] = rd32(0x00207478u + + 0xd4u);
    }
L_00207474:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00207478:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0020747c:;
    {
        cpu->r[14] = 0x00207480u; fn_002072c8(cpu);
    }
L_00207480:;
    {
        cpu->r[3] = rd32(0x00207488u + + 0xc8u);
    }
L_00207484:;
    {
        cpu->r[10] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_00207488:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0020748c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00207490:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00207494:;
    {
        cpu->r[14] = 0x00207498u; fn_002072c8(cpu);
    }
L_00207498:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 5u, &shc), 0, 0);
    }
L_0020749c:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_002074a0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_002074a4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 3u, &shc); cpu->r[9] = v;
    }
L_002074a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_002074ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[9], 0, 0);
    }
L_002074b0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + shifter(cpu->r[3], 2, 3u, &shc));
    }
L_002074b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_002074b8:;
    {
        cpu->r[14] = 0x002074bcu; fn_00207214(cpu);
    }
L_002074bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000088u, 0, 0);
    }
L_002074c0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_002074c4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000110u, 0, 0);
    }
L_002074c8:;
    {
        cpu->r[14] = 0x002074ccu; fn_002072c8(cpu);
    }
L_002074cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[9], 0, 0);
    }
L_002074d0:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x84u);
    }
L_002074d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000088u, 0, 0);
    }
L_002074d8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_002074dc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000108u, 0, 0);
    }
L_002074e0:;
    {
        cpu->r[14] = 0x002074e4u; fn_00207214(cpu);
    }
L_002074e4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000007u, 1, 1);
    }
L_002074e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00207524;
        }
    }
L_002074ec:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000006u, 1, 1);
    }
L_002074f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020748c;
        }
    }
L_002074f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000630u, 0, 0);
    }
L_002074f8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x630u);
    }
L_002074fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00207500:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00207504:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00207508:;
    {
        cpu->r[14] = 0x0020750cu; fn_00207214(cpu);
    }
L_0020750c:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x84u);
    }
L_00207510:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000084u, 0, 0);
    }
L_00207514:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00207518:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0020751c:;
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
L_00207520:;
    {
        return fn_00207214(cpu);
    }
L_00207524:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00207528:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0020752cu)) return;
    }
}

/* _ZNSt9exceptionC2Ev @ 00207554 (thumb) */
void fn_00207554(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207554:;
    {
        cpu->r[3] = rd32(0x00207558u + + 0xcu);
    }
L_00207556:;
    {
        cpu->r[2] = rd32(0x00207558u + + 0x10u);
    }
L_00207558:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0020755cu, 0, 0);
    }
L_0020755a:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0020755c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_0020755e:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00207560:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNSt9exceptionC1Ev @ 0020756c (thumb) */
void fn_0020756c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0020756c:;
    {
        cpu->r[3] = rd32(0x00207570u + + 0xcu);
    }
L_0020756e:;
    {
        cpu->r[2] = rd32(0x00207570u + + 0x10u);
    }
L_00207570:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00207574u, 0, 0);
    }
L_00207572:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00207574:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_00207576:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00207578:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNSt9exceptionD2Ev @ 00207584 (thumb) */
void fn_00207584(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207584:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNSt9exceptionD1Ev @ 00207588 (thumb) */
void fn_00207588(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207588:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNSt13bad_exceptionC2Ev @ 0020758c (thumb) */
void fn_0020758c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0020758c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0020758e:;
    {
        cpu->r[4] = rd32(0x00207590u + + 0x14u);
    }
L_00207590:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00207592:;
    {
        cpu->r[14] = 0x00207596u; fn_00207554(cpu);
    }
L_00207596:;
    {
        cpu->r[3] = rd32(0x00207598u + + 0x10u);
    }
L_00207598:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0020759cu, 0, 0);
    }
L_0020759a:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0020759c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0020759e:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 1);
    }
L_002075a0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_002075a2:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x002075a4u)) return;
    }
}

/* _ZNSt13bad_exceptionC1Ev @ 002075ac (thumb) */
void fn_002075ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002075ac:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_002075ae:;
    {
        cpu->r[4] = rd32(0x002075b0u + + 0x14u);
    }
L_002075b0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_002075b2:;
    {
        cpu->r[14] = 0x002075b6u; fn_00207554(cpu);
    }
L_002075b6:;
    {
        cpu->r[3] = rd32(0x002075b8u + + 0x10u);
    }
L_002075b8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x002075bcu, 0, 0);
    }
L_002075ba:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_002075bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_002075be:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 1);
    }
L_002075c0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_002075c2:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x002075c4u)) return;
    }
}

/* _ZNSt13bad_exceptionD2Ev @ 002075cc (thumb) */
void fn_002075cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002075cc:;
    {
        cpu->r[3] = rd32(0x002075d0u + + 0x14u);
    }
L_002075ce:;
    {
        cpu->r[2] = rd32(0x002075d0u + + 0x18u);
    }
L_002075d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x002075d4u, 0, 0);
    }
L_002075d2:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_002075d4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_002075d6:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_002075d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_002075da:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_002075dc:;
    {
        cpu->r[14] = 0x002075e0u; fn_00207584(cpu);
    }
L_002075e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002075e2:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x002075e4u)) return;
    }
}

/* _ZNSt13bad_exceptionD1Ev @ 002075ec (thumb) */
void fn_002075ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002075ec:;
    {
        cpu->r[3] = rd32(0x002075f0u + + 0x14u);
    }
L_002075ee:;
    {
        cpu->r[2] = rd32(0x002075f0u + + 0x18u);
    }
L_002075f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x002075f4u, 0, 0);
    }
L_002075f2:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_002075f4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_002075f6:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_002075f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_002075fa:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_002075fc:;
    {
        cpu->r[14] = 0x00207600u; fn_00207584(cpu);
    }
L_00207600:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207602:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207604u)) return;
    }
}

/* _ZNKSt9exception4whatEv @ 0020760c (thumb) */
void fn_0020760c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0020760c:;
    {
        cpu->r[0] = rd32(0x00207610u + + 0x4u);
    }
L_0020760e:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00207612u, 0, 0);
    }
L_00207610:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNKSt13bad_exception4whatEv @ 00207618 (thumb) */
void fn_00207618(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207618:;
    {
        cpu->r[0] = rd32(0x0020761cu + + 0x4u);
    }
L_0020761a:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0020761eu, 0, 0);
    }
L_0020761c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNKSt17__Named_exception4whatEv @ 00207624 (thumb) */
void fn_00207624(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207624:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x104u);
    }
L_00207628:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNSt9exceptionD0Ev @ 0020762c (thumb) */
void fn_0020762c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0020762c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0020762e:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207630:;
    {
        cpu->r[14] = 0x00207634u; fn_00207588(cpu);
    }
L_00207634:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207636:;
    {
        cpu->r[14] = 0x0020763au; guest_call(cpu, 0x0018ba20u);
    }
L_0020763a:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0020763c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0020763eu)) return;
    }
}

/* _ZNSt13bad_exceptionD0Ev @ 00207640 (thumb) */
void fn_00207640(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207640:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207642:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207644:;
    {
        cpu->r[14] = 0x00207648u; fn_002075ec(cpu);
    }
L_00207648:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0020764a:;
    {
        cpu->r[14] = 0x0020764eu; guest_call(cpu, 0x0018ba20u);
    }
L_0020764e:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207650:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207652u)) return;
    }
}

/* _ZNSt17__Named_exceptionD1Ev @ 00207654 (thumb) */
void fn_00207654(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207654:;
    {
        cpu->r[3] = rd32(0x00207658u + + 0x24u);
    }
L_00207656:;
    {
        cpu->r[2] = rd32(0x00207658u + + 0x28u);
    }
L_00207658:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0020765cu, 0, 0);
    }
L_0020765a:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0020765c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0020765e:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207660:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_00207662:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00207664:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x104u);
    }
L_00207668:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 1);
    }
L_0020766a:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0020766c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00207672;
        }
    }
L_0020766e:;
    {
        cpu->r[14] = 0x00207672u; guest_call(cpu, 0x00071eb8u);
    }
L_00207672:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207674:;
    {
        cpu->r[14] = 0x00207678u; fn_00207584(cpu);
    }
L_00207678:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0020767a:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0020767cu)) return;
    }
}

/* _ZNSt17__Named_exceptionD0Ev @ 00207684 (thumb) */
void fn_00207684(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207684:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207686:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207688:;
    {
        cpu->r[14] = 0x0020768cu; fn_00207654(cpu);
    }
L_0020768c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0020768e:;
    {
        cpu->r[14] = 0x00207692u; guest_call(cpu, 0x0018ba20u);
    }
L_00207692:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207694:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207696u)) return;
    }
}

/* _ZNSt17__Named_exceptionD2Ev @ 00207698 (thumb) */
void fn_00207698(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207698:;
    {
        cpu->r[3] = rd32(0x0020769cu + + 0x24u);
    }
L_0020769a:;
    {
        cpu->r[2] = rd32(0x0020769cu + + 0x28u);
    }
L_0020769c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x002076a0u, 0, 0);
    }
L_0020769e:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_002076a0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_002076a2:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_002076a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_002076a6:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_002076a8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x104u);
    }
L_002076ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 1);
    }
L_002076ae:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_002076b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002076b6;
        }
    }
L_002076b2:;
    {
        cpu->r[14] = 0x002076b6u; guest_call(cpu, 0x00071eb8u);
    }
L_002076b6:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002076b8:;
    {
        cpu->r[14] = 0x002076bcu; fn_00207584(cpu);
    }
L_002076bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002076be:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x002076c0u)) return;
    }
}

/* _ZNSt13runtime_errorD1Ev @ 002076c8 (thumb) */
void fn_002076c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002076c8:;
    {
        cpu->r[3] = rd32(0x002076ccu + + 0x14u);
    }
L_002076ca:;
    {
        cpu->r[2] = rd32(0x002076ccu + + 0x18u);
    }
L_002076cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x002076d0u, 0, 0);
    }
L_002076ce:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_002076d0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_002076d2:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_002076d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_002076d6:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_002076d8:;
    {
        cpu->r[14] = 0x002076dcu; fn_00207698(cpu);
    }
L_002076dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002076de:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x002076e0u)) return;
    }
}

/* _ZNSt13runtime_errorD0Ev @ 002076e8 (thumb) */
void fn_002076e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002076e8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_002076ea:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_002076ec:;
    {
        cpu->r[14] = 0x002076f0u; fn_002076c8(cpu);
    }
L_002076f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002076f2:;
    {
        cpu->r[14] = 0x002076f6u; guest_call(cpu, 0x0018ba20u);
    }
L_002076f6:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002076f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x002076fau)) return;
    }
}

/* _ZNSt13runtime_errorD2Ev @ 002076fc (thumb) */
void fn_002076fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002076fc:;
    {
        cpu->r[3] = rd32(0x00207700u + + 0x14u);
    }
L_002076fe:;
    {
        cpu->r[2] = rd32(0x00207700u + + 0x18u);
    }
L_00207700:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00207704u, 0, 0);
    }
L_00207702:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207704:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00207706:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207708:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_0020770a:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0020770c:;
    {
        cpu->r[14] = 0x00207710u; fn_00207698(cpu);
    }
L_00207710:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207712:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207714u)) return;
    }
}

/* _ZNSt15underflow_errorD1Ev @ 0020771c (thumb) */
void fn_0020771c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0020771c:;
    {
        cpu->r[3] = rd32(0x00207720u + + 0x14u);
    }
L_0020771e:;
    {
        cpu->r[2] = rd32(0x00207720u + + 0x18u);
    }
L_00207720:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00207724u, 0, 0);
    }
L_00207722:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207724:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00207726:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207728:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_0020772a:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0020772c:;
    {
        cpu->r[14] = 0x00207730u; fn_002076fc(cpu);
    }
L_00207730:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207732:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207734u)) return;
    }
}

/* _ZNSt15underflow_errorD0Ev @ 0020773c (thumb) */
void fn_0020773c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0020773c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0020773e:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207740:;
    {
        cpu->r[14] = 0x00207744u; fn_0020771c(cpu);
    }
L_00207744:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207746:;
    {
        cpu->r[14] = 0x0020774au; guest_call(cpu, 0x0018ba20u);
    }
L_0020774a:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0020774c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0020774eu)) return;
    }
}

/* _ZNSt15underflow_errorD2Ev @ 00207750 (thumb) */
void fn_00207750(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207750:;
    {
        cpu->r[3] = rd32(0x00207754u + + 0x14u);
    }
L_00207752:;
    {
        cpu->r[2] = rd32(0x00207754u + + 0x18u);
    }
L_00207754:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00207758u, 0, 0);
    }
L_00207756:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207758:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0020775a:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0020775c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_0020775e:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00207760:;
    {
        cpu->r[14] = 0x00207764u; fn_002076fc(cpu);
    }
L_00207764:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207766:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207768u)) return;
    }
}

/* _ZNSt14overflow_errorD1Ev @ 00207770 (thumb) */
void fn_00207770(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207770:;
    {
        cpu->r[3] = rd32(0x00207774u + + 0x14u);
    }
L_00207772:;
    {
        cpu->r[2] = rd32(0x00207774u + + 0x18u);
    }
L_00207774:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00207778u, 0, 0);
    }
L_00207776:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207778:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0020777a:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0020777c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_0020777e:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00207780:;
    {
        cpu->r[14] = 0x00207784u; fn_002076fc(cpu);
    }
L_00207784:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207786:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207788u)) return;
    }
}

/* _ZNSt14overflow_errorD0Ev @ 00207790 (thumb) */
void fn_00207790(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207790:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207792:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207794:;
    {
        cpu->r[14] = 0x00207798u; fn_00207770(cpu);
    }
L_00207798:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0020779a:;
    {
        cpu->r[14] = 0x0020779eu; guest_call(cpu, 0x0018ba20u);
    }
L_0020779e:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002077a0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x002077a2u)) return;
    }
}

/* _ZNSt14overflow_errorD2Ev @ 002077a4 (thumb) */
void fn_002077a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002077a4:;
    {
        cpu->r[3] = rd32(0x002077a8u + + 0x14u);
    }
L_002077a6:;
    {
        cpu->r[2] = rd32(0x002077a8u + + 0x18u);
    }
L_002077a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x002077acu, 0, 0);
    }
L_002077aa:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_002077ac:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_002077ae:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_002077b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_002077b2:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_002077b4:;
    {
        cpu->r[14] = 0x002077b8u; fn_002076fc(cpu);
    }
L_002077b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002077ba:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x002077bcu)) return;
    }
}

/* _ZNSt11range_errorD1Ev @ 002077c4 (thumb) */
void fn_002077c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002077c4:;
    {
        cpu->r[3] = rd32(0x002077c8u + + 0x14u);
    }
L_002077c6:;
    {
        cpu->r[2] = rd32(0x002077c8u + + 0x18u);
    }
L_002077c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x002077ccu, 0, 0);
    }
L_002077ca:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_002077cc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_002077ce:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_002077d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_002077d2:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_002077d4:;
    {
        cpu->r[14] = 0x002077d8u; fn_002076fc(cpu);
    }
L_002077d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002077da:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x002077dcu)) return;
    }
}

/* _ZNSt11range_errorD0Ev @ 002077e4 (thumb) */
void fn_002077e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002077e4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_002077e6:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_002077e8:;
    {
        cpu->r[14] = 0x002077ecu; fn_002077c4(cpu);
    }
L_002077ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002077ee:;
    {
        cpu->r[14] = 0x002077f2u; guest_call(cpu, 0x0018ba20u);
    }
L_002077f2:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002077f4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x002077f6u)) return;
    }
}

/* _ZNSt11range_errorD2Ev @ 002077f8 (thumb) */
void fn_002077f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002077f8:;
    {
        cpu->r[3] = rd32(0x002077fcu + + 0x14u);
    }
L_002077fa:;
    {
        cpu->r[2] = rd32(0x002077fcu + + 0x18u);
    }
L_002077fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00207800u, 0, 0);
    }
L_002077fe:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207800:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00207802:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207804:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_00207806:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00207808:;
    {
        cpu->r[14] = 0x0020780cu; fn_002076fc(cpu);
    }
L_0020780c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0020780e:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207810u)) return;
    }
}

/* _ZNSt11logic_errorD1Ev @ 00207818 (thumb) */
void fn_00207818(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207818:;
    {
        cpu->r[3] = rd32(0x0020781cu + + 0x14u);
    }
L_0020781a:;
    {
        cpu->r[2] = rd32(0x0020781cu + + 0x18u);
    }
L_0020781c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00207820u, 0, 0);
    }
L_0020781e:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207820:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00207822:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207824:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_00207826:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00207828:;
    {
        cpu->r[14] = 0x0020782cu; fn_00207698(cpu);
    }
L_0020782c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0020782e:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207830u)) return;
    }
}

/* _ZNSt11logic_errorD0Ev @ 00207838 (thumb) */
void fn_00207838(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207838:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0020783a:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0020783c:;
    {
        cpu->r[14] = 0x00207840u; fn_00207818(cpu);
    }
L_00207840:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207842:;
    {
        cpu->r[14] = 0x00207846u; guest_call(cpu, 0x0018ba20u);
    }
L_00207846:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207848:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0020784au)) return;
    }
}

/* _ZNSt11logic_errorD2Ev @ 0020784c (thumb) */
void fn_0020784c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0020784c:;
    {
        cpu->r[3] = rd32(0x00207850u + + 0x14u);
    }
L_0020784e:;
    {
        cpu->r[2] = rd32(0x00207850u + + 0x18u);
    }
L_00207850:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00207854u, 0, 0);
    }
L_00207852:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207854:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00207856:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207858:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_0020785a:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0020785c:;
    {
        cpu->r[14] = 0x00207860u; fn_00207698(cpu);
    }
L_00207860:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207862:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207864u)) return;
    }
}

/* _ZNSt12out_of_rangeD1Ev @ 0020786c (thumb) */
void fn_0020786c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0020786c:;
    {
        cpu->r[3] = rd32(0x00207870u + + 0x14u);
    }
L_0020786e:;
    {
        cpu->r[2] = rd32(0x00207870u + + 0x18u);
    }
L_00207870:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00207874u, 0, 0);
    }
L_00207872:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207874:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00207876:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207878:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_0020787a:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0020787c:;
    {
        cpu->r[14] = 0x00207880u; fn_0020784c(cpu);
    }
L_00207880:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207882:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207884u)) return;
    }
}

/* _ZNSt12out_of_rangeD0Ev @ 0020788c (thumb) */
void fn_0020788c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0020788c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0020788e:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207890:;
    {
        cpu->r[14] = 0x00207894u; fn_0020786c(cpu);
    }
L_00207894:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207896:;
    {
        cpu->r[14] = 0x0020789au; guest_call(cpu, 0x0018ba20u);
    }
L_0020789a:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0020789c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0020789eu)) return;
    }
}

/* _ZNSt12out_of_rangeD2Ev @ 002078a0 (thumb) */
void fn_002078a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002078a0:;
    {
        cpu->r[3] = rd32(0x002078a4u + + 0x14u);
    }
L_002078a2:;
    {
        cpu->r[2] = rd32(0x002078a4u + + 0x18u);
    }
L_002078a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x002078a8u, 0, 0);
    }
L_002078a6:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_002078a8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_002078aa:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_002078ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_002078ae:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_002078b0:;
    {
        cpu->r[14] = 0x002078b4u; fn_0020784c(cpu);
    }
L_002078b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002078b6:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x002078b8u)) return;
    }
}

/* _ZNSt12length_errorD1Ev @ 002078c0 (thumb) */
void fn_002078c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002078c0:;
    {
        cpu->r[3] = rd32(0x002078c4u + + 0x14u);
    }
L_002078c2:;
    {
        cpu->r[2] = rd32(0x002078c4u + + 0x18u);
    }
L_002078c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x002078c8u, 0, 0);
    }
L_002078c6:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_002078c8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_002078ca:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_002078cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_002078ce:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_002078d0:;
    {
        cpu->r[14] = 0x002078d4u; fn_0020784c(cpu);
    }
L_002078d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002078d6:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x002078d8u)) return;
    }
}

/* _ZNSt12length_errorD0Ev @ 002078e0 (thumb) */
void fn_002078e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002078e0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_002078e2:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_002078e4:;
    {
        cpu->r[14] = 0x002078e8u; fn_002078c0(cpu);
    }
L_002078e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002078ea:;
    {
        cpu->r[14] = 0x002078eeu; guest_call(cpu, 0x0018ba20u);
    }
L_002078ee:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002078f0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x002078f2u)) return;
    }
}

/* _ZNSt12length_errorD2Ev @ 002078f4 (thumb) */
void fn_002078f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002078f4:;
    {
        cpu->r[3] = rd32(0x002078f8u + + 0x14u);
    }
L_002078f6:;
    {
        cpu->r[2] = rd32(0x002078f8u + + 0x18u);
    }
L_002078f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x002078fcu, 0, 0);
    }
L_002078fa:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_002078fc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_002078fe:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207900:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_00207902:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00207904:;
    {
        cpu->r[14] = 0x00207908u; fn_0020784c(cpu);
    }
L_00207908:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0020790a:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0020790cu)) return;
    }
}

/* _ZNSt16invalid_argumentD1Ev @ 00207914 (thumb) */
void fn_00207914(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207914:;
    {
        cpu->r[3] = rd32(0x00207918u + + 0x14u);
    }
L_00207916:;
    {
        cpu->r[2] = rd32(0x00207918u + + 0x18u);
    }
L_00207918:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0020791cu, 0, 0);
    }
L_0020791a:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0020791c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0020791e:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207920:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_00207922:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00207924:;
    {
        cpu->r[14] = 0x00207928u; fn_0020784c(cpu);
    }
L_00207928:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0020792a:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0020792cu)) return;
    }
}

/* _ZNSt16invalid_argumentD0Ev @ 00207934 (thumb) */
void fn_00207934(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207934:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207936:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207938:;
    {
        cpu->r[14] = 0x0020793cu; fn_00207914(cpu);
    }
L_0020793c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0020793e:;
    {
        cpu->r[14] = 0x00207942u; guest_call(cpu, 0x0018ba20u);
    }
L_00207942:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207944:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207946u)) return;
    }
}

/* _ZNSt16invalid_argumentD2Ev @ 00207948 (thumb) */
void fn_00207948(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207948:;
    {
        cpu->r[3] = rd32(0x0020794cu + + 0x14u);
    }
L_0020794a:;
    {
        cpu->r[2] = rd32(0x0020794cu + + 0x18u);
    }
L_0020794c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00207950u, 0, 0);
    }
L_0020794e:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207950:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00207952:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207954:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_00207956:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00207958:;
    {
        cpu->r[14] = 0x0020795cu; fn_0020784c(cpu);
    }
L_0020795c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0020795e:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207960u)) return;
    }
}

/* _ZNSt12domain_errorD1Ev @ 00207968 (thumb) */
void fn_00207968(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207968:;
    {
        cpu->r[3] = rd32(0x0020796cu + + 0x14u);
    }
L_0020796a:;
    {
        cpu->r[2] = rd32(0x0020796cu + + 0x18u);
    }
L_0020796c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00207970u, 0, 0);
    }
L_0020796e:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207970:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00207972:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207974:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_00207976:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00207978:;
    {
        cpu->r[14] = 0x0020797cu; fn_0020784c(cpu);
    }
L_0020797c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0020797e:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207980u)) return;
    }
}

/* _ZNSt12domain_errorD0Ev @ 00207988 (thumb) */
void fn_00207988(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207988:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0020798a:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0020798c:;
    {
        cpu->r[14] = 0x00207990u; fn_00207968(cpu);
    }
L_00207990:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207992:;
    {
        cpu->r[14] = 0x00207996u; guest_call(cpu, 0x0018ba20u);
    }
L_00207996:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207998:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0020799au)) return;
    }
}

/* _ZNSt12domain_errorD2Ev @ 0020799c (thumb) */
void fn_0020799c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0020799c:;
    {
        cpu->r[3] = rd32(0x002079a0u + + 0x14u);
    }
L_0020799e:;
    {
        cpu->r[2] = rd32(0x002079a0u + + 0x18u);
    }
L_002079a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x002079a4u, 0, 0);
    }
L_002079a2:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_002079a4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_002079a6:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_002079a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 1);
    }
L_002079aa:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_002079ac:;
    {
        cpu->r[14] = 0x002079b0u; fn_0020784c(cpu);
    }
L_002079b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002079b2:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x002079b4u)) return;
    }
}

/* _ZNSt17__Named_exceptionaSERKS_ @ 002079bc (thumb) */
void fn_002079bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002079bc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_002079c0:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x104u);
    }
L_002079c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_002079c6:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_002079c8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_002079ca:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 1);
    }
L_002079cc:;
    {
        cpu->r[14] = 0x002079d0u; guest_call(cpu, 0x000719b4u);
    }
L_002079d0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_002079d2:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x104u);
    }
L_002079d6:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_002079d8:;
L_002079da:;
    {
        cpu->r[3] = 0x00000100u;
    }
L_002079de:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_002079e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_002079e2:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00207a1a;
        }
    }
L_002079e4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_002079e6:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002079ec;
        }
    }
L_002079e8:;
    {
        cpu->r[14] = 0x002079ecu; guest_call(cpu, 0x00071eb8u);
    }
L_002079ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_002079ee:;
    {
        cpu->r[14] = 0x002079f2u; guest_call(cpu, 0x00071954u);
    }
L_002079f2:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[0]);
    }
L_002079f6:;
    {
        if (cpu->r[0] == 0) goto L_00207a22;
    }
L_002079f8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_002079fa:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_002079fc:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0x104u);
    }
L_00207a00:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00207a02:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00207a04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00207a06:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00207a08:;
    {
        cpu->r[14] = 0x00207a0cu; guest_call(cpu, 0x00071c3cu);
    }
L_00207a0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x104u);
    }
L_00207a10:;
    {
        cpu->r[2] = 0x00000000u;
        set_nz(cpu, cpu->r[2]);
    }
L_00207a12:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207a14:;
    {
        wr8(cpu->r[3] + cpu->r[5], cpu->r[2]);
    }
L_00207a16:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00207a1au)) return;
    }
L_00207a1a:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_00207a1c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00207a1e:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00207a20:;
    {
        goto L_00207a04;
    }
L_00207a22:;
    {
        cpu->r[5] = 0x000000ffu;
        set_nz(cpu, cpu->r[5]);
    }
L_00207a24:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[6]);
    }
L_00207a28:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00207a2a:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0x104u);
    }
L_00207a2e:;
    {
        goto L_00207a04;
    }
}

/* _ZNSt17__Named_exceptionC1ERKS_ @ 00207a30 (thumb) */
void fn_00207a30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207a30:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00207a34:;
    {
        cpu->r[5] = rd32(0x00207a38u + + 0x60u);
    }
L_00207a36:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00207a38:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207a3a:;
    {
        cpu->r[14] = 0x00207a3eu; fn_00207554(cpu);
    }
L_00207a3e:;
    {
        cpu->r[3] = rd32(0x00207a40u + + 0x5cu);
    }
L_00207a40:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00207a44u, 0, 0);
    }
L_00207a42:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00207a44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 1);
    }
L_00207a46:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00207a48:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x104u);
    }
L_00207a4c:;
    {
        cpu->r[14] = 0x00207a50u; guest_call(cpu, 0x000719b4u);
    }
L_00207a50:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00207a52:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00207a54:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000100u, 1, 1);
    }
L_00207a58:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00207a78;
        }
    }
L_00207a5a:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00207a5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 1);
    }
L_00207a5e:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[0]);
    }
L_00207a62:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x104u);
    }
L_00207a66:;
    {
        cpu->r[14] = 0x00207a6au; guest_call(cpu, 0x00071c3cu);
    }
L_00207a6a:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x104u);
    }
L_00207a6e:;
    {
        cpu->r[2] = 0x00000000u;
        set_nz(cpu, cpu->r[2]);
    }
L_00207a70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207a72:;
    {
        wr8(cpu->r[3] + cpu->r[5], cpu->r[2]);
    }
L_00207a74:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00207a78u)) return;
    }
L_00207a78:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00207a7a:;
    {
        cpu->r[14] = 0x00207a7eu; guest_call(cpu, 0x00071954u);
    }
L_00207a7e:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[0]);
    }
L_00207a82:;
    {
        if (cpu->r[0] == 0) goto L_00207a8a;
    }
L_00207a84:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[7]);
    }
L_00207a86:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00207a88:;
    {
        goto L_00207a62;
    }
L_00207a8a:;
    {
        cpu->r[5] = 0x000000ffu;
        set_nz(cpu, cpu->r[5]);
    }
L_00207a8c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 1);
    }
L_00207a8e:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00207a90:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[0]);
    }
L_00207a94:;
    {
        goto L_00207a62;
    }
}

/* _ZNSt17__Named_exceptionC2ERKS_ @ 00207aa0 (thumb) */
void fn_00207aa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207aa0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00207aa4:;
    {
        cpu->r[5] = rd32(0x00207aa8u + + 0x60u);
    }
L_00207aa6:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00207aa8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207aaa:;
    {
        cpu->r[14] = 0x00207aaeu; fn_00207554(cpu);
    }
L_00207aae:;
    {
        cpu->r[3] = rd32(0x00207ab0u + + 0x5cu);
    }
L_00207ab0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00207ab4u, 0, 0);
    }
L_00207ab2:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00207ab4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 1);
    }
L_00207ab6:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00207ab8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x104u);
    }
L_00207abc:;
    {
        cpu->r[14] = 0x00207ac0u; guest_call(cpu, 0x000719b4u);
    }
L_00207ac0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00207ac2:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00207ac4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000100u, 1, 1);
    }
L_00207ac8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00207ae8;
        }
    }
L_00207aca:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00207acc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 1);
    }
L_00207ace:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[0]);
    }
L_00207ad2:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x104u);
    }
L_00207ad6:;
    {
        cpu->r[14] = 0x00207adau; guest_call(cpu, 0x00071c3cu);
    }
L_00207ada:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x104u);
    }
L_00207ade:;
    {
        cpu->r[2] = 0x00000000u;
        set_nz(cpu, cpu->r[2]);
    }
L_00207ae0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207ae2:;
    {
        wr8(cpu->r[3] + cpu->r[5], cpu->r[2]);
    }
L_00207ae4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00207ae8u)) return;
    }
L_00207ae8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00207aea:;
    {
        cpu->r[14] = 0x00207aeeu; guest_call(cpu, 0x00071954u);
    }
L_00207aee:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[0]);
    }
L_00207af2:;
    {
        if (cpu->r[0] == 0) goto L_00207afa;
    }
L_00207af4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[7]);
    }
L_00207af6:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00207af8:;
    {
        goto L_00207ad2;
    }
L_00207afa:;
    {
        cpu->r[5] = 0x000000ffu;
        set_nz(cpu, cpu->r[5]);
    }
L_00207afc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 1);
    }
L_00207afe:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00207b00:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[0]);
    }
L_00207b04:;
    {
        goto L_00207ad2;
    }
}

/* _ZNSt17__Named_exceptionC1ERKSs @ 00207b10 (thumb) */
void fn_00207b10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207b10:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00207b14:;
    {
        cpu->r[5] = rd32(0x00207b18u + + 0x5cu);
    }
L_00207b16:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00207b18:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207b1a:;
    {
        cpu->r[14] = 0x00207b1eu; fn_00207554(cpu);
    }
L_00207b1e:;
    {
        cpu->r[3] = rd32(0x00207b20u + + 0x58u);
    }
L_00207b20:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00207b24u, 0, 0);
    }
L_00207b22:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00207b24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 1);
    }
L_00207b26:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00207b28:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x14u);
    }
L_00207b2a:;
    {
        cpu->r[14] = 0x00207b2eu; guest_call(cpu, 0x000719b4u);
    }
L_00207b2e:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00207b30:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00207b32:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000100u, 1, 1);
    }
L_00207b36:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00207b54;
        }
    }
L_00207b38:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00207b3a:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 1);
    }
L_00207b3c:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[0]);
    }
L_00207b40:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x14u);
    }
L_00207b42:;
    {
        cpu->r[14] = 0x00207b46u; guest_call(cpu, 0x00071c3cu);
    }
L_00207b46:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x104u);
    }
L_00207b4a:;
    {
        cpu->r[2] = 0x00000000u;
        set_nz(cpu, cpu->r[2]);
    }
L_00207b4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207b4e:;
    {
        wr8(cpu->r[3] + cpu->r[5], cpu->r[2]);
    }
L_00207b50:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00207b54u)) return;
    }
L_00207b54:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00207b56:;
    {
        cpu->r[14] = 0x00207b5au; guest_call(cpu, 0x00071954u);
    }
L_00207b5a:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[0]);
    }
L_00207b5e:;
    {
        if (cpu->r[0] == 0) goto L_00207b66;
    }
L_00207b60:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[7]);
    }
L_00207b62:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00207b64:;
    {
        goto L_00207b40;
    }
L_00207b66:;
    {
        cpu->r[5] = 0x000000ffu;
        set_nz(cpu, cpu->r[5]);
    }
L_00207b68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 1);
    }
L_00207b6a:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00207b6c:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[0]);
    }
L_00207b70:;
    {
        goto L_00207b40;
    }
}

/* _ZNSt17__Named_exceptionC2ERKSs @ 00207b7c (thumb) */
void fn_00207b7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207b7c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00207b80:;
    {
        cpu->r[5] = rd32(0x00207b84u + + 0x5cu);
    }
L_00207b82:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00207b84:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207b86:;
    {
        cpu->r[14] = 0x00207b8au; fn_00207554(cpu);
    }
L_00207b8a:;
    {
        cpu->r[3] = rd32(0x00207b8cu + + 0x58u);
    }
L_00207b8c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00207b90u, 0, 0);
    }
L_00207b8e:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00207b90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 1);
    }
L_00207b92:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00207b94:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x14u);
    }
L_00207b96:;
    {
        cpu->r[14] = 0x00207b9au; guest_call(cpu, 0x000719b4u);
    }
L_00207b9a:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00207b9c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00207b9e:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000100u, 1, 1);
    }
L_00207ba2:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00207bc0;
        }
    }
L_00207ba4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00207ba6:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 1);
    }
L_00207ba8:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[0]);
    }
L_00207bac:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x14u);
    }
L_00207bae:;
    {
        cpu->r[14] = 0x00207bb2u; guest_call(cpu, 0x00071c3cu);
    }
L_00207bb2:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x104u);
    }
L_00207bb6:;
    {
        cpu->r[2] = 0x00000000u;
        set_nz(cpu, cpu->r[2]);
    }
L_00207bb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207bba:;
    {
        wr8(cpu->r[3] + cpu->r[5], cpu->r[2]);
    }
L_00207bbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00207bc0u)) return;
    }
L_00207bc0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00207bc2:;
    {
        cpu->r[14] = 0x00207bc6u; guest_call(cpu, 0x00071954u);
    }
L_00207bc6:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[0]);
    }
L_00207bca:;
    {
        if (cpu->r[0] == 0) goto L_00207bd2;
    }
L_00207bcc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[7]);
    }
L_00207bce:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00207bd0:;
    {
        goto L_00207bac;
    }
L_00207bd2:;
    {
        cpu->r[5] = 0x000000ffu;
        set_nz(cpu, cpu->r[5]);
    }
L_00207bd4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 1);
    }
L_00207bd6:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00207bd8:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[0]);
    }
L_00207bdc:;
    {
        goto L_00207bac;
    }
}

/* _ZSt26__stl_throw_overflow_errorPKc @ 00207be8 (thumb) */
void fn_00207be8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207be8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207bea:;
    {
        cpu->r[14] = 0x00207beeu; guest_call(cpu, 0x00071f3cu);
    }
L_00207bee:;
    {
        cpu->r[14] = 0x00207bf2u; guest_call(cpu, 0x00071d50u);
    }
}

/* _ZSt28__stl_throw_invalid_argumentPKc @ 00207bf4 (thumb) */
void fn_00207bf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207bf4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207bf6:;
    {
        cpu->r[14] = 0x00207bfau; guest_call(cpu, 0x00071f3cu);
    }
L_00207bfa:;
    {
        cpu->r[14] = 0x00207bfeu; guest_call(cpu, 0x00071d50u);
    }
}

/* _ZSt24__stl_throw_length_errorPKc @ 00207c00 (thumb) */
void fn_00207c00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207c00:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207c02:;
    {
        cpu->r[14] = 0x00207c06u; guest_call(cpu, 0x00071f3cu);
    }
L_00207c06:;
    {
        cpu->r[14] = 0x00207c0au; guest_call(cpu, 0x00071d50u);
    }
}

/* _ZSt24__stl_throw_out_of_rangePKc @ 00207c0c (thumb) */
void fn_00207c0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207c0c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207c0e:;
    {
        cpu->r[14] = 0x00207c12u; guest_call(cpu, 0x00071f3cu);
    }
L_00207c12:;
    {
        cpu->r[14] = 0x00207c16u; guest_call(cpu, 0x00071d50u);
    }
}

/* _ZSt23__stl_throw_range_errorPKc @ 00207c18 (thumb) */
void fn_00207c18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207c18:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207c1a:;
    {
        cpu->r[14] = 0x00207c1eu; guest_call(cpu, 0x00071f3cu);
    }
L_00207c1e:;
    {
        cpu->r[14] = 0x00207c22u; guest_call(cpu, 0x00071d50u);
    }
}

/* _ZSt25__stl_throw_runtime_errorPKc @ 00207c24 (thumb) */
void fn_00207c24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207c24:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207c26:;
    {
        cpu->r[14] = 0x00207c2au; guest_call(cpu, 0x00071f3cu);
    }
L_00207c2a:;
    {
        cpu->r[14] = 0x00207c2eu; guest_call(cpu, 0x00071d50u);
    }
}

/* _ZNSt11_STLP_mutexD1Ev @ 00207c30 (thumb) */
void fn_00207c30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207c30:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207c32:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207c34:;
    {
        cpu->r[14] = 0x00207c38u; guest_call(cpu, 0x00071ad4u);
    }
L_00207c38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207c3a:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207c3cu)) return;
    }
}

/* _ZNSt4priv19_Pthread_alloc_impl10deallocateEPvjPNS_31_Pthread_alloc_per_thread_stateE @ 00207c3c (thumb) */
void fn_00207c3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207c3c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_00207c3e:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00207c42:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207c44:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00207c46:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00207c48:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00207c6e;
        }
    }
L_00207c4a:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000007u, 0, 1);
    }
L_00207c4c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], 0x00000044u, 0, 0);
    }
L_00207c50:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00207c52:;
    {
        uint32_t v = shifter(cpu->r[5], 3, 0x00000003u, &shc); cpu->r[5] = v;
        set_nz(cpu, v);
    }
L_00207c54:;
    {
        cpu->r[14] = 0x00207c58u; guest_call(cpu, 0x000719ccu);
    }
L_00207c58:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_00207c5a:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00207c5c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00207c60:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00207c62:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[4]);
    }
L_00207c66:;
    {
        cpu->r[14] = 0x00207c6au; guest_call(cpu, 0x00071e28u);
    }
L_00207c6a:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00207c6eu)) return;
    }
L_00207c6e:;
    {
        cpu->r[14] = 0x00207c72u; guest_call(cpu, 0x00071eb8u);
    }
L_00207c72:;
    {
        goto L_00207c6a;
    }
}

/* _ZNSt4priv14_Pthread_alloc10deallocateEPvjPNS_31_Pthread_alloc_per_thread_stateE @ 00207c74 (thumb) */
void fn_00207c74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207c74:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207c76:;
    {
        cpu->r[14] = 0x00207c7au; fn_00207c3c(cpu);
    }
L_00207c7a:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207c7cu)) return;
    }
}

/* _ZNSt14__malloc_alloc18set_malloc_handlerEPFvvE @ 00207c7c (thumb) */
void fn_00207c7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207c7c:;
    {
        cpu->r[3] = rd32(0x00207c80u + + 0x20u);
    }
L_00207c7e:;
    {
        cpu->r[2] = rd32(0x00207c80u + + 0x24u);
    }
L_00207c80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00207c84u, 0, 0);
    }
L_00207c82:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00207c84:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00207c86:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00207c88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207c8a:;
    {
        cpu->r[14] = 0x00207c8eu; guest_call(cpu, 0x000719ccu);
    }
L_00207c8e:;
    {
        cpu->r[3] = rd32(0x00207c90u + + 0x18u);
    }
L_00207c90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207c92:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00207c96u, 0, 0);
    }
L_00207c94:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_00207c96:;
    {
        wr32(cpu->r[3], cpu->r[6]);
    }
L_00207c98:;
    {
        cpu->r[14] = 0x00207c9cu; guest_call(cpu, 0x00071e28u);
    }
L_00207c9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00207c9e:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00207ca0u)) return;
    }
}

/* _ZNSt4priv19_Pthread_alloc_impl13_S_destructorEPv @ 00207cac (thumb) */
void fn_00207cac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207cac:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00207cae:;
    {
        cpu->r[4] = rd32(0x00207cb0u + + 0x20u);
    }
L_00207cb0:;
    {
        cpu->r[3] = rd32(0x00207cb4u + + 0x20u);
    }
L_00207cb2:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00207cb4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00207cb8u, 0, 0);
    }
L_00207cb6:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00207cb8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00207cba:;
    {
        cpu->r[14] = 0x00207cbeu; guest_call(cpu, 0x000719ccu);
    }
L_00207cbe:;
    {
        cpu->r[3] = rd32(0x00207cc0u + + 0x18u);
    }
L_00207cc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00207cc2:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00207cc4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00207cc6:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[2]);
    }
L_00207cc8:;
    {
        wr32(cpu->r[3], cpu->r[6]);
    }
L_00207cca:;
    {
        cpu->r[14] = 0x00207cceu; guest_call(cpu, 0x00071e28u);
    }
L_00207cce:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00207cd0u)) return;
    }
}

/* _ZNSt17__node_alloc_impl13_M_deallocateEPvj @ 00207cdc (thumb) */
void fn_00207cdc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207cdc:;
    {
        cpu->r[3] = rd32(0x00207ce0u + + 0x2cu);
    }
L_00207cde:;
    {
        cpu->r[2] = rd32(0x00207ce0u + + 0x30u);
    }
L_00207ce0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00207ce4u, 0, 0);
    }
L_00207ce2:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00207ce6:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00207ce8:;
    {
        cpu->r[2] = rd32(0x00207cecu + + 0x28u);
    }
L_00207cea:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00207cec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207cee:;
    {
        uint32_t v = shifter(cpu->r[7], 3, 0x00000003u, &shc); cpu->r[7] = v;
        set_nz(cpu, v);
    }
L_00207cf0:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00207cf2:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00207cf4:;
    {
        cpu->r[14] = 0x00207cf8u; guest_call(cpu, 0x000719ccu);
    }
L_00207cf8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_00207cfc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00207cfe:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00207d00:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[7], 2, 2u, &shc), cpu->r[4]);
    }
L_00207d04:;
    {
        cpu->r[14] = 0x00207d08u; guest_call(cpu, 0x00071e28u);
    }
L_00207d08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00207d0cu)) return;
    }
}

/* _ZNSt12__node_alloc13_M_deallocateEPvj @ 00207d18 (thumb) */
void fn_00207d18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207d18:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207d1a:;
    {
        cpu->r[14] = 0x00207d1eu; fn_00207cdc(cpu);
    }
L_00207d1e:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207d20u)) return;
    }
}

/* _ZNSt17__node_alloc_impl14_S_chunk_allocEjRi @ 00207d20 (thumb) */
void fn_00207d20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207d20:;
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
L_00207d24:;
    {
        cpu->r[4] = rd32(0x00207d28u + + 0xb4u);
    }
L_00207d26:;
    {
        cpu->r[6] = rd32(0x00207d28u + + 0xb8u);
    }
L_00207d28:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00207d2a:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00207d2eu, 0, 0);
    }
L_00207d2c:;
    {
        cpu->r[10] = rd32(0x00207d30u + + 0xb4u);
    }
L_00207d30:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00207d32:;
    {
        cpu->r[1] = rd32(0x00207d34u + + 0xb4u);
    }
L_00207d34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00207d36:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00207d38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00207d3c:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_00207d40:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00207d42:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_00207d44:;
    {
        cpu->r[2] = rd32(0x00207d48u + + 0xa4u);
    }
L_00207d46:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00207d48:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00207d4a:;
    {
        goto L_00207daa;
    }
L_00207d4c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00207d4e:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00207dc4;
        }
    }
L_00207d50:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00207d52:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00207d54:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 0x00000003u, &shc); cpu->r[8] = v;
    }
L_00207d58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00207d5a:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_00207d5e:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00207d60:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00207d62:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_00207d64:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[8], 2, 2u, &shc), cpu->r[0]);
    }
L_00207d68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00207d6c:;
    {
        wr32(cpu->r[1], cpu->r[11]);
    }
L_00207d70:;
    {
        wr32(cpu->r[3], cpu->r[11]);
    }
L_00207d74:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00207d76:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00207d7a:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_00207d7e:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], 0x00000007u, 0, 0);
    }
L_00207d82:;
    {
        uint32_t v = cpu->r[8] & ~ 0x00000007u; cpu->r[8] = v;
    }
L_00207d86:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00207d8a:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00207d8c:;
    {
        cpu->r[14] = 0x00207d90u; guest_call(cpu, 0x0018ba6cu);
    }
L_00207d90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00207d92:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00207d96:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00207d98:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_00207d9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[8], 3, 4u, &shc), 0, 0);
    }
L_00207da0:;
    {
        wr32(cpu->r[9], cpu->r[3]);
    }
L_00207da4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_00207da8:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00207daa:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_00207dac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00207dae:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5]; cpu->r[2] = v;
    }
L_00207db2:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00207d74;
        }
    }
L_00207db4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00207db6:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00207d4c;
        }
    }
L_00207db8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00207dba:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 1);
    }
L_00207dbc:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00207dbe:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00207dc0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00207dc4u)) return;
    }
L_00207dc4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00207dc6:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00207dc8:;
    {
        cpu->r[14] = 0x00207dccu; guest_call(cpu, 0x00071a68u);
    }
L_00207dcc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00207dce:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00207dd0:;
    {
        wr32(cpu->r[7], cpu->r[0]);
    }
L_00207dd2:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00207dd4:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2] + cpu->r[0]; cpu->r[2] = v;
    }
L_00207dd8:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00207dda:;
    {
        goto L_00207dbe;
    }
}

/* _ZNSt17__node_alloc_impl9_S_refillEj @ 00207df0 (thumb) */
void fn_00207df0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207df0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00207df2:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00207df4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00207df6:;
    {
        cpu->r[3] = 0x00000014u;
        set_nz(cpu, cpu->r[3]);
    }
L_00207df8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207dfa:;
    {
        cpu->r[5] = rd32(0x00207dfcu + + 0x40u);
    }
L_00207dfc:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x4u;
        wr32(cpu->r[1] + - 0x4u, cpu->r[3]);
        cpu->r[1] = wb_tmp;
    }
L_00207e00:;
    {
        cpu->r[14] = 0x00207e04u; fn_00207d20(cpu);
    }
L_00207e04:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00207e06:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00207e0au, 0, 0);
    }
L_00207e08:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00207e0a:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00207e38;
        }
    }
L_00207e0c:;
    {
        cpu->r[3] = rd32(0x00207e10u + + 0x30u);
    }
L_00207e0e:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_00207e10:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_00207e12:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 0x00000003u, &shc); cpu->r[6] = v;
        set_nz(cpu, v);
    }
L_00207e14:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00207e16:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 1);
    }
L_00207e18:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[3]);
    }
L_00207e1c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00207e1e:;
    {
        if (cpu->r[2] != 0) goto L_00207e24;
    }
L_00207e20:;
    {
        goto L_00207e34;
    }
L_00207e22:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00207e24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 1);
    }
L_00207e26:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00207e28:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00207e2a:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00207e2c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00207e2e:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00207e30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00207e22;
        }
    }
L_00207e32:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00207e34:;
    {
        cpu->r[2] = 0x00000000u;
        set_nz(cpu, cpu->r[2]);
    }
L_00207e36:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00207e38:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00207e3a:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00207e3cu)) return;
    }
}

/* _ZNSt17__node_alloc_impl11_M_allocateERj @ 00207e44 (thumb) */
void fn_00207e44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207e44:;
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
L_00207e48:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00207e4a:;
    {
        cpu->r[4] = rd32(0x00207e4cu + + 0x44u);
    }
L_00207e4c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00207e4e:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000007u, 0, 1);
    }
L_00207e50:;
    {
        cpu->r[7] = rd32(0x00207e54u + + 0x40u);
    }
L_00207e52:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000007u; cpu->r[3] = v;
    }
L_00207e56:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00207e58:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0xffffffffu, 0, 0);
    }
L_00207e5c:;
    {
        cpu->r[3] = rd32(0x00207e60u + + 0x38u);
    }
L_00207e5e:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00207e62u, 0, 0);
    }
L_00207e60:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 0x00000003u, &shc); cpu->r[9] = v;
    }
L_00207e64:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00207e68:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00207e6a:;
    {
        cpu->r[14] = 0x00207e6eu; guest_call(cpu, 0x000719ccu);
    }
L_00207e6e:;
    {
        cpu->r[5] = rd32(cpu->r[8] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_00207e72:;
    {
        if (cpu->r[5] == 0) goto L_00207e86;
    }
L_00207e74:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00207e76:;
    {
        wr32(cpu->r[8] + shifter(cpu->r[9], 2, 2u, &shc), cpu->r[3]);
    }
L_00207e7a:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00207e7c:;
    {
        cpu->r[14] = 0x00207e80u; guest_call(cpu, 0x00071e28u);
    }
L_00207e80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00207e82:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00207e86u)) return;
    }
L_00207e86:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00207e88:;
    {
        cpu->r[14] = 0x00207e8cu; fn_00207df0(cpu);
    }
L_00207e8c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00207e8e:;
    {
        goto L_00207e7a;
    }
}

/* _ZNSt12__node_alloc11_M_allocateERj @ 00207e9c (thumb) */
void fn_00207e9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207e9c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207e9e:;
    {
        cpu->r[14] = 0x00207ea2u; fn_00207e44(cpu);
    }
L_00207ea2:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207ea4u)) return;
    }
}

/* _ZNSt4priv19_Pthread_alloc_impl23_S_new_per_thread_stateEv @ 00207ea4 (thumb) */
void fn_00207ea4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207ea4:;
    {
        cpu->r[3] = rd32(0x00207ea8u + + 0x34u);
    }
L_00207ea6:;
    {
        cpu->r[2] = rd32(0x00207ea8u + + 0x38u);
    }
L_00207ea8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00207eacu, 0, 0);
    }
L_00207eaa:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00207eac:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00207eae:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_00207eb0:;
    {
        if (cpu->r[4] == 0) goto L_00207eba;
    }
L_00207eb2:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x40u);
    }
L_00207eb4:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00207eb6:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207eb8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00207ebau)) return;
    }
L_00207eba:;
    {
        cpu->r[0] = 0x00000048u;
        set_nz(cpu, cpu->r[0]);
    }
L_00207ebc:;
    {
        cpu->r[5] = 0x00000000u;
        set_nz(cpu, cpu->r[5]);
    }
L_00207ebe:;
    {
        cpu->r[14] = 0x00207ec2u; guest_call(cpu, 0x0018ba6cu);
    }
L_00207ec2:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00207ec4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207ec6:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[5]);
    }
L_00207ec8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000044u, 0, 0);
    }
L_00207ecc:;
    {
        cpu->r[14] = 0x00207ed0u; guest_call(cpu, 0x000718acu);
    }
L_00207ed0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00207ed2:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00207ed4:;
    {
        cpu->r[2] = 0x00000040u;
        set_nz(cpu, cpu->r[2]);
    }
L_00207ed6:;
    {
        cpu->r[14] = 0x00207edau; guest_call(cpu, 0x00071c9cu);
    }
L_00207eda:;
    {
        goto L_00207eb6;
    }
}

/* _ZNSt4priv19_Pthread_alloc_impl23_S_get_per_thread_stateEv @ 00207ee4 (thumb) */
void fn_00207ee4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207ee4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00207ee8:;
    {
        cpu->r[4] = rd32(0x00207eecu + + 0x84u);
    }
L_00207eea:;
    {
        cpu->r[8] = rd32(0x00207eecu + + 0x88u);
    }
L_00207eee:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00207ef2u, 0, 0);
    }
L_00207ef0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_00207ef4:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_00207ef6:;
    {
        if (cpu->r[3] != 0) goto L_00207f36;
    }
L_00207ef8:;
    {
        cpu->r[6] = rd32(0x00207efcu + + 0x7cu);
    }
L_00207efa:;
    {
        cpu->r[7] = rd32(0x00207efcu + + 0x80u);
    }
L_00207efc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00207efe:;
    {
        cpu->r[14] = 0x00207f02u; guest_call(cpu, 0x000719ccu);
    }
L_00207f02:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_00207f06:;
    {
        cpu->r[3] = rd8(cpu->r[5]);
    }
L_00207f08:;
    {
        if (cpu->r[3] != 0) goto L_00207f1c;
    }
L_00207f0a:;
    {
        cpu->r[3] = rd32(0x00207f0cu + + 0x74u);
    }
L_00207f0c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00207f0e:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00207f10:;
    {
        cpu->r[14] = 0x00207f14u; guest_call(cpu, 0x00071900u);
    }
L_00207f14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00207f16:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00207f62;
        }
    }
L_00207f18:;
    {
        cpu->r[3] = 0x00000001u;
        set_nz(cpu, cpu->r[3]);
    }
L_00207f1a:;
    {
        wr8(cpu->r[5], cpu->r[3]);
    }
L_00207f1c:;
    {
        cpu->r[14] = 0x00207f20u; fn_00207ea4(cpu);
    }
L_00207f20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00207f22:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00207f24:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00207f26:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00207f28:;
    {
        cpu->r[14] = 0x00207f2cu; guest_call(cpu, 0x00071f84u);
    }
L_00207f2c:;
    {
        if (cpu->r[0] == 0) goto L_00207f5a;
    }
L_00207f2e:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000000cu, 1, 1);
    }
L_00207f30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00207f4c;
        }
    }
L_00207f32:;
    {
        cpu->r[14] = 0x00207f36u; guest_call(cpu, 0x00071d50u);
    }
L_00207f36:;
    {
        cpu->r[6] = rd32(0x00207f38u + + 0x40u);
    }
L_00207f38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00207f3a:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00207f3c:;
    {
        cpu->r[14] = 0x00207f40u; guest_call(cpu, 0x00071ac8u);
    }
L_00207f40:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00207f42:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00207f44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00207efa;
        }
    }
L_00207f46:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00207f48:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00207f4cu)) return;
    }
L_00207f4c:;
    {
        cpu->r[0] = rd32(0x00207f50u + + 0x34u);
    }
L_00207f4e:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00207f52u, 0, 0);
    }
L_00207f50:;
    {
        cpu->r[14] = 0x00207f54u; guest_call(cpu, 0x00071f3cu);
    }
L_00207f54:;
    {
        cpu->r[0] = 0x00000001u;
        set_nz(cpu, cpu->r[0]);
    }
L_00207f56:;
    {
        cpu->r[14] = 0x00207f5au; guest_call(cpu, 0x00071e1cu);
    }
L_00207f5a:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00207f5c:;
    {
        cpu->r[14] = 0x00207f60u; guest_call(cpu, 0x00071e28u);
    }
L_00207f60:;
    {
        goto L_00207f46;
    }
L_00207f62:;
    {
        cpu->r[0] = rd32(0x00207f64u + + 0x24u);
    }
L_00207f64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00207f68u, 0, 0);
    }
L_00207f66:;
    {
        cpu->r[14] = 0x00207f6au; guest_call(cpu, 0x00071f3cu);
    }
L_00207f6a:;
    {
        cpu->r[0] = 0x00000001u;
        set_nz(cpu, cpu->r[0]);
    }
L_00207f6c:;
    {
        cpu->r[14] = 0x00207f70u; guest_call(cpu, 0x00071e1cu);
    }
L_00207f70:;
    {
        cpu->r[5] = 0x00000026u;
        set_nz(cpu, cpu->r[5]);
    }
L_00207f72:;
    {
        cpu->r[4] = cpu->r[0];
        set_nz(cpu, cpu->r[4]);
    }
L_00207f74:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 0x0000000bu, &shc); cpu->r[0] = v;
        set_nz(cpu, v);
    }
L_00207f76:;
    {
        cpu->r[0] = cpu->r[0];
        set_nz(cpu, cpu->r[0]);
    }
L_00207f78:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 0x00000015u, &shc); cpu->r[4] = v;
        set_nz(cpu, v);
    }
L_00207f7a:;
    {
        cpu->r[0] = cpu->r[0];
        set_nz(cpu, cpu->r[0]);
    }
L_00207f7c:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 0x0000000au, &shc); cpu->r[4] = v;
        set_nz(cpu, v);
    }
L_00207f7e:;
    {
        cpu->r[0] = cpu->r[0];
        set_nz(cpu, cpu->r[0]);
    }
L_00207f80:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 0x00000010u, &shc); cpu->r[4] = v;
        set_nz(cpu, v);
    }
L_00207f82:;
    {
        cpu->r[0] = cpu->r[0];
        set_nz(cpu, cpu->r[0]);
    }
L_00207f84:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x318u);
    }
L_00207f86:;
    {
        cpu->r[2] = cpu->r[0];
        set_nz(cpu, cpu->r[2]);
    }
L_00207f88:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2c0u);
    }
L_00207f8a:;
    {
        cpu->r[2] = cpu->r[0];
        set_nz(cpu, cpu->r[2]);
    }
}

/* _ZNSt4priv14_Pthread_alloc23_S_get_per_thread_stateEv @ 00207f8c (thumb) */
void fn_00207f8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207f8c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207f8e:;
    {
        cpu->r[14] = 0x00207f92u; fn_00207ee4(cpu);
    }
L_00207f92:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207f94u)) return;
    }
}

/* _ZNSt4priv19_Pthread_alloc_impl10deallocateEPvj @ 00207f94 (thumb) */
void fn_00207f94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207f94:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_00207f96:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00207f98:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00207f9a:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00207f9c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00207fb4;
        }
    }
L_00207f9e:;
    {
        cpu->r[14] = 0x00207fa2u; fn_00207ee4(cpu);
    }
L_00207fa2:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000007u, 0, 1);
    }
L_00207fa4:;
    {
        uint32_t v = shifter(cpu->r[5], 3, 0x00000003u, &shc); cpu->r[5] = v;
        set_nz(cpu, v);
    }
L_00207fa6:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_00207fa8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00207fac:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00207fae:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[4]);
    }
L_00207fb2:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00207fb4u)) return;
    }
L_00207fb4:;
    {
        cpu->r[14] = 0x00207fb8u; guest_call(cpu, 0x00071eb8u);
    }
L_00207fb8:;
    {
        goto L_00207fb2;
    }
}

/* _ZNSt4priv14_Pthread_alloc10deallocateEPvj @ 00207fbc (thumb) */
void fn_00207fbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207fbc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00207fbe:;
    {
        cpu->r[14] = 0x00207fc2u; fn_00207f94(cpu);
    }
L_00207fc2:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00207fc4u)) return;
    }
}

/* _ZNSt14__malloc_alloc8allocateEj @ 00207fc4 (thumb) */
void fn_00207fc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00207fc4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00207fc8:;
    {
        cpu->r[4] = rd32(0x00207fccu + + 0x44u);
    }
L_00207fca:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00207fcc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00207fd0u, 0, 0);
    }
L_00207fce:;
    {
        cpu->r[14] = 0x00207fd2u; guest_call(cpu, 0x00071954u);
    }
L_00207fd2:;
    {
        if (cpu->r[0] == 0) goto L_00207fd8;
    }
L_00207fd4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00207fd8u)) return;
    }
L_00207fd8:;
    {
        cpu->r[3] = rd32(0x00207fdcu + + 0x38u);
    }
L_00207fda:;
    {
        cpu->r[7] = rd32(0x00207fdcu + + 0x3cu);
    }
L_00207fdc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00207fde:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00207fe2u, 0, 0);
    }
L_00207fe0:;
    {
        goto L_00207fee;
    }
L_00207fe2:;
    {
        cpu->r[14] = 0x00207fe4u; guest_call(cpu, cpu->r[4]);
    }
L_00207fe4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00207fe6:;
    {
        cpu->r[14] = 0x00207feau; guest_call(cpu, 0x00071954u);
    }
L_00207fea:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00207fec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00207fd4;
        }
    }
L_00207fee:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00207ff0:;
    {
        cpu->r[14] = 0x00207ff4u; guest_call(cpu, 0x000719ccu);
    }
L_00207ff4:;
    {
        cpu->r[4] = rd32(cpu->r[7]);
    }
L_00207ff6:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00207ff8:;
    {
        cpu->r[14] = 0x00207ffcu; guest_call(cpu, 0x00071e28u);
    }
L_00207ffc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00207ffe:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00207fe2;
        }
    }
L_00208000:;
    {
        cpu->r[0] = rd32(0x00208004u + + 0x18u);
    }
L_00208002:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00208006u, 0, 0);
    }
L_00208004:;
    {
        cpu->r[14] = 0x00208008u; guest_call(cpu, 0x00071f3cu);
    }
L_00208008:;
    {
        cpu->r[0] = 0x00000001u;
        set_nz(cpu, cpu->r[0]);
    }
L_0020800a:;
    {
        cpu->r[14] = 0x0020800eu; guest_call(cpu, 0x00071e1cu);
    }
L_0020800e:;
L_00208010:;
    {
        cpu->r[4] = 0x00000048u;
        set_nz(cpu, cpu->r[4]);
    }
L_00208012:;
    {
        cpu->r[4] = cpu->r[0];
        set_nz(cpu, cpu->r[4]);
    }
L_00208014:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 0x0000000cu, &shc); cpu->r[0] = v;
        set_nz(cpu, v);
    }
L_00208016:;
    {
        cpu->r[0] = cpu->r[0];
        set_nz(cpu, cpu->r[0]);
    }
L_00208018:;
    {
        if (cond_test(cpu, 8)) {
        return fn_00208060(cpu);
        }
    }
L_0020801a:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 0x00000002u, &shc); cpu->r[4] = v;
        set_nz(cpu, v);
    }
L_0020801c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_0020801e:;
    {
        cpu->r[2] = cpu->r[0];
        set_nz(cpu, cpu->r[2]);
    }
}

/* _ZNSt4priv19_Pthread_alloc_impl14_S_chunk_allocEjRjPNS_31_Pthread_alloc_per_thread_stateE @ 00208020 (thumb) */
void fn_00208020(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00208020:;
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
L_00208024:;
    {
        cpu->r[4] = rd32(0x00208028u + + 0xbcu);
    }
L_00208026:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00208028:;
    {
        cpu->r[1] = rd32(0x0020802cu + + 0xbcu);
    }
L_0020802a:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0020802c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00208030u, 0, 0);
    }
L_0020802e:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00208030:;
    {
        cpu->r[10] = rd32(0x00208034u + + 0xb8u);
    }
L_00208034:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00208036:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00208038:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_0020803a:;
    {
        cpu->r[9] = rd32(0x0020803cu + + 0xb4u);
    }
L_0020803e:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_00208040:;
    {
        cpu->r[11] = rd32(0x00208044u + + 0xb0u);
    }
L_00208044:;
    {
        goto L_0020809a;
    }
L_00208046:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_00208048:;
    {
        if (cond_test(cpu, 3)) {
        goto L_002080d0;
        }
    }
L_0020804a:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_0020804e:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00208050:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], 0x00000007u, 0, 0);
    }
L_00208054:;
    {
        uint32_t v = cpu->r[8] & ~ 0x00000007u; cpu->r[8] = v;
    }
L_00208058:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0020805c:;
    {
        if (cpu->r[0] == 0) goto L_00208072;
    }
L_0020805e:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000007u, 0, 1);
    }
L_00208060:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00208062:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 0x00000003u, &shc); cpu->r[0] = v;
        set_nz(cpu, v);
    }
L_00208064:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00208066:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0020806a:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0020806c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0020806e:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[0], 2, 2u, &shc), cpu->r[3]);
    }
L_00208072:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00208074:;
    {
        cpu->r[14] = 0x00208078u; fn_00207fc4(cpu);
    }
L_00208078:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_0020807c:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_0020807e:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_00208080:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_00208084:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00208086:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[8], 3, 4u, &shc), 0, 0);
    }
L_0020808a:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0020808c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_00208090:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00208092:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00208094:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00208096:;
    {
        cpu->r[14] = 0x0020809au; guest_call(cpu, 0x00071e28u);
    }
L_0020809a:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0020809c:;
    {
        cpu->r[14] = 0x002080a0u; guest_call(cpu, 0x000719ccu);
    }
L_002080a0:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_002080a2:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_002080a6:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_002080aa:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5]; cpu->r[2] = v;
    }
L_002080ae:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_002080b0:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_002080b2:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_002080b4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_002080b6:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00208046;
        }
    }
L_002080b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 1);
    }
L_002080ba:;
    {
        wr32(cpu->r[7], cpu->r[2]);
    }
L_002080bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_002080be:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_002080c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_002080c2:;
    {
        cpu->r[14] = 0x002080c6u; guest_call(cpu, 0x00071e28u);
    }
L_002080c6:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_002080c8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_002080ca:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_002080cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x002080d0u)) return;
    }
L_002080d0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_002080d2:;
    {
        cpu->r[14] = 0x002080d6u; guest_call(cpu, 0x00071a68u);
    }
L_002080d6:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_002080d8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_002080da:;
    {
        uint32_t v = cpu->r[5] * cpu->r[0] + cpu->r[3]; cpu->r[0] = v;
    }
L_002080de:;
    {
        wr32(cpu->r[7], cpu->r[0]);
    }
L_002080e0:;
    {
        goto L_002080bc;
    }
}

/* sub_00208046 @ 00208046 (thumb) */
void fn_00208046(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00208046:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_00208048:;
    {
        if (cond_test(cpu, 3)) {
        goto L_002080d0;
        }
    }
L_0020804a:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_0020804e:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00208050:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], 0x00000007u, 0, 0);
    }
L_00208054:;
    {
        uint32_t v = cpu->r[8] & ~ 0x00000007u; cpu->r[8] = v;
    }
L_00208058:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0020805c:;
    {
        if (cpu->r[0] == 0) goto L_00208072;
    }
L_0020805e:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000007u, 0, 1);
    }
L_00208060:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00208062:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 0x00000003u, &shc); cpu->r[0] = v;
        set_nz(cpu, v);
    }
L_00208064:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00208066:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0020806a:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0020806c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0020806e:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[0], 2, 2u, &shc), cpu->r[3]);
    }
L_00208072:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00208074:;
    {
        cpu->r[14] = 0x00208078u; fn_00207fc4(cpu);
    }
L_00208078:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_0020807c:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_0020807e:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_00208080:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_00208084:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00208086:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[8], 3, 4u, &shc), 0, 0);
    }
L_0020808a:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0020808c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_00208090:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00208092:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00208094:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00208096:;
    {
        cpu->r[14] = 0x0020809au; guest_call(cpu, 0x00071e28u);
    }
L_0020809a:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0020809c:;
    {
        cpu->r[14] = 0x002080a0u; guest_call(cpu, 0x000719ccu);
    }
L_002080a0:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_002080a2:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_002080a6:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_002080aa:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5]; cpu->r[2] = v;
    }
L_002080ae:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_002080b0:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_002080b2:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_002080b4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_002080b6:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00208046;
        }
    }
L_002080b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 1);
    }
L_002080ba:;
    {
        wr32(cpu->r[7], cpu->r[2]);
    }
L_002080bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_002080be:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_002080c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_002080c2:;
    {
        cpu->r[14] = 0x002080c6u; guest_call(cpu, 0x00071e28u);
    }
L_002080c6:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_002080c8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_002080ca:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_002080cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x002080d0u)) return;
    }
L_002080d0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_002080d2:;
    {
        cpu->r[14] = 0x002080d6u; guest_call(cpu, 0x00071a68u);
    }
L_002080d6:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_002080d8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_002080da:;
    {
        uint32_t v = cpu->r[5] * cpu->r[0] + cpu->r[3]; cpu->r[0] = v;
    }
L_002080de:;
    {
        wr32(cpu->r[7], cpu->r[0]);
    }
L_002080e0:;
    {
        goto L_002080bc;
    }
}

/* sub_00208060 @ 00208060 (thumb) */
void fn_00208060(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00208060:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00208062:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 0x00000003u, &shc); cpu->r[0] = v;
        set_nz(cpu, v);
    }
L_00208064:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00208066:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0020806a:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0020806c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0020806e:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[0], 2, 2u, &shc), cpu->r[3]);
    }
L_00208072:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00208074:;
    {
        cpu->r[14] = 0x00208078u; fn_00207fc4(cpu);
    }
L_00208078:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_0020807c:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_0020807e:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_00208080:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_00208084:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00208086:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[8], 3, 4u, &shc), 0, 0);
    }
L_0020808a:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0020808c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_00208090:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00208092:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00208094:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00208096:;
    {
        cpu->r[14] = 0x0020809au; guest_call(cpu, 0x00071e28u);
    }
L_0020809a:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0020809c:;
    {
        cpu->r[14] = 0x002080a0u; guest_call(cpu, 0x000719ccu);
    }
L_002080a0:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_002080a2:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_002080a6:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_002080aa:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5]; cpu->r[2] = v;
    }
L_002080ae:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_002080b0:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_002080b2:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_002080b4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_002080b6:;
    {
        if (cond_test(cpu, 9)) {
        return fn_00208046(cpu);
        }
    }
L_002080b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 1);
    }
L_002080ba:;
    {
        wr32(cpu->r[7], cpu->r[2]);
    }
L_002080bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_002080be:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_002080c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_002080c2:;
    {
        cpu->r[14] = 0x002080c6u; guest_call(cpu, 0x00071e28u);
    }
L_002080c6:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_002080c8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_002080ca:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_002080cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x002080d0u)) return;
    }
}

/* _ZNSt4priv31_Pthread_alloc_per_thread_state9_M_refillEj @ 002080f8 (thumb) */
void fn_002080f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002080f8:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_002080fa:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_002080fc:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_002080fe:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00208100:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00208102:;
    {
        cpu->r[3] = 0x00000080u;
        set_nz(cpu, cpu->r[3]);
    }
L_00208104:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00208106:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x4u;
        wr32(cpu->r[1] + - 0x4u, cpu->r[3]);
        cpu->r[1] = wb_tmp;
    }
L_0020810a:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0020810c:;
    {
        cpu->r[14] = 0x00208110u; fn_00208020(cpu);
    }
L_00208110:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00208112:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00208114:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020813e;
        }
    }
L_00208116:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000007u, 0, 1);
    }
L_00208118:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 1);
    }
L_0020811a:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 0x00000003u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_0020811c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0020811e:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00208120:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
    }
L_00208124:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020813a;
        }
    }
L_00208126:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 1);
    }
L_00208128:;
    {
        cpu->r[2] = 0x00000001u;
        set_nz(cpu, cpu->r[2]);
    }
L_0020812a:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_0020812c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_0020812e:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x4u);
    }
L_00208130:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00208132:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 1);
    }
L_00208134:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_00208136:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00208138:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020812a;
        }
    }
L_0020813a:;
    {
        cpu->r[3] = 0x00000000u;
        set_nz(cpu, cpu->r[3]);
    }
L_0020813c:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_0020813e:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00208140:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00208142u)) return;
    }
}

/* _ZNSt4priv19_Pthread_alloc_impl8allocateERjPNS_31_Pthread_alloc_per_thread_stateE @ 00208144 (thumb) */
void fn_00208144(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00208144:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00208146:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00208148:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0020814a:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0020814c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000080u, 1, 1);
    }
L_0020814e:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00208180;
        }
    }
L_00208150:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00000044u, 0, 0);
    }
L_00208154:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000007u, 0, 1);
    }
L_00208156:;
    {
        uint32_t v = cpu->r[0] & ~ 0x00000007u; cpu->r[0] = v;
    }
L_0020815a:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_0020815c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0020815e:;
    {
        cpu->r[14] = 0x00208162u; guest_call(cpu, 0x000719ccu);
    }
L_00208162:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00208164:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000007u, 0, 1);
    }
L_00208166:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 0x00000003u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00208168:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0020816a:;
    {
        cpu->r[4] = rd32(cpu->r[6] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0020816e:;
    {
        if (cpu->r[4] == 0) goto L_00208188;
    }
L_00208170:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_00208172:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
    }
L_00208176:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00208178:;
    {
        cpu->r[14] = 0x0020817cu; guest_call(cpu, 0x00071e28u);
    }
L_0020817c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0020817e:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00208180u)) return;
    }
L_00208180:;
    {
        cpu->r[14] = 0x00208184u; fn_00207fc4(cpu);
    }
L_00208184:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00208186:;
    {
        goto L_0020817c;
    }
L_00208188:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0020818a:;
    {
        cpu->r[14] = 0x0020818eu; fn_002080f8(cpu);
    }
L_0020818e:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00208190:;
    {
        goto L_00208176;
    }
}

/* _ZNSt4priv14_Pthread_alloc8allocateERjPNS_31_Pthread_alloc_per_thread_stateE @ 00208194 (thumb) */
void fn_00208194(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00208194:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00208196:;
    {
        cpu->r[14] = 0x0020819au; fn_00208144(cpu);
    }
L_0020819a:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0020819cu)) return;
    }
}

/* _ZNSt4priv19_Pthread_alloc_impl8allocateERj @ 0020819c (thumb) */
void fn_0020819c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0020819c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0020819e:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_002081a0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_002081a2:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000080u, 1, 1);
    }
L_002081a4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_002081ca;
        }
    }
L_002081a6:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000007u, 0, 1);
    }
L_002081a8:;
    {
        uint32_t v = cpu->r[0] & ~ 0x00000007u; cpu->r[0] = v;
    }
L_002081ac:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_002081ae:;
    {
        cpu->r[14] = 0x002081b2u; fn_00207ee4(cpu);
    }
L_002081b2:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_002081b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000007u, 0, 1);
    }
L_002081b6:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 0x00000003u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_002081b8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_002081ba:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_002081be:;
    {
        if (cpu->r[3] == 0) goto L_002081d0;
    }
L_002081c0:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_002081c2:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
    }
L_002081c6:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_002081c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x002081cau)) return;
    }
L_002081ca:;
    {
        cpu->r[14] = 0x002081ceu; fn_00207fc4(cpu);
    }
L_002081ce:;
    {
        goto L_002081c8;
    }
L_002081d0:;
    {
        cpu->r[14] = 0x002081d4u; fn_002080f8(cpu);
    }
L_002081d4:;
    {
        goto L_002081c8;
    }
}

/* _ZNSt4priv14_Pthread_alloc8allocateERj @ 002081d8 (thumb) */
void fn_002081d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002081d8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_002081da:;
    {
        cpu->r[14] = 0x002081deu; fn_0020819c(cpu);
    }
L_002081de:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x002081e0u)) return;
    }
}

/* _ZNSt4priv19_Pthread_alloc_impl10reallocateEPvjRj @ 002081e0 (thumb) */
void fn_002081e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002081e0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_002081e2:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_002081e6:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_002081e8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_002081ea:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_002081ec:;
L_002081ee:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_002081f0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_002081f8;
        }
    }
L_002081f2:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_002081f4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_002081f6:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0020822e;
        }
    }
L_002081f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000007u, 0, 1);
    }
L_002081fa:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000007u, 0, 1);
    }
L_002081fc:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000007u; cpu->r[3] = v;
    }
L_00208200:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000007u; cpu->r[1] = v;
    }
L_00208204:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00208206:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00208228;
        }
    }
L_00208208:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0020820a:;
    {
        cpu->r[14] = 0x0020820eu; fn_0020819c(cpu);
    }
L_0020820e:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_00208210:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00208212:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00208214:;
L_00208216:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00208218:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0020821a:;
    {
        cpu->r[14] = 0x0020821eu; guest_call(cpu, 0x00071828u);
    }
L_0020821e:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00208220:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00208222:;
    {
        cpu->r[14] = 0x00208226u; fn_00207f94(cpu);
    }
L_00208226:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_00208228:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0020822a:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0020822eu)) return;
    }
L_0020822e:;
    {
        cpu->r[14] = 0x00208232u; guest_call(cpu, 0x00071864u);
    }
L_00208232:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00208234:;
    {
        goto L_00208228;
    }
}

/* _ZNSt4priv14_Pthread_alloc10reallocateEPvjRj @ 00208238 (thumb) */
void fn_00208238(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00208238:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0020823a:;
    {
        cpu->r[14] = 0x0020823eu; fn_002081e0(cpu);
    }
L_0020823e:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00208240u)) return;
    }
}

/* init_array_85 @ 00208240 (thumb) */
void fn_00208240(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00208240:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00208242:;
    {
        cpu->r[4] = rd32(0x00208244u + + 0x20u);
    }
L_00208244:;
    {
        cpu->r[3] = rd32(0x00208248u + + 0x20u);
    }
L_00208246:;
    {
        cpu->r[1] = 0x00000000u;
        set_nz(cpu, cpu->r[1]);
    }
L_00208248:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0020824cu, 0, 0);
    }
L_0020824a:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0020824c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0020824e:;
    {
        cpu->r[14] = 0x00208252u; guest_call(cpu, 0x000718acu);
    }
L_00208252:;
    {
        cpu->r[3] = rd32(0x00208254u + + 0x18u);
    }
L_00208254:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00208256:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00208258:;
    {
        cpu->r[3] = rd32(0x0020825cu + + 0x14u);
    }
L_0020825a:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0020825c:;
    {
        cpu->r[14] = 0x00208260u; guest_call(cpu, 0x00071a50u);
    }
L_00208260:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00208262u)) return;
    }
}

/* sub_00208278 @ 00208278 (arm) */
void fn_00208278(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00208278:;
    {
        cpu->r[12] = rd32(0x00208280u + + 0x4u);
    }
L_0020827c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00208284u, cpu->r[12], 0, 0);
    }
L_00208280:;
    {
        guest_return_or_jump(cpu, cpu->r[12], entry_lr); return;
    }
}

/* sub_00208288 @ 00208288 (arm) */
void fn_00208288(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00208288:;
    {
        cpu->r[12] = rd32(0x00208290u + + 0x4u);
    }
L_0020828c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00208294u, cpu->r[12], 0, 0);
    }
L_00208290:;
    {
        guest_return_or_jump(cpu, cpu->r[12], entry_lr); return;
    }
}

/* sub_00208298 @ 00208298 (arm) */
void fn_00208298(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00208298:;
    {
        cpu->r[12] = rd32(0x002082a0u + + 0x4u);
    }
L_0020829c:;
    {
        cpu->r[12] = add_flags(cpu, 0x002082a4u, cpu->r[12], 0, 0);
    }
L_002082a0:;
    {
        guest_return_or_jump(cpu, cpu->r[12], entry_lr); return;
    }
}

/* sub_002082a8 @ 002082a8 (arm) */
void fn_002082a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002082a8:;
    {
        cpu->r[12] = rd32(0x002082b0u + + 0x4u);
    }
L_002082ac:;
    {
        cpu->r[12] = add_flags(cpu, 0x002082b4u, cpu->r[12], 0, 0);
    }
L_002082b0:;
    {
        guest_return_or_jump(cpu, cpu->r[12], entry_lr); return;
    }
}
