#include "functions.h"

/* inflateBack @ 00077784 (arm) */
void fn_00077784(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00077784:;
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
L_00077788:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007778c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000064u, 1, 0);
    }
L_00077790:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_00077794:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_00077798:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0007779c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000777ac;
        }
    }
L_000777a0:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_000777a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_000777a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000777acu)) return;
    }
L_000777ac:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0x1cu);
    }
L_000777b0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000777b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000777a0;
        }
    }
L_000777b8:;
    {
        cpu->r[5] = rd32(cpu->r[8]);
    }
L_000777bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000777c0:;
    {
        wr32(cpu->r[7] + + 0x2cu, cpu->r[3]);
    }
L_000777c4:;
    {
        cpu->r[2] = 0x0000000bu;
    }
L_000777c8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000777cc:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[3]);
    }
L_000777d0:;
    {
        wr32(cpu->r[8] + + 0x18u, cpu->r[3]);
    }
L_000777d4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000777d8:;
    {
        cpu->r[3] = rd32(0x000777e0u + + 0xfd0u);
    }
L_000777dc:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_000777e0:;
    {
        wr32(cpu->r[7], cpu->r[2]);
    }
L_000777e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x00000530u, 0, 0);
    }
L_000777e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000777f0u, cpu->r[3], 0, 0);
    }
L_000777ec:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000777f0:;
    {
        cpu->r[3] = rd32(0x000777f8u + + 0xfbcu);
    }
L_000777f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], 0x00000054u, 0, 0);
    }
L_000777f8:;
    {
        cpu->r[2] = rd32(0x00077800u + + 0xfb8u);
    }
L_000777fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00077804u, cpu->r[3], 0, 0);
    }
L_00077800:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[5]);
    }
L_00077804:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000880u, 0, 0);
    }
L_00077808:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_0007780c:;
    {
        cpu->r[3] = rd32(0x00077814u + + 0xfa8u);
    }
L_00077810:;
    {
        cpu->r[2] = add_flags(cpu, 0x00077818u, cpu->r[2], 0, 0);
    }
L_00077814:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x34u);
    }
L_00077818:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd32(cpu->r[8] + + 0x4u);
        }
    }
L_0007781c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00077824u, cpu->r[3], 0, 0);
    }
L_00077820:;
    {
        cpu->r[11] = rd32(cpu->r[7] + + 0x28u);
    }
L_00077824:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_00077828:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000070u, 0, 0);
    }
L_0007782c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_00077830:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x0000006cu, 0, 0);
    }
L_00077834:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_00077838:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_0007783c:;
    {
        cpu->r[3] = 0x0000000bu;
    }
L_00077840:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00077844:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_00077848:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x000002f0u, 0, 0);
    }
L_0007784c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_00077850:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000800u, 0, 0);
    }
L_00077854:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000058u, 0, 0);
    }
L_00077858:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[12]);
    }
L_0007785c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_00077860:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[1]);
    }
L_00077864:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_00077868:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[8]);
    }
L_0007786c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 0);
    }
L_00077870:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_00077874:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_00077a04;
        case 1: goto L_00077a60;
        case 2: goto L_00077a70;
        case 3: goto L_00077a60;
        case 4: goto L_000779a8;
        case 5: goto L_00077a60;
        case 6: goto L_00077a60;
        case 7: goto L_000778f0;
        case 8: goto L_00077a60;
        case 9: goto L_00077a60;
        case 10: goto L_00077a60;
        case 11: goto L_00077a60;
        case 12: goto L_00077a60;
        case 13: goto L_00077a60;
        case 14: goto L_00077a60;
        case 15: goto L_000778d4;
        case 16: goto L_000778c0;
        default: guest_unimplemented(cpu, 0x00077874u); return; }
        }
    }
L_00077878:;
    {
        goto L_00077a60;
    }
L_000778c0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_000778c4:;
    {
        cpu->r[0] = (~0x00000002u);
    }
L_000778c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000778cc:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[5]);
    }
L_000778d0:;
    {
        goto L_000777a4;
    }
L_000778d4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x28u);
    }
L_000778d8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_000778dc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_000778e0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00077e68;
        }
    }
L_000778e4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000778e8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000778ec:;
    {
        goto L_000778cc;
    }
L_000778f0:;
    {
        cpu->r[3] = 0x00000101u;
    }
L_000778f4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000005u, 1, 1);
    }
L_000778f8:;
    {
        if (cond_test(cpu, 9)) {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
        }
    }
L_000778fc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00077c9c;
        }
    }
L_00077900:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00077904:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x54u);
    }
L_00077908:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4cu);
    }
L_0007790c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00077910:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00077914:;
    {
        uint32_t v = cpu->r[6] & cpu->r[3]; cpu->r[3] = v;
    }
L_00077918:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007791c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00077920:;
    {
        cpu->r[8] = rd8(cpu->r[0] + + 0x1u);
    }
L_00077924:;
    {
        cpu->r[0] = rd16(cpu->r[0] + + 0x2u);
    }
L_00077928:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_0007792c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
        }
    }
L_00077930:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_00077934:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
        }
    }
L_00077938:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00077980;
        }
    }
L_0007793c:;
    {
        goto L_00077d2c;
    }
L_00077940:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00077944:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_00077948:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_0007794c:;
    {
        uint32_t v = shifter(cpu->r[8], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00077950:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        cpu->r[0] = rd8(cpu->r[3]);
        cpu->r[3] = wb_tmp;
    }
L_00077954:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00077958:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[0], 2, (cpu->r[4] & 0xffu), &shc), 0, 0);
    }
L_0007795c:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_00077960:;
    {
        uint32_t v = cpu->r[6] & cpu->r[1]; cpu->r[1] = v;
    }
L_00077964:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00077968:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0007796c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00077970:;
    {
        cpu->r[8] = rd8(cpu->r[3] + + 0x1u);
    }
L_00077974:;
    {
        cpu->r[3] = rd16(cpu->r[3] + + 0x2u);
    }
L_00077978:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[4], 1, 1);
    }
L_0007797c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00077d28;
        }
    }
L_00077980:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00077984:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00077940;
        }
    }
L_00077988:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0007798c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00077990:;
    {
        cpu->r[14] = 0x00077994u; guest_call(cpu, cpu->r[9]);
    }
L_00077994:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00077998:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000779f4;
        }
    }
L_0007799c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4cu);
    }
L_000779a0:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x54u);
    }
L_000779a4:;
    {
        goto L_00077940;
    }
L_000779a8:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000000du, 1, 1);
    }
L_000779ac:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
        }
    }
L_000779b0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000779d8;
        }
    }
L_000779b4:;
    {
        goto L_00077b00;
    }
L_000779b8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000779bc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_000779c0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        cpu->r[2] = rd8(cpu->r[3]);
        cpu->r[3] = wb_tmp;
    }
L_000779c4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, (cpu->r[4] & 0xffu), &shc), 0, 0);
    }
L_000779c8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_000779cc:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000000du, 1, 1);
    }
L_000779d0:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_000779d4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00077b00;
        }
    }
L_000779d8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000779dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000779b8;
        }
    }
L_000779e0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000779e4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000779e8:;
    {
        cpu->r[14] = 0x000779ecu; guest_call(cpu, cpu->r[9]);
    }
L_000779ec:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000779f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000779b8;
        }
    }
L_000779f4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_000779f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000779fc:;
    {
        cpu->r[0] = (~0x00000004u);
    }
L_00077a00:;
    {
        goto L_000778cc;
    }
L_00077a04:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_00077a08:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00077a0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00077d10;
        }
    }
L_00077a10:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000002u, 1, 1);
    }
L_00077a14:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
        }
    }
L_00077a18:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00077a40;
        }
    }
L_00077a1c:;
    {
        goto L_00077df8;
    }
L_00077a20:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00077a24:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_00077a28:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        cpu->r[2] = rd8(cpu->r[3]);
        cpu->r[3] = wb_tmp;
    }
L_00077a2c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, (cpu->r[4] & 0xffu), &shc), 0, 0);
    }
L_00077a30:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00077a34:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000002u, 1, 1);
    }
L_00077a38:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_00077a3c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00077df8;
        }
    }
L_00077a40:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00077a44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00077a20;
        }
    }
L_00077a48:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00077a4c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00077a50:;
    {
        cpu->r[14] = 0x00077a54u; guest_call(cpu, cpu->r[9]);
    }
L_00077a54:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00077a58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00077a20;
        }
    }
L_00077a5c:;
    {
        goto L_000779f4;
    }
L_00077a60:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_00077a64:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00077a68:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00077a6c:;
    {
        goto L_000778cc;
    }
L_00077a70:;
    {
        uint32_t v = cpu->r[4] & 0x00000007u; cpu->r[3] = v;
    }
L_00077a74:;
    {
        uint32_t v = cpu->r[4] & ~ 0x00000007u; cpu->r[4] = v;
    }
L_00077a78:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000001fu, 1, 1);
    }
L_00077a7c:;
    {
        uint32_t v = shifter(cpu->r[6], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[6] = v;
    }
L_00077a80:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00077acc;
        }
    }
L_00077a84:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_00077a88:;
    {
        goto L_00077aac;
    }
L_00077a8c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00077a90:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_00077a94:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        cpu->r[2] = rd8(cpu->r[3]);
        cpu->r[3] = wb_tmp;
    }
L_00077a98:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, (cpu->r[4] & 0xffu), &shc), 0, 0);
    }
L_00077a9c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00077aa0:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000001fu, 1, 1);
    }
L_00077aa4:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_00077aa8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00077acc;
        }
    }
L_00077aac:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00077ab0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00077a8c;
        }
    }
L_00077ab4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00077ab8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00077abc:;
    {
        cpu->r[14] = 0x00077ac0u; guest_call(cpu, cpu->r[9]);
    }
L_00077ac0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00077ac4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00077a8c;
        }
    }
L_00077ac8:;
    {
        goto L_000779f4;
    }
L_00077acc:;
    {
        cpu->r[3] = 0x0000ffffu;
    }
L_00077ad0:;
    {
        cpu->r[8] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_00077ad4:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[6], 3, 16u, &shc); cpu->r[3] = v;
    }
L_00077ad8:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_00077adc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00077e90;
        }
    }
L_00077ae0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00077ae4:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_00077ae8:;
    {
        cpu->r[2] = rd32(0x00077af0u + + 0xcd0u);
    }
L_00077aec:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00077af0:;
    {
        wr32(cpu->r[7], cpu->r[1]);
    }
L_00077af4:;
    {
        cpu->r[2] = add_flags(cpu, 0x00077afcu, cpu->r[2], 0, 0);
    }
L_00077af8:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_00077afc:;
    {
        goto L_0007786c;
    }
L_00077b00:;
    {
        uint32_t v = cpu->r[6] & 0x0000001fu; cpu->r[3] = v;
    }
L_00077b04:;
    {
        cpu->r[1] = 0x0000011eu;
    }
L_00077b08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000100u, 0, 0);
    }
L_00077b0c:;
    {
        cpu->r[2] = (cpu->r[6] >> 5) & 0x1fu;
    }
L_00077b10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00077b14:;
    {
        cpu->r[0] = (cpu->r[6] >> 10) & 0xfu;
    }
L_00077b18:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00077b1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00077b20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00077b24:;
    {
        wr32(cpu->r[7] + + 0x60u, cpu->r[3]);
    }
L_00077b28:;
    {
        wr32(cpu->r[7] + + 0x5cu, cpu->r[0]);
    }
L_00077b2c:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 14u, &shc); cpu->r[6] = v;
    }
L_00077b30:;
    {
        wr32(cpu->r[7] + + 0x64u, cpu->r[2]);
    }
L_00077b34:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000000eu, 1, 0);
    }
L_00077b38:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00077c7c;
        }
    }
L_00077b3c:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000001eu, 1, 1);
    }
L_00077b40:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00077c7c;
        }
    }
L_00077b44:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00077b48:;
    {
        cpu->r[5] = cpu->r[11];
    }
L_00077b4c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x20u);
    }
L_00077b50:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_00077b54:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00077b58:;
    {
        wr32(cpu->r[7] + + 0x68u, cpu->r[3]);
    }
L_00077b5c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000002u, 1, 1);
    }
L_00077b60:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00077b84;
        }
    }
L_00077b64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00077b68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00077c5c;
        }
    }
L_00077b6c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00077b70:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00077b74:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        cpu->r[2] = rd8(cpu->r[3]);
        cpu->r[3] = wb_tmp;
    }
L_00077b78:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, (cpu->r[4] & 0xffu), &shc), 0, 0);
    }
L_00077b7c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00077b80:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_00077b84:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x68u);
    }
L_00077b88:;
    {
        uint32_t v = cpu->r[6] & 0x00000007u; cpu->r[1] = v;
    }
L_00077b8c:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x5cu);
    }
L_00077b90:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000003u, 1, 0);
    }
L_00077b94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00077b98:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 3u, &shc); cpu->r[6] = v;
    }
L_00077b9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00077ba0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_00077ba4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000880u, 0, 0);
    }
L_00077ba8:;
    {
        wr32(cpu->r[7] + + 0x68u, cpu->r[3]);
    }
L_00077bac:;
    {
        cpu->r[2] = rd16(cpu->r[2]);
    }
L_00077bb0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00077bb4:;
    {
        wr16(cpu->r[2] + + 0x70u, cpu->r[1]);
    }
L_00077bb8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00077b5c;
        }
    }
L_00077bbc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000012u, 1, 1);
    }
L_00077bc0:;
    {
        cpu->r[11] = cpu->r[5];
    }
L_00077bc4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00077bc8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00077bfc;
        }
    }
L_00077bcc:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x44u);
    }
L_00077bd0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00077bd4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00077bd8:;
    {
        cpu->r[1] = rd16(cpu->r[0] + cpu->r[2]);
    }
L_00077bdc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00077be0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000012u, 1, 1);
    }
L_00077be4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00077be8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_00077bec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00077bf0:;
    {
        wr16(cpu->r[1] + + 0x70u, cpu->r[12]);
    }
L_00077bf4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00077bd8;
        }
    }
L_00077bf8:;
    {
        wr32(cpu->r[7] + + 0x68u, cpu->r[3]);
    }
L_00077bfc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_00077c00:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_00077c04:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_00077c08:;
    {
        cpu->r[2] = 0x00000013u;
    }
L_00077c0c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x34u);
    }
L_00077c10:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_00077c14:;
    {
        wr32(cpu->r[7] + + 0x6cu, cpu->r[0]);
    }
L_00077c18:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00077c1c:;
    {
        wr32(cpu->r[7] + + 0x54u, cpu->r[3]);
    }
L_00077c20:;
    {
        wr32(cpu->r[7] + + 0x4cu, cpu->r[1]);
    }
L_00077c24:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00077c28:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_00077c2c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_00077c30:;
    {
        cpu->r[14] = 0x00077c34u; fn_0007b038(cpu);
    }
L_00077c34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00077c38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000782a0;
        }
    }
L_00077c3c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00077c40:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_00077c44:;
    {
        cpu->r[2] = rd32(0x00077c4cu + + 0xb78u);
    }
L_00077c48:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00077c4c:;
    {
        wr32(cpu->r[7], cpu->r[1]);
    }
L_00077c50:;
    {
        cpu->r[2] = add_flags(cpu, 0x00077c58u, cpu->r[2], 0, 0);
    }
L_00077c54:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_00077c58:;
    {
        goto L_0007786c;
    }
L_00077c5c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00077c60:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00077c64:;
    {
        cpu->r[14] = 0x00077c68u; guest_call(cpu, cpu->r[9]);
    }
L_00077c68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00077c6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00077b6c;
        }
    }
L_00077c70:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00077c74:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_00077c78:;
    {
        goto L_000779f8;
    }
L_00077c7c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_00077c80:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_00077c84:;
    {
        cpu->r[2] = rd32(0x00077c8cu + + 0xb3cu);
    }
L_00077c88:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00077c8c:;
    {
        wr32(cpu->r[7], cpu->r[1]);
    }
L_00077c90:;
    {
        cpu->r[2] = add_flags(cpu, 0x00077c98u, cpu->r[2], 0, 0);
    }
L_00077c94:;
    {
        wr32(cpu->r[8] + + 0x18u, cpu->r[2]);
    }
L_00077c98:;
    {
        goto L_0007786c;
    }
L_00077c9c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00077ca0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00077ca4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_00077ca8:;
    {
        wr32(cpu->r[1] + + 0x10u, cpu->r[11]);
    }
L_00077cac:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[5]);
    }
L_00077cb0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x2cu);
    }
L_00077cb4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x28u);
    }
L_00077cb8:;
    {
        wr32(cpu->r[7] + + 0x38u, cpu->r[6]);
    }
L_00077cbc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00077cc0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00077cc4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[11] = sub_flags(cpu, cpu->r[1], cpu->r[11], 1, 0);
        }
    }
L_00077cc8:;
    {
        wr32(cpu->r[7] + + 0x3cu, cpu->r[4]);
    }
L_00077ccc:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[7] + + 0x2cu, cpu->r[11]);
        }
    }
L_00077cd0:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_00077cd4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00077cd8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00077cdc:;
    {
        wr32(cpu->r[8], cpu->r[3]);
    }
L_00077ce0:;
    {
        cpu->r[14] = 0x00077ce4u; fn_000788a0(cpu);
    }
L_00077ce4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00077ce8:;
    {
        cpu->r[6] = rd32(cpu->r[7] + + 0x38u);
    }
L_00077cec:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0x3cu);
    }
L_00077cf0:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_00077cf4:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0xcu);
    }
L_00077cf8:;
    {
        cpu->r[11] = rd32(cpu->r[12] + + 0x10u);
    }
L_00077cfc:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_00077d00:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_00077d04:;
    {
        cpu->r[5] = rd32(cpu->r[12] + + 0x4u);
    }
L_00077d08:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00077d0c:;
    {
        goto L_0007786c;
    }
L_00077d10:;
    {
        uint32_t v = cpu->r[4] & 0x00000007u; cpu->r[2] = v;
    }
L_00077d14:;
    {
        cpu->r[3] = 0x0000001au;
    }
L_00077d18:;
    {
        uint32_t v = shifter(cpu->r[6], 3, (cpu->r[2] & 0xffu), &shc); cpu->r[6] = v;
    }
L_00077d1c:;
    {
        uint32_t v = cpu->r[4] & ~ 0x00000007u; cpu->r[4] = v;
    }
L_00077d20:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_00077d24:;
    {
        goto L_0007786c;
    }
L_00077d28:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_00077d2c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00077d30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00077f5c;
        }
    }
L_00077d34:;
    {
        { uint32_t v = cpu->r[1] & 0x000000f0u; set_nz(cpu, v); }
    }
L_00077d38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00077fb0;
        }
    }
L_00077d3c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00077d40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[1], 0, 0);
    }
L_00077d44:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00077d48:;
    {
        cpu->r[3] = (~shifter(cpu->r[3], 2, (cpu->r[1] & 0xffu), &shc));
    }
L_00077d4c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[3]);
    }
L_00077d50:;
    {
        uint32_t v = cpu->r[3] & cpu->r[6]; cpu->r[3] = v;
    }
L_00077d54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 3, (cpu->r[8] & 0xffu), &shc), 0, 0);
    }
L_00077d58:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00077d5c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00077d60:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0x1u);
    }
L_00077d64:;
    {
        cpu->r[0] = rd16(cpu->r[0] + + 0x2u);
    }
L_00077d68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[12], 0, 0);
    }
L_00077d6c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00077d70:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00078018;
        }
    }
L_00077d74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_00077d78:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[11]);
    }
L_00077d7c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[7]);
    }
L_00077d80:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_00077d84:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[0]);
    }
L_00077d88:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x18u);
    }
L_00077d8c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x50u);
    }
L_00077d90:;
    {
        goto L_00077dd0;
    }
L_00077d94:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00077d98:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_00077d9c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        cpu->r[1] = rd8(cpu->r[3]);
        cpu->r[3] = wb_tmp;
    }
L_00077da0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[1], 2, (cpu->r[4] & 0xffu), &shc), 0, 0);
    }
L_00077da4:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_00077da8:;
    {
        uint32_t v = cpu->r[6] & cpu->r[9]; cpu->r[1] = v;
    }
L_00077dac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00077db0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], shifter(cpu->r[1], 3, (cpu->r[8] & 0xffu), &shc), 0, 0);
    }
L_00077db4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00077db8:;
    {
        cpu->r[1] = rd8(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00077dbc:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x1u);
    }
L_00077dc0:;
    {
        cpu->r[0] = rd16(cpu->r[3] + + 0x2u);
    }
L_00077dc4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[12], 0, 0);
    }
L_00077dc8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00077dcc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0007800c;
        }
    }
L_00077dd0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00077dd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00077d94;
        }
    }
L_00077dd8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00077ddc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00077de0:;
    {
        cpu->r[14] = 0x00077de4u; guest_call(cpu, cpu->r[11]);
    }
L_00077de4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00077de8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000779f4;
        }
    }
L_00077dec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_00077df0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4cu);
    }
L_00077df4:;
    {
        goto L_00077d94;
    }
L_00077df8:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 1u, &shc); cpu->r[2] = v;
    }
L_00077dfc:;
    {
        uint32_t v = cpu->r[6] & 0x00000001u; cpu->r[6] = v;
    }
L_00077e00:;
    {
        uint32_t v = cpu->r[2] & 0x00000003u; cpu->r[3] = v;
    }
L_00077e04:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[6]);
    }
L_00077e08:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00077e0c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000000fu;
        }
    }
L_00077e10:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[7], cpu->r[3]);
        }
    }
L_00077e14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00077e58;
        }
    }
L_00077e18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00077e1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00077ff0;
        }
    }
L_00077e20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00077e24:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000000du;
        }
    }
L_00077e28:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[7], cpu->r[3]);
        }
    }
L_00077e2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00077e58;
        }
    }
L_00077e30:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00077e34:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x30u);
    }
L_00077e38:;
    {
        wr32(cpu->r[7] + + 0x4cu, cpu->r[3]);
    }
L_00077e3c:;
    {
        cpu->r[3] = 0x00000009u;
    }
L_00077e40:;
    {
        wr32(cpu->r[7] + + 0x50u, cpu->r[8]);
    }
L_00077e44:;
    {
        wr32(cpu->r[7] + + 0x54u, cpu->r[3]);
    }
L_00077e48:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_00077e4c:;
    {
        wr32(cpu->r[7] + + 0x58u, cpu->r[3]);
    }
L_00077e50:;
    {
        cpu->r[3] = 0x00000012u;
    }
L_00077e54:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_00077e58:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 2u, &shc); cpu->r[6] = v;
    }
L_00077e5c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000003u, 1, 0);
    }
L_00077e60:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00077e64:;
    {
        goto L_0007786c;
    }
L_00077e68:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 0);
    }
L_00077e6c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x88u);
    }
L_00077e70:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x34u);
    }
L_00077e74:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00077e78:;
    {
        cpu->r[14] = 0x00077e7cu; guest_call(cpu, cpu->r[12]);
    }
L_00077e7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00077e80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000778e4;
        }
    }
L_00077e84:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00077e88:;
    {
        cpu->r[0] = (~0x00000004u);
    }
L_00077e8c:;
    {
        goto L_000778cc;
    }
L_00077e90:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00077e94:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[8]);
    }
L_00077e98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00077f9c;
        }
    }
L_00077e9c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_00077ea0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[6]);
    }
L_00077ea4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00077ea8:;
    {
        goto L_00077f04;
    }
L_00077eac:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00077eb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00077f24;
        }
    }
L_00077eb4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_00077eb8:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[4] = cpu->r[5];
        }
    }
L_00077ebc:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[4] = cpu->r[8];
        }
    }
L_00077ec0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00077ec4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 1);
    }
L_00077ec8:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[4] = cpu->r[11];
        }
    }
L_00077ecc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00077ed0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00077ed4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 0);
    }
L_00077ed8:;
    {
        cpu->r[14] = 0x00077edcu; imp_memcpy(cpu); /* memcpy */
    }
L_00077edc:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x40u);
    }
L_00077ee0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00077ee4:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[4], 1, 0);
    }
L_00077ee8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[4], 1, 0);
    }
L_00077eec:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_00077ef0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00077ef4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_00077ef8:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[8]);
    }
L_00077efc:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[4]);
    }
L_00077f00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00077f98;
        }
    }
L_00077f04:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00077f08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00077eac;
        }
    }
L_00077f0c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00077f10:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00077f14:;
    {
        cpu->r[14] = 0x00077f18u; guest_call(cpu, cpu->r[9]);
    }
L_00077f18:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00077f1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00077eac;
        }
    }
L_00077f20:;
    {
        goto L_000779f4;
    }
L_00077f24:;
    {
        cpu->r[11] = rd32(cpu->r[7] + + 0x28u);
    }
L_00077f28:;
    {
        cpu->r[6] = rd32(cpu->r[7] + + 0x34u);
    }
L_00077f2c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x88u);
    }
L_00077f30:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00077f34:;
    {
        wr32(cpu->r[7] + + 0x2cu, cpu->r[11]);
    }
L_00077f38:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00077f3c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00077f40:;
    {
        cpu->r[14] = 0x00077f44u; guest_call(cpu, cpu->r[3]);
    }
L_00077f44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00077f48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00077eb4;
        }
    }
L_00077f4c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_00077f50:;
    {
        cpu->r[0] = (~0x00000004u);
    }
L_00077f54:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00077f58:;
    {
        goto L_000778cc;
    }
L_00077f5c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00077f60:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 0);
    }
L_00077f64:;
    {
        uint32_t v = shifter(cpu->r[6], 3, (cpu->r[8] & 0xffu), &shc); cpu->r[6] = v;
    }
L_00077f68:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[1]);
    }
L_00077f6c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00077f70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00078038;
        }
    }
L_00077f74:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00077f78:;
    {
        cpu->r[2] = 0x00000012u;
    }
L_00077f7c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x40u);
    }
L_00077f80:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000001u, 1, 0);
    }
L_00077f84:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00077f88:;
    {
        uint32_t wb_tmp = cpu->r[8] + 0x00000001u;
        wr8(cpu->r[8], cpu->r[1]);
        cpu->r[8] = wb_tmp;
    }
L_00077f8c:;
    {
        wr32(cpu->r[7], cpu->r[2]);
    }
L_00077f90:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[8]);
    }
L_00077f94:;
    {
        goto L_0007786c;
    }
L_00077f98:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[6]);
    }
L_00077f9c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00077fa0:;
    {
        cpu->r[3] = 0x0000000bu;
    }
L_00077fa4:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_00077fa8:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_00077fac:;
    {
        goto L_0007786c;
    }
L_00077fb0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00077fb4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 0);
    }
L_00077fb8:;
    {
        uint32_t v = shifter(cpu->r[6], 3, (cpu->r[8] & 0xffu), &shc); cpu->r[6] = v;
    }
L_00077fbc:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[0]);
    }
L_00077fc0:;
    {
        { uint32_t v = cpu->r[1] & 0x00000020u; set_nz(cpu, v); }
    }
L_00077fc4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000000bu;
        }
    }
L_00077fc8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[7], cpu->r[3]);
        }
    }
L_00077fcc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007786c;
        }
    }
L_00077fd0:;
    {
        { uint32_t v = cpu->r[1] & 0x00000040u; set_nz(cpu, v); }
    }
L_00077fd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00078068;
        }
    }
L_00077fd8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00077fdc:;
    {
        cpu->r[3] = 0x0000001bu;
    }
L_00077fe0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00077fe4:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_00077fe8:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[12]);
    }
L_00077fec:;
    {
        goto L_0007786c;
    }
L_00077ff0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00077ff4:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_00077ff8:;
    {
        cpu->r[3] = rd32(0x00078000u + + 0x7ccu);
    }
L_00077ffc:;
    {
        wr32(cpu->r[7], cpu->r[1]);
    }
L_00078000:;
    {
        cpu->r[3] = add_flags(cpu, 0x00078008u, cpu->r[3], 0, 0);
    }
L_00078004:;
    {
        wr32(cpu->r[12] + + 0x18u, cpu->r[3]);
    }
L_00078008:;
    {
        goto L_00077e58;
    }
L_0007800c:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_00078010:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x48u);
    }
L_00078014:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x54u);
    }
L_00078018:;
    {
        uint32_t v = shifter(cpu->r[6], 3, (cpu->r[8] & 0xffu), &shc); cpu->r[6] = v;
    }
L_0007801c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00078020:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 0);
    }
L_00078024:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[0]);
    }
L_00078028:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 0);
    }
L_0007802c:;
    {
        uint32_t v = shifter(cpu->r[6], 3, (cpu->r[12] & 0xffu), &shc); cpu->r[6] = v;
    }
L_00078030:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00077fc0;
        }
    }
L_00078034:;
    {
        goto L_00077f6c;
    }
L_00078038:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x34u);
    }
L_0007803c:;
    {
        cpu->r[11] = rd32(cpu->r[7] + + 0x28u);
    }
L_00078040:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x88u);
    }
L_00078044:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_00078048:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0007804c:;
    {
        wr32(cpu->r[7] + + 0x2cu, cpu->r[11]);
    }
L_00078050:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00078054:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00078058:;
    {
        cpu->r[14] = 0x0007805cu; guest_call(cpu, cpu->r[3]);
    }
L_0007805c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00078060:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00077f74;
        }
    }
L_00078064:;
    {
        goto L_00077f4c;
    }
L_00078068:;
    {
        uint32_t v = cpu->r[1] & 0x0000000fu; cpu->r[0] = v;
    }
L_0007806c:;
    {
        wr32(cpu->r[7] + + 0x48u, cpu->r[0]);
    }
L_00078070:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00078074:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000780f0;
        }
    }
L_00078078:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_0007807c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_00078080:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000780d4;
        }
    }
L_00078084:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_00078088:;
    {
        goto L_000780b4;
    }
L_0007808c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00078090:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_00078094:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x48u);
    }
L_00078098:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000001u;
        cpu->r[1] = rd8(cpu->r[2]);
        cpu->r[2] = wb_tmp;
    }
L_0007809c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000780a0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[1], 2, (cpu->r[4] & 0xffu), &shc), 0, 0);
    }
L_000780a4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_000780a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000780ac:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[2]);
    }
L_000780b0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000780d4;
        }
    }
L_000780b4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000780b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007808c;
        }
    }
L_000780bc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000780c0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000780c4:;
    {
        cpu->r[14] = 0x000780c8u; guest_call(cpu, cpu->r[9]);
    }
L_000780c8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000780cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007808c;
        }
    }
L_000780d0:;
    {
        goto L_000779f4;
    }
L_000780d4:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000780d8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x40u);
    }
L_000780dc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
    }
L_000780e0:;
    {
        uint32_t v = cpu->r[6] & ~ shifter(cpu->r[2], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[2] = v;
    }
L_000780e4:;
    {
        uint32_t v = shifter(cpu->r[6], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[6] = v;
    }
L_000780e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000780ec:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[2]);
    }
L_000780f0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000780f4:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x58u);
    }
L_000780f8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x50u);
    }
L_000780fc:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[8] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00078100:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00078104:;
    {
        uint32_t v = cpu->r[6] & cpu->r[3]; cpu->r[3] = v;
    }
L_00078108:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007810c:;
    {
        cpu->r[0] = rd8(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00078110:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x1u);
    }
L_00078114:;
    {
        cpu->r[12] = rd16(cpu->r[1] + + 0x2u);
    }
L_00078118:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0007811c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_00078120:;
    {
        if (cond_test(cpu, 3)) {
        goto L_000781a4;
        }
    }
L_00078124:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_00078128:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[11]);
    }
L_0007812c:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_00078130:;
    {
        goto L_00078174;
    }
L_00078134:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00078138:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0007813c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_00078140:;
    {
        uint32_t v = shifter(cpu->r[12], 2, (cpu->r[8] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00078144:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        cpu->r[0] = rd8(cpu->r[3]);
        cpu->r[3] = wb_tmp;
    }
L_00078148:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0007814c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[0], 2, (cpu->r[4] & 0xffu), &shc), 0, 0);
    }
L_00078150:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_00078154:;
    {
        uint32_t v = cpu->r[6] & cpu->r[1]; cpu->r[3] = v;
    }
L_00078158:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0007815c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00078160:;
    {
        cpu->r[0] = rd8(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00078164:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x1u);
    }
L_00078168:;
    {
        cpu->r[12] = rd16(cpu->r[1] + + 0x2u);
    }
L_0007816c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00078170:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0007819c;
        }
    }
L_00078174:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00078178:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078134;
        }
    }
L_0007817c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00078180:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00078184:;
    {
        cpu->r[14] = 0x00078188u; guest_call(cpu, cpu->r[9]);
    }
L_00078188:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007818c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000779f4;
        }
    }
L_00078190:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x50u);
    }
L_00078194:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x58u);
    }
L_00078198:;
    {
        goto L_00078134;
    }
L_0007819c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x18u);
    }
L_000781a0:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_000781a4:;
    {
        { uint32_t v = cpu->r[0] & 0x000000f0u; set_nz(cpu, v); }
    }
L_000781a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078270;
        }
    }
L_000781ac:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_000781b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000781b4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000781b8:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[12]);
    }
L_000781bc:;
    {
        cpu->r[3] = (~shifter(cpu->r[3], 2, (cpu->r[0] & 0xffu), &shc));
    }
L_000781c0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000781c4:;
    {
        uint32_t v = cpu->r[3] & cpu->r[6]; cpu->r[3] = v;
    }
L_000781c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 3, (cpu->r[8] & 0xffu), &shc), 0, 0);
    }
L_000781cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000781d0:;
    {
        cpu->r[0] = rd8(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000781d4:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x1u);
    }
L_000781d8:;
    {
        cpu->r[12] = rd16(cpu->r[1] + + 0x2u);
    }
L_000781dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_000781e0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_000781e4:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00078264;
        }
    }
L_000781e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_000781ec:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[11]);
    }
L_000781f0:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[0]);
    }
L_000781f4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x50u);
    }
L_000781f8:;
    {
        goto L_0007823c;
    }
L_000781fc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00078200:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_00078204:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        cpu->r[1] = rd8(cpu->r[3]);
        cpu->r[3] = wb_tmp;
    }
L_00078208:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[1], 2, (cpu->r[4] & 0xffu), &shc), 0, 0);
    }
L_0007820c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00078210:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_00078214:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00078218:;
    {
        uint32_t v = cpu->r[6] & cpu->r[1]; cpu->r[3] = v;
    }
L_0007821c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], shifter(cpu->r[3], 3, (cpu->r[8] & 0xffu), &shc), 0, 0);
    }
L_00078220:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00078224:;
    {
        cpu->r[0] = rd8(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00078228:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x1u);
    }
L_0007822c:;
    {
        cpu->r[12] = rd16(cpu->r[1] + + 0x2u);
    }
L_00078230:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_00078234:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_00078238:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00078260;
        }
    }
L_0007823c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00078240:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000781fc;
        }
    }
L_00078244:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00078248:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_0007824c:;
    {
        cpu->r[14] = 0x00078250u; guest_call(cpu, cpu->r[9]);
    }
L_00078250:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00078254:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000779f4;
        }
    }
L_00078258:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x50u);
    }
L_0007825c:;
    {
        goto L_000781fc;
    }
L_00078260:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x54u);
    }
L_00078264:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00078268:;
    {
        uint32_t v = shifter(cpu->r[6], 3, (cpu->r[8] & 0xffu), &shc); cpu->r[6] = v;
    }
L_0007826c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 0);
    }
L_00078270:;
    {
        { uint32_t v = cpu->r[0] & 0x00000040u; set_nz(cpu, v); }
    }
L_00078274:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
    }
L_00078278:;
    {
        uint32_t v = shifter(cpu->r[6], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[6] = v;
    }
L_0007827c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00078448;
        }
    }
L_00078280:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_00078284:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_00078288:;
    {
        cpu->r[2] = rd32(0x00078290u + + 0x540u);
    }
L_0007828c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00078290:;
    {
        wr32(cpu->r[7], cpu->r[1]);
    }
L_00078294:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007829cu, cpu->r[2], 0, 0);
    }
L_00078298:;
    {
        wr32(cpu->r[8] + + 0x18u, cpu->r[2]);
    }
L_0007829c:;
    {
        goto L_0007786c;
    }
L_000782a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_000782a4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x60u);
    }
L_000782a8:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x64u);
    }
L_000782ac:;
    {
        wr32(cpu->r[7] + + 0x68u, cpu->r[0]);
    }
L_000782b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000782b4:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000782b8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000782bc:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[11]);
    }
L_000782c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000782c4:;
    {
        cpu->r[11] = rd32(cpu->r[7] + + 0x68u);
    }
L_000782c8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[1], 0, 0);
    }
L_000782cc:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[8], 1, 1);
    }
L_000782d0:;
    {
        if (cond_test(cpu, 3)) {
        goto L_000786c4;
        }
    }
L_000782d4:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_000782d8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x54u);
    }
L_000782dc:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4cu);
    }
L_000782e0:;
    {
        uint32_t v = shifter(cpu->r[8], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000782e4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000782e8:;
    {
        uint32_t v = cpu->r[6] & cpu->r[3]; cpu->r[3] = v;
    }
L_000782ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000782f0:;
    {
        cpu->r[8] = rd8(cpu->r[3] + + 0x1u);
    }
L_000782f4:;
    {
        cpu->r[11] = rd16(cpu->r[3] + + 0x2u);
    }
L_000782f8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_000782fc:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00078340;
        }
    }
L_00078300:;
    {
        goto L_00078368;
    }
L_00078304:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00078308:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_0007830c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00078310:;
    {
        uint32_t v = shifter(cpu->r[8], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[12] = v;
    }
L_00078314:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        cpu->r[8] = rd8(cpu->r[3]);
        cpu->r[3] = wb_tmp;
    }
L_00078318:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_0007831c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[8], 2, (cpu->r[4] & 0xffu), &shc), 0, 0);
    }
L_00078320:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_00078324:;
    {
        uint32_t v = cpu->r[6] & cpu->r[12]; cpu->r[12] = v;
    }
L_00078328:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0007832c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00078330:;
    {
        cpu->r[8] = rd8(cpu->r[12] + + 0x1u);
    }
L_00078334:;
    {
        cpu->r[11] = rd16(cpu->r[12] + + 0x2u);
    }
L_00078338:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[4], 1, 1);
    }
L_0007833c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00078368;
        }
    }
L_00078340:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00078344:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078304;
        }
    }
L_00078348:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0007834c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00078350:;
    {
        cpu->r[14] = 0x00078354u; guest_call(cpu, cpu->r[9]);
    }
L_00078354:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00078358:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00077c70;
        }
    }
L_0007835c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x54u);
    }
L_00078360:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4cu);
    }
L_00078364:;
    {
        goto L_00078304;
    }
L_00078368:;
    {
        sub_flags(cpu, cpu->r[11], 0x0000000fu, 1, 1);
    }
L_0007836c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000783bc;
        }
    }
L_00078370:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_00078374:;
    {
        if (cond_test(cpu, 4)) {
        goto L_0007839c;
        }
    }
L_00078378:;
    {
        goto L_0007841c;
    }
L_0007837c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00078380:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00078384:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        cpu->r[2] = rd8(cpu->r[3]);
        cpu->r[3] = wb_tmp;
    }
L_00078388:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, (cpu->r[4] & 0xffu), &shc), 0, 0);
    }
L_0007838c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00078390:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_00078394:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_00078398:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0007841c;
        }
    }
L_0007839c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000783a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007837c;
        }
    }
L_000783a4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000783a8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000783ac:;
    {
        cpu->r[14] = 0x000783b0u; guest_call(cpu, cpu->r[9]);
    }
L_000783b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000783b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007837c;
        }
    }
L_000783b8:;
    {
        goto L_00077c70;
    }
L_000783bc:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000010u, 1, 1);
    }
L_000783c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00078644;
        }
    }
L_000783c4:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000011u, 1, 1);
    }
L_000783c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00078734;
        }
    }
L_000783cc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], 0x00000007u, 0, 0);
    }
L_000783d0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 1);
    }
L_000783d4:;
    {
        if (cond_test(cpu, 4)) {
        goto L_000783fc;
        }
    }
L_000783d8:;
    {
        goto L_000785cc;
    }
L_000783dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000783e0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000783e4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        cpu->r[2] = rd8(cpu->r[3]);
        cpu->r[3] = wb_tmp;
    }
L_000783e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, (cpu->r[4] & 0xffu), &shc), 0, 0);
    }
L_000783ec:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_000783f0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 1);
    }
L_000783f4:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_000783f8:;
    {
        if (cond_test(cpu, 3)) {
        goto L_000785cc;
        }
    }
L_000783fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00078400:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000783dc;
        }
    }
L_00078404:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00078408:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0007840c:;
    {
        cpu->r[14] = 0x00078410u; guest_call(cpu, cpu->r[9]);
    }
L_00078410:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00078414:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000783dc;
        }
    }
L_00078418:;
    {
        goto L_00077c70;
    }
L_0007841c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x68u);
    }
L_00078420:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 0);
    }
L_00078424:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x60u);
    }
L_00078428:;
    {
        uint32_t v = shifter(cpu->r[6], 3, (cpu->r[8] & 0xffu), &shc); cpu->r[6] = v;
    }
L_0007842c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00078430:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x64u);
    }
L_00078434:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00078438:;
    {
        wr32(cpu->r[7] + + 0x68u, cpu->r[2]);
    }
L_0007843c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_00078440:;
    {
        wr16(cpu->r[3] + + 0x70u, cpu->r[11]);
    }
L_00078444:;
    {
        goto L_000782c0;
    }
L_00078448:;
    {
        uint32_t v = cpu->r[0] & 0x0000000fu; cpu->r[0] = v;
    }
L_0007844c:;
    {
        wr32(cpu->r[7] + + 0x44u, cpu->r[12]);
    }
L_00078450:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00078454:;
    {
        wr32(cpu->r[7] + + 0x48u, cpu->r[0]);
    }
L_00078458:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000784d4;
        }
    }
L_0007845c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_00078460:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_00078464:;
    {
        if (cond_test(cpu, 3)) {
        goto L_000784b8;
        }
    }
L_00078468:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_0007846c:;
    {
        goto L_00078498;
    }
L_00078470:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00078474:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_00078478:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x48u);
    }
L_0007847c:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000001u;
        cpu->r[1] = rd8(cpu->r[2]);
        cpu->r[2] = wb_tmp;
    }
L_00078480:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00078484:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[1], 2, (cpu->r[4] & 0xffu), &shc), 0, 0);
    }
L_00078488:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0007848c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00078490:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[2]);
    }
L_00078494:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000784b8;
        }
    }
L_00078498:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0007849c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078470;
        }
    }
L_000784a0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000784a4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000784a8:;
    {
        cpu->r[14] = 0x000784acu; guest_call(cpu, cpu->r[9]);
    }
L_000784ac:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000784b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078470;
        }
    }
L_000784b4:;
    {
        goto L_000779f4;
    }
L_000784b8:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000784bc:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x44u);
    }
L_000784c0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
    }
L_000784c4:;
    {
        uint32_t v = cpu->r[6] & ~ shifter(cpu->r[2], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[2] = v;
    }
L_000784c8:;
    {
        uint32_t v = shifter(cpu->r[6], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[6] = v;
    }
L_000784cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000784d0:;
    {
        wr32(cpu->r[7] + + 0x44u, cpu->r[2]);
    }
L_000784d4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x2cu);
    }
L_000784d8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x28u);
    }
L_000784dc:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x44u);
    }
L_000784e0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000784e4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = cpu->r[11];
        }
    }
L_000784e8:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000784ec:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_000784f0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000784f4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[8] = cpu->r[4];
        }
    }
L_000784f8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[4] = rd32(cpu->r[13] + + 0x1cu);
        }
    }
L_000784fc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00078534;
        }
    }
L_00078500:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00078504:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_00078508:;
    {
        cpu->r[2] = rd32(0x00078510u + + 0x2c4u);
    }
L_0007850c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00078510:;
    {
        wr32(cpu->r[7], cpu->r[1]);
    }
L_00078514:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007851cu, cpu->r[2], 0, 0);
    }
L_00078518:;
    {
        wr32(cpu->r[12] + + 0x18u, cpu->r[2]);
    }
L_0007851c:;
    {
        goto L_0007786c;
    }
L_00078520:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x40u);
    }
L_00078524:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_00078528:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007852c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000785bc;
        }
    }
L_00078530:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x28u);
    }
L_00078534:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00078538:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007858c;
        }
    }
L_0007853c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x44u);
    }
L_00078540:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x40u);
    }
L_00078544:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_00078548:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_0007854c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
        }
    }
L_00078550:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[1] = cpu->r[11];
        }
    }
L_00078554:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
        }
    }
L_00078558:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 0);
        }
    }
L_0007855c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00078560:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_00078564:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00078568:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 0);
    }
L_0007856c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_00078570:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[2]);
    }
L_00078574:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00078578:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0007857c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00078580:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00078584:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078574;
        }
    }
L_00078588:;
    {
        goto L_00078520;
    }
L_0007858c:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0x34u);
    }
L_00078590:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00078594:;
    {
        wr32(cpu->r[7] + + 0x2cu, cpu->r[3]);
    }
L_00078598:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_0007859c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x88u);
    }
L_000785a0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000785a4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000785a8:;
    {
        cpu->r[14] = 0x000785acu; guest_call(cpu, cpu->r[3]);
    }
L_000785ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000785b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00077f4c;
        }
    }
L_000785b4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x28u);
    }
L_000785b8:;
    {
        goto L_0007853c;
    }
L_000785bc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[4]);
    }
L_000785c0:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_000785c4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000785c8:;
    {
        goto L_0007786c;
    }
L_000785cc:;
    {
        cpu->r[3] = 0x0000fff9u;
    }
L_000785d0:;
    {
        uint32_t v = shifter(cpu->r[6], 3, (cpu->r[8] & 0xffu), &shc); cpu->r[6] = v;
    }
L_000785d4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_000785d8:;
    {
        uint32_t v = cpu->r[6] & 0x0000007fu; cpu->r[1] = v;
    }
L_000785dc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_000785e0:;
    {
        cpu->r[11] = rd32(cpu->r[7] + + 0x68u);
    }
L_000785e4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000785e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000bu, 0, 0);
    }
L_000785ec:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 7u, &shc); cpu->r[6] = v;
    }
L_000785f0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000785f4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x60u);
    }
L_000785f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[11], 0, 0);
    }
L_000785fc:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x64u);
    }
L_00078600:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[2]);
    }
L_00078604:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_00078608:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_0007860c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00078610:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00078810;
        }
    }
L_00078614:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[12]);
    }
L_00078618:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_0007861c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[7], shifter(cpu->r[11], 2, 1u, &shc), 0, 0);
    }
L_00078620:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00078624:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_00078628:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0007862c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00078630:;
    {
        wr16(cpu->r[2] + + 0x70u, cpu->r[12]);
    }
L_00078634:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078624;
        }
    }
L_00078638:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0007863c:;
    {
        wr32(cpu->r[7] + + 0x68u, cpu->r[12]);
    }
L_00078640:;
    {
        goto L_000782c0;
    }
L_00078644:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_00078648:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 1);
    }
L_0007864c:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00078674;
        }
    }
L_00078650:;
    {
        goto L_00078694;
    }
L_00078654:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00078658:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0007865c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        cpu->r[2] = rd8(cpu->r[3]);
        cpu->r[3] = wb_tmp;
    }
L_00078660:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, (cpu->r[4] & 0xffu), &shc), 0, 0);
    }
L_00078664:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00078668:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 1);
    }
L_0007866c:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_00078670:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00078694;
        }
    }
L_00078674:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00078678:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078654;
        }
    }
L_0007867c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00078680:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00078684:;
    {
        cpu->r[14] = 0x00078688u; guest_call(cpu, cpu->r[9]);
    }
L_00078688:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007868c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078654;
        }
    }
L_00078690:;
    {
        goto L_00077c70;
    }
L_00078694:;
    {
        cpu->r[11] = rd32(cpu->r[7] + + 0x68u);
    }
L_00078698:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 0);
    }
L_0007869c:;
    {
        uint32_t v = shifter(cpu->r[6], 3, (cpu->r[8] & 0xffu), &shc); cpu->r[6] = v;
    }
L_000786a0:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000786a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000787e8;
        }
    }
L_000786a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], shifter(cpu->r[11], 2, 1u, &shc), 0, 0);
    }
L_000786ac:;
    {
        uint32_t v = cpu->r[6] & 0x00000003u; cpu->r[1] = v;
    }
L_000786b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_000786b4:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 2u, &shc); cpu->r[6] = v;
    }
L_000786b8:;
    {
        cpu->r[12] = rd16(cpu->r[3] + + 0x6eu);
    }
L_000786bc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000002u, 1, 0);
    }
L_000786c0:;
    {
        goto L_000785f4;
    }
L_000786c4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000786c8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000786cc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x48u);
    }
L_000786d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001bu, 1, 1);
    }
L_000786d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007786c;
        }
    }
L_000786d8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000786dc:;
    {
        cpu->r[3] = 0x00000009u;
    }
L_000786e0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_000786e4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000786e8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_000786ec:;
    {
        wr32(cpu->r[7] + + 0x54u, cpu->r[3]);
    }
L_000786f0:;
    {
        wr32(cpu->r[7] + + 0x6cu, cpu->r[12]);
    }
L_000786f4:;
    {
        wr32(cpu->r[7] + + 0x4cu, cpu->r[12]);
    }
L_000786f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_000786fc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_00078700:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00078704:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x60u);
    }
L_00078708:;
    {
        cpu->r[14] = 0x0007870cu; fn_0007b038(cpu);
    }
L_0007870c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00078710:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00078838;
        }
    }
L_00078714:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00078718:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_0007871c:;
    {
        cpu->r[2] = rd32(0x00078724u + + 0xb4u);
    }
L_00078720:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00078724:;
    {
        wr32(cpu->r[7], cpu->r[1]);
    }
L_00078728:;
    {
        cpu->r[2] = add_flags(cpu, 0x00078730u, cpu->r[2], 0, 0);
    }
L_0007872c:;
    {
        wr32(cpu->r[12] + + 0x18u, cpu->r[2]);
    }
L_00078730:;
    {
        goto L_0007786c;
    }
L_00078734:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], 0x00000003u, 0, 0);
    }
L_00078738:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 1);
    }
L_0007873c:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00078764;
        }
    }
L_00078740:;
    {
        goto L_00078784;
    }
L_00078744:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00078748:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0007874c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        cpu->r[2] = rd8(cpu->r[3]);
        cpu->r[3] = wb_tmp;
    }
L_00078750:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, (cpu->r[4] & 0xffu), &shc), 0, 0);
    }
L_00078754:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00078758:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 1);
    }
L_0007875c:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_00078760:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00078784;
        }
    }
L_00078764:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00078768:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078744;
        }
    }
L_0007876c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00078770:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00078774:;
    {
        cpu->r[14] = 0x00078778u; guest_call(cpu, cpu->r[9]);
    }
L_00078778:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007877c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078744;
        }
    }
L_00078780:;
    {
        goto L_00077c70;
    }
L_00078784:;
    {
        cpu->r[3] = 0x0000fffdu;
    }
L_00078788:;
    {
        uint32_t v = shifter(cpu->r[6], 3, (cpu->r[8] & 0xffu), &shc); cpu->r[6] = v;
    }
L_0007878c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_00078790:;
    {
        uint32_t v = cpu->r[6] & 0x00000007u; cpu->r[1] = v;
    }
L_00078794:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_00078798:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_0007879c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000787a0:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 3u, &shc); cpu->r[6] = v;
    }
L_000787a4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000787a8:;
    {
        cpu->r[11] = rd32(cpu->r[7] + + 0x68u);
    }
L_000787ac:;
    {
        goto L_000785f4;
    }
L_000787e8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000787ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000787f0:;
    {
        cpu->r[2] = rd32(0x000787f8u + - 0x1cu);
    }
L_000787f4:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_000787f8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x48u);
    }
L_000787fc:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00078800:;
    {
        cpu->r[2] = add_flags(cpu, 0x00078808u, cpu->r[2], 0, 0);
    }
L_00078804:;
    {
        wr32(cpu->r[7], cpu->r[1]);
    }
L_00078808:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_0007880c:;
    {
        goto L_0007786c;
    }
L_00078810:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_00078814:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_00078818:;
    {
        cpu->r[2] = rd32(0x00078820u + - 0x40u);
    }
L_0007881c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00078820:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x48u);
    }
L_00078824:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00078828:;
    {
        cpu->r[2] = add_flags(cpu, 0x00078830u, cpu->r[2], 0, 0);
    }
L_0007882c:;
    {
        wr32(cpu->r[7], cpu->r[1]);
    }
L_00078830:;
    {
        wr32(cpu->r[8] + + 0x18u, cpu->r[2]);
    }
L_00078834:;
    {
        goto L_0007786c;
    }
L_00078838:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x6cu);
    }
L_0007883c:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_00078840:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x60u);
    }
L_00078844:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_00078848:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_0007884c:;
    {
        wr32(cpu->r[7] + + 0x50u, cpu->r[2]);
    }
L_00078850:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000038u, 0, 0);
    }
L_00078854:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_00078858:;
    {
        wr32(cpu->r[7] + + 0x58u, cpu->r[3]);
    }
L_0007885c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0] + cpu->r[7]; cpu->r[1] = v;
    }
L_00078860:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00078864:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_00078868:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x64u);
    }
L_0007886c:;
    {
        cpu->r[14] = 0x00078870u; fn_0007b038(cpu);
    }
L_00078870:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00078874:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000012u;
        }
    }
L_00078878:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[7], cpu->r[3]);
        }
    }
L_0007887c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000778f0;
        }
    }
L_00078880:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00078884:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_00078888:;
    {
        cpu->r[2] = rd32(0x00078890u + - 0xacu);
    }
L_0007888c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00078890:;
    {
        wr32(cpu->r[7], cpu->r[1]);
    }
L_00078894:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007889cu, cpu->r[2], 0, 0);
    }
L_00078898:;
    {
        wr32(cpu->r[12] + + 0x18u, cpu->r[2]);
    }
L_0007889c:;
    {
        goto L_0007786c;
    }
}

/* inflate_fast @ 000788a0 (arm) */
void fn_000788a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000788a0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x1cu);
    }
L_000788a4:;
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
L_000788a8:;
    {
        cpu->r[8] = rd32(cpu->r[0]);
    }
L_000788ac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000040u, 1, 0);
    }
L_000788b0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x10u);
    }
L_000788b4:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_000788b8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_000788bc:;
    {
        cpu->r[10] = rd32(cpu->r[12] + + 0x58u);
    }
L_000788c0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[4], 0x00000100u, 1, 0);
    }
L_000788c4:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_000788c8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 0);
    }
L_000788cc:;
    {
        cpu->r[8] = rd32(cpu->r[12] + + 0x54u);
    }
L_000788d0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000788d4:;
    {
        cpu->r[9] = rd32(cpu->r[12] + + 0x28u);
    }
L_000788d8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_000788dc:;
    {
        cpu->r[11] = rd32(cpu->r[12] + + 0x30u);
    }
L_000788e0:;
    {
        uint32_t v = shifter(cpu->r[7], 2, (cpu->r[8] & 0xffu), &shc); cpu->r[8] = v;
    }
L_000788e4:;
    {
        cpu->r[4] = rd32(cpu->r[12] + + 0x34u);
    }
L_000788e8:;
    {
        uint32_t v = shifter(cpu->r[7], 2, (cpu->r[10] & 0xffu), &shc); cpu->r[7] = v;
    }
L_000788ec:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x4u);
    }
L_000788f0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_000788f4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_000788f8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_000788fc:;
    {
        cpu->r[10] = rd32(cpu->r[13]);
    }
L_00078900:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000005u, 1, 0);
    }
L_00078904:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00078908:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[9]);
    }
L_0007890c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
    }
L_00078910:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_00078914:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[4]);
    }
L_00078918:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_0007891c:;
    {
        cpu->r[9] = rd32(cpu->r[12] + + 0x2cu);
    }
L_00078920:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_00078924:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_00078928:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_0007892c:;
    {
        cpu->r[4] = rd32(cpu->r[12] + + 0x38u);
    }
L_00078930:;
    {
        cpu->r[5] = rd32(cpu->r[12] + + 0x3cu);
    }
L_00078934:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x4cu);
    }
L_00078938:;
    {
        cpu->r[10] = rd32(cpu->r[12] + + 0x50u);
    }
L_0007893c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_00078940:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[7]);
    }
L_00078944:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_00078948:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007894c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x18u);
    }
L_00078950:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000001u, 1, 0);
    }
L_00078954:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[9]);
    }
L_00078958:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_0007895c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_00078960:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[11]);
    }
L_00078964:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[6]);
    }
L_00078968:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000eu, 1, 1);
    }
L_0007896c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00078998;
        }
    }
L_00078970:;
    {
        cpu->r[8] = rd32(cpu->r[13]);
    }
L_00078974:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00078978:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0007897c:;
    {
        cpu->r[8] = rd8(cpu->r[8] + + 0x1u);
    }
L_00078980:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00078984:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_00078988:;
    {
        cpu->r[7] = rd8(cpu->r[7] + + 0x1u);
    }
L_0007898c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[8], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_00078990:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000008u, 0, 0);
    }
L_00078994:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[7], 2, (cpu->r[6] & 0xffu), &shc), 0, 0);
    }
L_00078998:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007899c:;
    {
        uint32_t v = cpu->r[4] & cpu->r[11]; cpu->r[8] = v;
    }
L_000789a0:;
    {
        goto L_000789c4;
    }
L_000789a4:;
    {
        { uint32_t v = cpu->r[6] & 0x00000010u; set_nz(cpu, v); }
    }
L_000789a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078a5c;
        }
    }
L_000789ac:;
    {
        { uint32_t v = cpu->r[6] & 0x00000040u; set_nz(cpu, v); }
    }
L_000789b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078c1c;
        }
    }
L_000789b4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[6] = v;
    }
L_000789b8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_000789bc:;
    {
        uint32_t v = cpu->r[6] & cpu->r[4]; cpu->r[6] = v;
    }
L_000789c0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], cpu->r[8], 0, 0);
    }
L_000789c4:;
    {
        cpu->r[6] = rd8(cpu->r[1] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_000789c8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_000789cc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000789d0:;
    {
        cpu->r[7] = rd8(cpu->r[8] + + 0x1u);
    }
L_000789d4:;
    {
        cpu->r[8] = rd16(cpu->r[8] + + 0x2u);
    }
L_000789d8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 0);
    }
L_000789dc:;
    {
        uint32_t v = shifter(cpu->r[4], 3, (cpu->r[7] & 0xffu), &shc); cpu->r[4] = v;
    }
L_000789e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000789a4;
        }
    }
L_000789e4:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x1u;
        wr8(cpu->r[2] + + 0x1u, cpu->r[8]);
        cpu->r[2] = wb_tmp;
    }
L_000789e8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x4u);
    }
L_000789ec:;
    {
        cpu->r[11] = rd32(cpu->r[13]);
    }
L_000789f0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x8u);
    }
L_000789f4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 1);
    }
L_000789f8:;
    {
        if (cond_test(cpu, 4)) {
        sub_flags(cpu, cpu->r[11], cpu->r[6], 1, 1);
        }
    }
L_000789fc:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00078968;
        }
    }
L_00078a00:;
    {
        uint32_t v = shifter(cpu->r[5], 3, 3u, &shc); cpu->r[1] = v;
    }
L_00078a04:;
    {
        cpu->r[8] = rd32(cpu->r[13]);
    }
L_00078a08:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[7] = v0;
        cpu->r[9] = v1;
    }
L_00078a0c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 0);
    }
L_00078a10:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 3u, &shc), 1, 0);
    }
L_00078a14:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], 0x00000005u, 0, 0);
    }
L_00078a18:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00078a1c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x00000100u, 0, 0);
    }
L_00078a20:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00078a24:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00078a28:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00078a2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00078a30:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_00078a34:;
    {
        uint32_t v = cpu->r[4] & ~ shifter(cpu->r[1], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[4] = v;
    }
L_00078a38:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[6]);
    }
L_00078a3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00078a40:;
    {
        wr32(cpu->r[12] + + 0x3cu, cpu->r[5]);
    }
L_00078a44:;
    {
        wr32(cpu->r[12] + + 0x38u, cpu->r[4]);
    }
L_00078a48:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00078a4c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00078a50:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_00078a54:;
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
L_00078a58:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00078a5c:;
    {
        uint32_t v = cpu->r[6] & 0x0000000fu; cpu->r[6] = v;
        set_nz(cpu, v);
    }
L_00078a60:;
    {
        cpu->r[7] = cpu->r[8];
    }
L_00078a64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00078a98;
        }
    }
L_00078a68:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_00078a6c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[9] = rd32(cpu->r[13]);
        }
    }
L_00078a70:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t wb_tmp = cpu->r[9] + + 0x1u;
        cpu->r[7] = rd8(cpu->r[9] + + 0x1u);
        cpu->r[9] = wb_tmp;
        }
    }
L_00078a74:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[7], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
        }
    }
L_00078a78:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[7] = v;
    }
L_00078a7c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_00078a80:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
        }
    }
L_00078a84:;
    {
        uint32_t v = cpu->r[4] & cpu->r[7]; cpu->r[7] = v;
    }
L_00078a88:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 0);
    }
L_00078a8c:;
    {
        uint32_t v = shifter(cpu->r[4], 3, (cpu->r[6] & 0xffu), &shc); cpu->r[4] = v;
    }
L_00078a90:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_00078a94:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[13], cpu->r[9]);
        }
    }
L_00078a98:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000eu, 1, 1);
    }
L_00078a9c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00078c44;
        }
    }
L_00078aa0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00078aa4:;
    {
        uint32_t v = cpu->r[4] & cpu->r[8]; cpu->r[6] = v;
    }
L_00078aa8:;
    {
        goto L_00078ac4;
    }
L_00078aac:;
    {
        { uint32_t v = cpu->r[8] & 0x00000040u; set_nz(cpu, v); }
    }
L_00078ab0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078cb8;
        }
    }
L_00078ab4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[8] & 0xffu), &shc); cpu->r[8] = v;
    }
L_00078ab8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_00078abc:;
    {
        uint32_t v = cpu->r[8] & cpu->r[4]; cpu->r[8] = v;
    }
L_00078ac0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], cpu->r[6], 0, 0);
    }
L_00078ac4:;
    {
        cpu->r[8] = rd8(cpu->r[10] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_00078ac8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_00078acc:;
    {
        { uint32_t v = cpu->r[8] & 0x00000010u; set_nz(cpu, v); }
    }
L_00078ad0:;
    {
        cpu->r[9] = rd8(cpu->r[6] + + 0x1u);
    }
L_00078ad4:;
    {
        cpu->r[6] = rd16(cpu->r[6] + + 0x2u);
    }
L_00078ad8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[9], 1, 0);
    }
L_00078adc:;
    {
        uint32_t v = shifter(cpu->r[4], 3, (cpu->r[9] & 0xffu), &shc); cpu->r[4] = v;
    }
L_00078ae0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00078aac;
        }
    }
L_00078ae4:;
    {
        uint32_t v = cpu->r[8] & 0x0000000fu; cpu->r[8] = v;
    }
L_00078ae8:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 1);
    }
L_00078aec:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00078b18;
        }
    }
L_00078af0:;
    {
        cpu->r[11] = rd32(cpu->r[13]);
    }
L_00078af4:;
    {
        uint32_t wb_tmp = cpu->r[11] + + 0x1u;
        cpu->r[9] = rd8(cpu->r[11] + + 0x1u);
        cpu->r[11] = wb_tmp;
    }
L_00078af8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[9], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_00078afc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00078b00:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 1);
    }
L_00078b04:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_00078b08:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t wb_tmp = cpu->r[11] + + 0x1u;
        cpu->r[9] = rd8(cpu->r[11] + + 0x1u);
        cpu->r[11] = wb_tmp;
        }
    }
L_00078b0c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[9], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
        }
    }
L_00078b10:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
        }
    }
L_00078b14:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[13], cpu->r[11]);
        }
    }
L_00078b18:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[8] & 0xffu), &shc); cpu->r[9] = v;
    }
L_00078b1c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[9]);
    }
L_00078b20:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x20u);
    }
L_00078b24:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 0);
    }
L_00078b28:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 0);
    }
L_00078b2c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x30u);
    }
L_00078b30:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 0);
    }
L_00078b34:;
    {
        uint32_t v = cpu->r[4] & cpu->r[9]; cpu->r[9] = v;
    }
L_00078b38:;
    {
        uint32_t v = shifter(cpu->r[4], 3, (cpu->r[8] & 0xffu), &shc); cpu->r[4] = v;
    }
L_00078b3c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[9], cpu->r[6], 0, 0);
    }
L_00078b40:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[9]);
    }
L_00078b44:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[11], 1, 1);
    }
L_00078b48:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[6] = sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 0);
        }
    }
L_00078b4c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00078c70;
        }
    }
L_00078b50:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_00078b54:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[6], cpu->r[11], 1, 0);
    }
L_00078b58:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[11], 1, 1);
    }
L_00078b5c:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00078df0;
        }
    }
L_00078b60:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x10u);
    }
L_00078b64:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00078b68:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_00078b6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078cd0;
        }
    }
L_00078b70:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x18u);
    }
L_00078b74:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[11], 1, 1);
    }
L_00078b78:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[8], cpu->r[11], 1, 0);
    }
L_00078b7c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x24u);
    }
L_00078b80:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_00078b84:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00078bcc;
        }
    }
L_00078b88:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[11], 1, 0);
    }
L_00078b8c:;
    {
        cpu->r[8] = cpu->r[11];
    }
L_00078b90:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[11]);
    }
L_00078b94:;
    {
        cpu->r[11] = cpu->r[7];
    }
L_00078b98:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[6]);
    }
L_00078b9c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00078ba0:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_00078ba4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_00078ba8:;
    {
        uint32_t wb_tmp = cpu->r[9] + + 0x1u;
        cpu->r[8] = rd8(cpu->r[9] + + 0x1u);
        cpu->r[9] = wb_tmp;
    }
L_00078bac:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_00078bb0:;
    {
        uint32_t wb_tmp = cpu->r[7] + + 0x1u;
        wr8(cpu->r[7] + + 0x1u, cpu->r[8]);
        cpu->r[7] = wb_tmp;
    }
L_00078bb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078ba8;
        }
    }
L_00078bb8:;
    {
        cpu->r[7] = cpu->r[11];
    }
L_00078bbc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x34u);
    }
L_00078bc0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x38u);
    }
L_00078bc4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[11], 0, 0);
    }
L_00078bc8:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 0);
    }
L_00078bcc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 1);
    }
L_00078bd0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00078bf8;
        }
    }
L_00078bd4:;
    {
        cpu->r[6] = rd8(cpu->r[9] + + 0x1u);
    }
L_00078bd8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000003u, 1, 0);
    }
L_00078bdc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 1);
    }
L_00078be0:;
    {
        wr8(cpu->r[2] + + 0x1u, cpu->r[6]);
    }
L_00078be4:;
    {
        cpu->r[6] = rd8(cpu->r[9] + + 0x2u);
    }
L_00078be8:;
    {
        wr8(cpu->r[2] + + 0x2u, cpu->r[6]);
    }
L_00078bec:;
    {
        uint32_t wb_tmp = cpu->r[9] + + 0x3u;
        cpu->r[6] = rd8(cpu->r[9] + + 0x3u);
        cpu->r[9] = wb_tmp;
    }
L_00078bf0:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x3u;
        wr8(cpu->r[2] + + 0x3u, cpu->r[6]);
        cpu->r[2] = wb_tmp;
    }
L_00078bf4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00078bd4;
        }
    }
L_00078bf8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00078bfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000789e8;
        }
    }
L_00078c00:;
    {
        cpu->r[6] = rd8(cpu->r[9] + + 0x1u);
    }
L_00078c04:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 1);
    }
L_00078c08:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_00078c0c:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x1u;
        wr8(cpu->r[2] + + 0x1u, cpu->r[6]);
        cpu->r[2] = wb_tmp;
    }
L_00078c10:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = rd8(cpu->r[9] + + 0x1u);
        }
    }
L_00078c14:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[2] + + 0x1u;
        wr8(cpu->r[2] + + 0x1u, cpu->r[6]);
        cpu->r[2] = wb_tmp;
        }
    }
L_00078c18:;
    {
        goto L_000789e8;
    }
L_00078c1c:;
    {
        { uint32_t v = cpu->r[6] & 0x00000020u; set_nz(cpu, v); }
    }
L_00078c20:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000000bu;
        }
    }
L_00078c24:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12], cpu->r[3]);
        }
    }
L_00078c28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078a00;
        }
    }
L_00078c2c:;
    {
        cpu->r[3] = rd32(0x00078c34u + + 0x1d4u);
    }
L_00078c30:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_00078c34:;
    {
        wr32(cpu->r[12], cpu->r[1]);
    }
L_00078c38:;
    {
        cpu->r[3] = add_flags(cpu, 0x00078c40u, cpu->r[3], 0, 0);
    }
L_00078c3c:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_00078c40:;
    {
        goto L_00078a00;
    }
L_00078c44:;
    {
        cpu->r[11] = rd32(cpu->r[13]);
    }
L_00078c48:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00078c4c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_00078c50:;
    {
        cpu->r[9] = rd8(cpu->r[11] + + 0x1u);
    }
L_00078c54:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00078c58:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_00078c5c:;
    {
        cpu->r[8] = rd8(cpu->r[8] + + 0x1u);
    }
L_00078c60:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[9], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_00078c64:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000008u, 0, 0);
    }
L_00078c68:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[8], 2, (cpu->r[6] & 0xffu), &shc), 0, 0);
    }
L_00078c6c:;
    {
        goto L_00078aa0;
    }
L_00078c70:;
    {
        cpu->r[8] = rd8(cpu->r[6] + + 0x1u);
    }
L_00078c74:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000003u, 1, 0);
    }
L_00078c78:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 1);
    }
L_00078c7c:;
    {
        wr8(cpu->r[2] + + 0x1u, cpu->r[8]);
    }
L_00078c80:;
    {
        cpu->r[8] = rd8(cpu->r[6] + + 0x2u);
    }
L_00078c84:;
    {
        wr8(cpu->r[2] + + 0x2u, cpu->r[8]);
    }
L_00078c88:;
    {
        uint32_t wb_tmp = cpu->r[6] + + 0x3u;
        cpu->r[8] = rd8(cpu->r[6] + + 0x3u);
        cpu->r[6] = wb_tmp;
    }
L_00078c8c:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x3u;
        wr8(cpu->r[2] + + 0x3u, cpu->r[8]);
        cpu->r[2] = wb_tmp;
    }
L_00078c90:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00078c70;
        }
    }
L_00078c94:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00078c98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000789e8;
        }
    }
L_00078c9c:;
    {
        cpu->r[8] = rd8(cpu->r[6] + + 0x1u);
    }
L_00078ca0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 1);
    }
L_00078ca4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00078ca8:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x1u;
        wr8(cpu->r[2] + + 0x1u, cpu->r[8]);
        cpu->r[2] = wb_tmp;
    }
L_00078cac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = rd8(cpu->r[6] + + 0x1u);
        }
    }
L_00078cb0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[2] + + 0x1u;
        wr8(cpu->r[2] + + 0x1u, cpu->r[6]);
        cpu->r[2] = wb_tmp;
        }
    }
L_00078cb4:;
    {
        goto L_000789e8;
    }
L_00078cb8:;
    {
        cpu->r[3] = rd32(0x00078cc0u + + 0x14cu);
    }
L_00078cbc:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_00078cc0:;
    {
        wr32(cpu->r[12], cpu->r[1]);
    }
L_00078cc4:;
    {
        cpu->r[3] = add_flags(cpu, 0x00078cccu, cpu->r[3], 0, 0);
    }
L_00078cc8:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_00078ccc:;
    {
        goto L_00078a00;
    }
L_00078cd0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_00078cd4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[11], 1, 1);
    }
L_00078cd8:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00078da8;
        }
    }
L_00078cdc:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[11], cpu->r[8], 1, 0);
    }
L_00078ce0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[8]);
    }
L_00078ce4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00078ce8:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[8], cpu->r[11], 1, 0);
    }
L_00078cec:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[11]);
    }
L_00078cf0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x30u);
    }
L_00078cf4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x24u);
    }
L_00078cf8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[11], 1, 1);
    }
L_00078cfc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x34u);
    }
L_00078d00:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[11], 0, 0);
    }
L_00078d04:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[8]);
    }
L_00078d08:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[9] = cpu->r[8];
        }
    }
L_00078d0c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00078bcc;
        }
    }
L_00078d10:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x30u);
    }
L_00078d14:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[6]);
    }
L_00078d18:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 0);
    }
L_00078d1c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x30u);
    }
L_00078d20:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x34u);
    }
L_00078d24:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[9]);
    }
L_00078d28:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_00078d2c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00078d30:;
    {
        uint32_t wb_tmp = cpu->r[6] + + 0x1u;
        cpu->r[8] = rd8(cpu->r[6] + + 0x1u);
        cpu->r[6] = wb_tmp;
    }
L_00078d34:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000001u, 1, 1);
    }
L_00078d38:;
    {
        uint32_t wb_tmp = cpu->r[7] + + 0x1u;
        wr8(cpu->r[7] + + 0x1u, cpu->r[8]);
        cpu->r[7] = wb_tmp;
    }
L_00078d3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078d30;
        }
    }
L_00078d40:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_00078d44:;
    {
        cpu->r[7] = cpu->r[9];
    }
L_00078d48:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00078d4c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 1);
    }
L_00078d50:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x30u);
    }
L_00078d54:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x38u);
    }
L_00078d58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_00078d5c:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00078bcc;
        }
    }
L_00078d60:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x10u);
    }
L_00078d64:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_00078d68:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_00078d6c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[9], 1, 0);
    }
L_00078d70:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_00078d74:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00078d78:;
    {
        cpu->r[6] = rd8(cpu->r[2] + cpu->r[11]);
    }
L_00078d7c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_00078d80:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00078d84:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_00078d88:;
    {
        uint32_t wb_tmp = cpu->r[9] + + 0x1u;
        wr8(cpu->r[9] + + 0x1u, cpu->r[6]);
        cpu->r[9] = wb_tmp;
    }
L_00078d8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078d74;
        }
    }
L_00078d90:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_00078d94:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_00078d98:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_00078d9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_00078da0:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 0);
    }
L_00078da4:;
    {
        goto L_00078bcc;
    }
L_00078da8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_00078dac:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[11], 1, 1);
    }
L_00078db0:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[8], cpu->r[11], 1, 0);
    }
L_00078db4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x24u);
    }
L_00078db8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_00078dbc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00078bcc;
        }
    }
L_00078dc0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[11], 1, 0);
    }
L_00078dc4:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[11]);
    }
L_00078dc8:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[6]);
    }
L_00078dcc:;
    {
        cpu->r[6] = cpu->r[11];
    }
L_00078dd0:;
    {
        cpu->r[11] = cpu->r[7];
    }
L_00078dd4:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00078dd8:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_00078ddc:;
    {
        uint32_t wb_tmp = cpu->r[9] + + 0x1u;
        cpu->r[8] = rd8(cpu->r[9] + + 0x1u);
        cpu->r[9] = wb_tmp;
    }
L_00078de0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_00078de4:;
    {
        uint32_t wb_tmp = cpu->r[7] + + 0x1u;
        wr8(cpu->r[7] + + 0x1u, cpu->r[8]);
        cpu->r[7] = wb_tmp;
    }
L_00078de8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078ddc;
        }
    }
L_00078dec:;
    {
        goto L_00078bb8;
    }
L_00078df0:;
    {
        cpu->r[3] = rd32(0x00078df8u + + 0x18u);
    }
L_00078df4:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_00078df8:;
    {
        wr32(cpu->r[12], cpu->r[1]);
    }
L_00078dfc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00078e04u, cpu->r[3], 0, 0);
    }
L_00078e00:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_00078e04:;
    {
        goto L_00078a00;
    }
}

/* inflateReset @ 00078e14 (arm) */
void fn_00078e14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00078e14:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00078e18:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00078e1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078e2c;
        }
    }
L_00078e20:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00078e24:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00078e28:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00078e2c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x1cu);
    }
L_00078e30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00078e34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00078e20;
        }
    }
L_00078e38:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00078e3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000530u, 0, 0);
    }
L_00078e40:;
    {
        wr32(cpu->r[3] + + 0x1cu, cpu->r[2]);
    }
L_00078e44:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_00078e48:;
    {
        wr32(cpu->r[1] + + 0x14u, cpu->r[2]);
    }
L_00078e4c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00078e50:;
    {
        wr32(cpu->r[1] + + 0x30u, cpu->r[4]);
    }
L_00078e54:;
    {
        cpu->r[4] = 0x00008000u;
    }
L_00078e58:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[2]);
    }
L_00078e5c:;
    {
        wr32(cpu->r[1] + + 0x18u, cpu->r[2]);
    }
L_00078e60:;
    {
        wr32(cpu->r[3] + + 0x4cu, cpu->r[12]);
    }
L_00078e64:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[4]);
    }
L_00078e68:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00078e6c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_00078e70:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_00078e74:;
    {
        wr32(cpu->r[3] + + 0x20u, cpu->r[2]);
    }
L_00078e78:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[2]);
    }
L_00078e7c:;
    {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[2]);
    }
L_00078e80:;
    {
        wr32(cpu->r[3] + + 0x30u, cpu->r[2]);
    }
L_00078e84:;
    {
        wr32(cpu->r[3] + + 0x38u, cpu->r[2]);
    }
L_00078e88:;
    {
        wr32(cpu->r[3] + + 0x3cu, cpu->r[2]);
    }
L_00078e8c:;
    {
        wr32(cpu->r[3] + + 0x6cu, cpu->r[12]);
    }
L_00078e90:;
    {
        wr32(cpu->r[3] + + 0x50u, cpu->r[12]);
    }
L_00078e94:;
    {
        goto L_00078e24;
    }
}

/* inflatePrime @ 00078e98 (arm) */
void fn_00078e98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00078e98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00078e9c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_00078ea0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078eb0;
        }
    }
L_00078ea4:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00078ea8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_00078eac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00078eb0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00078eb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00078eb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00078ea4;
        }
    }
L_00078ebc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000010u, 1, 1);
    }
L_00078ec0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00078ea4;
        }
    }
L_00078ec4:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x3cu);
    }
L_00078ec8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_00078ecc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000020u, 1, 1);
    }
L_00078ed0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00078ea4;
        }
    }
L_00078ed4:;
    {
        cpu->r[5] = (~0x00000000u);
    }
L_00078ed8:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x38u);
    }
L_00078edc:;
    {
        wr32(cpu->r[3] + + 0x3cu, cpu->r[0]);
    }
L_00078ee0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00078ee4:;
    {
        uint32_t v = cpu->r[2] & ~ shifter(cpu->r[5], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00078ee8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, (cpu->r[12] & 0xffu), &shc), 0, 0);
    }
L_00078eec:;
    {
        wr32(cpu->r[3] + + 0x38u, cpu->r[12]);
    }
L_00078ef0:;
    {
        goto L_00078ea8;
    }
}

/* inflateInit2_ @ 00078ef4 (arm) */
void fn_00078ef4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00078ef4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00078ef8:;
    {
        cpu->r[12] = rd32(0x00078f00u + + 0x108u);
    }
L_00078efc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00078f00:;
    {
        cpu->r[12] = add_flags(cpu, 0x00078f08u, cpu->r[12], 0, 0);
    }
L_00078f04:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00078f08:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00078f0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078f18;
        }
    }
L_00078f10:;
    {
        cpu->r[0] = (~0x00000005u);
    }
L_00078f14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00078f18u)) return;
    }
L_00078f18:;
    {
        cpu->r[2] = rd8(cpu->r[2]);
    }
L_00078f1c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000031u, 1, 1);
    }
L_00078f20:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[3], 0x00000038u, 1, 1);
        }
    }
L_00078f24:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00078f28:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00078f2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078f10;
        }
    }
L_00078f30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00078f34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00078f40;
        }
    }
L_00078f38:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00078f3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00078f40u)) return;
    }
L_00078f40:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x20u);
    }
L_00078f44:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_00078f48:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00078f4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00078fd8;
        }
    }
L_00078f50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_00078f54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00078f58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00078fc8;
        }
    }
L_00078f5c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00078f60:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_00078f64:;
    {
        cpu->r[2] = 0x00002530u;
    }
L_00078f68:;
    {
        cpu->r[14] = 0x00078f6cu; guest_call(cpu, cpu->r[6]);
    }
L_00078f6c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00078f70:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000003u);
        }
    }
L_00078f74:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00078f78u)) return;
        }
    }
L_00078f78:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00078f7c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[1]);
    }
L_00078f80:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00078f84:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = sub_flags(cpu, 0x00000000u, cpu->r[5], 1, 0);
        }
    }
L_00078f88:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[1] + + 0x8u, cpu->r[3]);
        }
    }
L_00078f8c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00078fa4;
        }
    }
L_00078f90:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000002fu, 1, 1);
    }
L_00078f94:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 4u, &shc); cpu->r[3] = v;
    }
L_00078f98:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = cpu->r[5] & 0x0000000fu; cpu->r[5] = v;
        }
    }
L_00078f9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00078fa0:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[3]);
    }
L_00078fa4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], 0x00000008u, 1, 0);
    }
L_00078fa8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_00078fac:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00078ff0;
        }
    }
L_00078fb0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00078fb4:;
    {
        wr32(cpu->r[1] + + 0x24u, cpu->r[5]);
    }
L_00078fb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00078fbc:;
    {
        wr32(cpu->r[1] + + 0x34u, cpu->r[3]);
    }
L_00078fc0:;
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
L_00078fc4:;
    {
        return fn_00078e14(cpu);
    }
L_00078fc8:;
    {
        cpu->r[3] = rd32(0x00078fd0u + + 0x3cu);
    }
L_00078fcc:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00078fd0:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_00078fd4:;
    {
        goto L_00078f5c;
    }
L_00078fd8:;
    {
        cpu->r[3] = rd32(0x00078fe0u + + 0x30u);
    }
L_00078fdc:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[6]);
    }
L_00078fe0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00078fe4:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_00078fe8:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_00078fec:;
    {
        goto L_00078f50;
    }
L_00078ff0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_00078ff4:;
    {
        cpu->r[14] = 0x00078ffcu;
    }
L_00078ff8:;
    {
        uint32_t t = rd32(cpu->r[4] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00078ffcu)) return;
    }
L_00078ffc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00079000:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_00079004:;
    {
        goto L_00078f38;
    }
}

/* inflateInit_ @ 00079014 (arm) */
void fn_00079014(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00079014:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00079018:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0007901c:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_00079020:;
    {
        return fn_00078ef4(cpu);
    }
}

/* inflateEnd @ 00079024 (arm) */
void fn_00079024(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00079024:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00079028:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007902c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00079038;
        }
    }
L_00079030:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00079034:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00079038u)) return;
    }
L_00079038:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0007903c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00079040:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079030;
        }
    }
L_00079044:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_00079048:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007904c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079030;
        }
    }
L_00079050:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x34u);
    }
L_00079054:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00079058:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079070;
        }
    }
L_0007905c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00079060:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_00079064:;
    {
        cpu->r[14] = 0x00079068u; guest_call(cpu, cpu->r[3]);
    }
L_00079068:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_0007906c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00079070:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_00079074:;
    {
        cpu->r[14] = 0x00079078u; guest_call(cpu, cpu->r[3]);
    }
L_00079078:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0007907c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_00079080:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00079084u)) return;
    }
}

/* inflateGetHeader @ 00079084 (arm) */
void fn_00079084(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00079084:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00079088:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00079094;
        }
    }
L_0007908c:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00079090:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00079094:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00079098:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007909c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007908c;
        }
    }
L_000790a0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_000790a4:;
    {
        { uint32_t v = cpu->r[2] & 0x00000002u; set_nz(cpu, v); }
    }
L_000790a8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x20u, cpu->r[1]);
        }
    }
L_000790ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000790b0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[1] + + 0x30u, cpu->r[0]);
        }
    }
L_000790b4:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000790b8:;
    {
        goto L_0007908c;
    }
}

/* inflateSync @ 000790bc (arm) */
void fn_000790bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000790bc:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000790c0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000790c4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000790c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000790d8;
        }
    }
L_000790cc:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_000790d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000790d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000790d8u)) return;
    }
L_000790d8:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x1cu);
    }
L_000790dc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000790e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000790cc;
        }
    }
L_000790e4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_000790e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000790ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00079100;
        }
    }
L_000790f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_000790f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_000790f8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = (~0x00000004u);
        }
    }
L_000790fc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000790d0;
        }
    }
L_00079100:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00079104:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001du, 1, 1);
    }
L_00079108:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000792e4;
        }
    }
L_0007910c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00079110:;
    {
        cpu->r[0] = 0x0000001du;
    }
L_00079114:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_00079118:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000007u; cpu->r[2] = v;
    }
L_0007911c:;
    {
        uint32_t v = cpu->r[1] & 0x00000007u; cpu->r[1] = v;
    }
L_00079120:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_00079124:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_00079128:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007912c:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[2]);
    }
L_00079130:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_00079134:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_00079138:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0007913c:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
        }
    }
L_00079140:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00079200;
        }
    }
L_00079144:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00079148:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0007914c:;
    {
        wr8(cpu->r[7] + cpu->r[0], cpu->r[3]);
    }
L_00079150:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00079154:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00079158:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_0007915c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000008u, 1, 0);
    }
L_00079160:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[2]);
    }
L_00079164:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_00079168:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 8u, &shc); cpu->r[3] = v;
    }
L_0007916c:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_00079170:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0007914c;
        }
    }
L_00079174:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00079178:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007917c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00079180:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00079184:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_00079188:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_0007918c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_00079190:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079200;
        }
    }
L_00079194:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00079198:;
    {
        goto L_000791d4;
    }
L_0007919c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000791a0:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000004u, cpu->r[3], 1, 0);
    }
L_000791a4:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_000791a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000791ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000791bc;
        }
    }
L_000791b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000791b4:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_000791b8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_000791bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000791c0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000791c4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000791c8:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t v = cpu->r[6] & 0x00000001u; cpu->r[1] = v;
        }
    }
L_000791cc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000791d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079200;
        }
    }
L_000791d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000791d8:;
    {
        cpu->r[1] = rd8(cpu->r[7] + cpu->r[2]);
    }
L_000791dc:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[12] = 0x000000ffu;
        }
    }
L_000791e0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_000791e4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000791e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007919c;
        }
    }
L_000791ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000791f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000791f4:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_000791f8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_000791fc:;
    {
        goto L_000791bc;
    }
L_00079200:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_00079204:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_00079208:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007920c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_00079210:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[6] & 0x00000001u; cpu->r[6] = v;
        }
    }
L_00079214:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_00079218:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0007921c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007928c;
        }
    }
L_00079220:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00079224:;
    {
        goto L_00079260;
    }
L_00079228:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007922c:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000004u, cpu->r[3], 1, 0);
    }
L_00079230:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00079234:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00079238:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00079248;
        }
    }
L_0007923c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00079240:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00079244:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00079248:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0007924c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_00079250:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00079254:;
    {
        if (cond_test(cpu, 4)) {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[2] = v;
        }
    }
L_00079258:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007925c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007928c;
        }
    }
L_00079260:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00079264:;
    {
        cpu->r[2] = rd8(cpu->r[12] + cpu->r[6]);
    }
L_00079268:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[1] = 0x000000ffu;
        }
    }
L_0007926c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00079270:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00079274:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00079228;
        }
    }
L_00079278:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007927c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00079280:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00079284:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00079288:;
    {
        goto L_00079248;
    }
L_0007928c:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_00079290:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[6], 0, 0);
    }
L_00079294:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00079298:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_0007929c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_000792a0:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_000792a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x68u);
    }
L_000792a8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_000792ac:;
    {
        wr32(cpu->r[5], cpu->r[12]);
    }
L_000792b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000792b4:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[6]);
    }
L_000792b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x00000002u);
        }
    }
L_000792bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000790d0;
        }
    }
L_000792c0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x14u);
    }
L_000792c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000792c8:;
    {
        cpu->r[14] = 0x000792ccu; fn_00078e14(cpu);
    }
L_000792cc:;
    {
        cpu->r[3] = 0x0000000bu;
    }
L_000792d0:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[6]);
    }
L_000792d4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000792d8:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000792dc:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[7]);
    }
L_000792e0:;
    {
        goto L_000790d0;
    }
L_000792e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x68u);
    }
L_000792e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000792ec:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_000792f0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_000792f4:;
    {
        goto L_00079208;
    }
}

/* inflateSyncPoint @ 000792f8 (arm) */
void fn_000792f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000792f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000792fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00079308;
        }
    }
L_00079300:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00079304:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00079308:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_0007930c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00079310:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079300;
        }
    }
L_00079314:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00079318:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000du, 1, 1);
    }
L_0007931c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00079320:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00079324:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x3cu);
    }
L_00079328:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_0007932c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00079330:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* inflateCopy @ 00079334 (arm) */
void fn_00079334(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00079334:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00079338:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
        }
    }
L_0007933c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00079340:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_00079344:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00079348:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00079354;
        }
    }
L_0007934c:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00079350:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00079354u)) return;
    }
L_00079354:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x1cu);
    }
L_00079358:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0007935c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007934c;
        }
    }
L_00079360:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x20u);
    }
L_00079364:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00079368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007934c;
        }
    }
L_0007936c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x24u);
    }
L_00079370:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00079374:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007934c;
        }
    }
L_00079378:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x28u);
    }
L_0007937c:;
    {
        cpu->r[2] = 0x00002530u;
    }
L_00079380:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00079384:;
    {
        cpu->r[14] = 0x00079388u; guest_call(cpu, cpu->r[3]);
    }
L_00079388:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007938c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079498;
        }
    }
L_00079390:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x34u);
    }
L_00079394:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00079398:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000793c0;
        }
    }
L_0007939c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000793a0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x24u);
    }
L_000793a4:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000793a8:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x28u);
    }
L_000793ac:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000793b0:;
    {
        cpu->r[14] = 0x000793b8u;
    }
L_000793b4:;
    {
        uint32_t t = rd32(cpu->r[8] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000793b8u)) return;
    }
L_000793b8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000793bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079488;
        }
    }
L_000793c0:;
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
L_000793c4:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_000793c8:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_000793cc:;
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
L_000793d0:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_000793d4:;
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
L_000793d8:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_000793dc:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_000793e0:;
    {
        cpu->r[2] = 0x00002530u;
    }
L_000793e4:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_000793e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000793ec:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000793f0:;
    {
        cpu->r[14] = 0x000793f4u; imp_memcpy(cpu); /* memcpy */
    }
L_000793f4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4cu);
    }
L_000793f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000530u, 0, 0);
    }
L_000793fc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00079400:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00079440;
        }
    }
L_00079404:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00002500u, 0, 0);
    }
L_00079408:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000002cu, 0, 0);
    }
L_0007940c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00079410:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00079440;
        }
    }
L_00079414:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x50u);
    }
L_00079418:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0007941c:;
    {
        uint32_t v = cpu->r[2] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_00079420:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00079424:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000530u, 0, 0);
    }
L_00079428:;
    {
        uint32_t v = cpu->r[2] & ~ 0x00000003u; cpu->r[2] = v;
    }
L_0007942c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[1], 0, 0);
    }
L_00079430:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000530u, 0, 0);
    }
L_00079434:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[1]);
    }
L_00079438:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_0007943c:;
    {
        wr32(cpu->r[6] + + 0x50u, cpu->r[2]);
    }
L_00079440:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x6cu);
    }
L_00079444:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00079448:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0007944c:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000003u; cpu->r[3] = v;
    }
L_00079450:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000530u, 0, 0);
    }
L_00079454:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_00079458:;
    {
        wr32(cpu->r[6] + + 0x6cu, cpu->r[3]);
    }
L_0007945c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079478;
        }
    }
L_00079460:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_00079464:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00079468:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x34u);
    }
L_0007946c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00079470:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00079474:;
    {
        cpu->r[14] = 0x00079478u; imp_memcpy(cpu); /* memcpy */
    }
L_00079478:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[6]);
    }
L_0007947c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00079480:;
    {
        wr32(cpu->r[6] + + 0x34u, cpu->r[7]);
    }
L_00079484:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00079488u)) return;
    }
L_00079488:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0007948c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x28u);
    }
L_00079490:;
    {
        cpu->r[14] = 0x00079498u;
    }
L_00079494:;
    {
        uint32_t t = rd32(cpu->r[8] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00079498u)) return;
    }
L_00079498:;
    {
        cpu->r[0] = (~0x00000003u);
    }
L_0007949c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000794a0u)) return;
    }
}

/* sub_000794a0 @ 000794a0 (arm) */
void fn_000794a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000794a0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000794a4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x1cu);
    }
L_000794a8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000794ac:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000794b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x34u);
    }
L_000794b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000794b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000795ac;
        }
    }
L_000794bc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x28u);
    }
L_000794c0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000794c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079534;
        }
    }
L_000794c8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_000794cc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_000794d0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_000794d4:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00079560;
        }
    }
L_000794d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_000794dc:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xcu);
    }
L_000794e0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_000794e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_000794e8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_000794ec:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[7] = cpu->r[5];
        }
    }
L_000794f0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
    }
L_000794f4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000794f8:;
    {
        cpu->r[14] = 0x000794fcu; imp_memcpy(cpu); /* memcpy */
    }
L_000794fc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_00079500:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00079584;
        }
    }
L_00079504:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x30u);
    }
L_00079508:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0007950c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_00079510:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[2], 0, 0);
    }
L_00079514:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[2]);
    }
L_00079518:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0007951c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00079520:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x30u, cpu->r[5]);
        }
    }
L_00079524:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00079528:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[2], 0, 0);
        }
    }
L_0007952c:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[7]);
        }
    }
L_00079530:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00079534u)) return;
    }
L_00079534:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_00079538:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_0007953c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00079540:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_00079544:;
    {
        uint32_t v = shifter(cpu->r[7], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[7] = v;
    }
L_00079548:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_0007954c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[7]);
    }
L_00079550:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_00079554:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_00079558:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_0007955c:;
    {
        if (cond_test(cpu, 4)) {
        goto L_000794d8;
        }
    }
L_00079560:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xcu);
    }
L_00079564:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00079568:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 0);
    }
L_0007956c:;
    {
        cpu->r[14] = 0x00079570u; imp_memcpy(cpu); /* memcpy */
    }
L_00079570:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_00079574:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00079578:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_0007957c:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_00079580:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00079584u)) return;
    }
L_00079584:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xcu);
    }
L_00079588:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0007958c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x34u);
    }
L_00079590:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
    }
L_00079594:;
    {
        cpu->r[14] = 0x00079598u; imp_memcpy(cpu); /* memcpy */
    }
L_00079598:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_0007959c:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[5]);
    }
L_000795a0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000795a4:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_000795a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000795acu)) return;
    }
L_000795ac:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_000795b0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_000795b4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x28u);
    }
L_000795b8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000795bc:;
    {
        uint32_t v = shifter(cpu->r[7], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000795c0:;
    {
        cpu->r[14] = 0x000795c8u;
    }
L_000795c4:;
    {
        uint32_t t = rd32(cpu->r[6] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000795c8u)) return;
    }
L_000795c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000795cc:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[0]);
    }
L_000795d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[7];
        }
    }
L_000795d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000794bc;
        }
    }
L_000795d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000795dcu)) return;
    }
}

/* inflateSetDictionary @ 000795dc (arm) */
void fn_000795dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000795dc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000795e0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000795e4:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000795e8:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_000795ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000795f8;
        }
    }
L_000795f0:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_000795f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000795f8u)) return;
    }
L_000795f8:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x1cu);
    }
L_000795fc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00079600:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000795f0;
        }
    }
L_00079604:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00079608:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007960c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00079690;
        }
    }
L_00079610:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00079614:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_00079618:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007969c;
        }
    }
L_0007961c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00079620:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_00079624:;
    {
        cpu->r[14] = 0x00079628u; fn_000794a0(cpu);
    }
L_00079628:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007962c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000001cu;
        }
    }
L_00079630:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x00000003u);
        }
    }
L_00079634:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5], cpu->r[3]);
        }
    }
L_00079638:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007963cu)) return;
        }
    }
L_0007963c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x28u);
    }
L_00079640:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00079644:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00079670;
        }
    }
L_00079648:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 0);
    }
L_0007964c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x34u);
    }
L_00079650:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[1], 0, 0);
    }
L_00079654:;
    {
        cpu->r[14] = 0x00079658u; imp_memcpy(cpu); /* memcpy */
    }
L_00079658:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x28u);
    }
L_0007965c:;
    {
        wr32(cpu->r[5] + + 0x2cu, cpu->r[3]);
    }
L_00079660:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00079664:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00079668:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[3]);
    }
L_0007966c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00079670u)) return;
    }
L_00079670:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x34u);
    }
L_00079674:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 0);
    }
L_00079678:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0007967c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00079680:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00079684:;
    {
        cpu->r[14] = 0x00079688u; imp_memcpy(cpu); /* memcpy */
    }
L_00079688:;
    {
        wr32(cpu->r[5] + + 0x2cu, cpu->r[4]);
    }
L_0007968c:;
    {
        goto L_00079660;
    }
L_00079690:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00079694:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_00079698:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000795f0;
        }
    }
L_0007969c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000796a0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000796a4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000796a8:;
    {
        cpu->r[14] = 0x000796acu; fn_0007406c(cpu);
    }
L_000796ac:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000796b0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000796b4:;
    {
        cpu->r[14] = 0x000796b8u; fn_0007406c(cpu);
    }
L_000796b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_000796bc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000796c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x00000002u);
        }
    }
L_000796c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000796c8u)) return;
        }
    }
L_000796c8:;
    {
        goto L_0007961c;
    }
}

/* inflate @ 000796cc (arm) */
void fn_000796cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000796cc:;
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
L_000796d0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000796d4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000064u, 1, 0);
    }
L_000796d8:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000796dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000796f0;
        }
    }
L_000796e0:;
    {
        cpu->r[10] = (~0x00000001u);
    }
L_000796e4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000796e8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_000796ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000796f0u)) return;
    }
L_000796f0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x1cu);
    }
L_000796f4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000796f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000796e0;
        }
    }
L_000796fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00079700:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00079704:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_00079708:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000796e0;
        }
    }
L_0007970c:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00079710:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00079714:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_00079718:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a908;
        }
    }
L_0007971c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00079720:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_00079724:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00079728:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], 0x00000530u, 0, 0);
    }
L_0007972c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_00079730:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00079734:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 1);
    }
L_00079738:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
        }
    }
L_0007973c:;
    {
        cpu->r[2] = rd32(0x00079744u + + 0xfccu);
    }
L_00079740:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = cpu->r[1];
        }
    }
L_00079744:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x10u);
    }
L_00079748:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x0000000cu;
        }
    }
L_0007974c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00079754u, cpu->r[2], 0, 0);
    }
L_00079750:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x38u);
    }
L_00079754:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000880u, 0, 0);
    }
L_00079758:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0007975c:;
    {
        cpu->r[2] = rd32(0x00079764u + + 0xfb0u);
    }
L_00079760:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_00079764:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x3cu);
    }
L_00079768:;
    {
        cpu->r[2] = add_flags(cpu, 0x00079770u, cpu->r[2], 0, 0);
    }
L_0007976c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x14u);
    }
L_00079770:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000880u, 0, 0);
    }
L_00079774:;
    {
        cpu->r[1] = rd32(0x0007977cu + + 0xf9cu);
    }
L_00079778:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_0007977c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], 0x00000054u, 0, 0);
    }
L_00079780:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_00079784:;
    {
        cpu->r[1] = add_flags(cpu, 0x0007978cu, cpu->r[1], 0, 0);
    }
L_00079788:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_0007978c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_00079790:;
    {
        cpu->r[7] = cpu->r[12];
    }
L_00079794:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00079798:;
    {
        cpu->r[12] = cpu->r[10];
    }
L_0007979c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6], cpu->r[0]);
        }
    }
L_000797a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000070u, 0, 0);
    }
L_000797a4:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[1]);
    }
L_000797a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000026u, 0, 0);
    }
L_000797ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x0000006cu, 0, 0);
    }
L_000797b0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_000797b4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_000797b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x000002f0u, 0, 0);
    }
L_000797bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000058u, 0, 0);
    }
L_000797c0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_000797c4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_000797c8:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_000797cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001cu, 1, 1);
    }
L_000797d0:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_0007a208;
        case 1: goto L_00079864;
        case 2: goto L_000798c8;
        case 3: goto L_00079910;
        case 4: goto L_0007a850;
        case 5: goto L_0007a5b8;
        case 6: goto L_0007a3dc;
        case 7: goto L_0007a2fc;
        case 8: goto L_0007a474;
        case 9: goto L_00079ae0;
        case 10: goto L_00079b1c;
        case 11: goto L_00079b50;
        case 12: goto L_00079c8c;
        case 13: goto L_0007a094;
        case 14: goto L_0007a0fc;
        case 15: goto L_00079968;
        case 16: goto L_000799c4;
        case 17: goto L_0007a178;
        case 18: goto L_0007a50c;
        case 19: goto L_00079ed4;
        case 20: goto L_00079f2c;
        case 21: goto L_0007a47c;
        case 22: goto L_00079d2c;
        case 23: goto L_0007a2d0;
        case 24: goto L_0007a6f0;
        case 25: goto L_0007a684;
        case 26: goto L_0007a840;
        case 27: goto L_0007a830;
        case 28: goto L_0007a170;
        default: guest_unimplemented(cpu, 0x000797d0u); return; }
        }
    }
L_000797d4:;
    {
        goto L_000796e0;
    }
L_0007984c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00079850:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_00079854:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[3] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_00079858:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0007985c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_00079860:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00079864:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000fu, 1, 1);
    }
L_00079868:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0007984c;
        }
    }
L_0007986c:;
    {
        uint32_t v = cpu->r[9] & 0x000000ffu; cpu->r[3] = v;
    }
L_00079870:;
    {
        wr32(cpu->r[6] + + 0x10u, cpu->r[9]);
    }
L_00079874:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_00079878:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007adf8;
        }
    }
L_0007987c:;
    {
        { uint32_t v = cpu->r[9] & 0x0000e000u; set_nz(cpu, v); }
    }
L_00079880:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007ae70;
        }
    }
L_00079884:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x20u);
    }
L_00079888:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007988c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (cpu->r[9] >> 8) & 0x1u;
        }
    }
L_00079890:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3], cpu->r[2]);
        }
    }
L_00079894:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_00079898:;
    {
        { uint32_t v = cpu->r[3] & 0x00000200u; set_nz(cpu, v); }
    }
L_0007989c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007abec;
        }
    }
L_000798a0:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_000798a4:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_000798a8:;
    {
        cpu->r[5] = cpu->r[9];
    }
L_000798ac:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_000798b0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000798b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_000798b8:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[3] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_000798bc:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_000798c0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_000798c4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_000798c8:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000001fu, 1, 1);
    }
L_000798cc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000798b0;
        }
    }
L_000798d0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x20u);
    }
L_000798d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000798d8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x4u, cpu->r[9]);
        }
    }
L_000798dc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_000798e0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000200u; set_nz(cpu, v); }
    }
L_000798e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007aae4;
        }
    }
L_000798e8:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_000798ec:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_000798f0:;
    {
        cpu->r[5] = cpu->r[9];
    }
L_000798f4:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_000798f8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000798fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_00079900:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[3] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_00079904:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_00079908:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_0007990c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00079910:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000fu, 1, 1);
    }
L_00079914:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000798f8;
        }
    }
L_00079918:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x20u);
    }
L_0007991c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00079920:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[9] & 0x000000ffu; cpu->r[2] = v;
        }
    }
L_00079924:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x8u, cpu->r[2]);
        }
    }
L_00079928:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[9], 3, 8u, &shc); cpu->r[2] = v;
        }
    }
L_0007992c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
        }
    }
L_00079930:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_00079934:;
    {
        { uint32_t v = cpu->r[3] & 0x00000200u; set_nz(cpu, v); }
    }
L_00079938:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007aab4;
        }
    }
L_0007993c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00079940:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00079944:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_00079948:;
    {
        wr32(cpu->r[6], cpu->r[2]);
    }
L_0007994c:;
    {
        goto L_0007a854;
    }
L_00079950:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00079954:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_00079958:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[3] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_0007995c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_00079960:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_00079964:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00079968:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000du, 1, 1);
    }
L_0007996c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00079950;
        }
    }
L_00079970:;
    {
        uint32_t v = cpu->r[9] & 0x0000001fu; cpu->r[3] = v;
    }
L_00079974:;
    {
        cpu->r[1] = 0x0000011eu;
    }
L_00079978:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000100u, 0, 0);
    }
L_0007997c:;
    {
        cpu->r[2] = (cpu->r[9] >> 5) & 0x1fu;
    }
L_00079980:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00079984:;
    {
        cpu->r[0] = (cpu->r[9] >> 10) & 0xfu;
    }
L_00079988:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0007998c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00079990:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00079994:;
    {
        wr32(cpu->r[6] + + 0x60u, cpu->r[3]);
    }
L_00079998:;
    {
        wr32(cpu->r[6] + + 0x5cu, cpu->r[0]);
    }
L_0007999c:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 14u, &shc); cpu->r[9] = v;
    }
L_000799a0:;
    {
        wr32(cpu->r[6] + + 0x64u, cpu->r[2]);
    }
L_000799a4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x0000000eu, 1, 0);
    }
L_000799a8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0007adb4;
        }
    }
L_000799ac:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000001eu, 1, 1);
    }
L_000799b0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0007adb4;
        }
    }
L_000799b4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000799b8:;
    {
        wr32(cpu->r[6] + + 0x68u, cpu->r[3]);
    }
L_000799bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_000799c0:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_000799c4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x68u);
    }
L_000799c8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x5cu);
    }
L_000799cc:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000799d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000799d4:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00079a2c;
        }
    }
L_000799d8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_000799dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000799e0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 1);
    }
L_000799e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000799e8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00079a04;
        }
    }
L_000799ec:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000799f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a93c;
        }
    }
L_000799f4:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[1] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_000799f8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_000799fc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[1], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_00079a00:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00079a04:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000002u;
        cpu->r[1] = rd16(cpu->r[0]);
        cpu->r[0] = wb_tmp;
    }
L_00079a08:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00079a0c:;
    {
        uint32_t v = cpu->r[9] & 0x00000007u; cpu->r[10] = v;
    }
L_00079a10:;
    {
        wr32(cpu->r[6] + + 0x68u, cpu->r[3]);
    }
L_00079a14:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000003u, 1, 0);
    }
L_00079a18:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 3u, &shc); cpu->r[9] = v;
    }
L_00079a1c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00079a20:;
    {
        wr16(cpu->r[1] + + 0x70u, cpu->r[10]);
    }
L_00079a24:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000799e0;
        }
    }
L_00079a28:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00079a2c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000012u, 1, 1);
    }
L_00079a30:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00079a60;
        }
    }
L_00079a34:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00079a38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00079a3c:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000002u;
        cpu->r[3] = rd16(cpu->r[1]);
        cpu->r[1] = wb_tmp;
    }
L_00079a40:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_00079a44:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_00079a48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00079a4c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_00079a50:;
    {
        wr16(cpu->r[3] + + 0x70u, cpu->r[14]);
    }
L_00079a54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00079a3c;
        }
    }
L_00079a58:;
    {
        cpu->r[3] = 0x00000013u;
    }
L_00079a5c:;
    {
        wr32(cpu->r[6] + + 0x68u, cpu->r[3]);
    }
L_00079a60:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_00079a64:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_00079a68:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_00079a6c:;
    {
        cpu->r[2] = 0x00000013u;
    }
L_00079a70:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_00079a74:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_00079a78:;
    {
        wr32(cpu->r[6] + + 0x6cu, cpu->r[0]);
    }
L_00079a7c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00079a80:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[3]);
    }
L_00079a84:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[1]);
    }
L_00079a88:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00079a8c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_00079a90:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00079a94:;
    {
        cpu->r[14] = 0x00079a98u; fn_0007b038(cpu);
    }
L_00079a98:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00079a9c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6] + + 0x68u, cpu->r[12]);
        }
    }
L_00079aa0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000011u;
        }
    }
L_00079aa4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6], cpu->r[3]);
        }
    }
L_00079aa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a178;
        }
    }
L_00079aac:;
    {
        cpu->r[2] = rd32(0x00079ab4u + + 0xc68u);
    }
L_00079ab0:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_00079ab4:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00079ab8:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_00079abc:;
    {
        cpu->r[2] = add_flags(cpu, 0x00079ac4u, cpu->r[2], 0, 0);
    }
L_00079ac0:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_00079ac4:;
    {
        goto L_000797cc;
    }
L_00079ac8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00079acc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_00079ad0:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[3] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_00079ad4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_00079ad8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_00079adc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00079ae0:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000001fu, 1, 1);
    }
L_00079ae4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00079ac8;
        }
    }
L_00079ae8:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 24u, &shc); cpu->r[1] = v;
    }
L_00079aec:;
    {
        uint32_t v = cpu->r[9] & 0x0000ff00u; cpu->r[3] = v;
    }
L_00079af0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[9], 2, 24u, &shc), 0, 0);
    }
L_00079af4:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 8u, &shc); cpu->r[2] = v;
    }
L_00079af8:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_00079afc:;
    {
        uint32_t v = cpu->r[2] & 0x0000ff00u; cpu->r[2] = v;
    }
L_00079b00:;
    {
        cpu->r[5] = cpu->r[9];
    }
L_00079b04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_00079b08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 8u, &shc), 0, 0);
    }
L_00079b0c:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[3]);
    }
L_00079b10:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_00079b14:;
    {
        cpu->r[3] = 0x0000000au;
    }
L_00079b18:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_00079b1c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_00079b20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00079b24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007aeac;
        }
    }
L_00079b28:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00079b2c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00079b30:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00079b34:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00079b38:;
    {
        cpu->r[14] = 0x00079b3cu; fn_0007406c(cpu);
    }
L_00079b3c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_00079b40:;
    {
        cpu->r[3] = 0x0000000bu;
    }
L_00079b44:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_00079b48:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[0]);
    }
L_00079b4c:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_00079b50:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00079b54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_00079b58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00079c8c;
        }
    }
L_00079b5c:;
    {
        cpu->r[10] = cpu->r[12];
    }
L_00079b60:;
    {
        cpu->r[12] = cpu->r[7];
    }
L_00079b64:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_00079b68:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[12]);
    }
L_00079b6c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[8]);
    }
L_00079b70:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x28u);
    }
L_00079b74:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00079b78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00079b7c:;
    {
        wr32(cpu->r[4], cpu->r[11]);
    }
L_00079b80:;
    {
        wr32(cpu->r[6] + + 0x38u, cpu->r[9]);
    }
L_00079b84:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_00079b88:;
    {
        wr32(cpu->r[6] + + 0x3cu, cpu->r[5]);
    }
L_00079b8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00079bb0;
        }
    }
L_00079b90:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00079b94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000017u, 1, 1);
    }
L_00079b98:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00079bc4;
        }
    }
L_00079b9c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00079ba0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00079ba4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00079ba8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = cpu->r[2];
        }
    }
L_00079bac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079bc8;
        }
    }
L_00079bb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00079bb4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00079bb8:;
    {
        cpu->r[14] = 0x00079bbcu; fn_000794a0(cpu);
    }
L_00079bbc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00079bc0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007a168;
        }
    }
L_00079bc4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x10u);
    }
L_00079bc8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_00079bcc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x4u);
    }
L_00079bd0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00079bd4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_00079bd8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_00079bdc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_00079be0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[12], cpu->r[8], 1, 0);
    }
L_00079be4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_00079be8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[8], 0, 0);
    }
L_00079bec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_00079bf0:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[1]);
    }
L_00079bf4:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_00079bf8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00079bfc:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
        }
    }
L_00079c00:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00079c04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_00079c08:;
    {
        wr32(cpu->r[6] + + 0x1cu, cpu->r[3]);
    }
L_00079c0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079c38;
        }
    }
L_00079c10:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_00079c14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00079c18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a8f0;
        }
    }
L_00079c1c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_00079c20:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00079c24:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_00079c28:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
    }
L_00079c2c:;
    {
        cpu->r[14] = 0x00079c30u; fn_00074510(cpu);
    }
L_00079c30:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[0]);
    }
L_00079c34:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_00079c38:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[3] = v1;
    }
L_00079c3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00079c40:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x3cu);
    }
L_00079c44:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000040u;
        }
    }
L_00079c48:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000bu, 1, 1);
    }
L_00079c4c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000080u;
        }
    }
L_00079c50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00079c54:;
    {
        uint32_t v = cpu->r[5] | cpu->r[8]; cpu->r[8] = v;
        set_nz(cpu, v);
    }
L_00079c58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00079c5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00079c60:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00079c64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_00079c68:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 1);
    }
L_00079c6c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = cpu->r[2];
        }
    }
L_00079c70:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] | 0x00000001u; cpu->r[7] = v;
        }
    }
L_00079c74:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_00079c78:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00079c7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000796e4;
        }
    }
L_00079c80:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00079c84:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = (~0x00000004u);
        }
    }
L_00079c88:;
    {
        goto L_000796e4;
    }
L_00079c8c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_00079c90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00079c94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007ab48;
        }
    }
L_00079c98:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 1);
    }
L_00079c9c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00079cb8;
        }
    }
L_00079ca0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00079ca4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_00079ca8:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[3] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_00079cac:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_00079cb0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_00079cb4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00079cb8:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 1u, &shc); cpu->r[3] = v;
    }
L_00079cbc:;
    {
        uint32_t v = cpu->r[9] & 0x00000001u; cpu->r[9] = v;
    }
L_00079cc0:;
    {
        uint32_t v = cpu->r[3] & 0x00000003u; cpu->r[2] = v;
    }
L_00079cc4:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[9]);
    }
L_00079cc8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_00079ccc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x0000000fu;
        }
    }
L_00079cd0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6], cpu->r[2]);
        }
    }
L_00079cd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079d1c;
        }
    }
L_00079cd8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_00079cdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007aa80;
        }
    }
L_00079ce0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00079ce4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x0000000du;
        }
    }
L_00079ce8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6], cpu->r[2]);
        }
    }
L_00079cec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00079d1c;
        }
    }
L_00079cf0:;
    {
        cpu->r[2] = rd32(0x00079cf8u + + 0xa28u);
    }
L_00079cf4:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_00079cf8:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[1]);
    }
L_00079cfc:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_00079d00:;
    {
        cpu->r[2] = add_flags(cpu, 0x00079d08u, cpu->r[2], 0, 0);
    }
L_00079d04:;
    {
        wr32(cpu->r[6] + + 0x58u, cpu->r[1]);
    }
L_00079d08:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[2]);
    }
L_00079d0c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000800u, 0, 0);
    }
L_00079d10:;
    {
        cpu->r[2] = 0x00000012u;
    }
L_00079d14:;
    {
        wr32(cpu->r[6] + + 0x50u, cpu->r[1]);
    }
L_00079d18:;
    {
        wr32(cpu->r[6], cpu->r[2]);
    }
L_00079d1c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 2u, &shc); cpu->r[9] = v;
    }
L_00079d20:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000003u, 1, 0);
    }
L_00079d24:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00079d28:;
    {
        goto L_000797cc;
    }
L_00079d2c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00079d30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_00079d34:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00079d38:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x44u);
    }
L_00079d3c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 0);
    }
L_00079d40:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_00079d44:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0007a954;
        }
    }
L_00079d48:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x30u);
    }
L_00079d4c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_00079d50:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00079d54:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
        }
    }
L_00079d58:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
        }
    }
L_00079d5c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = rd32(cpu->r[6] + + 0x28u);
        }
    }
L_00079d60:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = rd32(cpu->r[6] + + 0x34u);
        }
    }
L_00079d64:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = rd32(cpu->r[6] + + 0x34u);
        }
    }
L_00079d68:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
        }
    }
L_00079d6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00079d70:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x40u);
    }
L_00079d74:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00079d78:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_00079d7c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_00079d80:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[1] = cpu->r[7];
        }
    }
L_00079d84:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x10u);
    }
L_00079d88:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00079d8c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 0);
    }
L_00079d90:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_00079d94:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[2]);
    }
L_00079d98:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00079d9c:;
    {
        wr8(cpu->r[10] + cpu->r[3], cpu->r[2]);
    }
L_00079da0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00079da4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00079da8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00079d98;
        }
    }
L_00079dac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x40u);
    }
L_00079db0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00079db4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00079db8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00079dbc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000012u;
        }
    }
L_00079dc0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_00079dc4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[6]);
        }
    }
L_00079dc8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6], cpu->r[3]);
        }
    }
L_00079dcc:;
    {
        goto L_000797cc;
    }
L_00079dd0:;
    {
        { uint32_t v = cpu->r[0] & 0x000000f0u; set_nz(cpu, v); }
    }
L_00079dd4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + + 0x40u, cpu->r[10]);
        }
    }
L_00079dd8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_00079ddc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[9], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[9] = v;
        }
    }
L_00079de0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00079eb4;
        }
    }
L_00079de4:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00079de8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00079dec:;
    {
        cpu->r[2] = (~shifter(cpu->r[2], 2, (cpu->r[0] & 0xffu), &shc));
    }
L_00079df0:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[2]);
    }
L_00079df4:;
    {
        uint32_t v = cpu->r[2] & cpu->r[9]; cpu->r[2] = v;
    }
L_00079df8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], shifter(cpu->r[2], 3, (cpu->r[3] & 0xffu), &shc), 0, 0);
    }
L_00079dfc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00079e00:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[0]);
    }
L_00079e04:;
    {
        cpu->r[0] = rd8(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00079e08:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_00079e0c:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x1u);
    }
L_00079e10:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_00079e14:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_00079e18:;
    {
        cpu->r[2] = rd16(cpu->r[2] + + 0x2u);
    }
L_00079e1c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_00079e20:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_00079e24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00079e28:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[2]);
    }
L_00079e2c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00079e30:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00079e90;
        }
    }
L_00079e34:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00079e38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_00079e3c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[12]);
    }
L_00079e40:;
    {
        goto L_00079e4c;
    }
L_00079e44:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00079e48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007add0;
        }
    }
L_00079e4c:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[2] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_00079e50:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_00079e54:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00079e58:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[2], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_00079e5c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00079e60:;
    {
        uint32_t v = cpu->r[9] & cpu->r[12]; cpu->r[0] = v;
    }
L_00079e64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], shifter(cpu->r[0], 3, (cpu->r[3] & 0xffu), &shc), 0, 0);
    }
L_00079e68:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00079e6c:;
    {
        cpu->r[0] = rd8(cpu->r[1] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_00079e70:;
    {
        cpu->r[12] = rd8(cpu->r[2] + + 0x1u);
    }
L_00079e74:;
    {
        cpu->r[2] = rd16(cpu->r[2] + + 0x2u);
    }
L_00079e78:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_00079e7c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_00079e80:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_00079e84:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_00079e88:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00079e44;
        }
    }
L_00079e8c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x50u);
    }
L_00079e90:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_00079e94:;
    {
        uint32_t v = shifter(cpu->r[9], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[9] = v;
    }
L_00079e98:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_00079e9c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00079ea0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_00079ea4:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[1]);
    }
L_00079ea8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
    }
L_00079eac:;
    {
        uint32_t v = shifter(cpu->r[9], 3, (cpu->r[2] & 0xffu), &shc); cpu->r[9] = v;
    }
L_00079eb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a5ac;
        }
    }
L_00079eb4:;
    {
        { uint32_t v = cpu->r[0] & 0x00000020u; set_nz(cpu, v); }
    }
L_00079eb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007adec;
        }
    }
L_00079ebc:;
    {
        { uint32_t v = cpu->r[0] & 0x00000040u; set_nz(cpu, v); }
    }
L_00079ec0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007afd4;
        }
    }
L_00079ec4:;
    {
        uint32_t v = cpu->r[0] & 0x0000000fu; cpu->r[0] = v;
    }
L_00079ec8:;
    {
        cpu->r[3] = 0x00000013u;
    }
L_00079ecc:;
    {
        wr32(cpu->r[6] + + 0x48u, cpu->r[0]);
    }
L_00079ed0:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_00079ed4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x48u);
    }
L_00079ed8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00079edc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079f24;
        }
    }
L_00079ee0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00079ee4:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00079f08;
        }
    }
L_00079ee8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00079eec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_00079ef0:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[2] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_00079ef4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_00079ef8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[2], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_00079efc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00079f00:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00079f04:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00079ee8;
        }
    }
L_00079f08:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00079f0c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x40u);
    }
L_00079f10:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_00079f14:;
    {
        uint32_t v = cpu->r[9] & ~ shifter(cpu->r[2], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00079f18:;
    {
        uint32_t v = shifter(cpu->r[9], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[9] = v;
    }
L_00079f1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_00079f20:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[2]);
    }
L_00079f24:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_00079f28:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_00079f2c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00079f30:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x58u);
    }
L_00079f34:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x50u);
    }
L_00079f38:;
    {
        cpu->r[3] = (~shifter(cpu->r[1], 2, (cpu->r[3] & 0xffu), &shc));
    }
L_00079f3c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_00079f40:;
    {
        uint32_t v = cpu->r[9] & cpu->r[3]; cpu->r[3] = v;
    }
L_00079f44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00079f48:;
    {
        cpu->r[10] = rd8(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00079f4c:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x1u);
    }
L_00079f50:;
    {
        cpu->r[0] = rd16(cpu->r[1] + + 0x2u);
    }
L_00079f54:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00079f58:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[3]);
    }
L_00079f5c:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00079fb0;
        }
    }
L_00079f60:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00079f64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_00079f68:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[12]);
    }
L_00079f6c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_00079f70:;
    {
        goto L_00079f7c;
    }
L_00079f74:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00079f78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a944;
        }
    }
L_00079f7c:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[3] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_00079f80:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_00079f84:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_00079f88:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00079f8c:;
    {
        uint32_t v = cpu->r[9] & cpu->r[1]; cpu->r[3] = v;
    }
L_00079f90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00079f94:;
    {
        cpu->r[10] = rd8(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00079f98:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1u);
    }
L_00079f9c:;
    {
        cpu->r[0] = rd16(cpu->r[0] + + 0x2u);
    }
L_00079fa0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00079fa4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00079f74;
        }
    }
L_00079fa8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_00079fac:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[3]);
    }
L_00079fb0:;
    {
        { uint32_t v = cpu->r[10] & 0x000000f0u; set_nz(cpu, v); }
    }
L_00079fb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007a06c;
        }
    }
L_00079fb8:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_00079fbc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_00079fc0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00079fc4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00079fc8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_00079fcc:;
    {
        cpu->r[3] = (~shifter(cpu->r[3], 2, (cpu->r[10] & 0xffu), &shc));
    }
L_00079fd0:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_00079fd4:;
    {
        uint32_t v = cpu->r[3] & cpu->r[9]; cpu->r[3] = v;
    }
L_00079fd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 3, (cpu->r[1] & 0xffu), &shc), 0, 0);
    }
L_00079fdc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00079fe0:;
    {
        cpu->r[10] = rd8(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00079fe4:;
    {
        cpu->r[0] = rd16(cpu->r[1] + + 0x2u);
    }
L_00079fe8:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x1u);
    }
L_00079fec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00079ff0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_00079ff4:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[1]);
    }
L_00079ff8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_00079ffc:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0007a05c;
        }
    }
L_0007a000:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007a004:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_0007a008:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0007a00c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[12]);
    }
L_0007a010:;
    {
        goto L_0007a01c;
    }
L_0007a014:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007a018:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007ab20;
        }
    }
L_0007a01c:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[3] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_0007a020:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0007a024:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_0007a028:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0007a02c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_0007a030:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0007a034:;
    {
        uint32_t v = cpu->r[9] & cpu->r[12]; cpu->r[3] = v;
    }
L_0007a038:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 3, (cpu->r[1] & 0xffu), &shc), 0, 0);
    }
L_0007a03c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007a040:;
    {
        cpu->r[10] = rd8(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0007a044:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1u);
    }
L_0007a048:;
    {
        cpu->r[0] = rd16(cpu->r[0] + + 0x2u);
    }
L_0007a04c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_0007a050:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[5], 1, 1);
    }
L_0007a054:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0007a014;
        }
    }
L_0007a058:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_0007a05c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0007a060:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x50u);
    }
L_0007a064:;
    {
        uint32_t v = shifter(cpu->r[9], 3, (cpu->r[1] & 0xffu), &shc); cpu->r[9] = v;
    }
L_0007a068:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
    }
L_0007a06c:;
    {
        { uint32_t v = cpu->r[10] & 0x00000040u; set_nz(cpu, v); }
    }
L_0007a070:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_0007a074:;
    {
        uint32_t v = shifter(cpu->r[9], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[9] = v;
    }
L_0007a078:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007af44;
        }
    }
L_0007a07c:;
    {
        uint32_t v = cpu->r[10] & 0x0000000fu; cpu->r[10] = v;
    }
L_0007a080:;
    {
        cpu->r[3] = 0x00000015u;
    }
L_0007a084:;
    {
        wr32(cpu->r[6] + + 0x44u, cpu->r[0]);
    }
L_0007a088:;
    {
        wr32(cpu->r[6] + + 0x48u, cpu->r[10]);
    }
L_0007a08c:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_0007a090:;
    {
        goto L_0007a480;
    }
L_0007a094:;
    {
        uint32_t v = cpu->r[5] & 0x00000007u; cpu->r[3] = v;
    }
L_0007a098:;
    {
        uint32_t v = cpu->r[5] & ~ 0x00000007u; cpu->r[5] = v;
    }
L_0007a09c:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000001fu, 1, 1);
    }
L_0007a0a0:;
    {
        uint32_t v = shifter(cpu->r[9], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[9] = v;
    }
L_0007a0a4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0007a0d4;
        }
    }
L_0007a0a8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007a0ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007a0bc;
        }
    }
L_0007a0b0:;
    {
        goto L_0007a93c;
    }
L_0007a0b4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007a0b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_0007a0bc:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[3] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_0007a0c0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0007a0c4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_0007a0c8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0007a0cc:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000001fu, 1, 1);
    }
L_0007a0d0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0007a0b4;
        }
    }
L_0007a0d4:;
    {
        cpu->r[2] = 0x0000ffffu;
    }
L_0007a0d8:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[9]);
    }
L_0007a0dc:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[9], 3, 16u, &shc); cpu->r[2] = v;
    }
L_0007a0e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0007a0e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007ae14;
        }
    }
L_0007a0e8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0007a0ec:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[3]);
    }
L_0007a0f0:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_0007a0f4:;
    {
        cpu->r[3] = 0x0000000eu;
    }
L_0007a0f8:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_0007a0fc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x40u);
    }
L_0007a100:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007a104:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007adec;
        }
    }
L_0007a108:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0007a10c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = cpu->r[7];
        }
    }
L_0007a110:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_0007a114:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[10] = cpu->r[3];
        }
    }
L_0007a118:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[10] = cpu->r[8];
        }
    }
L_0007a11c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0007a120:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_0007a124:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0007a128:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007a12c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0007a130:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0007a134:;
    {
        cpu->r[14] = 0x0007a138u; imp_memcpy(cpu); /* memcpy */
    }
L_0007a138:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x40u);
    }
L_0007a13c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007a140:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 0);
    }
L_0007a144:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
    }
L_0007a148:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[10], 0, 0);
    }
L_0007a14c:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[3]);
    }
L_0007a150:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_0007a154:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[10], 1, 0);
    }
L_0007a158:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_0007a15c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0007a160:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007a164:;
    {
        goto L_000797cc;
    }
L_0007a168:;
    {
        cpu->r[3] = 0x0000001cu;
    }
L_0007a16c:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_0007a170:;
    {
        cpu->r[10] = (~0x00000003u);
    }
L_0007a174:;
    {
        goto L_000796e4;
    }
L_0007a178:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x64u);
    }
L_0007a17c:;
    {
        cpu->r[10] = cpu->r[12];
    }
L_0007a180:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x60u);
    }
L_0007a184:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0007a188:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0007a18c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x68u);
    }
L_0007a190:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0007a194:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_0007a198:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0007ac4c;
        }
    }
L_0007a19c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0007a1a0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x54u);
    }
L_0007a1a4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x4cu);
    }
L_0007a1a8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[0] = v;
    }
L_0007a1ac:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0007a1b0:;
    {
        uint32_t v = cpu->r[9] & cpu->r[0]; cpu->r[3] = v;
    }
L_0007a1b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007a1b8:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x1u);
    }
L_0007a1bc:;
    {
        cpu->r[3] = rd16(cpu->r[3] + + 0x2u);
    }
L_0007a1c0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_0007a1c4:;
    {
        if (cond_test(cpu, 4)) {
        goto L_0007a1f4;
        }
    }
L_0007a1c8:;
    {
        goto L_0007a9b8;
    }
L_0007a1cc:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[3] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_0007a1d0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0007a1d4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_0007a1d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0007a1dc:;
    {
        uint32_t v = cpu->r[9] & cpu->r[0]; cpu->r[3] = v;
    }
L_0007a1e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007a1e4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x1u);
    }
L_0007a1e8:;
    {
        cpu->r[3] = rd16(cpu->r[3] + + 0x2u);
    }
L_0007a1ec:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0007a1f0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0007a9b8;
        }
    }
L_0007a1f4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007a1f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007a1cc;
        }
    }
L_0007a1fc:;
    {
        cpu->r[12] = cpu->r[7];
    }
L_0007a200:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007a204:;
    {
        goto L_00079b68;
    }
L_0007a208:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_0007a20c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007a210:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007ade0;
        }
    }
L_0007a214:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000fu, 1, 1);
    }
L_0007a218:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0007a248;
        }
    }
L_0007a21c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007a220:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007a230;
        }
    }
L_0007a224:;
    {
        goto L_00079b5c;
    }
L_0007a228:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007a22c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a93c;
        }
    }
L_0007a230:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[2] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_0007a234:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0007a238:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[2], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_0007a23c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0007a240:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000fu, 1, 1);
    }
L_0007a244:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0007a228;
        }
    }
L_0007a248:;
    {
        cpu->r[2] = (cpu->r[3] >> 1) & 0x1u;
    }
L_0007a24c:;
    {
        cpu->r[1] = 0x00008b1fu;
    }
L_0007a250:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 1);
    }
L_0007a254:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0007a258:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[1] = v;
        }
    }
L_0007a25c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007a260:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007ab60;
        }
    }
L_0007a264:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x20u);
    }
L_0007a268:;
    {
        wr32(cpu->r[6] + + 0x10u, cpu->r[1]);
    }
L_0007a26c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007a270:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_0007a274:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + + 0x30u, cpu->r[3]);
        }
    }
L_0007a278:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
        }
    }
L_0007a27c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0007a280:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007aa98;
        }
    }
L_0007a284:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 24u, &shc); cpu->r[0] = v;
    }
L_0007a288:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 8u, &shc); cpu->r[3] = v;
    }
L_0007a28c:;
    {
        cpu->r[1] = 0x0000001fu;
    }
L_0007a290:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0007a294:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 3, 16u, &shc), 0, 0);
    }
L_0007a298:;
    {
        cpu->r[14] = 0x0007a29cu; imp___aeabi_uidivmod(cpu); /* __aeabi_uidivmod */
    }
L_0007a29c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007a2a0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007a2a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007aa98;
        }
    }
L_0007a2a8:;
    {
        uint32_t v = cpu->r[9] & 0x0000000fu; cpu->r[3] = v;
    }
L_0007a2ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_0007a2b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007af9c;
        }
    }
L_0007a2b4:;
    {
        cpu->r[2] = rd32(0x0007a2bcu + + 0x468u);
    }
L_0007a2b8:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_0007a2bc:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0007a2c0:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_0007a2c4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007a2ccu, cpu->r[2], 0, 0);
    }
L_0007a2c8:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_0007a2cc:;
    {
        goto L_000797cc;
    }
L_0007a2d0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0007a2d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_0007a2d8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007a2dc:;
    {
        cpu->r[2] = 0x00000012u;
    }
L_0007a2e0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x40u);
    }
L_0007a2e4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_0007a2e8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0007a2ec:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000001u;
        wr8(cpu->r[0], cpu->r[1]);
        cpu->r[0] = wb_tmp;
    }
L_0007a2f0:;
    {
        wr32(cpu->r[6], cpu->r[2]);
    }
L_0007a2f4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_0007a2f8:;
    {
        goto L_000797cc;
    }
L_0007a2fc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0007a300:;
    {
        uint32_t v = cpu->r[3] & 0x00001000u; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0007a304:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a91c;
        }
    }
L_0007a308:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007a30c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_0007a310:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0007a314:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x20u);
    }
L_0007a318:;
    {
        cpu->r[2] = rd8(cpu->r[11] + cpu->r[10]);
    }
L_0007a31c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0007a320:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007a324:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a34c;
        }
    }
L_0007a328:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x24u);
    }
L_0007a32c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007a330:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a34c;
        }
    }
L_0007a334:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x28u);
    }
L_0007a338:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x40u);
    }
L_0007a33c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0007a340:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007a344:;
    {
        if (cond_test(cpu, 4)) {
        wr8(cpu->r[1] + cpu->r[3], cpu->r[2]);
        }
    }
L_0007a348:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[6] + + 0x40u, cpu->r[0]);
        }
    }
L_0007a34c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007a350:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
        }
    }
L_0007a354:;
    {
        if (cond_test(cpu, 4)) {
        goto L_0007a314;
        }
    }
L_0007a358:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0007a35c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0007a360:;
    {
        { uint32_t v = cpu->r[3] & 0x00000200u; set_nz(cpu, v); }
    }
L_0007a364:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007aa40;
        }
    }
L_0007a368:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0007a36c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[10], 0, 0);
    }
L_0007a370:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 0);
    }
L_0007a374:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007a378:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00079b5c;
        }
    }
L_0007a37c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0007a380:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_0007a384:;
    {
        wr32(cpu->r[6], cpu->r[2]);
    }
L_0007a388:;
    {
        { uint32_t v = cpu->r[3] & 0x00000200u; set_nz(cpu, v); }
    }
L_0007a38c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007a3ac;
        }
    }
L_0007a390:;
    {
        goto L_0007a970;
    }
L_0007a394:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007a398:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_0007a39c:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[2] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_0007a3a0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0007a3a4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[2], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_0007a3a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0007a3ac:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000fu, 1, 1);
    }
L_0007a3b0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0007a394;
        }
    }
L_0007a3b4:;
    {
        cpu->r[2] = rd16(cpu->r[6] + + 0x18u);
    }
L_0007a3b8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 1);
    }
L_0007a3bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a968;
        }
    }
L_0007a3c0:;
    {
        cpu->r[2] = rd32(0x0007a3c8u + + 0x360u);
    }
L_0007a3c4:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_0007a3c8:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0007a3cc:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_0007a3d0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007a3d8u, cpu->r[2], 0, 0);
    }
L_0007a3d4:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_0007a3d8:;
    {
        goto L_000797cc;
    }
L_0007a3dc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0007a3e0:;
    {
        uint32_t v = cpu->r[3] & 0x00000800u; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_0007a3e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a92c;
        }
    }
L_0007a3e8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007a3ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_0007a3f0:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0007a3f4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x20u);
    }
L_0007a3f8:;
    {
        cpu->r[2] = rd8(cpu->r[11] + cpu->r[10]);
    }
L_0007a3fc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0007a400:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007a404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a42c;
        }
    }
L_0007a408:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x1cu);
    }
L_0007a40c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007a410:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a42c;
        }
    }
L_0007a414:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x20u);
    }
L_0007a418:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x40u);
    }
L_0007a41c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0007a420:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007a424:;
    {
        if (cond_test(cpu, 4)) {
        wr8(cpu->r[1] + cpu->r[3], cpu->r[2]);
        }
    }
L_0007a428:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[6] + + 0x40u, cpu->r[0]);
        }
    }
L_0007a42c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007a430:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
        }
    }
L_0007a434:;
    {
        if (cond_test(cpu, 4)) {
        goto L_0007a3f4;
        }
    }
L_0007a438:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0007a43c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0007a440:;
    {
        { uint32_t v = cpu->r[3] & 0x00000200u; set_nz(cpu, v); }
    }
L_0007a444:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007aa60;
        }
    }
L_0007a448:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0007a44c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[10], 0, 0);
    }
L_0007a450:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 0);
    }
L_0007a454:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007a458:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00079b5c;
        }
    }
L_0007a45c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0007a460:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0007a464:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[2]);
    }
L_0007a468:;
    {
        cpu->r[2] = 0x00000007u;
    }
L_0007a46c:;
    {
        wr32(cpu->r[6], cpu->r[2]);
    }
L_0007a470:;
    {
        goto L_0007a300;
    }
L_0007a474:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0007a478:;
    {
        goto L_0007a388;
    }
L_0007a47c:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0x48u);
    }
L_0007a480:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0007a484:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007a4e0;
        }
    }
L_0007a488:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x2cu);
    }
L_0007a48c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007a490:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x44u);
    }
L_0007a494:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0007a498:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 0);
    }
L_0007a49c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0007a4a0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x00000016u;
        }
    }
L_0007a4a4:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[6], cpu->r[3]);
        }
    }
L_0007a4a8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00079d2c;
        }
    }
L_0007a4ac:;
    {
        cpu->r[2] = rd32(0x0007a4b4u + + 0x278u);
    }
L_0007a4b0:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_0007a4b4:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0007a4b8:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_0007a4bc:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007a4c4u, cpu->r[2], 0, 0);
    }
L_0007a4c0:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_0007a4c4:;
    {
        goto L_000797cc;
    }
L_0007a4c8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007a4cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_0007a4d0:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[3] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_0007a4d4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0007a4d8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_0007a4dc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0007a4e0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[10], 1, 1);
    }
L_0007a4e4:;
    {
        if (cond_test(cpu, 4)) {
        goto L_0007a4c8;
        }
    }
L_0007a4e8:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0007a4ec:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x48u);
    }
L_0007a4f0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x44u);
    }
L_0007a4f4:;
    {
        uint32_t v = cpu->r[9] & ~ shifter(cpu->r[2], 2, (cpu->r[10] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0007a4f8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_0007a4fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0007a500:;
    {
        uint32_t v = shifter(cpu->r[9], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[9] = v;
    }
L_0007a504:;
    {
        wr32(cpu->r[6] + + 0x44u, cpu->r[2]);
    }
L_0007a508:;
    {
        goto L_0007a488;
    }
L_0007a50c:;
    {
        cpu->r[3] = 0x00000101u;
    }
L_0007a510:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000005u, 1, 1);
    }
L_0007a514:;
    {
        if (cond_test(cpu, 9)) {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
        }
    }
L_0007a518:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0007aed0;
        }
    }
L_0007a51c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0007a520:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x54u);
    }
L_0007a524:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x4cu);
    }
L_0007a528:;
    {
        cpu->r[3] = (~shifter(cpu->r[2], 2, (cpu->r[3] & 0xffu), &shc));
    }
L_0007a52c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0007a530:;
    {
        uint32_t v = cpu->r[9] & cpu->r[3]; cpu->r[3] = v;
    }
L_0007a534:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007a538:;
    {
        cpu->r[0] = rd8(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0007a53c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x1u);
    }
L_0007a540:;
    {
        cpu->r[10] = rd16(cpu->r[2] + + 0x2u);
    }
L_0007a544:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0007a548:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0007a598;
        }
    }
L_0007a54c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007a550:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_0007a554:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[12]);
    }
L_0007a558:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0007a55c:;
    {
        goto L_0007a568;
    }
L_0007a560:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007a564:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a944;
        }
    }
L_0007a568:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[3] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_0007a56c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0007a570:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_0007a574:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0007a578:;
    {
        uint32_t v = cpu->r[9] & cpu->r[12]; cpu->r[3] = v;
    }
L_0007a57c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007a580:;
    {
        cpu->r[0] = rd8(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0007a584:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x1u);
    }
L_0007a588:;
    {
        cpu->r[10] = rd16(cpu->r[2] + + 0x2u);
    }
L_0007a58c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0007a590:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0007a560;
        }
    }
L_0007a594:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_0007a598:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007a59c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6] + + 0x40u, cpu->r[10]);
        }
    }
L_0007a5a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_0007a5a4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[9], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[9] = v;
        }
    }
L_0007a5a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00079dd0;
        }
    }
L_0007a5ac:;
    {
        cpu->r[3] = 0x00000017u;
    }
L_0007a5b0:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_0007a5b4:;
    {
        goto L_000797cc;
    }
L_0007a5b8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0007a5bc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000400u; set_nz(cpu, v); }
    }
L_0007a5c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a670;
        }
    }
L_0007a5c4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x40u);
    }
L_0007a5c8:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_0007a5cc:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[10] = cpu->r[8];
        }
    }
L_0007a5d0:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[10] = cpu->r[1];
        }
    }
L_0007a5d4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0007a5d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a664;
        }
    }
L_0007a5dc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x20u);
    }
L_0007a5e0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007a5e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a628;
        }
    }
L_0007a5e8:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x10u);
    }
L_0007a5ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007a5f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a628;
        }
    }
L_0007a5f4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x14u);
    }
L_0007a5f8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x18u);
    }
L_0007a5fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_0007a600:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0007a604:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_0007a608:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0007a60c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0007a610:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0007a614:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_0007a618:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = cpu->r[10];
        }
    }
L_0007a61c:;
    {
        cpu->r[14] = 0x0007a620u; imp_memcpy(cpu); /* memcpy */
    }
L_0007a620:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0007a624:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007a628:;
    {
        { uint32_t v = cpu->r[3] & 0x00000200u; set_nz(cpu, v); }
    }
L_0007a62c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a64c;
        }
    }
L_0007a630:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_0007a634:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0007a638:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0007a63c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0007a640:;
    {
        cpu->r[14] = 0x0007a644u; fn_00074510(cpu);
    }
L_0007a644:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007a648:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[0]);
    }
L_0007a64c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x40u);
    }
L_0007a650:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 0);
    }
L_0007a654:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[10], 0, 0);
    }
L_0007a658:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
    }
L_0007a65c:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[3]);
    }
L_0007a660:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0007a664:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007a668:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00079b5c;
        }
    }
L_0007a66c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0007a670:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0007a674:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[2]);
    }
L_0007a678:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_0007a67c:;
    {
        wr32(cpu->r[6], cpu->r[2]);
    }
L_0007a680:;
    {
        goto L_0007a3e0;
    }
L_0007a684:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_0007a688:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007a68c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007ab30;
        }
    }
L_0007a690:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0007a694:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007a698:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007ab30;
        }
    }
L_0007a69c:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000001fu, 1, 1);
    }
L_0007a6a0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0007a6d0;
        }
    }
L_0007a6a4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007a6a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007a6b8;
        }
    }
L_0007a6ac:;
    {
        goto L_00079b5c;
    }
L_0007a6b0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007a6b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a93c;
        }
    }
L_0007a6b8:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[3] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_0007a6bc:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0007a6c0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_0007a6c4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0007a6c8:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000001fu, 1, 1);
    }
L_0007a6cc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0007a6b0;
        }
    }
L_0007a6d0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x1cu);
    }
L_0007a6d4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_0007a6d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007ae5c;
        }
    }
L_0007a6dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_0007a6e0:;
    {
        cpu->r[3] = 0x0000001bu;
    }
L_0007a6e4:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_0007a6e8:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_0007a6ec:;
    {
        goto L_000797cc;
    }
L_0007a6f0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_0007a6f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007a6f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a824;
        }
    }
L_0007a6fc:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000001fu, 1, 1);
    }
L_0007a700:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0007a788;
        }
    }
L_0007a704:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007a708:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007a770;
        }
    }
L_0007a70c:;
    {
        goto L_00079b5c;
    }
L_0007a768:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007a76c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a93c;
        }
    }
L_0007a770:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[3] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_0007a774:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0007a778:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_0007a77c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0007a780:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000001fu, 1, 1);
    }
L_0007a784:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0007a768;
        }
    }
L_0007a788:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007a78c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_0007a790:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 0);
    }
L_0007a794:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0007a798:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007a79c:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_0007a7a0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x1cu);
    }
L_0007a7a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0007a7a8:;
    {
        wr32(cpu->r[6] + + 0x1cu, cpu->r[3]);
    }
L_0007a7ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a7e0;
        }
    }
L_0007a7b0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0007a7b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007a7b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007ad94;
        }
    }
L_0007a7bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007a7c0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0007a7c4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_0007a7c8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_0007a7cc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0007a7d0:;
    {
        cpu->r[14] = 0x0007a7d4u; fn_00074510(cpu);
    }
L_0007a7d4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007a7d8:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[0]);
    }
L_0007a7dc:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_0007a7e0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0007a7e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007a7e8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[9], 3, 8u, &shc); cpu->r[2] = v;
        }
    }
L_0007a7ec:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[9], 3, 24u, &shc); cpu->r[1] = v;
        }
    }
L_0007a7f0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & 0x0000ff00u; cpu->r[2] = v;
        }
    }
L_0007a7f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[9], 2, 24u, &shc), 0, 0);
        }
    }
L_0007a7f8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & 0x0000ff00u; cpu->r[3] = v;
        }
    }
L_0007a7fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
        }
    }
L_0007a800:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[9];
        }
    }
L_0007a804:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 8u, &shc), 0, 0);
        }
    }
L_0007a808:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x18u);
    }
L_0007a80c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0007a810:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007af24;
        }
    }
L_0007a814:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0007a818:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_0007a81c:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_0007a820:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[7]);
    }
L_0007a824:;
    {
        cpu->r[2] = 0x00000019u;
    }
L_0007a828:;
    {
        wr32(cpu->r[6], cpu->r[2]);
    }
L_0007a82c:;
    {
        goto L_0007a688;
    }
L_0007a830:;
    {
        cpu->r[12] = cpu->r[7];
    }
L_0007a834:;
    {
        cpu->r[10] = (~0x00000002u);
    }
L_0007a838:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007a83c:;
    {
        goto L_00079b68;
    }
L_0007a840:;
    {
        cpu->r[12] = cpu->r[7];
    }
L_0007a844:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_0007a848:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007a84c:;
    {
        goto L_00079b68;
    }
L_0007a850:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0007a854:;
    {
        uint32_t v = cpu->r[3] & 0x00000400u; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0007a858:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007a88c;
        }
    }
L_0007a85c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x20u);
    }
L_0007a860:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007a864:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + + 0x10u, cpu->r[1]);
        }
    }
L_0007a868:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_0007a86c:;
    {
        wr32(cpu->r[6], cpu->r[2]);
    }
L_0007a870:;
    {
        goto L_0007a5bc;
    }
L_0007a874:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007a878:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00079b5c;
        }
    }
L_0007a87c:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[2] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_0007a880:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0007a884:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[2], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_0007a888:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0007a88c:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000fu, 1, 1);
    }
L_0007a890:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0007a874;
        }
    }
L_0007a894:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x20u);
    }
L_0007a898:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[9]);
    }
L_0007a89c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007a8a0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + + 0x14u, cpu->r[9]);
        }
    }
L_0007a8a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
        }
    }
L_0007a8a8:;
    {
        uint32_t v = cpu->r[3] & 0x00000200u; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_0007a8ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = cpu->r[2];
        }
    }
L_0007a8b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = cpu->r[9];
        }
    }
L_0007a8b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a868;
        }
    }
L_0007a8b8:;
    {
        wr8(cpu->r[13] + + 0x5cu, cpu->r[9]);
    }
L_0007a8bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_0007a8c0:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 8u, &shc); cpu->r[9] = v;
    }
L_0007a8c4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0007a8c8:;
    {
        wr8(cpu->r[13] + + 0x5du, cpu->r[9]);
    }
L_0007a8cc:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0007a8d0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_0007a8d4:;
    {
        cpu->r[5] = cpu->r[9];
    }
L_0007a8d8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0007a8dc:;
    {
        cpu->r[14] = 0x0007a8e0u; fn_00074510(cpu);
    }
L_0007a8e0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0007a8e4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007a8e8:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[0]);
    }
L_0007a8ec:;
    {
        goto L_0007a868;
    }
L_0007a8f0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_0007a8f4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0007a8f8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_0007a8fc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
    }
L_0007a900:;
    {
        cpu->r[14] = 0x0007a904u; fn_0007406c(cpu);
    }
L_0007a904:;
    {
        goto L_00079c30;
    }
L_0007a908:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0007a90c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007a910:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0007a914:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000796e0;
        }
    }
L_0007a918:;
    {
        goto L_00079724;
    }
L_0007a91c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x20u);
    }
L_0007a920:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007a924:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + + 0x24u, cpu->r[1]);
        }
    }
L_0007a928:;
    {
        goto L_0007a380;
    }
L_0007a92c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x20u);
    }
L_0007a930:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007a934:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[1] + + 0x1cu, cpu->r[2]);
        }
    }
L_0007a938:;
    {
        goto L_0007a460;
    }
L_0007a93c:;
    {
        cpu->r[10] = cpu->r[12];
    }
L_0007a940:;
    {
        goto L_0007a1fc;
    }
L_0007a944:;
    {
        cpu->r[12] = cpu->r[7];
    }
L_0007a948:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x48u);
    }
L_0007a94c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007a950:;
    {
        goto L_00079b68;
    }
L_0007a954:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x40u);
    }
L_0007a958:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007a95c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0007a960:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_0007a964:;
    {
        goto L_00079d7c;
    }
L_0007a968:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0007a96c:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_0007a970:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x20u);
    }
L_0007a974:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0007a978:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0007a97c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0007a980:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007a984:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (cpu->r[3] >> 9) & 0x1u;
        }
    }
L_0007a988:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + + 0x2cu, cpu->r[3]);
        }
    }
L_0007a98c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0007a990:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + + 0x30u, cpu->r[3]);
        }
    }
L_0007a994:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0007a998:;
    {
        cpu->r[14] = 0x0007a99cu; fn_00074510(cpu);
    }
L_0007a99c:;
    {
        cpu->r[2] = 0x0000000bu;
    }
L_0007a9a0:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0007a9a4:;
    {
        wr32(cpu->r[6], cpu->r[2]);
    }
L_0007a9a8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007a9ac:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[0]);
    }
L_0007a9b0:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_0007a9b4:;
    {
        goto L_000797cc;
    }
L_0007a9b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000fu, 1, 1);
    }
L_0007a9bc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0007aa1c;
        }
    }
L_0007a9c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_0007a9c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007abb8;
        }
    }
L_0007a9c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000011u, 1, 1);
    }
L_0007a9cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007ac18;
        }
    }
L_0007a9d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_0007a9d4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_0007a9d8:;
    {
        if (cond_test(cpu, 4)) {
        goto L_0007a9f8;
        }
    }
L_0007a9dc:;
    {
        goto L_0007ad04;
    }
L_0007a9e0:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[3] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_0007a9e4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0007a9e8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_0007a9ec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0007a9f0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_0007a9f4:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0007ad04;
        }
    }
L_0007a9f8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007a9fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007a9e0;
        }
    }
L_0007aa00:;
    {
        goto L_0007a1fc;
    }
L_0007aa04:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007aa08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a1fc;
        }
    }
L_0007aa0c:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[1] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_0007aa10:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0007aa14:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[1], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_0007aa18:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0007aa1c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_0007aa20:;
    {
        if (cond_test(cpu, 4)) {
        goto L_0007aa04;
        }
    }
L_0007aa24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_0007aa28:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
    }
L_0007aa2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007aa30:;
    {
        uint32_t v = shifter(cpu->r[9], 3, (cpu->r[2] & 0xffu), &shc); cpu->r[9] = v;
    }
L_0007aa34:;
    {
        wr32(cpu->r[6] + + 0x68u, cpu->r[12]);
    }
L_0007aa38:;
    {
        wr16(cpu->r[1] + + 0x70u, cpu->r[3]);
    }
L_0007aa3c:;
    {
        goto L_0007a18c;
    }
L_0007aa40:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_0007aa44:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0007aa48:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0007aa4c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0007aa50:;
    {
        cpu->r[14] = 0x0007aa54u; fn_00074510(cpu);
    }
L_0007aa54:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007aa58:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[0]);
    }
L_0007aa5c:;
    {
        goto L_0007a368;
    }
L_0007aa60:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_0007aa64:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0007aa68:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0007aa6c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0007aa70:;
    {
        cpu->r[14] = 0x0007aa74u; fn_00074510(cpu);
    }
L_0007aa74:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007aa78:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[0]);
    }
L_0007aa7c:;
    {
        goto L_0007a448;
    }
L_0007aa80:;
    {
        cpu->r[2] = rd32(0x0007aa88u + - 0x358u);
    }
L_0007aa84:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_0007aa88:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_0007aa8c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007aa94u, cpu->r[2], 0, 0);
    }
L_0007aa90:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_0007aa94:;
    {
        goto L_00079d1c;
    }
L_0007aa98:;
    {
        cpu->r[2] = rd32(0x0007aaa0u + - 0x36cu);
    }
L_0007aa9c:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_0007aaa0:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0007aaa4:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_0007aaa8:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007aab0u, cpu->r[2], 0, 0);
    }
L_0007aaac:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_0007aab0:;
    {
        goto L_000797cc;
    }
L_0007aab4:;
    {
        wr8(cpu->r[13] + + 0x5cu, cpu->r[9]);
    }
L_0007aab8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_0007aabc:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 8u, &shc); cpu->r[9] = v;
    }
L_0007aac0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0007aac4:;
    {
        wr8(cpu->r[13] + + 0x5du, cpu->r[9]);
    }
L_0007aac8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_0007aacc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0007aad0:;
    {
        cpu->r[14] = 0x0007aad4u; fn_00074510(cpu);
    }
L_0007aad4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0007aad8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007aadc:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[0]);
    }
L_0007aae0:;
    {
        goto L_0007993c;
    }
L_0007aae4:;
    {
        wr8(cpu->r[13] + + 0x5cu, cpu->r[9]);
    }
L_0007aae8:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 24u, &shc); cpu->r[3] = v;
    }
L_0007aaec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_0007aaf0:;
    {
        wr8(cpu->r[13] + + 0x5fu, cpu->r[3]);
    }
L_0007aaf4:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0007aaf8:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 8u, &shc); cpu->r[3] = v;
    }
L_0007aafc:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 16u, &shc); cpu->r[9] = v;
    }
L_0007ab00:;
    {
        wr8(cpu->r[13] + + 0x5du, cpu->r[3]);
    }
L_0007ab04:;
    {
        wr8(cpu->r[13] + + 0x5eu, cpu->r[9]);
    }
L_0007ab08:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_0007ab0c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0007ab10:;
    {
        cpu->r[14] = 0x0007ab14u; fn_00074510(cpu);
    }
L_0007ab14:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007ab18:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[0]);
    }
L_0007ab1c:;
    {
        goto L_000798e8;
    }
L_0007ab20:;
    {
        cpu->r[12] = cpu->r[7];
    }
L_0007ab24:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x54u);
    }
L_0007ab28:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007ab2c:;
    {
        goto L_00079b68;
    }
L_0007ab30:;
    {
        cpu->r[12] = cpu->r[7];
    }
L_0007ab34:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007ab38:;
    {
        cpu->r[3] = 0x0000001au;
    }
L_0007ab3c:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_0007ab40:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_0007ab44:;
    {
        goto L_00079b68;
    }
L_0007ab48:;
    {
        uint32_t v = cpu->r[5] & 0x00000007u; cpu->r[2] = v;
    }
L_0007ab4c:;
    {
        cpu->r[3] = 0x00000018u;
    }
L_0007ab50:;
    {
        uint32_t v = shifter(cpu->r[9], 3, (cpu->r[2] & 0xffu), &shc); cpu->r[9] = v;
    }
L_0007ab54:;
    {
        uint32_t v = cpu->r[5] & ~ 0x00000007u; cpu->r[5] = v;
    }
L_0007ab58:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_0007ab5c:;
    {
        goto L_000797cc;
    }
L_0007ab60:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0007ab64:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0007ab68:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0007ab6c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0007ab70:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0007ab74:;
    {
        cpu->r[14] = 0x0007ab78u; fn_00074510(cpu);
    }
L_0007ab78:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0007ab7c:;
    {
        cpu->r[3] = 0x0000001fu;
    }
L_0007ab80:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_0007ab84:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_0007ab88:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[0]);
    }
L_0007ab8c:;
    {
        wr8(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_0007ab90:;
    {
        cpu->r[3] = (~0x00000074u);
    }
L_0007ab94:;
    {
        wr8(cpu->r[13] + + 0x5du, cpu->r[3]);
    }
L_0007ab98:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_0007ab9c:;
    {
        cpu->r[14] = 0x0007aba0u; fn_00074510(cpu);
    }
L_0007aba0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0007aba4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0007aba8:;
    {
        wr32(cpu->r[6], cpu->r[2]);
    }
L_0007abac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007abb0:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[0]);
    }
L_0007abb4:;
    {
        goto L_000797cc;
    }
L_0007abb8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_0007abbc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0007abc0:;
    {
        if (cond_test(cpu, 4)) {
        goto L_0007abe0;
        }
    }
L_0007abc4:;
    {
        goto L_0007ae30;
    }
L_0007abc8:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[1] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_0007abcc:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0007abd0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[1], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_0007abd4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0007abd8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0007abdc:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0007ae30;
        }
    }
L_0007abe0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007abe4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007abc8;
        }
    }
L_0007abe8:;
    {
        goto L_0007a1fc;
    }
L_0007abec:;
    {
        wr8(cpu->r[13] + + 0x5cu, cpu->r[9]);
    }
L_0007abf0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_0007abf4:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 8u, &shc); cpu->r[9] = v;
    }
L_0007abf8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0007abfc:;
    {
        wr8(cpu->r[13] + + 0x5du, cpu->r[9]);
    }
L_0007ac00:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_0007ac04:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0007ac08:;
    {
        cpu->r[14] = 0x0007ac0cu; fn_00074510(cpu);
    }
L_0007ac0c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007ac10:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[0]);
    }
L_0007ac14:;
    {
        goto L_000798a0;
    }
L_0007ac18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_0007ac1c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0007ac20:;
    {
        if (cond_test(cpu, 4)) {
        goto L_0007ac40;
        }
    }
L_0007ac24:;
    {
        goto L_0007ad6c;
    }
L_0007ac28:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000001u;
        cpu->r[1] = rd8(cpu->r[11]);
        cpu->r[11] = wb_tmp;
    }
L_0007ac2c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0007ac30:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[1], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_0007ac34:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0007ac38:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0007ac3c:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0007ad6c;
        }
    }
L_0007ac40:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007ac44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007ac28;
        }
    }
L_0007ac48:;
    {
        goto L_0007a1fc;
    }
L_0007ac4c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0007ac50:;
    {
        cpu->r[12] = cpu->r[10];
    }
L_0007ac54:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001bu, 1, 1);
    }
L_0007ac58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000797cc;
        }
    }
L_0007ac5c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0007ac60:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0007ac64:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0007ac68:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0007ac6c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_0007ac70:;
    {
        wr32(cpu->r[6] + + 0x6cu, cpu->r[3]);
    }
L_0007ac74:;
    {
        cpu->r[3] = 0x00000009u;
    }
L_0007ac78:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[12]);
    }
L_0007ac7c:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[3]);
    }
L_0007ac80:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0007ac84:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0007ac88:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0007ac8c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0007ac90:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x60u);
    }
L_0007ac94:;
    {
        cpu->r[14] = 0x0007ac98u; fn_0007b038(cpu);
    }
L_0007ac98:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007ac9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007af80;
        }
    }
L_0007aca0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x60u);
    }
L_0007aca4:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_0007aca8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x6cu);
    }
L_0007acac:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_0007acb0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0007acb4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000038u, 0, 0);
    }
L_0007acb8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_0007acbc:;
    {
        wr32(cpu->r[6] + + 0x58u, cpu->r[3]);
    }
L_0007acc0:;
    {
        wr32(cpu->r[6] + + 0x50u, cpu->r[2]);
    }
L_0007acc4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0007acc8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0007accc:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0] + cpu->r[6]; cpu->r[1] = v;
    }
L_0007acd0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x64u);
    }
L_0007acd4:;
    {
        cpu->r[14] = 0x0007acd8u; fn_0007b038(cpu);
    }
L_0007acd8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007acdc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000012u;
        }
    }
L_0007ace0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6], cpu->r[3]);
        }
    }
L_0007ace4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007a50c;
        }
    }
L_0007ace8:;
    {
        cpu->r[2] = rd32(0x0007acf0u + - 0x5b8u);
    }
L_0007acec:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_0007acf0:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0007acf4:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_0007acf8:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007ad00u, cpu->r[2], 0, 0);
    }
L_0007acfc:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_0007ad00:;
    {
        goto L_000797cc;
    }
L_0007ad04:;
    {
        cpu->r[3] = 0x0000fff9u;
    }
L_0007ad08:;
    {
        uint32_t v = shifter(cpu->r[9], 3, (cpu->r[2] & 0xffu), &shc); cpu->r[9] = v;
    }
L_0007ad0c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_0007ad10:;
    {
        uint32_t v = cpu->r[9] & 0x0000007fu; cpu->r[1] = v;
    }
L_0007ad14:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_0007ad18:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 7u, &shc); cpu->r[9] = v;
    }
L_0007ad1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x0000000bu, 0, 0);
    }
L_0007ad20:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_0007ad24:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0007ad28:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0007ad2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_0007ad30:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[0]);
    }
L_0007ad34:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0007ad38:;
    {
        if (cond_test(cpu, 4)) {
        goto L_0007af60;
        }
    }
L_0007ad3c:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_0007ad40:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0007ad44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_0007ad48:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007ad4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0007ad50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0007ad54:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0007ad58:;
    {
        wr16(cpu->r[0] + + 0x70u, cpu->r[1]);
    }
L_0007ad5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007ad4c;
        }
    }
L_0007ad60:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_0007ad64:;
    {
        wr32(cpu->r[6] + + 0x68u, cpu->r[12]);
    }
L_0007ad68:;
    {
        goto L_0007a18c;
    }
L_0007ad6c:;
    {
        cpu->r[3] = 0x0000fffdu;
    }
L_0007ad70:;
    {
        uint32_t v = shifter(cpu->r[9], 3, (cpu->r[2] & 0xffu), &shc); cpu->r[9] = v;
    }
L_0007ad74:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_0007ad78:;
    {
        uint32_t v = cpu->r[9] & 0x00000007u; cpu->r[1] = v;
    }
L_0007ad7c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_0007ad80:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 3u, &shc); cpu->r[9] = v;
    }
L_0007ad84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_0007ad88:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_0007ad8c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0007ad90:;
    {
        goto L_0007ad28;
    }
L_0007ad94:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007ad98:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0007ad9c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_0007ada0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[14], cpu->r[1], 1, 0);
    }
L_0007ada4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0007ada8:;
    {
        cpu->r[14] = 0x0007adacu; fn_0007406c(cpu);
    }
L_0007adac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007adb0:;
    {
        goto L_0007a7d8;
    }
L_0007adb4:;
    {
        cpu->r[2] = rd32(0x0007adbcu + - 0x680u);
    }
L_0007adb8:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_0007adbc:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0007adc0:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_0007adc4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007adccu, cpu->r[2], 0, 0);
    }
L_0007adc8:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_0007adcc:;
    {
        goto L_000797cc;
    }
L_0007add0:;
    {
        cpu->r[12] = cpu->r[7];
    }
L_0007add4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x50u);
    }
L_0007add8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007addc:;
    {
        goto L_00079b68;
    }
L_0007ade0:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_0007ade4:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_0007ade8:;
    {
        goto L_000797cc;
    }
L_0007adec:;
    {
        cpu->r[3] = 0x0000000bu;
    }
L_0007adf0:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_0007adf4:;
    {
        goto L_000797cc;
    }
L_0007adf8:;
    {
        cpu->r[2] = rd32(0x0007ae00u + - 0x6c0u);
    }
L_0007adfc:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_0007ae00:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0007ae04:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_0007ae08:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007ae10u, cpu->r[2], 0, 0);
    }
L_0007ae0c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_0007ae10:;
    {
        goto L_000797cc;
    }
L_0007ae14:;
    {
        cpu->r[2] = rd32(0x0007ae1cu + - 0x6d8u);
    }
L_0007ae18:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_0007ae1c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0007ae20:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_0007ae24:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007ae2cu, cpu->r[2], 0, 0);
    }
L_0007ae28:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_0007ae2c:;
    {
        goto L_000797cc;
    }
L_0007ae30:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0007ae34:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
    }
L_0007ae38:;
    {
        uint32_t v = shifter(cpu->r[9], 3, (cpu->r[2] & 0xffu), &shc); cpu->r[9] = v;
    }
L_0007ae3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007ae8c;
        }
    }
L_0007ae40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_0007ae44:;
    {
        uint32_t v = cpu->r[9] & 0x00000003u; cpu->r[2] = v;
    }
L_0007ae48:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_0007ae4c:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 2u, &shc); cpu->r[9] = v;
    }
L_0007ae50:;
    {
        cpu->r[1] = rd16(cpu->r[3] + + 0x6eu);
    }
L_0007ae54:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 0);
    }
L_0007ae58:;
    {
        goto L_0007ad28;
    }
L_0007ae5c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0007ae60:;
    {
        cpu->r[12] = cpu->r[7];
    }
L_0007ae64:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_0007ae68:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007ae6c:;
    {
        goto L_0007ab38;
    }
L_0007ae70:;
    {
        cpu->r[2] = rd32(0x0007ae78u + - 0x730u);
    }
L_0007ae74:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_0007ae78:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0007ae7c:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_0007ae80:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007ae88u, cpu->r[2], 0, 0);
    }
L_0007ae84:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_0007ae88:;
    {
        goto L_000797cc;
    }
L_0007ae8c:;
    {
        cpu->r[2] = rd32(0x0007ae94u + - 0x748u);
    }
L_0007ae90:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_0007ae94:;
    {
        cpu->r[12] = cpu->r[10];
    }
L_0007ae98:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0007ae9c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007aea4u, cpu->r[2], 0, 0);
    }
L_0007aea0:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_0007aea4:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_0007aea8:;
    {
        goto L_000797cc;
    }
L_0007aeac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007aeb0:;
    {
        cpu->r[10] = 0x00000002u;
    }
L_0007aeb4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[8]);
    }
L_0007aeb8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[7]);
    }
L_0007aebc:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[2]);
    }
L_0007aec0:;
    {
        wr32(cpu->r[6] + + 0x3cu, cpu->r[5]);
    }
L_0007aec4:;
    {
        wr32(cpu->r[4], cpu->r[11]);
    }
L_0007aec8:;
    {
        wr32(cpu->r[6] + + 0x38u, cpu->r[9]);
    }
L_0007aecc:;
    {
        goto L_000796e4;
    }
L_0007aed0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007aed4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007aed8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[7]);
    }
L_0007aedc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[8]);
    }
L_0007aee0:;
    {
        wr32(cpu->r[4], cpu->r[11]);
    }
L_0007aee4:;
    {
        wr32(cpu->r[6] + + 0x38u, cpu->r[9]);
    }
L_0007aee8:;
    {
        wr32(cpu->r[6] + + 0x3cu, cpu->r[5]);
    }
L_0007aeec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007aef0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[2]);
    }
L_0007aef4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0007aef8:;
    {
        cpu->r[14] = 0x0007aefcu; fn_000788a0(cpu);
    }
L_0007aefc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0007af00:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x10u);
    }
L_0007af04:;
    {
        cpu->r[11] = rd32(cpu->r[4]);
    }
L_0007af08:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0007af0c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x4u);
    }
L_0007af10:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x38u);
    }
L_0007af14:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x3cu);
    }
L_0007af18:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0007af1c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007af20:;
    {
        goto L_000797cc;
    }
L_0007af24:;
    {
        cpu->r[2] = rd32(0x0007af2cu + - 0x7dcu);
    }
L_0007af28:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_0007af2c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0007af30:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_0007af34:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007af3cu, cpu->r[2], 0, 0);
    }
L_0007af38:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[7]);
    }
L_0007af3c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_0007af40:;
    {
        goto L_000797cc;
    }
L_0007af44:;
    {
        cpu->r[2] = rd32(0x0007af4cu + - 0x7f8u);
    }
L_0007af48:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_0007af4c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0007af50:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_0007af54:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007af5cu, cpu->r[2], 0, 0);
    }
L_0007af58:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_0007af5c:;
    {
        goto L_000797cc;
    }
L_0007af60:;
    {
        cpu->r[2] = rd32(0x0007af68u + - 0x810u);
    }
L_0007af64:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_0007af68:;
    {
        cpu->r[12] = cpu->r[10];
    }
L_0007af6c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0007af70:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007af78u, cpu->r[2], 0, 0);
    }
L_0007af74:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_0007af78:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_0007af7c:;
    {
        goto L_000797cc;
    }
L_0007af80:;
    {
        cpu->r[2] = rd32(0x0007af88u + - 0x82cu);
    }
L_0007af84:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_0007af88:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0007af8c:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_0007af90:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007af98u, cpu->r[2], 0, 0);
    }
L_0007af94:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_0007af98:;
    {
        goto L_000797cc;
    }
L_0007af9c:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 4u, &shc); cpu->r[9] = v;
    }
L_0007afa0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x24u);
    }
L_0007afa4:;
    {
        uint32_t v = cpu->r[9] & 0x0000000fu; cpu->r[3] = v;
    }
L_0007afa8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0007afac:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0007afb0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0007afb4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0007aff0;
        }
    }
L_0007afb8:;
    {
        cpu->r[2] = rd32(0x0007afc0u + - 0x860u);
    }
L_0007afbc:;
    {
        cpu->r[3] = 0x0000001bu;
    }
L_0007afc0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_0007afc4:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_0007afc8:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007afd0u, cpu->r[2], 0, 0);
    }
L_0007afcc:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_0007afd0:;
    {
        goto L_000797cc;
    }
L_0007afd4:;
    {
        cpu->r[2] = rd32(0x0007afdcu + - 0x878u);
    }
L_0007afd8:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_0007afdc:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0007afe0:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_0007afe4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007afecu, cpu->r[2], 0, 0);
    }
L_0007afe8:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_0007afec:;
    {
        goto L_000797cc;
    }
L_0007aff0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_0007aff4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0007aff8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0007affc:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0007b000:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[14] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007b004:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[3]);
    }
L_0007b008:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0007b00c:;
    {
        cpu->r[14] = 0x0007b010u; fn_0007406c(cpu);
    }
L_0007b010:;
    {
        { uint32_t v = cpu->r[9] & 0x00000200u; set_nz(cpu, v); }
    }
L_0007b014:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_0007b018:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000009u;
        }
    }
L_0007b01c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000000bu;
        }
    }
L_0007b020:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_0007b024:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_0007b028:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007b02c:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[0]);
    }
L_0007b030:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_0007b034:;
    {
        goto L_000797cc;
    }
}

/* inflate_table @ 0007b038 (arm) */
void fn_0007b038(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007b038:;
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
L_0007b03c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000080u, 1, 0);
    }
L_0007b040:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000060u, 0, 0);
    }
L_0007b044:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xa4u);
    }
L_0007b048:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_0007b04c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007b050:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_0007b054:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0007b058:;
    {
        wr16(cpu->r[11] + cpu->r[3], cpu->r[1]);
    }
L_0007b05c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0007b060:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_0007b064:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b054;
        }
    }
L_0007b068:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007b06c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007b0a0;
        }
    }
L_0007b070:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x24u);
    }
L_0007b074:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007b078:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[1] = v;
    }
L_0007b07c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_0007b080:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007b084:;
    {
        cpu->r[1] = rd16(cpu->r[5] + cpu->r[1]);
    }
L_0007b088:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0007b08c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0007b090:;
    {
        cpu->r[4] = rd16(cpu->r[1] + - 0x20u);
    }
L_0007b094:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0007b098:;
    {
        wr16(cpu->r[1] + - 0x20u, cpu->r[4]);
    }
L_0007b09c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b078;
        }
    }
L_0007b0a0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xa0u);
    }
L_0007b0a4:;
    {
        cpu->r[10] = rd32(cpu->r[5]);
    }
L_0007b0a8:;
    {
        cpu->r[5] = 0x0000000fu;
    }
L_0007b0ac:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[3] = v;
    }
L_0007b0b0:;
    {
        cpu->r[3] = rd16(cpu->r[11] + cpu->r[3]);
    }
L_0007b0b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007b0b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b114;
        }
    }
L_0007b0bc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_0007b0c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b0ac;
        }
    }
L_0007b0c4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x30u);
    }
L_0007b0c8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0007b0cc:;
    {
        cpu->r[12] = 0x00000040u;
    }
L_0007b0d0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0007b0d4:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0007b0d8:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0007b0dc:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0007b0e0:;
    {
        wr8(cpu->r[2] + + 0x1u, cpu->r[1]);
    }
L_0007b0e4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr8(cpu->r[3], cpu->r[12]);
        cpu->r[3] = wb_tmp;
    }
L_0007b0e8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0007b0ec:;
    {
        wr8(cpu->r[2] + + 0x4u, cpu->r[12]);
    }
L_0007b0f0:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[1]);
    }
L_0007b0f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xa0u);
    }
L_0007b0f8:;
    {
        wr16(cpu->r[2] + + 0x2u, cpu->r[9]);
    }
L_0007b0fc:;
    {
        wr32(cpu->r[6], cpu->r[4]);
    }
L_0007b100:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[9]);
    }
L_0007b104:;
    {
        wr32(cpu->r[12], cpu->r[1]);
    }
L_0007b108:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_0007b10c:;
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
L_0007b110:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0007b114:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0007b118:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0007b11c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007b0c4;
        }
    }
L_0007b120:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[1] = v;
    }
L_0007b124:;
    {
        cpu->r[1] = rd16(cpu->r[11] + cpu->r[1]);
    }
L_0007b128:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007b12c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b13c;
        }
    }
L_0007b130:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007b134:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_0007b138:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b120;
        }
    }
L_0007b13c:;
    {
        cpu->r[7] = cpu->r[11];
    }
L_0007b140:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[11], 0x0000001eu, 0, 0);
    }
L_0007b144:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0007b148:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_0007b14c:;
    {
        cpu->r[6] = rd16(cpu->r[1] + + 0x2u);
    }
L_0007b150:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_0007b154:;
    {
        cpu->r[4] = sub_flags(cpu, shifter(cpu->r[4], 2, 1u, &shc), cpu->r[6], 1, 1);
    }
L_0007b158:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0007b4b0;
        }
    }
L_0007b15c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 1);
    }
L_0007b160:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b14c;
        }
    }
L_0007b164:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0007b168:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b498;
        }
    }
L_0007b16c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0007b170:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_0007b174:;
    {
        wr16(cpu->r[13] + + 0x42u, cpu->r[1]);
    }
L_0007b178:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[11], 0x0000001cu, 0, 0);
    }
L_0007b17c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0007b180:;
    {
        uint32_t wb_tmp = cpu->r[7] + + 0x2u;
        cpu->r[6] = rd16(cpu->r[7] + + 0x2u);
        cpu->r[7] = wb_tmp;
    }
L_0007b184:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_0007b188:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_0007b18c:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_0007b190:;
    {
        wr16(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_0007b194:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_0007b198:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b180;
        }
    }
L_0007b19c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007b1a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007b1e0;
        }
    }
L_0007b1a4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_0007b1a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0007b1ac:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[4] = v;
    }
L_0007b1b0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_0007b1b4:;
    {
        cpu->r[4] = rd16(cpu->r[7] + cpu->r[4]);
    }
L_0007b1b8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0007b1bc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_0007b1c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = rd16(cpu->r[4] + - 0x40u);
        }
    }
L_0007b1c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
        }
    }
L_0007b1c8:;
    {
        if (cond_test(cpu, 2)) {
        wr16(cpu->r[4] + - 0x40u, cpu->r[8]);
        }
    }
L_0007b1cc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[6] = v;
        }
    }
L_0007b1d0:;
    {
        if (cond_test(cpu, 2)) {
        wr16(cpu->r[12] + cpu->r[6], cpu->r[1]);
        }
    }
L_0007b1d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0007b1d8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0007b1dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b1ac;
        }
    }
L_0007b1e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007b1e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007b4b8;
        }
    }
L_0007b1e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0007b1ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007b594;
        }
    }
L_0007b1f0:;
    {
        cpu->r[2] = rd32(0x0007b1f8u + + 0x3c8u);
    }
L_0007b1f4:;
    {
        cpu->r[4] = (~0x00000000u);
    }
L_0007b1f8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[4]);
    }
L_0007b1fc:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007b204u, cpu->r[2], 0, 0);
    }
L_0007b200:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], 0x000000c0u, 0, 0);
    }
L_0007b204:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000080u, 0, 0);
    }
L_0007b208:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[6]);
    }
L_0007b20c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_0007b210:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[10], 1, 1);
    }
L_0007b214:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[10] = cpu->r[5];
        }
    }
L_0007b218:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0007b21c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x30u);
    }
L_0007b220:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0007b224:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[10] = cpu->r[3];
        }
    }
L_0007b228:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0007b22c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0007b230:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0007b234:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[10] & 0xffu), &shc); cpu->r[9] = v;
    }
L_0007b238:;
    {
        cpu->r[1] = 0x000005afu;
    }
L_0007b23c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0007b240:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_0007b244:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 1);
    }
L_0007b248:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0007b24c:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t v = cpu->r[0] & 0x00000001u; cpu->r[0] = v;
        }
    }
L_0007b250:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007b254:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 0);
    }
L_0007b258:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_0007b25c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_0007b260:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[4]);
    }
L_0007b264:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[6]);
    }
L_0007b268:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b4cc;
        }
    }
L_0007b26c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_0007b270:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_0007b274:;
    {
        cpu->r[4] = cpu->r[10];
    }
L_0007b278:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[11]);
    }
L_0007b27c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0007b280:;
    {
        cpu->r[11] = cpu->r[5];
    }
L_0007b284:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_0007b288:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0007b28c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[9]);
    }
L_0007b290:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007b294:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0007b298:;
    {
        cpu->r[5] = rd16(cpu->r[1]);
    }
L_0007b29c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 0);
    }
L_0007b2a0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0007b2a4:;
    {
        cpu->r[7] = (uint32_t)((uint8_t)cpu->r[1]);
    }
L_0007b2a8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_0007b2ac:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007b2cc;
        }
    }
L_0007b2b0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = rd32(cpu->r[13] + + 0x3cu);
        }
    }
L_0007b2b4:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[3] = v;
        }
    }
L_0007b2b8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = rd32(cpu->r[13] + + 0x38u);
        }
    }
L_0007b2bc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = 0x00000060u;
        }
    }
L_0007b2c0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_0007b2c4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = rd16(cpu->r[6] + cpu->r[3]);
        }
    }
L_0007b2c8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = rd8(cpu->r[9] + cpu->r[3]);
        }
    }
L_0007b2cc:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0007b2d0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0007b2d4:;
    {
        uint32_t v = shifter(cpu->r[12], 2, (cpu->r[4] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0007b2d8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0007b2dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 3, (cpu->r[10] & 0xffu), &shc), 0, 0);
    }
L_0007b2e0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0007b2e4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_0007b2e8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_0007b2ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007b2f0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[9] = v;
    }
L_0007b2f4:;
    {
        cpu->r[9] = sub_flags(cpu, 0x00000000u, cpu->r[9], 1, 0);
    }
L_0007b2f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007b2fc:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_0007b300:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_0007b304:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[5]);
    }
L_0007b308:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_0007b30c:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[7]);
    }
L_0007b310:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007b314:;
    {
        wr8(cpu->r[3], cpu->r[6]);
    }
L_0007b318:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b300;
        }
    }
L_0007b31c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0007b320:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0007b324:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0007b328:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007b32c:;
    {
        { uint32_t v = cpu->r[3] & cpu->r[12]; set_nz(cpu, v); }
    }
L_0007b330:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007b340;
        }
    }
L_0007b334:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 1u, &shc); cpu->r[3] = v;
    }
L_0007b338:;
    {
        { uint32_t v = cpu->r[3] & cpu->r[0]; set_nz(cpu, v); }
    }
L_0007b33c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b334;
        }
    }
L_0007b340:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007b344:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_0007b348:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_0007b34c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_0007b350:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] & cpu->r[0]; cpu->r[0] = v;
        }
    }
L_0007b354:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[1] = v;
    }
L_0007b358:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
        }
    }
L_0007b35c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_0007b360:;
    {
        cpu->r[3] = rd16(cpu->r[3] + - 0x20u);
    }
L_0007b364:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0007b368:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_0007b36c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007b370:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b390;
        }
    }
L_0007b374:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[11], 1, 1);
    }
L_0007b378:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007b4d4;
        }
    }
L_0007b37c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007b380:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_0007b384:;
    {
        cpu->r[2] = rd16(cpu->r[6] + + 0x2u);
    }
L_0007b388:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0007b38c:;
    {
        cpu->r[8] = rd16(cpu->r[9] + cpu->r[2]);
    }
L_0007b390:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0007b394:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_0007b398:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_0007b39c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_0007b3a0:;
    {
        wr16(cpu->r[1] + - 0x20u, cpu->r[3]);
    }
L_0007b3a4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
        }
    }
L_0007b3a8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0007b484;
        }
    }
L_0007b3ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_0007b3b0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007b3b4:;
    {
        uint32_t v = cpu->r[0] & cpu->r[3]; cpu->r[1] = v;
    }
L_0007b3b8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_0007b3bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007b484;
        }
    }
L_0007b3c0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0007b3c4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[2];
        }
    }
L_0007b3c8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 0);
    }
L_0007b3cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_0007b3d0:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[12], 1, 1);
    }
L_0007b3d4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0007b424;
        }
    }
L_0007b3d8:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
    }
L_0007b3dc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_0007b3e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_0007b3e4:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_0007b3e8:;
    {
        cpu->r[3] = rd16(cpu->r[3] + - 0x20u);
    }
L_0007b3ec:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[9], 2, (cpu->r[4] & 0xffu), &shc), cpu->r[3], 1, 0);
    }
L_0007b3f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007b3f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007b424;
        }
    }
L_0007b3f8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_0007b3fc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_0007b400:;
    {
        goto L_0007b414;
    }
L_0007b404:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x2u;
        cpu->r[2] = rd16(cpu->r[12] + + 0x2u);
        cpu->r[12] = wb_tmp;
    }
L_0007b408:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 1u, &shc), cpu->r[2], 1, 0);
    }
L_0007b40c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007b410:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007b424;
        }
    }
L_0007b414:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0007b418:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_0007b41c:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_0007b420:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0007b404;
        }
    }
L_0007b424:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0007b428:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_0007b42c:;
    {
        cpu->r[9] = 0x000005afu;
    }
L_0007b430:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, (cpu->r[4] & 0xffu), &shc), 0, 0);
    }
L_0007b434:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0007b438:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0007b43c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0007b440:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[9], 1, 1);
    }
L_0007b444:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0007b448:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
        }
    }
L_0007b44c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007b450:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b4cc;
        }
    }
L_0007b454:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007b458:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007b45c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007b460:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0007b464:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0007b468:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0007b46c:;
    {
        wr8(cpu->r[5] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[4]);
    }
L_0007b470:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[5], 1, 0);
    }
L_0007b474:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x14u);
    }
L_0007b478:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_0007b47c:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_0007b480:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[6]);
    }
L_0007b484:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007b488:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0007b48c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_0007b490:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0007b494:;
    {
        goto L_0007b290;
    }
L_0007b498:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_0007b49c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0007b4a0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_0007b4a4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] | 0x00000001u; cpu->r[1] = v;
        }
    }
L_0007b4a8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007b4ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007b16c;
        }
    }
L_0007b4b0:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_0007b4b4:;
    {
        goto L_0007b108;
    }
L_0007b4b8:;
    {
        cpu->r[9] = 0x00000013u;
    }
L_0007b4bc:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_0007b4c0:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
    }
L_0007b4c4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[9]);
    }
L_0007b4c8:;
    {
        goto L_0007b210;
    }
L_0007b4cc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0007b4d0:;
    {
        goto L_0007b108;
    }
L_0007b4d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007b4d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007b558;
        }
    }
L_0007b4dc:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x14u);
    }
L_0007b4e0:;
    {
        cpu->r[5] = 0x00000040u;
    }
L_0007b4e4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007b4e8:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_0007b4ec:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007b4f0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 0);
    }
L_0007b4f4:;
    {
        cpu->r[6] = (uint32_t)((uint8_t)cpu->r[9]);
    }
L_0007b4f8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0007b4fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007b520;
        }
    }
L_0007b500:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_0007b504:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007b508:;
    {
        uint32_t v = cpu->r[0] & cpu->r[12]; cpu->r[3] = v;
    }
L_0007b50c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_0007b510:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = cpu->r[6];
        }
    }
L_0007b514:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[9];
        }
    }
L_0007b518:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_0007b51c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[8];
        }
    }
L_0007b520:;
    {
        uint32_t v = shifter(cpu->r[0], 3, (cpu->r[10] & 0xffu), &shc); cpu->r[9] = v;
    }
L_0007b524:;
    {
        uint32_t v = shifter(cpu->r[4], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007b528:;
    {
        { uint32_t v = cpu->r[3] & cpu->r[0]; set_nz(cpu, v); }
    }
L_0007b52c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_0007b530:;
    {
        wr8(cpu->r[1] + shifter(cpu->r[9], 2, 2u, &shc), cpu->r[5]);
    }
L_0007b534:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0007b538:;
    {
        wr8(cpu->r[12] + + 0x1u, cpu->r[7]);
    }
L_0007b53c:;
    {
        wr16(cpu->r[12] + + 0x2u, cpu->r[9]);
    }
L_0007b540:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007b550;
        }
    }
L_0007b544:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 1u, &shc); cpu->r[3] = v;
    }
L_0007b548:;
    {
        { uint32_t v = cpu->r[3] & cpu->r[0]; set_nz(cpu, v); }
    }
L_0007b54c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b544;
        }
    }
L_0007b550:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007b554:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b580;
        }
    }
L_0007b558:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0007b55c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0007b560:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xa0u);
    }
L_0007b564:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0007b568:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x30u);
    }
L_0007b56c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007b570:;
    {
        wr32(cpu->r[1], cpu->r[12]);
    }
L_0007b574:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_0007b578:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0007b57c:;
    {
        goto L_0007b108;
    }
L_0007b580:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0007b584:;
    {
        uint32_t v = cpu->r[12] & cpu->r[0]; cpu->r[0] = v;
    }
L_0007b588:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 1);
    }
L_0007b58c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b4f8;
        }
    }
L_0007b590:;
    {
        goto L_0007b558;
    }
L_0007b594:;
    {
        cpu->r[1] = rd32(0x0007b59cu + + 0x28u);
    }
L_0007b598:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0007b59c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0007b5a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0007b5a8u, cpu->r[1], 0, 0);
    }
L_0007b5a4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], 0x000001c0u, 1, 0);
    }
L_0007b5a8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000200u, 1, 0);
    }
L_0007b5ac:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 0);
    }
L_0007b5b0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 0);
    }
L_0007b5b4:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_0007b5b8:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_0007b5bc:;
    {
        goto L_0007b210;
    }
}

/* _tr_init @ 0007b5c8 (arm) */
void fn_0007b5c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007b5c8:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_0007b5cc:;
    {
        cpu->r[6] = 0x000016b8u;
    }
L_0007b5d0:;
    {
        cpu->r[3] = rd32(0x0007b5d8u + + 0xe4u);
    }
L_0007b5d4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0007b5d8:;
    {
        wr16(cpu->r[0] + cpu->r[6], cpu->r[2]);
    }
L_0007b5dc:;
    {
        cpu->r[6] = 0x000016bcu;
    }
L_0007b5e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0007b5e8u, cpu->r[3], 0, 0);
    }
L_0007b5e4:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0007b5e8:;
    {
        wr32(cpu->r[0] + cpu->r[6], cpu->r[2]);
    }
L_0007b5ec:;
    {
        cpu->r[12] = 0x00000478u;
    }
L_0007b5f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000028u, 0, 0);
    }
L_0007b5f4:;
    {
        wr32(cpu->r[0] + + 0xb38u, cpu->r[2]);
    }
L_0007b5f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000094u, 0, 0);
    }
L_0007b5fc:;
    {
        wr32(cpu->r[0] + + 0xb18u, cpu->r[2]);
    }
L_0007b600:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000014u, 0, 0);
    }
L_0007b604:;
    {
        wr32(cpu->r[0] + + 0xb2cu, cpu->r[2]);
    }
L_0007b608:;
    {
        cpu->r[2] = 0x000016b4u;
    }
L_0007b60c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000980u, 0, 0);
    }
L_0007b610:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000a70u, 0, 0);
    }
L_0007b614:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0007b618:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_0007b61c:;
    {
        wr32(cpu->r[0] + + 0xb24u, cpu->r[5]);
    }
L_0007b620:;
    {
        wr32(cpu->r[0] + + 0xb30u, cpu->r[4]);
    }
L_0007b624:;
    {
        cpu->r[4] = 0x00000008u;
    }
L_0007b628:;
    {
        wr32(cpu->r[0] + + 0xb20u, cpu->r[3]);
    }
L_0007b62c:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[4]);
    }
L_0007b630:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0007b634:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0007b638:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_0007b63c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0007b640:;
    {
        wr16(cpu->r[3] + + 0x94u, cpu->r[2]);
    }
L_0007b644:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b630;
        }
    }
L_0007b648:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007b64c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0007b650:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0007b654:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000980u, 0, 0);
    }
L_0007b658:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000078u, 1, 1);
    }
L_0007b65c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0007b660:;
    {
        wr16(cpu->r[2] + + 0x8u, cpu->r[1]);
    }
L_0007b664:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b64c;
        }
    }
L_0007b668:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007b66c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0007b670:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0007b674:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000a70u, 0, 0);
    }
L_0007b678:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000004cu, 1, 1);
    }
L_0007b67c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0007b680:;
    {
        wr16(cpu->r[1] + + 0xcu, cpu->r[2]);
    }
L_0007b684:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b66c;
        }
    }
L_0007b688:;
    {
        cpu->r[3] = 0x00000494u;
    }
L_0007b68c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0007b690:;
    {
        wr16(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_0007b694:;
    {
        cpu->r[3] = 0x000016acu;
    }
L_0007b698:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0007b69c:;
    {
        cpu->r[3] = 0x000016a0u;
    }
L_0007b6a0:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0007b6a4:;
    {
        cpu->r[3] = 0x000016a8u;
    }
L_0007b6a8:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0007b6ac:;
    {
        cpu->r[3] = 0x000016b0u;
    }
L_0007b6b0:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0007b6b4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_0007b6b8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* sub_0007b6c0 @ 0007b6c0 (arm) */
void fn_0007b6c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007b6c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x000002d4u, 0, 0);
    }
L_0007b6c4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0007b6c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0007b6cc:;
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
L_0007b6d0:;
    {
        cpu->r[10] = 0x00001450u;
    }
L_0007b6d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007b6d8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_0007b6dc:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_0007b6e0:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_0007b6e4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0007b6e8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0007b6ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007b794;
        }
    }
L_0007b6f0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_0007b6f4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_0007b6f8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00001440u, 0, 0);
    }
L_0007b6fc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000018u, 0, 0);
    }
L_0007b700:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_0007b704:;
    {
        goto L_0007b74c;
    }
L_0007b708:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0007b70c:;
    {
        cpu->r[12] = cpu->r[2];
    }
L_0007b710:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0xb5cu);
    }
L_0007b714:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0007b718:;
    {
        cpu->r[5] = rd16(cpu->r[1] + cpu->r[2]);
    }
L_0007b71c:;
    {
        cpu->r[2] = rd16(cpu->r[8]);
    }
L_0007b720:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_0007b724:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0007b794;
        }
    }
L_0007b728:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007b7ec;
        }
    }
L_0007b72c:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_0007b730:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0007b734:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007b738:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_0007b73c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[4]);
    }
L_0007b740:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007b824;
        }
    }
L_0007b744:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x000002d4u, 0, 0);
    }
L_0007b748:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0007b74c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_0007b750:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007b708;
        }
    }
L_0007b754:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0007b758:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0007b75c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_0007b760:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0xb5cu);
    }
L_0007b764:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0xb5cu);
    }
L_0007b768:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[5] = v;
    }
L_0007b76c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[7] = v;
    }
L_0007b770:;
    {
        cpu->r[5] = rd16(cpu->r[1] + cpu->r[5]);
    }
L_0007b774:;
    {
        cpu->r[7] = rd16(cpu->r[1] + cpu->r[7]);
    }
L_0007b778:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_0007b77c:;
    {
        if (cond_test(cpu, 4)) {
        goto L_0007b7e0;
        }
    }
L_0007b780:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007b7ac;
        }
    }
L_0007b784:;
    {
        cpu->r[12] = cpu->r[2];
    }
L_0007b788:;
    {
        cpu->r[2] = rd16(cpu->r[8]);
    }
L_0007b78c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_0007b790:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0007b728;
        }
    }
L_0007b794:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007b798:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007b79c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_0007b7a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0007b7a4:;
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
L_0007b7a8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0007b7ac:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_0007b7b0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_0007b7b4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00001440u, 0, 0);
    }
L_0007b7b8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00001440u, 0, 0);
    }
L_0007b7bc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000018u, 0, 0);
    }
L_0007b7c0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_0007b7c4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000018u, 0, 0);
    }
L_0007b7c8:;
    {
        cpu->r[11] = rd8(cpu->r[11]);
    }
L_0007b7cc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[11]);
    }
L_0007b7d0:;
    {
        cpu->r[11] = rd8(cpu->r[9]);
    }
L_0007b7d4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x14u);
    }
L_0007b7d8:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 1);
    }
L_0007b7dc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0007b784;
        }
    }
L_0007b7e0:;
    {
        cpu->r[5] = cpu->r[7];
    }
L_0007b7e4:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_0007b7e8:;
    {
        goto L_0007b71c;
    }
L_0007b7ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_0007b7f0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007b7f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00001440u, 0, 0);
    }
L_0007b7f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000018u, 0, 0);
    }
L_0007b7fc:;
    {
        cpu->r[5] = rd8(cpu->r[11]);
    }
L_0007b800:;
    {
        cpu->r[2] = rd8(cpu->r[2]);
    }
L_0007b804:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_0007b808:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0007b794;
        }
    }
L_0007b80c:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_0007b810:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0007b814:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007b818:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_0007b81c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[4]);
    }
L_0007b820:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007b744;
        }
    }
L_0007b824:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x000002d4u, 0, 0);
    }
L_0007b828:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0007b82c:;
    {
        goto L_0007b794;
    }
}

/* sub_0007b830 @ 0007b830 (arm) */
void fn_0007b830(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007b830:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_0007b834:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0007b838:;
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
L_0007b83c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_0007b840:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0xcu);
    }
L_0007b844:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0007b848:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0007b84c:;
    {
        cpu->r[14] = 0x00001450u;
    }
L_0007b850:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_0007b854:;
    {
        cpu->r[5] = rd32(cpu->r[1]);
    }
L_0007b858:;
    {
        cpu->r[1] = 0x00001454u;
    }
L_0007b85c:;
    {
        cpu->r[0] = 0x0000023du;
    }
L_0007b860:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[2]);
    }
L_0007b864:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_0007b868:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0007b86c:;
    {
        cpu->r[10] = rd32(cpu->r[3]);
    }
L_0007b870:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
        }
    }
L_0007b874:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007b8d4;
        }
    }
L_0007b878:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0007b87c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0007b880:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0007b884:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_0007b888:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_0007b88c:;
    {
        cpu->r[1] = rd16(cpu->r[5] + cpu->r[2]);
    }
L_0007b890:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_0007b894:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_0007b898:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001440u, 0, 0);
    }
L_0007b89c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007b8a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0007b8a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = cpu->r[3];
        }
    }
L_0007b8a8:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[0] + + 0x18u, cpu->r[7]);
        }
    }
L_0007b8ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[14]);
        }
    }
L_0007b8b0:;
    {
        if (cond_test(cpu, 1)) {
        wr16(cpu->r[12] + + 0x2u, cpu->r[1]);
        }
    }
L_0007b8b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_0007b8b8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[1]);
        }
    }
L_0007b8bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_0007b8c0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[1] + + 0xb5cu, cpu->r[3]);
        }
    }
L_0007b8c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007b8c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0007b8cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b88c;
        }
    }
L_0007b8d0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[8]);
    }
L_0007b8d4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0007b8d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007be38;
        }
    }
L_0007b8dc:;
    {
        cpu->r[0] = 0x00001450u;
    }
L_0007b8e0:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0007b8e4:;
    {
        cpu->r[14] = 0x000016a8u;
    }
L_0007b8e8:;
    {
        cpu->r[12] = 0x000016acu;
    }
L_0007b8ec:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007b8f0:;
    {
        goto L_0007b948;
    }
L_0007b8f4:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000001u, 1, 1);
    }
L_0007b8f8:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_0007b8fc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
        }
    }
L_0007b900:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0007b904:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_0007b908:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[11] = cpu->r[1];
        }
    }
L_0007b90c:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[3] = v;
        }
    }
L_0007b910:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00001440u, 0, 0);
    }
L_0007b914:;
    {
        wr32(cpu->r[8] + + 0xb5cu, cpu->r[1]);
    }
L_0007b918:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_0007b91c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000018u, 0, 0);
    }
L_0007b920:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0007b924:;
    {
        wr16(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_0007b928:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_0007b92c:;
    {
        wr8(cpu->r[2], cpu->r[9]);
    }
L_0007b930:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0007b934:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_0007b938:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[3]);
    }
L_0007b93c:;
    {
        cpu->r[3] = rd16(cpu->r[7] + + 0x2u);
    }
L_0007b940:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0007b944:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[3]);
    }
L_0007b948:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0007b94c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007b950:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0007b954:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0007b958:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0007b95c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007b8f4;
        }
    }
L_0007b960:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[11]);
    }
L_0007b964:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007b968:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007b96c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_0007b970:;
    {
        cpu->r[3] = 0x00001450u;
    }
L_0007b974:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0007b978:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 3, 31u, &shc), 0, 0);
    }
L_0007b97c:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 1u, &shc); cpu->r[7] = v;
    }
L_0007b980:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0007b984:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007b9a0;
        }
    }
L_0007b988:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0007b98c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007b990:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0007b994:;
    {
        cpu->r[14] = 0x0007b998u; fn_0007b6c0(cpu);
    }
L_0007b998:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_0007b99c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007b988;
        }
    }
L_0007b9a0:;
    {
        cpu->r[3] = 0x00001450u;
    }
L_0007b9a4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0007b9a8:;
    {
        cpu->r[8] = 0x00001454u;
    }
L_0007b9ac:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_0007b9b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0007b9b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_0007b9b8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_0007b9bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007b9c0:;
    {
        cpu->r[14] = 0x00001450u;
    }
L_0007b9c4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0007b9c8:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0xb60u);
    }
L_0007b9cc:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[3]);
    }
L_0007b9d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007b9d4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0xb5cu);
    }
L_0007b9d8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0007b9dc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0007b9e0:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 2u, &shc); cpu->r[9] = v;
    }
L_0007b9e4:;
    {
        wr32(cpu->r[4] + + 0xb60u, cpu->r[3]);
    }
L_0007b9e8:;
    {
        cpu->r[14] = 0x0007b9ecu; fn_0007b6c0(cpu);
    }
L_0007b9ec:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_0007b9f0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xb60u);
    }
L_0007b9f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[11], 0, 0);
    }
L_0007b9f8:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 0);
    }
L_0007b9fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001440u, 0, 0);
    }
L_0007ba00:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 0);
    }
L_0007ba04:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[0]);
    }
L_0007ba08:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[10] = v;
    }
L_0007ba0c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], shifter(cpu->r[14], 2, 2u, &shc), 0, 0);
    }
L_0007ba10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0007ba14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_0007ba18:;
    {
        wr32(cpu->r[14] + + 0xb5cu, cpu->r[11]);
    }
L_0007ba1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00001440u, 0, 0);
    }
L_0007ba20:;
    {
        wr32(cpu->r[12] + + 0xb5cu, cpu->r[1]);
    }
L_0007ba24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000018u, 0, 0);
    }
L_0007ba28:;
    {
        cpu->r[14] = rd16(cpu->r[5] + cpu->r[10]);
    }
L_0007ba2c:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[1] = v;
    }
L_0007ba30:;
    {
        cpu->r[0] = rd16(cpu->r[5] + cpu->r[9]);
    }
L_0007ba34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_0007ba38:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007ba3c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], cpu->r[9], 0, 0);
    }
L_0007ba40:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], cpu->r[0], 0, 0);
    }
L_0007ba44:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007ba48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[11], cpu->r[7], 0, 0);
    }
L_0007ba4c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
    }
L_0007ba50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00001440u, 0, 0);
    }
L_0007ba54:;
    {
        wr16(cpu->r[14] + cpu->r[1], cpu->r[0]);
    }
L_0007ba58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0007ba5c:;
    {
        cpu->r[14] = rd8(cpu->r[2]);
    }
L_0007ba60:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0007ba64:;
    {
        cpu->r[2] = rd8(cpu->r[3]);
    }
L_0007ba68:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_0007ba6c:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 1);
    }
L_0007ba70:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[14] = cpu->r[2];
        }
    }
L_0007ba74:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0007ba78:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_0007ba7c:;
    {
        wr8(cpu->r[12] + + 0x18u, cpu->r[14]);
    }
L_0007ba80:;
    {
        wr16(cpu->r[10] + + 0x2u, cpu->r[3]);
    }
L_0007ba84:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[2], 0, 0);
    }
L_0007ba88:;
    {
        wr16(cpu->r[9] + + 0x2u, cpu->r[3]);
    }
L_0007ba8c:;
    {
        wr32(cpu->r[4] + + 0xb60u, cpu->r[6]);
    }
L_0007ba90:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_0007ba94:;
    {
        cpu->r[14] = 0x0007ba98u; fn_0007b6c0(cpu);
    }
L_0007ba98:;
    {
        cpu->r[0] = 0x00001450u;
    }
L_0007ba9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0007baa0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0007baa4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007b9bc;
        }
    }
L_0007baa8:;
    {
        cpu->r[1] = 0x00001454u;
    }
L_0007baac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007bab0:;
    {
        cpu->r[11] = 0x00001454u;
    }
L_0007bab4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007bab8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0007babc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007bac0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_0007bac4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0007bac8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xb60u);
    }
L_0007bacc:;
    {
        wr32(cpu->r[4] + cpu->r[11], cpu->r[0]);
    }
L_0007bad0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0007bad4:;
    {
        cpu->r[11] = rd32(cpu->r[1]);
    }
L_0007bad8:;
    {
        cpu->r[6] = rd32(cpu->r[12]);
    }
L_0007badc:;
    {
        wr32(cpu->r[0] + + 0xb5cu, cpu->r[2]);
    }
L_0007bae0:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0x10u);
    }
L_0007bae4:;
    {
        cpu->r[10] = rd32(cpu->r[12] + + 0x4u);
    }
L_0007bae8:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_0007baec:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_0007baf0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_0007baf4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0007baf8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_0007bafc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_0007bb00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0007bb04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000b30u, 0, 0);
    }
L_0007bb08:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_0007bb0c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0007bb10:;
    {
        wr16(cpu->r[1] + + 0xcu, cpu->r[0]);
    }
L_0007bb14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007bafc;
        }
    }
L_0007bb18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0007bb1c:;
    {
        cpu->r[3] = 0x00001454u;
    }
L_0007bb20:;
    {
        wr16(cpu->r[2] + + 0x2u, cpu->r[0]);
    }
L_0007bb24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0007bb28:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007bb2c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_0007bb30:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000023cu, 1, 1);
    }
L_0007bb34:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0007bb38:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007bd88;
        }
    }
L_0007bb3c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007bb40:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007bb44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007bea8;
        }
    }
L_0007bb48:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0007bb4c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00001440u, 0, 0);
    }
L_0007bb50:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_0007bb54:;
    {
        cpu->r[9] = 0x000016a8u;
    }
L_0007bb58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x000002d4u, 0, 0);
    }
L_0007bb5c:;
    {
        cpu->r[11] = 0x000016acu;
    }
L_0007bb60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0007bb64:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0007bb68:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_0007bb6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007bb70:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_0007bb74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0007bb78:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_0007bb7c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[5] = v;
    }
L_0007bb80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_0007bb84:;
    {
        cpu->r[3] = rd16(cpu->r[12] + + 0x2u);
    }
L_0007bb88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007bb8c:;
    {
        cpu->r[3] = rd16(cpu->r[3] + + 0x2u);
    }
L_0007bb90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007bb94:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_0007bb98:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_0007bb9c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0007bba0:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
        }
    }
L_0007bba4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[8];
        }
    }
L_0007bba8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_0007bbac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000590u, 0, 0);
    }
L_0007bbb0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0007bbb4:;
    {
        wr16(cpu->r[12] + + 0x2u, cpu->r[3]);
    }
L_0007bbb8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007bc20;
        }
    }
L_0007bbbc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007bbc0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0007bbc4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_0007bbc8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0007bbcc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007bbd0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_0007bbd4:;
    {
        cpu->r[12] = rd16(cpu->r[0] + + 0x4u);
    }
L_0007bbd8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0007bbdc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007bbe0:;
    {
        wr16(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_0007bbe4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
        }
    }
L_0007bbe8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_0007bbec:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[12] + shifter(cpu->r[0], 2, 2u, &shc));
        }
    }
L_0007bbf0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007bbf4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_0007bbf8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[5], 0, 0);
    }
L_0007bbfc:;
    {
        cpu->r[12] = rd16(cpu->r[6] + cpu->r[5]);
    }
L_0007bc00:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_0007bc04:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3] + cpu->r[5]; cpu->r[3] = v;
    }
L_0007bc08:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[3]);
    }
L_0007bc0c:;
    {
        cpu->r[3] = rd16(cpu->r[0] + + 0x2u);
    }
L_0007bc10:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_0007bc14:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_0007bc18:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3] + cpu->r[0]; cpu->r[3] = v;
    }
L_0007bc1c:;
    {
        wr32(cpu->r[4] + cpu->r[11], cpu->r[3]);
    }
L_0007bc20:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0007bc24:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_0007bc28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007bb78;
        }
    }
L_0007bc2c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0007bc30:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0007bc34:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x24u);
    }
L_0007bc38:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0007bc3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000023cu, 0, 0);
    }
L_0007bc40:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007bc44:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0007bc48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007bd88;
        }
    }
L_0007bc4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], 0x00000590u, 0, 0);
    }
L_0007bc50:;
    {
        cpu->r[11] = cpu->r[6];
    }
L_0007bc54:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0007bc58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000bu, 0, 0);
    }
L_0007bc5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0007bc60:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007bc64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0007bc68:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0007bc6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0007bc70:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0007bc74:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0007bc78:;
    {
        cpu->r[1] = rd16(cpu->r[9]);
    }
L_0007bc7c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007bc80:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[7];
        }
    }
L_0007bc84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007bca4;
        }
    }
L_0007bc88:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0007bc8c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0007bc90:;
    {
        cpu->r[1] = rd16(cpu->r[3] + - 0x4u);
    }
L_0007bc94:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0007bc98:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 0);
    }
L_0007bc9c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007bca0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007bc90;
        }
    }
L_0007bca4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000590u, 0, 0);
    }
L_0007bca8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000590u, 0, 0);
    }
L_0007bcac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_0007bcb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000du, 0, 0);
    }
L_0007bcb4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0007bcb8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 0);
    }
L_0007bcbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0007bcc0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0007bcc4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0007bcc8:;
    {
        wr16(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_0007bccc:;
    {
        cpu->r[2] = rd16(cpu->r[3] + + 0x4u);
    }
L_0007bcd0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_0007bcd4:;
    {
        wr16(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_0007bcd8:;
    {
        cpu->r[3] = rd16(cpu->r[12]);
    }
L_0007bcdc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0007bce0:;
    {
        wr16(cpu->r[12], cpu->r[3]);
    }
L_0007bce4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007bc78;
        }
    }
L_0007bce8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0007bcec:;
    {
        cpu->r[6] = cpu->r[11];
    }
L_0007bcf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007bd88;
        }
    }
L_0007bcf4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007bcf8:;
    {
        cpu->r[9] = 0x000016a8u;
    }
L_0007bcfc:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_0007bd00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_0007bd04:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[5]);
    }
L_0007bd08:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007bd0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[11], 0, 0);
    }
L_0007bd10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000b30u, 0, 0);
    }
L_0007bd14:;
    {
        cpu->r[1] = rd16(cpu->r[3] + + 0xcu);
    }
L_0007bd18:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007bd1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007bd78;
        }
    }
L_0007bd20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x000002d4u, 0, 0);
    }
L_0007bd24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0007bd28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007bd2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0007bd30:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x4u);
    }
L_0007bd34:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0007bd38:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_0007bd3c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_0007bd40:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0007bd44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_0007bd48:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007bd70;
        }
    }
L_0007bd4c:;
    {
        cpu->r[5] = rd16(cpu->r[12] + + 0x2u);
    }
L_0007bd50:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0007bd54:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_0007bd58:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 0);
    }
L_0007bd5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd16(cpu->r[6] + cpu->r[2]);
        }
    }
L_0007bd60:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[9]);
        }
    }
L_0007bd64:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[5] * cpu->r[7] + cpu->r[2]; cpu->r[7] = v;
        }
    }
L_0007bd68:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[7]);
        }
    }
L_0007bd6c:;
    {
        if (cond_test(cpu, 2)) {
        wr16(cpu->r[12] + + 0x2u, cpu->r[8]);
        }
    }
L_0007bd70:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007bd74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007bd30;
        }
    }
L_0007bd78:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_0007bd7c:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000002u, 1, 0);
    }
L_0007bd80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007bd08;
        }
    }
L_0007bd84:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007bd88:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000b30u, 0, 0);
    }
L_0007bd8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0007bd90:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_0007bd94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_0007bd98:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007bd9c:;
    {
        uint32_t wb_tmp = cpu->r[4] + 0x00000002u;
        cpu->r[1] = rd16(cpu->r[4]);
        cpu->r[4] = wb_tmp;
    }
L_0007bda0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0007bda4:;
    {
        cpu->r[3] = 0x0000fffeu;
    }
L_0007bda8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0000u << 16);
    }
L_0007bdac:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_0007bdb0:;
    {
        uint32_t v = cpu->r[1] & cpu->r[3]; cpu->r[3] = v;
    }
L_0007bdb4:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x2u;
        wr16(cpu->r[2] + + 0x2u, cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_0007bdb8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0007bdbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007bd9c;
        }
    }
L_0007bdc0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007bdc4:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0007bdc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007be30;
        }
    }
L_0007bdcc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0007bdd0:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0007bdd4:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_0007bdd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_0007bddc:;
    {
        cpu->r[3] = rd16(cpu->r[3] + + 0x2u);
    }
L_0007bde0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007bde4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007be20;
        }
    }
L_0007bde8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_0007bdec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0007bdf0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[11], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0007bdf4:;
    {
        cpu->r[2] = rd16(cpu->r[0] + - 0x20u);
    }
L_0007bdf8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0007bdfc:;
    {
        wr16(cpu->r[0] + - 0x20u, cpu->r[7]);
    }
L_0007be00:;
    {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[0] = v;
    }
L_0007be04:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0007be08:;
    {
        uint32_t v = cpu->r[0] | cpu->r[1]; cpu->r[1] = v;
    }
L_0007be0c:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 1u, &shc); cpu->r[2] = v;
    }
L_0007be10:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_0007be14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007be00;
        }
    }
L_0007be18:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 1u, &shc); cpu->r[1] = v;
    }
L_0007be1c:;
    {
        wr16(cpu->r[5] + cpu->r[12], cpu->r[1]);
    }
L_0007be20:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0007be24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_0007be28:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_0007be2c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007bdd8;
        }
    }
L_0007be30:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_0007be34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007be38u)) return;
    }
L_0007be38:;
    {
        cpu->r[0] = 0x00001450u;
    }
L_0007be3c:;
    {
        cpu->r[12] = 0x000016a8u;
    }
L_0007be40:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007be44:;
    {
        goto L_0007be88;
    }
L_0007be48:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0007be4c:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_0007be50:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_0007be54:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0007be58:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[14] = cpu->r[1];
        }
    }
L_0007be5c:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_0007be60:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[3] = v;
        }
    }
L_0007be64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[14], 0, 0);
    }
L_0007be68:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00001440u, 0, 0);
    }
L_0007be6c:;
    {
        wr32(cpu->r[7] + + 0xb5cu, cpu->r[14]);
    }
L_0007be70:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000018u, 0, 0);
    }
L_0007be74:;
    {
        wr16(cpu->r[5] + cpu->r[3], cpu->r[11]);
    }
L_0007be78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_0007be7c:;
    {
        wr8(cpu->r[2], cpu->r[10]);
    }
L_0007be80:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0007be84:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[3]);
    }
L_0007be88:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0007be8c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007be90:;
    {
        cpu->r[14] = cpu->r[3];
    }
L_0007be94:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0007be98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0007be9c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007be48;
        }
    }
L_0007bea0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_0007bea4:;
    {
        goto L_0007b964;
    }
L_0007bea8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x000002d4u, 0, 0);
    }
L_0007beac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007beb0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], 0x00001440u, 0, 0);
    }
L_0007beb4:;
    {
        cpu->r[9] = 0x000016a8u;
    }
L_0007beb8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0007bebc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000000cu, 0, 0);
    }
L_0007bec0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_0007bec4:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_0007bec8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0007becc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_0007bed0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_0007bed4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[5] = v;
    }
L_0007bed8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_0007bedc:;
    {
        cpu->r[3] = rd16(cpu->r[12] + + 0x2u);
    }
L_0007bee0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007bee4:;
    {
        cpu->r[3] = rd16(cpu->r[3] + + 0x2u);
    }
L_0007bee8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007beec:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_0007bef0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[8];
        }
    }
L_0007bef4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
        }
    }
L_0007bef8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_0007befc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000590u, 0, 0);
    }
L_0007bf00:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0007bf04:;
    {
        wr16(cpu->r[12] + + 0x2u, cpu->r[3]);
    }
L_0007bf08:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007bf54;
        }
    }
L_0007bf0c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007bf10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0007bf14:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_0007bf18:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0007bf1c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007bf20:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_0007bf24:;
    {
        cpu->r[12] = rd16(cpu->r[0] + + 0x4u);
    }
L_0007bf28:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0007bf2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007bf30:;
    {
        wr16(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_0007bf34:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_0007bf38:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_0007bf3c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[12] + shifter(cpu->r[0], 2, 2u, &shc));
        }
    }
L_0007bf40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_0007bf44:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_0007bf48:;
    {
        cpu->r[1] = rd16(cpu->r[6] + cpu->r[5]);
    }
L_0007bf4c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[0]; cpu->r[3] = v;
    }
L_0007bf50:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[3]);
    }
L_0007bf54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0007bf58:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_0007bf5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007bed0;
        }
    }
L_0007bf60:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0007bf64:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0007bf68:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_0007bf6c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 0);
    }
L_0007bf70:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007bf74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000023cu, 0, 0);
    }
L_0007bf78:;
    {
        goto L_0007bc40;
    }
}

/* sub_0007bf7c @ 0007bf7c (arm) */
void fn_0007bf7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007bf7c:;
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
L_0007bf80:;
    {
        cpu->r[5] = rd16(cpu->r[1] + + 0x2u);
    }
L_0007bf84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0007bf88:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_0007bf8c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0007bf90:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000007u;
        }
    }
L_0007bf94:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x0000008au;
        }
    }
L_0007bf98:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000004u;
        }
    }
L_0007bf9c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000003u;
        }
    }
L_0007bfa0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007bfa4:;
    {
        wr16(cpu->r[3] + + 0x6u, cpu->r[12]);
    }
L_0007bfa8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007c098;
        }
    }
L_0007bfac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_0007bfb0:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_0007bfb4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007bfb8:;
    {
        cpu->r[8] = (~0x00000000u);
    }
L_0007bfbc:;
    {
        cpu->r[9] = 0x00000ac4u;
    }
L_0007bfc0:;
    {
        cpu->r[11] = 0x00000ac0u;
    }
L_0007bfc4:;
    {
        cpu->r[10] = 0x00000abcu;
    }
L_0007bfc8:;
    {
        goto L_0007c00c;
    }
L_0007bfcc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x0000029cu, 0, 0);
    }
L_0007bfd0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_0007bfd4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_0007bfd8:;
    {
        cpu->r[7] = rd16(cpu->r[6] + + 0x4u);
    }
L_0007bfdc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0007bfe0:;
    {
        wr16(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_0007bfe4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0007bfe8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007c06c;
        }
    }
L_0007bfec:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_0007bff0:;
    {
        cpu->r[7] = 0x00000003u;
    }
L_0007bff4:;
    {
        cpu->r[6] = 0x0000008au;
    }
L_0007bff8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0007bffc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0007c000:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_0007c004:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007c098;
        }
    }
L_0007c008:;
    {
        cpu->r[5] = cpu->r[12];
    }
L_0007c00c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007c010:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_0007c014:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0007c018:;
    {
        cpu->r[12] = rd16(cpu->r[12] + + 0x2u);
    }
L_0007c01c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007c028;
        }
    }
L_0007c020:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_0007c024:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007bffc;
        }
    }
L_0007c028:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0007c02c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007bfcc;
        }
    }
L_0007c030:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0007c034:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007c0a0;
        }
    }
L_0007c038:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 1);
    }
L_0007c03c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007c058;
        }
    }
L_0007c040:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x0000029cu, 0, 0);
    }
L_0007c044:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0007c048:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007c04c:;
    {
        cpu->r[6] = rd16(cpu->r[3] + + 0x4u);
    }
L_0007c050:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0007c054:;
    {
        wr16(cpu->r[3] + + 0x4u, cpu->r[6]);
    }
L_0007c058:;
    {
        cpu->r[3] = rd16(cpu->r[0] + cpu->r[10]);
    }
L_0007c05c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0007c060:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007c064:;
    {
        wr16(cpu->r[0] + cpu->r[10], cpu->r[3]);
    }
L_0007c068:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007bfec;
        }
    }
L_0007c06c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_0007c070:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0007c074:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = cpu->r[5];
        }
    }
L_0007c078:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000004u;
        }
    }
L_0007c07c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000007u;
        }
    }
L_0007c080:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[12];
        }
    }
L_0007c084:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000003u;
        }
    }
L_0007c088:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000006u;
        }
    }
L_0007c08c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_0007c090:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007c094:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007c008;
        }
    }
L_0007c098:;
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
L_0007c09c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0007c0a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_0007c0a4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd16(cpu->r[0] + cpu->r[11]);
        }
    }
L_0007c0a8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd16(cpu->r[0] + cpu->r[9]);
        }
    }
L_0007c0ac:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0007c0b0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0007c0b4:;
    {
        if (cond_test(cpu, 14)) {
        wr16(cpu->r[0] + cpu->r[11], cpu->r[3]);
        }
    }
L_0007c0b8:;
    {
        if (cond_test(cpu, 13)) {
        wr16(cpu->r[0] + cpu->r[9], cpu->r[3]);
        }
    }
L_0007c0bc:;
    {
        goto L_0007bfe4;
    }
}

/* sub_0007c0c0 @ 0007c0c0 (arm) */
void fn_0007c0c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007c0c0:;
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
L_0007c0c4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_0007c0c8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_0007c0cc:;
    {
        cpu->r[3] = rd16(cpu->r[1] + + 0x2u);
    }
L_0007c0d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007c0d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000007u;
        }
    }
L_0007c0d8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x0000008au;
        }
    }
L_0007c0dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000004u;
        }
    }
L_0007c0e0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000003u;
        }
    }
L_0007c0e4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007c0e8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007c3c8;
        }
    }
L_0007c0ec:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_0007c0f0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0007c0f4:;
    {
        cpu->r[7] = (~0x00000000u);
    }
L_0007c0f8:;
    {
        cpu->r[4] = 0x000016bcu;
    }
L_0007c0fc:;
    {
        cpu->r[1] = 0x000016b8u;
    }
L_0007c100:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_0007c104:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0007c108:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
    }
L_0007c10c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0007c110:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_0007c114:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_0007c118:;
    {
        cpu->r[10] = rd16(cpu->r[8] + + 0x2u);
    }
L_0007c11c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007c128;
        }
    }
L_0007c120:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0007c124:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007c21c;
        }
    }
L_0007c128:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_0007c12c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007c238;
        }
    }
L_0007c130:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x0000029cu, 0, 0);
    }
L_0007c134:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_0007c138:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_0007c13c:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_0007c140:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_0007c144:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0007c148:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0007c14c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[2], 0x00000006u, 0, 0);
    }
L_0007c150:;
    {
        goto L_0007c1b4;
    }
L_0007c154:;
    {
        cpu->r[12] = rd16(cpu->r[11]);
    }
L_0007c158:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_0007c15c:;
    {
        cpu->r[6] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_0007c160:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007c164:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c168:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[12], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007c16c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0007c170:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_0007c174:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[3]);
    }
L_0007c178:;
    {
        wr8(cpu->r[10] + cpu->r[7], cpu->r[3]);
    }
L_0007c17c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0007c180:;
    {
        cpu->r[10] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_0007c184:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c188:;
    {
        uint32_t v = shifter(cpu->r[10], 3, 8u, &shc); cpu->r[10] = v;
    }
L_0007c18c:;
    {
        wr8(cpu->r[7] + cpu->r[6], cpu->r[10]);
    }
L_0007c190:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007c194:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0007c198:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], 0x00000010u, 1, 0);
    }
L_0007c19c:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000010u, cpu->r[6], 1, 0);
    }
L_0007c1a0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[6] = v;
    }
L_0007c1a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0007c1a8:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[6]);
    }
L_0007c1ac:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[2]);
    }
L_0007c1b0:;
    {
        if (cond_test(cpu, 4)) {
        goto L_0007c1e8;
        }
    }
L_0007c1b4:;
    {
        cpu->r[2] = rd16(cpu->r[8]);
    }
L_0007c1b8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007c1bc:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000010u, cpu->r[2], 1, 0);
    }
L_0007c1c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0007c1c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0007c1c8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007c154;
        }
    }
L_0007c1cc:;
    {
        cpu->r[6] = rd16(cpu->r[11]);
    }
L_0007c1d0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_0007c1d4:;
    {
        cpu->r[2] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_0007c1d8:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[12]);
    }
L_0007c1dc:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[6], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007c1e0:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[3]);
    }
L_0007c1e4:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0007c1b4;
        }
    }
L_0007c1e8:;
    {
        cpu->r[10] = rd32(cpu->r[13]);
    }
L_0007c1ec:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_0007c1f0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007c1f4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0007c1f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007c3a8;
        }
    }
L_0007c1fc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0007c200:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0007c204:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = cpu->r[3];
        }
    }
L_0007c208:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000004u;
        }
    }
L_0007c20c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000007u;
        }
    }
L_0007c210:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = cpu->r[10];
        }
    }
L_0007c214:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000003u;
        }
    }
L_0007c218:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000006u;
        }
    }
L_0007c21c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007c220:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0007c224:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[8], 1, 1);
    }
L_0007c228:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007c3c8;
        }
    }
L_0007c22c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0007c230:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0007c234:;
    {
        goto L_0007c108;
    }
L_0007c238:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007c23c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007c3d4;
        }
    }
L_0007c240:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0007c244:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007c604;
        }
    }
L_0007c248:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x0000029cu, 0, 0);
    }
L_0007c24c:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007c250:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_0007c254:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0007c258:;
    {
        cpu->r[12] = rd16(cpu->r[2] + + 0x6u);
    }
L_0007c25c:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000010u, cpu->r[12], 1, 0);
    }
L_0007c260:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_0007c264:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007c5e4;
        }
    }
L_0007c268:;
    {
        cpu->r[2] = rd16(cpu->r[2] + + 0x4u);
    }
L_0007c26c:;
    {
        cpu->r[6] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_0007c270:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007c274:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c278:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[2], 2, (cpu->r[7] & 0xffu), &shc); cpu->r[7] = v;
    }
L_0007c27c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0007c280:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_0007c284:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[7]);
    }
L_0007c288:;
    {
        wr8(cpu->r[11] + cpu->r[8], cpu->r[7]);
    }
L_0007c28c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0007c290:;
    {
        cpu->r[7] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_0007c294:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c298:;
    {
        uint32_t v = shifter(cpu->r[7], 3, 8u, &shc); cpu->r[7] = v;
    }
L_0007c29c:;
    {
        wr8(cpu->r[11] + cpu->r[6], cpu->r[7]);
    }
L_0007c2a0:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007c2a4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[8]);
    }
L_0007c2a8:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000010u, cpu->r[7], 1, 0);
    }
L_0007c2ac:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000010u, 1, 0);
    }
L_0007c2b0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[6] = v;
    }
L_0007c2b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], cpu->r[12], 0, 0);
    }
L_0007c2b8:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[12]);
    }
L_0007c2bc:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_0007c2c0:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[6]);
    }
L_0007c2c4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0007c2c8:;
    {
        cpu->r[5] = 0x00000abeu;
    }
L_0007c2cc:;
    {
        cpu->r[5] = rd16(cpu->r[0] + cpu->r[5]);
    }
L_0007c2d0:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000010u, cpu->r[5], 1, 0);
    }
L_0007c2d4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 1);
    }
L_0007c2d8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007c4dc;
        }
    }
L_0007c2dc:;
    {
        cpu->r[7] = 0x00000abcu;
    }
L_0007c2e0:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007c2e4:;
    {
        cpu->r[7] = rd16(cpu->r[0] + cpu->r[7]);
    }
L_0007c2e8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0007c2ec:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0007c2f0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_0007c2f4:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c2f8:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[7], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0007c2fc:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007c300:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[12]);
    }
L_0007c304:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[12]);
    }
L_0007c308:;
    {
        wr8(cpu->r[11] + cpu->r[6], cpu->r[12]);
    }
L_0007c30c:;
    {
        cpu->r[12] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_0007c310:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c314:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 8u, &shc); cpu->r[12] = v;
    }
L_0007c318:;
    {
        wr8(cpu->r[6] + cpu->r[8], cpu->r[12]);
    }
L_0007c31c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007c320:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007c324:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[6]);
    }
L_0007c328:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000010u, cpu->r[12], 1, 0);
    }
L_0007c32c:;
    {
        uint32_t v = shifter(cpu->r[7], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[7] = v;
    }
L_0007c330:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000010u, 1, 0);
    }
L_0007c334:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], cpu->r[5], 0, 0);
    }
L_0007c338:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[5]);
    }
L_0007c33c:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_0007c340:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[7]);
    }
L_0007c344:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000eu, 1, 1);
    }
L_0007c348:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007c4c0;
        }
    }
L_0007c34c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 0);
    }
L_0007c350:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007c354:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c358:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[2], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[5] = v;
    }
L_0007c35c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0007c360:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007c364:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_0007c368:;
    {
        cpu->r[5] = (uint32_t)((uint16_t)cpu->r[5]);
    }
L_0007c36c:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[5]);
    }
L_0007c370:;
    {
        wr8(cpu->r[11] + cpu->r[6], cpu->r[5]);
    }
L_0007c374:;
    {
        cpu->r[6] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_0007c378:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c37c:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 8u, &shc); cpu->r[6] = v;
    }
L_0007c380:;
    {
        wr8(cpu->r[5] + cpu->r[12], cpu->r[6]);
    }
L_0007c384:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007c388:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[8]);
    }
L_0007c38c:;
    {
        cpu->r[5] = sub_flags(cpu, 0x00000010u, cpu->r[12], 1, 0);
    }
L_0007c390:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000000eu, 1, 0);
    }
L_0007c394:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0007c398:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[12]);
    }
L_0007c39c:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[2]);
    }
L_0007c3a0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0007c3a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007c1fc;
        }
    }
L_0007c3a8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007c3ac:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0007c3b0:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_0007c3b4:;
    {
        cpu->r[6] = 0x00000003u;
    }
L_0007c3b8:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[8], 1, 1);
    }
L_0007c3bc:;
    {
        cpu->r[12] = 0x0000008au;
    }
L_0007c3c0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0007c3c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007c22c;
        }
    }
L_0007c3c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0007c3cc:;
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
L_0007c3d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0007c3d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 1);
    }
L_0007c3d8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007c500;
        }
    }
L_0007c3dc:;
    {
        cpu->r[5] = 0x00000ac2u;
    }
L_0007c3e0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007c3e4:;
    {
        cpu->r[5] = rd16(cpu->r[0] + cpu->r[5]);
    }
L_0007c3e8:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000010u, cpu->r[5], 1, 0);
    }
L_0007c3ec:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 1);
    }
L_0007c3f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007c610;
        }
    }
L_0007c3f4:;
    {
        cpu->r[6] = 0x00000ac0u;
    }
L_0007c3f8:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007c3fc:;
    {
        cpu->r[8] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_0007c400:;
    {
        cpu->r[6] = rd16(cpu->r[0] + cpu->r[6]);
    }
L_0007c404:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0007c408:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0007c40c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_0007c410:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c414:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[6], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0007c418:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007c41c:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[12]);
    }
L_0007c420:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[12]);
    }
L_0007c424:;
    {
        wr8(cpu->r[11] + cpu->r[8], cpu->r[12]);
    }
L_0007c428:;
    {
        cpu->r[12] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_0007c42c:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c430:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 8u, &shc); cpu->r[12] = v;
    }
L_0007c434:;
    {
        wr8(cpu->r[8] + cpu->r[7], cpu->r[12]);
    }
L_0007c438:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007c43c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007c440:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[7]);
    }
L_0007c444:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000010u, cpu->r[12], 1, 0);
    }
L_0007c448:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000010u, 1, 0);
    }
L_0007c44c:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[7] & 0xffu), &shc); cpu->r[6] = v;
    }
L_0007c450:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], cpu->r[5], 0, 0);
    }
L_0007c454:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[5]);
    }
L_0007c458:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000du, 1, 1);
    }
L_0007c45c:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_0007c460:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[6]);
    }
L_0007c464:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007c638;
        }
    }
L_0007c468:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 0);
    }
L_0007c46c:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007c470:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c474:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[2], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[5] = v;
    }
L_0007c478:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0007c47c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007c480:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_0007c484:;
    {
        cpu->r[5] = (uint32_t)((uint16_t)cpu->r[5]);
    }
L_0007c488:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[5]);
    }
L_0007c48c:;
    {
        wr8(cpu->r[11] + cpu->r[8], cpu->r[5]);
    }
L_0007c490:;
    {
        cpu->r[5] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_0007c494:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c498:;
    {
        uint32_t v = shifter(cpu->r[5], 3, 8u, &shc); cpu->r[5] = v;
    }
L_0007c49c:;
    {
        wr8(cpu->r[6] + cpu->r[12], cpu->r[5]);
    }
L_0007c4a0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007c4a4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[7]);
    }
L_0007c4a8:;
    {
        cpu->r[5] = sub_flags(cpu, 0x00000010u, cpu->r[12], 1, 0);
    }
L_0007c4ac:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000000du, 1, 0);
    }
L_0007c4b0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0007c4b4:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[12]);
    }
L_0007c4b8:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[2]);
    }
L_0007c4bc:;
    {
        goto L_0007c3a0;
    }
L_0007c4c0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 0);
    }
L_0007c4c4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007c4c8:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[2], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[5] = v;
    }
L_0007c4cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_0007c4d0:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[5]);
    }
L_0007c4d4:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[2]);
    }
L_0007c4d8:;
    {
        goto L_0007c3a0;
    }
L_0007c4dc:;
    {
        cpu->r[7] = 0x00000abcu;
    }
L_0007c4e0:;
    {
        cpu->r[8] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007c4e4:;
    {
        cpu->r[7] = rd16(cpu->r[0] + cpu->r[7]);
    }
L_0007c4e8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[8], 0, 0);
    }
L_0007c4ec:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[5]);
    }
L_0007c4f0:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[7], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[7] = v;
    }
L_0007c4f4:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_0007c4f8:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[7]);
    }
L_0007c4fc:;
    {
        goto L_0007c344;
    }
L_0007c500:;
    {
        cpu->r[5] = 0x00000ac6u;
    }
L_0007c504:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007c508:;
    {
        cpu->r[5] = rd16(cpu->r[0] + cpu->r[5]);
    }
L_0007c50c:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000010u, cpu->r[5], 1, 0);
    }
L_0007c510:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 1);
    }
L_0007c514:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007c670;
        }
    }
L_0007c518:;
    {
        cpu->r[6] = 0x00000ac4u;
    }
L_0007c51c:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007c520:;
    {
        cpu->r[8] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_0007c524:;
    {
        cpu->r[6] = rd16(cpu->r[0] + cpu->r[6]);
    }
L_0007c528:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0007c52c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0007c530:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_0007c534:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c538:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[6], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0007c53c:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007c540:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[12]);
    }
L_0007c544:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[12]);
    }
L_0007c548:;
    {
        wr8(cpu->r[11] + cpu->r[8], cpu->r[12]);
    }
L_0007c54c:;
    {
        cpu->r[12] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_0007c550:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c554:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 8u, &shc); cpu->r[12] = v;
    }
L_0007c558:;
    {
        wr8(cpu->r[8] + cpu->r[7], cpu->r[12]);
    }
L_0007c55c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007c560:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007c564:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[7]);
    }
L_0007c568:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000010u, cpu->r[12], 1, 0);
    }
L_0007c56c:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[7] & 0xffu), &shc); cpu->r[6] = v;
    }
L_0007c570:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000010u, 1, 0);
    }
L_0007c574:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], cpu->r[5], 0, 0);
    }
L_0007c578:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[5]);
    }
L_0007c57c:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_0007c580:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[6]);
    }
L_0007c584:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000009u, 1, 1);
    }
L_0007c588:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007c654;
        }
    }
L_0007c58c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000000bu, 1, 0);
    }
L_0007c590:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007c594:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c598:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[2], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[5] = v;
    }
L_0007c59c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0007c5a0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007c5a4:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_0007c5a8:;
    {
        cpu->r[5] = (uint32_t)((uint16_t)cpu->r[5]);
    }
L_0007c5ac:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[5]);
    }
L_0007c5b0:;
    {
        wr8(cpu->r[11] + cpu->r[8], cpu->r[5]);
    }
L_0007c5b4:;
    {
        cpu->r[5] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_0007c5b8:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c5bc:;
    {
        uint32_t v = shifter(cpu->r[5], 3, 8u, &shc); cpu->r[5] = v;
    }
L_0007c5c0:;
    {
        wr8(cpu->r[6] + cpu->r[12], cpu->r[5]);
    }
L_0007c5c4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007c5c8:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[7]);
    }
L_0007c5cc:;
    {
        cpu->r[5] = sub_flags(cpu, 0x00000010u, cpu->r[12], 1, 0);
    }
L_0007c5d0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000009u, 1, 0);
    }
L_0007c5d4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0007c5d8:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[12]);
    }
L_0007c5dc:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[2]);
    }
L_0007c5e0:;
    {
        goto L_0007c3a0;
    }
L_0007c5e4:;
    {
        cpu->r[2] = rd16(cpu->r[2] + + 0x4u);
    }
L_0007c5e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[7], 0, 0);
    }
L_0007c5ec:;
    {
        cpu->r[6] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_0007c5f0:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[12]);
    }
L_0007c5f4:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[2], 2, (cpu->r[7] & 0xffu), &shc); cpu->r[6] = v;
    }
L_0007c5f8:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_0007c5fc:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[6]);
    }
L_0007c600:;
    {
        goto L_0007c2c4;
    }
L_0007c604:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007c608:;
    {
        cpu->r[6] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_0007c60c:;
    {
        goto L_0007c2c8;
    }
L_0007c610:;
    {
        cpu->r[7] = 0x00000ac0u;
    }
L_0007c614:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_0007c618:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[5]);
    }
L_0007c61c:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000du, 1, 1);
    }
L_0007c620:;
    {
        cpu->r[7] = rd16(cpu->r[0] + cpu->r[7]);
    }
L_0007c624:;
    {
        cpu->r[6] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_0007c628:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[7], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[6] = v;
    }
L_0007c62c:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_0007c630:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[6]);
    }
L_0007c634:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007c468;
        }
    }
L_0007c638:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 0);
    }
L_0007c63c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007c640:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[2], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[5] = v;
    }
L_0007c644:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000003u, 0, 0);
    }
L_0007c648:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[5]);
    }
L_0007c64c:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[2]);
    }
L_0007c650:;
    {
        goto L_0007c3a0;
    }
L_0007c654:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000000bu, 1, 0);
    }
L_0007c658:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007c65c:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[2], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[5] = v;
    }
L_0007c660:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000007u, 0, 0);
    }
L_0007c664:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[5]);
    }
L_0007c668:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[2]);
    }
L_0007c66c:;
    {
        goto L_0007c3a0;
    }
L_0007c670:;
    {
        cpu->r[7] = 0x00000ac4u;
    }
L_0007c674:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_0007c678:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[5]);
    }
L_0007c67c:;
    {
        cpu->r[7] = rd16(cpu->r[0] + cpu->r[7]);
    }
L_0007c680:;
    {
        cpu->r[6] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_0007c684:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[7], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[6] = v;
    }
L_0007c688:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_0007c68c:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[6]);
    }
L_0007c690:;
    {
        goto L_0007c584;
    }
}

/* _tr_stored_block @ 0007c694 (arm) */
void fn_0007c694(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007c694:;
    {
        cpu->r[12] = 0x000016bcu;
    }
L_0007c698:;
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
L_0007c69c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_0007c6a0:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000000du, 1, 1);
    }
L_0007c6a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007c800;
        }
    }
L_0007c6a8:;
    {
        cpu->r[5] = 0x000016b8u;
    }
L_0007c6ac:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007c6b0:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c6b4:;
    {
        cpu->r[8] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_0007c6b8:;
    {
        cpu->r[9] = rd16(cpu->r[0] + cpu->r[5]);
    }
L_0007c6bc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0007c6c0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0007c6c4:;
    {
        uint32_t v = cpu->r[9] | shifter(cpu->r[3], 2, (cpu->r[4] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007c6c8:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_0007c6cc:;
    {
        wr16(cpu->r[0] + cpu->r[5], cpu->r[3]);
    }
L_0007c6d0:;
    {
        wr8(cpu->r[11] + cpu->r[7], cpu->r[3]);
    }
L_0007c6d4:;
    {
        cpu->r[4] = rd16(cpu->r[0] + cpu->r[5]);
    }
L_0007c6d8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c6dc:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 8u, &shc); cpu->r[4] = v;
    }
L_0007c6e0:;
    {
        wr8(cpu->r[3] + cpu->r[6], cpu->r[4]);
    }
L_0007c6e4:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_0007c6e8:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[10]);
    }
L_0007c6ec:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000010u, cpu->r[6], 1, 0);
    }
L_0007c6f0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x0000000du, 1, 0);
    }
L_0007c6f4:;
    {
        uint32_t v = shifter(cpu->r[8], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[8] = v;
    }
L_0007c6f8:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[6]);
    }
L_0007c6fc:;
    {
        wr16(cpu->r[0] + cpu->r[5], cpu->r[8]);
    }
L_0007c700:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_0007c704:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007c7d8;
        }
    }
L_0007c708:;
    {
        cpu->r[12] = 0x000016b8u;
    }
L_0007c70c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007c710:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c714:;
    {
        cpu->r[7] = rd16(cpu->r[0] + cpu->r[12]);
    }
L_0007c718:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0007c71c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007c720:;
    {
        wr8(cpu->r[6] + cpu->r[4], cpu->r[7]);
    }
L_0007c724:;
    {
        cpu->r[4] = rd16(cpu->r[0] + cpu->r[12]);
    }
L_0007c728:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c72c:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 8u, &shc); cpu->r[4] = v;
    }
L_0007c730:;
    {
        wr8(cpu->r[12] + cpu->r[3], cpu->r[4]);
    }
L_0007c734:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[5]);
    }
L_0007c738:;
    {
        cpu->r[6] = 0x000016bcu;
    }
L_0007c73c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007c740:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c744:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0007c748:;
    {
        cpu->r[4] = 0x000016b8u;
    }
L_0007c74c:;
    {
        wr32(cpu->r[0] + cpu->r[6], cpu->r[12]);
    }
L_0007c750:;
    {
        cpu->r[6] = 0x000016b4u;
    }
L_0007c754:;
    {
        cpu->r[7] = 0x00000008u;
    }
L_0007c758:;
    {
        wr16(cpu->r[0] + cpu->r[4], cpu->r[12]);
    }
L_0007c75c:;
    {
        cpu->r[4] = (uint32_t)((uint8_t)cpu->r[2]);
    }
L_0007c760:;
    {
        wr32(cpu->r[0] + cpu->r[6], cpu->r[7]);
    }
L_0007c764:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007c768:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0007c76c:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_0007c770:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c774:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0007c778:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 8u, &shc); cpu->r[10] = v;
    }
L_0007c77c:;
    {
        cpu->r[8] = (~cpu->r[4]);
    }
L_0007c780:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0007c784:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_0007c788:;
    {
        wr8(cpu->r[7] + cpu->r[6], cpu->r[10]);
    }
L_0007c78c:;
    {
        cpu->r[3] = (~cpu->r[3]);
    }
L_0007c790:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c794:;
    {
        cpu->r[6] = (cpu->r[3] >> 8) & 0xffu;
    }
L_0007c798:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0007c79c:;
    {
        wr8(cpu->r[7] + cpu->r[5], cpu->r[8]);
    }
L_0007c7a0:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c7a4:;
    {
        wr8(cpu->r[5] + cpu->r[4], cpu->r[6]);
    }
L_0007c7a8:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0007c7ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007c7d0;
        }
    }
L_0007c7b0:;
    {
        cpu->r[5] = rd8(cpu->r[1] + cpu->r[12]);
    }
L_0007c7b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007c7b8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c7bc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_0007c7c0:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0007c7c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007c7c8:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0007c7cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007c7b0;
        }
    }
L_0007c7d0:;
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
L_0007c7d4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0007c7d8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0007c7dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007c738;
        }
    }
L_0007c7e0:;
    {
        cpu->r[12] = 0x000016b8u;
    }
L_0007c7e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007c7e8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c7ec:;
    {
        cpu->r[5] = rd16(cpu->r[0] + cpu->r[12]);
    }
L_0007c7f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007c7f4:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0007c7f8:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[12]);
    }
L_0007c7fc:;
    {
        goto L_0007c738;
    }
L_0007c800:;
    {
        cpu->r[5] = 0x000016b8u;
    }
L_0007c804:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00000003u, 0, 0);
    }
L_0007c808:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[6]);
    }
L_0007c80c:;
    {
        cpu->r[12] = rd16(cpu->r[0] + cpu->r[5]);
    }
L_0007c810:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[3], 2, (cpu->r[4] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007c814:;
    {
        wr16(cpu->r[0] + cpu->r[5], cpu->r[3]);
    }
L_0007c818:;
    {
        goto L_0007c700;
    }
}

/* _tr_align @ 0007c81c (arm) */
void fn_0007c81c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007c81c:;
    {
        cpu->r[2] = 0x000016bcu;
    }
L_0007c820:;
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
L_0007c824:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0007c828:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000du, 1, 1);
    }
L_0007c82c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007caac;
        }
    }
L_0007c830:;
    {
        cpu->r[12] = 0x000016b8u;
    }
L_0007c834:;
    {
        cpu->r[4] = 0x00000002u;
    }
L_0007c838:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007c83c:;
    {
        cpu->r[6] = rd16(cpu->r[0] + cpu->r[12]);
    }
L_0007c840:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c844:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0007c848:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[4], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007c84c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0007c850:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_0007c854:;
    {
        wr16(cpu->r[0] + cpu->r[12], cpu->r[3]);
    }
L_0007c858:;
    {
        wr8(cpu->r[7] + cpu->r[5], cpu->r[3]);
    }
L_0007c85c:;
    {
        cpu->r[5] = rd16(cpu->r[0] + cpu->r[12]);
    }
L_0007c860:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c864:;
    {
        uint32_t v = shifter(cpu->r[5], 3, 8u, &shc); cpu->r[5] = v;
    }
L_0007c868:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[5]);
    }
L_0007c86c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0007c870:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[6]);
    }
L_0007c874:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000010u, cpu->r[1], 1, 0);
    }
L_0007c878:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000000du, 1, 0);
    }
L_0007c87c:;
    {
        uint32_t v = shifter(cpu->r[4], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[4] = v;
    }
L_0007c880:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_0007c884:;
    {
        cpu->r[4] = (uint32_t)((uint16_t)cpu->r[4]);
    }
L_0007c888:;
    {
        wr16(cpu->r[0] + cpu->r[12], cpu->r[4]);
    }
L_0007c88c:;
    {
        cpu->r[2] = rd32(0x0007c894u + + 0x34cu);
    }
L_0007c890:;
    {
        cpu->r[3] = 0x00000402u;
    }
L_0007c894:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007c89cu, cpu->r[2], 0, 0);
    }
L_0007c898:;
    {
        cpu->r[12] = rd16(cpu->r[2] + cpu->r[3]);
    }
L_0007c89c:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000010u, cpu->r[12], 1, 0);
    }
L_0007c8a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0007c8a4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007ca38;
        }
    }
L_0007c8a8:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_0007c8ac:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007c8b0:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c8b4:;
    {
        cpu->r[5] = 0x000016b8u;
    }
L_0007c8b8:;
    {
        cpu->r[6] = rd16(cpu->r[2] + cpu->r[3]);
    }
L_0007c8bc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0007c8c0:;
    {
        cpu->r[2] = 0x000016bcu;
    }
L_0007c8c4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0007c8c8:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[6], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0007c8cc:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_0007c8d0:;
    {
        wr16(cpu->r[0] + cpu->r[5], cpu->r[1]);
    }
L_0007c8d4:;
    {
        wr8(cpu->r[9] + cpu->r[8], cpu->r[1]);
    }
L_0007c8d8:;
    {
        cpu->r[1] = rd16(cpu->r[0] + cpu->r[5]);
    }
L_0007c8dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c8e0:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 8u, &shc); cpu->r[1] = v;
    }
L_0007c8e4:;
    {
        wr8(cpu->r[3] + cpu->r[7], cpu->r[1]);
    }
L_0007c8e8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0007c8ec:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[10]);
    }
L_0007c8f0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000010u, 1, 0);
    }
L_0007c8f4:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000010u, cpu->r[1], 1, 0);
    }
L_0007c8f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_0007c8fc:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[6] = v;
    }
L_0007c900:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_0007c904:;
    {
        wr16(cpu->r[0] + cpu->r[5], cpu->r[6]);
    }
L_0007c908:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_0007c90c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007ca64;
        }
    }
L_0007c910:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_0007c914:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007cad0;
        }
    }
L_0007c918:;
    {
        cpu->r[2] = 0x000016b4u;
    }
L_0007c91c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0007c920:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000bu, 0, 0);
    }
L_0007c924:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0007c928:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000008u, 1, 1);
    }
L_0007c92c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007ca24;
        }
    }
L_0007c930:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000du, 1, 1);
    }
L_0007c934:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0007cb0c;
        }
    }
L_0007c938:;
    {
        cpu->r[2] = 0x000016b8u;
    }
L_0007c93c:;
    {
        cpu->r[12] = 0x000016bcu;
    }
L_0007c940:;
    {
        cpu->r[5] = 0x00000002u;
    }
L_0007c944:;
    {
        cpu->r[4] = rd16(cpu->r[0] + cpu->r[2]);
    }
L_0007c948:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_0007c94c:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[5], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007c950:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_0007c954:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[1]);
    }
L_0007c958:;
    {
        cpu->r[4] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_0007c95c:;
    {
        wr16(cpu->r[0] + cpu->r[2], cpu->r[4]);
    }
L_0007c960:;
    {
        cpu->r[2] = rd32(0x0007c968u + + 0x27cu);
    }
L_0007c964:;
    {
        cpu->r[3] = 0x00000402u;
    }
L_0007c968:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007c970u, cpu->r[2], 0, 0);
    }
L_0007c96c:;
    {
        cpu->r[12] = rd16(cpu->r[2] + cpu->r[3]);
    }
L_0007c970:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000010u, cpu->r[12], 1, 0);
    }
L_0007c974:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0007c978:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007cb70;
        }
    }
L_0007c97c:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_0007c980:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007c984:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c988:;
    {
        cpu->r[5] = 0x000016b8u;
    }
L_0007c98c:;
    {
        cpu->r[6] = rd16(cpu->r[2] + cpu->r[3]);
    }
L_0007c990:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0007c994:;
    {
        cpu->r[2] = 0x000016bcu;
    }
L_0007c998:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0007c99c:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[6], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0007c9a0:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_0007c9a4:;
    {
        wr16(cpu->r[0] + cpu->r[5], cpu->r[1]);
    }
L_0007c9a8:;
    {
        wr8(cpu->r[9] + cpu->r[8], cpu->r[1]);
    }
L_0007c9ac:;
    {
        cpu->r[1] = rd16(cpu->r[0] + cpu->r[5]);
    }
L_0007c9b0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c9b4:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 8u, &shc); cpu->r[1] = v;
    }
L_0007c9b8:;
    {
        wr8(cpu->r[3] + cpu->r[7], cpu->r[1]);
    }
L_0007c9bc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0007c9c0:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[10]);
    }
L_0007c9c4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000010u, 1, 0);
    }
L_0007c9c8:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000010u, cpu->r[1], 1, 0);
    }
L_0007c9cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_0007c9d0:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[6] = v;
    }
L_0007c9d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_0007c9d8:;
    {
        wr16(cpu->r[0] + cpu->r[5], cpu->r[6]);
    }
L_0007c9dc:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_0007c9e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007cb9c;
        }
    }
L_0007c9e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_0007c9e8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007ca24;
        }
    }
L_0007c9ec:;
    {
        cpu->r[3] = 0x000016b8u;
    }
L_0007c9f0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007c9f4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007c9f8:;
    {
        cpu->r[2] = 0x000016bcu;
    }
L_0007c9fc:;
    {
        cpu->r[5] = rd16(cpu->r[0] + cpu->r[3]);
    }
L_0007ca00:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0007ca04:;
    {
        wr8(cpu->r[12] + cpu->r[1], cpu->r[5]);
    }
L_0007ca08:;
    {
        cpu->r[12] = rd16(cpu->r[0] + cpu->r[3]);
    }
L_0007ca0c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0007ca10:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[4]);
    }
L_0007ca14:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 8u, &shc); cpu->r[12] = v;
    }
L_0007ca18:;
    {
        wr16(cpu->r[0] + cpu->r[3], cpu->r[12]);
    }
L_0007ca1c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 0);
    }
L_0007ca20:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_0007ca24:;
    {
        cpu->r[3] = 0x000016b4u;
    }
L_0007ca28:;
    {
        cpu->r[2] = 0x00000007u;
    }
L_0007ca2c:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0007ca30:;
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
L_0007ca34:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0007ca38:;
    {
        cpu->r[5] = 0x000016bcu;
    }
L_0007ca3c:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_0007ca40:;
    {
        cpu->r[2] = rd16(cpu->r[2] + cpu->r[3]);
    }
L_0007ca44:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_0007ca48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0007ca4c:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[2], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0007ca50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_0007ca54:;
    {
        cpu->r[2] = 0x000016b8u;
    }
L_0007ca58:;
    {
        wr32(cpu->r[0] + cpu->r[5], cpu->r[3]);
    }
L_0007ca5c:;
    {
        wr16(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_0007ca60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007c910;
        }
    }
L_0007ca64:;
    {
        cpu->r[1] = 0x000016b8u;
    }
L_0007ca68:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007ca6c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007ca70:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0007ca74:;
    {
        cpu->r[7] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_0007ca78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0007ca7c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007ca80:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0007ca84:;
    {
        wr8(cpu->r[6] + cpu->r[4], cpu->r[7]);
    }
L_0007ca88:;
    {
        cpu->r[6] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_0007ca8c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007ca90:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 8u, &shc); cpu->r[6] = v;
    }
L_0007ca94:;
    {
        wr8(cpu->r[4] + cpu->r[12], cpu->r[6]);
    }
L_0007ca98:;
    {
        wr16(cpu->r[0] + cpu->r[1], cpu->r[2]);
    }
L_0007ca9c:;
    {
        cpu->r[1] = 0x000016bcu;
    }
L_0007caa0:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[5]);
    }
L_0007caa4:;
    {
        wr32(cpu->r[0] + cpu->r[1], cpu->r[2]);
    }
L_0007caa8:;
    {
        goto L_0007c918;
    }
L_0007caac:;
    {
        cpu->r[12] = 0x000016b8u;
    }
L_0007cab0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_0007cab4:;
    {
        cpu->r[4] = 0x00000002u;
    }
L_0007cab8:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_0007cabc:;
    {
        cpu->r[2] = rd16(cpu->r[0] + cpu->r[12]);
    }
L_0007cac0:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[4], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007cac4:;
    {
        cpu->r[4] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_0007cac8:;
    {
        wr16(cpu->r[0] + cpu->r[12], cpu->r[4]);
    }
L_0007cacc:;
    {
        goto L_0007c88c;
    }
L_0007cad0:;
    {
        cpu->r[2] = 0x000016b8u;
    }
L_0007cad4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007cad8:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007cadc:;
    {
        cpu->r[1] = 0x000016bcu;
    }
L_0007cae0:;
    {
        cpu->r[5] = rd16(cpu->r[0] + cpu->r[2]);
    }
L_0007cae4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007cae8:;
    {
        wr8(cpu->r[12] + cpu->r[3], cpu->r[5]);
    }
L_0007caec:;
    {
        cpu->r[12] = rd16(cpu->r[0] + cpu->r[2]);
    }
L_0007caf0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_0007caf4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[4]);
    }
L_0007caf8:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 8u, &shc); cpu->r[12] = v;
    }
L_0007cafc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
    }
L_0007cb00:;
    {
        wr16(cpu->r[0] + cpu->r[2], cpu->r[12]);
    }
L_0007cb04:;
    {
        wr32(cpu->r[0] + cpu->r[1], cpu->r[3]);
    }
L_0007cb08:;
    {
        goto L_0007c918;
    }
L_0007cb0c:;
    {
        cpu->r[2] = 0x000016b8u;
    }
L_0007cb10:;
    {
        cpu->r[4] = 0x00000002u;
    }
L_0007cb14:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007cb18:;
    {
        cpu->r[12] = 0x000016bcu;
    }
L_0007cb1c:;
    {
        cpu->r[6] = rd16(cpu->r[0] + cpu->r[2]);
    }
L_0007cb20:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007cb24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0007cb28:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[4], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007cb2c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0007cb30:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_0007cb34:;
    {
        wr16(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_0007cb38:;
    {
        wr8(cpu->r[7] + cpu->r[5], cpu->r[3]);
    }
L_0007cb3c:;
    {
        cpu->r[5] = rd16(cpu->r[0] + cpu->r[2]);
    }
L_0007cb40:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007cb44:;
    {
        uint32_t v = shifter(cpu->r[5], 3, 8u, &shc); cpu->r[5] = v;
    }
L_0007cb48:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[5]);
    }
L_0007cb4c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_0007cb50:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[6]);
    }
L_0007cb54:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000010u, cpu->r[1], 1, 0);
    }
L_0007cb58:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000000du, 1, 0);
    }
L_0007cb5c:;
    {
        uint32_t v = shifter(cpu->r[4], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[4] = v;
    }
L_0007cb60:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[1]);
    }
L_0007cb64:;
    {
        cpu->r[4] = (uint32_t)((uint16_t)cpu->r[4]);
    }
L_0007cb68:;
    {
        wr16(cpu->r[0] + cpu->r[2], cpu->r[4]);
    }
L_0007cb6c:;
    {
        goto L_0007c960;
    }
L_0007cb70:;
    {
        cpu->r[5] = 0x000016bcu;
    }
L_0007cb74:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_0007cb78:;
    {
        cpu->r[2] = rd16(cpu->r[2] + cpu->r[3]);
    }
L_0007cb7c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_0007cb80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0007cb84:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[2], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0007cb88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_0007cb8c:;
    {
        cpu->r[2] = 0x000016b8u;
    }
L_0007cb90:;
    {
        wr32(cpu->r[0] + cpu->r[5], cpu->r[3]);
    }
L_0007cb94:;
    {
        wr16(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_0007cb98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007c9e4;
        }
    }
L_0007cb9c:;
    {
        cpu->r[3] = 0x000016b8u;
    }
L_0007cba0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007cba4:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007cba8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0007cbac:;
    {
        cpu->r[6] = rd16(cpu->r[0] + cpu->r[3]);
    }
L_0007cbb0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007cbb4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0007cbb8:;
    {
        wr8(cpu->r[5] + cpu->r[12], cpu->r[6]);
    }
L_0007cbbc:;
    {
        cpu->r[5] = rd16(cpu->r[0] + cpu->r[3]);
    }
L_0007cbc0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007cbc4:;
    {
        uint32_t v = shifter(cpu->r[5], 3, 8u, &shc); cpu->r[5] = v;
    }
L_0007cbc8:;
    {
        wr8(cpu->r[12] + cpu->r[1], cpu->r[5]);
    }
L_0007cbcc:;
    {
        cpu->r[1] = 0x000016bcu;
    }
L_0007cbd0:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[4]);
    }
L_0007cbd4:;
    {
        wr32(cpu->r[0] + cpu->r[1], cpu->r[2]);
    }
L_0007cbd8:;
    {
        wr16(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0007cbdc:;
    {
        goto L_0007ca24;
    }
}

/* _tr_tally @ 0007cbe8 (arm) */
void fn_0007cbe8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007cbe8:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_0007cbec:;
    {
        cpu->r[12] = 0x000016a0u;
    }
L_0007cbf0:;
    {
        cpu->r[4] = 0x000016a4u;
    }
L_0007cbf4:;
    {
        cpu->r[6] = rd32(0x0007cbfcu + + 0xccu);
    }
L_0007cbf8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_0007cbfc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007cc00:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007cc04:;
    {
        cpu->r[4] = 0x00001698u;
    }
L_0007cc08:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007cc0c:;
    {
        cpu->r[6] = add_flags(cpu, 0x0007cc14u, cpu->r[6], 0, 0);
    }
L_0007cc10:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007cc14:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[8] = v;
    }
L_0007cc18:;
    {
        wr16(cpu->r[5] + cpu->r[8], cpu->r[1]);
    }
L_0007cc1c:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0007cc20:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[7]);
    }
L_0007cc24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007ccb0;
        }
    }
L_0007cc28:;
    {
        cpu->r[12] = rd32(0x0007cc30u + + 0x9cu);
    }
L_0007cc2c:;
    {
        cpu->r[3] = 0x000016b0u;
    }
L_0007cc30:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0007cc34:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0007cc38:;
    {
        sub_flags(cpu, cpu->r[1], 0x000000ffu, 1, 1);
    }
L_0007cc3c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_0007cc40:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0007cc44:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[4]);
    }
L_0007cc48:;
    {
        cpu->r[3] = rd8(cpu->r[12] + cpu->r[2]);
    }
L_0007cc4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000124u, 0, 0);
    }
L_0007cc50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007cc54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0007cc58:;
    {
        cpu->r[2] = rd16(cpu->r[3] + + 0x4u);
    }
L_0007cc5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0007cc60:;
    {
        wr16(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_0007cc64:;
    {
        cpu->r[3] = rd32(0x0007cc6cu + + 0x64u);
    }
L_0007cc68:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0007cc6c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 3, 7u, &shc), 0, 0);
        }
    }
L_0007cc70:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[1]);
        }
    }
L_0007cc74:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = rd8(cpu->r[1] + + 0x100u);
        }
    }
L_0007cc78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000260u, 0, 0);
    }
L_0007cc7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0007cc80:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_0007cc84:;
    {
        cpu->r[2] = rd16(cpu->r[0] + cpu->r[3]);
    }
L_0007cc88:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0007cc8c:;
    {
        wr16(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0007cc90:;
    {
        cpu->r[3] = 0x0000169cu;
    }
L_0007cc94:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0007cc98:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0007cc9c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_0007cca0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0007cca4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0007cca8:;
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
L_0007ccac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0007ccb0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000024u, 0, 0);
    }
L_0007ccb4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0007ccb8:;
    {
        cpu->r[3] = rd16(cpu->r[2] + + 0x4u);
    }
L_0007ccbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007ccc0:;
    {
        wr16(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_0007ccc4:;
    {
        goto L_0007cc90;
    }
}

/* sub_0007ccd4 @ 0007ccd4 (arm) */
void fn_0007ccd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007ccd4:;
    {
        cpu->r[3] = rd32(0x0007ccdcu + + 0x528u);
    }
L_0007ccd8:;
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
L_0007ccdc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000030u, 1, 0);
    }
L_0007cce0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0007cce4:;
    {
        cpu->r[3] = 0x000016a0u;
    }
L_0007cce8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_0007ccec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0007ccf0:;
    {
        cpu->r[5] = add_flags(cpu, 0x0007ccf8u, cpu->r[5], 0, 0);
    }
L_0007ccf4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0007ccf8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007ccfc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_0007cd00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007cd60;
        }
    }
L_0007cd04:;
    {
        cpu->r[3] = 0x000016bcu;
    }
L_0007cd08:;
    {
        cpu->r[2] = 0x000016b8u;
    }
L_0007cd0c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0007cd10:;
    {
        cpu->r[12] = rd16(cpu->r[0] + cpu->r[2]);
    }
L_0007cd14:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000400u, 0, 0);
    }
L_0007cd18:;
    {
        cpu->r[2] = rd16(cpu->r[1] + + 0x2u);
    }
L_0007cd1c:;
    {
        cpu->r[4] = sub_flags(cpu, 0x00000010u, cpu->r[2], 1, 0);
    }
L_0007cd20:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0007cd24:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007d1a4;
        }
    }
L_0007cd28:;
    {
        cpu->r[6] = rd16(cpu->r[1]);
    }
L_0007cd2c:;
    {
        cpu->r[4] = 0x000016bcu;
    }
L_0007cd30:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0007cd34:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[6], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007cd38:;
    {
        cpu->r[6] = 0x000016b8u;
    }
L_0007cd3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_0007cd40:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[2]);
    }
L_0007cd44:;
    {
        wr16(cpu->r[0] + cpu->r[6], cpu->r[3]);
    }
L_0007cd48:;
    {
        cpu->r[2] = rd16(cpu->r[1] + + 0x2u);
    }
L_0007cd4c:;
    {
        cpu->r[3] = 0x000016b4u;
    }
L_0007cd50:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0007cd54:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0007cd58:;
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
L_0007cd5c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0007cd60:;
    {
        cpu->r[5] = rd32(0x0007cd68u + + 0x4a0u);
    }
L_0007cd64:;
    {
        cpu->r[12] = 0x000016b8u;
    }
L_0007cd68:;
    {
        cpu->r[6] = rd32(0x0007cd70u + + 0x49cu);
    }
L_0007cd6c:;
    {
        cpu->r[3] = 0x000016bcu;
    }
L_0007cd70:;
    {
        cpu->r[7] = rd32(0x0007cd78u + + 0x498u);
    }
L_0007cd74:;
    {
        cpu->r[5] = add_flags(cpu, 0x0007cd7cu, cpu->r[5], 0, 0);
    }
L_0007cd78:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_0007cd7c:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_0007cd80:;
    {
        cpu->r[5] = rd32(0x0007cd88u + + 0x48cu);
    }
L_0007cd84:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0007cd88:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0007cd8c:;
    {
        cpu->r[10] = 0x000016a4u;
    }
L_0007cd90:;
    {
        cpu->r[5] = add_flags(cpu, 0x0007cd98u, cpu->r[5], 0, 0);
    }
L_0007cd94:;
    {
        cpu->r[12] = rd16(cpu->r[0] + cpu->r[12]);
    }
L_0007cd98:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[5]);
    }
L_0007cd9c:;
    {
        cpu->r[8] = 0x00001698u;
    }
L_0007cda0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[6]);
    }
L_0007cda4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[7]);
    }
L_0007cda8:;
    {
        goto L_0007ce38;
    }
L_0007cdac:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[6] = v;
    }
L_0007cdb0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_0007cdb4:;
    {
        cpu->r[5] = rd16(cpu->r[5] + + 0x2u);
    }
L_0007cdb8:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000010u, cpu->r[5], 1, 0);
    }
L_0007cdbc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0007cdc0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007d110;
        }
    }
L_0007cdc4:;
    {
        cpu->r[7] = rd16(cpu->r[1] + cpu->r[6]);
    }
L_0007cdc8:;
    {
        cpu->r[6] = 0x000016bcu;
    }
L_0007cdcc:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007cdd0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0007cdd4:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[7], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007cdd8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0007cddc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0007cde0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007cde4:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_0007cde8:;
    {
        wr16(cpu->r[0] + cpu->r[4], cpu->r[3]);
    }
L_0007cdec:;
    {
        wr8(cpu->r[12] + cpu->r[11], cpu->r[3]);
    }
L_0007cdf0:;
    {
        cpu->r[3] = rd16(cpu->r[0] + cpu->r[4]);
    }
L_0007cdf4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007cdf8:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 8u, &shc); cpu->r[3] = v;
    }
L_0007cdfc:;
    {
        wr8(cpu->r[12] + cpu->r[9], cpu->r[3]);
    }
L_0007ce00:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_0007ce04:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007ce08:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000010u, cpu->r[3], 1, 0);
    }
L_0007ce0c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 0);
    }
L_0007ce10:;
    {
        uint32_t v = shifter(cpu->r[7], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0007ce14:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0007ce18:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[9]);
    }
L_0007ce1c:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[12]);
    }
L_0007ce20:;
    {
        wr32(cpu->r[0] + cpu->r[6], cpu->r[3]);
    }
L_0007ce24:;
    {
        wr16(cpu->r[0] + cpu->r[4], cpu->r[12]);
    }
L_0007ce28:;
    {
        cpu->r[5] = 0x000016a0u;
    }
L_0007ce2c:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_0007ce30:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0007ce34:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0007cd14;
        }
    }
L_0007ce38:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_0007ce3c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[5] = v;
    }
L_0007ce40:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_0007ce44:;
    {
        cpu->r[5] = rd16(cpu->r[7] + cpu->r[5]);
    }
L_0007ce48:;
    {
        cpu->r[6] = rd8(cpu->r[6] + cpu->r[2]);
    }
L_0007ce4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0007ce50:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0007ce54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007cdac;
        }
    }
L_0007ce58:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x14u);
    }
L_0007ce5c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x20u);
    }
L_0007ce60:;
    {
        cpu->r[7] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_0007ce64:;
    {
        cpu->r[7] = rd8(cpu->r[7] + cpu->r[6]);
    }
L_0007ce68:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_0007ce6c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000100u, 0, 0);
    }
L_0007ce70:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0007ce74:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[7] = v;
    }
L_0007ce78:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_0007ce7c:;
    {
        cpu->r[11] = rd16(cpu->r[9] + + 0x2u);
    }
L_0007ce80:;
    {
        cpu->r[9] = sub_flags(cpu, 0x00000010u, cpu->r[11], 1, 0);
    }
L_0007ce84:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_0007ce88:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007d0e4;
        }
    }
L_0007ce8c:;
    {
        cpu->r[7] = rd16(cpu->r[1] + cpu->r[7]);
    }
L_0007ce90:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_0007ce94:;
    {
        cpu->r[7] = 0x000016bcu;
    }
L_0007ce98:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007ce9c:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[9], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007cea0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007cea4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007cea8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0007ceac:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007ceb0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007ceb4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_0007ceb8:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_0007cebc:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007cec0:;
    {
        wr16(cpu->r[0] + cpu->r[4], cpu->r[3]);
    }
L_0007cec4:;
    {
        wr8(cpu->r[9] + cpu->r[12], cpu->r[3]);
    }
L_0007cec8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007cecc:;
    {
        cpu->r[3] = rd16(cpu->r[0] + cpu->r[4]);
    }
L_0007ced0:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007ced4:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 8u, &shc); cpu->r[3] = v;
    }
L_0007ced8:;
    {
        wr8(cpu->r[9] + cpu->r[12], cpu->r[3]);
    }
L_0007cedc:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0007cee0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_0007cee4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[9]);
    }
L_0007cee8:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000010u, cpu->r[3], 1, 0);
    }
L_0007ceec:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x4u);
    }
L_0007cef0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 0);
    }
L_0007cef4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_0007cef8:;
    {
        wr32(cpu->r[0] + cpu->r[7], cpu->r[11]);
    }
L_0007cefc:;
    {
        uint32_t v = shifter(cpu->r[9], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0007cf00:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[12]);
    }
L_0007cf04:;
    {
        wr16(cpu->r[0] + cpu->r[4], cpu->r[12]);
    }
L_0007cf08:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007cf0c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_0007cf10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_0007cf14:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x480u);
    }
L_0007cf18:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0007cf1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007cf98;
        }
    }
L_0007cf20:;
    {
        cpu->r[9] = sub_flags(cpu, 0x00000010u, cpu->r[7], 1, 0);
    }
L_0007cf24:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4f4u);
    }
L_0007cf28:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 1);
    }
L_0007cf2c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_0007cf30:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007d184;
        }
    }
L_0007cf34:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[6], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[11] = v;
    }
L_0007cf38:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007cf3c:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_0007cf40:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_0007cf44:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007cf48:;
    {
        cpu->r[11] = (uint32_t)((uint16_t)cpu->r[11]);
    }
L_0007cf4c:;
    {
        wr16(cpu->r[0] + cpu->r[4], cpu->r[11]);
    }
L_0007cf50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007cf54:;
    {
        cpu->r[9] = 0x000016bcu;
    }
L_0007cf58:;
    {
        wr8(cpu->r[6] + cpu->r[12], cpu->r[11]);
    }
L_0007cf5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007cf60:;
    {
        cpu->r[6] = rd16(cpu->r[0] + cpu->r[4]);
    }
L_0007cf64:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007cf68:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 8u, &shc); cpu->r[6] = v;
    }
L_0007cf6c:;
    {
        wr8(cpu->r[11] + cpu->r[3], cpu->r[6]);
    }
L_0007cf70:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007cf74:;
    {
        cpu->r[11] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_0007cf78:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[12]);
    }
L_0007cf7c:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000010u, cpu->r[11], 1, 0);
    }
L_0007cf80:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000010u, 1, 0);
    }
L_0007cf84:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0007cf88:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[7], 0, 0);
    }
L_0007cf8c:;
    {
        wr32(cpu->r[0] + cpu->r[9], cpu->r[11]);
    }
L_0007cf90:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[12]);
    }
L_0007cf94:;
    {
        wr16(cpu->r[0] + cpu->r[4], cpu->r[12]);
    }
L_0007cf98:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_0007cf9c:;
    {
        sub_flags(cpu, cpu->r[5], 0x000000ffu, 1, 1);
    }
L_0007cfa0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[6] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_0007cfa4:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[9] = rd32(cpu->r[13] + + 0x2cu);
        }
    }
L_0007cfa8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[6] = rd32(cpu->r[13] + + 0x2cu);
        }
    }
L_0007cfac:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[7] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_0007cfb0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[9]);
        }
    }
L_0007cfb4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[6]);
        }
    }
L_0007cfb8:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 3, 7u, &shc), 0, 0);
        }
    }
L_0007cfbc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007cfc0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[6] = rd8(cpu->r[3] + + 0x100u);
        }
    }
L_0007cfc4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[6] = rd8(cpu->r[3] + cpu->r[5]);
        }
    }
L_0007cfc8:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[6] = v;
    }
L_0007cfcc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_0007cfd0:;
    {
        cpu->r[3] = rd16(cpu->r[3] + + 0x2u);
    }
L_0007cfd4:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000010u, cpu->r[3], 1, 0);
    }
L_0007cfd8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[11], 1, 1);
    }
L_0007cfdc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007d134;
        }
    }
L_0007cfe0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007cfe4:;
    {
        cpu->r[7] = 0x000016bcu;
    }
L_0007cfe8:;
    {
        cpu->r[9] = rd16(cpu->r[9] + cpu->r[6]);
    }
L_0007cfec:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[9], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[11] = v;
    }
L_0007cff0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007cff4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[9]);
    }
L_0007cff8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007cffc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0007d000:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0007d004:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007d008:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_0007d00c:;
    {
        cpu->r[11] = (uint32_t)((uint16_t)cpu->r[11]);
    }
L_0007d010:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007d014:;
    {
        wr16(cpu->r[0] + cpu->r[4], cpu->r[11]);
    }
L_0007d018:;
    {
        wr8(cpu->r[12] + cpu->r[9], cpu->r[11]);
    }
L_0007d01c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007d020:;
    {
        cpu->r[12] = rd16(cpu->r[0] + cpu->r[4]);
    }
L_0007d024:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007d028:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 8u, &shc); cpu->r[12] = v;
    }
L_0007d02c:;
    {
        wr8(cpu->r[11] + cpu->r[9], cpu->r[12]);
    }
L_0007d030:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0007d034:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_0007d038:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[11]);
    }
L_0007d03c:;
    {
        cpu->r[9] = sub_flags(cpu, 0x00000010u, cpu->r[12], 1, 0);
    }
L_0007d040:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[12], 0x00000010u, 1, 0);
    }
L_0007d044:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007d048:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_0007d04c:;
    {
        wr32(cpu->r[0] + cpu->r[7], cpu->r[3]);
    }
L_0007d050:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[9] & 0xffu), &shc); cpu->r[9] = v;
    }
L_0007d054:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[9]);
    }
L_0007d058:;
    {
        wr16(cpu->r[0] + cpu->r[4], cpu->r[12]);
    }
L_0007d05c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x28u);
    }
L_0007d060:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_0007d064:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x568u);
    }
L_0007d068:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0007d06c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007ce28;
        }
    }
L_0007d070:;
    {
        cpu->r[9] = sub_flags(cpu, 0x00000010u, cpu->r[7], 1, 0);
    }
L_0007d074:;
    {
        cpu->r[6] = rd32(cpu->r[6] + + 0x5e0u);
    }
L_0007d078:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_0007d07c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 0);
    }
L_0007d080:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0007d164;
        }
    }
L_0007d084:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007d088:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[5], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007d08c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007d090:;
    {
        cpu->r[6] = 0x000016bcu;
    }
L_0007d094:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_0007d098:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0007d09c:;
    {
        wr16(cpu->r[0] + cpu->r[4], cpu->r[3]);
    }
L_0007d0a0:;
    {
        cpu->r[5] = (uint32_t)((uint16_t)cpu->r[5]);
    }
L_0007d0a4:;
    {
        wr8(cpu->r[12] + cpu->r[9], cpu->r[3]);
    }
L_0007d0a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0007d0ac:;
    {
        cpu->r[3] = rd16(cpu->r[0] + cpu->r[4]);
    }
L_0007d0b0:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007d0b4:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 8u, &shc); cpu->r[3] = v;
    }
L_0007d0b8:;
    {
        wr8(cpu->r[9] + cpu->r[11], cpu->r[3]);
    }
L_0007d0bc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_0007d0c0:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[12]);
    }
L_0007d0c4:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000010u, cpu->r[3], 1, 0);
    }
L_0007d0c8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 0);
    }
L_0007d0cc:;
    {
        uint32_t v = shifter(cpu->r[5], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0007d0d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0007d0d4:;
    {
        wr32(cpu->r[0] + cpu->r[6], cpu->r[3]);
    }
L_0007d0d8:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[12]);
    }
L_0007d0dc:;
    {
        wr16(cpu->r[0] + cpu->r[4], cpu->r[12]);
    }
L_0007d0e0:;
    {
        goto L_0007ce28;
    }
L_0007d0e4:;
    {
        cpu->r[7] = rd16(cpu->r[1] + cpu->r[7]);
    }
L_0007d0e8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[7]);
    }
L_0007d0ec:;
    {
        cpu->r[7] = 0x000016bcu;
    }
L_0007d0f0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x10u);
    }
L_0007d0f4:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[9], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0007d0f8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_0007d0fc:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[12]);
    }
L_0007d100:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_0007d104:;
    {
        wr16(cpu->r[0] + cpu->r[4], cpu->r[12]);
    }
L_0007d108:;
    {
        wr32(cpu->r[0] + cpu->r[7], cpu->r[11]);
    }
L_0007d10c:;
    {
        goto L_0007cf08;
    }
L_0007d110:;
    {
        cpu->r[9] = rd16(cpu->r[1] + cpu->r[6]);
    }
L_0007d114:;
    {
        cpu->r[6] = 0x000016bcu;
    }
L_0007d118:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_0007d11c:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[9], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0007d120:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_0007d124:;
    {
        wr32(cpu->r[0] + cpu->r[6], cpu->r[3]);
    }
L_0007d128:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[12]);
    }
L_0007d12c:;
    {
        wr16(cpu->r[0] + cpu->r[4], cpu->r[12]);
    }
L_0007d130:;
    {
        goto L_0007ce28;
    }
L_0007d134:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x18u);
    }
L_0007d138:;
    {
        cpu->r[7] = rd16(cpu->r[7] + cpu->r[6]);
    }
L_0007d13c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_0007d140:;
    {
        cpu->r[7] = 0x000016bcu;
    }
L_0007d144:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_0007d148:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[9], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0007d14c:;
    {
        cpu->r[11] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_0007d150:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[12]);
    }
L_0007d154:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_0007d158:;
    {
        wr16(cpu->r[0] + cpu->r[4], cpu->r[12]);
    }
L_0007d15c:;
    {
        wr32(cpu->r[0] + cpu->r[7], cpu->r[3]);
    }
L_0007d160:;
    {
        goto L_0007d05c;
    }
L_0007d164:;
    {
        cpu->r[6] = 0x000016bcu;
    }
L_0007d168:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[5], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0007d16c:;
    {
        cpu->r[9] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_0007d170:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[12]);
    }
L_0007d174:;
    {
        wr16(cpu->r[0] + cpu->r[4], cpu->r[12]);
    }
L_0007d178:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[9], 0, 0);
    }
L_0007d17c:;
    {
        wr32(cpu->r[0] + cpu->r[6], cpu->r[3]);
    }
L_0007d180:;
    {
        goto L_0007ce28;
    }
L_0007d184:;
    {
        cpu->r[9] = 0x000016bcu;
    }
L_0007d188:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[6], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0007d18c:;
    {
        cpu->r[11] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_0007d190:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[12]);
    }
L_0007d194:;
    {
        wr16(cpu->r[0] + cpu->r[4], cpu->r[12]);
    }
L_0007d198:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[7], cpu->r[11], 0, 0);
    }
L_0007d19c:;
    {
        wr32(cpu->r[0] + cpu->r[9], cpu->r[11]);
    }
L_0007d1a0:;
    {
        goto L_0007cf98;
    }
L_0007d1a4:;
    {
        cpu->r[6] = rd16(cpu->r[1]);
    }
L_0007d1a8:;
    {
        cpu->r[4] = 0x000016b8u;
    }
L_0007d1ac:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x14u);
    }
L_0007d1b0:;
    {
        cpu->r[5] = 0x000016bcu;
    }
L_0007d1b4:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007d1b8:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[6], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0007d1bc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0007d1c0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0007d1c4:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_0007d1c8:;
    {
        wr16(cpu->r[0] + cpu->r[4], cpu->r[3]);
    }
L_0007d1cc:;
    {
        wr8(cpu->r[10] + cpu->r[8], cpu->r[3]);
    }
L_0007d1d0:;
    {
        cpu->r[12] = rd16(cpu->r[0] + cpu->r[4]);
    }
L_0007d1d4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0007d1d8:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 8u, &shc); cpu->r[12] = v;
    }
L_0007d1dc:;
    {
        wr8(cpu->r[3] + cpu->r[7], cpu->r[12]);
    }
L_0007d1e0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_0007d1e4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[9]);
    }
L_0007d1e8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 0);
    }
L_0007d1ec:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000010u, cpu->r[3], 1, 0);
    }
L_0007d1f0:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[6] = v;
    }
L_0007d1f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_0007d1f8:;
    {
        wr16(cpu->r[0] + cpu->r[4], cpu->r[6]);
    }
L_0007d1fc:;
    {
        wr32(cpu->r[0] + cpu->r[5], cpu->r[2]);
    }
L_0007d200:;
    {
        goto L_0007cd48;
    }
}
