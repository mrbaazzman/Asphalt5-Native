#include "functions.h"

/* _ZN3vox10EmitterObj6ResumeEf @ 001e6940 (arm) */
void fn_001e6940(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e6940:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e6944:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e6948:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e694c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_001e6950:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e6954:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e6958:;
    {
        cpu->r[14] = 0x001e695cu; fn_001ebcfc(cpu);
    }
L_001e695c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x94u);
    }
L_001e6960:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001e6964:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e698c;
        }
    }
L_001e6968:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x90u);
    }
L_001e696c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_001e6970:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6984;
        }
    }
L_001e6974:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e6978:;
    {
        cpu->r[14] = 0x001e697cu; fn_001ebcf8(cpu);
    }
L_001e697c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001e6980:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e6984u)) return;
    }
L_001e6984:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001e6988:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6974;
        }
    }
L_001e698c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x68u);
    }
L_001e6990:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x64u);
    }
L_001e6994:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001e6998:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e699c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x0000005cu, 0, 0);
    }
L_001e69a0:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
    }
L_001e69a4:;
    {
        vfp_sync_flags(cpu);
    }
L_001e69a8:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x60u);
        }
    }
L_001e69ac:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001e69d4;
        }
    }
L_001e69b0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001e69b4:;
    {
        vfp_sync_flags(cpu);
    }
L_001e69b8:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[5] + + 0x60u);
        }
    }
L_001e69bc:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[5] + + 0x5cu);
        }
    }
L_001e69c0:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 12, 12, 13);
        }
    }
L_001e69c4:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x5cu);
        }
    }
L_001e69c8:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 14, 14, 12);
        }
    }
L_001e69cc:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vdiv(cpu, 15, 14, 15);
        }
    }
L_001e69d0:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 15, 13, 15);
        }
    }
L_001e69d4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e69d8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e69dc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_001e69e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e69e8u + + 0x24u);
    }
L_001e69e4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e69e8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e69f0u + + 0x20u);
    }
L_001e69ec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e69f0:;
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
L_001e69f4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e69f8:;
    {
        wr8(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_001e69fc:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_001e6a00:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001e6a04:;
    {
        wr8(cpu->r[12], cpu->r[14]);
    }
L_001e6a08:;
    {
        goto L_001e6974;
    }
}

/* _ZN3vox17VoxEngineInternal6ResumeEPNS_10EmitterObjEf @ 001e6a14 (arm) */
void fn_001e6a14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e6a14:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e6a18:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001e6a1c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001e6a20:;
    {
        return fn_001e6940(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal17ResumeAllEmittersEjf @ 001e6a24 (arm) */
void fn_001e6a24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e6a24:;
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
L_001e6a28:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e6a2c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001e6a30:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e6a34:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000090u, 0, 0);
    }
L_001e6a38:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e6a3c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e6a40:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001e6a44:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], 0x00000058u, 0, 0);
    }
L_001e6a48:;
    {
        cpu->r[14] = 0x001e6a4cu; fn_001ebdc8(cpu);
    }
L_001e6a4c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e6a50:;
    {
        cpu->r[14] = 0x001e6a54u; fn_001ebdc8(cpu);
    }
L_001e6a54:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e6a58:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001e6a5c:;
    {
        cpu->r[14] = 0x001e6a60u; fn_001de2b4(cpu);
    }
L_001e6a60:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e6a64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e6a68:;
    {
        cpu->r[14] = 0x001e6a6cu; fn_001de2c4(cpu);
    }
L_001e6a6c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
    }
L_001e6a70:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xcu);
    }
L_001e6a74:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001e6a78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6ac0;
        }
    }
L_001e6a7c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x18u);
    }
L_001e6a80:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e6a84:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e6a88:;
    {
        cpu->r[14] = 0x001e6a8cu; fn_001dff14(cpu);
    }
L_001e6a8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e6a90:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6b58;
        }
    }
L_001e6a94:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e6a98:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e6a9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6aa8;
        }
    }
L_001e6aa0:;
    {
        goto L_001e6b74;
    }
L_001e6aa4:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e6aa8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e6aac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e6ab0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6aa4;
        }
    }
L_001e6ab4:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001e6ab8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001e6abc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6a7c;
        }
    }
L_001e6ac0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], 0x00000068u, 0, 0);
    }
L_001e6ac4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e6ac8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001e6acc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_001e6ad0:;
    {
        cpu->r[14] = 0x001e6ad4u; fn_001de2b4(cpu);
    }
L_001e6ad4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e6ad8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001e6adc:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001e6ae0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001e6ae4:;
    {
        cpu->r[14] = 0x001e6ae8u; fn_001de2c4(cpu);
    }
L_001e6ae8:;
    {
        cpu->r[10] = rd32(cpu->r[13]);
    }
L_001e6aec:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xcu);
    }
L_001e6af0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_001e6af4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001e6af8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6b40;
        }
    }
L_001e6afc:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x18u);
    }
L_001e6b00:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e6b04:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e6b08:;
    {
        cpu->r[14] = 0x001e6b0cu; fn_001dff14(cpu);
    }
L_001e6b0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e6b10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6ba8;
        }
    }
L_001e6b14:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e6b18:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e6b1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6b28;
        }
    }
L_001e6b20:;
    {
        goto L_001e6bc4;
    }
L_001e6b24:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e6b28:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e6b2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e6b30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6b24;
        }
    }
L_001e6b34:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001e6b38:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001e6b3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6afc;
        }
    }
L_001e6b40:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e6b44:;
    {
        cpu->r[14] = 0x001e6b48u; fn_001ebd9c(cpu);
    }
L_001e6b48:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e6b4c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001e6b50:;
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
L_001e6b54:;
    {
        return fn_001ebd9c(cpu);
    }
L_001e6b58:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001e6b5c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001e6b60:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e6b64:;
    {
        cpu->r[14] = 0x001e6b68u; fn_001e6a14(cpu);
    }
L_001e6b68:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e6b6c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e6b70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6aa8;
        }
    }
L_001e6b74:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e6b78:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e6b7c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001e6b80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6b9c;
        }
    }
L_001e6b84:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001e6b88:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e6b8c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e6b90:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001e6b94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6b84;
        }
    }
L_001e6b98:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e6b9c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e6ba0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_001e6ba4:;
    {
        goto L_001e6a74;
    }
L_001e6ba8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001e6bac:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001e6bb0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e6bb4:;
    {
        cpu->r[14] = 0x001e6bb8u; fn_001e6a14(cpu);
    }
L_001e6bb8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e6bbc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e6bc0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6b28;
        }
    }
L_001e6bc4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e6bc8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e6bcc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001e6bd0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6bec;
        }
    }
L_001e6bd4:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001e6bd8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e6bdc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e6be0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001e6be4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6bd4;
        }
    }
L_001e6be8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e6bec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e6bf0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_001e6bf4:;
    {
        goto L_001e6af4;
    }
}

/* _ZN3vox17VoxEngineInternal6ResumeERNS_13EmitterHandleEf @ 001e6bf8 (arm) */
void fn_001e6bf8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e6bf8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e6bfc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e6c00:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e6c04:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001e6c08:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e6c0c:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001e6c10:;
    {
        cpu->r[14] = 0x001e6c14u; fn_001ebdc8(cpu);
    }
L_001e6c14:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e6c18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e6c1c:;
    {
        cpu->r[14] = 0x001e6c20u; fn_001e1ca0(cpu);
    }
L_001e6c20:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001e6c24:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001e6c28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e6c2c:;
    {
        cpu->r[14] = 0x001e6c30u; fn_001e6a14(cpu);
    }
L_001e6c30:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e6c34:;
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
L_001e6c38:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal17GetEmitterHandlesERNS_10DataHandleERSt6vectorINS_13EmitterHandleESaIS4_EE @ 001e6c3c (arm) */
void fn_001e6c3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e6c3c:;
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
L_001e6c40:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001e6c44:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001e6c48:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000007cu, 1, 0);
    }
L_001e6c4c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e6c50:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e6c54:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e6c58:;
    {
        cpu->r[14] = 0x001e6c5cu; fn_001ebdc8(cpu);
    }
L_001e6c5c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e6c60:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e6c64:;
    {
        cpu->r[14] = 0x001e6c68u; fn_001e2e90(cpu);
    }
L_001e6c68:;
    {
        cpu->r[6] = rd32(0x001e6c70u + + 0x2a0u);
    }
L_001e6c6c:;
    {
        cpu->r[6] = add_flags(cpu, 0x001e6c74u, cpu->r[6], 0, 0);
    }
L_001e6c70:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e6c74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6da0;
        }
    }
L_001e6c78:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000084u, 0, 0);
    }
L_001e6c7c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[5], 0x00000058u, 0, 0);
    }
L_001e6c80:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e6c84:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_001e6c88:;
    {
        cpu->r[14] = 0x001e6c8cu; fn_001ebdc8(cpu);
    }
L_001e6c8c:;
    {
        cpu->r[2] = rd32(0x001e6c94u + + 0x280u);
    }
L_001e6c90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_001e6c94:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001e6c98:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001e6c9c:;
    {
        cpu->r[14] = 0x001e6ca0u; fn_001de2b4(cpu);
    }
L_001e6ca0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_001e6ca4:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001e6ca8:;
    {
        cpu->r[14] = 0x001e6cacu; fn_001de2c4(cpu);
    }
L_001e6cac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x74u);
    }
L_001e6cb0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x70u);
    }
L_001e6cb4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001e6cb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6cfc;
        }
    }
L_001e6cbc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_001e6cc0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x118u);
    }
L_001e6cc4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001e6cc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6e84;
        }
    }
L_001e6ccc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e6cd0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e6cd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6ce0;
        }
    }
L_001e6cd8:;
    {
        goto L_001e6db0;
    }
L_001e6cdc:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e6ce0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e6ce4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e6ce8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6cdc;
        }
    }
L_001e6cec:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001e6cf0:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_001e6cf4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001e6cf8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6cbc;
        }
    }
L_001e6cfc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e6d00:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000090u, 0, 0);
    }
L_001e6d04:;
    {
        cpu->r[14] = 0x001e6d08u; fn_001ebd9c(cpu);
    }
L_001e6d08:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e6d0c:;
    {
        cpu->r[14] = 0x001e6d10u; fn_001ebdc8(cpu);
    }
L_001e6d10:;
    {
        cpu->r[2] = rd32(0x001e6d18u + + 0x1fcu);
    }
L_001e6d14:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[5], 0x00000068u, 0, 0);
    }
L_001e6d18:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_001e6d1c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001e6d20:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001e6d24:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001e6d28:;
    {
        cpu->r[14] = 0x001e6d2cu; fn_001de2b4(cpu);
    }
L_001e6d2c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001e6d30:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_001e6d34:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001e6d38:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_001e6d3c:;
    {
        cpu->r[14] = 0x001e6d40u; fn_001de2c4(cpu);
    }
L_001e6d40:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_001e6d44:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x74u);
    }
L_001e6d48:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001e6d4c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001e6d50:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[2]);
    }
L_001e6d54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6d98;
        }
    }
L_001e6d58:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_001e6d5c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x118u);
    }
L_001e6d60:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001e6d64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6e20;
        }
    }
L_001e6d68:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e6d6c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e6d70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6d7c;
        }
    }
L_001e6d74:;
    {
        goto L_001e6de8;
    }
L_001e6d78:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e6d7c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e6d80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e6d84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6d78;
        }
    }
L_001e6d88:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001e6d8c:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_001e6d90:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001e6d94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6d58;
        }
    }
L_001e6d98:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e6d9c:;
    {
        cpu->r[14] = 0x001e6da0u; fn_001ebd9c(cpu);
    }
L_001e6da0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e6da4:;
    {
        cpu->r[14] = 0x001e6da8u; fn_001ebd9c(cpu);
    }
L_001e6da8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_001e6dac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e6db0u)) return;
    }
L_001e6db0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e6db4:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e6db8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001e6dbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6dd8;
        }
    }
L_001e6dc0:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e6dc4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001e6dc8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e6dcc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e6dd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6dc0;
        }
    }
L_001e6dd4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e6dd8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001e6ddc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001e6de0:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_001e6de4:;
    {
        goto L_001e6cf4;
    }
L_001e6de8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e6dec:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e6df0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001e6df4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6e10;
        }
    }
L_001e6df8:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e6dfc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001e6e00:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e6e04:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e6e08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6df8;
        }
    }
L_001e6e0c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e6e10:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001e6e14:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001e6e18:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_001e6e1c:;
    {
        goto L_001e6d90;
    }
L_001e6e20:;
    {
        cpu->r[14] = rd32(cpu->r[1] + + 0x14u);
    }
L_001e6e24:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e6e28:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e6e2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], 0x00000144u, 0, 0);
    }
L_001e6e30:;
    {
        cpu->r[11] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001e6e34:;
    {
        uint64_t v = rd64(cpu->r[1] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e6e38:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e6e3c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_001e6e40:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_001e6e44:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001e6e48:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e6e4c:;
    {
        cpu->r[14] = 0x001e6e50u; fn_001e2888(cpu);
    }
L_001e6e50:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[3] = v1;
    }
L_001e6e54:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001e6e58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6ee8;
        }
    }
L_001e6e5c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001e6e60:;
    {
        cpu->r[14] = 0x001e6e64u; fn_001e29b0(cpu);
    }
L_001e6e64:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_001e6e68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000028u, 0, 0);
    }
L_001e6e6c:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[3]);
    }
L_001e6e70:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e6e74:;
    {
        cpu->r[14] = 0x001e6e78u; fn_001e2b74(cpu);
    }
L_001e6e78:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x74u);
    }
L_001e6e7c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x70u);
    }
L_001e6e80:;
    {
        goto L_001e6d68;
    }
L_001e6e84:;
    {
        cpu->r[14] = rd32(cpu->r[1] + + 0x14u);
    }
L_001e6e88:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e6e8c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e6e90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], 0x00000144u, 0, 0);
    }
L_001e6e94:;
    {
        cpu->r[11] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001e6e98:;
    {
        uint64_t v = rd64(cpu->r[1] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e6e9c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e6ea0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_001e6ea4:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_001e6ea8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001e6eac:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e6eb0:;
    {
        cpu->r[14] = 0x001e6eb4u; fn_001e2888(cpu);
    }
L_001e6eb4:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[3] = v1;
    }
L_001e6eb8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001e6ebc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6efc;
        }
    }
L_001e6ec0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001e6ec4:;
    {
        cpu->r[14] = 0x001e6ec8u; fn_001e29b0(cpu);
    }
L_001e6ec8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_001e6ecc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000028u, 0, 0);
    }
L_001e6ed0:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[3]);
    }
L_001e6ed4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e6ed8:;
    {
        cpu->r[14] = 0x001e6edcu; fn_001e2b74(cpu);
    }
L_001e6edc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x74u);
    }
L_001e6ee0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x70u);
    }
L_001e6ee4:;
    {
        goto L_001e6ccc;
    }
L_001e6ee8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001e6eec:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001e6ef0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e6ef4:;
    {
        cpu->r[14] = 0x001e6ef8u; fn_001e4f0c(cpu);
    }
L_001e6ef8:;
    {
        goto L_001e6e70;
    }
L_001e6efc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001e6f00:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001e6f04:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e6f08:;
    {
        cpu->r[14] = 0x001e6f0cu; fn_001e4f0c(cpu);
    }
L_001e6f0c:;
    {
        goto L_001e6ed4;
    }
}

/* _ZN3vox19PriorityBankManager13RemoveEmitterEiPNS_10EmitterObjE @ 001e6f18 (arm) */
void fn_001e6f18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e6f18:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e6f1c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e6f20:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_001e6f24:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e6f28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e6f2c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e6f30:;
    {
        cpu->r[14] = 0x001e6f34u; fn_001ebcfc(cpu);
    }
L_001e6f34:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001e6f38:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001e6f3c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001e6f40:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001e6f44:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[6], 3, 31u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001e6f48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6fdc;
        }
    }
L_001e6f4c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001e6f50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6fdc;
        }
    }
L_001e6f54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e6f58:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_001e6f5c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 3u, &shc), 0, 0);
    }
L_001e6f60:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_001e6f64:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x10u);
    }
L_001e6f68:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[14], 1, 1);
    }
L_001e6f6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6f80;
        }
    }
L_001e6f70:;
    {
        goto L_001e6fdc;
    }
L_001e6f74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e6f78:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[14], 1, 1);
    }
L_001e6f7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6fdc;
        }
    }
L_001e6f80:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001e6f84:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_001e6f88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6f74;
        }
    }
L_001e6f8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e6f90:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 1);
    }
L_001e6f94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e6fc0;
        }
    }
L_001e6f98:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_001e6f9c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[12] = v;
    }
L_001e6fa0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001e6fa4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e6fc0;
        }
    }
L_001e6fa8:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001e6fac:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_001e6fb0:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001e6fb4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001e6fb8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001e6fbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e6fa8;
        }
    }
L_001e6fc0:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000008u, 1, 0);
    }
L_001e6fc4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e6fc8:;
    {
        wr32(cpu->r[6] + + 0x10u, cpu->r[14]);
    }
L_001e6fcc:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001e6fd0:;
    {
        cpu->r[14] = 0x001e6fd4u; fn_001ebcf8(cpu);
    }
L_001e6fd4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e6fd8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e6fdcu)) return;
    }
L_001e6fdc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e6fe0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001e6fe4:;
    {
        cpu->r[14] = 0x001e6fe8u; fn_001ebcf8(cpu);
    }
L_001e6fe8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e6fec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e6ff0u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal11KillEmitterEPNS_10EmitterObjE @ 001e6ff0 (arm) */
void fn_001e6ff0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e6ff0:;
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
L_001e6ff4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e6ff8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e6ffc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e7000u)) return;
        }
    }
L_001e7000:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001e7004:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x34u);
    }
L_001e7008:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000144u, 0, 0);
    }
L_001e700c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e7010:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001e7014:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001e7018:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
    }
L_001e701c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e711c;
        }
    }
L_001e7020:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x110u);
    }
L_001e7024:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e7028:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7048;
        }
    }
L_001e702c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x50cu);
    }
L_001e7030:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e7034:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7048;
        }
    }
L_001e7038:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e703c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e7040:;
    {
        cpu->r[14] = 0x001e7048u;
    }
L_001e7044:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e7048u)) return;
    }
L_001e7048:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e704c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x00000034u, 0, 0);
    }
L_001e7050:;
    {
        cpu->r[14] = 0x001e7054u; fn_001dee40(cpu);
    }
L_001e7054:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e7058:;
    {
        cpu->r[14] = 0x001e705cu; fn_001ebdc8(cpu);
    }
L_001e705c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x118u);
    }
L_001e7060:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001e7064:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e70f8;
        }
    }
L_001e7068:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x114u);
    }
L_001e706c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001e7070:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e70cc;
        }
    }
L_001e7074:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001e7078:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e707c:;
    {
        cpu->r[14] = 0x001e7084u;
    }
L_001e7080:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e7084u)) return;
    }
L_001e7084:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e7088:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e70ac;
        }
    }
L_001e708c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x38u);
    }
L_001e7090:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e7094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7174;
        }
    }
L_001e7098:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e709c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001e70a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e70a4:;
    {
        cpu->r[14] = 0x001e70acu;
    }
L_001e70a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e70acu)) return;
    }
L_001e70ac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x3cu);
    }
L_001e70b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e70b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7158;
        }
    }
L_001e70b8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e70bc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e70c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e70c4:;
    {
        cpu->r[14] = 0x001e70ccu;
    }
L_001e70c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e70ccu)) return;
    }
L_001e70cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e70d0:;
    {
        uint64_t v = rd64(cpu->r[4] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e70d4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], 0x00000054u, 0, 0);
    }
L_001e70d8:;
    {
        cpu->r[14] = 0x001e70dcu; fn_001e0350(cpu);
    }
L_001e70dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e70e0:;
    {
        cpu->r[14] = 0x001e70e4u; fn_001ebcfc(cpu);
    }
L_001e70e4:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x4cu);
    }
L_001e70e8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e70ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7130;
        }
    }
L_001e70f0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e70f4:;
    {
        cpu->r[14] = 0x001e70f8u; fn_001ebcf8(cpu);
    }
L_001e70f8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001e70fc:;
    {
        cpu->r[14] = 0x001e7100u; fn_001ebd9c(cpu);
    }
L_001e7100:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001e7104:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e7108:;
    {
        cpu->r[14] = 0x001e7110u;
    }
L_001e710c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e7110u)) return;
    }
L_001e7110:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e7114:;
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
L_001e7118:;
    {
        return fn_00097dc8(cpu);
    }
L_001e711c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001e7120:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x30u);
    }
L_001e7124:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x9cu);
    }
L_001e7128:;
    {
        cpu->r[14] = 0x001e712cu; fn_001e6f18(cpu);
    }
L_001e712c:;
    {
        goto L_001e7020;
    }
L_001e7130:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e7134:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001e7138:;
    {
        wr8(cpu->r[6] + + 0x4cu, cpu->r[3]);
    }
L_001e713c:;
    {
        cpu->r[14] = 0x001e7140u; fn_00097dd0(cpu);
    }
L_001e7140:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x50u);
    }
L_001e7144:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x0000004cu, 0, 0);
    }
L_001e7148:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
        wr32(ea + 8u, cpu->r[6]);
    }
L_001e714c:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001e7150:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[0]);
    }
L_001e7154:;
    {
        goto L_001e70f0;
    }
L_001e7158:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001e715c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e7160:;
    {
        cpu->r[14] = 0x001e7168u;
    }
L_001e7164:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e7168u)) return;
    }
L_001e7168:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e716c:;
    {
        cpu->r[14] = 0x001e7170u; fn_00097dc8(cpu);
    }
L_001e7170:;
    {
        goto L_001e70cc;
    }
L_001e7174:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001e7178:;
    {
        cpu->r[14] = 0x001e7180u;
    }
L_001e717c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e7180u)) return;
    }
L_001e7180:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e7184:;
    {
        cpu->r[14] = 0x001e7188u; fn_00097dc8(cpu);
    }
L_001e7188:;
    {
        goto L_001e70ac;
    }
}

/* _ZN3vox10EmitterObj4PlayEf @ 001e718c (arm) */
void fn_001e718c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e718c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e7190:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e7194:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e7198:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000028u, 1, 0);
    }
L_001e719c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e71a0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e71a4:;
    {
        cpu->r[14] = 0x001e71a8u; fn_001ebcfc(cpu);
    }
L_001e71a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001e71ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001e71b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7204;
        }
    }
L_001e71b4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001e71b8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e71c0u + + 0xb0u);
    }
L_001e71bc:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[6]);
    }
L_001e71c0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e71c4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e71c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e71d0u + + 0xa4u);
    }
L_001e71cc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e71d0:;
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
L_001e71d4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001e71d8:;
    {
        wr8(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_001e71dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x0000005cu, 0, 0);
    }
L_001e71e0:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_001e71e4:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001e71e8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e71ec:;
    {
        wr8(cpu->r[12], cpu->r[14]);
    }
L_001e71f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e71f4:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_001e71f8:;
    {
        cpu->r[14] = 0x001e71fcu; fn_001ebcf8(cpu);
    }
L_001e71fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001e7200:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e7204u)) return;
    }
L_001e7204:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x68u);
    }
L_001e7208:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x64u);
    }
L_001e720c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001e7210:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x0000005cu, 0, 0);
    }
L_001e7214:;
    {
        vfp_sync_flags(cpu);
    }
L_001e7218:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x60u);
        }
    }
L_001e721c:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001e7244;
        }
    }
L_001e7220:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001e7224:;
    {
        vfp_sync_flags(cpu);
    }
L_001e7228:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x5cu);
        }
    }
L_001e722c:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x60u);
        }
    }
L_001e7230:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 12, 12, 13);
        }
    }
L_001e7234:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x5cu);
        }
    }
L_001e7238:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 14, 14, 12);
        }
    }
L_001e723c:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vdiv(cpu, 15, 14, 15);
        }
    }
L_001e7240:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 15, 13, 15);
        }
    }
L_001e7244:;
    {
        cpu->r[14] = cpu->r[13];
    }
L_001e7248:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e724c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001e7250:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e7258u + + 0x1cu);
    }
L_001e7254:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001e7258:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e725c:;
    {
        wr8(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_001e7260:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e7268u + + 0x8u);
    }
L_001e7264:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e7268:;
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
L_001e726c:;
    {
        goto L_001e71e0;
    }
}

/* _ZN3vox19PriorityBankManagerD1Ev @ 001e7278 (arm) */
void fn_001e7278(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e7278:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e727c:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x4u);
    }
L_001e7280:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x8u);
    }
L_001e7284:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e7288:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_001e728c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e72c4;
        }
    }
L_001e7290:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_001e7294:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e7298:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001e729c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e72a0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
        }
    }
L_001e72a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e72a8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001e72ac:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e72b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e72b8;
        }
    }
L_001e72b4:;
    {
        cpu->r[14] = 0x001e72b8u; fn_00097dc8(cpu);
    }
L_001e72b8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001e72bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e7294;
        }
    }
L_001e72c0:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[7]);
    }
L_001e72c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000010u, 0, 0);
    }
L_001e72c8:;
    {
        cpu->r[14] = 0x001e72ccu; fn_001ebe28(cpu);
    }
L_001e72cc:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0x8u);
    }
L_001e72d0:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x4u);
    }
L_001e72d4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001e72d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7308;
        }
    }
L_001e72dc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000018u, 1, 0);
    }
L_001e72e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e72e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001e72e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e72ec:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
        }
    }
L_001e72f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e72f4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e72f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7300;
        }
    }
L_001e72fc:;
    {
        cpu->r[14] = 0x001e7300u; fn_00097dc8(cpu);
    }
L_001e7300:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001e7304:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e72dc;
        }
    }
L_001e7308:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_001e730c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e7310:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7318;
        }
    }
L_001e7314:;
    {
        cpu->r[14] = 0x001e7318u; fn_00097dc8(cpu);
    }
L_001e7318:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e731c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e7320u)) return;
    }
}

/* _ZN3vox17VoxEngineInternalD1Ev @ 001e7320 (arm) */
void fn_001e7320(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e7320:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e7324:;
    {
        cpu->r[4] = rd32(0x001e732cu + + 0x184u);
    }
L_001e7328:;
    {
        cpu->r[3] = rd32(0x001e7330u + + 0x184u);
    }
L_001e732c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e7330:;
    {
        cpu->r[4] = add_flags(cpu, 0x001e7338u, cpu->r[4], 0, 0);
    }
L_001e7334:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001e7338:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e733c:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001e7340:;
    {
        cpu->r[14] = 0x001e7344u; fn_001e4b1c(cpu);
    }
L_001e7344:;
    {
        cpu->r[14] = 0x001e7348u; fn_001ef65c(cpu);
    }
L_001e7348:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x9cu);
    }
L_001e734c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e7350:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7360;
        }
    }
L_001e7354:;
    {
        cpu->r[14] = 0x001e7358u; fn_001e7278(cpu);
    }
L_001e7358:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x9cu);
    }
L_001e735c:;
    {
        cpu->r[14] = 0x001e7360u; fn_00097dc8(cpu);
    }
L_001e7360:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x50cu);
    }
L_001e7364:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e7368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7384;
        }
    }
L_001e736c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e7370:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e7374:;
    {
        cpu->r[14] = 0x001e737cu;
    }
L_001e7378:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e737cu)) return;
    }
L_001e737c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x50cu);
    }
L_001e7380:;
    {
        cpu->r[14] = 0x001e7384u; fn_00097dc8(cpu);
    }
L_001e7384:;
    {
        cpu->r[14] = 0x001e7388u; fn_0020002c(cpu);
    }
L_001e7388:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x558u);
    }
L_001e738c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e7390:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7398;
        }
    }
L_001e7394:;
    {
        cpu->r[14] = 0x001e7398u; fn_00097dc8(cpu);
    }
L_001e7398:;
    {
        cpu->r[3] = rd32(0x001e73a0u + + 0x118u);
    }
L_001e739c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x000003fcu, 0, 0);
    }
L_001e73a0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x3fcu);
    }
L_001e73a4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001e73a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001e73ac:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_001e73b0:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001e73b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e73d0;
        }
    }
L_001e73b8:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001e73bc:;
    {
        cpu->r[14] = 0x001e73c0u; fn_00097dc8(cpu);
    }
L_001e73c0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001e73c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e73c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e73b8;
        }
    }
L_001e73cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e73d0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000098u, 0, 0);
    }
L_001e73d4:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[0]);
    }
L_001e73d8:;
    {
        wr32(cpu->r[5] + + 0x3fcu, cpu->r[0]);
    }
L_001e73dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000003b4u, 0, 0);
    }
L_001e73e0:;
    {
        cpu->r[14] = 0x001e73e4u; fn_001ebe28(cpu);
    }
L_001e73e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e73e8:;
    {
        cpu->r[14] = 0x001e73ecu; fn_001ebcf8(cpu);
    }
L_001e73ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e73f0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x0000008cu, 0, 0);
    }
L_001e73f4:;
    {
        cpu->r[14] = 0x001e73f8u; fn_001ebe28(cpu);
    }
L_001e73f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e73fc:;
    {
        cpu->r[14] = 0x001e7400u; fn_001ebcf8(cpu);
    }
L_001e7400:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e7404:;
    {
        cpu->r[14] = 0x001e7408u; fn_001ebe28(cpu);
    }
L_001e7408:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x78u);
    }
L_001e740c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e7410:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7418;
        }
    }
L_001e7414:;
    {
        cpu->r[14] = 0x001e7418u; fn_00097dc8(cpu);
    }
L_001e7418:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000068u, 0, 0);
    }
L_001e741c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x0000004cu, 0, 0);
    }
L_001e7420:;
    {
        cpu->r[14] = 0x001e7424u; fn_001defc4(cpu);
    }
L_001e7424:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000058u, 0, 0);
    }
L_001e7428:;
    {
        cpu->r[14] = 0x001e742cu; fn_001defc4(cpu);
    }
L_001e742c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000054u, 0, 0);
    }
L_001e7430:;
    {
        cpu->r[14] = 0x001e7434u; fn_001ebe28(cpu);
    }
L_001e7434:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4cu);
    }
L_001e7438:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_001e743c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7458;
        }
    }
L_001e7440:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001e7444:;
    {
        cpu->r[14] = 0x001e7448u; fn_00097dc8(cpu);
    }
L_001e7448:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001e744c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e7450:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e7440;
        }
    }
L_001e7454:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e7458:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000048u, 0, 0);
    }
L_001e745c:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[0]);
    }
L_001e7460:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[0]);
    }
L_001e7464:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e7468:;
    {
        cpu->r[14] = 0x001e746cu; fn_001ebcf8(cpu);
    }
L_001e746c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e7470:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x0000003cu, 0, 0);
    }
L_001e7474:;
    {
        cpu->r[14] = 0x001e7478u; fn_001ebe28(cpu);
    }
L_001e7478:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e747c:;
    {
        cpu->r[14] = 0x001e7480u; fn_001ebcf8(cpu);
    }
L_001e7480:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e7484:;
    {
        cpu->r[14] = 0x001e7488u; fn_001ebe28(cpu);
    }
L_001e7488:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x28u);
    }
L_001e748c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e7490:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7498;
        }
    }
L_001e7494:;
    {
        cpu->r[14] = 0x001e7498u; fn_00097dc8(cpu);
    }
L_001e7498:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001e749c:;
    {
        cpu->r[14] = 0x001e74a0u; fn_001defc4(cpu);
    }
L_001e74a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001e74a4:;
    {
        cpu->r[14] = 0x001e74a8u; fn_001defc4(cpu);
    }
L_001e74a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e74ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e74b0u)) return;
    }
}

/* _ZN3vox17VoxEngineInternalD0Ev @ 001e74bc (arm) */
void fn_001e74bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e74bc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001e74c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e74c4:;
    {
        cpu->r[14] = 0x001e74c8u; fn_001e7320(cpu);
    }
L_001e74c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e74cc:;
    {
        cpu->r[14] = 0x001e74d0u; fn_0018ba20(cpu);
    }
L_001e74d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e74d4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001e74d8u)) return;
    }
}

/* _ZN3vox17VoxEngineInternalD2Ev @ 001e74d8 (arm) */
void fn_001e74d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e74d8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e74dc:;
    {
        cpu->r[4] = rd32(0x001e74e4u + + 0x184u);
    }
L_001e74e0:;
    {
        cpu->r[3] = rd32(0x001e74e8u + + 0x184u);
    }
L_001e74e4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e74e8:;
    {
        cpu->r[4] = add_flags(cpu, 0x001e74f0u, cpu->r[4], 0, 0);
    }
L_001e74ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001e74f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e74f4:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001e74f8:;
    {
        cpu->r[14] = 0x001e74fcu; fn_001e4b1c(cpu);
    }
L_001e74fc:;
    {
        cpu->r[14] = 0x001e7500u; fn_001ef65c(cpu);
    }
L_001e7500:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x9cu);
    }
L_001e7504:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e7508:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7518;
        }
    }
L_001e750c:;
    {
        cpu->r[14] = 0x001e7510u; fn_001e7278(cpu);
    }
L_001e7510:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x9cu);
    }
L_001e7514:;
    {
        cpu->r[14] = 0x001e7518u; fn_00097dc8(cpu);
    }
L_001e7518:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x50cu);
    }
L_001e751c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e7520:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e753c;
        }
    }
L_001e7524:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e7528:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e752c:;
    {
        cpu->r[14] = 0x001e7534u;
    }
L_001e7530:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e7534u)) return;
    }
L_001e7534:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x50cu);
    }
L_001e7538:;
    {
        cpu->r[14] = 0x001e753cu; fn_00097dc8(cpu);
    }
L_001e753c:;
    {
        cpu->r[14] = 0x001e7540u; fn_0020002c(cpu);
    }
L_001e7540:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x558u);
    }
L_001e7544:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e7548:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7550;
        }
    }
L_001e754c:;
    {
        cpu->r[14] = 0x001e7550u; fn_00097dc8(cpu);
    }
L_001e7550:;
    {
        cpu->r[3] = rd32(0x001e7558u + + 0x118u);
    }
L_001e7554:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x000003fcu, 0, 0);
    }
L_001e7558:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x3fcu);
    }
L_001e755c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001e7560:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001e7564:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_001e7568:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001e756c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7588;
        }
    }
L_001e7570:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001e7574:;
    {
        cpu->r[14] = 0x001e7578u; fn_00097dc8(cpu);
    }
L_001e7578:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001e757c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e7580:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e7570;
        }
    }
L_001e7584:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e7588:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000098u, 0, 0);
    }
L_001e758c:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[0]);
    }
L_001e7590:;
    {
        wr32(cpu->r[5] + + 0x3fcu, cpu->r[0]);
    }
L_001e7594:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000003b4u, 0, 0);
    }
L_001e7598:;
    {
        cpu->r[14] = 0x001e759cu; fn_001ebe28(cpu);
    }
L_001e759c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e75a0:;
    {
        cpu->r[14] = 0x001e75a4u; fn_001ebcf8(cpu);
    }
L_001e75a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e75a8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x0000008cu, 0, 0);
    }
L_001e75ac:;
    {
        cpu->r[14] = 0x001e75b0u; fn_001ebe28(cpu);
    }
L_001e75b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e75b4:;
    {
        cpu->r[14] = 0x001e75b8u; fn_001ebcf8(cpu);
    }
L_001e75b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e75bc:;
    {
        cpu->r[14] = 0x001e75c0u; fn_001ebe28(cpu);
    }
L_001e75c0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x78u);
    }
L_001e75c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e75c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e75d0;
        }
    }
L_001e75cc:;
    {
        cpu->r[14] = 0x001e75d0u; fn_00097dc8(cpu);
    }
L_001e75d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000068u, 0, 0);
    }
L_001e75d4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x0000004cu, 0, 0);
    }
L_001e75d8:;
    {
        cpu->r[14] = 0x001e75dcu; fn_001defc4(cpu);
    }
L_001e75dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000058u, 0, 0);
    }
L_001e75e0:;
    {
        cpu->r[14] = 0x001e75e4u; fn_001defc4(cpu);
    }
L_001e75e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000054u, 0, 0);
    }
L_001e75e8:;
    {
        cpu->r[14] = 0x001e75ecu; fn_001ebe28(cpu);
    }
L_001e75ec:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4cu);
    }
L_001e75f0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_001e75f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7610;
        }
    }
L_001e75f8:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001e75fc:;
    {
        cpu->r[14] = 0x001e7600u; fn_00097dc8(cpu);
    }
L_001e7600:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001e7604:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e7608:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e75f8;
        }
    }
L_001e760c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e7610:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000048u, 0, 0);
    }
L_001e7614:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[0]);
    }
L_001e7618:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[0]);
    }
L_001e761c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e7620:;
    {
        cpu->r[14] = 0x001e7624u; fn_001ebcf8(cpu);
    }
L_001e7624:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e7628:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x0000003cu, 0, 0);
    }
L_001e762c:;
    {
        cpu->r[14] = 0x001e7630u; fn_001ebe28(cpu);
    }
L_001e7630:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e7634:;
    {
        cpu->r[14] = 0x001e7638u; fn_001ebcf8(cpu);
    }
L_001e7638:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e763c:;
    {
        cpu->r[14] = 0x001e7640u; fn_001ebe28(cpu);
    }
L_001e7640:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x28u);
    }
L_001e7644:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e7648:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7650;
        }
    }
L_001e764c:;
    {
        cpu->r[14] = 0x001e7650u; fn_00097dc8(cpu);
    }
L_001e7650:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001e7654:;
    {
        cpu->r[14] = 0x001e7658u; fn_001defc4(cpu);
    }
L_001e7658:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001e765c:;
    {
        cpu->r[14] = 0x001e7660u; fn_001defc4(cpu);
    }
L_001e7660:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e7664:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e7668u)) return;
    }
}

/* _ZN3vox10EmitterObj5PauseEf @ 001e7674 (arm) */
void fn_001e7674(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e7674:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e7678:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001e767c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e7680:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[1];
    }
L_001e7684:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e7688:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000040u, 1, 0);
    }
L_001e768c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e7690:;
    {
        cpu->r[14] = 0x001e7694u; fn_001ebcfc(cpu);
    }
L_001e7694:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x94u);
    }
L_001e7698:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], 0x00000002u, 1, 0);
    }
L_001e769c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001e76a0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001e770c;
        }
    }
L_001e76a4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_001e76a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e76c0;
        }
    }
L_001e76ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e76b0:;
    {
        cpu->r[14] = 0x001e76b4u; fn_001ebcf8(cpu);
    }
L_001e76b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_001e76b8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001e76bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e76c0u)) return;
    }
L_001e76c0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x90u);
    }
L_001e76c4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001e76c8:;
    {
        wr32(cpu->r[6] + + 0x94u, cpu->r[2]);
    }
L_001e76cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001e76d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7790;
        }
    }
L_001e76d4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e76d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e76e0u + + 0x124u);
    }
L_001e76dc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001e76e4u + + 0x124u);
    }
L_001e76e0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e76e4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e76e8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e76ec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e76f0:;
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
L_001e76f4:;
    {
        wr8(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001e76f8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[6], 0x0000005cu, 0, 0);
    }
L_001e76fc:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_001e7700:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[14] = base + 16u;
    }
L_001e7704:;
    {
        wr8(cpu->r[14], cpu->r[12]);
    }
L_001e7708:;
    {
        goto L_001e76ac;
    }
L_001e770c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x68u);
    }
L_001e7710:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[6] + + 0x64u);
    }
L_001e7714:;
    {
        vfp_vsub(cpu, 13, 15, 14);
    }
L_001e7718:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,13));
    }
L_001e771c:;
    {
        vfp_sync_flags(cpu);
    }
L_001e7720:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001e76ac;
        }
    }
L_001e7724:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001e7728:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], 0x0000005cu, 0, 0);
    }
L_001e772c:;
    {
        vfp_sync_flags(cpu);
    }
L_001e7730:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x60u);
        }
    }
L_001e7734:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e775c;
        }
    }
L_001e7738:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001e773c:;
    {
        vfp_sync_flags(cpu);
    }
L_001e7740:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[6] + + 0x60u);
        }
    }
L_001e7744:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[6] + + 0x5cu);
        }
    }
L_001e7748:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 12, 12, 13);
        }
    }
L_001e774c:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x5cu);
        }
    }
L_001e7750:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 14, 14, 12);
        }
    }
L_001e7754:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vdiv(cpu, 15, 14, 15);
        }
    }
L_001e7758:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 15, 13, 15);
        }
    }
L_001e775c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001e7760:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e7764:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e7768:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e7770u + + 0x94u);
    }
L_001e776c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e7770:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e7774:;
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
L_001e7778:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e777c:;
    {
        wr8(cpu->r[13] + + 0x3cu, cpu->r[5]);
    }
L_001e7780:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_001e7784:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001e7788:;
    {
        wr8(cpu->r[12], cpu->r[14]);
    }
L_001e778c:;
    {
        goto L_001e76ac;
    }
L_001e7790:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x68u);
    }
L_001e7794:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[6] + + 0x64u);
    }
L_001e7798:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001e779c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], 0x0000005cu, 0, 0);
    }
L_001e77a0:;
    {
        vfp_sync_flags(cpu);
    }
L_001e77a4:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x60u);
        }
    }
L_001e77a8:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001e77d0;
        }
    }
L_001e77ac:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001e77b0:;
    {
        vfp_sync_flags(cpu);
    }
L_001e77b4:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[6] + + 0x60u);
        }
    }
L_001e77b8:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[6] + + 0x5cu);
        }
    }
L_001e77bc:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 12, 12, 13);
        }
    }
L_001e77c0:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x5cu);
        }
    }
L_001e77c4:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 14, 14, 12);
        }
    }
L_001e77c8:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vdiv(cpu, 15, 14, 15);
        }
    }
L_001e77cc:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 15, 13, 15);
        }
    }
L_001e77d0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001e77d4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e77d8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e77dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e77e4u + + 0x20u);
    }
L_001e77e0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e77e4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e77e8:;
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
L_001e77ec:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e77f0:;
    {
        wr8(cpu->r[13] + + 0x28u, cpu->r[5]);
    }
L_001e77f4:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_001e77f8:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001e77fc:;
    {
        wr8(cpu->r[12], cpu->r[14]);
    }
L_001e7800:;
    {
        goto L_001e76ac;
    }
}

/* _ZN3vox17VoxEngineInternal5PauseEPNS_10EmitterObjEf @ 001e780c (arm) */
void fn_001e780c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e780c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e7810:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001e7814:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001e7818:;
    {
        return fn_001e7674(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal16PauseAllEmittersEjf @ 001e781c (arm) */
void fn_001e781c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e781c:;
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
L_001e7820:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e7824:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001e7828:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e782c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000090u, 0, 0);
    }
L_001e7830:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e7834:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e7838:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001e783c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], 0x00000058u, 0, 0);
    }
L_001e7840:;
    {
        cpu->r[14] = 0x001e7844u; fn_001ebdc8(cpu);
    }
L_001e7844:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e7848:;
    {
        cpu->r[14] = 0x001e784cu; fn_001ebdc8(cpu);
    }
L_001e784c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e7850:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001e7854:;
    {
        cpu->r[14] = 0x001e7858u; fn_001de2b4(cpu);
    }
L_001e7858:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e785c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e7860:;
    {
        cpu->r[14] = 0x001e7864u; fn_001de2c4(cpu);
    }
L_001e7864:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
    }
L_001e7868:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xcu);
    }
L_001e786c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001e7870:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e78b8;
        }
    }
L_001e7874:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x18u);
    }
L_001e7878:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e787c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e7880:;
    {
        cpu->r[14] = 0x001e7884u; fn_001dff14(cpu);
    }
L_001e7884:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e7888:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e7950;
        }
    }
L_001e788c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e7890:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e7894:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e78a0;
        }
    }
L_001e7898:;
    {
        goto L_001e796c;
    }
L_001e789c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e78a0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e78a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e78a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e789c;
        }
    }
L_001e78ac:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001e78b0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001e78b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e7874;
        }
    }
L_001e78b8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], 0x00000068u, 0, 0);
    }
L_001e78bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e78c0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001e78c4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_001e78c8:;
    {
        cpu->r[14] = 0x001e78ccu; fn_001de2b4(cpu);
    }
L_001e78cc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e78d0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001e78d4:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001e78d8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001e78dc:;
    {
        cpu->r[14] = 0x001e78e0u; fn_001de2c4(cpu);
    }
L_001e78e0:;
    {
        cpu->r[10] = rd32(cpu->r[13]);
    }
L_001e78e4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xcu);
    }
L_001e78e8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_001e78ec:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001e78f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7938;
        }
    }
L_001e78f4:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x18u);
    }
L_001e78f8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e78fc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e7900:;
    {
        cpu->r[14] = 0x001e7904u; fn_001dff14(cpu);
    }
L_001e7904:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e7908:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e79a0;
        }
    }
L_001e790c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e7910:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e7914:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e7920;
        }
    }
L_001e7918:;
    {
        goto L_001e79bc;
    }
L_001e791c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e7920:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e7924:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e7928:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e791c;
        }
    }
L_001e792c:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001e7930:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001e7934:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e78f4;
        }
    }
L_001e7938:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e793c:;
    {
        cpu->r[14] = 0x001e7940u; fn_001ebd9c(cpu);
    }
L_001e7940:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e7944:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001e7948:;
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
L_001e794c:;
    {
        return fn_001ebd9c(cpu);
    }
L_001e7950:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001e7954:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001e7958:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e795c:;
    {
        cpu->r[14] = 0x001e7960u; fn_001e780c(cpu);
    }
L_001e7960:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e7964:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e7968:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e78a0;
        }
    }
L_001e796c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e7970:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e7974:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001e7978:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e7994;
        }
    }
L_001e797c:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001e7980:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e7984:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e7988:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001e798c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e797c;
        }
    }
L_001e7990:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e7994:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e7998:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_001e799c:;
    {
        goto L_001e786c;
    }
L_001e79a0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001e79a4:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001e79a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e79ac:;
    {
        cpu->r[14] = 0x001e79b0u; fn_001e780c(cpu);
    }
L_001e79b0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e79b4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e79b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e7920;
        }
    }
L_001e79bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e79c0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e79c4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001e79c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e79e4;
        }
    }
L_001e79cc:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001e79d0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e79d4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e79d8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001e79dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e79cc;
        }
    }
L_001e79e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e79e4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e79e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_001e79ec:;
    {
        goto L_001e78ec;
    }
}

/* _ZN3vox17VoxEngineInternal5PauseERNS_13EmitterHandleEf @ 001e79f0 (arm) */
void fn_001e79f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e79f0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e79f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e79f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e79fc:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001e7a00:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e7a04:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001e7a08:;
    {
        cpu->r[14] = 0x001e7a0cu; fn_001ebdc8(cpu);
    }
L_001e7a0c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e7a10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e7a14:;
    {
        cpu->r[14] = 0x001e7a18u; fn_001e1ca0(cpu);
    }
L_001e7a18:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001e7a1c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001e7a20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e7a24:;
    {
        cpu->r[14] = 0x001e7a28u; fn_001e780c(cpu);
    }
L_001e7a28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e7a2c:;
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
L_001e7a30:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZNSt6vectorIN3vox12PriorityBankENS0_10SAllocatorIS1_LNS0_10VoxMemHintE0EEEE7reserveEj @ 001e7a34 (arm) */
void fn_001e7a34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e7a34:;
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
L_001e7a38:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001e7a3c:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_001e7a40:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001e7a44:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001e7a48:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_001e7a4c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001e7a50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001e7a54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_001e7a58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_001e7a5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_001e7a60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001e7a64:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001e7a68:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001e7bdc;
        }
    }
L_001e7a6c:;
    {
        cpu->r[3] = 0x0000aaaau;
    }
L_001e7a70:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0aaau << 16);
    }
L_001e7a74:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001e7a78:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001e7be4;
        }
    }
L_001e7a7c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x4u);
    }
L_001e7a80:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001e7a84:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_001e7a88:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001e7a8c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001e7a90:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 2, 4u, &shc), 0, 0);
    }
L_001e7a94:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 2, 8u, &shc), 0, 0);
    }
L_001e7a98:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 2, 16u, &shc), 0, 0);
    }
L_001e7a9c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], shifter(cpu->r[11], 2, 1u, &shc), 0, 0);
    }
L_001e7aa0:;
    {
        cpu->r[7] = cpu->r[11];
    }
L_001e7aa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7c00;
        }
    }
L_001e7aa8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001e7aac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e7ab0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 3u, &shc); cpu->r[3] = v;
    }
L_001e7ab4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001e7ab8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e7abc:;
    {
        cpu->r[14] = 0x001e7ac0u; fn_00097dd0(cpu);
    }
L_001e7ac0:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001e7ac4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_001e7ac8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e7b74;
        }
    }
L_001e7acc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e7ad0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001e7ad4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001e7ad8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e7adc:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x10u);
    }
L_001e7ae0:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[2] = v1;
    }
L_001e7ae4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_001e7ae8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001e7aec:;
    {
        uint32_t v = cpu->r[8] & ~ 0x00000007u; cpu->r[8] = v;
    }
L_001e7af0:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_001e7af4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e7af8:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
        wr32(ea + 8u, cpu->r[6]);
    }
L_001e7afc:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[6]);
    }
L_001e7b00:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[6]);
    }
L_001e7b04:;
    {
        cpu->r[14] = 0x001e7b08u; fn_00097dd0(cpu);
    }
L_001e7b08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_001e7b0c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001e7b10:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001e7b14:;
    {
        cpu->r[14] = cpu->r[0];
    }
L_001e7b18:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0xcu);
    }
L_001e7b1c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e7b20:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x10u);
    }
L_001e7b24:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[2]);
    }
L_001e7b28:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 0);
    }
L_001e7b2c:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 3u, &shc); cpu->r[10] = v;
    }
L_001e7b30:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001e7b34:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e7b60;
        }
    }
L_001e7b38:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001e7b3c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001e7b40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_001e7b44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], cpu->r[3], 0, 0);
    }
L_001e7b48:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001e7b4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e7b50:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001e7b54:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001e7b58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e7b40;
        }
    }
L_001e7b5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], shifter(cpu->r[10], 2, 3u, &shc), 0, 0);
    }
L_001e7b60:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_001e7b64:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001e7b68:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
        }
    }
L_001e7b6c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
        }
    }
L_001e7b70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e7ad4;
        }
    }
L_001e7b74:;
    {
        cpu->r[4] = rd32(cpu->r[9] + + 0x4u);
    }
L_001e7b78:;
    {
        cpu->r[5] = rd32(cpu->r[9]);
    }
L_001e7b7c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001e7b80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7bb4;
        }
    }
L_001e7b84:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000018u, 1, 0);
    }
L_001e7b88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e7b8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001e7b90:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e7b94:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
        }
    }
L_001e7b98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e7b9c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e7ba0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7ba8;
        }
    }
L_001e7ba4:;
    {
        cpu->r[14] = 0x001e7ba8u; fn_00097dc8(cpu);
    }
L_001e7ba8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001e7bac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e7b84;
        }
    }
L_001e7bb0:;
    {
        cpu->r[5] = rd32(cpu->r[9]);
    }
L_001e7bb4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e7bb8:;
    {
        cpu->r[14] = 0x001e7bbcu; fn_00097dc8(cpu);
    }
L_001e7bbc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001e7bc0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 2, 1u, &shc), 0, 0);
    }
L_001e7bc4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001e7bc8:;
    {
        wr32(cpu->r[9], cpu->r[1]);
    }
L_001e7bcc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_001e7bd0:;
    {
        wr32(cpu->r[9] + + 0x8u, cpu->r[3]);
    }
L_001e7bd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[11], 2, 3u, &shc), 0, 0);
    }
L_001e7bd8:;
    {
        wr32(cpu->r[9] + + 0x4u, cpu->r[3]);
    }
L_001e7bdc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001e7be0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e7be4u)) return;
    }
L_001e7be4:;
    {
        cpu->r[0] = rd32(0x001e7becu + + 0x34u);
    }
L_001e7be8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e7bec:;
    {
        cpu->r[0] = add_flags(cpu, 0x001e7bf4u, cpu->r[0], 0, 0);
    }
L_001e7bf0:;
    {
        cpu->r[14] = 0x001e7bf4u; fn_00208298(cpu);
    }
L_001e7bf4:;
    {
        cpu->r[5] = rd32(cpu->r[9]);
    }
L_001e7bf8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e7bfc:;
    {
        goto L_001e7a7c;
    }
L_001e7c00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001e7c04:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e7c08:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 3u, &shc); cpu->r[3] = v;
    }
L_001e7c0c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001e7c10:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e7c14:;
    {
        cpu->r[14] = 0x001e7c18u; fn_00097dd0(cpu);
    }
L_001e7c18:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_001e7c1c:;
    {
        goto L_001e7bbc;
    }
}

/* sub_001e7c24 @ 001e7c24 (arm) */
void fn_001e7c24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e7c24:;
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
L_001e7c28:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001e7c2c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001e7c30:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_001e7c34:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001e7c38:;
    {
        cpu->r[3] = 0x0000aaaau;
    }
L_001e7c3c:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_001e7c40:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0aaau << 16);
    }
L_001e7c44:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001e7c48:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_001e7c4c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[1] = v;
    }
L_001e7c50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001e7c54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_001e7c58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_001e7c5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_001e7c60:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001e7c64:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001e7c68:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[1], 0, 0);
        }
    }
L_001e7c6c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_001e7c70:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001e7c74:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001e7d7c;
        }
    }
L_001e7c78:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001e7c7c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
        }
    }
L_001e7c80:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[2], 2, 3u, &shc); cpu->r[2] = v;
        }
    }
L_001e7c84:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
        }
    }
L_001e7c88:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001e7d7c;
        }
    }
L_001e7c8c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001e7c90:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e7c94:;
    {
        cpu->r[14] = 0x001e7c98u; fn_00097dd0(cpu);
    }
L_001e7c98:;
    {
        cpu->r[5] = rd32(cpu->r[9]);
    }
L_001e7c9c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 0);
    }
L_001e7ca0:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 3u, &shc); cpu->r[4] = v;
    }
L_001e7ca4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_001e7ca8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_001e7cac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 8u, &shc), 0, 0);
    }
L_001e7cb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 16u, &shc), 0, 0);
    }
L_001e7cb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001e7cb8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001e7cbc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e7cc0:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001e7cc4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = cpu->r[0];
        }
    }
L_001e7cc8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e7d94;
        }
    }
L_001e7ccc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e7cd0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e7cd4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001e7cd8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001e7cdc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e7ce0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x10u);
    }
L_001e7ce4:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[2] = v1;
    }
L_001e7ce8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_001e7cec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001e7cf0:;
    {
        uint32_t v = cpu->r[8] & ~ 0x00000007u; cpu->r[8] = v;
    }
L_001e7cf4:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_001e7cf8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e7cfc:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
        wr32(ea + 8u, cpu->r[6]);
    }
L_001e7d00:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[6]);
    }
L_001e7d04:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[6]);
    }
L_001e7d08:;
    {
        cpu->r[14] = 0x001e7d0cu; fn_00097dd0(cpu);
    }
L_001e7d0c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_001e7d10:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001e7d14:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001e7d18:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e7d1c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0xcu);
    }
L_001e7d20:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001e7d24:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x10u);
    }
L_001e7d28:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[1]);
    }
L_001e7d2c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 0);
    }
L_001e7d30:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 3u, &shc); cpu->r[10] = v;
    }
L_001e7d34:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001e7d38:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e7d64;
        }
    }
L_001e7d3c:;
    {
        cpu->r[12] = cpu->r[10];
    }
L_001e7d40:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001e7d44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[2], 0, 0);
    }
L_001e7d48:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001e7d4c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_001e7d50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001e7d54:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001e7d58:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001e7d5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e7d44;
        }
    }
L_001e7d60:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[10], 2, 3u, &shc), 0, 0);
    }
L_001e7d64:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_001e7d68:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[2]);
    }
L_001e7d6c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001e7d70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7d88;
        }
    }
L_001e7d74:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001e7d78:;
    {
        goto L_001e7cd8;
    }
L_001e7d7c:;
    {
        cpu->r[1] = (~0x0000000fu);
    }
L_001e7d80:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e7d84:;
    {
        goto L_001e7c8c;
    }
L_001e7d88:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e7d8c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001e7d90:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[11], shifter(cpu->r[4], 2, 3u, &shc), 0, 0);
    }
L_001e7d94:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001e7d98:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e7d9c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001e7da0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e7da4:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_001e7da8:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x10u);
    }
L_001e7dac:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e7db0:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[2] = v1;
    }
L_001e7db4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_001e7db8:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x8u);
    }
L_001e7dbc:;
    {
        uint32_t v = cpu->r[6] & ~ 0x00000007u; cpu->r[6] = v;
    }
L_001e7dc0:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_001e7dc4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e7dc8:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
        wr32(ea + 8u, cpu->r[5]);
    }
L_001e7dcc:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_001e7dd0:;
    {
        cpu->r[14] = 0x001e7dd4u; fn_00097dd0(cpu);
    }
L_001e7dd4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001e7dd8:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001e7ddc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_001e7de0:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001e7de4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001e7de8:;
    {
        cpu->r[14] = rd32(cpu->r[1] + + 0x10u);
    }
L_001e7dec:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e7df0:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0xcu);
    }
L_001e7df4:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[6]);
    }
L_001e7df8:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_001e7dfc:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 3u, &shc); cpu->r[14] = v;
    }
L_001e7e00:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[5], 1, 1);
    }
L_001e7e04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e7e2c;
        }
    }
L_001e7e08:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_001e7e0c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[5], 0, 0);
    }
L_001e7e10:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_001e7e14:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001e7e18:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001e7e1c:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001e7e20:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001e7e24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e7e0c;
        }
    }
L_001e7e28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[14], 2, 3u, &shc), 0, 0);
    }
L_001e7e2c:;
    {
        cpu->r[5] = rd32(cpu->r[9] + + 0x4u);
    }
L_001e7e30:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001e7e34:;
    {
        cpu->r[6] = rd32(cpu->r[9]);
    }
L_001e7e38:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001e7e3c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001e7e40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7e74;
        }
    }
L_001e7e44:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000018u, 1, 0);
    }
L_001e7e48:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001e7e4c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_001e7e50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e7e54:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x10u, cpu->r[3]);
        }
    }
L_001e7e58:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001e7e5c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e7e60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7e68;
        }
    }
L_001e7e64:;
    {
        cpu->r[14] = 0x001e7e68u; fn_00097dc8(cpu);
    }
L_001e7e68:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001e7e6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e7e44;
        }
    }
L_001e7e70:;
    {
        cpu->r[5] = rd32(cpu->r[9]);
    }
L_001e7e74:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e7e78:;
    {
        cpu->r[14] = 0x001e7e7cu; fn_00097dc8(cpu);
    }
L_001e7e7c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001e7e80:;
    {
        wr32(cpu->r[9] + + 0x4u, cpu->r[7]);
    }
L_001e7e84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[2], 0, 0);
    }
L_001e7e88:;
    {
        wr32(cpu->r[9], cpu->r[11]);
    }
L_001e7e8c:;
    {
        wr32(cpu->r[9] + + 0x8u, cpu->r[3]);
    }
L_001e7e90:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001e7e94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e7e98u)) return;
    }
}

/* _ZN3vox19PriorityBankManagerC1Ei @ 001e7e98 (arm) */
void fn_001e7e98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e7e98:;
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
L_001e7e9c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e7ea0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001e7ea4:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001e7ea8:;
    {
        wr32(cpu->r[5], cpu->r[1]);
    }
L_001e7eac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_001e7eb0:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[9]);
    }
L_001e7eb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001e7eb8:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[9]);
    }
L_001e7ebc:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[9]);
    }
L_001e7ec0:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001e7ec4:;
    {
        cpu->r[14] = 0x001e7ec8u; fn_001ebe50(cpu);
    }
L_001e7ec8:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_001e7ecc:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_001e7ed0:;
    {
        cpu->r[14] = 0x001e7ed4u; fn_001e7a34(cpu);
    }
L_001e7ed4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001e7ed8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_001e7edc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e7fe8;
        }
    }
L_001e7ee0:;
    {
        cpu->r[11] = 0x80000001u;
    }
L_001e7ee4:;
    {
        cpu->r[4] = cpu->r[9];
    }
L_001e7ee8:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_001e7eec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e7ef0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001e7ef4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0xcu);
    }
L_001e7ef8:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0x8u);
    }
L_001e7efc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_001e7f00:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001e7f04:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[4]);
    }
L_001e7f08:;
    {
        cpu->r[3] = (~0x80000000u);
    }
L_001e7f0c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[4]);
    }
L_001e7f10:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001e7f14:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001e7f18:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[4]);
    }
L_001e7f1c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001e7f20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7ff4;
        }
    }
L_001e7f24:;
    {
        cpu->r[3] = (~0x80000000u);
    }
L_001e7f28:;
    {
        wr32(cpu->r[7], cpu->r[11]);
    }
L_001e7f2c:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[3]);
    }
L_001e7f30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e7f34:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001e7f38:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e7f3c:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_001e7f40:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[4]);
    }
L_001e7f44:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[4]);
    }
L_001e7f48:;
    {
        wr32(cpu->r[7] + + 0x14u, cpu->r[4]);
    }
L_001e7f4c:;
    {
        cpu->r[14] = 0x001e7f50u; fn_00097dd0(cpu);
    }
L_001e7f50:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[0]);
    }
L_001e7f54:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e7f58:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[0]);
    }
L_001e7f5c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e7f60:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e7f64:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e7f68:;
    {
        wr32(cpu->r[7] + + 0x14u, cpu->r[0]);
    }
L_001e7f6c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[5], 1, 0);
    }
L_001e7f70:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 3u, &shc); cpu->r[10] = v;
    }
L_001e7f74:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001e7f78:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e7fa8;
        }
    }
L_001e7f7c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001e7f80:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001e7f84:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001e7f88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_001e7f8c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001e7f90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e7f94:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001e7f98:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001e7f9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e7f84;
        }
    }
L_001e7fa0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e7fa4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[10], 2, 3u, &shc), 0, 0);
    }
L_001e7fa8:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[3]);
    }
L_001e7fac:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x8u);
    }
L_001e7fb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_001e7fb4:;
    {
        wr32(cpu->r[8] + + 0x8u, cpu->r[3]);
    }
L_001e7fb8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e7fbc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001e7fc0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
        }
    }
L_001e7fc4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[5];
        }
    }
L_001e7fc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e7fcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e7fd4;
        }
    }
L_001e7fd0:;
    {
        cpu->r[14] = 0x001e7fd4u; fn_00097dc8(cpu);
    }
L_001e7fd4:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001e7fd8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001e7fdc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_001e7fe0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001e7ef4;
        }
    }
L_001e7fe4:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_001e7fe8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e7fec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001e7ff0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e7ff4u)) return;
    }
L_001e7ff4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e7ff8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[2] = v1;
    }
L_001e7ffc:;
    {
        cpu->r[14] = 0x001e8000u; fn_001e7c24(cpu);
    }
L_001e8000:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e8004:;
    {
        goto L_001e7fb8;
    }
}

/* _ZN3vox19PriorityBankManagerC1Ev @ 001e8008 (arm) */
void fn_001e8008(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e8008:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001e800c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e8010:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001e8014:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e8018:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e801c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001e8020:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001e8024:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_001e8028:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001e802c:;
    {
        cpu->r[14] = 0x001e8030u; fn_001ebe50(cpu);
    }
L_001e8030:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001e8034:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e8038:;
    {
        cpu->r[14] = 0x001e803cu; fn_001e7e98(cpu);
    }
L_001e803c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e8040:;
    {
        cpu->r[14] = 0x001e8044u; fn_001e7278(cpu);
    }
L_001e8044:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e8048:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001e804c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001e8050u)) return;
    }
}

/* _ZN3vox19PriorityBankManagerC2Ev @ 001e8050 (arm) */
void fn_001e8050(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e8050:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001e8054:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e8058:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001e805c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e8060:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e8064:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001e8068:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001e806c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_001e8070:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001e8074:;
    {
        cpu->r[14] = 0x001e8078u; fn_001ebe50(cpu);
    }
L_001e8078:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001e807c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e8080:;
    {
        cpu->r[14] = 0x001e8084u; fn_001e7e98(cpu);
    }
L_001e8084:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e8088:;
    {
        cpu->r[14] = 0x001e808cu; fn_001e7278(cpu);
    }
L_001e808c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e8090:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001e8094:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001e8098u)) return;
    }
}

/* _ZN3vox17VoxEngineInternalC1Ev @ 001e8098 (arm) */
void fn_001e8098(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e8098:;
    {
        cpu->r[3] = rd32(0x001e80a0u + + 0x2d8u);
    }
L_001e809c:;
    {
        cpu->r[2] = rd32(0x001e80a4u + + 0x2d8u);
    }
L_001e80a0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001e80a8u, cpu->r[3], 0, 0);
    }
L_001e80a4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e80a8:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001e80ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e80b0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001e80b8u + + 0x2b8u);
    }
L_001e80b4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001e80b8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000028u, 1, 0);
    }
L_001e80bc:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001e80c0:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001e80c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001e80c8:;
    {
        wr64(cpu->r[0] + + 0x10u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_001e80cc:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001e80d0:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_001e80d4:;
    {
        cpu->r[14] = 0x001e80d8u; fn_0018ba6c(cpu);
    }
L_001e80d8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e80dc:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x001e80e4u + + 0x290u);
    }
L_001e80e0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e80e4:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_001e80e8:;
    {
        wr8(cpu->r[3], cpu->r[5]);
    }
L_001e80ec:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[5]);
    }
L_001e80f0:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[3]);
    }
L_001e80f4:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[3]);
    }
L_001e80f8:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[5]);
    }
L_001e80fc:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001e8100:;
    {
        wr64(cpu->r[4] + + 0x20u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_001e8104:;
    {
        cpu->r[14] = 0x001e8108u; fn_0018ba6c(cpu);
    }
L_001e8108:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e810c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000003cu, 0, 0);
    }
L_001e8110:;
    {
        wr8(cpu->r[3], cpu->r[5]);
    }
L_001e8114:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[5]);
    }
L_001e8118:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[3]);
    }
L_001e811c:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[3]);
    }
L_001e8120:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[5]);
    }
L_001e8124:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001e8128:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[5]);
    }
L_001e812c:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[5]);
    }
L_001e8130:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[5]);
    }
L_001e8134:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[5]);
    }
L_001e8138:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[5]);
    }
L_001e813c:;
    {
        cpu->r[14] = 0x001e8140u; fn_001ebe50(cpu);
    }
L_001e8140:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[5]);
    }
L_001e8144:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[5]);
    }
L_001e8148:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_001e814c:;
    {
        cpu->r[14] = 0x001e8150u; fn_001ebe50(cpu);
    }
L_001e8150:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000004cu, 0, 0);
    }
L_001e8154:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000054u, 0, 0);
    }
L_001e8158:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001e815c:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001e8160:;
    {
        cpu->r[14] = 0x001e8164u; fn_001ebe50(cpu);
    }
L_001e8164:;
    {
        wr64(cpu->r[4] + + 0x60u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_001e8168:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_001e816c:;
    {
        cpu->r[14] = 0x001e8170u; fn_0018ba6c(cpu);
    }
L_001e8170:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e8174:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_001e8178:;
    {
        wr8(cpu->r[3], cpu->r[5]);
    }
L_001e817c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[5]);
    }
L_001e8180:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[3]);
    }
L_001e8184:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[3]);
    }
L_001e8188:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[5]);
    }
L_001e818c:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001e8190:;
    {
        wr64(cpu->r[4] + + 0x70u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_001e8194:;
    {
        cpu->r[14] = 0x001e8198u; fn_0018ba6c(cpu);
    }
L_001e8198:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e819c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000008cu, 0, 0);
    }
L_001e81a0:;
    {
        wr8(cpu->r[3], cpu->r[5]);
    }
L_001e81a4:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[5]);
    }
L_001e81a8:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[3]);
    }
L_001e81ac:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[3]);
    }
L_001e81b0:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[5]);
    }
L_001e81b4:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_001e81b8:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[5]);
    }
L_001e81bc:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[5]);
    }
L_001e81c0:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[5]);
    }
L_001e81c4:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[5]);
    }
L_001e81c8:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[5]);
    }
L_001e81cc:;
    {
        cpu->r[14] = 0x001e81d0u; fn_001ebe50(cpu);
    }
L_001e81d0:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[5]);
    }
L_001e81d4:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[5]);
    }
L_001e81d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000098u, 0, 0);
    }
L_001e81dc:;
    {
        cpu->r[14] = 0x001e81e0u; fn_001ebe50(cpu);
    }
L_001e81e0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001e81e4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001e81e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000000b4u, 0, 0);
    }
L_001e81ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000334u, 0, 0);
    }
L_001e81f0:;
    {
        wr8(cpu->r[4] + + 0xb0u, cpu->r[0]);
    }
L_001e81f4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e81f8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e81fc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8200:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001e8204:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8208:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001e820c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8210:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8214:;
    {
        wr8(cpu->r[3] + + 0x10u, cpu->r[1]);
    }
L_001e8218:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000014u, 0, 0);
    }
L_001e821c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e8220:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e8204;
        }
    }
L_001e8224:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000003b4u, 0, 0);
    }
L_001e8228:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e822c:;
    {
        cpu->r[14] = 0x001e8230u; fn_001ebe50(cpu);
    }
L_001e8230:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000003fcu, 0, 0);
    }
L_001e8234:;
    {
        wr32(cpu->r[4] + + 0x484u, cpu->r[5]);
    }
L_001e8238:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_001e823c:;
    {
        wr32(cpu->r[4] + + 0x400u, cpu->r[3]);
    }
L_001e8240:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3b8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8244:;
    {
        wr32(cpu->r[4] + + 0x3fcu, cpu->r[3]);
    }
L_001e8248:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3bcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e824c:;
    {
        wr32(cpu->r[4] + + 0x508u, cpu->r[5]);
    }
L_001e8250:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3c0u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8254:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3c4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8258:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3c8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e825c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3ccu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8260:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3d0u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8264:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3d4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8268:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3d8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e826c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3dcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8270:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3e0u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8274:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3e4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8278:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_001e827c:;
    {
        cpu->r[14] = 0x001e8280u; fn_001e38a4(cpu);
    }
L_001e8280:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000028u, 0, 0);
    }
L_001e8284:;
    {
        cpu->r[14] = 0x001e8288u; fn_001e3930(cpu);
    }
L_001e8288:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001e828c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8290:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001e8294:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8298:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e829c:;
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
L_001e82a0:;
    {
        wr8(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_001e82a4:;
    {
        cpu->r[14] = cpu->r[5];
    }
L_001e82a8:;
    {
        cpu->r[6] = cpu->r[13];
    }
L_001e82ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x000000a0u, 0, 0);
    }
L_001e82b0:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001e82b4:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[5] = base + 16u;
    }
L_001e82b8:;
    {
        wr8(cpu->r[5], cpu->r[12]);
    }
L_001e82bc:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_001e82c0:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e82c4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001e82c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e82cc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e82d0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], shifter(cpu->r[14], 2, 2u, &shc), 0, 0);
    }
L_001e82d4:;
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
        cpu->r[7] = base + 16u;
    }
L_001e82d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_001e82dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000b4u, 0, 0);
    }
L_001e82e0:;
    {
        wr8(cpu->r[13] + + 0x10u, cpu->r[8]);
    }
L_001e82e4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_001e82e8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e82ec:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000020u, 1, 1);
    }
L_001e82f0:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001e82f4:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001e82f8:;
    {
        wr8(cpu->r[12], cpu->r[2]);
    }
L_001e82fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e82bc;
        }
    }
L_001e8300:;
    {
        wr8(cpu->r[4] + + 0x3f4u, cpu->r[5]);
    }
L_001e8304:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e8308:;
    {
        wr8(cpu->r[4] + + 0x3f5u, cpu->r[5]);
    }
L_001e830c:;
    {
        wr8(cpu->r[4] + + 0x3f6u, cpu->r[5]);
    }
L_001e8310:;
    {
        wr8(cpu->r[4] + + 0x3f7u, cpu->r[5]);
    }
L_001e8314:;
    {
        wr8(cpu->r[4] + + 0x3f8u, cpu->r[5]);
    }
L_001e8318:;
    {
        wr8(cpu->r[4] + + 0x3f9u, cpu->r[5]);
    }
L_001e831c:;
    {
        cpu->r[14] = 0x001e8320u; fn_001de154(cpu);
    }
L_001e8320:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_001e8324:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e8328:;
    {
        cpu->r[14] = 0x001e832cu; fn_00097dd0(cpu);
    }
L_001e832c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001e8330:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e8334:;
    {
        cpu->r[14] = 0x001e8338u; fn_001e7e98(cpu);
    }
L_001e8338:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[6]);
    }
L_001e833c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000510u, 0, 0);
    }
L_001e8340:;
    {
        wr32(cpu->r[4] + + 0x50cu, cpu->r[5]);
    }
L_001e8344:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e8348:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_001e834c:;
    {
        cpu->r[14] = 0x001e8350u; imp_memset(cpu); /* memset */
    }
L_001e8350:;
    {
        wr32(cpu->r[4] + + 0x55cu, cpu->r[5]);
    }
L_001e8354:;
    {
        wr32(cpu->r[4] + + 0x550u, cpu->r[5]);
    }
L_001e8358:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e835c:;
    {
        wr32(cpu->r[4] + + 0x554u, cpu->r[5]);
    }
L_001e8360:;
    {
        wr32(cpu->r[4] + + 0x558u, cpu->r[5]);
    }
L_001e8364:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001e8368:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001e836c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e8370u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal20GetVoxEngineInternalEv @ 001e8380 (arm) */
void fn_001e8380(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e8380:;
    {
        cpu->r[3] = rd32(0x001e8388u + + 0x40u);
    }
L_001e8384:;
    {
        cpu->r[2] = rd32(0x001e838cu + + 0x40u);
    }
L_001e8388:;
    {
        cpu->r[3] = add_flags(cpu, 0x001e8390u, cpu->r[3], 0, 0);
    }
L_001e838c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e8390:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001e8394:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_001e8398:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001e839c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e83a8;
        }
    }
L_001e83a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e83a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e83a8u)) return;
    }
L_001e83a8:;
    {
        cpu->r[0] = 0x00000560u;
    }
L_001e83ac:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e83b0:;
    {
        cpu->r[14] = 0x001e83b4u; fn_00097dd0(cpu);
    }
L_001e83b4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e83b8:;
    {
        cpu->r[14] = 0x001e83bcu; fn_001e8098(cpu);
    }
L_001e83bc:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_001e83c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e83c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e83c8u)) return;
    }
}

/* _ZN3vox17VoxEngineInternalC2Ev @ 001e83d0 (arm) */
void fn_001e83d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e83d0:;
    {
        cpu->r[3] = rd32(0x001e83d8u + + 0x2d8u);
    }
L_001e83d4:;
    {
        cpu->r[2] = rd32(0x001e83dcu + + 0x2d8u);
    }
L_001e83d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001e83e0u, cpu->r[3], 0, 0);
    }
L_001e83dc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e83e0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001e83e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e83e8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001e83f0u + + 0x2b8u);
    }
L_001e83ec:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001e83f0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000028u, 1, 0);
    }
L_001e83f4:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001e83f8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001e83fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001e8400:;
    {
        wr64(cpu->r[0] + + 0x10u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_001e8404:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001e8408:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_001e840c:;
    {
        cpu->r[14] = 0x001e8410u; fn_0018ba6c(cpu);
    }
L_001e8410:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e8414:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x001e841cu + + 0x290u);
    }
L_001e8418:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e841c:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_001e8420:;
    {
        wr8(cpu->r[3], cpu->r[5]);
    }
L_001e8424:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[5]);
    }
L_001e8428:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[3]);
    }
L_001e842c:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[3]);
    }
L_001e8430:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[5]);
    }
L_001e8434:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001e8438:;
    {
        wr64(cpu->r[4] + + 0x20u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_001e843c:;
    {
        cpu->r[14] = 0x001e8440u; fn_0018ba6c(cpu);
    }
L_001e8440:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e8444:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000003cu, 0, 0);
    }
L_001e8448:;
    {
        wr8(cpu->r[3], cpu->r[5]);
    }
L_001e844c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[5]);
    }
L_001e8450:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[3]);
    }
L_001e8454:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[3]);
    }
L_001e8458:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[5]);
    }
L_001e845c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001e8460:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[5]);
    }
L_001e8464:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[5]);
    }
L_001e8468:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[5]);
    }
L_001e846c:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[5]);
    }
L_001e8470:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[5]);
    }
L_001e8474:;
    {
        cpu->r[14] = 0x001e8478u; fn_001ebe50(cpu);
    }
L_001e8478:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[5]);
    }
L_001e847c:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[5]);
    }
L_001e8480:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_001e8484:;
    {
        cpu->r[14] = 0x001e8488u; fn_001ebe50(cpu);
    }
L_001e8488:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000004cu, 0, 0);
    }
L_001e848c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000054u, 0, 0);
    }
L_001e8490:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001e8494:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001e8498:;
    {
        cpu->r[14] = 0x001e849cu; fn_001ebe50(cpu);
    }
L_001e849c:;
    {
        wr64(cpu->r[4] + + 0x60u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_001e84a0:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_001e84a4:;
    {
        cpu->r[14] = 0x001e84a8u; fn_0018ba6c(cpu);
    }
L_001e84a8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e84ac:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_001e84b0:;
    {
        wr8(cpu->r[3], cpu->r[5]);
    }
L_001e84b4:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[5]);
    }
L_001e84b8:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[3]);
    }
L_001e84bc:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[3]);
    }
L_001e84c0:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[5]);
    }
L_001e84c4:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001e84c8:;
    {
        wr64(cpu->r[4] + + 0x70u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_001e84cc:;
    {
        cpu->r[14] = 0x001e84d0u; fn_0018ba6c(cpu);
    }
L_001e84d0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e84d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000008cu, 0, 0);
    }
L_001e84d8:;
    {
        wr8(cpu->r[3], cpu->r[5]);
    }
L_001e84dc:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[5]);
    }
L_001e84e0:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[3]);
    }
L_001e84e4:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[3]);
    }
L_001e84e8:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[5]);
    }
L_001e84ec:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_001e84f0:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[5]);
    }
L_001e84f4:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[5]);
    }
L_001e84f8:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[5]);
    }
L_001e84fc:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[5]);
    }
L_001e8500:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[5]);
    }
L_001e8504:;
    {
        cpu->r[14] = 0x001e8508u; fn_001ebe50(cpu);
    }
L_001e8508:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[5]);
    }
L_001e850c:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[5]);
    }
L_001e8510:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000098u, 0, 0);
    }
L_001e8514:;
    {
        cpu->r[14] = 0x001e8518u; fn_001ebe50(cpu);
    }
L_001e8518:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001e851c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001e8520:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000000b4u, 0, 0);
    }
L_001e8524:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000334u, 0, 0);
    }
L_001e8528:;
    {
        wr8(cpu->r[4] + + 0xb0u, cpu->r[0]);
    }
L_001e852c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8530:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8534:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8538:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001e853c:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8540:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001e8544:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8548:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e854c:;
    {
        wr8(cpu->r[3] + + 0x10u, cpu->r[1]);
    }
L_001e8550:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000014u, 0, 0);
    }
L_001e8554:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e8558:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e853c;
        }
    }
L_001e855c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000003b4u, 0, 0);
    }
L_001e8560:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e8564:;
    {
        cpu->r[14] = 0x001e8568u; fn_001ebe50(cpu);
    }
L_001e8568:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000003fcu, 0, 0);
    }
L_001e856c:;
    {
        wr32(cpu->r[4] + + 0x484u, cpu->r[5]);
    }
L_001e8570:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_001e8574:;
    {
        wr32(cpu->r[4] + + 0x400u, cpu->r[3]);
    }
L_001e8578:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3b8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e857c:;
    {
        wr32(cpu->r[4] + + 0x3fcu, cpu->r[3]);
    }
L_001e8580:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3bcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8584:;
    {
        wr32(cpu->r[4] + + 0x508u, cpu->r[5]);
    }
L_001e8588:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3c0u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e858c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3c4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8590:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3c8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8594:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3ccu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8598:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3d0u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e859c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3d4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e85a0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3d8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e85a4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3dcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e85a8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3e0u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e85ac:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3e4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e85b0:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_001e85b4:;
    {
        cpu->r[14] = 0x001e85b8u; fn_001e38a4(cpu);
    }
L_001e85b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000028u, 0, 0);
    }
L_001e85bc:;
    {
        cpu->r[14] = 0x001e85c0u; fn_001e3930(cpu);
    }
L_001e85c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001e85c4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e85c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001e85cc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e85d0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e85d4:;
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
L_001e85d8:;
    {
        wr8(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_001e85dc:;
    {
        cpu->r[14] = cpu->r[5];
    }
L_001e85e0:;
    {
        cpu->r[6] = cpu->r[13];
    }
L_001e85e4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x000000a0u, 0, 0);
    }
L_001e85e8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001e85ec:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[5] = base + 16u;
    }
L_001e85f0:;
    {
        wr8(cpu->r[5], cpu->r[12]);
    }
L_001e85f4:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_001e85f8:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e85fc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001e8600:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8604:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001e8608:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], shifter(cpu->r[14], 2, 2u, &shc), 0, 0);
    }
L_001e860c:;
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
        cpu->r[7] = base + 16u;
    }
L_001e8610:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_001e8614:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000b4u, 0, 0);
    }
L_001e8618:;
    {
        wr8(cpu->r[13] + + 0x10u, cpu->r[8]);
    }
L_001e861c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_001e8620:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e8624:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000020u, 1, 1);
    }
L_001e8628:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001e862c:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001e8630:;
    {
        wr8(cpu->r[12], cpu->r[2]);
    }
L_001e8634:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e85f4;
        }
    }
L_001e8638:;
    {
        wr8(cpu->r[4] + + 0x3f4u, cpu->r[5]);
    }
L_001e863c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e8640:;
    {
        wr8(cpu->r[4] + + 0x3f5u, cpu->r[5]);
    }
L_001e8644:;
    {
        wr8(cpu->r[4] + + 0x3f6u, cpu->r[5]);
    }
L_001e8648:;
    {
        wr8(cpu->r[4] + + 0x3f7u, cpu->r[5]);
    }
L_001e864c:;
    {
        wr8(cpu->r[4] + + 0x3f8u, cpu->r[5]);
    }
L_001e8650:;
    {
        wr8(cpu->r[4] + + 0x3f9u, cpu->r[5]);
    }
L_001e8654:;
    {
        cpu->r[14] = 0x001e8658u; fn_001de154(cpu);
    }
L_001e8658:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_001e865c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e8660:;
    {
        cpu->r[14] = 0x001e8664u; fn_00097dd0(cpu);
    }
L_001e8664:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001e8668:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e866c:;
    {
        cpu->r[14] = 0x001e8670u; fn_001e7e98(cpu);
    }
L_001e8670:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[6]);
    }
L_001e8674:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000510u, 0, 0);
    }
L_001e8678:;
    {
        wr32(cpu->r[4] + + 0x50cu, cpu->r[5]);
    }
L_001e867c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e8680:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_001e8684:;
    {
        cpu->r[14] = 0x001e8688u; imp_memset(cpu); /* memset */
    }
L_001e8688:;
    {
        wr32(cpu->r[4] + + 0x55cu, cpu->r[5]);
    }
L_001e868c:;
    {
        wr32(cpu->r[4] + + 0x550u, cpu->r[5]);
    }
L_001e8690:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e8694:;
    {
        wr32(cpu->r[4] + + 0x554u, cpu->r[5]);
    }
L_001e8698:;
    {
        wr32(cpu->r[4] + + 0x558u, cpu->r[5]);
    }
L_001e869c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001e86a0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001e86a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e86a8u)) return;
    }
}

/* _ZN3vox19PriorityBankManagerC2Ei @ 001e86b8 (arm) */
void fn_001e86b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e86b8:;
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
L_001e86bc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e86c0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001e86c4:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001e86c8:;
    {
        wr32(cpu->r[5], cpu->r[1]);
    }
L_001e86cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_001e86d0:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[9]);
    }
L_001e86d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001e86d8:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[9]);
    }
L_001e86dc:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[9]);
    }
L_001e86e0:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001e86e4:;
    {
        cpu->r[14] = 0x001e86e8u; fn_001ebe50(cpu);
    }
L_001e86e8:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_001e86ec:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_001e86f0:;
    {
        cpu->r[14] = 0x001e86f4u; fn_001e7a34(cpu);
    }
L_001e86f4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001e86f8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_001e86fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e8808;
        }
    }
L_001e8700:;
    {
        cpu->r[11] = 0x80000001u;
    }
L_001e8704:;
    {
        cpu->r[4] = cpu->r[9];
    }
L_001e8708:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_001e870c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e8710:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001e8714:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0xcu);
    }
L_001e8718:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0x8u);
    }
L_001e871c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_001e8720:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001e8724:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[4]);
    }
L_001e8728:;
    {
        cpu->r[3] = (~0x80000000u);
    }
L_001e872c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[4]);
    }
L_001e8730:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001e8734:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001e8738:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[4]);
    }
L_001e873c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001e8740:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8814;
        }
    }
L_001e8744:;
    {
        cpu->r[3] = (~0x80000000u);
    }
L_001e8748:;
    {
        wr32(cpu->r[7], cpu->r[11]);
    }
L_001e874c:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[3]);
    }
L_001e8750:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e8754:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001e8758:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e875c:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_001e8760:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[4]);
    }
L_001e8764:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[4]);
    }
L_001e8768:;
    {
        wr32(cpu->r[7] + + 0x14u, cpu->r[4]);
    }
L_001e876c:;
    {
        cpu->r[14] = 0x001e8770u; fn_00097dd0(cpu);
    }
L_001e8770:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[0]);
    }
L_001e8774:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e8778:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[0]);
    }
L_001e877c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e8780:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e8784:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e8788:;
    {
        wr32(cpu->r[7] + + 0x14u, cpu->r[0]);
    }
L_001e878c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[5], 1, 0);
    }
L_001e8790:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 3u, &shc); cpu->r[10] = v;
    }
L_001e8794:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001e8798:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e87c8;
        }
    }
L_001e879c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001e87a0:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001e87a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001e87a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_001e87ac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001e87b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e87b4:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001e87b8:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001e87bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e87a4;
        }
    }
L_001e87c0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e87c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[10], 2, 3u, &shc), 0, 0);
    }
L_001e87c8:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[3]);
    }
L_001e87cc:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x8u);
    }
L_001e87d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_001e87d4:;
    {
        wr32(cpu->r[8] + + 0x8u, cpu->r[3]);
    }
L_001e87d8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001e87dc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001e87e0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
        }
    }
L_001e87e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[5];
        }
    }
L_001e87e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e87ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e87f4;
        }
    }
L_001e87f0:;
    {
        cpu->r[14] = 0x001e87f4u; fn_00097dc8(cpu);
    }
L_001e87f4:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001e87f8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001e87fc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_001e8800:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001e8714;
        }
    }
L_001e8804:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_001e8808:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e880c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001e8810:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e8814u)) return;
    }
L_001e8814:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e8818:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[2] = v1;
    }
L_001e881c:;
    {
        cpu->r[14] = 0x001e8820u; fn_001e7c24(cpu);
    }
L_001e8820:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_001e8824:;
    {
        goto L_001e87d8;
    }
}

/* _ZN3vox19PriorityBankManager15AddPriorityBankEiiNS_20PriorityBankBehaviorE @ 001e8828 (arm) */
void fn_001e8828(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e8828:;
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
L_001e882c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e8830:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_001e8834:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001e8838:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e883c:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_001e8840:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001e8844:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_001e8848:;
    {
        cpu->r[14] = 0x001e884cu; fn_001ebcfc(cpu);
    }
L_001e884c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e8850:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x8u);
    }
L_001e8854:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001e8858:;
    {
        cpu->r[1] = 0x80000001u;
    }
L_001e885c:;
    {
        cpu->r[2] = (~0x80000000u);
    }
L_001e8860:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001e8864:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_001e8868:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001e886c:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001e8870:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[8]);
    }
L_001e8874:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[8]);
    }
L_001e8878:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_001e887c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8970;
        }
    }
L_001e8880:;
    {
        wr32(cpu->r[7], cpu->r[1]);
    }
L_001e8884:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e8888:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[2]);
    }
L_001e888c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e8890:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_001e8894:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[8]);
    }
L_001e8898:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[8]);
    }
L_001e889c:;
    {
        wr32(cpu->r[7] + + 0x14u, cpu->r[8]);
    }
L_001e88a0:;
    {
        cpu->r[14] = 0x001e88a4u; fn_00097dd0(cpu);
    }
L_001e88a4:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[0]);
    }
L_001e88a8:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001e88ac:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[0]);
    }
L_001e88b0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001e88b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001e88b8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_001e88bc:;
    {
        wr32(cpu->r[7] + + 0x14u, cpu->r[0]);
    }
L_001e88c0:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_001e88c4:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 3u, &shc); cpu->r[14] = v;
    }
L_001e88c8:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[8], 1, 1);
    }
L_001e88cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e88f8;
        }
    }
L_001e88d0:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_001e88d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_001e88d8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[12], cpu->r[8], 0, 0);
    }
L_001e88dc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001e88e0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000008u, 0, 0);
    }
L_001e88e4:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001e88e8:;
    {
        uint32_t base = cpu->r[10];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001e88ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e88d4;
        }
    }
L_001e88f0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001e88f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[14], 2, 3u, &shc), 0, 0);
    }
L_001e88f8:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[3]);
    }
L_001e88fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001e8900:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_001e8904:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001e8908:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001e890c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_001e8910:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
        }
    }
L_001e8914:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_001e8918:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e891c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8924;
        }
    }
L_001e8920:;
    {
        cpu->r[14] = 0x001e8924u; fn_00097dc8(cpu);
    }
L_001e8924:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
        cpu->r[3] = v2;
    }
L_001e8928:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_001e892c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001e8930:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_001e8934:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001e8938:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001e893c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 4u, &shc), 0, 0);
    }
L_001e8940:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 8u, &shc), 0, 0);
    }
L_001e8944:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 16u, &shc), 0, 0);
    }
L_001e8948:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_001e894c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_001e8950:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_001e8954:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = (~0x00000000u);
        }
    }
L_001e8958:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8988;
        }
    }
L_001e895c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e8960:;
    {
        cpu->r[14] = 0x001e8964u; fn_001ebcf8(cpu);
    }
L_001e8964:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e8968:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001e896c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e8970u)) return;
    }
L_001e8970:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_001e8974:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e8978:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001e897c:;
    {
        cpu->r[14] = 0x001e8980u; fn_001e7c24(cpu);
    }
L_001e8980:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001e8984:;
    {
        goto L_001e8908;
    }
L_001e8988:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_001e898c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e8990:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_001e8994:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[0], 2, 3u, &shc), cpu->r[11]);
    }
L_001e8998:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_001e899c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[9]);
    }
L_001e89a0:;
    {
        cpu->r[14] = 0x001e89a4u; fn_001e09fc(cpu);
    }
L_001e89a4:;
    {
        goto L_001e895c;
    }
}

/* _ZN3vox17VoxEngineInternal15AddPriorityBankEiiNS_20PriorityBankBehaviorE @ 001e89a8 (arm) */
void fn_001e89a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e89a8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x9cu);
    }
L_001e89ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e89b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e89b8;
        }
    }
L_001e89b4:;
    {
        return fn_001e8828(cpu);
    }
L_001e89b8:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001e89bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox10EmitterObj4StopEf @ 001e89c0 (arm) */
void fn_001e89c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e89c0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e89c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e89c8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e89cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000040u, 1, 0);
    }
L_001e89d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e89d4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e89d8:;
    {
        cpu->r[14] = 0x001e89dcu; fn_001ebcfc(cpu);
    }
L_001e89dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x90u);
    }
L_001e89e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001e89e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8a38;
        }
    }
L_001e89e8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001e89ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e89f4u + + 0x154u);
    }
L_001e89f0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001e89f8u + + 0x154u);
    }
L_001e89f4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e89f8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e89fc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e8a00:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e8a04:;
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
L_001e8a08:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001e8a0c:;
    {
        wr8(cpu->r[13] + + 0x3cu, cpu->r[6]);
    }
L_001e8a10:;
    {
        cpu->r[6] = 0x00000003u;
    }
L_001e8a14:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[6]);
    }
L_001e8a18:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x0000005cu, 0, 0);
    }
L_001e8a1c:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_001e8a20:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001e8a24:;
    {
        wr8(cpu->r[12], cpu->r[14]);
    }
L_001e8a28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e8a2c:;
    {
        cpu->r[14] = 0x001e8a30u; fn_001ebcf8(cpu);
    }
L_001e8a30:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_001e8a34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e8a38u)) return;
    }
L_001e8a38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001e8a3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001e8a40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8ac0;
        }
    }
L_001e8a44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x68u);
    }
L_001e8a48:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x64u);
    }
L_001e8a4c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001e8a50:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001e8a54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x0000005cu, 0, 0);
    }
L_001e8a58:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_001e8a5c:;
    {
        vfp_sync_flags(cpu);
    }
L_001e8a60:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x60u);
        }
    }
L_001e8a64:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001e8a8c;
        }
    }
L_001e8a68:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001e8a6c:;
    {
        vfp_sync_flags(cpu);
    }
L_001e8a70:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x60u);
        }
    }
L_001e8a74:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x5cu);
        }
    }
L_001e8a78:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 12, 12, 13);
        }
    }
L_001e8a7c:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x5cu);
        }
    }
L_001e8a80:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 14, 14, 12);
        }
    }
L_001e8a84:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vdiv(cpu, 15, 14, 15);
        }
    }
L_001e8a88:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 15, 13, 15);
        }
    }
L_001e8a8c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001e8a90:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e8a94:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[6]);
    }
L_001e8a98:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e8aa0u + + 0xa8u);
    }
L_001e8a9c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e8aa0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e8aa4:;
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
L_001e8aa8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001e8aac:;
    {
        wr8(cpu->r[13] + + 0x28u, cpu->r[4]);
    }
L_001e8ab0:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_001e8ab4:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001e8ab8:;
    {
        wr8(cpu->r[12], cpu->r[14]);
    }
L_001e8abc:;
    {
        goto L_001e8a28;
    }
L_001e8ac0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x68u);
    }
L_001e8ac4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x64u);
    }
L_001e8ac8:;
    {
        vfp_vsub(cpu, 13, 15, 14);
    }
L_001e8acc:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[6];
    }
L_001e8ad0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,13));
    }
L_001e8ad4:;
    {
        vfp_sync_flags(cpu);
    }
L_001e8ad8:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001e8a28;
        }
    }
L_001e8adc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001e8ae0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x0000005cu, 0, 0);
    }
L_001e8ae4:;
    {
        vfp_sync_flags(cpu);
    }
L_001e8ae8:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x60u);
        }
    }
L_001e8aec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e8b14;
        }
    }
L_001e8af0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001e8af4:;
    {
        vfp_sync_flags(cpu);
    }
L_001e8af8:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x60u);
        }
    }
L_001e8afc:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x5cu);
        }
    }
L_001e8b00:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 12, 12, 13);
        }
    }
L_001e8b04:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x5cu);
        }
    }
L_001e8b08:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 14, 14, 12);
        }
    }
L_001e8b0c:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vdiv(cpu, 15, 14, 15);
        }
    }
L_001e8b10:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 15, 13, 15);
        }
    }
L_001e8b14:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e8b18:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e8b1c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_001e8b20:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e8b28u + + 0x20u);
    }
L_001e8b24:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e8b28:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e8b2c:;
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
L_001e8b30:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001e8b34:;
    {
        wr8(cpu->r[13] + + 0x14u, cpu->r[4]);
    }
L_001e8b38:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_001e8b3c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001e8b40:;
    {
        wr8(cpu->r[12], cpu->r[14]);
    }
L_001e8b44:;
    {
        goto L_001e8a28;
    }
}

/* _ZN3vox19PriorityBankManager10AddEmitterEiPNS_10EmitterObjE @ 001e8b50 (arm) */
void fn_001e8b50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e8b50:;
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
L_001e8b54:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_001e8b58:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e8b5c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001e8b60:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e8b64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e8b68:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001e8b6c:;
    {
        cpu->r[14] = 0x001e8b70u; fn_001ebcfc(cpu);
    }
L_001e8b70:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001e8b74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8b90;
        }
    }
L_001e8b78:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001e8b7c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001e8b80:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001e8b84:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001e8b88:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[6], 3, 31u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001e8b8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8ba8;
        }
    }
L_001e8b90:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001e8b94:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e8b98:;
    {
        cpu->r[14] = 0x001e8b9cu; fn_001ebcf8(cpu);
    }
L_001e8b9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e8ba0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001e8ba4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e8ba8u)) return;
    }
L_001e8ba8:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x34u);
    }
L_001e8bac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e8bb0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e8b90;
        }
    }
L_001e8bb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e8bb8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e8bbc:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x2cu);
    }
L_001e8bc0:;
    {
        cpu->r[14] = 0x001e8bc4u; fn_001de620(cpu);
    }
L_001e8bc4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e8bc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8b90;
        }
    }
L_001e8bcc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_001e8bd0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e8bd4:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 3u, &shc); cpu->r[6] = v;
    }
L_001e8bd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_001e8bdc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e8be0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001e8be4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8c00;
        }
    }
L_001e8be8:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x10u);
    }
L_001e8bec:;
    {
        cpu->r[8] = rd32(cpu->r[2] + + 0xcu);
    }
L_001e8bf0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_001e8bf4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], cpu->r[8], 1, 0);
    }
L_001e8bf8:;
    {
        sub_flags(cpu, cpu->r[1], shifter(cpu->r[0], 1, 3u, &shc), 1, 1);
    }
L_001e8bfc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e8c20;
        }
    }
L_001e8c00:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x2cu);
    }
L_001e8c04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_001e8c08:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001e8c0c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[7]);
    }
L_001e8c10:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001e8c14:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001e8c18:;
    {
        cpu->r[14] = 0x001e8c1cu; fn_001e0904(cpu);
    }
L_001e8c1c:;
    {
        goto L_001e8b94;
    }
L_001e8c20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e8c24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e8c88;
        }
    }
L_001e8c28:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_001e8c2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e8c30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8c4c;
        }
    }
L_001e8c34:;
    {
        wr8(cpu->r[0] + + 0x34u, cpu->r[3]);
    }
L_001e8c38:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e8c3c:;
    {
        cpu->r[14] = 0x001e8c40u; fn_001e89c0(cpu);
    }
L_001e8c40:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e8c44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_001e8c48:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x10u);
    }
L_001e8c4c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[8], 1, 1);
    }
L_001e8c50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8c68;
        }
    }
L_001e8c54:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_001e8c58:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e8c5c:;
    {
        cpu->r[14] = 0x001e8c60u; fn_001de724(cpu);
    }
L_001e8c60:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e8c64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_001e8c68:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x2cu);
    }
L_001e8c6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_001e8c70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001e8c74:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[7]);
    }
L_001e8c78:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001e8c7c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001e8c80:;
    {
        cpu->r[14] = 0x001e8c84u; fn_001e0904(cpu);
    }
L_001e8c84:;
    {
        goto L_001e8b94;
    }
L_001e8c88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001e8c8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8d4c;
        }
    }
L_001e8c90:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[8], 1, 1);
    }
L_001e8c94:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x2cu);
    }
L_001e8c98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8b90;
        }
    }
L_001e8c9c:;
    {
        cpu->r[10] = cpu->r[12];
    }
L_001e8ca0:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001e8ca4:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001e8ca8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x2cu);
    }
L_001e8cac:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001e8cb0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001e8cc0;
        }
    }
L_001e8cb4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[10], 1, 1);
    }
L_001e8cb8:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
        }
    }
L_001e8cbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e8cc8;
        }
    }
L_001e8cc0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001e8cc4:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001e8cc8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e8ccc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001e8cd0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e8ca4;
        }
    }
L_001e8cd4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], 0x00000008u, 0, 0);
    }
L_001e8cd8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_001e8cdc:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000007u; cpu->r[3] = v;
    }
L_001e8ce0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e8ce4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_001e8ce8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_001e8cec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8b90;
        }
    }
L_001e8cf0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001e8cf4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e8cf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8d18;
        }
    }
L_001e8cfc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001e8d00:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e8d04:;
    {
        wr8(cpu->r[3] + + 0x34u, cpu->r[2]);
    }
L_001e8d08:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e8d0c:;
    {
        cpu->r[14] = 0x001e8d10u; fn_001e89c0(cpu);
    }
L_001e8d10:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e8d14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_001e8d18:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001e8d1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_001e8d20:;
    {
        cpu->r[14] = 0x001e8d24u; fn_001de724(cpu);
    }
L_001e8d24:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e8d28:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x2cu);
    }
L_001e8d2c:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001e8d30:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_001e8d34:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_001e8d38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_001e8d3c:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001e8d40:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001e8d44:;
    {
        cpu->r[14] = 0x001e8d48u; fn_001e0904(cpu);
    }
L_001e8d48:;
    {
        goto L_001e8b94;
    }
L_001e8d4c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[8], 1, 1);
    }
L_001e8d50:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x2cu);
    }
L_001e8d54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8b90;
        }
    }
L_001e8d58:;
    {
        cpu->r[10] = cpu->r[12];
    }
L_001e8d5c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001e8d60:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001e8d64:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x2cu);
    }
L_001e8d68:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001e8d6c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = cpu->r[3];
        }
    }
L_001e8d70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e8d74:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_001e8d78:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001e8d7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e8d60;
        }
    }
L_001e8d80:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], 0x00000008u, 0, 0);
    }
L_001e8d84:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_001e8d88:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000007u; cpu->r[3] = v;
    }
L_001e8d8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001e8d90:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_001e8d94:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_001e8d98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8b90;
        }
    }
L_001e8d9c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001e8da0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e8da4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8dc4;
        }
    }
L_001e8da8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001e8dac:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e8db0:;
    {
        wr8(cpu->r[3] + + 0x34u, cpu->r[2]);
    }
L_001e8db4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e8db8:;
    {
        cpu->r[14] = 0x001e8dbcu; fn_001e89c0(cpu);
    }
L_001e8dbc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e8dc0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_001e8dc4:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001e8dc8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_001e8dcc:;
    {
        cpu->r[14] = 0x001e8dd0u; fn_001de724(cpu);
    }
L_001e8dd0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e8dd4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x2cu);
    }
L_001e8dd8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e8ddc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_001e8de0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_001e8de4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_001e8de8:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001e8dec:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001e8df0:;
    {
        cpu->r[14] = 0x001e8df4u; fn_001e0904(cpu);
    }
L_001e8df4:;
    {
        goto L_001e8b94;
    }
}

/* _ZN3vox17VoxEngineInternal4StopEPNS_10EmitterObjEf @ 001e8df8 (arm) */
void fn_001e8df8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e8df8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001e8dfc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e8e00:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001e8e04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e8e08u)) return;
        }
    }
L_001e8e08:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x34u);
    }
L_001e8e0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e8e10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e8e2c;
        }
    }
L_001e8e14:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e8e18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e8e1c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e8e20:;
    {
        wr8(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001e8e24:;
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
L_001e8e28:;
    {
        return fn_001e89c0(cpu);
    }
L_001e8e2c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001e8e30:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x30u);
    }
L_001e8e34:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x9cu);
    }
L_001e8e38:;
    {
        cpu->r[14] = 0x001e8e3cu; fn_001e6f18(cpu);
    }
L_001e8e3c:;
    {
        goto L_001e8e14;
    }
}

/* _ZN3vox17VoxEngineInternal15StopAllEmittersEjf @ 001e8e40 (arm) */
void fn_001e8e40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e8e40:;
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
L_001e8e44:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e8e48:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001e8e4c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e8e50:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000090u, 0, 0);
    }
L_001e8e54:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e8e58:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e8e5c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001e8e60:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], 0x00000058u, 0, 0);
    }
L_001e8e64:;
    {
        cpu->r[14] = 0x001e8e68u; fn_001ebdc8(cpu);
    }
L_001e8e68:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e8e6c:;
    {
        cpu->r[14] = 0x001e8e70u; fn_001ebdc8(cpu);
    }
L_001e8e70:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e8e74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001e8e78:;
    {
        cpu->r[14] = 0x001e8e7cu; fn_001de2b4(cpu);
    }
L_001e8e7c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e8e80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e8e84:;
    {
        cpu->r[14] = 0x001e8e88u; fn_001de2c4(cpu);
    }
L_001e8e88:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
    }
L_001e8e8c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xcu);
    }
L_001e8e90:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001e8e94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8edc;
        }
    }
L_001e8e98:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x18u);
    }
L_001e8e9c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e8ea0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e8ea4:;
    {
        cpu->r[14] = 0x001e8ea8u; fn_001dff14(cpu);
    }
L_001e8ea8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e8eac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e8f74;
        }
    }
L_001e8eb0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e8eb4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e8eb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e8ec4;
        }
    }
L_001e8ebc:;
    {
        goto L_001e8f90;
    }
L_001e8ec0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e8ec4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e8ec8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e8ecc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e8ec0;
        }
    }
L_001e8ed0:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001e8ed4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001e8ed8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e8e98;
        }
    }
L_001e8edc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], 0x00000068u, 0, 0);
    }
L_001e8ee0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e8ee4:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001e8ee8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_001e8eec:;
    {
        cpu->r[14] = 0x001e8ef0u; fn_001de2b4(cpu);
    }
L_001e8ef0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e8ef4:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001e8ef8:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001e8efc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001e8f00:;
    {
        cpu->r[14] = 0x001e8f04u; fn_001de2c4(cpu);
    }
L_001e8f04:;
    {
        cpu->r[10] = rd32(cpu->r[13]);
    }
L_001e8f08:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xcu);
    }
L_001e8f0c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_001e8f10:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001e8f14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8f5c;
        }
    }
L_001e8f18:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x18u);
    }
L_001e8f1c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e8f20:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e8f24:;
    {
        cpu->r[14] = 0x001e8f28u; fn_001dff14(cpu);
    }
L_001e8f28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e8f2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e8fc4;
        }
    }
L_001e8f30:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e8f34:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e8f38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e8f44;
        }
    }
L_001e8f3c:;
    {
        goto L_001e8fe0;
    }
L_001e8f40:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e8f44:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e8f48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e8f4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e8f40;
        }
    }
L_001e8f50:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001e8f54:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001e8f58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e8f18;
        }
    }
L_001e8f5c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e8f60:;
    {
        cpu->r[14] = 0x001e8f64u; fn_001ebd9c(cpu);
    }
L_001e8f64:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e8f68:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001e8f6c:;
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
L_001e8f70:;
    {
        return fn_001ebd9c(cpu);
    }
L_001e8f74:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001e8f78:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001e8f7c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e8f80:;
    {
        cpu->r[14] = 0x001e8f84u; fn_001e8df8(cpu);
    }
L_001e8f84:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e8f88:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e8f8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e8ec4;
        }
    }
L_001e8f90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e8f94:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e8f98:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001e8f9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e8fb8;
        }
    }
L_001e8fa0:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001e8fa4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e8fa8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e8fac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001e8fb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8fa0;
        }
    }
L_001e8fb4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e8fb8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e8fbc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_001e8fc0:;
    {
        goto L_001e8e90;
    }
L_001e8fc4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001e8fc8:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001e8fcc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e8fd0:;
    {
        cpu->r[14] = 0x001e8fd4u; fn_001e8df8(cpu);
    }
L_001e8fd4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e8fd8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e8fdc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e8f44;
        }
    }
L_001e8fe0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e8fe4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e8fe8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001e8fec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9008;
        }
    }
L_001e8ff0:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001e8ff4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e8ff8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e8ffc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001e9000:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e8ff0;
        }
    }
L_001e9004:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e9008:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e900c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_001e9010:;
    {
        goto L_001e8f10;
    }
}

/* _ZN3vox17VoxEngineInternal4StopERNS_13EmitterHandleEf @ 001e9014 (arm) */
void fn_001e9014(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e9014:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e9018:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e901c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e9020:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001e9024:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e9028:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001e902c:;
    {
        cpu->r[14] = 0x001e9030u; fn_001ebdc8(cpu);
    }
L_001e9030:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e9034:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e9038:;
    {
        cpu->r[14] = 0x001e903cu; fn_001e1ca0(cpu);
    }
L_001e903c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001e9040:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001e9044:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e9048:;
    {
        cpu->r[14] = 0x001e904cu; fn_001e8df8(cpu);
    }
L_001e904c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e9050:;
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
L_001e9054:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox17VoxEngineInternal4PlayEPNS_10EmitterObjEbf @ 001e9058 (arm) */
void fn_001e9058(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e9058:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e905c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001e9060:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001e9064:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001e9068:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001e906c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e9070u)) return;
        }
    }
L_001e9070:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x34u);
    }
L_001e9074:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e9078:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e90ec;
        }
    }
L_001e907c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x9cu);
    }
L_001e9080:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e9084:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e9088u)) return;
        }
    }
L_001e9088:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x30u);
    }
L_001e908c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001e9090:;
    {
        cpu->r[14] = 0x001e9094u; fn_001e8b50(cpu);
    }
L_001e9094:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e9098:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e90d8;
        }
    }
L_001e909c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e90a0:;
    {
        cpu->r[14] = 0x001e90a4u; fn_001dfdb8(cpu);
    }
L_001e90a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e90a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e90b4;
        }
    }
L_001e90ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e90b0:;
    {
        cpu->r[14] = 0x001e90b4u; fn_001dfdfc(cpu);
    }
L_001e90b4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e90b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e90bc:;
    {
        cpu->r[14] = 0x001e90c0u; fn_001e718c(cpu);
    }
L_001e90c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e90c4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e90c8:;
    {
        cpu->r[14] = 0x001e90ccu; fn_001dfe24(cpu);
    }
L_001e90cc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e90d0:;
    {
        wr8(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001e90d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e90d8u)) return;
    }
L_001e90d8:;
    {
        wr8(cpu->r[4] + + 0x34u, cpu->r[0]);
    }
L_001e90dc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e90e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e90e4:;
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
L_001e90e8:;
    {
        return fn_001e89c0(cpu);
    }
L_001e90ec:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x9cu);
    }
L_001e90f0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001e90f4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x30u);
    }
L_001e90f8:;
    {
        cpu->r[14] = 0x001e90fcu; fn_001e6f18(cpu);
    }
L_001e90fc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x9cu);
    }
L_001e9100:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e9104:;
    {
        wr8(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001e9108:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e910c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9088;
        }
    }
L_001e9110:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e9114u)) return;
    }
}

/* _ZN3vox17VoxEngineInternal15PlayAllEmittersEjf @ 001e9114 (arm) */
void fn_001e9114(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e9114:;
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
L_001e9118:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e911c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001e9120:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e9124:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000090u, 0, 0);
    }
L_001e9128:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e912c:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001e9130:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001e9134:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], 0x00000058u, 0, 0);
    }
L_001e9138:;
    {
        cpu->r[14] = 0x001e913cu; fn_001ebdc8(cpu);
    }
L_001e913c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e9140:;
    {
        cpu->r[14] = 0x001e9144u; fn_001ebdc8(cpu);
    }
L_001e9144:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e9148:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001e914c:;
    {
        cpu->r[14] = 0x001e9150u; fn_001de2b4(cpu);
    }
L_001e9150:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001e9154:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001e9158:;
    {
        cpu->r[14] = 0x001e915cu; fn_001de2c4(cpu);
    }
L_001e915c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x8u);
    }
L_001e9160:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xcu);
    }
L_001e9164:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_001e9168:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e91b0;
        }
    }
L_001e916c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x18u);
    }
L_001e9170:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e9174:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e9178:;
    {
        cpu->r[14] = 0x001e917cu; fn_001dff14(cpu);
    }
L_001e917c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e9180:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9248;
        }
    }
L_001e9184:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e9188:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e918c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9198;
        }
    }
L_001e9190:;
    {
        goto L_001e9270;
    }
L_001e9194:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e9198:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e919c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e91a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9194;
        }
    }
L_001e91a4:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001e91a8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_001e91ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e916c;
        }
    }
L_001e91b0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00000068u, 0, 0);
    }
L_001e91b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e91b8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e91bc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_001e91c0:;
    {
        cpu->r[14] = 0x001e91c4u; fn_001de2b4(cpu);
    }
L_001e91c4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e91c8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001e91cc:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001e91d0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001e91d4:;
    {
        cpu->r[14] = 0x001e91d8u; fn_001de2c4(cpu);
    }
L_001e91d8:;
    {
        cpu->r[7] = rd32(cpu->r[13]);
    }
L_001e91dc:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xcu);
    }
L_001e91e0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_001e91e4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_001e91e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e9230;
        }
    }
L_001e91ec:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x18u);
    }
L_001e91f0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e91f4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e91f8:;
    {
        cpu->r[14] = 0x001e91fcu; fn_001dff14(cpu);
    }
L_001e91fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e9200:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e92a4;
        }
    }
L_001e9204:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e9208:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e920c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9218;
        }
    }
L_001e9210:;
    {
        goto L_001e92cc;
    }
L_001e9214:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001e9218:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e921c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e9220:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9214;
        }
    }
L_001e9224:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001e9228:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_001e922c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e91ec;
        }
    }
L_001e9230:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e9234:;
    {
        cpu->r[14] = 0x001e9238u; fn_001ebd9c(cpu);
    }
L_001e9238:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e923c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001e9240:;
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
L_001e9244:;
    {
        return fn_001ebd9c(cpu);
    }
L_001e9248:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e924c:;
    {
        cpu->r[14] = 0x001e9250u; fn_001dfe4c(cpu);
    }
L_001e9250:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001e9254:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001e9258:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001e925c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e9260:;
    {
        cpu->r[14] = 0x001e9264u; fn_001e9058(cpu);
    }
L_001e9264:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e9268:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e926c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9198;
        }
    }
L_001e9270:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e9274:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e9278:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001e927c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9298;
        }
    }
L_001e9280:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001e9284:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e9288:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e928c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001e9290:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e9280;
        }
    }
L_001e9294:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e9298:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e929c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_001e92a0:;
    {
        goto L_001e9164;
    }
L_001e92a4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e92a8:;
    {
        cpu->r[14] = 0x001e92acu; fn_001dfe4c(cpu);
    }
L_001e92ac:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001e92b0:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001e92b4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001e92b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e92bc:;
    {
        cpu->r[14] = 0x001e92c0u; fn_001e9058(cpu);
    }
L_001e92c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e92c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e92c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9218;
        }
    }
L_001e92cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001e92d0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e92d4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001e92d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e92f4;
        }
    }
L_001e92dc:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001e92e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001e92e4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001e92e8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001e92ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e92dc;
        }
    }
L_001e92f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001e92f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001e92f8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_001e92fc:;
    {
        goto L_001e91e4;
    }
}

/* _ZN3vox17VoxEngineInternal4PlayERNS_13EmitterHandleEbf @ 001e9300 (arm) */
void fn_001e9300(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e9300:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001e9304:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_001e9308:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e930c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001e9310:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e9314:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001e9318:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001e931c:;
    {
        cpu->r[14] = 0x001e9320u; fn_001ebdc8(cpu);
    }
L_001e9320:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001e9324:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e9328:;
    {
        cpu->r[14] = 0x001e932cu; fn_001e1ca0(cpu);
    }
L_001e932c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001e9330:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001e9334:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001e9338:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e933c:;
    {
        cpu->r[14] = 0x001e9340u; fn_001e9058(cpu);
    }
L_001e9340:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e9344:;
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
L_001e9348:;
    {
        return fn_001ebd9c(cpu);
    }
}

/* _ZN3vox10EmitterObjC1ExiiiPNS_21DriverSourceInterfaceEPNS_22DecoderCursorInterfaceEPNS_7DataObjE @ 001e934c (arm) */
void fn_001e934c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e934c:;
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
L_001e9350:;
    {
        cpu->r[6] = rd32(0x001e9358u + + 0x3a0u);
    }
L_001e9354:;
    {
        cpu->r[1] = rd32(0x001e935cu + + 0x3a0u);
    }
L_001e9358:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e935c:;
    {
        cpu->r[6] = add_flags(cpu, 0x001e9364u, cpu->r[6], 0, 0);
    }
L_001e9360:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_001e9364:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e9368:;
    {
        wr64(cpu->r[0] + + 0x8u, ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
    }
L_001e936c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_001e9370:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[5]);
    }
L_001e9374:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e9378:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001e937c:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_001e9380:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x50u);
    }
L_001e9384:;
    {
        cpu->r[14] = 0x001e9388u; fn_001ebe50(cpu);
    }
L_001e9388:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_001e938c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e9394u + + 0x350u);
    }
L_001e9390:;
    {
        cpu->r[1] = rd32(0x001e9398u + + 0x368u);
    }
L_001e9394:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001e939cu + + 0x34cu);
    }
L_001e9398:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e939c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e93a0:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[12]);
    }
L_001e93a4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e93a8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_001e93ac:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e93b0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_001e93b4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e93b8:;
    {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_001e93bc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e93c0:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[12]);
    }
L_001e93c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001e93c8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[5]);
    }
L_001e93cc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e93d0:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_001e93d4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e93d8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001e93dc:;
    {
        wr8(cpu->r[4] + + 0x34u, cpu->r[5]);
    }
L_001e93e0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[1]);
    }
L_001e93e4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e93e8:;
    {
        wr8(cpu->r[4] + + 0x58u, cpu->r[1]);
    }
L_001e93ec:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e93f0:;
    {
        wr8(cpu->r[4] + + 0x8cu, cpu->r[5]);
    }
L_001e93f4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e93f8:;
    {
        wr8(cpu->r[4] + + 0x8du, cpu->r[5]);
    }
L_001e93fc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e9400:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e9404:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e9408:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e940c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e9410:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e9414:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e9418:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[5]);
    }
L_001e941c:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001e9420:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[5]);
    }
L_001e9424:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001e9428:;
    {
        wr8(cpu->r[4] + + 0x6cu, cpu->r[1]);
    }
L_001e942c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e9430:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_001e9434:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x001e943cu + + 0x2b0u);
    }
L_001e9438:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001e9440u + + 0x2b0u);
    }
L_001e943c:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[1]);
    }
L_001e9440:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[1]);
    }
L_001e9444:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x001e944cu + + 0x2a8u);
    }
L_001e9448:;
    {
        wr32(cpu->r[4] + + 0x108u, cpu->r[12]);
    }
L_001e944c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_001e9450:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001e9454:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001e9458:;
    {
        wr8(cpu->r[4] + + 0x98u, cpu->r[5]);
    }
L_001e945c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xdcu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001e9460:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x124u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e9464:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9468:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[12]);
    }
L_001e946c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9470:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_001e9474:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9478:;
    {
        wr8(cpu->r[4] + + 0x99u, cpu->r[5]);
    }
L_001e947c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9480:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9484:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9488:;
    {
        wr32(cpu->r[4] + + 0x118u, cpu->r[12]);
    }
L_001e948c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9490:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9494:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xbcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9498:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001e949c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xccu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e94a0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd0u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001e94a4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e94a8:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[5]);
    }
L_001e94ac:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x120u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e94b0:;
    {
        wr32(cpu->r[4] + + 0xf0u, cpu->r[5]);
    }
L_001e94b4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x128u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e94b8:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[5]);
    }
L_001e94bc:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[5]);
    }
L_001e94c0:;
    {
        wr32(cpu->r[4] + + 0xfcu, cpu->r[5]);
    }
L_001e94c4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x12cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e94c8:;
    {
        wr8(cpu->r[4] + + 0x130u, cpu->r[1]);
    }
L_001e94cc:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001e94d0:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[5]);
    }
L_001e94d4:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[7]);
    }
L_001e94d8:;
    {
        wr8(cpu->r[4] + + 0x11cu, cpu->r[5]);
    }
L_001e94dc:;
    {
        wr8(cpu->r[4] + + 0x11du, cpu->r[5]);
    }
L_001e94e0:;
    {
        wr32(cpu->r[4] + + 0x134u, cpu->r[1]);
    }
L_001e94e4:;
    {
        wr32(cpu->r[4] + + 0x138u, cpu->r[5]);
    }
L_001e94e8:;
    {
        wr32(cpu->r[4] + + 0x13cu, cpu->r[5]);
    }
L_001e94ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001e94f0:;
    {
        wr8(cpu->r[2] + + 0xe0u, cpu->r[0]);
    }
L_001e94f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 1);
    }
L_001e94f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001e94fc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e9500:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e94ec;
        }
    }
L_001e9504:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001e9508:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[1]);
    }
L_001e950c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_001e9510:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
        }
    }
L_001e9514:;
    {
        wr32(cpu->r[4] + + 0x100u, cpu->r[1]);
    }
L_001e9518:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001e951c:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x11cu, cpu->r[3]);
        }
    }
L_001e9520:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e956c;
        }
    }
L_001e9524:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x118u);
    }
L_001e9528:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x50u);
    }
L_001e952c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e9530:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001e9534:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x3cu);
        }
    }
L_001e9538:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e953c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e9540:;
    {
        cpu->r[14] = 0x001e9548u;
    }
L_001e9544:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e9548u)) return;
    }
L_001e9548:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e954c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001e9550:;
    {
        wr8(cpu->r[4] + + 0x146u, cpu->r[3]);
    }
L_001e9554:;
    {
        wr8(cpu->r[4] + + 0x145u, cpu->r[2]);
    }
L_001e9558:;
    {
        wr8(cpu->r[4] + + 0x144u, cpu->r[3]);
    }
L_001e955c:;
    {
        wr32(cpu->r[4] + + 0x140u, cpu->r[0]);
    }
L_001e9560:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e9564:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001e9568:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e956cu)) return;
    }
L_001e956c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x114u);
    }
L_001e9570:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e9574:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e9578:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0xcu);
    }
L_001e957c:;
    {
        cpu->r[14] = rd32(cpu->r[2] + + 0x10u);
    }
L_001e9580:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x4u);
    }
L_001e9584:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[1] = v;
    }
L_001e9588:;
    {
        uint32_t v = cpu->r[14] * cpu->r[1]; cpu->r[1] = v;
    }
L_001e958c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[1] = v;
    }
L_001e9590:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[1]);
    }
L_001e9594:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e9598:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x4u);
    }
L_001e959c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xcu);
    }
L_001e95a0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[1] = v;
    }
L_001e95a4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[2] = v;
    }
L_001e95a8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1]; cpu->r[2] = v;
    }
L_001e95ac:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[2]);
    }
L_001e95b0:;
    {
        cpu->r[14] = 0x001e95b8u;
    }
L_001e95b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e95b8u)) return;
    }
L_001e95b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e95bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9630;
        }
    }
L_001e95c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001e95c4:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001e95c8:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[6]);
    }
L_001e95cc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e95d0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e95d4:;
    {
        cpu->r[14] = 0x001e95dcu;
    }
L_001e95d8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e95dcu)) return;
    }
L_001e95dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e95e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e969c;
        }
    }
L_001e95e4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e95e8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e95ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e95f0:;
    {
        cpu->r[14] = 0x001e95f4u; fn_001e14dc(cpu);
    }
L_001e95f4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e95f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000f4u, 0, 0);
    }
L_001e95fc:;
    {
        cpu->r[14] = 0x001e9600u; fn_001e46cc(cpu);
    }
L_001e9600:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e9604:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e9608:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e9694;
        }
    }
L_001e960c:;
    {
        cpu->r[14] = 0x001e9610u; fn_00097dc8(cpu);
    }
L_001e9610:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x104u);
    }
L_001e9614:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e9618:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9624;
        }
    }
L_001e961c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e9620:;
    {
        wr8(cpu->r[4] + + 0x11cu, cpu->r[3]);
    }
L_001e9624:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e9628:;
    {
        cpu->r[14] = 0x001e962cu; fn_001dfad0(cpu);
    }
L_001e962c:;
    {
        goto L_001e9524;
    }
L_001e9630:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001e9634:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e9638:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e963c:;
    {
        cpu->r[14] = 0x001e9644u;
    }
L_001e9640:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e9644u)) return;
    }
L_001e9644:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001e9648:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001e964c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e9650:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e9654:;
    {
        cpu->r[14] = 0x001e965cu;
    }
L_001e9658:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e965cu)) return;
    }
L_001e965c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e9660:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e96cc;
        }
    }
L_001e9664:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e9668:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001e966c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001e9670:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[3]);
    }
L_001e9674:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e9678:;
    {
        cpu->r[14] = 0x001e967cu; fn_001e14dc(cpu);
    }
L_001e967c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e9680:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000f4u, 0, 0);
    }
L_001e9684:;
    {
        cpu->r[14] = 0x001e9688u; fn_001e46cc(cpu);
    }
L_001e9688:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001e968c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e9690:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e960c;
        }
    }
L_001e9694:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x104u);
    }
L_001e9698:;
    {
        goto L_001e9614;
    }
L_001e969c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x108u);
    }
L_001e96a0:;
    {
        cpu->r[14] = 0x001e96a4u; fn_00097dd4(cpu);
    }
L_001e96a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001e96a8:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x4u;
        wr32(cpu->r[1] + - 0x4u, cpu->r[0]);
        cpu->r[1] = wb_tmp;
    }
L_001e96ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000f4u, 0, 0);
    }
L_001e96b0:;
    {
        cpu->r[14] = 0x001e96b4u; fn_001e1528(cpu);
    }
L_001e96b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001e96b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e96bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e96c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9694;
        }
    }
L_001e96c4:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[3]);
    }
L_001e96c8:;
    {
        goto L_001e961c;
    }
L_001e96cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000f4u, 0, 0);
    }
L_001e96d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001e96d4:;
    {
        cpu->r[14] = 0x001e96d8u; fn_001e1144(cpu);
    }
L_001e96d8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001e96dc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001e9734;
        }
    }
L_001e96e0:;
    {
        goto L_001e9694;
    }
L_001e9704:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001e9708:;
    {
        uint32_t wb_tmp = cpu->r[9] + 0x00000004u;
        wr32(cpu->r[9], cpu->r[0]);
        cpu->r[9] = wb_tmp;
    }
L_001e970c:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[9]);
    }
L_001e9710:;
    {
        cpu->r[3] = rd32(cpu->r[6] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001e9714:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e9718:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e9694;
        }
    }
L_001e971c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001e9720:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x104u);
    }
L_001e9724:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 1);
    }
L_001e9728:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001e972c:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[3]);
    }
L_001e9730:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001e9614;
        }
    }
L_001e9734:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x108u);
    }
L_001e9738:;
    {
        cpu->r[14] = 0x001e973cu; fn_00097dd4(cpu);
    }
L_001e973c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0xf8u);
    }
L_001e9740:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xfcu);
    }
L_001e9744:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001e9748:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001e974c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9704;
        }
    }
L_001e9750:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001e9754:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_001e9758:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001e975c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001e9760:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001e9764:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[10] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001e9768:;
    {
        add_flags(cpu, cpu->r[10], 0xc0000001u, 0, 1);
    }
L_001e976c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001e97cc;
        }
    }
L_001e9770:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001e9774:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[10] = v;
        }
    }
L_001e9778:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001e97cc;
        }
    }
L_001e977c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e9780:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e9784:;
    {
        cpu->r[14] = 0x001e9788u; fn_00097dd0(cpu);
    }
L_001e9788:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001e978c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 1);
    }
L_001e9790:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001e9794:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = cpu->r[0];
        }
    }
L_001e9798:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e97ac;
        }
    }
L_001e979c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001e97a0:;
    {
        cpu->r[14] = 0x001e97a4u; imp_memmove(cpu); /* memmove */
    }
L_001e97a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001e97a8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_001e97ac:;
    {
        uint32_t wb_tmp = cpu->r[9] + 0x00000004u;
        wr32(cpu->r[9], cpu->r[7]);
        cpu->r[9] = wb_tmp;
    }
L_001e97b0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001e97b4:;
    {
        cpu->r[14] = 0x001e97b8u; fn_00097dc8(cpu);
    }
L_001e97b8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], cpu->r[10], 0, 0);
    }
L_001e97bc:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[9]);
    }
L_001e97c0:;
    {
        wr32(cpu->r[4] + + 0xfcu, cpu->r[10]);
    }
L_001e97c4:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[6]);
    }
L_001e97c8:;
    {
        goto L_001e9710;
    }
L_001e97cc:;
    {
        cpu->r[10] = (~0x00000003u);
    }
L_001e97d0:;
    {
        goto L_001e977c;
    }
}

/* _ZN3vox17VoxEngineInternal13CreateEmitterERNS_10DataHandleEiPv @ 001e97d4 (arm) */
void fn_001e97d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e97d4:;
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
L_001e97d8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], 0x00000034u, 0, 0);
    }
L_001e97dc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000007cu, 1, 0);
    }
L_001e97e0:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001e97e4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001e97e8:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001e97ec:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e97f0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001e97f4:;
    {
        cpu->r[14] = 0x001e97f8u; fn_001ebdc8(cpu);
    }
L_001e97f8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e97fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e9800:;
    {
        cpu->r[7] = rd32(0x001e9808u + + 0x3e0u);
    }
L_001e9804:;
    {
        cpu->r[14] = 0x001e9808u; fn_001e2e90(cpu);
    }
L_001e9808:;
    {
        cpu->r[7] = add_flags(cpu, 0x001e9810u, cpu->r[7], 0, 0);
    }
L_001e980c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e9810:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e9b28;
        }
    }
L_001e9814:;
    {
        cpu->r[14] = 0x001e9818u; fn_001e00e8(cpu);
    }
L_001e9818:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e981c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e99b4;
        }
    }
L_001e9820:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x50u);
    }
L_001e9824:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e9828:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9968;
        }
    }
L_001e982c:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x38u);
    }
L_001e9830:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001e9834:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001e9838:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
        }
    }
L_001e983c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[1]);
    }
L_001e9840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e9968;
        }
    }
L_001e9844:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_001e9848:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e984c:;
    {
        cpu->r[14] = 0x001e9854u;
    }
L_001e9850:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e9854u)) return;
    }
L_001e9854:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e9858:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_001e985c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e9bb8;
        }
    }
L_001e9860:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_001e9864:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001e9868:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001e986c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001e9870:;
    {
        cpu->r[14] = 0x001e9878u;
    }
L_001e9874:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e9878u)) return;
    }
L_001e9878:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e987c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e99a0;
        }
    }
L_001e9880:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001e9884:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_001e9888:;
    {
        uint32_t base = cpu->r[3];
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
L_001e988c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e9890:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001e9894:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001e9b8c;
        }
    }
L_001e9898:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50cu);
    }
L_001e989c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e98a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e9b8c;
        }
    }
L_001e98a4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e98a8:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001e98ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xa0u);
    }
L_001e98b0:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_001e98b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001e98b8:;
    {
        cpu->r[14] = 0x001e98c0u;
    }
L_001e98bc:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e98c0u)) return;
    }
L_001e98c0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e98c4:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_001e98c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e9b8c;
        }
    }
L_001e98cc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_001e98d0:;
    {
        cpu->r[3] = rd32(cpu->r[14]);
    }
L_001e98d4:;
    {
        cpu->r[14] = 0x001e98dcu;
    }
L_001e98d8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e98dcu)) return;
    }
L_001e98dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e98e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9b54;
        }
    }
L_001e98e4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_001e98e8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4u);
    }
L_001e98ec:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x8u);
    }
L_001e98f0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_001e98f4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e98f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_001e98fc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_001e9900:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[2] = v;
    }
L_001e9904:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[0] = v;
    }
L_001e9908:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], 0x00000003u, 0, 0);
    }
L_001e990c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e9910:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[12];
        }
    }
L_001e9914:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 2u, &shc); cpu->r[12] = v;
    }
L_001e9918:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001e991c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001e99e0;
        }
    }
L_001e9920:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e9924:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001e9928:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_001e992c:;
    {
        cpu->r[14] = 0x001e9934u;
    }
L_001e9930:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e9934u)) return;
    }
L_001e9934:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001e9938:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e993c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001e9940:;
    {
        cpu->r[14] = 0x001e9948u;
    }
L_001e9944:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e9948u)) return;
    }
L_001e9948:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50cu);
    }
L_001e994c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e9950:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e9968;
        }
    }
L_001e9954:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e9958:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_001e995c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e9960:;
    {
        cpu->r[14] = 0x001e9968u;
    }
L_001e9964:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e9968u)) return;
    }
L_001e9968:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e996c:;
    {
        cpu->r[14] = 0x001e9970u; fn_001ebd9c(cpu);
    }
L_001e9970:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e9974:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001e9978:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001e997c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e9980:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001e9984:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001e9988:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e998c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e9990:;
    {
        cpu->r[14] = 0x001e9994u; fn_001e2888(cpu);
    }
L_001e9994:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e9998:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_001e999c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e99a0u)) return;
    }
L_001e99a0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001e99a4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e99a8:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_001e99ac:;
    {
        cpu->r[14] = 0x001e99b4u;
    }
L_001e99b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e99b4u)) return;
    }
L_001e99b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e99b8:;
    {
        cpu->r[14] = 0x001e99bcu; fn_001ebd9c(cpu);
    }
L_001e99bc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e99c0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001e99c4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001e99c8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001e99cc:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001e99d0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001e99d4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001e99d8:;
    {
        cpu->r[14] = 0x001e99dcu; fn_001e2888(cpu);
    }
L_001e99dc:;
    {
        goto L_001e9994;
    }
L_001e99e0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4u);
    }
L_001e99e4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001e99e8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_001e99ec:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_001e99f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000007u, 0, 0);
    }
L_001e99f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e99f8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_001e99fc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[1] = v;
    }
L_001e9a00:;
    {
        cpu->r[14] = 0x001e9a04u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001e9a04:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_001e9a08:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e9a0c:;
    {
        cpu->r[14] = 0x001e9a10u; fn_001e380c(cpu);
    }
L_001e9a10:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001e9a14:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x20u);
    }
L_001e9a18:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001e9a1c:;
    {
        cpu->r[0] = 0x00000168u;
    }
L_001e9a20:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_001e9a24:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_001e9a28:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e9a2c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_001e9a30:;
    {
        cpu->r[14] = 0x001e9a34u; fn_00097dd0(cpu);
    }
L_001e9a34:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001e9a38:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_001e9a3c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001e9a40:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001e9a44:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001e9a48:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001e9a4c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_001e9a50:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e9a54:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_001e9a58:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001e9a5c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_001e9a60:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001e9a64:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_001e9a68:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_001e9a6c:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001e9a70:;
    {
        cpu->r[14] = 0x001e9a74u; fn_001e934c(cpu);
    }
L_001e9a74:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001e9a78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e9920;
        }
    }
L_001e9a7c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e9a80:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_001e9a84:;
    {
        cpu->r[14] = 0x001e9a88u; fn_001e0268(cpu);
    }
L_001e9a88:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001e9a8c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001e9a90:;
    {
        cpu->r[14] = 0x001e9a94u; fn_001dff50(cpu);
    }
L_001e9a94:;
    {
        uint64_t v = rd64(cpu->r[9] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e9a98:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e9a9c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000090u, 0, 0);
    }
L_001e9aa0:;
    {
        cpu->r[14] = 0x001e9aa4u; fn_001e03cc(cpu);
    }
L_001e9aa4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e9aa8:;
    {
        cpu->r[14] = 0x001e9aacu; fn_001ebd9c(cpu);
    }
L_001e9aac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x550u);
    }
L_001e9ab0:;
    {
        cpu->r[12] = rd32(0x001e9ab8u + + 0x134u);
    }
L_001e9ab4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e9ab8:;
    {
        uint64_t v = rd64(cpu->r[9] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001e9abc:;
    {
        wr32(cpu->r[9] + + 0x14u, cpu->r[1]);
    }
L_001e9ac0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x550u);
    }
L_001e9ac4:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[12]);
    }
L_001e9ac8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[1], 0x00000144u, 0, 0);
    }
L_001e9acc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_001e9ad0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001e9ad4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[14], 2, 2u, &shc));
    }
L_001e9ad8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001e9adc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001e9ae0:;
    {
        cpu->r[14] = 0x001e9ae4u; fn_001e2888(cpu);
    }
L_001e9ae4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x550u);
    }
L_001e9ae8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e9aec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001e9af0:;
    {
        uint32_t v = cpu->r[3] & 0x0000000fu; cpu->r[3] = v;
    }
L_001e9af4:;
    {
        wr32(cpu->r[4] + + 0x550u, cpu->r[3]);
    }
L_001e9af8:;
    {
        cpu->r[14] = 0x001e9afcu; fn_001ebd2c(cpu);
    }
L_001e9afc:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001e9b00:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000068u, 0, 0);
    }
L_001e9b04:;
    {
        cpu->r[14] = 0x001e9b08u; fn_001e3ed4(cpu);
    }
L_001e9b08:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e9b0c:;
    {
        cpu->r[14] = 0x001e9b10u; fn_001ebd00(cpu);
    }
L_001e9b10:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e9b14:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e9b18:;
    {
        cpu->r[14] = 0x001e9b1cu; fn_001e29b0(cpu);
    }
L_001e9b1c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e9b20:;
    {
        cpu->r[14] = 0x001e9b24u; fn_001e2b74(cpu);
    }
L_001e9b24:;
    {
        goto L_001e9994;
    }
L_001e9b28:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e9b2c:;
    {
        cpu->r[14] = 0x001e9b30u; fn_001ebd9c(cpu);
    }
L_001e9b30:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e9b34:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001e9b38:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001e9b3c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001e9b40:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001e9b44:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001e9b48:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001e9b4c:;
    {
        cpu->r[14] = 0x001e9b50u; fn_001e2888(cpu);
    }
L_001e9b50:;
    {
        goto L_001e9994;
    }
L_001e9b54:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001e9b58:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001e9b5c:;
    {
        cpu->r[14] = 0x001e9b64u;
    }
L_001e9b60:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e9b64u)) return;
    }
L_001e9b64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e9b68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e98e4;
        }
    }
L_001e9b6c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x10u);
    }
L_001e9b70:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_001e9b74:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[12] = v;
    }
L_001e9b78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000007u, 0, 0);
    }
L_001e9b7c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001e9b80:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = cpu->r[2];
        }
    }
L_001e9b84:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[12] = v;
    }
L_001e9b88:;
    {
        goto L_001e9918;
    }
L_001e9b8c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001e9b90:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001e9b94:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_001e9b98:;
    {
        cpu->r[14] = 0x001e9ba0u;
    }
L_001e9b9c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e9ba0u)) return;
    }
L_001e9ba0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001e9ba4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e9ba8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001e9bac:;
    {
        cpu->r[14] = 0x001e9bb4u;
    }
L_001e9bb0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e9bb4u)) return;
    }
L_001e9bb4:;
    {
        goto L_001e9968;
    }
L_001e9bb8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001e9bbc:;
    {
        cpu->r[14] = 0x001e9bc0u; fn_001ebd9c(cpu);
    }
L_001e9bc0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_001e9bc4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001e9bc8:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001e9bcc:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001e9bd0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001e9bd4:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001e9bd8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001e9bdc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_001e9be0:;
    {
        cpu->r[14] = 0x001e9be4u; fn_001e2888(cpu);
    }
L_001e9be4:;
    {
        goto L_001e9994;
    }
}

/* _ZN3vox10EmitterObjC2ExiiiPNS_21DriverSourceInterfaceEPNS_22DecoderCursorInterfaceEPNS_7DataObjE @ 001e9bf0 (arm) */
void fn_001e9bf0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001e9bf0:;
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
L_001e9bf4:;
    {
        cpu->r[6] = rd32(0x001e9bfcu + + 0x3a0u);
    }
L_001e9bf8:;
    {
        cpu->r[1] = rd32(0x001e9c00u + + 0x3a0u);
    }
L_001e9bfc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001e9c00:;
    {
        cpu->r[6] = add_flags(cpu, 0x001e9c08u, cpu->r[6], 0, 0);
    }
L_001e9c04:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_001e9c08:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001e9c0c:;
    {
        wr64(cpu->r[0] + + 0x8u, ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
    }
L_001e9c10:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_001e9c14:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[5]);
    }
L_001e9c18:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001e9c1c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001e9c20:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_001e9c24:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x50u);
    }
L_001e9c28:;
    {
        cpu->r[14] = 0x001e9c2cu; fn_001ebe50(cpu);
    }
L_001e9c2c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_001e9c30:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001e9c38u + + 0x350u);
    }
L_001e9c34:;
    {
        cpu->r[1] = rd32(0x001e9c3cu + + 0x368u);
    }
L_001e9c38:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001e9c40u + + 0x34cu);
    }
L_001e9c3c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9c40:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9c44:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[12]);
    }
L_001e9c48:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9c4c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_001e9c50:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9c54:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_001e9c58:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9c5c:;
    {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_001e9c60:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9c64:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[12]);
    }
L_001e9c68:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001e9c6c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[5]);
    }
L_001e9c70:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9c74:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_001e9c78:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9c7c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001e9c80:;
    {
        wr8(cpu->r[4] + + 0x34u, cpu->r[5]);
    }
L_001e9c84:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[1]);
    }
L_001e9c88:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9c8c:;
    {
        wr8(cpu->r[4] + + 0x58u, cpu->r[1]);
    }
L_001e9c90:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e9c94:;
    {
        wr8(cpu->r[4] + + 0x8cu, cpu->r[5]);
    }
L_001e9c98:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e9c9c:;
    {
        wr8(cpu->r[4] + + 0x8du, cpu->r[5]);
    }
L_001e9ca0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e9ca4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e9ca8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e9cac:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e9cb0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e9cb4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e9cb8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e9cbc:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[5]);
    }
L_001e9cc0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001e9cc4:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[5]);
    }
L_001e9cc8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001e9ccc:;
    {
        wr8(cpu->r[4] + + 0x6cu, cpu->r[1]);
    }
L_001e9cd0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e9cd4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_001e9cd8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x001e9ce0u + + 0x2b0u);
    }
L_001e9cdc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001e9ce4u + + 0x2b0u);
    }
L_001e9ce0:;
    {
        wr8(cpu->r[4] + + 0x88u, cpu->r[1]);
    }
L_001e9ce4:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[1]);
    }
L_001e9ce8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x001e9cf0u + + 0x2a8u);
    }
L_001e9cec:;
    {
        wr32(cpu->r[4] + + 0x108u, cpu->r[12]);
    }
L_001e9cf0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_001e9cf4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001e9cf8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001e9cfc:;
    {
        wr8(cpu->r[4] + + 0x98u, cpu->r[5]);
    }
L_001e9d00:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xdcu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001e9d04:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x124u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e9d08:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9d0c:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[12]);
    }
L_001e9d10:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9d14:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_001e9d18:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9d1c:;
    {
        wr8(cpu->r[4] + + 0x99u, cpu->r[5]);
    }
L_001e9d20:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9d24:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9d28:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9d2c:;
    {
        wr32(cpu->r[4] + + 0x118u, cpu->r[12]);
    }
L_001e9d30:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9d34:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9d38:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xbcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9d3c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001e9d40:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xccu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001e9d44:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd0u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001e9d48:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9d4c:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[5]);
    }
L_001e9d50:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x120u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9d54:;
    {
        wr32(cpu->r[4] + + 0xf0u, cpu->r[5]);
    }
L_001e9d58:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x128u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9d5c:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[5]);
    }
L_001e9d60:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[5]);
    }
L_001e9d64:;
    {
        wr32(cpu->r[4] + + 0xfcu, cpu->r[5]);
    }
L_001e9d68:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x12cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001e9d6c:;
    {
        wr8(cpu->r[4] + + 0x130u, cpu->r[1]);
    }
L_001e9d70:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001e9d74:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[5]);
    }
L_001e9d78:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[7]);
    }
L_001e9d7c:;
    {
        wr8(cpu->r[4] + + 0x11cu, cpu->r[5]);
    }
L_001e9d80:;
    {
        wr8(cpu->r[4] + + 0x11du, cpu->r[5]);
    }
L_001e9d84:;
    {
        wr32(cpu->r[4] + + 0x134u, cpu->r[1]);
    }
L_001e9d88:;
    {
        wr32(cpu->r[4] + + 0x138u, cpu->r[5]);
    }
L_001e9d8c:;
    {
        wr32(cpu->r[4] + + 0x13cu, cpu->r[5]);
    }
L_001e9d90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001e9d94:;
    {
        wr8(cpu->r[2] + + 0xe0u, cpu->r[0]);
    }
L_001e9d98:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 1);
    }
L_001e9d9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001e9da0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001e9da4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9d90;
        }
    }
L_001e9da8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001e9dac:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[1]);
    }
L_001e9db0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_001e9db4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
        }
    }
L_001e9db8:;
    {
        wr32(cpu->r[4] + + 0x100u, cpu->r[1]);
    }
L_001e9dbc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001e9dc0:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x11cu, cpu->r[3]);
        }
    }
L_001e9dc4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9e10;
        }
    }
L_001e9dc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x118u);
    }
L_001e9dcc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x50u);
    }
L_001e9dd0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001e9dd4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001e9dd8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x3cu);
        }
    }
L_001e9ddc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e9de0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e9de4:;
    {
        cpu->r[14] = 0x001e9decu;
    }
L_001e9de8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e9decu)) return;
    }
L_001e9dec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001e9df0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001e9df4:;
    {
        wr8(cpu->r[4] + + 0x146u, cpu->r[3]);
    }
L_001e9df8:;
    {
        wr8(cpu->r[4] + + 0x145u, cpu->r[2]);
    }
L_001e9dfc:;
    {
        wr8(cpu->r[4] + + 0x144u, cpu->r[3]);
    }
L_001e9e00:;
    {
        wr32(cpu->r[4] + + 0x140u, cpu->r[0]);
    }
L_001e9e04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e9e08:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001e9e0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001e9e10u)) return;
    }
L_001e9e10:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x114u);
    }
L_001e9e14:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e9e18:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e9e1c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0xcu);
    }
L_001e9e20:;
    {
        cpu->r[14] = rd32(cpu->r[2] + + 0x10u);
    }
L_001e9e24:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x4u);
    }
L_001e9e28:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[1] = v;
    }
L_001e9e2c:;
    {
        uint32_t v = cpu->r[14] * cpu->r[1]; cpu->r[1] = v;
    }
L_001e9e30:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[1] = v;
    }
L_001e9e34:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[1]);
    }
L_001e9e38:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_001e9e3c:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x4u);
    }
L_001e9e40:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xcu);
    }
L_001e9e44:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[1] = v;
    }
L_001e9e48:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[2] = v;
    }
L_001e9e4c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1]; cpu->r[2] = v;
    }
L_001e9e50:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[2]);
    }
L_001e9e54:;
    {
        cpu->r[14] = 0x001e9e5cu;
    }
L_001e9e58:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e9e5cu)) return;
    }
L_001e9e5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e9e60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9ed4;
        }
    }
L_001e9e64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001e9e68:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001e9e6c:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[6]);
    }
L_001e9e70:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e9e74:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e9e78:;
    {
        cpu->r[14] = 0x001e9e80u;
    }
L_001e9e7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e9e80u)) return;
    }
L_001e9e80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e9e84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e9f40;
        }
    }
L_001e9e88:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001e9e8c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001e9e90:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e9e94:;
    {
        cpu->r[14] = 0x001e9e98u; fn_001e14dc(cpu);
    }
L_001e9e98:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e9e9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000f4u, 0, 0);
    }
L_001e9ea0:;
    {
        cpu->r[14] = 0x001e9ea4u; fn_001e46cc(cpu);
    }
L_001e9ea4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001e9ea8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e9eac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e9f38;
        }
    }
L_001e9eb0:;
    {
        cpu->r[14] = 0x001e9eb4u; fn_00097dc8(cpu);
    }
L_001e9eb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x104u);
    }
L_001e9eb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e9ebc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9ec8;
        }
    }
L_001e9ec0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e9ec4:;
    {
        wr8(cpu->r[4] + + 0x11cu, cpu->r[3]);
    }
L_001e9ec8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001e9ecc:;
    {
        cpu->r[14] = 0x001e9ed0u; fn_001dfad0(cpu);
    }
L_001e9ed0:;
    {
        goto L_001e9dc8;
    }
L_001e9ed4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001e9ed8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e9edc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e9ee0:;
    {
        cpu->r[14] = 0x001e9ee8u;
    }
L_001e9ee4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e9ee8u)) return;
    }
L_001e9ee8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001e9eec:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001e9ef0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001e9ef4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e9ef8:;
    {
        cpu->r[14] = 0x001e9f00u;
    }
L_001e9efc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001e9f00u)) return;
    }
L_001e9f00:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e9f04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e9f70;
        }
    }
L_001e9f08:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001e9f0c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001e9f10:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001e9f14:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[3]);
    }
L_001e9f18:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001e9f1c:;
    {
        cpu->r[14] = 0x001e9f20u; fn_001e14dc(cpu);
    }
L_001e9f20:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001e9f24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000f4u, 0, 0);
    }
L_001e9f28:;
    {
        cpu->r[14] = 0x001e9f2cu; fn_001e46cc(cpu);
    }
L_001e9f2c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001e9f30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001e9f34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9eb0;
        }
    }
L_001e9f38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x104u);
    }
L_001e9f3c:;
    {
        goto L_001e9eb8;
    }
L_001e9f40:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x108u);
    }
L_001e9f44:;
    {
        cpu->r[14] = 0x001e9f48u; fn_00097dd4(cpu);
    }
L_001e9f48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001e9f4c:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x4u;
        wr32(cpu->r[1] + - 0x4u, cpu->r[0]);
        cpu->r[1] = wb_tmp;
    }
L_001e9f50:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000f4u, 0, 0);
    }
L_001e9f54:;
    {
        cpu->r[14] = 0x001e9f58u; fn_001e1528(cpu);
    }
L_001e9f58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001e9f5c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001e9f60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e9f64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9f38;
        }
    }
L_001e9f68:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[3]);
    }
L_001e9f6c:;
    {
        goto L_001e9ec0;
    }
L_001e9f70:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000f4u, 0, 0);
    }
L_001e9f74:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001e9f78:;
    {
        cpu->r[14] = 0x001e9f7cu; fn_001e1144(cpu);
    }
L_001e9f7c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001e9f80:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001e9fd8;
        }
    }
L_001e9f84:;
    {
        goto L_001e9f38;
    }
L_001e9fa8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001e9fac:;
    {
        uint32_t wb_tmp = cpu->r[9] + 0x00000004u;
        wr32(cpu->r[9], cpu->r[0]);
        cpu->r[9] = wb_tmp;
    }
L_001e9fb0:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[9]);
    }
L_001e9fb4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001e9fb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001e9fbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001e9f38;
        }
    }
L_001e9fc0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001e9fc4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x104u);
    }
L_001e9fc8:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 1);
    }
L_001e9fcc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001e9fd0:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[3]);
    }
L_001e9fd4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001e9eb8;
        }
    }
L_001e9fd8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x108u);
    }
L_001e9fdc:;
    {
        cpu->r[14] = 0x001e9fe0u; fn_00097dd4(cpu);
    }
L_001e9fe0:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0xf8u);
    }
L_001e9fe4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xfcu);
    }
L_001e9fe8:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001e9fec:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001e9ff0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001e9fa8;
        }
    }
L_001e9ff4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001e9ff8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_001e9ffc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001ea000:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ea004:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001ea008:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[10] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001ea00c:;
    {
        add_flags(cpu, cpu->r[10], 0xc0000001u, 0, 1);
    }
L_001ea010:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ea070;
        }
    }
L_001ea014:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001ea018:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[10] = v;
        }
    }
L_001ea01c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ea070;
        }
    }
L_001ea020:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ea024:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ea028:;
    {
        cpu->r[14] = 0x001ea02cu; fn_00097dd0(cpu);
    }
L_001ea02c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001ea030:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 1);
    }
L_001ea034:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001ea038:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = cpu->r[0];
        }
    }
L_001ea03c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea050;
        }
    }
L_001ea040:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001ea044:;
    {
        cpu->r[14] = 0x001ea048u; imp_memmove(cpu); /* memmove */
    }
L_001ea048:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001ea04c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_001ea050:;
    {
        uint32_t wb_tmp = cpu->r[9] + 0x00000004u;
        wr32(cpu->r[9], cpu->r[7]);
        cpu->r[9] = wb_tmp;
    }
L_001ea054:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001ea058:;
    {
        cpu->r[14] = 0x001ea05cu; fn_00097dc8(cpu);
    }
L_001ea05c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], cpu->r[10], 0, 0);
    }
L_001ea060:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[9]);
    }
L_001ea064:;
    {
        wr32(cpu->r[4] + + 0xfcu, cpu->r[10]);
    }
L_001ea068:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[6]);
    }
L_001ea06c:;
    {
        goto L_001e9fb4;
    }
L_001ea070:;
    {
        cpu->r[10] = (~0x00000003u);
    }
L_001ea074:;
    {
        goto L_001ea020;
    }
}

/* _ZN3vox10EmitterObj9LoadAsyncEv @ 001ea078 (arm) */
void fn_001ea078(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ea078:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x118u);
    }
L_001ea07c:;
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
L_001ea080:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ea084:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_001ea088:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ea08c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea0a8;
        }
    }
L_001ea090:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x110u);
    }
L_001ea094:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ea098:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea0a8;
        }
    }
L_001ea09c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x50u);
    }
L_001ea0a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ea0a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea0c4;
        }
    }
L_001ea0a8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001ea0ac:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001ea0b0:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[3]);
    }
L_001ea0b4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ea0b8:;
    {
        wr8(cpu->r[4] + + 0x11cu, cpu->r[3]);
    }
L_001ea0bc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001ea0c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea0c4u)) return;
    }
L_001ea0c4:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x3cu);
    }
L_001ea0c8:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x38u);
    }
L_001ea0cc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001ea0d0:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
        }
    }
L_001ea0d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea0a8;
        }
    }
L_001ea0d8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ea0dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ea0e0:;
    {
        cpu->r[14] = 0x001ea0e8u;
    }
L_001ea0e4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea0e8u)) return;
    }
L_001ea0e8:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ea0ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea380;
        }
    }
L_001ea0f0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001ea0f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ea0f8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001ea0fc:;
    {
        cpu->r[14] = 0x001ea104u;
    }
L_001ea100:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea104u)) return;
    }
L_001ea104:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ea108:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea3b4;
        }
    }
L_001ea10c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001ea110:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[7]);
    }
L_001ea114:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea118:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea11c:;
    {
        cpu->r[14] = 0x001ea124u;
    }
L_001ea120:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea124u)) return;
    }
L_001ea124:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ea128:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ea2cc;
        }
    }
L_001ea12c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x114u);
    }
L_001ea130:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
    }
L_001ea134:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_001ea138:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x8u);
    }
L_001ea13c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_001ea140:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000007u, 0, 0);
    }
L_001ea144:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ea148:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_001ea14c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001ea150:;
    {
        uint32_t v = cpu->r[8] * cpu->r[3]; cpu->r[8] = v;
    }
L_001ea154:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000003u, 0, 0);
    }
L_001ea158:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001ea15c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[8] = cpu->r[3];
        }
    }
L_001ea160:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 2u, &shc); cpu->r[8] = v;
    }
L_001ea164:;
    {
        wr32(cpu->r[4] + + 0x108u, cpu->r[8]);
    }
L_001ea168:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_001ea16c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ea170:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4u);
    }
L_001ea174:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001ea178:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000007u, 0, 0);
    }
L_001ea17c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ea180:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_001ea184:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[1] = v;
    }
L_001ea188:;
    {
        cpu->r[14] = 0x001ea18cu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001ea18c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 0);
    }
L_001ea190:;
    {
        wr32(cpu->r[4] + + 0x108u, cpu->r[1]);
    }
L_001ea194:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ea198:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ea398;
        }
    }
L_001ea19c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001ea1a0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea1a4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea1a8:;
    {
        cpu->r[14] = 0x001ea1b0u;
    }
L_001ea1ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea1b0u)) return;
    }
L_001ea1b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ea1b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea310;
        }
    }
L_001ea1b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001ea1bc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea1c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea1c4:;
    {
        cpu->r[14] = 0x001ea1ccu;
    }
L_001ea1c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea1ccu)) return;
    }
L_001ea1cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001ea1d0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001ea1d4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea1d8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea1dc:;
    {
        cpu->r[14] = 0x001ea1e4u;
    }
L_001ea1e0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea1e4u)) return;
    }
L_001ea1e4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ea1e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ea410;
        }
    }
L_001ea1ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000f4u, 0, 0);
    }
L_001ea1f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001ea1f4:;
    {
        cpu->r[14] = 0x001ea1f8u; fn_001e1144(cpu);
    }
L_001ea1f8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001ea1fc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001ea234;
        }
    }
L_001ea200:;
    {
        goto L_001ea408;
    }
L_001ea204:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001ea208:;
    {
        uint32_t wb_tmp = cpu->r[9] + 0x00000004u;
        wr32(cpu->r[9], cpu->r[0]);
        cpu->r[9] = wb_tmp;
    }
L_001ea20c:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[9]);
    }
L_001ea210:;
    {
        cpu->r[3] = rd32(cpu->r[6] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001ea214:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ea218:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea408;
        }
    }
L_001ea21c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001ea220:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x104u);
    }
L_001ea224:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 1);
    }
L_001ea228:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001ea22c:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[3]);
    }
L_001ea230:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001ea364;
        }
    }
L_001ea234:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x108u);
    }
L_001ea238:;
    {
        cpu->r[14] = 0x001ea23cu; fn_00097dd4(cpu);
    }
L_001ea23c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0xf8u);
    }
L_001ea240:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xfcu);
    }
L_001ea244:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001ea248:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001ea24c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ea204;
        }
    }
L_001ea250:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001ea254:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_001ea258:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001ea25c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ea260:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001ea264:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[10] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001ea268:;
    {
        add_flags(cpu, cpu->r[10], 0xc0000001u, 0, 1);
    }
L_001ea26c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ea448;
        }
    }
L_001ea270:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001ea274:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[10] = v;
        }
    }
L_001ea278:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ea448;
        }
    }
L_001ea27c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ea280:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ea284:;
    {
        cpu->r[14] = 0x001ea288u; fn_00097dd0(cpu);
    }
L_001ea288:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001ea28c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 1);
    }
L_001ea290:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001ea294:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = cpu->r[0];
        }
    }
L_001ea298:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea2ac;
        }
    }
L_001ea29c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001ea2a0:;
    {
        cpu->r[14] = 0x001ea2a4u; imp_memmove(cpu); /* memmove */
    }
L_001ea2a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001ea2a8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_001ea2ac:;
    {
        uint32_t wb_tmp = cpu->r[9] + 0x00000004u;
        wr32(cpu->r[9], cpu->r[7]);
        cpu->r[9] = wb_tmp;
    }
L_001ea2b0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001ea2b4:;
    {
        cpu->r[14] = 0x001ea2b8u; fn_00097dc8(cpu);
    }
L_001ea2b8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], cpu->r[10], 0, 0);
    }
L_001ea2bc:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[9]);
    }
L_001ea2c0:;
    {
        wr32(cpu->r[4] + + 0xfcu, cpu->r[10]);
    }
L_001ea2c4:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[6]);
    }
L_001ea2c8:;
    {
        goto L_001ea210;
    }
L_001ea2cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001ea2d0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea2d4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea2d8:;
    {
        cpu->r[14] = 0x001ea2e0u;
    }
L_001ea2dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea2e0u)) return;
    }
L_001ea2e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ea2e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea12c;
        }
    }
L_001ea2e8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x114u);
    }
L_001ea2ec:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x10u);
    }
L_001ea2f0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0xcu);
    }
L_001ea2f4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001ea2f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000007u, 0, 0);
    }
L_001ea2fc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ea300:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_001ea304:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[1] = v;
    }
L_001ea308:;
    {
        wr32(cpu->r[4] + + 0x108u, cpu->r[1]);
    }
L_001ea30c:;
    {
        goto L_001ea194;
    }
L_001ea310:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001ea314:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001ea318:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[6]);
    }
L_001ea31c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea320:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea324:;
    {
        cpu->r[14] = 0x001ea32cu;
    }
L_001ea328:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea32cu)) return;
    }
L_001ea32c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ea330:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea3e0;
        }
    }
L_001ea334:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001ea338:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ea33c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ea340:;
    {
        cpu->r[14] = 0x001ea344u; fn_001e14dc(cpu);
    }
L_001ea344:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ea348:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000f4u, 0, 0);
    }
L_001ea34c:;
    {
        cpu->r[14] = 0x001ea350u; fn_001e46cc(cpu);
    }
L_001ea350:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001ea354:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ea358:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea408;
        }
    }
L_001ea35c:;
    {
        cpu->r[14] = 0x001ea360u; fn_00097dc8(cpu);
    }
L_001ea360:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x104u);
    }
L_001ea364:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ea368:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001ea36c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ea0bc;
        }
    }
L_001ea370:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ea374:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001ea378:;
    {
        wr8(cpu->r[4] + + 0x11cu, cpu->r[3]);
    }
L_001ea37c:;
    {
        goto L_001ea0bc;
    }
L_001ea380:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001ea384:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ea388:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[3]);
    }
L_001ea38c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ea390:;
    {
        wr8(cpu->r[4] + + 0x11cu, cpu->r[3]);
    }
L_001ea394:;
    {
        goto L_001ea0bc;
    }
L_001ea398:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001ea39c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ea3a0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001ea3a4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001ea3a8:;
    {
        cpu->r[14] = 0x001ea3b0u;
    }
L_001ea3ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea3b0u)) return;
    }
L_001ea3b0:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[7]);
    }
L_001ea3b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ea3b8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ea3bc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001ea3c0:;
    {
        cpu->r[14] = 0x001ea3c8u;
    }
L_001ea3c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea3c8u)) return;
    }
L_001ea3c8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001ea3cc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ea3d0:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[3]);
    }
L_001ea3d4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ea3d8:;
    {
        wr8(cpu->r[4] + + 0x11cu, cpu->r[3]);
    }
L_001ea3dc:;
    {
        goto L_001ea0bc;
    }
L_001ea3e0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x108u);
    }
L_001ea3e4:;
    {
        cpu->r[14] = 0x001ea3e8u; fn_00097dd4(cpu);
    }
L_001ea3e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001ea3ec:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x4u;
        wr32(cpu->r[1] + - 0x4u, cpu->r[0]);
        cpu->r[1] = wb_tmp;
    }
L_001ea3f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000f4u, 0, 0);
    }
L_001ea3f4:;
    {
        cpu->r[14] = 0x001ea3f8u; fn_001e1528(cpu);
    }
L_001ea3f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xf4u);
    }
L_001ea3fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea400:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ea404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea450;
        }
    }
L_001ea408:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x104u);
    }
L_001ea40c:;
    {
        goto L_001ea364;
    }
L_001ea410:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ea414:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001ea418:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001ea41c:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[3]);
    }
L_001ea420:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ea424:;
    {
        cpu->r[14] = 0x001ea428u; fn_001e14dc(cpu);
    }
L_001ea428:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ea42c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000f4u, 0, 0);
    }
L_001ea430:;
    {
        cpu->r[14] = 0x001ea434u; fn_001e46cc(cpu);
    }
L_001ea434:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001ea438:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ea43c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ea35c;
        }
    }
L_001ea440:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x104u);
    }
L_001ea444:;
    {
        goto L_001ea364;
    }
L_001ea448:;
    {
        cpu->r[10] = (~0x00000003u);
    }
L_001ea44c:;
    {
        goto L_001ea27c;
    }
L_001ea450:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[3]);
    }
L_001ea454:;
    {
        goto L_001ea370;
    }
}

/* _ZN3vox10EmitterObj6UpdateEf @ 001ea458 (arm) */
void fn_001ea458(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ea458:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ea45c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001ea460:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ea464:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[1];
    }
L_001ea468:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001ea46c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ea470:;
    {
        cpu->r[14] = 0x001ea474u; fn_001ebcfc(cpu);
    }
L_001ea474:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x1cu);
    }
L_001ea478:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x90u);
    }
L_001ea47c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ea480:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea4a4;
        }
    }
L_001ea484:;
    {
        add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_001ea488:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea4a4;
        }
    }
L_001ea48c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ea490:;
    {
        cpu->r[14] = 0x001ea494u; fn_001ea078(cpu);
    }
L_001ea494:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ea498:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001ea49c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[3]);
        }
    }
L_001ea4a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea6d8;
        }
    }
L_001ea4a4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x99u);
    }
L_001ea4a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ea4ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ea738;
        }
    }
L_001ea4b0:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x8du);
    }
L_001ea4b4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8cu);
    }
L_001ea4b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001ea4bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea4dc;
        }
    }
L_001ea4c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001ea4c4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea4c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea4cc:;
    {
        cpu->r[14] = 0x001ea4d4u;
    }
L_001ea4d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea4d4u)) return;
    }
L_001ea4d4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8du);
    }
L_001ea4d8:;
    {
        wr8(cpu->r[4] + + 0x8cu, cpu->r[3]);
    }
L_001ea4dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001ea4e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001ea4e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ea4e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea8f8;
        }
    }
L_001ea4ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ea4f0:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001ea4f4:;
    {
        cpu->r[14] = 0x001ea4f8u; fn_001dedd0(cpu);
    }
L_001ea4f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x50u);
    }
L_001ea4fc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x54u);
    }
L_001ea500:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001ea504:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x64u);
    }
L_001ea508:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x68u);
    }
L_001ea50c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x44u);
    }
L_001ea510:;
    {
        vfp_sync_flags(cpu);
    }
L_001ea514:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vadd(cpu, 15, 16, 15);
        }
    }
L_001ea518:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001ea51c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,13));
    }
L_001ea520:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[4] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_001ea524:;
    {
        if (cond_test(cpu, 6)) {
        wr8(cpu->r[4] + + 0x58u, cpu->r[3]);
        }
    }
L_001ea528:;
    {
        vfp_sync_flags(cpu);
    }
L_001ea52c:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vadd(cpu, 12, 16, 12);
        }
    }
L_001ea530:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001ea534:;
    {
        if (cond_test(cpu, 6)) {
        wr8(cpu->r[4] + + 0x6cu, cpu->r[3]);
        }
    }
L_001ea538:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,13));
    }
L_001ea53c:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[4] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 12);
        }
    }
L_001ea540:;
    {
        vfp_sync_flags(cpu);
    }
L_001ea544:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x60u);
        }
    }
L_001ea548:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001ea570;
        }
    }
L_001ea54c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), 0.0f);
    }
L_001ea550:;
    {
        vfp_sync_flags(cpu);
    }
L_001ea554:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4] + + 0x5cu);
        }
    }
L_001ea558:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[4] + + 0x60u);
        }
    }
L_001ea55c:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 9, 9, 10);
        }
    }
L_001ea560:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x5cu);
        }
    }
L_001ea564:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 12, 12, 9);
        }
    }
L_001ea568:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vdiv(cpu, 13, 12, 13);
        }
    }
L_001ea56c:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 13, 10, 13);
        }
    }
L_001ea570:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001ea574:;
    {
        vfp_vmul(cpu, 13, 11, 13);
    }
L_001ea578:;
    {
        vfp_sync_flags(cpu);
    }
L_001ea57c:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x4cu);
        }
    }
L_001ea580:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001ea710;
        }
    }
L_001ea584:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_001ea588:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001ea58c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea590:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea594:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ea598:;
    {
        cpu->r[14] = 0x001ea5a0u;
    }
L_001ea59c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea5a0u)) return;
    }
L_001ea5a0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x3cu);
    }
L_001ea5a4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_001ea5a8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001ea5ac:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[0]);
    }
L_001ea5b0:;
    {
        vfp_sync_flags(cpu);
    }
L_001ea5b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ea7bc;
        }
    }
L_001ea5b8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x80u);
    }
L_001ea5bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x84u);
    }
L_001ea5c0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001ea5c4:;
    {
        vfp_sync_flags(cpu);
    }
L_001ea5c8:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vadd(cpu, 14, 16, 14);
        }
    }
L_001ea5cc:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001ea5d0:;
    {
        if (cond_test(cpu, 6)) {
        wr8(cpu->r[4] + + 0x88u, cpu->r[3]);
        }
    }
L_001ea5d4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001ea5d8:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[4] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_001ea5dc:;
    {
        vfp_sync_flags(cpu);
    }
L_001ea5e0:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x7cu);
        }
    }
L_001ea5e4:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001ea6e8;
        }
    }
L_001ea5e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001ea5ec:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ea5f0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea5f4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea5f8:;
    {
        cpu->r[14] = 0x001ea600u;
    }
L_001ea5fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea600u)) return;
    }
L_001ea600:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x74u);
    }
L_001ea604:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_001ea608:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001ea60c:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[0]);
    }
L_001ea610:;
    {
        vfp_sync_flags(cpu);
    }
L_001ea614:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ea798;
        }
    }
L_001ea618:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001ea61c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea620:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea624:;
    {
        cpu->r[14] = 0x001ea62cu;
    }
L_001ea628:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea62cu)) return;
    }
L_001ea62c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_001ea630:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001ea634:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[0]);
    }
L_001ea638:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea7e0;
        }
    }
L_001ea63c:;
    {
        add_flags(cpu, cpu->r[7], 0x00000001u, 0, 1);
    }
L_001ea640:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea830;
        }
    }
L_001ea644:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x140u);
    }
L_001ea648:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001ea64c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea820;
        }
    }
L_001ea650:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001ea654:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ea658:;
    {
        cpu->r[14] = 0x001ea65cu; fn_001de2d0(cpu);
    }
L_001ea65c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x90u);
    }
L_001ea660:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x94u);
    }
L_001ea664:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea668:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001ea66c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea6c0;
        }
    }
L_001ea670:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_001ea674:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[2]) {
        case 0: goto L_001ea83c;
        case 1: goto L_001ea68c;
        case 2: goto L_001ea848;
        case 3: goto L_001ea884;
        default: guest_unimplemented(cpu, 0x001ea674u); return; }
        }
    }
L_001ea678:;
    {
        goto L_001ea8e4;
    }
L_001ea68c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001ea690:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ea694:;
    {
        wr8(cpu->r[4] + + 0x145u, cpu->r[2]);
    }
L_001ea698:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea69c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea6a0:;
    {
        cpu->r[14] = 0x001ea6a8u;
    }
L_001ea6a4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea6a8u)) return;
    }
L_001ea6a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001ea6ac:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea6b0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea6b4:;
    {
        cpu->r[14] = 0x001ea6bcu;
    }
L_001ea6b8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea6bcu)) return;
    }
L_001ea6bc:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[0]);
    }
L_001ea6c0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_001ea6c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea6d8;
        }
    }
L_001ea6c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ea6cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea6d8;
        }
    }
L_001ea6d0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ea6d4:;
    {
        wr8(cpu->r[4] + + 0x98u, cpu->r[3]);
    }
L_001ea6d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ea6dc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001ea6e0:;
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
L_001ea6e4:;
    {
        return fn_001ebcf8(cpu);
    }
L_001ea6e8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001ea6ec:;
    {
        vfp_sync_flags(cpu);
    }
L_001ea6f0:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x78u);
        }
    }
L_001ea6f4:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x7cu);
        }
    }
L_001ea6f8:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 12, 12, 13);
        }
    }
L_001ea6fc:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x78u);
        }
    }
L_001ea700:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 14, 14, 12);
        }
    }
L_001ea704:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vdiv(cpu, 15, 14, 15);
        }
    }
L_001ea708:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 15, 13, 15);
        }
    }
L_001ea70c:;
    {
        goto L_001ea5e8;
    }
L_001ea710:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_001ea714:;
    {
        vfp_sync_flags(cpu);
    }
L_001ea718:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x48u);
        }
    }
L_001ea71c:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x4cu);
        }
    }
L_001ea720:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 11, 11, 12);
        }
    }
L_001ea724:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x48u);
        }
    }
L_001ea728:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 15, 15, 11);
        }
    }
L_001ea72c:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vdiv(cpu, 15, 15, 14);
        }
    }
L_001ea730:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 15, 12, 15);
        }
    }
L_001ea734:;
    {
        goto L_001ea584;
    }
L_001ea738:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001ea73c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ea740:;
    {
        wr8(cpu->r[4] + + 0x99u, cpu->r[2]);
    }
L_001ea744:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea748:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea74c:;
    {
        cpu->r[14] = 0x001ea754u;
    }
L_001ea750:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea754u)) return;
    }
L_001ea754:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001ea758:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea75c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea760:;
    {
        cpu->r[14] = 0x001ea768u;
    }
L_001ea764:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea768u)) return;
    }
L_001ea768:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ea76c:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[0]);
    }
L_001ea770:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea4b0;
        }
    }
L_001ea774:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001ea778:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea77c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea780:;
    {
        cpu->r[14] = 0x001ea788u;
    }
L_001ea784:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea788u)) return;
    }
L_001ea788:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ea78c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001ea790:;
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
L_001ea794:;
    {
        return fn_001ebcf8(cpu);
    }
L_001ea798:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001ea79c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001ea7a0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea7a4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea7a8:;
    {
        cpu->r[14] = 0x001ea7b0u;
    }
L_001ea7ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea7b0u)) return;
    }
L_001ea7b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x74u);
    }
L_001ea7b4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ea7b8:;
    {
        goto L_001ea618;
    }
L_001ea7bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001ea7c0:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001ea7c4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea7c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea7cc:;
    {
        cpu->r[14] = 0x001ea7d4u;
    }
L_001ea7d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea7d4u)) return;
    }
L_001ea7d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x3cu);
    }
L_001ea7d8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ea7dc:;
    {
        goto L_001ea5b8;
    }
L_001ea7e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001ea7e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001ea7e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea644;
        }
    }
L_001ea7ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_001ea7f0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea7f4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea7f8:;
    {
        cpu->r[14] = 0x001ea800u;
    }
L_001ea7fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea800u)) return;
    }
L_001ea800:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ea804:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = rd32(cpu->r[4] + + 0x90u);
        }
    }
L_001ea808:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ea63c;
        }
    }
L_001ea80c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ea810:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[7]);
    }
L_001ea814:;
    {
        wr8(cpu->r[4] + + 0x99u, cpu->r[3]);
    }
L_001ea818:;
    {
        wr8(cpu->r[4] + + 0x145u, cpu->r[3]);
    }
L_001ea81c:;
    {
        goto L_001ea644;
    }
L_001ea820:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001ea824:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ea828:;
    {
        cpu->r[14] = 0x001ea82cu; fn_001e1274(cpu);
    }
L_001ea82c:;
    {
        goto L_001ea65c;
    }
L_001ea830:;
    {
        add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_001ea834:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ea6d0;
        }
    }
L_001ea838:;
    {
        goto L_001ea6d8;
    }
L_001ea83c:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_001ea840:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea844:;
    {
        goto L_001ea6c0;
    }
L_001ea848:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x6cu);
    }
L_001ea84c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ea850:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea6c0;
        }
    }
L_001ea854:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001ea858:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ea85c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea860:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea864:;
    {
        cpu->r[14] = 0x001ea86cu;
    }
L_001ea868:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea86cu)) return;
    }
L_001ea86c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001ea870:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea874:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea878:;
    {
        cpu->r[14] = 0x001ea880u;
    }
L_001ea87c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea880u)) return;
    }
L_001ea880:;
    {
        goto L_001ea6a8;
    }
L_001ea884:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ea888:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea83c;
        }
    }
L_001ea88c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x6cu);
    }
L_001ea890:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ea894:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ea6c0;
        }
    }
L_001ea898:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001ea89c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea8a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea8a4:;
    {
        cpu->r[14] = 0x001ea8acu;
    }
L_001ea8a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea8acu)) return;
    }
L_001ea8ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_001ea8b0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea8b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ea8b8:;
    {
        cpu->r[14] = 0x001ea8c0u;
    }
L_001ea8bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ea8c0u)) return;
    }
L_001ea8c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ea8c4:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[0]);
    }
L_001ea8c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000003u;
        }
    }
L_001ea8cc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x90u, cpu->r[3]);
        }
    }
L_001ea8d0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ea8d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x90u);
    }
L_001ea8d8:;
    {
        wr8(cpu->r[4] + + 0x145u, cpu->r[3]);
    }
L_001ea8dc:;
    {
        wr8(cpu->r[4] + + 0x99u, cpu->r[3]);
    }
L_001ea8e0:;
    {
        goto L_001ea6c0;
    }
L_001ea8e4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001ea8e8:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[3]);
    }
L_001ea8ec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ea8f0:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_001ea8f4:;
    {
        goto L_001ea6c0;
    }
L_001ea8f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ea8fc:;
    {
        cpu->r[14] = 0x001ea900u; fn_001de3b4(cpu);
    }
L_001ea900:;
    {
        goto L_001ea4ec;
    }
}

/* _ZN3vox17VoxEngineInternal14UpdateEmittersEf @ 001ea904 (arm) */
void fn_001ea904(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ea904:;
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
L_001ea908:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001ea90c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ea910:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[1];
    }
L_001ea914:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x000003b4u, 0, 0);
    }
L_001ea918:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001ea91c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ea920:;
    {
        cpu->r[14] = 0x001ea924u; fn_001ebcfc(cpu);
    }
L_001ea924:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x554u);
    }
L_001ea928:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ea92c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001ead04;
        }
    }
L_001ea930:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_001ea934:;
    {
        vfp_sync_flags(cpu);
    }
L_001ea938:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001eabf8;
        }
    }
L_001ea93c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001ea944u + + 0x3ccu);
    }
L_001ea940:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ea944:;
    {
        cpu->r[14] = 0x001ea948u; fn_001ddfa0(cpu);
    }
L_001ea948:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ea94c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001ea950:;
    {
        cpu->r[14] = 0x001ea954u; fn_001de130(cpu);
    }
L_001ea954:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0xa8u);
    }
L_001ea958:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xacu);
    }
L_001ea95c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001ea960:;
    {
        vfp_sync_flags(cpu);
    }
L_001ea964:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vadd(cpu, 14, 16, 14);
        }
    }
L_001ea968:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001ea96c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001ea970:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_001ea974:;
    {
        if (cond_test(cpu, 6)) {
        wr8(cpu->r[4] + + 0xb0u, cpu->r[3]);
        }
    }
L_001ea978:;
    {
        vfp_sync_flags(cpu);
    }
L_001ea97c:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0xa4u);
        }
    }
L_001ea980:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ea9a8;
        }
    }
L_001ea984:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001ea988:;
    {
        vfp_sync_flags(cpu);
    }
L_001ea98c:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0xa4u);
        }
    }
L_001ea990:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0xa0u);
        }
    }
L_001ea994:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 12, 12, 13);
        }
    }
L_001ea998:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0xa0u);
        }
    }
L_001ea99c:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 14, 12, 14);
        }
    }
L_001ea9a0:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vdiv(cpu, 12, 14, 15);
        }
    }
L_001ea9a4:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 12, 13, 12);
        }
    }
L_001ea9a8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ea9ac:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001ea9b0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ea9b4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001ea9b8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0xbcu);
    }
L_001ea9bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xc0u);
    }
L_001ea9c0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001ea9c4:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,14);
    }
L_001ea9c8:;
    {
        vfp_sync_flags(cpu);
    }
L_001ea9cc:;
    {
        if (cond_test(cpu, 6)) {
        wr8(cpu->r[3] + + 0xc4u, cpu->r[0]);
        }
    }
L_001ea9d0:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vadd(cpu, 13, 16, 14);
        }
    }
L_001ea9d4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,15));
    }
L_001ea9d8:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[3] + + 0xbcu) = *(uint32_t*)vfp_s(cpu, 13);
        }
    }
L_001ea9dc:;
    {
        vfp_sync_flags(cpu);
    }
L_001ea9e0:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xb8u);
        }
    }
L_001ea9e4:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001eaa0c;
        }
    }
L_001ea9e8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001ea9ec:;
    {
        vfp_sync_flags(cpu);
    }
L_001ea9f0:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0xb4u);
        }
    }
L_001ea9f4:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0xb8u);
        }
    }
L_001ea9f8:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 11, 11, 14);
        }
    }
L_001ea9fc:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xb4u);
        }
    }
L_001eaa00:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 13, 13, 11);
        }
    }
L_001eaa04:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vdiv(cpu, 15, 13, 15);
        }
    }
L_001eaa08:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 15, 14, 15);
        }
    }
L_001eaa0c:;
    {
        vfp_vmul(cpu, 15, 12, 15);
    }
L_001eaa10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001eaa14:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 1);
    }
L_001eaa18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000014u, 0, 0);
    }
L_001eaa1c:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x334u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001eaa20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001eaa24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ea9b8;
        }
    }
L_001eaa28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001eaa2c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00000084u, 0, 0);
    }
L_001eaa30:;
    {
        cpu->r[14] = 0x001eaa34u; fn_001ebcf8(cpu);
    }
L_001eaa34:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00000090u, 0, 0);
    }
L_001eaa38:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001eaa3c:;
    {
        cpu->r[14] = 0x001eaa40u; fn_001ebd2c(cpu);
    }
L_001eaa40:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001eaa44:;
    {
        cpu->r[14] = 0x001eaa48u; fn_001ebd2c(cpu);
    }
L_001eaa48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x68u);
    }
L_001eaa4c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_001eaa50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001eaa54:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000058u, 0, 0);
        }
    }
L_001eaa58:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001eaa7c;
        }
    }
L_001eaa5c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000058u, 0, 0);
    }
L_001eaa60:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000068u, 0, 0);
    }
L_001eaa64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001eaa68:;
    {
        cpu->r[14] = 0x001eaa6cu; fn_001e4048(cpu);
    }
L_001eaa6c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x68u);
    }
L_001eaa70:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x10u);
    }
L_001eaa74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001eaa78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ead80;
        }
    }
L_001eaa7c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001eaa80:;
    {
        cpu->r[14] = 0x001eaa84u; fn_001ebd00(cpu);
    }
L_001eaa84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001eaa88:;
    {
        cpu->r[14] = 0x001eaa8cu; fn_001ebd00(cpu);
    }
L_001eaa8c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001eaa90:;
    {
        cpu->r[14] = 0x001eaa94u; fn_001ebdc8(cpu);
    }
L_001eaa94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001eaa98:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001eaa9c:;
    {
        cpu->r[14] = 0x001eaaa0u; fn_001de2b4(cpu);
    }
L_001eaaa0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001eaaa4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001eaaa8:;
    {
        cpu->r[14] = 0x001eaaacu; fn_001de2c4(cpu);
    }
L_001eaaac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001eaab0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001eaab4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001eaab8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eab20;
        }
    }
L_001eaabc:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x18u);
    }
L_001eaac0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001eaac4:;
    {
        cpu->r[14] = 0x001eaac8u; fn_001dff78(cpu);
    }
L_001eaac8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_001eaacc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001eaad0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x334u);
    }
L_001eaad4:;
    {
        cpu->r[14] = 0x001eaad8u; fn_001de5d0(cpu);
    }
L_001eaad8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001eaadc:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001eaae0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x18u);
    }
L_001eaae4:;
    {
        cpu->r[14] = 0x001eaae8u; fn_001ea458(cpu);
    }
L_001eaae8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001eaaec:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001eaaf0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001eaaf4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eab00;
        }
    }
L_001eaaf8:;
    {
        goto L_001eac0c;
    }
L_001eaafc:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001eab00:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001eab04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001eab08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eaafc;
        }
    }
L_001eab0c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001eab10:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001eab14:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001eab18:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001eab1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eaabc;
        }
    }
L_001eab20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001eab24:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001eab28:;
    {
        cpu->r[14] = 0x001eab2cu; fn_001de2b4(cpu);
    }
L_001eab2c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001eab30:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001eab34:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001eab38:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001eab3c:;
    {
        cpu->r[14] = 0x001eab40u; fn_001de2c4(cpu);
    }
L_001eab40:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001eab44:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001eab48:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001eab4c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001eab50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001eab54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eabc0;
        }
    }
L_001eab58:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x18u);
    }
L_001eab5c:;
    {
        cpu->r[14] = 0x001eab60u; fn_001dffa0(cpu);
    }
L_001eab60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001eab64:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
        }
    }
L_001eab68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eab8c;
        }
    }
L_001eab6c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001eab70:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001eab74:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x80u);
    }
L_001eab78:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x18u);
    }
L_001eab7c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 1);
    }
L_001eab80:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[9] + 0x00000004u;
        wr32(cpu->r[9], cpu->r[7]);
        cpu->r[9] = wb_tmp;
        }
    }
L_001eab84:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[9]);
        }
    }
L_001eab88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eac7c;
        }
    }
L_001eab8c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001eab90:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001eab94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eaba0;
        }
    }
L_001eab98:;
    {
        goto L_001eac44;
    }
L_001eab9c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001eaba0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001eaba4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001eaba8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eab9c;
        }
    }
L_001eabac:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001eabb0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001eabb4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001eabb8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001eabbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eab58;
        }
    }
L_001eabc0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x9cu);
    }
L_001eabc4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001eabc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eabd0;
        }
    }
L_001eabcc:;
    {
        cpu->r[14] = 0x001eabd0u; fn_001e47dc(cpu);
    }
L_001eabd0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001eabd4:;
    {
        cpu->r[14] = 0x001eabd8u; fn_001ebd9c(cpu);
    }
L_001eabd8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001eabdc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001eabe0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001eabe4:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 2u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001eabe8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ead18;
        }
    }
L_001eabec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001eabf0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001eabf4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eabf8u)) return;
    }
L_001eabf8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001eac00u + + 0x114u);
    }
L_001eabfc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_001eac00:;
    {
        vfp_sync_flags(cpu);
    }
L_001eac04:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,16) = *vfp_s(cpu,15);
        }
    }
L_001eac08:;
    {
        goto L_001ea940;
    }
L_001eac0c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001eac10:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0xcu);
    }
L_001eac14:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001eac18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eac34;
        }
    }
L_001eac1c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001eac20:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001eac24:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_001eac28:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001eac2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eac1c;
        }
    }
L_001eac30:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001eac34:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001eac38:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001eac3c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001eac40:;
    {
        goto L_001eab14;
    }
L_001eac44:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001eac48:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0xcu);
    }
L_001eac4c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001eac50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eac6c;
        }
    }
L_001eac54:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001eac58:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001eac5c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_001eac60:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001eac64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eac54;
        }
    }
L_001eac68:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001eac6c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001eac70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001eac74:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001eac78:;
    {
        goto L_001eabb4;
    }
L_001eac7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001eac80:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_001eac84:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001eac88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001eac8c:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001eac90:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[10] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001eac94:;
    {
        add_flags(cpu, cpu->r[10], 0xc0000001u, 0, 1);
    }
L_001eac98:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001eacfc;
        }
    }
L_001eac9c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001eaca0:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[10] = v;
        }
    }
L_001eaca4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001eacfc;
        }
    }
L_001eaca8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001eacac:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001eacb0:;
    {
        cpu->r[14] = 0x001eacb4u; fn_00097dd0(cpu);
    }
L_001eacb4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x78u);
    }
L_001eacb8:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 1);
    }
L_001eacbc:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001eacc0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = cpu->r[0];
        }
    }
L_001eacc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eacd8;
        }
    }
L_001eacc8:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001eaccc:;
    {
        cpu->r[14] = 0x001eacd0u; imp_memmove(cpu); /* memmove */
    }
L_001eacd0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x78u);
    }
L_001eacd4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_001eacd8:;
    {
        uint32_t wb_tmp = cpu->r[9] + 0x00000004u;
        wr32(cpu->r[9], cpu->r[7]);
        cpu->r[9] = wb_tmp;
    }
L_001eacdc:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001eace0:;
    {
        cpu->r[14] = 0x001eace4u; fn_00097dc8(cpu);
    }
L_001eace4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_001eace8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001eacec:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[9]);
    }
L_001eacf0:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[10]);
    }
L_001eacf4:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[8]);
    }
L_001eacf8:;
    {
        goto L_001eab8c;
    }
L_001eacfc:;
    {
        cpu->r[10] = (~0x00000003u);
    }
L_001ead00:;
    {
        goto L_001eaca8;
    }
L_001ead04:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ead08:;
    {
        cpu->r[14] = 0x001ead0cu; fn_001ebcf8(cpu);
    }
L_001ead0c:;
    {
        goto L_001eabec;
    }
L_001ead18:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ead1c:;
    {
        cpu->r[14] = 0x001ead20u; fn_001ebd2c(cpu);
    }
L_001ead20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001ead24:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x78u);
    }
L_001ead28:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_001ead2c:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 2u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001ead30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ead74;
        }
    }
L_001ead34:;
    {
        cpu->r[3] = rd32(cpu->r[3] + - 0x4u);
    }
L_001ead38:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ead3c:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001ead40:;
    {
        uint64_t v = rd64(cpu->r[3] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001ead44:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x20u);
    }
L_001ead48:;
    {
        cpu->r[14] = 0x001ead4cu; fn_001e4910(cpu);
    }
L_001ead4c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001ead50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ead54:;
    {
        cpu->r[14] = 0x001ead58u; guest_call(cpu, cpu->r[7]);
    }
L_001ead58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001ead5c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x78u);
    }
L_001ead60:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_001ead64:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_001ead68:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_001ead6c:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 2u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001ead70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ead34;
        }
    }
L_001ead74:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ead78:;
    {
        cpu->r[14] = 0x001ead7cu; fn_001ebd00(cpu);
    }
L_001ead7c:;
    {
        goto L_001eabec;
    }
L_001ead80:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ead84:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x4u);
    }
L_001ead88:;
    {
        cpu->r[14] = 0x001ead8cu; fn_001deec0(cpu);
    }
L_001ead8c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ead90:;
    {
        wr32(cpu->r[8] + + 0x8u, cpu->r[8]);
    }
L_001ead94:;
    {
        wr32(cpu->r[8] + + 0xcu, cpu->r[8]);
    }
L_001ead98:;
    {
        wr32(cpu->r[8] + + 0x10u, cpu->r[3]);
    }
L_001ead9c:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[3]);
    }
L_001eada0:;
    {
        goto L_001eaa7c;
    }
}

/* _ZN3vox18VoxMSWavSubDecoderD1Ev @ 001eada4 (arm) */
void fn_001eada4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eada4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox26VoxMSWavSubDecoderIMAADPCM7HasDataEv @ 001eada8 (arm) */
void fn_001eada8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eada8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001eadac:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001eadb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001eadb4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001eadb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eae28;
        }
    }
L_001eadbc:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x28u);
    }
L_001eadc0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001eadc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eae18;
        }
    }
L_001eadc8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x64u);
    }
L_001eadcc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001eadd0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001eadd4:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001eae04;
        }
    }
L_001eadd8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001eaddc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x54u);
    }
L_001eade0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x28u);
    }
L_001eade4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001eade8:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001eadfc;
        }
    }
L_001eadec:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x60u);
    }
L_001eadf0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x5cu);
    }
L_001eadf4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001eadf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eae04;
        }
    }
L_001eadfc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001eae00:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001eae04u)) return;
    }
L_001eae04:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001eae08:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001eae0c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001eae10:;
    {
        cpu->r[14] = 0x001eae18u;
    }
L_001eae14:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001eae18u)) return;
    }
L_001eae18:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x64u);
    }
L_001eae1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001eae20:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001eae24:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001eae30;
        }
    }
L_001eae28:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001eae2c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001eae30u)) return;
    }
L_001eae30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001eae34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x54u);
    }
L_001eae38:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x28u);
    }
L_001eae3c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001eae40:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001eadfc;
        }
    }
L_001eae44:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001eae48:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x60u);
    }
L_001eae4c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001eae50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001eae54:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001eae58u)) return;
    }
}

/* _ZN3vox26VoxMSWavSubDecoderIMAADPCM11DecodeBlockEPv @ 001eae58 (arm) */
void fn_001eae58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eae58:;
    {
        cpu->r[3] = rd32(0x001eae60u + + 0x420u);
    }
L_001eae5c:;
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
L_001eae60:;
    {
        cpu->r[2] = rd32(0x001eae68u + + 0x41cu);
    }
L_001eae64:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000134u, 1, 0);
    }
L_001eae68:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001eae6c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001eae74u, cpu->r[2], 0, 0);
    }
L_001eae70:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_001eae74:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001eae78:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x44u);
    }
L_001eae7c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_001eae80:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_001eae84:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x18u);
    }
L_001eae88:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_001eae8c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_001eae90:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001eae94:;
    {
        cpu->r[14] = rd32(cpu->r[2] + + 0x28u);
    }
L_001eae98:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001eae9c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001eaea0:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0x54u);
    }
L_001eaea4:;
    {
        cpu->r[4] = rd32(cpu->r[8] + + 0x68u);
    }
L_001eaea8:;
    {
        cpu->r[2] = rd16(cpu->r[2] + + 0x20u);
    }
L_001eaeac:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_001eaeb0:;
    {
        wr32(cpu->r[13] + + 0x12cu, cpu->r[1]);
    }
L_001eaeb4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001eaeb8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001eaebc:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_001eaec0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001eaec4:;
    {
        cpu->r[14] = 0x001eaeccu;
    }
L_001eaec8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001eaeccu)) return;
    }
L_001eaecc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001eaed0:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001eaed4:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[0]);
    }
L_001eaed8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x0000002au, 0, 0);
    }
L_001eaedc:;
    {
        cpu->r[14] = 0x001eaee0u; imp_memcpy(cpu); /* memcpy */
    }
L_001eaee0:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x8u);
    }
L_001eaee4:;
    {
        cpu->r[1] = rd16(cpu->r[2] + + 0x16u);
    }
L_001eaee8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001eaeec:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0xfcu, cpu->r[7]);
        }
    }
L_001eaef0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001eaf58;
        }
    }
L_001eaef4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x18u);
    }
L_001eaef8:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_001eaefc:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_001eaf00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_001eaf04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x0000002eu, 0, 0);
    }
L_001eaf08:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001eaf0c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001eaf10:;
    {
        cpu->r[14] = 0x001eaf14u; imp_memcpy(cpu); /* memcpy */
    }
L_001eaf14:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x8u);
    }
L_001eaf18:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001eaf1c:;
    {
        cpu->r[1] = rd16(cpu->r[2] + + 0x16u);
    }
L_001eaf20:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_001eaf24:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001eaf00;
        }
    }
L_001eaf28:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001eaf2c:;
    {
        wr32(cpu->r[13] + + 0xfcu, cpu->r[7]);
    }
L_001eaf30:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001eaf58;
        }
    }
L_001eaf34:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x000000fcu, 0, 0);
    }
L_001eaf38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001eaf3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001eaf40:;
    {
        goto L_001eaf48;
    }
L_001eaf44:;
    {
        cpu->r[7] = rd32(cpu->r[3] + - 0x4u);
    }
L_001eaf48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_001eaf4c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[12]);
        cpu->r[3] = wb_tmp;
    }
L_001eaf50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001eaf54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eaf44;
        }
    }
L_001eaf58:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001eaf5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eaf9c;
        }
    }
L_001eaf60:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001eaf64:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001eaf68:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001eaf6c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x000000fcu, 0, 0);
    }
L_001eaf70:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001eaf74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001eaf78:;
    {
        cpu->r[1] = rd16(cpu->r[12] + + 0x2au);
    }
L_001eaf7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001eaf80:;
    {
        wr16(cpu->r[5], cpu->r[1]);
    }
L_001eaf84:;
    {
        cpu->r[1] = rd16(cpu->r[2] + + 0x16u);
    }
L_001eaf88:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001eaf8c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001eaf90:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[5]);
    }
L_001eaf94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001eaf98:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001eaf70;
        }
    }
L_001eaf9c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_001eafa0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001eafa4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_001eafa8:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_001eafac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001eafb0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_001eafb4:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x28u, cpu->r[4]);
        }
    }
L_001eafb8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001eb1a4;
        }
    }
L_001eafbc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_001eafc0:;
    {
        cpu->r[3] = rd32(0x001eafc8u + + 0x2c0u);
    }
L_001eafc4:;
    {
        cpu->r[0] = rd32(0x001eafccu + + 0x2c0u);
    }
L_001eafc8:;
    {
        cpu->r[5] = 0x00008000u;
    }
L_001eafcc:;
    {
        cpu->r[1] = rd32(0x001eafd4u + + 0x2bcu);
    }
L_001eafd0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001eafd8u, cpu->r[3], 0, 0);
    }
L_001eafd4:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0xffffu << 16);
    }
L_001eafd8:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_001eafdc:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_001eafe0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001eafe4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000b4u, 0, 0);
    }
L_001eafe8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001eafec:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[8]);
    }
L_001eaff0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_001eaff4:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_001eaff8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_001eaffc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001eb000:;
    {
        cpu->r[6] = rd16(cpu->r[2] + + 0x16u);
    }
L_001eb004:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001eb008:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eb188;
        }
    }
L_001eb00c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001eb010:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001eb014:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x34u);
    }
L_001eb018:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000fcu, 0, 0);
    }
L_001eb01c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_001eb020:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001eb024:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_001eb028:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[8]);
    }
L_001eb02c:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_001eb030:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_001eb034:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_001eb038:;
    {
        cpu->r[10] = rd32(cpu->r[3]);
    }
L_001eb03c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000011cu, 0, 0);
    }
L_001eb040:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_001eb044:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_001eb048:;
    {
        cpu->r[4] = rd8(cpu->r[11] + + 0x2u);
    }
L_001eb04c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001eb050:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_001eb054:;
    {
        cpu->r[5] = rd32(cpu->r[13]);
    }
L_001eb058:;
    {
        cpu->r[1] = rd8(cpu->r[11] + + 0x1u);
    }
L_001eb05c:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 16u, &shc); cpu->r[4] = v;
    }
L_001eb060:;
    {
        cpu->r[2] = rd8(cpu->r[11]);
    }
L_001eb064:;
    {
        cpu->r[3] = rd8(cpu->r[11] + + 0x3u);
    }
L_001eb068:;
    {
        cpu->r[5] = rd32(cpu->r[8] + cpu->r[5]);
    }
L_001eb06c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 8u, &shc), 0, 0);
    }
L_001eb070:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_001eb074:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 24u, &shc), 0, 0);
    }
L_001eb078:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001eb07c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eb1fc;
        }
    }
L_001eb080:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001eb084:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[8] = v;
    }
L_001eb088:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001eb08c:;
    {
        uint32_t v = cpu->r[4] & 0x0000000fu; cpu->r[3] = v;
    }
L_001eb090:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[9] + + 0x2au);
    }
L_001eb094:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xcu);
    }
L_001eb098:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001eb09c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001eb0a0:;
    {
        cpu->r[0] = rd8(cpu->r[9] + + 0x2cu);
    }
L_001eb0a4:;
    {
        cpu->r[7] = rd32(cpu->r[2]);
    }
L_001eb0a8:;
    {
        goto L_001eb0ec;
    }
L_001eb0ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001eb0b0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
    }
L_001eb0b4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_001eb0b8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = cpu->r[1];
        }
    }
L_001eb0bc:;
    {
        cpu->r[2] = rd8(cpu->r[7] + cpu->r[3]);
    }
L_001eb0c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001eb0c4:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[5]);
    }
L_001eb0c8:;
    {
        wr16(cpu->r[6], cpu->r[3]);
    }
L_001eb0cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001eb0d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000058u, 1, 1);
    }
L_001eb0d4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000058u;
        }
    }
L_001eb0d8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000008u, 1, 1);
    }
L_001eb0dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eb12c;
        }
    }
L_001eb0e0:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 4u, &shc); cpu->r[4] = v;
    }
L_001eb0e4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[8], 0, 0);
    }
L_001eb0e8:;
    {
        uint32_t v = cpu->r[4] & 0x0000000fu; cpu->r[3] = v;
    }
L_001eb0ec:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001eb0f0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_001eb0f4:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[10] + cpu->r[2]);
    }
L_001eb0f8:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[2] = v;
    }
L_001eb0fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
        }
    }
L_001eb100:;
    {
        { uint32_t v = cpu->r[3] & 0x00000002u; set_nz(cpu, v); }
    }
L_001eb104:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 1, 1u, &shc), 0, 0);
        }
    }
L_001eb108:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001eb10c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 1, 2u, &shc), 0, 0);
        }
    }
L_001eb110:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_001eb114:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eb0ac;
        }
    }
L_001eb118:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_001eb11c:;
    {
        cpu->r[2] = 0x00007fffu;
    }
L_001eb120:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_001eb124:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = cpu->r[2];
        }
    }
L_001eb128:;
    {
        goto L_001eb0bc;
    }
L_001eb12c:;
    {
        wr8(cpu->r[9] + + 0x2cu, cpu->r[0]);
    }
L_001eb130:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_001eb134:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_001eb138:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x8u);
    }
L_001eb13c:;
    {
        wr16(cpu->r[9] + + 0x2au, cpu->r[3]);
    }
L_001eb140:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_001eb144:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_001eb148:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001eb14c:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_001eb150:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001eb154:;
    {
        cpu->r[3] = rd16(cpu->r[2] + + 0x16u);
    }
L_001eb158:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
    }
L_001eb15c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001eb160:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001eb164:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_001eb168:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_001eb16c:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[3]);
    }
L_001eb170:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001eb174:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001eb178:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001eb048;
        }
    }
L_001eb17c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001eb180:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_001eb184:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_001eb188:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_001eb18c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x38u);
    }
L_001eb190:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_001eb194:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001eb198:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001eb19c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[5]);
    }
L_001eb1a0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001eb000;
        }
    }
L_001eb1a4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_001eb1a8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_001eb1ac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_001eb1b0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x64u);
    }
L_001eb1b4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001eb1b8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x54u);
    }
L_001eb1bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_001eb1c0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001eb1c4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_001eb1c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_001eb1cc:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[1]);
    }
L_001eb1d0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001eb1d4:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_001eb1d8:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
        }
    }
L_001eb1dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x12cu);
    }
L_001eb1e0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_001eb1e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001eb1e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001eb1ec:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001eb1f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eb27c;
        }
    }
L_001eb1f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000134u, 0, 0);
    }
L_001eb1f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb1fcu)) return;
    }
L_001eb1fc:;
    {
        cpu->r[0] = 0x00000164u;
    }
L_001eb200:;
    {
        cpu->r[14] = 0x001eb204u; fn_00097dd4(cpu);
    }
L_001eb204:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_001eb208:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_001eb20c:;
    {
        cpu->r[2] = 0x000000b2u;
    }
L_001eb210:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001eb214:;
    {
        cpu->r[7] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_001eb218:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001eb21c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_001eb220:;
    {
        wr32(cpu->r[7], cpu->r[5]);
    }
L_001eb224:;
    {
        cpu->r[14] = 0x001eb228u; imp_memcpy(cpu); /* memcpy */
    }
L_001eb228:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001eb22c:;
    {
        cpu->r[2] = 0x00000164u;
    }
L_001eb230:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001eb234:;
    {
        cpu->r[14] = 0x001eb238u; imp_memcpy(cpu); /* memcpy */
    }
L_001eb238:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001eb23c:;
    {
        cpu->r[14] = 0x001eb240u; fn_00097dd4(cpu);
    }
L_001eb240:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001eb244:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001eb248:;
    {
        cpu->r[14] = cpu->r[0];
    }
L_001eb24c:;
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
L_001eb250:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_001eb254:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001eb258:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x20u);
    }
L_001eb25c:;
    {
        wr32(cpu->r[12], cpu->r[14]);
    }
L_001eb260:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001eb264:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_001eb268:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001eb26c:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001eb270:;
    {
        cpu->r[14] = 0x001eb274u; imp_memcpy(cpu); /* memcpy */
    }
L_001eb274:;
    {
        cpu->r[10] = rd32(cpu->r[7]);
    }
L_001eb278:;
    {
        goto L_001eb080;
    }
L_001eb27c:;
    {
        cpu->r[14] = 0x001eb280u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001eb280:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001eb284:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[4], 3, 11u, &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001eb288u)) return;
        }
    }
L_001eb288:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[0]; cpu->r[4] = v;
        }
    }
L_001eb28c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr64(cpu->r[0], ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_001eb290:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 4, (cpu->r[7] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN3vox26VoxMSWavSubDecoderIMAADPCM6DecodeEPvi @ 001eb294 (arm) */
void fn_001eb294(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eb294:;
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
L_001eb298:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001eb29c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001eb2a0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001eb2a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001eb2a8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001eb2ac:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001eb2b0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001eb2b4:;
    {
        cpu->r[14] = 0x001eb2b8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001eb2b8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001eb2bc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001eb2c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb2c4u)) return;
        }
    }
L_001eb2c4:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_001eb2c8:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001eb2cc:;
    {
        goto L_001eb2f8;
    }
L_001eb2d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001eb2d4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x54u);
    }
L_001eb2d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x28u);
    }
L_001eb2dc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001eb2e0:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001eb2f0;
        }
    }
L_001eb2e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001eb2e8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001eb2ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eb370;
        }
    }
L_001eb2f0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001eb2f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001eb3d0;
        }
    }
L_001eb2f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001eb2fc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001eb300:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001eb304:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eb3ac;
        }
    }
L_001eb308:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001eb30c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[1] = v;
    }
L_001eb310:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_001eb314:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001eb318:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_001eb31c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001eb320:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = cpu->r[6];
        }
    }
L_001eb324:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001eb328:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[0] = v;
    }
L_001eb32c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_001eb330:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5]; cpu->r[2] = v;
    }
L_001eb334:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_001eb338:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001eb33c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001eb340:;
    {
        cpu->r[14] = 0x001eb344u; imp_memcpy(cpu); /* memcpy */
    }
L_001eb344:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x64u);
    }
L_001eb348:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001eb34c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001eb350:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001eb354:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x60u);
    }
L_001eb358:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001eb35c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001eb360:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_001eb364:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_001eb368:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[5]);
    }
L_001eb36c:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001eb2d0;
        }
    }
L_001eb370:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x28u);
    }
L_001eb374:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001eb378:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eb390;
        }
    }
L_001eb37c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001eb380:;
    {
        cpu->r[14] = 0x001eb388u;
    }
L_001eb384:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb388u)) return;
    }
L_001eb388:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001eb38c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eb2f0;
        }
    }
L_001eb390:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001eb394:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_001eb398:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_001eb39c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001eb3a0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[3] = v;
    }
L_001eb3a4:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[0] = v;
    }
L_001eb3a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb3acu)) return;
    }
L_001eb3ac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001eb3b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001eb3b4:;
    {
        cpu->r[14] = 0x001eb3b8u; fn_001eae58(cpu);
    }
L_001eb3b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001eb3bc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001eb3c0:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001eb3c4:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[10]);
    }
L_001eb3c8:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[0]);
    }
L_001eb3cc:;
    {
        goto L_001eb314;
    }
L_001eb3d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001eb3d4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_001eb3d8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_001eb3dc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001eb3e0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[3] = v;
    }
L_001eb3e4:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[0] = v;
    }
L_001eb3e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb3ecu)) return;
    }
}

/* _ZN3vox26VoxMSWavSubDecoderIMAADPCM4SeekEj @ 001eb3ec (arm) */
void fn_001eb3ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eb3ec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001eb3f0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001eb3f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001eb3f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001eb3fc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001eb400:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001eb410;
        }
    }
L_001eb404:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001eb408:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001eb40c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb410u)) return;
    }
L_001eb410:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001eb404;
        }
    }
L_001eb414:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x50u);
    }
L_001eb418:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001eb41c:;
    {
        cpu->r[14] = 0x001eb420u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001eb420:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001eb424:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x58u);
    }
L_001eb428:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001eb42c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001eb430:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001eb434:;
    {
        cpu->r[12] = rd16(cpu->r[0] + + 0x20u);
    }
L_001eb438:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001eb43c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001eb440:;
    {
        uint32_t v = cpu->r[12] * cpu->r[6]; cpu->r[12] = v;
    }
L_001eb444:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_001eb448:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[12]);
    }
L_001eb44c:;
    {
        cpu->r[14] = 0x001eb454u;
    }
L_001eb450:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb454u)) return;
    }
L_001eb454:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_001eb458:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001eb45c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001eb460:;
    {
        uint32_t v = cpu->r[3] * cpu->r[6]; cpu->r[6] = v;
    }
L_001eb464:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 0);
    }
L_001eb468:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[5]);
    }
L_001eb46c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_001eb470:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[5]);
    }
L_001eb474:;
    {
        cpu->r[14] = 0x001eb478u; fn_001eae58(cpu);
    }
L_001eb478:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001eb47c:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[0]);
    }
L_001eb480:;
    {
        goto L_001eb408;
    }
}

/* _ZN3vox18VoxMSWavSubDecoderD0Ev @ 001eb484 (arm) */
void fn_001eb484(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eb484:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001eb488:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001eb48c:;
    {
        cpu->r[14] = 0x001eb490u; fn_0018ba20(cpu);
    }
L_001eb490:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001eb494:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb498u)) return;
    }
}

/* _ZN3vox26VoxMSWavSubDecoderIMAADPCMD1Ev @ 001eb498 (arm) */
void fn_001eb498(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eb498:;
    {
        cpu->r[3] = rd32(0x001eb4a0u + + 0x4cu);
    }
L_001eb49c:;
    {
        cpu->r[2] = rd32(0x001eb4a4u + + 0x4cu);
    }
L_001eb4a0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001eb4a8u, cpu->r[3], 0, 0);
    }
L_001eb4a4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001eb4a8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001eb4ac:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001eb4b0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x0000002au, 0, 0);
    }
L_001eb4b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001eb4b8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001eb4bc:;
    {
        wr32(cpu->r[6], cpu->r[2]);
    }
L_001eb4c0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], 0x0000004au, 0, 0);
    }
L_001eb4c4:;
    {
        cpu->r[14] = 0x001eb4c8u; fn_00097dc8(cpu);
    }
L_001eb4c8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x68u);
    }
L_001eb4cc:;
    {
        cpu->r[14] = 0x001eb4d0u; fn_00097dc8(cpu);
    }
L_001eb4d0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 0);
    }
L_001eb4d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001eb4d8:;
    {
        cpu->r[14] = 0x001eb4dcu; fn_001930d4(cpu);
    }
L_001eb4dc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001eb4e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eb4d0;
        }
    }
L_001eb4e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001eb4e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb4ecu)) return;
    }
}

/* _ZN3vox26VoxMSWavSubDecoderIMAADPCMD0Ev @ 001eb4f4 (arm) */
void fn_001eb4f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eb4f4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001eb4f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001eb4fc:;
    {
        cpu->r[14] = 0x001eb500u; fn_001eb498(cpu);
    }
L_001eb500:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001eb504:;
    {
        cpu->r[14] = 0x001eb508u; fn_0018ba20(cpu);
    }
L_001eb508:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001eb50c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb510u)) return;
    }
}

/* _ZN3vox26VoxMSWavSubDecoderIMAADPCMD2Ev @ 001eb510 (arm) */
void fn_001eb510(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eb510:;
    {
        cpu->r[3] = rd32(0x001eb518u + + 0x4cu);
    }
L_001eb514:;
    {
        cpu->r[2] = rd32(0x001eb51cu + + 0x4cu);
    }
L_001eb518:;
    {
        cpu->r[3] = add_flags(cpu, 0x001eb520u, cpu->r[3], 0, 0);
    }
L_001eb51c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001eb520:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001eb524:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001eb528:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x0000002au, 0, 0);
    }
L_001eb52c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001eb530:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001eb534:;
    {
        wr32(cpu->r[6], cpu->r[2]);
    }
L_001eb538:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], 0x0000004au, 0, 0);
    }
L_001eb53c:;
    {
        cpu->r[14] = 0x001eb540u; fn_00097dc8(cpu);
    }
L_001eb540:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x68u);
    }
L_001eb544:;
    {
        cpu->r[14] = 0x001eb548u; fn_00097dc8(cpu);
    }
L_001eb548:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 0);
    }
L_001eb54c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001eb550:;
    {
        cpu->r[14] = 0x001eb554u; fn_001930d4(cpu);
    }
L_001eb554:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001eb558:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eb548;
        }
    }
L_001eb55c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001eb560:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb564u)) return;
    }
}

/* _ZN3vox26VoxMSWavSubDecoderIMAADPCMC1EPNS_21StreamCursorInterfaceEPNS_9WaveChunkE @ 001eb56c (arm) */
void fn_001eb56c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eb56c:;
    {
        cpu->r[3] = rd32(0x001eb574u + + 0x180u);
    }
L_001eb570:;
    {
        cpu->r[12] = rd32(0x001eb578u + + 0x180u);
    }
L_001eb574:;
    {
        cpu->r[3] = add_flags(cpu, 0x001eb57cu, cpu->r[3], 0, 0);
    }
L_001eb578:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001eb57c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001eb580:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001eb584:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001eb588:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001eb58c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001eb590:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001eb594:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[1]);
    }
L_001eb598:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001eb59c:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[2]);
    }
L_001eb5a0:;
    {
        uint32_t wb_tmp = cpu->r[6] + 0x0000002au;
        wr32(cpu->r[6], cpu->r[12]);
        cpu->r[6] = wb_tmp;
    }
L_001eb5a4:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[0]);
    }
L_001eb5a8:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[0]);
    }
L_001eb5ac:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[0]);
    }
L_001eb5b0:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[0]);
    }
L_001eb5b4:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[0]);
    }
L_001eb5b8:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[0]);
    }
L_001eb5bc:;
    {
        wr32(cpu->r[5] + + 0x24u, cpu->r[0]);
    }
L_001eb5c0:;
    {
        wr8(cpu->r[5] + + 0x28u, cpu->r[0]);
    }
L_001eb5c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_001eb5c8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001eb5cc:;
    {
        cpu->r[14] = 0x001eb5d0u; fn_001930c0(cpu);
    }
L_001eb5d0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000020u, 1, 1);
    }
L_001eb5d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eb5c4;
        }
    }
L_001eb5d8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001eb5dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001eb5e0:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[4]);
    }
L_001eb5e4:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[4]);
    }
L_001eb5e8:;
    {
        wr32(cpu->r[5] + + 0x5cu, cpu->r[4]);
    }
L_001eb5ec:;
    {
        wr32(cpu->r[5] + + 0x60u, cpu->r[4]);
    }
L_001eb5f0:;
    {
        wr32(cpu->r[5] + + 0x64u, cpu->r[4]);
    }
L_001eb5f4:;
    {
        wr32(cpu->r[5] + + 0x68u, cpu->r[4]);
    }
L_001eb5f8:;
    {
        cpu->r[14] = 0x001eb5fcu; fn_00200af0(cpu);
    }
L_001eb5fc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001eb600:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001eb604:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001eb608:;
    {
        cpu->r[14] = 0x001eb610u;
    }
L_001eb60c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb610u)) return;
    }
L_001eb610:;
    {
        cpu->r[3] = rd16(cpu->r[7] + + 0x20u);
    }
L_001eb614:;
    {
        wr32(cpu->r[5] + + 0x58u, cpu->r[0]);
    }
L_001eb618:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001eb61c:;
    {
        cpu->r[14] = 0x001eb620u; fn_00097dd4(cpu);
    }
L_001eb620:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_001eb624:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[0]);
    }
L_001eb628:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eb6bc;
        }
    }
L_001eb62c:;
    {
        cpu->r[0] = rd16(cpu->r[7] + + 0x20u);
    }
L_001eb630:;
    {
        cpu->r[14] = 0x001eb634u; fn_00097dd4(cpu);
    }
L_001eb634:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001eb638:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001eb63c:;
    {
        wr32(cpu->r[5] + + 0x68u, cpu->r[0]);
    }
L_001eb640:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eb6d4;
        }
    }
L_001eb644:;
    {
        cpu->r[6] = rd16(cpu->r[7] + + 0x16u);
    }
L_001eb648:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001eb64c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eb6a4;
        }
    }
L_001eb650:;
    {
        cpu->r[0] = rd16(cpu->r[7] + + 0x20u);
    }
L_001eb654:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001eb658:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[6], 2, 2u, &shc), 1, 0);
    }
L_001eb65c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_001eb660:;
    {
        cpu->r[14] = 0x001eb664u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001eb664:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[6]);
    }
L_001eb668:;
    {
        cpu->r[3] = 0x00000010u;
    }
L_001eb66c:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[3]);
    }
L_001eb670:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_001eb674:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001eb678:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[0]);
    }
L_001eb67c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x18u);
    }
L_001eb680:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
    }
L_001eb684:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x34u);
    }
L_001eb688:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[3]);
    }
L_001eb68c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[4]);
        }
    }
L_001eb690:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0x10u, cpu->r[4]);
        }
    }
L_001eb694:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0x14u, cpu->r[4]);
        }
    }
L_001eb698:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0x18u, cpu->r[4]);
        }
    }
L_001eb69c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001eb6a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb6a4u)) return;
    }
L_001eb6a4:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[6]);
    }
L_001eb6a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001eb6ac:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[6]);
    }
L_001eb6b0:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[6]);
    }
L_001eb6b4:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[6]);
    }
L_001eb6b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb6bcu)) return;
    }
L_001eb6bc:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[0]);
    }
L_001eb6c0:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[0]);
    }
L_001eb6c4:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[0]);
    }
L_001eb6c8:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[0]);
    }
L_001eb6cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001eb6d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb6d4u)) return;
    }
L_001eb6d4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4cu);
    }
L_001eb6d8:;
    {
        cpu->r[14] = 0x001eb6dcu; fn_00097dc8(cpu);
    }
L_001eb6dc:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[6]);
    }
L_001eb6e0:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[6]);
    }
L_001eb6e4:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[6]);
    }
L_001eb6e8:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[6]);
    }
L_001eb6ec:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[6]);
    }
L_001eb6f0:;
    {
        goto L_001eb69c;
    }
}

/* _ZN3vox26VoxMSWavSubDecoderIMAADPCMC2EPNS_21StreamCursorInterfaceEPNS_9WaveChunkE @ 001eb6fc (arm) */
void fn_001eb6fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eb6fc:;
    {
        cpu->r[3] = rd32(0x001eb704u + + 0x180u);
    }
L_001eb700:;
    {
        cpu->r[12] = rd32(0x001eb708u + + 0x180u);
    }
L_001eb704:;
    {
        cpu->r[3] = add_flags(cpu, 0x001eb70cu, cpu->r[3], 0, 0);
    }
L_001eb708:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001eb70c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001eb710:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001eb714:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001eb718:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001eb71c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001eb720:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001eb724:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[1]);
    }
L_001eb728:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001eb72c:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[2]);
    }
L_001eb730:;
    {
        uint32_t wb_tmp = cpu->r[6] + 0x0000002au;
        wr32(cpu->r[6], cpu->r[12]);
        cpu->r[6] = wb_tmp;
    }
L_001eb734:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[0]);
    }
L_001eb738:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[0]);
    }
L_001eb73c:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[0]);
    }
L_001eb740:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[0]);
    }
L_001eb744:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[0]);
    }
L_001eb748:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[0]);
    }
L_001eb74c:;
    {
        wr32(cpu->r[5] + + 0x24u, cpu->r[0]);
    }
L_001eb750:;
    {
        wr8(cpu->r[5] + + 0x28u, cpu->r[0]);
    }
L_001eb754:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_001eb758:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001eb75c:;
    {
        cpu->r[14] = 0x001eb760u; fn_001930c0(cpu);
    }
L_001eb760:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000020u, 1, 1);
    }
L_001eb764:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eb754;
        }
    }
L_001eb768:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001eb76c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001eb770:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[4]);
    }
L_001eb774:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[4]);
    }
L_001eb778:;
    {
        wr32(cpu->r[5] + + 0x5cu, cpu->r[4]);
    }
L_001eb77c:;
    {
        wr32(cpu->r[5] + + 0x60u, cpu->r[4]);
    }
L_001eb780:;
    {
        wr32(cpu->r[5] + + 0x64u, cpu->r[4]);
    }
L_001eb784:;
    {
        wr32(cpu->r[5] + + 0x68u, cpu->r[4]);
    }
L_001eb788:;
    {
        cpu->r[14] = 0x001eb78cu; fn_00200af0(cpu);
    }
L_001eb78c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001eb790:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001eb794:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001eb798:;
    {
        cpu->r[14] = 0x001eb7a0u;
    }
L_001eb79c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb7a0u)) return;
    }
L_001eb7a0:;
    {
        cpu->r[3] = rd16(cpu->r[7] + + 0x20u);
    }
L_001eb7a4:;
    {
        wr32(cpu->r[5] + + 0x58u, cpu->r[0]);
    }
L_001eb7a8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001eb7ac:;
    {
        cpu->r[14] = 0x001eb7b0u; fn_00097dd4(cpu);
    }
L_001eb7b0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_001eb7b4:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[0]);
    }
L_001eb7b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eb84c;
        }
    }
L_001eb7bc:;
    {
        cpu->r[0] = rd16(cpu->r[7] + + 0x20u);
    }
L_001eb7c0:;
    {
        cpu->r[14] = 0x001eb7c4u; fn_00097dd4(cpu);
    }
L_001eb7c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001eb7c8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001eb7cc:;
    {
        wr32(cpu->r[5] + + 0x68u, cpu->r[0]);
    }
L_001eb7d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eb864;
        }
    }
L_001eb7d4:;
    {
        cpu->r[6] = rd16(cpu->r[7] + + 0x16u);
    }
L_001eb7d8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001eb7dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eb834;
        }
    }
L_001eb7e0:;
    {
        cpu->r[0] = rd16(cpu->r[7] + + 0x20u);
    }
L_001eb7e4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001eb7e8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[6], 2, 2u, &shc), 1, 0);
    }
L_001eb7ec:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_001eb7f0:;
    {
        cpu->r[14] = 0x001eb7f4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001eb7f4:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[6]);
    }
L_001eb7f8:;
    {
        cpu->r[3] = 0x00000010u;
    }
L_001eb7fc:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[3]);
    }
L_001eb800:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_001eb804:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001eb808:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[0]);
    }
L_001eb80c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x18u);
    }
L_001eb810:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
    }
L_001eb814:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x34u);
    }
L_001eb818:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[3]);
    }
L_001eb81c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[4]);
        }
    }
L_001eb820:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0x10u, cpu->r[4]);
        }
    }
L_001eb824:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0x14u, cpu->r[4]);
        }
    }
L_001eb828:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0x18u, cpu->r[4]);
        }
    }
L_001eb82c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001eb830:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb834u)) return;
    }
L_001eb834:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[6]);
    }
L_001eb838:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001eb83c:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[6]);
    }
L_001eb840:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[6]);
    }
L_001eb844:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[6]);
    }
L_001eb848:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb84cu)) return;
    }
L_001eb84c:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[0]);
    }
L_001eb850:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[0]);
    }
L_001eb854:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[0]);
    }
L_001eb858:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[0]);
    }
L_001eb85c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001eb860:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb864u)) return;
    }
L_001eb864:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4cu);
    }
L_001eb868:;
    {
        cpu->r[14] = 0x001eb86cu; fn_00097dc8(cpu);
    }
L_001eb86c:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[6]);
    }
L_001eb870:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[6]);
    }
L_001eb874:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[6]);
    }
L_001eb878:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[6]);
    }
L_001eb87c:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[6]);
    }
L_001eb880:;
    {
        goto L_001eb82c;
    }
}

/* _ZN3vox21VoxMSWavSubDecoderPCMD1Ev @ 001eb88c (arm) */
void fn_001eb88c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eb88c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox21VoxMSWavSubDecoderPCM11GetDataSizeEv @ 001eb890 (arm) */
void fn_001eb890(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eb890:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001eb894:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x38u);
    }
L_001eb898:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001eb89c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001eb8a0:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[3] = v1;
    }
L_001eb8a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001eb8a8:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001eb8ac:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_001eb8b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_001eb8b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001eb8b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eb8ac;
        }
    }
L_001eb8bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox21VoxMSWavSubDecoderPCM7HasDataEv @ 001eb8c0 (arm) */
void fn_001eb8c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eb8c0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001eb8c4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001eb8c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001eb8cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001eb8d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001eb8d4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb8d8u)) return;
        }
    }
L_001eb8d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_001eb8dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001eb8e0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001eb8e4:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001eb8f4;
        }
    }
L_001eb8e8:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x28u);
    }
L_001eb8ec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001eb8f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eb904;
        }
    }
L_001eb8f4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001eb8f8:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001eb8fc:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001eb900:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb904u)) return;
    }
L_001eb904:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001eb908:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001eb90c:;
    {
        cpu->r[14] = 0x001eb914u;
    }
L_001eb910:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb914u)) return;
    }
L_001eb914:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001eb918:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_001eb91c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001eb920:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001eb924:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001eb928:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb92cu)) return;
    }
}

/* _ZN3vox21VoxMSWavSubDecoderPCMD0Ev @ 001eb92c (arm) */
void fn_001eb92c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eb92c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001eb930:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001eb934:;
    {
        cpu->r[14] = 0x001eb938u; fn_0018ba20(cpu);
    }
L_001eb938:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001eb93c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb940u)) return;
    }
}

/* _ZN3vox21VoxMSWavSubDecoderPCM4SeekEj @ 001eb940 (arm) */
void fn_001eb940(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eb940:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001eb944:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001eb948:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001eb94c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001eb950:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001eb954:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001eb958:;
    {
        if (cond_test(cpu, 4)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb95cu)) return;
        }
    }
L_001eb95c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001eb960:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001eb964:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001eb968:;
    {
        cpu->r[14] = 0x001eb96cu; fn_00200af0(cpu);
    }
L_001eb96c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001eb970:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eba28;
        }
    }
L_001eb974:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001eb978:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001eb97c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eba28;
        }
    }
L_001eb980:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x8u);
    }
L_001eb984:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x28u);
    }
L_001eb988:;
    {
        cpu->r[7] = rd16(cpu->r[6] + + 0x20u);
    }
L_001eb98c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001eb990:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001eb994:;
    {
        cpu->r[14] = 0x001eb998u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001eb998:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001eb99c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001eb9a0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001eb9e8;
        }
    }
L_001eb9a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001eb9a8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001eb9ac:;
    {
        cpu->r[1] = rd16(cpu->r[6] + + 0x20u);
    }
L_001eb9b0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x24u);
    }
L_001eb9b4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001eb9b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001eb9bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[5], 0, 0);
    }
L_001eb9c0:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[12]);
    }
L_001eb9c4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[5]; cpu->r[1] = v;
    }
L_001eb9c8:;
    {
        cpu->r[14] = 0x001eb9d0u;
    }
L_001eb9cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb9d0u)) return;
    }
L_001eb9d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001eb9d4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001eb9d8:;
    {
        cpu->r[3] = rd16(cpu->r[3] + + 0x20u);
    }
L_001eb9dc:;
    {
        uint32_t v = cpu->r[3] * cpu->r[5]; cpu->r[5] = v;
    }
L_001eb9e0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001eb9e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eb9e8u)) return;
    }
L_001eb9e8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_001eb9ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001eb9f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001eb9f4:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001eb9f8:;
    {
        cpu->r[14] = 0x001eb9fcu; fn_00200af0(cpu);
    }
L_001eb9fc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x8u);
    }
L_001eba00:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x28u);
    }
L_001eba04:;
    {
        cpu->r[7] = rd16(cpu->r[6] + + 0x20u);
    }
L_001eba08:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001eba0c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001eba10:;
    {
        cpu->r[14] = 0x001eba14u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001eba14:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001eba18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eba28;
        }
    }
L_001eba1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001eba20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001eba24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eb98c;
        }
    }
L_001eba28:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001eba2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eba30u)) return;
    }
}

/* _ZN3vox21VoxMSWavSubDecoderPCM6DecodeEPvi @ 001eba30 (arm) */
void fn_001eba30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eba30:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001eba34:;
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
L_001eba38:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001eba3c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x28u);
    }
L_001eba40:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001eba44:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x20u);
    }
L_001eba48:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001eba4c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_001eba50:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001ebbb0;
        }
    }
L_001eba54:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001eba58:;
    {
        cpu->r[1] = rd16(cpu->r[3] + + 0x20u);
    }
L_001eba5c:;
    {
        cpu->r[14] = 0x001eba60u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001eba60:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 0);
    }
L_001eba64:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001eba68:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_001eba6c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ebb68;
        }
    }
L_001eba70:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001eba74:;
    {
        goto L_001ebb0c;
    }
L_001eba78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001eba7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_001eba80:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001eba84:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001eba88:;
    {
        cpu->r[14] = 0x001eba90u;
    }
L_001eba8c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001eba90u)) return;
    }
L_001eba90:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x20u);
    }
L_001eba94:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001eba98:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[0], 0, 0);
    }
L_001eba9c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[9]);
    }
L_001ebaa0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001ebaa4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ebaa8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001ebaac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
    }
L_001ebab0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001ebab4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001ebab8:;
    {
        cpu->r[14] = 0x001ebabcu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001ebabc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ebac0:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[6], 1, 1);
    }
L_001ebac4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001ebac8:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001ebacc:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001ebb54;
        }
    }
L_001ebad0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001ebad4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ebad8:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001ebb70;
        }
    }
L_001ebadc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x28u);
    }
L_001ebae0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ebae4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ebb68;
        }
    }
L_001ebae8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ebaec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ebaf0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ebaf4:;
    {
        cpu->r[14] = 0x001ebafcu;
    }
L_001ebaf8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ebafcu)) return;
    }
L_001ebafc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ebb00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ebb68;
        }
    }
L_001ebb04:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_001ebb08:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ebb68;
        }
    }
L_001ebb0c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x20u);
    }
L_001ebb10:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 0);
    }
L_001ebb14:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_001ebb18:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001ebb1c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001eba78;
        }
    }
L_001ebb20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001ebb24:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 0);
    }
L_001ebb28:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_001ebb2c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ebb30:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ebb34:;
    {
        cpu->r[14] = 0x001ebb3cu;
    }
L_001ebb38:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ebb3cu)) return;
    }
L_001ebb3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001ebb40:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x28u);
    }
L_001ebb44:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_001ebb48:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001ebb4c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001ebb50:;
    {
        goto L_001ebaa0;
    }
L_001ebb54:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001ebb58:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ebb5c:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001ebadc;
        }
    }
L_001ebb60:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001ebb64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ebb04;
        }
    }
L_001ebb68:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ebb6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ebb70u)) return;
    }
L_001ebb70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ebb74:;
    {
        cpu->r[14] = 0x001ebb78u; fn_00200af0(cpu);
    }
L_001ebb78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001ebb7c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x28u);
    }
L_001ebb80:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ebb84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ebb04;
        }
    }
L_001ebb88:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x28u);
    }
L_001ebb8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ebb90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ebbc0;
        }
    }
L_001ebb94:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ebb98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ebb9c:;
    {
        cpu->r[14] = 0x001ebba4u;
    }
L_001ebba0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ebba4u)) return;
    }
L_001ebba4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ebba8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ebb04;
        }
    }
L_001ebbac:;
    {
        goto L_001ebb68;
    }
L_001ebbb0:;
    {
        cpu->r[14] = 0x001ebbb4u; fn_00200af0(cpu);
    }
L_001ebbb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001ebbb8:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x28u);
    }
L_001ebbbc:;
    {
        goto L_001eba54;
    }
L_001ebbc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001ebbc4:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001ebbc8:;
    {
        goto L_001ebb68;
    }
}

/* _ZN3vox21VoxMSWavSubDecoderPCMC1EPNS_21StreamCursorInterfaceEPNS_9WaveChunkE @ 001ebbcc (arm) */
void fn_001ebbcc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebbcc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ebbd0:;
    {
        cpu->r[12] = rd32(0x001ebbd8u + + 0x78u);
    }
L_001ebbd4:;
    {
        cpu->r[5] = rd16(cpu->r[2] + + 0x16u);
    }
L_001ebbd8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ebbdc:;
    {
        cpu->r[6] = rd16(cpu->r[2] + + 0x22u);
    }
L_001ebbe0:;
    {
        cpu->r[12] = add_flags(cpu, 0x001ebbe8u, cpu->r[12], 0, 0);
    }
L_001ebbe4:;
    {
        cpu->r[14] = rd32(0x001ebbecu + + 0x68u);
    }
L_001ebbe8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ebbec:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_001ebbf0:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[6]);
    }
L_001ebbf4:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_001ebbf8:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_001ebbfc:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[5]);
    }
L_001ebc00:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x18u);
    }
L_001ebc04:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_001ebc08:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001ebc0c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_001ebc10:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_001ebc14:;
    {
        wr32(cpu->r[0], cpu->r[14]);
    }
L_001ebc18:;
    {
        wr8(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_001ebc1c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[5]);
    }
L_001ebc20:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_001ebc24:;
    {
        cpu->r[14] = 0x001ebc28u; fn_001eb890(cpu);
    }
L_001ebc28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001ebc2c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001ebc30:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001ebc34:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001ebc38:;
    {
        cpu->r[14] = 0x001ebc3cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001ebc3c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_001ebc40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ebc44:;
    {
        cpu->r[14] = 0x001ebc48u; fn_00200af0(cpu);
    }
L_001ebc48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ebc4c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ebc50u)) return;
    }
}

/* _ZN3vox21VoxMSWavSubDecoderPCMC2EPNS_21StreamCursorInterfaceEPNS_9WaveChunkE @ 001ebc58 (arm) */
void fn_001ebc58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebc58:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ebc5c:;
    {
        cpu->r[12] = rd32(0x001ebc64u + + 0x78u);
    }
L_001ebc60:;
    {
        cpu->r[5] = rd16(cpu->r[2] + + 0x16u);
    }
L_001ebc64:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ebc68:;
    {
        cpu->r[6] = rd16(cpu->r[2] + + 0x22u);
    }
L_001ebc6c:;
    {
        cpu->r[12] = add_flags(cpu, 0x001ebc74u, cpu->r[12], 0, 0);
    }
L_001ebc70:;
    {
        cpu->r[14] = rd32(0x001ebc78u + + 0x68u);
    }
L_001ebc74:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ebc78:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_001ebc7c:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[6]);
    }
L_001ebc80:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_001ebc84:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_001ebc88:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[5]);
    }
L_001ebc8c:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x18u);
    }
L_001ebc90:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_001ebc94:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001ebc98:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_001ebc9c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_001ebca0:;
    {
        wr32(cpu->r[0], cpu->r[14]);
    }
L_001ebca4:;
    {
        wr8(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_001ebca8:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[5]);
    }
L_001ebcac:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_001ebcb0:;
    {
        cpu->r[14] = 0x001ebcb4u; fn_001eb890(cpu);
    }
L_001ebcb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001ebcb8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001ebcbc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001ebcc0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001ebcc4:;
    {
        cpu->r[14] = 0x001ebcc8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001ebcc8:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_001ebccc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ebcd0:;
    {
        cpu->r[14] = 0x001ebcd4u; fn_00200af0(cpu);
    }
L_001ebcd4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ebcd8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ebcdcu)) return;
    }
}

/* _ZN3vox5Mutex7TryLockEv @ 001ebce4 (arm) */
void fn_001ebce4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebce4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ebce8:;
    {
        cpu->r[14] = 0x001ebcecu; imp_pthread_mutex_trylock(cpu); /* pthread_mutex_trylock */
    }
L_001ebcec:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_001ebcf0:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001ebcf4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ebcf8u)) return;
    }
}

/* _ZN3vox5Mutex6UnlockEv @ 001ebcf8 (arm) */
void fn_001ebcf8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebcf8:;
    {
        imp_pthread_mutex_unlock(cpu); /* tail pthread_mutex_unlock */ return;
    }
}

/* _ZN3vox5Mutex4LockEv @ 001ebcfc (arm) */
void fn_001ebcfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebcfc:;
    {
        imp_pthread_mutex_lock(cpu); /* tail pthread_mutex_lock */ return;
    }
}

/* _ZN3vox16AccessController18ReleaseWriteAccessEv @ 001ebd00 (arm) */
void fn_001ebd00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebd00:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ebd04:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001ebd08:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ebd0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ebd10:;
    {
        cpu->r[14] = 0x001ebd14u; fn_001ebcfc(cpu);
    }
L_001ebd14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ebd18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001ebd1c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001ebd20:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001ebd24:;
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
L_001ebd28:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox16AccessController14GetWriteAccessEv @ 001ebd2c (arm) */
void fn_001ebd2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebd2c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ebd30:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ebd34:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001ebd38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ebd3c:;
    {
        cpu->r[14] = 0x001ebd40u; fn_001ebcfc(cpu);
    }
L_001ebd40:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001ebd44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ebd48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ebd4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ebd5c;
        }
    }
L_001ebd50:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ebd54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ebd58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ebd8c;
        }
    }
L_001ebd5c:;
    {
        cpu->r[14] = 0x001ebd60u; fn_001ebcf8(cpu);
    }
L_001ebd60:;
    {
        cpu->r[0] = 0x000003e8u;
    }
L_001ebd64:;
    {
        cpu->r[14] = 0x001ebd68u; imp_usleep(cpu); /* usleep */
    }
L_001ebd68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ebd6c:;
    {
        cpu->r[14] = 0x001ebd70u; fn_001ebcfc(cpu);
    }
L_001ebd70:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001ebd74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ebd78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ebd7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ebd5c;
        }
    }
L_001ebd80:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ebd84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ebd88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ebd5c;
        }
    }
L_001ebd8c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ebd90:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_001ebd94:;
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
L_001ebd98:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox16AccessController17ReleaseReadAccessEv @ 001ebd9c (arm) */
void fn_001ebd9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebd9c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ebda0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001ebda4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ebda8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ebdac:;
    {
        cpu->r[14] = 0x001ebdb0u; fn_001ebcfc(cpu);
    }
L_001ebdb0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ebdb4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ebdb8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001ebdbc:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001ebdc0:;
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
L_001ebdc4:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox16AccessController13GetReadAccessEv @ 001ebdc8 (arm) */
void fn_001ebdc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebdc8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ebdcc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ebdd0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001ebdd4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ebdd8:;
    {
        cpu->r[14] = 0x001ebddcu; fn_001ebcfc(cpu);
    }
L_001ebddc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001ebde0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ebde4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ebde8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ebe00;
        }
    }
L_001ebdec:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ebdf0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001ebdf4:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001ebdf8:;
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
L_001ebdfc:;
    {
        return fn_001ebcf8(cpu);
    }
L_001ebe00:;
    {
        cpu->r[14] = 0x001ebe04u; fn_001ebcf8(cpu);
    }
L_001ebe04:;
    {
        cpu->r[0] = 0x000003e8u;
    }
L_001ebe08:;
    {
        cpu->r[14] = 0x001ebe0cu; imp_usleep(cpu); /* usleep */
    }
L_001ebe0c:;
    {
        goto L_001ebdd4;
    }
}

/* _ZN3vox5MutexC1ERKS0_ @ 001ebe10 (arm) */
void fn_001ebe10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebe10:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001ebe14:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001ebe18:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox5MutexC2ERKS0_ @ 001ebe1c (arm) */
void fn_001ebe1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebe1c:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001ebe20:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001ebe24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox5MutexD1Ev @ 001ebe28 (arm) */
void fn_001ebe28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebe28:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ebe2c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ebe30:;
    {
        cpu->r[14] = 0x001ebe34u; imp_pthread_mutex_destroy(cpu); /* pthread_mutex_destroy */
    }
L_001ebe34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ebe38:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ebe3cu)) return;
    }
}

/* _ZN3vox5MutexD2Ev @ 001ebe3c (arm) */
void fn_001ebe3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebe3c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ebe40:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ebe44:;
    {
        cpu->r[14] = 0x001ebe48u; imp_pthread_mutex_destroy(cpu); /* pthread_mutex_destroy */
    }
L_001ebe48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ebe4c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ebe50u)) return;
    }
}

/* _ZN3vox5MutexC1Ev @ 001ebe50 (arm) */
void fn_001ebe50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebe50:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ebe54:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ebe58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ebe5c:;
    {
        cpu->r[14] = 0x001ebe60u; imp_pthread_mutex_init(cpu); /* pthread_mutex_init */
    }
L_001ebe60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ebe64:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ebe68u)) return;
    }
}

/* _ZN3vox5MutexC2Ev @ 001ebe68 (arm) */
void fn_001ebe68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebe68:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ebe6c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ebe70:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ebe74:;
    {
        cpu->r[14] = 0x001ebe78u; imp_pthread_mutex_init(cpu); /* pthread_mutex_init */
    }
L_001ebe78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ebe7c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ebe80u)) return;
    }
}

/* _ZN3vox15PlaylistElementC2Ev @ 001ebe80 (arm) */
void fn_001ebe80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebe80:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ebe84:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ebe88:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001ebe8c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_001ebe90:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001ebe94:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
    }
L_001ebe98:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001ebe9c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15PlaylistElementC1Ev @ 001ebea0 (arm) */
void fn_001ebea0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebea0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ebea4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ebea8:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001ebeac:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_001ebeb0:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001ebeb4:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
    }
L_001ebeb8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001ebebc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15PlaylistElementC2ERS0_ @ 001ebec0 (arm) */
void fn_001ebec0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebec0:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_001ebec4:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x8u);
    }
L_001ebec8:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x10u);
    }
L_001ebecc:;
    {
        cpu->r[5] = rd32(cpu->r[1]);
    }
L_001ebed0:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x4u);
    }
L_001ebed4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_001ebed8:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[6]);
    }
L_001ebedc:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_001ebee0:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001ebee4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001ebee8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_001ebeec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15PlaylistElementC1ERS0_ @ 001ebef0 (arm) */
void fn_001ebef0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebef0:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_001ebef4:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x8u);
    }
L_001ebef8:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x10u);
    }
L_001ebefc:;
    {
        cpu->r[5] = rd32(cpu->r[1]);
    }
L_001ebf00:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x4u);
    }
L_001ebf04:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_001ebf08:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[6]);
    }
L_001ebf0c:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_001ebf10:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001ebf14:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001ebf18:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_001ebf1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15PlaylistElement5ResetEv @ 001ebf20 (arm) */
void fn_001ebf20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebf20:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ebf24:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001ebf28:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_001ebf2c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_001ebf30:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001ebf34:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_001ebf38:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_001ebf3c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox12SegmentGroupC2EPNS_10GroupInfosEi @ 001ebf40 (arm) */
void fn_001ebf40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebf40:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_001ebf44:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x8u);
    }
L_001ebf48:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001ebf4c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ebf50:;
    {
        cpu->r[12] = rd32(0x001ebf58u + + 0x54u);
    }
L_001ebf54:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_001ebf58:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[4]);
    }
L_001ebf5c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x14u);
    }
L_001ebf60:;
    {
        cpu->r[12] = add_flags(cpu, 0x001ebf68u, cpu->r[12], 0, 0);
    }
L_001ebf64:;
    {
        cpu->r[0] = rd32(0x001ebf6cu + + 0x44u);
    }
L_001ebf68:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[5]);
    }
L_001ebf6c:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_001ebf70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[5];
        }
    }
L_001ebf74:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[1] + + 0x10u);
        }
    }
L_001ebf78:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x10u);
    }
L_001ebf7c:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_001ebf80:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
        }
    }
L_001ebf84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001ebf88:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0xcu, cpu->r[5]);
        }
    }
L_001ebf8c:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001ebf90:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ebf94:;
    {
        wr32(cpu->r[3] + + 0x1cu, cpu->r[2]);
    }
L_001ebf98:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_001ebf9c:;
    {
        wr32(cpu->r[3] + + 0x20u, cpu->r[1]);
    }
L_001ebfa0:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[1]);
    }
L_001ebfa4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_001ebfa8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}
