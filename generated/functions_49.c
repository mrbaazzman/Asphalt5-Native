#include "functions.h"

/* _ZN7Texture12LoadRGBA_JPGEP8LZMAFile @ 00134944 (arm) */
void fn_00134944(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00134944:;
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
L_00134948:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0013494c:;
    {
        cpu->r[5] = rd32(0x00134954u + + 0x3d0u);
    }
L_00134950:;
    {
        cpu->r[6] = rd32(0x00134958u + + 0x3d0u);
    }
L_00134954:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00002040u, 1, 0);
    }
L_00134958:;
    {
        cpu->r[5] = add_flags(cpu, 0x00134960u, cpu->r[5], 0, 0);
    }
L_0013495c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00134960:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00134964:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_00134968:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0013496c:;
    {
        cpu->r[11] = (~0x00000000u);
    }
L_00134970:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_00134974:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[11]);
    }
L_00134978:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[10]);
    }
L_0013497c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00134980:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00134984:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00002000u, 0, 0);
    }
L_00134988:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0013498c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[7]);
    }
L_00134990:;
    {
        wr32(cpu->r[1] + + 0x4cu, cpu->r[3]);
    }
L_00134994:;
    {
        cpu->r[14] = 0x00134998u; fn_000fc628(cpu);
    }
L_00134998:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_0013499c:;
    {
        cpu->r[14] = 0x001349a0u; fn_00133bf0(cpu);
    }
L_001349a0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_001349a4:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_001349a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134d14;
        }
    }
L_001349ac:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_001349b0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001349b4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001349b8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001349bc:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[8], 0x00000024u, 1, 0);
    }
L_001349c0:;
    {
        cpu->r[14] = 0x001349c4u; fn_000fc5f4(cpu);
    }
L_001349c4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001349c8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[8], 0x00000030u, 1, 0);
    }
L_001349cc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_001349d0:;
    {
        cpu->r[14] = 0x001349d4u; fn_00086b10(cpu);
    }
L_001349d4:;
    {
        wr32(cpu->r[8] + - 0x28u, cpu->r[7]);
    }
L_001349d8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001349dc:;
    {
        wr32(cpu->r[8] + - 0x30u, cpu->r[7]);
    }
L_001349e0:;
    {
        wr32(cpu->r[8] + - 0x2cu, cpu->r[7]);
    }
L_001349e4:;
    {
        cpu->r[14] = 0x001349e8u; fn_00086d58(cpu);
    }
L_001349e8:;
    {
        cpu->r[2] = rd32(0x001349f0u + + 0x33cu);
    }
L_001349ec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001349f0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001349f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000a8u, 0, 0);
    }
L_001349f8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001349fc:;
    {
        cpu->r[14] = 0x00134a00u; fn_000802ec(cpu);
    }
L_00134a00:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00134a04:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00134a08:;
    {
        cpu->r[14] = 0x00134a0cu; fn_00086cbc(cpu);
    }
L_00134a0c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00134a10:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_00134a14:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00134a18:;
    {
        cpu->r[14] = 0x00134a1cu; fn_0007df18(cpu);
    }
L_00134a1c:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00134a20:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00134a24:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00134a28:;
    {
        cpu->r[14] = 0x00134a2cu; fn_00086cb4(cpu);
    }
L_00134a2c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00134a30:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00134a34:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00134a38:;
    {
        cpu->r[14] = 0x00134a3cu; fn_00086cf4(cpu);
    }
L_00134a3c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00134a40:;
    {
        cpu->r[14] = 0x00134a44u; fn_0007dd44(cpu);
    }
L_00134a44:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00134a48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00134a4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134cf8;
        }
    }
L_00134a50:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x18u);
    }
L_00134a54:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00134a5cu + + 0x2c4u);
    }
L_00134a58:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_00134a5c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x18u);
    }
L_00134a60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00134a64:;
    {
        uint32_t v = shifter(cpu->r[10], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[10] = v;
    }
L_00134a68:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 0);
    }
L_00134a6c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[10];
    }
L_00134a70:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00134a74:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_00134a78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134a8c;
        }
    }
L_00134a7c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00134a80:;
    {
        cpu->r[14] = 0x00134a84u; fn_0018ba48(cpu);
    }
L_00134a84:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00134a88:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[7]);
    }
L_00134a8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_00134a90:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00134a94:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00134a98:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[0] = v;
    }
L_00134a9c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00134aa0:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_00134aa4:;
    {
        cpu->r[14] = 0x00134aa8u; fn_00133bf0(cpu);
    }
L_00134aa8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_00134aac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00134ab0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00134ab4:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_00134ab8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00134bf8;
        }
    }
L_00134abc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00134ac0:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00134ac4:;
    {
        cpu->r[8] = (~0x00000000u);
    }
L_00134ac8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00134acc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00134bec;
        }
    }
L_00134ad0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00134ad4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00134ad8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 0);
    }
L_00134adc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[2] = v;
    }
L_00134ae0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_00134ae4:;
    {
        uint32_t v = cpu->r[7] * cpu->r[0] + cpu->r[1]; cpu->r[14] = v;
    }
L_00134ae8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x10u);
    }
L_00134aec:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x24u);
    }
L_00134af0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00134af4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_00134af8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = rd32(cpu->r[3] + + 0x18u);
        }
    }
L_00134afc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[14], 2, 2u, &shc), 0, 0);
    }
L_00134b00:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = rd32(cpu->r[10] + + 0x2cu);
        }
    }
L_00134b04:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = rd32(cpu->r[10] + cpu->r[2]);
        }
    }
L_00134b08:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[10];
        }
    }
L_00134b0c:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
        }
    }
L_00134b10:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 15, 15, 16);
        }
    }
L_00134b14:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
        }
    }
L_00134b18:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_00134b1c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = (uint32_t)((uint8_t)cpu->r[10]);
        }
    }
L_00134b20:;
    {
        wr8(cpu->r[12] + shifter(cpu->r[14], 2, 2u, &shc), cpu->r[10]);
    }
L_00134b24:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x10u);
    }
L_00134b28:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_00134b2c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_00134b30:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = rd32(cpu->r[3] + + 0x18u);
        }
    }
L_00134b34:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = rd32(cpu->r[12] + + 0x5cu);
        }
    }
L_00134b38:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[2]);
        }
    }
L_00134b3c:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[12];
        }
    }
L_00134b40:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
        }
    }
L_00134b44:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 15, 15, 16);
        }
    }
L_00134b48:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
        }
    }
L_00134b4c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_00134b50:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = (uint32_t)((uint8_t)cpu->r[12]);
        }
    }
L_00134b54:;
    {
        wr8(cpu->r[0] + + 0x1u, cpu->r[12]);
    }
L_00134b58:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x10u);
    }
L_00134b5c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000002u, 1, 1);
    }
L_00134b60:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_00134b64:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = rd32(cpu->r[3] + + 0x18u);
        }
    }
L_00134b68:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = rd32(cpu->r[12] + + 0x8cu);
        }
    }
L_00134b6c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[2]);
        }
    }
L_00134b70:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[12];
        }
    }
L_00134b74:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
        }
    }
L_00134b78:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 15, 15, 16);
        }
    }
L_00134b7c:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
        }
    }
L_00134b80:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_00134b84:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = (uint32_t)((uint8_t)cpu->r[12]);
        }
    }
L_00134b88:;
    {
        wr8(cpu->r[0] + + 0x2u, cpu->r[12]);
    }
L_00134b8c:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x10u);
    }
L_00134b90:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000003u, 1, 1);
    }
L_00134b94:;
    {
        if (cond_test(cpu, 14)) {
        wr8(cpu->r[0] + + 0x3u, cpu->r[8]);
        }
    }
L_00134b98:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00134bd4;
        }
    }
L_00134b9c:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x18u);
    }
L_00134ba0:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0xbcu);
    }
L_00134ba4:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_00134ba8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[12];
    }
L_00134bac:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00134bb0:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_00134bb4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_00134bb8:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00134bbc:;
    {
        cpu->r[12] = (uint32_t)((uint8_t)cpu->r[12]);
    }
L_00134bc0:;
    {
        sub_flags(cpu, cpu->r[12], 0x000000ffu, 1, 1);
    }
L_00134bc4:;
    {
        wr8(cpu->r[0] + + 0x3u, cpu->r[12]);
    }
L_00134bc8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
        }
    }
L_00134bcc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[0] | 0x00000040u; cpu->r[0] = v;
        }
    }
L_00134bd0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
        }
    }
L_00134bd4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00134bd8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00134bdc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00134be0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_00134be4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00134ae4;
        }
    }
L_00134be8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_00134bec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00134bf0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_00134bf4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00134ac8;
        }
    }
L_00134bf8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00134bfc:;
    {
        cpu->r[14] = 0x00134c00u; fn_00080418(cpu);
    }
L_00134c00:;
    {
        cpu->r[3] = 0x00001908u;
    }
L_00134c04:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00134c08:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_00134c0c:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_00134c10:;
    {
        cpu->r[14] = 0x00134c14u; imp__Znaj(cpu); /* _Znaj */
    }
L_00134c14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00134c18:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_00134c1c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_00134c20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134cd0;
        }
    }
L_00134c24:;
    {
        cpu->r[0] = 0x00000cf5u;
    }
L_00134c28:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00134c2c:;
    {
        cpu->r[14] = 0x00134c30u; imp_glPixelStorei(cpu); /* glPixelStorei */
    }
L_00134c30:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00134c34:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_00134c38:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00134c3c:;
    {
        cpu->r[14] = 0x00134c40u; imp_glGenTextures(cpu); /* glGenTextures */
    }
L_00134c40:;
    {
        cpu->r[3] = rd32(0x00134c48u + + 0xe8u);
    }
L_00134c44:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_00134c48:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00134c4c:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00134c50:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00134c54:;
    {
        cpu->r[14] = 0x00134c58u; fn_0012f114(cpu);
    }
L_00134c58:;
    {
        cpu->r[1] = 0x00008191u;
    }
L_00134c5c:;
    {
        cpu->r[2] = 0x3f800000u;
    }
L_00134c60:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00134c64:;
    {
        cpu->r[14] = 0x00134c68u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_00134c68:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00134c6c:;
    {
        cpu->r[14] = 0x00134c70u; fn_00133bb4(cpu);
    }
L_00134c70:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x38u);
    }
L_00134c74:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x24u);
    }
L_00134c78:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00134c7c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x8u);
    }
L_00134c80:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00134c84:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4cu);
    }
L_00134c88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00134c8c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_00134c90:;
    {
        cpu->r[14] = 0x00001401u;
    }
L_00134c94:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00134c98:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_00134c9c:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_00134ca0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_00134ca4:;
    {
        cpu->r[14] = 0x00134ca8u; imp_glTexImage2D(cpu); /* glTexImage2D */
    }
L_00134ca8:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00134cac:;
    {
        cpu->r[1] = 0x00008191u;
    }
L_00134cb0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00134cb4:;
    {
        cpu->r[14] = 0x00134cb8u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_00134cb8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_00134cbc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_00134cc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134cd0;
        }
    }
L_00134cc4:;
    {
        cpu->r[14] = 0x00134cc8u; fn_0018ba48(cpu);
    }
L_00134cc8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00134ccc:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[7]);
    }
L_00134cd0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00134cd4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00002000u, 0, 0);
    }
L_00134cd8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4cu);
    }
L_00134cdc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00134ce0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00134ce4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00134d1c;
        }
    }
L_00134ce8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_00134cec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00002000u, 0, 0);
    }
L_00134cf0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00134cf4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00134cf8u)) return;
    }
L_00134cf8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_00134cfc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00134d00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134d14;
        }
    }
L_00134d04:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00134d08:;
    {
        cpu->r[14] = 0x00134d0cu; fn_0018ba48(cpu);
    }
L_00134d0c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00134d10:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_00134d14:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00134d18:;
    {
        goto L_00134cd0;
    }
L_00134d1c:;
    {
        cpu->r[14] = 0x00134d20u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_00134d20:;
    {
        if (cond_test(cpu, 5)) {
        add_flags(cpu, 0x00134d28u, 0x00000000u, 0, 1);
        }
    }
L_00134d24:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[1] + (-cpu->r[8]);
        cpu->r[5] = rd16(cpu->r[1]);
        cpu->r[1] = wb_tmp;
        }
    }
L_00134d28:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_00134d2c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[4], 4, 7u, &shc); cpu->r[0] = v;
        }
    }
L_00134d30:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 3, 15u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN7Texture9StoreRGBAEb @ 00134d34 (arm) */
void fn_00134d34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00134d34:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00134d38:;
    {
        cpu->r[5] = rd32(0x00134d40u + + 0x108u);
    }
L_00134d3c:;
    {
        cpu->r[3] = rd32(0x00134d44u + + 0x108u);
    }
L_00134d40:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00134d44:;
    {
        cpu->r[5] = add_flags(cpu, 0x00134d4cu, cpu->r[5], 0, 0);
    }
L_00134d48:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x44u);
    }
L_00134d4c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00134d50:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00134d54:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00134d58:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00134d5c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00134d60:;
    {
        cpu->r[14] = 0x00134d64u; fn_0012f114(cpu);
    }
L_00134d64:;
    {
        cpu->r[0] = 0x00000cf5u;
    }
L_00134d68:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00134d6c:;
    {
        cpu->r[14] = 0x00134d70u; imp_glPixelStorei(cpu); /* glPixelStorei */
    }
L_00134d70:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00134d74:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x24u);
    }
L_00134d78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00134e0c;
        }
    }
L_00134d7c:;
    {
        cpu->r[3] = rd32(0x00134d84u + + 0xccu);
    }
L_00134d80:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00134d84:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00134d88:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_00134d8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00134d90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134da4;
        }
    }
L_00134d94:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00134d98:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00134d9c:;
    {
        cpu->r[14] = 0x00134da4u;
    }
L_00134da0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00134da4u)) return;
    }
L_00134da4:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_00134da8:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00134dac:;
    {
        cpu->r[1] = 0x00002801u;
    }
L_00134db0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4618u << 16);
    }
L_00134db4:;
    {
        cpu->r[14] = 0x00134db8u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_00134db8:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_00134dbc:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00134dc0:;
    {
        cpu->r[1] = 0x00002800u;
    }
L_00134dc4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4618u << 16);
    }
L_00134dc8:;
    {
        cpu->r[14] = 0x00134dccu; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_00134dcc:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x8u);
    }
L_00134dd0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x38u);
    }
L_00134dd4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00134dd8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4cu);
    }
L_00134ddc:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_00134de0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00134de4:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00134de8:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00134dec:;
    {
        cpu->r[14] = 0x00001401u;
    }
L_00134df0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_00134df4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_00134df8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_00134dfc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00134e00:;
    {
        cpu->r[14] = 0x00134e04u; imp_glTexImage2D(cpu); /* glTexImage2D */
    }
L_00134e04:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00134e08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00134e0cu)) return;
    }
L_00134e0c:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00134e10:;
    {
        cpu->r[14] = 0x00134e14u; imp__Znaj(cpu); /* _Znaj */
    }
L_00134e14:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[0]);
    }
L_00134e18:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_00134e1c:;
    {
        cpu->r[14] = 0x00134e20u; fn_0018ba6c(cpu);
    }
L_00134e20:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_00134e24:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00134e28:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_00134e2c:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_00134e30:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00134e34:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00134e38:;
    {
        cpu->r[14] = 0x00134e3cu; fn_0012b4c0(cpu);
    }
L_00134e3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_00134e40:;
    {
        wr32(cpu->r[3], cpu->r[7]);
    }
L_00134e44:;
    {
        goto L_00134d7c;
    }
}

/* _ZN7Texture8LoadRGBAEP8LZMAFilejb @ 00134e54 (arm) */
void fn_00134e54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00134e54:;
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
L_00134e58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00134e5c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00134e60:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_00134e64:;
    {
        cpu->r[8] = (~0x00000000u);
    }
L_00134e68:;
    {
        cpu->r[14] = 0x00134e6cu; imp_glGetError(cpu); /* glGetError */
    }
L_00134e6c:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_00134e70:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00134e74:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[8]);
    }
L_00134e78:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00134e7c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_00134e80:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[10]);
    }
L_00134e84:;
    {
        cpu->r[14] = 0x00134e88u; fn_000fc628(cpu);
    }
L_00134e88:;
    {
        cpu->r[5] = rd32(0x00134e90u + + 0x198u);
    }
L_00134e8c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00134e94u, cpu->r[5], 0, 0);
    }
L_00134e90:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_00134e94:;
    {
        cpu->r[14] = 0x00134e98u; fn_00133bf0(cpu);
    }
L_00134e98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00134e9c:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_00134ea0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00134eac;
        }
    }
L_00134ea4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00134ea8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00134eacu)) return;
    }
L_00134eac:;
    {
        cpu->r[8] = rd32(0x00134eb4u + + 0x178u);
    }
L_00134eb0:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[10]);
    }
L_00134eb4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00134eb8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00134ebc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_00134ec0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00134ec4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134edc;
        }
    }
L_00134ec8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00134ecc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00134ed0:;
    {
        cpu->r[14] = 0x00134ed8u;
    }
L_00134ed4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00134ed8u)) return;
    }
L_00134ed8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_00134edc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00134ee0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00134ee4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00134ee8:;
    {
        cpu->r[14] = 0x00134eecu; fn_000fc5f4(cpu);
    }
L_00134eec:;
    {
        cpu->r[3] = 0x00001908u;
    }
L_00134ef0:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00134ef4:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_00134ef8:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_00134efc:;
    {
        cpu->r[14] = 0x00134f00u; imp__Znaj(cpu); /* _Znaj */
    }
L_00134f00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00134f04:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_00134f08:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_00134f0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00134f10u)) return;
        }
    }
L_00134f10:;
    {
        cpu->r[0] = 0x00000cf5u;
    }
L_00134f14:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00134f18:;
    {
        cpu->r[14] = 0x00134f1cu; imp_glPixelStorei(cpu); /* glPixelStorei */
    }
L_00134f1c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00134f20:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_00134f24:;
    {
        cpu->r[14] = 0x00134f28u; imp_glGenTextures(cpu); /* glGenTextures */
    }
L_00134f28:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00134f2c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00134f30:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_00134f34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00134f38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134f4c;
        }
    }
L_00134f3c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00134f40:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00134f44:;
    {
        cpu->r[14] = 0x00134f4cu;
    }
L_00134f48:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00134f4cu)) return;
    }
L_00134f4c:;
    {
        cpu->r[3] = rd32(0x00134f54u + + 0xdcu);
    }
L_00134f50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_00134f54:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00134f58:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00134f5c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00134f60:;
    {
        cpu->r[14] = 0x00134f64u; fn_0012f114(cpu);
    }
L_00134f64:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
    }
L_00134f68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_00134f6c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[1] = v;
    }
L_00134f70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00134f74:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00134f78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00134f7c:;
    {
        uint32_t v = cpu->r[2] & 0xff000000u; cpu->r[2] = v;
    }
L_00134f80:;
    {
        sub_flags(cpu, cpu->r[2], 0xff000000u, 1, 1);
    }
L_00134f84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00135018;
        }
    }
L_00134f88:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00134f8c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00134f74;
        }
    }
L_00134f90:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00134f94:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00134f98:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_00134f9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00134fa0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134fb4;
        }
    }
L_00134fa4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00134fa8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00134fac:;
    {
        cpu->r[14] = 0x00134fb4u;
    }
L_00134fb0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00134fb4u)) return;
    }
L_00134fb4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00134fb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00134fbc:;
    {
        wr8(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_00134fc0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00134fc4:;
    {
        cpu->r[14] = 0x00134fc8u; fn_00134d34(cpu);
    }
L_00134fc8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00134fcc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00134fd0:;
    {
        wr8(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_00134fd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00134fec;
        }
    }
L_00134fd8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_00134fdc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00134fe0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134fec;
        }
    }
L_00134fe4:;
    {
        cpu->r[14] = 0x00134fe8u; fn_0018ba48(cpu);
    }
L_00134fe8:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[7]);
    }
L_00134fec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00134ff0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00134ff4:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x490u);
    }
L_00134ff8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00134ffc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00134ea4;
        }
    }
L_00135000:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00135004:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00135008:;
    {
        cpu->r[14] = 0x00135010u;
    }
L_0013500c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00135010u)) return;
    }
L_00135010:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00135014:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00135018u)) return;
    }
L_00135018:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0013501c:;
    {
        uint32_t v = cpu->r[3] | 0x00000040u; cpu->r[3] = v;
    }
L_00135020:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00135024:;
    {
        goto L_00134f90;
    }
}

/* _ZN7Texture8CleanHSVEv @ 00135034 (arm) */
void fn_00135034(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135034:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00135038:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0013503c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x24u);
    }
L_00135040:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00135044:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135054;
        }
    }
L_00135048:;
    {
        cpu->r[14] = 0x0013504cu; fn_0018ba20(cpu);
    }
L_0013504c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00135050:;
    {
        wr32(cpu->r[6] + + 0x24u, cpu->r[3]);
    }
L_00135054:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x54u);
    }
L_00135058:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013505c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00135060u)) return;
        }
    }
L_00135060:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x58u);
    }
L_00135064:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00135068:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001350ac;
        }
    }
L_0013506c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00135070:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_00135074:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00135078:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0013507c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135098;
        }
    }
L_00135080:;
    {
        cpu->r[14] = 0x00135084u; fn_0012b440(cpu);
    }
L_00135084:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00135088:;
    {
        cpu->r[14] = 0x0013508cu; fn_0018ba20(cpu);
    }
L_0013508c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x54u);
    }
L_00135090:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x58u);
    }
L_00135094:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[7]);
    }
L_00135098:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0013509c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001350a0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00135074;
        }
    }
L_001350a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001350a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001350acu)) return;
        }
    }
L_001350ac:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001350b0:;
    {
        cpu->r[14] = 0x001350b4u; fn_0018ba60(cpu);
    }
L_001350b4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001350b8:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[3]);
    }
L_001350bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001350c0u)) return;
    }
}

/* _ZN7Texture14OGLContextLostEv @ 001350c0 (arm) */
void fn_001350c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001350c0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x44u);
    }
L_001350c4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001350c8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001350cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001350d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013510c;
        }
    }
L_001350d4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_001350d8:;
    {
        cpu->r[14] = 0x001350dcu; imp_glDeleteTextures(cpu); /* glDeleteTextures */
    }
L_001350dc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_001350e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001350e4:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001350e8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001350ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013510c;
        }
    }
L_001350f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x44u);
    }
L_001350f4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001350f8:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_001350fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00135100:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_00135104:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00135108:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001350f8;
        }
    }
L_0013510c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00135110:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00135114:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00135118:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0013511c:;
    {
        return fn_00135034(cpu);
    }
}

/* _ZN7TextureD1Ev @ 00135120 (arm) */
void fn_00135120(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135120:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00135124:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00135128:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x44u);
    }
L_0013512c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00135130:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013514c;
        }
    }
L_00135134:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00135138:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013513c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001351bc;
        }
    }
L_00135140:;
    {
        cpu->r[14] = 0x00135144u; fn_0018ba60(cpu);
    }
L_00135144:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00135148:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_0013514c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_00135150:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00135154:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135164;
        }
    }
L_00135158:;
    {
        cpu->r[14] = 0x0013515cu; fn_0018ba60(cpu);
    }
L_0013515c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00135160:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_00135164:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_00135168:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013516c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013517c;
        }
    }
L_00135170:;
    {
        cpu->r[14] = 0x00135174u; fn_0018ba48(cpu);
    }
L_00135174:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00135178:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_0013517c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_00135180:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00135184:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135194;
        }
    }
L_00135188:;
    {
        cpu->r[14] = 0x0013518cu; fn_0018ba48(cpu);
    }
L_0013518c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00135190:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_00135194:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x60u);
    }
L_00135198:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013519c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001351ac;
        }
    }
L_001351a0:;
    {
        cpu->r[14] = 0x001351a4u; fn_0018ba20(cpu);
    }
L_001351a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001351a8:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001351ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001351b0:;
    {
        cpu->r[14] = 0x001351b4u; fn_00135034(cpu);
    }
L_001351b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001351b8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001351bcu)) return;
    }
L_001351bc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001351c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_001351c4:;
    {
        cpu->r[14] = 0x001351c8u; imp_glDeleteTextures(cpu); /* glDeleteTextures */
    }
L_001351c8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x44u);
    }
L_001351cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001351d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00135140;
        }
    }
L_001351d4:;
    {
        goto L_0013514c;
    }
}

/* _ZN7TextureD2Ev @ 001351d8 (arm) */
void fn_001351d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001351d8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001351dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001351e0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x44u);
    }
L_001351e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001351e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135204;
        }
    }
L_001351ec:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001351f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001351f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135274;
        }
    }
L_001351f8:;
    {
        cpu->r[14] = 0x001351fcu; fn_0018ba60(cpu);
    }
L_001351fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00135200:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_00135204:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_00135208:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013520c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013521c;
        }
    }
L_00135210:;
    {
        cpu->r[14] = 0x00135214u; fn_0018ba60(cpu);
    }
L_00135214:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00135218:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_0013521c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_00135220:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00135224:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135234;
        }
    }
L_00135228:;
    {
        cpu->r[14] = 0x0013522cu; fn_0018ba48(cpu);
    }
L_0013522c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00135230:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_00135234:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_00135238:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013523c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013524c;
        }
    }
L_00135240:;
    {
        cpu->r[14] = 0x00135244u; fn_0018ba48(cpu);
    }
L_00135244:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00135248:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_0013524c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x60u);
    }
L_00135250:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00135254:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135264;
        }
    }
L_00135258:;
    {
        cpu->r[14] = 0x0013525cu; fn_0018ba20(cpu);
    }
L_0013525c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00135260:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_00135264:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00135268:;
    {
        cpu->r[14] = 0x0013526cu; fn_00135034(cpu);
    }
L_0013526c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00135270:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00135274u)) return;
    }
L_00135274:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00135278:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_0013527c:;
    {
        cpu->r[14] = 0x00135280u; imp_glDeleteTextures(cpu); /* glDeleteTextures */
    }
L_00135280:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x44u);
    }
L_00135284:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00135288:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001351f8;
        }
    }
L_0013528c:;
    {
        goto L_00135204;
    }
}

/* _ZN7Texture8StoreATCEb @ 00135290 (arm) */
void fn_00135290(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135290:;
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
L_00135294:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00135298:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0013529c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001352a0:;
    {
        cpu->r[1] = rd32(cpu->r[10] + + 0x8u);
    }
L_001352a4:;
    {
        cpu->r[14] = 0x001352a8u; fn_001336e8(cpu);
    }
L_001352a8:;
    {
        cpu->r[4] = rd32(cpu->r[10] + + 0x24u);
    }
L_001352ac:;
    {
        cpu->r[7] = rd32(cpu->r[10] + + 0x4u);
    }
L_001352b0:;
    {
        cpu->r[6] = rd32(cpu->r[10] + + 0x8u);
    }
L_001352b4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001352b8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00135314;
        }
    }
L_001352bc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001352c0:;
    {
        cpu->r[11] = cpu->r[5];
    }
L_001352c4:;
    {
        uint32_t wb_tmp = cpu->r[4] + 0x00000004u;
        cpu->r[8] = rd32(cpu->r[4]);
        cpu->r[4] = wb_tmp;
    }
L_001352c8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001352cc:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0xcu);
    }
L_001352d0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001352d4:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001352d8:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_001352dc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001352e0:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 1u, &shc); cpu->r[7] = v;
    }
L_001352e4:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 1u, &shc); cpu->r[6] = v;
    }
L_001352e8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_001352ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_001352f0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_001352f4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_001352f8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[8]);
    }
L_001352fc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_00135300:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_00135304:;
    {
        cpu->r[14] = 0x00135308u; imp_glCompressedTexImage2D(cpu); /* glCompressedTexImage2D */
    }
L_00135308:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[9], 1, 1);
    }
L_0013530c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[8], 0, 0);
    }
L_00135310:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001352c4;
        }
    }
L_00135314:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00135318:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0013531cu)) return;
    }
}

/* _ZN7Texture10StorePVRTCEb @ 0013531c (arm) */
void fn_0013531c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013531c:;
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
L_00135320:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_00135324:;
    {
        cpu->r[3] = rd32(0x0013532cu + + 0x234u);
    }
L_00135328:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0013532c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_00135330:;
    {
        cpu->r[1] = rd32(0x00135338u + + 0x22cu);
    }
L_00135334:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013533cu, cpu->r[3], 0, 0);
    }
L_00135338:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x44u);
    }
L_0013533c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00135340:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00135344:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00135348:;
    {
        cpu->r[14] = 0x0013534cu; fn_0012f114(cpu);
    }
L_0013534c:;
    {
        cpu->r[0] = 0x00000cf5u;
    }
L_00135350:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00135354:;
    {
        cpu->r[14] = 0x00135358u; imp_glPixelStorei(cpu); /* glPixelStorei */
    }
L_00135358:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x24u);
    }
L_0013535c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00135360:;
    {
        cpu->r[5] = rd32(cpu->r[8] + + 0x8u);
    }
L_00135364:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00135368:;
    {
        cpu->r[4] = rd32(cpu->r[8] + + 0x4u);
    }
L_0013536c:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[5]);
    }
L_00135370:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[4]);
    }
L_00135374:;
    {
        cpu->r[10] = rd32(cpu->r[8]);
    }
L_00135378:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013551c;
        }
    }
L_0013537c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x58u);
    }
L_00135380:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00135384:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001354d0;
        }
    }
L_00135388:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0013538c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_00135390:;
    {
        cpu->r[7] = cpu->r[9];
    }
L_00135394:;
    {
        goto L_00135428;
    }
L_00135398:;
    {
        cpu->r[3] = rd8(cpu->r[8] + + 0x10u);
    }
L_0013539c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001353a0:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x60u);
    }
L_001353a4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001353a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000018u, 1, 1);
    }
L_001353ac:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001353b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_001353b4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_001353b8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001353bc:;
    {
        cpu->r[14] = 0x001353c0u; fn_0015be28(cpu);
    }
L_001353c0:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x60u);
    }
L_001353c4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001353c8:;
    {
        cpu->r[2] = 0x00001908u;
    }
L_001353cc:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001353d0:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_001353d4:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_001353d8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001353dc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001353e0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001353e4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001353e8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001353ec:;
    {
        cpu->r[12] = 0x00001401u;
    }
L_001353f0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001353f4:;
    {
        cpu->r[14] = 0x001353f8u; imp_glTexImage2D(cpu); /* glTexImage2D */
    }
L_001353f8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x58u);
    }
L_001353fc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_00135400:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001354d0;
        }
    }
L_00135404:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 3, 31u, &shc), 0, 0);
    }
L_00135408:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 3, 31u, &shc), 0, 0);
    }
L_0013540c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[11], 0, 0);
    }
L_00135410:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 1u, &shc); cpu->r[5] = v;
    }
L_00135414:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 1u, &shc); cpu->r[4] = v;
    }
L_00135418:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_0013541c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_00135420:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_00135424:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_00135428:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0013542c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00135430:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135450;
        }
    }
L_00135434:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000003u, 1, 1);
    }
L_00135438:;
    {
        if (cond_test(cpu, 13)) {
        sub_flags(cpu, cpu->r[5], 0x00000003u, 1, 1);
        }
    }
L_0013543c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00135440:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00135444:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001354f4;
        }
    }
L_00135448:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x54u);
    }
L_0013544c:;
    {
        wr32(cpu->r[2] + cpu->r[9], cpu->r[3]);
    }
L_00135450:;
    {
        cpu->r[3] = rd8(cpu->r[8] + + 0x10u);
    }
L_00135454:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000018u, 1, 1);
    }
L_00135458:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001354d8;
        }
    }
L_0013545c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000008u, 1, 1);
    }
L_00135460:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_00135464:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000008u;
        }
    }
L_00135468:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000008u, 1, 1);
    }
L_0013546c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[11] = cpu->r[5];
        }
    }
L_00135470:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[11] = 0x00000008u;
        }
    }
L_00135474:;
    {
        uint32_t v = cpu->r[11] * cpu->r[2]; cpu->r[11] = v;
    }
L_00135478:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x18u);
    }
L_0013547c:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x51u);
    }
L_00135480:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00135484:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[3]);
    }
L_00135488:;
    {
        uint32_t v = cpu->r[3] * cpu->r[11]; cpu->r[11] = v;
    }
L_0013548c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000007u, 0, 0);
    }
L_00135490:;
    {
        uint32_t v = shifter(cpu->r[11], 3, 3u, &shc); cpu->r[11] = v;
    }
L_00135494:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135398;
        }
    }
L_00135498:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x5cu);
    }
L_0013549c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001354a0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001354a4:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_001354a8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001354ac:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001354b0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001354b4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_001354b8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_001354bc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_001354c0:;
    {
        cpu->r[14] = 0x001354c4u; imp_glCompressedTexImage2D(cpu); /* glCompressedTexImage2D */
    }
L_001354c4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x58u);
    }
L_001354c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001354cc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00135404;
        }
    }
L_001354d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001354d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001354d8u)) return;
    }
L_001354d8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000008u, 1, 1);
    }
L_001354dc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_001354e0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000008u;
        }
    }
L_001354e4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000010u, 1, 1);
    }
L_001354e8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[11] = cpu->r[5];
        }
    }
L_001354ec:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[11] = 0x00000010u;
        }
    }
L_001354f0:;
    {
        goto L_00135474;
    }
L_001354f4:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_001354f8:;
    {
        cpu->r[14] = 0x001354fcu; fn_0018ba6c(cpu);
    }
L_001354fc:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00135500:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 2u, &shc); cpu->r[1] = v;
    }
L_00135504:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 2u, &shc); cpu->r[2] = v;
    }
L_00135508:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0013550c:;
    {
        cpu->r[14] = 0x00135510u; fn_0012b5b0(cpu);
    }
L_00135510:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x54u);
    }
L_00135514:;
    {
        wr32(cpu->r[3] + cpu->r[9], cpu->r[11]);
    }
L_00135518:;
    {
        goto L_00135450;
    }
L_0013551c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x58u);
    }
L_00135520:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00135524:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00135528:;
    {
        cpu->r[14] = 0x0013552cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0013552c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x58u);
    }
L_00135530:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00135534:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[0]);
    }
L_00135538:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001354d0;
        }
    }
L_0013553c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00135540:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00135544:;
    {
        goto L_0013554c;
    }
L_00135548:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x54u);
    }
L_0013554c:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
    }
L_00135550:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00135554:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00135558:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00135548;
        }
    }
L_0013555c:;
    {
        goto L_00135388;
    }
}

/* _ZN7Texture8AlterHSVEffff @ 00135568 (arm) */
void fn_00135568(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135568:;
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
L_0013556c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00135570:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00135574:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x54u);
    }
L_00135578:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0013557c:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_00135580:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_00135584:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00135588:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_0013558c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x30u);
    }
L_00135590:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135608;
        }
    }
L_00135594:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x38u);
    }
L_00135598:;
    {
        cpu->r[12] = 0x00001908u;
    }
L_0013559c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 1);
    }
L_001355a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135614;
        }
    }
L_001355a4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x58u);
    }
L_001355a8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001355ac:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001355b0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001355bc;
        }
    }
L_001355b4:;
    {
        goto L_001355f0;
    }
L_001355b8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x54u);
    }
L_001355bc:;
    {
        cpu->r[12] = rd32(cpu->r[0] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001355c0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001355c4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001355c8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001355cc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001355d0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001355d4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001355d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001355e8;
        }
    }
L_001355dc:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001355e0:;
    {
        cpu->r[14] = 0x001355e4u; fn_0012bcd0(cpu);
    }
L_001355e4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x58u);
    }
L_001355e8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_001355ec:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001355b8;
        }
    }
L_001355f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001355f4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001355f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001355fc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00135600:;
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
L_00135604:;
    {
        return fn_0013531c(cpu);
    }
L_00135608:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0013560c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00135610:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00135614u)) return;
    }
L_00135614:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00135618:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0013561c:;
    {
        cpu->r[14] = 0x00135620u; fn_0012aa68(cpu);
    }
L_00135620:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00135624:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00135628:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0013562c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00135630:;
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
L_00135634:;
    {
        return fn_00134d34(cpu);
    }
}

/* _ZN7Texture9LoadPVRTCEP8LZMAFilejb @ 00135638 (arm) */
void fn_00135638(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135638:;
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
L_0013563c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00135640:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_00135644:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00135648:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0013564c:;
    {
        cpu->r[7] = (~0x00000000u);
    }
L_00135650:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[1]);
    }
L_00135654:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00135658:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[7]);
    }
L_0013565c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00135660:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[5]);
    }
L_00135664:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_00135668:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_0013566c:;
    {
        cpu->r[14] = 0x00135670u; fn_000fc628(cpu);
    }
L_00135670:;
    {
        cpu->r[6] = rd32(0x00135678u + + 0x228u);
    }
L_00135674:;
    {
        cpu->r[6] = add_flags(cpu, 0x0013567cu, cpu->r[6], 0, 0);
    }
L_00135678:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_0013567c:;
    {
        cpu->r[14] = 0x00135680u; fn_00133bf0(cpu);
    }
L_00135680:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_00135684:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00135688:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_0013568c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[7];
        }
    }
L_00135690:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013569c;
        }
    }
L_00135694:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00135698:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0013569cu)) return;
    }
L_0013569c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001356a0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001356a4:;
    {
        cpu->r[14] = 0x001356a8u; fn_000fc5f4(cpu);
    }
L_001356a8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x24u);
    }
L_001356ac:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[5]);
    }
L_001356b0:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x10u);
    }
L_001356b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000018u, 1, 1);
    }
L_001356b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135860;
        }
    }
L_001356bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000019u, 1, 1);
    }
L_001356c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135840;
        }
    }
L_001356c4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x28u);
    }
L_001356c8:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_001356cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001356d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
        }
    }
L_001356d4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] | 0x00000040u; cpu->r[3] = v;
        }
    }
L_001356d8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
        }
    }
L_001356dc:;
    {
        cpu->r[14] = 0x001356e0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001356e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001356e4:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_001356e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_001356ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135694;
        }
    }
L_001356f0:;
    {
        cpu->r[0] = 0x00000cf5u;
    }
L_001356f4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001356f8:;
    {
        cpu->r[14] = 0x001356fcu; imp_glPixelStorei(cpu); /* glPixelStorei */
    }
L_001356fc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00135700:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_00135704:;
    {
        cpu->r[14] = 0x00135708u; imp_glGenTextures(cpu); /* glGenTextures */
    }
L_00135708:;
    {
        cpu->r[3] = rd32(0x00135710u + + 0x194u);
    }
L_0013570c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_00135710:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00135714:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00135718:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0013571c:;
    {
        cpu->r[14] = 0x00135720u; fn_0012f114(cpu);
    }
L_00135720:;
    {
        cpu->r[0] = rd32(0x00135728u + + 0x180u);
    }
L_00135724:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00135728:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_0013572c:;
    {
        wr8(cpu->r[4] + + 0x51u, cpu->r[3]);
    }
L_00135730:;
    {
        cpu->r[0] = add_flags(cpu, 0x00135738u, cpu->r[0], 0, 0);
    }
L_00135734:;
    {
        cpu->r[14] = 0x00135738u; fn_0012f5e0(cpu);
    }
L_00135738:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013573c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00135740:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[4] + + 0x51u, cpu->r[3]);
        }
    }
L_00135744:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013587c;
        }
    }
L_00135748:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_0013574c:;
    {
        cpu->r[1] = 0x00008191u;
    }
L_00135750:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00135754:;
    {
        cpu->r[14] = 0x00135758u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_00135758:;
    {
        cpu->r[0] = rd32(0x00135760u + + 0x14cu);
    }
L_0013575c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00135764u, cpu->r[0], 0, 0);
    }
L_00135760:;
    {
        cpu->r[14] = 0x00135764u; fn_0012f5e0(cpu);
    }
L_00135764:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00135768:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00135820;
        }
    }
L_0013576c:;
    {
        cpu->r[0] = 0x00000cf5u;
    }
L_00135770:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00135774:;
    {
        cpu->r[14] = 0x00135778u; imp_glPixelStorei(cpu); /* glPixelStorei */
    }
L_00135778:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x10u);
    }
L_0013577c:;
    {
        uint32_t v = cpu->r[3] & 0x00000100u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00135780:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
        }
    }
L_00135784:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00135804;
        }
    }
L_00135788:;
    {
        cpu->r[2] = 0x00000c00u;
    }
L_0013578c:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00135790:;
    {
        cpu->r[1] = 0x00002801u;
    }
L_00135794:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x461cu << 16);
    }
L_00135798:;
    {
        cpu->r[14] = 0x0013579cu; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_0013579c:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_001357a0:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_001357a4:;
    {
        cpu->r[1] = 0x00002800u;
    }
L_001357a8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4618u << 16);
    }
L_001357ac:;
    {
        cpu->r[14] = 0x001357b0u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_001357b0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001357b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001357b8:;
    {
        wr8(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001357bc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001357c0:;
    {
        cpu->r[14] = 0x001357c4u; fn_0013531c(cpu);
    }
L_001357c4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001357c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001357cc:;
    {
        wr8(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001357d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00135858;
        }
    }
L_001357d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x60u);
    }
L_001357d8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001357dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001357e8;
        }
    }
L_001357e0:;
    {
        cpu->r[14] = 0x001357e4u; fn_0018ba20(cpu);
    }
L_001357e4:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[10]);
    }
L_001357e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_001357ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001357f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135858;
        }
    }
L_001357f4:;
    {
        cpu->r[14] = 0x001357f8u; fn_0018ba48(cpu);
    }
L_001357f8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001357fc:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_00135800:;
    {
        goto L_00135694;
    }
L_00135804:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_00135808:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013580c:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_00135810:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135788;
        }
    }
L_00135814:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00135818:;
    {
        cpu->r[14] = 0x0013581cu; fn_00133bb4(cpu);
    }
L_0013581c:;
    {
        goto L_001357b0;
    }
L_00135820:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00135824:;
    {
        cpu->r[0] = 0x000084ffu;
    }
L_00135828:;
    {
        cpu->r[14] = 0x0013582cu; imp_glGetFloatv(cpu); /* glGetFloatv */
    }
L_0013582c:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00135830:;
    {
        cpu->r[1] = 0x000084feu;
    }
L_00135834:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00135838:;
    {
        cpu->r[14] = 0x0013583cu; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_0013583c:;
    {
        goto L_0013576c;
    }
L_00135840:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x28u);
    }
L_00135844:;
    {
        cpu->r[3] = 0x00008c02u;
    }
L_00135848:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013584c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00008c00u;
        }
    }
L_00135850:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_00135854:;
    {
        goto L_001356c4;
    }
L_00135858:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013585c:;
    {
        goto L_00135694;
    }
L_00135860:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x28u);
    }
L_00135864:;
    {
        cpu->r[2] = 0x00008c03u;
    }
L_00135868:;
    {
        cpu->r[3] = 0x00008c01u;
    }
L_0013586c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00135870:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_00135874:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_00135878:;
    {
        goto L_001356c4;
    }
L_0013587c:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[3] = v1;
    }
L_00135880:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_00135884:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00135888:;
    {
        cpu->r[14] = 0x0013588cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0013588c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00135890:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[0]);
    }
L_00135894:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000002u);
        }
    }
L_00135898:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00135748;
        }
    }
L_0013589c:;
    {
        goto L_00135694;
    }
}

/* _ZN7Texture7LoadATCEP8LZMAFilejb @ 001358b0 (arm) */
void fn_001358b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001358b0:;
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
L_001358b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001358b8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001358bc:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_001358c0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001358c4:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[9]);
    }
L_001358c8:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_001358cc:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[6]);
    }
L_001358d0:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[5]);
    }
L_001358d4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001358d8:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001358dc:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001358e0:;
    {
        cpu->r[14] = 0x001358e4u; fn_000fc628(cpu);
    }
L_001358e4:;
    {
        cpu->r[7] = rd32(0x001358ecu + + 0x13cu);
    }
L_001358e8:;
    {
        cpu->r[7] = add_flags(cpu, 0x001358f0u, cpu->r[7], 0, 0);
    }
L_001358ec:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_001358f0:;
    {
        cpu->r[14] = 0x001358f4u; fn_00133bf0(cpu);
    }
L_001358f4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_001358f8:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_001358fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[9];
        }
    }
L_00135900:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013590c;
        }
    }
L_00135904:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00135908:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0013590cu)) return;
    }
L_0013590c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00135910:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00135914:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00135918:;
    {
        cpu->r[14] = 0x0013591cu; fn_000fc5f4(cpu);
    }
L_0013591c:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00135920:;
    {
        cpu->r[14] = 0x00135924u; imp__Znaj(cpu); /* _Znaj */
    }
L_00135924:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00135928:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_0013592c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_00135930:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135904;
        }
    }
L_00135934:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00135938:;
    {
        cpu->r[0] = 0x00000cf5u;
    }
L_0013593c:;
    {
        cpu->r[14] = 0x00135940u; imp_glPixelStorei(cpu); /* glPixelStorei */
    }
L_00135940:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00135944:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_00135948:;
    {
        cpu->r[14] = 0x0013594cu; imp_glGenTextures(cpu); /* glGenTextures */
    }
L_0013594c:;
    {
        cpu->r[3] = rd32(0x00135954u + + 0xd8u);
    }
L_00135950:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_00135954:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00135958:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0013595c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00135960:;
    {
        cpu->r[14] = 0x00135964u; fn_0012f114(cpu);
    }
L_00135964:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00135968:;
    {
        cpu->r[1] = 0x00008191u;
    }
L_0013596c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00135970:;
    {
        cpu->r[14] = 0x00135974u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_00135974:;
    {
        cpu->r[0] = rd32(0x0013597cu + + 0xb4u);
    }
L_00135978:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[6]);
    }
L_0013597c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00135984u, cpu->r[0], 0, 0);
    }
L_00135980:;
    {
        cpu->r[14] = 0x00135984u; fn_0012f5e0(cpu);
    }
L_00135984:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00135988:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00135a08;
        }
    }
L_0013598c:;
    {
        cpu->r[0] = 0x00000cf5u;
    }
L_00135990:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00135994:;
    {
        cpu->r[14] = 0x00135998u; imp_glPixelStorei(cpu); /* glPixelStorei */
    }
L_00135998:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_0013599c:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_001359a0:;
    {
        cpu->r[1] = 0x00002801u;
    }
L_001359a4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x461cu << 16);
    }
L_001359a8:;
    {
        cpu->r[14] = 0x001359acu; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_001359ac:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_001359b0:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_001359b4:;
    {
        cpu->r[1] = 0x00002800u;
    }
L_001359b8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4618u << 16);
    }
L_001359bc:;
    {
        cpu->r[14] = 0x001359c0u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_001359c0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001359c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001359c8:;
    {
        wr8(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001359cc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001359d0:;
    {
        cpu->r[14] = 0x001359d4u; fn_00135290(cpu);
    }
L_001359d4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001359d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001359dc:;
    {
        wr8(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001359e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00135a00;
        }
    }
L_001359e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_001359e8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001359ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135a00;
        }
    }
L_001359f0:;
    {
        cpu->r[14] = 0x001359f4u; fn_0018ba48(cpu);
    }
L_001359f4:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[10]);
    }
L_001359f8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001359fc:;
    {
        goto L_00135904;
    }
L_00135a00:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00135a04:;
    {
        goto L_00135904;
    }
L_00135a08:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00135a0c:;
    {
        cpu->r[0] = 0x000084ffu;
    }
L_00135a10:;
    {
        cpu->r[14] = 0x00135a14u; imp_glGetFloatv(cpu); /* glGetFloatv */
    }
L_00135a14:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00135a18:;
    {
        cpu->r[1] = 0x000084feu;
    }
L_00135a1c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00135a20:;
    {
        cpu->r[14] = 0x00135a24u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_00135a24:;
    {
        goto L_0013598c;
    }
}

/* _ZN7Texture4LoadEP8LZMAFileijb @ 00135a34 (arm) */
void fn_00135a34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135a34:;
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
L_00135a38:;
    {
        cpu->r[5] = rd32(0x00135a40u + + 0x130u);
    }
L_00135a3c:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_00135a40:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_00135a44:;
    {
        cpu->r[2] = rd32(0x00135a4cu + + 0x128u);
    }
L_00135a48:;
    {
        cpu->r[5] = add_flags(cpu, 0x00135a50u, cpu->r[5], 0, 0);
    }
L_00135a4c:;
    {
        cpu->r[3] = 0x00001284u;
    }
L_00135a50:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00135a54:;
    {
        cpu->r[6] = rd8(cpu->r[13] + + 0x20u);
    }
L_00135a58:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00135a5c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00135a60:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00135a64:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00135a68:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00135a6c:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[8]);
    }
L_00135a70:;
    {
        cpu->r[14] = 0x00135a74u; fn_000fc650(cpu);
    }
L_00135a74:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00135a78:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00135a7c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00135a80:;
    {
        cpu->r[14] = 0x00135a84u; fn_000fc650(cpu);
    }
L_00135a84:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00135a88:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_00135a8c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00135a90:;
    {
        cpu->r[14] = 0x00135a94u; fn_000fc650(cpu);
    }
L_00135a94:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00135a98:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_00135a9c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00135aa0:;
    {
        cpu->r[14] = 0x00135aa4u; fn_000fc650(cpu);
    }
L_00135aa4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00135aa8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00008c00u, 1, 0);
    }
L_00135aac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000092u, 1, 0);
    }
L_00135ab0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00135ab4:;
    {
        wr16(cpu->r[4] + + 0x40u, cpu->r[0]);
    }
L_00135ab8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00135b1c;
        }
    }
L_00135abc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000200u, 1, 1);
    }
L_00135ac0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[8];
        }
    }
L_00135ac4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00135ac8u)) return;
        }
    }
L_00135ac8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 0);
    }
L_00135acc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00135ad0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00135b34;
        }
    }
L_00135ad4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000400u, 1, 1);
    }
L_00135ad8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135b4c;
        }
    }
L_00135adc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_00135ae0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135b04;
        }
    }
L_00135ae4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_00135ae8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135b60;
        }
    }
L_00135aec:;
    {
        cpu->r[3] = rd32(0x00135af4u + + 0x84u);
    }
L_00135af0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00135af4:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00135af8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00135afc:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00135b00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00135b04u)) return;
    }
L_00135b04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00135b08:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00135b0c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00135b10:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00135b14:;
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
L_00135b18:;
    {
        return fn_00134e54(cpu);
    }
L_00135b1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00135b20:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00135b24:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00135b28:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00135b2c:;
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
L_00135b30:;
    {
        return fn_001358b0(cpu);
    }
L_00135b34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00135b38:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00135b3c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00135b40:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00135b44:;
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
L_00135b48:;
    {
        return fn_00135638(cpu);
    }
L_00135b4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00135b50:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00135b54:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00135b58:;
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
L_00135b5c:;
    {
        return fn_0013473c(cpu);
    }
L_00135b60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00135b64:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00135b68:;
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
L_00135b6c:;
    {
        return fn_00134944(cpu);
    }
}

/* _ZN12CTextureInfoC2Ev @ 00135b7c (arm) */
void fn_00135b7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135b7c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00135b80:;
    {
        wr8(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_00135b84:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00135b88:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00135b8c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12CTextureInfoC1Ev @ 00135b90 (arm) */
void fn_00135b90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135b90:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00135b94:;
    {
        wr8(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_00135b98:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00135b9c:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00135ba0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15TexturesLibrary14PrepareLoadingEi @ 00135ba4 (arm) */
void fn_00135ba4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135ba4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00135ba8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15TexturesLibrary11DoneLoadingEi @ 00135bac (arm) */
void fn_00135bac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135bac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15TexturesLibrary8NeedLoadEii @ 00135bb0 (arm) */
void fn_00135bb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135bb0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00135bb4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00135bb8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00135bbc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00135be8;
        }
    }
L_00135bc0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00135bc4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00135bc8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00135be8;
        }
    }
L_00135bcc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00135bd0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00135bd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00135bd8:;
    {
        cpu->r[12] = rd8(cpu->r[2] + + 0xeu);
    }
L_00135bdc:;
    {
        uint32_t v = cpu->r[12] & 0x00000003u; cpu->r[12] = v;
    }
L_00135be0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_00135be4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135bf0;
        }
    }
L_00135be8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00135bec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00135bf0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00135bf4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x6cu);
    }
L_00135bf8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00135bfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135c0c;
        }
    }
L_00135c00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00135c04:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd8(cpu->r[2] + + 0x10u);
        }
    }
L_00135c08:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00135c0c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00135c10:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15TexturesLibrary23DebugShowLoadedTexturesEv @ 00135c14 (arm) */
void fn_00135c14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135c14:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15TexturesLibrary17KeepTextureLoadedEiib @ 00135c18 (arm) */
void fn_00135c18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135c18:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_00135c1c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00135c20:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00135c24:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_00135c28:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00135c2c:;
    {
        wr8(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_00135c30:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15TexturesLibrary23ReplaceSaintTropezTreesEb @ 00135c34 (arm) */
void fn_00135c34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135c34:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00135c38:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15TexturesLibrary12SwapTexturesEiii @ 00135c3c (arm) */
void fn_00135c3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135c3c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_00135c40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00135c44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00135c48:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00135c4c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00135c50:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00135c54:;
    {
        cpu->r[12] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00135c58:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[12]);
    }
L_00135c5c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[0]);
    }
L_00135c60:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15TexturesLibrary12SwapTexturesEiiii @ 00135c64 (arm) */
void fn_00135c64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135c64:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_00135c68:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00135c6c:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_00135c70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00135c74:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_00135c78:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_00135c7c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00135c80:;
    {
        cpu->r[12] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00135c84:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[12]);
    }
L_00135c88:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[0]);
    }
L_00135c8c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15TexturesLibrary9GetTexIdxEii @ 00135c90 (arm) */
void fn_00135c90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135c90:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00135c94:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00135c98:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00135c9c:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_00135ca0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00135ca4:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00135cec;
        }
    }
L_00135ca8:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x4u);
    }
L_00135cac:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00135cb0:;
    {
        goto L_00135cbc;
    }
L_00135cb4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00135cb8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00135cec;
        }
    }
L_00135cbc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00135cc0:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_00135cc4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00135cc8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00135ccc:;
    {
        cpu->r[12] = rd16(cpu->r[12] + + 0xcu);
    }
L_00135cd0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_00135cd4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_00135cd8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00135cb4;
        }
    }
L_00135cdc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00135ce0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00135cb4;
        }
    }
L_00135ce4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00135ce8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00135cec:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00135cf0:;
    {
        goto L_00135ce4;
    }
}

/* _ZN15TexturesLibrary10GetTextureEti @ 00135cf4 (arm) */
void fn_00135cf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135cf4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00135cf8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00135cfc:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00135d00:;
    {
        cpu->r[14] = 0x00135d04u; fn_00135c90(cpu);
    }
L_00135d04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00135d08:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
        }
    }
L_00135d0c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00135d10:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
        }
    }
L_00135d14:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
        }
    }
L_00135d18:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
        }
    }
L_00135d1c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
        }
    }
L_00135d20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00135d24u)) return;
    }
}

/* _ZN15TexturesLibrary11GetTexFlagsEthi @ 00135d24 (arm) */
void fn_00135d24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135d24:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00135d28:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00135d2c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00135d30:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00135d34:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00135d38:;
    {
        cpu->r[14] = 0x00135d3cu; fn_00135c90(cpu);
    }
L_00135d3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00135d40:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
        }
    }
L_00135d44:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00135d48:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
        }
    }
L_00135d4c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
        }
    }
L_00135d50:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
        }
    }
L_00135d54:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
        }
    }
L_00135d58:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = rd8(cpu->r[0] + + 0xeu);
        }
    }
L_00135d5c:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = cpu->r[5] & cpu->r[0]; cpu->r[0] = v;
        }
    }
L_00135d60:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00135d64u)) return;
    }
}

/* _ZN15TexturesLibrary13ClearTexFlagsEti @ 00135d64 (arm) */
void fn_00135d64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135d64:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00135d68:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00135d6c:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00135d70:;
    {
        cpu->r[14] = 0x00135d74u; fn_00135c90(cpu);
    }
L_00135d74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00135d78:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00135d7cu)) return;
        }
    }
L_00135d7c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00135d80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00135d84:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00135d88:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00135d8c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00135d90:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00135d94:;
    {
        wr8(cpu->r[0] + + 0xeu, cpu->r[3]);
    }
L_00135d98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00135d9cu)) return;
    }
}

/* _ZN15TexturesLibrary11SetTexFlagsEthi @ 00135d9c (arm) */
void fn_00135d9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135d9c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00135da0:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00135da4:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00135da8:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00135dac:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00135db0:;
    {
        cpu->r[14] = 0x00135db4u; fn_00135c90(cpu);
    }
L_00135db4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00135db8:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00135dbcu)) return;
        }
    }
L_00135dbc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_00135dc0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00135dc4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00135dc8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00135dcc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00135dd0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xeu);
    }
L_00135dd4:;
    {
        uint32_t v = cpu->r[5] | cpu->r[3]; cpu->r[5] = v;
    }
L_00135dd8:;
    {
        wr8(cpu->r[0] + + 0xeu, cpu->r[5]);
    }
L_00135ddc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00135de0u)) return;
    }
}

/* _ZN15TexturesLibrary12GetTexIdSafeEii @ 00135de0 (arm) */
void fn_00135de0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135de0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00135de4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00135de8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00135dec:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_00135df0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00135df4:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00135df8:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00135e34;
        }
    }
L_00135dfc:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x4u);
    }
L_00135e00:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00135e04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00135e08:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_00135e0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00135e10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00135e14:;
    {
        cpu->r[12] = rd16(cpu->r[12] + + 0xcu);
    }
L_00135e18:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_00135e1c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_00135e20:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00135e2c;
        }
    }
L_00135e24:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00135e28:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00135e34;
        }
    }
L_00135e2c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00135e30:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00135e04;
        }
    }
L_00135e34:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00135e38:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15TexturesLibrary16GetRestoreTexNumEv @ 00135e3c (arm) */
void fn_00135e3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135e3c:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_00135e40:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x8u);
    }
L_00135e44:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0xcu);
    }
L_00135e48:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00135e4c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_00135e50:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 2u, &shc); cpu->r[8] = v;
    }
L_00135e54:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00135e58:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00135e5c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00135eb8;
        }
    }
L_00135e60:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00135e64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00135e68:;
    {
        cpu->r[3] = rd32(cpu->r[7] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_00135e6c:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_00135e70:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00135e74:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00135eac;
        }
    }
L_00135e78:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00135e7c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00135e80:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x10u);
    }
L_00135e84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00135e88:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00135e8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135ea0;
        }
    }
L_00135e90:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_00135e94:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x6cu);
    }
L_00135e98:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_00135e9c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_00135ea0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00135ea4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000014u, 0, 0);
    }
L_00135ea8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00135e80;
        }
    }
L_00135eac:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00135eb0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_00135eb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00135e68;
        }
    }
L_00135eb8:;
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
L_00135ebc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15TexturesLibrary14PrepareSuspendEv @ 00135ec0 (arm) */
void fn_00135ec0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135ec0:;
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
L_00135ec4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00135ec8:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0xcu);
    }
L_00135ecc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00135ed0:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_00135ed4:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 2u, &shc); cpu->r[9] = v;
    }
L_00135ed8:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00135edc:;
    {
        if (cond_test(cpu, 14)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00135ee0u)) return;
        }
    }
L_00135ee0:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00135ee4:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_00135ee8:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_00135eec:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_00135ef0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00135ef4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00135f3c;
        }
    }
L_00135ef8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00135efc:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_00135f00:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_00135f04:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00135f08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_00135f0c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_00135f10:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000014u, 0, 0);
    }
L_00135f14:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00135f18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135f34;
        }
    }
L_00135f1c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x6cu);
    }
L_00135f20:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00135f24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135f34;
        }
    }
L_00135f28:;
    {
        wr8(cpu->r[12] + + 0x10u, cpu->r[8]);
    }
L_00135f2c:;
    {
        cpu->r[14] = 0x00135f30u; fn_001350c0(cpu);
    }
L_00135f30:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_00135f34:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_00135f38:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00135f00;
        }
    }
L_00135f3c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00135f40:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[9], 1, 1);
    }
L_00135f44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00135f48u)) return;
        }
    }
L_00135f48:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_00135f4c:;
    {
        goto L_00135ee8;
    }
}

/* _ZN15TexturesLibrary14OGLContextLostEv @ 00135f50 (arm) */
void fn_00135f50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135f50:;
    {
        return fn_00135ec0(cpu);
    }
}

/* _ZN15TexturesLibrary8CleanHSVEiii @ 00135f54 (arm) */
void fn_00135f54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135f54:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00135f58:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00135f5c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_00135f60:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_00135f64:;
    {
        cpu->r[7] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00135f68:;
    {
        if (cond_test(cpu, 11)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00135f6cu)) return;
        }
    }
L_00135f6c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00135f70:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00135f74:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
    }
L_00135f78:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_00135f7c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00135f80:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_00135f84:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000014u, 0, 0);
    }
L_00135f88:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00135f8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00135f94;
        }
    }
L_00135f90:;
    {
        cpu->r[14] = 0x00135f94u; fn_00135034(cpu);
    }
L_00135f94:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_00135f98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00135f78;
        }
    }
L_00135f9c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00135fa0u)) return;
    }
}

/* _ZN15TexturesLibraryC1Ev @ 00135fa0 (arm) */
void fn_00135fa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00135fa0:;
    {
        cpu->r[3] = rd32(0x00135fa8u + + 0xb8u);
    }
L_00135fa4:;
    {
        cpu->r[2] = rd32(0x00135facu + + 0xb8u);
    }
L_00135fa8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00135fb0u, cpu->r[3], 0, 0);
    }
L_00135fac:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00135fb0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00135fb4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00135fb8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00135fbc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00135fc0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[5]);
    }
L_00135fc4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[5]);
    }
L_00135fc8:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_00135fcc:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00135fd0:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_00135fd4:;
    {
        cpu->r[14] = 0x00135fd8u; fn_0018ba6c(cpu);
    }
L_00135fd8:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00135fdc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00135fe0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00135fe4:;
    {
        cpu->r[14] = 0x00135fe8u; fn_0013368c(cpu);
    }
L_00135fe8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00135ff0u + + 0x64u);
    }
L_00135fec:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[6]);
    }
L_00135ff0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00135ff4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00135ff8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00135ffc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00136000:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00136004:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00136008:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013600c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00136010:;
    {
        wr16(cpu->r[4] + + 0x6au, cpu->r[5]);
    }
L_00136014:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0013601cu + + 0x3cu);
    }
L_00136018:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013601c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00136020:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00136024:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00136028:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013602c:;
    {
        wr16(cpu->r[4] + + 0x64u, cpu->r[5]);
    }
L_00136030:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00136038u + + 0x24u);
    }
L_00136034:;
    {
        wr16(cpu->r[4] + + 0x66u, cpu->r[5]);
    }
L_00136038:;
    {
        wr16(cpu->r[4] + + 0x68u, cpu->r[5]);
    }
L_0013603c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00136040:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00136044:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00136048:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013604c:;
    {
        wr8(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_00136050:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00136054u)) return;
    }
}

/* _ZN15TexturesLibraryC2Ev @ 00136068 (arm) */
void fn_00136068(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136068:;
    {
        cpu->r[3] = rd32(0x00136070u + + 0xb8u);
    }
L_0013606c:;
    {
        cpu->r[2] = rd32(0x00136074u + + 0xb8u);
    }
L_00136070:;
    {
        cpu->r[3] = add_flags(cpu, 0x00136078u, cpu->r[3], 0, 0);
    }
L_00136074:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00136078:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0013607c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00136080:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00136084:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00136088:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[5]);
    }
L_0013608c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[5]);
    }
L_00136090:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_00136094:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00136098:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_0013609c:;
    {
        cpu->r[14] = 0x001360a0u; fn_0018ba6c(cpu);
    }
L_001360a0:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001360a4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001360a8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001360ac:;
    {
        cpu->r[14] = 0x001360b0u; fn_0013368c(cpu);
    }
L_001360b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001360b8u + + 0x64u);
    }
L_001360b4:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[6]);
    }
L_001360b8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001360bc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001360c0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001360c4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001360c8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001360cc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001360d0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001360d4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001360d8:;
    {
        wr16(cpu->r[4] + + 0x6au, cpu->r[5]);
    }
L_001360dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001360e4u + + 0x3cu);
    }
L_001360e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001360e4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001360e8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001360ec:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001360f0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001360f4:;
    {
        wr16(cpu->r[4] + + 0x64u, cpu->r[5]);
    }
L_001360f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00136100u + + 0x24u);
    }
L_001360fc:;
    {
        wr16(cpu->r[4] + + 0x66u, cpu->r[5]);
    }
L_00136100:;
    {
        wr16(cpu->r[4] + + 0x68u, cpu->r[5]);
    }
L_00136104:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00136108:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013610c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00136110:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00136114:;
    {
        wr8(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_00136118:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0013611cu)) return;
    }
}

/* _ZN15TexturesLibrary5CleanEv @ 00136130 (arm) */
void fn_00136130(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136130:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00136134:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_00136138:;
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
L_0013613c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00136140:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00136144:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00136148:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_0013614c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00136150:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00136154:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001361fc;
        }
    }
L_00136158:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013615c:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00136160:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_00136164:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_00136168:;
    {
        cpu->r[8] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0013616c:;
    {
        cpu->r[10] = rd32(cpu->r[8]);
    }
L_00136170:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 1);
    }
L_00136174:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001361e0;
        }
    }
L_00136178:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_0013617c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00136180:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[4] = v;
    }
L_00136184:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x4u);
    }
L_00136188:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0013618c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_00136190:;
    {
        cpu->r[6] = rd8(cpu->r[3] + + 0x4u);
    }
L_00136194:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00136198:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001361d4;
        }
    }
L_0013619c:;
    {
        cpu->r[7] = rd32(cpu->r[2] + cpu->r[4]);
    }
L_001361a0:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x6cu);
    }
L_001361a4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001361a8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_001361ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001361d0;
        }
    }
L_001361b0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001361b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001361d0;
        }
    }
L_001361b8:;
    {
        cpu->r[14] = 0x001361bcu; fn_00135120(cpu);
    }
L_001361bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001361c0:;
    {
        cpu->r[14] = 0x001361c4u; fn_0018ba20(cpu);
    }
L_001361c4:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x4u);
    }
L_001361c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_001361cc:;
    {
        wr32(cpu->r[2] + cpu->r[4], cpu->r[6]);
    }
L_001361d0:;
    {
        wr8(cpu->r[3] + + 0xeu, cpu->r[11]);
    }
L_001361d4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[10], 1, 1);
    }
L_001361d8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000014u, 1, 0);
    }
L_001361dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00136184;
        }
    }
L_001361e0:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001361e4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001361e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001361ec:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001361f0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001361f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[9] + + 0x8u);
        }
    }
L_001361f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00136164;
        }
    }
L_001361fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00136200:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00136204u)) return;
    }
}

/* _ZN12CTextureInfoD1Ev @ 00136204 (arm) */
void fn_00136204(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136204:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00136208:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_0013620c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00136210:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00136214:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013623c;
        }
    }
L_00136218:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0013621c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00136220:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013623c;
        }
    }
L_00136224:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136228:;
    {
        cpu->r[14] = 0x0013622cu; fn_00135120(cpu);
    }
L_0013622c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136230:;
    {
        cpu->r[14] = 0x00136234u; fn_0018ba20(cpu);
    }
L_00136234:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00136238:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0013623c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00136240:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00136244u)) return;
    }
}

/* _ZN12CTextureInfoD2Ev @ 00136244 (arm) */
void fn_00136244(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136244:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00136248:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_0013624c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00136250:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00136254:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013627c;
        }
    }
L_00136258:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0013625c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00136260:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013627c;
        }
    }
L_00136264:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136268:;
    {
        cpu->r[14] = 0x0013626cu; fn_00135120(cpu);
    }
L_0013626c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136270:;
    {
        cpu->r[14] = 0x00136274u; fn_0018ba20(cpu);
    }
L_00136274:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00136278:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0013627c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00136280:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00136284u)) return;
    }
}

/* _ZN15TexturesLibrary11LoadTextureEiib @ 00136284 (arm) */
void fn_00136284(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136284:;
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
L_00136288:;
    {
        cpu->r[4] = rd32(0x00136290u + + 0x344u);
    }
L_0013628c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00136290:;
    {
        cpu->r[1] = rd32(0x00136298u + + 0x340u);
    }
L_00136294:;
    {
        cpu->r[4] = add_flags(cpu, 0x0013629cu, cpu->r[4], 0, 0);
    }
L_00136298:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0013629c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_001362a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001362a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001362a8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001362ac:;
    {
        cpu->r[8] = rd32(cpu->r[2] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001362b0:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_001362b4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000320u, 1, 1);
    }
L_001362b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001362d0;
        }
    }
L_001362bc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001362c0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001362ec;
        }
    }
L_001362c4:;
    {
        cpu->r[0] = (~0x00000016u);
    }
L_001362c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001362cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001362d0u)) return;
    }
L_001362d0:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x4u);
    }
L_001362d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001362d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001362bc;
        }
    }
L_001362dc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000089u, 1, 1);
    }
L_001362e0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_001362e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001362bc;
        }
    }
L_001362e8:;
    {
        goto L_001362f0;
    }
L_001362ec:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_001362f0:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_001362f4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_001362f8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001362c4;
        }
    }
L_001362fc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_00136300:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x4u);
    }
L_00136304:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[9] = v;
    }
L_00136308:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[9], 0, 0);
    }
L_0013630c:;
    {
        cpu->r[0] = rd8(cpu->r[2] + + 0xeu);
    }
L_00136310:;
    {
        uint32_t v = cpu->r[0] & 0x00000003u; cpu->r[0] = v;
    }
L_00136314:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00136318:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00136364;
        }
    }
L_0013631c:;
    {
        cpu->r[4] = rd32(cpu->r[1] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_00136320:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x6cu);
    }
L_00136324:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00136328:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00136358;
        }
    }
L_0013632c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00136330:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00136358;
        }
    }
L_00136334:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136338:;
    {
        cpu->r[14] = 0x0013633cu; fn_00135120(cpu);
    }
L_0013633c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136340:;
    {
        cpu->r[14] = 0x00136344u; fn_0018ba20(cpu);
    }
L_00136344:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4u);
    }
L_00136348:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013634c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_00136350:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[1]);
    }
L_00136354:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x6cu);
    }
L_00136358:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_0013635c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00136360:;
    {
        goto L_001362c8;
    }
L_00136364:;
    {
        cpu->r[12] = rd32(cpu->r[1] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_00136368:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x6cu);
    }
L_0013636c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_00136370:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00136598;
        }
    }
L_00136374:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00136378:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00136598;
        }
    }
L_0013637c:;
    {
        cpu->r[0] = rd8(cpu->r[2] + + 0x10u);
    }
L_00136380:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00136384:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00136390;
        }
    }
L_00136388:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013638c:;
    {
        goto L_001362c8;
    }
L_00136390:;
    {
        cpu->r[12] = rd32(cpu->r[1] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_00136394:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00136398:;
    {
        wr8(cpu->r[2] + + 0x10u, cpu->r[0]);
    }
L_0013639c:;
    {
        wr32(cpu->r[12], cpu->r[0]);
    }
L_001363a0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_001363a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[9], 0, 0);
    }
L_001363a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001363ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_001363b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001362c8;
        }
    }
L_001363b4:;
    {
        cpu->r[2] = rd16(cpu->r[1] + + 0xcu);
    }
L_001363b8:;
    {
        cpu->r[1] = 0x0000752fu;
    }
L_001363bc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001363c0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001363c4:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
        }
    }
L_001363c8:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
        }
    }
L_001363cc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001363f8;
        }
    }
L_001363d0:;
    {
        cpu->r[1] = 0x000078cbu;
    }
L_001363d4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001363d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_001363dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_001363e0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_001363e4:;
    {
        cpu->r[1] = 0x00007917u;
    }
L_001363e8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001363ec:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_001363f0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_001363f4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_001363f8:;
    {
        cpu->r[2] = rd32(0x00136400u + + 0x1dcu);
    }
L_001363fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00136400:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00136404:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_00136408:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013652c;
        }
    }
L_0013640c:;
    {
        cpu->r[9] = rd32(0x00136414u + + 0x1ccu);
    }
L_00136410:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00136414:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00136418:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_0013641c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x000000adu;
        }
    }
L_00136420:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00136424:;
    {
        cpu->r[14] = 0x00136428u; fn_00189f5c(cpu);
    }
L_00136428:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0013642c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00136430:;
    {
        cpu->r[14] = 0x00136434u; fn_001898ec(cpu);
    }
L_00136434:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0x4u);
    }
L_00136438:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0013643c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00136440:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00136444:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00136448:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0013644c:;
    {
        cpu->r[0] = rd32(cpu->r[12] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_00136450:;
    {
        cpu->r[14] = 0x00136454u; fn_00135a34(cpu);
    }
L_00136454:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00136458:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000015u);
        }
    }
L_0013645c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001362c8;
        }
    }
L_00136460:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00136464:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00136468:;
    {
        cpu->r[14] = 0x0013646cu; fn_00189860(cpu);
    }
L_0013646c:;
    {
        cpu->r[3] = rd32(0x00136474u + + 0x170u);
    }
L_00136470:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00136474:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00136478:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013647c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00136388;
        }
    }
L_00136480:;
    {
        cpu->r[0] = rd32(0x00136488u + + 0x160u);
    }
L_00136484:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00136488:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x4u);
    }
L_0013648c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00136490:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00136494:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_00136498:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0013649c:;
    {
        cpu->r[14] = 0x001364a0u; fn_0012f12c(cpu);
    }
L_001364a0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001364a4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001364a8:;
    {
        cpu->r[14] = 0x001364acu; fn_0012e1c8(cpu);
    }
L_001364ac:;
    {
        cpu->r[2] = 0x00000014u;
    }
L_001364b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_001364b4:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_001364b8:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_001364bc:;
    {
        cpu->r[14] = 0x001364c0u; imp_glVertexPointer(cpu); /* glVertexPointer */
    }
L_001364c0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001364c4:;
    {
        cpu->r[1] = 0x000084c0u;
    }
L_001364c8:;
    {
        cpu->r[14] = 0x001364ccu; fn_0012e124(cpu);
    }
L_001364cc:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001364d0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001364d4:;
    {
        cpu->r[14] = 0x001364d8u; fn_0012e150(cpu);
    }
L_001364d8:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_001364dc:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_001364e0:;
    {
        cpu->r[2] = 0x00000014u;
    }
L_001364e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000020u, 0, 0);
    }
L_001364e8:;
    {
        cpu->r[14] = 0x001364ecu; imp_glTexCoordPointer(cpu); /* glTexCoordPointer */
    }
L_001364ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000064u, 0, 0);
    }
L_001364f0:;
    {
        cpu->r[2] = 0x00001403u;
    }
L_001364f4:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_001364f8:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001364fc:;
    {
        cpu->r[14] = 0x00136500u; imp_glDrawElements(cpu); /* glDrawElements */
    }
L_00136500:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00136504:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00136508:;
    {
        cpu->r[14] = 0x0013650cu; fn_0012e1c8(cpu);
    }
L_0013650c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00136510:;
    {
        cpu->r[1] = 0x000084c0u;
    }
L_00136514:;
    {
        cpu->r[14] = 0x00136518u; fn_0012e124(cpu);
    }
L_00136518:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0013651c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00136520:;
    {
        cpu->r[14] = 0x00136524u; fn_0012e150(cpu);
    }
L_00136524:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00136528:;
    {
        goto L_001362c8;
    }
L_0013652c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00136530:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00136534:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00136538:;
    {
        cpu->r[14] = 0x0013653cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0013653c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00136540:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00136544:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00136548:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013640c;
        }
    }
L_0013654c:;
    {
        cpu->r[9] = rd32(0x00136554u + + 0x8cu);
    }
L_00136550:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00136554:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00136558:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_0013655c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00136560:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_00136564:;
    {
        cpu->r[14] = 0x00136568u; fn_00189f48(cpu);
    }
L_00136568:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0013656c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00136570:;
    {
        cpu->r[14] = 0x00136574u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00136574:;
    {
        cpu->r[2] = rd32(0x0013657cu + + 0x70u);
    }
L_00136578:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013657c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00136580:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00136584:;
    {
        cpu->r[2] = rd32(0x0013658cu + + 0x64u);
    }
L_00136588:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0013658c:;
    {
        cpu->r[14] = 0x00136590u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00136590:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00136594:;
    {
        goto L_00136410;
    }
L_00136598:;
    {
        cpu->r[0] = rd8(cpu->r[2] + + 0x10u);
    }
L_0013659c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001365a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00136390;
        }
    }
L_001365a4:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_001365a8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001365ac:;
    {
        cpu->r[14] = 0x001365b0u; fn_0018ba6c(cpu);
    }
L_001365b0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001365b4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001365b8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001365bc:;
    {
        cpu->r[14] = 0x001365c0u; fn_0013368c(cpu);
    }
L_001365c0:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x4u);
    }
L_001365c4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001365c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001365cc:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[12]);
    }
L_001365d0:;
    {
        goto L_001363a0;
    }
}

/* _ZN15TexturesLibrary13PrepareResumeEi @ 001365f4 (arm) */
void fn_001365f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001365f4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001365f8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_001365fc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00136600:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_00136604:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013664c;
        }
    }
L_00136608:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013660c:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_00136610:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00136614:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013664c;
        }
    }
L_00136618:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0013661c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x10u);
    }
L_00136620:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00136624:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00136628:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013663c;
        }
    }
L_0013662c:;
    {
        goto L_00136654;
    }
L_00136630:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x10u);
    }
L_00136634:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00136638:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00136654;
        }
    }
L_0013663c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00136640:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000014u, 0, 0);
    }
L_00136644:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_00136648:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00136630;
        }
    }
L_0013664c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00136650:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00136654:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00136658:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0013665c:;
    {
        return fn_00136284(cpu);
    }
}

/* _ZN15TexturesLibrary12RefreshRangeEiiib @ 00136660 (arm) */
void fn_00136660(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136660:;
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
L_00136664:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00136668:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0013666c:;
    {
        cpu->r[11] = rd32(0x00136674u + + 0xb0u);
    }
L_00136670:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00136674:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00136678:;
    {
        cpu->r[11] = add_flags(cpu, 0x00136680u, cpu->r[11], 0, 0);
    }
L_0013667c:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_00136680:;
    {
        cpu->r[8] = rd8(cpu->r[13] + + 0x30u);
    }
L_00136684:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00136718;
        }
    }
L_00136688:;
    {
        cpu->r[6] = 0x00006667u;
    }
L_0013668c:;
    {
        cpu->r[2] = rd32(0x00136694u + + 0x94u);
    }
L_00136690:;
    {
        cpu->r[3] = rd32(0x00136698u + + 0x94u);
    }
L_00136694:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00136698:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x6666u << 16);
    }
L_0013669c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001366a0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_001366a4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[6] * (int64_t)(int32_t)cpu->r[4]; cpu->r[3] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_001366a8:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001366ac:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[2], 1, 2u, &shc), cpu->r[3], 1, 0);
    }
L_001366b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001366b4:;
    {
        sub_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 1u, &shc), 1, 1);
    }
L_001366b8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001366bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001366e4;
        }
    }
L_001366c0:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001366c4:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_001366c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001366cc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_001366d0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001366d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001366e4;
        }
    }
L_001366d8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001366dc:;
    {
        cpu->r[14] = 0x001366e4u;
    }
L_001366e0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001366e4u)) return;
    }
L_001366e4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001366e8:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001366ec:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001366f0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001366f4:;
    {
        cpu->r[14] = 0x001366f8u; fn_00136284(cpu);
    }
L_001366f8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001366fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00136700:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
        }
    }
L_00136704:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[2]);
        }
    }
L_00136708:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0013670c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[3], cpu->r[2]);
        }
    }
L_00136710:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_00136714:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001366a4;
        }
    }
L_00136718:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013671c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00136720:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00136724u)) return;
    }
}

/* _ZN15TexturesLibrary14RefreshPackageEi @ 00136730 (arm) */
void fn_00136730(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136730:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00136734:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00136738:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0013673c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00136740:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00136744:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[7] = v;
    }
L_00136748:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013674c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00136750:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00136754u)) return;
        }
    }
L_00136754:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00136758:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0013675c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00136760:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00136764:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00136768:;
    {
        cpu->r[14] = 0x0013676cu; fn_00136284(cpu);
    }
L_0013676c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00136770:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00136774:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_00136778:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013677c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00136780:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00136758;
        }
    }
L_00136784:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00136788u)) return;
    }
}

/* _ZN15TexturesLibrary7RefreshEv @ 00136788 (arm) */
void fn_00136788(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136788:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013678c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00136790:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0xcu);
    }
L_00136794:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00136798:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_0013679c:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 2u, &shc); cpu->r[6] = v;
    }
L_001367a0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001367a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001367c4;
        }
    }
L_001367a8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001367ac:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001367b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001367b4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001367b8:;
    {
        cpu->r[14] = 0x001367bcu; fn_00136730(cpu);
    }
L_001367bc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001367c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001367ac;
        }
    }
L_001367c4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001367c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001367ccu)) return;
    }
}

/* _ZN15TexturesLibrary10CleanRangeEiii @ 001367cc (arm) */
void fn_001367cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001367cc:;
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
L_001367d0:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001367d4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_001367d8:;
    {
        uint32_t v = cpu->r[1] & ~ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[7] = v;
    }
L_001367dc:;
    {
        cpu->r[6] = rd32(0x001367e4u + + 0x128u);
    }
L_001367e0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001367e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001367e8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001367ec:;
    {
        cpu->r[6] = add_flags(cpu, 0x001367f4u, cpu->r[6], 0, 0);
    }
L_001367f0:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001367f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001367f8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_001367fc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_00136800:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00136904;
        }
    }
L_00136804:;
    {
        cpu->r[1] = rd32(0x0013680cu + + 0x104u);
    }
L_00136808:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_0013680c:;
    {
        cpu->r[9] = 0x00006667u;
    }
L_00136810:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_00136814:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00136818:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0013681c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00136820:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[10] = v;
    }
L_00136824:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x6666u << 16);
    }
L_00136828:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_0013682c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00136830:;
    {
        goto L_001368d8;
    }
L_00136834:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[9] * (int64_t)(int32_t)cpu->r[8]; cpu->r[3] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_00136838:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0013683c:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[2], 1, 2u, &shc), cpu->r[3], 1, 0);
    }
L_00136840:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00136844:;
    {
        sub_flags(cpu, cpu->r[8], shifter(cpu->r[3], 2, 1u, &shc), 1, 1);
    }
L_00136848:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00136874;
        }
    }
L_0013684c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
    }
L_00136850:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00136854:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00136858:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_0013685c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00136860:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00136874;
        }
    }
L_00136864:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00136868:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013686c:;
    {
        cpu->r[14] = 0x00136874u;
    }
L_00136870:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00136874u)) return;
    }
L_00136874:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_00136878:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_0013687c:;
    {
        cpu->r[11] = rd8(cpu->r[3] + + 0x4u);
    }
L_00136880:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00136884:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001368c4;
        }
    }
L_00136888:;
    {
        cpu->r[4] = rd32(cpu->r[2] + cpu->r[10]);
    }
L_0013688c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00136890:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001368bc;
        }
    }
L_00136894:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00136898:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x6cu);
    }
L_0013689c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001368a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001368bc;
        }
    }
L_001368a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001368a8:;
    {
        cpu->r[14] = 0x001368acu; fn_00135120(cpu);
    }
L_001368ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001368b0:;
    {
        cpu->r[14] = 0x001368b4u; fn_0018ba20(cpu);
    }
L_001368b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001368b8:;
    {
        uint32_t wb_tmp = cpu->r[3] + cpu->r[10];
        wr32(cpu->r[3] + cpu->r[10], cpu->r[11]);
        cpu->r[3] = wb_tmp;
    }
L_001368bc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001368c0:;
    {
        wr8(cpu->r[3] + + 0xeu, cpu->r[2]);
    }
L_001368c4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001368c8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001368cc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_001368d0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000014u, 0, 0);
    }
L_001368d4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00136904;
        }
    }
L_001368d8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[9] * (int64_t)(int32_t)cpu->r[7]; cpu->r[3] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_001368dc:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001368e0:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[2], 1, 2u, &shc), cpu->r[3], 1, 0);
    }
L_001368e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001368e8:;
    {
        sub_flags(cpu, cpu->r[7], shifter(cpu->r[3], 2, 1u, &shc), 1, 1);
    }
L_001368ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00136834;
        }
    }
L_001368f0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
    }
L_001368f4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001368f8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001368fc:;
    {
        cpu->r[14] = 0x00136900u; fn_00193278(cpu);
    }
L_00136900:;
    {
        goto L_00136834;
    }
L_00136904:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00136908:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0013690cu)) return;
    }
}

/* _ZN11TexturePackD1Ev @ 00136914 (arm) */
void fn_00136914(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136914:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00136918:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013691c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00136920:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00136924:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013696c;
        }
    }
L_00136928:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_0013692c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00136930:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00136934:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00136938:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00136944;
        }
    }
L_0013693c:;
    {
        goto L_0013695c;
    }
L_00136940:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136944:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000014u, 1, 0);
    }
L_00136948:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013694c:;
    {
        cpu->r[14] = 0x00136950u; fn_00136204(cpu);
    }
L_00136950:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_00136954:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_00136958:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00136940;
        }
    }
L_0013695c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_00136960:;
    {
        cpu->r[14] = 0x00136964u; fn_0018ba60(cpu);
    }
L_00136964:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00136968:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_0013696c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00136970:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00136974u)) return;
    }
}

/* _ZN15TexturesLibrary18Package_UnRegisterEi @ 00136974 (arm) */
void fn_00136974(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136974:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_00136978:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013697c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00136980:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00136984:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_00136988:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013698c:;
    {
        sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 1, 2u, &shc), 1, 1);
    }
L_00136990:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00136994u)) return;
        }
    }
L_00136994:;
    {
        cpu->r[6] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00136998:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0013699c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001369c0;
        }
    }
L_001369a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001369a4:;
    {
        cpu->r[14] = 0x001369a8u; fn_00136914(cpu);
    }
L_001369a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001369ac:;
    {
        cpu->r[14] = 0x001369b0u; fn_0018ba20(cpu);
    }
L_001369b0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_001369b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001369b8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001369bc:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[1]);
    }
L_001369c0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_001369c4:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001369c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001369ccu)) return;
    }
}

/* _ZN15TexturesLibrary11FreeAllDataEv @ 001369cc (arm) */
void fn_001369cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001369cc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001369d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001369d4:;
    {
        goto L_001369e4;
    }
L_001369d8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001369dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001369e0:;
    {
        cpu->r[14] = 0x001369e4u; fn_00136974(cpu);
    }
L_001369e4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001369e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001369ec:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001369f0:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_001369f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001369d8;
        }
    }
L_001369f8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001369fc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00136a00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00136a04u)) return;
        }
    }
L_00136a04:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00136a08:;
    {
        cpu->r[14] = 0x00136a0cu; fn_00135120(cpu);
    }
L_00136a0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00136a10:;
    {
        cpu->r[14] = 0x00136a14u; fn_0018ba20(cpu);
    }
L_00136a14:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00136a18:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_00136a1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00136a20u)) return;
    }
}

/* _ZN11TexturePackD2Ev @ 00136a20 (arm) */
void fn_00136a20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136a20:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00136a24:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00136a28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00136a2c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00136a30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00136a78;
        }
    }
L_00136a34:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_00136a38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00136a3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00136a40:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00136a44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00136a50;
        }
    }
L_00136a48:;
    {
        goto L_00136a68;
    }
L_00136a4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136a50:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000014u, 1, 0);
    }
L_00136a54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136a58:;
    {
        cpu->r[14] = 0x00136a5cu; fn_00136204(cpu);
    }
L_00136a5c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_00136a60:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_00136a64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00136a4c;
        }
    }
L_00136a68:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_00136a6c:;
    {
        cpu->r[14] = 0x00136a70u; fn_0018ba60(cpu);
    }
L_00136a70:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00136a74:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_00136a78:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00136a7c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00136a80u)) return;
    }
}

/* _ZN11TexturePackC1Ei @ 00136a80 (arm) */
void fn_00136a80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136a80:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00136a84:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00136a88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00136a8c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00136a90:;
    {
        wr32(cpu->r[7], cpu->r[1]);
    }
L_00136a94:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00136a98:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00136a9c:;
    {
        cpu->r[14] = 0x00136aa0u; imp__Znaj(cpu); /* _Znaj */
    }
L_00136aa0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00136aa4:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_00136aa8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00136aac:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[6]);
    }
L_00136ab0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00136ad4;
        }
    }
L_00136ab4:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_00136ab8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00136abc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00136ac0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00136ac4:;
    {
        cpu->r[14] = 0x00136ac8u; fn_00135b90(cpu);
    }
L_00136ac8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_00136acc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000014u, 0, 0);
    }
L_00136ad0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00136abc;
        }
    }
L_00136ad4:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[8]);
    }
L_00136ad8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00136adc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00136ae0u)) return;
    }
}

/* _ZN11TexturePackC2Ei @ 00136ae0 (arm) */
void fn_00136ae0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136ae0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00136ae4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00136ae8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00136aec:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00136af0:;
    {
        wr32(cpu->r[7], cpu->r[1]);
    }
L_00136af4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00136af8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00136afc:;
    {
        cpu->r[14] = 0x00136b00u; imp__Znaj(cpu); /* _Znaj */
    }
L_00136b00:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00136b04:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_00136b08:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00136b0c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[6]);
    }
L_00136b10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00136b34;
        }
    }
L_00136b14:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_00136b18:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00136b1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00136b20:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00136b24:;
    {
        cpu->r[14] = 0x00136b28u; fn_00135b90(cpu);
    }
L_00136b28:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_00136b2c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000014u, 0, 0);
    }
L_00136b30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00136b1c;
        }
    }
L_00136b34:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[8]);
    }
L_00136b38:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00136b3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00136b40u)) return;
    }
}

/* _ZN15TexturesLibraryD2Ev @ 00136b40 (arm) */
void fn_00136b40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136b40:;
    {
        cpu->r[3] = rd32(0x00136b48u + + 0x58u);
    }
L_00136b44:;
    {
        cpu->r[2] = rd32(0x00136b4cu + + 0x58u);
    }
L_00136b48:;
    {
        cpu->r[3] = add_flags(cpu, 0x00136b50u, cpu->r[3], 0, 0);
    }
L_00136b4c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00136b50:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00136b54:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00136b58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00136b5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00136b60:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x00000008u;
        wr32(cpu->r[5], cpu->r[2]);
        cpu->r[5] = wb_tmp;
    }
L_00136b64:;
    {
        cpu->r[14] = 0x00136b68u; fn_001369cc(cpu);
    }
L_00136b68:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00136b6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00136b70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00136b8c;
        }
    }
L_00136b74:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_00136b78:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_00136b7c:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_00136b80:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_00136b84:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00136b94;
        }
    }
L_00136b88:;
    {
        cpu->r[14] = 0x00136b8cu; fn_002082a8(cpu);
    }
L_00136b8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136b90:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00136b94u)) return;
    }
L_00136b94:;
    {
        cpu->r[14] = 0x00136b98u; fn_0018ba20(cpu);
    }
L_00136b98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136b9c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00136ba0u)) return;
    }
}

/* _ZN15TexturesLibraryD1Ev @ 00136ba8 (arm) */
void fn_00136ba8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136ba8:;
    {
        cpu->r[3] = rd32(0x00136bb0u + + 0x58u);
    }
L_00136bac:;
    {
        cpu->r[2] = rd32(0x00136bb4u + + 0x58u);
    }
L_00136bb0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00136bb8u, cpu->r[3], 0, 0);
    }
L_00136bb4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00136bb8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00136bbc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00136bc0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00136bc4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00136bc8:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x00000008u;
        wr32(cpu->r[5], cpu->r[2]);
        cpu->r[5] = wb_tmp;
    }
L_00136bcc:;
    {
        cpu->r[14] = 0x00136bd0u; fn_001369cc(cpu);
    }
L_00136bd0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00136bd4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00136bd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00136bf4;
        }
    }
L_00136bdc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_00136be0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_00136be4:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_00136be8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_00136bec:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00136bfc;
        }
    }
L_00136bf0:;
    {
        cpu->r[14] = 0x00136bf4u; fn_002082a8(cpu);
    }
L_00136bf4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136bf8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00136bfcu)) return;
    }
L_00136bfc:;
    {
        cpu->r[14] = 0x00136c00u; fn_0018ba20(cpu);
    }
L_00136c00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136c04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00136c08u)) return;
    }
}

/* _ZN15TexturesLibraryD0Ev @ 00136c10 (arm) */
void fn_00136c10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136c10:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00136c14:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00136c18:;
    {
        cpu->r[14] = 0x00136c1cu; fn_00136ba8(cpu);
    }
L_00136c1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136c20:;
    {
        cpu->r[14] = 0x00136c24u; fn_0018ba20(cpu);
    }
L_00136c24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136c28:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00136c2cu)) return;
    }
}

/* _ZN15TexturesLibrary16Package_RegisterEi @ 00136c2c (arm) */
void fn_00136c2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136c2c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_00136c30:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00136c34:;
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
L_00136c38:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00136c3c:;
    {
        cpu->r[4] = rd32(0x00136c44u + + 0x338u);
    }
L_00136c40:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_00136c44:;
    {
        sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 1, 2u, &shc), 1, 1);
    }
L_00136c48:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00136c4c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00136c54u, cpu->r[4], 0, 0);
    }
L_00136c50:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00136c54:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00136c60;
        }
    }
L_00136c58:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00136c5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00136c60u)) return;
    }
L_00136c60:;
    {
        cpu->r[3] = rd32(0x00136c68u + + 0x318u);
    }
L_00136c64:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00136c68:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00136c6c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00136c70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00136e04;
        }
    }
L_00136c74:;
    {
        cpu->r[7] = rd32(0x00136c7cu + + 0x308u);
    }
L_00136c78:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00136c7c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00136c80:;
    {
        cpu->r[14] = 0x00136c84u; fn_00189f5c(cpu);
    }
L_00136c84:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_00136c88:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_00136c8c:;
    {
        cpu->r[14] = 0x00136c90u; fn_00189778(cpu);
    }
L_00136c90:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00136c94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00136ec8;
        }
    }
L_00136c98:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00136c9c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00136ca0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00136ca4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136ca8:;
    {
        uint32_t wb_tmp = cpu->r[7] + - 0x2u;
        wr16(cpu->r[7] + - 0x2u, cpu->r[3]);
        cpu->r[7] = wb_tmp;
    }
L_00136cac:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00136cb0:;
    {
        cpu->r[14] = 0x00136cb4u; fn_000fc154(cpu);
    }
L_00136cb4:;
    {
        cpu->r[11] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x26u);
    }
L_00136cb8:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_00136cbc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[11], 0x00000001u, 1, 0);
    }
L_00136cc0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_00136cc4:;
    {
        cpu->r[14] = 0x00136cc8u; fn_0018ba6c(cpu);
    }
L_00136cc8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00136ccc:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00136cd0:;
    {
        cpu->r[14] = 0x00136cd4u; fn_00136a80(cpu);
    }
L_00136cd4:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0xcu);
    }
L_00136cd8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00136cdc:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_00136ce0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00136e48;
        }
    }
L_00136ce4:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x8u);
    }
L_00136ce8:;
    {
        uint32_t wb_tmp = cpu->r[9] + 0x00000004u;
        wr32(cpu->r[9], cpu->r[10]);
        cpu->r[9] = wb_tmp;
    }
L_00136cec:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[9]);
    }
L_00136cf0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 2, 1u, &shc), 0, 0);
    }
L_00136cf4:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00136cf8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00136cfc:;
    {
        cpu->r[10] = rd32(cpu->r[8] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_00136d00:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_00136d04:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00136d08:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00136d80;
        }
    }
L_00136d0c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00136d10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00136d14:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_00136d18:;
    {
        cpu->r[9] = cpu->r[6];
    }
L_00136d1c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_00136d20:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00136d24:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00136d28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136d2c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[9]);
    }
L_00136d30:;
    {
        cpu->r[14] = 0x00136d34u; fn_000fc154(cpu);
    }
L_00136d34:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00136d38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136d3c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00136d40:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x20u);
    }
L_00136d44:;
    {
        wr16(cpu->r[13] + + 0x26u, cpu->r[9]);
    }
L_00136d48:;
    {
        cpu->r[14] = 0x00136d4cu; fn_000fc154(cpu);
    }
L_00136d4c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00136d50:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00136d54:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_00136d58:;
    {
        cpu->r[2] = rd16(cpu->r[13] + + 0x26u);
    }
L_00136d5c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_00136d60:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00136d64:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[10] + + 0x4u);
        }
    }
L_00136d68:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
        }
    }
L_00136d6c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000014u, 0, 0);
    }
L_00136d70:;
    {
        if (cond_test(cpu, 13)) {
        wr16(cpu->r[3] + + 0xcu, cpu->r[2]);
        }
    }
L_00136d74:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3] + + 0x8u, cpu->r[8]);
        }
    }
L_00136d78:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[5], 1, 1);
    }
L_00136d7c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00136d20;
        }
    }
L_00136d80:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x4u);
    }
L_00136d84:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_00136d88:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00136d8c:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_00136d90:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_00136d94:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00136d98:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_00136d9c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00136da0:;
    {
        cpu->r[5] = rd32(cpu->r[11] + - 0x20u);
    }
L_00136da4:;
    {
        cpu->r[14] = 0x00136da8u; fn_0018a578(cpu);
    }
L_00136da8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00136dac:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00136db0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136db4:;
    {
        cpu->r[14] = 0x00136db8u; fn_000fc0b4(cpu);
    }
L_00136db8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00136dbc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00136c58;
        }
    }
L_00136dc0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00136dc4:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_00136dc8:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_00136dcc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00136dd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00136dd4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00136dd8:;
    {
        wr8(cpu->r[13] + + 0x26u, cpu->r[9]);
    }
L_00136ddc:;
    {
        cpu->r[14] = 0x00136de0u; fn_000fc154(cpu);
    }
L_00136de0:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x4u);
    }
L_00136de4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00136de8:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0x26u);
    }
L_00136dec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_00136df0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_00136df4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000014u, 0, 0);
    }
L_00136df8:;
    {
        wr8(cpu->r[3] + + 0xfu, cpu->r[2]);
    }
L_00136dfc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00136dcc;
        }
    }
L_00136e00:;
    {
        goto L_00136c58;
    }
L_00136e04:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00136e08:;
    {
        cpu->r[14] = 0x00136e0cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00136e0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00136e10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00136c74;
        }
    }
L_00136e14:;
    {
        cpu->r[7] = rd32(0x00136e1cu + + 0x168u);
    }
L_00136e18:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00136e1c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00136e20:;
    {
        cpu->r[14] = 0x00136e24u; fn_00189f48(cpu);
    }
L_00136e24:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00136e28:;
    {
        cpu->r[14] = 0x00136e2cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00136e2c:;
    {
        cpu->r[3] = rd32(0x00136e34u + + 0x154u);
    }
L_00136e30:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00136e34:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00136e38:;
    {
        cpu->r[3] = rd32(0x00136e40u + + 0x14cu);
    }
L_00136e3c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00136e40:;
    {
        cpu->r[14] = 0x00136e44u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00136e44:;
    {
        goto L_00136c78;
    }
L_00136e48:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00136e4c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_00136e50:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_00136e54:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00136e58:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[12] = add_flags(cpu, cpu->r[2], cpu->r[2], 0, 0);
        }
    }
L_00136e5c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_00136e60:;
    {
        add_flags(cpu, cpu->r[12], 0xc0000001u, 0, 1);
    }
L_00136e64:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00136f00;
        }
    }
L_00136e68:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00136e6c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00136f00;
        }
    }
L_00136e70:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00136e74:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[12];
        }
    }
L_00136e78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00136f60;
        }
    }
L_00136e7c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_00136e80:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = cpu->r[8];
        }
    }
L_00136e84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00136f3c;
        }
    }
L_00136e88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00136e8c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_00136e90:;
    {
        uint32_t wb_tmp = cpu->r[9] + 0x00000004u;
        wr32(cpu->r[9], cpu->r[10]);
        cpu->r[9] = wb_tmp;
    }
L_00136e94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00136eb8;
        }
    }
L_00136e98:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00136e9c:;
    {
        uint32_t v = cpu->r[2] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_00136ea0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_00136ea4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00136f28;
        }
    }
L_00136ea8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00136eac:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00136eb0:;
    {
        cpu->r[14] = 0x00136eb4u; fn_002082a8(cpu);
    }
L_00136eb4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00136eb8:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[12]);
    }
L_00136ebc:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[9]);
    }
L_00136ec0:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[8]);
    }
L_00136ec4:;
    {
        goto L_00136cf0;
    }
L_00136ec8:;
    {
        cpu->r[1] = rd32(0x00136ed0u + + 0xc0u);
    }
L_00136ecc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00136ed0:;
    {
        cpu->r[2] = rd32(0x00136ed8u + + 0xbcu);
    }
L_00136ed4:;
    {
        cpu->r[14] = 0x00000097u;
    }
L_00136ed8:;
    {
        cpu->r[3] = rd32(0x00136ee0u + + 0xb8u);
    }
L_00136edc:;
    {
        cpu->r[1] = add_flags(cpu, 0x00136ee4u, cpu->r[1], 0, 0);
    }
L_00136ee0:;
    {
        cpu->r[12] = rd32(0x00136ee8u + + 0xb4u);
    }
L_00136ee4:;
    {
        cpu->r[2] = add_flags(cpu, 0x00136eecu, cpu->r[2], 0, 0);
    }
L_00136ee8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00136ef0u, cpu->r[3], 0, 0);
    }
L_00136eec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00136ef0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00136ef8u, cpu->r[12], 0, 0);
    }
L_00136ef4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00136ef8:;
    {
        cpu->r[14] = 0x00136efcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00136efc:;
    {
        goto L_00136c98;
    }
L_00136f00:;
    {
        cpu->r[12] = (~0x00000003u);
    }
L_00136f04:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_00136f08:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00136f0c:;
    {
        cpu->r[14] = 0x00136f10u; fn_0018ba6c(cpu);
    }
L_00136f10:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00136f14:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00136f18:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00136f1c:;
    {
        uint32_t v = cpu->r[12] & ~ 0x00000003u; cpu->r[12] = v;
    }
L_00136f20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_00136f24:;
    {
        goto L_00136e7c;
    }
L_00136f28:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00136f2c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00136f30:;
    {
        cpu->r[14] = 0x00136f34u; fn_0018ba20(cpu);
    }
L_00136f34:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00136f38:;
    {
        goto L_00136eb8;
    }
L_00136f3c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00136f40:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00136f44:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00136f48:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00136f4c:;
    {
        cpu->r[14] = 0x00136f50u; imp_memmove(cpu); /* memmove */
    }
L_00136f50:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00136f54:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00136f58:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_00136f5c:;
    {
        goto L_00136e88;
    }
L_00136f60:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
    }
L_00136f64:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_00136f68:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000080u, 1, 1);
    }
L_00136f6c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00136f08;
        }
    }
L_00136f70:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00136f74:;
    {
        cpu->r[14] = 0x00136f78u; fn_00208278(cpu);
    }
L_00136f78:;
    {
        goto L_00136f10;
    }
}

/* _ZN13CAniObjDLists16GetRenderFlagsExEv @ 00136fa0 (arm) */
void fn_00136fa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136fa0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x2au);
    }
L_00136fa4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x60u);
    }
L_00136fa8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00136fac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00136fb0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000005u;
        }
    }
L_00136fb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00136fb8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[0] | 0x00000008u; cpu->r[0] = v;
        }
    }
L_00136fbc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CAniObjDLists19ClearBuffersFromGPUEv @ 00136fc0 (arm) */
void fn_00136fc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136fc0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CAniObjDLists23CopyVBufferAndIdxBufferEPhPtP7CMatrix @ 00136fc4 (arm) */
void fn_00136fc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00136fc4:;
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
L_00136fc8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00136fcc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00136fd0:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_00136fd4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00136fd8:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00136fdc:;
    {
        cpu->r[5] = rd8(cpu->r[0] + + 0x2au);
    }
L_00136fe0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc8u);
    }
L_00136fe4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xb0u);
    }
L_00136fe8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00136fec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xccu);
    }
L_00136ff0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_00136ff4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00136ff8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00136ffc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00137000:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137030;
        }
    }
L_00137004:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
    }
L_00137008:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0013700c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00137010:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00137014:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0xd0u);
    }
L_00137018:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0013701c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00137020:;
    {
        wr32(cpu->r[12] + cpu->r[3], cpu->r[1]);
    }
L_00137024:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00137028:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0013702c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00137014;
        }
    }
L_00137030:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00137034:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00137038:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00137120;
        }
    }
L_0013703c:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_00137040:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00137044:;
    {
        cpu->r[11] = cpu->r[7];
    }
L_00137048:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0013704c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00137050:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001370ec;
        }
    }
L_00137054:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00137058:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0013705c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00137060:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_00137064:;
    {
        cpu->r[14] = 0x00137068u; fn_001533e4(cpu);
    }
L_00137068:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xccu);
    }
L_0013706c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd0u);
    }
L_00137070:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00137074:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_00137078:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[9] + + 0xcu, cpu->r[2]);
        }
    }
L_0013707c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_00137080:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[7]);
        }
    }
L_00137084:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[9] + + 0xcu, cpu->r[3]);
        }
    }
L_00137088:;
    {
        cpu->r[8] = rd8(cpu->r[4] + + 0x2au);
    }
L_0013708c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_00137090:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00137108;
        }
    }
L_00137094:;
    {
        cpu->r[8] = 0x00000002u;
    }
L_00137098:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[9], 0x00000010u, 0, 0);
    }
L_0013709c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001370a0:;
    {
        cpu->r[1] = rd32(cpu->r[10] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001370a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001370a8:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_001370ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001370b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_001370b4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_001370b8:;
    {
        cpu->r[14] = 0x001370bcu; imp_memcpy(cpu); /* memcpy */
    }
L_001370bc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 1);
    }
L_001370c0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001370a0;
        }
    }
L_001370c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001370c8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001370cc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x100u);
    }
L_001370d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_001370d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00137120;
        }
    }
L_001370d8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[2], 0, 0);
    }
L_001370dc:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001370e0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000020u, 0, 0);
    }
L_001370e4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001370e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00137054;
        }
    }
L_001370ec:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x2bu);
    }
L_001370f0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001370f4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001370f8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001370fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_00137100:;
    {
        cpu->r[14] = 0x00137104u; imp_memcpy(cpu); /* memcpy */
    }
L_00137104:;
    {
        goto L_00137068;
    }
L_00137108:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137098;
        }
    }
L_0013710c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00137110:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_00137114:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x100u);
    }
L_00137118:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_0013711c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001370d8;
        }
    }
L_00137120:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xfcu);
    }
L_00137124:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00137128:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xb4u);
    }
L_0013712c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00137130:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00137134:;
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
L_00137138:;
    {
        imp_memcpy(cpu); /* tail memcpy */ return;
    }
}

/* _ZN13CAniObjDLists17BuildDisplayListsEv @ 0013713c (arm) */
void fn_0013713c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013713c:;
    {
        cpu->r[1] = rd32(0x00137144u + + 0xa94u);
    }
L_00137140:;
    {
        cpu->r[2] = rd32(0x00137148u + + 0xa94u);
    }
L_00137144:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x38u);
    }
L_00137148:;
    {
        cpu->r[1] = add_flags(cpu, 0x00137150u, cpu->r[1], 0, 0);
    }
L_0013714c:;
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
L_00137150:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000154u, 1, 0);
    }
L_00137154:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_00137158:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0013715c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x48u);
    }
L_00137160:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_00137164:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00137168:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0013716c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_00137170:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_00137174:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[0] + + 0x3cu);
        }
    }
L_00137178:;
    {
        wr32(cpu->r[13] + + 0x14cu, cpu->r[3]);
    }
L_0013717c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00137180:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_00137184:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[2]);
    }
L_00137188:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x48u, cpu->r[12]);
        }
    }
L_0013718c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[9]);
    }
L_00137190:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00137194:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_00137198:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013718c;
        }
    }
L_0013719c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_001371a0:;
    {
        cpu->r[11] = 0x0000020bu;
    }
L_001371a4:;
    {
        cpu->r[6] = rd32(0x001371acu + + 0xa34u);
    }
L_001371a8:;
    {
        cpu->r[12] = cpu->r[9];
    }
L_001371ac:;
    {
        cpu->r[7] = rd32(0x001371b4u + + 0xa30u);
    }
L_001371b0:;
    {
        cpu->r[5] = rd32(cpu->r[14] + + 0x30u);
    }
L_001371b4:;
    {
        cpu->r[6] = add_flags(cpu, 0x001371bcu, cpu->r[6], 0, 0);
    }
L_001371b8:;
    {
        cpu->r[8] = rd32(0x001371c0u + + 0xa28u);
    }
L_001371bc:;
    {
        cpu->r[7] = add_flags(cpu, 0x001371c4u, cpu->r[7], 0, 0);
    }
L_001371c0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001371c4:;
    {
        cpu->r[10] = rd32(0x001371ccu + + 0xa20u);
    }
L_001371c8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_001371cc:;
    {
        cpu->r[8] = add_flags(cpu, 0x001371d4u, cpu->r[8], 0, 0);
    }
L_001371d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + - 0x8u);
    }
L_001371d4:;
    {
        cpu->r[10] = add_flags(cpu, 0x001371dcu, cpu->r[10], 0, 0);
    }
L_001371d8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_001371dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_001371e0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[9]);
    }
L_001371e4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[9]);
    }
L_001371e8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_001371ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001372b0;
        }
    }
L_001371f0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + - 0x4u);
    }
L_001371f4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001371f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001372a0;
        }
    }
L_001371fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000019u, 1, 1);
    }
L_00137200:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_00137270;
        case 1: goto L_001372a0;
        case 2: goto L_001372a0;
        case 3: goto L_001372a0;
        case 4: goto L_001372a0;
        case 5: goto L_001372a0;
        case 6: goto L_001372a0;
        case 7: goto L_001372a0;
        case 8: goto L_001372a0;
        case 9: goto L_001374c4;
        case 10: goto L_001374ac;
        case 11: goto L_00137494;
        case 12: goto L_001372a0;
        case 13: goto L_00137474;
        case 14: goto L_00137474;
        case 15: goto L_00137474;
        case 16: goto L_00137474;
        case 17: goto L_00137474;
        case 18: goto L_00137474;
        case 19: goto L_00137474;
        case 20: goto L_00137474;
        case 21: goto L_001372a0;
        case 22: goto L_001372a0;
        case 23: goto L_001372a0;
        case 24: goto L_001372a0;
        case 25: goto L_00137458;
        default: guest_unimplemented(cpu, 0x00137200u); return; }
        }
    }
L_00137204:;
    {
        goto L_001372a0;
    }
L_00137270:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00137274:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = cpu->r[2];
        }
    }
L_00137278:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001372a0;
        }
    }
L_0013727c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00137280:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00137284:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00137288:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0013728c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00137290:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_00137294:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[10]);
        wr32(ea + 4u, cpu->r[11]);
    }
L_00137298:;
    {
        cpu->r[14] = 0x0013729cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0013729c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001372a0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001372a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + - 0x8u);
    }
L_001372a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_001372ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001371f0;
        }
    }
L_001372b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001372b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], cpu->r[12], 0, 0);
    }
L_001372b8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001372bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001372c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001372c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_001372c8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_001372cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_001372d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001372d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_001372d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001372dc:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_001372e0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001372e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001372e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_001372ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_001372f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001372e0;
        }
    }
L_001372f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_001372f8:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_001372fc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x28u);
    }
L_00137300:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00137304:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_00137308:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = cpu->r[5];
        }
    }
L_0013730c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00137428;
        }
    }
L_00137310:;
    {
        cpu->r[3] = rd32(0x00137318u + + 0x8d8u);
    }
L_00137314:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00137318:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0013731c:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00137320:;
    {
        cpu->r[3] = add_flags(cpu, 0x00137328u, cpu->r[3], 0, 0);
    }
L_00137324:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[3]);
    }
L_00137328:;
    {
        cpu->r[3] = rd32(0x00137330u + + 0x8c4u);
    }
L_0013732c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_00137330:;
    {
        cpu->r[3] = add_flags(cpu, 0x00137338u, cpu->r[3], 0, 0);
    }
L_00137334:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_00137338:;
    {
        cpu->r[3] = rd32(0x00137340u + + 0x8b8u);
    }
L_0013733c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[2]);
    }
L_00137340:;
    {
        cpu->r[3] = add_flags(cpu, 0x00137348u, cpu->r[3], 0, 0);
    }
L_00137344:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_00137348:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[3]);
    }
L_0013734c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_00137350:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00137354:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_00137358:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x9cu);
    }
L_0013735c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
    }
L_00137360:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_00137364:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_00137368:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x28u);
    }
L_0013736c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x2cu);
    }
L_00137370:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00137374:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[3]);
    }
L_00137378:;
    {
        cpu->r[14] = 0x0013737cu; fn_00141d1c(cpu);
    }
L_0013737c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_00137380:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x2cu);
    }
L_00137384:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_00137388:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0013738c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8cu);
    }
L_00137390:;
    {
        cpu->r[14] = 0x00137394u; fn_00141c4c(cpu);
    }
L_00137394:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_00137398:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0013739c:;
    {
        wr32(cpu->r[12] + + 0x44u, cpu->r[0]);
    }
L_001373a0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001373a4:;
    {
        cpu->r[14] = 0x001373a8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001373a8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001373ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001373b0:;
    {
        wr32(cpu->r[1] + + 0x48u, cpu->r[0]);
    }
L_001373b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137bc4;
        }
    }
L_001373b8:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[0] = v;
    }
L_001373bc:;
    {
        cpu->r[14] = 0x001373c0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001373c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001373c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001373c8:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001373cc:;
    {
        wr32(cpu->r[2] + + 0x40u, cpu->r[0]);
    }
L_001373d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001379e4;
        }
    }
L_001373d4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_001373d8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8cu);
    }
L_001373dc:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x2cu);
    }
L_001373e0:;
    {
        cpu->r[14] = rd32(cpu->r[12] + + 0x48u);
    }
L_001373e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001373e8:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[2]);
    }
L_001373ec:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001373f0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001373f4:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[14]);
    }
L_001373f8:;
    {
        wr32(cpu->r[14], cpu->r[2]);
    }
L_001373fc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001374dc;
        }
    }
L_00137400:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_00137404:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_00137408:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0013740c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x28u);
    }
L_00137410:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00137414:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000004cu, 0, 0);
    }
L_00137418:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[2]);
    }
L_0013741c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00137420:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
    }
L_00137424:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013734c;
        }
    }
L_00137428:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0013742c:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_00137430:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_00137434:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_00137438:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_0013743c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00137774;
        }
    }
L_00137440:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00137444:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00137448:;
    {
        cpu->r[14] = 0x0013744cu; fn_00146b28(cpu);
    }
L_0013744c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00137450:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00137454:;
    {
        goto L_00137438;
    }
L_00137458:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0013745c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00137460:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000002u;
        }
    }
L_00137464:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_00137468:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0013746c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00137470:;
    {
        goto L_001372a4;
    }
L_00137474:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000150u, 0, 0);
    }
L_00137478:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0013747c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00137480:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00137484:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_00137488:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0013748c:;
    {
        wr32(cpu->r[3] + - 0x11cu, cpu->r[2]);
    }
L_00137490:;
    {
        goto L_001372a4;
    }
L_00137494:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_00137498:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0013749c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001374a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_001374a4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_001374a8:;
    {
        goto L_001372a4;
    }
L_001374ac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_001374b0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001374b4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001374b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_001374bc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_001374c0:;
    {
        goto L_001372a4;
    }
L_001374c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_001374c8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001374cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001374d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_001374d4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001374d8:;
    {
        goto L_001372a4;
    }
L_001374dc:;
    {
        cpu->r[1] = rd8(cpu->r[3]);
    }
L_001374e0:;
    {
        { uint32_t v = cpu->r[1] & 0x000000f8u; set_nz(cpu, v); }
    }
L_001374e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137400;
        }
    }
L_001374e8:;
    {
        cpu->r[2] = rd32(0x001374f0u + + 0x70cu);
    }
L_001374ec:;
    {
        cpu->r[0] = 0x0000aaabu;
    }
L_001374f0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0xaaaau << 16);
    }
L_001374f4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_001374f8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00137500u, cpu->r[2], 0, 0);
    }
L_001374fc:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[2]);
    }
L_00137500:;
    {
        uint32_t v = cpu->r[1] & 0x000000f8u; cpu->r[1] = v;
    }
L_00137504:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000090u, 1, 1);
    }
L_00137508:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137728;
        }
    }
L_0013750c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000098u, 1, 1);
    }
L_00137510:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137718;
        }
    }
L_00137514:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x64u);
    }
L_00137518:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0013751c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x60u);
    }
L_00137520:;
    {
        cpu->r[12] = 0x00000253u;
    }
L_00137524:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x58u);
    }
L_00137528:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0013752c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00137530:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00137534:;
    {
        cpu->r[14] = 0x00137538u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00137538:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8cu);
    }
L_0013753c:;
    {
        cpu->r[0] = rd16(cpu->r[3] + + 0x1u);
    }
L_00137540:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_00137544:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[3]);
    }
L_00137548:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013754c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_00137550:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137694;
        }
    }
L_00137554:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[11], 0x00000002u, 0, 0);
    }
L_00137558:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_0013755c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_00137560:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00137564:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_00137568:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0013756c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00137570:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_00137574:;
    {
        cpu->r[14] = 0x00137578u; fn_00146c9c(cpu);
    }
L_00137578:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0013757c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00137580:;
    {
        cpu->r[14] = 0x00137584u; fn_00146b50(cpu);
    }
L_00137584:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00137588:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
        }
    }
L_0013758c:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00137590:;
    {
        wr8(cpu->r[13] + + 0xaau, cpu->r[0]);
    }
L_00137594:;
    {
        if (cond_test(cpu, 2)) {
        { uint64_t v = (uint64_t)cpu->r[1] * (uint64_t)cpu->r[0]; cpu->r[1] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
        }
    }
L_00137598:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0013759c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[0], 3, 1u, &shc); cpu->r[0] = v;
        }
    }
L_001375a0:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[13] + + 0xaau, cpu->r[0]);
        }
    }
L_001375a4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001375a8:;
    {
        cpu->r[14] = 0x001375acu; fn_00146b50(cpu);
    }
L_001375ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001375b0:;
    {
        wr16(cpu->r[13] + + 0x90u, cpu->r[0]);
    }
L_001375b4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001375b8:;
    {
        cpu->r[14] = 0x001375bcu; fn_00146b50(cpu);
    }
L_001375bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001375c0:;
    {
        wr16(cpu->r[13] + + 0xa4u, cpu->r[0]);
    }
L_001375c4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001375c8:;
    {
        cpu->r[14] = 0x001375ccu; fn_00146b50(cpu);
    }
L_001375cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001375d0:;
    {
        wr16(cpu->r[13] + + 0xa6u, cpu->r[0]);
    }
L_001375d4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001375d8:;
    {
        cpu->r[14] = 0x001375dcu; fn_00146b50(cpu);
    }
L_001375dc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001375e0:;
    {
        wr16(cpu->r[13] + + 0xa8u, cpu->r[0]);
    }
L_001375e4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001375e8:;
    {
        cpu->r[14] = 0x001375ecu; fn_00146b50(cpu);
    }
L_001375ec:;
    {
        wr16(cpu->r[13] + + 0xa2u, cpu->r[0]);
    }
L_001375f0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[11], 2, 1u, &shc));
    }
L_001375f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001375f8:;
    {
        cpu->r[14] = 0x001375fcu; fn_00146b50(cpu);
    }
L_001375fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[11], 0, 0);
    }
L_00137600:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000002u, 0, 0);
    }
L_00137604:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000010u, 1, 1);
    }
L_00137608:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[0]);
    }
L_0013760c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001375f0;
        }
    }
L_00137610:;
    {
        cpu->r[0] = rd16(cpu->r[13] + + 0x90u);
    }
L_00137614:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_00137618:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00137658;
        }
    }
L_0013761c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00137620:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00137624:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_00137628:;
    {
        cpu->r[14] = 0x0013762cu; imp_realloc(cpu); /* realloc */
    }
L_0013762c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00137630:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137738;
        }
    }
L_00137634:;
    {
        cpu->r[3] = rd16(cpu->r[13] + + 0x90u);
    }
L_00137638:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_0013763c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00137640:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00137644:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_00137648:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0013764c:;
    {
        cpu->r[14] = 0x00137650u; imp_memset(cpu); /* memset */
    }
L_00137650:;
    {
        cpu->r[0] = rd16(cpu->r[13] + + 0x90u);
    }
L_00137654:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00137658:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0013765c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00137660:;
    {
        cpu->r[14] = 0x00137664u; fn_00146ad8(cpu);
    }
L_00137664:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00137668:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001376c8;
        }
    }
L_0013766c:;
    {
        cpu->r[0] = rd16(cpu->r[0] + + 0xb4u);
    }
L_00137670:;
    {
        cpu->r[11] = cpu->r[10];
    }
L_00137674:;
    {
        wr16(cpu->r[10] + - 0x2u, cpu->r[0]);
    }
L_00137678:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0013767c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_00137680:;
    {
        cpu->r[14] = 0x00137684u; fn_00146988(cpu);
    }
L_00137684:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_00137688:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_0013768c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013756c;
        }
    }
L_00137690:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8cu);
    }
L_00137694:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_00137698:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0013769c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_001376a0:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        cpu->r[2] = rd32(cpu->r[12]);
        cpu->r[12] = wb_tmp;
    }
L_001376a4:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 1);
    }
L_001376a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_001376ac:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[12]);
    }
L_001376b0:;
    {
        wr32(cpu->r[12], cpu->r[2]);
    }
L_001376b4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00137400;
        }
    }
L_001376b8:;
    {
        cpu->r[1] = rd8(cpu->r[3]);
    }
L_001376bc:;
    {
        { uint32_t v = cpu->r[1] & 0x000000f8u; set_nz(cpu, v); }
    }
L_001376c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137400;
        }
    }
L_001376c4:;
    {
        goto L_00137500;
    }
L_001376c8:;
    {
        cpu->r[0] = 0x000000bcu;
    }
L_001376cc:;
    {
        cpu->r[14] = 0x001376d0u; fn_0018ba6c(cpu);
    }
L_001376d0:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001376d4:;
    {
        cpu->r[14] = 0x001376d8u; fn_00146c9c(cpu);
    }
L_001376d8:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001376dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013776c;
        }
    }
L_001376e0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001376e4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001376e8:;
    {
        cpu->r[14] = 0x001376ecu; fn_00146c28(cpu);
    }
L_001376ec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001376f0:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001376f4:;
    {
        wr16(cpu->r[10] + - 0x2u, cpu->r[2]);
    }
L_001376f8:;
    {
        cpu->r[0] = rd16(cpu->r[13] + + 0x90u);
    }
L_001376fc:;
    {
        wr32(cpu->r[11] + + 0xb4u, cpu->r[2]);
    }
L_00137700:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00137704:;
    {
        cpu->r[11] = cpu->r[10];
    }
L_00137708:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_0013770c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00137710:;
    {
        cpu->r[14] = 0x00137714u; fn_00146b18(cpu);
    }
L_00137714:;
    {
        goto L_00137678;
    }
L_00137718:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_0013771c:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_00137720:;
    {
        wr32(cpu->r[12] + + 0x3cu, cpu->r[2]);
    }
L_00137724:;
    {
        goto L_0013753c;
    }
L_00137728:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_0013772c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00137730:;
    {
        wr32(cpu->r[1] + + 0x3cu, cpu->r[2]);
    }
L_00137734:;
    {
        goto L_0013753c;
    }
L_00137738:;
    {
        cpu->r[4] = (~0x00000020u);
    }
L_0013773c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00137740:;
    {
        cpu->r[14] = 0x00137744u; fn_00146988(cpu);
    }
L_00137744:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_00137748:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x50u);
    }
L_0013774c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14cu);
    }
L_00137750:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_00137754:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00137758:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013775c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00137760:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00137bcc;
        }
    }
L_00137764:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000154u, 0, 0);
    }
L_00137768:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0013776cu)) return;
    }
L_0013776c:;
    {
        cpu->r[4] = (~0x00000001u);
    }
L_00137770:;
    {
        goto L_0013773c;
    }
L_00137774:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_00137778:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0013777c:;
    {
        cpu->r[1] = rd8(cpu->r[14] + + 0x2au);
    }
L_00137780:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00137784:;
    {
        cpu->r[2] = rd8(cpu->r[14] + + 0x2cu);
    }
L_00137788:;
    {
        cpu->r[3] = rd8(cpu->r[14] + + 0x2bu);
    }
L_0013778c:;
    {
        wr32(cpu->r[14] + + 0xc4u, cpu->r[4]);
    }
L_00137790:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_00137794:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00137798:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0013779c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001377a0:;
    {
        wr32(cpu->r[14] + + 0x100u, cpu->r[3]);
    }
L_001377a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
        }
    }
L_001377a8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[14] + + 0x100u, cpu->r[3]);
        }
    }
L_001377ac:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001377b0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_001377b4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001377b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
        }
    }
L_001377bc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
        }
    }
L_001377c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[12] + + 0x100u);
        }
    }
L_001377c4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[2] + + 0x100u);
        }
    }
L_001377c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
        }
    }
L_001377cc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12] + + 0x100u, cpu->r[3]);
        }
    }
L_001377d0:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_001377d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
        }
    }
L_001377d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
        }
    }
L_001377dc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x100u, cpu->r[3]);
        }
    }
L_001377e0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001377e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
        }
    }
L_001377e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
        }
    }
L_001377ec:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + + 0x100u, cpu->r[3]);
        }
    }
L_001377f0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[4]; cpu->r[3] = v;
    }
L_001377f4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_001377f8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001377fc:;
    {
        cpu->r[14] = 0x00137800u; imp__Znaj(cpu); /* _Znaj */
    }
L_00137800:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_00137804:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_00137808:;
    {
        wr32(cpu->r[3] + + 0xb0u, cpu->r[0]);
    }
L_0013780c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00137810:;
    {
        cpu->r[3] = rd32(0x00137818u + + 0x3e8u);
    }
L_00137814:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00137818:;
    {
        cpu->r[3] = rd32(0x00137820u + + 0x3e4u);
    }
L_0013781c:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00137820:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00137824:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_00137828:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_0013782c:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_00137830:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00137834:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00137838:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_0013783c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = (~0x00000027u);
        }
    }
L_00137840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137744;
        }
    }
L_00137844:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00137848:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0013784c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00137850:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_00137854:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xcu);
    }
L_00137858:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x0000000cu;
        }
    }
L_0013785c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_00137860:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00137864:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x0000000cu;
        }
    }
L_00137868:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0013786c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00137870:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x18u);
    }
L_00137874:;
    {
        cpu->r[2] = rd8(cpu->r[14] + + 0x2bu);
    }
L_00137878:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x0000000cu;
        }
    }
L_0013787c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00137880:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00137884:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x28u);
    }
L_00137888:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0013788c:;
    {
        cpu->r[3] = rd8(cpu->r[14] + + 0x2cu);
    }
L_00137890:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = 0x00000004u;
        }
    }
L_00137894:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = 0x00000000u;
        }
    }
L_00137898:;
    {
        wr32(cpu->r[4] + + 0xf0u, cpu->r[2]);
    }
L_0013789c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_001378a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_001378a4:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[2]);
    }
L_001378a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_001378ac:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_001378b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_001378b4:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_001378b8:;
    {
        wr32(cpu->r[4] + + 0xd0u, cpu->r[1]);
    }
L_001378bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001378c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001378c4:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[0]);
    }
L_001378c8:;
    {
        wr32(cpu->r[4] + + 0xccu, cpu->r[2]);
    }
L_001378cc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001378d0:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[3]);
    }
L_001378d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001378d8:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x2au);
    }
L_001378dc:;
    {
        goto L_001378ec;
    }
L_001378e0:;
    {
        wr32(cpu->r[2] + + 0xd0u, cpu->r[1]);
    }
L_001378e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001378e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_001378ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001378f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001378f4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001378e0;
        }
    }
L_001378f8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x28u);
    }
L_001378fc:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_00137900:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_00137904:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_00137908:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[5]);
    }
L_0013790c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_00137910:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[10], 1, 1);
    }
L_00137914:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00137aa0;
        }
    }
L_00137918:;
    {
        cpu->r[7] = rd32(cpu->r[9]);
    }
L_0013791c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00137920:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137a94;
        }
    }
L_00137924:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x2bu);
    }
L_00137928:;
    {
        cpu->r[0] = rd16(cpu->r[7]);
    }
L_0013792c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00137930:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x100u);
    }
L_00137934:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[2] = v;
    }
L_00137938:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0xb4u);
    }
L_0013793c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[3] = v;
    }
L_00137940:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xc8u);
    }
L_00137944:;
    {
        uint32_t v = cpu->r[8] * cpu->r[12] + cpu->r[1]; cpu->r[8] = v;
    }
L_00137948:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x34u);
    }
L_0013794c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_00137950:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00137954:;
    {
        cpu->r[14] = 0x00137958u; imp_memcpy(cpu); /* memcpy */
    }
L_00137958:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013795c:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_00137960:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00137a74;
        }
    }
L_00137964:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00137968:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0013796c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00137a50;
        }
    }
L_00137970:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00137974:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00137978:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00137a28;
        }
    }
L_0013797c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00137980:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00137984:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001379ec;
        }
    }
L_00137988:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x2au);
    }
L_0013798c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00137990:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001379d8;
        }
    }
L_00137994:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_00137998:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013799c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_001379a0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x2cu);
    }
L_001379a4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xd0u);
    }
L_001379a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001379ac:;
    {
        cpu->r[12] = rd16(cpu->r[2] + + 0x2u);
    }
L_001379b0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001379b4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x40u);
    }
L_001379b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_001379bc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001379c0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[3] = v;
    }
L_001379c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001379c8:;
    {
        cpu->r[14] = 0x001379ccu; imp_memcpy(cpu); /* memcpy */
    }
L_001379cc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x2au);
    }
L_001379d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001379d4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013799c;
        }
    }
L_001379d8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001379dc:;
    {
        cpu->r[14] = 0x001379e0u; fn_00146b98(cpu);
    }
L_001379e0:;
    {
        goto L_00137918;
    }
L_001379e4:;
    {
        cpu->r[4] = (~0x00000000u);
    }
L_001379e8:;
    {
        goto L_00137744;
    }
L_001379ec:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x2du);
    }
L_001379f0:;
    {
        cpu->r[14] = (~0x00000000u);
    }
L_001379f4:;
    {
        cpu->r[12] = rd16(cpu->r[7] + + 0x12u);
    }
L_001379f8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x60u);
    }
L_001379fc:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00137a00:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00137a04:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[14]);
    }
L_00137a08:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12] + cpu->r[1]; cpu->r[1] = v;
    }
L_00137a0c:;
    {
        cpu->r[14] = 0x00137a10u; imp_memcpy(cpu); /* memcpy */
    }
L_00137a10:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xccu);
    }
L_00137a14:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00137a18:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00137a1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_00137a20:;
    {
        cpu->r[14] = 0x00137a24u; imp_memcpy(cpu); /* memcpy */
    }
L_00137a24:;
    {
        goto L_00137988;
    }
L_00137a28:;
    {
        cpu->r[1] = rd16(cpu->r[7] + + 0x18u);
    }
L_00137a2c:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_00137a30:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xf8u);
    }
L_00137a34:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x48u);
    }
L_00137a38:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1]; cpu->r[1] = v;
    }
L_00137a3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_00137a40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000018u, 0, 0);
    }
L_00137a44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_00137a48:;
    {
        cpu->r[14] = 0x00137a4cu; imp_memcpy(cpu); /* memcpy */
    }
L_00137a4c:;
    {
        goto L_0013797c;
    }
L_00137a50:;
    {
        cpu->r[1] = rd16(cpu->r[7] + + 0x16u);
    }
L_00137a54:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_00137a58:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x48u);
    }
L_00137a5c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xf4u);
    }
L_00137a60:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00137a64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_00137a68:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1] + cpu->r[14]; cpu->r[1] = v;
    }
L_00137a6c:;
    {
        cpu->r[14] = 0x00137a70u; imp_memcpy(cpu); /* memcpy */
    }
L_00137a70:;
    {
        goto L_00137970;
    }
L_00137a74:;
    {
        cpu->r[1] = rd16(cpu->r[7] + + 0x14u);
    }
L_00137a78:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_00137a7c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x48u);
    }
L_00137a80:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xf0u);
    }
L_00137a84:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1] + cpu->r[3]; cpu->r[1] = v;
    }
L_00137a88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_00137a8c:;
    {
        cpu->r[14] = 0x00137a90u; imp_memcpy(cpu); /* memcpy */
    }
L_00137a90:;
    {
        goto L_00137964;
    }
L_00137a94:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_00137a98:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00137a9c:;
    {
        goto L_00137910;
    }
L_00137aa0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x20u);
    }
L_00137aa4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00137aa8:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_00137aac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00137ab0:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_00137ab4:;
    {
        cpu->r[14] = 0x00137ab8u; imp_free(cpu); /* free */
    }
L_00137ab8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_00137abc:;
    {
        goto L_00137ae8;
    }
L_00137ac0:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0x9cu);
    }
L_00137ac4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00137ac8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[4], 0, 0);
    }
L_00137acc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000004cu, 0, 0);
    }
L_00137ad0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00137ad4:;
    {
        cpu->r[14] = 0x00137ad8u; fn_0014199c(cpu);
    }
L_00137ad8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x48u);
    }
L_00137adc:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x44u);
    }
L_00137ae0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00137ae4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_00137ae8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[8] + + 0x28u);
    }
L_00137aec:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00137af0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00137ac0;
        }
    }
L_00137af4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00137af8:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[4] = v;
    }
L_00137afc:;
    {
        wr32(cpu->r[0] + + 0xfcu, cpu->r[5]);
    }
L_00137b00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00137b04:;
    {
        cpu->r[14] = 0x00137b08u; imp__Znaj(cpu); /* _Znaj */
    }
L_00137b08:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_00137b0c:;
    {
        cpu->r[3] = rd32(0x00137b14u + + 0xf4u);
    }
L_00137b10:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_00137b14:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00137b18:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00137b1c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_00137b20:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_00137b24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00137b28:;
    {
        wr32(cpu->r[1] + + 0xb4u, cpu->r[0]);
    }
L_00137b2c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = (~0x00000036u);
        }
    }
L_00137b30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137744;
        }
    }
L_00137b34:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00137b38:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x28u);
    }
L_00137b3c:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_00137b40:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_00137b44:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_00137b48:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[9] + + 0x28u);
    }
L_00137b4c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00137b50:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00137bd0;
        }
    }
L_00137b54:;
    {
        cpu->r[4] = rd32(cpu->r[9] + + 0x9cu);
    }
L_00137b58:;
    {
        cpu->r[0] = rd32(cpu->r[9] + + 0xb4u);
    }
L_00137b5c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_00137b60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_00137b64:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000040u, 0, 0);
    }
L_00137b68:;
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
L_00137b6c:;
    {
        cpu->r[8] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00137b70:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00137b74:;
    {
        cpu->r[14] = 0x00137b78u; imp_memcpy(cpu); /* memcpy */
    }
L_00137b78:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x40u);
    }
L_00137b7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00137b80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137b8c;
        }
    }
L_00137b84:;
    {
        cpu->r[14] = 0x00137b88u; fn_0018ba60(cpu);
    }
L_00137b88:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[10]);
    }
L_00137b8c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00137b90:;
    {
        goto L_00137ba8;
    }
L_00137b94:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x48u);
    }
L_00137b98:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00137b9c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_00137ba0:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_00137ba4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00137ba8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_00137bac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00137bb0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00137b94;
        }
    }
L_00137bb4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[8], 0, 0);
    }
L_00137bb8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00137bbc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000004cu, 0, 0);
    }
L_00137bc0:;
    {
        goto L_00137b48;
    }
L_00137bc4:;
    {
        cpu->r[4] = (~0x0000006eu);
    }
L_00137bc8:;
    {
        goto L_00137744;
    }
L_00137bcc:;
    {
        cpu->r[14] = 0x00137bd0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_00137bd0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00137bd4:;
    {
        goto L_00137744;
    }
}

/* _ZN13CAniObjDLists17ClearGLNewBuffersEv @ 00137c0c (arm) */
void fn_00137c0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00137c0c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00137c10:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00137c14:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xa0u);
    }
L_00137c18:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00137c1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137c2c;
        }
    }
L_00137c20:;
    {
        cpu->r[14] = 0x00137c24u; fn_0018ba60(cpu);
    }
L_00137c24:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00137c28:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[3]);
    }
L_00137c2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xa4u);
    }
L_00137c30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00137c34:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00137c38u)) return;
        }
    }
L_00137c38:;
    {
        cpu->r[14] = 0x00137c3cu; fn_0018ba60(cpu);
    }
L_00137c3c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00137c40:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[3]);
    }
L_00137c44:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00137c48u)) return;
    }
}

/* _ZN13CAniObjDLists14ClearGLBuffersEv @ 00137c48 (arm) */
void fn_00137c48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00137c48:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00137c4c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00137c50:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xb0u);
    }
L_00137c54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00137c58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137c68;
        }
    }
L_00137c5c:;
    {
        cpu->r[14] = 0x00137c60u; fn_0018ba60(cpu);
    }
L_00137c60:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00137c64:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[3]);
    }
L_00137c68:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb4u);
    }
L_00137c6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00137c70:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00137c74u)) return;
        }
    }
L_00137c74:;
    {
        cpu->r[14] = 0x00137c78u; fn_0018ba60(cpu);
    }
L_00137c78:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00137c7c:;
    {
        wr32(cpu->r[4] + + 0xb4u, cpu->r[3]);
    }
L_00137c80:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00137c84u)) return;
    }
}

/* _ZN13CAniObjDLists16SendBuffersToGPUEbii @ 00137c84 (arm) */
void fn_00137c84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00137c84:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00137c88:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00137c8c:;
    {
        cpu->r[5] = rd32(0x00137c94u + + 0x1ecu);
    }
L_00137c90:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00137c94:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00137c98:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_00137c9c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00137ca4u, cpu->r[5], 0, 0);
    }
L_00137ca0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137d58;
        }
    }
L_00137ca4:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_00137ca8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137cfc;
        }
    }
L_00137cac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_00137cb0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00137cb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137cfc;
        }
    }
L_00137cb8:;
    {
        cpu->r[3] = rd32(0x00137cc0u + + 0x1c4u);
    }
L_00137cbc:;
    {
        cpu->r[1] = 0x000084c0u;
    }
L_00137cc0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00137cc4:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00137cc8:;
    {
        cpu->r[14] = 0x00137cccu; fn_0012e124(cpu);
    }
L_00137ccc:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00137cd0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00137cd4:;
    {
        cpu->r[14] = 0x00137cd8u; fn_0012e150(cpu);
    }
L_00137cd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000034u, 0, 0);
    }
L_00137cdc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00137ce0:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_00137ce4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00137ce8:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x2cu);
    }
L_00137cec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00137cf0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x100u);
    }
L_00137cf4:;
    {
        cpu->r[14] = 0x00137cf8u; imp_glTexCoordPointer(cpu); /* glTexCoordPointer */
    }
L_00137cf8:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[7]);
    }
L_00137cfc:;
    {
        add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_00137d00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00137d04u)) return;
        }
    }
L_00137d04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00137d08:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00137d0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00137d10u)) return;
        }
    }
L_00137d10:;
    {
        cpu->r[3] = rd32(0x00137d18u + + 0x16cu);
    }
L_00137d14:;
    {
        cpu->r[1] = 0x000084c1u;
    }
L_00137d18:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00137d1c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00137d20:;
    {
        cpu->r[14] = 0x00137d24u; fn_0012e124(cpu);
    }
L_00137d24:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00137d28:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00137d2c:;
    {
        cpu->r[14] = 0x00137d30u; fn_0012e150(cpu);
    }
L_00137d30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000034u, 0, 0);
    }
L_00137d34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00137d38:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_00137d3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00137d40:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x2cu);
    }
L_00137d44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00137d48:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x100u);
    }
L_00137d4c:;
    {
        cpu->r[14] = 0x00137d50u; imp_glTexCoordPointer(cpu); /* glTexCoordPointer */
    }
L_00137d50:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[6]);
    }
L_00137d54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00137d58u)) return;
    }
L_00137d58:;
    {
        cpu->r[6] = rd32(0x00137d60u + + 0x124u);
    }
L_00137d5c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00137d60:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00137d64:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_00137d68:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_00137d6c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00137d70:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00137d74:;
    {
        cpu->r[14] = 0x00137d78u; fn_0012e1c8(cpu);
    }
L_00137d78:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00137d7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc8u);
    }
L_00137d80:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_00137d84:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x2bu);
    }
L_00137d88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00137d8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x100u);
    }
L_00137d90:;
    {
        cpu->r[14] = 0x00137d94u; imp_glVertexPointer(cpu); /* glVertexPointer */
    }
L_00137d94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_00137d98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00137d9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137e68;
        }
    }
L_00137da0:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00137da4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00137da8:;
    {
        cpu->r[14] = 0x00137dacu; fn_0012e170(cpu);
    }
L_00137dac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00137db0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xf0u);
    }
L_00137db4:;
    {
        cpu->r[0] = 0x00001406u;
    }
L_00137db8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x100u);
    }
L_00137dbc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00137dc0:;
    {
        cpu->r[14] = 0x00137dc4u; imp_glNormalPointer(cpu); /* glNormalPointer */
    }
L_00137dc4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_00137dc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00137dcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137dfc;
        }
    }
L_00137dd0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00137dd4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00137dd8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00137ddc:;
    {
        cpu->r[14] = 0x00137de0u; fn_0012e19c(cpu);
    }
L_00137de0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00137de4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xccu);
    }
L_00137de8:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00137dec:;
    {
        cpu->r[1] = 0x00001401u;
    }
L_00137df0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x100u);
    }
L_00137df4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_00137df8:;
    {
        cpu->r[14] = 0x00137dfcu; imp_glColorPointer(cpu); /* glColorPointer */
    }
L_00137dfc:;
    {
        cpu->r[8] = rd8(cpu->r[4] + + 0x2cu);
    }
L_00137e00:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_00137e04:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00137e78;
        }
    }
L_00137e08:;
    {
        cpu->r[8] = 0x00000002u;
    }
L_00137e0c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00137e10:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_00137e14:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00137e18:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00008400u, 0, 0);
    }
L_00137e1c:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[5]);
    }
L_00137e20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000c0u, 0, 0);
    }
L_00137e24:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00137e28:;
    {
        cpu->r[14] = 0x00137e2cu; fn_0012e124(cpu);
    }
L_00137e2c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00137e30:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00137e34:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_00137e38:;
    {
        cpu->r[14] = 0x00137e3cu; fn_0012e150(cpu);
    }
L_00137e3c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xd0u);
    }
L_00137e40:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00137e44:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_00137e48:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x2cu);
    }
L_00137e4c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00137e50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00137e54:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x100u);
    }
L_00137e58:;
    {
        cpu->r[14] = 0x00137e5cu; imp_glTexCoordPointer(cpu); /* glTexCoordPointer */
    }
L_00137e5c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_00137e60:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00137e18;
        }
    }
L_00137e64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00137e68u)) return;
    }
L_00137e68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00137e6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00137e70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00137da0;
        }
    }
L_00137e74:;
    {
        goto L_00137dc4;
    }
L_00137e78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00137e7cu)) return;
        }
    }
L_00137e7c:;
    {
        goto L_00137e0c;
    }
}

/* _ZN13CAniObjDLists12RenderGroupsEPPP7TexturePh @ 00137e88 (arm) */
void fn_00137e88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00137e88:;
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
L_00137e8c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00137e90:;
    {
        cpu->r[12] = rd32(0x00137e98u + + 0x274u);
    }
L_00137e94:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00137e98:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_00137e9c:;
    {
        cpu->r[0] = 0x000011e8u;
    }
L_00137ea0:;
    {
        cpu->r[2] = rd32(0x00137ea8u + + 0x268u);
    }
L_00137ea4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00137eacu, cpu->r[12], 0, 0);
    }
L_00137ea8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x28u);
    }
L_00137eac:;
    {
        cpu->r[5] = rd32(cpu->r[7] + + 0x9cu);
    }
L_00137eb0:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_00137eb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00137eb8:;
    {
        cpu->r[10] = rd32(cpu->r[2]);
    }
L_00137ebc:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[0]);
    }
L_00137ec0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00137ec4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00138100;
        }
    }
L_00137ec8:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_00137ecc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00137ed0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_00137ed4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00137ed8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00137edc:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[1]);
    }
L_00137ee0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00137ee4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001380bc;
        }
    }
L_00137ee8:;
    {
        cpu->r[2] = 0x0000128cu;
    }
L_00137eec:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x30u);
    }
L_00137ef0:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_00137ef4:;
    {
        cpu->r[2] = 0x00001288u;
    }
L_00137ef8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00137efc:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_00137f00:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_00137f04:;
    {
        cpu->r[14] = 0x00137f08u; fn_00147cd8(cpu);
    }
L_00137f08:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_00137f0c:;
    {
        cpu->r[14] = 0x00137f10u; fn_00147a48(cpu);
    }
L_00137f10:;
    {
        cpu->r[11] = rd8(cpu->r[5] + + 0x24u);
    }
L_00137f14:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 1);
    }
L_00137f18:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001380f0;
        }
    }
L_00137f1c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00137f20:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00137f90;
        }
    }
L_00137f24:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x8u);
    }
L_00137f28:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_00137f2c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00137f30:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_00137f34:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_00137f38:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00137f3c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00137f40:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00137f44:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00137f48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00137f78;
        }
    }
L_00137f4c:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_00137f50:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00137f54:;
    {
        cpu->r[14] = 0x00137f58u; fn_0012f12c(cpu);
    }
L_00137f58:;
    {
        cpu->r[3] = rd16(cpu->r[7] + + 0x14u);
    }
L_00137f5c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00137f60:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00137f64:;
    {
        { uint32_t v = cpu->r[3] & 0x00000003u; set_nz(cpu, v); }
    }
L_00137f68:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00137f6c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00137f70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_00137f74:;
    {
        cpu->r[14] = 0x00137f78u; fn_00134680(cpu);
    }
L_00137f78:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00137f7c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00137f80:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 1);
    }
L_00137f84:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_00137f88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00137f34;
        }
    }
L_00137f8c:;
    {
        cpu->r[5] = cpu->r[9];
    }
L_00137f90:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00137f94:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00137f98:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00137f9c:;
    {
        cpu->r[14] = 0x00137fa0u; fn_00147a80(cpu);
    }
L_00137fa0:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00137fa4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00137fa8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00137fac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00137fb0:;
    {
        cpu->r[14] = 0x00137fb4u; fn_00147a80(cpu);
    }
L_00137fb4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00137fb8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00137fbc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00137fc0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00137fc4:;
    {
        cpu->r[14] = 0x00137fc8u; fn_00137c84(cpu);
    }
L_00137fc8:;
    {
        cpu->r[0] = 0x0000128cu;
    }
L_00137fcc:;
    {
        cpu->r[2] = 0x00001288u;
    }
L_00137fd0:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x30u);
    }
L_00137fd4:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[0]);
    }
L_00137fd8:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_00137fdc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00137fe0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_00137fe4:;
    {
        cpu->r[14] = 0x00137fe8u; fn_0014814c(cpu);
    }
L_00137fe8:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_00137fec:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00137ff0:;
    {
        cpu->r[14] = 0x00137ff4u; fn_00147cd0(cpu);
    }
L_00137ff4:;
    {
        cpu->r[0] = 0x000011e8u;
    }
L_00137ff8:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[0]);
    }
L_00137ffc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00138000:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00138004:;
    {
        cpu->r[14] = 0x0013800cu;
    }
L_00138008:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013800cu)) return;
    }
L_0013800c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x3cu);
    }
L_00138010:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00138014:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001380e0;
        }
    }
L_00138018:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0013801c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00138020:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00138024:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_00138028:;
    {
        cpu->r[3] = 0x3f800000u;
    }
L_0013802c:;
    {
        cpu->r[14] = 0x00138030u; fn_0012f03c(cpu);
    }
L_00138030:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x44u);
    }
L_00138034:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00138038:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013807c;
        }
    }
L_0013803c:;
    {
        cpu->r[6] = 0x00000004u;
    }
L_00138040:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00138044:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x48u);
    }
L_00138048:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_0013804c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0xb4u);
    }
L_00138050:;
    {
        cpu->r[2] = 0x00001403u;
    }
L_00138054:;
    {
        cpu->r[1] = rd32(cpu->r[12] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00138058:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0013805c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[6]);
    }
L_00138060:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_00138064:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0] + cpu->r[3]; cpu->r[3] = v;
    }
L_00138068:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_0013806c:;
    {
        cpu->r[14] = 0x00138070u; imp_glDrawElements(cpu); /* glDrawElements */
    }
L_00138070:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x44u);
    }
L_00138074:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00138078:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00138044;
        }
    }
L_0013807c:;
    {
        cpu->r[1] = 0x00001288u;
    }
L_00138080:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[1]);
    }
L_00138084:;
    {
        cpu->r[14] = 0x00138088u; fn_00147cd4(cpu);
    }
L_00138088:;
    {
        cpu->r[3] = 0x00001738u;
    }
L_0013808c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x34u);
    }
L_00138090:;
    {
        cpu->r[0] = 0x00001738u;
    }
L_00138094:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00138098:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[8] + + 0x28u);
    }
L_0013809c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_001380a0:;
    {
        wr32(cpu->r[10] + cpu->r[0], cpu->r[2]);
    }
L_001380a4:;
    {
        cpu->r[2] = 0x0000173cu;
    }
L_001380a8:;
    {
        cpu->r[0] = 0x0000173cu;
    }
L_001380ac:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_001380b0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x38u);
    }
L_001380b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_001380b8:;
    {
        wr32(cpu->r[10] + cpu->r[0], cpu->r[2]);
    }
L_001380bc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
    }
L_001380c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001380c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001380c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001380cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_001380d0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001380d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00138100;
        }
    }
L_001380d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000004cu, 0, 0);
    }
L_001380dc:;
    {
        goto L_00137ed4;
    }
L_001380e0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x38u);
    }
L_001380e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001380e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00138018;
        }
    }
L_001380ec:;
    {
        goto L_00138030;
    }
L_001380f0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001380f4:;
    {
        cpu->r[14] = 0x001380f8u; fn_00147a48(cpu);
    }
L_001380f8:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001380fc:;
    {
        goto L_00137f1c;
    }
L_00138100:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00138104:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00138108:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0013810cu)) return;
    }
}

/* _ZN13CAniObjDLists23UpdateSphericalTexCoordEP7CMatrixP7gxGroup @ 00138114 (arm) */
void fn_00138114(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00138114:;
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
L_00138118:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_0013811c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000ecu, 1, 0);
    }
L_00138120:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xb0u);
    }
L_00138124:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00138128:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0013812c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xb4u);
    }
L_00138130:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_00138134:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00138138:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
        }
    }
L_0013813c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_00138140:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001383fc;
        }
    }
L_00138144:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xb8u);
    }
L_00138148:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013814c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001383fc;
        }
    }
L_00138150:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x2cu);
    }
L_00138154:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00138158:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001383fc;
        }
    }
L_0013815c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_00138160:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00138164:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00138168:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0013816c:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[6]);
    }
L_00138170:;
    {
        cpu->r[14] = 0x00138174u; fn_00153624(cpu);
    }
L_00138174:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_00138178:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0013817c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00138180:;
    {
        cpu->r[14] = 0x00138184u; fn_00153fbc(cpu);
    }
L_00138184:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[6]);
    }
L_00138188:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0013818c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_00138190:;
    {
        cpu->r[14] = 0x00138194u; fn_00153624(cpu);
    }
L_00138194:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00138198:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0013819c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001381a0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001381a4:;
    {
        cpu->r[14] = 0x001381a8u; fn_0015364c(cpu);
    }
L_001381a8:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x2au);
    }
L_001381ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc8u);
    }
L_001381b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xf0u);
    }
L_001381b4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_001381b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_001381bc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_001381c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001381c4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001381c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001381f4;
        }
    }
L_001381cc:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001381d0:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001381d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000b0u, 0, 0);
    }
L_001381d8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xd0u);
    }
L_001381dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001381e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_001381e4:;
    {
        wr32(cpu->r[0] + cpu->r[6], cpu->r[2]);
    }
L_001381e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001381ec:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_001381f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001381d8;
        }
    }
L_001381f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001381f8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x44u);
    }
L_001381fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00138200:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001383ec;
        }
    }
L_00138204:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xb4u);
    }
L_00138208:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0013820c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00138210:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_00138214:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00138218:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x00138220u + + 0x1e8u);
    }
L_0013821c:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x00138224u + + 0x1e8u);
    }
L_00138220:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00138228u + + 0x1e8u);
    }
L_00138224:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x0013822cu + + 0x1e8u);
    }
L_00138228:;
    {
        *vfp_s(cpu, 20) = *(float*)G(0x00138230u + + 0x1e8u);
    }
L_0013822c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00138230:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xdcu) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_00138234:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00138238:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xe0u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_0013823c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xe4u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_00138240:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xd0u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_00138244:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x48u);
    }
L_00138248:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xd4u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_0013824c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00138250:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xd8u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_00138254:;
    {
        cpu->r[7] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_00138258:;
    {
        cpu->r[8] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0013825c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 0);
    }
L_00138260:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00138264:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001383cc;
        }
    }
L_00138268:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0013826c:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[7] = v;
    }
L_00138270:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00138274:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x000000dcu, 0, 0);
    }
L_00138278:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[2], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_0013827c:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_00138280:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000d0u, 0, 0);
    }
L_00138284:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00138288:;
    {
        cpu->r[3] = rd16(cpu->r[8] + cpu->r[5]);
    }
L_0013828c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00138290:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xb8u);
    }
L_00138294:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_00138298:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_0013829c:;
    {
        cpu->r[12] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_001382a0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_001382a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001383bc;
        }
    }
L_001382a8:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001382ac:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[12]);
    }
L_001382b0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x100u);
    }
L_001382b4:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[6] = v;
    }
L_001382b8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001382bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_001382c0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[11], cpu->r[6], 0, 0);
    }
L_001382c4:;
    {
        cpu->r[14] = 0x001382c8u; fn_001533e4(cpu);
    }
L_001382c8:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,19);
    }
L_001382cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xdcu);
    }
L_001382d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xe4u);
    }
L_001382d4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xe0u) = *(uint32_t*)vfp_s(cpu, 20);
    }
L_001382d8:;
    {
        vfp_vmla(cpu, 13, 14, 14);
    }
L_001382dc:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,13);
    }
L_001382e0:;
    {
        vfp_vmla(cpu, 14, 15, 15);
    }
L_001382e4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001382e8:;
    {
        cpu->r[14] = 0x001382ecu; fn_0012dcf4(cpu);
    }
L_001382ec:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xe4u);
    }
L_001382f0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001382f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001382f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_001382fc:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00138300:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_00138304:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xdcu);
    }
L_00138308:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0013830c:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00138310:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xe4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00138314:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xe0u);
    }
L_00138318:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_0013831c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xdcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00138320:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xe0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00138324:;
    {
        cpu->r[14] = 0x00138328u; fn_001533e4(cpu);
    }
L_00138328:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xe0u);
    }
L_0013832c:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[13] + + 0xd4u);
    }
L_00138330:;
    {
        vfp_vmul(cpu, 15, 14, 9);
    }
L_00138334:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[13] + + 0xdcu);
    }
L_00138338:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0xd0u);
    }
L_0013833c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0xe4u);
    }
L_00138340:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xd8u);
    }
L_00138344:;
    {
        vfp_vmla(cpu, 15, 10, 11);
    }
L_00138348:;
    {
        vfp_vmla(cpu, 15, 12, 13);
    }
L_0013834c:;
    {
        vfp_vadd(cpu, 15, 15, 15);
    }
L_00138350:;
    {
        vfp_vmul(cpu, 9, 15, 9);
    }
L_00138354:;
    {
        vfp_vmul(cpu, 11, 15, 11);
    }
L_00138358:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xd4u) = *(uint32_t*)vfp_s(cpu, 9);
    }
L_0013835c:;
    {
        vfp_vsub(cpu, 14, 14, 9);
    }
L_00138360:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xd0u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00138364:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xe0u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00138368:;
    {
        vfp_vmul(cpu, 14, 14, 14);
    }
L_0013836c:;
    {
        vfp_vmul(cpu, 13, 15, 13);
    }
L_00138370:;
    {
        vfp_vsub(cpu, 15, 10, 11);
    }
L_00138374:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xd8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00138378:;
    {
        vfp_vmla(cpu, 14, 15, 15);
    }
L_0013837c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xdcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00138380:;
    {
        vfp_vsub(cpu, 12, 12, 13);
    }
L_00138384:;
    {
        vfp_vadd(cpu, 13, 12, 16);
    }
L_00138388:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xe4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0013838c:;
    {
        vfp_vmla(cpu, 14, 13, 13);
    }
L_00138390:;
    {
        vfp_vsqrt(cpu, 14, 14);
    }
L_00138394:;
    {
        vfp_vadd(cpu, 14, 14, 14);
    }
L_00138398:;
    {
        vfp_vdiv(cpu, 14, 16, 14);
    }
L_0013839c:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,17);
    }
L_001383a0:;
    {
        vfp_vmla(cpu, 13, 14, 15);
    }
L_001383a4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_001383a8:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,17);
    }
L_001383ac:;
    {
        wr32(cpu->r[11] + cpu->r[6], cpu->r[1]);
    }
L_001383b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xe0u);
    }
L_001383b4:;
    {
        vfp_vmla(cpu, 13, 14, 15);
    }
L_001383b8:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001383bc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[10], 1, 1);
    }
L_001383c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00138288;
        }
    }
L_001383c4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001383c8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x44u);
    }
L_001383cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001383d0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001383d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001383d8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001383dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001383e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001383e4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001383e8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013822c;
        }
    }
L_001383ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001383f0:;
    {
        cpu->r[14] = 0x001383f4u; fn_000b2bc8(cpu);
    }
L_001383f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_001383f8:;
    {
        cpu->r[14] = 0x001383fcu; fn_000b2bc8(cpu);
    }
L_001383fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000ecu, 0, 0);
    }
L_00138400:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_00138404:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00138408u)) return;
    }
}

/* _ZN13CAniObjDLists6RenderEPPP7Texturej @ 0013841c (arm) */
void fn_0013841c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013841c:;
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
L_00138420:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00138424:;
    {
        cpu->r[2] = rd32(0x0013842cu + + 0x558u);
    }
L_00138428:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000a4u, 1, 0);
    }
L_0013842c:;
    {
        cpu->r[3] = rd32(0x00138434u + + 0x554u);
    }
L_00138430:;
    {
        cpu->r[2] = add_flags(cpu, 0x00138438u, cpu->r[2], 0, 0);
    }
L_00138434:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00138438:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_0013843c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00138444u, cpu->r[3], 0, 0);
    }
L_00138440:;
    {
        cpu->r[2] = rd32(0x00138448u + + 0x544u);
    }
L_00138444:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00138448:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x28u);
    }
L_0013844c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_00138450:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00138454:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_00138458:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0013845c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3], cpu->r[0]);
        }
    }
L_00138460:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00138464:;
    {
        cpu->r[7] = rd32(cpu->r[2]);
    }
L_00138468:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00138774;
        }
    }
L_0013846c:;
    {
        cpu->r[3] = rd32(0x00138474u + + 0x51cu);
    }
L_00138470:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00138474:;
    {
        cpu->r[2] = rd32(0x0013847cu + + 0x518u);
    }
L_00138478:;
    {
        cpu->r[3] = add_flags(cpu, 0x00138480u, cpu->r[3], 0, 0);
    }
L_0013847c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00138480:;
    {
        cpu->r[2] = add_flags(cpu, 0x00138488u, cpu->r[2], 0, 0);
    }
L_00138484:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000014u, 0, 0);
    }
L_00138488:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0013848c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_00138490:;
    {
        cpu->r[2] = rd32(0x00138498u + + 0x500u);
    }
L_00138494:;
    {
        cpu->r[3] = rd32(0x0013849cu + + 0x500u);
    }
L_00138498:;
    {
        cpu->r[2] = add_flags(cpu, 0x001384a0u, cpu->r[2], 0, 0);
    }
L_0013849c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001384a0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001384a8u, cpu->r[3], 0, 0);
    }
L_001384a4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_001384a8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001384ac:;
    {
        cpu->r[3] = 0x0000176cu;
    }
L_001384b0:;
    {
        cpu->r[6] = rd32(cpu->r[9] + + 0x9cu);
    }
L_001384b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001384b8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001384bc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_001384c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001384c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001384d8;
        }
    }
L_001384c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001384cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00138924;
        }
    }
L_001384d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001384d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00138784;
        }
    }
L_001384d8:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x30u);
    }
L_001384dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001du, 1, 1);
    }
L_001384e0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001384fc;
        }
    }
L_001384e4:;
    {
        cpu->r[2] = rd32(0x001384ecu + + 0x4b4u);
    }
L_001384e8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001384ec:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_001384f0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001384f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001384f8:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_001384fc:;
    {
        cpu->r[2] = 0x0000128cu;
    }
L_00138500:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_00138504:;
    {
        cpu->r[2] = 0x00001288u;
    }
L_00138508:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013850c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_00138510:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_00138514:;
    {
        cpu->r[14] = 0x00138518u; fn_00147cd8(cpu);
    }
L_00138518:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_0013851c:;
    {
        cpu->r[14] = 0x00138520u; fn_00147a48(cpu);
    }
L_00138520:;
    {
        cpu->r[8] = rd8(cpu->r[6] + + 0x24u);
    }
L_00138524:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_00138528:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001387bc;
        }
    }
L_0013852c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00138530:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001385f4;
        }
    }
L_00138534:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_00138538:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0013853c:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_00138540:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[6]);
    }
L_00138544:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[9]);
    }
L_00138548:;
    {
        cpu->r[11] = cpu->r[4];
    }
L_0013854c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[3] = v;
    }
L_00138550:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x20u);
    }
L_00138554:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_00138558:;
    {
        goto L_00138578;
    }
L_0013855c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00138560:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00138564:;
    {
        cpu->r[14] = 0x00138568u; fn_00134680(cpu);
    }
L_00138568:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0013856c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_00138570:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_00138574:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001385ec;
        }
    }
L_00138578:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0013857c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00138580:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00138584:;
    {
        cpu->r[14] = 0x00138588u; fn_00147a50(cpu);
    }
L_00138588:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013858c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00138590:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_00138594:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00138598:;
    {
        cpu->r[2] = rd32(cpu->r[9] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0013859c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001385a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00138568;
        }
    }
L_001385a4:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_001385a8:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[5], 1, 1);
    }
L_001385ac:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001385b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00138568;
        }
    }
L_001385b4:;
    {
        cpu->r[14] = 0x001385b8u; fn_0012f12c(cpu);
    }
L_001385b8:;
    {
        cpu->r[3] = rd16(cpu->r[10] + + 0x14u);
    }
L_001385bc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001385c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001385c4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000003u; set_nz(cpu, v); }
    }
L_001385c8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001385cc:;
    {
        cpu->r[11] = cpu->r[5];
    }
L_001385d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013855c;
        }
    }
L_001385d4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001385d8:;
    {
        cpu->r[14] = 0x001385dcu; fn_00134680(cpu);
    }
L_001385dc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_001385e0:;
    {
        cpu->r[11] = cpu->r[5];
    }
L_001385e4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_001385e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00138578;
        }
    }
L_001385ec:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x14u);
    }
L_001385f0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_001385f4:;
    {
        cpu->r[4] = 0x0000128cu;
    }
L_001385f8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001385fc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00138600:;
    {
        cpu->r[14] = 0x00138604u; fn_0012e230(cpu);
    }
L_00138604:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_00138608:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x30u);
    }
L_0013860c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00138610:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_00138614:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_00138618:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0013861c:;
    {
        cpu->r[14] = 0x00138620u; fn_0014814c(cpu);
    }
L_00138620:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_00138624:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x30u);
    }
L_00138628:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013862c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_00138630:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_00138634:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000006u, 1, 1);
    }
L_00138638:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00138938;
        }
    }
L_0013863c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00138640:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_00138644:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000013u, 1, 1);
    }
L_00138648:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001387cc;
        }
    }
L_0013864c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00138650:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00138654:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00138658:;
    {
        cpu->r[14] = 0x0013865cu; fn_00147a80(cpu);
    }
L_0013865c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00138660:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00138664:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00138668:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_0013866c:;
    {
        cpu->r[14] = 0x00138670u; fn_00147a80(cpu);
    }
L_00138670:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00138674:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00138678:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0013867c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00138680:;
    {
        cpu->r[14] = 0x00138684u; fn_00137c84(cpu);
    }
L_00138684:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00138688:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x44u);
    }
L_0013868c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x8u);
    }
L_00138690:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00138694:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[12] + + 0x8u, cpu->r[3]);
        }
    }
L_00138698:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013869c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00138700;
        }
    }
L_001386a0:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_001386a4:;
    {
        cpu->r[8] = rd32(0x001386acu + + 0x2f8u);
    }
L_001386a8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x10u);
    }
L_001386ac:;
    {
        cpu->r[5] = 0x00000004u;
    }
L_001386b0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001386b4:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x48u);
    }
L_001386b8:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_001386bc:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0xb4u);
    }
L_001386c0:;
    {
        cpu->r[2] = 0x00001403u;
    }
L_001386c4:;
    {
        cpu->r[1] = rd32(cpu->r[12] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001386c8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001386cc:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[5]);
    }
L_001386d0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_001386d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001386d8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_001386dc:;
    {
        cpu->r[14] = 0x001386e0u; imp_glDrawElements(cpu); /* glDrawElements */
    }
L_001386e0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_001386e4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001386e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001386ec:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001386f0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x44u);
    }
L_001386f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001386f8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001386b4;
        }
    }
L_001386fc:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_00138700:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_00138704:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x30u);
    }
L_00138708:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0013870c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00138710:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_00138714:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_00138718:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000006u, 1, 1);
    }
L_0013871c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00138914;
        }
    }
L_00138720:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000007u, 1, 1);
    }
L_00138724:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00138914;
        }
    }
L_00138728:;
    {
        cpu->r[2] = 0x00001738u;
    }
L_0013872c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x34u);
    }
L_00138730:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_00138734:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[9] + + 0x28u);
    }
L_00138738:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_0013873c:;
    {
        cpu->r[4] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00138740:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_00138744:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[1]);
    }
L_00138748:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0013874c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x38u);
    }
L_00138750:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00138754:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_00138758:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_0013875c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_00138760:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00138764:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[4]);
    }
L_00138768:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000004cu, 0, 0);
    }
L_0013876c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00138770:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001384ac;
        }
    }
L_00138774:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00138778:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000a4u, 0, 0);
    }
L_0013877c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00138780:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00138784u)) return;
    }
L_00138784:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x30u);
    }
L_00138788:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001au, 1, 1);
    }
L_0013878c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001384e4;
        }
    }
L_00138790:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_00138794:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001384fc;
        }
    }
L_00138798:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0013879c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001387a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001387a4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001387a8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001387ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000004cu, 0, 0);
    }
L_001387b0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001387b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001384ac;
        }
    }
L_001387b8:;
    {
        goto L_00138774;
    }
L_001387bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001387c0:;
    {
        cpu->r[14] = 0x001387c4u; fn_00147a48(cpu);
    }
L_001387c4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001387c8:;
    {
        goto L_0013852c;
    }
L_001387cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001387d0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[1]);
    }
L_001387d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001387d8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001387dc:;
    {
        vfp_vadd(cpu, 15, 16, 14);
    }
L_001387e0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001387e8u + + 0x18cu);
    }
L_001387e4:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_001387e8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_001387ec:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001387f0:;
    {
        vfp_sync_flags(cpu);
    }
L_001387f4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00138808;
        }
    }
L_001387f8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00138800u + + 0x178u);
    }
L_001387fc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_00138800:;
    {
        vfp_sync_flags(cpu);
    }
L_00138804:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00138818;
        }
    }
L_00138808:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_0013880c:;
    {
        cpu->r[3] = rd32(0x00138814u + + 0x194u);
    }
L_00138810:;
    {
        cpu->r[3] = add_flags(cpu, 0x00138818u, cpu->r[3], 0, 0);
    }
L_00138814:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00138818:;
    {
        cpu->r[2] = rd32(0x00138820u + + 0x18cu);
    }
L_0013881c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00138824u + + 0x150u);
    }
L_00138820:;
    {
        cpu->r[3] = rd32(0x00138828u + + 0x188u);
    }
L_00138824:;
    {
        cpu->r[2] = add_flags(cpu, 0x0013882cu, cpu->r[2], 0, 0);
    }
L_00138828:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_0013882c:;
    {
        vfp_vadd(cpu, 15, 17, 14);
    }
L_00138830:;
    {
        cpu->r[3] = add_flags(cpu, 0x00138838u, cpu->r[3], 0, 0);
    }
L_00138834:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_00138838:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013883c:;
    {
        vfp_sync_flags(cpu);
    }
L_00138840:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00138854;
        }
    }
L_00138844:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0013884cu + + 0x12cu);
    }
L_00138848:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_0013884c:;
    {
        vfp_sync_flags(cpu);
    }
L_00138850:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00138864;
        }
    }
L_00138854:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_00138858:;
    {
        cpu->r[3] = rd32(0x00138860u + + 0x154u);
    }
L_0013885c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00138864u, cpu->r[3], 0, 0);
    }
L_00138860:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00138864:;
    {
        cpu->r[4] = 0x000011e8u;
    }
L_00138868:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0013886c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00138870:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00138874:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_00138878:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_0013887c:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[5]);
    }
L_00138880:;
    {
        cpu->r[14] = 0x00138884u; fn_00153624(cpu);
    }
L_00138884:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_00138888:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013888c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00138890:;
    {
        cpu->r[14] = 0x00138898u;
    }
L_00138894:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00138898u)) return;
    }
L_00138898:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_0013889c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_001388a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_001388a4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001388a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001388b0u + + 0xccu);
    }
L_001388ac:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_001388b0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x90u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001388b4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001388b8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001388bc:;
    {
        cpu->r[14] = 0x001388c0u; fn_00131dec(cpu);
    }
L_001388c0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_001388c4:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001388c8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001388cc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001388d0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001388d4:;
    {
        cpu->r[14] = 0x001388dcu;
    }
L_001388d8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001388dcu)) return;
    }
L_001388dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x94u);
    }
L_001388e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x98u);
    }
L_001388e4:;
    {
        cpu->r[3] = 0x3f800000u;
    }
L_001388e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x9cu);
    }
L_001388ec:;
    {
        cpu->r[14] = 0x001388f0u; imp_glColor4f(cpu); /* glColor4f */
    }
L_001388f0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x74u);
    }
L_001388f4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001388f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013864c;
        }
    }
L_001388fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00138900:;
    {
        cpu->r[14] = 0x00138904u; fn_000b2bc8(cpu);
    }
L_00138904:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00138908:;
    {
        cpu->r[14] = 0x0013890cu; fn_0018ba20(cpu);
    }
L_0013890c:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[5]);
    }
L_00138910:;
    {
        goto L_0013864c;
    }
L_00138914:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00138918:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0013891c:;
    {
        cpu->r[14] = 0x00138920u; fn_0012e304(cpu);
    }
L_00138920:;
    {
        goto L_00138728;
    }
L_00138924:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x30u);
    }
L_00138928:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001au, 1, 1);
    }
L_0013892c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
        }
    }
L_00138930:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00138798;
        }
    }
L_00138934:;
    {
        goto L_001384dc;
    }
L_00138938:;
    {
        cpu->r[0] = 0x000084c1u;
    }
L_0013893c:;
    {
        cpu->r[14] = 0x00138940u; imp_glActiveTexture(cpu); /* glActiveTexture */
    }
L_00138940:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_00138944:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0013894cu + + 0x34u);
    }
L_00138948:;
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
    }
L_0013894c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000078u, 0, 0);
    }
L_00138950:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_00138954:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00138958:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0013895c:;
    {
        cpu->r[0] = 0x00002300u;
    }
L_00138960:;
    {
        cpu->r[1] = 0x00002201u;
    }
L_00138964:;
    {
        cpu->r[14] = 0x00138968u; imp_glTexEnvfv(cpu); /* glTexEnvfv */
    }
L_00138968:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_0013896c:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x30u);
    }
L_00138970:;
    {
        goto L_0013863c;
    }
}

/* _ZN10gxAniGroup7VtxDescEv @ 001389b8 (arm) */
void fn_001389b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001389b8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001389bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001389c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[0] + + 0x50u);
        }
    }
L_001389c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10gxAniGroup15computeMatricesEfP11gxAnimation @ 001389c8 (arm) */
void fn_001389c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001389c8:;
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
L_001389cc:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001389d0:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0xcu);
    }
L_001389d4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001389d8:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001389dc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001389e0:;
    {
        if (cond_test(cpu, 14)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001389e4u)) return;
        }
    }
L_001389e4:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001389e8:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_001389ec:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_001389f0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_001389f4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[10]);
    }
L_001389f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001389fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00138a4c;
        }
    }
L_00138a00:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00138a04:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_00138a08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_00138a0c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00138a10:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x2u);
    }
L_00138a14:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_00138a18:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00138a1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 1u, &shc), 0, 0);
    }
L_00138a20:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[3] + shifter(cpu->r[2], 1, 1u, &shc));
        }
    }
L_00138a24:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00138a28:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
        }
    }
L_00138a2c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3] + + 0x8u);
        }
    }
L_00138a30:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[3]);
        }
    }
L_00138a34:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00138a38:;
    {
        cpu->r[14] = 0x00138a3cu; guest_call(cpu, cpu->r[12]);
    }
L_00138a3c:;
    {
        cpu->r[3] = rd8(cpu->r[5]);
    }
L_00138a40:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00138a44:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00138a04;
        }
    }
L_00138a48:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[6] + + 0xcu);
    }
L_00138a4c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_00138a50:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000038u, 0, 0);
    }
L_00138a54:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 1);
    }
L_00138a58:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001389ec;
        }
    }
L_00138a5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00138a60u)) return;
    }
}

/* _ZN9gxAniMeshC2Ev @ 00138a60 (arm) */
void fn_00138a60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00138a60:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00138a64:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00138a68:;
    {
        wr32(cpu->r[0] + + 0x58u, cpu->r[2]);
    }
L_00138a6c:;
    {
        wr8(cpu->r[3] + + 0x48u, cpu->r[2]);
    }
L_00138a70:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_00138a74:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_00138a78:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_00138a7c:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[2]);
    }
L_00138a80:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_00138a84:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[2]);
    }
L_00138a88:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_00138a8c:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[2]);
    }
L_00138a90:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[2]);
    }
L_00138a94:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[2]);
    }
L_00138a98:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_00138a9c:;
    {
        wr16(cpu->r[0] + + 0x56u, cpu->r[2]);
    }
L_00138aa0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00138aa4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00138aa8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00138aac:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00138ab0:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_00138ab4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00138ab8:;
    {
        wr32(cpu->r[0] + + 0x50u, cpu->r[2]);
    }
L_00138abc:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[2]);
    }
L_00138ac0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9gxAniMeshC1Ev @ 00138ac4 (arm) */
void fn_00138ac4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00138ac4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00138ac8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00138acc:;
    {
        wr32(cpu->r[0] + + 0x58u, cpu->r[2]);
    }
L_00138ad0:;
    {
        wr8(cpu->r[3] + + 0x48u, cpu->r[2]);
    }
L_00138ad4:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_00138ad8:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_00138adc:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_00138ae0:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[2]);
    }
L_00138ae4:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_00138ae8:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[2]);
    }
L_00138aec:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_00138af0:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[2]);
    }
L_00138af4:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[2]);
    }
L_00138af8:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[2]);
    }
L_00138afc:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_00138b00:;
    {
        wr16(cpu->r[0] + + 0x56u, cpu->r[2]);
    }
L_00138b04:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00138b08:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00138b0c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00138b10:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00138b14:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_00138b18:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00138b1c:;
    {
        wr32(cpu->r[0] + + 0x50u, cpu->r[2]);
    }
L_00138b20:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[2]);
    }
L_00138b24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9gxAniMesh10GetVersionEv @ 00138b28 (arm) */
void fn_00138b28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00138b28:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_00138b2c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00138b30:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00138b34:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00138b38:;
    {
        cpu->r[14] = 0x00138b40u;
    }
L_00138b3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00138b40u)) return;
    }
L_00138b40:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00138b44u)) return;
    }
}

/* _Z12AddGrpInListRP10gxAniGroupS0_ @ 00138b44 (arm) */
void fn_00138b44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00138b44:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00138b48:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_00138b4c:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00138b50:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9gxAniMesh23computeMatrices_SkinnedEfP11gxAnimation @ 00138b54 (arm) */
void fn_00138b54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00138b54:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00138b58:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00138b5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00138b60:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00138b64:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00138b68:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_00138b6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00138b70u)) return;
        }
    }
L_00138b70:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00138b74:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_00138b78:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x20u);
    }
L_00138b7c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00138b80:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00138b84:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00138b88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_00138b8c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_00138b90:;
    {
        cpu->r[14] = 0x00138b94u; fn_001389c8(cpu);
    }
L_00138b94:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00138b98:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00138b9c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00138b78;
        }
    }
L_00138ba0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00138ba4u)) return;
    }
}

/* _ZN9gxAniMesh13CheckSkinningEv @ 00138ba4 (arm) */
void fn_00138ba4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00138ba4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x3cu);
    }
L_00138ba8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00138bac:;
    {
        cpu->r[3] = rd32(0x00138bb4u + + 0x94u);
    }
L_00138bb0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00138bb4:;
    {
        wr8(cpu->r[0] + + 0x48u, cpu->r[1]);
    }
L_00138bb8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00138bc0u, cpu->r[3], 0, 0);
    }
L_00138bbc:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00138bc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00138c00;
        }
    }
L_00138bc4:;
    {
        cpu->r[1] = rd32(0x00138bccu + + 0x80u);
    }
L_00138bc8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00138bcc:;
    {
        cpu->r[4] = rd32(0x00138bd4u + + 0x7cu);
    }
L_00138bd0:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00138bd4:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00138bd8:;
    {
        cpu->r[1] = rd32(0x00138be0u + + 0x74u);
    }
L_00138bdc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00138be0:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_00138be4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00138be8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_00138bec:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00138bf0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_00138bf4:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_00138bf8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00138bfc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00138c00:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x30u);
    }
L_00138c04:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00138c08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00138bc4;
        }
    }
L_00138c0c:;
    {
        cpu->r[1] = rd32(0x00138c14u + + 0x44u);
    }
L_00138c10:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00138c14:;
    {
        cpu->r[4] = rd32(0x00138c1cu + + 0x40u);
    }
L_00138c18:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00138c1c:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00138c20:;
    {
        cpu->r[1] = rd32(0x00138c28u + + 0x38u);
    }
L_00138c24:;
    {
        wr8(cpu->r[0] + + 0x48u, cpu->r[2]);
    }
L_00138c28:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_00138c2c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00138c30:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_00138c34:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00138c38:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_00138c3c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_00138c40:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00138c44:;
    {
        goto L_00138bf8;
    }
}

/* _ZN10gxAniDList18CountNumPrimitivesEv @ 00138c64 (arm) */
void fn_00138c64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00138c64:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x2cu);
    }
L_00138c68:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_00138c6c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00138c70:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00138c74:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00138cac;
        }
    }
L_00138c78:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x34u);
    }
L_00138c7c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00138c80:;
    {
        cpu->r[5] = 0x00005556u;
    }
L_00138c84:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x30u);
    }
L_00138c88:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 1);
    }
L_00138c8c:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x5555u << 16);
    }
L_00138c90:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00138c94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00138cb4;
        }
    }
L_00138c98:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
    }
L_00138c9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00138cdc;
        }
    }
L_00138ca0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00138ca4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00138ca8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00138ca0;
        }
    }
L_00138cac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_00138cb0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00138cb4:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x4u);
    }
L_00138cb8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00138cbc:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        cpu->r[1] = rd32(cpu->r[2]);
        cpu->r[2] = wb_tmp;
    }
L_00138cc0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00138cc4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 0);
    }
L_00138cc8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[5] * (int64_t)(int32_t)cpu->r[1]; cpu->r[6] = (uint32_t)v; cpu->r[4] = (uint32_t)(v >> 32); }
    }
L_00138ccc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[4], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_00138cd0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00138cd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00138cb4;
        }
    }
L_00138cd8:;
    {
        goto L_00138cac;
    }
L_00138cdc:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x4u);
    }
L_00138ce0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00138ce4:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        cpu->r[1] = rd32(cpu->r[2]);
        cpu->r[2] = wb_tmp;
    }
L_00138ce8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00138cec:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 0);
    }
L_00138cf0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 0);
    }
L_00138cf4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00138cf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00138cac;
        }
    }
L_00138cfc:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x4u);
    }
L_00138d00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00138d04:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        cpu->r[1] = rd32(cpu->r[2]);
        cpu->r[2] = wb_tmp;
    }
L_00138d08:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00138d0c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 0);
    }
L_00138d10:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 0);
    }
L_00138d14:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00138d18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00138cdc;
        }
    }
L_00138d1c:;
    {
        goto L_00138cac;
    }
}

/* _ZN10gxAniDList10DeStripifyEv @ 00138d20 (arm) */
void fn_00138d20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00138d20:;
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
L_00138d24:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_00138d28:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_00138d2c:;
    {
        cpu->r[14] = 0x00138d30u; fn_00138c64(cpu);
    }
L_00138d30:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00138d34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00138d38:;
    {
        wr32(cpu->r[1] + + 0x24u, cpu->r[0]);
    }
L_00138d3c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00138d40:;
    {
        cpu->r[14] = 0x00138d44u; imp__Znaj(cpu); /* _Znaj */
    }
L_00138d44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00138d48:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_00138d4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00138ea0;
        }
    }
L_00138d50:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00138d54:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x2cu);
    }
L_00138d58:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00138d5c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_00138d60:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00138f3c;
        }
    }
L_00138d64:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00138d68:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00138d6c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00138d70:;
    {
        cpu->r[1] = 0x00005556u;
    }
L_00138d74:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x5555u << 16);
    }
L_00138d78:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00138d7c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x30u);
    }
L_00138d80:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_00138d84:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x34u);
    }
L_00138d88:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_00138d8c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00138d90:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00138d94:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00138d98:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00138d9c:;
    {
        cpu->r[11] = rd32(cpu->r[3] + + 0x28u);
    }
L_00138da0:;
    {
        goto L_00138dc8;
    }
L_00138da4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000005u, 1, 1);
    }
L_00138da8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00138ea8;
        }
    }
L_00138dac:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00138db0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00138db4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x8u);
    }
L_00138db8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00138dbc:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00138dc0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00138dc4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00138e60;
        }
    }
L_00138dc8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x4u);
    }
L_00138dcc:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[5] = v1;
    }
L_00138dd0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 1);
    }
L_00138dd4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_00138dd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00138da4;
        }
    }
L_00138ddc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00138de0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[5]; cpu->r[1] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_00138de4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[5], 1, 31u, &shc), 1, 0);
    }
L_00138de8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00138dec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00138dac;
        }
    }
L_00138df0:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[6] = v;
    }
L_00138df4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], cpu->r[0], 0, 0);
    }
L_00138df8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_00138dfc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x10u);
    }
L_00138e00:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[11], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00138e04:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00138e08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_00138e0c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00138e10:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00138e14:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00138e18:;
    {
        uint32_t wb_tmp = cpu->r[1] + cpu->r[2];
        cpu->r[7] = rd16(cpu->r[1] + cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_00138e1c:;
    {
        uint32_t wb_tmp = cpu->r[3] + cpu->r[2];
        wr16(cpu->r[3] + cpu->r[2], cpu->r[7]);
        cpu->r[3] = wb_tmp;
    }
L_00138e20:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000006u, 0, 0);
    }
L_00138e24:;
    {
        cpu->r[7] = rd16(cpu->r[1] + + 0x2u);
    }
L_00138e28:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_00138e2c:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[7]);
    }
L_00138e30:;
    {
        cpu->r[1] = rd16(cpu->r[1] + + 0x4u);
    }
L_00138e34:;
    {
        wr16(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_00138e38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00138e10;
        }
    }
L_00138e3c:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00138e40:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_00138e44:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x8u);
    }
L_00138e48:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
    }
L_00138e4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00138e50:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00138e54:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00138e58:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00138e5c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00138dc8;
        }
    }
L_00138e60:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_00138e64:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00138e68:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00138e6c:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_00138e70:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00138e74:;
    {
        wr32(cpu->r[7] + + 0x34u, cpu->r[3]);
    }
L_00138e78:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00138e7c:;
    {
        wr32(cpu->r[7] + + 0x2cu, cpu->r[3]);
    }
L_00138e80:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[10]);
    }
L_00138e84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00138e94;
        }
    }
L_00138e88:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00138e8c:;
    {
        cpu->r[14] = 0x00138e90u; fn_0018ba60(cpu);
    }
L_00138e90:;
    {
        wr32(cpu->r[7] + + 0x28u, cpu->r[4]);
    }
L_00138e94:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00138e98:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00138e9c:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[2]);
    }
L_00138ea0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00138ea4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00138ea8u)) return;
    }
L_00138ea8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00138eac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00138eb0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 1);
    }
L_00138eb4:;
    {
        cpu->r[7] = rd16(cpu->r[11] + cpu->r[2]);
    }
L_00138eb8:;
    {
        cpu->r[1] = rd16(cpu->r[3] + + 0x2u);
    }
L_00138ebc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00138dac;
        }
    }
L_00138ec0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00138ec4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_00138ec8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00138ecc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000003u, 1, 0);
    }
L_00138ed0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[2], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_00138ed4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[9]);
    }
L_00138ed8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00138edc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x00000003u, 0, 0);
    }
L_00138ee0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00138ee4:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_00138ee8:;
    {
        cpu->r[12] = rd16(cpu->r[11] + cpu->r[0]);
    }
L_00138eec:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_00138ef0:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_00138ef4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00138ef8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[5] + cpu->r[6];
        wr16(cpu->r[5] + cpu->r[6], cpu->r[7]);
        cpu->r[5] = wb_tmp;
        }
    }
L_00138efc:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_00138f00:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[4] + cpu->r[6];
        wr16(cpu->r[4] + cpu->r[6], cpu->r[7]);
        cpu->r[4] = wb_tmp;
        }
    }
L_00138f04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_00138f08:;
    {
        if (cond_test(cpu, 1)) {
        wr16(cpu->r[5] + + 0x2u, cpu->r[1]);
        }
    }
L_00138f0c:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00138f10:;
    {
        if (cond_test(cpu, 2)) {
        wr16(cpu->r[4] + + 0x4u, cpu->r[1]);
        }
    }
L_00138f14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_00138f18:;
    {
        if (cond_test(cpu, 1)) {
        wr16(cpu->r[5] + + 0x4u, cpu->r[12]);
        }
    }
L_00138f1c:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_00138f20:;
    {
        if (cond_test(cpu, 2)) {
        wr16(cpu->r[4] + + 0x2u, cpu->r[12]);
        }
    }
L_00138f24:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_00138f28:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000006u, 0, 0);
    }
L_00138f2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00138f30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00138ee8;
        }
    }
L_00138f34:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_00138f38:;
    {
        goto L_00138dac;
    }
L_00138f3c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00138f40:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00138f44:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00138f48:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x30u);
    }
L_00138f4c:;
    {
        cpu->r[11] = rd32(cpu->r[2] + + 0x28u);
    }
L_00138f50:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_00138f54:;
    {
        goto L_00138e60;
    }
}

/* _ZN10gxAniDListD1Ev @ 00138f58 (arm) */
void fn_00138f58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00138f58:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00138f5c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00138f60:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_00138f64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00138f68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00138f78;
        }
    }
L_00138f6c:;
    {
        cpu->r[14] = 0x00138f70u; fn_0018ba60(cpu);
    }
L_00138f70:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00138f74:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_00138f78:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_00138f7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00138f80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00138f90;
        }
    }
L_00138f84:;
    {
        cpu->r[14] = 0x00138f88u; fn_0018ba60(cpu);
    }
L_00138f88:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00138f8c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_00138f90:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_00138f94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00138f98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00138fa8;
        }
    }
L_00138f9c:;
    {
        cpu->r[14] = 0x00138fa0u; fn_0018ba60(cpu);
    }
L_00138fa0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00138fa4:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_00138fa8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00138fac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00138fb0u)) return;
    }
}

/* _ZN10gxAniGroupD1Ev @ 00138fb0 (arm) */
void fn_00138fb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00138fb0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_00138fb4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00138fb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00138fbc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00138fc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013900c;
        }
    }
L_00138fc4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x4u);
    }
L_00138fc8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 6u, &shc); cpu->r[0] = v;
    }
L_00138fcc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 3u, &shc), 1, 0);
    }
L_00138fd0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00138fd4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00138fd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00138fe4;
        }
    }
L_00138fdc:;
    {
        goto L_00138ffc;
    }
L_00138fe0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00138fe4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000038u, 1, 0);
    }
L_00138fe8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00138fec:;
    {
        cpu->r[14] = 0x00138ff0u; fn_00138f58(cpu);
    }
L_00138ff0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x10u);
    }
L_00138ff4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_00138ff8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00138fe0;
        }
    }
L_00138ffc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_00139000:;
    {
        cpu->r[14] = 0x00139004u; fn_0018ba60(cpu);
    }
L_00139004:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00139008:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_0013900c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00139010:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00139014u)) return;
    }
}

/* _ZN10gxAniGroupD2Ev @ 00139014 (arm) */
void fn_00139014(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00139014:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_00139018:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013901c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00139020:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00139024:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00139070;
        }
    }
L_00139028:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x4u);
    }
L_0013902c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 6u, &shc); cpu->r[0] = v;
    }
L_00139030:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 3u, &shc), 1, 0);
    }
L_00139034:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00139038:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0013903c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00139048;
        }
    }
L_00139040:;
    {
        goto L_00139060;
    }
L_00139044:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00139048:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000038u, 1, 0);
    }
L_0013904c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00139050:;
    {
        cpu->r[14] = 0x00139054u; fn_00138f58(cpu);
    }
L_00139054:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x10u);
    }
L_00139058:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_0013905c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00139044;
        }
    }
L_00139060:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_00139064:;
    {
        cpu->r[14] = 0x00139068u; fn_0018ba60(cpu);
    }
L_00139068:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013906c:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_00139070:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00139074:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00139078u)) return;
    }
}

/* _ZN10gxAniDListD2Ev @ 00139078 (arm) */
void fn_00139078(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00139078:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0013907c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00139080:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_00139084:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00139088:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00139098;
        }
    }
L_0013908c:;
    {
        cpu->r[14] = 0x00139090u; fn_0018ba60(cpu);
    }
L_00139090:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00139094:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_00139098:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_0013909c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001390a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001390b0;
        }
    }
L_001390a4:;
    {
        cpu->r[14] = 0x001390a8u; fn_0018ba60(cpu);
    }
L_001390a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001390ac:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001390b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_001390b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001390b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001390c8;
        }
    }
L_001390bc:;
    {
        cpu->r[14] = 0x001390c0u; fn_0018ba60(cpu);
    }
L_001390c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001390c4:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_001390c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001390cc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001390d0u)) return;
    }
}

/* _ZN9gxAniMesh20prepareMeshRenderingEv @ 001390d0 (arm) */
void fn_001390d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001390d0:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001390d4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001390d8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001390dc:;
    {
        cpu->r[14] = 0x001390e0u; fn_00138ba4(cpu);
    }
L_001390e0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x34u);
    }
L_001390e4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4]);
    }
L_001390e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001390ec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00139180;
        }
    }
L_001390f0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
    }
L_001390f4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x28u);
    }
L_001390f8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001390fc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00139180;
        }
    }
L_00139100:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x30u);
    }
L_00139104:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00139108:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00139174;
        }
    }
L_0013910c:;
    {
        cpu->r[0] = rd16(cpu->r[4]);
    }
L_00139110:;
    {
        cpu->r[7] = 0x0000004cu;
    }
L_00139114:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
    }
L_00139118:;
    {
        cpu->r[3] = (uint32_t)((int32_t)(int16_t)(cpu->r[0] & 0xffff) * (int32_t)(int16_t)(cpu->r[7] & 0xffff));
    }
L_0013911c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x2cu);
    }
L_00139120:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_00139124:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[1] + cpu->r[3]);
    }
L_00139128:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013912c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001391b8;
        }
    }
L_00139130:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x2u);
    }
L_00139134:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00139138:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0013913c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00139168;
        }
    }
L_00139140:;
    {
        goto L_001391b8;
    }
L_00139144:;
    {
        uint32_t wb_tmp = cpu->r[4] + + 0x8cu;
        cpu->r[0] = rd16(cpu->r[4] + + 0x8cu);
        cpu->r[4] = wb_tmp;
    }
L_00139148:;
    {
        cpu->r[2] = (uint32_t)((int32_t)(int16_t)(cpu->r[0] & 0xffff) * (int32_t)(int16_t)(cpu->r[7] & 0xffff));
    }
L_0013914c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_00139150:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[1] + cpu->r[2]);
    }
L_00139154:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00139158:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001391b8;
        }
    }
L_0013915c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[12] + + 0x2u);
    }
L_00139160:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00139164:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001391b8;
        }
    }
L_00139168:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0013916c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00139170:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00139144;
        }
    }
L_00139174:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00139178:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0013917c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00139180u)) return;
    }
L_00139180:;
    {
        cpu->r[1] = rd32(0x00139188u + + 0x38u);
    }
L_00139184:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00139188:;
    {
        cpu->r[2] = rd32(0x00139190u + + 0x34u);
    }
L_0013918c:;
    {
        cpu->r[14] = 0x00000261u;
    }
L_00139190:;
    {
        cpu->r[3] = rd32(0x00139198u + + 0x30u);
    }
L_00139194:;
    {
        cpu->r[1] = add_flags(cpu, 0x0013919cu, cpu->r[1], 0, 0);
    }
L_00139198:;
    {
        cpu->r[12] = rd32(0x001391a0u + + 0x2cu);
    }
L_0013919c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001391a4u, cpu->r[2], 0, 0);
    }
L_001391a0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001391a8u, cpu->r[3], 0, 0);
    }
L_001391a4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001391a8:;
    {
        cpu->r[12] = add_flags(cpu, 0x001391b0u, cpu->r[12], 0, 0);
    }
L_001391ac:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001391b0:;
    {
        cpu->r[14] = 0x001391b4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001391b4:;
    {
        goto L_00139100;
    }
L_001391b8:;
    {
        wr16(cpu->r[5] + + 0x56u, cpu->r[0]);
    }
L_001391bc:;
    {
        goto L_00139174;
    }
}

/* _ZN9gxAniMesh22computeLocalMtx_StaticEifP11gxAnimation @ 001391d0 (arm) */
void fn_001391d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001391d0:;
    {
        cpu->r[1] = rd32(0x001391d8u + + 0x3cu);
    }
L_001391d4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001391d8:;
    {
        cpu->r[12] = rd32(0x001391e0u + + 0x38u);
    }
L_001391dc:;
    {
        cpu->r[2] = rd32(0x001391e4u + + 0x38u);
    }
L_001391e0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001391e8u, cpu->r[1], 0, 0);
    }
L_001391e4:;
    {
        cpu->r[3] = rd32(0x001391ecu + + 0x34u);
    }
L_001391e8:;
    {
        cpu->r[12] = add_flags(cpu, 0x001391f0u, cpu->r[12], 0, 0);
    }
L_001391ec:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_001391f0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001391f4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001391fcu, cpu->r[2], 0, 0);
    }
L_001391f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00139200u, cpu->r[3], 0, 0);
    }
L_001391fc:;
    {
        cpu->r[14] = 0x00000255u;
    }
L_00139200:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000018u, 0, 0);
    }
L_00139204:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00139208:;
    {
        cpu->r[14] = 0x0013920cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0013920c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00139210:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00139214u)) return;
    }
}

/* _ZN9gxAniMesh21computeMeshMtx_StaticEifP11gxAnimation @ 00139224 (arm) */
void fn_00139224(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00139224:;
    {
        cpu->r[1] = rd32(0x0013922cu + + 0x3cu);
    }
L_00139228:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0013922c:;
    {
        cpu->r[12] = rd32(0x00139234u + + 0x38u);
    }
L_00139230:;
    {
        cpu->r[2] = rd32(0x00139238u + + 0x38u);
    }
L_00139234:;
    {
        cpu->r[1] = add_flags(cpu, 0x0013923cu, cpu->r[1], 0, 0);
    }
L_00139238:;
    {
        cpu->r[3] = rd32(0x00139240u + + 0x34u);
    }
L_0013923c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00139244u, cpu->r[12], 0, 0);
    }
L_00139240:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_00139244:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00139248:;
    {
        cpu->r[2] = add_flags(cpu, 0x00139250u, cpu->r[2], 0, 0);
    }
L_0013924c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00139254u, cpu->r[3], 0, 0);
    }
L_00139250:;
    {
        cpu->r[14] = 0x00000236u;
    }
L_00139254:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000030u, 0, 0);
    }
L_00139258:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0013925c:;
    {
        cpu->r[14] = 0x00139260u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00139260:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00139264:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00139268u)) return;
    }
}

/* _ZN9gxAniMesh4GetZEv @ 00139278 (arm) */
void fn_00139278(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00139278:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x56u);
    }
L_0013927c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00139280:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00139284:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00139288:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013928c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001392a0;
        }
    }
L_00139290:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_00139294:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x28u);
    }
L_00139298:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0013929c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001392dc;
        }
    }
L_001392a0:;
    {
        cpu->r[1] = rd32(0x001392a8u + + 0x4cu);
    }
L_001392a4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001392a8:;
    {
        cpu->r[12] = rd32(0x001392b0u + + 0x48u);
    }
L_001392ac:;
    {
        cpu->r[14] = 0x000000f5u;
    }
L_001392b0:;
    {
        cpu->r[2] = rd32(0x001392b8u + + 0x44u);
    }
L_001392b4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001392bcu, cpu->r[1], 0, 0);
    }
L_001392b8:;
    {
        cpu->r[3] = rd32(0x001392c0u + + 0x40u);
    }
L_001392bc:;
    {
        cpu->r[12] = add_flags(cpu, 0x001392c4u, cpu->r[12], 0, 0);
    }
L_001392c0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001392c8u, cpu->r[2], 0, 0);
    }
L_001392c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000048u, 0, 0);
    }
L_001392c8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001392d0u, cpu->r[3], 0, 0);
    }
L_001392cc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001392d0:;
    {
        cpu->r[14] = 0x001392d4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001392d4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x56u);
    }
L_001392d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001392dc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x2cu);
    }
L_001392e0:;
    {
        cpu->r[1] = 0x0000004cu;
    }
L_001392e4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_001392e8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x30u);
    }
L_001392ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001392f0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001392f4u)) return;
    }
}

/* _ZN9gxAniMesh23computeLocalMtx_SkinnedEifP11gxAnimation @ 00139304 (arm) */
void fn_00139304(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00139304:;
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
L_00139308:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013930c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x38u);
    }
L_00139310:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 5u, &shc); cpu->r[5] = v;
    }
L_00139314:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_00139318:;
    {
        uint32_t v = cpu->r[1] & 0x0000001fu; cpu->r[12] = v;
    }
L_0013931c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00139320:;
    {
        uint32_t v = shifter(cpu->r[6], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[6] = v;
    }
L_00139324:;
    {
        { uint32_t v = cpu->r[6] & cpu->r[0]; set_nz(cpu, v); }
    }
L_00139328:;
    {
        if (cond_test(cpu, 2)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0013932cu)) return;
        }
    }
L_0013932c:;
    {
        cpu->r[8] = 0x0000008cu;
    }
L_00139330:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x34u);
    }
L_00139334:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_00139338:;
    {
        uint32_t v = cpu->r[8] * cpu->r[1]; cpu->r[8] = v;
    }
L_0013933c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_00139340:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[7] + cpu->r[8]);
    }
L_00139344:;
    {
        cpu->r[14] = 0x00139348u; fn_0013d060(cpu);
    }
L_00139348:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0013934c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[7] + cpu->r[8]);
    }
L_00139350:;
    {
        cpu->r[12] = 0x0000004cu;
    }
L_00139354:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_00139358:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], 0x00000048u, 0, 0);
    }
L_0013935c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x2cu);
    }
L_00139360:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1] + cpu->r[3]; cpu->r[1] = v;
    }
L_00139364:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00139368:;
    {
        cpu->r[14] = 0x0013936cu; fn_00153568(cpu);
    }
L_0013936c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_00139370:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00139374:;
    {
        uint32_t v = cpu->r[2] | cpu->r[6]; cpu->r[6] = v;
    }
L_00139378:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_0013937c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00139380u)) return;
    }
}

/* _ZN9gxAniMesh22computeMatrices_StaticEfP11gxAnimation @ 00139380 (arm) */
void fn_00139380(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00139380:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x34u);
    }
L_00139384:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00139388:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013938c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00139390:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[12]);
    }
L_00139394:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00139398:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_0013939c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001393a0:;
    {
        cpu->r[14] = 0x001393a4u; fn_0013d060(cpu);
    }
L_001393a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001393a8:;
    {
        cpu->r[2] = 0x0000004cu;
    }
L_001393ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x40u);
    }
L_001393b0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x2cu);
    }
L_001393b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000b8u, 0, 0);
    }
L_001393b8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5] + cpu->r[3]; cpu->r[5] = v;
    }
L_001393bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001393c0:;
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
L_001393c4:;
    {
        return fn_00153624(cpu);
    }
}

/* _ZN9gxAniMesh6renderEPPP7TexturePh @ 001393c8 (arm) */
void fn_001393c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001393c8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001393cc:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001393d0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001393d4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001393d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001393dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001393e0u)) return;
        }
    }
L_001393e0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001393e4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001393e8:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_001393ec:;
    {
        goto L_00139400;
    }
L_001393f0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001393f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_001393f8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000010u, 0, 0);
    }
L_001393fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00139438;
        }
    }
L_00139400:;
    {
        cpu->r[3] = rd8(cpu->r[7] + cpu->r[4]);
    }
L_00139404:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00139408:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013940c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001393f0;
        }
    }
L_00139410:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x20u);
    }
L_00139414:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00139418:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013941c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000010u, 0, 0);
    }
L_00139420:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_00139424:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_00139428:;
    {
        cpu->r[14] = 0x0013942cu; fn_0013e338(cpu);
    }
L_0013942c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x1cu);
    }
L_00139430:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_00139434:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00139400;
        }
    }
L_00139438:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0013943cu)) return;
    }
}

/* _ZN9gxAniMesh12loadMatricesEP8LZMAFileP13gxGlobalPivot @ 0013943c (arm) */
void fn_0013943c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013943c:;
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
L_00139440:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00139444:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00139448:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0013944c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00139450:;
    {
        cpu->r[14] = 0x00139454u; fn_000fc650(cpu);
    }
L_00139454:;
    {
        cpu->r[6] = 0x0000008cu;
    }
L_00139458:;
    {
        cpu->r[8] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_0013945c:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[8]);
    }
L_00139460:;
    {
        uint32_t v = cpu->r[6] * cpu->r[8]; cpu->r[0] = v;
    }
L_00139464:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00139468:;
    {
        cpu->r[14] = 0x0013946cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0013946c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00139470:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00139474:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_00139478:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013949c;
        }
    }
L_0013947c:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_00139480:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00139484:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00139488:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0013948c:;
    {
        cpu->r[14] = 0x00139490u; fn_00140d5c(cpu);
    }
L_00139490:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_00139494:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000008cu, 0, 0);
    }
L_00139498:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00139484;
        }
    }
L_0013949c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001394a0:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[10]);
    }
L_001394a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001394a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001394b4;
        }
    }
L_001394ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001394b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001394b4u)) return;
    }
L_001394b4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_001394b8:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 5u, &shc); cpu->r[0] = v;
    }
L_001394bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001394c0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001394c4:;
    {
        cpu->r[14] = 0x001394c8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001394c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001394cc:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[0]);
    }
L_001394d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x0000000au);
        }
    }
L_001394d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001394ac;
        }
    }
L_001394d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_001394dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001394e0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001395a0;
        }
    }
L_001394e4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001394e8:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_001394ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001394f0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001394f4:;
    {
        cpu->r[14] = 0x001394f8u; fn_000fc650(cpu);
    }
L_001394f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_001394fc:;
    {
        wr16(cpu->r[3] + cpu->r[6], cpu->r[0]);
    }
L_00139500:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00139504:;
    {
        cpu->r[14] = 0x00139508u; fn_000fc5fc(cpu);
    }
L_00139508:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0013950c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00139510:;
    {
        cpu->r[14] = 0x00139514u; fn_000fc5fc(cpu);
    }
L_00139514:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00139518:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013951c:;
    {
        cpu->r[14] = 0x00139520u; fn_000fc5fc(cpu);
    }
L_00139520:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_00139524:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00139528:;
    {
        cpu->r[14] = 0x0013952cu; fn_000fc5fc(cpu);
    }
L_0013952c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00139530:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00139534:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00139538:;
    {
        cpu->r[14] = 0x0013953cu; fn_000fc5fc(cpu);
    }
L_0013953c:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00139540:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00139544:;
    {
        cpu->r[14] = 0x00139548u; fn_000fc5fc(cpu);
    }
L_00139548:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0013954c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00139550:;
    {
        cpu->r[14] = 0x00139554u; fn_000fc5fc(cpu);
    }
L_00139554:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x34u);
    }
L_00139558:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0013955c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00139560:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[6], 0, 0);
    }
L_00139564:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00139568:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_0013956c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00139570:;
    {
        cpu->r[14] = 0x00139574u; fn_00153678(cpu);
    }
L_00139574:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x34u);
    }
L_00139578:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013957c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00139580:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_00139584:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00139588:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0013958c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000008cu, 0, 0);
    }
L_00139590:;
    {
        cpu->r[14] = 0x00139594u; fn_0015364c(cpu);
    }
L_00139594:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_00139598:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0013959c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001394ec;
        }
    }
L_001395a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001395a4:;
    {
        cpu->r[14] = 0x001395a8u; fn_000fc650(cpu);
    }
L_001395a8:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_001395ac:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_001395b0:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001395b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = 0x00000001u;
        }
    }
L_001395b8:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001395bc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
        }
    }
L_001395c0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
        }
    }
L_001395c4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001395c8:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 8u, &shc); cpu->r[0] = v;
    }
L_001395cc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[8], 2, 2u, &shc), 1, 0);
    }
L_001395d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001395d4:;
    {
        cpu->r[14] = 0x001395d8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001395d8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001395dc:;
    {
        cpu->r[3] = 0x000000fcu;
    }
L_001395e0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001395e4:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_001395e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013960c;
        }
    }
L_001395ec:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_001395f0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001395f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001395f8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001395fc:;
    {
        cpu->r[14] = 0x00139600u; fn_00140cb4(cpu);
    }
L_00139600:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_00139604:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x000000fcu, 0, 0);
    }
L_00139608:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001395f4;
        }
    }
L_0013960c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00139610:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[10]);
    }
L_00139614:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_00139618:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001394ac;
        }
    }
L_0013961c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00139620:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 5u, &shc); cpu->r[0] = v;
    }
L_00139624:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00139628:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0013962c:;
    {
        cpu->r[14] = 0x00139630u; imp__Znaj(cpu); /* _Znaj */
    }
L_00139630:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00139634:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_00139638:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000015u);
        }
    }
L_0013963c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001394ac;
        }
    }
L_00139640:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00139644:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00139724;
        }
    }
L_00139648:;
    {
        cpu->r[3] = rd32(0x00139650u + + 0xdcu);
    }
L_0013964c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00139650:;
    {
        cpu->r[10] = rd32(0x00139658u + + 0xd8u);
    }
L_00139654:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_00139658:;
    {
        cpu->r[9] = rd32(0x00139660u + + 0xd4u);
    }
L_0013965c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00139664u, cpu->r[3], 0, 0);
    }
L_00139660:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000050u, 0, 0);
    }
L_00139664:;
    {
        cpu->r[10] = add_flags(cpu, 0x0013966cu, cpu->r[10], 0, 0);
    }
L_00139668:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0013966c:;
    {
        cpu->r[9] = add_flags(cpu, 0x00139674u, cpu->r[9], 0, 0);
    }
L_00139670:;
    {
        cpu->r[3] = rd32(0x00139678u + + 0xc0u);
    }
L_00139674:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013967cu, cpu->r[3], 0, 0);
    }
L_00139678:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0013967c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00139680:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_00139684:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00139724;
        }
    }
L_00139688:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013968c:;
    {
        cpu->r[14] = 0x00139690u; fn_000fc678(cpu);
    }
L_00139690:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_00139694:;
    {
        cpu->r[7] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_00139698:;
    {
        wr32(cpu->r[3] + cpu->r[6], cpu->r[7]);
    }
L_0013969c:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000001du, 1, 1);
    }
L_001396a0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001396fc;
        }
    }
L_001396a4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001396a8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001396f0;
        }
    }
L_001396ac:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_001396b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001396b4:;
    {
        cpu->r[14] = 0x001396b8u; fn_000fc650(cpu);
    }
L_001396b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_001396bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[11], 2, 1u, &shc), 0, 0);
    }
L_001396c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_001396c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_001396c8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001396cc:;
    {
        wr16(cpu->r[2] + + 0x4u, cpu->r[0]);
    }
L_001396d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001396d4:;
    {
        cpu->r[14] = 0x001396d8u; fn_000fc5fc(cpu);
    }
L_001396d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], 0x00000010u, 0, 0);
    }
L_001396dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001396e0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001396e4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[11], 1, 1);
    }
L_001396e8:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[0]);
    }
L_001396ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001396b0;
        }
    }
L_001396f0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001396f4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x000000fcu, 0, 0);
    }
L_001396f8:;
    {
        goto L_0013967c;
    }
L_001396fc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00139700:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00139704:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00139708:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013970c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00139710:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00139714:;
    {
        cpu->r[12] = 0x000001a8u;
    }
L_00139718:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0013971c:;
    {
        cpu->r[14] = 0x00139720u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00139720:;
    {
        goto L_001396a4;
    }
L_00139724:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00139728:;
    {
        goto L_001394ac;
    }
}

/* _ZN10gxAniGroup9GetShaderEv @ 0013973c (arm) */
void fn_0013973c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013973c:;
    {
        cpu->r[3] = rd32(0x00139744u + + 0x20u);
    }
L_00139740:;
    {
        cpu->r[1] = rd32(0x00139748u + + 0x20u);
    }
L_00139744:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013974cu, cpu->r[3], 0, 0);
    }
L_00139748:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013974c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00139750:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x8u);
    }
L_00139754:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00139758:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_0013975c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00139760:;
    {
        return fn_00147cd8(cpu);
    }
}

/* _ZN10gxAniGroupC1Ev @ 0013976c (arm) */
void fn_0013976c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013976c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00139770:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00139774:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00139778:;
    {
        cpu->r[1] = 0x000000ffu;
    }
L_0013977c:;
    {
        wr8(cpu->r[4] + + 0x15u, cpu->r[5]);
    }
L_00139780:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_00139784:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_00139788:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000016u, 0, 0);
    }
L_0013978c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_00139790:;
    {
        wr16(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_00139794:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_00139798:;
    {
        cpu->r[14] = 0x0013979cu; imp_memset(cpu); /* memset */
    }
L_0013979c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001397a4u + + 0xcu);
    }
L_001397a0:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_001397a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001397a8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001397ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001397b0u)) return;
    }
}

/* _ZN9gxAniMesh12createGroupsEi @ 001397b4 (arm) */
void fn_001397b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001397b4:;
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
L_001397b8:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001397bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001397c0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001397c4:;
    {
        wr32(cpu->r[10] + + 0x1cu, cpu->r[1]);
    }
L_001397c8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[0] = v;
    }
L_001397cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001397d0:;
    {
        cpu->r[14] = 0x001397d4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001397d4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001397d8:;
    {
        cpu->r[3] = 0x00000030u;
    }
L_001397dc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001397e0:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001397e4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001397e8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[6]);
    }
L_001397ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00139810;
        }
    }
L_001397f0:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_001397f4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001397f8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001397fc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00139800:;
    {
        cpu->r[14] = 0x00139804u; fn_0013976c(cpu);
    }
L_00139804:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_00139808:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_0013980c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001397f8;
        }
    }
L_00139810:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00139814:;
    {
        wr32(cpu->r[10] + + 0x20u, cpu->r[8]);
    }
L_00139818:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0013981c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00139820u)) return;
        }
    }
L_00139820:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x1cu);
    }
L_00139824:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00139828:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00139844;
        }
    }
L_0013982c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00139830:;
    {
        wr8(cpu->r[7] + + 0x35u, cpu->r[3]);
    }
L_00139834:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00139838:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0013983c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000030u, 0, 0);
    }
L_00139840:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00139830;
        }
    }
L_00139844:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00139848:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0013984cu)) return;
    }
}

/* _ZN10gxAniGroupC2Ev @ 0013984c (arm) */
void fn_0013984c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013984c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00139850:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00139854:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00139858:;
    {
        cpu->r[1] = 0x000000ffu;
    }
L_0013985c:;
    {
        wr8(cpu->r[4] + + 0x15u, cpu->r[5]);
    }
L_00139860:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_00139864:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_00139868:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000016u, 0, 0);
    }
L_0013986c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_00139870:;
    {
        wr16(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_00139874:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_00139878:;
    {
        cpu->r[14] = 0x0013987cu; imp_memset(cpu); /* memset */
    }
L_0013987c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00139884u + + 0xcu);
    }
L_00139880:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_00139884:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00139888:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013988c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00139890u)) return;
    }
}

/* _ZN10gxAniDListC1Ev @ 00139894 (arm) */
void fn_00139894(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00139894:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00139898:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013989c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001398a0:;
    {
        cpu->r[1] = 0x000000ffu;
    }
L_001398a4:;
    {
        wr8(cpu->r[4], cpu->r[5]);
    }
L_001398a8:;
    {
        cpu->r[2] = 0x00000012u;
    }
L_001398ac:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_001398b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_001398b4:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_001398b8:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_001398bc:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001398c0:;
    {
        cpu->r[14] = 0x001398c4u; imp_memset(cpu); /* memset */
    }
L_001398c4:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[5]);
    }
L_001398c8:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[5]);
    }
L_001398cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001398d0:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[5]);
    }
L_001398d4:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[5]);
    }
L_001398d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001398dcu)) return;
    }
}

/* _ZN10gxAniDListC2Ev @ 001398dc (arm) */
void fn_001398dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001398dc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001398e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001398e4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001398e8:;
    {
        cpu->r[1] = 0x000000ffu;
    }
L_001398ec:;
    {
        wr8(cpu->r[4], cpu->r[5]);
    }
L_001398f0:;
    {
        cpu->r[2] = 0x00000012u;
    }
L_001398f4:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_001398f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_001398fc:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_00139900:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_00139904:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_00139908:;
    {
        cpu->r[14] = 0x0013990cu; imp_memset(cpu); /* memset */
    }
L_0013990c:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[5]);
    }
L_00139910:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[5]);
    }
L_00139914:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00139918:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[5]);
    }
L_0013991c:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[5]);
    }
L_00139920:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00139924u)) return;
    }
}

/* _ZN10gxAniDList4loadEP8LZMAFileP13GXVtxDescListi @ 00139924 (arm) */
void fn_00139924(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00139924:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00139928:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013992c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00139930:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00139934:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00139938:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0013993c:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_00139940:;
    {
        cpu->r[14] = 0x00139944u; fn_000fc678(cpu);
    }
L_00139944:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00139948:;
    {
        wr8(cpu->r[4], cpu->r[0]);
    }
L_0013994c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000009u, 1, 1);
    }
L_00139950:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00139a08;
        }
    }
L_00139954:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00139958:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00139980;
        }
    }
L_0013995c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00139960:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00139964:;
    {
        cpu->r[14] = 0x00139968u; fn_000fc650(cpu);
    }
L_00139968:;
    {
        cpu->r[2] = rd8(cpu->r[4]);
    }
L_0013996c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_00139970:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00139974:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_00139978:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[0]);
    }
L_0013997c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00139960;
        }
    }
L_00139980:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00139984:;
    {
        cpu->r[14] = 0x00139988u; fn_000fc628(cpu);
    }
L_00139988:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0013998c:;
    {
        uint32_t v = cpu->r[0] & 0x0000001fu; cpu->r[0] = v;
        set_nz(cpu, v);
    }
L_00139990:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = sub_flags(cpu, 0x00000020u, cpu->r[0], 1, 0);
        }
    }
L_00139994:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_00139998:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_0013999c:;
    {
        cpu->r[14] = 0x001399a0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001399a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001399a4:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_001399a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001399ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00139a00;
        }
    }
L_001399b0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_001399b4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001399b8:;
    {
        cpu->r[14] = 0x001399bcu; imp_memset(cpu); /* memset */
    }
L_001399bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_001399c0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001399c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001399c8:;
    {
        cpu->r[14] = 0x001399ccu; fn_000fc5f4(cpu);
    }
L_001399cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_001399d0:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001399d4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001399d8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001399dc:;
    {
        cpu->r[14] = 0x001399e0u; fn_0014129c(cpu);
    }
L_001399e0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_001399e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_001399e8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001399ec:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001399f0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000020u, 0, 0);
    }
L_001399f4:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_001399f8:;
    {
        cpu->r[14] = 0x001399fcu; fn_00141188(cpu);
    }
L_001399fc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00139a00:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00139a04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00139a08u)) return;
    }
L_00139a08:;
    {
        cpu->r[1] = rd32(0x00139a10u + + 0x34u);
    }
L_00139a0c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00139a10:;
    {
        cpu->r[12] = rd32(0x00139a18u + + 0x30u);
    }
L_00139a14:;
    {
        cpu->r[14] = 0x0000003eu;
    }
L_00139a18:;
    {
        cpu->r[2] = rd32(0x00139a20u + + 0x2cu);
    }
L_00139a1c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00139a24u, cpu->r[1], 0, 0);
    }
L_00139a20:;
    {
        cpu->r[3] = rd32(0x00139a28u + + 0x28u);
    }
L_00139a24:;
    {
        cpu->r[12] = add_flags(cpu, 0x00139a2cu, cpu->r[12], 0, 0);
    }
L_00139a28:;
    {
        cpu->r[2] = add_flags(cpu, 0x00139a30u, cpu->r[2], 0, 0);
    }
L_00139a2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_00139a30:;
    {
        cpu->r[3] = add_flags(cpu, 0x00139a38u, cpu->r[3], 0, 0);
    }
L_00139a34:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00139a38:;
    {
        cpu->r[14] = 0x00139a3cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00139a3c:;
    {
        cpu->r[0] = rd8(cpu->r[4]);
    }
L_00139a40:;
    {
        goto L_00139954;
    }
}

/* _ZN10gxAniGroup12loadTopologyEP8LZMAFilei @ 00139a54 (arm) */
void fn_00139a54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00139a54:;
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
L_00139a58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00139a5c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00139a60:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00139a64:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00139a68:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_00139a6c:;
    {
        cpu->r[14] = 0x00139a70u; fn_000fc650(cpu);
    }
L_00139a70:;
    {
        wr16(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_00139a74:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00139a78:;
    {
        cpu->r[14] = 0x00139a7cu; fn_000fc678(cpu);
    }
L_00139a7c:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00139a80:;
    {
        wr8(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_00139a84:;
    {
        cpu->r[3] = (uint32_t)((int8_t)cpu->r[3]);
    }
L_00139a88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00139a8c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00139bd0;
        }
    }
L_00139a90:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_00139a94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00139a98:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00139a9c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x18u);
    }
L_00139aa0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x44u);
    }
L_00139aa4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_00139aa8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00139aac:;
    {
        cpu->r[14] = 0x00139ab0u; fn_000fc678(cpu);
    }
L_00139ab0:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00139ab4:;
    {
        wr8(cpu->r[4] + + 0x15u, cpu->r[0]);
    }
L_00139ab8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00139abc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00139ae8;
        }
    }
L_00139ac0:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_00139ac4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00139ac8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00139acc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00139ad0:;
    {
        cpu->r[14] = 0x00139ad4u; fn_000fc650(cpu);
    }
L_00139ad4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x15u);
    }
L_00139ad8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00139adc:;
    {
        wr16(cpu->r[6] + + 0x16u, cpu->r[0]);
    }
L_00139ae0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_00139ae4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00139ac8;
        }
    }
L_00139ae8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00139aec:;
    {
        cpu->r[14] = 0x00139af0u; fn_000fc5fc(cpu);
    }
L_00139af0:;
    {
        cpu->r[9] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xcu);
    }
L_00139af4:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[9], 2, 3u, &shc), cpu->r[9], 1, 0);
    }
L_00139af8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00139afc:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[0]);
    }
L_00139b00:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 3u, &shc); cpu->r[0] = v;
    }
L_00139b04:;
    {
        cpu->r[14] = 0x00139b08u; imp__Znaj(cpu); /* _Znaj */
    }
L_00139b08:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00139b0c:;
    {
        cpu->r[3] = 0x00000038u;
    }
L_00139b10:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00139b14:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[9]);
    }
L_00139b18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00139b3c;
        }
    }
L_00139b1c:;
    {
        cpu->r[6] = cpu->r[10];
    }
L_00139b20:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00139b24:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00139b28:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00139b2c:;
    {
        cpu->r[14] = 0x00139b30u; fn_00139894(cpu);
    }
L_00139b30:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 1);
    }
L_00139b34:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000038u, 0, 0);
    }
L_00139b38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00139b24;
        }
    }
L_00139b3c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00139b40:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[10]);
    }
L_00139b44:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000001u);
        }
    }
L_00139b48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00139ba4;
        }
    }
L_00139b4c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xcu);
    }
L_00139b50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00139b54:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00139bb0;
        }
    }
L_00139b58:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00139b5c:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_00139b60:;
    {
        goto L_00139b74;
    }
L_00139b64:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xcu);
    }
L_00139b68:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00139b6c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00139bb0;
        }
    }
L_00139b70:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x10u);
    }
L_00139b74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00139b78:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00139b7c:;
    {
        cpu->r[14] = 0x00139b80u; fn_001389b8(cpu);
    }
L_00139b80:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00139b84:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00139b88:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00139b8c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
    }
L_00139b90:;
    {
        cpu->r[14] = 0x00139b94u; fn_00139924(cpu);
    }
L_00139b94:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000038u, 0, 0);
    }
L_00139b98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00139b9c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00139b64;
        }
    }
L_00139ba0:;
    {
        cpu->r[3] = (~0x00000002u);
    }
L_00139ba4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00139ba8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00139bac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00139bb0u)) return;
    }
L_00139bb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00139bb4:;
    {
        cpu->r[14] = 0x00139bb8u; fn_0013973c(cpu);
    }
L_00139bb8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00139bbc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x2cu);
    }
L_00139bc0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00139bc4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00139bc8:;
    {
        wr8(cpu->r[4] + + 0x2cu, cpu->r[2]);
    }
L_00139bcc:;
    {
        goto L_00139ba4;
    }
L_00139bd0:;
    {
        cpu->r[1] = rd32(0x00139bd8u + + 0x34u);
    }
L_00139bd4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00139bd8:;
    {
        cpu->r[12] = rd32(0x00139be0u + + 0x30u);
    }
L_00139bdc:;
    {
        cpu->r[14] = 0x00000088u;
    }
L_00139be0:;
    {
        cpu->r[2] = rd32(0x00139be8u + + 0x2cu);
    }
L_00139be4:;
    {
        cpu->r[1] = add_flags(cpu, 0x00139becu, cpu->r[1], 0, 0);
    }
L_00139be8:;
    {
        cpu->r[3] = rd32(0x00139bf0u + + 0x28u);
    }
L_00139bec:;
    {
        cpu->r[12] = add_flags(cpu, 0x00139bf4u, cpu->r[12], 0, 0);
    }
L_00139bf0:;
    {
        cpu->r[2] = add_flags(cpu, 0x00139bf8u, cpu->r[2], 0, 0);
    }
L_00139bf4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000068u, 0, 0);
    }
L_00139bf8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00139c00u, cpu->r[3], 0, 0);
    }
L_00139bfc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00139c00:;
    {
        cpu->r[14] = 0x00139c04u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00139c04:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[4] + + 0x14u);
    }
L_00139c08:;
    {
        goto L_00139a90;
    }
}

/* _ZN9gxAniMesh12loadTopologyEP8LZMAFilei @ 00139c1c (arm) */
void fn_00139c1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00139c1c:;
    {
        cpu->r[13] -= 40u;
        wr32(cpu->r[13] + 0u, cpu->r[3]);
        wr32(cpu->r[13] + 4u, cpu->r[4]);
        wr32(cpu->r[13] + 8u, cpu->r[5]);
        wr32(cpu->r[13] + 12u, cpu->r[6]);
        wr32(cpu->r[13] + 16u, cpu->r[7]);
        wr32(cpu->r[13] + 20u, cpu->r[8]);
        wr32(cpu->r[13] + 24u, cpu->r[9]);
        wr32(cpu->r[13] + 28u, cpu->r[10]);
        wr32(cpu->r[13] + 32u, cpu->r[11]);
        wr32(cpu->r[13] + 36u, cpu->r[14]);
    }
L_00139c20:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_00139c24:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00139c28:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00139c2c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00139c30:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_00139c34:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00139c38:;
    {
        cpu->r[14] = 0x00139c40u;
    }
L_00139c3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00139c40u)) return;
    }
L_00139c40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000065u, 1, 1);
    }
L_00139c44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00139e4c;
        }
    }
L_00139c48:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00139c4c:;
    {
        cpu->r[14] = 0x00139c50u; fn_000fc650(cpu);
    }
L_00139c50:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_00139c54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00139c58:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[1]);
    }
L_00139c5c:;
    {
        cpu->r[14] = 0x00139c60u; fn_001397b4(cpu);
    }
L_00139c60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00139c64:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00139c68:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        uint32_t v8 = rd32(cpu->r[13] + 32u);
        uint32_t v9 = rd32(cpu->r[13] + 36u);
        cpu->r[3] = v0;
        cpu->r[4] = v1;
        cpu->r[5] = v2;
        cpu->r[6] = v3;
        cpu->r[7] = v4;
        cpu->r[8] = v5;
        cpu->r[9] = v6;
        cpu->r[10] = v7;
        cpu->r[11] = v8;
        uint32_t t = v9;
        cpu->r[13] += 40u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00139c6cu)) return;
        }
    }
L_00139c6c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00139c70:;
    {
        cpu->r[14] = 0x00139c74u; fn_000fc678(cpu);
    }
L_00139c74:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00139c78:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[0]);
    }
L_00139c7c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00139c80:;
    {
        cpu->r[14] = 0x00139c84u; fn_000fc678(cpu);
    }
L_00139c84:;
    {
        cpu->r[5] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_00139c88:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00139c8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00139dc8;
        }
    }
L_00139c90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_00139c94:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x58u);
    }
L_00139c98:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_00139c9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_00139ca0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000008u;
        }
    }
L_00139ca4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00139cc0;
        }
    }
L_00139ca8:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_00139cac:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 3u, &shc));
    }
L_00139cb0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00139cb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_00139cb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00139cac;
        }
    }
L_00139cbc:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 3u, &shc); cpu->r[5] = v;
    }
L_00139cc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00139cc4:;
    {
        cpu->r[14] = 0x00139cc8u; imp__Znaj(cpu); /* _Znaj */
    }
L_00139cc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00139ccc:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[0]);
    }
L_00139cd0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000002u);
        }
    }
L_00139cd4:;
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
        uint32_t v8 = rd32(cpu->r[13] + 32u);
        uint32_t v9 = rd32(cpu->r[13] + 36u);
        cpu->r[3] = v0;
        cpu->r[4] = v1;
        cpu->r[5] = v2;
        cpu->r[6] = v3;
        cpu->r[7] = v4;
        cpu->r[8] = v5;
        cpu->r[9] = v6;
        cpu->r[10] = v7;
        cpu->r[11] = v8;
        uint32_t t = v9;
        cpu->r[13] += 40u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00139cd8u)) return;
        }
    }
L_00139cd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_00139cdc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00139ce0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x58u);
    }
L_00139ce4:;
    {
        cpu->r[14] = 0x00139ce8u; imp_memcpy(cpu); /* memcpy */
    }
L_00139ce8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4cu);
    }
L_00139cec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00139cf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00139d38;
        }
    }
L_00139cf4:;
    {
        cpu->r[1] = rd32(cpu->r[0]);
    }
L_00139cf8:;
    {
        sub_flags(cpu, cpu->r[1], 0x000000ffu, 1, 1);
    }
L_00139cfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00139d38;
        }
    }
L_00139d00:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x50u);
    }
L_00139d04:;
    {
        cpu->r[5] = rd32(cpu->r[12]);
    }
L_00139d08:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_00139d0c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_00139d10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00139d24;
        }
    }
L_00139d14:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00139d18:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x8u;
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
        cpu->r[3] = wb_tmp;
    }
L_00139d1c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00139d20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00139d18;
        }
    }
L_00139d24:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_00139d28:;
    {
        uint32_t wb_tmp = cpu->r[0] + + 0x8u;
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
        cpu->r[0] = wb_tmp;
    }
L_00139d2c:;
    {
        sub_flags(cpu, cpu->r[1], 0x000000ffu, 1, 1);
    }
L_00139d30:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_00139d34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00139d08;
        }
    }
L_00139d38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00139d3c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00139d40:;
    {
        wr8(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_00139d44:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00139d48:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00139e44;
        }
    }
L_00139d4c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], 0x00000028u, 0, 0);
    }
L_00139d50:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x00000024u, 0, 0);
    }
L_00139d54:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_00139d58:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_00139d5c:;
    {
        goto L_00139d98;
    }
L_00139d60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_00139d64:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00139d68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_00139d6c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_00139d70:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00139d74:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2cu);
    }
L_00139d78:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00139d7c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[11];
        }
    }
L_00139d80:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[9];
        }
    }
L_00139d84:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[4] + + 0x54u, cpu->r[2]);
        }
    }
L_00139d88:;
    {
        cpu->r[14] = 0x00139d8cu; fn_00138b44(cpu);
    }
L_00139d8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00139d90:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00139d94:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00139e44;
        }
    }
L_00139d98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_00139d9c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00139da0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00139da4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_00139da8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00139dac:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[4]);
    }
L_00139db0:;
    {
        cpu->r[14] = 0x00139db4u; fn_00139a54(cpu);
    }
L_00139db4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00139db8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00139dbc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00139d60;
        }
    }
L_00139dc0:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00139dc4:;
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
        uint32_t v9 = rd32(cpu->r[13] + 36u);
        cpu->r[3] = v0;
        cpu->r[4] = v1;
        cpu->r[5] = v2;
        cpu->r[6] = v3;
        cpu->r[7] = v4;
        cpu->r[8] = v5;
        cpu->r[9] = v6;
        cpu->r[10] = v7;
        cpu->r[11] = v8;
        uint32_t t = v9;
        cpu->r[13] += 40u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00139dc8u)) return;
    }
L_00139dc8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00139dcc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_00139dd0:;
    {
        cpu->r[14] = 0x00139dd4u; imp__Znaj(cpu); /* _Znaj */
    }
L_00139dd4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00139dd8:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[0]);
    }
L_00139ddc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00139dc0;
        }
    }
L_00139de0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00139de4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00139e28;
        }
    }
L_00139de8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00139dec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00139df0:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x4cu);
    }
L_00139df4:;
    {
        cpu->r[14] = 0x00139df8u; fn_000fc678(cpu);
    }
L_00139df8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x4cu);
    }
L_00139dfc:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 3u, &shc); cpu->r[3] = v;
    }
L_00139e00:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_00139e04:;
    {
        cpu->r[0] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_00139e08:;
    {
        wr32(cpu->r[9] + shifter(cpu->r[6], 2, 3u, &shc), cpu->r[0]);
    }
L_00139e0c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00139e10:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00139e14:;
    {
        cpu->r[14] = 0x00139e18u; fn_000fc678(cpu);
    }
L_00139e18:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_00139e1c:;
    {
        cpu->r[0] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_00139e20:;
    {
        wr32(cpu->r[10] + + 0x4u, cpu->r[0]);
    }
L_00139e24:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00139dec;
        }
    }
L_00139e28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4cu);
    }
L_00139e2c:;
    {
        cpu->r[1] = 0x000000ffu;
    }
L_00139e30:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 3u, &shc), 0, 0);
    }
L_00139e34:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 3u, &shc), cpu->r[1]);
    }
L_00139e38:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00139e3c:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_00139e40:;
    {
        goto L_00139c90;
    }
L_00139e44:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00139e48:;
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
        uint32_t v9 = rd32(cpu->r[13] + 36u);
        cpu->r[3] = v0;
        cpu->r[4] = v1;
        cpu->r[5] = v2;
        cpu->r[6] = v3;
        cpu->r[7] = v4;
        cpu->r[8] = v5;
        cpu->r[9] = v6;
        cpu->r[10] = v7;
        cpu->r[11] = v8;
        uint32_t t = v9;
        cpu->r[13] += 40u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00139e4cu)) return;
    }
L_00139e4c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00139e50:;
    {
        cpu->r[14] = 0x00139e54u; fn_000fc678(cpu);
    }
L_00139e54:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00139e58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00139e5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00139c48;
        }
    }
L_00139e60:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00139e64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00139e68:;
    {
        cpu->r[14] = 0x00139e6cu; imp__Znaj(cpu); /* _Znaj */
    }
L_00139e6c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00139e70:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00139e74:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[0]);
    }
L_00139e78:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00139e7c:;
    {
        cpu->r[14] = 0x00139e80u; fn_000fc5f4(cpu);
    }
L_00139e80:;
    {
        goto L_00139c48;
    }
}
