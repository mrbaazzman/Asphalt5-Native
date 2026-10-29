#include "functions.h"

/* _ZN4Game22OnMPRejoinLobbySuccessEP10DataPacketb @ 00195654 (arm) */
void fn_00195654(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00195654:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_00195658:;
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
L_0019565c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00195660:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00195664:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x0001e400u, 0, 0);
    }
L_00195668:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0019566c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00195670:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00195674:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000380u, 0, 0);
    }
L_00195678:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0019567c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00195680:;
    {
        goto L_001956d0;
    }
L_00195684:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x8u);
    }
L_00195688:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0019568c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195690:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019569c;
        }
    }
L_00195694:;
    {
        cpu->r[14] = 0x00195698u; fn_0018ba20(cpu);
    }
L_00195698:;
    {
        wr32(cpu->r[8], cpu->r[10]);
    }
L_0019569c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x4u);
    }
L_001956a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001956a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001956b0;
        }
    }
L_001956a8:;
    {
        cpu->r[14] = 0x001956acu; fn_0018ba20(cpu);
    }
L_001956ac:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[10]);
    }
L_001956b0:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0xcu);
    }
L_001956b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001956b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001956c4;
        }
    }
L_001956bc:;
    {
        cpu->r[14] = 0x001956c0u; fn_0018ba20(cpu);
    }
L_001956c0:;
    {
        wr32(cpu->r[8] + + 0xcu, cpu->r[10]);
    }
L_001956c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001956c8:;
    {
        cpu->r[14] = 0x001956ccu; fn_0018ba20(cpu);
    }
L_001956cc:;
    {
        cpu->r[6] = rd32(cpu->r[6]);
    }
L_001956d0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[9], 1, 1);
    }
L_001956d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00195684;
        }
    }
L_001956d8:;
    {
        cpu->r[8] = 0x0000e770u;
    }
L_001956dc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001956e0:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_001956e4:;
    {
        cpu->r[14] = 0x001956e8u; fn_00194530(cpu);
    }
L_001956e8:;
    {
        cpu->r[1] = 0x00006788u;
    }
L_001956ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000370u, 0, 0);
    }
L_001956f0:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_001956f4:;
    {
        cpu->r[2] = 0x0000e788u;
    }
L_001956f8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_001956fc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00195700:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00195704:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00195708:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[10]);
    }
L_0019570c:;
    {
        wr8(cpu->r[1] + + 0x8au, cpu->r[10]);
    }
L_00195710:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195ac0;
        }
    }
L_00195714:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_00195718:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0019571c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00195714;
        }
    }
L_00195720:;
    {
        cpu->r[8] = 0x0000e798u;
    }
L_00195724:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_00195728:;
    {
        cpu->r[10] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_0019572c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00195730:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195c60;
        }
    }
L_00195734:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00195738:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019573c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[8]);
    }
L_00195740:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00195744:;
    {
        wr16(cpu->r[13] + + 0x2eu, cpu->r[8]);
    }
L_00195748:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000002eu, 0, 0);
    }
L_0019574c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00195750:;
    {
        cpu->r[14] = 0x00195758u;
    }
L_00195754:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195758u)) return;
    }
L_00195758:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0019575c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_00195760:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195a64;
        }
    }
L_00195764:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[7], 0x0001e000u, 0, 0);
    }
L_00195768:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], 0x0000022cu, 0, 0);
    }
L_0019576c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00195770:;
    {
        cpu->r[14] = 0x00195774u; fn_001d06e4(cpu);
    }
L_00195774:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_00195778:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00195b28;
        }
    }
L_0019577c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00195780:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195784:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195794;
        }
    }
L_00195788:;
    {
        cpu->r[14] = 0x0019578cu; fn_0018ba20(cpu);
    }
L_0019578c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00195790:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_00195794:;
    {
        cpu->r[3] = 0x0000e770u;
    }
L_00195798:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019579c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001957a0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001957a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001957d8;
        }
    }
L_001957a8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001957ac:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001957b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001957a8;
        }
    }
L_001957b4:;
    {
        cpu->r[2] = 0x0000e778u;
    }
L_001957b8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001957bc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001957c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001957c4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_001957c8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_001957cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000012u, 0, 0);
    }
L_001957d0:;
    {
        cpu->r[14] = 0x001957d8u;
    }
L_001957d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001957d8u)) return;
    }
L_001957d8:;
    {
        cpu->r[5] = 0x0000e778u;
    }
L_001957dc:;
    {
        cpu->r[8] = 0x0000e798u;
    }
L_001957e0:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_001957e4:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_001957e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001957ec:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_001957f0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_001957f4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_001957f8:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x12u);
    }
L_001957fc:;
    {
        wr8(cpu->r[3] + + 0x8u, cpu->r[2]);
    }
L_00195800:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_00195804:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00195808:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_0019580c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000013u, 0, 0);
    }
L_00195810:;
    {
        cpu->r[14] = 0x00195818u;
    }
L_00195814:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195818u)) return;
    }
L_00195818:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_0019581c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00195820:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00195824:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_00195828:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x13u);
    }
L_0019582c:;
    {
        wr8(cpu->r[3] + + 0x9u, cpu->r[2]);
    }
L_00195830:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_00195834:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00195838:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_0019583c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_00195840:;
    {
        cpu->r[14] = 0x00195848u;
    }
L_00195844:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195848u)) return;
    }
L_00195848:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_0019584c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00195850:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_00195854:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x10u);
    }
L_00195858:;
    {
        wr8(cpu->r[3] + + 0x18u, cpu->r[2]);
    }
L_0019585c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00195860:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_00195864:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195868:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195880;
        }
    }
L_0019586c:;
    {
        cpu->r[14] = 0x00195870u; fn_0018ba20(cpu);
    }
L_00195870:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00195874:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00195878:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0019587c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_00195880:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_00195884:;
    {
        cpu->r[10] = 0x0000e778u;
    }
L_00195888:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_0019588c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00195890:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00195894:;
    {
        uint32_t wb_tmp = cpu->r[2] + - 0x4u;
        wr16(cpu->r[2] + - 0x4u, cpu->r[5]);
        cpu->r[2] = wb_tmp;
    }
L_00195898:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019589c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001958a0:;
    {
        cpu->r[14] = 0x001958a8u;
    }
L_001958a4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001958a8u)) return;
    }
L_001958a8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_001958ac:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001958b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001958b4:;
    {
        cpu->r[8] = 0x0000e798u;
    }
L_001958b8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_001958bc:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_001958c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000011u, 0, 0);
    }
L_001958c4:;
    {
        cpu->r[14] = 0x001958ccu;
    }
L_001958c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001958ccu)) return;
    }
L_001958cc:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_001958d0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_001958d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000002au, 0, 0);
    }
L_001958d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001958dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001958e0:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x8u);
    }
L_001958e4:;
    {
        cpu->r[12] = rd8(cpu->r[12] + + 0x11u);
    }
L_001958e8:;
    {
        wr8(cpu->r[3] + + 0x19u, cpu->r[12]);
    }
L_001958ec:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[5]);
    }
L_001958f0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001958f4:;
    {
        wr16(cpu->r[13] + + 0x2au, cpu->r[5]);
    }
L_001958f8:;
    {
        cpu->r[14] = 0x00195900u;
    }
L_001958fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195900u)) return;
    }
L_00195900:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_00195904:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00195908:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019590c:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr16(cpu->r[1] + - 0x8u, cpu->r[5]);
        cpu->r[1] = wb_tmp;
    }
L_00195910:;
    {
        cpu->r[14] = 0x00195918u;
    }
L_00195914:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195918u)) return;
    }
L_00195918:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0019591c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00195920:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00195924:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0xau;
        wr16(cpu->r[1] + - 0xau, cpu->r[5]);
        cpu->r[1] = wb_tmp;
    }
L_00195928:;
    {
        cpu->r[14] = 0x00195930u;
    }
L_0019592c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195930u)) return;
    }
L_00195930:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00195934:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x19u);
    }
L_00195938:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0019593c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00195a6c;
        }
    }
L_00195940:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_00195944:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00195948:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019594c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00195950:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x18u;
        wr32(cpu->r[1] + - 0x18u, cpu->r[10]);
        cpu->r[1] = wb_tmp;
    }
L_00195954:;
    {
        cpu->r[14] = 0x0019595cu;
    }
L_00195958:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019595cu)) return;
    }
L_0019595c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_00195960:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_00195964:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00195a58;
        }
    }
L_00195968:;
    {
        cpu->r[8] = 0x0000e784u;
    }
L_0019596c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x0000024cu, 0, 0);
    }
L_00195970:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_00195974:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_00195978:;
    {
        cpu->r[11] = cpu->r[10];
    }
L_0019597c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00195980:;
    {
        cpu->r[3] = 0x0000e788u;
    }
L_00195984:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00195988:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019598c:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00195990:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00195994:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_00195998:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0019599c:;
    {
        cpu->r[14] = 0x001959a0u; fn_0018ba6c(cpu);
    }
L_001959a0:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001959a4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001959a8:;
    {
        cpu->r[10] = (uint32_t)((uint8_t)cpu->r[10]);
    }
L_001959ac:;
    {
        wr16(cpu->r[13] + + 0x24u, cpu->r[11]);
    }
L_001959b0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001959b4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001959b8:;
    {
        wr32(cpu->r[0], cpu->r[11]);
    }
L_001959bc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[11]);
    }
L_001959c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001959c4:;
    {
        cpu->r[14] = 0x001959ccu;
    }
L_001959c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001959ccu)) return;
    }
L_001959cc:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001959d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001959d4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001959d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001959dc:;
    {
        cpu->r[14] = 0x001959e4u;
    }
L_001959e0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001959e4u)) return;
    }
L_001959e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001959e8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001959ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001959f0:;
    {
        cpu->r[14] = 0x001959f8u;
    }
L_001959f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001959f8u)) return;
    }
L_001959f8:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001959fc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00195a00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_00195a04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00195a08:;
    {
        cpu->r[14] = 0x00195a10u;
    }
L_00195a0c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195a10u)) return;
    }
L_00195a10:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00195a14:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00195a18:;
    {
        cpu->r[14] = 0x00195a1cu; fn_001d06e4(cpu);
    }
L_00195a1c:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_00195a20:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00195a24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195a28:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_00195a2c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_00195a30:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[5]);
        }
    }
L_00195a34:;
    {
        cpu->r[14] = 0x00195a38u; fn_00208278(cpu);
    }
L_00195a38:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00195a3c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00195a40:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_00195a44:;
    {
        wr32(cpu->r[0], cpu->r[6]);
    }
L_00195a48:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[5]);
    }
L_00195a4c:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00195a50:;
    {
        wr32(cpu->r[7] + cpu->r[8], cpu->r[0]);
    }
L_00195a54:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00195994;
        }
    }
L_00195a58:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00195a5c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00195a60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00195a98;
        }
    }
L_00195a64:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00195a68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00195a6cu)) return;
    }
L_00195a6c:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_00195a70:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00195a74:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x64u);
    }
L_00195a78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_00195a7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195940;
        }
    }
L_00195a80:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x2au);
    }
L_00195a84:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00195a88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195940;
        }
    }
L_00195a8c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00195a90:;
    {
        cpu->r[14] = 0x00195a94u; fn_001d0434(cpu);
    }
L_00195a94:;
    {
        goto L_00195940;
    }
L_00195a98:;
    {
        cpu->r[2] = 0x0000e780u;
    }
L_00195a9c:;
    {
        cpu->r[3] = 0x0000e78cu;
    }
L_00195aa0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00195aa4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00195aa8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00195aac:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_00195ab0:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_00195ab4:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[2]);
    }
L_00195ab8:;
    {
        cpu->r[14] = 0x00195abcu; fn_001933d4(cpu);
    }
L_00195abc:;
    {
        goto L_00195a64;
    }
L_00195ac0:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_00195ac4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_00195ac8:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00195acc:;
    {
        cpu->r[14] = 0x00195ad0u; fn_0018ba6c(cpu);
    }
L_00195ad0:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_00195ad4:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_00195ad8:;
    {
        uint32_t wb_tmp = cpu->r[2] + - 0x1cu;
        wr32(cpu->r[2] + - 0x1cu, cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_00195adc:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00195ae0:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00195ae4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[10]);
    }
L_00195ae8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00195aec:;
    {
        wr32(cpu->r[9] + + 0x4u, cpu->r[10]);
    }
L_00195af0:;
    {
        wr32(cpu->r[9] + + 0xcu, cpu->r[10]);
    }
L_00195af4:;
    {
        cpu->r[14] = 0x00195af8u; fn_00208278(cpu);
    }
L_00195af8:;
    {
        cpu->r[3] = 0x0000e774u;
    }
L_00195afc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00195b00:;
    {
        cpu->r[2] = 0x0000e778u;
    }
L_00195b04:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00195b08:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00195b0c:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_00195b10:;
    {
        wr32(cpu->r[1], cpu->r[0]);
    }
L_00195b14:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00195b18:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[9]);
    }
L_00195b1c:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[0]);
    }
L_00195b20:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[12]);
    }
L_00195b24:;
    {
        goto L_00195720;
    }
L_00195b28:;
    {
        cpu->r[11] = 0x0000e778u;
    }
L_00195b2c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00195b30:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00195b34:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_00195b38:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_00195b3c:;
    {
        cpu->r[14] = 0x00195b40u; fn_001d0700(cpu);
    }
L_00195b40:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00195b44:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_00195b48:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x2eu);
    }
L_00195b4c:;
    {
        cpu->r[14] = 0x00195b50u; fn_001d06ec(cpu);
    }
L_00195b50:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_00195b54:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x8u);
    }
L_00195b58:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x4u);
    }
L_00195b5c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_00195b60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195b78;
        }
    }
L_00195b64:;
    {
        cpu->r[14] = 0x00195b68u; fn_0018ba20(cpu);
    }
L_00195b68:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_00195b6c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00195b70:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_00195b74:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[8]);
    }
L_00195b78:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x2eu);
    }
L_00195b7c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00195b80:;
    {
        cpu->r[14] = 0x00195b84u; imp__Znaj(cpu); /* _Znaj */
    }
L_00195b84:;
    {
        cpu->r[3] = 0x0000e778u;
    }
L_00195b88:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00195b8c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_00195b90:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x2eu);
    }
L_00195b94:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00195b98:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00195b9c:;
    {
        wr32(cpu->r[10] + + 0x4u, cpu->r[0]);
    }
L_00195ba0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00195ba4:;
    {
        cpu->r[14] = 0x00195ba8u; fn_001d06ec(cpu);
    }
L_00195ba8:;
    {
        cpu->r[3] = 0x0000e798u;
    }
L_00195bac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00195bb0:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00195bb4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00195bb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019577c;
        }
    }
L_00195bbc:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00195bc0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195bc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195bd4;
        }
    }
L_00195bc8:;
    {
        cpu->r[14] = 0x00195bccu; fn_0018ba20(cpu);
    }
L_00195bcc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00195bd0:;
    {
        wr32(cpu->r[8], cpu->r[3]);
    }
L_00195bd4:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x4u);
    }
L_00195bd8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195bdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195bec;
        }
    }
L_00195be0:;
    {
        cpu->r[14] = 0x00195be4u; fn_0018ba20(cpu);
    }
L_00195be4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00195be8:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[3]);
    }
L_00195bec:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x14u);
    }
L_00195bf0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195bf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195c04;
        }
    }
L_00195bf8:;
    {
        cpu->r[14] = 0x00195bfcu; fn_0018ba20(cpu);
    }
L_00195bfc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00195c00:;
    {
        wr32(cpu->r[8] + + 0x14u, cpu->r[3]);
    }
L_00195c04:;
    {
        cpu->r[10] = 0x0000e798u;
    }
L_00195c08:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00195c0c:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_00195c10:;
    {
        cpu->r[14] = 0x00195c14u; fn_0018ba20(cpu);
    }
L_00195c14:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_00195c18:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_00195c1c:;
    {
        wr32(cpu->r[7] + cpu->r[10], cpu->r[11]);
    }
L_00195c20:;
    {
        cpu->r[14] = 0x00195c24u; fn_0018ba6c(cpu);
    }
L_00195c24:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00195c28:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x2eu);
    }
L_00195c2c:;
    {
        wr32(cpu->r[7] + cpu->r[10], cpu->r[8]);
    }
L_00195c30:;
    {
        wr32(cpu->r[8] + + 0x14u, cpu->r[11]);
    }
L_00195c34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00195c38:;
    {
        wr32(cpu->r[8], cpu->r[11]);
    }
L_00195c3c:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[11]);
    }
L_00195c40:;
    {
        cpu->r[14] = 0x00195c44u; imp__Znaj(cpu); /* _Znaj */
    }
L_00195c44:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_00195c48:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_00195c4c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x2eu);
    }
L_00195c50:;
    {
        wr32(cpu->r[8], cpu->r[0]);
    }
L_00195c54:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00195c58:;
    {
        cpu->r[14] = 0x00195c5cu; fn_001d06ec(cpu);
    }
L_00195c5c:;
    {
        goto L_0019577c;
    }
L_00195c60:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_00195c64:;
    {
        cpu->r[14] = 0x00195c68u; fn_0018ba6c(cpu);
    }
L_00195c68:;
    {
        wr32(cpu->r[7] + cpu->r[8], cpu->r[0]);
    }
L_00195c6c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[10]);
    }
L_00195c70:;
    {
        wr32(cpu->r[0], cpu->r[10]);
    }
L_00195c74:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[10]);
    }
L_00195c78:;
    {
        goto L_00195734;
    }
}

/* _ZN4Game22OnMPJoinSessionSuccessEP10DataPacket @ 00195c7c (arm) */
void fn_00195c7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00195c7c:;
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
L_00195c80:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00195c84:;
    {
        cpu->r[0] = rd32(0x00195c8cu + + 0x268u);
    }
L_00195c88:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_00195c8c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00195c90:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], 0x0001e400u, 0, 0);
    }
L_00195c94:;
    {
        cpu->r[0] = add_flags(cpu, 0x00195c9cu, cpu->r[0], 0, 0);
    }
L_00195c98:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00195c9c:;
    {
        cpu->r[14] = 0x00195ca0u; fn_001d0ac4(cpu);
    }
L_00195ca0:;
    {
        cpu->r[2] = 0x0000e788u;
    }
L_00195ca4:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_00195ca8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00195cac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00195cb0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000380u, 0, 0);
    }
L_00195cb4:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[8]);
    }
L_00195cb8:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00195cbc:;
    {
        goto L_00195d0c;
    }
L_00195cc0:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0x8u);
    }
L_00195cc4:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00195cc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195ccc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195cd8;
        }
    }
L_00195cd0:;
    {
        cpu->r[14] = 0x00195cd4u; fn_0018ba20(cpu);
    }
L_00195cd4:;
    {
        wr32(cpu->r[4], cpu->r[8]);
    }
L_00195cd8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00195cdc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195ce0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195cec;
        }
    }
L_00195ce4:;
    {
        cpu->r[14] = 0x00195ce8u; fn_0018ba20(cpu);
    }
L_00195ce8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[8]);
    }
L_00195cec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00195cf0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195cf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195d00;
        }
    }
L_00195cf8:;
    {
        cpu->r[14] = 0x00195cfcu; fn_0018ba20(cpu);
    }
L_00195cfc:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[8]);
    }
L_00195d00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00195d04:;
    {
        cpu->r[14] = 0x00195d08u; fn_0018ba20(cpu);
    }
L_00195d08:;
    {
        cpu->r[6] = rd32(cpu->r[6]);
    }
L_00195d0c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_00195d10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00195cc0;
        }
    }
L_00195d14:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00195d18:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00195d1c:;
    {
        cpu->r[14] = 0x00195d20u; fn_00194530(cpu);
    }
L_00195d20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00195d24:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00195d28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00195d2c:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[10]);
        cpu->r[1] = wb_tmp;
    }
L_00195d30:;
    {
        cpu->r[14] = 0x00195d38u;
    }
L_00195d34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195d38u)) return;
    }
L_00195d38:;
    {
        cpu->r[0] = rd32(0x00195d40u + + 0x1b8u);
    }
L_00195d3c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_00195d40:;
    {
        cpu->r[0] = add_flags(cpu, 0x00195d48u, cpu->r[0], 0, 0);
    }
L_00195d44:;
    {
        cpu->r[14] = 0x00195d48u; fn_001d0ac4(cpu);
    }
L_00195d48:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_00195d4c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_00195d50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00195ee0;
        }
    }
L_00195d54:;
    {
        cpu->r[3] = rd32(0x00195d5cu + + 0x1a0u);
    }
L_00195d58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x0001e000u, 0, 0);
    }
L_00195d5c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00195d60:;
    {
        cpu->r[8] = 0x0000e784u;
    }
L_00195d64:;
    {
        cpu->r[3] = add_flags(cpu, 0x00195d6cu, cpu->r[3], 0, 0);
    }
L_00195d68:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00195d6c:;
    {
        cpu->r[3] = rd32(0x00195d74u + + 0x18cu);
    }
L_00195d70:;
    {
        cpu->r[2] = 0x0000e788u;
    }
L_00195d74:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00195d78:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_00195d7c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00195d84u, cpu->r[3], 0, 0);
    }
L_00195d80:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_00195d84:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00195d88:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000026u, 0, 0);
    }
L_00195d8c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00195d90:;
    {
        cpu->r[11] = cpu->r[10];
    }
L_00195d94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000024cu, 0, 0);
    }
L_00195d98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00195d9c:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00195da0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00195da4:;
    {
        goto L_00195df8;
    }
L_00195da8:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00195dac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_00195db0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00195db4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00195db8:;
    {
        cpu->r[14] = 0x00195dc0u;
    }
L_00195dbc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195dc0u)) return;
    }
L_00195dc0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00195dc4:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_00195dc8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00195dcc:;
    {
        cpu->r[14] = 0x00195dd0u; fn_00208278(cpu);
    }
L_00195dd0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00195dd4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_00195dd8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00195ddc:;
    {
        cpu->r[10] = (uint32_t)((uint8_t)cpu->r[10]);
    }
L_00195de0:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_00195de4:;
    {
        wr32(cpu->r[0], cpu->r[6]);
    }
L_00195de8:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[4]);
    }
L_00195dec:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00195df0:;
    {
        wr32(cpu->r[7] + cpu->r[8], cpu->r[0]);
    }
L_00195df4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00195e84;
        }
    }
L_00195df8:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_00195dfc:;
    {
        cpu->r[14] = 0x00195e00u; fn_0018ba6c(cpu);
    }
L_00195e00:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00195e04:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00195e08:;
    {
        wr16(cpu->r[13] + + 0x26u, cpu->r[11]);
    }
L_00195e0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00195e10:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00195e14:;
    {
        wr32(cpu->r[0], cpu->r[11]);
    }
L_00195e18:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[11]);
    }
L_00195e1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00195e20:;
    {
        cpu->r[14] = 0x00195e28u;
    }
L_00195e24:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195e28u)) return;
    }
L_00195e28:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00195e2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00195e30:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00195e34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00195e38:;
    {
        cpu->r[14] = 0x00195e40u;
    }
L_00195e3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195e40u)) return;
    }
L_00195e40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00195e44:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00195e48:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00195e4c:;
    {
        cpu->r[14] = 0x00195e54u;
    }
L_00195e50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195e54u)) return;
    }
L_00195e54:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_00195e58:;
    {
        cpu->r[14] = 0x00195e5cu; fn_001d0ac4(cpu);
    }
L_00195e5c:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_00195e60:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00195e64:;
    {
        cpu->r[14] = 0x00195e68u; fn_001d06e4(cpu);
    }
L_00195e68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195e6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00195da8;
        }
    }
L_00195e70:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00195e74:;
    {
        cpu->r[14] = 0x00195e78u; fn_001d0ac4(cpu);
    }
L_00195e78:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00195e7c:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[4]);
    }
L_00195e80:;
    {
        goto L_00195da8;
    }
L_00195e84:;
    {
        cpu->r[4] = 0x0000e778u;
    }
L_00195e88:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00195e8c:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_00195e90:;
    {
        cpu->r[3] = 0x0000e790u;
    }
L_00195e94:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00195e98:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], 0x0000022cu, 0, 0);
    }
L_00195e9c:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_00195ea0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00195ea4:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_00195ea8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00195eac:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x8u);
    }
L_00195eb0:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00195eb4:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[12]);
    }
L_00195eb8:;
    {
        cpu->r[14] = 0x00195ebcu; fn_001d0700(cpu);
    }
L_00195ebc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_00195ec0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00195ec4:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_00195ec8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00195ecc:;
    {
        cpu->r[14] = 0x00195ed0u; fn_001d0434(cpu);
    }
L_00195ed0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00195ed4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00195ed8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00195edc:;
    {
        cpu->r[14] = 0x00195ee0u; fn_001d06ec(cpu);
    }
L_00195ee0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00195ee4:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_00195ee8:;
    {
        cpu->r[14] = 0x00195eecu; fn_001933d4(cpu);
    }
L_00195eec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00195ef0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00195ef4u)) return;
    }
}

/* _ZN4Game22OnMPListSessionSuccessEP10DataPacket @ 00195f04 (arm) */
void fn_00195f04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00195f04:;
    {
        cpu->r[3] = 0x0000e770u;
    }
L_00195f08:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00195f0c:;
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
L_00195f10:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x0001e400u, 0, 0);
    }
L_00195f14:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00195f18:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000370u, 0, 0);
    }
L_00195f1c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00195f20:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00195f24:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_00195f28:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00195f2c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00195f30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195fb0;
        }
    }
L_00195f34:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x8u);
    }
L_00195f38:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_00195f3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195f40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195f4c;
        }
    }
L_00195f44:;
    {
        cpu->r[14] = 0x00195f48u; fn_0018ba20(cpu);
    }
L_00195f48:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[7]);
    }
L_00195f4c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_00195f50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195f54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195f60;
        }
    }
L_00195f58:;
    {
        cpu->r[14] = 0x00195f5cu; fn_0018ba20(cpu);
    }
L_00195f5c:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[7]);
    }
L_00195f60:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_00195f64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195f68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195f74;
        }
    }
L_00195f6c:;
    {
        cpu->r[14] = 0x00195f70u; fn_0018ba20(cpu);
    }
L_00195f70:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[7]);
    }
L_00195f74:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_00195f78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195f7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195f88;
        }
    }
L_00195f80:;
    {
        cpu->r[14] = 0x00195f84u; fn_0018ba20(cpu);
    }
L_00195f84:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[7]);
    }
L_00195f88:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00195f8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195f90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195f9c;
        }
    }
L_00195f94:;
    {
        cpu->r[14] = 0x00195f98u; fn_0018ba20(cpu);
    }
L_00195f98:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[7]);
    }
L_00195f9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00195fa0:;
    {
        cpu->r[14] = 0x00195fa4u; fn_0018ba20(cpu);
    }
L_00195fa4:;
    {
        cpu->r[6] = rd32(cpu->r[6]);
    }
L_00195fa8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_00195fac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00195f34;
        }
    }
L_00195fb0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00195fb4:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_00195fb8:;
    {
        cpu->r[14] = 0x00195fbcu; fn_001953b0(cpu);
    }
L_00195fbc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00195fc0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00195fc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00195fc8:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[9]);
        cpu->r[1] = wb_tmp;
    }
L_00195fcc:;
    {
        cpu->r[14] = 0x00195fd4u;
    }
L_00195fd0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195fd4u)) return;
    }
L_00195fd4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00195fd8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_00195fdc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00196134;
        }
    }
L_00195fe0:;
    {
        cpu->r[10] = 0x0000e774u;
    }
L_00195fe4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000016u, 0, 0);
    }
L_00195fe8:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_00195fec:;
    {
        cpu->r[7] = cpu->r[9];
    }
L_00195ff0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00195ff4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00195ff8:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_00195ffc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00196000:;
    {
        wr16(cpu->r[13] + + 0x16u, cpu->r[3]);
    }
L_00196004:;
    {
        cpu->r[14] = 0x00196008u; fn_0018ba6c(cpu);
    }
L_00196008:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019600c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_00196010:;
    {
        cpu->r[9] = (uint32_t)((uint8_t)cpu->r[9]);
    }
L_00196014:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00196018:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019601c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196020:;
    {
        wr8(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_00196024:;
    {
        wr8(cpu->r[5] + + 0x11u, cpu->r[7]);
    }
L_00196028:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[7]);
    }
L_0019602c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00196030:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[7]);
    }
L_00196034:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[7]);
    }
L_00196038:;
    {
        wr32(cpu->r[5], cpu->r[7]);
    }
L_0019603c:;
    {
        cpu->r[14] = 0x00196044u;
    }
L_00196040:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00196044u)) return;
    }
L_00196044:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00196048:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0019604c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00196050:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196054:;
    {
        cpu->r[14] = 0x0019605cu;
    }
L_00196058:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019605cu)) return;
    }
L_0019605c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00196060:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00196064:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00196068:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019606c:;
    {
        cpu->r[14] = 0x00196074u;
    }
L_00196070:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00196074u)) return;
    }
L_00196074:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_00196078:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019607c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196080:;
    {
        cpu->r[14] = 0x00196088u;
    }
L_00196084:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00196088u)) return;
    }
L_00196088:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000011u, 0, 0);
    }
L_0019608c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00196090:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196094:;
    {
        cpu->r[14] = 0x0019609cu;
    }
L_00196098:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019609cu)) return;
    }
L_0019609c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000012u, 0, 0);
    }
L_001960a0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001960a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001960a8:;
    {
        cpu->r[14] = 0x001960b0u;
    }
L_001960ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001960b0u)) return;
    }
L_001960b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000013u, 0, 0);
    }
L_001960b4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001960b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001960bc:;
    {
        cpu->r[14] = 0x001960c4u;
    }
L_001960c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001960c4u)) return;
    }
L_001960c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000014u, 0, 0);
    }
L_001960c8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001960cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001960d0:;
    {
        cpu->r[14] = 0x001960d8u;
    }
L_001960d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001960d8u)) return;
    }
L_001960d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001960dc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001960e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001960e4:;
    {
        cpu->r[14] = 0x001960ecu;
    }
L_001960e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001960ecu)) return;
    }
L_001960ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001960f0:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_001960f4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001960f8:;
    {
        cpu->r[14] = 0x001960fcu; fn_00208278(cpu);
    }
L_001960fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00196100:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_00196104:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 1);
    }
L_00196108:;
    {
        wr32(cpu->r[0], cpu->r[6]);
    }
L_0019610c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[5]);
    }
L_00196110:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00196114:;
    {
        wr32(cpu->r[8] + cpu->r[10], cpu->r[0]);
    }
L_00196118:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00195ff8;
        }
    }
L_0019611c:;
    {
        cpu->r[2] = 0x0000e770u;
    }
L_00196120:;
    {
        cpu->r[3] = 0x0000e778u;
    }
L_00196124:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00196128:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019612c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_00196130:;
    {
        wr32(cpu->r[8] + cpu->r[3], cpu->r[2]);
    }
L_00196134:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00196138:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_0019613c:;
    {
        cpu->r[14] = 0x00196140u; fn_001933d4(cpu);
    }
L_00196140:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00196144:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00196148u)) return;
    }
}

/* _ZN4Game21OnMPGetLobbyForFriendEP10DataPacket @ 00196148 (arm) */
void fn_00196148(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00196148:;
    {
        cpu->r[3] = 0x0000e770u;
    }
L_0019614c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00196150:;
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
L_00196154:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x0001e400u, 0, 0);
    }
L_00196158:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0019615c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000370u, 0, 0);
    }
L_00196160:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00196164:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00196168:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_0019616c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00196170:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00196174:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001961f4;
        }
    }
L_00196178:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x8u);
    }
L_0019617c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_00196180:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00196184:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00196190;
        }
    }
L_00196188:;
    {
        cpu->r[14] = 0x0019618cu; fn_0018ba20(cpu);
    }
L_0019618c:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[7]);
    }
L_00196190:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_00196194:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00196198:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001961a4;
        }
    }
L_0019619c:;
    {
        cpu->r[14] = 0x001961a0u; fn_0018ba20(cpu);
    }
L_001961a0:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[7]);
    }
L_001961a4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_001961a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001961ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001961b8;
        }
    }
L_001961b0:;
    {
        cpu->r[14] = 0x001961b4u; fn_0018ba20(cpu);
    }
L_001961b4:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[7]);
    }
L_001961b8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001961bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001961c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001961cc;
        }
    }
L_001961c4:;
    {
        cpu->r[14] = 0x001961c8u; fn_0018ba20(cpu);
    }
L_001961c8:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[7]);
    }
L_001961cc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001961d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001961d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001961e0;
        }
    }
L_001961d8:;
    {
        cpu->r[14] = 0x001961dcu; fn_0018ba20(cpu);
    }
L_001961dc:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[7]);
    }
L_001961e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001961e4:;
    {
        cpu->r[14] = 0x001961e8u; fn_0018ba20(cpu);
    }
L_001961e8:;
    {
        cpu->r[6] = rd32(cpu->r[6]);
    }
L_001961ec:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_001961f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00196178;
        }
    }
L_001961f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001961f8:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001961fc:;
    {
        cpu->r[14] = 0x00196200u; fn_001953b0(cpu);
    }
L_00196200:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00196204:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00196208:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019620c:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[9]);
        cpu->r[1] = wb_tmp;
    }
L_00196210:;
    {
        cpu->r[14] = 0x00196218u;
    }
L_00196214:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00196218u)) return;
    }
L_00196218:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0019621c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_00196220:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00196378;
        }
    }
L_00196224:;
    {
        cpu->r[10] = 0x0000e774u;
    }
L_00196228:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000016u, 0, 0);
    }
L_0019622c:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_00196230:;
    {
        cpu->r[7] = cpu->r[9];
    }
L_00196234:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00196238:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0019623c:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_00196240:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00196244:;
    {
        wr16(cpu->r[13] + + 0x16u, cpu->r[3]);
    }
L_00196248:;
    {
        cpu->r[14] = 0x0019624cu; fn_0018ba6c(cpu);
    }
L_0019624c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00196250:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_00196254:;
    {
        cpu->r[9] = (uint32_t)((uint8_t)cpu->r[9]);
    }
L_00196258:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0019625c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00196260:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196264:;
    {
        wr8(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_00196268:;
    {
        wr8(cpu->r[5] + + 0x11u, cpu->r[7]);
    }
L_0019626c:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[7]);
    }
L_00196270:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00196274:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[7]);
    }
L_00196278:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[7]);
    }
L_0019627c:;
    {
        wr32(cpu->r[5], cpu->r[7]);
    }
L_00196280:;
    {
        cpu->r[14] = 0x00196288u;
    }
L_00196284:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00196288u)) return;
    }
L_00196288:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0019628c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00196290:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00196294:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196298:;
    {
        cpu->r[14] = 0x001962a0u;
    }
L_0019629c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001962a0u)) return;
    }
L_001962a0:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001962a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001962a8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001962ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001962b0:;
    {
        cpu->r[14] = 0x001962b8u;
    }
L_001962b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001962b8u)) return;
    }
L_001962b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_001962bc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001962c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001962c4:;
    {
        cpu->r[14] = 0x001962ccu;
    }
L_001962c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001962ccu)) return;
    }
L_001962cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000011u, 0, 0);
    }
L_001962d0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001962d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001962d8:;
    {
        cpu->r[14] = 0x001962e0u;
    }
L_001962dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001962e0u)) return;
    }
L_001962e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000012u, 0, 0);
    }
L_001962e4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001962e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001962ec:;
    {
        cpu->r[14] = 0x001962f4u;
    }
L_001962f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001962f4u)) return;
    }
L_001962f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000013u, 0, 0);
    }
L_001962f8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001962fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196300:;
    {
        cpu->r[14] = 0x00196308u;
    }
L_00196304:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00196308u)) return;
    }
L_00196308:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000014u, 0, 0);
    }
L_0019630c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00196310:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196314:;
    {
        cpu->r[14] = 0x0019631cu;
    }
L_00196318:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019631cu)) return;
    }
L_0019631c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_00196320:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00196324:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196328:;
    {
        cpu->r[14] = 0x00196330u;
    }
L_0019632c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00196330u)) return;
    }
L_00196330:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00196334:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_00196338:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0019633c:;
    {
        cpu->r[14] = 0x00196340u; fn_00208278(cpu);
    }
L_00196340:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00196344:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_00196348:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 1);
    }
L_0019634c:;
    {
        wr32(cpu->r[0], cpu->r[6]);
    }
L_00196350:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[5]);
    }
L_00196354:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00196358:;
    {
        wr32(cpu->r[8] + cpu->r[10], cpu->r[0]);
    }
L_0019635c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0019623c;
        }
    }
L_00196360:;
    {
        cpu->r[2] = 0x0000e770u;
    }
L_00196364:;
    {
        cpu->r[3] = 0x0000e778u;
    }
L_00196368:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0019636c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00196370:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_00196374:;
    {
        wr32(cpu->r[8] + cpu->r[3], cpu->r[2]);
    }
L_00196378:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019637c:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_00196380:;
    {
        cpu->r[14] = 0x00196384u; fn_001933d4(cpu);
    }
L_00196384:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00196388:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019638cu)) return;
    }
}

/* _ZN4Game19OnMPGetLobbyForNameEP10DataPacket @ 0019638c (arm) */
void fn_0019638c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019638c:;
    {
        cpu->r[3] = 0x0000e770u;
    }
L_00196390:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00196394:;
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
L_00196398:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x0001e400u, 0, 0);
    }
L_0019639c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001963a0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000370u, 0, 0);
    }
L_001963a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001963a8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001963ac:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_001963b0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001963b4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001963b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00196438;
        }
    }
L_001963bc:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x8u);
    }
L_001963c0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_001963c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001963c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001963d4;
        }
    }
L_001963cc:;
    {
        cpu->r[14] = 0x001963d0u; fn_0018ba20(cpu);
    }
L_001963d0:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[7]);
    }
L_001963d4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001963d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001963dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001963e8;
        }
    }
L_001963e0:;
    {
        cpu->r[14] = 0x001963e4u; fn_0018ba20(cpu);
    }
L_001963e4:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[7]);
    }
L_001963e8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_001963ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001963f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001963fc;
        }
    }
L_001963f4:;
    {
        cpu->r[14] = 0x001963f8u; fn_0018ba20(cpu);
    }
L_001963f8:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[7]);
    }
L_001963fc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_00196400:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00196404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00196410;
        }
    }
L_00196408:;
    {
        cpu->r[14] = 0x0019640cu; fn_0018ba20(cpu);
    }
L_0019640c:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[7]);
    }
L_00196410:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00196414:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00196418:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00196424;
        }
    }
L_0019641c:;
    {
        cpu->r[14] = 0x00196420u; fn_0018ba20(cpu);
    }
L_00196420:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[7]);
    }
L_00196424:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00196428:;
    {
        cpu->r[14] = 0x0019642cu; fn_0018ba20(cpu);
    }
L_0019642c:;
    {
        cpu->r[6] = rd32(cpu->r[6]);
    }
L_00196430:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_00196434:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001963bc;
        }
    }
L_00196438:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019643c:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_00196440:;
    {
        cpu->r[14] = 0x00196444u; fn_001953b0(cpu);
    }
L_00196444:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00196448:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019644c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196450:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[9]);
        cpu->r[1] = wb_tmp;
    }
L_00196454:;
    {
        cpu->r[14] = 0x0019645cu;
    }
L_00196458:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019645cu)) return;
    }
L_0019645c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00196460:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_00196464:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001965bc;
        }
    }
L_00196468:;
    {
        cpu->r[10] = 0x0000e774u;
    }
L_0019646c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000016u, 0, 0);
    }
L_00196470:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_00196474:;
    {
        cpu->r[7] = cpu->r[9];
    }
L_00196478:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0019647c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00196480:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_00196484:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00196488:;
    {
        wr16(cpu->r[13] + + 0x16u, cpu->r[3]);
    }
L_0019648c:;
    {
        cpu->r[14] = 0x00196490u; fn_0018ba6c(cpu);
    }
L_00196490:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00196494:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_00196498:;
    {
        cpu->r[9] = (uint32_t)((uint8_t)cpu->r[9]);
    }
L_0019649c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001964a0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001964a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001964a8:;
    {
        wr8(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_001964ac:;
    {
        wr8(cpu->r[5] + + 0x11u, cpu->r[7]);
    }
L_001964b0:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[7]);
    }
L_001964b4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001964b8:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[7]);
    }
L_001964bc:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[7]);
    }
L_001964c0:;
    {
        wr32(cpu->r[5], cpu->r[7]);
    }
L_001964c4:;
    {
        cpu->r[14] = 0x001964ccu;
    }
L_001964c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001964ccu)) return;
    }
L_001964cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001964d0:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001964d4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001964d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001964dc:;
    {
        cpu->r[14] = 0x001964e4u;
    }
L_001964e0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001964e4u)) return;
    }
L_001964e4:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001964e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001964ec:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001964f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001964f4:;
    {
        cpu->r[14] = 0x001964fcu;
    }
L_001964f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001964fcu)) return;
    }
L_001964fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_00196500:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00196504:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196508:;
    {
        cpu->r[14] = 0x00196510u;
    }
L_0019650c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00196510u)) return;
    }
L_00196510:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000011u, 0, 0);
    }
L_00196514:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00196518:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019651c:;
    {
        cpu->r[14] = 0x00196524u;
    }
L_00196520:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00196524u)) return;
    }
L_00196524:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000012u, 0, 0);
    }
L_00196528:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019652c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196530:;
    {
        cpu->r[14] = 0x00196538u;
    }
L_00196534:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00196538u)) return;
    }
L_00196538:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000013u, 0, 0);
    }
L_0019653c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00196540:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196544:;
    {
        cpu->r[14] = 0x0019654cu;
    }
L_00196548:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019654cu)) return;
    }
L_0019654c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000014u, 0, 0);
    }
L_00196550:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00196554:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196558:;
    {
        cpu->r[14] = 0x00196560u;
    }
L_0019655c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00196560u)) return;
    }
L_00196560:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_00196564:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00196568:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019656c:;
    {
        cpu->r[14] = 0x00196574u;
    }
L_00196570:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00196574u)) return;
    }
L_00196574:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00196578:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_0019657c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00196580:;
    {
        cpu->r[14] = 0x00196584u; fn_00208278(cpu);
    }
L_00196584:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00196588:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_0019658c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 1);
    }
L_00196590:;
    {
        wr32(cpu->r[0], cpu->r[6]);
    }
L_00196594:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[5]);
    }
L_00196598:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_0019659c:;
    {
        wr32(cpu->r[8] + cpu->r[10], cpu->r[0]);
    }
L_001965a0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00196480;
        }
    }
L_001965a4:;
    {
        cpu->r[2] = 0x0000e770u;
    }
L_001965a8:;
    {
        cpu->r[3] = 0x0000e778u;
    }
L_001965ac:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001965b0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001965b4:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_001965b8:;
    {
        wr32(cpu->r[8] + cpu->r[3], cpu->r[2]);
    }
L_001965bc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001965c0:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001965c4:;
    {
        cpu->r[14] = 0x001965c8u; fn_001933d4(cpu);
    }
L_001965c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001965cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001965d0u)) return;
    }
}

/* _ZN4Game24OnMPKickOutPlayerSuccessEv @ 001965d0 (arm) */
void fn_001965d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001965d0:;
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
L_001965d4:;
    {
        cpu->r[10] = rd32(0x001965dcu + + 0x204u);
    }
L_001965d8:;
    {
        cpu->r[9] = rd32(0x001965e0u + + 0x204u);
    }
L_001965dc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000003cu, 1, 0);
    }
L_001965e0:;
    {
        cpu->r[10] = add_flags(cpu, 0x001965e8u, cpu->r[10], 0, 0);
    }
L_001965e4:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_001965e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001965ec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001965f0:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_001965f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x0001e400u, 0, 0);
    }
L_001965f8:;
    {
        cpu->r[11] = 0x0000e78cu;
    }
L_001965fc:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00196600:;
    {
        cpu->r[8] = cpu->r[13];
    }
L_00196604:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00196608:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0019660c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00196610:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000380u, 0, 0);
    }
L_00196614:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_00196618:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_0019661c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_00196620:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_00196624:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_00196628:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_0019662c:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_00196630:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_00196634:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_00196638:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_0019663c:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_00196640:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_00196644:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_00196648:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        wr32(cpu->r[2], cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_0019664c:;
    {
        wr16(cpu->r[2], cpu->r[3]);
    }
L_00196650:;
    {
        goto L_00196678;
    }
L_00196654:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_00196658:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x8u);
    }
L_0019665c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00196660:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00196664:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00196668:;
    {
        cpu->r[14] = 0x0019666cu; fn_001d06e8(cpu);
    }
L_0019666c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00196670:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00196720;
        }
    }
L_00196674:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_00196678:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_0019667c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00196654;
        }
    }
L_00196680:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00196684:;
    {
        cpu->r[14] = 0x00196688u; fn_001d0434(cpu);
    }
L_00196688:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019668c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001966ec;
        }
    }
L_00196690:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_00196694:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00196698:;
    {
        cpu->r[4] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0019669c:;
    {
        goto L_001966bc;
    }
L_001966a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001966a4:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001966a8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001966ac:;
    {
        cpu->r[14] = 0x001966b0u; fn_001d06e8(cpu);
    }
L_001966b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001966b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001967cc;
        }
    }
L_001966b8:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_001966bc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001966c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001966a0;
        }
    }
L_001966c4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001966c8:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_001966cc:;
    {
        cpu->r[14] = 0x001966d0u; fn_001933d4(cpu);
    }
L_001966d0:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_001966d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_001966d8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001966dc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001966e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001967dc;
        }
    }
L_001966e4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_001966e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001966ecu)) return;
    }
L_001966ec:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_001966f0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001966f4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001966f8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_001966fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001966c4;
        }
    }
L_00196700:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00196704:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00196708:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0019670c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00196704;
        }
    }
L_00196710:;
    {
        cpu->r[3] = 0x0000e78cu;
    }
L_00196714:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00196718:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[2]);
    }
L_0019671c:;
    {
        goto L_001966c4;
    }
L_00196720:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_00196724:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00196728:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019672c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00196730:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00196734:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00196760;
        }
    }
L_00196738:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0019673c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00196740:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_00196744:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019673c;
        }
    }
L_00196748:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_0019674c:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00196750:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_00196754:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00196758:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0019675c:;
    {
        cpu->r[14] = 0x00196760u; fn_001d06dc(cpu);
    }
L_00196760:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00196764:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00196768:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00196778;
        }
    }
L_0019676c:;
    {
        cpu->r[14] = 0x00196770u; fn_0018ba20(cpu);
    }
L_00196770:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00196774:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_00196778:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0019677c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00196780:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00196790;
        }
    }
L_00196784:;
    {
        cpu->r[14] = 0x00196788u; fn_0018ba20(cpu);
    }
L_00196788:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019678c:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_00196790:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_00196794:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00196798:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001967a8;
        }
    }
L_0019679c:;
    {
        cpu->r[14] = 0x001967a0u; fn_0018ba20(cpu);
    }
L_001967a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001967a4:;
    {
        wr32(cpu->r[6] + + 0xcu, cpu->r[3]);
    }
L_001967a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001967ac:;
    {
        cpu->r[14] = 0x001967b0u; fn_0018ba20(cpu);
    }
L_001967b0:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_001967b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001967b8:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_001967bc:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_001967c0:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001967c4:;
    {
        cpu->r[14] = 0x001967c8u; fn_002082a8(cpu);
    }
L_001967c8:;
    {
        goto L_00196680;
    }
L_001967cc:;
    {
        cpu->r[3] = 0x0000e78cu;
    }
L_001967d0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001967d4:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[4]);
    }
L_001967d8:;
    {
        goto L_001966c4;
    }
L_001967dc:;
    {
        cpu->r[14] = 0x001967e0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001967e0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[11] & shifter(cpu->r[0], 3, (cpu->r[14] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
L_001967e4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN14GS_OnlineLogin8isKindOfEi @ 001967e8 (arm) */
void fn_001967e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001967e8:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000001eu, 1, 1);
    }
L_001967ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001967f0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001967f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_54 @ 001967f8 (arm) */
void fn_001967f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001967f8:;
    {
        cpu->r[3] = rd32(0x00196800u + + 0x40u);
    }
L_001967fc:;
    {
        cpu->r[1] = rd32(0x00196804u + + 0x40u);
    }
L_00196800:;
    {
        cpu->r[3] = add_flags(cpu, 0x00196808u, cpu->r[3], 0, 0);
    }
L_00196804:;
    {
        cpu->r[0] = rd32(0x0019680cu + + 0x3cu);
    }
L_00196808:;
    {
        cpu->r[2] = rd32(0x00196810u + + 0x3cu);
    }
L_0019680c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00196810:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_00196814:;
    {
        cpu->r[2] = add_flags(cpu, 0x0019681cu, cpu->r[2], 0, 0);
    }
L_00196818:;
    {
        cpu->r[3] = rd32(0x00196820u + + 0x30u);
    }
L_0019681c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00196820:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00196824:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019682cu, cpu->r[3], 0, 0);
    }
L_00196828:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 3, 31u, &shc), 0, 0);
    }
L_0019682c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000000au, 1, 0);
    }
L_00196830:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_00196834:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_00196838:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[1]);
    }
L_0019683c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GS_OnlineLogin13KeyboardPressEi @ 00196854 (arm) */
void fn_00196854(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00196854:;
    {
        cpu->r[3] = rd32(0x0019685cu + + 0xdd8u);
    }
L_00196858:;
    {
        cpu->r[2] = rd32(0x00196860u + + 0xdd8u);
    }
L_0019685c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00196864u, cpu->r[3], 0, 0);
    }
L_00196860:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00196864:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00196868:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019686c:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_00196870:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00196874:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00196aa8;
        }
    }
L_00196878:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000007u, 1, 0);
    }
L_0019687c:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000007du, 1, 1);
    }
L_00196880:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[1]) {
        case 0: goto L_00198754;
        case 1: goto L_0019872c;
        case 2: goto L_00198704;
        case 3: goto L_001986dc;
        case 4: goto L_001986b4;
        case 5: goto L_0019868c;
        case 6: goto L_00198664;
        case 7: goto L_0019863c;
        case 8: goto L_00198614;
        case 9: goto L_001985ec;
        case 10: goto L_00196aa4;
        case 11: goto L_00196aa4;
        case 12: goto L_00196aa4;
        case 13: goto L_00196aa4;
        case 14: goto L_00196aa4;
        case 15: goto L_00196aa4;
        case 16: goto L_00196aa4;
        case 17: goto L_00196aa4;
        case 18: goto L_00196aa4;
        case 19: goto L_00196aa4;
        case 20: goto L_00196aa4;
        case 21: goto L_00196aa4;
        case 22: goto L_001985c4;
        case 23: goto L_0019859c;
        case 24: goto L_00198574;
        case 25: goto L_0019854c;
        case 26: goto L_00198524;
        case 27: goto L_001984fc;
        case 28: goto L_001984d4;
        case 29: goto L_001984ac;
        case 30: goto L_00198484;
        case 31: goto L_0019845c;
        case 32: goto L_00198434;
        case 33: goto L_0019840c;
        case 34: goto L_001983e4;
        case 35: goto L_001983bc;
        case 36: goto L_00198394;
        case 37: goto L_0019836c;
        case 38: goto L_00198344;
        case 39: goto L_0019831c;
        case 40: goto L_001982f4;
        case 41: goto L_001982cc;
        case 42: goto L_001982a4;
        case 43: goto L_0019827c;
        case 44: goto L_00198254;
        case 45: goto L_0019822c;
        case 46: goto L_00198204;
        case 47: goto L_001981dc;
        case 48: goto L_001981b4;
        case 49: goto L_0019818c;
        case 50: goto L_00196aa4;
        case 51: goto L_00196aa4;
        case 52: goto L_00196aa4;
        case 53: goto L_00196aa4;
        case 54: goto L_00196aa4;
        case 55: goto L_00198164;
        case 56: goto L_00196aa4;
        case 57: goto L_00196aa4;
        case 58: goto L_00196aa4;
        case 59: goto L_00196aa4;
        case 60: goto L_00198140;
        case 61: goto L_00198118;
        case 62: goto L_001980f0;
        case 63: goto L_00196aa4;
        case 64: goto L_00196aa4;
        case 65: goto L_00196aa4;
        case 66: goto L_00196aa4;
        case 67: goto L_001980c8;
        case 68: goto L_001980a0;
        case 69: goto L_00198078;
        case 70: goto L_00198050;
        case 71: goto L_00196aa4;
        case 72: goto L_00196aa4;
        case 73: goto L_00196aa4;
        case 74: goto L_00196aa4;
        case 75: goto L_00196aa4;
        case 76: goto L_00196aa4;
        case 77: goto L_00196aa4;
        case 78: goto L_00196aa4;
        case 79: goto L_00196aa4;
        case 80: goto L_00196aa4;
        case 81: goto L_00196aa4;
        case 82: goto L_00196aa4;
        case 83: goto L_00196aa4;
        case 84: goto L_00196aa4;
        case 85: goto L_00196aa4;
        case 86: goto L_00196aa4;
        case 87: goto L_00196aa4;
        case 88: goto L_00196aa4;
        case 89: goto L_00196aa4;
        case 90: goto L_00196aa4;
        case 91: goto L_00196aa4;
        case 92: goto L_00196aa4;
        case 93: goto L_00198028;
        case 94: goto L_00198000;
        case 95: goto L_00197fd8;
        case 96: goto L_00197fb0;
        case 97: goto L_00197f88;
        case 98: goto L_00197f60;
        case 99: goto L_00197f38;
        case 100: goto L_00197f10;
        case 101: goto L_00197ee8;
        case 102: goto L_00197ec0;
        case 103: goto L_00197e98;
        case 104: goto L_00197e70;
        case 105: goto L_00197e48;
        case 106: goto L_00197e20;
        case 107: goto L_00197df8;
        case 108: goto L_00197dd0;
        case 109: goto L_00197da8;
        case 110: goto L_00197d80;
        case 111: goto L_00197d58;
        case 112: goto L_00197d30;
        case 113: goto L_00197d08;
        case 114: goto L_00197ce0;
        case 115: goto L_00197cb8;
        case 116: goto L_00197c90;
        case 117: goto L_00197c68;
        case 118: goto L_00197c40;
        case 119: goto L_00197c18;
        case 120: goto L_00197bf0;
        case 121: goto L_00197bc8;
        case 122: goto L_00197ba0;
        case 123: goto L_00197b78;
        case 124: goto L_00197b50;
        case 125: goto L_00197b28;
        default: guest_unimplemented(cpu, 0x00196880u); return; }
        }
    }
L_00196884:;
    {
        goto L_00196aa4;
    }
L_00196a80:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196a84:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196a88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196a8c:;
    {
        cpu->r[14] = 0x00196a90u; imp_strlen(cpu); /* strlen */
    }
L_00196a90:;
    {
        cpu->r[1] = rd32(0x00196a98u + + 0xba4u);
    }
L_00196a94:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196a98:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196aa0u, cpu->r[1], 0, 0);
    }
L_00196a9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196aa0:;
    {
        cpu->r[14] = 0x00196aa4u; imp_memcpy(cpu); /* memcpy */
    }
L_00196aa4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196aa8u)) return;
    }
L_00196aa8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000007u, 1, 0);
    }
L_00196aac:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000007du, 1, 1);
    }
L_00196ab0:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[1]) {
        case 0: goto L_00197b00;
        case 1: goto L_00197ad8;
        case 2: goto L_00197ab0;
        case 3: goto L_00197a88;
        case 4: goto L_00197a60;
        case 5: goto L_00197a38;
        case 6: goto L_00197a10;
        case 7: goto L_001979e8;
        case 8: goto L_001979c0;
        case 9: goto L_00197998;
        case 10: goto L_00196aa4;
        case 11: goto L_00196aa4;
        case 12: goto L_00196aa4;
        case 13: goto L_00196aa4;
        case 14: goto L_00196aa4;
        case 15: goto L_00196aa4;
        case 16: goto L_00196aa4;
        case 17: goto L_00196aa4;
        case 18: goto L_00196aa4;
        case 19: goto L_00196aa4;
        case 20: goto L_00196aa4;
        case 21: goto L_00196aa4;
        case 22: goto L_00197970;
        case 23: goto L_00197948;
        case 24: goto L_00197920;
        case 25: goto L_001978f8;
        case 26: goto L_001978d0;
        case 27: goto L_001978a8;
        case 28: goto L_00197880;
        case 29: goto L_0019760c;
        case 30: goto L_001975e4;
        case 31: goto L_001975bc;
        case 32: goto L_00197594;
        case 33: goto L_0019756c;
        case 34: goto L_00197544;
        case 35: goto L_0019751c;
        case 36: goto L_001974f4;
        case 37: goto L_001974cc;
        case 38: goto L_001974a4;
        case 39: goto L_0019747c;
        case 40: goto L_00197454;
        case 41: goto L_0019742c;
        case 42: goto L_00197404;
        case 43: goto L_001973dc;
        case 44: goto L_001973b4;
        case 45: goto L_0019738c;
        case 46: goto L_00197364;
        case 47: goto L_0019733c;
        case 48: goto L_00197314;
        case 49: goto L_001972ec;
        case 50: goto L_00196aa4;
        case 51: goto L_00196aa4;
        case 52: goto L_00196aa4;
        case 53: goto L_00196aa4;
        case 54: goto L_00196aa4;
        case 55: goto L_001972c4;
        case 56: goto L_00196aa4;
        case 57: goto L_00196aa4;
        case 58: goto L_00196aa4;
        case 59: goto L_00196aa4;
        case 60: goto L_001972a0;
        case 61: goto L_00197278;
        case 62: goto L_00197250;
        case 63: goto L_00196aa4;
        case 64: goto L_00196aa4;
        case 65: goto L_00196aa4;
        case 66: goto L_00196aa4;
        case 67: goto L_00197228;
        case 68: goto L_00197200;
        case 69: goto L_001971d8;
        case 70: goto L_001971b0;
        case 71: goto L_00196aa4;
        case 72: goto L_00196aa4;
        case 73: goto L_00196aa4;
        case 74: goto L_00196aa4;
        case 75: goto L_00196aa4;
        case 76: goto L_00196aa4;
        case 77: goto L_00196aa4;
        case 78: goto L_00196aa4;
        case 79: goto L_00196aa4;
        case 80: goto L_00196aa4;
        case 81: goto L_00196aa4;
        case 82: goto L_00196aa4;
        case 83: goto L_00196aa4;
        case 84: goto L_00196aa4;
        case 85: goto L_00196aa4;
        case 86: goto L_00196aa4;
        case 87: goto L_00196aa4;
        case 88: goto L_00196aa4;
        case 89: goto L_00196aa4;
        case 90: goto L_00196aa4;
        case 91: goto L_00196aa4;
        case 92: goto L_00196aa4;
        case 93: goto L_00197188;
        case 94: goto L_00197160;
        case 95: goto L_00197138;
        case 96: goto L_00197110;
        case 97: goto L_001970e8;
        case 98: goto L_001970c0;
        case 99: goto L_00197098;
        case 100: goto L_00197070;
        case 101: goto L_00197048;
        case 102: goto L_00197020;
        case 103: goto L_00196ff8;
        case 104: goto L_00196fd0;
        case 105: goto L_00196fa8;
        case 106: goto L_00196f80;
        case 107: goto L_00196f58;
        case 108: goto L_00196f30;
        case 109: goto L_00196f08;
        case 110: goto L_00196ee0;
        case 111: goto L_00196eb8;
        case 112: goto L_00196e90;
        case 113: goto L_00196e68;
        case 114: goto L_00196e40;
        case 115: goto L_00196e18;
        case 116: goto L_00196df0;
        case 117: goto L_00196dc8;
        case 118: goto L_00196a80;
        case 119: goto L_00196da0;
        case 120: goto L_00196d78;
        case 121: goto L_00196d50;
        case 122: goto L_00196d28;
        case 123: goto L_00196d00;
        case 124: goto L_00196cd8;
        case 125: goto L_00196cb0;
        default: guest_unimplemented(cpu, 0x00196ab0u); return; }
        }
    }
L_00196ab4:;
    {
        goto L_00196aa4;
    }
L_00196cb0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196cb4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196cb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196cbc:;
    {
        cpu->r[14] = 0x00196cc0u; imp_strlen(cpu); /* strlen */
    }
L_00196cc0:;
    {
        cpu->r[1] = rd32(0x00196cc8u + + 0x978u);
    }
L_00196cc4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196cc8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196cd0u, cpu->r[1], 0, 0);
    }
L_00196ccc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196cd0:;
    {
        cpu->r[14] = 0x00196cd4u; imp_memcpy(cpu); /* memcpy */
    }
L_00196cd4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196cd8u)) return;
    }
L_00196cd8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196cdc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196ce0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196ce4:;
    {
        cpu->r[14] = 0x00196ce8u; imp_strlen(cpu); /* strlen */
    }
L_00196ce8:;
    {
        cpu->r[1] = rd32(0x00196cf0u + + 0x954u);
    }
L_00196cec:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196cf0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196cf8u, cpu->r[1], 0, 0);
    }
L_00196cf4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196cf8:;
    {
        cpu->r[14] = 0x00196cfcu; imp_memcpy(cpu); /* memcpy */
    }
L_00196cfc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196d00u)) return;
    }
L_00196d00:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196d04:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196d08:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196d0c:;
    {
        cpu->r[14] = 0x00196d10u; imp_strlen(cpu); /* strlen */
    }
L_00196d10:;
    {
        cpu->r[1] = rd32(0x00196d18u + + 0x930u);
    }
L_00196d14:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196d18:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196d20u, cpu->r[1], 0, 0);
    }
L_00196d1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196d20:;
    {
        cpu->r[14] = 0x00196d24u; imp_memcpy(cpu); /* memcpy */
    }
L_00196d24:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196d28u)) return;
    }
L_00196d28:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196d2c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196d30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196d34:;
    {
        cpu->r[14] = 0x00196d38u; imp_strlen(cpu); /* strlen */
    }
L_00196d38:;
    {
        cpu->r[1] = rd32(0x00196d40u + + 0x90cu);
    }
L_00196d3c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196d40:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196d48u, cpu->r[1], 0, 0);
    }
L_00196d44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196d48:;
    {
        cpu->r[14] = 0x00196d4cu; imp_memcpy(cpu); /* memcpy */
    }
L_00196d4c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196d50u)) return;
    }
L_00196d50:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196d54:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196d58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196d5c:;
    {
        cpu->r[14] = 0x00196d60u; imp_strlen(cpu); /* strlen */
    }
L_00196d60:;
    {
        cpu->r[1] = rd32(0x00196d68u + + 0x8e8u);
    }
L_00196d64:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196d68:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196d70u, cpu->r[1], 0, 0);
    }
L_00196d6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196d70:;
    {
        cpu->r[14] = 0x00196d74u; imp_memcpy(cpu); /* memcpy */
    }
L_00196d74:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196d78u)) return;
    }
L_00196d78:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196d7c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196d80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196d84:;
    {
        cpu->r[14] = 0x00196d88u; imp_strlen(cpu); /* strlen */
    }
L_00196d88:;
    {
        cpu->r[1] = rd32(0x00196d90u + + 0x8c4u);
    }
L_00196d8c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196d90:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196d98u, cpu->r[1], 0, 0);
    }
L_00196d94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196d98:;
    {
        cpu->r[14] = 0x00196d9cu; imp_memcpy(cpu); /* memcpy */
    }
L_00196d9c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196da0u)) return;
    }
L_00196da0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196da4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196da8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196dac:;
    {
        cpu->r[14] = 0x00196db0u; imp_strlen(cpu); /* strlen */
    }
L_00196db0:;
    {
        cpu->r[1] = rd32(0x00196db8u + + 0x8a0u);
    }
L_00196db4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196db8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196dc0u, cpu->r[1], 0, 0);
    }
L_00196dbc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196dc0:;
    {
        cpu->r[14] = 0x00196dc4u; imp_memcpy(cpu); /* memcpy */
    }
L_00196dc4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196dc8u)) return;
    }
L_00196dc8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196dcc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196dd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196dd4:;
    {
        cpu->r[14] = 0x00196dd8u; imp_strlen(cpu); /* strlen */
    }
L_00196dd8:;
    {
        cpu->r[1] = rd32(0x00196de0u + + 0x87cu);
    }
L_00196ddc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196de0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196de8u, cpu->r[1], 0, 0);
    }
L_00196de4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196de8:;
    {
        cpu->r[14] = 0x00196decu; imp_memcpy(cpu); /* memcpy */
    }
L_00196dec:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196df0u)) return;
    }
L_00196df0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196df4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196df8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196dfc:;
    {
        cpu->r[14] = 0x00196e00u; imp_strlen(cpu); /* strlen */
    }
L_00196e00:;
    {
        cpu->r[1] = rd32(0x00196e08u + + 0x858u);
    }
L_00196e04:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196e08:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196e10u, cpu->r[1], 0, 0);
    }
L_00196e0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196e10:;
    {
        cpu->r[14] = 0x00196e14u; imp_memcpy(cpu); /* memcpy */
    }
L_00196e14:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196e18u)) return;
    }
L_00196e18:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196e1c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196e20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196e24:;
    {
        cpu->r[14] = 0x00196e28u; imp_strlen(cpu); /* strlen */
    }
L_00196e28:;
    {
        cpu->r[1] = rd32(0x00196e30u + + 0x834u);
    }
L_00196e2c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196e30:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196e38u, cpu->r[1], 0, 0);
    }
L_00196e34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196e38:;
    {
        cpu->r[14] = 0x00196e3cu; imp_memcpy(cpu); /* memcpy */
    }
L_00196e3c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196e40u)) return;
    }
L_00196e40:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196e44:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196e48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196e4c:;
    {
        cpu->r[14] = 0x00196e50u; imp_strlen(cpu); /* strlen */
    }
L_00196e50:;
    {
        cpu->r[1] = rd32(0x00196e58u + + 0x810u);
    }
L_00196e54:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196e58:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196e60u, cpu->r[1], 0, 0);
    }
L_00196e5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196e60:;
    {
        cpu->r[14] = 0x00196e64u; imp_memcpy(cpu); /* memcpy */
    }
L_00196e64:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196e68u)) return;
    }
L_00196e68:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196e6c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196e70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196e74:;
    {
        cpu->r[14] = 0x00196e78u; imp_strlen(cpu); /* strlen */
    }
L_00196e78:;
    {
        cpu->r[1] = rd32(0x00196e80u + + 0x7ecu);
    }
L_00196e7c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196e80:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196e88u, cpu->r[1], 0, 0);
    }
L_00196e84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196e88:;
    {
        cpu->r[14] = 0x00196e8cu; imp_memcpy(cpu); /* memcpy */
    }
L_00196e8c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196e90u)) return;
    }
L_00196e90:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196e94:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196e98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196e9c:;
    {
        cpu->r[14] = 0x00196ea0u; imp_strlen(cpu); /* strlen */
    }
L_00196ea0:;
    {
        cpu->r[1] = rd32(0x00196ea8u + + 0x7c8u);
    }
L_00196ea4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196ea8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196eb0u, cpu->r[1], 0, 0);
    }
L_00196eac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196eb0:;
    {
        cpu->r[14] = 0x00196eb4u; imp_memcpy(cpu); /* memcpy */
    }
L_00196eb4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196eb8u)) return;
    }
L_00196eb8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196ebc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196ec0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196ec4:;
    {
        cpu->r[14] = 0x00196ec8u; imp_strlen(cpu); /* strlen */
    }
L_00196ec8:;
    {
        cpu->r[1] = rd32(0x00196ed0u + + 0x7a4u);
    }
L_00196ecc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196ed0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196ed8u, cpu->r[1], 0, 0);
    }
L_00196ed4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196ed8:;
    {
        cpu->r[14] = 0x00196edcu; imp_memcpy(cpu); /* memcpy */
    }
L_00196edc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196ee0u)) return;
    }
L_00196ee0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196ee4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196ee8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196eec:;
    {
        cpu->r[14] = 0x00196ef0u; imp_strlen(cpu); /* strlen */
    }
L_00196ef0:;
    {
        cpu->r[1] = rd32(0x00196ef8u + + 0x780u);
    }
L_00196ef4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196ef8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196f00u, cpu->r[1], 0, 0);
    }
L_00196efc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196f00:;
    {
        cpu->r[14] = 0x00196f04u; imp_memcpy(cpu); /* memcpy */
    }
L_00196f04:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196f08u)) return;
    }
L_00196f08:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196f0c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196f10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196f14:;
    {
        cpu->r[14] = 0x00196f18u; imp_strlen(cpu); /* strlen */
    }
L_00196f18:;
    {
        cpu->r[1] = rd32(0x00196f20u + + 0x75cu);
    }
L_00196f1c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196f20:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196f28u, cpu->r[1], 0, 0);
    }
L_00196f24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196f28:;
    {
        cpu->r[14] = 0x00196f2cu; imp_memcpy(cpu); /* memcpy */
    }
L_00196f2c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196f30u)) return;
    }
L_00196f30:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196f34:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196f38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196f3c:;
    {
        cpu->r[14] = 0x00196f40u; imp_strlen(cpu); /* strlen */
    }
L_00196f40:;
    {
        cpu->r[1] = rd32(0x00196f48u + + 0x738u);
    }
L_00196f44:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196f48:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196f50u, cpu->r[1], 0, 0);
    }
L_00196f4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196f50:;
    {
        cpu->r[14] = 0x00196f54u; imp_memcpy(cpu); /* memcpy */
    }
L_00196f54:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196f58u)) return;
    }
L_00196f58:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196f5c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196f60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196f64:;
    {
        cpu->r[14] = 0x00196f68u; imp_strlen(cpu); /* strlen */
    }
L_00196f68:;
    {
        cpu->r[1] = rd32(0x00196f70u + + 0x714u);
    }
L_00196f6c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196f70:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196f78u, cpu->r[1], 0, 0);
    }
L_00196f74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196f78:;
    {
        cpu->r[14] = 0x00196f7cu; imp_memcpy(cpu); /* memcpy */
    }
L_00196f7c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196f80u)) return;
    }
L_00196f80:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196f84:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196f88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196f8c:;
    {
        cpu->r[14] = 0x00196f90u; imp_strlen(cpu); /* strlen */
    }
L_00196f90:;
    {
        cpu->r[1] = rd32(0x00196f98u + + 0x6f0u);
    }
L_00196f94:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196f98:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196fa0u, cpu->r[1], 0, 0);
    }
L_00196f9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196fa0:;
    {
        cpu->r[14] = 0x00196fa4u; imp_memcpy(cpu); /* memcpy */
    }
L_00196fa4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196fa8u)) return;
    }
L_00196fa8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196fac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196fb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196fb4:;
    {
        cpu->r[14] = 0x00196fb8u; imp_strlen(cpu); /* strlen */
    }
L_00196fb8:;
    {
        cpu->r[1] = rd32(0x00196fc0u + + 0x6ccu);
    }
L_00196fbc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196fc0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196fc8u, cpu->r[1], 0, 0);
    }
L_00196fc4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196fc8:;
    {
        cpu->r[14] = 0x00196fccu; imp_memcpy(cpu); /* memcpy */
    }
L_00196fcc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196fd0u)) return;
    }
L_00196fd0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196fd4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00196fd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00196fdc:;
    {
        cpu->r[14] = 0x00196fe0u; imp_strlen(cpu); /* strlen */
    }
L_00196fe0:;
    {
        cpu->r[1] = rd32(0x00196fe8u + + 0x6a8u);
    }
L_00196fe4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00196fe8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00196ff0u, cpu->r[1], 0, 0);
    }
L_00196fec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00196ff0:;
    {
        cpu->r[14] = 0x00196ff4u; imp_memcpy(cpu); /* memcpy */
    }
L_00196ff4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00196ff8u)) return;
    }
L_00196ff8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00196ffc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197000:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197004:;
    {
        cpu->r[14] = 0x00197008u; imp_strlen(cpu); /* strlen */
    }
L_00197008:;
    {
        cpu->r[1] = rd32(0x00197010u + + 0x684u);
    }
L_0019700c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197010:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197018u, cpu->r[1], 0, 0);
    }
L_00197014:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197018:;
    {
        cpu->r[14] = 0x0019701cu; imp_memcpy(cpu); /* memcpy */
    }
L_0019701c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197020u)) return;
    }
L_00197020:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197024:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197028:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019702c:;
    {
        cpu->r[14] = 0x00197030u; imp_strlen(cpu); /* strlen */
    }
L_00197030:;
    {
        cpu->r[1] = rd32(0x00197038u + + 0x660u);
    }
L_00197034:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197038:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197040u, cpu->r[1], 0, 0);
    }
L_0019703c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197040:;
    {
        cpu->r[14] = 0x00197044u; imp_memcpy(cpu); /* memcpy */
    }
L_00197044:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197048u)) return;
    }
L_00197048:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_0019704c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197050:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197054:;
    {
        cpu->r[14] = 0x00197058u; imp_strlen(cpu); /* strlen */
    }
L_00197058:;
    {
        cpu->r[1] = rd32(0x00197060u + + 0x63cu);
    }
L_0019705c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197060:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197068u, cpu->r[1], 0, 0);
    }
L_00197064:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197068:;
    {
        cpu->r[14] = 0x0019706cu; imp_memcpy(cpu); /* memcpy */
    }
L_0019706c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197070u)) return;
    }
L_00197070:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197074:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197078:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019707c:;
    {
        cpu->r[14] = 0x00197080u; imp_strlen(cpu); /* strlen */
    }
L_00197080:;
    {
        cpu->r[1] = rd32(0x00197088u + + 0x618u);
    }
L_00197084:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197088:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197090u, cpu->r[1], 0, 0);
    }
L_0019708c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197090:;
    {
        cpu->r[14] = 0x00197094u; imp_memcpy(cpu); /* memcpy */
    }
L_00197094:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197098u)) return;
    }
L_00197098:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_0019709c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001970a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001970a4:;
    {
        cpu->r[14] = 0x001970a8u; imp_strlen(cpu); /* strlen */
    }
L_001970a8:;
    {
        cpu->r[1] = rd32(0x001970b0u + + 0x5f4u);
    }
L_001970ac:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001970b0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001970b8u, cpu->r[1], 0, 0);
    }
L_001970b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001970b8:;
    {
        cpu->r[14] = 0x001970bcu; imp_memcpy(cpu); /* memcpy */
    }
L_001970bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001970c0u)) return;
    }
L_001970c0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_001970c4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001970c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001970cc:;
    {
        cpu->r[14] = 0x001970d0u; imp_strlen(cpu); /* strlen */
    }
L_001970d0:;
    {
        cpu->r[1] = rd32(0x001970d8u + + 0x5d0u);
    }
L_001970d4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001970d8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001970e0u, cpu->r[1], 0, 0);
    }
L_001970dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001970e0:;
    {
        cpu->r[14] = 0x001970e4u; imp_memcpy(cpu); /* memcpy */
    }
L_001970e4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001970e8u)) return;
    }
L_001970e8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_001970ec:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001970f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001970f4:;
    {
        cpu->r[14] = 0x001970f8u; imp_strlen(cpu); /* strlen */
    }
L_001970f8:;
    {
        cpu->r[1] = rd32(0x00197100u + + 0x5acu);
    }
L_001970fc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197100:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197108u, cpu->r[1], 0, 0);
    }
L_00197104:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197108:;
    {
        cpu->r[14] = 0x0019710cu; imp_memcpy(cpu); /* memcpy */
    }
L_0019710c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197110u)) return;
    }
L_00197110:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197114:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197118:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019711c:;
    {
        cpu->r[14] = 0x00197120u; imp_strlen(cpu); /* strlen */
    }
L_00197120:;
    {
        cpu->r[1] = rd32(0x00197128u + + 0x588u);
    }
L_00197124:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197128:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197130u, cpu->r[1], 0, 0);
    }
L_0019712c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197130:;
    {
        cpu->r[14] = 0x00197134u; imp_memcpy(cpu); /* memcpy */
    }
L_00197134:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197138u)) return;
    }
L_00197138:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_0019713c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197140:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197144:;
    {
        cpu->r[14] = 0x00197148u; imp_strlen(cpu); /* strlen */
    }
L_00197148:;
    {
        cpu->r[1] = rd32(0x00197150u + + 0x564u);
    }
L_0019714c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197150:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197158u, cpu->r[1], 0, 0);
    }
L_00197154:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197158:;
    {
        cpu->r[14] = 0x0019715cu; imp_memcpy(cpu); /* memcpy */
    }
L_0019715c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197160u)) return;
    }
L_00197160:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197164:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197168:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019716c:;
    {
        cpu->r[14] = 0x00197170u; imp_strlen(cpu); /* strlen */
    }
L_00197170:;
    {
        cpu->r[1] = rd32(0x00197178u + + 0x540u);
    }
L_00197174:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197178:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197180u, cpu->r[1], 0, 0);
    }
L_0019717c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197180:;
    {
        cpu->r[14] = 0x00197184u; imp_memcpy(cpu); /* memcpy */
    }
L_00197184:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197188u)) return;
    }
L_00197188:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_0019718c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197190:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197194:;
    {
        cpu->r[14] = 0x00197198u; imp_strlen(cpu); /* strlen */
    }
L_00197198:;
    {
        cpu->r[1] = rd32(0x001971a0u + + 0x51cu);
    }
L_0019719c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001971a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001971a8u, cpu->r[1], 0, 0);
    }
L_001971a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001971a8:;
    {
        cpu->r[14] = 0x001971acu; imp_memcpy(cpu); /* memcpy */
    }
L_001971ac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001971b0u)) return;
    }
L_001971b0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_001971b4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001971b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001971bc:;
    {
        cpu->r[14] = 0x001971c0u; imp_strlen(cpu); /* strlen */
    }
L_001971c0:;
    {
        cpu->r[1] = rd32(0x001971c8u + + 0x4f8u);
    }
L_001971c4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001971c8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001971d0u, cpu->r[1], 0, 0);
    }
L_001971cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001971d0:;
    {
        cpu->r[14] = 0x001971d4u; imp_memcpy(cpu); /* memcpy */
    }
L_001971d4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001971d8u)) return;
    }
L_001971d8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_001971dc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001971e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001971e4:;
    {
        cpu->r[14] = 0x001971e8u; imp_strlen(cpu); /* strlen */
    }
L_001971e8:;
    {
        cpu->r[1] = rd32(0x001971f0u + + 0x4d4u);
    }
L_001971ec:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001971f0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001971f8u, cpu->r[1], 0, 0);
    }
L_001971f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001971f8:;
    {
        cpu->r[14] = 0x001971fcu; imp_memcpy(cpu); /* memcpy */
    }
L_001971fc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197200u)) return;
    }
L_00197200:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197204:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197208:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019720c:;
    {
        cpu->r[14] = 0x00197210u; imp_strlen(cpu); /* strlen */
    }
L_00197210:;
    {
        cpu->r[1] = rd32(0x00197218u + + 0x4b0u);
    }
L_00197214:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197218:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197220u, cpu->r[1], 0, 0);
    }
L_0019721c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197220:;
    {
        cpu->r[14] = 0x00197224u; imp_memcpy(cpu); /* memcpy */
    }
L_00197224:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197228u)) return;
    }
L_00197228:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_0019722c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197230:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197234:;
    {
        cpu->r[14] = 0x00197238u; imp_strlen(cpu); /* strlen */
    }
L_00197238:;
    {
        cpu->r[1] = rd32(0x00197240u + + 0x48cu);
    }
L_0019723c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197240:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197248u, cpu->r[1], 0, 0);
    }
L_00197244:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197248:;
    {
        cpu->r[14] = 0x0019724cu; imp_memcpy(cpu); /* memcpy */
    }
L_0019724c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197250u)) return;
    }
L_00197250:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197254:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197258:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019725c:;
    {
        cpu->r[14] = 0x00197260u; imp_strlen(cpu); /* strlen */
    }
L_00197260:;
    {
        cpu->r[1] = rd32(0x00197268u + + 0x468u);
    }
L_00197264:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197268:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197270u, cpu->r[1], 0, 0);
    }
L_0019726c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197270:;
    {
        cpu->r[14] = 0x00197274u; imp_memcpy(cpu); /* memcpy */
    }
L_00197274:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197278u)) return;
    }
L_00197278:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_0019727c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197280:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197284:;
    {
        cpu->r[14] = 0x00197288u; imp_strlen(cpu); /* strlen */
    }
L_00197288:;
    {
        cpu->r[1] = rd32(0x00197290u + + 0x444u);
    }
L_0019728c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197290:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197298u, cpu->r[1], 0, 0);
    }
L_00197294:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197298:;
    {
        cpu->r[14] = 0x0019729cu; imp_memcpy(cpu); /* memcpy */
    }
L_0019729c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001972a0u)) return;
    }
L_001972a0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x954u);
    }
L_001972a4:;
    {
        cpu->r[14] = 0x001972a8u; fn_001a7bcc(cpu);
    }
L_001972a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001972ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001972b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x954u);
        }
    }
L_001972b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
        }
    }
L_001972b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000017u, 0, 0);
        }
    }
L_001972bc:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[3] + + 0x4u, cpu->r[2]);
        }
    }
L_001972c0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001972c4u)) return;
    }
L_001972c4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_001972c8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001972cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001972d0:;
    {
        cpu->r[14] = 0x001972d4u; imp_strlen(cpu); /* strlen */
    }
L_001972d4:;
    {
        cpu->r[1] = rd32(0x001972dcu + + 0x3fcu);
    }
L_001972d8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001972dc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001972e4u, cpu->r[1], 0, 0);
    }
L_001972e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001972e4:;
    {
        cpu->r[14] = 0x001972e8u; imp_memcpy(cpu); /* memcpy */
    }
L_001972e8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001972ecu)) return;
    }
L_001972ec:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_001972f0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001972f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001972f8:;
    {
        cpu->r[14] = 0x001972fcu; imp_strlen(cpu); /* strlen */
    }
L_001972fc:;
    {
        cpu->r[1] = rd32(0x00197304u + + 0x3d8u);
    }
L_00197300:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197304:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019730cu, cpu->r[1], 0, 0);
    }
L_00197308:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0019730c:;
    {
        cpu->r[14] = 0x00197310u; imp_memcpy(cpu); /* memcpy */
    }
L_00197310:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197314u)) return;
    }
L_00197314:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197318:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_0019731c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197320:;
    {
        cpu->r[14] = 0x00197324u; imp_strlen(cpu); /* strlen */
    }
L_00197324:;
    {
        cpu->r[1] = rd32(0x0019732cu + + 0x3b4u);
    }
L_00197328:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019732c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197334u, cpu->r[1], 0, 0);
    }
L_00197330:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197334:;
    {
        cpu->r[14] = 0x00197338u; imp_memcpy(cpu); /* memcpy */
    }
L_00197338:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019733cu)) return;
    }
L_0019733c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197340:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197344:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197348:;
    {
        cpu->r[14] = 0x0019734cu; imp_strlen(cpu); /* strlen */
    }
L_0019734c:;
    {
        cpu->r[1] = rd32(0x00197354u + + 0x390u);
    }
L_00197350:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197354:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019735cu, cpu->r[1], 0, 0);
    }
L_00197358:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0019735c:;
    {
        cpu->r[14] = 0x00197360u; imp_memcpy(cpu); /* memcpy */
    }
L_00197360:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197364u)) return;
    }
L_00197364:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197368:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_0019736c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197370:;
    {
        cpu->r[14] = 0x00197374u; imp_strlen(cpu); /* strlen */
    }
L_00197374:;
    {
        cpu->r[1] = rd32(0x0019737cu + + 0x36cu);
    }
L_00197378:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019737c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197384u, cpu->r[1], 0, 0);
    }
L_00197380:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197384:;
    {
        cpu->r[14] = 0x00197388u; imp_memcpy(cpu); /* memcpy */
    }
L_00197388:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019738cu)) return;
    }
L_0019738c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197390:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197394:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197398:;
    {
        cpu->r[14] = 0x0019739cu; imp_strlen(cpu); /* strlen */
    }
L_0019739c:;
    {
        cpu->r[1] = rd32(0x001973a4u + + 0x348u);
    }
L_001973a0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001973a4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001973acu, cpu->r[1], 0, 0);
    }
L_001973a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001973ac:;
    {
        cpu->r[14] = 0x001973b0u; imp_memcpy(cpu); /* memcpy */
    }
L_001973b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001973b4u)) return;
    }
L_001973b4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_001973b8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001973bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001973c0:;
    {
        cpu->r[14] = 0x001973c4u; imp_strlen(cpu); /* strlen */
    }
L_001973c4:;
    {
        cpu->r[1] = rd32(0x001973ccu + + 0x324u);
    }
L_001973c8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001973cc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001973d4u, cpu->r[1], 0, 0);
    }
L_001973d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001973d4:;
    {
        cpu->r[14] = 0x001973d8u; imp_memcpy(cpu); /* memcpy */
    }
L_001973d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001973dcu)) return;
    }
L_001973dc:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_001973e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001973e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001973e8:;
    {
        cpu->r[14] = 0x001973ecu; imp_strlen(cpu); /* strlen */
    }
L_001973ec:;
    {
        cpu->r[1] = rd32(0x001973f4u + + 0x300u);
    }
L_001973f0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001973f4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001973fcu, cpu->r[1], 0, 0);
    }
L_001973f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001973fc:;
    {
        cpu->r[14] = 0x00197400u; imp_memcpy(cpu); /* memcpy */
    }
L_00197400:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197404u)) return;
    }
L_00197404:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197408:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_0019740c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197410:;
    {
        cpu->r[14] = 0x00197414u; imp_strlen(cpu); /* strlen */
    }
L_00197414:;
    {
        cpu->r[1] = rd32(0x0019741cu + + 0x2dcu);
    }
L_00197418:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019741c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197424u, cpu->r[1], 0, 0);
    }
L_00197420:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197424:;
    {
        cpu->r[14] = 0x00197428u; imp_memcpy(cpu); /* memcpy */
    }
L_00197428:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019742cu)) return;
    }
L_0019742c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197430:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197434:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197438:;
    {
        cpu->r[14] = 0x0019743cu; imp_strlen(cpu); /* strlen */
    }
L_0019743c:;
    {
        cpu->r[1] = rd32(0x00197444u + + 0x2b8u);
    }
L_00197440:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197444:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019744cu, cpu->r[1], 0, 0);
    }
L_00197448:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0019744c:;
    {
        cpu->r[14] = 0x00197450u; imp_memcpy(cpu); /* memcpy */
    }
L_00197450:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197454u)) return;
    }
L_00197454:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197458:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_0019745c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197460:;
    {
        cpu->r[14] = 0x00197464u; imp_strlen(cpu); /* strlen */
    }
L_00197464:;
    {
        cpu->r[1] = rd32(0x0019746cu + + 0x294u);
    }
L_00197468:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019746c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197474u, cpu->r[1], 0, 0);
    }
L_00197470:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197474:;
    {
        cpu->r[14] = 0x00197478u; imp_memcpy(cpu); /* memcpy */
    }
L_00197478:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019747cu)) return;
    }
L_0019747c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197480:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197484:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197488:;
    {
        cpu->r[14] = 0x0019748cu; imp_strlen(cpu); /* strlen */
    }
L_0019748c:;
    {
        cpu->r[1] = rd32(0x00197494u + + 0x270u);
    }
L_00197490:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197494:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019749cu, cpu->r[1], 0, 0);
    }
L_00197498:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0019749c:;
    {
        cpu->r[14] = 0x001974a0u; imp_memcpy(cpu); /* memcpy */
    }
L_001974a0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001974a4u)) return;
    }
L_001974a4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_001974a8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001974ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001974b0:;
    {
        cpu->r[14] = 0x001974b4u; imp_strlen(cpu); /* strlen */
    }
L_001974b4:;
    {
        cpu->r[1] = rd32(0x001974bcu + + 0x24cu);
    }
L_001974b8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001974bc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001974c4u, cpu->r[1], 0, 0);
    }
L_001974c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001974c4:;
    {
        cpu->r[14] = 0x001974c8u; imp_memcpy(cpu); /* memcpy */
    }
L_001974c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001974ccu)) return;
    }
L_001974cc:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_001974d0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001974d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001974d8:;
    {
        cpu->r[14] = 0x001974dcu; imp_strlen(cpu); /* strlen */
    }
L_001974dc:;
    {
        cpu->r[1] = rd32(0x001974e4u + + 0x228u);
    }
L_001974e0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001974e4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001974ecu, cpu->r[1], 0, 0);
    }
L_001974e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001974ec:;
    {
        cpu->r[14] = 0x001974f0u; imp_memcpy(cpu); /* memcpy */
    }
L_001974f0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001974f4u)) return;
    }
L_001974f4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_001974f8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001974fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197500:;
    {
        cpu->r[14] = 0x00197504u; imp_strlen(cpu); /* strlen */
    }
L_00197504:;
    {
        cpu->r[1] = rd32(0x0019750cu + + 0x204u);
    }
L_00197508:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019750c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197514u, cpu->r[1], 0, 0);
    }
L_00197510:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197514:;
    {
        cpu->r[14] = 0x00197518u; imp_memcpy(cpu); /* memcpy */
    }
L_00197518:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019751cu)) return;
    }
L_0019751c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197520:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197524:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197528:;
    {
        cpu->r[14] = 0x0019752cu; imp_strlen(cpu); /* strlen */
    }
L_0019752c:;
    {
        cpu->r[1] = rd32(0x00197534u + + 0x1e0u);
    }
L_00197530:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197534:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019753cu, cpu->r[1], 0, 0);
    }
L_00197538:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0019753c:;
    {
        cpu->r[14] = 0x00197540u; imp_memcpy(cpu); /* memcpy */
    }
L_00197540:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197544u)) return;
    }
L_00197544:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197548:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_0019754c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197550:;
    {
        cpu->r[14] = 0x00197554u; imp_strlen(cpu); /* strlen */
    }
L_00197554:;
    {
        cpu->r[1] = rd32(0x0019755cu + + 0x1bcu);
    }
L_00197558:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019755c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197564u, cpu->r[1], 0, 0);
    }
L_00197560:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197564:;
    {
        cpu->r[14] = 0x00197568u; imp_memcpy(cpu); /* memcpy */
    }
L_00197568:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019756cu)) return;
    }
L_0019756c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197570:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197574:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197578:;
    {
        cpu->r[14] = 0x0019757cu; imp_strlen(cpu); /* strlen */
    }
L_0019757c:;
    {
        cpu->r[1] = rd32(0x00197584u + + 0x198u);
    }
L_00197580:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197584:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019758cu, cpu->r[1], 0, 0);
    }
L_00197588:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0019758c:;
    {
        cpu->r[14] = 0x00197590u; imp_memcpy(cpu); /* memcpy */
    }
L_00197590:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197594u)) return;
    }
L_00197594:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197598:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_0019759c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001975a0:;
    {
        cpu->r[14] = 0x001975a4u; imp_strlen(cpu); /* strlen */
    }
L_001975a4:;
    {
        cpu->r[1] = rd32(0x001975acu + + 0x174u);
    }
L_001975a8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001975ac:;
    {
        cpu->r[1] = add_flags(cpu, 0x001975b4u, cpu->r[1], 0, 0);
    }
L_001975b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001975b4:;
    {
        cpu->r[14] = 0x001975b8u; imp_memcpy(cpu); /* memcpy */
    }
L_001975b8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001975bcu)) return;
    }
L_001975bc:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_001975c0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001975c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001975c8:;
    {
        cpu->r[14] = 0x001975ccu; imp_strlen(cpu); /* strlen */
    }
L_001975cc:;
    {
        cpu->r[1] = rd32(0x001975d4u + + 0x150u);
    }
L_001975d0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001975d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001975dcu, cpu->r[1], 0, 0);
    }
L_001975d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001975dc:;
    {
        cpu->r[14] = 0x001975e0u; imp_memcpy(cpu); /* memcpy */
    }
L_001975e0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001975e4u)) return;
    }
L_001975e4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_001975e8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001975ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001975f0:;
    {
        cpu->r[14] = 0x001975f4u; imp_strlen(cpu); /* strlen */
    }
L_001975f4:;
    {
        cpu->r[1] = rd32(0x001975fcu + + 0x12cu);
    }
L_001975f8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001975fc:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197604u, cpu->r[1], 0, 0);
    }
L_00197600:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197604:;
    {
        cpu->r[14] = 0x00197608u; imp_memcpy(cpu); /* memcpy */
    }
L_00197608:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019760cu)) return;
    }
L_0019760c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197610:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197614:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197618:;
    {
        cpu->r[14] = 0x0019761cu; imp_strlen(cpu); /* strlen */
    }
L_0019761c:;
    {
        cpu->r[1] = rd32(0x00197624u + + 0x108u);
    }
L_00197620:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197624:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019762cu, cpu->r[1], 0, 0);
    }
L_00197628:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0019762c:;
    {
        cpu->r[14] = 0x00197630u; imp_memcpy(cpu); /* memcpy */
    }
L_00197630:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197634u)) return;
    }
L_00197880:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197884:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197888:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019788c:;
    {
        cpu->r[14] = 0x00197890u; imp_strlen(cpu); /* strlen */
    }
L_00197890:;
    {
        cpu->r[1] = rd32(0x00197898u + - 0x168u);
    }
L_00197894:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197898:;
    {
        cpu->r[1] = add_flags(cpu, 0x001978a0u, cpu->r[1], 0, 0);
    }
L_0019789c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001978a0:;
    {
        cpu->r[14] = 0x001978a4u; imp_memcpy(cpu); /* memcpy */
    }
L_001978a4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001978a8u)) return;
    }
L_001978a8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_001978ac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001978b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001978b4:;
    {
        cpu->r[14] = 0x001978b8u; imp_strlen(cpu); /* strlen */
    }
L_001978b8:;
    {
        cpu->r[1] = rd32(0x001978c0u + - 0x18cu);
    }
L_001978bc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001978c0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001978c8u, cpu->r[1], 0, 0);
    }
L_001978c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001978c8:;
    {
        cpu->r[14] = 0x001978ccu; imp_memcpy(cpu); /* memcpy */
    }
L_001978cc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001978d0u)) return;
    }
L_001978d0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_001978d4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001978d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001978dc:;
    {
        cpu->r[14] = 0x001978e0u; imp_strlen(cpu); /* strlen */
    }
L_001978e0:;
    {
        cpu->r[1] = rd32(0x001978e8u + - 0x1b0u);
    }
L_001978e4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001978e8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001978f0u, cpu->r[1], 0, 0);
    }
L_001978ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001978f0:;
    {
        cpu->r[14] = 0x001978f4u; imp_memcpy(cpu); /* memcpy */
    }
L_001978f4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001978f8u)) return;
    }
L_001978f8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_001978fc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197900:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197904:;
    {
        cpu->r[14] = 0x00197908u; imp_strlen(cpu); /* strlen */
    }
L_00197908:;
    {
        cpu->r[1] = rd32(0x00197910u + - 0x1d4u);
    }
L_0019790c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197910:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197918u, cpu->r[1], 0, 0);
    }
L_00197914:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197918:;
    {
        cpu->r[14] = 0x0019791cu; imp_memcpy(cpu); /* memcpy */
    }
L_0019791c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197920u)) return;
    }
L_00197920:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197924:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197928:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019792c:;
    {
        cpu->r[14] = 0x00197930u; imp_strlen(cpu); /* strlen */
    }
L_00197930:;
    {
        cpu->r[1] = rd32(0x00197938u + - 0x1f8u);
    }
L_00197934:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197938:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197940u, cpu->r[1], 0, 0);
    }
L_0019793c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197940:;
    {
        cpu->r[14] = 0x00197944u; imp_memcpy(cpu); /* memcpy */
    }
L_00197944:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197948u)) return;
    }
L_00197948:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_0019794c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197950:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197954:;
    {
        cpu->r[14] = 0x00197958u; imp_strlen(cpu); /* strlen */
    }
L_00197958:;
    {
        cpu->r[1] = rd32(0x00197960u + - 0x21cu);
    }
L_0019795c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197960:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197968u, cpu->r[1], 0, 0);
    }
L_00197964:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197968:;
    {
        cpu->r[14] = 0x0019796cu; imp_memcpy(cpu); /* memcpy */
    }
L_0019796c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197970u)) return;
    }
L_00197970:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197974:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197978:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019797c:;
    {
        cpu->r[14] = 0x00197980u; imp_strlen(cpu); /* strlen */
    }
L_00197980:;
    {
        cpu->r[1] = rd32(0x00197988u + - 0x240u);
    }
L_00197984:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197988:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197990u, cpu->r[1], 0, 0);
    }
L_0019798c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197990:;
    {
        cpu->r[14] = 0x00197994u; imp_memcpy(cpu); /* memcpy */
    }
L_00197994:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197998u)) return;
    }
L_00197998:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_0019799c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001979a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001979a4:;
    {
        cpu->r[14] = 0x001979a8u; imp_strlen(cpu); /* strlen */
    }
L_001979a8:;
    {
        cpu->r[1] = rd32(0x001979b0u + - 0x264u);
    }
L_001979ac:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001979b0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001979b8u, cpu->r[1], 0, 0);
    }
L_001979b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001979b8:;
    {
        cpu->r[14] = 0x001979bcu; imp_memcpy(cpu); /* memcpy */
    }
L_001979bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001979c0u)) return;
    }
L_001979c0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_001979c4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001979c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001979cc:;
    {
        cpu->r[14] = 0x001979d0u; imp_strlen(cpu); /* strlen */
    }
L_001979d0:;
    {
        cpu->r[1] = rd32(0x001979d8u + - 0x288u);
    }
L_001979d4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001979d8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001979e0u, cpu->r[1], 0, 0);
    }
L_001979dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001979e0:;
    {
        cpu->r[14] = 0x001979e4u; imp_memcpy(cpu); /* memcpy */
    }
L_001979e4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001979e8u)) return;
    }
L_001979e8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_001979ec:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001979f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001979f4:;
    {
        cpu->r[14] = 0x001979f8u; imp_strlen(cpu); /* strlen */
    }
L_001979f8:;
    {
        cpu->r[1] = rd32(0x00197a00u + - 0x2acu);
    }
L_001979fc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197a00:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197a08u, cpu->r[1], 0, 0);
    }
L_00197a04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197a08:;
    {
        cpu->r[14] = 0x00197a0cu; imp_memcpy(cpu); /* memcpy */
    }
L_00197a0c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197a10u)) return;
    }
L_00197a10:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197a14:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197a18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197a1c:;
    {
        cpu->r[14] = 0x00197a20u; imp_strlen(cpu); /* strlen */
    }
L_00197a20:;
    {
        cpu->r[1] = rd32(0x00197a28u + - 0x2d0u);
    }
L_00197a24:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197a28:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197a30u, cpu->r[1], 0, 0);
    }
L_00197a2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197a30:;
    {
        cpu->r[14] = 0x00197a34u; imp_memcpy(cpu); /* memcpy */
    }
L_00197a34:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197a38u)) return;
    }
L_00197a38:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197a3c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197a40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197a44:;
    {
        cpu->r[14] = 0x00197a48u; imp_strlen(cpu); /* strlen */
    }
L_00197a48:;
    {
        cpu->r[1] = rd32(0x00197a50u + - 0x2f4u);
    }
L_00197a4c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197a50:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197a58u, cpu->r[1], 0, 0);
    }
L_00197a54:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197a58:;
    {
        cpu->r[14] = 0x00197a5cu; imp_memcpy(cpu); /* memcpy */
    }
L_00197a5c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197a60u)) return;
    }
L_00197a60:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197a64:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197a68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197a6c:;
    {
        cpu->r[14] = 0x00197a70u; imp_strlen(cpu); /* strlen */
    }
L_00197a70:;
    {
        cpu->r[1] = rd32(0x00197a78u + - 0x318u);
    }
L_00197a74:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197a78:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197a80u, cpu->r[1], 0, 0);
    }
L_00197a7c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197a80:;
    {
        cpu->r[14] = 0x00197a84u; imp_memcpy(cpu); /* memcpy */
    }
L_00197a84:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197a88u)) return;
    }
L_00197a88:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197a8c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197a90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197a94:;
    {
        cpu->r[14] = 0x00197a98u; imp_strlen(cpu); /* strlen */
    }
L_00197a98:;
    {
        cpu->r[1] = rd32(0x00197aa0u + - 0x33cu);
    }
L_00197a9c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197aa0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197aa8u, cpu->r[1], 0, 0);
    }
L_00197aa4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197aa8:;
    {
        cpu->r[14] = 0x00197aacu; imp_memcpy(cpu); /* memcpy */
    }
L_00197aac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197ab0u)) return;
    }
L_00197ab0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197ab4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197ab8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197abc:;
    {
        cpu->r[14] = 0x00197ac0u; imp_strlen(cpu); /* strlen */
    }
L_00197ac0:;
    {
        cpu->r[1] = rd32(0x00197ac8u + - 0x360u);
    }
L_00197ac4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197ac8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197ad0u, cpu->r[1], 0, 0);
    }
L_00197acc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197ad0:;
    {
        cpu->r[14] = 0x00197ad4u; imp_memcpy(cpu); /* memcpy */
    }
L_00197ad4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197ad8u)) return;
    }
L_00197ad8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197adc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197ae0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197ae4:;
    {
        cpu->r[14] = 0x00197ae8u; imp_strlen(cpu); /* strlen */
    }
L_00197ae8:;
    {
        cpu->r[1] = rd32(0x00197af0u + - 0x384u);
    }
L_00197aec:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197af0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197af8u, cpu->r[1], 0, 0);
    }
L_00197af4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197af8:;
    {
        cpu->r[14] = 0x00197afcu; imp_memcpy(cpu); /* memcpy */
    }
L_00197afc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197b00u)) return;
    }
L_00197b00:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x954u);
    }
L_00197b04:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197b08:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197b0c:;
    {
        cpu->r[14] = 0x00197b10u; imp_strlen(cpu); /* strlen */
    }
L_00197b10:;
    {
        cpu->r[1] = rd32(0x00197b18u + - 0x3a8u);
    }
L_00197b14:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197b18:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197b20u, cpu->r[1], 0, 0);
    }
L_00197b1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197b20:;
    {
        cpu->r[14] = 0x00197b24u; imp_memcpy(cpu); /* memcpy */
    }
L_00197b24:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197b28u)) return;
    }
L_00197b28:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197b2c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197b30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197b34:;
    {
        cpu->r[14] = 0x00197b38u; imp_strlen(cpu); /* strlen */
    }
L_00197b38:;
    {
        cpu->r[1] = rd32(0x00197b40u + - 0x3ccu);
    }
L_00197b3c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197b40:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197b48u, cpu->r[1], 0, 0);
    }
L_00197b44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197b48:;
    {
        cpu->r[14] = 0x00197b4cu; imp_memcpy(cpu); /* memcpy */
    }
L_00197b4c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197b50u)) return;
    }
L_00197b50:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197b54:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197b58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197b5c:;
    {
        cpu->r[14] = 0x00197b60u; imp_strlen(cpu); /* strlen */
    }
L_00197b60:;
    {
        cpu->r[1] = rd32(0x00197b68u + - 0x3f0u);
    }
L_00197b64:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197b68:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197b70u, cpu->r[1], 0, 0);
    }
L_00197b6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197b70:;
    {
        cpu->r[14] = 0x00197b74u; imp_memcpy(cpu); /* memcpy */
    }
L_00197b74:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197b78u)) return;
    }
L_00197b78:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197b7c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197b80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197b84:;
    {
        cpu->r[14] = 0x00197b88u; imp_strlen(cpu); /* strlen */
    }
L_00197b88:;
    {
        cpu->r[1] = rd32(0x00197b90u + - 0x414u);
    }
L_00197b8c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197b90:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197b98u, cpu->r[1], 0, 0);
    }
L_00197b94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197b98:;
    {
        cpu->r[14] = 0x00197b9cu; imp_memcpy(cpu); /* memcpy */
    }
L_00197b9c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197ba0u)) return;
    }
L_00197ba0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197ba4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197ba8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197bac:;
    {
        cpu->r[14] = 0x00197bb0u; imp_strlen(cpu); /* strlen */
    }
L_00197bb0:;
    {
        cpu->r[1] = rd32(0x00197bb8u + - 0x438u);
    }
L_00197bb4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197bb8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197bc0u, cpu->r[1], 0, 0);
    }
L_00197bbc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197bc0:;
    {
        cpu->r[14] = 0x00197bc4u; imp_memcpy(cpu); /* memcpy */
    }
L_00197bc4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197bc8u)) return;
    }
L_00197bc8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197bcc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197bd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197bd4:;
    {
        cpu->r[14] = 0x00197bd8u; imp_strlen(cpu); /* strlen */
    }
L_00197bd8:;
    {
        cpu->r[1] = rd32(0x00197be0u + - 0x45cu);
    }
L_00197bdc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197be0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197be8u, cpu->r[1], 0, 0);
    }
L_00197be4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197be8:;
    {
        cpu->r[14] = 0x00197becu; imp_memcpy(cpu); /* memcpy */
    }
L_00197bec:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197bf0u)) return;
    }
L_00197bf0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197bf4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197bf8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197bfc:;
    {
        cpu->r[14] = 0x00197c00u; imp_strlen(cpu); /* strlen */
    }
L_00197c00:;
    {
        cpu->r[1] = rd32(0x00197c08u + - 0x480u);
    }
L_00197c04:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197c08:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197c10u, cpu->r[1], 0, 0);
    }
L_00197c0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197c10:;
    {
        cpu->r[14] = 0x00197c14u; imp_memcpy(cpu); /* memcpy */
    }
L_00197c14:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197c18u)) return;
    }
L_00197c18:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197c1c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197c20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197c24:;
    {
        cpu->r[14] = 0x00197c28u; imp_strlen(cpu); /* strlen */
    }
L_00197c28:;
    {
        cpu->r[1] = rd32(0x00197c30u + - 0x4a4u);
    }
L_00197c2c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197c30:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197c38u, cpu->r[1], 0, 0);
    }
L_00197c34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197c38:;
    {
        cpu->r[14] = 0x00197c3cu; imp_memcpy(cpu); /* memcpy */
    }
L_00197c3c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197c40u)) return;
    }
L_00197c40:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197c44:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197c48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197c4c:;
    {
        cpu->r[14] = 0x00197c50u; imp_strlen(cpu); /* strlen */
    }
L_00197c50:;
    {
        cpu->r[1] = rd32(0x00197c58u + - 0x4c8u);
    }
L_00197c54:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197c58:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197c60u, cpu->r[1], 0, 0);
    }
L_00197c5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197c60:;
    {
        cpu->r[14] = 0x00197c64u; imp_memcpy(cpu); /* memcpy */
    }
L_00197c64:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197c68u)) return;
    }
L_00197c68:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197c6c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197c70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197c74:;
    {
        cpu->r[14] = 0x00197c78u; imp_strlen(cpu); /* strlen */
    }
L_00197c78:;
    {
        cpu->r[1] = rd32(0x00197c80u + - 0x4ecu);
    }
L_00197c7c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197c80:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197c88u, cpu->r[1], 0, 0);
    }
L_00197c84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197c88:;
    {
        cpu->r[14] = 0x00197c8cu; imp_memcpy(cpu); /* memcpy */
    }
L_00197c8c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197c90u)) return;
    }
L_00197c90:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197c94:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197c98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197c9c:;
    {
        cpu->r[14] = 0x00197ca0u; imp_strlen(cpu); /* strlen */
    }
L_00197ca0:;
    {
        cpu->r[1] = rd32(0x00197ca8u + - 0x510u);
    }
L_00197ca4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197ca8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197cb0u, cpu->r[1], 0, 0);
    }
L_00197cac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197cb0:;
    {
        cpu->r[14] = 0x00197cb4u; imp_memcpy(cpu); /* memcpy */
    }
L_00197cb4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197cb8u)) return;
    }
L_00197cb8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197cbc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197cc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197cc4:;
    {
        cpu->r[14] = 0x00197cc8u; imp_strlen(cpu); /* strlen */
    }
L_00197cc8:;
    {
        cpu->r[1] = rd32(0x00197cd0u + - 0x534u);
    }
L_00197ccc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197cd0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197cd8u, cpu->r[1], 0, 0);
    }
L_00197cd4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197cd8:;
    {
        cpu->r[14] = 0x00197cdcu; imp_memcpy(cpu); /* memcpy */
    }
L_00197cdc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197ce0u)) return;
    }
L_00197ce0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197ce4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197ce8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197cec:;
    {
        cpu->r[14] = 0x00197cf0u; imp_strlen(cpu); /* strlen */
    }
L_00197cf0:;
    {
        cpu->r[1] = rd32(0x00197cf8u + - 0x558u);
    }
L_00197cf4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197cf8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197d00u, cpu->r[1], 0, 0);
    }
L_00197cfc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197d00:;
    {
        cpu->r[14] = 0x00197d04u; imp_memcpy(cpu); /* memcpy */
    }
L_00197d04:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197d08u)) return;
    }
L_00197d08:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197d0c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197d10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197d14:;
    {
        cpu->r[14] = 0x00197d18u; imp_strlen(cpu); /* strlen */
    }
L_00197d18:;
    {
        cpu->r[1] = rd32(0x00197d20u + - 0x57cu);
    }
L_00197d1c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197d20:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197d28u, cpu->r[1], 0, 0);
    }
L_00197d24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197d28:;
    {
        cpu->r[14] = 0x00197d2cu; imp_memcpy(cpu); /* memcpy */
    }
L_00197d2c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197d30u)) return;
    }
L_00197d30:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197d34:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197d38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197d3c:;
    {
        cpu->r[14] = 0x00197d40u; imp_strlen(cpu); /* strlen */
    }
L_00197d40:;
    {
        cpu->r[1] = rd32(0x00197d48u + - 0x5a0u);
    }
L_00197d44:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197d48:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197d50u, cpu->r[1], 0, 0);
    }
L_00197d4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197d50:;
    {
        cpu->r[14] = 0x00197d54u; imp_memcpy(cpu); /* memcpy */
    }
L_00197d54:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197d58u)) return;
    }
L_00197d58:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197d5c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197d60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197d64:;
    {
        cpu->r[14] = 0x00197d68u; imp_strlen(cpu); /* strlen */
    }
L_00197d68:;
    {
        cpu->r[1] = rd32(0x00197d70u + - 0x5c4u);
    }
L_00197d6c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197d70:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197d78u, cpu->r[1], 0, 0);
    }
L_00197d74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197d78:;
    {
        cpu->r[14] = 0x00197d7cu; imp_memcpy(cpu); /* memcpy */
    }
L_00197d7c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197d80u)) return;
    }
L_00197d80:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197d84:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197d88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197d8c:;
    {
        cpu->r[14] = 0x00197d90u; imp_strlen(cpu); /* strlen */
    }
L_00197d90:;
    {
        cpu->r[1] = rd32(0x00197d98u + - 0x5e8u);
    }
L_00197d94:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197d98:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197da0u, cpu->r[1], 0, 0);
    }
L_00197d9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197da0:;
    {
        cpu->r[14] = 0x00197da4u; imp_memcpy(cpu); /* memcpy */
    }
L_00197da4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197da8u)) return;
    }
L_00197da8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197dac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197db0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197db4:;
    {
        cpu->r[14] = 0x00197db8u; imp_strlen(cpu); /* strlen */
    }
L_00197db8:;
    {
        cpu->r[1] = rd32(0x00197dc0u + - 0x60cu);
    }
L_00197dbc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197dc0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197dc8u, cpu->r[1], 0, 0);
    }
L_00197dc4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197dc8:;
    {
        cpu->r[14] = 0x00197dccu; imp_memcpy(cpu); /* memcpy */
    }
L_00197dcc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197dd0u)) return;
    }
L_00197dd0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197dd4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197dd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197ddc:;
    {
        cpu->r[14] = 0x00197de0u; imp_strlen(cpu); /* strlen */
    }
L_00197de0:;
    {
        cpu->r[1] = rd32(0x00197de8u + - 0x630u);
    }
L_00197de4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197de8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197df0u, cpu->r[1], 0, 0);
    }
L_00197dec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197df0:;
    {
        cpu->r[14] = 0x00197df4u; imp_memcpy(cpu); /* memcpy */
    }
L_00197df4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197df8u)) return;
    }
L_00197df8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197dfc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197e00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197e04:;
    {
        cpu->r[14] = 0x00197e08u; imp_strlen(cpu); /* strlen */
    }
L_00197e08:;
    {
        cpu->r[1] = rd32(0x00197e10u + - 0x654u);
    }
L_00197e0c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197e10:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197e18u, cpu->r[1], 0, 0);
    }
L_00197e14:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197e18:;
    {
        cpu->r[14] = 0x00197e1cu; imp_memcpy(cpu); /* memcpy */
    }
L_00197e1c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197e20u)) return;
    }
L_00197e20:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197e24:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197e28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197e2c:;
    {
        cpu->r[14] = 0x00197e30u; imp_strlen(cpu); /* strlen */
    }
L_00197e30:;
    {
        cpu->r[1] = rd32(0x00197e38u + - 0x678u);
    }
L_00197e34:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197e38:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197e40u, cpu->r[1], 0, 0);
    }
L_00197e3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197e40:;
    {
        cpu->r[14] = 0x00197e44u; imp_memcpy(cpu); /* memcpy */
    }
L_00197e44:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197e48u)) return;
    }
L_00197e48:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197e4c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197e50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197e54:;
    {
        cpu->r[14] = 0x00197e58u; imp_strlen(cpu); /* strlen */
    }
L_00197e58:;
    {
        cpu->r[1] = rd32(0x00197e60u + - 0x69cu);
    }
L_00197e5c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197e60:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197e68u, cpu->r[1], 0, 0);
    }
L_00197e64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197e68:;
    {
        cpu->r[14] = 0x00197e6cu; imp_memcpy(cpu); /* memcpy */
    }
L_00197e6c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197e70u)) return;
    }
L_00197e70:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197e74:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197e78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197e7c:;
    {
        cpu->r[14] = 0x00197e80u; imp_strlen(cpu); /* strlen */
    }
L_00197e80:;
    {
        cpu->r[1] = rd32(0x00197e88u + - 0x6c0u);
    }
L_00197e84:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197e88:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197e90u, cpu->r[1], 0, 0);
    }
L_00197e8c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197e90:;
    {
        cpu->r[14] = 0x00197e94u; imp_memcpy(cpu); /* memcpy */
    }
L_00197e94:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197e98u)) return;
    }
L_00197e98:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197e9c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197ea0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197ea4:;
    {
        cpu->r[14] = 0x00197ea8u; imp_strlen(cpu); /* strlen */
    }
L_00197ea8:;
    {
        cpu->r[1] = rd32(0x00197eb0u + - 0x6e4u);
    }
L_00197eac:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197eb0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197eb8u, cpu->r[1], 0, 0);
    }
L_00197eb4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197eb8:;
    {
        cpu->r[14] = 0x00197ebcu; imp_memcpy(cpu); /* memcpy */
    }
L_00197ebc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197ec0u)) return;
    }
L_00197ec0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197ec4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197ec8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197ecc:;
    {
        cpu->r[14] = 0x00197ed0u; imp_strlen(cpu); /* strlen */
    }
L_00197ed0:;
    {
        cpu->r[1] = rd32(0x00197ed8u + - 0x708u);
    }
L_00197ed4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197ed8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197ee0u, cpu->r[1], 0, 0);
    }
L_00197edc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197ee0:;
    {
        cpu->r[14] = 0x00197ee4u; imp_memcpy(cpu); /* memcpy */
    }
L_00197ee4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197ee8u)) return;
    }
L_00197ee8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197eec:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197ef0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197ef4:;
    {
        cpu->r[14] = 0x00197ef8u; imp_strlen(cpu); /* strlen */
    }
L_00197ef8:;
    {
        cpu->r[1] = rd32(0x00197f00u + - 0x72cu);
    }
L_00197efc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197f00:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197f08u, cpu->r[1], 0, 0);
    }
L_00197f04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197f08:;
    {
        cpu->r[14] = 0x00197f0cu; imp_memcpy(cpu); /* memcpy */
    }
L_00197f0c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197f10u)) return;
    }
L_00197f10:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197f14:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197f18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197f1c:;
    {
        cpu->r[14] = 0x00197f20u; imp_strlen(cpu); /* strlen */
    }
L_00197f20:;
    {
        cpu->r[1] = rd32(0x00197f28u + - 0x750u);
    }
L_00197f24:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197f28:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197f30u, cpu->r[1], 0, 0);
    }
L_00197f2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197f30:;
    {
        cpu->r[14] = 0x00197f34u; imp_memcpy(cpu); /* memcpy */
    }
L_00197f34:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197f38u)) return;
    }
L_00197f38:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197f3c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197f40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197f44:;
    {
        cpu->r[14] = 0x00197f48u; imp_strlen(cpu); /* strlen */
    }
L_00197f48:;
    {
        cpu->r[1] = rd32(0x00197f50u + - 0x774u);
    }
L_00197f4c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197f50:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197f58u, cpu->r[1], 0, 0);
    }
L_00197f54:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197f58:;
    {
        cpu->r[14] = 0x00197f5cu; imp_memcpy(cpu); /* memcpy */
    }
L_00197f5c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197f60u)) return;
    }
L_00197f60:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197f64:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197f68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197f6c:;
    {
        cpu->r[14] = 0x00197f70u; imp_strlen(cpu); /* strlen */
    }
L_00197f70:;
    {
        cpu->r[1] = rd32(0x00197f78u + - 0x798u);
    }
L_00197f74:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197f78:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197f80u, cpu->r[1], 0, 0);
    }
L_00197f7c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197f80:;
    {
        cpu->r[14] = 0x00197f84u; imp_memcpy(cpu); /* memcpy */
    }
L_00197f84:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197f88u)) return;
    }
L_00197f88:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197f8c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197f90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197f94:;
    {
        cpu->r[14] = 0x00197f98u; imp_strlen(cpu); /* strlen */
    }
L_00197f98:;
    {
        cpu->r[1] = rd32(0x00197fa0u + - 0x7bcu);
    }
L_00197f9c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197fa0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197fa8u, cpu->r[1], 0, 0);
    }
L_00197fa4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197fa8:;
    {
        cpu->r[14] = 0x00197facu; imp_memcpy(cpu); /* memcpy */
    }
L_00197fac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197fb0u)) return;
    }
L_00197fb0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197fb4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197fb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197fbc:;
    {
        cpu->r[14] = 0x00197fc0u; imp_strlen(cpu); /* strlen */
    }
L_00197fc0:;
    {
        cpu->r[1] = rd32(0x00197fc8u + - 0x7e0u);
    }
L_00197fc4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197fc8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197fd0u, cpu->r[1], 0, 0);
    }
L_00197fcc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197fd0:;
    {
        cpu->r[14] = 0x00197fd4u; imp_memcpy(cpu); /* memcpy */
    }
L_00197fd4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00197fd8u)) return;
    }
L_00197fd8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00197fdc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00197fe0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00197fe4:;
    {
        cpu->r[14] = 0x00197fe8u; imp_strlen(cpu); /* strlen */
    }
L_00197fe8:;
    {
        cpu->r[1] = rd32(0x00197ff0u + - 0x804u);
    }
L_00197fec:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00197ff0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00197ff8u, cpu->r[1], 0, 0);
    }
L_00197ff4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00197ff8:;
    {
        cpu->r[14] = 0x00197ffcu; imp_memcpy(cpu); /* memcpy */
    }
L_00197ffc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198000u)) return;
    }
L_00198000:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198004:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00198008:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019800c:;
    {
        cpu->r[14] = 0x00198010u; imp_strlen(cpu); /* strlen */
    }
L_00198010:;
    {
        cpu->r[1] = rd32(0x00198018u + - 0x828u);
    }
L_00198014:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00198018:;
    {
        cpu->r[1] = add_flags(cpu, 0x00198020u, cpu->r[1], 0, 0);
    }
L_0019801c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00198020:;
    {
        cpu->r[14] = 0x00198024u; imp_memcpy(cpu); /* memcpy */
    }
L_00198024:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198028u)) return;
    }
L_00198028:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_0019802c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00198030:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198034:;
    {
        cpu->r[14] = 0x00198038u; imp_strlen(cpu); /* strlen */
    }
L_00198038:;
    {
        cpu->r[1] = rd32(0x00198040u + - 0x84cu);
    }
L_0019803c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00198040:;
    {
        cpu->r[1] = add_flags(cpu, 0x00198048u, cpu->r[1], 0, 0);
    }
L_00198044:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00198048:;
    {
        cpu->r[14] = 0x0019804cu; imp_memcpy(cpu); /* memcpy */
    }
L_0019804c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198050u)) return;
    }
L_00198050:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198054:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00198058:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019805c:;
    {
        cpu->r[14] = 0x00198060u; imp_strlen(cpu); /* strlen */
    }
L_00198060:;
    {
        cpu->r[1] = rd32(0x00198068u + - 0x870u);
    }
L_00198064:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00198068:;
    {
        cpu->r[1] = add_flags(cpu, 0x00198070u, cpu->r[1], 0, 0);
    }
L_0019806c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00198070:;
    {
        cpu->r[14] = 0x00198074u; imp_memcpy(cpu); /* memcpy */
    }
L_00198074:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198078u)) return;
    }
L_00198078:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_0019807c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00198080:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198084:;
    {
        cpu->r[14] = 0x00198088u; imp_strlen(cpu); /* strlen */
    }
L_00198088:;
    {
        cpu->r[1] = rd32(0x00198090u + - 0x894u);
    }
L_0019808c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00198090:;
    {
        cpu->r[1] = add_flags(cpu, 0x00198098u, cpu->r[1], 0, 0);
    }
L_00198094:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00198098:;
    {
        cpu->r[14] = 0x0019809cu; imp_memcpy(cpu); /* memcpy */
    }
L_0019809c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001980a0u)) return;
    }
L_001980a0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_001980a4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001980a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001980ac:;
    {
        cpu->r[14] = 0x001980b0u; imp_strlen(cpu); /* strlen */
    }
L_001980b0:;
    {
        cpu->r[1] = rd32(0x001980b8u + - 0x8b8u);
    }
L_001980b4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001980b8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001980c0u, cpu->r[1], 0, 0);
    }
L_001980bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001980c0:;
    {
        cpu->r[14] = 0x001980c4u; imp_memcpy(cpu); /* memcpy */
    }
L_001980c4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001980c8u)) return;
    }
L_001980c8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_001980cc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001980d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001980d4:;
    {
        cpu->r[14] = 0x001980d8u; imp_strlen(cpu); /* strlen */
    }
L_001980d8:;
    {
        cpu->r[1] = rd32(0x001980e0u + - 0x8dcu);
    }
L_001980dc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001980e0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001980e8u, cpu->r[1], 0, 0);
    }
L_001980e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001980e8:;
    {
        cpu->r[14] = 0x001980ecu; imp_memcpy(cpu); /* memcpy */
    }
L_001980ec:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001980f0u)) return;
    }
L_001980f0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_001980f4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001980f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001980fc:;
    {
        cpu->r[14] = 0x00198100u; imp_strlen(cpu); /* strlen */
    }
L_00198100:;
    {
        cpu->r[1] = rd32(0x00198108u + - 0x900u);
    }
L_00198104:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00198108:;
    {
        cpu->r[1] = add_flags(cpu, 0x00198110u, cpu->r[1], 0, 0);
    }
L_0019810c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00198110:;
    {
        cpu->r[14] = 0x00198114u; imp_memcpy(cpu); /* memcpy */
    }
L_00198114:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198118u)) return;
    }
L_00198118:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_0019811c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00198120:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198124:;
    {
        cpu->r[14] = 0x00198128u; imp_strlen(cpu); /* strlen */
    }
L_00198128:;
    {
        cpu->r[1] = rd32(0x00198130u + - 0x924u);
    }
L_0019812c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00198130:;
    {
        cpu->r[1] = add_flags(cpu, 0x00198138u, cpu->r[1], 0, 0);
    }
L_00198134:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00198138:;
    {
        cpu->r[14] = 0x0019813cu; imp_memcpy(cpu); /* memcpy */
    }
L_0019813c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198140u)) return;
    }
L_00198140:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198144:;
    {
        cpu->r[14] = 0x00198148u; fn_001a7bcc(cpu);
    }
L_00198148:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019814c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00198150:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x958u);
        }
    }
L_00198154:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
        }
    }
L_00198158:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000017u, 0, 0);
        }
    }
L_0019815c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[3] + + 0x4u, cpu->r[2]);
        }
    }
L_00198160:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198164u)) return;
    }
L_00198164:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198168:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_0019816c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198170:;
    {
        cpu->r[14] = 0x00198174u; imp_strlen(cpu); /* strlen */
    }
L_00198174:;
    {
        cpu->r[1] = rd32(0x0019817cu + - 0x96cu);
    }
L_00198178:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019817c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00198184u, cpu->r[1], 0, 0);
    }
L_00198180:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00198184:;
    {
        cpu->r[14] = 0x00198188u; imp_memcpy(cpu); /* memcpy */
    }
L_00198188:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019818cu)) return;
    }
L_0019818c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198190:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00198194:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198198:;
    {
        cpu->r[14] = 0x0019819cu; imp_strlen(cpu); /* strlen */
    }
L_0019819c:;
    {
        cpu->r[1] = rd32(0x001981a4u + - 0x990u);
    }
L_001981a0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001981a4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001981acu, cpu->r[1], 0, 0);
    }
L_001981a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001981ac:;
    {
        cpu->r[14] = 0x001981b0u; imp_memcpy(cpu); /* memcpy */
    }
L_001981b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001981b4u)) return;
    }
L_001981b4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_001981b8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001981bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001981c0:;
    {
        cpu->r[14] = 0x001981c4u; imp_strlen(cpu); /* strlen */
    }
L_001981c4:;
    {
        cpu->r[1] = rd32(0x001981ccu + - 0x9b4u);
    }
L_001981c8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001981cc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001981d4u, cpu->r[1], 0, 0);
    }
L_001981d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001981d4:;
    {
        cpu->r[14] = 0x001981d8u; imp_memcpy(cpu); /* memcpy */
    }
L_001981d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001981dcu)) return;
    }
L_001981dc:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_001981e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001981e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001981e8:;
    {
        cpu->r[14] = 0x001981ecu; imp_strlen(cpu); /* strlen */
    }
L_001981ec:;
    {
        cpu->r[1] = rd32(0x001981f4u + - 0x9d8u);
    }
L_001981f0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001981f4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001981fcu, cpu->r[1], 0, 0);
    }
L_001981f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001981fc:;
    {
        cpu->r[14] = 0x00198200u; imp_memcpy(cpu); /* memcpy */
    }
L_00198200:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198204u)) return;
    }
L_00198204:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198208:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_0019820c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198210:;
    {
        cpu->r[14] = 0x00198214u; imp_strlen(cpu); /* strlen */
    }
L_00198214:;
    {
        cpu->r[1] = rd32(0x0019821cu + - 0x9fcu);
    }
L_00198218:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019821c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00198224u, cpu->r[1], 0, 0);
    }
L_00198220:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00198224:;
    {
        cpu->r[14] = 0x00198228u; imp_memcpy(cpu); /* memcpy */
    }
L_00198228:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019822cu)) return;
    }
L_0019822c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198230:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00198234:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198238:;
    {
        cpu->r[14] = 0x0019823cu; imp_strlen(cpu); /* strlen */
    }
L_0019823c:;
    {
        cpu->r[1] = rd32(0x00198244u + - 0xa20u);
    }
L_00198240:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00198244:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019824cu, cpu->r[1], 0, 0);
    }
L_00198248:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0019824c:;
    {
        cpu->r[14] = 0x00198250u; imp_memcpy(cpu); /* memcpy */
    }
L_00198250:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198254u)) return;
    }
L_00198254:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198258:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_0019825c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198260:;
    {
        cpu->r[14] = 0x00198264u; imp_strlen(cpu); /* strlen */
    }
L_00198264:;
    {
        cpu->r[1] = rd32(0x0019826cu + - 0xa44u);
    }
L_00198268:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019826c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00198274u, cpu->r[1], 0, 0);
    }
L_00198270:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00198274:;
    {
        cpu->r[14] = 0x00198278u; imp_memcpy(cpu); /* memcpy */
    }
L_00198278:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019827cu)) return;
    }
L_0019827c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198280:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00198284:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198288:;
    {
        cpu->r[14] = 0x0019828cu; imp_strlen(cpu); /* strlen */
    }
L_0019828c:;
    {
        cpu->r[1] = rd32(0x00198294u + - 0xa68u);
    }
L_00198290:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00198294:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019829cu, cpu->r[1], 0, 0);
    }
L_00198298:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0019829c:;
    {
        cpu->r[14] = 0x001982a0u; imp_memcpy(cpu); /* memcpy */
    }
L_001982a0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001982a4u)) return;
    }
L_001982a4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_001982a8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001982ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001982b0:;
    {
        cpu->r[14] = 0x001982b4u; imp_strlen(cpu); /* strlen */
    }
L_001982b4:;
    {
        cpu->r[1] = rd32(0x001982bcu + - 0xa8cu);
    }
L_001982b8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001982bc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001982c4u, cpu->r[1], 0, 0);
    }
L_001982c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001982c4:;
    {
        cpu->r[14] = 0x001982c8u; imp_memcpy(cpu); /* memcpy */
    }
L_001982c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001982ccu)) return;
    }
L_001982cc:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_001982d0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001982d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001982d8:;
    {
        cpu->r[14] = 0x001982dcu; imp_strlen(cpu); /* strlen */
    }
L_001982dc:;
    {
        cpu->r[1] = rd32(0x001982e4u + - 0xab0u);
    }
L_001982e0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001982e4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001982ecu, cpu->r[1], 0, 0);
    }
L_001982e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001982ec:;
    {
        cpu->r[14] = 0x001982f0u; imp_memcpy(cpu); /* memcpy */
    }
L_001982f0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001982f4u)) return;
    }
L_001982f4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_001982f8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001982fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198300:;
    {
        cpu->r[14] = 0x00198304u; imp_strlen(cpu); /* strlen */
    }
L_00198304:;
    {
        cpu->r[1] = rd32(0x0019830cu + - 0xad4u);
    }
L_00198308:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019830c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00198314u, cpu->r[1], 0, 0);
    }
L_00198310:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00198314:;
    {
        cpu->r[14] = 0x00198318u; imp_memcpy(cpu); /* memcpy */
    }
L_00198318:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019831cu)) return;
    }
L_0019831c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198320:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00198324:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198328:;
    {
        cpu->r[14] = 0x0019832cu; imp_strlen(cpu); /* strlen */
    }
L_0019832c:;
    {
        cpu->r[1] = rd32(0x00198334u + - 0xaf8u);
    }
L_00198330:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00198334:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019833cu, cpu->r[1], 0, 0);
    }
L_00198338:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0019833c:;
    {
        cpu->r[14] = 0x00198340u; imp_memcpy(cpu); /* memcpy */
    }
L_00198340:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198344u)) return;
    }
L_00198344:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198348:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_0019834c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198350:;
    {
        cpu->r[14] = 0x00198354u; imp_strlen(cpu); /* strlen */
    }
L_00198354:;
    {
        cpu->r[1] = rd32(0x0019835cu + - 0xb1cu);
    }
L_00198358:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019835c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00198364u, cpu->r[1], 0, 0);
    }
L_00198360:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00198364:;
    {
        cpu->r[14] = 0x00198368u; imp_memcpy(cpu); /* memcpy */
    }
L_00198368:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019836cu)) return;
    }
L_0019836c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198370:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00198374:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198378:;
    {
        cpu->r[14] = 0x0019837cu; imp_strlen(cpu); /* strlen */
    }
L_0019837c:;
    {
        cpu->r[1] = rd32(0x00198384u + - 0xb40u);
    }
L_00198380:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00198384:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019838cu, cpu->r[1], 0, 0);
    }
L_00198388:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0019838c:;
    {
        cpu->r[14] = 0x00198390u; imp_memcpy(cpu); /* memcpy */
    }
L_00198390:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198394u)) return;
    }
L_00198394:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198398:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_0019839c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001983a0:;
    {
        cpu->r[14] = 0x001983a4u; imp_strlen(cpu); /* strlen */
    }
L_001983a4:;
    {
        cpu->r[1] = rd32(0x001983acu + - 0xb64u);
    }
L_001983a8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001983ac:;
    {
        cpu->r[1] = add_flags(cpu, 0x001983b4u, cpu->r[1], 0, 0);
    }
L_001983b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001983b4:;
    {
        cpu->r[14] = 0x001983b8u; imp_memcpy(cpu); /* memcpy */
    }
L_001983b8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001983bcu)) return;
    }
L_001983bc:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_001983c0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001983c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001983c8:;
    {
        cpu->r[14] = 0x001983ccu; imp_strlen(cpu); /* strlen */
    }
L_001983cc:;
    {
        cpu->r[1] = rd32(0x001983d4u + - 0xb88u);
    }
L_001983d0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001983d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001983dcu, cpu->r[1], 0, 0);
    }
L_001983d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001983dc:;
    {
        cpu->r[14] = 0x001983e0u; imp_memcpy(cpu); /* memcpy */
    }
L_001983e0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001983e4u)) return;
    }
L_001983e4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_001983e8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001983ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001983f0:;
    {
        cpu->r[14] = 0x001983f4u; imp_strlen(cpu); /* strlen */
    }
L_001983f4:;
    {
        cpu->r[1] = rd32(0x001983fcu + - 0xbacu);
    }
L_001983f8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001983fc:;
    {
        cpu->r[1] = add_flags(cpu, 0x00198404u, cpu->r[1], 0, 0);
    }
L_00198400:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00198404:;
    {
        cpu->r[14] = 0x00198408u; imp_memcpy(cpu); /* memcpy */
    }
L_00198408:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019840cu)) return;
    }
L_0019840c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198410:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00198414:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198418:;
    {
        cpu->r[14] = 0x0019841cu; imp_strlen(cpu); /* strlen */
    }
L_0019841c:;
    {
        cpu->r[1] = rd32(0x00198424u + - 0xbd0u);
    }
L_00198420:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00198424:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019842cu, cpu->r[1], 0, 0);
    }
L_00198428:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0019842c:;
    {
        cpu->r[14] = 0x00198430u; imp_memcpy(cpu); /* memcpy */
    }
L_00198430:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198434u)) return;
    }
L_00198434:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198438:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_0019843c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198440:;
    {
        cpu->r[14] = 0x00198444u; imp_strlen(cpu); /* strlen */
    }
L_00198444:;
    {
        cpu->r[1] = rd32(0x0019844cu + - 0xbf4u);
    }
L_00198448:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019844c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00198454u, cpu->r[1], 0, 0);
    }
L_00198450:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00198454:;
    {
        cpu->r[14] = 0x00198458u; imp_memcpy(cpu); /* memcpy */
    }
L_00198458:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019845cu)) return;
    }
L_0019845c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198460:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00198464:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198468:;
    {
        cpu->r[14] = 0x0019846cu; imp_strlen(cpu); /* strlen */
    }
L_0019846c:;
    {
        cpu->r[1] = rd32(0x00198474u + - 0xc18u);
    }
L_00198470:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00198474:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019847cu, cpu->r[1], 0, 0);
    }
L_00198478:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0019847c:;
    {
        cpu->r[14] = 0x00198480u; imp_memcpy(cpu); /* memcpy */
    }
L_00198480:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198484u)) return;
    }
L_00198484:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198488:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_0019848c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198490:;
    {
        cpu->r[14] = 0x00198494u; imp_strlen(cpu); /* strlen */
    }
L_00198494:;
    {
        cpu->r[1] = rd32(0x0019849cu + - 0xc3cu);
    }
L_00198498:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019849c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001984a4u, cpu->r[1], 0, 0);
    }
L_001984a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001984a4:;
    {
        cpu->r[14] = 0x001984a8u; imp_memcpy(cpu); /* memcpy */
    }
L_001984a8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001984acu)) return;
    }
L_001984ac:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_001984b0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001984b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001984b8:;
    {
        cpu->r[14] = 0x001984bcu; imp_strlen(cpu); /* strlen */
    }
L_001984bc:;
    {
        cpu->r[1] = rd32(0x001984c4u + - 0xc60u);
    }
L_001984c0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001984c4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001984ccu, cpu->r[1], 0, 0);
    }
L_001984c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001984cc:;
    {
        cpu->r[14] = 0x001984d0u; imp_memcpy(cpu); /* memcpy */
    }
L_001984d0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001984d4u)) return;
    }
L_001984d4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_001984d8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001984dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001984e0:;
    {
        cpu->r[14] = 0x001984e4u; imp_strlen(cpu); /* strlen */
    }
L_001984e4:;
    {
        cpu->r[1] = rd32(0x001984ecu + - 0xc84u);
    }
L_001984e8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001984ec:;
    {
        cpu->r[1] = add_flags(cpu, 0x001984f4u, cpu->r[1], 0, 0);
    }
L_001984f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001984f4:;
    {
        cpu->r[14] = 0x001984f8u; imp_memcpy(cpu); /* memcpy */
    }
L_001984f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001984fcu)) return;
    }
L_001984fc:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198500:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00198504:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198508:;
    {
        cpu->r[14] = 0x0019850cu; imp_strlen(cpu); /* strlen */
    }
L_0019850c:;
    {
        cpu->r[1] = rd32(0x00198514u + - 0xca8u);
    }
L_00198510:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00198514:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019851cu, cpu->r[1], 0, 0);
    }
L_00198518:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0019851c:;
    {
        cpu->r[14] = 0x00198520u; imp_memcpy(cpu); /* memcpy */
    }
L_00198520:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198524u)) return;
    }
L_00198524:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198528:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_0019852c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198530:;
    {
        cpu->r[14] = 0x00198534u; imp_strlen(cpu); /* strlen */
    }
L_00198534:;
    {
        cpu->r[1] = rd32(0x0019853cu + - 0xcccu);
    }
L_00198538:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019853c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00198544u, cpu->r[1], 0, 0);
    }
L_00198540:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00198544:;
    {
        cpu->r[14] = 0x00198548u; imp_memcpy(cpu); /* memcpy */
    }
L_00198548:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019854cu)) return;
    }
L_0019854c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198550:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00198554:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198558:;
    {
        cpu->r[14] = 0x0019855cu; imp_strlen(cpu); /* strlen */
    }
L_0019855c:;
    {
        cpu->r[1] = rd32(0x00198564u + - 0xcf0u);
    }
L_00198560:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00198564:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019856cu, cpu->r[1], 0, 0);
    }
L_00198568:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0019856c:;
    {
        cpu->r[14] = 0x00198570u; imp_memcpy(cpu); /* memcpy */
    }
L_00198570:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198574u)) return;
    }
L_00198574:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198578:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_0019857c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198580:;
    {
        cpu->r[14] = 0x00198584u; imp_strlen(cpu); /* strlen */
    }
L_00198584:;
    {
        cpu->r[1] = rd32(0x0019858cu + - 0xd14u);
    }
L_00198588:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019858c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00198594u, cpu->r[1], 0, 0);
    }
L_00198590:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00198594:;
    {
        cpu->r[14] = 0x00198598u; imp_memcpy(cpu); /* memcpy */
    }
L_00198598:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019859cu)) return;
    }
L_0019859c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_001985a0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001985a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001985a8:;
    {
        cpu->r[14] = 0x001985acu; imp_strlen(cpu); /* strlen */
    }
L_001985ac:;
    {
        cpu->r[1] = rd32(0x001985b4u + - 0xd38u);
    }
L_001985b0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001985b4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001985bcu, cpu->r[1], 0, 0);
    }
L_001985b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001985bc:;
    {
        cpu->r[14] = 0x001985c0u; imp_memcpy(cpu); /* memcpy */
    }
L_001985c0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001985c4u)) return;
    }
L_001985c4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_001985c8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001985cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001985d0:;
    {
        cpu->r[14] = 0x001985d4u; imp_strlen(cpu); /* strlen */
    }
L_001985d4:;
    {
        cpu->r[1] = rd32(0x001985dcu + + 0x1a0u);
    }
L_001985d8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001985dc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001985e4u, cpu->r[1], 0, 0);
    }
L_001985e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001985e4:;
    {
        cpu->r[14] = 0x001985e8u; imp_memcpy(cpu); /* memcpy */
    }
L_001985e8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001985ecu)) return;
    }
L_001985ec:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_001985f0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001985f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001985f8:;
    {
        cpu->r[14] = 0x001985fcu; imp_strlen(cpu); /* strlen */
    }
L_001985fc:;
    {
        cpu->r[1] = rd32(0x00198604u + + 0x17cu);
    }
L_00198600:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00198604:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019860cu, cpu->r[1], 0, 0);
    }
L_00198608:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0019860c:;
    {
        cpu->r[14] = 0x00198610u; imp_memcpy(cpu); /* memcpy */
    }
L_00198610:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198614u)) return;
    }
L_00198614:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198618:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_0019861c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198620:;
    {
        cpu->r[14] = 0x00198624u; imp_strlen(cpu); /* strlen */
    }
L_00198624:;
    {
        cpu->r[1] = rd32(0x0019862cu + + 0x158u);
    }
L_00198628:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019862c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00198634u, cpu->r[1], 0, 0);
    }
L_00198630:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00198634:;
    {
        cpu->r[14] = 0x00198638u; imp_memcpy(cpu); /* memcpy */
    }
L_00198638:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019863cu)) return;
    }
L_0019863c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198640:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00198644:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198648:;
    {
        cpu->r[14] = 0x0019864cu; imp_strlen(cpu); /* strlen */
    }
L_0019864c:;
    {
        cpu->r[1] = rd32(0x00198654u + + 0x134u);
    }
L_00198650:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00198654:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019865cu, cpu->r[1], 0, 0);
    }
L_00198658:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0019865c:;
    {
        cpu->r[14] = 0x00198660u; imp_memcpy(cpu); /* memcpy */
    }
L_00198660:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198664u)) return;
    }
L_00198664:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198668:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_0019866c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198670:;
    {
        cpu->r[14] = 0x00198674u; imp_strlen(cpu); /* strlen */
    }
L_00198674:;
    {
        cpu->r[1] = rd32(0x0019867cu + + 0x110u);
    }
L_00198678:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019867c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00198684u, cpu->r[1], 0, 0);
    }
L_00198680:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00198684:;
    {
        cpu->r[14] = 0x00198688u; imp_memcpy(cpu); /* memcpy */
    }
L_00198688:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019868cu)) return;
    }
L_0019868c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198690:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00198694:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198698:;
    {
        cpu->r[14] = 0x0019869cu; imp_strlen(cpu); /* strlen */
    }
L_0019869c:;
    {
        cpu->r[1] = rd32(0x001986a4u + + 0xecu);
    }
L_001986a0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001986a4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001986acu, cpu->r[1], 0, 0);
    }
L_001986a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001986ac:;
    {
        cpu->r[14] = 0x001986b0u; imp_memcpy(cpu); /* memcpy */
    }
L_001986b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001986b4u)) return;
    }
L_001986b4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_001986b8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001986bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001986c0:;
    {
        cpu->r[14] = 0x001986c4u; imp_strlen(cpu); /* strlen */
    }
L_001986c4:;
    {
        cpu->r[1] = rd32(0x001986ccu + + 0xc8u);
    }
L_001986c8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001986cc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001986d4u, cpu->r[1], 0, 0);
    }
L_001986d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001986d4:;
    {
        cpu->r[14] = 0x001986d8u; imp_memcpy(cpu); /* memcpy */
    }
L_001986d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001986dcu)) return;
    }
L_001986dc:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_001986e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001986e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001986e8:;
    {
        cpu->r[14] = 0x001986ecu; imp_strlen(cpu); /* strlen */
    }
L_001986ec:;
    {
        cpu->r[1] = rd32(0x001986f4u + + 0xa4u);
    }
L_001986f0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001986f4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001986fcu, cpu->r[1], 0, 0);
    }
L_001986f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001986fc:;
    {
        cpu->r[14] = 0x00198700u; imp_memcpy(cpu); /* memcpy */
    }
L_00198700:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198704u)) return;
    }
L_00198704:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198708:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_0019870c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198710:;
    {
        cpu->r[14] = 0x00198714u; imp_strlen(cpu); /* strlen */
    }
L_00198714:;
    {
        cpu->r[1] = rd32(0x0019871cu + + 0x80u);
    }
L_00198718:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019871c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00198724u, cpu->r[1], 0, 0);
    }
L_00198720:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00198724:;
    {
        cpu->r[14] = 0x00198728u; imp_memcpy(cpu); /* memcpy */
    }
L_00198728:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019872cu)) return;
    }
L_0019872c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198730:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00198734:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198738:;
    {
        cpu->r[14] = 0x0019873cu; imp_strlen(cpu); /* strlen */
    }
L_0019873c:;
    {
        cpu->r[1] = rd32(0x00198744u + + 0x5cu);
    }
L_00198740:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00198744:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019874cu, cpu->r[1], 0, 0);
    }
L_00198748:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0019874c:;
    {
        cpu->r[14] = 0x00198750u; imp_memcpy(cpu); /* memcpy */
    }
L_00198750:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198754u)) return;
    }
L_00198754:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x958u);
    }
L_00198758:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_0019875c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198760:;
    {
        cpu->r[14] = 0x00198764u; imp_strlen(cpu); /* strlen */
    }
L_00198764:;
    {
        cpu->r[1] = rd32(0x0019876cu + + 0x38u);
    }
L_00198768:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019876c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00198774u, cpu->r[1], 0, 0);
    }
L_00198770:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00198774:;
    {
        cpu->r[14] = 0x00198778u; imp_memcpy(cpu); /* memcpy */
    }
L_00198778:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019877cu)) return;
    }
}

/* _ZN14GS_OnlineLogin18ProcessOnMouseDragEv @ 001987a8 (arm) */
void fn_001987a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001987a8:;
    {
        cpu->r[2] = rd32(0x001987b0u + + 0x60u);
    }
L_001987ac:;
    {
        cpu->r[3] = rd32(0x001987b4u + + 0x60u);
    }
L_001987b0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001987b8u, cpu->r[2], 0, 0);
    }
L_001987b4:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001987b8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001987bc:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001987c0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001987c4:;
    {
        cpu->r[3] = rd32(0x001987ccu + + 0x4cu);
    }
L_001987c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001987cc:;
    {
        cpu->r[12] = rd16(cpu->r[0]);
    }
L_001987d0:;
    {
        cpu->r[0] = rd32(0x001987d8u + + 0x44u);
    }
L_001987d4:;
    {
        cpu->r[5] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001987d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x95cu);
    }
L_001987dc:;
    {
        cpu->r[14] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_001987e0:;
    {
        wr16(cpu->r[13] + + 0x6u, cpu->r[12]);
    }
L_001987e4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001987e8:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_001987ec:;
    {
        cpu->r[14] = rd16(cpu->r[14]);
    }
L_001987f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001987f4:;
    {
        wr16(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001987f8:;
    {
        cpu->r[14] = 0x00198800u;
    }
L_001987fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00198800u)) return;
    }
L_00198800:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198804:;
    {
        cpu->r[14] = 0x00198808u; fn_00110818(cpu);
    }
L_00198808:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0019880c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00198810u)) return;
    }
}

/* _ZN14GS_OnlineLogin22ProcessOnMouseButtonUpEv @ 00198820 (arm) */
void fn_00198820(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00198820:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00198824:;
    {
        cpu->r[4] = rd32(0x0019882cu + + 0x154u);
    }
L_00198828:;
    {
        cpu->r[3] = rd32(0x00198830u + + 0x154u);
    }
L_0019882c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00198830:;
    {
        cpu->r[2] = rd32(0x00198838u + + 0x150u);
    }
L_00198834:;
    {
        cpu->r[4] = add_flags(cpu, 0x0019883cu, cpu->r[4], 0, 0);
    }
L_00198838:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0019883c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00198840:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00198844:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00198848:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0019884c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x954u);
    }
L_00198850:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_00198854:;
    {
        cpu->r[2] = rd16(cpu->r[2]);
    }
L_00198858:;
    {
        wr16(cpu->r[13] + + 0x6u, cpu->r[3]);
    }
L_0019885c:;
    {
        wr16(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00198860:;
    {
        cpu->r[14] = 0x00198864u; fn_001a7b70(cpu);
    }
L_00198864:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00198868:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001988d8;
        }
    }
L_0019886c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x958u);
    }
L_00198870:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00198874:;
    {
        cpu->r[14] = 0x00198878u; fn_001a7b70(cpu);
    }
L_00198878:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019887c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019892c;
        }
    }
L_00198880:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x95cu);
    }
L_00198884:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00198888:;
    {
        cpu->r[14] = 0x0019888cu; fn_001a687c(cpu);
    }
L_0019888c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00198890:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001988c8;
        }
    }
L_00198894:;
    {
        cpu->r[2] = rd32(0x0019889cu + + 0xf0u);
    }
L_00198898:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0019889c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x95cu);
    }
L_001988a0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001988a4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001988a8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001988ac:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_001988b0:;
    {
        cpu->r[14] = 0x001988b8u;
    }
L_001988b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001988b8u)) return;
    }
L_001988b8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x95cu);
    }
L_001988bc:;
    {
        cpu->r[14] = 0x001988c0u; fn_001a6840(cpu);
    }
L_001988c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001988c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001988d0;
        }
    }
L_001988c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001988cc:;
    {
        cpu->r[14] = 0x001988d0u; fn_00110c40(cpu);
    }
L_001988d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001988d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001988d8u)) return;
    }
L_001988d8:;
    {
        cpu->r[2] = rd32(0x001988e0u + + 0xb0u);
    }
L_001988dc:;
    {
        cpu->r[7] = 0x00001160u;
    }
L_001988e0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x954u);
    }
L_001988e4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001988e8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x95cu);
    }
L_001988ec:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001988f0:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001988f4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001988f8:;
    {
        cpu->r[2] = rd32(0x00198900u + + 0x8cu);
    }
L_001988fc:;
    {
        wr8(cpu->r[8] + cpu->r[7], cpu->r[12]);
    }
L_00198900:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00198904:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00198908:;
    {
        wr8(cpu->r[14], cpu->r[12]);
    }
L_0019890c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_00198910:;
    {
        cpu->r[14] = 0x00198918u;
    }
L_00198914:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00198918u)) return;
    }
L_00198918:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x958u);
    }
L_0019891c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00198920:;
    {
        cpu->r[14] = 0x00198924u; fn_001a7b70(cpu);
    }
L_00198924:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00198928:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00198880;
        }
    }
L_0019892c:;
    {
        cpu->r[0] = rd32(0x00198934u + + 0x5cu);
    }
L_00198930:;
    {
        cpu->r[14] = 0x00001160u;
    }
L_00198934:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x95cu);
    }
L_00198938:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019893c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00198940:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00198944:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00198948:;
    {
        wr8(cpu->r[3] + cpu->r[14], cpu->r[2]);
    }
L_0019894c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00198950:;
    {
        wr8(cpu->r[12], cpu->r[3]);
    }
L_00198954:;
    {
        cpu->r[14] = 0x00198958u; fn_001a6908(cpu);
    }
L_00198958:;
    {
        cpu->r[2] = rd32(0x00198960u + + 0x2cu);
    }
L_0019895c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x958u);
    }
L_00198960:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00198964:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00198968:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019896c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00198970:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_00198974:;
    {
        cpu->r[14] = 0x0019897cu;
    }
L_00198978:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019897cu)) return;
    }
L_0019897c:;
    {
        goto L_00198880;
    }
}

/* _ZN14GS_OnlineLogin24ProcessOnMouseButtonDownEv @ 00198994 (arm) */
void fn_00198994(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00198994:;
    {
        cpu->r[2] = rd32(0x0019899cu + + 0x60u);
    }
L_00198998:;
    {
        cpu->r[3] = rd32(0x001989a0u + + 0x60u);
    }
L_0019899c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001989a4u, cpu->r[2], 0, 0);
    }
L_001989a0:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001989a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001989a8:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001989ac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001989b0:;
    {
        cpu->r[3] = rd32(0x001989b8u + + 0x4cu);
    }
L_001989b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001989b8:;
    {
        cpu->r[12] = rd16(cpu->r[0]);
    }
L_001989bc:;
    {
        cpu->r[0] = rd32(0x001989c4u + + 0x44u);
    }
L_001989c0:;
    {
        cpu->r[5] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001989c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x95cu);
    }
L_001989c8:;
    {
        cpu->r[14] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_001989cc:;
    {
        wr16(cpu->r[13] + + 0x6u, cpu->r[12]);
    }
L_001989d0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001989d4:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_001989d8:;
    {
        cpu->r[14] = rd16(cpu->r[14]);
    }
L_001989dc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001989e0:;
    {
        wr16(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001989e4:;
    {
        cpu->r[14] = 0x001989ecu;
    }
L_001989e8:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001989ecu)) return;
    }
L_001989ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001989f0:;
    {
        cpu->r[14] = 0x001989f4u; fn_00110498(cpu);
    }
L_001989f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001989f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001989fcu)) return;
    }
}

/* _ZN14GS_OnlineLogin6ResumeEv @ 00198a0c (arm) */
void fn_00198a0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00198a0c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00198a10:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00198a14:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_00198a18:;
    {
        cpu->r[4] = rd32(0x00198a20u + + 0xa4u);
    }
L_00198a1c:;
    {
        cpu->r[14] = 0x00198a20u; fn_001142a0(cpu);
    }
L_00198a20:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00198a24:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xb0u);
    }
L_00198a28:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00198a2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00198a30:;
    {
        cpu->r[2] = 0x000000e8u;
    }
L_00198a34:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00198a38:;
    {
        cpu->r[4] = add_flags(cpu, 0x00198a40u, cpu->r[4], 0, 0);
    }
L_00198a3c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00198a40:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00198a44:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00198a48:;
    {
        cpu->r[14] = 0x00198a4cu; fn_000a8a2c(cpu);
    }
L_00198a4c:;
    {
        cpu->r[3] = rd32(0x00198a54u + + 0x74u);
    }
L_00198a50:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00198a54:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_00198a58:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00198a5c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00198a60:;
    {
        cpu->r[3] = rd32(0x00198a68u + + 0x64u);
    }
L_00198a64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00198a68:;
    {
        cpu->r[4] = rd32(cpu->r[2]);
    }
L_00198a6c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00198a70:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00198a74:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000050u, 1, 0);
    }
L_00198a78:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00198a7c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_00198a80:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000001eu, 0, 0);
    }
L_00198a84:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 0);
    }
L_00198a88:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8e8u);
    }
L_00198a8c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[14], 1, 0);
    }
L_00198a90:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[12], 2, 1u, &shc), 1, 0);
    }
L_00198a94:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 1u, &shc); cpu->r[4] = v;
    }
L_00198a98:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00198a9c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00198aa0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00198aa4:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00198aa8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00198aac:;
    {
        cpu->r[14] = 0x00198ab0u; fn_000ec75c(cpu);
    }
L_00198ab0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8e8u);
    }
L_00198ab4:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[6]);
    }
L_00198ab8:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[4]);
    }
L_00198abc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00198ac0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00198ac4u)) return;
    }
}

/* _ZN14GS_OnlineLogin12ClearProfileEv @ 00198ad0 (arm) */
void fn_00198ad0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00198ad0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00198ad4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00198ad8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x954u);
    }
L_00198adc:;
    {
        cpu->r[14] = 0x00198ae0u; fn_001a7dec(cpu);
    }
L_00198ae0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_00198ae4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00198ae8:;
    {
        return fn_001a7dec(cpu);
    }
}

/* _ZN14GS_OnlineLogin6UpdateEv @ 00198aec (arm) */
void fn_00198aec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00198aec:;
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
L_00198af0:;
    {
        cpu->r[5] = rd32(0x00198af8u + + 0x41cu);
    }
L_00198af4:;
    {
        cpu->r[6] = rd32(0x00198afcu + + 0x41cu);
    }
L_00198af8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000006cu, 1, 0);
    }
L_00198afc:;
    {
        cpu->r[5] = add_flags(cpu, 0x00198b04u, cpu->r[5], 0, 0);
    }
L_00198b00:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x910u);
    }
L_00198b04:;
    {
        cpu->r[8] = rd32(0x00198b0cu + + 0x410u);
    }
L_00198b08:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00198b0c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00198b10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00198b14:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_00198b18:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x95cu);
    }
L_00198b1c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
        }
    }
L_00198b20:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00198b24:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[2]);
    }
L_00198b28:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
        }
    }
L_00198b2c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3]);
        }
    }
L_00198b30:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00005fa4u;
        }
    }
L_00198b34:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[2]);
        }
    }
L_00198b38:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00005fa4u;
        }
    }
L_00198b3c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
        }
    }
L_00198b40:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[3]);
        }
    }
L_00198b44:;
    {
        cpu->r[14] = 0x00198b48u; fn_001a6840(cpu);
    }
L_00198b48:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00198b4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00198bb8;
        }
    }
L_00198b50:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00198b54:;
    {
        cpu->r[14] = 0x00198b58u; fn_001a7160(cpu);
    }
L_00198b58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198b5c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00198b60:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00198b64:;
    {
        cpu->r[14] = 0x00198b6cu;
    }
L_00198b68:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xd0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00198b6cu)) return;
    }
L_00198b6c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00198b70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198b74:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00198b78:;
    {
        cpu->r[14] = 0x00198b80u;
    }
L_00198b7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xd0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00198b80u)) return;
    }
L_00198b80:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x94u);
    }
L_00198b84:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_00198b88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00198be8;
        }
    }
L_00198b8c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 1);
    }
L_00198b90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00198c88;
        }
    }
L_00198b94:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00198b98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00198c7c;
        }
    }
L_00198b9c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00198ba0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x64u);
    }
L_00198ba4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00198ba8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00198bac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00198f10;
        }
    }
L_00198bb0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_00198bb4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00198bb8u)) return;
    }
L_00198bb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198bbc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00198bc0:;
    {
        cpu->r[14] = 0x00198bc8u;
    }
L_00198bc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xd4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00198bc8u)) return;
    }
L_00198bc8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00198bcc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198bd0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00198bd4:;
    {
        cpu->r[14] = 0x00198bdcu;
    }
L_00198bd8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xd4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00198bdcu)) return;
    }
L_00198bdc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x94u);
    }
L_00198be0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_00198be4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00198b8c;
        }
    }
L_00198be8:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00198bec:;
    {
        cpu->r[8] = 0x000067b0u;
    }
L_00198bf0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198bf4:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00198bf8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00198bfc:;
    {
        cpu->r[14] = 0x00198c00u; fn_00196854(cpu);
    }
L_00198c00:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00198c04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198c08:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00198c0c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00198c10:;
    {
        wr32(cpu->r[3] + cpu->r[8], cpu->r[2]);
    }
L_00198c14:;
    {
        cpu->r[14] = 0x00198c18u; fn_000eb59c(cpu);
    }
L_00198c18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198c1c:;
    {
        cpu->r[14] = 0x00198c20u; fn_00128a5c(cpu);
    }
L_00198c20:;
    {
        goto L_00198b9c;
    }
L_00198c24:;
    {
        cpu->r[8] = rd32(0x00198c2cu + + 0x2f4u);
    }
L_00198c28:;
    {
        cpu->r[14] = 0x00198c2cu; fn_000a622c(cpu);
    }
L_00198c2c:;
    {
        cpu->r[14] = rd32(0x00198c34u + + 0x2f0u);
    }
L_00198c30:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00198c34:;
    {
        cpu->r[8] = add_flags(cpu, 0x00198c3cu, cpu->r[8], 0, 0);
    }
L_00198c38:;
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
L_00198c3c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_00198c40:;
    {
        cpu->r[14] = rd32(cpu->r[7]);
    }
L_00198c44:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_00198c48:;
    {
        { uint32_t v = cpu->r[14] & 0x00000001u; set_nz(cpu, v); }
    }
L_00198c4c:;
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
L_00198c50:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_00198c54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00198e24;
        }
    }
L_00198c58:;
    {
        cpu->r[8] = rd32(0x00198c60u + + 0x2c8u);
    }
L_00198c5c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00198c60:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_00198c64:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00198c68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00198c6c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x64u);
    }
L_00198c70:;
    {
        cpu->r[14] = 0x00198c74u; fn_0007232c(cpu);
    }
L_00198c74:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00198c78:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_00198c7c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00198c80:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_00198c84:;
    {
        goto L_00198b9c;
    }
L_00198c88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8f4u);
    }
L_00198c8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00198c90:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_00198c94:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
        }
    }
L_00198c98:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00198b9c;
        }
    }
L_00198c9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00198ca0:;
    {
        cpu->r[2] = 0x00000437u;
    }
L_00198ca4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00198ca8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00198c7c;
        }
    }
L_00198cac:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00198de4;
        }
    }
L_00198cb0:;
    {
        cpu->r[2] = 0x00000436u;
    }
L_00198cb4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00198cb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00198b9c;
        }
    }
L_00198cbc:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00198cc0:;
    {
        cpu->r[10] = 0x000067b0u;
    }
L_00198cc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198cc8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00198ccc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00198cd0:;
    {
        cpu->r[14] = 0x00198cd4u; fn_00196854(cpu);
    }
L_00198cd4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00198cd8:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00198cdc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x954u);
    }
L_00198ce0:;
    {
        wr32(cpu->r[3] + cpu->r[10], cpu->r[2]);
    }
L_00198ce4:;
    {
        cpu->r[14] = 0x00198ce8u; fn_001a7d18(cpu);
    }
L_00198ce8:;
    {
        cpu->r[10] = rd8(cpu->r[0]);
    }
L_00198cec:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00198cf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00198e4c;
        }
    }
L_00198cf4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_00198cf8:;
    {
        cpu->r[14] = 0x00198cfcu; fn_001a7d18(cpu);
    }
L_00198cfc:;
    {
        cpu->r[10] = rd8(cpu->r[0]);
    }
L_00198d00:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00198d04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00198e8c;
        }
    }
L_00198d08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x954u);
    }
L_00198d0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00198d10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00198b9c;
        }
    }
L_00198d14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x958u);
    }
L_00198d18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00198d1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00198b9c;
        }
    }
L_00198d20:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00198d24:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_00198d28:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_00198d2c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00198d30:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00198d34:;
    {
        cpu->r[14] = 0x00198d38u; fn_001933d4(cpu);
    }
L_00198d38:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x954u);
    }
L_00198d3c:;
    {
        cpu->r[14] = 0x00198d40u; fn_001a7d18(cpu);
    }
L_00198d40:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00198d44:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00198d48:;
    {
        cpu->r[14] = 0x00198d4cu; imp_strcpy(cpu); /* strcpy */
    }
L_00198d4c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_00198d50:;
    {
        cpu->r[14] = 0x00198d54u; fn_001a7d18(cpu);
    }
L_00198d54:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00198d58:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00198d5c:;
    {
        cpu->r[14] = 0x00198d60u; imp_strcpy(cpu); /* strcpy */
    }
L_00198d60:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x910u);
    }
L_00198d64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00198d68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00198ec0;
        }
    }
L_00198d6c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00198d70:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x0001e000u, 0, 0);
    }
L_00198d74:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x24cu);
    }
L_00198d78:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00198d7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00198ea8;
        }
    }
L_00198d80:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00198d84:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00198d88:;
    {
        cpu->r[3] = 0x0000e6bau;
    }
L_00198d8c:;
    {
        wr8(cpu->r[2] + + 0x24cu, cpu->r[0]);
    }
L_00198d90:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00198d94:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_00198d98:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[0]);
    }
L_00198d9c:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_00198da0:;
    {
        cpu->r[14] = 0x00198da4u; fn_001937ec(cpu);
    }
L_00198da4:;
    {
        cpu->r[0] = 0x00000a50u;
    }
L_00198da8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0xcu);
    }
L_00198dac:;
    {
        cpu->r[14] = 0x00198db0u; fn_0018ba6c(cpu);
    }
L_00198db0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00198db4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00198db8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00198dbc:;
    {
        cpu->r[14] = 0x00198dc0u; fn_001a0254(cpu);
    }
L_00198dc0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00198dc4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00198dc8:;
    {
        cpu->r[14] = 0x00198dccu; fn_000f361c(cpu);
    }
L_00198dcc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x910u);
    }
L_00198dd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00198dd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00198b9c;
        }
    }
L_00198dd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198ddc:;
    {
        cpu->r[14] = 0x00198de0u; fn_00198ad0(cpu);
    }
L_00198de0:;
    {
        goto L_00198b9c;
    }
L_00198de4:;
    {
        cpu->r[2] = 0x00000438u;
    }
L_00198de8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00198dec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00198c24;
        }
    }
L_00198df0:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_00198df4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00198df8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00198b9c;
        }
    }
L_00198dfc:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00198e00:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00198e04:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00198e08:;
    {
        cpu->r[14] = 0x00198e0cu; fn_000f34e8(cpu);
    }
L_00198e0c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00198e10:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x404u);
    }
L_00198e14:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00198e18:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00198e1c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[3] + + 0x405u, cpu->r[2]);
        }
    }
L_00198e20:;
    {
        goto L_00198b9c;
    }
L_00198e24:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00198e28:;
    {
        cpu->r[14] = 0x00198e2cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00198e2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00198e30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00198c58;
        }
    }
L_00198e34:;
    {
        cpu->r[8] = rd32(0x00198e3cu + + 0xecu);
    }
L_00198e38:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00198e3c:;
    {
        cpu->r[14] = 0x00198e40u; fn_00094228(cpu);
    }
L_00198e40:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00198e44:;
    {
        cpu->r[14] = 0x00198e48u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00198e48:;
    {
        goto L_00198c5c;
    }
L_00198e4c:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_00198e50:;
    {
        cpu->r[14] = 0x00198e54u; fn_0018ba6c(cpu);
    }
L_00198e54:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00198e58:;
    {
        cpu->r[14] = 0x00198e5cu; fn_000a7570(cpu);
    }
L_00198e5c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00198e60:;
    {
        cpu->r[0] = 0x0000044cu;
    }
L_00198e64:;
    {
        cpu->r[14] = 0x00198e68u; fn_000aeb58(cpu);
    }
L_00198e68:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00198e6c:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00198e70:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00198e74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198e78:;
    {
        cpu->r[14] = 0x00198e7cu; fn_000a7bb0(cpu);
    }
L_00198e7c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00198e80:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00198e84:;
    {
        cpu->r[14] = 0x00198e88u; fn_000f361c(cpu);
    }
L_00198e88:;
    {
        goto L_00198b9c;
    }
L_00198e8c:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_00198e90:;
    {
        cpu->r[14] = 0x00198e94u; fn_0018ba6c(cpu);
    }
L_00198e94:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00198e98:;
    {
        cpu->r[14] = 0x00198e9cu; fn_000a7570(cpu);
    }
L_00198e9c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00198ea0:;
    {
        cpu->r[0] = 0x0000044du;
    }
L_00198ea4:;
    {
        goto L_00198e64;
    }
L_00198ea8:;
    {
        cpu->r[1] = 0x0000e6bau;
    }
L_00198eac:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_00198eb0:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_00198eb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00198eb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00198da4;
        }
    }
L_00198ebc:;
    {
        goto L_00198d80;
    }
L_00198ec0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x954u);
    }
L_00198ec4:;
    {
        cpu->r[8] = 0x0000e6bau;
    }
L_00198ec8:;
    {
        cpu->r[11] = rd32(cpu->r[7]);
    }
L_00198ecc:;
    {
        cpu->r[14] = 0x00198ed0u; fn_001a7d18(cpu);
    }
L_00198ed0:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_00198ed4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0001e000u, 0, 0);
    }
L_00198ed8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000024cu, 0, 0);
    }
L_00198edc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00198ee0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00198ee4:;
    {
        cpu->r[14] = 0x00198ee8u; imp_strcpy(cpu); /* strcpy */
    }
L_00198ee8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00198eec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_00198ef0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_00198ef4:;
    {
        cpu->r[14] = 0x00198ef8u; fn_001a7d18(cpu);
    }
L_00198ef8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00198efc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00198f00:;
    {
        cpu->r[14] = 0x00198f04u; imp_strcpy(cpu); /* strcpy */
    }
L_00198f04:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00198f08:;
    {
        cpu->r[14] = 0x00198f0cu; fn_001937ec(cpu);
    }
L_00198f0c:;
    {
        goto L_00198da4;
    }
L_00198f10:;
    {
        cpu->r[14] = 0x00198f14u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_00198f14:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[11] & shifter(cpu->r[4], 2, (cpu->r[9] & 0xffu), &shc); cpu->r[1] = v;
        }
    }
L_00198f18:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_00198f1c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_00198f20:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[12], 3, 12u, &shc); cpu->r[6] = v;
        }
    }
L_00198f24:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_00198f28:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[4], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN14GS_OnlineLogin8DoActionEii @ 00198f2c (arm) */
void fn_00198f2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00198f2c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00198f30:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x94u);
    }
L_00198f34:;
    {
        cpu->r[5] = rd32(0x00198f3cu + + 0x21cu);
    }
L_00198f38:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00198f3c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_00198f40:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00198f44:;
    {
        cpu->r[5] = add_flags(cpu, 0x00198f4cu, cpu->r[5], 0, 0);
    }
L_00198f48:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00198f4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00198f58;
        }
    }
L_00198f50:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00198f54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00198f58u)) return;
    }
L_00198f58:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_00198f5c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00198f60:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019901c;
        }
    }
L_00198f64:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00198f68:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8ecu);
    }
L_00198f6c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_00198f70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00198f74:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00198f78:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_00198f7c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00198f80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00198f9c;
        }
    }
L_00198f84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00198f88:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00198f8c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00198f90:;
    {
        cpu->r[14] = 0x00198f98u;
    }
L_00198f94:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00198f98u)) return;
    }
L_00198f98:;
    {
        goto L_00198f50;
    }
L_00198f9c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x910u);
    }
L_00198fa0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00198fa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001990d8;
        }
    }
L_00198fa8:;
    {
        cpu->r[3] = rd32(0x00198fb0u + + 0x1acu);
    }
L_00198fac:;
    {
        cpu->r[7] = 0x0000e6bau;
    }
L_00198fb0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x954u);
    }
L_00198fb4:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_00198fb8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00198fbc:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00198fc0:;
    {
        cpu->r[8] = rd32(cpu->r[5]);
    }
L_00198fc4:;
    {
        cpu->r[14] = 0x00198fc8u; fn_001a7d18(cpu);
    }
L_00198fc8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0001e000u, 0, 0);
    }
L_00198fcc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000024cu, 0, 0);
    }
L_00198fd0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00198fd4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00198fd8:;
    {
        cpu->r[14] = 0x00198fdcu; imp_strcpy(cpu); /* strcpy */
    }
L_00198fdc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00198fe0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_00198fe4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_00198fe8:;
    {
        cpu->r[14] = 0x00198fecu; fn_001a7d18(cpu);
    }
L_00198fec:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00198ff0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00198ff4:;
    {
        cpu->r[14] = 0x00198ff8u; imp_strcpy(cpu); /* strcpy */
    }
L_00198ff8:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00198ffc:;
    {
        cpu->r[14] = 0x00199000u; fn_001937ec(cpu);
    }
L_00199000:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00199004:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00199008:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0019900c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00199010:;
    {
        cpu->r[14] = 0x00199018u;
    }
L_00199014:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00199018u)) return;
    }
L_00199018:;
    {
        goto L_00198f50;
    }
L_0019901c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00199020:;
    {
        cpu->r[14] = 0x00199028u;
    }
L_00199024:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xb8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00199028u)) return;
    }
L_00199028:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019902c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001990c4;
        }
    }
L_00199030:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8d8u);
    }
L_00199034:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_00199038:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0019903c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_00199040:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00199044:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
        }
    }
L_00199048:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
        }
    }
L_0019904c:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[2] = v;
        }
    }
L_00199050:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_00199054:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
        }
    }
L_00199058:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[6]);
    }
L_0019905c:;
    {
        cpu->r[14] = 0x00199060u; fn_00093f34(cpu);
    }
L_00199060:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00199064:;
    {
        cpu->r[2] = 0x00000436u;
    }
L_00199068:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019906c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00199070:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_00199074:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00199078:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0019907c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00199080:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[2]);
    }
L_00199084:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00199094;
        }
    }
L_00199088:;
    {
        cpu->r[2] = 0x00000438u;
    }
L_0019908c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00199090:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00198f50;
        }
    }
L_00199094:;
    {
        cpu->r[2] = 0x00000438u;
    }
L_00199098:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019909c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001990e8;
        }
    }
L_001990a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001990a4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001990a8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001990ac:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001990b0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001990b4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001990b8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001990bc:;
    {
        cpu->r[14] = 0x001990c0u; fn_000fd248(cpu);
    }
L_001990c0:;
    {
        goto L_00198f50;
    }
L_001990c4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001990c8:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[7]);
    }
L_001990cc:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_001990d0:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001990d4:;
    {
        goto L_00198f50;
    }
L_001990d8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001990dc:;
    {
        cpu->r[14] = 0x001990e0u; fn_00198ad0(cpu);
    }
L_001990e0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001990e4:;
    {
        goto L_00198fa8;
    }
L_001990e8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x910u);
    }
L_001990ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001990f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019914c;
        }
    }
L_001990f4:;
    {
        cpu->r[3] = rd32(0x001990fcu + + 0x60u);
    }
L_001990f8:;
    {
        cpu->r[6] = 0x0000e6bau;
    }
L_001990fc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x954u);
    }
L_00199100:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_00199104:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00199108:;
    {
        cpu->r[7] = rd32(cpu->r[5]);
    }
L_0019910c:;
    {
        cpu->r[14] = 0x00199110u; fn_001a7d18(cpu);
    }
L_00199110:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0001e000u, 0, 0);
    }
L_00199114:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000024cu, 0, 0);
    }
L_00199118:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019911c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00199120:;
    {
        cpu->r[14] = 0x00199124u; imp_strcpy(cpu); /* strcpy */
    }
L_00199124:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00199128:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_0019912c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_00199130:;
    {
        cpu->r[14] = 0x00199134u; fn_001a7d18(cpu);
    }
L_00199134:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00199138:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019913c:;
    {
        cpu->r[14] = 0x00199140u; imp_strcpy(cpu); /* strcpy */
    }
L_00199140:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00199144:;
    {
        cpu->r[14] = 0x00199148u; fn_001937ec(cpu);
    }
L_00199148:;
    {
        goto L_001990a0;
    }
L_0019914c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00199150:;
    {
        cpu->r[14] = 0x00199154u; fn_00198ad0(cpu);
    }
L_00199154:;
    {
        goto L_001990f4;
    }
}

/* _ZN14GS_OnlineLoginD1Ev @ 00199160 (arm) */
void fn_00199160(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00199160:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00199164:;
    {
        cpu->r[5] = rd32(0x0019916cu + + 0xc0u);
    }
L_00199168:;
    {
        cpu->r[3] = rd32(0x00199170u + + 0xc0u);
    }
L_0019916c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00199170:;
    {
        cpu->r[5] = add_flags(cpu, 0x00199178u, cpu->r[5], 0, 0);
    }
L_00199174:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x954u);
    }
L_00199178:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019917c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00199180:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00199184:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00199188:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001991b4;
        }
    }
L_0019918c:;
    {
        cpu->r[14] = 0x00199190u; fn_001a7b60(cpu);
    }
L_00199190:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x954u);
    }
L_00199194:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00199198:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001991b4;
        }
    }
L_0019919c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001991a0:;
    {
        cpu->r[14] = 0x001991a4u; fn_001a7b50(cpu);
    }
L_001991a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001991a8:;
    {
        cpu->r[14] = 0x001991acu; fn_0018ba20(cpu);
    }
L_001991ac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001991b0:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_001991b4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_001991b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001991bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001991e8;
        }
    }
L_001991c0:;
    {
        cpu->r[14] = 0x001991c4u; fn_001a7b60(cpu);
    }
L_001991c4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x958u);
    }
L_001991c8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001991cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001991e8;
        }
    }
L_001991d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001991d4:;
    {
        cpu->r[14] = 0x001991d8u; fn_001a7b50(cpu);
    }
L_001991d8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001991dc:;
    {
        cpu->r[14] = 0x001991e0u; fn_0018ba20(cpu);
    }
L_001991e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001991e4:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[3]);
    }
L_001991e8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x95cu);
    }
L_001991ec:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001991f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019920c;
        }
    }
L_001991f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001991f8:;
    {
        cpu->r[14] = 0x001991fcu; fn_001a682c(cpu);
    }
L_001991fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00199200:;
    {
        cpu->r[14] = 0x00199204u; fn_0018ba20(cpu);
    }
L_00199204:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00199208:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_0019920c:;
    {
        cpu->r[3] = rd32(0x00199214u + + 0x20u);
    }
L_00199210:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00199214:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00199218:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0019921c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00199220:;
    {
        cpu->r[14] = 0x00199224u; fn_000ec21c(cpu);
    }
L_00199224:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00199228:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019922cu)) return;
    }
}

/* _ZN14GS_OnlineLoginD0Ev @ 00199238 (arm) */
void fn_00199238(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00199238:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019923c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00199240:;
    {
        cpu->r[14] = 0x00199244u; fn_00199160(cpu);
    }
L_00199244:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00199248:;
    {
        cpu->r[14] = 0x0019924cu; fn_0018ba20(cpu);
    }
L_0019924c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00199250:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00199254u)) return;
    }
}

/* _ZN14GS_OnlineLoginD2Ev @ 00199254 (arm) */
void fn_00199254(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00199254:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00199258:;
    {
        cpu->r[5] = rd32(0x00199260u + + 0xc0u);
    }
L_0019925c:;
    {
        cpu->r[3] = rd32(0x00199264u + + 0xc0u);
    }
L_00199260:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00199264:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019926cu, cpu->r[5], 0, 0);
    }
L_00199268:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x954u);
    }
L_0019926c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00199270:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00199274:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00199278:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0019927c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001992a8;
        }
    }
L_00199280:;
    {
        cpu->r[14] = 0x00199284u; fn_001a7b60(cpu);
    }
L_00199284:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x954u);
    }
L_00199288:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0019928c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001992a8;
        }
    }
L_00199290:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00199294:;
    {
        cpu->r[14] = 0x00199298u; fn_001a7b50(cpu);
    }
L_00199298:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019929c:;
    {
        cpu->r[14] = 0x001992a0u; fn_0018ba20(cpu);
    }
L_001992a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001992a4:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_001992a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_001992ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001992b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001992dc;
        }
    }
L_001992b4:;
    {
        cpu->r[14] = 0x001992b8u; fn_001a7b60(cpu);
    }
L_001992b8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x958u);
    }
L_001992bc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001992c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001992dc;
        }
    }
L_001992c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001992c8:;
    {
        cpu->r[14] = 0x001992ccu; fn_001a7b50(cpu);
    }
L_001992cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001992d0:;
    {
        cpu->r[14] = 0x001992d4u; fn_0018ba20(cpu);
    }
L_001992d4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001992d8:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[3]);
    }
L_001992dc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x95cu);
    }
L_001992e0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001992e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00199300;
        }
    }
L_001992e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001992ec:;
    {
        cpu->r[14] = 0x001992f0u; fn_001a682c(cpu);
    }
L_001992f0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001992f4:;
    {
        cpu->r[14] = 0x001992f8u; fn_0018ba20(cpu);
    }
L_001992f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001992fc:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_00199300:;
    {
        cpu->r[3] = rd32(0x00199308u + + 0x20u);
    }
L_00199304:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00199308:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019930c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00199310:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00199314:;
    {
        cpu->r[14] = 0x00199318u; fn_000ec21c(cpu);
    }
L_00199318:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019931c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00199320u)) return;
    }
}

/* _ZN14GS_OnlineLogin14InitTextFieldsEv @ 0019932c (arm) */
void fn_0019932c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019932c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00199330:;
    {
        cpu->r[5] = rd32(0x00199338u + + 0x2d4u);
    }
L_00199334:;
    {
        cpu->r[6] = rd32(0x0019933cu + + 0x2d4u);
    }
L_00199338:;
    {
        cpu->r[2] = 0x0000e6bau;
    }
L_0019933c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00199344u, cpu->r[5], 0, 0);
    }
L_00199340:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00199344:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_00199348:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019934c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00199350:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00199354:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00199358:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0019935c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00199374;
        }
    }
L_00199360:;
    {
        cpu->r[2] = 0x0000e24cu;
    }
L_00199364:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00199368:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0019936c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00199370:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001994dc;
        }
    }
L_00199374:;
    {
        cpu->r[0] = 0x0000e6bau;
    }
L_00199378:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0019937c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00199380:;
    {
        cpu->r[14] = 0x00199384u; fn_001d0434(cpu);
    }
L_00199384:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00199388:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0019938c:;
    {
        cpu->r[2] = 0x00005fa4u;
    }
L_00199390:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00199394:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x954u);
    }
L_00199398:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0019939c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001993a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001993a4:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[3]);
    }
L_001993a8:;
    {
        wr8(cpu->r[4] + + 0x910u, cpu->r[3]);
    }
L_001993ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001993d8;
        }
    }
L_001993b0:;
    {
        cpu->r[14] = 0x001993b4u; fn_001a7b60(cpu);
    }
L_001993b4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x954u);
    }
L_001993b8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001993bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001993d8;
        }
    }
L_001993c0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001993c4:;
    {
        cpu->r[14] = 0x001993c8u; fn_001a7b50(cpu);
    }
L_001993c8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001993cc:;
    {
        cpu->r[14] = 0x001993d0u; fn_0018ba20(cpu);
    }
L_001993d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001993d4:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_001993d8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_001993dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001993e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019940c;
        }
    }
L_001993e4:;
    {
        cpu->r[14] = 0x001993e8u; fn_001a7b60(cpu);
    }
L_001993e8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x958u);
    }
L_001993ec:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001993f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019940c;
        }
    }
L_001993f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001993f8:;
    {
        cpu->r[14] = 0x001993fcu; fn_001a7b50(cpu);
    }
L_001993fc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00199400:;
    {
        cpu->r[14] = 0x00199404u; fn_0018ba20(cpu);
    }
L_00199404:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00199408:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[3]);
    }
L_0019940c:;
    {
        cpu->r[0] = 0x00000128u;
    }
L_00199410:;
    {
        cpu->r[14] = 0x00199414u; fn_0018ba6c(cpu);
    }
L_00199414:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00199418:;
    {
        cpu->r[14] = 0x0019941cu; fn_001a7b00(cpu);
    }
L_0019941c:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[7]);
    }
L_00199420:;
    {
        cpu->r[0] = 0x00000128u;
    }
L_00199424:;
    {
        cpu->r[14] = 0x00199428u; fn_0018ba6c(cpu);
    }
L_00199428:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0019942c:;
    {
        cpu->r[14] = 0x00199430u; fn_001a7b00(cpu);
    }
L_00199430:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x910u);
    }
L_00199434:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[7]);
    }
L_00199438:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0019943c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00199528;
        }
    }
L_00199440:;
    {
        cpu->r[5] = rd32(0x00199448u + + 0x1ccu);
    }
L_00199444:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_00199448:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x9a4u);
    }
L_0019944c:;
    {
        cpu->r[3] = 0x00000087u;
    }
L_00199450:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00199454:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019945cu, cpu->r[5], 0, 0);
    }
L_00199458:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x954u);
    }
L_0019945c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00199460:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00199464:;
    {
        cpu->r[7] = 0x000001a4u;
    }
L_00199468:;
    {
        cpu->r[12] = 0x0000003cu;
    }
L_0019946c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_00199470:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_00199474:;
    {
        cpu->r[6] = 0x00000023u;
    }
L_00199478:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019947c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_00199480:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_00199484:;
    {
        cpu->r[14] = 0x00199488u; fn_001a8210(cpu);
    }
L_00199488:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x9a4u);
    }
L_0019948c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00199490:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00199494:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_00199498:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_0019949c:;
    {
        cpu->r[3] = 0x00000087u;
    }
L_001994a0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_001994a4:;
    {
        cpu->r[14] = 0x00000096u;
    }
L_001994a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001994ac:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001994b0:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_001994b4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001994b8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001994bc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001994c0:;
    {
        cpu->r[14] = 0x001994c4u; fn_001a8210(cpu);
    }
L_001994c4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x954u);
    }
L_001994c8:;
    {
        cpu->r[14] = 0x001994ccu; fn_001a7b58(cpu);
    }
L_001994cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_001994d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001994d4:;
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
L_001994d8:;
    {
        return fn_001a7b58(cpu);
    }
L_001994dc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001994e0:;
    {
        cpu->r[14] = 0x001994e4u; fn_00193964(cpu);
    }
L_001994e4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001994e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001995c4;
        }
    }
L_001994ec:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001994f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000960u, 0, 0);
    }
L_001994f4:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_001994f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0001e000u, 0, 0);
    }
L_001994fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000024cu, 0, 0);
    }
L_00199500:;
    {
        cpu->r[14] = 0x00199504u; fn_000ae3d0(cpu);
    }
L_00199504:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00199508:;
    {
        cpu->r[1] = 0x0000e6bau;
    }
L_0019950c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000980u, 0, 0);
    }
L_00199510:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_00199514:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_00199518:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0019951c:;
    {
        cpu->r[14] = 0x00199520u; fn_000ae3d0(cpu);
    }
L_00199520:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00199524:;
    {
        goto L_00199374;
    }
L_00199528:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019952c:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_00199530:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x9a4u);
    }
L_00199534:;
    {
        cpu->r[3] = 0x00000087u;
    }
L_00199538:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x95cu);
    }
L_0019953c:;
    {
        cpu->r[6] = 0x000001a4u;
    }
L_00199540:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_00199544:;
    {
        cpu->r[5] = 0x00000023u;
    }
L_00199548:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x954u);
    }
L_0019954c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0001e000u, 0, 0);
    }
L_00199550:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_00199554:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000024cu, 0, 0);
    }
L_00199558:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0019955c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_00199560:;
    {
        cpu->r[12] = 0x0000003cu;
    }
L_00199564:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_00199568:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019956c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00199570:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00199574:;
    {
        cpu->r[14] = 0x00199578u; fn_001a8210(cpu);
    }
L_00199578:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0019957c:;
    {
        cpu->r[1] = 0x0000e6bau;
    }
L_00199580:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x9a4u);
    }
L_00199584:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_00199588:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x95cu);
    }
L_0019958c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_00199590:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_00199594:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_00199598:;
    {
        cpu->r[3] = 0x00000087u;
    }
L_0019959c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001995a0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001995a4:;
    {
        cpu->r[5] = 0x00000096u;
    }
L_001995a8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_001995ac:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001995b0:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_001995b4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001995b8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001995bc:;
    {
        cpu->r[14] = 0x001995c0u; fn_001a8210(cpu);
    }
L_001995c0:;
    {
        goto L_001994c4;
    }
L_001995c4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001995c8:;
    {
        cpu->r[0] = 0x0000e6bau;
    }
L_001995cc:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_001995d0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001995d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001995d8:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001995dc:;
    {
        cpu->r[14] = 0x001995e0u; imp_memset(cpu); /* memset */
    }
L_001995e0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001995e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0001e000u, 0, 0);
    }
L_001995e8:;
    {
        wr32(cpu->r[3] + + 0x268u, cpu->r[8]);
    }
L_001995ec:;
    {
        wr32(cpu->r[3] + + 0x24cu, cpu->r[8]);
    }
L_001995f0:;
    {
        wr32(cpu->r[3] + + 0x250u, cpu->r[8]);
    }
L_001995f4:;
    {
        wr32(cpu->r[3] + + 0x254u, cpu->r[8]);
    }
L_001995f8:;
    {
        wr32(cpu->r[3] + + 0x258u, cpu->r[8]);
    }
L_001995fc:;
    {
        wr32(cpu->r[3] + + 0x25cu, cpu->r[8]);
    }
L_00199600:;
    {
        wr32(cpu->r[3] + + 0x260u, cpu->r[8]);
    }
L_00199604:;
    {
        wr32(cpu->r[3] + + 0x264u, cpu->r[8]);
    }
L_00199608:;
    {
        goto L_001994ec;
    }
}

/* _ZN14GS_OnlineLoginC1Ev @ 00199618 (arm) */
void fn_00199618(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00199618:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0019961c:;
    {
        cpu->r[5] = rd32(0x00199624u + + 0x4cu);
    }
L_00199620:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00199624:;
    {
        cpu->r[14] = 0x00199628u; fn_0010ffa8(cpu);
    }
L_00199628:;
    {
        cpu->r[1] = rd32(0x00199630u + + 0x44u);
    }
L_0019962c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00199634u, cpu->r[5], 0, 0);
    }
L_00199630:;
    {
        cpu->r[2] = rd32(0x00199638u + + 0x40u);
    }
L_00199634:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00199638:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_0019963c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00199640:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00199644:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_00199648:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0019964c:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[3]);
    }
L_00199650:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00199654:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_00199658:;
    {
        cpu->r[14] = 0x0019965cu; fn_000960ec(cpu);
    }
L_0019965c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00199660:;
    {
        wr32(cpu->r[4] + + 0x9a8u, cpu->r[0]);
    }
L_00199664:;
    {
        wr32(cpu->r[4] + + 0x9a4u, cpu->r[3]);
    }
L_00199668:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019966c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00199670u)) return;
    }
}

/* _ZN14GS_OnlineLoginC2Ev @ 0019967c (arm) */
void fn_0019967c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019967c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00199680:;
    {
        cpu->r[5] = rd32(0x00199688u + + 0x4cu);
    }
L_00199684:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00199688:;
    {
        cpu->r[14] = 0x0019968cu; fn_0010ffa8(cpu);
    }
L_0019968c:;
    {
        cpu->r[1] = rd32(0x00199694u + + 0x44u);
    }
L_00199690:;
    {
        cpu->r[5] = add_flags(cpu, 0x00199698u, cpu->r[5], 0, 0);
    }
L_00199694:;
    {
        cpu->r[2] = rd32(0x0019969cu + + 0x40u);
    }
L_00199698:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019969c:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_001996a0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_001996a4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001996a8:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_001996ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001996b0:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[3]);
    }
L_001996b4:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001996b8:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_001996bc:;
    {
        cpu->r[14] = 0x001996c0u; fn_000960ec(cpu);
    }
L_001996c0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001996c4:;
    {
        wr32(cpu->r[4] + + 0x9a8u, cpu->r[0]);
    }
L_001996c8:;
    {
        wr32(cpu->r[4] + + 0x9a4u, cpu->r[3]);
    }
L_001996cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001996d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001996d4u)) return;
    }
}

/* _ZN14GS_OnlineLogin6RenderEv @ 001996e0 (arm) */
void fn_001996e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001996e0:;
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
L_001996e4:;
    {
        cpu->r[6] = rd32(0x001996ecu + + 0x208u);
    }
L_001996e8:;
    {
        cpu->r[3] = rd32(0x001996f0u + + 0x208u);
    }
L_001996ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001996f0:;
    {
        cpu->r[6] = add_flags(cpu, 0x001996f8u, cpu->r[6], 0, 0);
    }
L_001996f4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001996f8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001996fc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00199700:;
    {
        cpu->r[14] = 0x00199704u; fn_0012f780(cpu);
    }
L_00199704:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_00199708:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019970c:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_00199710:;
    {
        cpu->r[14] = 0x00199714u; fn_00113570(cpu);
    }
L_00199714:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00199718:;
    {
        cpu->r[2] = (~0x00000004u);
    }
L_0019971c:;
    {
        wr32(cpu->r[4] + + 0x8e4u, cpu->r[2]);
    }
L_00199720:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00199724:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00199754;
        }
    }
L_00199728:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0019972c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00199730:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00199734:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00199738:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019973c:;
    {
        cpu->r[14] = 0x00199744u;
    }
L_00199740:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00199744u)) return;
    }
L_00199744:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00199748:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0019974c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00199750:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0019972c;
        }
    }
L_00199754:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8d0u);
    }
L_00199758:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019975c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00199770;
        }
    }
L_00199760:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00199764:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00199768:;
    {
        cpu->r[14] = 0x00199770u;
    }
L_0019976c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00199770u)) return;
    }
L_00199770:;
    {
        cpu->r[8] = rd32(0x00199778u + + 0x184u);
    }
L_00199774:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00199778:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019977c:;
    {
        cpu->r[14] = 0x00199784u;
    }
L_00199780:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00199784u)) return;
    }
L_00199784:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00199788:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019978c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00199790:;
    {
        cpu->r[14] = 0x00199798u;
    }
L_00199794:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00199798u)) return;
    }
L_00199798:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_0019979c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001997a0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001997a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00199874;
        }
    }
L_001997a8:;
    {
        cpu->r[5] = rd32(0x001997b0u + + 0x150u);
    }
L_001997ac:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001997b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001997b4:;
    {
        cpu->r[14] = 0x001997b8u; fn_00096a08(cpu);
    }
L_001997b8:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_001997bc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001997c0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001997c4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001997c8:;
    {
        cpu->r[14] = 0x001997ccu; fn_0018aa44(cpu);
    }
L_001997cc:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_001997d0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001997d4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001997d8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001997dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001998b8;
        }
    }
L_001997e0:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_001997e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001997e8:;
    {
        cpu->r[14] = 0x001997ecu; fn_00096a08(cpu);
    }
L_001997ec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001997f0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001997f4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_001997f8:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001997fc:;
    {
        cpu->r[14] = 0x00199800u; fn_0018aa44(cpu);
    }
L_00199800:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00199804:;
    {
        cpu->r[0] = 0x00000430u;
    }
L_00199808:;
    {
        cpu->r[14] = 0x0019980cu; fn_000aeb58(cpu);
    }
L_0019980c:;
    {
        cpu->r[2] = 0x00000096u;
    }
L_00199810:;
    {
        cpu->r[3] = 0x00000032u;
    }
L_00199814:;
    {
        cpu->r[6] = 0x00000010u;
    }
L_00199818:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0019981c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00199820:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00199824:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00199828:;
    {
        cpu->r[14] = 0x0019982cu; fn_000ad19c(cpu);
    }
L_0019982c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00199830:;
    {
        cpu->r[0] = 0x00000431u;
    }
L_00199834:;
    {
        cpu->r[14] = 0x00199838u; fn_000aeb58(cpu);
    }
L_00199838:;
    {
        cpu->r[2] = 0x00000096u;
    }
L_0019983c:;
    {
        cpu->r[3] = 0x0000008cu;
    }
L_00199840:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00199844:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00199848:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019984c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00199850:;
    {
        cpu->r[14] = 0x00199854u; fn_000ad19c(cpu);
    }
L_00199854:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x954u);
    }
L_00199858:;
    {
        cpu->r[14] = 0x0019985cu; fn_001a7ea8(cpu);
    }
L_0019985c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_00199860:;
    {
        cpu->r[14] = 0x00199864u; fn_001a7ea8(cpu);
    }
L_00199864:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00199868:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0019986c:;
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
L_00199870:;
    {
        return fn_001a76fc(cpu);
    }
L_00199874:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00199878:;
    {
        cpu->r[14] = 0x0019987cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019987c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00199880:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001997a8;
        }
    }
L_00199884:;
    {
        cpu->r[5] = rd32(0x0019988cu + + 0x74u);
    }
L_00199888:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_0019988c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00199890:;
    {
        cpu->r[14] = 0x00199894u; fn_0018aa20(cpu);
    }
L_00199894:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00199898:;
    {
        cpu->r[14] = 0x0019989cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019989c:;
    {
        cpu->r[3] = rd32(0x001998a4u + + 0x60u);
    }
L_001998a0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001998a4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001998a8:;
    {
        cpu->r[3] = rd32(0x001998b0u + + 0x58u);
    }
L_001998ac:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001998b0:;
    {
        cpu->r[14] = 0x001998b4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001998b4:;
    {
        goto L_001997ac;
    }
L_001998b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001998bc:;
    {
        cpu->r[14] = 0x001998c0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001998c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001998c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001997e0;
        }
    }
L_001998c8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001998cc:;
    {
        cpu->r[14] = 0x001998d0u; fn_0018aa20(cpu);
    }
L_001998d0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001998d4:;
    {
        cpu->r[14] = 0x001998d8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001998d8:;
    {
        cpu->r[3] = rd32(0x001998e0u + + 0x24u);
    }
L_001998dc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001998e0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001998e4:;
    {
        cpu->r[3] = rd32(0x001998ecu + + 0x1cu);
    }
L_001998e8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001998ec:;
    {
        cpu->r[14] = 0x001998f0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001998f0:;
    {
        goto L_001997e0;
    }
}

/* _ZN14GS_OnlineLogin17ApplyMenuSettingsEv @ 0019990c (arm) */
void fn_0019990c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019990c:;
    {
        cpu->r[3] = rd32(0x00199914u + + 0x22cu);
    }
L_00199910:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00199914:;
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
L_00199918:;
    {
        cpu->r[3] = add_flags(cpu, 0x00199920u, cpu->r[3], 0, 0);
    }
L_0019991c:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[2]);
    }
L_00199920:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00199924:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[2]);
    }
L_00199928:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0019992c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_00199930:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_00199934:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[2]);
    }
L_00199938:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019993c:;
    {
        cpu->r[2] = 0x0000045fu;
    }
L_00199940:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[2]);
    }
L_00199944:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x1cu);
    }
L_00199948:;
    {
        cpu->r[14] = 0x0019994cu; fn_000aeb58(cpu);
    }
L_0019994c:;
    {
        cpu->r[4] = rd32(0x00199954u + + 0x1f0u);
    }
L_00199950:;
    {
        cpu->r[7] = rd32(0x00199958u + + 0x1f0u);
    }
L_00199954:;
    {
        cpu->r[4] = add_flags(cpu, 0x0019995cu, cpu->r[4], 0, 0);
    }
L_00199958:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0019995c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00199960:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00199964:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00199968:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00199a3c;
        }
    }
L_0019996c:;
    {
        cpu->r[6] = rd32(0x00199974u + + 0x1d8u);
    }
L_00199970:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00199974:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00199978:;
    {
        cpu->r[14] = 0x0019997cu; fn_00096a08(cpu);
    }
L_0019997c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00199980:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00199984:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00199988:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019998c:;
    {
        cpu->r[14] = 0x00199990u; fn_0018aa44(cpu);
    }
L_00199990:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00199994:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00199998:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0019999c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001999a0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001999a4:;
    {
        cpu->r[12] = 0x0000270fu;
    }
L_001999a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001999ac:;
    {
        cpu->r[14] = 0x001999b0u; fn_000aa0c0(cpu);
    }
L_001999b0:;
    {
        cpu->r[1] = rd32(0x001999b8u + + 0x198u);
    }
L_001999b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001999b8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8e8u);
    }
L_001999bc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001999c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_001999c4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001999c8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001999cc:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_001999d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_001999d4:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 1u, &shc), cpu->r[1], 1, 0);
    }
L_001999d8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 0);
    }
L_001999dc:;
    {
        wr32(cpu->r[2] + + 0x24u, cpu->r[3]);
    }
L_001999e0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001999e4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001999e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00199b04;
        }
    }
L_001999ec:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001999f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001999f4:;
    {
        cpu->r[1] = 0x00000056u;
    }
L_001999f8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001999fc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00199a00:;
    {
        cpu->r[14] = 0x00199a04u; fn_0018aa58(cpu);
    }
L_00199a04:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00199a08:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00199a0c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00199a10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00199a80;
        }
    }
L_00199a14:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00199a18:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00199a1c:;
    {
        cpu->r[14] = 0x00199a20u; fn_0018b5c8(cpu);
    }
L_00199a20:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x95cu);
    }
L_00199a24:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00199a28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00199ad0;
        }
    }
L_00199a2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00199a30:;
    {
        cpu->r[14] = 0x00199a34u; fn_0019932c(cpu);
    }
L_00199a34:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00199a38:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00199a3cu)) return;
    }
L_00199a3c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00199a40:;
    {
        cpu->r[14] = 0x00199a44u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00199a44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00199a48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019996c;
        }
    }
L_00199a4c:;
    {
        cpu->r[6] = rd32(0x00199a54u + + 0xf8u);
    }
L_00199a50:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00199a54:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00199a58:;
    {
        cpu->r[14] = 0x00199a5cu; fn_0018aa20(cpu);
    }
L_00199a5c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00199a60:;
    {
        cpu->r[14] = 0x00199a64u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00199a64:;
    {
        cpu->r[3] = rd32(0x00199a6cu + + 0xe8u);
    }
L_00199a68:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00199a6c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00199a70:;
    {
        cpu->r[3] = rd32(0x00199a78u + + 0xe0u);
    }
L_00199a74:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00199a78:;
    {
        cpu->r[14] = 0x00199a7cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00199a7c:;
    {
        goto L_00199970;
    }
L_00199a80:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00199a84:;
    {
        cpu->r[14] = 0x00199a88u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00199a88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00199a8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00199a14;
        }
    }
L_00199a90:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00199a94:;
    {
        cpu->r[14] = 0x00199a98u; fn_0018aa20(cpu);
    }
L_00199a98:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00199a9c:;
    {
        cpu->r[14] = 0x00199aa0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00199aa0:;
    {
        cpu->r[3] = rd32(0x00199aa8u + + 0xacu);
    }
L_00199aa4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00199aa8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00199aac:;
    {
        cpu->r[3] = rd32(0x00199ab4u + + 0xa4u);
    }
L_00199ab0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00199ab4:;
    {
        cpu->r[14] = 0x00199ab8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00199ab8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00199abc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00199ac0:;
    {
        cpu->r[14] = 0x00199ac4u; fn_0018b5c8(cpu);
    }
L_00199ac4:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x95cu);
    }
L_00199ac8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00199acc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00199a2c;
        }
    }
L_00199ad0:;
    {
        cpu->r[0] = 0x00001164u;
    }
L_00199ad4:;
    {
        cpu->r[14] = 0x00199ad8u; fn_0018ba6c(cpu);
    }
L_00199ad8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00199adc:;
    {
        cpu->r[14] = 0x00199ae0u; fn_001a721c(cpu);
    }
L_00199ae0:;
    {
        wr32(cpu->r[5] + + 0x95cu, cpu->r[6]);
    }
L_00199ae4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00199ae8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00199aec:;
    {
        cpu->r[2] = 0x000000c8u;
    }
L_00199af0:;
    {
        cpu->r[3] = 0x00000356u;
    }
L_00199af4:;
    {
        cpu->r[12] = 0x00000118u;
    }
L_00199af8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00199afc:;
    {
        cpu->r[14] = 0x00199b00u; fn_001a794c(cpu);
    }
L_00199b00:;
    {
        goto L_00199a2c;
    }
L_00199b04:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00199b08:;
    {
        cpu->r[14] = 0x00199b0cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00199b0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00199b10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001999ec;
        }
    }
L_00199b14:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00199b18:;
    {
        cpu->r[14] = 0x00199b1cu; fn_0018aa20(cpu);
    }
L_00199b1c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00199b20:;
    {
        cpu->r[14] = 0x00199b24u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00199b24:;
    {
        cpu->r[3] = rd32(0x00199b2cu + + 0x28u);
    }
L_00199b28:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00199b2c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00199b30:;
    {
        cpu->r[3] = rd32(0x00199b38u + + 0x20u);
    }
L_00199b34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00199b38:;
    {
        cpu->r[14] = 0x00199b3cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00199b3c:;
    {
        goto L_001999ec;
    }
}

/* _ZN13GS_OnlineMenu8isKindOfEi @ 00199b5c (arm) */
void fn_00199b5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00199b5c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000043u, 1, 1);
    }
L_00199b60:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00199b64:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00199b68:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GS_OnlineMenu17ApplyMenuSettingsEv @ 00199b6c (arm) */
void fn_00199b6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00199b6c:;
    {
        cpu->r[3] = rd32(0x00199b74u + + 0x38u);
    }
L_00199b70:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00199b74:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[2]);
    }
L_00199b78:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00199b7c:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[2]);
    }
L_00199b80:;
    {
        cpu->r[3] = add_flags(cpu, 0x00199b88u, cpu->r[3], 0, 0);
    }
L_00199b84:;
    {
        cpu->r[2] = rd32(0x00199b8cu + + 0x24u);
    }
L_00199b88:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00199b8c:;
    {
        cpu->r[2] = 0x0000040du;
    }
L_00199b90:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[2]);
    }
L_00199b94:;
    {
        cpu->r[2] = 0x00000412u;
    }
L_00199b98:;
    {
        wr32(cpu->r[0] + + 0x954u, cpu->r[2]);
    }
L_00199b9c:;
    {
        cpu->r[2] = 0x00000413u;
    }
L_00199ba0:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[3]);
    }
L_00199ba4:;
    {
        wr32(cpu->r[0] + + 0x958u, cpu->r[2]);
    }
L_00199ba8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_55 @ 00199bb4 (arm) */
void fn_00199bb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00199bb4:;
    {
        cpu->r[3] = rd32(0x00199bbcu + + 0x20u);
    }
L_00199bb8:;
    {
        cpu->r[1] = rd32(0x00199bc0u + + 0x20u);
    }
L_00199bbc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00199bc4u, cpu->r[3], 0, 0);
    }
L_00199bc0:;
    {
        cpu->r[2] = rd32(0x00199bc8u + + 0x1cu);
    }
L_00199bc4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00199bc8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00199bd0u, cpu->r[2], 0, 0);
    }
L_00199bcc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00199bd0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_00199bd4:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00199bd8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GS_OnlineMenu6ResumeEv @ 00199be8 (arm) */
void fn_00199be8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00199be8:;
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
L_00199bec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00199bf0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_00199bf4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00199bf8:;
    {
        cpu->r[14] = 0x00199bfcu; fn_001142a0(cpu);
    }
L_00199bfc:;
    {
        cpu->r[7] = rd32(0x00199c04u + + 0xccu);
    }
L_00199c00:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00199c04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00199c08:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_00199c0c:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00199c10:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00199c14:;
    {
        cpu->r[7] = add_flags(cpu, 0x00199c1cu, cpu->r[7], 0, 0);
    }
L_00199c18:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00199c1c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_00199c20:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_00199c24:;
    {
        cpu->r[14] = 0x00199c28u; fn_000a8a2c(cpu);
    }
L_00199c28:;
    {
        cpu->r[3] = rd32(0x00199c30u + + 0xa4u);
    }
L_00199c2c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x18u);
    }
L_00199c30:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00199c34:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00199c38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00199c3c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00199c40:;
    {
        cpu->r[9] = rd32(cpu->r[2]);
    }
L_00199c44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00199c48:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00199c4c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 0);
    }
L_00199c50:;
    {
        cpu->r[2] = rd32(0x00199c58u + + 0x80u);
    }
L_00199c54:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 0);
    }
L_00199c58:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_00199c5c:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 1u, &shc); cpu->r[9] = v;
    }
L_00199c60:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00199c64:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00199cc8;
        }
    }
L_00199c68:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 0);
    }
L_00199c6c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000028u, 0, 0);
    }
L_00199c70:;
    {
        cpu->r[1] = (~0x00000009u);
    }
L_00199c74:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 0);
    }
L_00199c78:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], 0x0000000au, 0, 0);
    }
L_00199c7c:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_00199c80:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_00199c84:;
    {
        uint32_t v = cpu->r[8] * cpu->r[6] + cpu->r[3]; cpu->r[6] = v;
    }
L_00199c88:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 1u, &shc); cpu->r[6] = v;
    }
L_00199c8c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00199c90:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00199c94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00199c98:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00199c9c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00199ca0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[11], 0, 0);
    }
L_00199ca4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[5]);
    }
L_00199ca8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_00199cac:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_00199cb0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_00199cb4:;
    {
        cpu->r[14] = 0x00199cb8u; fn_000ec75c(cpu);
    }
L_00199cb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00199cbc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00199cc0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_00199cc4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00199c8c;
        }
    }
L_00199cc8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00199ccc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00199cd0u)) return;
    }
}

/* _ZN13GS_OnlineMenu6RenderEv @ 00199cdc (arm) */
void fn_00199cdc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00199cdc:;
    {
        cpu->r[3] = rd32(0x00199ce4u + + 0xa4u);
    }
L_00199ce0:;
    {
        cpu->r[2] = rd32(0x00199ce8u + + 0xa4u);
    }
L_00199ce4:;
    {
        cpu->r[3] = add_flags(cpu, 0x00199cecu, cpu->r[3], 0, 0);
    }
L_00199ce8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00199cec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00199cf0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00199cf4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00199cf8:;
    {
        cpu->r[14] = 0x00199cfcu; fn_0012f780(cpu);
    }
L_00199cfc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00199d00:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_00199d04:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_00199d08:;
    {
        cpu->r[14] = 0x00199d0cu; fn_00113570(cpu);
    }
L_00199d0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00199d10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00199d14:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00199d44;
        }
    }
L_00199d18:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00199d1c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00199d20:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00199d24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00199d28:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00199d2c:;
    {
        cpu->r[14] = 0x00199d34u;
    }
L_00199d30:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00199d34u)) return;
    }
L_00199d34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00199d38:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00199d3c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00199d40:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00199d1c;
        }
    }
L_00199d44:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8d0u);
    }
L_00199d48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00199d4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00199d60;
        }
    }
L_00199d50:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00199d54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00199d58:;
    {
        cpu->r[14] = 0x00199d60u;
    }
L_00199d5c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00199d60u)) return;
    }
L_00199d60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00199d64:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00199d68:;
    {
        cpu->r[14] = 0x00199d70u;
    }
L_00199d6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00199d70u)) return;
    }
L_00199d70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00199d74:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00199d78:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00199d7c:;
    {
        cpu->r[14] = 0x00199d84u;
    }
L_00199d80:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00199d84u)) return;
    }
L_00199d84:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00199d88u)) return;
    }
}

/* _ZN13GS_OnlineMenu6UpdateEv @ 00199d90 (arm) */
void fn_00199d90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00199d90:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00199d94:;
    {
        cpu->r[4] = rd32(0x00199d9cu + + 0x31cu);
    }
L_00199d98:;
    {
        cpu->r[6] = rd32(0x00199da0u + + 0x31cu);
    }
L_00199d9c:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_00199da0:;
    {
        cpu->r[4] = add_flags(cpu, 0x00199da8u, cpu->r[4], 0, 0);
    }
L_00199da4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00199da8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00199dac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00199db0:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00199db4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00199db8:;
    {
        cpu->r[2] = 0x00004050u;
    }
L_00199dbc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00199dc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00199e24;
        }
    }
L_00199dc4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000029u, 1, 1);
    }
L_00199dc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00199e24;
        }
    }
L_00199dcc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 1);
    }
L_00199dd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00199e24;
        }
    }
L_00199dd4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_00199dd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00199e24;
        }
    }
L_00199ddc:;
    {
        add_flags(cpu, cpu->r[3], 0x00000002u, 0, 1);
    }
L_00199de0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00199e24;
        }
    }
L_00199de4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x95cu);
    }
L_00199de8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00199dec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00199f4c;
        }
    }
L_00199df0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x94u);
    }
L_00199df4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00199df8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00199f34;
        }
    }
L_00199dfc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00199e00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00199ea4;
        }
    }
L_00199e04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00199e08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00199e0cu)) return;
        }
    }
L_00199e0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00199e10:;
    {
        cpu->r[14] = 0x00199e14u; fn_00114a58(cpu);
    }
L_00199e14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00199e18:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00199e1c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
        }
    }
L_00199e20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00199e24u)) return;
    }
L_00199e24:;
    {
        cpu->r[8] = rd8(cpu->r[5] + + 0x960u);
    }
L_00199e28:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00199e2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00199de4;
        }
    }
L_00199e30:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00199e34:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_00199e38:;
    {
        wr8(cpu->r[5] + + 0x960u, cpu->r[3]);
    }
L_00199e3c:;
    {
        cpu->r[14] = 0x00199e40u; fn_0018ba6c(cpu);
    }
L_00199e40:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00199e44:;
    {
        cpu->r[14] = 0x00199e48u; fn_000a7570(cpu);
    }
L_00199e48:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00199e4c:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_00199e50:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00199e54:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00199e58:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00199e5c:;
    {
        cpu->r[3] = 0x00004050u;
    }
L_00199e60:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00199e64:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[8];
        }
    }
L_00199e68:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[8];
        }
    }
L_00199e6c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x0000047fu;
        }
    }
L_00199e70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x0000047eu;
        }
    }
L_00199e74:;
    {
        cpu->r[14] = 0x00199e78u; fn_000aeb58(cpu);
    }
L_00199e78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000950u, 0, 0);
    }
L_00199e7c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00199e80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00199e84:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00199e88:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00199e8c:;
    {
        cpu->r[14] = 0x00199e90u; fn_000a7bb0(cpu);
    }
L_00199e90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00199e94:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00199e98:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00199e9c:;
    {
        cpu->r[14] = 0x00199ea0u; fn_000f361c(cpu);
    }
L_00199ea0:;
    {
        goto L_00199de4;
    }
L_00199ea4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00199ea8:;
    {
        cpu->r[14] = 0x00199eacu; fn_0010da28(cpu);
    }
L_00199eac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00199eb0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00199eb4u)) return;
        }
    }
L_00199eb4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xc4u);
    }
L_00199eb8:;
    {
        cpu->r[2] = 0x00000464u;
    }
L_00199ebc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00199ec0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00199ffc;
        }
    }
L_00199ec4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00199fa8;
        }
    }
L_00199ec8:;
    {
        cpu->r[2] = 0x00000465u;
    }
L_00199ecc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00199ed0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a094;
        }
    }
L_00199ed4:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_00199ed8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00199edc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00199ee0u)) return;
        }
    }
L_00199ee0:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_00199ee4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00199ee8:;
    {
        cpu->r[14] = 0x00199eecu; fn_001933d4(cpu);
    }
L_00199eec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_00199ef0:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_00199ef4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00199ef8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00199efc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00199f00:;
    {
        cpu->r[14] = 0x00199f08u;
    }
L_00199f04:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00199f08u)) return;
    }
L_00199f08:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00199f0c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00199f10:;
    {
        cpu->r[14] = 0x00199f14u; fn_000f34e8(cpu);
    }
L_00199f14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00199f18:;
    {
        cpu->r[1] = 0x00005f98u;
    }
L_00199f1c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00199f20:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00199f24:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_00199f28:;
    {
        cpu->r[1] = 0x00006780u;
    }
L_00199f2c:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_00199f30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00199f34u)) return;
    }
L_00199f34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00199f38:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_00199f3c:;
    {
        cpu->r[14] = 0x00199f40u; fn_000eb59c(cpu);
    }
L_00199f40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00199f44:;
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
L_00199f48:;
    {
        return fn_00128a5c(cpu);
    }
L_00199f4c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00199f50:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00199f54:;
    {
        cpu->r[14] = 0x00199f58u; fn_000f34e8(cpu);
    }
L_00199f58:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_00199f5c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00199f60:;
    {
        cpu->r[14] = 0x00199f64u; fn_001933d4(cpu);
    }
L_00199f64:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_00199f68:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_00199f6c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00199f70:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00199f74:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00199f78:;
    {
        cpu->r[14] = 0x00199f80u;
    }
L_00199f7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00199f80u)) return;
    }
L_00199f80:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00199f84:;
    {
        cpu->r[1] = 0x0000e224u;
    }
L_00199f88:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00199f8c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_00199f90:;
    {
        cpu->r[0] = 0x00006780u;
    }
L_00199f94:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_00199f98:;
    {
        cpu->r[1] = 0x00005f98u;
    }
L_00199f9c:;
    {
        wr8(cpu->r[3] + cpu->r[0], cpu->r[2]);
    }
L_00199fa0:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_00199fa4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00199fa8u)) return;
    }
L_00199fa8:;
    {
        cpu->r[2] = 0x00000455u;
    }
L_00199fac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00199fb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a02c;
        }
    }
L_00199fb4:;
    {
        cpu->r[2] = 0x00000462u;
    }
L_00199fb8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00199fbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00199fc0u)) return;
        }
    }
L_00199fc0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xcu);
    }
L_00199fc4:;
    {
        cpu->r[3] = 0x00005f58u;
    }
L_00199fc8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00199fcc:;
    {
        cpu->r[0] = 0x00000964u;
    }
L_00199fd0:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00199fd4:;
    {
        cpu->r[3] = 0x00005f5cu;
    }
L_00199fd8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00199fdc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00199fe0:;
    {
        cpu->r[14] = 0x00199fe4u; fn_0018ba6c(cpu);
    }
L_00199fe4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00199fe8:;
    {
        cpu->r[14] = 0x00199fecu; fn_0019ac34(cpu);
    }
L_00199fec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00199ff0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00199ff4:;
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
L_00199ff8:;
    {
        return fn_000f361c(cpu);
    }
L_00199ffc:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xcu);
    }
L_0019a000:;
    {
        cpu->r[3] = 0x00005f58u;
    }
L_0019a004:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019a008:;
    {
        cpu->r[0] = 0x00000968u;
    }
L_0019a00c:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0019a010:;
    {
        cpu->r[14] = 0x0019a014u; fn_0018ba6c(cpu);
    }
L_0019a014:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0019a018:;
    {
        cpu->r[14] = 0x0019a01cu; fn_001a0d50(cpu);
    }
L_0019a01c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019a020:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0019a024:;
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
L_0019a028:;
    {
        return fn_000f361c(cpu);
    }
L_0019a02c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0019a030:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_0019a034:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_0019a038:;
    {
        cpu->r[0] = 0x0000096cu;
    }
L_0019a03c:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_0019a040:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019a044:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0019a048:;
    {
        cpu->r[2] = 0x00001c50u;
    }
L_0019a04c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0019a050:;
    {
        cpu->r[2] = 0x00005f5cu;
    }
L_0019a054:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0019a058:;
    {
        cpu->r[2] = 0x00001c88u;
    }
L_0019a05c:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[14]);
    }
L_0019a060:;
    {
        cpu->r[2] = 0x00001c84u;
    }
L_0019a064:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[12]);
    }
L_0019a068:;
    {
        cpu->r[2] = 0x00001c8cu;
    }
L_0019a06c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_0019a070:;
    {
        cpu->r[2] = 0x00005f58u;
    }
L_0019a074:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0019a078:;
    {
        cpu->r[14] = 0x0019a07cu; fn_0018ba6c(cpu);
    }
L_0019a07c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0019a080:;
    {
        cpu->r[14] = 0x0019a084u; fn_0019d45c(cpu);
    }
L_0019a084:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019a088:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0019a08c:;
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
L_0019a090:;
    {
        return fn_000f361c(cpu);
    }
L_0019a094:;
    {
        cpu->r[0] = 0x00000968u;
    }
L_0019a098:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0xcu);
    }
L_0019a09c:;
    {
        cpu->r[14] = 0x0019a0a0u; fn_0018ba6c(cpu);
    }
L_0019a0a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019a0a4:;
    {
        cpu->r[14] = 0x0019a0a8u; fn_001a0d50(cpu);
    }
L_0019a0a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019a0ac:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0019a0b0:;
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
L_0019a0b4:;
    {
        return fn_000f361c(cpu);
    }
}

/* _ZN13GS_OnlineMenu11DoBarActionEii @ 0019a0c0 (arm) */
void fn_0019a0c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019a0c0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019a0c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019a0c8:;
    {
        cpu->r[0] = rd32(0x0019a0d0u + + 0x78u);
    }
L_0019a0cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0019a0d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_0019a0d4:;
    {
        cpu->r[0] = add_flags(cpu, 0x0019a0dcu, cpu->r[0], 0, 0);
    }
L_0019a0d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0019a0dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a140;
        }
    }
L_0019a0e0:;
    {
        cpu->r[14] = rd32(0x0019a0e8u + + 0x64u);
    }
L_0019a0e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0019a0e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8ecu);
    }
L_0019a0ec:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0019a0f0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0019a0f4:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[1]);
    }
L_0019a0f8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_0019a0fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0019a100:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0019a104:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_0019a108:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0019a10c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019a110:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0019a114:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0019a118:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000094u;
        }
    }
L_0019a11c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_0019a120:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0019a124:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0019a128:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019a12c:;
    {
        cpu->r[14] = 0x0019a130u; fn_000fd248(cpu);
    }
L_0019a130:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019a134:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0019a138:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0019a13c:;
    {
        return fn_0010df70(cpu);
    }
L_0019a140:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0019a144:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019a148u)) return;
    }
}

/* _ZN13GS_OnlineMenu8DoActionEii @ 0019a150 (arm) */
void fn_0019a150(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019a150:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0019a154:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0019a158:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019a15c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019a160:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0019a164:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019a168u)) return;
        }
    }
L_0019a168:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0019a16c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0019a170:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0019a1b0;
        }
    }
L_0019a174:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_0019a178:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_0019a17c:;
    {
        cpu->r[14] = 0x0019a180u; fn_00093f34(cpu);
    }
L_0019a180:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8ecu);
    }
L_0019a184:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
    }
L_0019a188:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0019a18c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0019a190:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0019a194:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0019a198:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[2]);
    }
L_0019a19c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0019a1a0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0019a1a4:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_0019a1a8:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0019a1ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019a1b0u)) return;
    }
L_0019a1b0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0019a1b4:;
    {
        cpu->r[14] = 0x0019a1bcu;
    }
L_0019a1b8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019a1bcu)) return;
    }
L_0019a1bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019a1c0u)) return;
    }
}

/* _ZN13GS_OnlineMenuD1Ev @ 0019a1c0 (arm) */
void fn_0019a1c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019a1c0:;
    {
        cpu->r[3] = rd32(0x0019a1c8u + + 0x24u);
    }
L_0019a1c4:;
    {
        cpu->r[2] = rd32(0x0019a1ccu + + 0x24u);
    }
L_0019a1c8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019a1d0u, cpu->r[3], 0, 0);
    }
L_0019a1cc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019a1d0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019a1d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019a1d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0019a1dc:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0019a1e0:;
    {
        cpu->r[14] = 0x0019a1e4u; fn_000ec21c(cpu);
    }
L_0019a1e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019a1e8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019a1ecu)) return;
    }
}

/* _ZN13GS_OnlineMenuD0Ev @ 0019a1f4 (arm) */
void fn_0019a1f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019a1f4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019a1f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019a1fc:;
    {
        cpu->r[14] = 0x0019a200u; fn_0019a1c0(cpu);
    }
L_0019a200:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019a204:;
    {
        cpu->r[14] = 0x0019a208u; fn_0018ba20(cpu);
    }
L_0019a208:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019a20c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019a210u)) return;
    }
}

/* _ZN13GS_OnlineMenuD2Ev @ 0019a210 (arm) */
void fn_0019a210(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019a210:;
    {
        cpu->r[3] = rd32(0x0019a218u + + 0x24u);
    }
L_0019a214:;
    {
        cpu->r[2] = rd32(0x0019a21cu + + 0x24u);
    }
L_0019a218:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019a220u, cpu->r[3], 0, 0);
    }
L_0019a21c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019a220:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019a224:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019a228:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0019a22c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0019a230:;
    {
        cpu->r[14] = 0x0019a234u; fn_000ec21c(cpu);
    }
L_0019a234:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019a238:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019a23cu)) return;
    }
}

/* _ZN13GS_OnlineMenuC1Ev @ 0019a244 (arm) */
void fn_0019a244(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019a244:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0019a248:;
    {
        cpu->r[4] = rd32(0x0019a250u + + 0xc4u);
    }
L_0019a24c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0019a250:;
    {
        cpu->r[14] = 0x0019a254u; fn_0010ffa8(cpu);
    }
L_0019a254:;
    {
        cpu->r[2] = rd32(0x0019a25cu + + 0xbcu);
    }
L_0019a258:;
    {
        cpu->r[4] = add_flags(cpu, 0x0019a260u, cpu->r[4], 0, 0);
    }
L_0019a25c:;
    {
        cpu->r[3] = rd32(0x0019a264u + + 0xb8u);
    }
L_0019a260:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0019a264:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0019a268:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0019a26c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0019a270:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0019a274:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019a278:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a2d0;
        }
    }
L_0019a27c:;
    {
        cpu->r[6] = rd32(0x0019a284u + + 0x9cu);
    }
L_0019a280:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0019a284:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0019a288:;
    {
        cpu->r[14] = 0x0019a28cu; fn_00096a08(cpu);
    }
L_0019a28c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019a290:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019a294:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0019a298:;
    {
        cpu->r[14] = 0x0019a29cu; fn_0018aa44(cpu);
    }
L_0019a29c:;
    {
        cpu->r[2] = rd32(0x0019a2a4u + + 0x80u);
    }
L_0019a2a0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0019a2a4:;
    {
        wr8(cpu->r[5] + + 0x8fcu, cpu->r[1]);
    }
L_0019a2a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019a2ac:;
    {
        wr8(cpu->r[5] + + 0x960u, cpu->r[3]);
    }
L_0019a2b0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0019a2b4:;
    {
        wr32(cpu->r[5] + + 0x95cu, cpu->r[3]);
    }
L_0019a2b8:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0019a2bc:;
    {
        cpu->r[2] = 0x00006785u;
    }
L_0019a2c0:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[3]);
    }
L_0019a2c4:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[0]);
    }
L_0019a2c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019a2cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019a2d0u)) return;
    }
L_0019a2d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019a2d4:;
    {
        cpu->r[14] = 0x0019a2d8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019a2d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019a2dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a27c;
        }
    }
L_0019a2e0:;
    {
        cpu->r[6] = rd32(0x0019a2e8u + + 0x38u);
    }
L_0019a2e4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0019a2e8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019a2ec:;
    {
        cpu->r[14] = 0x0019a2f0u; fn_0018aa20(cpu);
    }
L_0019a2f0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019a2f4:;
    {
        cpu->r[14] = 0x0019a2f8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019a2f8:;
    {
        cpu->r[3] = rd32(0x0019a300u + + 0x28u);
    }
L_0019a2fc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019a300:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0019a304:;
    {
        cpu->r[3] = rd32(0x0019a30cu + + 0x20u);
    }
L_0019a308:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0019a30c:;
    {
        cpu->r[14] = 0x0019a310u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019a310:;
    {
        goto L_0019a280;
    }
}

/* _ZN13GS_OnlineMenuC2Ev @ 0019a330 (arm) */
void fn_0019a330(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019a330:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0019a334:;
    {
        cpu->r[4] = rd32(0x0019a33cu + + 0xc4u);
    }
L_0019a338:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0019a33c:;
    {
        cpu->r[14] = 0x0019a340u; fn_0010ffa8(cpu);
    }
L_0019a340:;
    {
        cpu->r[2] = rd32(0x0019a348u + + 0xbcu);
    }
L_0019a344:;
    {
        cpu->r[4] = add_flags(cpu, 0x0019a34cu, cpu->r[4], 0, 0);
    }
L_0019a348:;
    {
        cpu->r[3] = rd32(0x0019a350u + + 0xb8u);
    }
L_0019a34c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0019a350:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0019a354:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0019a358:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0019a35c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0019a360:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019a364:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a3bc;
        }
    }
L_0019a368:;
    {
        cpu->r[6] = rd32(0x0019a370u + + 0x9cu);
    }
L_0019a36c:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0019a370:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0019a374:;
    {
        cpu->r[14] = 0x0019a378u; fn_00096a08(cpu);
    }
L_0019a378:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019a37c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019a380:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0019a384:;
    {
        cpu->r[14] = 0x0019a388u; fn_0018aa44(cpu);
    }
L_0019a388:;
    {
        cpu->r[2] = rd32(0x0019a390u + + 0x80u);
    }
L_0019a38c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0019a390:;
    {
        wr8(cpu->r[5] + + 0x8fcu, cpu->r[1]);
    }
L_0019a394:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019a398:;
    {
        wr8(cpu->r[5] + + 0x960u, cpu->r[3]);
    }
L_0019a39c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0019a3a0:;
    {
        wr32(cpu->r[5] + + 0x95cu, cpu->r[3]);
    }
L_0019a3a4:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0019a3a8:;
    {
        cpu->r[2] = 0x00006785u;
    }
L_0019a3ac:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[3]);
    }
L_0019a3b0:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[0]);
    }
L_0019a3b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019a3b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019a3bcu)) return;
    }
L_0019a3bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019a3c0:;
    {
        cpu->r[14] = 0x0019a3c4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019a3c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019a3c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a368;
        }
    }
L_0019a3cc:;
    {
        cpu->r[6] = rd32(0x0019a3d4u + + 0x38u);
    }
L_0019a3d0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0019a3d4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019a3d8:;
    {
        cpu->r[14] = 0x0019a3dcu; fn_0018aa20(cpu);
    }
L_0019a3dc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019a3e0:;
    {
        cpu->r[14] = 0x0019a3e4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019a3e4:;
    {
        cpu->r[3] = rd32(0x0019a3ecu + + 0x28u);
    }
L_0019a3e8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019a3ec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0019a3f0:;
    {
        cpu->r[3] = rd32(0x0019a3f8u + + 0x20u);
    }
L_0019a3f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0019a3f8:;
    {
        cpu->r[14] = 0x0019a3fcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019a3fc:;
    {
        goto L_0019a36c;
    }
}

/* _ZN18GS_OnlineQuickRace8isKindOfEi @ 0019a41c (arm) */
void fn_0019a41c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019a41c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000041u, 1, 1);
    }
L_0019a420:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0019a424:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0019a428:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18GS_OnlineQuickRace17ApplyMenuSettingsEv @ 0019a42c (arm) */
void fn_0019a42c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019a42c:;
    {
        cpu->r[3] = rd32(0x0019a434u + + 0x38u);
    }
L_0019a430:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0019a434:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[2]);
    }
L_0019a438:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_0019a43c:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[2]);
    }
L_0019a440:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019a448u, cpu->r[3], 0, 0);
    }
L_0019a444:;
    {
        cpu->r[2] = rd32(0x0019a44cu + + 0x24u);
    }
L_0019a448:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019a44c:;
    {
        cpu->r[2] = 0x00000462u;
    }
L_0019a450:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[2]);
    }
L_0019a454:;
    {
        cpu->r[2] = 0x00000412u;
    }
L_0019a458:;
    {
        wr32(cpu->r[0] + + 0x954u, cpu->r[2]);
    }
L_0019a45c:;
    {
        cpu->r[2] = 0x00000413u;
    }
L_0019a460:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[3]);
    }
L_0019a464:;
    {
        wr32(cpu->r[0] + + 0x958u, cpu->r[2]);
    }
L_0019a468:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_56 @ 0019a474 (arm) */
void fn_0019a474(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019a474:;
    {
        cpu->r[3] = rd32(0x0019a47cu + + 0x20u);
    }
L_0019a478:;
    {
        cpu->r[1] = rd32(0x0019a480u + + 0x20u);
    }
L_0019a47c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019a484u, cpu->r[3], 0, 0);
    }
L_0019a480:;
    {
        cpu->r[2] = rd32(0x0019a488u + + 0x1cu);
    }
L_0019a484:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0019a488:;
    {
        cpu->r[2] = add_flags(cpu, 0x0019a490u, cpu->r[2], 0, 0);
    }
L_0019a48c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019a490:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_0019a494:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_0019a498:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18GS_OnlineQuickRaceD1Ev @ 0019a4a8 (arm) */
void fn_0019a4a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019a4a8:;
    {
        cpu->r[3] = rd32(0x0019a4b0u + + 0x24u);
    }
L_0019a4ac:;
    {
        cpu->r[2] = rd32(0x0019a4b4u + + 0x24u);
    }
L_0019a4b0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019a4b8u, cpu->r[3], 0, 0);
    }
L_0019a4b4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019a4b8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019a4bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019a4c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0019a4c4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0019a4c8:;
    {
        cpu->r[14] = 0x0019a4ccu; fn_000ec21c(cpu);
    }
L_0019a4cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019a4d0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019a4d4u)) return;
    }
}

/* _ZN18GS_OnlineQuickRace6ResumeEv @ 0019a4dc (arm) */
void fn_0019a4dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019a4dc:;
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
L_0019a4e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019a4e4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_0019a4e8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0019a4ec:;
    {
        cpu->r[14] = 0x0019a4f0u; fn_001142a0(cpu);
    }
L_0019a4f0:;
    {
        cpu->r[7] = rd32(0x0019a4f8u + + 0xccu);
    }
L_0019a4f4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_0019a4f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0019a4fc:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_0019a500:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0019a504:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0019a508:;
    {
        cpu->r[7] = add_flags(cpu, 0x0019a510u, cpu->r[7], 0, 0);
    }
L_0019a50c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0019a510:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_0019a514:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_0019a518:;
    {
        cpu->r[14] = 0x0019a51cu; fn_000a8a2c(cpu);
    }
L_0019a51c:;
    {
        cpu->r[3] = rd32(0x0019a524u + + 0xa4u);
    }
L_0019a520:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x18u);
    }
L_0019a524:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019a528:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0019a52c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0019a530:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0019a534:;
    {
        cpu->r[9] = rd32(cpu->r[2]);
    }
L_0019a538:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019a53c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0019a540:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 0);
    }
L_0019a544:;
    {
        cpu->r[2] = rd32(0x0019a54cu + + 0x80u);
    }
L_0019a548:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 0);
    }
L_0019a54c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_0019a550:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 1u, &shc); cpu->r[9] = v;
    }
L_0019a554:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019a558:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019a5bc;
        }
    }
L_0019a55c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 0);
    }
L_0019a560:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000028u, 0, 0);
    }
L_0019a564:;
    {
        cpu->r[1] = (~0x00000009u);
    }
L_0019a568:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 0);
    }
L_0019a56c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], 0x0000000au, 0, 0);
    }
L_0019a570:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_0019a574:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_0019a578:;
    {
        uint32_t v = cpu->r[8] * cpu->r[6] + cpu->r[3]; cpu->r[6] = v;
    }
L_0019a57c:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 1u, &shc); cpu->r[6] = v;
    }
L_0019a580:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0019a584:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0019a588:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019a58c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0019a590:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0019a594:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[11], 0, 0);
    }
L_0019a598:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[5]);
    }
L_0019a59c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_0019a5a0:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_0019a5a4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_0019a5a8:;
    {
        cpu->r[14] = 0x0019a5acu; fn_000ec75c(cpu);
    }
L_0019a5ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0019a5b0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0019a5b4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0019a5b8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0019a580;
        }
    }
L_0019a5bc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0019a5c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019a5c4u)) return;
    }
}

/* _ZN18GS_OnlineQuickRace6RenderEv @ 0019a5d0 (arm) */
void fn_0019a5d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019a5d0:;
    {
        cpu->r[3] = rd32(0x0019a5d8u + + 0xa4u);
    }
L_0019a5d4:;
    {
        cpu->r[2] = rd32(0x0019a5dcu + + 0xa4u);
    }
L_0019a5d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019a5e0u, cpu->r[3], 0, 0);
    }
L_0019a5dc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0019a5e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019a5e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019a5e8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0019a5ec:;
    {
        cpu->r[14] = 0x0019a5f0u; fn_0012f780(cpu);
    }
L_0019a5f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019a5f4:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_0019a5f8:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_0019a5fc:;
    {
        cpu->r[14] = 0x0019a600u; fn_00113570(cpu);
    }
L_0019a600:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0019a604:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019a608:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019a638;
        }
    }
L_0019a60c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0019a610:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0019a614:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019a618:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019a61c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019a620:;
    {
        cpu->r[14] = 0x0019a628u;
    }
L_0019a624:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019a628u)) return;
    }
L_0019a628:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0019a62c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0019a630:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0019a634:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0019a610;
        }
    }
L_0019a638:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8d0u);
    }
L_0019a63c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019a640:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a654;
        }
    }
L_0019a644:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019a648:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019a64c:;
    {
        cpu->r[14] = 0x0019a654u;
    }
L_0019a650:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019a654u)) return;
    }
L_0019a654:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019a658:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019a65c:;
    {
        cpu->r[14] = 0x0019a664u;
    }
L_0019a660:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019a664u)) return;
    }
L_0019a664:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019a668:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019a66c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019a670:;
    {
        cpu->r[14] = 0x0019a678u;
    }
L_0019a674:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019a678u)) return;
    }
L_0019a678:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019a67cu)) return;
    }
}

/* _ZN18GS_OnlineQuickRace6UpdateEv @ 0019a684 (arm) */
void fn_0019a684(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019a684:;
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
L_0019a688:;
    {
        cpu->r[4] = rd32(0x0019a690u + + 0x3acu);
    }
L_0019a68c:;
    {
        cpu->r[6] = rd32(0x0019a694u + + 0x3acu);
    }
L_0019a690:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_0019a694:;
    {
        cpu->r[4] = add_flags(cpu, 0x0019a69cu, cpu->r[4], 0, 0);
    }
L_0019a698:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019a69c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0019a6a0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0019a6a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0019a6a8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019a6ac:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019a6b0:;
    {
        cpu->r[2] = 0x00004050u;
    }
L_0019a6b4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019a6b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a720;
        }
    }
L_0019a6bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000029u, 1, 1);
    }
L_0019a6c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a720;
        }
    }
L_0019a6c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 1);
    }
L_0019a6c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a720;
        }
    }
L_0019a6cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_0019a6d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a720;
        }
    }
L_0019a6d4:;
    {
        add_flags(cpu, cpu->r[3], 0x00000002u, 0, 1);
    }
L_0019a6d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a720;
        }
    }
L_0019a6dc:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x95cu);
    }
L_0019a6e0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_0019a6e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a85c;
        }
    }
L_0019a6e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x94u);
    }
L_0019a6ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019a6f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a840;
        }
    }
L_0019a6f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0019a6f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a7a0;
        }
    }
L_0019a6fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019a700:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019a718;
        }
    }
L_0019a704:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019a708:;
    {
        cpu->r[14] = 0x0019a70cu; fn_00114a58(cpu);
    }
L_0019a70c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019a710:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0019a714:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
        }
    }
L_0019a718:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0019a71c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019a720u)) return;
    }
L_0019a720:;
    {
        cpu->r[8] = rd8(cpu->r[5] + + 0x960u);
    }
L_0019a724:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0019a728:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019a6dc;
        }
    }
L_0019a72c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0019a730:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_0019a734:;
    {
        wr8(cpu->r[5] + + 0x960u, cpu->r[3]);
    }
L_0019a738:;
    {
        cpu->r[14] = 0x0019a73cu; fn_0018ba6c(cpu);
    }
L_0019a73c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0019a740:;
    {
        cpu->r[14] = 0x0019a744u; fn_000a7570(cpu);
    }
L_0019a744:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0019a748:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_0019a74c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019a750:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0019a754:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019a758:;
    {
        cpu->r[3] = 0x00004050u;
    }
L_0019a75c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0019a760:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[8];
        }
    }
L_0019a764:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[8];
        }
    }
L_0019a768:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x0000047fu;
        }
    }
L_0019a76c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x0000047eu;
        }
    }
L_0019a770:;
    {
        cpu->r[14] = 0x0019a774u; fn_000aeb58(cpu);
    }
L_0019a774:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000950u, 0, 0);
    }
L_0019a778:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0019a77c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0019a780:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0019a784:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019a788:;
    {
        cpu->r[14] = 0x0019a78cu; fn_000a7bb0(cpu);
    }
L_0019a78c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0019a790:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0019a794:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0019a798:;
    {
        cpu->r[14] = 0x0019a79cu; fn_000f361c(cpu);
    }
L_0019a79c:;
    {
        goto L_0019a6dc;
    }
L_0019a7a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019a7a4:;
    {
        cpu->r[14] = 0x0019a7a8u; fn_0010da28(cpu);
    }
L_0019a7a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019a7ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a718;
        }
    }
L_0019a7b0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0xc4u);
    }
L_0019a7b4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_0019a7b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a8ec;
        }
    }
L_0019a7bc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 1);
    }
L_0019a7c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a8c8;
        }
    }
L_0019a7c4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0019a7c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019a718;
        }
    }
L_0019a7cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_0019a7d0:;
    {
        cpu->r[1] = 0x00005f5cu;
    }
L_0019a7d4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0019a7d8:;
    {
        cpu->r[0] = 0x00000990u;
    }
L_0019a7dc:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[7]);
    }
L_0019a7e0:;
    {
        cpu->r[1] = 0x00005f58u;
    }
L_0019a7e4:;
    {
        cpu->r[6] = rd32(cpu->r[2]);
    }
L_0019a7e8:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[7]);
    }
L_0019a7ec:;
    {
        cpu->r[14] = 0x0019a7f0u; fn_0018ba6c(cpu);
    }
L_0019a7f0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0019a7f4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0019a7f8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0019a7fc:;
    {
        cpu->r[12] = 0x000004c1u;
    }
L_0019a800:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_0019a804:;
    {
        cpu->r[12] = 0x00000412u;
    }
L_0019a808:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_0019a80c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0019a810:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019a814:;
    {
        cpu->r[14] = 0x0019a818u; fn_001239a4(cpu);
    }
L_0019a818:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0019a81c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019a820:;
    {
        cpu->r[14] = 0x0019a824u; fn_000f361c(cpu);
    }
L_0019a824:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_0019a828:;
    {
        cpu->r[1] = 0x00006784u;
    }
L_0019a82c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0019a830:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_0019a834:;
    {
        cpu->r[1] = 0x00006782u;
    }
L_0019a838:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_0019a83c:;
    {
        goto L_0019a718;
    }
L_0019a840:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019a844:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0019a848:;
    {
        cpu->r[14] = 0x0019a84cu; fn_000eb59c(cpu);
    }
L_0019a84c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019a850:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0019a854:;
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
L_0019a858:;
    {
        return fn_00128a5c(cpu);
    }
L_0019a85c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0019a860:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0019a864:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019a868:;
    {
        cpu->r[14] = 0x0019a86cu; fn_000f34e8(cpu);
    }
L_0019a86c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0019a870:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019a874:;
    {
        cpu->r[14] = 0x0019a878u; fn_000f34e8(cpu);
    }
L_0019a878:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_0019a87c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019a880:;
    {
        cpu->r[14] = 0x0019a884u; fn_001933d4(cpu);
    }
L_0019a884:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_0019a888:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_0019a88c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0019a890:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019a894:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019a898:;
    {
        cpu->r[14] = 0x0019a8a0u;
    }
L_0019a89c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019a8a0u)) return;
    }
L_0019a8a0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019a8a4:;
    {
        cpu->r[1] = 0x0000e224u;
    }
L_0019a8a8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019a8ac:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_0019a8b0:;
    {
        cpu->r[0] = 0x00006780u;
    }
L_0019a8b4:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_0019a8b8:;
    {
        cpu->r[1] = 0x00005f98u;
    }
L_0019a8bc:;
    {
        wr8(cpu->r[3] + cpu->r[0], cpu->r[2]);
    }
L_0019a8c0:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_0019a8c4:;
    {
        goto L_0019a718;
    }
L_0019a8c8:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0019a8cc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0019a8d0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0019a8d4:;
    {
        cpu->r[14] = 0x0019a8d8u; fn_000f34e8(cpu);
    }
L_0019a8d8:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_0019a8dc:;
    {
        cpu->r[3] = 0x00006782u;
    }
L_0019a8e0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019a8e4:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_0019a8e8:;
    {
        goto L_0019a718;
    }
L_0019a8ec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0019a8f0:;
    {
        cpu->r[3] = 0x0000e770u;
    }
L_0019a8f4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019a8f8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0019a8fc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019a900:;
    {
        cpu->r[8] = rd32(cpu->r[1]);
    }
L_0019a904:;
    {
        cpu->r[1] = 0x00005f58u;
    }
L_0019a908:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_0019a90c:;
    {
        wr8(cpu->r[0] + cpu->r[1], cpu->r[2]);
    }
L_0019a910:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0019a914:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x0001e400u, 0, 0);
    }
L_0019a918:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000370u, 0, 0);
    }
L_0019a91c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0019a920:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a9b0;
        }
    }
L_0019a924:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x8u);
    }
L_0019a928:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x4u);
    }
L_0019a92c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019a930:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a93c;
        }
    }
L_0019a934:;
    {
        cpu->r[14] = 0x0019a938u; fn_0018ba20(cpu);
    }
L_0019a938:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[10]);
    }
L_0019a93c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x8u);
    }
L_0019a940:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019a944:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a950;
        }
    }
L_0019a948:;
    {
        cpu->r[14] = 0x0019a94cu; fn_0018ba20(cpu);
    }
L_0019a94c:;
    {
        wr32(cpu->r[8] + + 0x8u, cpu->r[10]);
    }
L_0019a950:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x4u);
    }
L_0019a954:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019a958:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a964;
        }
    }
L_0019a95c:;
    {
        cpu->r[14] = 0x0019a960u; fn_0018ba20(cpu);
    }
L_0019a960:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[10]);
    }
L_0019a964:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x8u);
    }
L_0019a968:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019a96c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a978;
        }
    }
L_0019a970:;
    {
        cpu->r[14] = 0x0019a974u; fn_0018ba20(cpu);
    }
L_0019a974:;
    {
        wr32(cpu->r[8] + + 0x8u, cpu->r[10]);
    }
L_0019a978:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0xcu);
    }
L_0019a97c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019a980:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a98c;
        }
    }
L_0019a984:;
    {
        cpu->r[14] = 0x0019a988u; fn_0018ba20(cpu);
    }
L_0019a988:;
    {
        wr32(cpu->r[8] + + 0xcu, cpu->r[10]);
    }
L_0019a98c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019a990:;
    {
        cpu->r[14] = 0x0019a994u; fn_0018ba20(cpu);
    }
L_0019a994:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0019a998:;
    {
        cpu->r[7] = rd32(cpu->r[7]);
    }
L_0019a99c:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_0019a9a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x0001e400u, 0, 0);
    }
L_0019a9a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000370u, 0, 0);
    }
L_0019a9a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0019a9ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019a924;
        }
    }
L_0019a9b0:;
    {
        cpu->r[3] = 0x0000e770u;
    }
L_0019a9b4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019a9b8:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0019a9bc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0019a9c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019a9e4;
        }
    }
L_0019a9c4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019a9c8:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_0019a9cc:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_0019a9d0:;
    {
        cpu->r[14] = 0x0019a9d4u; fn_002082a8(cpu);
    }
L_0019a9d4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_0019a9d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019a9dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019a9c8;
        }
    }
L_0019a9e0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0019a9e4:;
    {
        cpu->r[2] = 0x0000e770u;
    }
L_0019a9e8:;
    {
        cpu->r[1] = 0x0000e774u;
    }
L_0019a9ec:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0019a9f0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_0019a9f4:;
    {
        cpu->r[0] = 0x000009b8u;
    }
L_0019a9f8:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0xcu);
    }
L_0019a9fc:;
    {
        wr32(cpu->r[8] + cpu->r[1], cpu->r[3]);
    }
L_0019aa00:;
    {
        wr32(cpu->r[8] + cpu->r[2], cpu->r[3]);
    }
L_0019aa04:;
    {
        cpu->r[14] = 0x0019aa08u; fn_0018ba6c(cpu);
    }
L_0019aa08:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019aa0c:;
    {
        cpu->r[14] = 0x0019aa10u; fn_0019f5a8(cpu);
    }
L_0019aa10:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0019aa14:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019aa18:;
    {
        cpu->r[14] = 0x0019aa1cu; fn_000f361c(cpu);
    }
L_0019aa1c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_0019aa20:;
    {
        cpu->r[2] = 0x00006784u;
    }
L_0019aa24:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019aa28:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_0019aa2c:;
    {
        cpu->r[2] = 0x00006782u;
    }
L_0019aa30:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0019aa34:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_0019aa38:;
    {
        goto L_0019a718;
    }
}

/* _ZN18GS_OnlineQuickRace11DoBarActionEii @ 0019aa44 (arm) */
void fn_0019aa44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019aa44:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019aa48:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019aa4c:;
    {
        cpu->r[0] = rd32(0x0019aa54u + + 0x60u);
    }
L_0019aa50:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0019aa54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_0019aa58:;
    {
        cpu->r[0] = add_flags(cpu, 0x0019aa60u, cpu->r[0], 0, 0);
    }
L_0019aa5c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0019aa60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019aaac;
        }
    }
L_0019aa64:;
    {
        cpu->r[14] = rd32(0x0019aa6cu + + 0x4cu);
    }
L_0019aa68:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0019aa6c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_0019aa70:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[1]);
    }
L_0019aa74:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[1]);
    }
L_0019aa78:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0019aa7c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_0019aa80:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000094u;
        }
    }
L_0019aa84:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_0019aa88:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0019aa8c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0019aa90:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0019aa94:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019aa98:;
    {
        cpu->r[14] = 0x0019aa9cu; fn_000fd248(cpu);
    }
L_0019aa9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019aaa0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0019aaa4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0019aaa8:;
    {
        return fn_0010df70(cpu);
    }
L_0019aaac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0019aab0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019aab4u)) return;
    }
}

/* _ZN18GS_OnlineQuickRace8DoActionEii @ 0019aabc (arm) */
void fn_0019aabc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019aabc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0019aac0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0019aac4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019aac8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019aacc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0019aad0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019aad4u)) return;
        }
    }
L_0019aad4:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0019aad8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_0019aadc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0019ab14;
        }
    }
L_0019aae0:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_0019aae4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 0);
    }
L_0019aae8:;
    {
        cpu->r[14] = 0x0019aaecu; fn_00093f34(cpu);
    }
L_0019aaec:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_0019aaf0:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[5]);
    }
L_0019aaf4:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_0019aaf8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0019aafc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0019ab00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019ab04:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0019ab08:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_0019ab0c:;
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
L_0019ab10:;
    {
        return fn_0010df70(cpu);
    }
L_0019ab14:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0019ab18:;
    {
        cpu->r[14] = 0x0019ab20u;
    }
L_0019ab1c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019ab20u)) return;
    }
L_0019ab20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019ab24u)) return;
    }
}

/* _ZN18GS_OnlineQuickRaceC2Ev @ 0019ab24 (arm) */
void fn_0019ab24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019ab24:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0019ab28:;
    {
        cpu->r[5] = rd32(0x0019ab30u + + 0xb0u);
    }
L_0019ab2c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019ab30:;
    {
        cpu->r[14] = 0x0019ab34u; fn_0010ffa8(cpu);
    }
L_0019ab34:;
    {
        cpu->r[2] = rd32(0x0019ab3cu + + 0xa8u);
    }
L_0019ab38:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019ab40u, cpu->r[5], 0, 0);
    }
L_0019ab3c:;
    {
        cpu->r[3] = rd32(0x0019ab44u + + 0xa4u);
    }
L_0019ab40:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0019ab44:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019ab48:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0019ab4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0019ab50:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0019ab54:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019ab58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019ab9c;
        }
    }
L_0019ab5c:;
    {
        cpu->r[6] = rd32(0x0019ab64u + + 0x88u);
    }
L_0019ab60:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0019ab64:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019ab68:;
    {
        cpu->r[14] = 0x0019ab6cu; fn_00096a08(cpu);
    }
L_0019ab6c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019ab70:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019ab74:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019ab78:;
    {
        cpu->r[14] = 0x0019ab7cu; fn_0018aa44(cpu);
    }
L_0019ab7c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019ab80:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0019ab84:;
    {
        wr8(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_0019ab88:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[2]);
    }
L_0019ab8c:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_0019ab90:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[0]);
    }
L_0019ab94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019ab98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019ab9cu)) return;
    }
L_0019ab9c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019aba0:;
    {
        cpu->r[14] = 0x0019aba4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019aba4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019aba8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019ab5c;
        }
    }
L_0019abac:;
    {
        cpu->r[6] = rd32(0x0019abb4u + + 0x38u);
    }
L_0019abb0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019abb4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019abb8:;
    {
        cpu->r[14] = 0x0019abbcu; fn_0018aa20(cpu);
    }
L_0019abbc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019abc0:;
    {
        cpu->r[14] = 0x0019abc4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019abc4:;
    {
        cpu->r[3] = rd32(0x0019abccu + + 0x24u);
    }
L_0019abc8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019abcc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019abd0:;
    {
        cpu->r[3] = rd32(0x0019abd8u + + 0x1cu);
    }
L_0019abd4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019abd8:;
    {
        cpu->r[14] = 0x0019abdcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019abdc:;
    {
        goto L_0019ab60;
    }
}

/* _ZN18GS_OnlineQuickRaceD0Ev @ 0019abf8 (arm) */
void fn_0019abf8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019abf8:;
    {
        cpu->r[3] = rd32(0x0019ac00u + + 0x2cu);
    }
L_0019abfc:;
    {
        cpu->r[2] = rd32(0x0019ac04u + + 0x2cu);
    }
L_0019ac00:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019ac08u, cpu->r[3], 0, 0);
    }
L_0019ac04:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019ac08:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019ac0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019ac10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0019ac14:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0019ac18:;
    {
        cpu->r[14] = 0x0019ac1cu; fn_000ec21c(cpu);
    }
L_0019ac1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019ac20:;
    {
        cpu->r[14] = 0x0019ac24u; fn_0018ba20(cpu);
    }
L_0019ac24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019ac28:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019ac2cu)) return;
    }
}

/* _ZN18GS_OnlineQuickRaceC1Ev @ 0019ac34 (arm) */
void fn_0019ac34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019ac34:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0019ac38:;
    {
        cpu->r[5] = rd32(0x0019ac40u + + 0xb0u);
    }
L_0019ac3c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019ac40:;
    {
        cpu->r[14] = 0x0019ac44u; fn_0010ffa8(cpu);
    }
L_0019ac44:;
    {
        cpu->r[2] = rd32(0x0019ac4cu + + 0xa8u);
    }
L_0019ac48:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019ac50u, cpu->r[5], 0, 0);
    }
L_0019ac4c:;
    {
        cpu->r[3] = rd32(0x0019ac54u + + 0xa4u);
    }
L_0019ac50:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0019ac54:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019ac58:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0019ac5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0019ac60:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0019ac64:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019ac68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019acac;
        }
    }
L_0019ac6c:;
    {
        cpu->r[6] = rd32(0x0019ac74u + + 0x88u);
    }
L_0019ac70:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0019ac74:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019ac78:;
    {
        cpu->r[14] = 0x0019ac7cu; fn_00096a08(cpu);
    }
L_0019ac7c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019ac80:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019ac84:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019ac88:;
    {
        cpu->r[14] = 0x0019ac8cu; fn_0018aa44(cpu);
    }
L_0019ac8c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019ac90:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0019ac94:;
    {
        wr8(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_0019ac98:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[2]);
    }
L_0019ac9c:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_0019aca0:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[0]);
    }
L_0019aca4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019aca8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019acacu)) return;
    }
L_0019acac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019acb0:;
    {
        cpu->r[14] = 0x0019acb4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0019acb4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019acb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019ac6c;
        }
    }
L_0019acbc:;
    {
        cpu->r[6] = rd32(0x0019acc4u + + 0x38u);
    }
L_0019acc0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0019acc4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019acc8:;
    {
        cpu->r[14] = 0x0019acccu; fn_0018aa20(cpu);
    }
L_0019accc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019acd0:;
    {
        cpu->r[14] = 0x0019acd4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0019acd4:;
    {
        cpu->r[3] = rd32(0x0019acdcu + + 0x24u);
    }
L_0019acd8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019acdc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019ace0:;
    {
        cpu->r[3] = rd32(0x0019ace8u + + 0x1cu);
    }
L_0019ace4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0019ace8:;
    {
        cpu->r[14] = 0x0019acecu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0019acec:;
    {
        goto L_0019ac70;
    }
}

/* _ZN26GS_OnlineQuickRaceHostList8isKindOfEi @ 0019ad08 (arm) */
void fn_0019ad08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019ad08:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000003fu, 1, 1);
    }
L_0019ad0c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0019ad10:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0019ad14:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_57 @ 0019ad18 (arm) */
void fn_0019ad18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019ad18:;
    {
        cpu->r[3] = rd32(0x0019ad20u + + 0x34u);
    }
L_0019ad1c:;
    {
        cpu->r[1] = rd32(0x0019ad24u + + 0x34u);
    }
L_0019ad20:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019ad28u, cpu->r[3], 0, 0);
    }
L_0019ad24:;
    {
        cpu->r[2] = rd32(0x0019ad2cu + + 0x30u);
    }
L_0019ad28:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0019ad2c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0019ad34u, cpu->r[2], 0, 0);
    }
L_0019ad30:;
    {
        cpu->r[1] = rd32(0x0019ad38u + + 0x28u);
    }
L_0019ad34:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0019ad38:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0019ad3c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 0);
    }
L_0019ad40:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_0019ad44:;
    {
        wr32(cpu->r[1] + + 0x28u, cpu->r[0]);
    }
L_0019ad48:;
    {
        wr32(cpu->r[1] + + 0x10u, cpu->r[0]);
    }
L_0019ad4c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_0019ad50:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN26GS_OnlineQuickRaceHostListD1Ev @ 0019ad64 (arm) */
void fn_0019ad64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019ad64:;
    {
        cpu->r[3] = rd32(0x0019ad6cu + + 0x24u);
    }
L_0019ad68:;
    {
        cpu->r[2] = rd32(0x0019ad70u + + 0x24u);
    }
L_0019ad6c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019ad74u, cpu->r[3], 0, 0);
    }
L_0019ad70:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019ad74:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019ad78:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019ad7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0019ad80:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0019ad84:;
    {
        cpu->r[14] = 0x0019ad88u; fn_000ec21c(cpu);
    }
L_0019ad88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019ad8c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019ad90u)) return;
    }
}

/* _ZN26GS_OnlineQuickRaceHostList6ResumeEv @ 0019ad98 (arm) */
void fn_0019ad98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019ad98:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0019ad9c:;
    {
        cpu->r[5] = rd32(0x0019ada4u + + 0xd4u);
    }
L_0019ada0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_0019ada4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019ada8:;
    {
        cpu->r[14] = 0x0019adacu; fn_001142a0(cpu);
    }
L_0019adac:;
    {
        cpu->r[2] = rd32(0x0019adb4u + + 0xc8u);
    }
L_0019adb0:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019adb8u, cpu->r[5], 0, 0);
    }
L_0019adb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0019adb8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019adbc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0019adc0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0019adc4:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x18u);
    }
L_0019adc8:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_0019adcc:;
    {
        cpu->r[3] = 0x00006770u;
    }
L_0019add0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0019add4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0019add8:;
    {
        cpu->r[14] = 0x0019addcu; fn_001ba230(cpu);
    }
L_0019addc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019ade0:;
    {
        cpu->r[3] = 0x0000ecf5u;
    }
L_0019ade4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019ade8:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_0019adec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019adf0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019ae4c;
        }
    }
L_0019adf4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019adf8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0019adfc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019ae00:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_0019ae04:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 3u, &shc));
    }
L_0019ae08:;
    {
        cpu->r[14] = 0x0019ae0cu; fn_000ec4f0(cpu);
    }
L_0019ae0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019ae10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019ae14:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 3u, &shc));
    }
L_0019ae18:;
    {
        cpu->r[14] = 0x0019ae1cu; fn_000ec594(cpu);
    }
L_0019ae1c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0019ae20:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_0019ae24:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0019ae28:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0019ae2c:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_0019ae30:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0019ae34:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0019ae38:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0019ae3c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0019ae40:;
    {
        cpu->r[14] = 0x0019ae44u; fn_000a8a2c(cpu);
    }
L_0019ae44:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0019ae48:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019ae4cu)) return;
    }
L_0019ae4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019ae50:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_0019ae54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019ae58:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0019ae5c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 3u, &shc));
    }
L_0019ae60:;
    {
        cpu->r[14] = 0x0019ae64u; fn_000ec4f0(cpu);
    }
L_0019ae64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0019ae68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019ae6c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 3u, &shc));
    }
L_0019ae70:;
    {
        cpu->r[14] = 0x0019ae74u; fn_000ec594(cpu);
    }
L_0019ae74:;
    {
        goto L_0019ae1c;
    }
}

/* _ZN26GS_OnlineQuickRaceHostList18ProcessOnMouseDragEv @ 0019ae80 (arm) */
void fn_0019ae80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019ae80:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019ae84:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019ae88:;
    {
        cpu->r[14] = 0x0019ae8cu; fn_00110818(cpu);
    }
L_0019ae8c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019ae90:;
    {
        wr32(cpu->r[4] + + 0x9bcu, cpu->r[3]);
    }
L_0019ae94:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019ae98u)) return;
    }
}

/* _ZN26GS_OnlineQuickRaceHostList24ProcessOnMouseButtonDownEv @ 0019ae98 (arm) */
void fn_0019ae98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019ae98:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019ae9c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019aea0:;
    {
        cpu->r[14] = 0x0019aea4u; fn_00110498(cpu);
    }
L_0019aea4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0019aea8:;
    {
        wr8(cpu->r[4] + + 0x9b4u, cpu->r[3]);
    }
L_0019aeac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019aeb0:;
    {
        wr32(cpu->r[4] + + 0x9bcu, cpu->r[3]);
    }
L_0019aeb4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019aeb8u)) return;
    }
}

/* _ZN26GS_OnlineQuickRaceHostList22ProcessOnMouseButtonUpEv @ 0019aeb8 (arm) */
void fn_0019aeb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019aeb8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0019aebc:;
    {
        cpu->r[4] = rd32(0x0019aec4u + + 0x1c0u);
    }
L_0019aec0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019aec4:;
    {
        wr8(cpu->r[0] + + 0x9b4u, cpu->r[3]);
    }
L_0019aec8:;
    {
        cpu->r[3] = rd32(0x0019aed0u + + 0x1b8u);
    }
L_0019aecc:;
    {
        cpu->r[4] = add_flags(cpu, 0x0019aed4u, cpu->r[4], 0, 0);
    }
L_0019aed0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0019aed4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0019aed8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0019aedc:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_0019aee0:;
    {
        cpu->r[14] = 0x0019aee4u; fn_000960f4(cpu);
    }
L_0019aee4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019aee8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019b018;
        }
    }
L_0019aeec:;
    {
        cpu->r[3] = rd32(0x0019aef4u + + 0x198u);
    }
L_0019aef0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0019aef4:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_0019aef8:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000003cu, 1, 1);
    }
L_0019aefc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019afe8;
        }
    }
L_0019af00:;
    {
        cpu->r[2] = rd32(0x0019af08u + + 0x188u);
    }
L_0019af04:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_0019af08:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019af0c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0019af10:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_0019af14:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x0001e400u, 0, 0);
    }
L_0019af18:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0019af1c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000380u, 0, 0);
    }
L_0019af20:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0019af24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019afe8;
        }
    }
L_0019af28:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019af2c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019af30:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0019af34:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0019af38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019af2c;
        }
    }
L_0019af3c:;
    {
        cpu->r[3] = 0x0000001du;
    }
L_0019af40:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[2] = v;
    }
L_0019af44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000003cu, 0, 0);
    }
L_0019af48:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0019af4c:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0019afe8;
        }
    }
L_0019af50:;
    {
        cpu->r[3] = rd32(0x0019af58u + + 0x13cu);
    }
L_0019af54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0019af58:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_0019af5c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0019af60:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019afdc;
        }
    }
L_0019af64:;
    {
        cpu->r[1] = 0x0000cb09u;
    }
L_0019af68:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000003cu, 1, 0);
    }
L_0019af6c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x8d3du << 16);
    }
L_0019af70:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_0019af74:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[14] = v;
    }
L_0019af78:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019af7c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[0]; cpu->r[2] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_0019af80:;
    {
        cpu->r[4] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0019af84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_0019af88:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[0], 1, 4u, &shc), cpu->r[14], 1, 0);
    }
L_0019af8c:;
    {
        wr32(cpu->r[5] + + 0x9c0u, cpu->r[2]);
    }
L_0019af90:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0019af94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019afac;
        }
    }
L_0019af98:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019af9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0019afa0:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_0019afa4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0019afa8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019af9c;
        }
    }
L_0019afac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0019afb0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x0001e000u, 0, 0);
    }
L_0019afb4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000024cu, 0, 0);
    }
L_0019afb8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0019afbc:;
    {
        cpu->r[14] = 0x0019afc0u; fn_001d06e4(cpu);
    }
L_0019afc0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019afc4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019b030;
        }
    }
L_0019afc8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0019afcc:;
    {
        cpu->r[2] = 0x00000011u;
    }
L_0019afd0:;
    {
        wr32(cpu->r[5] + + 0x9c0u, cpu->r[3]);
    }
L_0019afd4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x9c4u);
    }
L_0019afd8:;
    {
        cpu->r[14] = 0x0019afdcu; fn_001d0700(cpu);
    }
L_0019afdc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019afe0:;
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
L_0019afe4:;
    {
        return fn_00110c40(cpu);
    }
L_0019afe8:;
    {
        cpu->r[3] = rd32(0x0019aff0u + + 0xa4u);
    }
L_0019afec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0019aff0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_0019aff4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0019aff8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019afdc;
        }
    }
L_0019affc:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0019b000:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x9c4u);
    }
L_0019b004:;
    {
        wr32(cpu->r[5] + + 0x9c0u, cpu->r[3]);
    }
L_0019b008:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019b00c:;
    {
        cpu->r[2] = 0x00000011u;
    }
L_0019b010:;
    {
        cpu->r[14] = 0x0019b014u; fn_001d0700(cpu);
    }
L_0019b014:;
    {
        goto L_0019afdc;
    }
L_0019b018:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0019b01c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019b020:;
    {
        cpu->r[14] = 0x0019b028u;
    }
L_0019b024:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019b028u)) return;
    }
L_0019b028:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 0);
    }
L_0019b02c:;
    {
        goto L_0019aeec;
    }
L_0019b030:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8ecu);
    }
L_0019b034:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019b038:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x88u);
    }
L_0019b03c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x18u);
    }
L_0019b040:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0019b044:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 3u, &shc));
    }
L_0019b048:;
    {
        cpu->r[14] = 0x0019b04cu; fn_000ec4f0(cpu);
    }
L_0019b04c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x9c4u);
    }
L_0019b050:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019b054:;
    {
        cpu->r[2] = 0x00000011u;
    }
L_0019b058:;
    {
        cpu->r[14] = 0x0019b05cu; fn_001d0700(cpu);
    }
L_0019b05c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0019b060:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x9c4u);
    }
L_0019b064:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_0019b068:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019b06c:;
    {
        cpu->r[14] = 0x0019b070u; fn_001d0434(cpu);
    }
L_0019b070:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0019b074:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0019b078:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019b07c:;
    {
        cpu->r[14] = 0x0019b080u; fn_001d06ec(cpu);
    }
L_0019b080:;
    {
        goto L_0019afdc;
    }
}
