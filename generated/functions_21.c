#include "functions.h"

/* _ZN13CGameSettings4LoadEP7__sFILEb @ 0009481c (arm) */
void fn_0009481c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009481c:;
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
L_00094820:;
    {
        cpu->r[3] = rd32(0x00094828u + + 0x478u);
    }
L_00094824:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_00094828:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0009482c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00094830:;
    {
        cpu->r[3] = add_flags(cpu, 0x00094838u, cpu->r[3], 0, 0);
    }
L_00094834:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_00094838:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0009483c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00094840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00094870;
        }
    }
L_00094844:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00094848:;
    {
        cpu->r[14] = 0x0009484cu; imp_ftell(cpu); /* ftell */
    }
L_0009484c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094850:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00094854:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094858:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_0009485c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00094860:;
    {
        cpu->r[14] = 0x00094864u; imp_fread(cpu); /* fread */
    }
L_00094864:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00094868:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0009486c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00094878;
        }
    }
L_00094870:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00094874:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00094878u)) return;
    }
L_00094878:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0009487c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00094880:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094884:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000024u, 0, 0);
    }
L_00094888:;
    {
        cpu->r[14] = 0x0009488cu; imp_fread(cpu); /* fread */
    }
L_0009488c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00094890:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094894:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094898:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000028u, 0, 0);
    }
L_0009489c:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_000948a0:;
    {
        cpu->r[14] = 0x000948a4u; imp_fread(cpu); /* fread */
    }
L_000948a4:;
    {
        cpu->r[12] = rd32(0x000948acu + + 0x3f8u);
    }
L_000948a8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000948ac:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000948b0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000948b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000002cu, 0, 0);
    }
L_000948b8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_000948bc:;
    {
        cpu->r[14] = 0x000948c0u; imp_fread(cpu); /* fread */
    }
L_000948c0:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000948c4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000948c8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000948cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_000948d0:;
    {
        cpu->r[14] = 0x000948d4u; imp_fread(cpu); /* fread */
    }
L_000948d4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x2cu);
    }
L_000948d8:;
    {
        cpu->r[14] = 0x000948dcu; fn_000a0ea4(cpu);
    }
L_000948dc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x28u);
    }
L_000948e0:;
    {
        cpu->r[14] = 0x000948e4u; fn_000a20d8(cpu);
    }
L_000948e4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x24u);
    }
L_000948e8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000948ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000948f4u + + 0x3a8u);
    }
L_000948f0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_000948f4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000948f8:;
    {
        cpu->r[12] = rd32(0x00094900u + + 0x3a8u);
    }
L_000948fc:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094900:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094904:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00094908:;
    {
        cpu->r[11] = rd32(0x00094910u + + 0x39cu);
    }
L_0009490c:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_00094910:;
    {
        cpu->r[12] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_00094914:;
    {
        cpu->r[11] = add_flags(cpu, 0x0009491cu, cpu->r[11], 0, 0);
    }
L_00094918:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_0009491c:;
    {
        *(uint32_t*)G(cpu->r[12]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00094920:;
    {
        cpu->r[14] = 0x00094924u; imp_fread(cpu); /* fread */
    }
L_00094924:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00094928:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0009492c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094930:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_00094934:;
    {
        cpu->r[14] = 0x00094938u; imp_fread(cpu); /* fread */
    }
L_00094938:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009493c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094940:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094944:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000du, 0, 0);
    }
L_00094948:;
    {
        cpu->r[14] = 0x0009494cu; imp_fread(cpu); /* fread */
    }
L_0009494c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00094950:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094954:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094958:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000eu, 0, 0);
    }
L_0009495c:;
    {
        cpu->r[14] = 0x00094960u; imp_fread(cpu); /* fread */
    }
L_00094960:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00094964:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094968:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0009496c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000fu, 0, 0);
    }
L_00094970:;
    {
        cpu->r[14] = 0x00094974u; imp_fread(cpu); /* fread */
    }
L_00094974:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00094978:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0009497c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094980:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_00094984:;
    {
        cpu->r[14] = 0x00094988u; imp_fread(cpu); /* fread */
    }
L_00094988:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009498c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094990:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094994:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000011u, 0, 0);
    }
L_00094998:;
    {
        cpu->r[14] = 0x0009499cu; imp_fread(cpu); /* fread */
    }
L_0009499c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000949a0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000949a4:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000949a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_000949ac:;
    {
        cpu->r[14] = 0x000949b0u; imp_fread(cpu); /* fread */
    }
L_000949b0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000949b4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000949b8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000949bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000019u, 0, 0);
    }
L_000949c0:;
    {
        cpu->r[14] = 0x000949c4u; imp_fread(cpu); /* fread */
    }
L_000949c4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000949c8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000949cc:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000949d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000001au, 0, 0);
    }
L_000949d4:;
    {
        cpu->r[14] = 0x000949d8u; imp_fread(cpu); /* fread */
    }
L_000949d8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000949dc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000949e0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000949e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000001bu, 0, 0);
    }
L_000949e8:;
    {
        cpu->r[14] = 0x000949ecu; imp_fread(cpu); /* fread */
    }
L_000949ec:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000949f0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000949f4:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000949f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000012u, 0, 0);
    }
L_000949fc:;
    {
        cpu->r[14] = 0x00094a00u; imp_fread(cpu); /* fread */
    }
L_00094a00:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094a04:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094a08:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094a0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000020u, 0, 0);
    }
L_00094a10:;
    {
        cpu->r[14] = 0x00094a14u; imp_fread(cpu); /* fread */
    }
L_00094a14:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094a18:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094a1c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094a20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000034u, 0, 0);
    }
L_00094a24:;
    {
        cpu->r[14] = 0x00094a28u; imp_fread(cpu); /* fread */
    }
L_00094a28:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00094a2c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094a30:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094a34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000038u, 0, 0);
    }
L_00094a38:;
    {
        cpu->r[14] = 0x00094a3cu; imp_fread(cpu); /* fread */
    }
L_00094a3c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00094a40:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094a44:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094a48:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000039u, 0, 0);
    }
L_00094a4c:;
    {
        cpu->r[14] = 0x00094a50u; imp_fread(cpu); /* fread */
    }
L_00094a50:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00094a54:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094a58:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094a5c:;
    {
        wr8(cpu->r[5] + + 0x39u, cpu->r[4]);
    }
L_00094a60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000003au, 0, 0);
    }
L_00094a64:;
    {
        cpu->r[14] = 0x00094a68u; imp_fread(cpu); /* fread */
    }
L_00094a68:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00094a6c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094a70:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094a74:;
    {
        wr8(cpu->r[5] + + 0x3au, cpu->r[4]);
    }
L_00094a78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000003bu, 0, 0);
    }
L_00094a7c:;
    {
        cpu->r[14] = 0x00094a80u; imp_fread(cpu); /* fread */
    }
L_00094a80:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00094a84:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094a88:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094a8c:;
    {
        wr8(cpu->r[5] + + 0x3bu, cpu->r[4]);
    }
L_00094a90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000003cu, 0, 0);
    }
L_00094a94:;
    {
        cpu->r[14] = 0x00094a98u; imp_fread(cpu); /* fread */
    }
L_00094a98:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00094a9c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094aa0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094aa4:;
    {
        wr8(cpu->r[5] + + 0x3cu, cpu->r[4]);
    }
L_00094aa8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000003du, 0, 0);
    }
L_00094aac:;
    {
        cpu->r[14] = 0x00094ab0u; imp_fread(cpu); /* fread */
    }
L_00094ab0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00094ab4:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_00094ab8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094abc:;
    {
        wr8(cpu->r[5] + + 0x3du, cpu->r[4]);
    }
L_00094ac0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000049u, 0, 0);
    }
L_00094ac4:;
    {
        cpu->r[14] = 0x00094ac8u; imp_fread(cpu); /* fread */
    }
L_00094ac8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094acc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094ad0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094ad4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000054u, 0, 0);
    }
L_00094ad8:;
    {
        cpu->r[14] = 0x00094adcu; imp_fread(cpu); /* fread */
    }
L_00094adc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00094ae0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094ae4:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094ae8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000003eu, 0, 0);
    }
L_00094aec:;
    {
        cpu->r[14] = 0x00094af0u; imp_fread(cpu); /* fread */
    }
L_00094af0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00094af4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00094af8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094afc:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00094b00:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094b04:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094b08:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00094b0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000004c0u, 0, 0);
    }
L_00094b10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000du, 0, 0);
    }
L_00094b14:;
    {
        cpu->r[14] = 0x00094b18u; imp_fread(cpu); /* fread */
    }
L_00094b18:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00094b1c:;
    {
        cpu->r[2] = 0x00000064u;
    }
L_00094b20:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094b24:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x44u);
    }
L_00094b28:;
    {
        cpu->r[14] = 0x00094b2cu; imp_fread(cpu); /* fread */
    }
L_00094b2c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094b30:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094b34:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094b38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000040u, 0, 0);
    }
L_00094b3c:;
    {
        cpu->r[14] = 0x00094b40u; imp_fread(cpu); /* fread */
    }
L_00094b40:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094b44:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094b48:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094b4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000058u, 0, 0);
    }
L_00094b50:;
    {
        cpu->r[14] = 0x00094b54u; imp_fread(cpu); /* fread */
    }
L_00094b54:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094b58:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094b5c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094b60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000005cu, 0, 0);
    }
L_00094b64:;
    {
        cpu->r[14] = 0x00094b68u; imp_fread(cpu); /* fread */
    }
L_00094b68:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094b6c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094b70:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094b74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000060u, 0, 0);
    }
L_00094b78:;
    {
        cpu->r[14] = 0x00094b7cu; imp_fread(cpu); /* fread */
    }
L_00094b7c:;
    {
        cpu->r[1] = 0x0000001eu;
    }
L_00094b80:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094b84:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094b88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000064u, 0, 0);
    }
L_00094b8c:;
    {
        cpu->r[14] = 0x00094b90u; imp_fread(cpu); /* fread */
    }
L_00094b90:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094b94:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094b98:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094b9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000084u, 0, 0);
    }
L_00094ba0:;
    {
        cpu->r[14] = 0x00094ba4u; imp_fread(cpu); /* fread */
    }
L_00094ba4:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x84u);
    }
L_00094ba8:;
    {
        cpu->r[9] = rd32(cpu->r[6]);
    }
L_00094bac:;
    {
        cpu->r[12] = 0x0000150du;
    }
L_00094bb0:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094bb4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094bb8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094bbc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000088u, 0, 0);
    }
L_00094bc0:;
    {
        wr8(cpu->r[9] + cpu->r[12], cpu->r[14]);
    }
L_00094bc4:;
    {
        cpu->r[14] = 0x00094bc8u; imp_fread(cpu); /* fread */
    }
L_00094bc8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094bcc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094bd0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094bd4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000008cu, 0, 0);
    }
L_00094bd8:;
    {
        cpu->r[9] = rd32(0x00094be0u + + 0xd0u);
    }
L_00094bdc:;
    {
        cpu->r[14] = 0x00094be0u; imp_fread(cpu); /* fread */
    }
L_00094be0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00094be4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00094be8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094bec:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094bf0:;
    {
        uint32_t wb_tmp = cpu->r[0] + - 0x1u;
        wr8(cpu->r[0] + - 0x1u, cpu->r[10]);
        cpu->r[0] = wb_tmp;
    }
L_00094bf4:;
    {
        cpu->r[14] = 0x00094bf8u; imp_fread(cpu); /* fread */
    }
L_00094bf8:;
    {
        cpu->r[12] = rd8(cpu->r[13] + + 0x27u);
    }
L_00094bfc:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094c00:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00094c04:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094c08:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000090u, 0, 0);
    }
L_00094c0c:;
    {
        wr32(cpu->r[5] + + 0x98u, cpu->r[12]);
    }
L_00094c10:;
    {
        cpu->r[9] = add_flags(cpu, 0x00094c18u, cpu->r[9], 0, 0);
    }
L_00094c14:;
    {
        cpu->r[14] = 0x00094c18u; imp_fread(cpu); /* fread */
    }
L_00094c18:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00094c1c:;
    {
        cpu->r[14] = 0x00094c20u; fn_000a04f8(cpu);
    }
L_00094c20:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094c24:;
    {
        cpu->r[2] = 0x00000030u;
    }
L_00094c28:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094c2c:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[0]);
    }
L_00094c30:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000009cu, 0, 0);
    }
L_00094c34:;
    {
        cpu->r[14] = 0x00094c38u; imp_fread(cpu); /* fread */
    }
L_00094c38:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00094c3c:;
    {
        cpu->r[2] = 0x00000030u;
    }
L_00094c40:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094c44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000015cu, 0, 0);
    }
L_00094c48:;
    {
        cpu->r[14] = 0x00094c4cu; imp_fread(cpu); /* fread */
    }
L_00094c4c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00094c50:;
    {
        cpu->r[2] = 0x00000030u;
    }
L_00094c54:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094c58:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000018cu, 0, 0);
    }
L_00094c5c:;
    {
        cpu->r[14] = 0x00094c60u; imp_fread(cpu); /* fread */
    }
L_00094c60:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094c64:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00094c68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000001bcu, 0, 0);
    }
L_00094c6c:;
    {
        cpu->r[2] = 0x00000030u;
    }
L_00094c70:;
    {
        cpu->r[14] = 0x00094c74u; imp_fread(cpu); /* fread */
    }
L_00094c74:;
    {
        cpu->r[3] = rd32(0x00094c7cu + + 0x38u);
    }
L_00094c78:;
    {
        cpu->r[3] = add_flags(cpu, 0x00094c80u, cpu->r[3], 0, 0);
    }
L_00094c7c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00094c80:;
    {
        cpu->r[3] = rd32(0x00094c88u + + 0x30u);
    }
L_00094c84:;
    {
        cpu->r[3] = add_flags(cpu, 0x00094c8cu, cpu->r[3], 0, 0);
    }
L_00094c88:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_00094c8c:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[6] = v;
    }
L_00094c90:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00094c94:;
    {
        cpu->r[10] = rd32(0x00094c9cu + + 0x20u);
    }
L_00094c98:;
    {
        goto L_00094ce4;
    }
L_00094ccc:;
    {
        cpu->r[3] = rd8(cpu->r[12] + + 0x1u);
    }
L_00094cd0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_00094cd4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00094cd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00094d88;
        }
    }
L_00094cdc:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000003cu, 1, 1);
    }
L_00094ce0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00094dcc;
        }
    }
L_00094ce4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1ecu);
    }
L_00094ce8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00094cec:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00094cf0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094cf4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_00094cf8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_00094cfc:;
    {
        cpu->r[14] = 0x00094d00u; imp_fread(cpu); /* fread */
    }
L_00094d00:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1ecu);
    }
L_00094d04:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00094d08:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094d0c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00094d10:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_00094d14:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_00094d18:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00094d1c:;
    {
        cpu->r[14] = 0x00094d20u; imp_fread(cpu); /* fread */
    }
L_00094d20:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1ecu);
    }
L_00094d24:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00094d28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_00094d2c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[4]);
    }
L_00094d30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00094d34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00094ccc;
        }
    }
L_00094d38:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x44u);
    }
L_00094d3c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00094d40:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00094d44:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00094d48:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00094d4c:;
    {
        cpu->r[14] = rd8(cpu->r[14] + cpu->r[8]);
    }
L_00094d50:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 1);
    }
L_00094d54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00094ccc;
        }
    }
L_00094d58:;
    {
        cpu->r[12] = 0x000001f6u;
    }
L_00094d5c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00094d60:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00094d64:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00094d68:;
    {
        cpu->r[14] = 0x00094d6cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00094d6c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1ecu);
    }
L_00094d70:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00094d74:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_00094d78:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_00094d7c:;
    {
        cpu->r[3] = rd8(cpu->r[12] + + 0x1u);
    }
L_00094d80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00094d84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00094cdc;
        }
    }
L_00094d88:;
    {
        cpu->r[12] = rd8(cpu->r[12]);
    }
L_00094d8c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00094d90:;
    {
        cpu->r[14] = rd32(0x00094d98u + - 0xd8u);
    }
L_00094d94:;
    {
        cpu->r[1] = add_flags(cpu, 0x00094d9cu, cpu->r[10], 0, 0);
    }
L_00094d98:;
    {
        cpu->r[2] = rd32(0x00094da0u + - 0xdcu);
    }
L_00094d9c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_00094da0:;
    {
        cpu->r[3] = rd32(0x00094da8u + - 0xe0u);
    }
L_00094da4:;
    {
        cpu->r[14] = add_flags(cpu, 0x00094dacu, cpu->r[14], 0, 0);
    }
L_00094da8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00094db0u, cpu->r[2], 0, 0);
    }
L_00094dac:;
    {
        cpu->r[3] = add_flags(cpu, 0x00094db4u, cpu->r[3], 0, 0);
    }
L_00094db0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00094cdc;
        }
    }
L_00094db4:;
    {
        cpu->r[12] = 0x000001f8u;
    }
L_00094db8:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00094dbc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00094dc0:;
    {
        cpu->r[14] = 0x00094dc4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00094dc4:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000003cu, 1, 1);
    }
L_00094dc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00094ce4;
        }
    }
L_00094dcc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00094dd0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000064u, 1, 1);
    }
L_00094dd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00094c8c;
        }
    }
L_00094dd8:;
    {
        cpu->r[1] = 0x00000f50u;
    }
L_00094ddc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00094de0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094de4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000001f4u, 0, 0);
    }
L_00094de8:;
    {
        cpu->r[14] = 0x00094decu; imp_fread(cpu); /* fread */
    }
L_00094dec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00001140u, 0, 0);
    }
L_00094df0:;
    {
        cpu->r[1] = 0x00000f50u;
    }
L_00094df4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00094df8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094dfc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00094e00:;
    {
        cpu->r[14] = 0x00094e04u; imp_fread(cpu); /* fread */
    }
L_00094e04:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_00094e08:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00094e0c:;
    {
        cpu->r[1] = 0x00000030u;
    }
L_00094e10:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094e14:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00094e18:;
    {
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[14]);
    }
L_00094e1c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00094e20:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00094e24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00008600u, 0, 0);
    }
L_00094e28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000a8u, 0, 0);
    }
L_00094e2c:;
    {
        cpu->r[14] = 0x00094e30u; imp_fread(cpu); /* fread */
    }
L_00094e30:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00094e34:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00094e38:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094e3c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1f0u);
    }
L_00094e40:;
    {
        cpu->r[14] = 0x00094e44u; imp_fread(cpu); /* fread */
    }
L_00094e44:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00094e48:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094e4c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00094e50:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001c00u, 0, 0);
    }
L_00094e54:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094e58:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_00094e5c:;
    {
        cpu->r[14] = 0x00094e60u; imp_fread(cpu); /* fread */
    }
L_00094e60:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00094e64:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094e68:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00094e6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001c00u, 0, 0);
    }
L_00094e70:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094e74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_00094e78:;
    {
        cpu->r[14] = 0x00094e7cu; imp_fread(cpu); /* fread */
    }
L_00094e7c:;
    {
        cpu->r[14] = 0x00094e80u; fn_000a5b24(cpu);
    }
L_00094e80:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00094e84:;
    {
        cpu->r[14] = 0x00094e88u; fn_000a62d0(cpu);
    }
L_00094e88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000820u, 0, 0);
    }
L_00094e8c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094e90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00094e94:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00094e98:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00094e9c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094ea0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[5]; cpu->r[0] = v;
    }
L_00094ea4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00094ea8:;
    {
        cpu->r[14] = 0x00094eacu; imp_fread(cpu); /* fread */
    }
L_00094eac:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000001eu, 1, 1);
    }
L_00094eb0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00094e88;
        }
    }
L_00094eb4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00094eb8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00094ebc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_00094ec0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x94u);
    }
L_00094ec4:;
    {
        cpu->r[4] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00094ec8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00094ecc:;
    {
        cpu->r[14] = 0x00094ed0u; fn_0009fd1c(cpu);
    }
L_00094ed0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00094ed4:;
    {
        cpu->r[14] = 0x00094ed8u; fn_000a062c(cpu);
    }
L_00094ed8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00094edc:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094ee0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094ee4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000014u, 0, 0);
    }
L_00094ee8:;
    {
        cpu->r[14] = 0x00094eecu; imp_fread(cpu); /* fread */
    }
L_00094eec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00094ef0:;
    {
        cpu->r[14] = 0x00094ef4u; imp_ftell(cpu); /* ftell */
    }
L_00094ef4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00094ef8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_00094efc:;
    {
        goto L_00094870;
    }
}

/* _ZN13CGameSettings4SaveEP7__sFILE @ 00094f00 (arm) */
void fn_00094f00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00094f00:;
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
L_00094f04:;
    {
        cpu->r[2] = rd32(0x00094f0cu + + 0x600u);
    }
L_00094f08:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_00094f0c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00094f10:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00094f14:;
    {
        cpu->r[2] = add_flags(cpu, 0x00094f1cu, cpu->r[2], 0, 0);
    }
L_00094f18:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00094f1c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00094f20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00095504;
        }
    }
L_00094f24:;
    {
        cpu->r[3] = rd32(0x00094f2cu + + 0x5e4u);
    }
L_00094f28:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00094f2c:;
    {
        cpu->r[11] = rd32(0x00094f34u + + 0x5e0u);
    }
L_00094f30:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00094f34:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_00094f38:;
    {
        cpu->r[14] = 0x00094f3cu; imp_ftell(cpu); /* ftell */
    }
L_00094f3c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094f40:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00094f44:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094f48:;
    {
        cpu->r[11] = add_flags(cpu, 0x00094f50u, cpu->r[11], 0, 0);
    }
L_00094f4c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000008u, 0, 0);
    }
L_00094f50:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_00094f54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00094f58:;
    {
        cpu->r[14] = 0x00094f5cu; imp_fwrite(cpu); /* fwrite */
    }
L_00094f5c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094f60:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00094f64:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094f68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000024u, 0, 0);
    }
L_00094f6c:;
    {
        cpu->r[14] = 0x00094f70u; imp_fwrite(cpu); /* fwrite */
    }
L_00094f70:;
    {
        cpu->r[12] = rd32(0x00094f78u + + 0x5a0u);
    }
L_00094f74:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094f78:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00094f7c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094f80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000028u, 0, 0);
    }
L_00094f84:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00094f88:;
    {
        cpu->r[14] = 0x00094f8cu; imp_fwrite(cpu); /* fwrite */
    }
L_00094f8c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094f90:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00094f94:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094f98:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000002cu, 0, 0);
    }
L_00094f9c:;
    {
        cpu->r[14] = 0x00094fa0u; imp_fwrite(cpu); /* fwrite */
    }
L_00094fa0:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094fa4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00094fa8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094fac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_00094fb0:;
    {
        cpu->r[14] = 0x00094fb4u; imp_fwrite(cpu); /* fwrite */
    }
L_00094fb4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00094fb8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00094fbc:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094fc0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00094fc4:;
    {
        cpu->r[14] = 0x00094fc8u; imp_fwrite(cpu); /* fwrite */
    }
L_00094fc8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00094fcc:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00094fd0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094fd4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_00094fd8:;
    {
        cpu->r[14] = 0x00094fdcu; imp_fwrite(cpu); /* fwrite */
    }
L_00094fdc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00094fe0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00094fe4:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094fe8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000du, 0, 0);
    }
L_00094fec:;
    {
        cpu->r[14] = 0x00094ff0u; imp_fwrite(cpu); /* fwrite */
    }
L_00094ff0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00094ff4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00094ff8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00094ffc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000eu, 0, 0);
    }
L_00095000:;
    {
        cpu->r[14] = 0x00095004u; imp_fwrite(cpu); /* fwrite */
    }
L_00095004:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00095008:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0009500c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095010:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000fu, 0, 0);
    }
L_00095014:;
    {
        cpu->r[14] = 0x00095018u; imp_fwrite(cpu); /* fwrite */
    }
L_00095018:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009501c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00095020:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095024:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_00095028:;
    {
        cpu->r[14] = 0x0009502cu; imp_fwrite(cpu); /* fwrite */
    }
L_0009502c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00095030:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00095034:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095038:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000011u, 0, 0);
    }
L_0009503c:;
    {
        cpu->r[14] = 0x00095040u; imp_fwrite(cpu); /* fwrite */
    }
L_00095040:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00095044:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00095048:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0009504c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_00095050:;
    {
        cpu->r[14] = 0x00095054u; imp_fwrite(cpu); /* fwrite */
    }
L_00095054:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00095058:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0009505c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095060:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000019u, 0, 0);
    }
L_00095064:;
    {
        cpu->r[14] = 0x00095068u; imp_fwrite(cpu); /* fwrite */
    }
L_00095068:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009506c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00095070:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095074:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000001au, 0, 0);
    }
L_00095078:;
    {
        cpu->r[14] = 0x0009507cu; imp_fwrite(cpu); /* fwrite */
    }
L_0009507c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00095080:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00095084:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095088:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000001bu, 0, 0);
    }
L_0009508c:;
    {
        cpu->r[14] = 0x00095090u; imp_fwrite(cpu); /* fwrite */
    }
L_00095090:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00095094:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00095098:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0009509c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000012u, 0, 0);
    }
L_000950a0:;
    {
        cpu->r[14] = 0x000950a4u; imp_fwrite(cpu); /* fwrite */
    }
L_000950a4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000950a8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000950ac:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000950b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000020u, 0, 0);
    }
L_000950b4:;
    {
        cpu->r[14] = 0x000950b8u; imp_fwrite(cpu); /* fwrite */
    }
L_000950b8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000950bc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000950c0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000950c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000034u, 0, 0);
    }
L_000950c8:;
    {
        cpu->r[14] = 0x000950ccu; imp_fwrite(cpu); /* fwrite */
    }
L_000950cc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000950d0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000950d4:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000950d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000038u, 0, 0);
    }
L_000950dc:;
    {
        cpu->r[14] = 0x000950e0u; imp_fwrite(cpu); /* fwrite */
    }
L_000950e0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000950e4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000950e8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000950ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000039u, 0, 0);
    }
L_000950f0:;
    {
        cpu->r[14] = 0x000950f4u; imp_fwrite(cpu); /* fwrite */
    }
L_000950f4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000950f8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000950fc:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095100:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000003au, 0, 0);
    }
L_00095104:;
    {
        cpu->r[14] = 0x00095108u; imp_fwrite(cpu); /* fwrite */
    }
L_00095108:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009510c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00095110:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095114:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000003bu, 0, 0);
    }
L_00095118:;
    {
        cpu->r[14] = 0x0009511cu; imp_fwrite(cpu); /* fwrite */
    }
L_0009511c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00095120:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00095124:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095128:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000003cu, 0, 0);
    }
L_0009512c:;
    {
        cpu->r[14] = 0x00095130u; imp_fwrite(cpu); /* fwrite */
    }
L_00095130:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00095134:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00095138:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0009513c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000003du, 0, 0);
    }
L_00095140:;
    {
        cpu->r[14] = 0x00095144u; imp_fwrite(cpu); /* fwrite */
    }
L_00095144:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00095148:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_0009514c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095150:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000049u, 0, 0);
    }
L_00095154:;
    {
        cpu->r[14] = 0x00095158u; imp_fwrite(cpu); /* fwrite */
    }
L_00095158:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0009515c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00095160:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095164:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000054u, 0, 0);
    }
L_00095168:;
    {
        cpu->r[14] = 0x0009516cu; imp_fwrite(cpu); /* fwrite */
    }
L_0009516c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00095170:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00095174:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095178:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000003eu, 0, 0);
    }
L_0009517c:;
    {
        cpu->r[14] = 0x00095180u; imp_fwrite(cpu); /* fwrite */
    }
L_00095180:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00095184:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00095188:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0009518c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00095190:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00095194:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095198:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0009519c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000004c0u, 0, 0);
    }
L_000951a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000du, 0, 0);
    }
L_000951a4:;
    {
        cpu->r[14] = 0x000951a8u; imp_fwrite(cpu); /* fwrite */
    }
L_000951a8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000951ac:;
    {
        cpu->r[2] = 0x00000064u;
    }
L_000951b0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000951b4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x44u);
    }
L_000951b8:;
    {
        cpu->r[14] = 0x000951bcu; imp_fwrite(cpu); /* fwrite */
    }
L_000951bc:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000951c0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000951c4:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000951c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000040u, 0, 0);
    }
L_000951cc:;
    {
        cpu->r[14] = 0x000951d0u; imp_fwrite(cpu); /* fwrite */
    }
L_000951d0:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000951d4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000951d8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000951dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000058u, 0, 0);
    }
L_000951e0:;
    {
        cpu->r[14] = 0x000951e4u; imp_fwrite(cpu); /* fwrite */
    }
L_000951e4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000951e8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000951ec:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000951f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000005cu, 0, 0);
    }
L_000951f4:;
    {
        cpu->r[14] = 0x000951f8u; imp_fwrite(cpu); /* fwrite */
    }
L_000951f8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000951fc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00095200:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095204:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000060u, 0, 0);
    }
L_00095208:;
    {
        cpu->r[14] = 0x0009520cu; imp_fwrite(cpu); /* fwrite */
    }
L_0009520c:;
    {
        cpu->r[1] = 0x0000001eu;
    }
L_00095210:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00095214:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095218:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000064u, 0, 0);
    }
L_0009521c:;
    {
        cpu->r[14] = 0x00095220u; imp_fwrite(cpu); /* fwrite */
    }
L_00095220:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00095224:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00095228:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0009522c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000084u, 0, 0);
    }
L_00095230:;
    {
        cpu->r[14] = 0x00095234u; imp_fwrite(cpu); /* fwrite */
    }
L_00095234:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00095238:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009523c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095240:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000088u, 0, 0);
    }
L_00095244:;
    {
        cpu->r[14] = 0x00095248u; imp_fwrite(cpu); /* fwrite */
    }
L_00095248:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0009524c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00095250:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095254:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000008cu, 0, 0);
    }
L_00095258:;
    {
        cpu->r[14] = 0x0009525cu; imp_fwrite(cpu); /* fwrite */
    }
L_0009525c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x98u);
    }
L_00095260:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00095264:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00095268:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0009526c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095270:;
    {
        uint32_t wb_tmp = cpu->r[0] + - 0x1u;
        wr8(cpu->r[0] + - 0x1u, cpu->r[12]);
        cpu->r[0] = wb_tmp;
    }
L_00095274:;
    {
        cpu->r[14] = 0x00095278u; imp_fwrite(cpu); /* fwrite */
    }
L_00095278:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0009527c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00095280:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095284:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000090u, 0, 0);
    }
L_00095288:;
    {
        cpu->r[14] = 0x0009528cu; imp_fwrite(cpu); /* fwrite */
    }
L_0009528c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00095290:;
    {
        cpu->r[2] = 0x00000030u;
    }
L_00095294:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095298:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000009cu, 0, 0);
    }
L_0009529c:;
    {
        cpu->r[14] = 0x000952a0u; imp_fwrite(cpu); /* fwrite */
    }
L_000952a0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000952a4:;
    {
        cpu->r[2] = 0x00000030u;
    }
L_000952a8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000952ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000015cu, 0, 0);
    }
L_000952b0:;
    {
        cpu->r[14] = 0x000952b4u; imp_fwrite(cpu); /* fwrite */
    }
L_000952b4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000952b8:;
    {
        cpu->r[2] = 0x00000030u;
    }
L_000952bc:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000952c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000018cu, 0, 0);
    }
L_000952c4:;
    {
        cpu->r[14] = 0x000952c8u; imp_fwrite(cpu); /* fwrite */
    }
L_000952c8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000952cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000001bcu, 0, 0);
    }
L_000952d0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000952d4:;
    {
        cpu->r[2] = 0x00000030u;
    }
L_000952d8:;
    {
        cpu->r[14] = 0x000952dcu; imp_fwrite(cpu); /* fwrite */
    }
L_000952dc:;
    {
        cpu->r[3] = rd32(0x000952e4u + + 0x238u);
    }
L_000952e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000952e8u, cpu->r[3], 0, 0);
    }
L_000952e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000952e8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000952ec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000952f0:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[6] = v;
    }
L_000952f4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000952f8:;
    {
        cpu->r[9] = rd32(0x00095300u + + 0x220u);
    }
L_000952fc:;
    {
        cpu->r[10] = add_flags(cpu, 0x00095304u, cpu->r[2], 0, 0);
    }
L_00095300:;
    {
        goto L_00095350;
    }
L_00095304:;
    {
        cpu->r[3] = rd8(cpu->r[12] + + 0x1u);
    }
L_00095308:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0009530c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000953b0;
        }
    }
L_00095310:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00095314:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00095318:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0009531c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095320:;
    {
        cpu->r[14] = 0x00095324u; imp_fwrite(cpu); /* fwrite */
    }
L_00095324:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1ecu);
    }
L_00095328:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009532c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095330:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00095334:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_00095338:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_0009533c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_00095340:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00095344:;
    {
        cpu->r[14] = 0x00095348u; imp_fwrite(cpu); /* fwrite */
    }
L_00095348:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000003cu, 1, 1);
    }
L_0009534c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000953fc;
        }
    }
L_00095350:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1ecu);
    }
L_00095354:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00095358:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_0009535c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[4]);
    }
L_00095360:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00095364:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00095304;
        }
    }
L_00095368:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x44u);
    }
L_0009536c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00095370:;
    {
        cpu->r[3] = rd32(0x00095378u + + 0x1acu);
    }
L_00095374:;
    {
        cpu->r[2] = add_flags(cpu, 0x0009537cu, cpu->r[9], 0, 0);
    }
L_00095378:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0009537c:;
    {
        cpu->r[14] = rd8(cpu->r[14] + cpu->r[8]);
    }
L_00095380:;
    {
        cpu->r[3] = add_flags(cpu, 0x00095388u, cpu->r[3], 0, 0);
    }
L_00095384:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 1);
    }
L_00095388:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00095304;
        }
    }
L_0009538c:;
    {
        cpu->r[12] = 0x0000016au;
    }
L_00095390:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_00095394:;
    {
        cpu->r[14] = 0x00095398u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00095398:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1ecu);
    }
L_0009539c:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000953a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_000953a4:;
    {
        cpu->r[3] = rd8(cpu->r[12] + + 0x1u);
    }
L_000953a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000953ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00095310;
        }
    }
L_000953b0:;
    {
        cpu->r[14] = rd8(cpu->r[12]);
    }
L_000953b4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000953b8:;
    {
        cpu->r[1] = rd32(0x000953c0u + + 0x168u);
    }
L_000953bc:;
    {
        cpu->r[2] = rd32(0x000953c4u + + 0x168u);
    }
L_000953c0:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 1);
    }
L_000953c4:;
    {
        cpu->r[3] = rd32(0x000953ccu + + 0x164u);
    }
L_000953c8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000953d0u, cpu->r[1], 0, 0);
    }
L_000953cc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000953d4u, cpu->r[2], 0, 0);
    }
L_000953d0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000953d8u, cpu->r[3], 0, 0);
    }
L_000953d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00095310;
        }
    }
L_000953d8:;
    {
        cpu->r[12] = 0x0000016cu;
    }
L_000953dc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000953e0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000953e4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000953e8:;
    {
        cpu->r[14] = 0x000953ecu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000953ec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1ecu);
    }
L_000953f0:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000953f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_000953f8:;
    {
        goto L_00095310;
    }
L_000953fc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00095400:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000064u, 1, 1);
    }
L_00095404:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000952ec;
        }
    }
L_00095408:;
    {
        cpu->r[1] = 0x00000f50u;
    }
L_0009540c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00095410:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095414:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000001f4u, 0, 0);
    }
L_00095418:;
    {
        cpu->r[14] = 0x0009541cu; imp_fwrite(cpu); /* fwrite */
    }
L_0009541c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00001140u, 0, 0);
    }
L_00095420:;
    {
        cpu->r[1] = 0x00000f50u;
    }
L_00095424:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00095428:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0009542c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00095430:;
    {
        cpu->r[14] = 0x00095434u; imp_fwrite(cpu); /* fwrite */
    }
L_00095434:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00095438:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0009543c:;
    {
        cpu->r[1] = 0x00000030u;
    }
L_00095440:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00095444:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00095448:;
    {
        cpu->r[6] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0009544c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095450:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00095454:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00008600u, 0, 0);
    }
L_00095458:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000a8u, 0, 0);
    }
L_0009545c:;
    {
        cpu->r[14] = 0x00095460u; imp_fwrite(cpu); /* fwrite */
    }
L_00095460:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00095464:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00095468:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0009546c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1f0u);
    }
L_00095470:;
    {
        cpu->r[14] = 0x00095474u; imp_fwrite(cpu); /* fwrite */
    }
L_00095474:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00095478:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0009547c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00095480:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001c00u, 0, 0);
    }
L_00095484:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00095488:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_0009548c:;
    {
        cpu->r[14] = 0x00095490u; imp_fwrite(cpu); /* fwrite */
    }
L_00095490:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00095494:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00095498:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009549c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001c00u, 0, 0);
    }
L_000954a0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000954a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_000954a8:;
    {
        cpu->r[14] = 0x000954acu; imp_fwrite(cpu); /* fwrite */
    }
L_000954ac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000954b0:;
    {
        cpu->r[14] = 0x000954b4u; fn_000a626c(cpu);
    }
L_000954b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000820u, 0, 0);
    }
L_000954b8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000954bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000954c0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000954c4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000954c8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000954cc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[5]; cpu->r[0] = v;
    }
L_000954d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000954d4:;
    {
        cpu->r[14] = 0x000954d8u; imp_fwrite(cpu); /* fwrite */
    }
L_000954d8:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000001eu, 1, 1);
    }
L_000954dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000954b4;
        }
    }
L_000954e0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000954e4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000954e8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000954ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000014u, 0, 0);
    }
L_000954f0:;
    {
        cpu->r[14] = 0x000954f4u; imp_fwrite(cpu); /* fwrite */
    }
L_000954f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000954f8:;
    {
        cpu->r[14] = 0x000954fcu; imp_ftell(cpu); /* ftell */
    }
L_000954fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00095500:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_00095504:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00095508:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009550cu)) return;
    }
}

/* _ZN13CGameSettings7ReleaseEv @ 00095534 (arm) */
void fn_00095534(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095534:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00095538:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0009553c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x44u);
    }
L_00095540:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00095544:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00095554;
        }
    }
L_00095548:;
    {
        cpu->r[14] = 0x0009554cu; fn_0018ba60(cpu);
    }
L_0009554c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00095550:;
    {
        wr32(cpu->r[5] + + 0x44u, cpu->r[3]);
    }
L_00095554:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x1ecu);
    }
L_00095558:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0009555c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000955a4;
        }
    }
L_00095560:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00095564:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_00095568:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[4]);
    }
L_0009556c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00095570:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00095580;
        }
    }
L_00095574:;
    {
        cpu->r[14] = 0x00095578u; fn_0018ba60(cpu);
    }
L_00095578:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x1ecu);
    }
L_0009557c:;
    {
        wr32(cpu->r[2] + cpu->r[4], cpu->r[6]);
    }
L_00095580:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00095584:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000190u, 1, 1);
    }
L_00095588:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00095568;
        }
    }
L_0009558c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00095590:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000955a4;
        }
    }
L_00095594:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00095598:;
    {
        cpu->r[14] = 0x0009559cu; fn_0018ba60(cpu);
    }
L_0009559c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000955a0:;
    {
        wr32(cpu->r[5] + + 0x1ecu, cpu->r[3]);
    }
L_000955a4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1f0u);
    }
L_000955a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000955ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000955b0u)) return;
        }
    }
L_000955b0:;
    {
        cpu->r[14] = 0x000955b4u; fn_0018ba60(cpu);
    }
L_000955b4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000955b8:;
    {
        wr32(cpu->r[5] + + 0x1f0u, cpu->r[3]);
    }
L_000955bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000955c0u)) return;
    }
}

/* _ZN13CGameSettings4InitEv @ 000955c0 (arm) */
void fn_000955c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000955c0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000955c4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000955c8:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_000955cc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000955d0:;
    {
        cpu->r[14] = 0x000955d4u; imp__Znaj(cpu); /* _Znaj */
    }
L_000955d4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000955d8:;
    {
        cpu->r[2] = 0x00000064u;
    }
L_000955dc:;
    {
        wr32(cpu->r[5] + + 0x44u, cpu->r[0]);
    }
L_000955e0:;
    {
        cpu->r[14] = 0x000955e4u; imp_memset(cpu); /* memset */
    }
L_000955e4:;
    {
        cpu->r[0] = 0x00000190u;
    }
L_000955e8:;
    {
        cpu->r[14] = 0x000955ecu; imp__Znaj(cpu); /* _Znaj */
    }
L_000955ec:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000955f0:;
    {
        wr32(cpu->r[5] + + 0x1ecu, cpu->r[0]);
    }
L_000955f4:;
    {
        goto L_000955fc;
    }
L_000955f8:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x1ecu);
    }
L_000955fc:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_00095600:;
    {
        cpu->r[14] = 0x00095604u; imp__Znaj(cpu); /* _Znaj */
    }
L_00095604:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[0]);
    }
L_00095608:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0009560c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000190u, 1, 1);
    }
L_00095610:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000955f8;
        }
    }
L_00095614:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_00095618:;
    {
        cpu->r[14] = 0x0009561cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0009561c:;
    {
        wr32(cpu->r[5] + + 0x1f0u, cpu->r[0]);
    }
L_00095620:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00095624:;
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
L_00095628:;
    {
        return fn_00094438(cpu);
    }
}

/* _ZN9CProperty17GoToFirstPropertyEv @ 0009562c (arm) */
void fn_0009562c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009562c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_00095630:;
    {
        cpu->r[4] = rd32(0x00095638u + + 0x84u);
    }
L_00095634:;
    {
        cpu->r[3] = rd32(0x0009563cu + + 0x84u);
    }
L_00095638:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009563c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00095644u, cpu->r[4], 0, 0);
    }
L_00095640:;
    {
        cpu->r[5] = rd32(0x00095648u + + 0x7cu);
    }
L_00095644:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00095648:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009564c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00095650:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00095654:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_00095658:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000956a4;
        }
    }
L_0009565c:;
    {
        cpu->r[3] = rd32(0x00095664u + + 0x64u);
    }
L_00095660:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00095664:;
    {
        cpu->r[3] = rd32(0x0009566cu + + 0x60u);
    }
L_00095668:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_0009566c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00095670:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00095674:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_00095678:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
    }
L_0009567c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00095680:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00095698;
        }
    }
L_00095684:;
    {
        goto L_000956b0;
    }
L_00095688:;
    {
        cpu->r[3] = rd32(cpu->r[12] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0009568c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
    }
L_00095690:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00095694:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000956b0;
        }
    }
L_00095698:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0009569c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000956a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00095688;
        }
    }
L_000956a4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000956a8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_000956ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000956b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000956b4:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_000956b8:;
    {
        goto L_000956a8;
    }
}

/* _ZN9CProperty12NextPropertyEb @ 000956d0 (arm) */
void fn_000956d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000956d0:;
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
L_000956d4:;
    {
        cpu->r[5] = rd32(0x000956dcu + + 0x9cu);
    }
L_000956d8:;
    {
        cpu->r[9] = rd32(0x000956e0u + + 0x9cu);
    }
L_000956dc:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000956e0:;
    {
        cpu->r[3] = rd32(0x000956e8u + + 0x98u);
    }
L_000956e4:;
    {
        cpu->r[5] = add_flags(cpu, 0x000956ecu, cpu->r[5], 0, 0);
    }
L_000956e8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000956ec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000956f0:;
    {
        cpu->r[6] = rd32(cpu->r[7]);
    }
L_000956f4:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_000956f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_000956fc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00095700:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00095704:;
    {
        cpu->r[14] = 0x00095708u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00095708:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0009570c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00095710:;
    {
        wr32(cpu->r[7], cpu->r[1]);
    }
L_00095714:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00095770;
        }
    }
L_00095718:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0009571c:;
    {
        cpu->r[1] = rd32(0x00095724u + + 0x60u);
    }
L_00095720:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00095724:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00095728:;
    {
        cpu->r[1] = rd32(0x00095730u + + 0x58u);
    }
L_0009572c:;
    {
        cpu->r[7] = rd32(cpu->r[0]);
    }
L_00095730:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00095734:;
    {
        cpu->r[10] = rd32(cpu->r[1]);
    }
L_00095738:;
    {
        goto L_00095748;
    }
L_0009573c:;
    {
        cpu->r[14] = 0x00095740u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00095740:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00095744:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00095748:;
    {
        cpu->r[12] = rd32(cpu->r[7] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0009574c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_00095750:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00095754:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0xcu);
    }
L_00095758:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[10], 1, 1);
    }
L_0009575c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00095768;
        }
    }
L_00095760:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00095764:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009573c;
        }
    }
L_00095768:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0009576c:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_00095770:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00095774:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00095778u)) return;
    }
}

/* _ZN9CProperty12PrevPropertyEb @ 0009578c (arm) */
void fn_0009578c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009578c:;
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
L_00095790:;
    {
        cpu->r[5] = rd32(0x00095798u + + 0x9cu);
    }
L_00095794:;
    {
        cpu->r[9] = rd32(0x0009579cu + + 0x9cu);
    }
L_00095798:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0009579c:;
    {
        cpu->r[3] = rd32(0x000957a4u + + 0x98u);
    }
L_000957a0:;
    {
        cpu->r[5] = add_flags(cpu, 0x000957a8u, cpu->r[5], 0, 0);
    }
L_000957a4:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000957a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000957ac:;
    {
        cpu->r[6] = rd32(cpu->r[7]);
    }
L_000957b0:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_000957b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_000957b8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000957bc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000957c0:;
    {
        cpu->r[14] = 0x000957c4u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000957c4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000957c8:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000957cc:;
    {
        wr32(cpu->r[7], cpu->r[1]);
    }
L_000957d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009582c;
        }
    }
L_000957d4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000957d8:;
    {
        cpu->r[1] = rd32(0x000957e0u + + 0x60u);
    }
L_000957dc:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_000957e0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000957e4:;
    {
        cpu->r[1] = rd32(0x000957ecu + + 0x58u);
    }
L_000957e8:;
    {
        cpu->r[7] = rd32(cpu->r[0]);
    }
L_000957ec:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000957f0:;
    {
        cpu->r[10] = rd32(cpu->r[1]);
    }
L_000957f4:;
    {
        goto L_00095804;
    }
L_000957f8:;
    {
        cpu->r[14] = 0x000957fcu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000957fc:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00095800:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00095804:;
    {
        cpu->r[12] = rd32(cpu->r[7] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00095808:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_0009580c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00095810:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0xcu);
    }
L_00095814:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[10], 1, 1);
    }
L_00095818:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00095824;
        }
    }
L_0009581c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00095820:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000957f8;
        }
    }
L_00095824:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00095828:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_0009582c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00095830:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00095834u)) return;
    }
}

/* _ZN9CProperty10IncCurrentEv @ 00095848 (arm) */
void fn_00095848(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095848:;
    {
        cpu->r[3] = rd32(0x00095850u + + 0x40u);
    }
L_0009584c:;
    {
        cpu->r[1] = rd32(0x00095854u + + 0x40u);
    }
L_00095850:;
    {
        cpu->r[2] = rd32(0x00095858u + + 0x40u);
    }
L_00095854:;
    {
        cpu->r[3] = add_flags(cpu, 0x0009585cu, cpu->r[3], 0, 0);
    }
L_00095858:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0009585c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00095860:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00095864:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00095868:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0009586c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00095870:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_00095874:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x1cu);
    }
L_00095878:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0009587c:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00095880:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00095884:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_00095888:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3], cpu->r[2]);
        }
    }
L_0009588c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CProperty10DecCurrentEv @ 0009589c (arm) */
void fn_0009589c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009589c:;
    {
        cpu->r[3] = rd32(0x000958a4u + + 0x40u);
    }
L_000958a0:;
    {
        cpu->r[1] = rd32(0x000958a8u + + 0x40u);
    }
L_000958a4:;
    {
        cpu->r[2] = rd32(0x000958acu + + 0x40u);
    }
L_000958a8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000958b0u, cpu->r[3], 0, 0);
    }
L_000958ac:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000958b0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000958b4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000958b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000958bc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000958c0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000958c4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x14u);
    }
L_000958c8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x18u);
    }
L_000958cc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_000958d0:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_000958d4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000958d8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_000958dc:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[3], cpu->r[2]);
        }
    }
L_000958e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CProperty3IncEi @ 000958f0 (arm) */
void fn_000958f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000958f0:;
    {
        cpu->r[3] = rd32(0x000958f8u + + 0x34u);
    }
L_000958f4:;
    {
        cpu->r[2] = rd32(0x000958fcu + + 0x34u);
    }
L_000958f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00095900u, cpu->r[3], 0, 0);
    }
L_000958fc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00095900:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00095904:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_00095908:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0009590c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_00095910:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x1cu);
    }
L_00095914:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00095918:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_0009591c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00095920:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_00095924:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3], cpu->r[2]);
        }
    }
L_00095928:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CProperty3DecEi @ 00095934 (arm) */
void fn_00095934(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095934:;
    {
        cpu->r[3] = rd32(0x0009593cu + + 0x34u);
    }
L_00095938:;
    {
        cpu->r[2] = rd32(0x00095940u + + 0x34u);
    }
L_0009593c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00095944u, cpu->r[3], 0, 0);
    }
L_00095940:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00095944:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00095948:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0009594c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00095950:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x14u);
    }
L_00095954:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x18u);
    }
L_00095958:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_0009595c:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00095960:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00095964:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_00095968:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[3], cpu->r[2]);
        }
    }
L_0009596c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CProperty14GetCurrentPropEv @ 00095978 (arm) */
void fn_00095978(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095978:;
    {
        cpu->r[3] = rd32(0x00095980u + + 0x20u);
    }
L_0009597c:;
    {
        cpu->r[1] = rd32(0x00095984u + + 0x20u);
    }
L_00095980:;
    {
        cpu->r[2] = rd32(0x00095988u + + 0x20u);
    }
L_00095984:;
    {
        cpu->r[3] = add_flags(cpu, 0x0009598cu, cpu->r[3], 0, 0);
    }
L_00095988:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0009598c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00095990:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00095994:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00095998:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0009599c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CProperty7GetPropEi @ 000959ac (arm) */
void fn_000959ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000959ac:;
    {
        cpu->r[3] = rd32(0x000959b4u + + 0x14u);
    }
L_000959b0:;
    {
        cpu->r[2] = rd32(0x000959b8u + + 0x14u);
    }
L_000959b4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000959bcu, cpu->r[3], 0, 0);
    }
L_000959b8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000959bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000959c0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_000959c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CProperty12NextCategoryEv @ 000959d0 (arm) */
void fn_000959d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000959d0:;
    {
        cpu->r[3] = rd32(0x000959d8u + + 0x2cu);
    }
L_000959d4:;
    {
        cpu->r[2] = rd32(0x000959dcu + + 0x2cu);
    }
L_000959d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000959e0u, cpu->r[3], 0, 0);
    }
L_000959dc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000959e0:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000959e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000005u, 0, 0);
    }
L_000959e8:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000959ec:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 30u, &shc); cpu->r[2] = v;
    }
L_000959f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000959f4:;
    {
        uint32_t v = cpu->r[0] & 0x00000003u; cpu->r[0] = v;
    }
L_000959f8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_000959fc:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00095a00:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CProperty12PrevCategoryEv @ 00095a0c (arm) */
void fn_00095a0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095a0c:;
    {
        cpu->r[3] = rd32(0x00095a14u + + 0x2cu);
    }
L_00095a10:;
    {
        cpu->r[2] = rd32(0x00095a18u + + 0x2cu);
    }
L_00095a14:;
    {
        cpu->r[3] = add_flags(cpu, 0x00095a1cu, cpu->r[3], 0, 0);
    }
L_00095a18:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00095a1c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00095a20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_00095a24:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00095a28:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 30u, &shc); cpu->r[2] = v;
    }
L_00095a2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_00095a30:;
    {
        uint32_t v = cpu->r[0] & 0x00000003u; cpu->r[0] = v;
    }
L_00095a34:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_00095a38:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00095a3c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CProperty22GetCurrentCategoryNameEv @ 00095a48 (arm) */
void fn_00095a48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095a48:;
    {
        cpu->r[3] = rd32(0x00095a50u + + 0x34u);
    }
L_00095a4c:;
    {
        cpu->r[2] = rd32(0x00095a54u + + 0x34u);
    }
L_00095a50:;
    {
        cpu->r[3] = add_flags(cpu, 0x00095a58u, cpu->r[3], 0, 0);
    }
L_00095a54:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00095a58:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00095a5c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_00095a60:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00095a74;
        }
    }
L_00095a64:;
    {
        cpu->r[1] = rd32(0x00095a6cu + + 0x20u);
    }
L_00095a68:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00095a6c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00095a70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00095a74:;
    {
        cpu->r[2] = rd32(0x00095a7cu + + 0x10u);
    }
L_00095a78:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00095a7c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00095a80:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CProperty15AddDisplayValueEPKcPi @ 00095a90 (arm) */
void fn_00095a90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095a90:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CProperty18RemoveDisplayValueEPi @ 00095a94 (arm) */
void fn_00095a94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095a94:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CProperty24UpdateEditablePropertiesEv @ 00095a98 (arm) */
void fn_00095a98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095a98:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CProperty22DrawEditablePropertiesEv @ 00095a9c (arm) */
void fn_00095a9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095a9c:;
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
L_00095aa0:;
    {
        cpu->r[4] = rd32(0x00095aa8u + + 0x28cu);
    }
L_00095aa4:;
    {
        cpu->r[3] = rd32(0x00095aacu + + 0x28cu);
    }
L_00095aa8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000011cu, 1, 0);
    }
L_00095aac:;
    {
        cpu->r[4] = add_flags(cpu, 0x00095ab4u, cpu->r[4], 0, 0);
    }
L_00095ab0:;
    {
        cpu->r[8] = rd32(0x00095ab8u + + 0x284u);
    }
L_00095ab4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00095ab8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_00095abc:;
    {
        cpu->r[2] = rd8(cpu->r[2]);
    }
L_00095ac0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00095ac4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00095ac8:;
    {
        wr32(cpu->r[13] + + 0x114u, cpu->r[3]);
    }
L_00095acc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00095cd0;
        }
    }
L_00095ad0:;
    {
        cpu->r[3] = rd32(0x00095ad8u + + 0x268u);
    }
L_00095ad4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00095ad8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00095adc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00095ae0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00095cd0;
        }
    }
L_00095ae4:;
    {
        cpu->r[14] = 0x00095ae8u; fn_00095978(cpu);
    }
L_00095ae8:;
    {
        cpu->r[3] = rd32(0x00095af0u + + 0x254u);
    }
L_00095aec:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00095af0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00095af4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00095af8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00095afc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00095cec;
        }
    }
L_00095b00:;
    {
        cpu->r[5] = rd32(0x00095b08u + + 0x240u);
    }
L_00095b04:;
    {
        cpu->r[3] = rd32(0x00095b0cu + + 0x240u);
    }
L_00095b08:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_00095b0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00095b10:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00095b14:;
    {
        cpu->r[14] = 0x00095b18u; fn_00096a08(cpu);
    }
L_00095b18:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00095b1c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00095b20:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00095b24:;
    {
        cpu->r[14] = 0x00095b28u; fn_0018aa44(cpu);
    }
L_00095b28:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00095b2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00095cd0;
        }
    }
L_00095b30:;
    {
        cpu->r[14] = rd32(0x00095b38u + + 0x218u);
    }
L_00095b34:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00095b38:;
    {
        cpu->r[3] = rd32(0x00095b40u + + 0x214u);
    }
L_00095b3c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00095b40:;
    {
        cpu->r[12] = rd32(0x00095b48u + + 0x210u);
    }
L_00095b44:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00095b48:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_00095b4c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00095b50:;
    {
        cpu->r[14] = rd32(0x00095b58u + + 0x204u);
    }
L_00095b54:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00095b58:;
    {
        cpu->r[3] = rd32(0x00095b60u + + 0x200u);
    }
L_00095b5c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_00095b60:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_00095b64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00095b68:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00095b6c:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_00095b70:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00095b74:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00095b78:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_00095b7c:;
    {
        cpu->r[11] = rd32(cpu->r[10]);
    }
L_00095b80:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00095b84:;
    {
        cpu->r[14] = 0x00095b88u; fn_0012fa2c(cpu);
    }
L_00095b88:;
    {
        cpu->r[14] = 0x00095b8cu; fn_00095a48(cpu);
    }
L_00095b8c:;
    {
        cpu->r[1] = rd32(0x00095b94u + + 0x1d0u);
    }
L_00095b90:;
    {
        cpu->r[1] = add_flags(cpu, 0x00095b98u, cpu->r[1], 0, 0);
    }
L_00095b94:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00095b98:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00095b9c:;
    {
        cpu->r[14] = 0x00095ba0u; imp_sprintf(cpu); /* sprintf */
    }
L_00095ba0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00095ba4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00095ba8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00095bac:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00095bb0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00095bb4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00095bb8:;
    {
        cpu->r[14] = 0x00095bbcu; fn_000ad714(cpu);
    }
L_00095bbc:;
    {
        cpu->r[3] = rd32(0x00095bc4u + + 0x1a4u);
    }
L_00095bc0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00095bc4:;
    {
        cpu->r[1] = rd32(0x00095bccu + + 0x1a0u);
    }
L_00095bc8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00095bcc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00095bd0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00095bd8u, cpu->r[1], 0, 0);
    }
L_00095bd4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x8u);
    }
L_00095bd8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00095bdc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_00095be0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00095be4:;
    {
        cpu->r[14] = 0x00095be8u; imp_sprintf(cpu); /* sprintf */
    }
L_00095be8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00095bec:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00095bf0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00095bf4:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00095bf8:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00095bfc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00095c00:;
    {
        cpu->r[14] = 0x00095c04u; fn_000ad714(cpu);
    }
L_00095c04:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00095c08:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00095c0c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00095c10:;
    {
        cpu->r[1] = rd32(0x00095c18u + + 0x158u);
    }
L_00095c14:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00095c18:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
    }
L_00095c1c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00095c24u, cpu->r[1], 0, 0);
    }
L_00095c20:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00095c24:;
    {
        cpu->r[14] = 0x00095c28u; imp_sprintf(cpu); /* sprintf */
    }
L_00095c28:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00095c2c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00095c30:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00095c34:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00095c38:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00095c3c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00095c40:;
    {
        cpu->r[14] = 0x00095c44u; fn_000ad714(cpu);
    }
L_00095c44:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00095c48:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00095c4c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00095c50:;
    {
        cpu->r[1] = rd32(0x00095c58u + + 0x11cu);
    }
L_00095c54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_00095c58:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_00095c5c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00095c60:;
    {
        cpu->r[1] = add_flags(cpu, 0x00095c68u, cpu->r[1], 0, 0);
    }
L_00095c64:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x10u);
    }
L_00095c68:;
    {
        cpu->r[14] = 0x00095c6cu; imp_sprintf(cpu); /* sprintf */
    }
L_00095c6c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00095c70:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00095c74:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00095c78:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00095c7c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00095c80:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00095c84:;
    {
        cpu->r[14] = 0x00095c88u; fn_000ad714(cpu);
    }
L_00095c88:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x1cu);
    }
L_00095c8c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00095c90:;
    {
        cpu->r[10] = rd32(cpu->r[10]);
    }
L_00095c94:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00095c98:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x14u);
    }
L_00095c9c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_00095ca0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x18u);
    }
L_00095ca4:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_00095ca8:;
    {
        cpu->r[1] = rd32(0x00095cb0u + + 0xc8u);
    }
L_00095cac:;
    {
        cpu->r[1] = add_flags(cpu, 0x00095cb4u, cpu->r[1], 0, 0);
    }
L_00095cb0:;
    {
        cpu->r[14] = 0x00095cb4u; imp_sprintf(cpu); /* sprintf */
    }
L_00095cb4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00095cb8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00095cbc:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00095cc0:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00095cc4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00095cc8:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00095ccc:;
    {
        cpu->r[14] = 0x00095cd0u; fn_000ad714(cpu);
    }
L_00095cd0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_00095cd4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x114u);
    }
L_00095cd8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00095cdc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00095ce0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00095d30;
        }
    }
L_00095ce4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000011cu, 0, 0);
    }
L_00095ce8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00095cecu)) return;
    }
L_00095cec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00095cf0:;
    {
        cpu->r[14] = 0x00095cf4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00095cf4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00095cf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00095b00;
        }
    }
L_00095cfc:;
    {
        cpu->r[5] = rd32(0x00095d04u + + 0x44u);
    }
L_00095d00:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00095d04:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00095d08:;
    {
        cpu->r[14] = 0x00095d0cu; fn_0018aa20(cpu);
    }
L_00095d0c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00095d10:;
    {
        cpu->r[14] = 0x00095d14u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00095d14:;
    {
        cpu->r[3] = rd32(0x00095d1cu + + 0x60u);
    }
L_00095d18:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00095d1c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00095d20:;
    {
        cpu->r[3] = rd32(0x00095d28u + + 0x58u);
    }
L_00095d24:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00095d28:;
    {
        cpu->r[14] = 0x00095d2cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00095d2c:;
    {
        goto L_00095b04;
    }
L_00095d30:;
    {
        cpu->r[14] = 0x00095d34u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_00095d34:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[11] & shifter(cpu->r[4], 4, 18u, &shc); cpu->r[4] = v;
        set_nz(cpu, v);
        }
    }
L_00095d38:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[8], 4, (cpu->r[6] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_00095d3c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_00095d40:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 2, (cpu->r[4] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_00095d44:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr64(cpu->r[0], ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_00095d48:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 4, 9u, &shc); cpu->r[0] = v;
        }
    }
L_00095d4c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_00095d50:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 4, 22u, &shc); cpu->r[0] = v;
        }
    }
L_00095d54:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 3, 15u, &shc); cpu->r[0] = v;
        }
    }
L_00095d58:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr16(cpu->r[0], cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_00095d5c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[8], 2, (cpu->r[4] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_00095d60:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 16u, &shc); cpu->r[0] = v;
        }
    }
L_00095d64:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[8]);
        cpu->r[8] = (uint32_t)(int32_t)s16(cpu->r[7]);
        cpu->r[7] = wb_tmp;
        }
    }
L_00095d68:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 1, 23u, &shc); cpu->r[0] = v;
        }
    }
L_00095d6c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 1, 17u, &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_00095d70:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 2, 17u, &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_00095d74:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 1, 16u, &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_00095d78:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 2, 16u, &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_00095d7c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr16(cpu->r[0], cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_00095d80:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 2, 16u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN9CProperty13ReleaseMemoryEv @ 00095d84 (arm) */
void fn_00095d84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095d84:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00095d88:;
    {
        cpu->r[5] = rd32(0x00095d90u + + 0x88u);
    }
L_00095d8c:;
    {
        cpu->r[6] = rd32(0x00095d94u + + 0x88u);
    }
L_00095d90:;
    {
        cpu->r[5] = add_flags(cpu, 0x00095d98u, cpu->r[5], 0, 0);
    }
L_00095d94:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00095d98:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00095d9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00095da0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00095e10;
        }
    }
L_00095da4:;
    {
        cpu->r[8] = rd32(0x00095dacu + + 0x74u);
    }
L_00095da8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00095dac:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00095db0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00095db4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00095db8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00095dbc:;
    {
        cpu->r[14] = 0x00095dc0u; fn_0018ba20(cpu);
    }
L_00095dc0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00095dc4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00095dc8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00095dcc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00095db0;
        }
    }
L_00095dd0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00095dd4:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00095dd8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00095ddc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00095dec;
        }
    }
L_00095de0:;
    {
        cpu->r[14] = 0x00095de4u; fn_0018ba20(cpu);
    }
L_00095de4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00095de8:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00095dec:;
    {
        cpu->r[3] = rd32(0x00095df4u + + 0x30u);
    }
L_00095df0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00095df4:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00095df8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00095dfc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00095e00u)) return;
        }
    }
L_00095e00:;
    {
        cpu->r[14] = 0x00095e04u; fn_0018ba60(cpu);
    }
L_00095e04:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00095e08:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00095e0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00095e10u)) return;
    }
L_00095e10:;
    {
        cpu->r[8] = rd32(0x00095e18u + + 0x8u);
    }
L_00095e14:;
    {
        goto L_00095dd0;
    }
}

/* _ZN9CPropertyC1EiPKcS1_iiii @ 00095e28 (arm) */
void fn_00095e28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095e28:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00095e2c:;
    {
        cpu->r[5] = rd32(0x00095e34u + + 0x9cu);
    }
L_00095e30:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00095e34:;
    {
        cpu->r[0] = rd32(0x00095e3cu + + 0x98u);
    }
L_00095e38:;
    {
        cpu->r[5] = add_flags(cpu, 0x00095e40u, cpu->r[5], 0, 0);
    }
L_00095e3c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00095e40:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00095e44:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x28u);
    }
L_00095e48:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00095e4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00095e50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00095ea8;
        }
    }
L_00095e54:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_00095e58:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_00095e5c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00095e60:;
    {
        cpu->r[1] = rd32(0x00095e68u + + 0x70u);
    }
L_00095e64:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00095e68:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[12]);
    }
L_00095e6c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_00095e70:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00095e74:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_00095e78:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[12]);
    }
L_00095e7c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_00095e80:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_00095e84:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[6]);
    }
L_00095e88:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[14]);
    }
L_00095e8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00095e90:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[4]);
    }
L_00095e94:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_00095e98:;
    {
        cpu->r[14] = 0x00095e9cu; fn_0009562c(cpu);
    }
L_00095e9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00095ea0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00095ea4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00095ea8u)) return;
    }
L_00095ea8:;
    {
        cpu->r[0] = 0x00000fa0u;
    }
L_00095eac:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00095eb0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_00095eb4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00095eb8:;
    {
        cpu->r[14] = 0x00095ebcu; imp__Znaj(cpu); /* _Znaj */
    }
L_00095ebc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00095ec0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00095ec4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00095ec8:;
    {
        wr32(cpu->r[7], cpu->r[0]);
    }
L_00095ecc:;
    {
        goto L_00095e54;
    }
}

/* _ZN9CPropertyC2EiPKcS1_iiii @ 00095edc (arm) */
void fn_00095edc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095edc:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00095ee0:;
    {
        cpu->r[5] = rd32(0x00095ee8u + + 0x9cu);
    }
L_00095ee4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00095ee8:;
    {
        cpu->r[0] = rd32(0x00095ef0u + + 0x98u);
    }
L_00095eec:;
    {
        cpu->r[5] = add_flags(cpu, 0x00095ef4u, cpu->r[5], 0, 0);
    }
L_00095ef0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00095ef4:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00095ef8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x28u);
    }
L_00095efc:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00095f00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00095f04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00095f5c;
        }
    }
L_00095f08:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_00095f0c:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_00095f10:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00095f14:;
    {
        cpu->r[1] = rd32(0x00095f1cu + + 0x70u);
    }
L_00095f18:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00095f1c:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[12]);
    }
L_00095f20:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_00095f24:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00095f28:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_00095f2c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[12]);
    }
L_00095f30:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_00095f34:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_00095f38:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[6]);
    }
L_00095f3c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[14]);
    }
L_00095f40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00095f44:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[4]);
    }
L_00095f48:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_00095f4c:;
    {
        cpu->r[14] = 0x00095f50u; fn_0009562c(cpu);
    }
L_00095f50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00095f54:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00095f58:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00095f5cu)) return;
    }
L_00095f5c:;
    {
        cpu->r[0] = 0x00000fa0u;
    }
L_00095f60:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00095f64:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_00095f68:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00095f6c:;
    {
        cpu->r[14] = 0x00095f70u; imp__Znaj(cpu); /* _Znaj */
    }
L_00095f70:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00095f74:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00095f78:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00095f7c:;
    {
        wr32(cpu->r[7], cpu->r[0]);
    }
L_00095f80:;
    {
        goto L_00095f08;
    }
}

/* _ZN23GLXPlayerMPBaseObserver16OnMPLoginSuccessEP10DataPacket @ 00095f90 (arm) */
void fn_00095f90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095f90:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GLXPlayerMPBaseObserver24OnMPCreateSessionSuccessEP10DataPacket @ 00095f94 (arm) */
void fn_00095f94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095f94:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GLXPlayerMPBaseObserver22OnMPListSessionSuccessEP10DataPacket @ 00095f98 (arm) */
void fn_00095f98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095f98:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GLXPlayerMPBaseObserver35OnMPListSessionSuccessWithGameParamEP10DataPacket @ 00095f9c (arm) */
void fn_00095f9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095f9c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GLXPlayerMPBaseObserver22OnMPJoinSessionSuccessEP10DataPacket @ 00095fa0 (arm) */
void fn_00095fa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095fa0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GLXPlayerMPBaseObserver20OnMPStartGameSuccessEP10DataPacket @ 00095fa4 (arm) */
void fn_00095fa4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095fa4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GLXPlayerMPBaseObserver19OnMPSetParamSuccessEi @ 00095fa8 (arm) */
void fn_00095fa8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095fa8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GLXPlayerMPBaseObserver21OnMPListGameParameterEP10DataPacket @ 00095fac (arm) */
void fn_00095fac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095fac:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00095fb0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GLXPlayerMPBaseObserver23OnMPProcessPushMessagesEP10DataPacketi @ 00095fb4 (arm) */
void fn_00095fb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095fb4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GLXPlayerMPBaseObserver22OnMPRejoinLobbySuccessEP10DataPacketb @ 00095fb8 (arm) */
void fn_00095fb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095fb8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GLXPlayerMPBaseObserver19OnMPStartGameFailedEi @ 00095fbc (arm) */
void fn_00095fbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095fbc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GLXPlayerMPBaseObserver16OnMPGetLobbyInfoEP10DataPacket @ 00095fc0 (arm) */
void fn_00095fc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095fc0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GLXPlayerMPBaseObserver19OnMPGetLobbyForNameEP10DataPacket @ 00095fc4 (arm) */
void fn_00095fc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095fc4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GLXPlayerMPBaseObserver21OnMPGetLobbyForFriendEP10DataPacket @ 00095fc8 (arm) */
void fn_00095fc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095fc8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GLXPlayerMPBaseObserver21OnMPAutoMatchRequesetEi @ 00095fcc (arm) */
void fn_00095fcc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095fcc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GLXPlayerMPBaseObserver27OnMPAutoMatchRequesetCancelEv @ 00095fd0 (arm) */
void fn_00095fd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095fd0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z11GetPlatformv @ 00095fd4 (arm) */
void fn_00095fd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095fd4:;
    {
        cpu->r[0] = 0x0000000bu;
    }
L_00095fd8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z18IsGameKitAvailablev @ 00095fdc (arm) */
void fn_00095fdc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095fdc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00095fe0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z16enterLeaderBoardv @ 00095fe4 (arm) */
void fn_00095fe4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095fe4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z3LOGPc @ 00095fe8 (arm) */
void fn_00095fe8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095fe8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game14GetCarSettingsEi @ 00095fec (arm) */
void fn_00095fec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00095fec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x444u);
    }
L_00095ff0:;
    {
        cpu->r[2] = 0x0000004cu;
    }
L_00095ff4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1] + cpu->r[3]; cpu->r[3] = v;
    }
L_00095ff8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00095ffc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game14GetCarBuyPriceEi @ 00096000 (arm) */
void fn_00096000(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096000:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x444u);
    }
L_00096004:;
    {
        cpu->r[2] = 0x0000004cu;
    }
L_00096008:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1] + cpu->r[3]; cpu->r[3] = v;
    }
L_0009600c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x40u);
    }
L_00096010:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game13GetCarBuySellEi @ 00096014 (arm) */
void fn_00096014(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096014:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x444u);
    }
L_00096018:;
    {
        cpu->r[2] = 0x0000004cu;
    }
L_0009601c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1] + cpu->r[3]; cpu->r[3] = v;
    }
L_00096020:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x44u);
    }
L_00096024:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game15GetCarAnmObjectEi @ 00096028 (arm) */
void fn_00096028(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096028:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x444u);
    }
L_0009602c:;
    {
        cpu->r[2] = 0x0000004cu;
    }
L_00096030:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1] + cpu->r[3]; cpu->r[3] = v;
    }
L_00096034:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x8u);
    }
L_00096038:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game18GetModelForCopTypeEi @ 0009603c (arm) */
void fn_0009603c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009603c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00096040:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_00096044:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00096048:;
    {
        if (cond_test(cpu, 9)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0009604c:;
    {
        cpu->r[3] = rd32(0x00096054u + + 0x8u);
    }
L_00096050:;
    {
        cpu->r[3] = add_flags(cpu, 0x00096058u, cpu->r[3], 0, 0);
    }
L_00096054:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00096058:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game11StartRenderEv @ 00096060 (arm) */
void fn_00096060(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096060:;
    {
        cpu->r[3] = 0x00008545u;
    }
L_00096064:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00096068:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0009606c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game9EndRenderEv @ 00096070 (arm) */
void fn_00096070(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096070:;
    {
        cpu->r[3] = 0x00008545u;
    }
L_00096074:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00096078:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0009607c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game21IsRenderBuffer1LockedEv @ 00096080 (arm) */
void fn_00096080(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096080:;
    {
        cpu->r[3] = 0x00008545u;
    }
L_00096084:;
    {
        cpu->r[0] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00096088:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game21IsRenderBuffer2LockedEv @ 0009608c (arm) */
void fn_0009608c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009608c:;
    {
        cpu->r[3] = 0x00008545u;
    }
L_00096090:;
    {
        cpu->r[0] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00096094:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game14IsRenderActiveEv @ 00096098 (arm) */
void fn_00096098(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096098:;
    {
        cpu->r[3] = 0x00008545u;
    }
L_0009609c:;
    {
        cpu->r[0] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000960a0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game19ActivateBloomEffectEv @ 000960a4 (arm) */
void fn_000960a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000960a4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000960a8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game11IsIphone3GSEv @ 000960ac (arm) */
void fn_000960ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000960ac:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000960b0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game10CurveAccelEf @ 000960b4 (arm) */
void fn_000960b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000960b4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_000960b8:;
    {
        vfp_vmul(cpu, 13, 15, 15);
    }
L_000960bc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000960c4u + + 0x20u);
    }
L_000960c0:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_000960c4:;
    {
        vfp_vmla(cpu, 12, 13, 14);
    }
L_000960c8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000960d0u + + 0x18u);
    }
L_000960cc:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,12);
    }
L_000960d0:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_000960d4:;
    {
        vfp_vmla(cpu, 12, 14, 13);
    }
L_000960d8:;
    {
        vfp_vadd(cpu, 14, 12, 15);
    }
L_000960dc:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000960e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game14GetOrientationEv @ 000960ec (arm) */
void fn_000960ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000960ec:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4e0u);
    }
L_000960f0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game10IsPortraitEv @ 000960f4 (arm) */
void fn_000960f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000960f4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4e0u);
    }
L_000960f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000960fc:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
        }
    }
L_00096100:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00096104:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd8(cpu->r[0] + + 0x4ccu);
        }
    }
L_00096108:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game19GetCar_GenericCountEv @ 0009610c (arm) */
void fn_0009610c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009610c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x470u);
    }
L_00096110:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game11GetCarCountEv @ 00096114 (arm) */
void fn_00096114(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096114:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x444u);
    }
L_00096118:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x448u);
    }
L_0009611c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00096120:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 2u, &shc); cpu->r[0] = v;
    }
L_00096124:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00096128:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_0009612c:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 2, 9u, &shc), cpu->r[0], 1, 0);
    }
L_00096130:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 18u, &shc), 0, 0);
    }
L_00096134:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_00096138:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game11GetCarIndexEi @ 0009613c (arm) */
void fn_0009613c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009613c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00096140:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00096144:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00096148:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0009614c:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_00096150:;
    {
        goto L_00096170;
    }
L_00096154:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x444u);
    }
L_00096158:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_0009615c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000004cu, 0, 0);
    }
L_00096160:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00096164:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_00096168:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00096184;
        }
    }
L_0009616c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00096170:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00096174:;
    {
        cpu->r[14] = 0x00096178u; fn_00096114(cpu);
    }
L_00096178:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_0009617c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00096154;
        }
    }
L_00096180:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00096184:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00096188:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009618cu)) return;
    }
}

/* _ZN4Game26IsGarageCarModelUsedIngameEv @ 0009618c (arm) */
void fn_0009618c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009618c:;
    {
        cpu->r[3] = 0x00001c38u;
    }
L_00096190:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00096194:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00096198:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0009619c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009620c;
        }
    }
L_000961a0:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000961a4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000961a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000961ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009620c;
        }
    }
L_000961b0:;
    {
        cpu->r[2] = 0x00001cf4u;
    }
L_000961b4:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000961b8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000961bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000961c0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000961c4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000961c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000961cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000961d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009620c;
        }
    }
L_000961d4:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0xd08u);
    }
L_000961d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000961dc:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0xb58u);
    }
L_000961e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_000961e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000961e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00011c00u, 0, 0);
    }
L_000961ec:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xa8u);
    }
L_000961f0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0xb58u);
    }
L_000961f4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xd08u);
    }
L_000961f8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000961fc:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
        }
    }
L_00096200:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00096218;
        }
    }
L_00096204:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_00096208:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000961e0;
        }
    }
L_0009620c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00096210:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00096214:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00096218:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0009621c:;
    {
        goto L_00096210;
    }
}

/* _ZN4Game15InitCareerPropsEv @ 00096220 (arm) */
void fn_00096220(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096220:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_00096224:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00096228:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 0);
    }
L_0009622c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_00096230:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_000962b8;
        case 1: goto L_0009629c;
        case 2: goto L_0009629c;
        case 3: goto L_00096280;
        case 4: goto L_0009629c;
        case 5: goto L_0009629c;
        case 6: goto L_00096264;
        case 7: goto L_0009629c;
        case 8: goto L_0009629c;
        case 9: goto L_00096264;
        case 10: goto L_00096264;
        default: guest_unimplemented(cpu, 0x00096230u); return; }
        }
    }
L_00096234:;
    {
        goto L_0009629c;
    }
L_00096264:;
    {
        cpu->r[3] = 0x00001be8u;
    }
L_00096268:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_0009626c:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_00096270:;
    {
        cpu->r[3] = 0x00001be4u;
    }
L_00096274:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00096278:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0009627c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00096280:;
    {
        cpu->r[3] = 0x00001be8u;
    }
L_00096284:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00096288:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0009628c:;
    {
        cpu->r[3] = 0x00001be4u;
    }
L_00096290:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00096294:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_00096298:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0009629c:;
    {
        cpu->r[3] = 0x00001be8u;
    }
L_000962a0:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_000962a4:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_000962a8:;
    {
        cpu->r[3] = 0x00001be4u;
    }
L_000962ac:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_000962b0:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_000962b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000962b8:;
    {
        cpu->r[2] = 0x00001be8u;
    }
L_000962bc:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_000962c0:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_000962c4:;
    {
        cpu->r[2] = 0x00001be4u;
    }
L_000962c8:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_000962cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game16GetOwnerLanguageEv @ 000962d0 (arm) */
void fn_000962d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000962d0:;
    {
        cpu->r[3] = 0x00001bc4u;
    }
L_000962d4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000962d8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000962dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game20SlowMotionSkipUpdateEv @ 000962e0 (arm) */
void fn_000962e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000962e0:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000962e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000962e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000962ec:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000962f0:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000962f4:;
    {
        cpu->r[3] = 0x0000850cu;
    }
L_000962f8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000962fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00096300:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00096304:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00096308:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game15StartSlowMotionEv @ 0009630c (arm) */
void fn_0009630c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009630c:;
    {
        cpu->r[3] = 0x00008510u;
    }
L_00096310:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00096314:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_00096318:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game16UpdateSlowMotionEv @ 0009631c (arm) */
void fn_0009631c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009631c:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_00096320:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00096324:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00096328:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0009632c:;
    {
        cpu->r[3] = 0x0000850cu;
    }
L_00096330:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00096334:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00096338:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
        }
    }
L_0009633c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
        }
    }
L_00096340:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
        }
    }
L_00096344:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game22GetSlowMotionFramePercEv @ 00096348 (arm) */
void fn_00096348(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096348:;
    {
        cpu->r[3] = 0x0000850cu;
    }
L_0009634c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00096350:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00096354:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009638c;
        }
    }
L_00096358:;
    {
        cpu->r[2] = 0x00008508u;
    }
L_0009635c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_00096360:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00096364:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009638c;
        }
    }
L_00096368:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0009636c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_00096370:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00096374:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00096378:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_0009637c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00096380:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_00096384:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00096388:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0009638c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00096394u + + 0x4u);
    }
L_00096390:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00096394:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game13EndSlowMotionEv @ 0009639c (arm) */
void fn_0009639c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009639c:;
    {
        cpu->r[2] = 0x00008508u;
    }
L_000963a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000963a4:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_000963a8:;
    {
        cpu->r[2] = 0x00008510u;
    }
L_000963ac:;
    {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_000963b0:;
    {
        cpu->r[2] = 0x0000850cu;
    }
L_000963b4:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_000963b8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z16ReverseEndianF32f @ 000963bc (arm) */
void fn_000963bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000963bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z5Clampfff @ 000963c0 (arm) */
void fn_000963c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000963c0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000963c4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_000963c8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000963cc:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_000963d0:;
    {
        vfp_sync_flags(cpu);
    }
L_000963d4:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000963e8;
        }
    }
L_000963d8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,13));
    }
L_000963dc:;
    {
        vfp_sync_flags(cpu);
    }
L_000963e0:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_000963e4:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,13);
        }
    }
L_000963e8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000963ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z16DEBUG_GetAIStatei @ 000963f0 (arm) */
void fn_000963f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000963f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000963f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_000963f8:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[0]) {
        case 0: goto L_00096434;
        case 1: goto L_00096440;
        case 2: goto L_0009644c;
        case 3: goto L_00096458;
        case 4: goto L_00096464;
        case 5: goto L_00096428;
        case 6: goto L_0009641c;
        default: guest_unimplemented(cpu, 0x000963f8u); return; }
        }
    }
L_000963fc:;
    {
        goto L_00096428;
    }
L_0009641c:;
    {
        cpu->r[0] = rd32(0x00096424u + + 0x4cu);
    }
L_00096420:;
    {
        cpu->r[0] = add_flags(cpu, 0x00096428u, cpu->r[0], 0, 0);
    }
L_00096424:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00096428:;
    {
        cpu->r[0] = rd32(0x00096430u + + 0x44u);
    }
L_0009642c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00096434u, cpu->r[0], 0, 0);
    }
L_00096430:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00096434:;
    {
        cpu->r[0] = rd32(0x0009643cu + + 0x3cu);
    }
L_00096438:;
    {
        cpu->r[0] = add_flags(cpu, 0x00096440u, cpu->r[0], 0, 0);
    }
L_0009643c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00096440:;
    {
        cpu->r[0] = rd32(0x00096448u + + 0x34u);
    }
L_00096444:;
    {
        cpu->r[0] = add_flags(cpu, 0x0009644cu, cpu->r[0], 0, 0);
    }
L_00096448:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0009644c:;
    {
        cpu->r[0] = rd32(0x00096454u + + 0x2cu);
    }
L_00096450:;
    {
        cpu->r[0] = add_flags(cpu, 0x00096458u, cpu->r[0], 0, 0);
    }
L_00096454:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00096458:;
    {
        cpu->r[0] = rd32(0x00096460u + + 0x24u);
    }
L_0009645c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00096464u, cpu->r[0], 0, 0);
    }
L_00096460:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00096464:;
    {
        cpu->r[0] = rd32(0x0009646cu + + 0x1cu);
    }
L_00096468:;
    {
        cpu->r[0] = add_flags(cpu, 0x00096470u, cpu->r[0], 0, 0);
    }
L_0009646c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z7getRandv @ 0009648c (arm) */
void fn_0009648c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009648c:;
    {
        cpu->r[3] = rd32(0x00096494u + + 0x2cu);
    }
L_00096490:;
    {
        cpu->r[1] = 0x0000660du;
    }
L_00096494:;
    {
        cpu->r[0] = rd32(0x0009649cu + + 0x28u);
    }
L_00096498:;
    {
        cpu->r[2] = 0x0000f35fu;
    }
L_0009649c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000964a4u, cpu->r[3], 0, 0);
    }
L_000964a0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0019u << 16);
    }
L_000964a4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x3c6eu << 16);
    }
L_000964a8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000964ac:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000964b0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0] + cpu->r[2]; cpu->r[2] = v;
    }
L_000964b4:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000964b8:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 16u, &shc); cpu->r[0] = v;
    }
L_000964bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z7getRandii @ 000964c8 (arm) */
void fn_000964c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000964c8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000964cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000964d0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000964d4:;
    {
        cpu->r[14] = 0x000964d8u; fn_0009648c(cpu);
    }
L_000964d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000964dc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000964f8;
        }
    }
L_000964e0:;
    {
        cpu->r[14] = 0x000964e4u; fn_0009648c(cpu);
    }
L_000964e4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 0);
    }
L_000964e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000964ec:;
    {
        cpu->r[14] = 0x000964f0u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000964f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 0);
    }
L_000964f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000964f8u)) return;
    }
L_000964f8:;
    {
        cpu->r[14] = 0x000964fcu; fn_0009648c(cpu);
    }
L_000964fc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 0);
    }
L_00096500:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00096504:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_00096508:;
    {
        cpu->r[14] = 0x0009650cu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_0009650c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 0);
    }
L_00096510:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096514u)) return;
    }
}

/* _Z7getRandff @ 00096514 (arm) */
void fn_00096514(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096514:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00096518:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0009651c:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[0];
    }
L_00096520:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[1];
    }
L_00096524:;
    {
        cpu->r[14] = 0x00096528u; fn_0009648c(cpu);
    }
L_00096528:;
    {
        vfp_vsub(cpu, 16, 16, 17);
    }
L_0009652c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00096530:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00096534:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0009653cu + + 0x10u);
    }
L_00096538:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0009653c:;
    {
        vfp_vmla(cpu, 17, 16, 15);
    }
L_00096540:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,17);
    }
L_00096544:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00096548:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0009654cu)) return;
    }
}

/* _Z7setRandj @ 00096550 (arm) */
void fn_00096550(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096550:;
    {
        cpu->r[3] = rd32(0x00096558u + + 0x10u);
    }
L_00096554:;
    {
        cpu->r[2] = rd32(0x0009655cu + + 0x10u);
    }
L_00096558:;
    {
        cpu->r[3] = add_flags(cpu, 0x00096560u, cpu->r[3], 0, 0);
    }
L_0009655c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00096560:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00096564:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z13setRandInGamej @ 00096570 (arm) */
void fn_00096570(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096570:;
    {
        cpu->r[3] = rd32(0x00096578u + + 0x10u);
    }
L_00096574:;
    {
        cpu->r[2] = rd32(0x0009657cu + + 0x10u);
    }
L_00096578:;
    {
        cpu->r[3] = add_flags(cpu, 0x00096580u, cpu->r[3], 0, 0);
    }
L_0009657c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00096580:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00096584:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z13getRandInGamev @ 00096590 (arm) */
void fn_00096590(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096590:;
    {
        cpu->r[3] = rd32(0x00096598u + + 0x2cu);
    }
L_00096594:;
    {
        cpu->r[1] = 0x0000660du;
    }
L_00096598:;
    {
        cpu->r[0] = rd32(0x000965a0u + + 0x28u);
    }
L_0009659c:;
    {
        cpu->r[2] = 0x0000f35fu;
    }
L_000965a0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000965a8u, cpu->r[3], 0, 0);
    }
L_000965a4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0019u << 16);
    }
L_000965a8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x3c6eu << 16);
    }
L_000965ac:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000965b0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000965b4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0] + cpu->r[2]; cpu->r[2] = v;
    }
L_000965b8:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000965bc:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 16u, &shc); cpu->r[0] = v;
    }
L_000965c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z13getRandInGameii @ 000965cc (arm) */
void fn_000965cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000965cc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000965d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000965d4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000965d8:;
    {
        cpu->r[14] = 0x000965dcu; fn_00096590(cpu);
    }
L_000965dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000965e0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000965fc;
        }
    }
L_000965e4:;
    {
        cpu->r[14] = 0x000965e8u; fn_00096590(cpu);
    }
L_000965e8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 0);
    }
L_000965ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000965f0:;
    {
        cpu->r[14] = 0x000965f4u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000965f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 0);
    }
L_000965f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000965fcu)) return;
    }
L_000965fc:;
    {
        cpu->r[14] = 0x00096600u; fn_00096590(cpu);
    }
L_00096600:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 0);
    }
L_00096604:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00096608:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0009660c:;
    {
        cpu->r[14] = 0x00096610u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00096610:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 0);
    }
L_00096614:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096618u)) return;
    }
}

/* _Z13getRandInGameff @ 00096618 (arm) */
void fn_00096618(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096618:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0009661c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00096620:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[0];
    }
L_00096624:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[1];
    }
L_00096628:;
    {
        cpu->r[14] = 0x0009662cu; fn_00096590(cpu);
    }
L_0009662c:;
    {
        vfp_vsub(cpu, 16, 16, 17);
    }
L_00096630:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00096634:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00096638:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00096640u + + 0x10u);
    }
L_0009663c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00096640:;
    {
        vfp_vmla(cpu, 17, 16, 15);
    }
L_00096644:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,17);
    }
L_00096648:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0009664c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00096650u)) return;
    }
}

/* _Z14setRandTrafficj @ 00096654 (arm) */
void fn_00096654(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096654:;
    {
        cpu->r[3] = rd32(0x0009665cu + + 0x10u);
    }
L_00096658:;
    {
        cpu->r[2] = rd32(0x00096660u + + 0x10u);
    }
L_0009665c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00096664u, cpu->r[3], 0, 0);
    }
L_00096660:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00096664:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00096668:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z14getRandTrafficv @ 00096674 (arm) */
void fn_00096674(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096674:;
    {
        cpu->r[3] = rd32(0x0009667cu + + 0x2cu);
    }
L_00096678:;
    {
        cpu->r[1] = 0x0000660du;
    }
L_0009667c:;
    {
        cpu->r[0] = rd32(0x00096684u + + 0x28u);
    }
L_00096680:;
    {
        cpu->r[2] = 0x0000f35fu;
    }
L_00096684:;
    {
        cpu->r[3] = add_flags(cpu, 0x0009668cu, cpu->r[3], 0, 0);
    }
L_00096688:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0019u << 16);
    }
L_0009668c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x3c6eu << 16);
    }
L_00096690:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_00096694:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00096698:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0] + cpu->r[2]; cpu->r[2] = v;
    }
L_0009669c:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000966a0:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 16u, &shc); cpu->r[0] = v;
    }
L_000966a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z14getRandTrafficii @ 000966b0 (arm) */
void fn_000966b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000966b0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000966b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000966b8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000966bc:;
    {
        cpu->r[14] = 0x000966c0u; fn_00096674(cpu);
    }
L_000966c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000966c4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000966e0;
        }
    }
L_000966c8:;
    {
        cpu->r[14] = 0x000966ccu; fn_00096674(cpu);
    }
L_000966cc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 0);
    }
L_000966d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000966d4:;
    {
        cpu->r[14] = 0x000966d8u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000966d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 0);
    }
L_000966dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000966e0u)) return;
    }
L_000966e0:;
    {
        cpu->r[14] = 0x000966e4u; fn_00096674(cpu);
    }
L_000966e4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 0);
    }
L_000966e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000966ec:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_000966f0:;
    {
        cpu->r[14] = 0x000966f4u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000966f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 0);
    }
L_000966f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000966fcu)) return;
    }
}

/* _ZN4Game18GetNextMusicToPlayEv @ 000966fc (arm) */
void fn_000966fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000966fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00096700:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x49cu);
    }
L_00096704:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00096708:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0009670c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000038u, 1, 0);
    }
L_00096710:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00096714:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_00096718:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0009671c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00096720:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00096724:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_00096728:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + - 0x38u, cpu->r[3]);
        }
    }
L_0009672c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00096730:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000eu, 1, 1);
    }
L_00096734:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00096714;
        }
    }
L_00096738:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0009673c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009677c;
        }
    }
L_00096740:;
    {
        wr32(cpu->r[4] + + 0x49cu, cpu->r[1]);
    }
L_00096744:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00096748:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_0009674c:;
    {
        cpu->r[14] = 0x00096750u; fn_000964c8(cpu);
    }
L_00096750:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x484u);
    }
L_00096754:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00096758:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0009675c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00096744;
        }
    }
L_00096760:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x49cu);
    }
L_00096764:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00096768:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0009676c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00096770:;
    {
        wr32(cpu->r[4] + + 0x49cu, cpu->r[3]);
    }
L_00096774:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_00096778:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0009677cu)) return;
    }
L_0009677c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00096780:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00096784:;
    {
        cpu->r[14] = 0x00096788u; fn_000964c8(cpu);
    }
L_00096788:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_0009678c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00096790:;
    {
        cpu->r[3] = rd32(cpu->r[0] + - 0x38u);
    }
L_00096794:;
    {
        goto L_00096760;
    }
}

/* _ZN4Game11ResumeAudioEbi @ 00096798 (arm) */
void fn_00096798(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096798:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0009679c:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[0] + + 0x4bcu, cpu->r[2]);
        }
    }
L_000967a0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000004u;
        }
    }
L_000967a4:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0] + + 0x4bcu, cpu->r[3]);
        }
    }
L_000967a8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game9FreeMusicEb @ 000967ac (arm) */
void fn_000967ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000967ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game14IsMusicPlayingEv @ 000967b0 (arm) */
void fn_000967b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000967b0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000967b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game15MP_ResetTimeoutEv @ 000967b8 (arm) */
void fn_000967b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000967b8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000967bc:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000967c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_000967c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000967c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00005f00u, 0, 0);
    }
L_000967cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_000967d0:;
    {
        wr32(cpu->r[2] + + 0x74u, cpu->r[1]);
    }
L_000967d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000967c0;
        }
    }
L_000967d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game15MP_SetTimeoutToEj @ 000967dc (arm) */
void fn_000967dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000967dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000967e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_000967e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000967e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00005f00u, 0, 0);
    }
L_000967ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_000967f0:;
    {
        wr32(cpu->r[2] + + 0x74u, cpu->r[1]);
    }
L_000967f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000967e0;
        }
    }
L_000967f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game24MP_SetClientReadyToStartEi @ 000967fc (arm) */
void fn_000967fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000967fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00096800:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00096804:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00006700u, 0, 0);
    }
L_00096808:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000020u, 0, 0);
    }
L_0009680c:;
    {
        wr8(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_00096810:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game27MP_ResetClientsReadyToStartEv @ 00096814 (arm) */
void fn_00096814(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096814:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00096818:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0009681c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00096820:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00096824:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006700u, 0, 0);
    }
L_00096828:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_0009682c:;
    {
        wr8(cpu->r[2] + + 0x24u, cpu->r[1]);
    }
L_00096830:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009681c;
        }
    }
L_00096834:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game28MP_AreAllClientsReadyToStartEv @ 00096838 (arm) */
void fn_00096838(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096838:;
    {
        cpu->r[3] = 0x000063f0u;
    }
L_0009683c:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00096840:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00096844:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00096848:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00096888;
        }
    }
L_0009684c:;
    {
        cpu->r[2] = 0x000063e8u;
    }
L_00096850:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00096854:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_00096858:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0xc0u);
    }
L_0009685c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00096860:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00006700u, 0, 0);
    }
L_00096864:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00096868:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0009686c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00096870:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00096880;
        }
    }
L_00096874:;
    {
        cpu->r[1] = rd8(cpu->r[12] + + 0x24u);
    }
L_00096878:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0009687c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00096894;
        }
    }
L_00096880:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00096884:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00096858;
        }
    }
L_00096888:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0009688c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00096890:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00096894:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00096898:;
    {
        goto L_0009688c;
    }
}

/* _ZN4Game18MP_SetClientPausedEib @ 0009689c (arm) */
void fn_0009689c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009689c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000968a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00006700u, 0, 0);
    }
L_000968a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000028u, 0, 0);
    }
L_000968a8:;
    {
        wr8(cpu->r[1] + + 0x7u, cpu->r[2]);
    }
L_000968ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game21MP_ResetClientsPausedEv @ 000968b0 (arm) */
void fn_000968b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000968b0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000968b4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000968b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_000968bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000968c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006700u, 0, 0);
    }
L_000968c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_000968c8:;
    {
        wr8(cpu->r[2] + + 0x2fu, cpu->r[1]);
    }
L_000968cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000968b8;
        }
    }
L_000968d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game20MP_IsAnyClientPausedEv @ 000968d4 (arm) */
void fn_000968d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000968d4:;
    {
        cpu->r[3] = 0x000063f0u;
    }
L_000968d8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000968dc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000968e0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00096918;
        }
    }
L_000968e4:;
    {
        cpu->r[3] = 0x0000672fu;
    }
L_000968e8:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000968ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000968f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00096904;
        }
    }
L_000968f4:;
    {
        goto L_00096920;
    }
L_000968f8:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x2fu);
    }
L_000968fc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00096900:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00096920;
        }
    }
L_00096904:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00096908:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0009690c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00096910:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006700u, 0, 0);
    }
L_00096914:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000968f8;
        }
    }
L_00096918:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009691c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00096920:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00096924:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game19MP_EndCommunicationEv @ 00096928 (arm) */
void fn_00096928(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096928:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0009692c:;
    {
        cpu->r[5] = 0x000063e8u;
    }
L_00096930:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00096934:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_00096938:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009693c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096940u)) return;
        }
    }
L_00096940:;
    {
        cpu->r[2] = 0x00005f58u;
    }
L_00096944:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[2]);
    }
L_00096948:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0009694c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00096970;
        }
    }
L_00096950:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00096954:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00096958:;
    {
        cpu->r[14] = 0x00096960u;
    }
L_0009695c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00096960u)) return;
    }
L_00096960:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_00096964:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00096968:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0009696c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096970u)) return;
    }
L_00096970:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00096974:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00096978:;
    {
        cpu->r[14] = 0x00096980u;
    }
L_0009697c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x70u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00096980u)) return;
    }
L_00096980:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00096984:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00096988:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00096950;
        }
    }
L_0009698c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096990u)) return;
    }
}

/* _ZN4Game17PushDelayedActionEii @ 00096990 (arm) */
void fn_00096990(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096990:;
    {
        cpu->r[3] = 0x00008498u;
    }
L_00096994:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00096998:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000031u, 1, 1);
    }
L_0009699c:;
    {
        if (cond_test(cpu, 13)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000969a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00001040u, 0, 0);
    }
L_000969a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000021u, 0, 0);
    }
L_000969a8:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[12], 2, 3u, &shc), cpu->r[1]);
    }
L_000969ac:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000969b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001040u, 0, 0);
    }
L_000969b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000021u, 0, 0);
    }
L_000969b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_000969bc:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_000969c0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000969c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000969c8:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_000969cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game18GetCarIdFromStringEi @ 000969d0 (arm) */
void fn_000969d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000969d0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000500u, 1, 0);
    }
L_000969d4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 0);
    }
L_000969d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game19GetCityIdFromStringEi @ 000969dc (arm) */
void fn_000969dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000969dc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x000004c0u, 1, 0);
    }
L_000969e0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 0);
    }
L_000969e4:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000bu, 1, 1);
    }
L_000969e8:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_000969ec:;
    {
        if (cond_test(cpu, 9)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000969f0:;
    {
        cpu->r[3] = rd32(0x000969f8u + + 0xcu);
    }
L_000969f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000969fcu, cpu->r[3], 0, 0);
    }
L_000969f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000969fc:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0xcu);
    }
L_00096a00:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game20GetLanguageFontIndexEi @ 00096a08 (arm) */
void fn_00096a08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096a08:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00096a0c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00096a10:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00096a14:;
    {
        cpu->r[14] = 0x00096a18u; fn_000962d0(cpu);
    }
L_00096a18:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_00096a1c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000057u;
        }
    }
L_00096a20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096a24u)) return;
        }
    }
L_00096a24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00096a28:;
    {
        cpu->r[14] = 0x00096a2cu; fn_000962d0(cpu);
    }
L_00096a2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_00096a30:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000058u;
        }
    }
L_00096a34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096a38u)) return;
        }
    }
L_00096a38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00096a3c:;
    {
        cpu->r[14] = 0x00096a40u; fn_000962d0(cpu);
    }
L_00096a40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_00096a44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00096a50;
        }
    }
L_00096a48:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00096a4c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096a50u)) return;
    }
L_00096a50:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], 0x0000000du, 1, 0);
    }
L_00096a54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000038u, 1, 1);
    }
L_00096a58:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_00096b4c;
        case 1: goto L_00096b44;
        case 2: goto L_00096b44;
        case 3: goto L_00096b44;
        case 4: goto L_00096b44;
        case 5: goto L_00096b44;
        case 6: goto L_00096b44;
        case 7: goto L_00096b44;
        case 8: goto L_00096b44;
        case 9: goto L_00096b44;
        case 10: goto L_00096b44;
        case 11: goto L_00096b44;
        case 12: goto L_00096b44;
        case 13: goto L_00096b44;
        case 14: goto L_00096b44;
        case 15: goto L_00096b44;
        case 16: goto L_00096b44;
        case 17: goto L_00096b44;
        case 18: goto L_00096b44;
        case 19: goto L_00096b44;
        case 20: goto L_00096b44;
        case 21: goto L_00096b44;
        case 22: goto L_00096b44;
        case 23: goto L_00096b44;
        case 24: goto L_00096b44;
        case 25: goto L_00096b44;
        case 26: goto L_00096b44;
        case 27: goto L_00096b44;
        case 28: goto L_00096b44;
        case 29: goto L_00096b44;
        case 30: goto L_00096b44;
        case 31: goto L_00096b44;
        case 32: goto L_00096b44;
        case 33: goto L_00096b44;
        case 34: goto L_00096a48;
        case 35: goto L_00096b44;
        case 36: goto L_00096a48;
        case 37: goto L_00096b44;
        case 38: goto L_00096b44;
        case 39: goto L_00096b44;
        case 40: goto L_00096b44;
        case 41: goto L_00096b44;
        case 42: goto L_00096b44;
        case 43: goto L_00096b44;
        case 44: goto L_00096b44;
        case 45: goto L_00096b44;
        case 46: goto L_00096b44;
        case 47: goto L_00096a48;
        case 48: goto L_00096b44;
        case 49: goto L_00096b44;
        case 50: goto L_00096b4c;
        case 51: goto L_00096b44;
        case 52: goto L_00096b4c;
        case 53: goto L_00096b54;
        case 54: goto L_00096b44;
        case 55: goto L_00096b44;
        case 56: goto L_00096b54;
        default: guest_unimplemented(cpu, 0x00096a58u); return; }
        }
    }
L_00096a5c:;
    {
        goto L_00096b44;
    }
L_00096b44:;
    {
        cpu->r[0] = 0x00000028u;
    }
L_00096b48:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096b4cu)) return;
    }
L_00096b4c:;
    {
        cpu->r[0] = 0x00000029u;
    }
L_00096b50:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096b54u)) return;
    }
L_00096b54:;
    {
        cpu->r[0] = 0x00000027u;
    }
L_00096b58:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096b5cu)) return;
    }
}

/* _ZN4Game13GetSceneIndexEi @ 00096b5c (arm) */
void fn_00096b5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096b5c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00096b60:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game13ResetPackagesEv @ 00096b64 (arm) */
void fn_00096b64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096b64:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00096b68:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game15IsRecordingRaceEv @ 00096b6c (arm) */
void fn_00096b6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096b6c:;
    {
        cpu->r[3] = 0x000067c3u;
    }
L_00096b70:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00096b74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00096b78:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x000067c1u;
        }
    }
L_00096b7c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00096b80:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd8(cpu->r[0] + cpu->r[3]);
        }
    }
L_00096b84:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game8IsReplayEv @ 00096b88 (arm) */
void fn_00096b88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096b88:;
    {
        cpu->r[3] = 0x000067c2u;
    }
L_00096b8c:;
    {
        cpu->r[0] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00096b90:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game17RenderProgressBarEiii @ 00096b94 (arm) */
void fn_00096b94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096b94:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game26CheckGeneralTrophiesStatusEv @ 00096b98 (arm) */
void fn_00096b98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096b98:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game16GetPhoneLanguageEv @ 00096b9c (arm) */
void fn_00096b9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096b9c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_00096ba0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game18getGirlUnlockLevelEi @ 00096ba4 (arm) */
void fn_00096ba4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096ba4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00002180u, 0, 0);
    }
L_00096ba8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_00096bac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00096bb0:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_00096bb4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game12IsCityLockedEi @ 00096bb8 (arm) */
void fn_00096bb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096bb8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x474u);
    }
L_00096bbc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00096bc0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00096c20;
        }
    }
L_00096bc4:;
    {
        cpu->r[3] = 0x000082ddu;
    }
L_00096bc8:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00096bcc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00096bd0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00096c20;
        }
    }
L_00096bd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00002180u, 0, 0);
    }
L_00096bd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000002au, 0, 0);
    }
L_00096bdc:;
    {
        cpu->r[3] = rd8(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00096be0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00096be4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00096c20;
        }
    }
L_00096be8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00096bec:;
    {
        cpu->r[3] = 0x000086a9u;
    }
L_00096bf0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00096bf4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00096bf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00096c20;
        }
    }
L_00096bfc:;
    {
        cpu->r[3] = 0x000086aau;
    }
L_00096c00:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00096c04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00096c08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00096c20;
        }
    }
L_00096c0c:;
    {
        cpu->r[3] = 0x000086abu;
    }
L_00096c10:;
    {
        cpu->r[0] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00096c14:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00096c18:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00096c1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00096c20:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00096c24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game12DoUnlockCityEi @ 00096c28 (arm) */
void fn_00096c28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096c28:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x474u);
    }
L_00096c2c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00096c30:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00096c34:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00096c38:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00096c3c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00096c48;
        }
    }
L_00096c40:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00096c44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096c48u)) return;
    }
L_00096c48:;
    {
        cpu->r[14] = 0x00096c4cu; fn_00096bb8(cpu);
    }
L_00096c4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00096c50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00096c40;
        }
    }
L_00096c54:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00002180u, 0, 0);
    }
L_00096c58:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00096c5c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000002au, 0, 0);
    }
L_00096c60:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00096c64:;
    {
        wr8(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[3]);
    }
L_00096c68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096c6cu)) return;
    }
}

/* _ZN4Game21GetLastUnlockedCityIdEv @ 00096c6c (arm) */
void fn_00096c6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096c6c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00096c70:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x474u);
    }
L_00096c74:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00096c78:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_00096c7c:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00096c8c;
        }
    }
L_00096c80:;
    {
        goto L_00096ca8;
    }
L_00096c84:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_00096c88:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00096ca8;
        }
    }
L_00096c8c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00096c90:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00096c94:;
    {
        cpu->r[14] = 0x00096c98u; fn_00096bb8(cpu);
    }
L_00096c98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00096c9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00096c84;
        }
    }
L_00096ca0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00096ca4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096ca8u)) return;
    }
L_00096ca8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00096cac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00096cb0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096cb4u)) return;
    }
}

/* _ZN4Game22GetFirstUnlockedCityIdEv @ 00096cb4 (arm) */
void fn_00096cb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096cb4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x474u);
    }
L_00096cb8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00096cbc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00096cc0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00096cc4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00096cfc;
        }
    }
L_00096cc8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00096ccc:;
    {
        goto L_00096ce0;
    }
L_00096cd0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x474u);
    }
L_00096cd4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00096cd8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00096cdc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00096cfc;
        }
    }
L_00096ce0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00096ce4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00096ce8:;
    {
        cpu->r[14] = 0x00096cecu; fn_00096bb8(cpu);
    }
L_00096cec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00096cf0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00096cd0;
        }
    }
L_00096cf4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00096cf8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096cfcu)) return;
    }
L_00096cfc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00096d00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00096d04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096d08u)) return;
    }
}

/* _ZN4Game22GetUnlockedCitiesCountEv @ 00096d08 (arm) */
void fn_00096d08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096d08:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x474u);
    }
L_00096d0c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00096d10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00096d14:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00096d18:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_00096d1c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00096d4c;
        }
    }
L_00096d20:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00096d24:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_00096d28:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00096d2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00096d30:;
    {
        cpu->r[14] = 0x00096d34u; fn_00096bb8(cpu);
    }
L_00096d34:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x474u);
    }
L_00096d38:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00096d3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00096d40:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
        }
    }
L_00096d44:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00096d48:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00096d28;
        }
    }
L_00096d4c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00096d50:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096d54u)) return;
    }
}

/* _ZN4Game17isCityEventLockedEii @ 00096d54 (arm) */
void fn_00096d54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096d54:;
    {
        cpu->r[3] = 0x000082ddu;
    }
L_00096d58:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00096d5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00096d60:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00096d64:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00096d68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00096d6c:;
    {
        cpu->r[3] = 0x000086a8u;
    }
L_00096d70:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_00096d74:;
    {
        cpu->r[0] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_00096d78:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00096d7c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00096d80:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game26GetUnlockedCityEventsCountEi @ 00096d84 (arm) */
void fn_00096d84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096d84:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00096d88:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00096d8c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00096d90:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00096d94:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_00096d98:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00096d9c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00096da0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00096da4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00096da8:;
    {
        cpu->r[14] = 0x00096dacu; fn_00096d54(cpu);
    }
L_00096dac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00096db0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_00096db4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 1);
    }
L_00096db8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00096d98;
        }
    }
L_00096dbc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00096dc0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096dc4u)) return;
    }
}

/* _ZN4Game16getEventTipShortEi @ 00096dc4 (arm) */
void fn_00096dc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096dc4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00096dc8:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000bu, 1, 1);
    }
L_00096dcc:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000607u;
        }
    }
L_00096dd0:;
    {
        if (cond_test(cpu, 9)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00096dd4:;
    {
        cpu->r[3] = rd32(0x00096ddcu + + 0xcu);
    }
L_00096dd8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00096de0u, cpu->r[3], 0, 0);
    }
L_00096ddc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00096de0:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x3cu);
    }
L_00096de4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game19getRaceTypeStringIDEib @ 00096dec (arm) */
void fn_00096dec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096dec:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00096df0:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000bu, 1, 1);
    }
L_00096df4:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000607u;
        }
    }
L_00096df8:;
    {
        if (cond_test(cpu, 9)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00096dfc:;
    {
        cpu->r[3] = rd32(0x00096e04u + + 0xcu);
    }
L_00096e00:;
    {
        cpu->r[3] = add_flags(cpu, 0x00096e08u, cpu->r[3], 0, 0);
    }
L_00096e04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00096e08:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x6cu);
    }
L_00096e0c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game16getCarModelPriceEii @ 00096e14 (arm) */
void fn_00096e14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096e14:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00096e18:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00096e1c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00096e20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00096e2c;
        }
    }
L_00096e24:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00096e28:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00096e2cu)) return;
    }
L_00096e2c:;
    {
        cpu->r[14] = 0x00096e30u; fn_0009613c(cpu);
    }
L_00096e30:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00096e34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00096e38:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00096e3c:;
    {
        return fn_00096000(cpu);
    }
}

/* _ZN4Game26GetTuningCategoryKitsCountE16eTUNING_CATEGORY @ 00096e40 (arm) */
void fn_00096e40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096e40:;
    {
        cpu->r[2] = 0x00008c78u;
    }
L_00096e44:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00096e48:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00096e4c:;
    {
        cpu->r[12] = rd8(cpu->r[0] + cpu->r[2]);
    }
L_00096e50:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00096e54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[12];
        }
    }
L_00096e58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00096e8c;
        }
    }
L_00096e5c:;
    {
        cpu->r[4] = 0x0000002cu;
    }
L_00096e60:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00096e64:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00096e68:;
    {
        uint32_t v = cpu->r[4] * cpu->r[12]; cpu->r[4] = v;
    }
L_00096e6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00096e70:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000002cu, 0, 0);
    }
L_00096e74:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00008700u, 0, 0);
    }
L_00096e78:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x50u);
    }
L_00096e7c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_00096e80:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_00096e84:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_00096e88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00096e6c;
        }
    }
L_00096e8c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00096e90:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game26GetTuningTypeNameStringIdxEii @ 00096e94 (arm) */
void fn_00096e94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096e94:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00096e98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00096f04;
        }
    }
L_00096e9c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_00096ea0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00096ee8;
        }
    }
L_00096ea4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00096ea8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00096eac:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00096eb0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00096eb4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000635u;
        }
    }
L_00096eb8:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00096ebc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00096ec0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000636u;
        }
    }
L_00096ec4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00096ec8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_00096ecc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000637u;
        }
    }
L_00096ed0:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00096ed4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_00096ed8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000638u;
        }
    }
L_00096edc:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00096ee0:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00096ee4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00096ee8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000008u, 1, 1);
    }
L_00096eec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000641u;
        }
    }
L_00096ef0:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00096ef4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000009u, 1, 1);
    }
L_00096ef8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000640u;
        }
    }
L_00096efc:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00096f00:;
    {
        goto L_00096ee0;
    }
L_00096f04:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_00096f08:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000639u;
        }
    }
L_00096f0c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00096f10:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 1);
    }
L_00096f14:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x0000063du;
        }
    }
L_00096f18:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00096f1c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 1);
    }
L_00096f20:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x000004c5u;
        }
    }
L_00096f24:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00096f28:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_00096f2c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x0000063cu;
        }
    }
L_00096f30:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00096f34:;
    {
        goto L_00096ee0;
    }
}

/* _ZN4Game21SetCrtScene_BestScoreEi @ 00096f38 (arm) */
void fn_00096f38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096f38:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00096f3c:;
    {
        cpu->r[7] = 0x00001bd0u;
    }
L_00096f40:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00096f44:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00096f48:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_00096f4c:;
    {
        cpu->r[6] = 0x0000009cu;
    }
L_00096f50:;
    {
        cpu->r[14] = 0x00096f54u; fn_00096b5c(cpu);
    }
L_00096f54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x438u);
    }
L_00096f58:;
    {
        uint32_t v = cpu->r[6] * cpu->r[0] + cpu->r[3]; cpu->r[3] = v;
    }
L_00096f5c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1cu);
    }
L_00096f60:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00096f64:;
    {
        if (cond_test(cpu, 10)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096f68u)) return;
        }
    }
L_00096f68:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00096f6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00096f70:;
    {
        cpu->r[14] = 0x00096f74u; fn_00096b5c(cpu);
    }
L_00096f74:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x438u);
    }
L_00096f78:;
    {
        uint32_t v = cpu->r[6] * cpu->r[0] + cpu->r[3]; cpu->r[6] = v;
    }
L_00096f7c:;
    {
        wr32(cpu->r[6] + + 0x1cu, cpu->r[5]);
    }
L_00096f80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00096f84u)) return;
    }
}

/* _ZN4Game10GetCarTypeEi @ 00096f84 (arm) */
void fn_00096f84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096f84:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x444u);
    }
L_00096f88:;
    {
        cpu->r[2] = 0x0000004cu;
    }
L_00096f8c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1] + cpu->r[3]; cpu->r[3] = v;
    }
L_00096f90:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x48u);
    }
L_00096f94:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game20GetRandomSceneIdx_EUEv @ 00096f98 (arm) */
void fn_00096f98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00096f98:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00096f9c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00096fa0:;
    {
        cpu->r[14] = 0x00096fa4u; fn_0009648c(cpu);
    }
L_00096fa4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x468u);
    }
L_00096fa8:;
    {
        cpu->r[14] = 0x00096facu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00096fac:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x43cu);
    }
L_00096fb0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x438u);
    }
L_00096fb4:;
    {
        cpu->r[3] = 0x00006f97u;
    }
L_00096fb8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x96f9u << 16);
    }
L_00096fbc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_00096fc0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 2u, &shc); cpu->r[12] = v;
    }
L_00096fc4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[12] = v;
    }
L_00096fc8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00096fcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00097010;
        }
    }
L_00096fd0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00096fd4:;
    {
        cpu->r[5] = 0x0000009cu;
    }
L_00096fd8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00096fdc:;
    {
        cpu->r[4] = 0x000004d7u;
    }
L_00096fe0:;
    {
        goto L_00096ff4;
    }
L_00096fe4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00096fe8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00096fec:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00096ff0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00097010;
        }
    }
L_00096ff4:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2] + cpu->r[0]; cpu->r[2] = v;
    }
L_00096ff8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xcu);
    }
L_00096ffc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_00097000:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
        }
    }
L_00097004:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00097008:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00096fe4;
        }
    }
L_0009700c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00097010:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00097014:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00097018u)) return;
    }
}

/* _ZN4Game20GetRandomSceneIdx_USEv @ 00097018 (arm) */
void fn_00097018(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097018:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0009701c:;
    {
        cpu->r[14] = 0x00097020u; fn_0009648c(cpu);
    }
L_00097020:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00097024:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00097028u)) return;
    }
}

/* _ZN4Game24SceneInfo_DBGTraceEventsEv @ 00097028 (arm) */
void fn_00097028(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097028:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game10increaseNrEiii @ 0009702c (arm) */
void fn_0009702c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009702c:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_00097030:;
    {
        if (cond_test(cpu, 1)) {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
        }
    }
L_00097034:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00097038:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000970b0;
        }
    }
L_0009703c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00097040:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = cpu->r[2];
        }
    }
L_00097044:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000970a4;
        }
    }
L_00097048:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4a8u);
    }
L_0009704c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_00097050:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000970c8;
        }
    }
L_00097054:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00097058:;
    {
        wr32(cpu->r[0] + + 0x4b0u, cpu->r[3]);
    }
L_0009705c:;
    {
        wr32(cpu->r[0] + + 0x4a8u, cpu->r[1]);
    }
L_00097060:;
    {
        wr32(cpu->r[0] + + 0x4acu, cpu->r[2]);
    }
L_00097064:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 0);
    }
L_00097068:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[3];
    }
L_0009706c:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[12];
    }
L_00097070:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,9);
    }
L_00097074:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_00097078:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[1];
    }
L_0009707c:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[2];
    }
L_00097080:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_00097084:;
    {
        wr32(cpu->r[0] + + 0x4b0u, cpu->r[4]);
    }
L_00097088:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,12);
    }
L_0009708c:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 6) / *vfp_d(cpu, 7);
    }
L_00097090:;
    {
        *vfp_d(cpu,5) = (double)*(int32_t*)vfp_s(cpu,10);
    }
L_00097094:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,9);
    }
L_00097098:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) + *vfp_d(cpu, 5) * *vfp_d(cpu, 6);
    }
L_0009709c:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_d(cpu,7);
    }
L_000970a0:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000970a4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000970a8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000970ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000970b0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000970b4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000970b8:;
    {
        wr32(cpu->r[0] + + 0x4b0u, cpu->r[3]);
    }
L_000970bc:;
    {
        wr32(cpu->r[0] + + 0x4a8u, cpu->r[3]);
    }
L_000970c0:;
    {
        wr32(cpu->r[0] + + 0x4acu, cpu->r[3]);
    }
L_000970c4:;
    {
        goto L_000970a4;
    }
L_000970c8:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4acu);
    }
L_000970cc:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_000970d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00097054;
        }
    }
L_000970d4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4b0u);
    }
L_000970d8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000970dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000970a4;
        }
    }
L_000970e0:;
    {
        goto L_00097064;
    }
}

/* _ZN4Game10GetKeyMaskEi @ 000970e4 (arm) */
void fn_000970e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000970e4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 0);
    }
L_000970e8:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000003au, 1, 1);
    }
L_000970ec:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000970f0:;
    {
        if (cond_test(cpu, 9)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000970f4:;
    {
        cpu->r[3] = rd32(0x000970fcu + + 0xcu);
    }
L_000970f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00097100u, cpu->r[3], 0, 0);
    }
L_000970fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00097100:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x9cu);
    }
L_00097104:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_0 @ 0009710c (arm) */
void fn_0009710c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009710c:;
    {
        cpu->r[3] = rd32(0x00097114u + + 0x20u);
    }
L_00097110:;
    {
        cpu->r[1] = rd32(0x00097118u + + 0x20u);
    }
L_00097114:;
    {
        cpu->r[3] = add_flags(cpu, 0x0009711cu, cpu->r[3], 0, 0);
    }
L_00097118:;
    {
        cpu->r[2] = rd32(0x00097120u + + 0x1cu);
    }
L_0009711c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00097120:;
    {
        cpu->r[2] = add_flags(cpu, 0x00097128u, cpu->r[2], 0, 0);
    }
L_00097124:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00097128:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_0009712c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00097130:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game28GetCrtScene_ShortcutUnlockedEi @ 00097140 (arm) */
void fn_00097140(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097140:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000009u, 1, 1);
    }
L_00097144:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00097148:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0009714c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00097150:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00097154:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0009718c;
        }
    }
L_00097158:;
    {
        cpu->r[1] = rd32(0x00097160u + + 0x58u);
    }
L_0009715c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00097160:;
    {
        cpu->r[12] = rd32(0x00097168u + + 0x54u);
    }
L_00097164:;
    {
        cpu->r[14] = 0x00002674u;
    }
L_00097168:;
    {
        cpu->r[2] = rd32(0x00097170u + + 0x50u);
    }
L_0009716c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00097174u, cpu->r[1], 0, 0);
    }
L_00097170:;
    {
        cpu->r[3] = rd32(0x00097178u + + 0x4cu);
    }
L_00097174:;
    {
        cpu->r[12] = add_flags(cpu, 0x0009717cu, cpu->r[12], 0, 0);
    }
L_00097178:;
    {
        cpu->r[2] = add_flags(cpu, 0x00097180u, cpu->r[2], 0, 0);
    }
L_0009717c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000188u, 0, 0);
    }
L_00097180:;
    {
        cpu->r[3] = add_flags(cpu, 0x00097188u, cpu->r[3], 0, 0);
    }
L_00097184:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00097188:;
    {
        cpu->r[14] = 0x0009718cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0009718c:;
    {
        cpu->r[3] = 0x00001bd0u;
    }
L_00097190:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00097194:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00097198:;
    {
        cpu->r[14] = 0x0009719cu; fn_00096b5c(cpu);
    }
L_0009719c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x438u);
    }
L_000971a0:;
    {
        cpu->r[2] = 0x0000009cu;
    }
L_000971a4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0] + cpu->r[3]; cpu->r[3] = v;
    }
L_000971a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_000971ac:;
    {
        cpu->r[0] = rd8(cpu->r[5] + + 0x54u);
    }
L_000971b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000971b4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000971b8u)) return;
    }
}

/* _ZN4Game28SetCrtScene_ShortcutUnlockedEib @ 000971c8 (arm) */
void fn_000971c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000971c8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000009u, 1, 1);
    }
L_000971cc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000971d0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000971d4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000971d8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000971dc:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000971e0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00097218;
        }
    }
L_000971e4:;
    {
        cpu->r[1] = rd32(0x000971ecu + + 0x58u);
    }
L_000971e8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000971ec:;
    {
        cpu->r[12] = rd32(0x000971f4u + + 0x54u);
    }
L_000971f0:;
    {
        cpu->r[14] = 0x0000266cu;
    }
L_000971f4:;
    {
        cpu->r[2] = rd32(0x000971fcu + + 0x50u);
    }
L_000971f8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00097200u, cpu->r[1], 0, 0);
    }
L_000971fc:;
    {
        cpu->r[3] = rd32(0x00097204u + + 0x4cu);
    }
L_00097200:;
    {
        cpu->r[12] = add_flags(cpu, 0x00097208u, cpu->r[12], 0, 0);
    }
L_00097204:;
    {
        cpu->r[2] = add_flags(cpu, 0x0009720cu, cpu->r[2], 0, 0);
    }
L_00097208:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000001a8u, 0, 0);
    }
L_0009720c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00097214u, cpu->r[3], 0, 0);
    }
L_00097210:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00097214:;
    {
        cpu->r[14] = 0x00097218u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00097218:;
    {
        cpu->r[3] = 0x00001bd0u;
    }
L_0009721c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00097220:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00097224:;
    {
        cpu->r[14] = 0x00097228u; fn_00096b5c(cpu);
    }
L_00097228:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x438u);
    }
L_0009722c:;
    {
        cpu->r[2] = 0x0000009cu;
    }
L_00097230:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0] + cpu->r[3]; cpu->r[3] = v;
    }
L_00097234:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_00097238:;
    {
        wr8(cpu->r[5] + + 0x54u, cpu->r[6]);
    }
L_0009723c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00097240:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00097244u)) return;
    }
}

/* _ZN4Game20SetCrtScene_BestTimeEi @ 00097254 (arm) */
void fn_00097254(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097254:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00097258:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0009725c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00097260:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00097264:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000972b0;
        }
    }
L_00097268:;
    {
        cpu->r[7] = 0x00001bd0u;
    }
L_0009726c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00097270:;
    {
        cpu->r[6] = 0x0000009cu;
    }
L_00097274:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00097278:;
    {
        cpu->r[14] = 0x0009727cu; fn_00096b5c(cpu);
    }
L_0009727c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x438u);
    }
L_00097280:;
    {
        uint32_t v = cpu->r[6] * cpu->r[0] + cpu->r[3]; cpu->r[3] = v;
    }
L_00097284:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x18u);
    }
L_00097288:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0009728c:;
    {
        if (cond_test(cpu, 3)) {
        goto L_000972a8;
        }
    }
L_00097290:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00097294:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00097298:;
    {
        cpu->r[14] = 0x0009729cu; fn_00096b5c(cpu);
    }
L_0009729c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x438u);
    }
L_000972a0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[0] + cpu->r[3]; cpu->r[6] = v;
    }
L_000972a4:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[5]);
    }
L_000972a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000972ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000972b0u)) return;
    }
L_000972b0:;
    {
        cpu->r[1] = rd32(0x000972b8u + + 0x30u);
    }
L_000972b4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000972b8:;
    {
        cpu->r[12] = rd32(0x000972c0u + + 0x2cu);
    }
L_000972bc:;
    {
        cpu->r[14] = 0x0000265bu;
    }
L_000972c0:;
    {
        cpu->r[2] = rd32(0x000972c8u + + 0x28u);
    }
L_000972c4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000972ccu, cpu->r[1], 0, 0);
    }
L_000972c8:;
    {
        cpu->r[3] = rd32(0x000972d0u + + 0x24u);
    }
L_000972cc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000972d4u, cpu->r[12], 0, 0);
    }
L_000972d0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000972d8u, cpu->r[2], 0, 0);
    }
L_000972d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000001c8u, 0, 0);
    }
L_000972d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000972e0u, cpu->r[3], 0, 0);
    }
L_000972dc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000972e0:;
    {
        cpu->r[14] = 0x000972e4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000972e4:;
    {
        goto L_00097268;
    }
}

/* _ZN4Game19GetIconForTuningKitEiii @ 000972f8 (arm) */
void fn_000972f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000972f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000972fc:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00097300:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00097304:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00097308:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0009730c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00097344;
        }
    }
L_00097310:;
    {
        cpu->r[1] = rd32(0x00097318u + + 0x40u);
    }
L_00097314:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00097318:;
    {
        cpu->r[12] = rd32(0x00097320u + + 0x3cu);
    }
L_0009731c:;
    {
        cpu->r[14] = 0x0000255fu;
    }
L_00097320:;
    {
        cpu->r[2] = rd32(0x00097328u + + 0x38u);
    }
L_00097324:;
    {
        cpu->r[1] = add_flags(cpu, 0x0009732cu, cpu->r[1], 0, 0);
    }
L_00097328:;
    {
        cpu->r[3] = rd32(0x00097330u + + 0x34u);
    }
L_0009732c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00097334u, cpu->r[12], 0, 0);
    }
L_00097330:;
    {
        cpu->r[2] = add_flags(cpu, 0x00097338u, cpu->r[2], 0, 0);
    }
L_00097334:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000001e0u, 0, 0);
    }
L_00097338:;
    {
        cpu->r[3] = add_flags(cpu, 0x00097340u, cpu->r[3], 0, 0);
    }
L_0009733c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00097340:;
    {
        cpu->r[14] = 0x00097344u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00097344:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_00097348:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_0009734c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000005u, 0, 0);
    }
L_00097350:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00097354:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00097358u)) return;
    }
}

/* _ZN4Game23GetTuningKitUnlockLevelEi @ 00097368 (arm) */
void fn_00097368(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097368:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000001du, 1, 1);
    }
L_0009736c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00097370:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00097374:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00097378:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0009737c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000973b4;
        }
    }
L_00097380:;
    {
        cpu->r[1] = rd32(0x00097388u + + 0x44u);
    }
L_00097384:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00097388:;
    {
        cpu->r[12] = rd32(0x00097390u + + 0x40u);
    }
L_0009738c:;
    {
        cpu->r[14] = 0x00002511u;
    }
L_00097390:;
    {
        cpu->r[2] = rd32(0x00097398u + + 0x3cu);
    }
L_00097394:;
    {
        cpu->r[1] = add_flags(cpu, 0x0009739cu, cpu->r[1], 0, 0);
    }
L_00097398:;
    {
        cpu->r[3] = rd32(0x000973a0u + + 0x38u);
    }
L_0009739c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000973a4u, cpu->r[12], 0, 0);
    }
L_000973a0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000973a8u, cpu->r[2], 0, 0);
    }
L_000973a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000001f4u, 0, 0);
    }
L_000973a8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000973b0u, cpu->r[3], 0, 0);
    }
L_000973ac:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000973b0:;
    {
        cpu->r[14] = 0x000973b4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000973b4:;
    {
        cpu->r[3] = 0x0000002cu;
    }
L_000973b8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[4] + cpu->r[5]; cpu->r[4] = v;
    }
L_000973bc:;
    {
        cpu->r[3] = 0x00008774u;
    }
L_000973c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000973c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000973c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000973ccu)) return;
    }
}

/* _ZN4Game17GetTuningKitIndexEiii @ 000973dc (arm) */
void fn_000973dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000973dc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_000973e0:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000973e4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000973e8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000973ec:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000973f0:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000973f4:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000973f8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000974b4;
        }
    }
L_000973fc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000009u, 1, 1);
    }
L_00097400:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0009747c;
        }
    }
L_00097404:;
    {
        cpu->r[3] = 0x00008c78u;
    }
L_00097408:;
    {
        cpu->r[1] = rd8(cpu->r[7] + cpu->r[3]);
    }
L_0009740c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00097410:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00097470;
        }
    }
L_00097414:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00008700u, 0, 0);
    }
L_00097418:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0009741c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000050u, 0, 0);
    }
L_00097420:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00097424:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00097428:;
    {
        goto L_00097444;
    }
L_0009742c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_00097430:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000002cu, 0, 0);
    }
L_00097434:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00097468;
        }
    }
L_00097438:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0009743c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_00097440:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00097470;
        }
    }
L_00097444:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00097448:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0009744c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009742c;
        }
    }
L_00097450:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_00097454:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000002cu, 0, 0);
    }
L_00097458:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0009745c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_00097460:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_00097464:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00097438;
        }
    }
L_00097468:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0009746c:;
    {
        goto L_00097474;
    }
L_00097470:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00097474:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00097478:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009747cu)) return;
    }
L_0009747c:;
    {
        cpu->r[1] = rd32(0x00097484u + + 0x68u);
    }
L_00097480:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00097484:;
    {
        cpu->r[12] = rd32(0x0009748cu + + 0x64u);
    }
L_00097488:;
    {
        cpu->r[14] = 0x000024eau;
    }
L_0009748c:;
    {
        cpu->r[2] = rd32(0x00097494u + + 0x60u);
    }
L_00097490:;
    {
        cpu->r[1] = add_flags(cpu, 0x00097498u, cpu->r[1], 0, 0);
    }
L_00097494:;
    {
        cpu->r[3] = rd32(0x0009749cu + + 0x5cu);
    }
L_00097498:;
    {
        cpu->r[12] = add_flags(cpu, 0x000974a0u, cpu->r[12], 0, 0);
    }
L_0009749c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000974a4u, cpu->r[2], 0, 0);
    }
L_000974a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000020cu, 0, 0);
    }
L_000974a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000974acu, cpu->r[3], 0, 0);
    }
L_000974a8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000974ac:;
    {
        cpu->r[14] = 0x000974b0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000974b0:;
    {
        goto L_00097404;
    }
L_000974b4:;
    {
        cpu->r[1] = rd32(0x000974bcu + + 0x40u);
    }
L_000974b8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000974bc:;
    {
        cpu->r[12] = rd32(0x000974c4u + + 0x3cu);
    }
L_000974c0:;
    {
        cpu->r[14] = 0x000024e9u;
    }
L_000974c4:;
    {
        cpu->r[2] = rd32(0x000974ccu + + 0x38u);
    }
L_000974c8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000974d0u, cpu->r[1], 0, 0);
    }
L_000974cc:;
    {
        cpu->r[3] = rd32(0x000974d4u + + 0x34u);
    }
L_000974d0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000974d8u, cpu->r[12], 0, 0);
    }
L_000974d4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000974dcu, cpu->r[2], 0, 0);
    }
L_000974d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000020cu, 0, 0);
    }
L_000974dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000974e4u, cpu->r[3], 0, 0);
    }
L_000974e0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000974e4:;
    {
        cpu->r[14] = 0x000974e8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000974e8:;
    {
        goto L_000973fc;
    }
}

/* _ZN4Game12GetTuningKitEiii @ 0009750c (arm) */
void fn_0009750c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009750c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_00097510:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00097514:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00097518:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0009751c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00097520:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00097524:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_00097528:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000975f4;
        }
    }
L_0009752c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000009u, 1, 1);
    }
L_00097530:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000975bc;
        }
    }
L_00097534:;
    {
        cpu->r[3] = 0x00008c78u;
    }
L_00097538:;
    {
        cpu->r[12] = rd8(cpu->r[7] + cpu->r[3]);
    }
L_0009753c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00097540:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000975b0;
        }
    }
L_00097544:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00008700u, 0, 0);
    }
L_00097548:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0009754c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000050u, 0, 0);
    }
L_00097550:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00097554:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00097558:;
    {
        goto L_00097574;
    }
L_0009755c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_00097560:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000002cu, 0, 0);
    }
L_00097564:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00097598;
        }
    }
L_00097568:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0009756c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00097570:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000975b0;
        }
    }
L_00097574:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00097578:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_0009757c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009755c;
        }
    }
L_00097580:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_00097584:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000002cu, 0, 0);
    }
L_00097588:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_0009758c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_00097590:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_00097594:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00097568;
        }
    }
L_00097598:;
    {
        cpu->r[0] = 0x0000002cu;
    }
L_0009759c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[0] = v;
    }
L_000975a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00008700u, 0, 0);
    }
L_000975a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000024u, 0, 0);
    }
L_000975a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_000975ac:;
    {
        goto L_000975b4;
    }
L_000975b0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000975b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000975b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000975bcu)) return;
    }
L_000975bc:;
    {
        cpu->r[1] = rd32(0x000975c4u + + 0x68u);
    }
L_000975c0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000975c4:;
    {
        cpu->r[12] = rd32(0x000975ccu + + 0x64u);
    }
L_000975c8:;
    {
        cpu->r[14] = 0x000024d7u;
    }
L_000975cc:;
    {
        cpu->r[2] = rd32(0x000975d4u + + 0x60u);
    }
L_000975d0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000975d8u, cpu->r[1], 0, 0);
    }
L_000975d4:;
    {
        cpu->r[3] = rd32(0x000975dcu + + 0x5cu);
    }
L_000975d8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000975e0u, cpu->r[12], 0, 0);
    }
L_000975dc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000975e4u, cpu->r[2], 0, 0);
    }
L_000975e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000220u, 0, 0);
    }
L_000975e4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000975ecu, cpu->r[3], 0, 0);
    }
L_000975e8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000975ec:;
    {
        cpu->r[14] = 0x000975f0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000975f0:;
    {
        goto L_00097534;
    }
L_000975f4:;
    {
        cpu->r[1] = rd32(0x000975fcu + + 0x40u);
    }
L_000975f8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000975fc:;
    {
        cpu->r[12] = rd32(0x00097604u + + 0x3cu);
    }
L_00097600:;
    {
        cpu->r[14] = 0x000024d6u;
    }
L_00097604:;
    {
        cpu->r[2] = rd32(0x0009760cu + + 0x38u);
    }
L_00097608:;
    {
        cpu->r[1] = add_flags(cpu, 0x00097610u, cpu->r[1], 0, 0);
    }
L_0009760c:;
    {
        cpu->r[3] = rd32(0x00097614u + + 0x34u);
    }
L_00097610:;
    {
        cpu->r[12] = add_flags(cpu, 0x00097618u, cpu->r[12], 0, 0);
    }
L_00097614:;
    {
        cpu->r[2] = add_flags(cpu, 0x0009761cu, cpu->r[2], 0, 0);
    }
L_00097618:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000220u, 0, 0);
    }
L_0009761c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00097624u, cpu->r[3], 0, 0);
    }
L_00097620:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00097624:;
    {
        cpu->r[14] = 0x00097628u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00097628:;
    {
        goto L_0009752c;
    }
}

/* _ZN4Game27GetTypeForCityEventSlotPairEii @ 0009764c (arm) */
void fn_0009764c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009764c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00097650:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00097654:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00097658:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0009765c:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00097660:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000976cc;
        }
    }
L_00097664:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x474u);
    }
L_00097668:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0009766c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000976cc;
        }
    }
L_00097670:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 1);
    }
L_00097674:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000976ac;
        }
    }
L_00097678:;
    {
        cpu->r[1] = rd32(0x00097680u + + 0x84u);
    }
L_0009767c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00097680:;
    {
        cpu->r[12] = rd32(0x00097688u + + 0x80u);
    }
L_00097684:;
    {
        cpu->r[14] = 0x00002465u;
    }
L_00097688:;
    {
        cpu->r[2] = rd32(0x00097690u + + 0x7cu);
    }
L_0009768c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00097694u, cpu->r[1], 0, 0);
    }
L_00097690:;
    {
        cpu->r[3] = rd32(0x00097698u + + 0x78u);
    }
L_00097694:;
    {
        cpu->r[12] = add_flags(cpu, 0x0009769cu, cpu->r[12], 0, 0);
    }
L_00097698:;
    {
        cpu->r[2] = add_flags(cpu, 0x000976a0u, cpu->r[2], 0, 0);
    }
L_0009769c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000230u, 0, 0);
    }
L_000976a0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000976a8u, cpu->r[3], 0, 0);
    }
L_000976a4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000976a8:;
    {
        cpu->r[14] = 0x000976acu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000976ac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x438u);
    }
L_000976b0:;
    {
        cpu->r[2] = 0x0000009cu;
    }
L_000976b4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_000976b8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5] + cpu->r[3]; cpu->r[5] = v;
    }
L_000976bc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000976c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x6cu);
    }
L_000976c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000976c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000976ccu)) return;
    }
L_000976cc:;
    {
        cpu->r[1] = rd32(0x000976d4u + + 0x40u);
    }
L_000976d0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000976d4:;
    {
        cpu->r[12] = rd32(0x000976dcu + + 0x3cu);
    }
L_000976d8:;
    {
        cpu->r[14] = 0x00002464u;
    }
L_000976dc:;
    {
        cpu->r[2] = rd32(0x000976e4u + + 0x38u);
    }
L_000976e0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000976e8u, cpu->r[1], 0, 0);
    }
L_000976e4:;
    {
        cpu->r[3] = rd32(0x000976ecu + + 0x34u);
    }
L_000976e8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000976f0u, cpu->r[12], 0, 0);
    }
L_000976ec:;
    {
        cpu->r[2] = add_flags(cpu, 0x000976f4u, cpu->r[2], 0, 0);
    }
L_000976f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000230u, 0, 0);
    }
L_000976f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000976fcu, cpu->r[3], 0, 0);
    }
L_000976f8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000976fc:;
    {
        cpu->r[14] = 0x00097700u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00097700:;
    {
        goto L_00097670;
    }
}

/* _ZN4Game30GetSlotIdxForCityEventTypePairEii @ 00097724 (arm) */
void fn_00097724(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097724:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00097728:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0009772c:;
    {
        cpu->r[5] = rd32(0x00097734u + + 0xe0u);
    }
L_00097730:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00097734:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00097738:;
    {
        cpu->r[5] = add_flags(cpu, 0x00097740u, cpu->r[5], 0, 0);
    }
L_0009773c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0009779c;
        }
    }
L_00097740:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x474u);
    }
L_00097744:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00097748:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0009779c;
        }
    }
L_0009774c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_00097750:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 1);
    }
L_00097754:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000977dc;
        }
    }
L_00097758:;
    {
        cpu->r[3] = rd32(0x00097760u + + 0xb8u);
    }
L_0009775c:;
    {
        cpu->r[2] = 0x0000009cu;
    }
L_00097760:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00097764:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00097768:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009776c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x438u);
    }
L_00097770:;
    {
        uint32_t v = cpu->r[2] * cpu->r[6] + cpu->r[3]; cpu->r[6] = v;
    }
L_00097774:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x6cu);
    }
L_00097778:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_0009777c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00097780:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00097794;
        }
    }
L_00097784:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00097788:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 1);
    }
L_0009778c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00097774;
        }
    }
L_00097790:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00097794:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00097798:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009779cu)) return;
    }
L_0009779c:;
    {
        cpu->r[1] = rd32(0x000977a4u + + 0x78u);
    }
L_000977a0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000977a4:;
    {
        cpu->r[12] = rd32(0x000977acu + + 0x74u);
    }
L_000977a8:;
    {
        cpu->r[14] = 0x00002452u;
    }
L_000977ac:;
    {
        cpu->r[2] = rd32(0x000977b4u + + 0x70u);
    }
L_000977b0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000977b8u, cpu->r[1], 0, 0);
    }
L_000977b4:;
    {
        cpu->r[3] = rd32(0x000977bcu + + 0x6cu);
    }
L_000977b8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000977c0u, cpu->r[12], 0, 0);
    }
L_000977bc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000977c4u, cpu->r[2], 0, 0);
    }
L_000977c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000024cu, 0, 0);
    }
L_000977c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000977ccu, cpu->r[3], 0, 0);
    }
L_000977c8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000977cc:;
    {
        cpu->r[14] = 0x000977d0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000977d0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_000977d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 1);
    }
L_000977d8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00097758;
        }
    }
L_000977dc:;
    {
        cpu->r[1] = rd32(0x000977e4u + + 0x48u);
    }
L_000977e0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000977e4:;
    {
        cpu->r[12] = rd32(0x000977ecu + + 0x44u);
    }
L_000977e8:;
    {
        cpu->r[14] = 0x00002453u;
    }
L_000977ec:;
    {
        cpu->r[2] = rd32(0x000977f4u + + 0x40u);
    }
L_000977f0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000977f8u, cpu->r[1], 0, 0);
    }
L_000977f4:;
    {
        cpu->r[3] = rd32(0x000977fcu + + 0x3cu);
    }
L_000977f8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00097800u, cpu->r[12], 0, 0);
    }
L_000977fc:;
    {
        cpu->r[2] = add_flags(cpu, 0x00097804u, cpu->r[2], 0, 0);
    }
L_00097800:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000024cu, 0, 0);
    }
L_00097804:;
    {
        cpu->r[3] = add_flags(cpu, 0x0009780cu, cpu->r[3], 0, 0);
    }
L_00097808:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0009780c:;
    {
        cpu->r[14] = 0x00097810u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00097810:;
    {
        goto L_00097758;
    }
}

/* _ZN4Game13GetUnlockedByEi @ 0009783c (arm) */
void fn_0009783c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009783c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00097840:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_00097844:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00097848:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00097858;
        }
    }
L_0009784c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x474u);
    }
L_00097850:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00097854:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0009788c;
        }
    }
L_00097858:;
    {
        cpu->r[1] = rd32(0x00097860u + + 0x38u);
    }
L_0009785c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00097860:;
    {
        cpu->r[12] = rd32(0x00097868u + + 0x34u);
    }
L_00097864:;
    {
        cpu->r[14] = 0x00002227u;
    }
L_00097868:;
    {
        cpu->r[2] = rd32(0x00097870u + + 0x30u);
    }
L_0009786c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00097874u, cpu->r[1], 0, 0);
    }
L_00097870:;
    {
        cpu->r[3] = rd32(0x00097878u + + 0x2cu);
    }
L_00097874:;
    {
        cpu->r[12] = add_flags(cpu, 0x0009787cu, cpu->r[12], 0, 0);
    }
L_00097878:;
    {
        cpu->r[2] = add_flags(cpu, 0x00097880u, cpu->r[2], 0, 0);
    }
L_0009787c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000026cu, 0, 0);
    }
L_00097880:;
    {
        cpu->r[3] = add_flags(cpu, 0x00097888u, cpu->r[3], 0, 0);
    }
L_00097884:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00097888:;
    {
        cpu->r[14] = 0x0009788cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0009788c:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00097890:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00097894:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00097898u)) return;
    }
}

/* _ZN4Game11GetCarModelEi @ 000978a8 (arm) */
void fn_000978a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000978a8:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000978ac:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000978b0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000978b4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000978b8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000978c8;
        }
    }
L_000978bc:;
    {
        cpu->r[14] = 0x000978c0u; fn_00096114(cpu);
    }
L_000978c0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_000978c4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000978fc;
        }
    }
L_000978c8:;
    {
        cpu->r[1] = rd32(0x000978d0u + + 0x44u);
    }
L_000978cc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000978d0:;
    {
        cpu->r[12] = rd32(0x000978d8u + + 0x40u);
    }
L_000978d4:;
    {
        cpu->r[14] = 0x000007a2u;
    }
L_000978d8:;
    {
        cpu->r[2] = rd32(0x000978e0u + + 0x3cu);
    }
L_000978dc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000978e4u, cpu->r[1], 0, 0);
    }
L_000978e0:;
    {
        cpu->r[3] = rd32(0x000978e8u + + 0x38u);
    }
L_000978e4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000978ecu, cpu->r[12], 0, 0);
    }
L_000978e8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000978f0u, cpu->r[2], 0, 0);
    }
L_000978ec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000027cu, 0, 0);
    }
L_000978f0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000978f8u, cpu->r[3], 0, 0);
    }
L_000978f4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000978f8:;
    {
        cpu->r[14] = 0x000978fcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000978fc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x444u);
    }
L_00097900:;
    {
        cpu->r[2] = 0x0000004cu;
    }
L_00097904:;
    {
        uint32_t v = cpu->r[2] * cpu->r[4] + cpu->r[3]; cpu->r[4] = v;
    }
L_00097908:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0009790c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00097910:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00097914u)) return;
    }
}

/* _Z9libTrailsi @ 00097924 (arm) */
void fn_00097924(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097924:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00097928:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009792c:;
    {
        cpu->r[4] = rd32(0x00097934u + + 0x54u);
    }
L_00097930:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00097934:;
    {
        cpu->r[4] = add_flags(cpu, 0x0009793cu, cpu->r[4], 0, 0);
    }
L_00097938:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00097970;
        }
    }
L_0009793c:;
    {
        cpu->r[1] = rd32(0x00097944u + + 0x48u);
    }
L_00097940:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00097944:;
    {
        cpu->r[12] = rd32(0x0009794cu + + 0x44u);
    }
L_00097948:;
    {
        cpu->r[14] = 0x000000f6u;
    }
L_0009794c:;
    {
        cpu->r[2] = rd32(0x00097954u + + 0x40u);
    }
L_00097950:;
    {
        cpu->r[1] = add_flags(cpu, 0x00097958u, cpu->r[1], 0, 0);
    }
L_00097954:;
    {
        cpu->r[3] = rd32(0x0009795cu + + 0x3cu);
    }
L_00097958:;
    {
        cpu->r[12] = add_flags(cpu, 0x00097960u, cpu->r[12], 0, 0);
    }
L_0009795c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00097964u, cpu->r[2], 0, 0);
    }
L_00097960:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000288u, 0, 0);
    }
L_00097964:;
    {
        cpu->r[3] = add_flags(cpu, 0x0009796cu, cpu->r[3], 0, 0);
    }
L_00097968:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0009796c:;
    {
        cpu->r[14] = 0x00097970u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00097970:;
    {
        cpu->r[3] = rd32(0x00097978u + + 0x24u);
    }
L_00097974:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00097978:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0009797c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 4u, &shc), 0, 0);
    }
L_00097980:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00097984:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00097988u)) return;
    }
}

/* _ZN10CSingletonI13CGameSettingsE11GetInstanceEv @ 000979a0 (arm) */
void fn_000979a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000979a0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000979a4:;
    {
        cpu->r[4] = rd32(0x000979acu + + 0x4cu);
    }
L_000979a8:;
    {
        cpu->r[3] = rd32(0x000979b0u + + 0x4cu);
    }
L_000979ac:;
    {
        cpu->r[4] = add_flags(cpu, 0x000979b4u, cpu->r[4], 0, 0);
    }
L_000979b0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000979b4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000979b8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000979bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000979cc;
        }
    }
L_000979c0:;
    {
        cpu->r[6] = rd32(0x000979c8u + + 0x38u);
    }
L_000979c4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000979c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000979ccu)) return;
    }
L_000979cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000979d0:;
    {
        cpu->r[14] = 0x000979d4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000979d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000979d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000979c0;
        }
    }
L_000979dc:;
    {
        cpu->r[6] = rd32(0x000979e4u + + 0x1cu);
    }
L_000979e0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000979e4:;
    {
        cpu->r[14] = 0x000979e8u; fn_00094228(cpu);
    }
L_000979e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000979ec:;
    {
        cpu->r[14] = 0x000979f0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000979f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000979f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000979f8u)) return;
    }
}

/* _ZN4Game4ExitEv @ 00097a04 (arm) */
void fn_00097a04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
    /* Game::Exit normally calls the Android activity's finish(); the
     * host owns the process, so make the in-game Exit item quit. */
    platform_request_exit();
    return;
L_00097a04:;
    {
        return fn_000724c0(cpu);
    }
}

/* _ZN4Game19SetDeviceTypeStringEPc @ 00097a08 (arm) */
void fn_00097a08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097a08:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00097a0c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00097a10:;
    {
        cpu->r[1] = rd32(0x00097a18u + + 0xa4u);
    }
L_00097a14:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00097a18:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00097a1c:;
    {
        wr32(cpu->r[0] + + 0x428u, cpu->r[3]);
    }
L_00097a20:;
    {
        cpu->r[1] = add_flags(cpu, 0x00097a28u, cpu->r[1], 0, 0);
    }
L_00097a24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00097a28:;
    {
        cpu->r[14] = 0x00097a2cu; imp_strcmp(cpu); /* strcmp */
    }
L_00097a2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00097a30:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00097a34:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x428u, cpu->r[3]);
        }
    }
L_00097a38:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00097a3cu)) return;
        }
    }
L_00097a3c:;
    {
        cpu->r[1] = rd32(0x00097a44u + + 0x7cu);
    }
L_00097a40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00097a44:;
    {
        cpu->r[1] = add_flags(cpu, 0x00097a4cu, cpu->r[1], 0, 0);
    }
L_00097a48:;
    {
        cpu->r[14] = 0x00097a4cu; imp_strcmp(cpu); /* strcmp */
    }
L_00097a4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00097a50:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_00097a54:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x428u, cpu->r[3]);
        }
    }
L_00097a58:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00097a5cu)) return;
        }
    }
L_00097a5c:;
    {
        cpu->r[1] = rd32(0x00097a64u + + 0x60u);
    }
L_00097a60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00097a64:;
    {
        cpu->r[1] = add_flags(cpu, 0x00097a6cu, cpu->r[1], 0, 0);
    }
L_00097a68:;
    {
        cpu->r[14] = 0x00097a6cu; imp_strcmp(cpu); /* strcmp */
    }
L_00097a6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00097a70:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000003u;
        }
    }
L_00097a74:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x428u, cpu->r[3]);
        }
    }
L_00097a78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00097a7cu)) return;
        }
    }
L_00097a7c:;
    {
        cpu->r[1] = rd32(0x00097a84u + + 0x44u);
    }
L_00097a80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00097a84:;
    {
        cpu->r[1] = add_flags(cpu, 0x00097a8cu, cpu->r[1], 0, 0);
    }
L_00097a88:;
    {
        cpu->r[14] = 0x00097a8cu; imp_strcmp(cpu); /* strcmp */
    }
L_00097a8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00097a90:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000004u;
        }
    }
L_00097a94:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x428u, cpu->r[3]);
        }
    }
L_00097a98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00097a9cu)) return;
        }
    }
L_00097a9c:;
    {
        cpu->r[1] = rd32(0x00097aa4u + + 0x28u);
    }
L_00097aa0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00097aa4:;
    {
        cpu->r[1] = add_flags(cpu, 0x00097aacu, cpu->r[1], 0, 0);
    }
L_00097aa8:;
    {
        cpu->r[14] = 0x00097aacu; imp_strcmp(cpu); /* strcmp */
    }
L_00097aac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00097ab0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000005u;
        }
    }
L_00097ab4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x428u, cpu->r[3]);
        }
    }
L_00097ab8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00097abcu)) return;
    }
}

/* _ZN10CSingletonI13SpriteManagerE11GetInstanceEv @ 00097ad0 (arm) */
void fn_00097ad0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097ad0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00097ad4:;
    {
        cpu->r[4] = rd32(0x00097adcu + + 0x68u);
    }
L_00097ad8:;
    {
        cpu->r[3] = rd32(0x00097ae0u + + 0x68u);
    }
L_00097adc:;
    {
        cpu->r[4] = add_flags(cpu, 0x00097ae4u, cpu->r[4], 0, 0);
    }
L_00097ae0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00097ae4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00097ae8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00097aec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00097afc;
        }
    }
L_00097af0:;
    {
        cpu->r[5] = rd32(0x00097af8u + + 0x54u);
    }
L_00097af4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00097af8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00097afcu)) return;
    }
L_00097afc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00097b00:;
    {
        cpu->r[14] = 0x00097b04u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00097b04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00097b08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00097af0;
        }
    }
L_00097b0c:;
    {
        cpu->r[5] = rd32(0x00097b14u + + 0x38u);
    }
L_00097b10:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00097b14:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00097b18:;
    {
        cpu->r[14] = 0x00097b1cu; fn_0018aa20(cpu);
    }
L_00097b1c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00097b20:;
    {
        cpu->r[14] = 0x00097b24u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00097b24:;
    {
        cpu->r[3] = rd32(0x00097b2cu + + 0x24u);
    }
L_00097b28:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00097b2c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00097b30:;
    {
        cpu->r[3] = rd32(0x00097b38u + + 0x1cu);
    }
L_00097b34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00097b38:;
    {
        cpu->r[14] = 0x00097b3cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00097b3c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00097b40:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00097b44u)) return;
    }
}

/* _ZNSt12__node_alloc8allocateERj @ 00097b58 (arm) */
void fn_00097b58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097b58:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00097b5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000080u, 1, 1);
    }
L_00097b60:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00097b68;
        }
    }
L_00097b64:;
    {
        return fn_00208278(cpu);
    }
L_00097b68:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00097b6c:;
    {
        return fn_0018ba6c(cpu);
    }
}

/* _ZN4Game27GetTuningCategoryTypesCountE16eTUNING_CATEGORY @ 00097b70 (arm) */
void fn_00097b70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097b70:;
    {
        cpu->r[2] = 0x00008c78u;
    }
L_00097b74:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_00097b78:;
    {
        cpu->r[4] = rd8(cpu->r[0] + cpu->r[2]);
    }
L_00097b7c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000028u, 1, 0);
    }
L_00097b80:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00097b84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00097b88:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00097b8c:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_00097b90:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00097b94:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[2]);
        cpu->r[12] = wb_tmp;
    }
L_00097b98:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00097b9c:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[2]);
        cpu->r[12] = wb_tmp;
    }
L_00097ba0:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[2]);
        cpu->r[12] = wb_tmp;
    }
L_00097ba4:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[2]);
        cpu->r[12] = wb_tmp;
    }
L_00097ba8:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[2]);
        cpu->r[12] = wb_tmp;
    }
L_00097bac:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[2]);
        cpu->r[12] = wb_tmp;
    }
L_00097bb0:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[2]);
        cpu->r[12] = wb_tmp;
    }
L_00097bb4:;
    {
        wr32(cpu->r[12], cpu->r[2]);
    }
L_00097bb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00097c10;
        }
    }
L_00097bbc:;
    {
        cpu->r[12] = 0x0000002cu;
    }
L_00097bc0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00008700u, 0, 0);
    }
L_00097bc4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000050u, 0, 0);
    }
L_00097bc8:;
    {
        uint32_t v = cpu->r[12] * cpu->r[4]; cpu->r[4] = v;
    }
L_00097bcc:;
    {
        goto L_00097bdc;
    }
L_00097bd0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_00097bd4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000002cu, 0, 0);
    }
L_00097bd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00097c10;
        }
    }
L_00097bdc:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_00097be0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000002cu, 0, 0);
    }
L_00097be4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_00097be8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00097bd0;
        }
    }
L_00097bec:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_00097bf0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00097bf4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_00097bf8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000002cu, 0, 0);
    }
L_00097bfc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00097c00:;
    {
        cpu->r[5] = rd32(cpu->r[12] + - 0x28u);
    }
L_00097c04:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00097c08:;
    {
        wr32(cpu->r[12] + - 0x28u, cpu->r[5]);
    }
L_00097c0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00097bdc;
        }
    }
L_00097c10:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00097c14:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00097c18:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00097c1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00097c20:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00097c24:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_00097c28:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000028u, 1, 1);
    }
L_00097c2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00097c18;
        }
    }
L_00097c30:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00097c34:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_00097c38:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z8MYMEMSETPvii @ 00097c3c (arm) */
void fn_00097c3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097c3c:;
    {
        imp_memset(cpu); /* tail memset */ return;
    }
}

/* _Z17GetConfigFilePathPcPKc @ 00097c40 (arm) */
void fn_00097c40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097c40:;
    {
        cpu->r[3] = rd32(0x00097c48u + + 0x8cu);
    }
L_00097c44:;
    {
        cpu->r[2] = rd32(0x00097c4cu + + 0x8cu);
    }
L_00097c48:;
    {
        cpu->r[3] = add_flags(cpu, 0x00097c50u, cpu->r[3], 0, 0);
    }
L_00097c4c:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00097c50:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00097c54:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000400u, 1, 0);
    }
L_00097c58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00097c5c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00097c60:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00097c64:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00097c68:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00097c6c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_00097c70:;
    {
        cpu->r[1] = 0x00000400u;
    }
L_00097c74:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00097c78:;
    {
        wr32(cpu->r[13] + + 0x404u, cpu->r[3]);
    }
L_00097c7c:;
    {
        cpu->r[14] = 0x00097c80u; imp_getcwd(cpu); /* getcwd */
    }
L_00097c80:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00097c84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00097c88:;
    {
        cpu->r[14] = 0x00097c8cu; imp_strcpy(cpu); /* strcpy */
    }
L_00097c8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00097c90:;
    {
        cpu->r[14] = 0x00097c94u; imp_strlen(cpu); /* strlen */
    }
L_00097c94:;
    {
        cpu->r[1] = rd32(0x00097c9cu + + 0x40u);
    }
L_00097c98:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_00097c9c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00097ca4u, cpu->r[1], 0, 0);
    }
L_00097ca0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00097ca4:;
    {
        cpu->r[14] = 0x00097ca8u; imp_memcpy(cpu); /* memcpy */
    }
L_00097ca8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00097cac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00097cb0:;
    {
        cpu->r[14] = 0x00097cb4u; imp_strcat(cpu); /* strcat */
    }
L_00097cb4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x404u);
    }
L_00097cb8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00097cbc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00097cc0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00097cd0;
        }
    }
L_00097cc4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00097cc8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_00097ccc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00097cd0u)) return;
    }
L_00097cd0:;
    {
        cpu->r[14] = 0x00097cd4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_00097cd4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[11] & shifter(cpu->r[8], 1, 15u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
        }
    }
L_00097cd8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_00097cdc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 4, 26u, &shc); cpu->r[6] = v;
        set_nz(cpu, v);
        }
    }
}

/* _ZN4Game14GameRankByTypeEv @ 00097ce0 (arm) */
void fn_00097ce0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097ce0:;
    {
        cpu->r[3] = rd32(0x00097ce8u + + 0xacu);
    }
L_00097ce4:;
    {
        cpu->r[2] = rd32(0x00097cecu + + 0xacu);
    }
L_00097ce8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00097cf0u, cpu->r[3], 0, 0);
    }
L_00097cec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00097cf0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00097cf4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00097cf8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00097cfc:;
    {
        cpu->r[3] = 0x000082f4u;
    }
L_00097d00:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_00097d04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00097d08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00097d60;
        }
    }
L_00097d0c:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00097d10:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_00097d14:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00097d18:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_00097d1c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00097d20:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00097d24:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00097d28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00097d2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00097d30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00097d34:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00097d38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_00097d3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_00097d40:;
    {
        cpu->r[14] = 0x00097d44u; fn_0015d718(cpu);
    }
L_00097d44:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_00097d48:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00097d4c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00097d50:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000000bu, 1, 1);
    }
L_00097d54:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = cpu->r[5];
        }
    }
L_00097d58:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00097d5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00097d60u)) return;
    }
L_00097d60:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00097d64:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_00097d68:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00097d6c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00097d70:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00097d74:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00097d78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00097d7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00097d80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00097d84:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00097d88:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_00097d8c:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00097d90:;
    {
        goto L_00097d38;
    }
}

/* _ZN4Game13GameWonByTypeEv @ 00097d9c (arm) */
void fn_00097d9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097d9c:;
    {
        cpu->r[12] = 0x00001bc8u;
    }
L_00097da0:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_00097da4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00097da8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_00097dac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000007u, 0, 0);
    }
L_00097db0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000006u, 0, 0);
    }
L_00097db4:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_00097db8:;
    {
        cpu->r[14] = 0x00097dbcu; fn_000c057c(cpu);
    }
L_00097dbc:;
    {
        cpu->r[0] = rd8(cpu->r[13] + + 0x6u);
    }
L_00097dc0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00097dc4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00097dc8u)) return;
    }
}

/* _Z7VoxFreePv @ 00097dc8 (arm) */
void fn_00097dc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097dc8:;
    {
        imp_free(cpu); /* tail free */ return;
    }
}

/* _Z8VoxAllocjN3vox10VoxMemHintEPKcS2_i @ 00097dcc (arm) */
void fn_00097dcc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097dcc:;
    {
        imp_malloc(cpu); /* tail malloc */ return;
    }
}

/* _Z8VoxAllocjN3vox10VoxMemHintE @ 00097dd0 (arm) */
void fn_00097dd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097dd0:;
    {
        imp_malloc(cpu); /* tail malloc */ return;
    }
}

/* _Z8VoxAllocj @ 00097dd4 (arm) */
void fn_00097dd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097dd4:;
    {
        imp_malloc(cpu); /* tail malloc */ return;
    }
}

/* _Z8VoxAllocjPKcS0_i @ 00097dd8 (arm) */
void fn_00097dd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097dd8:;
    {
        imp_malloc(cpu); /* tail malloc */ return;
    }
}

/* imp_opj_alloc @ 00097ddc (arm) */
void fn_00097ddc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097ddc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00097de0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00097de4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00097de8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00097dec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00097df0:;
    {
        cpu->r[14] = 0x00097df4u; imp__Znaj(cpu); /* _Znaj */
    }
L_00097df4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00097df8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00097e1c;
        }
    }
L_00097dfc:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00097e00:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00097e04:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00097e08:;
    {
        cpu->r[14] = 0x00097e0cu; imp_memset(cpu); /* memset */
    }
L_00097e0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00097e10:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000001u;
        wr8(cpu->r[0], cpu->r[4]);
        cpu->r[0] = wb_tmp;
    }
L_00097e14:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00097e18:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00097e1cu)) return;
    }
L_00097e1c:;
    {
        cpu->r[1] = rd32(0x00097e24u + + 0x30u);
    }
L_00097e20:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00097e24:;
    {
        cpu->r[12] = rd32(0x00097e2cu + + 0x2cu);
    }
L_00097e28:;
    {
        cpu->r[14] = 0x00000181u;
    }
L_00097e2c:;
    {
        cpu->r[2] = rd32(0x00097e34u + + 0x28u);
    }
L_00097e30:;
    {
        cpu->r[1] = add_flags(cpu, 0x00097e38u, cpu->r[1], 0, 0);
    }
L_00097e34:;
    {
        cpu->r[3] = rd32(0x00097e3cu + + 0x24u);
    }
L_00097e38:;
    {
        cpu->r[12] = add_flags(cpu, 0x00097e40u, cpu->r[12], 0, 0);
    }
L_00097e3c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00097e44u, cpu->r[2], 0, 0);
    }
L_00097e40:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000294u, 0, 0);
    }
L_00097e44:;
    {
        cpu->r[3] = add_flags(cpu, 0x00097e4cu, cpu->r[3], 0, 0);
    }
L_00097e48:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00097e4c:;
    {
        cpu->r[14] = 0x00097e50u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00097e50:;
    {
        goto L_00097dfc;
    }
}

/* _Z13autoStartGameiPKc @ 00097e64 (arm) */
void fn_00097e64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097e64:;
    {
        cpu->r[3] = rd32(0x00097e6cu + + 0x5cu);
    }
L_00097e68:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00097e6c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00097e70:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00097e74:;
    {
        cpu->r[1] = rd32(0x00097e7cu + + 0x50u);
    }
L_00097e78:;
    {
        cpu->r[3] = add_flags(cpu, 0x00097e80u, cpu->r[3], 0, 0);
    }
L_00097e7c:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00097e80:;
    {
        cpu->r[4] = rd32(cpu->r[5]);
    }
L_00097e84:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00097e88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00097e90;
        }
    }
L_00097e8c:;
    {
        goto L_00097e8c;
    }
L_00097e90:;
    {
        cpu->r[3] = 0x00005f98u;
    }
L_00097e94:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00097e98:;
    {
        cpu->r[0] = 0x00000011u;
    }
L_00097e9c:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_00097ea0:;
    {
        cpu->r[3] = 0x00005f9cu;
    }
L_00097ea4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00097ea8:;
    {
        cpu->r[14] = 0x00097eacu; imp__Znaj(cpu); /* _Znaj */
    }
L_00097eac:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_00097eb0:;
    {
        cpu->r[3] = 0x00005fa0u;
    }
L_00097eb4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00097eb8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_00097ebc:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00097ec0:;
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
L_00097ec4:;
    {
        imp_strcpy(cpu); /* tail strcpy */ return;
    }
}

/* _ZN4Game15InitAiCarModelsEi @ 00097ed0 (arm) */
void fn_00097ed0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097ed0:;
    {
        cpu->r[3] = 0x0000150du;
    }
L_00097ed4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x444u);
    }
L_00097ed8:;
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
L_00097edc:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00097ee0:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00097ee4:;
    {
        cpu->r[1] = 0x0000004cu;
    }
L_00097ee8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00097eec:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_00097ef0:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x10u);
    }
L_00097ef4:;
    {
        cpu->r[14] = 0x00097ef8u; fn_00096114(cpu);
    }
L_00097ef8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00097efc:;
    {
        cpu->r[14] = 0x00097f00u; imp__Znaj(cpu); /* _Znaj */
    }
L_00097f00:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00097f04:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_00097f08:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00097f0c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00097f44;
        }
    }
L_00097f10:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00097f14:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00097f18:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_00097f1c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x444u);
    }
L_00097f20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_00097f24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000004cu, 0, 0);
    }
L_00097f28:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x10u);
    }
L_00097f2c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_00097f30:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[6] + cpu->r[10], cpu->r[3]);
        }
    }
L_00097f34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00097f38:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
        }
    }
L_00097f3c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00097f40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00097f1c;
        }
    }
L_00097f44:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00097f48:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00097fbc;
        }
    }
L_00097f4c:;
    {
        cpu->r[9] = rd32(0x00097f54u + + 0x7cu);
    }
L_00097f50:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 0);
    }
L_00097f54:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00097f58:;
    {
        cpu->r[8] = 0x00000032u;
    }
L_00097f5c:;
    {
        cpu->r[9] = add_flags(cpu, 0x00097f64u, cpu->r[9], 0, 0);
    }
L_00097f60:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00097f64:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00097f68:;
    {
        cpu->r[14] = 0x00097f6cu; fn_000965cc(cpu);
    }
L_00097f6c:;
    {
        uint32_t v = cpu->r[8] * cpu->r[4] + cpu->r[5]; cpu->r[12] = v;
    }
L_00097f70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_00097f74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001680u, 0, 0);
    }
L_00097f78:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00097f7c:;
    {
        cpu->r[2] = rd8(cpu->r[6] + cpu->r[0]);
    }
L_00097f80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00001680u, 0, 0);
    }
L_00097f84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000002du, 0, 0);
    }
L_00097f88:;
    {
        wr8(cpu->r[3] + + 0x25u, cpu->r[2]);
    }
L_00097f8c:;
    {
        cpu->r[14] = 0x00097f90u; fn_00093a28(cpu);
    }
L_00097f90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_00097f94:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00097f98:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00097f9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_00097fa0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00097fa4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_00097fa8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001800u, 0, 0);
    }
L_00097fac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003du, 0, 0);
    }
L_00097fb0:;
    {
        cpu->r[14] = 0x00097fb4u; imp_sprintf(cpu); /* sprintf */
    }
L_00097fb4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_00097fb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00097f60;
        }
    }
L_00097fbc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00097fc0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00097fc4u)) return;
        }
    }
L_00097fc4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00097fc8:;
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
L_00097fcc:;
    {
        return fn_0018ba60(cpu);
    }
}

/* imp_opj_free @ 00097fd4 (arm) */
void fn_00097fd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097fd4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00097fd8:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00097fdc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 1);
    }
L_00097fe0:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00097fe4:;
    {
        return fn_0018ba60(cpu);
    }
}

/* _ZN10FileHeader10LoadHeaderEP8LZMAFilej @ 00097fe8 (arm) */
void fn_00097fe8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00097fe8:;
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
L_00097fec:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00097ff0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00097ff4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00097ff8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00097ffc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00098008;
        }
    }
L_00098000:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00098004:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00098008u)) return;
    }
L_00098008:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009800c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00098010:;
    {
        cpu->r[14] = 0x00098014u; fn_000fc650(cpu);
    }
L_00098014:;
    {
        cpu->r[3] = 0x000003feu;
    }
L_00098018:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009801c:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_00098020:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00098024:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_00098028:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_0009802c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00098000;
        }
    }
L_00098030:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_00098034:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[7] = v;
    }
L_00098038:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_0009803c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00098040:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00098044:;
    {
        cpu->r[14] = 0x00098048u; fn_000fc628(cpu);
    }
L_00098048:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_0009804c:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[0]);
    }
L_00098050:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00098054:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_00098058:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00098040;
        }
    }
L_0009805c:;
    {
        cpu->r[3] = 0x00001000u;
    }
L_00098060:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00098064:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[10]);
    }
L_00098068:;
    {
        goto L_00098000;
    }
}

/* _ZN4Game15LoadConfigFilesEv @ 0009806c (arm) */
void fn_0009806c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009806c:;
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
L_00098070:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00098074:;
    {
        cpu->r[0] = rd32(0x0009807cu + + 0x9ecu);
    }
L_00098078:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_0009807c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00098084u, cpu->r[0], 0, 0);
    }
L_00098080:;
    {
        cpu->r[14] = 0x00098084u; fn_000fc740(cpu);
    }
L_00098084:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00098088:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_0009808c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00098a2c;
        }
    }
L_00098090:;
    {
        cpu->r[14] = 0x00098094u; fn_000fc650(cpu);
    }
L_00098094:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00098098:;
    {
        cpu->r[5] = 0x00008548u;
    }
L_0009809c:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_000980a0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000980a4:;
    {
        cpu->r[14] = 0x000980a8u; fn_000fc5ec(cpu);
    }
L_000980a8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000980ac:;
    {
        cpu->r[14] = 0x000980b0u; fn_000fc628(cpu);
    }
L_000980b0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000980b4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000980b8:;
    {
        cpu->r[14] = 0x000980bcu; fn_000fc5dc(cpu);
    }
L_000980bc:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_000980c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_000980c4:;
    {
        cpu->r[6] = (uint32_t)((int32_t)(int16_t)(cpu->r[6] & 0xffff) * (int32_t)(int16_t)(cpu->r[3] & 0xffff));
    }
L_000980c8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_000980cc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000980d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_000980d4:;
    {
        cpu->r[14] = 0x000980d8u; fn_000fc5ec(cpu);
    }
L_000980d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000980dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000980e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00098a14;
        }
    }
L_000980e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000980e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000001fu, 0, 0);
    }
L_000980ec:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000980f0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000980f4:;
    {
        wr8(cpu->r[13] + + 0x1fu, cpu->r[6]);
    }
L_000980f8:;
    {
        cpu->r[14] = 0x000980fcu; fn_000fc5f4(cpu);
    }
L_000980fc:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x1fu);
    }
L_00098100:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00098104:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000981b4;
        }
    }
L_00098108:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_0009810c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00098110:;
    {
        cpu->r[7] = 0x00008548u;
    }
L_00098114:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00098118:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0009811c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00098120:;
    {
        cpu->r[14] = 0x00098124u; fn_000fc5f4(cpu);
    }
L_00098124:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00098128:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x18u);
    }
L_0009812c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00098130:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00098134:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00098138:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[6], 2, 4u, &shc), cpu->r[12]);
    }
L_0009813c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00098140:;
    {
        cpu->r[14] = 0x00098144u; fn_000fc5f4(cpu);
    }
L_00098144:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00098148:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x18u);
    }
L_0009814c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00098150:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00098154:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00098158:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[12]);
    }
L_0009815c:;
    {
        cpu->r[14] = 0x00098160u; fn_000fc5f4(cpu);
    }
L_00098160:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00098164:;
    {
        cpu->r[14] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x18u);
    }
L_00098168:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0009816c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00098170:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00098174:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00098178:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[14]);
    }
L_0009817c:;
    {
        cpu->r[14] = 0x00098180u; fn_000fc5f4(cpu);
    }
L_00098180:;
    {
        cpu->r[1] = rd8(cpu->r[13] + + 0x1fu);
    }
L_00098184:;
    {
        sub_flags(cpu, cpu->r[6], 0x0000001eu, 1, 1);
    }
L_00098188:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0009818c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00098190:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00098194:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_00098198:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x18u);
    }
L_0009819c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000981a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_000981a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000981a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000981ac:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
    }
L_000981b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00098114;
        }
    }
L_000981b4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000981b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000001eu, 0, 0);
    }
L_000981bc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000981c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000981c4:;
    {
        wr8(cpu->r[13] + + 0x1eu, cpu->r[3]);
    }
L_000981c8:;
    {
        cpu->r[14] = 0x000981ccu; fn_000fc5f4(cpu);
    }
L_000981cc:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x1eu);
    }
L_000981d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_000981d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00098218;
        }
    }
L_000981d8:;
    {
        cpu->r[1] = rd32(0x000981e0u + + 0x88cu);
    }
L_000981dc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000981e0:;
    {
        cpu->r[12] = rd32(0x000981e8u + + 0x888u);
    }
L_000981e4:;
    {
        cpu->r[14] = 0x00001f2bu;
    }
L_000981e8:;
    {
        cpu->r[2] = rd32(0x000981f0u + + 0x884u);
    }
L_000981ec:;
    {
        cpu->r[1] = add_flags(cpu, 0x000981f4u, cpu->r[1], 0, 0);
    }
L_000981f0:;
    {
        cpu->r[3] = rd32(0x000981f8u + + 0x880u);
    }
L_000981f4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000981fcu, cpu->r[12], 0, 0);
    }
L_000981f8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00098200u, cpu->r[2], 0, 0);
    }
L_000981fc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000002a4u, 0, 0);
    }
L_00098200:;
    {
        cpu->r[3] = add_flags(cpu, 0x00098208u, cpu->r[3], 0, 0);
    }
L_00098204:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00098208:;
    {
        cpu->r[14] = 0x0009820cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0009820c:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x1eu);
    }
L_00098210:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00098214:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00098248;
        }
    }
L_00098218:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0009821c:;
    {
        cpu->r[6] = 0x00008548u;
    }
L_00098220:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00098224:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x0000007cu, 0, 0);
    }
L_00098228:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009822c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00098230:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00098234:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00098238:;
    {
        cpu->r[14] = 0x0009823cu; fn_000fc5f4(cpu);
    }
L_0009823c:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x1eu);
    }
L_00098240:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00098244:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00098220;
        }
    }
L_00098248:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009824c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000001du, 0, 0);
    }
L_00098250:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00098254:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00098258:;
    {
        wr8(cpu->r[13] + + 0x1du, cpu->r[3]);
    }
L_0009825c:;
    {
        cpu->r[14] = 0x00098260u; fn_000fc5f4(cpu);
    }
L_00098260:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x1du);
    }
L_00098264:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_00098268:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000982ac;
        }
    }
L_0009826c:;
    {
        cpu->r[1] = rd32(0x00098274u + + 0x808u);
    }
L_00098270:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00098274:;
    {
        cpu->r[12] = rd32(0x0009827cu + + 0x804u);
    }
L_00098278:;
    {
        cpu->r[14] = 0x00001f34u;
    }
L_0009827c:;
    {
        cpu->r[2] = rd32(0x00098284u + + 0x800u);
    }
L_00098280:;
    {
        cpu->r[1] = add_flags(cpu, 0x00098288u, cpu->r[1], 0, 0);
    }
L_00098284:;
    {
        cpu->r[3] = rd32(0x0009828cu + + 0x7fcu);
    }
L_00098288:;
    {
        cpu->r[12] = add_flags(cpu, 0x00098290u, cpu->r[12], 0, 0);
    }
L_0009828c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00098294u, cpu->r[2], 0, 0);
    }
L_00098290:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000002a4u, 0, 0);
    }
L_00098294:;
    {
        cpu->r[3] = add_flags(cpu, 0x0009829cu, cpu->r[3], 0, 0);
    }
L_00098298:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0009829c:;
    {
        cpu->r[14] = 0x000982a0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000982a0:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x1du);
    }
L_000982a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000982a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000982f0;
        }
    }
L_000982ac:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000982b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00002140u, 0, 0);
    }
L_000982b4:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000982b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000012u, 0, 0);
    }
L_000982bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000982c0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000982c4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2] + cpu->r[4]; cpu->r[3] = v;
    }
L_000982c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000982cc:;
    {
        cpu->r[14] = 0x000982d0u; fn_000fc5f4(cpu);
    }
L_000982d0:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0x1du);
    }
L_000982d4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000007u, 1, 1);
    }
L_000982d8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000982dc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000982e0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000982e4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000982e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000982ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000982b0;
        }
    }
L_000982f0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000982f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000982f8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000982fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00098300:;
    {
        wr8(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00098304:;
    {
        cpu->r[14] = 0x00098308u; fn_000fc5f4(cpu);
    }
L_00098308:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x1cu);
    }
L_0009830c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_00098310:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00098354;
        }
    }
L_00098314:;
    {
        cpu->r[1] = rd32(0x0009831cu + + 0x770u);
    }
L_00098318:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0009831c:;
    {
        cpu->r[12] = rd32(0x00098324u + + 0x76cu);
    }
L_00098320:;
    {
        cpu->r[14] = 0x00001f65u;
    }
L_00098324:;
    {
        cpu->r[2] = rd32(0x0009832cu + + 0x768u);
    }
L_00098328:;
    {
        cpu->r[1] = add_flags(cpu, 0x00098330u, cpu->r[1], 0, 0);
    }
L_0009832c:;
    {
        cpu->r[3] = rd32(0x00098334u + + 0x764u);
    }
L_00098330:;
    {
        cpu->r[12] = add_flags(cpu, 0x00098338u, cpu->r[12], 0, 0);
    }
L_00098334:;
    {
        cpu->r[2] = add_flags(cpu, 0x0009833cu, cpu->r[2], 0, 0);
    }
L_00098338:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000002a4u, 0, 0);
    }
L_0009833c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00098344u, cpu->r[3], 0, 0);
    }
L_00098340:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00098344:;
    {
        cpu->r[14] = 0x00098348u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00098348:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x1cu);
    }
L_0009834c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00098350:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000983e0;
        }
    }
L_00098354:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00098358:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00002180u, 0, 0);
    }
L_0009835c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 4u, &shc); cpu->r[6] = v;
    }
L_00098360:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00098364:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00008600u, 0, 0);
    }
L_00098368:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009836c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00098370:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00098374:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00098378:;
    {
        cpu->r[14] = 0x0009837cu; fn_000fc5f4(cpu);
    }
L_0009837c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000048u, 0, 0);
    }
L_00098380:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00098384:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_00098388:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009838c:;
    {
        cpu->r[14] = 0x00098390u; fn_000fc5f4(cpu);
    }
L_00098390:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x0000004cu, 0, 0);
    }
L_00098394:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_00098398:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009839c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000983a0:;
    {
        cpu->r[14] = 0x000983a4u; fn_000fc5f4(cpu);
    }
L_000983a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000860u, 0, 0);
    }
L_000983a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000005u, 0, 0);
    }
L_000983ac:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000983b0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000983b4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_000983b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_000983bc:;
    {
        cpu->r[14] = 0x000983c0u; fn_000fc5f4(cpu);
    }
L_000983c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000054u, 0, 0);
    }
L_000983c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_000983c8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000983cc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000983d0:;
    {
        cpu->r[14] = 0x000983d4u; fn_000fc5f4(cpu);
    }
L_000983d4:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x1cu);
    }
L_000983d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000983dc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00098358;
        }
    }
L_000983e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00008c00u, 0, 0);
    }
L_000983e4:;
    {
        cpu->r[5] = 0x00008c78u;
    }
L_000983e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000078u, 0, 0);
    }
L_000983ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000983f0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000983f4:;
    {
        cpu->r[14] = 0x000983f8u; fn_000fc5f4(cpu);
    }
L_000983f8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[5]);
    }
L_000983fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 1);
    }
L_00098400:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000989d8;
        }
    }
L_00098404:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00098408:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000985f4;
        }
    }
L_0009840c:;
    {
        cpu->r[2] = rd32(0x00098414u + + 0x688u);
    }
L_00098410:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00008700u, 0, 0);
    }
L_00098414:;
    {
        cpu->r[3] = rd32(0x0009841cu + + 0x684u);
    }
L_00098418:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000074u, 0, 0);
    }
L_0009841c:;
    {
        cpu->r[11] = rd32(0x00098424u + + 0x680u);
    }
L_00098420:;
    {
        cpu->r[2] = add_flags(cpu, 0x00098428u, cpu->r[2], 0, 0);
    }
L_00098424:;
    {
        cpu->r[3] = add_flags(cpu, 0x0009842cu, cpu->r[3], 0, 0);
    }
L_00098428:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000002a4u, 0, 0);
    }
L_0009842c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000002a4u, 0, 0);
    }
L_00098430:;
    {
        cpu->r[9] = rd32(0x00098438u + + 0x670u);
    }
L_00098434:;
    {
        cpu->r[11] = add_flags(cpu, 0x0009843cu, cpu->r[11], 0, 0);
    }
L_00098438:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0009843c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00098440:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00098444:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00098448:;
    {
        goto L_0009854c;
    }
L_0009844c:;
    {
        wr32(cpu->r[5] + - 0x24u, cpu->r[3]);
    }
L_00098450:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00098454:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00098458:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009845c:;
    {
        cpu->r[14] = 0x00098460u; fn_000fc5f4(cpu);
    }
L_00098460:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00098464:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_00098468:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000985bc;
        }
    }
L_0009846c:;
    {
        cpu->r[8] = 0x0000002cu;
    }
L_00098470:;
    {
        wr32(cpu->r[5] + - 0x20u, cpu->r[3]);
    }
L_00098474:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00098478:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009847c:;
    {
        uint32_t v = cpu->r[8] * cpu->r[6]; cpu->r[8] = v;
    }
L_00098480:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00098484:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00008700u, 0, 0);
    }
L_00098488:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], 0x00000058u, 0, 0);
    }
L_0009848c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_00098490:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00098494:;
    {
        cpu->r[14] = 0x00098498u; fn_000fc5f4(cpu);
    }
L_00098498:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_0009849c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], 0x00000060u, 0, 0);
    }
L_000984a0:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000984a4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_000984a8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000984ac:;
    {
        cpu->r[14] = 0x000984b0u; fn_000fc5f4(cpu);
    }
L_000984b0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000984b4:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000984b8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000984bc:;
    {
        cpu->r[14] = 0x000984c0u; fn_000fc5f4(cpu);
    }
L_000984c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_000984c4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], 0x00000068u, 0, 0);
    }
L_000984c8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000984cc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_000984d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000984d4:;
    {
        cpu->r[14] = 0x000984d8u; fn_000fc5f4(cpu);
    }
L_000984d8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000984dc:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000984e0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000984e4:;
    {
        cpu->r[14] = 0x000984e8u; fn_000fc5f4(cpu);
    }
L_000984e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_000984ec:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], 0x00000070u, 0, 0);
    }
L_000984f0:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000984f4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_000984f8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000984fc:;
    {
        cpu->r[14] = 0x00098500u; fn_000fc5f4(cpu);
    }
L_00098500:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00098504:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00098508:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009850c:;
    {
        cpu->r[14] = 0x00098510u; fn_000fc5f4(cpu);
    }
L_00098510:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_00098514:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00098518:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009851c:;
    {
        cpu->r[14] = 0x00098520u; fn_000fc5f4(cpu);
    }
L_00098520:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], 0x00000078u, 0, 0);
    }
L_00098524:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_00098528:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009852c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00098530:;
    {
        cpu->r[14] = 0x00098534u; fn_000fc5f4(cpu);
    }
L_00098534:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_00098538:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x0000002cu;
        wr32(cpu->r[5], cpu->r[3]);
        cpu->r[5] = wb_tmp;
    }
L_0009853c:;
    {
        cpu->r[3] = 0x00008c78u;
    }
L_00098540:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_00098544:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00098548:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000985f4;
        }
    }
L_0009854c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00098550:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00098554:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00098558:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009855c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_00098560:;
    {
        cpu->r[14] = 0x00098564u; fn_000fc5f4(cpu);
    }
L_00098564:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00098568:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0009856c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0009844c;
        }
    }
L_00098570:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_00098574:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00098578:;
    {
        cpu->r[3] = rd32(0x00098580u + + 0x52cu);
    }
L_0009857c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00098584u, cpu->r[9], 0, 0);
    }
L_00098580:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00098584:;
    {
        cpu->r[3] = add_flags(cpu, 0x0009858cu, cpu->r[3], 0, 0);
    }
L_00098588:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0009858c:;
    {
        cpu->r[12] = 0x00001f78u;
    }
L_00098590:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00098594:;
    {
        cpu->r[14] = 0x00098598u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00098598:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0009859c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000985a0:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000985a4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000985a8:;
    {
        wr32(cpu->r[5] + - 0x24u, cpu->r[3]);
    }
L_000985ac:;
    {
        cpu->r[14] = 0x000985b0u; fn_000fc5f4(cpu);
    }
L_000985b0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000985b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_000985b8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0009846c;
        }
    }
L_000985bc:;
    {
        cpu->r[3] = 0x00001f7cu;
    }
L_000985c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000985c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000985c8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000985cc:;
    {
        cpu->r[1] = rd32(0x000985d4u + + 0x4dcu);
    }
L_000985d0:;
    {
        cpu->r[2] = rd32(0x000985d8u + + 0x4dcu);
    }
L_000985d4:;
    {
        cpu->r[3] = rd32(0x000985dcu + + 0x4dcu);
    }
L_000985d8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000985e0u, cpu->r[1], 0, 0);
    }
L_000985dc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000985e4u, cpu->r[2], 0, 0);
    }
L_000985e0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000985e4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000985ecu, cpu->r[3], 0, 0);
    }
L_000985e8:;
    {
        cpu->r[14] = 0x000985ecu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000985ec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000985f0:;
    {
        goto L_0009846c;
    }
L_000985f4:;
    {
        cpu->r[8] = rd32(0x000985fcu + + 0x4c0u);
    }
L_000985f8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000985fc:;
    {
        cpu->r[7] = rd32(0x00098604u + + 0x4bcu);
    }
L_00098600:;
    {
        cpu->r[6] = rd32(0x00098608u + + 0x4bcu);
    }
L_00098604:;
    {
        cpu->r[8] = add_flags(cpu, 0x0009860cu, cpu->r[8], 0, 0);
    }
L_00098608:;
    {
        cpu->r[10] = rd32(0x00098610u + + 0x4b8u);
    }
L_0009860c:;
    {
        cpu->r[7] = add_flags(cpu, 0x00098614u, cpu->r[7], 0, 0);
    }
L_00098610:;
    {
        cpu->r[6] = add_flags(cpu, 0x00098618u, cpu->r[6], 0, 0);
    }
L_00098614:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x000002a4u, 0, 0);
    }
L_00098618:;
    {
        cpu->r[10] = add_flags(cpu, 0x00098620u, cpu->r[10], 0, 0);
    }
L_0009861c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00098620:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009865c;
        }
    }
L_00098624:;
    {
        cpu->r[1] = 0x0000002cu;
    }
L_00098628:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009862c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00098630:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[3] = v;
    }
L_00098634:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_00098638:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000002cu, 0, 0);
    }
L_0009863c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00008700u, 0, 0);
    }
L_00098640:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x54u);
    }
L_00098644:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_00098648:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_0009864c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00098650:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00098634;
        }
    }
L_00098654:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_00098658:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00098678;
        }
    }
L_0009865c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00098660:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00098664:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00098668:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0009866c:;
    {
        cpu->r[12] = 0x00001f95u;
    }
L_00098670:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_00098674:;
    {
        cpu->r[14] = 0x00098678u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00098678:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0009867c:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000au, 1, 1);
    }
L_00098680:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00008c78u;
        }
    }
L_00098684:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
        }
    }
L_00098688:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009861c;
        }
    }
L_0009868c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00098690:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000001bu, 0, 0);
    }
L_00098694:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00098698:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0009869c:;
    {
        wr8(cpu->r[13] + + 0x1bu, cpu->r[5]);
    }
L_000986a0:;
    {
        cpu->r[14] = 0x000986a4u; fn_000fc5f4(cpu);
    }
L_000986a4:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x1bu);
    }
L_000986a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000986ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000986ec;
        }
    }
L_000986b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00002140u, 0, 0);
    }
L_000986b4:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000986b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000001cu, 0, 0);
    }
L_000986bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000986c0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000986c4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[4]; cpu->r[1] = v;
    }
L_000986c8:;
    {
        cpu->r[14] = 0x000986ccu; fn_000fc5f4(cpu);
    }
L_000986cc:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0x1bu);
    }
L_000986d0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000030u, 1, 1);
    }
L_000986d4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000986d8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000986dc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000986e0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000986e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000986e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000986b0;
        }
    }
L_000986ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00008600u, 0, 0);
    }
L_000986f0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000986f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000986f8:;
    {
        cpu->r[3] = 0x00008698u;
    }
L_000986fc:;
    {
        cpu->r[5] = 0x0000869cu;
    }
L_00098700:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00098704:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000098u, 0, 0);
    }
L_00098708:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_0009870c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00098710:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00098714:;
    {
        cpu->r[14] = 0x00098718u; fn_000fc5f4(cpu);
    }
L_00098718:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009871c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_00098720:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009872c;
        }
    }
L_00098724:;
    {
        cpu->r[14] = 0x00098728u; fn_0018ba60(cpu);
    }
L_00098728:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[6]);
    }
L_0009872c:;
    {
        cpu->r[11] = 0x00008698u;
    }
L_00098730:;
    {
        cpu->r[0] = 0x00000188u;
    }
L_00098734:;
    {
        cpu->r[7] = 0x0000869cu;
    }
L_00098738:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_0009873c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_00098740:;
    {
        cpu->r[14] = 0x00098744u; imp__Znaj(cpu); /* _Znaj */
    }
L_00098744:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_00098748:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009874c:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[0]);
    }
L_00098750:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00098820;
        }
    }
L_00098754:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00098758:;
    {
        cpu->r[9] = cpu->r[6];
    }
L_0009875c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_00098760:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00098764:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00098768:;
    {
        cpu->r[14] = 0x0009876cu; fn_000fc5f4(cpu);
    }
L_0009876c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00098770:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00098774:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00098778:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_0009877c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_00098780:;
    {
        cpu->r[14] = 0x00098784u; fn_000fc5f4(cpu);
    }
L_00098784:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00098788:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_0009878c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_00098790:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00098794:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00098808;
        }
    }
L_00098798:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0009879c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_000987a0:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000987a4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000987a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000987ac:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[8] = v;
    }
L_000987b0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], 0x00000008u, 0, 0);
    }
L_000987b4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000010u, 0, 0);
    }
L_000987b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[10], 0, 0);
    }
L_000987bc:;
    {
        cpu->r[14] = 0x000987c0u; fn_000fc5f4(cpu);
    }
L_000987c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000987c4:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000987c8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000987cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000987d0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_000987d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[2], 0, 0);
    }
L_000987d8:;
    {
        cpu->r[14] = 0x000987dcu; fn_000fc5f4(cpu);
    }
L_000987dc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000987e0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000987e4:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000987e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_000987ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[8], 0, 0);
    }
L_000987f0:;
    {
        cpu->r[14] = 0x000987f4u; fn_000fc5f4(cpu);
    }
L_000987f4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000987f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_000987fc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_00098800:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00098804:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0009879c;
        }
    }
L_00098808:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_0009880c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_00098810:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000188u, 0, 0);
    }
L_00098814:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_00098818:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
        }
    }
L_0009881c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0009875c;
        }
    }
L_00098820:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00098824:;
    {
        cpu->r[5] = 0x000086a4u;
    }
L_00098828:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0009882c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00098830:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x000000a0u, 0, 0);
    }
L_00098834:;
    {
        cpu->r[3] = 0x000086a0u;
    }
L_00098838:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009883c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00098840:;
    {
        cpu->r[14] = 0x00098844u; fn_000fc5f4(cpu);
    }
L_00098844:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00098848:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_0009884c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00098858;
        }
    }
L_00098850:;
    {
        cpu->r[14] = 0x00098854u; fn_0018ba60(cpu);
    }
L_00098854:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[6]);
    }
L_00098858:;
    {
        cpu->r[11] = 0x000086a0u;
    }
L_0009885c:;
    {
        cpu->r[0] = 0x00000188u;
    }
L_00098860:;
    {
        cpu->r[7] = 0x000086a4u;
    }
L_00098864:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_00098868:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_0009886c:;
    {
        cpu->r[14] = 0x00098870u; imp__Znaj(cpu); /* _Znaj */
    }
L_00098870:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_00098874:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00098878:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[0]);
    }
L_0009887c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0009894c;
        }
    }
L_00098880:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00098884:;
    {
        cpu->r[9] = cpu->r[6];
    }
L_00098888:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_0009888c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00098890:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00098894:;
    {
        cpu->r[14] = 0x00098898u; fn_000fc5f4(cpu);
    }
L_00098898:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0009889c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000988a0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000988a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_000988a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000988ac:;
    {
        cpu->r[14] = 0x000988b0u; fn_000fc5f4(cpu);
    }
L_000988b0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000988b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_000988b8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_000988bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000988c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00098934;
        }
    }
L_000988c4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000988c8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_000988cc:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000988d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000988d4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000988d8:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[8] = v;
    }
L_000988dc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], 0x00000008u, 0, 0);
    }
L_000988e0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000010u, 0, 0);
    }
L_000988e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[10], 0, 0);
    }
L_000988e8:;
    {
        cpu->r[14] = 0x000988ecu; fn_000fc5f4(cpu);
    }
L_000988ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000988f0:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000988f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000988f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000988fc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_00098900:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[2], 0, 0);
    }
L_00098904:;
    {
        cpu->r[14] = 0x00098908u; fn_000fc5f4(cpu);
    }
L_00098908:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0009890c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00098910:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00098914:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_00098918:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[8], 0, 0);
    }
L_0009891c:;
    {
        cpu->r[14] = 0x00098920u; fn_000fc5f4(cpu);
    }
L_00098920:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00098924:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_00098928:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_0009892c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00098930:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000988c8;
        }
    }
L_00098934:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_00098938:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0009893c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000188u, 0, 0);
    }
L_00098940:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_00098944:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
        }
    }
L_00098948:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00098888;
        }
    }
L_0009894c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00098950:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00004300u, 0, 0);
    }
L_00098954:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00098958:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000078u, 0, 0);
    }
L_0009895c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00098960:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00098964:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[4]; cpu->r[1] = v;
    }
L_00098968:;
    {
        cpu->r[14] = 0x0009896cu; fn_000fc5f4(cpu);
    }
L_0009896c:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000002fu, 1, 1);
    }
L_00098970:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00098950;
        }
    }
L_00098974:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00098978:;
    {
        cpu->r[14] = 0x0009897cu; fn_000fc628(cpu);
    }
L_0009897c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00098980:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_00098984:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000989c8;
        }
    }
L_00098988:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_0009898c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00098990:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00098994:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00098998:;
    {
        cpu->r[14] = 0x0009899cu; fn_000fc628(cpu);
    }
L_0009899c:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[0]);
    }
L_000989a0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000989a4:;
    {
        cpu->r[14] = 0x000989a8u; fn_000fc628(cpu);
    }
L_000989a8:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[0]);
    }
L_000989ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000989b0:;
    {
        cpu->r[14] = 0x000989b4u; fn_000fc628(cpu);
    }
L_000989b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_000989b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000989bc:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[0]);
    }
L_000989c0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_000989c4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00098990;
        }
    }
L_000989c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000989cc:;
    {
        cpu->r[14] = 0x000989d0u; fn_000fc710(cpu);
    }
L_000989d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000989d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000989d8u)) return;
    }
L_000989d8:;
    {
        cpu->r[1] = rd32(0x000989e0u + + 0xecu);
    }
L_000989dc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000989e0:;
    {
        cpu->r[12] = rd32(0x000989e8u + + 0xe8u);
    }
L_000989e4:;
    {
        cpu->r[14] = 0x00001f73u;
    }
L_000989e8:;
    {
        cpu->r[2] = rd32(0x000989f0u + + 0xe4u);
    }
L_000989ec:;
    {
        cpu->r[1] = add_flags(cpu, 0x000989f4u, cpu->r[1], 0, 0);
    }
L_000989f0:;
    {
        cpu->r[3] = rd32(0x000989f8u + + 0xe0u);
    }
L_000989f4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000989fcu, cpu->r[12], 0, 0);
    }
L_000989f8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00098a00u, cpu->r[2], 0, 0);
    }
L_000989fc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000002a4u, 0, 0);
    }
L_00098a00:;
    {
        cpu->r[3] = add_flags(cpu, 0x00098a08u, cpu->r[3], 0, 0);
    }
L_00098a04:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00098a08:;
    {
        cpu->r[14] = 0x00098a0cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00098a0c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[5]);
    }
L_00098a10:;
    {
        goto L_00098404;
    }
L_00098a14:;
    {
        cpu->r[0] = 0x000006c8u;
    }
L_00098a18:;
    {
        cpu->r[14] = 0x00098a1cu; fn_0018ba6c(cpu);
    }
L_00098a1c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00098a20:;
    {
        cpu->r[14] = 0x00098a24u; fn_00188a98(cpu);
    }
L_00098a24:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[6]);
    }
L_00098a28:;
    {
        goto L_000980e4;
    }
L_00098a2c:;
    {
        cpu->r[1] = rd32(0x00098a34u + + 0xa8u);
    }
L_00098a30:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_00098a34:;
    {
        cpu->r[12] = rd32(0x00098a3cu + + 0xa4u);
    }
L_00098a38:;
    {
        cpu->r[14] = 0x00001eabu;
    }
L_00098a3c:;
    {
        cpu->r[2] = rd32(0x00098a44u + + 0xa0u);
    }
L_00098a40:;
    {
        cpu->r[1] = add_flags(cpu, 0x00098a48u, cpu->r[1], 0, 0);
    }
L_00098a44:;
    {
        cpu->r[3] = rd32(0x00098a4cu + + 0x9cu);
    }
L_00098a48:;
    {
        cpu->r[12] = add_flags(cpu, 0x00098a50u, cpu->r[12], 0, 0);
    }
L_00098a4c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00098a54u, cpu->r[2], 0, 0);
    }
L_00098a50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000002a4u, 0, 0);
    }
L_00098a54:;
    {
        cpu->r[3] = add_flags(cpu, 0x00098a5cu, cpu->r[3], 0, 0);
    }
L_00098a58:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00098a5c:;
    {
        cpu->r[14] = 0x00098a60u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00098a60:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00098a64:;
    {
        goto L_00098090;
    }
}

/* _ZN4Game12FormatNumberEi @ 00098aec (arm) */
void fn_00098aec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00098aec:;
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
L_00098af0:;
    {
        cpu->r[4] = rd32(0x00098af8u + + 0x5bcu);
    }
L_00098af4:;
    {
        cpu->r[7] = rd32(0x00098afcu + + 0x5bcu);
    }
L_00098af8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000054u, 1, 0);
    }
L_00098afc:;
    {
        cpu->r[4] = add_flags(cpu, 0x00098b04u, cpu->r[4], 0, 0);
    }
L_00098b00:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00098b04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00098b08:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00098b0c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_00098b10:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00098bb0;
        }
    }
L_00098b14:;
    {
        cpu->r[3] = rd32(0x00098b1cu + + 0x5a0u);
    }
L_00098b18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00098b1c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00098b20:;
    {
        cpu->r[14] = 0x00098b24u; fn_000962d0(cpu);
    }
L_00098b24:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00098b28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00098d4c;
        }
    }
L_00098b2c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00098b30:;
    {
        cpu->r[3] = 0x00000030u;
    }
L_00098b34:;
    {
        wr8(cpu->r[13] + + 0xdu, cpu->r[8]);
    }
L_00098b38:;
    {
        wr8(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00098b3c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00098b40:;
    {
        cpu->r[14] = 0x00098b44u; imp_strlen(cpu); /* strlen */
    }
L_00098b44:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00098b48:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00098b78;
        }
    }
L_00098b4c:;
    {
        cpu->r[0] = rd32(0x00098b54u + + 0x56cu);
    }
L_00098b50:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_00098b54:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00098b58:;
    {
        cpu->r[0] = add_flags(cpu, 0x00098b60u, cpu->r[0], 0, 0);
    }
L_00098b5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00098b60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_00098b64:;
    {
        uint32_t wb_tmp = cpu->r[6] + - 0x1u;
        cpu->r[1] = rd8(cpu->r[6] + - 0x1u);
        cpu->r[6] = wb_tmp;
    }
L_00098b68:;
    {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_00098b6c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00098b70:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00098b74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00098b64;
        }
    }
L_00098b78:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00098b7c:;
    {
        cpu->r[0] = rd32(0x00098b84u + + 0x540u);
    }
L_00098b80:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00098b84:;
    {
        cpu->r[0] = add_flags(cpu, 0x00098b8cu, cpu->r[0], 0, 0);
    }
L_00098b88:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00098b8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00098b90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00098b94:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_00098b98:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00098b9c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00098ba0:;
    {
        wr8(cpu->r[8] + + 0x4u, cpu->r[3]);
    }
L_00098ba4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000990b0;
        }
    }
L_00098ba8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_00098bac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00098bb0u)) return;
    }
L_00098bb0:;
    {
        cpu->r[3] = rd32(0x00098bb8u + + 0x504u);
    }
L_00098bb4:;
    {
        cpu->r[5] = sub_flags(cpu, 0x00000000u, cpu->r[8], 1, 0);
    }
L_00098bb8:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_00098bbc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00098bc0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00098bc4:;
    {
        cpu->r[14] = 0x00098bc8u; fn_000962d0(cpu);
    }
L_00098bc8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00098bcc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00098bd0:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
        }
    }
L_00098bd4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_00098bd8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_00098bdc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_00098be0:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
        }
    }
L_00098be4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00098be8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00098bec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00098ca0;
        }
    }
L_00098bf0:;
    {
        cpu->r[2] = 0x0000270fu;
    }
L_00098bf4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00098bf8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00098dec;
        }
    }
L_00098bfc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000009u, 1, 1);
    }
L_00098c00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00098ef0;
        }
    }
L_00098c04:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00098c08:;
    {
        cpu->r[9] = 0x00006667u;
    }
L_00098c0c:;
    {
        cpu->r[10] = 0x00005556u;
    }
L_00098c10:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x6666u << 16);
    }
L_00098c14:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x5555u << 16);
    }
L_00098c18:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00098c1c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00098c20:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_00098c24:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[9] * (int64_t)(int32_t)cpu->r[5]; cpu->r[0] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_00098c28:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00098c2c:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00098c30:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[10] * (int64_t)(int32_t)cpu->r[2]; cpu->r[0] = (uint32_t)v; cpu->r[14] = (uint32_t)(v >> 32); }
    }
L_00098c34:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[12], 1, 2u, &shc), cpu->r[1], 1, 0);
    }
L_00098c38:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_00098c3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00098c40:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_00098c44:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 1u, &shc), 1, 0);
    }
L_00098c48:;
    {
        cpu->r[5] = cpu->r[12];
    }
L_00098c4c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00098c50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_00098c54:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[14], 2, 1u, &shc), 0, 0);
    }
L_00098c58:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_00098c5c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[14], 1, 1);
    }
L_00098c60:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = 0x00000000u;
        }
    }
L_00098c64:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[12] & 0x00000001u; cpu->r[14] = v;
        }
    }
L_00098c68:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_00098c6c:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_00098c70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00098e90;
        }
    }
L_00098c74:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00098c78:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x0000002cu;
        }
    }
L_00098c7c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
        }
    }
L_00098c80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00098c24;
        }
    }
L_00098c84:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00098c88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_00098c8c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x0000002eu;
        }
    }
L_00098c90:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000020u;
        }
    }
L_00098c94:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
        }
    }
L_00098c98:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[0]);
        cpu->r[3] = wb_tmp;
        }
    }
L_00098c9c:;
    {
        goto L_00098c24;
    }
L_00098ca0:;
    {
        cpu->r[1] = 0x0000270fu;
    }
L_00098ca4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00098ca8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00098d5c;
        }
    }
L_00098cac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000009u, 1, 1);
    }
L_00098cb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00098f88;
        }
    }
L_00098cb4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00098cb8:;
    {
        cpu->r[9] = 0x00006667u;
    }
L_00098cbc:;
    {
        cpu->r[10] = 0x00005556u;
    }
L_00098cc0:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x6666u << 16);
    }
L_00098cc4:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x5555u << 16);
    }
L_00098cc8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00098ccc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_00098cd0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[9] * (int64_t)(int32_t)cpu->r[5]; cpu->r[1] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_00098cd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00098cd8:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00098cdc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[10] * (int64_t)(int32_t)cpu->r[2]; cpu->r[0] = (uint32_t)v; cpu->r[14] = (uint32_t)(v >> 32); }
    }
L_00098ce0:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[12], 1, 2u, &shc), cpu->r[1], 1, 0);
    }
L_00098ce4:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_00098ce8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00098cec:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_00098cf0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 1u, &shc), 1, 0);
    }
L_00098cf4:;
    {
        cpu->r[5] = cpu->r[12];
    }
L_00098cf8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00098cfc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_00098d00:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[14], 2, 1u, &shc), 0, 0);
    }
L_00098d04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_00098d08:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[14], 1, 1);
    }
L_00098d0c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = 0x00000000u;
        }
    }
L_00098d10:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[12] & 0x00000001u; cpu->r[14] = v;
        }
    }
L_00098d14:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_00098d18:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_00098d1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00098e84;
        }
    }
L_00098d20:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00098d24:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x0000002cu;
        }
    }
L_00098d28:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
        }
    }
L_00098d2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00098cd0;
        }
    }
L_00098d30:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00098d34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_00098d38:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x0000002eu;
        }
    }
L_00098d3c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000020u;
        }
    }
L_00098d40:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
        }
    }
L_00098d44:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[0]);
        cpu->r[3] = wb_tmp;
        }
    }
L_00098d48:;
    {
        goto L_00098cd0;
    }
L_00098d4c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00098d50:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00098d54:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_00098d58:;
    {
        goto L_00098bcc;
    }
L_00098d5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_00098d60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009901c;
        }
    }
L_00098d64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000009u, 1, 1);
    }
L_00098d68:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00098d6c:;
    {
        cpu->r[12] = 0x00006667u;
    }
L_00098d70:;
    {
        cpu->r[14] = 0x00005556u;
    }
L_00098d74:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x6666u << 16);
    }
L_00098d78:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x5555u << 16);
    }
L_00098d7c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00098d80:;
    {
        cpu->r[10] = 0x0000002cu;
    }
L_00098d84:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
        }
    }
L_00098d88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00098e5c;
        }
    }
L_00098d8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00098d90:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00098d94:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[5]; cpu->r[4] = (uint32_t)v; cpu->r[9] = (uint32_t)(v >> 32); }
    }
L_00098d98:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[14] * (int64_t)(int32_t)cpu->r[2]; cpu->r[4] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_00098d9c:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[9], 1, 2u, &shc), cpu->r[1], 1, 0);
    }
L_00098da0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00098da4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_00098da8:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[9], 2, 1u, &shc), 1, 0);
    }
L_00098dac:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00098db0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00098db4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000030u, 0, 0);
    }
L_00098db8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_00098dbc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00098dc0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_00098dc4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00098dc8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00098dcc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[9]);
        cpu->r[3] = wb_tmp;
    }
L_00098dd0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00098dd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00098e9c;
        }
    }
L_00098dd8:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00098ddc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[10]);
        cpu->r[3] = wb_tmp;
        }
    }
L_00098de0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000020u;
        }
    }
L_00098de4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[0]);
        cpu->r[3] = wb_tmp;
        }
    }
L_00098de8:;
    {
        goto L_00098d8c;
    }
L_00098dec:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00098df0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00098eac;
        }
    }
L_00098df4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00098df8:;
    {
        cpu->r[12] = 0x00006667u;
    }
L_00098dfc:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x6666u << 16);
    }
L_00098e00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00098e04:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[5]; cpu->r[2] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_00098e08:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00098e0c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00098e10:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 1, 2u, &shc), cpu->r[2], 1, 0);
    }
L_00098e14:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00098e18:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00098e1c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[0], 2, 1u, &shc), 1, 0);
    }
L_00098e20:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00098e24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_00098e28:;
    {
        wr8(cpu->r[1] + - 0x1u, cpu->r[0]);
    }
L_00098e2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00098e30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00098e04;
        }
    }
L_00098e34:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00098e38:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00098e3c:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_00098e40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00098b3c;
        }
    }
L_00098e44:;
    {
        cpu->r[3] = rd32(0x00098e4cu + + 0x27cu);
    }
L_00098e48:;
    {
        cpu->r[2] = 0x0000002du;
    }
L_00098e4c:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_00098e50:;
    {
        cpu->r[3] = add_flags(cpu, 0x00098e58u, cpu->r[3], 0, 0);
    }
L_00098e54:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_00098e58:;
    {
        goto L_00098b3c;
    }
L_00098e5c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[5]; cpu->r[2] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_00098e60:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00098e64:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[1], 1, 2u, &shc), cpu->r[2], 1, 0);
    }
L_00098e68:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00098e6c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 1u, &shc), 1, 0);
    }
L_00098e70:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00098e74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_00098e78:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_00098e7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00098e5c;
        }
    }
L_00098e80:;
    {
        goto L_00098e34;
    }
L_00098e84:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00098e88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00098cd0;
        }
    }
L_00098e8c:;
    {
        goto L_00098e34;
    }
L_00098e90:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00098e94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00098c24;
        }
    }
L_00098e98:;
    {
        goto L_00098e34;
    }
L_00098e9c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00098ea0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00098d8c;
        }
    }
L_00098ea4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4u);
    }
L_00098ea8:;
    {
        goto L_00098e34;
    }
L_00098eac:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00098eb0:;
    {
        cpu->r[12] = 0x00006667u;
    }
L_00098eb4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x6666u << 16);
    }
L_00098eb8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00098ebc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[5]; cpu->r[2] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_00098ec0:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00098ec4:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00098ec8:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 1, 2u, &shc), cpu->r[2], 1, 0);
    }
L_00098ecc:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00098ed0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00098ed4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[0], 2, 1u, &shc), 1, 0);
    }
L_00098ed8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00098edc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_00098ee0:;
    {
        wr8(cpu->r[1] + - 0x1u, cpu->r[0]);
    }
L_00098ee4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00098ee8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00098ebc;
        }
    }
L_00098eec:;
    {
        goto L_00098e34;
    }
L_00098ef0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00098ef4:;
    {
        cpu->r[10] = 0x00006667u;
    }
L_00098ef8:;
    {
        cpu->r[14] = 0x00005556u;
    }
L_00098efc:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x6666u << 16);
    }
L_00098f00:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x5555u << 16);
    }
L_00098f04:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00098f08:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00098f0c:;
    {
        cpu->r[9] = 0x0000002cu;
    }
L_00098f10:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_00098f14:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[10] * (int64_t)(int32_t)cpu->r[5]; cpu->r[1] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_00098f18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00098f1c:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00098f20:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[14] * (int64_t)(int32_t)cpu->r[2]; cpu->r[4] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_00098f24:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[0], 1, 2u, &shc), cpu->r[1], 1, 0);
    }
L_00098f28:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00098f2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00098f30:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_00098f34:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 1u, &shc), 1, 0);
    }
L_00098f38:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00098f3c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00098f40:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00098f44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_00098f48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_00098f4c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00098f50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_00098f54:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & 0x00000001u; cpu->r[12] = v;
        }
    }
L_00098f58:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_00098f5c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00098f60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00098f78;
        }
    }
L_00098f64:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00098f68:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[9]);
        cpu->r[3] = wb_tmp;
        }
    }
L_00098f6c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000020u;
        }
    }
L_00098f70:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[0]);
        cpu->r[3] = wb_tmp;
        }
    }
L_00098f74:;
    {
        goto L_00098f14;
    }
L_00098f78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00098f7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00098f14;
        }
    }
L_00098f80:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4u);
    }
L_00098f84:;
    {
        goto L_00098e34;
    }
L_00098f88:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00098f8c:;
    {
        cpu->r[10] = 0x00006667u;
    }
L_00098f90:;
    {
        cpu->r[14] = 0x00005556u;
    }
L_00098f94:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x6666u << 16);
    }
L_00098f98:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x5555u << 16);
    }
L_00098f9c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00098fa0:;
    {
        cpu->r[9] = 0x0000002cu;
    }
L_00098fa4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_00098fa8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[10] * (int64_t)(int32_t)cpu->r[5]; cpu->r[1] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_00098fac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00098fb0:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00098fb4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[14] * (int64_t)(int32_t)cpu->r[2]; cpu->r[4] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_00098fb8:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[0], 1, 2u, &shc), cpu->r[1], 1, 0);
    }
L_00098fbc:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00098fc0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00098fc4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_00098fc8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 1u, &shc), 1, 0);
    }
L_00098fcc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00098fd0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00098fd4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00098fd8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_00098fdc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_00098fe0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00098fe4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_00098fe8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & 0x00000001u; cpu->r[12] = v;
        }
    }
L_00098fec:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_00098ff0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00098ff4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009900c;
        }
    }
L_00098ff8:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00098ffc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[9]);
        cpu->r[3] = wb_tmp;
        }
    }
L_00099000:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000020u;
        }
    }
L_00099004:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[0]);
        cpu->r[3] = wb_tmp;
        }
    }
L_00099008:;
    {
        goto L_00098fa8;
    }
L_0009900c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00099010:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00098fa8;
        }
    }
L_00099014:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4u);
    }
L_00099018:;
    {
        goto L_00098e34;
    }
L_0009901c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00099020:;
    {
        cpu->r[10] = 0x00006667u;
    }
L_00099024:;
    {
        cpu->r[14] = 0x00005556u;
    }
L_00099028:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x6666u << 16);
    }
L_0009902c:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x5555u << 16);
    }
L_00099030:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00099034:;
    {
        cpu->r[9] = 0x0000002eu;
    }
L_00099038:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0009903c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[10] * (int64_t)(int32_t)cpu->r[5]; cpu->r[4] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_00099040:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00099044:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00099048:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[14] * (int64_t)(int32_t)cpu->r[2]; cpu->r[4] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_0009904c:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[0], 1, 2u, &shc), cpu->r[1], 1, 0);
    }
L_00099050:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00099054:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00099058:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_0009905c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 1u, &shc), 1, 0);
    }
L_00099060:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00099064:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00099068:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0009906c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_00099070:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_00099074:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00099078:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_0009907c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & 0x00000001u; cpu->r[12] = v;
        }
    }
L_00099080:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_00099084:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00099088:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000990a0;
        }
    }
L_0009908c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00099090:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[9]);
        cpu->r[3] = wb_tmp;
        }
    }
L_00099094:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x0000002cu;
        }
    }
L_00099098:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[0]);
        cpu->r[3] = wb_tmp;
        }
    }
L_0009909c:;
    {
        goto L_0009903c;
    }
L_000990a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000990a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009903c;
        }
    }
L_000990a8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4u);
    }
L_000990ac:;
    {
        goto L_00098e34;
    }
L_000990b0:;
    {
        cpu->r[14] = 0x000990b4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000990b4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[11] & shifter(cpu->r[4], 2, (cpu->r[9] & 0xffu), &shc); cpu->r[1] = v;
        set_nz(cpu, v);
        }
    }
L_000990b8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000990bc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_000990c0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[11] & shifter(cpu->r[0], 1, 14u, &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000990c4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[11] & shifter(cpu->r[4], 2, (cpu->r[7] & 0xffu), &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000990c8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[11] & shifter(cpu->r[8], 1, 8u, &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
}

/* _ZN4Game20ConvertToShortStringEPcPt @ 000990cc (arm) */
void fn_000990cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000990cc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000990d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000990d4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000990d8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000990dc:;
    {
        goto L_000990ec;
    }
L_000990e0:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[5]);
    }
L_000990e4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000990e8:;
    {
        wr16(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_000990ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000990f0:;
    {
        cpu->r[14] = 0x000990f4u; imp_strlen(cpu); /* strlen */
    }
L_000990f4:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000990f8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_000990fc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000990e0;
        }
    }
L_00099100:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[3] = v;
    }
L_00099104:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00099108:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009910c:;
    {
        wr16(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_00099110:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00099114u)) return;
    }
}

/* _ZN4Game10ShrinkNameEPtS0_P6Spritei @ 00099114 (arm) */
void fn_00099114(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099114:;
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
L_00099118:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0009911c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00099120:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_00099124:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00099128:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0009912c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x30u);
    }
L_00099130:;
    {
        cpu->r[14] = 0x00099134u; fn_000ae160(cpu);
    }
L_00099134:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_00099138:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009913c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00099140:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00099144:;
    {
        cpu->r[14] = 0x00099148u; fn_000aa404(cpu);
    }
L_00099148:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009914c:;
    {
        cpu->r[6] = cpu->r[13];
    }
L_00099150:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_00099154:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00099160;
        }
    }
L_00099158:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0009915c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00099160u)) return;
    }
L_00099160:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00099164:;
    {
        cpu->r[14] = 0x00099168u; fn_000ae12c(cpu);
    }
L_00099168:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009916c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000991ac;
        }
    }
L_00099170:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00099174:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00099178:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0009917c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00099180:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00099184:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_00099188:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_0009918c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_00099190:;
    {
        cpu->r[0] = 0x0000002eu;
    }
L_00099194:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_00099198:;
    {
        uint32_t wb_tmp = cpu->r[1] + (-0x00000002u);
        wr16(cpu->r[1], cpu->r[0]);
        cpu->r[1] = wb_tmp;
    }
L_0009919c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000991a0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000991a4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000991a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009917c;
        }
    }
L_000991ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000991b0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00099158;
        }
    }
L_000991b4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[11] = v;
    }
L_000991b8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000991bc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], cpu->r[11], 0, 0);
    }
L_000991c0:;
    {
        cpu->r[11] = sub_flags(cpu, 0x00000000u, cpu->r[11], 1, 0);
    }
L_000991c4:;
    {
        goto L_000991e0;
    }
L_000991c8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 1);
    }
L_000991cc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000991d0:;
    {
        cpu->r[0] = 0x0000002eu;
    }
L_000991d4:;
    {
        wr16(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_000991d8:;
    {
        wr16(cpu->r[3] + - 0x2u, cpu->r[0]);
    }
L_000991dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00099158;
        }
    }
L_000991e0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000991e4:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_000991e8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000991ec:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000991f0:;
    {
        cpu->r[14] = 0x000991f4u; fn_000aa404(cpu);
    }
L_000991f4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000991f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[4], 0, 0);
    }
L_000991fc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000002u, 1, 0);
    }
L_00099200:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_00099204:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000991c8;
        }
    }
L_00099208:;
    {
        goto L_00099158;
    }
}

/* _ZN4Game18MultiplayerSuspendEv @ 0009920c (arm) */
void fn_0009920c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009920c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00099210:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00099214:;
    {
        cpu->r[14] = 0x00099218u; fn_000f34a0(cpu);
    }
L_00099218:;
    {
        cpu->r[3] = 0x00006738u;
    }
L_0009921c:;
    {
        cpu->r[5] = rd32(0x00099224u + + 0xc0u);
    }
L_00099220:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00099224:;
    {
        cpu->r[5] = add_flags(cpu, 0x0009922cu, cpu->r[5], 0, 0);
    }
L_00099228:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0009922c:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00099230u)) return;
        }
    }
L_00099230:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_00099234:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_00099238:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009923c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00099240u)) return;
        }
    }
L_00099240:;
    {
        cpu->r[6] = 0x000063e8u;
    }
L_00099244:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00099248:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009924c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
        }
    }
L_00099250:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00099254u)) return;
        }
    }
L_00099254:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00099258:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009925c:;
    {
        cpu->r[14] = 0x00099264u;
    }
L_00099260:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00099264u)) return;
    }
L_00099264:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00099268:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009926cu)) return;
        }
    }
L_0009926c:;
    {
        cpu->r[3] = rd32(0x00099274u + + 0x74u);
    }
L_00099270:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00099274:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00099278:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[6]);
    }
L_0009927c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x317u);
    }
L_00099280:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00099284:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000992c0;
        }
    }
L_00099288:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0009928c:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_00099290:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_00099294:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00099298:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0009929c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000992a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000992d4;
        }
    }
L_000992a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000992a8:;
    {
        cpu->r[14] = 0x000992acu; fn_000967b8(cpu);
    }
L_000992ac:;
    {
        cpu->r[3] = 0x00006738u;
    }
L_000992b0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000992b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000992b8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000992bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000992c0u)) return;
    }
L_000992c0:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000992c4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000992c8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000992cc:;
    {
        cpu->r[14] = 0x000992d0u; fn_000ba460(cpu);
    }
L_000992d0:;
    {
        goto L_000992a4;
    }
L_000992d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000992d8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000992dc:;
    {
        cpu->r[14] = 0x000992e0u; fn_000bd190(cpu);
    }
L_000992e0:;
    {
        goto L_000992a4;
    }
}

/* _ZN4Game7SuspendEv @ 000992ec (arm) */
void fn_000992ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000992ec:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000992f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000992f4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000992f8:;
    {
        return fn_0018ced0(cpu);
    }
}

/* GamePause @ 000992fc (arm) */
void fn_000992fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000992fc:;
    {
        cpu->r[3] = rd32(0x00099304u + + 0x2cu);
    }
L_00099300:;
    {
        cpu->r[2] = rd32(0x00099308u + + 0x2cu);
    }
L_00099304:;
    {
        cpu->r[3] = add_flags(cpu, 0x0009930cu, cpu->r[3], 0, 0);
    }
L_00099308:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0009930c:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_00099310:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00099314:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00099318:;
    {
        cpu->r[2] = rd32(0x00099320u + + 0x18u);
    }
L_0009931c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00099320:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00099324:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00099328:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0009932c:;
    {
        return fn_000992ec(cpu);
    }
}

/* _ZN4Game19ActivateFrameEventsEii @ 0009933c (arm) */
void fn_0009933c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009933c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00099340:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00099344:;
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
L_00099348:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0009934c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_00099350:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_00099434;
        case 1: goto L_000993ac;
        case 2: goto L_00099390;
        case 3: goto L_00099398;
        case 4: goto L_00099390;
        case 5: goto L_00099390;
        case 6: goto L_00099390;
        case 7: goto L_00099378;
        default: guest_unimplemented(cpu, 0x00099350u); return; }
        }
    }
L_00099354:;
    {
        goto L_00099390;
    }
L_00099378:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0009937c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00099380:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00099384:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00099388:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0009938c:;
    {
        cpu->r[14] = 0x00099390u; fn_000fd248(cpu);
    }
L_00099390:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00099394:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00099398u)) return;
    }
L_00099398:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0009939c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000993a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000993a4:;
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
L_000993a8:;
    {
        return fn_000c6958(cpu);
    }
L_000993ac:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000993b0:;
    {
        cpu->r[3] = 0x00008c78u;
    }
L_000993b4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000993b8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000993bc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000993c0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000993c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00099390;
        }
    }
L_000993c8:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000993cc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000993d0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000993d4:;
    {
        cpu->r[9] = 0x00008cb8u;
    }
L_000993d8:;
    {
        cpu->r[10] = 0x00008cc0u;
    }
L_000993dc:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000993e0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000993e4:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000993e8:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000993ec:;
    {
        cpu->r[8] = 0x0000173cu;
    }
L_000993f0:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[7] = v;
    }
L_000993f4:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_000993f8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_000993fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_00099400:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00099404:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[10]);
        }
    }
L_00099408:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[9]);
        }
    }
L_0009940c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
        }
    }
L_00099410:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[12] = v;
    }
L_00099414:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
        }
    }
L_00099418:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0009941c:;
    {
        uint32_t v = cpu->r[12] & 0x0000000fu; cpu->r[12] = v;
    }
L_00099420:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00099424:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00099428:;
    {
        wr32(cpu->r[0] + cpu->r[8], cpu->r[12]);
    }
L_0009942c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000993f8;
        }
    }
L_00099430:;
    {
        goto L_00099390;
    }
L_00099434:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00099438:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_0009943c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00099440:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_00099444:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00099448:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0009944c:;
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
L_00099450:;
    {
        return fn_00149b48(cpu);
    }
}

/* _ZN4Game15AddEventToFrameEii @ 00099454 (arm) */
void fn_00099454(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099454:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_00099458:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_0009945c:;
    {
        return fn_000f5c88(cpu);
    }
}

/* _ZN4Game9GetCameraEi @ 00099460 (arm) */
void fn_00099460(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099460:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00006700u, 0, 0);
    }
L_00099464:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00099468:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000c4u, 0, 0);
    }
L_0009946c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00099470:;
    {
        cpu->r[14] = 0x00099474u; fn_000fb460(cpu);
    }
L_00099474:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00099478:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0009947cu)) return;
    }
}

/* _ZN4Game12RecordCameraEifff @ 0009947c (arm) */
void fn_0009947c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009947c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_00099480:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_00099484:;
    {
        return fn_000fb4bc(cpu);
    }
}

/* _ZN4Game14IncrementFrameEv @ 00099488 (arm) */
void fn_00099488(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099488:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_0009948c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_00099490:;
    {
        return fn_000fa7e0(cpu);
    }
}

/* _ZN4Game9InitFrameEv @ 00099494 (arm) */
void fn_00099494(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099494:;
    {
        cpu->r[3] = rd32(0x0009949cu + + 0x3cu);
    }
L_00099498:;
    {
        cpu->r[2] = rd32(0x000994a0u + + 0x3cu);
    }
L_0009949c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000994a4u, cpu->r[3], 0, 0);
    }
L_000994a0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000994a4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000994a8:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000994ac:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000994b0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000994b4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000994b8:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_000994bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000994c0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000994c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000994c8:;
    {
        if (cond_test(cpu, 13)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000994cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_000994d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000994d4:;
    {
        return fn_000fa488(cpu);
    }
}

/* _ZN4Game18GetReplayParameterEiib @ 000994e0 (arm) */
void fn_000994e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000994e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000994e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000994f4;
        }
    }
L_000994e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_000994ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000994f0:;
    {
        return fn_000f7820(cpu);
    }
L_000994f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_000994f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000994fc:;
    {
        return fn_000f77ac(cpu);
    }
}

/* _ZN4Game17GetReplaySettingsEv @ 00099500 (arm) */
void fn_00099500(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099500:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_00099504:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_00099508:;
    {
        return fn_000f7b58(cpu);
    }
}

/* _ZN4Game17GetReplayRotationEiib @ 0009950c (arm) */
void fn_0009950c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009950c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00099510:;
    {
        cpu->r[12] = rd8(cpu->r[13] + + 0x8u);
    }
L_00099514:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00099518:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0009951c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00099534;
        }
    }
L_00099520:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00006700u, 0, 0);
    }
L_00099524:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000c4u, 0, 0);
    }
L_00099528:;
    {
        cpu->r[14] = 0x0009952cu; fn_000f6604(cpu);
    }
L_0009952c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00099530:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00099534u)) return;
    }
L_00099534:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00006700u, 0, 0);
    }
L_00099538:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000c4u, 0, 0);
    }
L_0009953c:;
    {
        cpu->r[14] = 0x00099540u; fn_000f5fd8(cpu);
    }
L_00099540:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00099544:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00099548u)) return;
    }
}

/* _ZN4Game16IsReplayCrashingEib @ 00099548 (arm) */
void fn_00099548(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099548:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_0009954c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_00099550:;
    {
        return fn_000f5ef4(cpu);
    }
}

/* _ZN4Game13SaveCrashQuatEib @ 00099554 (arm) */
void fn_00099554(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099554:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_00099558:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_0009955c:;
    {
        return fn_000fb99c(cpu);
    }
}

/* _ZN4Game12GetCrashQuatEib @ 00099560 (arm) */
void fn_00099560(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099560:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00006700u, 0, 0);
    }
L_00099564:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00099568:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000c4u, 0, 0);
    }
L_0009956c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00099570:;
    {
        cpu->r[14] = 0x00099574u; fn_000f5e38(cpu);
    }
L_00099574:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00099578:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0009957cu)) return;
    }
}

/* _ZN4Game17GetReplayPositionEib @ 0009957c (arm) */
void fn_0009957c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009957c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00099580:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00099584:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00099588:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000995a0;
        }
    }
L_0009958c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00006700u, 0, 0);
    }
L_00099590:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000c4u, 0, 0);
    }
L_00099594:;
    {
        cpu->r[14] = 0x00099598u; fn_000fa32c(cpu);
    }
L_00099598:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009959c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000995a0u)) return;
    }
L_000995a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00006700u, 0, 0);
    }
L_000995a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000c4u, 0, 0);
    }
L_000995a8:;
    {
        cpu->r[14] = 0x000995acu; fn_000fbb38(cpu);
    }
L_000995ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000995b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000995b4u)) return;
    }
}

/* _ZN4Game14GetReplayInputEv @ 000995b4 (arm) */
void fn_000995b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000995b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_000995b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000995bc:;
    {
        return fn_000f5db0(cpu);
    }
}

/* _ZN4Game13IsReplayEndedEv @ 000995c0 (arm) */
void fn_000995c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000995c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_000995c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000995c8:;
    {
        return fn_000f5ed4(cpu);
    }
}

/* _ZN4Game9EndReplayEv @ 000995cc (arm) */
void fn_000995cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000995cc:;
    {
        cpu->r[2] = 0x000067c2u;
    }
L_000995d0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000995d4:;
    {
        cpu->r[1] = rd8(cpu->r[0] + cpu->r[2]);
    }
L_000995d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000995dc:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000995e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_000995e4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000995e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000995ec:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_000995f0:;
    {
        return fn_000f85d0(cpu);
    }
}

/* _ZN4Game11StartReplayEv @ 000995f4 (arm) */
void fn_000995f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000995f4:;
    {
        cpu->r[3] = 0x000067c1u;
    }
L_000995f8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000995fc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00099600:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_00099604:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_00099608:;
    {
        cpu->r[3] = 0x000067c2u;
    }
L_0009960c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000c4u, 0, 0);
    }
L_00099610:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099614:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_00099618:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009961c:;
    {
        cpu->r[14] = 0x00099620u; fn_000fa6f0(cpu);
    }
L_00099620:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00099624:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00099628:;
    {
        return fn_000f5d8c(cpu);
    }
}

/* _ZN4Game15RecordParameterEiiib @ 0009962c (arm) */
void fn_0009962c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009962c:;
    {
        cpu->r[12] = rd8(cpu->r[13]);
    }
L_00099630:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00099634:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00099644;
        }
    }
L_00099638:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_0009963c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_00099640:;
    {
        return fn_000f7354(cpu);
    }
L_00099644:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_00099648:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_0009964c:;
    {
        return fn_000f7714(cpu);
    }
}

/* _ZN4Game14RecordSettingsEv @ 00099650 (arm) */
void fn_00099650(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099650:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_00099654:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_00099658:;
    {
        return fn_000facc0(cpu);
    }
}

/* _ZN4Game14RecordRotationEiiiiib @ 0009965c (arm) */
void fn_0009965c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009965c:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00099660:;
    {
        cpu->r[12] = rd8(cpu->r[13] + + 0xcu);
    }
L_00099664:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4u);
    }
L_00099668:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0009966c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_00099670:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009968c;
        }
    }
L_00099674:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_00099678:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0009967c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_00099680:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00099684:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00099688:;
    {
        return fn_000f711c(cpu);
    }
L_0009968c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_00099690:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_00099694:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00099698:;
    {
        return fn_000f6be4(cpu);
    }
}

/* _ZN4Game14RecordPositionEib @ 0009969c (arm) */
void fn_0009969c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009969c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000996a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000996b0;
        }
    }
L_000996a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_000996a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000996ac:;
    {
        return fn_000f6a18(cpu);
    }
L_000996b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_000996b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000996b8:;
    {
        return fn_000fbe50(cpu);
    }
}

/* _ZN4Game11RecordInputEi @ 000996bc (arm) */
void fn_000996bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000996bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_000996c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000996c4:;
    {
        return fn_000f5cd4(cpu);
    }
}

/* _ZN4Game13EndRecordRaceEv @ 000996c8 (arm) */
void fn_000996c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000996c8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000996cc:;
    {
        cpu->r[2] = 0x000067c1u;
    }
L_000996d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_000996d4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000996d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000996dc:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_000996e0:;
    {
        return fn_000f9fa4(cpu);
    }
}

/* _ZN4Game15StartRecordRaceEv @ 000996e4 (arm) */
void fn_000996e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000996e4:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000996e8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000996ec:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[2]);
    }
L_000996f0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000996f4:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000996f8:;
    {
        cpu->r[2] = 0x000067c2u;
    }
L_000996fc:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[2]);
    }
L_00099700:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00099704:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00099708:;
    {
        cpu->r[2] = 0x000067c1u;
    }
L_0009970c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_00099710:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00099714:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_00099718:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_0009971c:;
    {
        return fn_000fadac(cpu);
    }
}

/* _ZN4Game11InitStringsEv @ 00099720 (arm) */
void fn_00099720(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099720:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00099724:;
    {
        cpu->r[5] = 0x00001bc4u;
    }
L_00099728:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0009972c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_00099730:;
    {
        cpu->r[14] = 0x00099734u; fn_000962d0(cpu);
    }
L_00099734:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_00099738:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009973c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00099740:;
    {
        wr8(cpu->r[3] + + 0x8u, cpu->r[2]);
    }
L_00099744:;
    {
        wr8(cpu->r[3] + + 0x9u, cpu->r[2]);
    }
L_00099748:;
    {
        wr8(cpu->r[3] + + 0xau, cpu->r[2]);
    }
L_0009974c:;
    {
        wr8(cpu->r[3] + + 0xbu, cpu->r[2]);
    }
L_00099750:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00099754:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00099758:;
    {
        cpu->r[14] = 0x0009975cu; fn_000af09c(cpu);
    }
L_0009975c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00099760:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00099764:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00099768:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009976cu)) return;
    }
}

/* _Z17GetStringFromGameiRi @ 0009976c (arm) */
void fn_0009976c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009976c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00099770:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00099774:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00099778:;
    {
        cpu->r[14] = 0x0009977cu; fn_000aeb58(cpu);
    }
L_0009977c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00099780:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00099784:;
    {
        cpu->r[3] = rd16(cpu->r[0]);
    }
L_00099788:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009978c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00099790u)) return;
        }
    }
L_00099790:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00099794:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00099798:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0009979c:;
    {
        cpu->r[2] = rd16(cpu->r[0] + cpu->r[2]);
    }
L_000997a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000997a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00099794;
        }
    }
L_000997a8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000997ac:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000997b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000997b4u)) return;
    }
}

/* _Z17GetTwitterMessageiRi @ 000997b4 (arm) */
void fn_000997b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000997b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000005d0u, 0, 0);
    }
L_000997b8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000997bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000009u, 0, 0);
    }
L_000997c0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000997c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000997c8:;
    {
        cpu->r[14] = 0x000997ccu; fn_000aeb58(cpu);
    }
L_000997cc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000997d0:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000997d4:;
    {
        cpu->r[3] = rd16(cpu->r[0]);
    }
L_000997d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000997dc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000997e0u)) return;
        }
    }
L_000997e0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000997e4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000997e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000997ec:;
    {
        cpu->r[2] = rd16(cpu->r[0] + cpu->r[2]);
    }
L_000997f0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000997f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000997e4;
        }
    }
L_000997f8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000997fc:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00099800:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00099804u)) return;
    }
}

/* _ZN4Game21MP_BeginCommunicationEv @ 00099804 (arm) */
void fn_00099804(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099804:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00099808:;
    {
        cpu->r[6] = 0x000063e8u;
    }
L_0009980c:;
    {
        cpu->r[5] = rd32(0x00099814u + + 0x110u);
    }
L_00099810:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00099814:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_00099818:;
    {
        cpu->r[5] = add_flags(cpu, 0x00099820u, cpu->r[5], 0, 0);
    }
L_0009981c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00099820:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009983c;
        }
    }
L_00099824:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00099828:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009982c:;
    {
        cpu->r[14] = 0x00099834u;
    }
L_00099830:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00099834u)) return;
    }
L_00099834:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00099838:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[3]);
    }
L_0009983c:;
    {
        cpu->r[0] = 0x00007494u;
    }
L_00099840:;
    {
        cpu->r[6] = 0x000063e8u;
    }
L_00099844:;
    {
        cpu->r[14] = 0x00099848u; fn_0018ba6c(cpu);
    }
L_00099848:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0009984c:;
    {
        cpu->r[14] = 0x00099850u; fn_001b2654(cpu);
    }
L_00099850:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00099854:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[7]);
    }
L_00099858:;
    {
        cpu->r[14] = 0x0009985cu; fn_001b2acc(cpu);
    }
L_0009985c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00099860:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00099864:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00099868:;
    {
        cpu->r[14] = 0x00099870u;
    }
L_0009986c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00099870u)) return;
    }
L_00099870:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00099874:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00099878:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009987c:;
    {
        cpu->r[14] = 0x00099884u;
    }
L_00099880:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00099884u)) return;
    }
L_00099884:;
    {
        cpu->r[3] = rd32(0x0009988cu + + 0x9cu);
    }
L_00099888:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_0009988c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00099890:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00099894:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00099898:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0009989c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000998f8;
        }
    }
L_000998a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0001e000u, 0, 0);
    }
L_000998a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x0000024cu, 0, 0);
    }
L_000998a8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x24cu);
    }
L_000998ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000998b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000998c8;
        }
    }
L_000998b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000998b8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000998bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000998c0:;
    {
        cpu->r[14] = 0x000998c8u;
    }
L_000998c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000998c8u)) return;
    }
L_000998c8:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_000998cc:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_000998d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000019c0u, 0, 0);
    }
L_000998d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000998d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003du, 0, 0);
    }
L_000998dc:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_000998e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x0000000du, 0, 0);
    }
L_000998e4:;
    {
        wr8(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_000998e8:;
    {
        cpu->r[14] = 0x000998ecu; fn_0009320c(cpu);
    }
L_000998ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000998f0:;
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
L_000998f4:;
    {
        return fn_000967b8(cpu);
    }
L_000998f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000019c0u, 0, 0);
    }
L_000998fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000015u, 0, 0);
    }
L_00099900:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x15u);
    }
L_00099904:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00099908:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000998c8;
        }
    }
L_0009990c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00099910:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00099914:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00099918:;
    {
        cpu->r[14] = 0x00099920u;
    }
L_0009991c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00099920u)) return;
    }
L_00099920:;
    {
        goto L_000998c8;
    }
}

/* _ZN4Game14MP_StartClientEv @ 0009992c (arm) */
void fn_0009992c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009992c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00099930:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00099934:;
    {
        cpu->r[14] = 0x00099938u; fn_00099804(cpu);
    }
L_00099938:;
    {
        cpu->r[4] = 0x000063e8u;
    }
L_0009993c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_00099940:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00099944:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00099948:;
    {
        cpu->r[14] = 0x00099950u;
    }
L_0009994c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00099950u)) return;
    }
L_00099950:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_00099954:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00099958:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009995c:;
    {
        cpu->r[14] = 0x00099964u;
    }
L_00099960:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00099964u)) return;
    }
L_00099964:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00099968u)) return;
    }
}

/* _ZN4Game23MP_StartSynchronizationEv @ 00099968 (arm) */
void fn_00099968(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099968:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0009996c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00099970:;
    {
        cpu->r[14] = 0x00099974u; fn_00096814(cpu);
    }
L_00099974:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00099978:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0009997c:;
    {
        cpu->r[14] = 0x00099980u; fn_000968b0(cpu);
    }
L_00099980:;
    {
        cpu->r[3] = 0x0000672cu;
    }
L_00099984:;
    {
        cpu->r[0] = rd32(0x0009998cu + + 0x2cu);
    }
L_00099988:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0009998c:;
    {
        cpu->r[3] = 0x0000672du;
    }
L_00099990:;
    {
        cpu->r[0] = add_flags(cpu, 0x00099998u, cpu->r[0], 0, 0);
    }
L_00099994:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_00099998:;
    {
        cpu->r[3] = 0x0000672eu;
    }
L_0009999c:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000999a0:;
    {
        cpu->r[14] = 0x000999a4u; fn_001d0ac4(cpu);
    }
L_000999a4:;
    {
        cpu->r[3] = 0x00006737u;
    }
L_000999a8:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000999ac:;
    {
        cpu->r[3] = 0x000063c4u;
    }
L_000999b0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000999b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000999b8u)) return;
    }
}

/* _ZN4Game15SampleSetVolumeEiii @ 000999bc (arm) */
void fn_000999bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000999bc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000999c0:;
    {
        cpu->r[14] = rd8(cpu->r[0] + + 0x495u);
    }
L_000999c4:;
    {
        cpu->r[12] = 0x0000851fu;
    }
L_000999c8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000999cc:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x51ebu << 16);
    }
L_000999d0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000999d4:;
    {
        uint32_t v = cpu->r[14] * cpu->r[3]; cpu->r[3] = v;
    }
L_000999d8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000999dc:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000999e0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[3]; cpu->r[14] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_000999e4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000999e8:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[12], 1, 5u, &shc), cpu->r[3], 1, 0);
    }
L_000999ec:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000999f0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000999f4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000999f8:;
    {
        cpu->r[14] = 0x000999fcu; fn_000fd200(cpu);
    }
L_000999fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00099a00:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00099a04u)) return;
    }
}

/* _ZN4Game9PlaySoundEiib @ 00099a04 (arm) */
void fn_00099a04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099a04:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00099a08:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00099a0c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00099a10:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00099a14:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_00099a18:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00099a1c:;
    {
        cpu->r[6] = rd8(cpu->r[0] + + 0x495u);
    }
L_00099a20:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00099a24:;
    {
        uint32_t v = cpu->r[6] * cpu->r[2]; cpu->r[6] = v;
    }
L_00099a28:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00099a2c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_00099a30:;
    {
        cpu->r[14] = 0x00099a34u; fn_000fd248(cpu);
    }
L_00099a34:;
    {
        cpu->r[12] = 0x0000851fu;
    }
L_00099a38:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x51ebu << 16);
    }
L_00099a3c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00099a40:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00099a44:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[6]; cpu->r[14] = (uint32_t)v; cpu->r[6] = (uint32_t)(v >> 32); }
    }
L_00099a48:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[6], 1, 5u, &shc), cpu->r[3], 1, 0);
    }
L_00099a4c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_00099a50:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00099a54:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00099a58:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00099a5c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x490u);
    }
L_00099a60:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_00099a64:;
    {
        cpu->r[14] = 0x00099a68u; fn_000fd200(cpu);
    }
L_00099a68:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00099a6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00099a70u)) return;
    }
}

/* _ZN4Game15SetMasterVolumeEi @ 00099a70 (arm) */
void fn_00099a70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099a70:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00099a74:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00099a78:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00099a7c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00099ab0;
        }
    }
L_00099a80:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000064u, 1, 1);
    }
L_00099a84:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00099ad4;
        }
    }
L_00099a88:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00099a8c:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_00099a90:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x42c8u << 16);
    }
L_00099a94:;
    {
        wr8(cpu->r[0] + + 0x494u, cpu->r[3]);
    }
L_00099a98:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00099a9c:;
    {
        cpu->r[14] = 0x00099aa0u; fn_000fd318(cpu);
    }
L_00099aa0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099aa4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00099aa8:;
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
L_00099aac:;
    {
        return fn_000fcfd8(cpu);
    }
L_00099ab0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00099ab4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00099ab8:;
    {
        wr8(cpu->r[0] + + 0x494u, cpu->r[3]);
    }
L_00099abc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00099ac0:;
    {
        cpu->r[14] = 0x00099ac4u; fn_000fd318(cpu);
    }
L_00099ac4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099ac8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00099acc:;
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
L_00099ad0:;
    {
        return fn_000fcfd8(cpu);
    }
L_00099ad4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[5];
    }
L_00099ad8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00099adc:;
    {
        wr8(cpu->r[0] + + 0x494u, cpu->r[5]);
    }
L_00099ae0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00099ae4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00099ae8:;
    {
        cpu->r[14] = 0x00099aecu; fn_000fd318(cpu);
    }
L_00099aec:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00099af0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00099ac4;
        }
    }
L_00099af4:;
    {
        goto L_00099aa0;
    }
}

/* _ZN4Game12ChangeVolumeEi @ 00099af8 (arm) */
void fn_00099af8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099af8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00099afc:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00099b00:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x494u);
    }
L_00099b04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_00099b08:;
    {
        return fn_00099a70(cpu);
    }
}

/* _ZN4Game12StopAllAudioEv @ 00099b0c (arm) */
void fn_00099b0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099b0c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00099b10:;
    {
        return fn_0018cbe8(cpu);
    }
}

/* _ZN4Game9StopMusicEb @ 00099b14 (arm) */
void fn_00099b14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099b14:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00099b18:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00099b1c:;
    {
        return fn_0018cb94(cpu);
    }
}

/* _ZN4Game12SuspendMusicEv @ 00099b20 (arm) */
void fn_00099b20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099b20:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00099b24:;
    {
        return fn_00099b14(cpu);
    }
}

/* _ZN4Game11CreateMusicEi @ 00099b28 (arm) */
void fn_00099b28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099b28:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x484u);
    }
L_00099b2c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00099b30:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00099b34:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00099b38:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00099b3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00099b6c;
        }
    }
L_00099b40:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00099b44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00099b48:;
    {
        cpu->r[14] = 0x00099b4cu; fn_00099b14(cpu);
    }
L_00099b4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00099b50:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00099b54:;
    {
        cpu->r[14] = 0x00099b58u; fn_000967ac(cpu);
    }
L_00099b58:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000011u, 1, 1);
    }
L_00099b5c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00099b60:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[4] + + 0x484u, cpu->r[5]);
        }
    }
L_00099b64:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[4] + + 0x488u, cpu->r[3]);
        }
    }
L_00099b68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00099b6cu)) return;
    }
L_00099b6c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x488u);
    }
L_00099b70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00099b74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00099b40;
        }
    }
L_00099b78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00099b7cu)) return;
    }
}

/* _ZN4Game14SetOrientationEi @ 00099b7c (arm) */
void fn_00099b7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099b7c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00099b80:;
    {
        cpu->r[4] = rd8(cpu->r[0] + + 0x4ccu);
    }
L_00099b84:;
    {
        cpu->r[7] = rd32(0x00099b8cu + + 0xdcu);
    }
L_00099b88:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00099b8c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00099b90:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00099b94:;
    {
        cpu->r[7] = add_flags(cpu, 0x00099b9cu, cpu->r[7], 0, 0);
    }
L_00099b98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00099ba4;
        }
    }
L_00099b9c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00099ba0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00099ba4u)) return;
    }
L_00099ba4:;
    {
        cpu->r[3] = rd32(0x00099bacu + + 0xc0u);
    }
L_00099ba8:;
    {
        wr32(cpu->r[0] + + 0x4e0u, cpu->r[1]);
    }
L_00099bac:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00099bb0:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00099bb4:;
    {
        cpu->r[3] = 0x00001290u;
    }
L_00099bb8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00099bbc:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00099bc0:;
    {
        cpu->r[14] = 0x00099bc4u; fn_0012df9c(cpu);
    }
L_00099bc4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00099bc8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00099bcc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00099bd0:;
    {
        cpu->r[14] = 0x00099bd4u; fn_0012ec44(cpu);
    }
L_00099bd4:;
    {
        cpu->r[3] = rd32(0x00099bdcu + + 0x94u);
    }
L_00099bd8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00099bdc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00099be0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00099be4:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00099be8:;
    {
        cpu->r[3] = rd32(0x00099bf0u + + 0x84u);
    }
L_00099bec:;
    {
        cpu->r[7] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00099bf0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00099bf4:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_00099bf8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00099bfc:;
    {
        cpu->r[14] = 0x00099c00u; fn_0012ed70(cpu);
    }
L_00099c00:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_00099c04:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00099c08:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00099c0c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00099c10:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00099c14:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00099c18:;
    {
        cpu->r[14] = 0x00099c1cu; fn_0012fa2c(cpu);
    }
L_00099c1c:;
    {
        cpu->r[3] = 0x00001d38u;
    }
L_00099c20:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00099c24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00099c28:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00099b9c;
        }
    }
L_00099c2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_00099c30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
    }
L_00099c34:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00099c38:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x4u);
    }
L_00099c3c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00099c40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00099b9c;
        }
    }
L_00099c44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00099c48:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00099c4c:;
    {
        cpu->r[14] = 0x00099c54u;
    }
L_00099c50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00099c54u)) return;
    }
L_00099c54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00099c58:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00099c5c:;
    {
        cpu->r[14] = 0x00099c64u;
    }
L_00099c60:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00099c64u)) return;
    }
L_00099c64:;
    {
        goto L_00099b9c;
    }
}

/* _ZN4Game15CleanGameSoundsEv @ 00099c78 (arm) */
void fn_00099c78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099c78:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00099c7c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00099c80:;
    {
        return fn_0018d47c(cpu);
    }
}
