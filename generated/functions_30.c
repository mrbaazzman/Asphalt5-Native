#include "functions.h"

/* _ZN5Scene14RenderPowerupsEv @ 000c6a4c (arm) */
void fn_000c6a4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c6a4c:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000c6a50:;
    {
        cpu->r[1] = rd32(0x000c6a58u + + 0x448u);
    }
L_000c6a54:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c6a58:;
    {
        cpu->r[2] = 0x00004278u;
    }
L_000c6a5c:;
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
L_000c6a60:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_000c6a64:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c6a68:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[3] + + 0x20cu);
    }
L_000c6a6c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_000c6a70:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c6a74:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000c6a78:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c6a80u, cpu->r[1], 0, 0);
    }
L_000c6a7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000068u, 0, 0);
    }
L_000c6a80:;
    {
        cpu->r[0] = rd32(0x000c6a88u + + 0x41cu);
    }
L_000c6a84:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000c6a88:;
    {
        *vfp_s(cpu, 21) = *(float*)G(cpu->r[3] + + 0x208u);
    }
L_000c6a8c:;
    {
        cpu->r[1] = rd32(0x000c6a94u + + 0x414u);
    }
L_000c6a90:;
    {
        cpu->r[0] = add_flags(cpu, 0x000c6a98u, cpu->r[0], 0, 0);
    }
L_000c6a94:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x204u);
    }
L_000c6a98:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000068u, 0, 0);
    }
L_000c6a9c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c6aa0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c6aa8u, cpu->r[1], 0, 0);
    }
L_000c6aa4:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_000c6aa8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000068u, 0, 0);
    }
L_000c6aac:;
    {
        *(uint32_t*)vfp_s(cpu,19) = cpu->r[12];
    }
L_000c6ab0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000c6ab4:;
    {
        *vfp_s(cpu,19) = (float)*(int32_t*)vfp_s(cpu,19);
    }
L_000c6ab8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_000c6abc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000c6ac0:;
    {
        cpu->r[8] = rd32(0x000c6ac8u + + 0x3e4u);
    }
L_000c6ac4:;
    {
        *vfp_s(cpu,20) = (float)*(int32_t*)vfp_s(cpu,20);
    }
L_000c6ac8:;
    {
        *vfp_s(cpu,21) = (float)*(int32_t*)vfp_s(cpu,21);
    }
L_000c6acc:;
    {
        goto L_000c6ad8;
    }
L_000c6ad0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000c6ad4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c6c24;
        }
    }
L_000c6ad8:;
    {
        cpu->r[7] = add_flags(cpu, 0x000c6ae0u, cpu->r[8], 0, 0);
    }
L_000c6adc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000c6ae0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000068u, 0, 0);
    }
L_000c6ae4:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_000c6ae8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000c6aec:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c6ad0;
        }
    }
L_000c6af0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000c6af4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c6b24;
        }
    }
L_000c6af8:;
    {
        cpu->r[3] = 0x0000000du;
    }
L_000c6afc:;
    {
        cpu->r[1] = rd32(0x000c6b04u + + 0x3acu);
    }
L_000c6b00:;
    {
        cpu->r[2] = rd32(0x000c6b08u + + 0x3acu);
    }
L_000c6b04:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c6b08:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000c6b0c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c6b14u, cpu->r[1], 0, 0);
    }
L_000c6b10:;
    {
        cpu->r[3] = rd32(0x000c6b18u + + 0x3a0u);
    }
L_000c6b14:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c6b1cu, cpu->r[2], 0, 0);
    }
L_000c6b18:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000c6b1c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c6b24u, cpu->r[3], 0, 0);
    }
L_000c6b20:;
    {
        cpu->r[14] = 0x000c6b24u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c6b24:;
    {
        cpu->r[3] = 0x0000427cu;
    }
L_000c6b28:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c6b2c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c6b30:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[11] = v;
    }
L_000c6b34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c6b38:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000c6b3c:;
    {
        cpu->r[14] = 0x000c6b40u; fn_000b5a8c(cpu);
    }
L_000c6b40:;
    {
        cpu->r[3] = 0x00004278u;
    }
L_000c6b44:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c6b48:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000c6b50u + + 0x34cu);
    }
L_000c6b4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c6b50:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000c6b54:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000c6b58:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_000c6b5c:;
    {
        vfp_vsub(cpu, 12, 12, 21);
    }
L_000c6b60:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000c6b64:;
    {
        vfp_vsub(cpu, 13, 13, 19);
    }
L_000c6b68:;
    {
        vfp_vsub(cpu, 14, 14, 20);
    }
L_000c6b6c:;
    {
        vfp_vmul(cpu, 18, 12, 15);
    }
L_000c6b70:;
    {
        vfp_vmul(cpu, 17, 13, 15);
    }
L_000c6b74:;
    {
        vfp_vmul(cpu, 16, 14, 15);
    }
L_000c6b78:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c6bac;
        }
    }
L_000c6b7c:;
    {
        cpu->r[3] = 0x0000000du;
    }
L_000c6b80:;
    {
        cpu->r[1] = rd32(0x000c6b88u + + 0x334u);
    }
L_000c6b84:;
    {
        cpu->r[2] = rd32(0x000c6b8cu + + 0x334u);
    }
L_000c6b88:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c6b8c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000c6b90:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c6b98u, cpu->r[1], 0, 0);
    }
L_000c6b94:;
    {
        cpu->r[3] = rd32(0x000c6b9cu + + 0x328u);
    }
L_000c6b98:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c6ba0u, cpu->r[2], 0, 0);
    }
L_000c6b9c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c6ba0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c6ba8u, cpu->r[3], 0, 0);
    }
L_000c6ba4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c6ba8:;
    {
        cpu->r[14] = 0x000c6bacu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c6bac:;
    {
        cpu->r[10] = 0x0000427cu;
    }
L_000c6bb0:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0006u << 16);
    }
L_000c6bb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000c6bb8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_000c6bbc:;
    {
        cpu->r[14] = 0x000c6bc0u; fn_000b5a8c(cpu);
    }
L_000c6bc0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000c6bc8u + + 0x2d4u);
    }
L_000c6bc4:;
    {
        vfp_vmul(cpu, 14, 16, 16);
    }
L_000c6bc8:;
    {
        vfp_vmla(cpu, 14, 17, 17);
    }
L_000c6bcc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000c6bd0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0]);
    }
L_000c6bd4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000c6bd8:;
    {
        vfp_vsub(cpu, 15, 15, 20);
    }
L_000c6bdc:;
    {
        vfp_vmul(cpu, 15, 15, 13);
    }
L_000c6be0:;
    {
        vfp_vsub(cpu, 12, 12, 19);
    }
L_000c6be4:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_000c6be8:;
    {
        vfp_vmul(cpu, 12, 12, 13);
    }
L_000c6bec:;
    {
        vfp_vsub(cpu, 11, 11, 21);
    }
L_000c6bf0:;
    {
        vfp_vmla(cpu, 15, 12, 12);
    }
L_000c6bf4:;
    {
        vfp_vmul(cpu, 13, 11, 13);
    }
L_000c6bf8:;
    {
        vfp_vmla(cpu, 14, 18, 18);
    }
L_000c6bfc:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_000c6c00:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000c6c04:;
    {
        vfp_sync_flags(cpu);
    }
L_000c6c08:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000c6d28;
        }
    }
L_000c6c0c:;
    {
        cpu->r[3] = 0x00004278u;
    }
L_000c6c10:;
    {
        cpu->r[5] = cpu->r[9];
    }
L_000c6c14:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c6c18:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c6c1c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000c6c20:;
    {
        goto L_000c6ae8;
    }
L_000c6c24:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c6c28:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c6cb4;
        }
    }
L_000c6c2c:;
    {
        cpu->r[11] = rd32(0x000c6c34u + + 0x294u);
    }
L_000c6c30:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x0000a100u, 0, 0);
    }
L_000c6c34:;
    {
        cpu->r[8] = rd32(0x000c6c3cu + + 0x290u);
    }
L_000c6c38:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000054u, 0, 0);
    }
L_000c6c3c:;
    {
        cpu->r[10] = rd32(0x000c6c44u + + 0x28cu);
    }
L_000c6c40:;
    {
        cpu->r[11] = add_flags(cpu, 0x000c6c48u, cpu->r[11], 0, 0);
    }
L_000c6c44:;
    {
        cpu->r[9] = rd32(0x000c6c4cu + + 0x288u);
    }
L_000c6c48:;
    {
        cpu->r[8] = add_flags(cpu, 0x000c6c50u, cpu->r[8], 0, 0);
    }
L_000c6c4c:;
    {
        cpu->r[10] = add_flags(cpu, 0x000c6c54u, cpu->r[10], 0, 0);
    }
L_000c6c50:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000068u, 0, 0);
    }
L_000c6c54:;
    {
        cpu->r[9] = add_flags(cpu, 0x000c6c5cu, cpu->r[9], 0, 0);
    }
L_000c6c58:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000c6c5c:;
    {
        cpu->r[3] = 0x0000427cu;
    }
L_000c6c60:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[7] = v;
    }
L_000c6c64:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c6c68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c6c6c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000c6c70:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c6c74:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000c6c78:;
    {
        cpu->r[14] = 0x000c6c7cu; fn_000ea4dc(cpu);
    }
L_000c6c7c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c6c80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c6c84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c6c88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c6c9c;
        }
    }
L_000c6c8c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x130u);
    }
L_000c6c90:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c6c94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c6cc0;
        }
    }
L_000c6c98:;
    {
        cpu->r[14] = 0x000c6c9cu; fn_0012c7d8(cpu);
    }
L_000c6c9c:;
    {
        cpu->r[3] = 0x00004278u;
    }
L_000c6ca0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c6ca4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c6ca8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c6cac:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000c6cb0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c6c5c;
        }
    }
L_000c6cb4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000c6cb8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_000c6cbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c6cc0u)) return;
    }
L_000c6cc0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000c6cc4:;
    {
        cpu->r[12] = 0x00004278u;
    }
L_000c6cc8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000c6ccc:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000c6cd0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000c6cd4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c6cd8:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000c6cdc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c6cec;
        }
    }
L_000c6ce0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000c6ce4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_000c6ce8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c6cf8;
        }
    }
L_000c6cec:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000c6cf0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000c6cf4:;
    {
        cpu->r[14] = 0x000c6cf8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c6cf8:;
    {
        cpu->r[3] = 0x0000427cu;
    }
L_000c6cfc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c6d00:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c6d04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c6d08:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_000c6d0c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c6d10:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c6d14:;
    {
        cpu->r[14] = 0x000c6d1cu;
    }
L_000c6d18:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c6d1cu)) return;
    }
L_000c6d1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c6d20:;
    {
        cpu->r[14] = 0x000c6d24u; fn_000be228(cpu);
    }
L_000c6d24:;
    {
        goto L_000c6c9c;
    }
L_000c6d28:;
    {
        cpu->r[6] = 0x00004278u;
    }
L_000c6d2c:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0006u << 16);
    }
L_000c6d30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c6d34:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000c6d38:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c6e88;
        }
    }
L_000c6d3c:;
    {
        cpu->r[3] = rd32(0x000c6d44u + + 0x194u);
    }
L_000c6d40:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c6d44:;
    {
        cpu->r[14] = rd32(0x000c6d4cu + + 0x190u);
    }
L_000c6d48:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c6d50u, cpu->r[3], 0, 0);
    }
L_000c6d4c:;
    {
        cpu->r[12] = rd32(0x000c6d54u + + 0x18cu);
    }
L_000c6d50:;
    {
        cpu->r[14] = add_flags(cpu, 0x000c6d58u, cpu->r[14], 0, 0);
    }
L_000c6d54:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000c6d58:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000c6d5c:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_000c6d60:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[14]);
    }
L_000c6d64:;
    {
        cpu->r[12] = add_flags(cpu, 0x000c6d6cu, cpu->r[12], 0, 0);
    }
L_000c6d68:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c6d6c:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000c6d70:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000c6d74:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000c6d78:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000c6d7c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000c6d80:;
    {
        cpu->r[14] = 0x000c6d84u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c6d84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000c6d88:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c6d8c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c6d90:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000c6d94:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_000c6d98:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_000c6d9c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000c6da0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c6dcc;
        }
    }
L_000c6da4:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000c6da8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c6dac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c6db0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c6db4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c6db8:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000c6dbc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000c6dc0:;
    {
        cpu->r[14] = 0x000c6dc4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c6dc4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000c6dc8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_000c6dcc:;
    {
        cpu->r[2] = 0x00004278u;
    }
L_000c6dd0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000c6dd4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c6dd8:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 1);
    }
L_000c6ddc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c6e1c;
        }
    }
L_000c6de0:;
    {
        cpu->r[3] = 0x0000000du;
    }
L_000c6de4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000c6de8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000c6dec:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c6df0:;
    {
        cpu->r[1] = rd32(0x000c6df8u + + 0xecu);
    }
L_000c6df4:;
    {
        cpu->r[2] = rd32(0x000c6dfcu + + 0xecu);
    }
L_000c6df8:;
    {
        cpu->r[3] = rd32(0x000c6e00u + + 0xecu);
    }
L_000c6dfc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c6e04u, cpu->r[1], 0, 0);
    }
L_000c6e00:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c6e08u, cpu->r[2], 0, 0);
    }
L_000c6e04:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c6e08:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c6e10u, cpu->r[3], 0, 0);
    }
L_000c6e0c:;
    {
        cpu->r[14] = 0x000c6e10u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c6e10:;
    {
        cpu->r[3] = 0x0000427cu;
    }
L_000c6e14:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c6e18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c6e1c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_000c6e20:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_000c6e24:;
    {
        cpu->r[3] = 0x00004278u;
    }
L_000c6e28:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c6e2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c6e30:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000c6e34:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c6e6c;
        }
    }
L_000c6e38:;
    {
        cpu->r[1] = rd32(0x000c6e40u + + 0xb0u);
    }
L_000c6e3c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c6e40:;
    {
        cpu->r[12] = rd32(0x000c6e48u + + 0xacu);
    }
L_000c6e44:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000c6e48:;
    {
        cpu->r[2] = rd32(0x000c6e50u + + 0xa8u);
    }
L_000c6e4c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c6e54u, cpu->r[1], 0, 0);
    }
L_000c6e50:;
    {
        cpu->r[3] = rd32(0x000c6e58u + + 0xa4u);
    }
L_000c6e54:;
    {
        cpu->r[12] = add_flags(cpu, 0x000c6e5cu, cpu->r[12], 0, 0);
    }
L_000c6e58:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c6e60u, cpu->r[2], 0, 0);
    }
L_000c6e5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000068u, 0, 0);
    }
L_000c6e60:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c6e68u, cpu->r[3], 0, 0);
    }
L_000c6e64:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000c6e68:;
    {
        cpu->r[14] = 0x000c6e6cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c6e6c:;
    {
        cpu->r[3] = 0x0000427cu;
    }
L_000c6e70:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c6e74:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c6e78:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000c6e7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c6e80:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[9], 2, 2u, &shc), cpu->r[2]);
    }
L_000c6e84:;
    {
        goto L_000c6c0c;
    }
L_000c6e88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000c6e8c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_000c6e90:;
    {
        cpu->r[11] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_000c6e94:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[11]);
    }
L_000c6e98:;
    {
        goto L_000c6dcc;
    }
}

/* _ZN5Scene15InitCarPhysiscsEv @ 000c6f00 (arm) */
void fn_000c6f00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c6f00:;
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
L_000c6f04:;
    {
        cpu->r[5] = 0x00008c50u;
    }
L_000c6f08:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000c6f0c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000274u, 1, 0);
    }
L_000c6f10:;
    {
        cpu->r[1] = rd32(0x000c6f18u + + 0xdf8u);
    }
L_000c6f14:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c6f18:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_000c6f1c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c6f24u, cpu->r[1], 0, 0);
    }
L_000c6f20:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000c6f24:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000c6f28:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[7];
        }
    }
L_000c6f2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c749c;
        }
    }
L_000c6f30:;
    {
        cpu->r[2] = rd32(0x000c6f38u + + 0xddcu);
    }
L_000c6f34:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c6f38:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000c6f3c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_000c6f40:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c6f44:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000c6f48:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c6f4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c6f50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c776c;
        }
    }
L_000c6f54:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_000c6f58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c6f5c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c7780;
        }
    }
L_000c6f60:;
    {
        cpu->r[3] = rd32(0x000c6f68u + + 0xdb0u);
    }
L_000c6f64:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000c6f68:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x0000007cu, 0, 0);
    }
L_000c6f6c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[2]);
    }
L_000c6f70:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c6f78u, cpu->r[3], 0, 0);
    }
L_000c6f74:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_000c6f78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000220u, 0, 0);
    }
L_000c6f7c:;
    {
        cpu->r[1] = rd32(0x000c6f84u + + 0xd98u);
    }
L_000c6f80:;
    {
        cpu->r[2] = rd32(0x000c6f88u + + 0xd98u);
    }
L_000c6f84:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_000c6f88:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_000c6f8c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000c6f90:;
    {
        cpu->r[3] = rd32(0x000c6f98u + + 0xd8cu);
    }
L_000c6f94:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c6f9cu, cpu->r[1], 0, 0);
    }
L_000c6f98:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x40u);
    }
L_000c6f9c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c6fa4u, cpu->r[2], 0, 0);
    }
L_000c6fa0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c6fa8u, cpu->r[3], 0, 0);
    }
L_000c6fa4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000220u, 0, 0);
    }
L_000c6fa8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000220u, 0, 0);
    }
L_000c6fac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000220u, 0, 0);
    }
L_000c6fb0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_000c6fb4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000024cu, 0, 0);
    }
L_000c6fb8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000240u, 0, 0);
    }
L_000c6fbc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_000c6fc0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_000c6fc4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000c6fc8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[8]);
    }
L_000c6fcc:;
    {
        cpu->r[3] = 0x00008304u;
    }
L_000c6fd0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c6fd4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000c6fd8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_000c6fdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c7520;
        }
    }
L_000c6fe0:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x8u);
    }
L_000c6fe4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x30u);
    }
L_000c6fe8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000c6fec:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[9]);
    }
L_000c6ff0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = cpu->r[5];
        }
    }
L_000c6ff4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_000c6ff8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = cpu->r[9];
        }
    }
L_000c6ffc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_000c7000:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_000c7004:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c7038;
        }
    }
L_000c7008:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_000c700c:;
    {
        cpu->r[1] = rd32(0x000c7014u + + 0xd14u);
    }
L_000c7010:;
    {
        cpu->r[2] = rd32(0x000c7018u + + 0xd14u);
    }
L_000c7014:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c7018:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000c701c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c7024u, cpu->r[1], 0, 0);
    }
L_000c7020:;
    {
        cpu->r[3] = rd32(0x000c7028u + + 0xd08u);
    }
L_000c7024:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c702cu, cpu->r[2], 0, 0);
    }
L_000c7028:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000c702c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c7034u, cpu->r[3], 0, 0);
    }
L_000c7030:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c7034:;
    {
        cpu->r[14] = 0x000c7038u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c7038:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000c703c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_000c7040:;
    {
        cpu->r[14] = 0x000c7044u; fn_00180c78(cpu);
    }
L_000c7044:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_000c7048:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_000c704c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_000c7050:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x30u);
    }
L_000c7054:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_000c7058:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c705c:;
    {
        wr32(cpu->r[13] + + 0x234u, cpu->r[1]);
    }
L_000c7060:;
    {
        wr32(cpu->r[13] + + 0x23cu, cpu->r[2]);
    }
L_000c7064:;
    {
        wr32(cpu->r[13] + + 0x238u, cpu->r[3]);
    }
L_000c7068:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c706c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c7070:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c7074:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x30u);
    }
L_000c7078:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_000c707c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c70b0;
        }
    }
L_000c7080:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_000c7084:;
    {
        cpu->r[1] = rd32(0x000c708cu + + 0xca8u);
    }
L_000c7088:;
    {
        cpu->r[2] = rd32(0x000c7090u + + 0xca8u);
    }
L_000c708c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c7090:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000c7094:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c709cu, cpu->r[1], 0, 0);
    }
L_000c7098:;
    {
        cpu->r[3] = rd32(0x000c70a0u + + 0xc9cu);
    }
L_000c709c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c70a4u, cpu->r[2], 0, 0);
    }
L_000c70a0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000c70a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c70acu, cpu->r[3], 0, 0);
    }
L_000c70a8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c70ac:;
    {
        cpu->r[14] = 0x000c70b0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c70b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_000c70b4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000c70b8:;
    {
        cpu->r[14] = 0x000c70bcu; fn_00180c78(cpu);
    }
L_000c70bc:;
    {
        cpu->r[1] = 0x00008c50u;
    }
L_000c70c0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c70c4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000c70c8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x30u);
    }
L_000c70cc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x38u);
    }
L_000c70d0:;
    {
        wr32(cpu->r[13] + + 0x240u, cpu->r[2]);
    }
L_000c70d4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c70d8:;
    {
        wr32(cpu->r[13] + + 0x248u, cpu->r[3]);
    }
L_000c70dc:;
    {
        wr32(cpu->r[13] + + 0x244u, cpu->r[2]);
    }
L_000c70e0:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x1cu);
    }
L_000c70e4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x30u);
    }
L_000c70e8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_000c70ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_000c70f0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000c70f4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c7128;
        }
    }
L_000c70f8:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_000c70fc:;
    {
        cpu->r[1] = rd32(0x000c7104u + + 0xc3cu);
    }
L_000c7100:;
    {
        cpu->r[2] = rd32(0x000c7108u + + 0xc3cu);
    }
L_000c7104:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c7108:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000c710c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c7114u, cpu->r[1], 0, 0);
    }
L_000c7110:;
    {
        cpu->r[3] = rd32(0x000c7118u + + 0xc30u);
    }
L_000c7114:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c711cu, cpu->r[2], 0, 0);
    }
L_000c7118:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_000c711c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c7124u, cpu->r[3], 0, 0);
    }
L_000c7120:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000c7124:;
    {
        cpu->r[14] = 0x000c7128u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c7128:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_000c712c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c7130:;
    {
        cpu->r[14] = 0x000c7134u; fn_00180c78(cpu);
    }
L_000c7134:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c7138:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c713c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c7140:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x30u);
    }
L_000c7144:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000c7148:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x30u);
    }
L_000c714c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_000c7150:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c7184;
        }
    }
L_000c7154:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_000c7158:;
    {
        cpu->r[1] = rd32(0x000c7160u + + 0xbecu);
    }
L_000c715c:;
    {
        cpu->r[2] = rd32(0x000c7164u + + 0xbecu);
    }
L_000c7160:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c7164:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000c7168:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c7170u, cpu->r[1], 0, 0);
    }
L_000c716c:;
    {
        cpu->r[3] = rd32(0x000c7174u + + 0xbe0u);
    }
L_000c7170:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c7178u, cpu->r[2], 0, 0);
    }
L_000c7174:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_000c7178:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c7180u, cpu->r[3], 0, 0);
    }
L_000c717c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c7180:;
    {
        cpu->r[14] = 0x000c7184u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c7184:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c7188:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_000c718c:;
    {
        cpu->r[14] = 0x000c7190u; fn_00180c78(cpu);
    }
L_000c7190:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c7194:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c7198:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_000c719c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x38u);
    }
L_000c71a0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000c71a4:;
    {
        wr32(cpu->r[13] + + 0x24cu, cpu->r[14]);
    }
L_000c71a8:;
    {
        wr32(cpu->r[13] + + 0x254u, cpu->r[3]);
    }
L_000c71ac:;
    {
        wr32(cpu->r[13] + + 0x250u, cpu->r[11]);
    }
L_000c71b0:;
    {
        cpu->r[14] = 0x000c71b4u; fn_00180008(cpu);
    }
L_000c71b4:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c71b8:;
    {
        wr32(cpu->r[13] + + 0x258u, cpu->r[11]);
    }
L_000c71bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c71c0:;
    {
        wr32(cpu->r[13] + + 0x260u, cpu->r[11]);
    }
L_000c71c4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c71c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000400u, 0, 0);
    }
L_000c71cc:;
    {
        wr32(cpu->r[13] + + 0x25cu, cpu->r[0]);
    }
L_000c71d0:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[6] = v1;
    }
L_000c71d4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_000c71d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c75bc;
        }
    }
L_000c71dc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c71e0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c71e4:;
    {
        cpu->r[6] = rd32(cpu->r[1] + cpu->r[14]);
    }
L_000c71e8:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_000c71ec:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0x41cu);
    }
L_000c71f0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c71f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c73f4;
        }
    }
L_000c71f8:;
    {
        cpu->r[0] = 0x00001c90u;
    }
L_000c71fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_000c7200:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000c7204:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_000c7208:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x444u);
    }
L_000c720c:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_000c7210:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000c7214:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000c7218:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000003au, 0, 0);
    }
L_000c721c:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_000c7220:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[5], 0, 0);
    }
L_000c7224:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000234u, 0, 0);
    }
L_000c7228:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000019c0u, 0, 0);
    }
L_000c722c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[14]);
    }
L_000c7230:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_000c7234:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000258u, 0, 0);
    }
L_000c7238:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_000c723c:;
    {
        cpu->r[14] = rd8(cpu->r[3] + + 0x5u);
    }
L_000c7240:;
    {
        cpu->r[3] = 0x0000004cu;
    }
L_000c7244:;
    {
        wr32(cpu->r[13] + + 0x1e0u, cpu->r[2]);
    }
L_000c7248:;
    {
        wr32(cpu->r[13] + + 0x1e8u, cpu->r[12]);
    }
L_000c724c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[14]; cpu->r[3] = v;
    }
L_000c7250:;
    {
        wr32(cpu->r[13] + + 0x1f8u, cpu->r[12]);
    }
L_000c7254:;
    {
        wr32(cpu->r[13] + + 0x1fcu, cpu->r[12]);
    }
L_000c7258:;
    {
        wr32(cpu->r[13] + + 0x214u, cpu->r[12]);
    }
L_000c725c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_000c7260:;
    {
        wr32(cpu->r[13] + + 0x204u, cpu->r[12]);
    }
L_000c7264:;
    {
        wr32(cpu->r[13] + + 0x210u, cpu->r[12]);
    }
L_000c7268:;
    {
        cpu->r[12] = rd32(cpu->r[14] + + 0x4u);
    }
L_000c726c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c7270:;
    {
        wr8(cpu->r[13] + + 0x1dcu, cpu->r[2]);
    }
L_000c7274:;
    {
        wr32(cpu->r[13] + + 0x1e0u, cpu->r[12]);
    }
L_000c7278:;
    {
        wr32(cpu->r[13] + + 0x1ecu, cpu->r[14]);
    }
L_000c727c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c7280:;
    {
        cpu->r[7] = cpu->r[11];
    }
L_000c7284:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c7288:;
    {
        wr32(cpu->r[13] + + 0x1e8u, cpu->r[8]);
    }
L_000c728c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_000c7290:;
    {
        wr32(cpu->r[13] + + 0x1e4u, cpu->r[3]);
    }
L_000c7294:;
    {
        wr32(cpu->r[13] + + 0x208u, cpu->r[2]);
    }
L_000c7298:;
    {
        wr8(cpu->r[13] + + 0x20cu, cpu->r[2]);
    }
L_000c729c:;
    {
        wr8(cpu->r[13] + + 0x20du, cpu->r[2]);
    }
L_000c72a0:;
    {
        wr32(cpu->r[13] + + 0x1fcu, cpu->r[2]);
    }
L_000c72a4:;
    {
        wr32(cpu->r[13] + + 0x1f0u, cpu->r[14]);
    }
L_000c72a8:;
    {
        wr8(cpu->r[13] + + 0x1f4u, cpu->r[11]);
    }
L_000c72ac:;
    {
        wr32(cpu->r[13] + + 0x1f8u, cpu->r[8]);
    }
L_000c72b0:;
    {
        wr8(cpu->r[13] + + 0x200u, cpu->r[11]);
    }
L_000c72b4:;
    {
        cpu->r[14] = 0x000c72b8u; fn_000aeb58(cpu);
    }
L_000c72b8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000c72bc:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000c72c0:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c72c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c72c8:;
    {
        wr32(cpu->r[13] + + 0x208u, cpu->r[0]);
    }
L_000c72cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c72f0;
        }
    }
L_000c72d0:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_000c72d4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c72d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c72dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c74f8;
        }
    }
L_000c72e0:;
    {
        cpu->r[2] = 0x000063f0u;
    }
L_000c72e4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c72e8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000c72ec:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c7508;
        }
    }
L_000c72f0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000003u, 1, 1);
    }
L_000c72f4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = 0x00005556u;
        }
    }
L_000c72f8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_000c72fc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x5555u << 16);
        }
    }
L_000c7300:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c74a4;
        }
    }
L_000c7304:;
    {
        cpu->r[2] = 0x00005556u;
    }
L_000c7308:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_000c730c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x5555u << 16);
    }
L_000c7310:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[12] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000c7314:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_000c7318:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000c731c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_000c7320:;
    {
        wr32(cpu->r[13] + + 0x210u, cpu->r[2]);
    }
L_000c7324:;
    {
        cpu->r[3] = 0x00006667u;
    }
L_000c7328:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000c732c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6666u << 16);
    }
L_000c7330:;
    {
        cpu->r[0] = 0x00001e4cu;
    }
L_000c7334:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000c7338:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[5]; cpu->r[1] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000c733c:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 1u, &shc), cpu->r[2], 1, 0);
    }
L_000c7340:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c7344:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_000c7348:;
    {
        wr32(cpu->r[13] + + 0x214u, cpu->r[3]);
    }
L_000c734c:;
    {
        cpu->r[14] = 0x000c7350u; fn_0018ba6c(cpu);
    }
L_000c7350:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c7354:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000c7358:;
    {
        cpu->r[14] = 0x000c735cu; fn_00166fa4(cpu);
    }
L_000c735c:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c7360:;
    {
        wr32(cpu->r[10], cpu->r[7]);
    }
L_000c7364:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c7368:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c736c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000001dcu, 0, 0);
    }
L_000c7370:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c7374:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000c7378:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_000c737c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000019c0u, 0, 0);
    }
L_000c7380:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000030u, 0, 0);
    }
L_000c7384:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x5u);
    }
L_000c7388:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000c738c:;
    {
        cpu->r[14] = 0x000c7390u; fn_00169ee0(cpu);
    }
L_000c7390:;
    {
        cpu->r[7] = rd32(cpu->r[10]);
    }
L_000c7394:;
    {
        cpu->r[3] = 0x000017b4u;
    }
L_000c7398:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c739c:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[6]);
    }
L_000c73a0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x210u);
    }
L_000c73a4:;
    {
        wr32(cpu->r[7] + + 0x59cu, cpu->r[2]);
    }
L_000c73a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000c73ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c7750;
        }
    }
L_000c73b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000c73b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c7734;
        }
    }
L_000c73b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000c73bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c73d8;
        }
    }
L_000c73c0:;
    {
        cpu->r[0] = 0x0000000au;
    }
L_000c73c4:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_000c73c8:;
    {
        cpu->r[14] = 0x000c73ccu; fn_000965cc(cpu);
    }
L_000c73cc:;
    {
        cpu->r[3] = 0x000017c0u;
    }
L_000c73d0:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[0]);
    }
L_000c73d4:;
    {
        cpu->r[7] = rd32(cpu->r[10]);
    }
L_000c73d8:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c73dc:;
    {
        cpu->r[2] = 0x000017c0u;
    }
L_000c73e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c73e4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c73e8:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[1]);
    }
L_000c73ec:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c73f0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_000c73f4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c73f8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c73fc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_000c7400:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000c7404:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_000c7408:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c6fcc;
        }
    }
L_000c740c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c7410:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000c7414:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c7418:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_000c741c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c7420:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c7424:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c7428:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c77b0;
        }
    }
L_000c742c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x41eu);
    }
L_000c7430:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c7434:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c7448;
        }
    }
L_000c7438:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000c743c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c7440:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c7444:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c7cbc;
        }
    }
L_000c7448:;
    {
        cpu->r[12] = 0x00008c50u;
    }
L_000c744c:;
    {
        cpu->r[0] = 0x00008cb8u;
    }
L_000c7450:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000c7454:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000c7458:;
    {
        cpu->r[2] = 0x00008cc0u;
    }
L_000c745c:;
    {
        cpu->r[1] = 0x00008cc4u;
    }
L_000c7460:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000c7464:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000c7468:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x40u);
    }
L_000c746c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c7470:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c7474:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c7478:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_000c747c:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[14]);
    }
L_000c7480:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000c7484:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_000c7488:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_000c748c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[12]);
    }
L_000c7490:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c7494:;
    {
        cpu->r[14] = 0x000c7498u; fn_000dd4f8(cpu);
    }
L_000c7498:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000c749c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000274u, 0, 0);
    }
L_000c74a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c74a4u)) return;
    }
L_000c74a4:;
    {
        cpu->r[14] = 0x000c74a8u; fn_00096590(cpu);
    }
L_000c74a8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[7] * (int64_t)(int32_t)cpu->r[0]; cpu->r[14] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000c74ac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_000c74b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000c74b4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000c74b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000002u;
        }
    }
L_000c74bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c74d4;
        }
    }
L_000c74c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000c74c4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000003u;
        }
    }
L_000c74c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c74d4;
        }
    }
L_000c74cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000c74d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000004u;
        }
    }
L_000c74d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00019000u, 0, 0);
    }
L_000c74d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000026u, 0, 0);
    }
L_000c74dc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000c74e0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_000c74e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c74a4;
        }
    }
L_000c74e8:;
    {
        wr32(cpu->r[13] + + 0x210u, cpu->r[3]);
    }
L_000c74ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000c74f0:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
    }
L_000c74f4:;
    {
        goto L_000c7324;
    }
L_000c74f8:;
    {
        cpu->r[2] = 0x000063f0u;
    }
L_000c74fc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c7500:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000c7504:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c72f0;
        }
    }
L_000c7508:;
    {
        cpu->r[2] = 0x00000066u;
    }
L_000c750c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5] + cpu->r[3]; cpu->r[3] = v;
    }
L_000c7510:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000c7514:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000f4u, 0, 0);
    }
L_000c7518:;
    {
        wr32(cpu->r[13] + + 0x208u, cpu->r[3]);
    }
L_000c751c:;
    {
        goto L_000c72f0;
    }
L_000c7520:;
    {
        cpu->r[3] = 0x000010d0u;
    }
L_000c7524:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c7528:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000264u, 0, 0);
    }
L_000c752c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000c7530:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c7534:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c7538:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[9]);
    }
L_000c753c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 1);
    }
L_000c7540:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = cpu->r[5];
        }
    }
L_000c7544:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000005u;
        }
    }
L_000c7548:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00006000u, 0, 0);
    }
L_000c754c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x000000c2u, 0, 0);
    }
L_000c7550:;
    {
        cpu->r[7] = rd32(cpu->r[4] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000c7554:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[7] + + 0x4u);
    }
L_000c7558:;
    {
        vfp_vneg(cpu, 13, 13);
    }
L_000c755c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[7] + + 0xcu);
    }
L_000c7560:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x8u);
    }
L_000c7564:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_000c7568:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000c756c:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000c7570:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x264u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000c7574:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000c7578:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x268u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c757c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x26cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c7580:;
    {
        cpu->r[14] = 0x000c7584u; fn_001813dc(cpu);
    }
L_000c7584:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000c7588:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000c758c:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_000c7590:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_000c7594:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000c7598:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000c759c:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000c75a0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x238u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000c75a4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000c75a8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x23cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c75ac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x234u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c75b0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000c75b4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000c75b8:;
    {
        goto L_000c7068;
    }
L_000c75bc:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000c75c0:;
    {
        cpu->r[0] = 0x0000004au;
    }
L_000c75c4:;
    {
        cpu->r[14] = 0x000c75c8u; fn_000aeb58(cpu);
    }
L_000c75c8:;
    {
        cpu->r[2] = 0x00001c90u;
    }
L_000c75cc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c75d0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c75d4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c75d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000234u, 0, 0);
    }
L_000c75dc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c75e0:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_000c75e4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_000c75e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_000c75ec:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c75f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000019c0u, 0, 0);
    }
L_000c75f4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000258u, 0, 0);
    }
L_000c75f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000030u, 0, 0);
    }
L_000c75fc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_000c7600:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000c7604:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000c7608:;
    {
        cpu->r[12] = rd8(cpu->r[2] + + 0x5u);
    }
L_000c760c:;
    {
        cpu->r[2] = 0x0000004cu;
    }
L_000c7610:;
    {
        wr32(cpu->r[13] + + 0x1e8u, cpu->r[3]);
    }
L_000c7614:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x444u);
    }
L_000c7618:;
    {
        uint32_t v = cpu->r[2] * cpu->r[12]; cpu->r[12] = v;
    }
L_000c761c:;
    {
        wr32(cpu->r[13] + + 0x204u, cpu->r[3]);
    }
L_000c7620:;
    {
        wr32(cpu->r[13] + + 0x214u, cpu->r[3]);
    }
L_000c7624:;
    {
        wr32(cpu->r[13] + + 0x1e0u, cpu->r[11]);
    }
L_000c7628:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[12], 0, 0);
    }
L_000c762c:;
    {
        wr32(cpu->r[13] + + 0x1fcu, cpu->r[3]);
    }
L_000c7630:;
    {
        wr32(cpu->r[13] + + 0x1f8u, cpu->r[3]);
    }
L_000c7634:;
    {
        wr32(cpu->r[13] + + 0x210u, cpu->r[3]);
    }
L_000c7638:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000c763c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000c7640:;
    {
        wr8(cpu->r[13] + + 0x20cu, cpu->r[14]);
    }
L_000c7644:;
    {
        wr8(cpu->r[13] + + 0x1dcu, cpu->r[11]);
    }
L_000c7648:;
    {
        wr8(cpu->r[13] + + 0x1f4u, cpu->r[11]);
    }
L_000c764c:;
    {
        wr8(cpu->r[13] + + 0x200u, cpu->r[14]);
    }
L_000c7650:;
    {
        wr8(cpu->r[13] + + 0x20du, cpu->r[11]);
    }
L_000c7654:;
    {
        cpu->r[3] = rd8(cpu->r[1] + cpu->r[3]);
    }
L_000c7658:;
    {
        wr32(cpu->r[13] + + 0x1e0u, cpu->r[2]);
    }
L_000c765c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[12]);
    }
L_000c7660:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_000c7664:;
    {
        wr32(cpu->r[13] + + 0x1e8u, cpu->r[8]);
    }
L_000c7668:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c766c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c7670:;
    {
        wr32(cpu->r[13] + + 0x1e4u, cpu->r[2]);
    }
L_000c7674:;
    {
        wr32(cpu->r[13] + + 0x1ecu, cpu->r[7]);
    }
L_000c7678:;
    {
        wr32(cpu->r[13] + + 0x1f0u, cpu->r[8]);
    }
L_000c767c:;
    {
        wr32(cpu->r[13] + + 0x204u, cpu->r[11]);
    }
L_000c7680:;
    {
        wr32(cpu->r[13] + + 0x208u, cpu->r[0]);
    }
L_000c7684:;
    {
        wr32(cpu->r[13] + + 0x1fcu, cpu->r[11]);
    }
L_000c7688:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c76ac;
        }
    }
L_000c768c:;
    {
        cpu->r[3] = 0x000063f0u;
    }
L_000c7690:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000c7694:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000c7698:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000066u;
        }
    }
L_000c769c:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = cpu->r[3] * cpu->r[5] + cpu->r[1]; cpu->r[3] = v;
        }
    }
L_000c76a0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
        }
    }
L_000c76a4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000f4u, 0, 0);
        }
    }
L_000c76a8:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[13] + + 0x208u, cpu->r[3]);
        }
    }
L_000c76ac:;
    {
        cpu->r[0] = 0x00001e4cu;
    }
L_000c76b0:;
    {
        cpu->r[14] = 0x000c76b4u; fn_0018ba6c(cpu);
    }
L_000c76b4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c76b8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000c76bc:;
    {
        cpu->r[14] = 0x000c76c0u; fn_00166fa4(cpu);
    }
L_000c76c0:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c76c4:;
    {
        wr32(cpu->r[10], cpu->r[7]);
    }
L_000c76c8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c76cc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c76d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000001dcu, 0, 0);
    }
L_000c76d4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000c76d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c76dc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c76e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_000c76e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000019c0u, 0, 0);
    }
L_000c76e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000030u, 0, 0);
    }
L_000c76ec:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x5u);
    }
L_000c76f0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c76f4:;
    {
        cpu->r[14] = 0x000c76f8u; fn_00169ee0(cpu);
    }
L_000c76f8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000c76fc:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_000c7700:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c7704:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c7708:;
    {
        uint32_t v = cpu->r[1] | 0x00004000u; cpu->r[1] = v;
    }
L_000c770c:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_000c7710:;
    {
        cpu->r[14] = 0x000c7714u; fn_001683ec(cpu);
    }
L_000c7714:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000c7718:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c771c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000c7720:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c7724:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c7728:;
    {
        wr32(cpu->r[3] + + 0x59cu, cpu->r[12]);
    }
L_000c772c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_000c7730:;
    {
        goto L_000c73f4;
    }
L_000c7734:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c7738:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_000c773c:;
    {
        cpu->r[14] = 0x000c7740u; fn_000965cc(cpu);
    }
L_000c7740:;
    {
        cpu->r[3] = 0x000017c0u;
    }
L_000c7744:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[0]);
    }
L_000c7748:;
    {
        cpu->r[7] = rd32(cpu->r[10]);
    }
L_000c774c:;
    {
        goto L_000c73d8;
    }
L_000c7750:;
    {
        cpu->r[0] = 0x00000005u;
    }
L_000c7754:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000c7758:;
    {
        cpu->r[14] = 0x000c775cu; fn_000965cc(cpu);
    }
L_000c775c:;
    {
        cpu->r[3] = 0x000017c0u;
    }
L_000c7760:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[0]);
    }
L_000c7764:;
    {
        cpu->r[7] = rd32(cpu->r[10]);
    }
L_000c7768:;
    {
        goto L_000c73d8;
    }
L_000c776c:;
    {
        cpu->r[14] = 0x000c7770u; fn_000debac(cpu);
    }
L_000c7770:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000c7774:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_000c7778:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c777c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c6f60;
        }
    }
L_000c7780:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000c7784:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c7788:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_000c778c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000007cu, 0, 0);
    }
L_000c7790:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[12]);
    }
L_000c7794:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000c7798:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c779c:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_000c77a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c77a4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c77a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c77ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c742c;
        }
    }
L_000c77b0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x38u);
    }
L_000c77b4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000218u, 0, 0);
    }
L_000c77b8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_000c77bc:;
    {
        cpu->r[0] = 0x00005556u;
    }
L_000c77c0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[7]);
    }
L_000c77c4:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000c77c8:;
    {
        wr32(cpu->r[8] + + 0x9cu, cpu->r[2]);
    }
L_000c77cc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], 0x0000009cu, 0, 0);
    }
L_000c77d0:;
    {
        wr32(cpu->r[8] + + 0xa0u, cpu->r[2]);
    }
L_000c77d4:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x5555u << 16);
    }
L_000c77d8:;
    {
        wr32(cpu->r[8] + + 0xa4u, cpu->r[2]);
    }
L_000c77dc:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000c77e0:;
    {
        wr32(cpu->r[8] + + 0xa8u, cpu->r[2]);
    }
L_000c77e4:;
    {
        cpu->r[5] = 0x00000003u;
    }
L_000c77e8:;
    {
        wr32(cpu->r[8] + + 0xacu, cpu->r[2]);
    }
L_000c77ec:;
    {
        cpu->r[14] = 0x00000002u;
    }
L_000c77f0:;
    {
        wr32(cpu->r[8] + + 0xb0u, cpu->r[2]);
    }
L_000c77f4:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000c77f8:;
    {
        wr32(cpu->r[8] + + 0xb4u, cpu->r[2]);
    }
L_000c77fc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c7800:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[0] * (int64_t)(int32_t)cpu->r[3]; cpu->r[8] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000c7804:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_000c7808:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000c780c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000c7810:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[7] + cpu->r[1], cpu->r[12]);
        }
    }
L_000c7814:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c7828;
        }
    }
L_000c7818:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000c781c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[5];
        }
    }
L_000c7820:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[14];
        }
    }
L_000c7824:;
    {
        wr32(cpu->r[7] + cpu->r[1], cpu->r[2]);
    }
L_000c7828:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000c782c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000c7830:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000001cu, 1, 1);
    }
L_000c7834:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c7800;
        }
    }
L_000c7838:;
    {
        cpu->r[3] = rd32(0x000c7840u + + 0x518u);
    }
L_000c783c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_000c7840:;
    {
        cpu->r[1] = rd32(0x000c7848u + + 0x514u);
    }
L_000c7844:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000240u, 0, 0);
    }
L_000c7848:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c7850u, cpu->r[3], 0, 0);
    }
L_000c784c:;
    {
        cpu->r[2] = rd32(0x000c7854u + + 0x50cu);
    }
L_000c7850:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000220u, 0, 0);
    }
L_000c7854:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_000c7858:;
    {
        cpu->r[3] = rd32(0x000c7860u + + 0x504u);
    }
L_000c785c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c7864u, cpu->r[1], 0, 0);
    }
L_000c7860:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c7868u, cpu->r[2], 0, 0);
    }
L_000c7864:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000220u, 0, 0);
    }
L_000c7868:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c7870u, cpu->r[3], 0, 0);
    }
L_000c786c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000220u, 0, 0);
    }
L_000c7870:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000220u, 0, 0);
    }
L_000c7874:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_000c7878:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_000c787c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x000001dcu, 0, 0);
    }
L_000c7880:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_000c7884:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000024cu, 0, 0);
    }
L_000c7888:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_000c788c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000234u, 0, 0);
    }
L_000c7890:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000258u, 0, 0);
    }
L_000c7894:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000c7898:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000c789c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_000c78a0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_000c78a4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000c78a8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_000c78ac:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[7]);
    }
L_000c78b0:;
    {
        goto L_000c79c0;
    }
L_000c78b4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 1);
    }
L_000c78b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c7c9c;
        }
    }
L_000c78bc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000003u, 1, 1);
    }
L_000c78c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c7ca8;
        }
    }
L_000c78c4:;
    {
        cpu->r[2] = rd32(0x000c78ccu + + 0x49cu);
    }
L_000c78c8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c78d0u, cpu->r[2], 0, 0);
    }
L_000c78cc:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_000c78d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c78d4:;
    {
        cpu->r[14] = 0x000c78d8u; imp_swprintf(cpu); /* swprintf */
    }
L_000c78d8:;
    {
        cpu->r[0] = 0x00001e4cu;
    }
L_000c78dc:;
    {
        cpu->r[14] = 0x000c78e0u; fn_0018ba6c(cpu);
    }
L_000c78e0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c78e4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_000c78e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000c78ec:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000c78f0:;
    {
        cpu->r[14] = 0x000c78f4u; fn_00166fa4(cpu);
    }
L_000c78f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c78f8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000c78fc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c7900:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000c7904:;
    {
        wr32(cpu->r[13] + + 0x1e0u, cpu->r[12]);
    }
L_000c7908:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000c790c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000c7910:;
    {
        wr8(cpu->r[13] + + 0x1dcu, cpu->r[12]);
    }
L_000c7914:;
    {
        cpu->r[9] = rd32(cpu->r[1] + cpu->r[14]);
    }
L_000c7918:;
    {
        cpu->r[14] = (~0x00000000u);
    }
L_000c791c:;
    {
        wr32(cpu->r[13] + + 0x1e8u, cpu->r[14]);
    }
L_000c7920:;
    {
        wr32(cpu->r[13] + + 0x1fcu, cpu->r[14]);
    }
L_000c7924:;
    {
        cpu->r[1] = rd32(cpu->r[9]);
    }
L_000c7928:;
    {
        wr32(cpu->r[13] + + 0x204u, cpu->r[14]);
    }
L_000c792c:;
    {
        wr32(cpu->r[13] + + 0x214u, cpu->r[14]);
    }
L_000c7930:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0x450u);
    }
L_000c7934:;
    {
        wr32(cpu->r[13] + + 0x1f8u, cpu->r[14]);
    }
L_000c7938:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_000c793c:;
    {
        wr32(cpu->r[13] + + 0x210u, cpu->r[14]);
    }
L_000c7940:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000c7944:;
    {
        cpu->r[14] = rd32(cpu->r[7] + + 0x4u);
    }
L_000c7948:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c794c:;
    {
        wr8(cpu->r[13] + + 0x1f4u, cpu->r[12]);
    }
L_000c7950:;
    {
        wr32(cpu->r[13] + + 0x1e0u, cpu->r[14]);
    }
L_000c7954:;
    {
        cpu->r[14] = rd32(cpu->r[8] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_000c7958:;
    {
        wr32(cpu->r[7], cpu->r[11]);
    }
L_000c795c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_000c7960:;
    {
        wr32(cpu->r[13] + + 0x1e4u, cpu->r[14]);
    }
L_000c7964:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c7968:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c796c:;
    {
        wr8(cpu->r[13] + + 0x20cu, cpu->r[12]);
    }
L_000c7970:;
    {
        wr8(cpu->r[13] + + 0x20du, cpu->r[12]);
    }
L_000c7974:;
    {
        wr32(cpu->r[13] + + 0x1e8u, cpu->r[12]);
    }
L_000c7978:;
    {
        wr32(cpu->r[13] + + 0x1ecu, cpu->r[8]);
    }
L_000c797c:;
    {
        wr32(cpu->r[13] + + 0x1f0u, cpu->r[14]);
    }
L_000c7980:;
    {
        wr32(cpu->r[13] + + 0x1fcu, cpu->r[12]);
    }
L_000c7984:;
    {
        wr8(cpu->r[13] + + 0x200u, cpu->r[12]);
    }
L_000c7988:;
    {
        wr32(cpu->r[13] + + 0x204u, cpu->r[12]);
    }
L_000c798c:;
    {
        wr32(cpu->r[13] + + 0x208u, cpu->r[7]);
    }
L_000c7990:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c7994:;
    {
        cpu->r[14] = 0x000c7998u; fn_00169ee0(cpu);
    }
L_000c7998:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c799c:;
    {
        cpu->r[2] = 0x000018c0u;
    }
L_000c79a0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000007u, 1, 1);
    }
L_000c79a4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000c79a8:;
    {
        uint32_t wb_tmp = cpu->r[8] + 0x00000004u;
        cpu->r[3] = rd32(cpu->r[8]);
        cpu->r[8] = wb_tmp;
    }
L_000c79ac:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[5]);
    }
L_000c79b0:;
    {
        cpu->r[2] = 0x00001820u;
    }
L_000c79b4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_000c79b8:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_000c79bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c7cb4;
        }
    }
L_000c79c0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c79c4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c79c8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c79cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_000c79d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c79d4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c7a08;
        }
    }
L_000c79d8:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_000c79dc:;
    {
        cpu->r[1] = rd32(0x000c79e4u + + 0x388u);
    }
L_000c79e0:;
    {
        cpu->r[2] = rd32(0x000c79e8u + + 0x388u);
    }
L_000c79e4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c79e8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000c79ec:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c79f4u, cpu->r[1], 0, 0);
    }
L_000c79f0:;
    {
        cpu->r[3] = rd32(0x000c79f8u + + 0x37cu);
    }
L_000c79f4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c79fcu, cpu->r[2], 0, 0);
    }
L_000c79f8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x30u);
    }
L_000c79fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c7a04u, cpu->r[3], 0, 0);
    }
L_000c7a00:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_000c7a04:;
    {
        cpu->r[14] = 0x000c7a08u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c7a08:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_000c7a0c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c7a10:;
    {
        cpu->r[14] = 0x000c7a14u; fn_00180c78(cpu);
    }
L_000c7a14:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c7a18:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c7a1c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c7a20:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_000c7a24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c7a28:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x30u);
    }
L_000c7a2c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c7a60;
        }
    }
L_000c7a30:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_000c7a34:;
    {
        cpu->r[1] = rd32(0x000c7a3cu + + 0x33cu);
    }
L_000c7a38:;
    {
        cpu->r[2] = rd32(0x000c7a40u + + 0x33cu);
    }
L_000c7a3c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c7a40:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000c7a44:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c7a4cu, cpu->r[1], 0, 0);
    }
L_000c7a48:;
    {
        cpu->r[3] = rd32(0x000c7a50u + + 0x330u);
    }
L_000c7a4c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c7a54u, cpu->r[2], 0, 0);
    }
L_000c7a50:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_000c7a54:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c7a5cu, cpu->r[3], 0, 0);
    }
L_000c7a58:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c7a5c:;
    {
        cpu->r[14] = 0x000c7a60u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c7a60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_000c7a64:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c7a68:;
    {
        cpu->r[14] = 0x000c7a6cu; fn_00180c78(cpu);
    }
L_000c7a6c:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c7a70:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c7a74:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c7a78:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_000c7a7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c7a80:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x34u);
    }
L_000c7a84:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c7ab8;
        }
    }
L_000c7a88:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_000c7a8c:;
    {
        cpu->r[1] = rd32(0x000c7a94u + + 0x2f0u);
    }
L_000c7a90:;
    {
        cpu->r[2] = rd32(0x000c7a98u + + 0x2f0u);
    }
L_000c7a94:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c7a98:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000c7a9c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c7aa4u, cpu->r[1], 0, 0);
    }
L_000c7aa0:;
    {
        cpu->r[3] = rd32(0x000c7aa8u + + 0x2e4u);
    }
L_000c7aa4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c7aacu, cpu->r[2], 0, 0);
    }
L_000c7aa8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000c7aac:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c7ab4u, cpu->r[3], 0, 0);
    }
L_000c7ab0:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000c7ab4:;
    {
        cpu->r[14] = 0x000c7ab8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c7ab8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_000c7abc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c7ac0:;
    {
        cpu->r[14] = 0x000c7ac4u; fn_00180c78(cpu);
    }
L_000c7ac4:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c7ac8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c7acc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c7ad0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x38u);
    }
L_000c7ad4:;
    {
        wr32(cpu->r[13] + + 0x258u, cpu->r[7]);
    }
L_000c7ad8:;
    {
        wr32(cpu->r[13] + + 0x25cu, cpu->r[8]);
    }
L_000c7adc:;
    {
        wr32(cpu->r[13] + + 0x260u, cpu->r[3]);
    }
L_000c7ae0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_000c7ae4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c7ae8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c7b1c;
        }
    }
L_000c7aec:;
    {
        cpu->r[3] = 0x0000003au;
    }
L_000c7af0:;
    {
        cpu->r[1] = rd32(0x000c7af8u + + 0x298u);
    }
L_000c7af4:;
    {
        cpu->r[2] = rd32(0x000c7afcu + + 0x298u);
    }
L_000c7af8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c7afc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000c7b00:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c7b08u, cpu->r[1], 0, 0);
    }
L_000c7b04:;
    {
        cpu->r[3] = rd32(0x000c7b0cu + + 0x28cu);
    }
L_000c7b08:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c7b10u, cpu->r[2], 0, 0);
    }
L_000c7b0c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x44u);
    }
L_000c7b10:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c7b18u, cpu->r[3], 0, 0);
    }
L_000c7b14:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000c7b18:;
    {
        cpu->r[14] = 0x000c7b1cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c7b1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_000c7b20:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c7b24:;
    {
        cpu->r[14] = 0x000c7b28u; fn_00180c78(cpu);
    }
L_000c7b28:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c7b2c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c7b30:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c7b34:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_000c7b38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c7b3c:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x30u);
    }
L_000c7b40:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c7b78;
        }
    }
L_000c7b44:;
    {
        cpu->r[1] = rd32(0x000c7b4cu + + 0x250u);
    }
L_000c7b48:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c7b4c:;
    {
        cpu->r[12] = rd32(0x000c7b54u + + 0x24cu);
    }
L_000c7b50:;
    {
        cpu->r[14] = 0x0000003au;
    }
L_000c7b54:;
    {
        cpu->r[2] = rd32(0x000c7b5cu + + 0x248u);
    }
L_000c7b58:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c7b60u, cpu->r[1], 0, 0);
    }
L_000c7b5c:;
    {
        cpu->r[3] = rd32(0x000c7b64u + + 0x244u);
    }
L_000c7b60:;
    {
        cpu->r[12] = add_flags(cpu, 0x000c7b68u, cpu->r[12], 0, 0);
    }
L_000c7b64:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c7b6cu, cpu->r[2], 0, 0);
    }
L_000c7b68:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000220u, 0, 0);
    }
L_000c7b6c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c7b74u, cpu->r[3], 0, 0);
    }
L_000c7b70:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000c7b74:;
    {
        cpu->r[14] = 0x000c7b78u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c7b78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_000c7b7c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c7b80:;
    {
        cpu->r[14] = 0x000c7b84u; fn_00180c78(cpu);
    }
L_000c7b84:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c7b88:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c7b8c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c7b90:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c7b94:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x38u);
    }
L_000c7b98:;
    {
        wr32(cpu->r[13] + + 0x24cu, cpu->r[7]);
    }
L_000c7b9c:;
    {
        wr32(cpu->r[13] + + 0x250u, cpu->r[2]);
    }
L_000c7ba0:;
    {
        wr32(cpu->r[13] + + 0x254u, cpu->r[3]);
    }
L_000c7ba4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_000c7ba8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000c7bac:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c7be4;
        }
    }
L_000c7bb0:;
    {
        cpu->r[1] = rd32(0x000c7bb8u + + 0x1f4u);
    }
L_000c7bb4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c7bb8:;
    {
        cpu->r[12] = rd32(0x000c7bc0u + + 0x1f0u);
    }
L_000c7bbc:;
    {
        cpu->r[14] = 0x0000003au;
    }
L_000c7bc0:;
    {
        cpu->r[2] = rd32(0x000c7bc8u + + 0x1ecu);
    }
L_000c7bc4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c7bccu, cpu->r[1], 0, 0);
    }
L_000c7bc8:;
    {
        cpu->r[3] = rd32(0x000c7bd0u + + 0x1e8u);
    }
L_000c7bcc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000c7bd4u, cpu->r[12], 0, 0);
    }
L_000c7bd0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c7bd8u, cpu->r[2], 0, 0);
    }
L_000c7bd4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000220u, 0, 0);
    }
L_000c7bd8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c7be0u, cpu->r[3], 0, 0);
    }
L_000c7bdc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000c7be0:;
    {
        cpu->r[14] = 0x000c7be4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c7be4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_000c7be8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000c7bec:;
    {
        cpu->r[14] = 0x000c7bf0u; fn_00180c78(cpu);
    }
L_000c7bf0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c7bf4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c7bf8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c7bfc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_000c7c00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000c7c04:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x30u);
    }
L_000c7c08:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c7c40;
        }
    }
L_000c7c0c:;
    {
        cpu->r[1] = rd32(0x000c7c14u + + 0x1a8u);
    }
L_000c7c10:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c7c14:;
    {
        cpu->r[12] = rd32(0x000c7c1cu + + 0x1a4u);
    }
L_000c7c18:;
    {
        cpu->r[14] = 0x0000003au;
    }
L_000c7c1c:;
    {
        cpu->r[2] = rd32(0x000c7c24u + + 0x1a0u);
    }
L_000c7c20:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c7c28u, cpu->r[1], 0, 0);
    }
L_000c7c24:;
    {
        cpu->r[3] = rd32(0x000c7c2cu + + 0x19cu);
    }
L_000c7c28:;
    {
        cpu->r[12] = add_flags(cpu, 0x000c7c30u, cpu->r[12], 0, 0);
    }
L_000c7c2c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c7c34u, cpu->r[2], 0, 0);
    }
L_000c7c30:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000220u, 0, 0);
    }
L_000c7c34:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c7c3cu, cpu->r[3], 0, 0);
    }
L_000c7c38:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000c7c3c:;
    {
        cpu->r[14] = 0x000c7c40u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c7c40:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_000c7c44:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000c7c48:;
    {
        cpu->r[14] = 0x000c7c4cu; fn_00180c78(cpu);
    }
L_000c7c4c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000c7c50:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000c7c54:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x38u);
    }
L_000c7c58:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c7c5c:;
    {
        wr32(cpu->r[13] + + 0x240u, cpu->r[7]);
    }
L_000c7c60:;
    {
        wr32(cpu->r[13] + + 0x244u, cpu->r[8]);
    }
L_000c7c64:;
    {
        wr32(cpu->r[13] + + 0x248u, cpu->r[3]);
    }
L_000c7c68:;
    {
        cpu->r[14] = 0x000c7c6cu; fn_00180008(cpu);
    }
L_000c7c6c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c7c70:;
    {
        wr32(cpu->r[13] + + 0x23cu, cpu->r[8]);
    }
L_000c7c74:;
    {
        wr32(cpu->r[13] + + 0x234u, cpu->r[8]);
    }
L_000c7c78:;
    {
        cpu->r[5] = rd32(cpu->r[12] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000c7c7c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_000c7c80:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_000c7c84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000400u, 0, 0);
    }
L_000c7c88:;
    {
        wr32(cpu->r[13] + + 0x238u, cpu->r[0]);
    }
L_000c7c8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c78b4;
        }
    }
L_000c7c90:;
    {
        cpu->r[2] = rd32(0x000c7c98u + + 0x134u);
    }
L_000c7c94:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c7c9cu, cpu->r[2], 0, 0);
    }
L_000c7c98:;
    {
        goto L_000c78cc;
    }
L_000c7c9c:;
    {
        cpu->r[2] = rd32(0x000c7ca4u + + 0x12cu);
    }
L_000c7ca0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c7ca8u, cpu->r[2], 0, 0);
    }
L_000c7ca4:;
    {
        goto L_000c78cc;
    }
L_000c7ca8:;
    {
        cpu->r[2] = rd32(0x000c7cb0u + + 0x124u);
    }
L_000c7cac:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c7cb4u, cpu->r[2], 0, 0);
    }
L_000c7cb0:;
    {
        goto L_000c78cc;
    }
L_000c7cb4:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000c7cb8:;
    {
        goto L_000c742c;
    }
L_000c7cbc:;
    {
        cpu->r[12] = 0x00008c50u;
    }
L_000c7cc0:;
    {
        cpu->r[0] = 0x00008cb8u;
    }
L_000c7cc4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000c7cc8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x40u);
    }
L_000c7ccc:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000c7cd0:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000c7cd4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000c7cd8:;
    {
        cpu->r[1] = 0x00008cc0u;
    }
L_000c7cdc:;
    {
        cpu->r[2] = 0x00008cc4u;
    }
L_000c7ce0:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[7]);
    }
L_000c7ce4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c7ce8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c7cec:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x4u);
    }
L_000c7cf0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c7cf4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x38u);
    }
L_000c7cf8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000c7cfc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], 0x0000009cu, 0, 0);
    }
L_000c7d00:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_000c7d04:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_000c7d08:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_000c7d0c:;
    {
        goto L_000c7490;
    }
}

/* _ZN5Scene14MP_GetVelocityEi @ 000c7dd8 (arm) */
void fn_000c7dd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c7dd8:;
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
L_000c7ddc:;
    {
        cpu->r[5] = 0x00000640u;
    }
L_000c7de0:;
    {
        cpu->r[4] = 0x000021dcu;
    }
L_000c7de4:;
    {
        cpu->r[3] = 0x000021e0u;
    }
L_000c7de8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2] + cpu->r[1]; cpu->r[5] = v;
    }
L_000c7dec:;
    {
        cpu->r[12] = 0x000021d8u;
    }
L_000c7df0:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000c7df4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c7df8:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000c7dfc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000c7e00:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_000c7e04:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000c7e08:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c7e0c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_000c7e10:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000c7e14:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
        }
    }
L_000c7e18:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_000c7e1c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_000c7e20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c7f00;
        }
    }
L_000c7e24:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000c7e28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c7f00;
        }
    }
L_000c7e2c:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_000c7e30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c7f00;
        }
    }
L_000c7e34:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000c7e38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c7f00;
        }
    }
L_000c7e3c:;
    {
        cpu->r[2] = 0x00001d28u;
    }
L_000c7e40:;
    {
        cpu->r[3] = 0x00001d34u;
    }
L_000c7e44:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c7e48:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c7e4c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c7e50:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000c7e54:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c7e58:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_000c7e5c:;
    {
        cpu->r[14] = 0x000c7e60u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000c7e60:;
    {
        cpu->r[2] = 0x00001d2cu;
    }
L_000c7e64:;
    {
        cpu->r[3] = 0x00001d38u;
    }
L_000c7e68:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c7e6c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c7e70:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c7e74:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c7e78:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000c7e7c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000c7e80:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_000c7e84:;
    {
        cpu->r[14] = 0x000c7e88u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000c7e88:;
    {
        cpu->r[3] = 0x00001d30u;
    }
L_000c7e8c:;
    {
        cpu->r[2] = 0x00001d3cu;
    }
L_000c7e90:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c7e94:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c7e98:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c7e9c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000c7ea0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000c7ea4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c7ea8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_000c7eac:;
    {
        cpu->r[14] = 0x000c7eb0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000c7eb0:;
    {
        uint32_t v = cpu->r[10] ^ shifter(cpu->r[10], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000c7eb4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[10], 1, 31u, &shc), 1, 0);
    }
L_000c7eb8:;
    {
        uint32_t v = cpu->r[8] ^ shifter(cpu->r[8], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000c7ebc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[8], 1, 31u, &shc), 1, 0);
    }
L_000c7ec0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000c7ec4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_000c7ec8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[3];
        }
    }
L_000c7ecc:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000c7ed0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_000c7ed4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000c7ed8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_000c7edc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000190u, 1, 1);
    }
L_000c7ee0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[8] = cpu->r[7];
        }
    }
L_000c7ee4:;
    {
        wr32(cpu->r[6], cpu->r[8]);
    }
L_000c7ee8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = cpu->r[8];
        }
    }
L_000c7eec:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = cpu->r[8];
        }
    }
L_000c7ef0:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[0]);
    }
L_000c7ef4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c7ef8:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[10]);
    }
L_000c7efc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c7f00u)) return;
    }
L_000c7f00:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c7f04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c7f08:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[3]);
    }
L_000c7f0c:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_000c7f10:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_000c7f14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c7f18u)) return;
    }
}

/* _ZN5Scene25MP_RecomputePrevPositionsEiiiiib @ 000c7f18 (arm) */
void fn_000c7f18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c7f18:;
    {
        cpu->r[12] = 0x00008cbcu;
    }
L_000c7f1c:;
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
L_000c7f20:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000c7f24:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c7f28:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000c7f2c:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_000c7f30:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000c7f34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000c7f38:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_000c7f3c:;
    {
        cpu->r[0] = rd32(0x000c7f44u + + 0x350u);
    }
L_000c7f40:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000c7f44:;
    {
        cpu->r[7] = rd8(cpu->r[13] + + 0x70u);
    }
L_000c7f48:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000c7f4c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00008cc0u;
        }
    }
L_000c7f50:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c7f54:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c7f58:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
        }
    }
L_000c7f5c:;
    {
        cpu->r[0] = add_flags(cpu, 0x000c7f64u, cpu->r[0], 0, 0);
    }
L_000c7f60:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
        }
    }
L_000c7f64:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000c7f68:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000c7f6c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_000c7f70:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
        }
    }
L_000c7f74:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c7f78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c7f7c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000c7f80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c828c;
        }
    }
L_000c7f84:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c7f88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000c7f8c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c7f90:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000c7f94:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c7f98:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000c7f9c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000c7fa0:;
    {
        cpu->r[14] = 0x000c7fa4u; fn_000c7dd8(cpu);
    }
L_000c7fa4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c7fa8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c7fac:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000c7fb0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_000c7fb4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x3d4u);
    }
L_000c7fb8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x3d8u);
    }
L_000c7fbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_000c7fc0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_000c7fc4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000c7fc8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000c7fcc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_000c7fd0:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x3dcu);
    }
L_000c7fd4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000c7fd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_000c7fdc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000c7fe0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c8228;
        }
    }
L_000c7fe4:;
    {
        cpu->r[3] = 0x00000640u;
    }
L_000c7fe8:;
    {
        cpu->r[8] = 0x00000063u;
    }
L_000c7fec:;
    {
        uint32_t v = cpu->r[3] * cpu->r[5]; cpu->r[3] = v;
    }
L_000c7ff0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00014c00u, 0, 0);
    }
L_000c7ff4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000328u, 0, 0);
    }
L_000c7ff8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000c7ffc:;
    {
        goto L_000c8008;
    }
L_000c8000:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_000c8004:;
    {
        if (cond_test(cpu, 4)) {
        goto L_000c8228;
        }
    }
L_000c8008:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x63cu);
    }
L_000c800c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_000c8010:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_000c8014:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c8000;
        }
    }
L_000c8018:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000c801c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c80f0;
        }
    }
L_000c8020:;
    {
        cpu->r[9] = 0x00000640u;
    }
L_000c8024:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000c8028:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_000c802c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000c8030:;
    {
        uint32_t v = cpu->r[9] * cpu->r[5]; cpu->r[9] = v;
    }
L_000c8034:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000c8038:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c803c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00014c00u, 0, 0);
    }
L_000c8040:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000330u, 0, 0);
    }
L_000c8044:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_000c8048:;
    {
        goto L_000c8070;
    }
L_000c804c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_000c8050:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_000c8054:;
    {
        add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_000c8058:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x0000000cu, 1, 0);
    }
L_000c805c:;
    {
        wr32(cpu->r[14], cpu->r[0]);
    }
L_000c8060:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x68u);
    }
L_000c8064:;
    {
        wr32(cpu->r[12], cpu->r[11]);
    }
L_000c8068:;
    {
        wr32(cpu->r[3], cpu->r[1]);
    }
L_000c806c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c80e4;
        }
    }
L_000c8070:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_000c8074:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_000c8078:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000c807c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c8080:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c8084:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000c8088:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000c808c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00014c00u, 0, 0);
    }
L_000c8090:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], 0x00000330u, 0, 0);
    }
L_000c8094:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x0000032cu, 0, 0);
    }
L_000c8098:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000328u, 0, 0);
    }
L_000c809c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c804c;
        }
    }
L_000c80a0:;
    {
        cpu->r[14] = 0x000c80a4u; fn_000c7dd8(cpu);
    }
L_000c80a4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + - 0x8u);
    }
L_000c80a8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000c80ac:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_000c80b0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + - 0x4u);
    }
L_000c80b4:;
    {
        add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_000c80b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000c80bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000c80c0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000c80c4:;
    {
        wr32(cpu->r[7] + - 0x14u, cpu->r[2]);
    }
L_000c80c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000c80cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_000c80d0:;
    {
        wr32(cpu->r[7] + - 0x10u, cpu->r[1]);
    }
L_000c80d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000c80d8:;
    {
        wr32(cpu->r[7] + - 0xcu, cpu->r[3]);
    }
L_000c80dc:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x0000000cu, 1, 0);
    }
L_000c80e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c8070;
        }
    }
L_000c80e4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_000c80e8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_000c80ec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000c80f0:;
    {
        cpu->r[14] = 0x00000640u;
    }
L_000c80f4:;
    {
        cpu->r[6] = 0x00004f28u;
    }
L_000c80f8:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000c80fc:;
    {
        cpu->r[2] = 0x00004f30u;
    }
L_000c8100:;
    {
        uint32_t v = cpu->r[14] * cpu->r[5] + cpu->r[4]; cpu->r[14] = v;
    }
L_000c8104:;
    {
        cpu->r[3] = 0x00004f2cu;
    }
L_000c8108:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c810c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c8110:;
    {
        cpu->r[6] = rd32(cpu->r[14] + cpu->r[6]);
    }
L_000c8114:;
    {
        cpu->r[2] = rd32(cpu->r[14] + cpu->r[2]);
    }
L_000c8118:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_000c811c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[6], 0, 0);
    }
L_000c8120:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x20u);
    }
L_000c8124:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000c8128:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c812c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_000c8130:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 0);
    }
L_000c8134:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c8138:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_000c813c:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000c8140:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_000c8144:;
    {
        uint32_t v = cpu->r[14] ^ shifter(cpu->r[14], 1, 31u, &shc); cpu->r[0] = v;
    }
L_000c8148:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[14], 1, 31u, &shc), 1, 0);
    }
L_000c814c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 0);
    }
L_000c8150:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000c8154:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_000c8158:;
    {
        uint32_t v = cpu->r[14] ^ shifter(cpu->r[14], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000c815c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[14], 1, 31u, &shc), 1, 0);
    }
L_000c8160:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000c8164:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[0];
        }
    }
L_000c8168:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[2];
        }
    }
L_000c816c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000190u, 1, 1);
    }
L_000c8170:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c81d0;
        }
    }
L_000c8174:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c8178:;
    {
        cpu->r[0] = 0x00008c50u;
    }
L_000c817c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000c8180:;
    {
        wr32(cpu->r[2] + + 0x3dcu, cpu->r[1]);
    }
L_000c8184:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000c8188:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c818c:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x3d4u;
        wr32(cpu->r[2] + + 0x3d4u, cpu->r[12]);
        cpu->r[2] = wb_tmp;
    }
L_000c8190:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000c8194:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000c8198:;
    {
        wr32(cpu->r[0] + + 0x3d8u, cpu->r[3]);
    }
L_000c819c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x000001b0u, 0, 0);
    }
L_000c81a0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c81a4:;
    {
        cpu->r[14] = 0x000c81a8u; fn_0017c2c4(cpu);
    }
L_000c81a8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c81ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c81b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c81b4:;
    {
        cpu->r[14] = rd32(cpu->r[14] + + 0x3d4u);
    }
L_000c81b8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x3d8u);
    }
L_000c81bc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x3dcu);
    }
L_000c81c0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_000c81c4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000c81c8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_000c81cc:;
    {
        goto L_000c8240;
    }
L_000c81d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c81d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_000c81d8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_000c81dc:;
    {
        cpu->r[2] = 0x00006667u;
    }
L_000c81e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000c81e4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x6666u << 16);
    }
L_000c81e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[14], 0, 0);
    }
L_000c81ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000c81f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c81f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000c81f8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[1]; cpu->r[0] = (uint32_t)v; cpu->r[14] = (uint32_t)(v >> 32); }
    }
L_000c81fc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[0] = v;
    }
L_000c8200:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[12]; cpu->r[6] = (uint32_t)v; cpu->r[4] = (uint32_t)(v >> 32); }
    }
L_000c8204:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[1] = v;
    }
L_000c8208:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[6] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000c820c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[12] = v;
    }
L_000c8210:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[14], 1, 2u, &shc), cpu->r[1], 1, 0);
    }
L_000c8214:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_000c8218:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[4], 1, 2u, &shc), cpu->r[12], 1, 0);
    }
L_000c821c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_000c8220:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[3], 1, 2u, &shc), cpu->r[0], 1, 0);
    }
L_000c8224:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000c8228:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c822c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000c8230:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[12] = v2;
    }
L_000c8234:;
    {
        wr32(cpu->r[14] + + 0x3dcu, cpu->r[12]);
    }
L_000c8238:;
    {
        wr32(cpu->r[14] + + 0x3d8u, cpu->r[0]);
    }
L_000c823c:;
    {
        wr32(cpu->r[14] + + 0x3d4u, cpu->r[1]);
    }
L_000c8240:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c8244:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000c8248:;
    {
        cpu->r[1] = rd32(0x000c8250u + + 0x48u);
    }
L_000c824c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c8250:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c8254:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_000c8258:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c825c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_000c8260:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000c8264:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_000c8268:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_000c826c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c8270:;
    {
        cpu->r[12] = 0x0000167cu;
    }
L_000c8274:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000c8278:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00014c00u, 0, 0);
    }
L_000c827c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_000c8280:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000328u, 0, 0);
    }
L_000c8284:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000c8288:;
    {
        cpu->r[14] = 0x000c828cu; fn_000ba2e0(cpu);
    }
L_000c828c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_000c8290:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c8294u)) return;
    }
}

/* _ZN5Scene17LoadSceneFromFileEiRP8LZMAFile @ 000c829c (arm) */
void fn_000c829c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c829c:;
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
L_000c82a0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000c82a4:;
    {
        cpu->r[5] = rd32(0x000c82acu + + 0xe20u);
    }
L_000c82a8:;
    {
        cpu->r[8] = rd32(0x000c82b0u + + 0xe20u);
    }
L_000c82ac:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_000c82b0:;
    {
        cpu->r[2] = rd32(0x000c82b8u + + 0xe1cu);
    }
L_000c82b4:;
    {
        cpu->r[5] = add_flags(cpu, 0x000c82bcu, cpu->r[5], 0, 0);
    }
L_000c82b8:;
    {
        cpu->r[11] = rd32(0x000c82c0u + + 0xe18u);
    }
L_000c82bc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000002a4u, 1, 0);
    }
L_000c82c0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000c82c4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000c82c8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000c82cc:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_000c82d0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c82d4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000c82d8:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000c82dc:;
    {
        wr32(cpu->r[13] + + 0x29cu, cpu->r[3]);
    }
L_000c82e0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000c82e4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_000c82e8:;
    {
        cpu->r[14] = 0x000c82ecu; fn_00096b5c(cpu);
    }
L_000c82ec:;
    {
        cpu->r[2] = rd32(0x000c82f4u + + 0xde8u);
    }
L_000c82f0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000c82f4:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000c82f8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x438u);
    }
L_000c82fc:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_000c8300:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000c8304:;
    {
        cpu->r[2] = 0x0000009cu;
    }
L_000c8308:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[2] = v;
    }
L_000c830c:;
    {
        cpu->r[9] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c8310:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c8370;
        }
    }
L_000c8314:;
    {
        cpu->r[6] = rd32(0x000c831cu + + 0xdc4u);
    }
L_000c8318:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c831c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000c8320:;
    {
        cpu->r[14] = 0x000c8324u; fn_00189f5c(cpu);
    }
L_000c8324:;
    {
        cpu->r[6] = 0x00001c64u;
    }
L_000c8328:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000c832c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_000c8330:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c8334:;
    {
        cpu->r[14] = 0x000c8338u; fn_000fc650(cpu);
    }
L_000c8338:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_000c833c:;
    {
        wr32(cpu->r[7] + cpu->r[6], cpu->r[0]);
    }
L_000c8340:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c8344:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_000c8348:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c83bc;
        }
    }
L_000c834c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000c8350:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c8354:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x29cu);
    }
L_000c8358:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_000c835c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000c8360:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c903c;
        }
    }
L_000c8364:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000002a4u, 0, 0);
    }
L_000c8368:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000c836c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c8370u)) return;
    }
L_000c8370:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000c8374:;
    {
        cpu->r[14] = 0x000c8378u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000c8378:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c837c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c8314;
        }
    }
L_000c8380:;
    {
        cpu->r[6] = rd32(0x000c8388u + + 0xd58u);
    }
L_000c8384:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c8388:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c838c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000c8390:;
    {
        cpu->r[14] = 0x000c8394u; fn_00189f48(cpu);
    }
L_000c8394:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000c8398:;
    {
        cpu->r[14] = 0x000c839cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000c839c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c83a0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c83a4:;
    {
        cpu->r[3] = rd32(0x000c83acu + + 0xd38u);
    }
L_000c83a8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c83ac:;
    {
        cpu->r[3] = rd32(0x000c83b4u + + 0xd34u);
    }
L_000c83b0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c83b4:;
    {
        cpu->r[14] = 0x000c83b8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000c83b8:;
    {
        goto L_000c8318;
    }
L_000c83bc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000c83c0:;
    {
        cpu->r[14] = 0x000c83c4u; imp__Znaj(cpu); /* _Znaj */
    }
L_000c83c4:;
    {
        cpu->r[3] = 0x00001c60u;
    }
L_000c83c8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c83cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c83d0:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[0]);
    }
L_000c83d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000001u);
        }
    }
L_000c83d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c834c;
        }
    }
L_000c83dc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[6]);
    }
L_000c83e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c83e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c8734;
        }
    }
L_000c83e8:;
    {
        cpu->r[3] = rd32(0x000c83f0u + + 0xcfcu);
    }
L_000c83ec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c83f0:;
    {
        cpu->r[2] = rd32(0x000c83f8u + + 0xcf8u);
    }
L_000c83f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c83fcu, cpu->r[3], 0, 0);
    }
L_000c83f8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_000c83fc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c8404u, cpu->r[2], 0, 0);
    }
L_000c8400:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000230u, 0, 0);
    }
L_000c8404:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_000c8408:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_000c840c:;
    {
        cpu->r[2] = rd32(0x000c8414u + + 0xce0u);
    }
L_000c8410:;
    {
        cpu->r[3] = rd32(0x000c8418u + + 0xce0u);
    }
L_000c8414:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c841cu, cpu->r[2], 0, 0);
    }
L_000c8418:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[9]);
    }
L_000c841c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c8424u, cpu->r[3], 0, 0);
    }
L_000c8420:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_000c8424:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_000c8428:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[5]);
    }
L_000c842c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[8]);
    }
L_000c8430:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[11]);
    }
L_000c8434:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000c8438:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_000c843c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000c8440:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000c8444:;
    {
        cpu->r[14] = 0x000c8448u; fn_00193278(cpu);
    }
L_000c8448:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c844c:;
    {
        cpu->r[14] = 0x000c8450u; fn_000fc650(cpu);
    }
L_000c8450:;
    {
        cpu->r[9] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_000c8454:;
    {
        cpu->r[0] = 0x000001acu;
    }
L_000c8458:;
    {
        cpu->r[14] = 0x000c845cu; fn_0018ba6c(cpu);
    }
L_000c845c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000c8460:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c8464:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000c8468:;
    {
        cpu->r[14] = 0x000c846cu; fn_000ea704(cpu);
    }
L_000c846c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000c8470:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c8ab8;
        }
    }
L_000c8474:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000c8478:;
    {
        cpu->r[14] = 0x000c847cu; fn_00153efc(cpu);
    }
L_000c847c:;
    {
        cpu->r[3] = 0x00001c60u;
    }
L_000c8480:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c8484:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c8488:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c848c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c8490:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[5]);
    }
L_000c8494:;
    {
        cpu->r[14] = 0x000c8498u; fn_000fc5fc(cpu);
    }
L_000c8498:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000c849c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c84a0:;
    {
        cpu->r[14] = 0x000c84a4u; fn_000fc5fc(cpu);
    }
L_000c84a4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_000c84a8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c84ac:;
    {
        cpu->r[14] = 0x000c84b0u; fn_000fc5fc(cpu);
    }
L_000c84b0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000c84b4:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c84b8:;
    {
        cpu->r[14] = 0x000c84bcu; fn_000fc5fc(cpu);
    }
L_000c84bc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000c84c0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c84c4:;
    {
        cpu->r[14] = 0x000c84c8u; fn_000fc5fc(cpu);
    }
L_000c84c8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000c84cc:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c84d0:;
    {
        cpu->r[14] = 0x000c84d4u; fn_000fc5fc(cpu);
    }
L_000c84d4:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000c84d8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c84dc:;
    {
        cpu->r[14] = 0x000c84e0u; fn_000fc5fc(cpu);
    }
L_000c84e0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000c84e4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c84e8:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000c84ec:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_000c84f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c84f4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c84f8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000c84fc:;
    {
        cpu->r[14] = 0x000c8500u; fn_000b5cbc(cpu);
    }
L_000c8500:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000c8504:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c8508:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c850c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c8510:;
    {
        cpu->r[14] = 0x000c8514u; fn_000b5ccc(cpu);
    }
L_000c8514:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c8518:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c851c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c8520:;
    {
        wr32(cpu->r[5] + + 0x5cu, cpu->r[8]);
    }
L_000c8524:;
    {
        wr32(cpu->r[5] + + 0x64u, cpu->r[12]);
    }
L_000c8528:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[2]);
    }
L_000c852c:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[3]);
    }
L_000c8530:;
    {
        wr32(cpu->r[5] + + 0x58u, cpu->r[6]);
    }
L_000c8534:;
    {
        wr32(cpu->r[5] + + 0x60u, cpu->r[10]);
    }
L_000c8538:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[11]);
    }
L_000c853c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c8540:;
    {
        cpu->r[14] = 0x000c8544u; fn_000fc678(cpu);
    }
L_000c8544:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_000c8548:;
    {
        uint32_t v = cpu->r[0] & 0x0000000fu; cpu->r[3] = v;
    }
L_000c854c:;
    {
        uint32_t v = cpu->r[0] & ~ 0x0000000fu; cpu->r[0] = v;
    }
L_000c8550:;
    {
        wr8(cpu->r[5] + + 0x186u, cpu->r[3]);
    }
L_000c8554:;
    {
        wr8(cpu->r[5] + + 0x185u, cpu->r[0]);
    }
L_000c8558:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c855c:;
    {
        cpu->r[14] = 0x000c8560u; fn_000fc650(cpu);
    }
L_000c8560:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_000c8564:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000c8568:;
    {
        cpu->r[8] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000c856c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000c8570:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c8594;
        }
    }
L_000c8574:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000c8578:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x0000009cu, 0, 0);
    }
L_000c857c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c8580:;
    {
        cpu->r[14] = 0x000c8584u; fn_000fc678(cpu);
    }
L_000c8584:;
    {
        wr8(cpu->r[10] + cpu->r[6], cpu->r[0]);
    }
L_000c8588:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000c858c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_000c8590:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c857c;
        }
    }
L_000c8594:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c8598:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000002a0u, 0, 0);
    }
L_000c859c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], cpu->r[8], 0, 0);
    }
L_000c85a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c85a4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000c85a8:;
    {
        wr8(cpu->r[8] + - 0x204u, cpu->r[3]);
    }
L_000c85ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c89bc;
        }
    }
L_000c85b0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xecu);
    }
L_000c85b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c85b8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c860c;
        }
    }
L_000c85bc:;
    {
        cpu->r[10] = 0x00008c4cu;
    }
L_000c85c0:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_000c85c4:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000c85c8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000c85cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_000c85d0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000c85d4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c85d8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000c85dc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c85e0:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0xf0u);
    }
L_000c85e4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_000c85e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c85ec:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000c85f0:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[3]);
    }
L_000c85f4:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[11]);
    }
L_000c85f8:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[12]);
    }
L_000c85fc:;
    {
        cpu->r[14] = 0x000c8600u; fn_001597b4(cpu);
    }
L_000c8600:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xecu);
    }
L_000c8604:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000c8608:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c85d4;
        }
    }
L_000c860c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x11du);
    }
L_000c8610:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c8614:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000c8618:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[5] + + 0x17au, cpu->r[3]);
        }
    }
L_000c861c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x11fu);
    }
L_000c8620:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c8624:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd8(cpu->r[5] + + 0x185u);
        }
    }
L_000c8628:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] | 0x00000010u; cpu->r[3] = v;
        }
    }
L_000c862c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[5] + + 0x185u, cpu->r[3]);
        }
    }
L_000c8630:;
    {
        cpu->r[3] = 0x0000094cu;
    }
L_000c8634:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000c8638:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000006u;
        }
    }
L_000c863c:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[5] + + 0x186u, cpu->r[6]);
        }
    }
L_000c8640:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c8a1c;
        }
    }
L_000c8644:;
    {
        cpu->r[6] = rd8(cpu->r[5] + + 0x186u);
    }
L_000c8648:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], 0x00000005u, 1, 0);
    }
L_000c864c:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[3]);
    }
L_000c8650:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000c8654:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000c8a1c;
        }
    }
L_000c8658:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_000c865c:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[3]);
    }
L_000c8660:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000c8664:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_000c8668:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000c8698;
        }
    }
L_000c866c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000006u, 1, 1);
    }
L_000c8670:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_000c8674:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c8684;
        }
    }
L_000c8678:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000005u, 1, 1);
    }
L_000c867c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000002u;
        }
    }
L_000c8680:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000003u;
        }
    }
L_000c8684:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x17au);
    }
L_000c8688:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c868c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000004u;
        }
    }
L_000c8690:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000c8694:;
    {
        wr8(cpu->r[5] + + 0x186u, cpu->r[3]);
    }
L_000c8698:;
    {
        cpu->r[3] = 0x0000067du;
    }
L_000c869c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000c86a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c86d4;
        }
    }
L_000c86a4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c8980;
        }
    }
L_000c86a8:;
    {
        sub_flags(cpu, cpu->r[9], 0x000000feu, 1, 1);
    }
L_000c86ac:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c8a48;
        }
    }
L_000c86b0:;
    {
        sub_flags(cpu, cpu->r[9], 0x000000fdu, 1, 1);
    }
L_000c86b4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c86d4;
        }
    }
L_000c86b8:;
    {
        sub_flags(cpu, cpu->r[9], 0x000000d1u, 1, 1);
    }
L_000c86bc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c8a90;
        }
    }
L_000c86c0:;
    {
        sub_flags(cpu, cpu->r[9], 0x000000d0u, 1, 1);
    }
L_000c86c4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c86d4;
        }
    }
L_000c86c8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], 0x000000cdu, 1, 0);
    }
L_000c86cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000c86d0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000c86e4;
        }
    }
L_000c86d4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c86d8:;
    {
        wr8(cpu->r[5] + + 0x17au, cpu->r[3]);
    }
L_000c86dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c86e0:;
    {
        wr8(cpu->r[5] + + 0x186u, cpu->r[3]);
    }
L_000c86e4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000c86e8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000c86ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c86f0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c86f4:;
    {
        cpu->r[14] = 0x000c86f8u; fn_00132958(cpu);
    }
L_000c86f8:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x186u);
    }
L_000c86fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000c8700:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c89cc;
        }
    }
L_000c8704:;
    {
        cpu->r[3] = 0x00001c64u;
    }
L_000c8708:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c870c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c8710:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000c8714:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_000c8718:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c871c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000c8720:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c8434;
        }
    }
L_000c8724:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000c8728:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_000c872c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x34u);
    }
L_000c8730:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x30u);
    }
L_000c8734:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c8738:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000c873c:;
    {
        cpu->r[14] = 0x000c8740u; fn_000c39f0(cpu);
    }
L_000c8740:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c8744:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c908c;
        }
    }
L_000c8748:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_000c874c:;
    {
        cpu->r[14] = 0x000c8750u; fn_0018ba6c(cpu);
    }
L_000c8750:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000c8754:;
    {
        cpu->r[14] = 0x000c8758u; fn_000b8b58(cpu);
    }
L_000c8758:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_000c875c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c8760:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c8764:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000c8768:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[6]);
    }
L_000c876c:;
    {
        cpu->r[14] = 0x000c8770u; fn_000b8e14(cpu);
    }
L_000c8770:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c8774:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c9050;
        }
    }
L_000c8778:;
    {
        cpu->r[6] = 0x00004278u;
    }
L_000c877c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], 0x00064000u, 0, 0);
    }
L_000c8780:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c8784:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_000c8788:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0006u << 16);
    }
L_000c878c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x00000270u, 0, 0);
    }
L_000c8790:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_000c8794:;
    {
        cpu->r[14] = 0x000c8798u; fn_00189870(cpu);
    }
L_000c8798:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000c879c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c87a0:;
    {
        cpu->r[14] = 0x000c87a4u; fn_000bc788(cpu);
    }
L_000c87a4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[6]);
    }
L_000c87a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c87ac:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = cpu->r[10];
        }
    }
L_000c87b0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000278u, 0, 0);
        }
    }
L_000c87b4:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
        }
    }
L_000c87b8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c8838;
        }
    }
L_000c87bc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000278u, 0, 0);
    }
L_000c87c0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_000c87c4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000c87c8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[9]);
    }
L_000c87cc:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c87d0:;
    {
        cpu->r[10] = cpu->r[4];
    }
L_000c87d4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000c87d8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c87dc:;
    {
        cpu->r[14] = 0x000c87e0u; fn_000bb6f0(cpu);
    }
L_000c87e0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000c87e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c87e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c8824;
        }
    }
L_000c87ec:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000c87f0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c87f4:;
    {
        cpu->r[14] = 0x000c87f8u; fn_000bb6f0(cpu);
    }
L_000c87f8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000c87fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c8800:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c8814;
        }
    }
L_000c8804:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c8808:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c880c:;
    {
        cpu->r[14] = 0x000c8814u;
    }
L_000c8810:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c8814u)) return;
    }
L_000c8814:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000c8818:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c881c:;
    {
        cpu->r[14] = 0x000c8820u; fn_000bb6f0(cpu);
    }
L_000c8820:;
    {
        wr32(cpu->r[0], cpu->r[10]);
    }
L_000c8824:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[6]);
    }
L_000c8828:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000c882c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000c8830:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c87d4;
        }
    }
L_000c8834:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c8838:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c883c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c8840:;
    {
        cpu->r[14] = 0x000c8844u; fn_000bc7c8(cpu);
    }
L_000c8844:;
    {
        cpu->r[3] = 0x00001c64u;
    }
L_000c8848:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c884c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c8850:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c8854:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c8ac8;
        }
    }
L_000c8858:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_000c885c:;
    {
        cpu->r[2] = 0x00001c60u;
    }
L_000c8860:;
    {
        cpu->r[10] = (~0x00000000u);
    }
L_000c8864:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c8868:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000c886c:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000c8870:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[8]);
    }
L_000c8874:;
    {
        cpu->r[10] = cpu->r[11];
    }
L_000c8878:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000c887c:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_000c8880:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[6]);
    }
L_000c8884:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_000c8888:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c888c:;
    {
        goto L_000c88d8;
    }
L_000c8890:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c8894:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000c8898:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000c889c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c88a0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000c88a4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c88a8:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000c88ac:;
    {
        cpu->r[14] = 0x000c88b4u;
    }
L_000c88b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c88b4u)) return;
    }
L_000c88b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c88b8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c902c;
        }
    }
L_000c88bc:;
    {
        cpu->r[12] = 0x00001c64u;
    }
L_000c88c0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000c88c4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000c88c8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[12]);
    }
L_000c88cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000c88d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c8edc;
        }
    }
L_000c88d4:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000c88d8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c88dc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000c88e0:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000c88e4:;
    {
        cpu->r[14] = 0x000c88e8u; fn_00193278(cpu);
    }
L_000c88e8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_000c88ec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c88f0:;
    {
        cpu->r[5] = rd32(cpu->r[2] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000c88f4:;
    {
        cpu->r[4] = rd16(cpu->r[5] + + 0xe8u);
    }
L_000c88f8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000c88fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c8928;
        }
    }
L_000c8900:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c8904:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000c8908:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000c890c:;
    {
        cpu->r[14] = 0x000c8910u; fn_00132894(cpu);
    }
L_000c8910:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000c8914:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000c8918:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000c891c:;
    {
        cpu->r[14] = 0x000c8920u; fn_00132b38(cpu);
    }
L_000c8920:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c8924:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c9040;
        }
    }
L_000c8928:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c892c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000c8930:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000c8934:;
    {
        cpu->r[14] = 0x000c8938u; fn_00132894(cpu);
    }
L_000c8938:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000c893c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000c8940:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000c8944:;
    {
        cpu->r[14] = 0x000c8948u; fn_0013299c(cpu);
    }
L_000c8948:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_000c894c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_000c8950:;
    {
        cpu->r[14] = 0x000c8958u;
    }
L_000c8954:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c8958u)) return;
    }
L_000c8958:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c895c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000062u, 1, 1);
    }
L_000c8960:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c8890;
        }
    }
L_000c8964:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c8968:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c896c:;
    {
        cpu->r[14] = 0x000c8974u;
    }
L_000c8970:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c8974u)) return;
    }
L_000c8974:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000065u, 1, 1);
    }
L_000c8978:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c889c;
        }
    }
L_000c897c:;
    {
        goto L_000c8890;
    }
L_000c8980:;
    {
        cpu->r[3] = 0x000007aau;
    }
L_000c8984:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000c8988:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c8a28;
        }
    }
L_000c898c:;
    {
        cpu->r[3] = 0x000007a9u;
    }
L_000c8990:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000c8994:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c86d4;
        }
    }
L_000c8998:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000012u, 1, 0);
    }
L_000c899c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000c89a0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c8a9c;
        }
    }
L_000c89a4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 0);
    }
L_000c89a8:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000c89ac:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c86d4;
        }
    }
L_000c89b0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000680u, 1, 1);
    }
L_000c89b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c86e4;
        }
    }
L_000c89b8:;
    {
        goto L_000c86d4;
    }
L_000c89bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c89c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000009cu, 0, 0);
    }
L_000c89c4:;
    {
        cpu->r[14] = 0x000c89c8u; fn_000e9bc8(cpu);
    }
L_000c89c8:;
    {
        goto L_000c85b0;
    }
L_000c89cc:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x17au);
    }
L_000c89d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c89d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c8704;
        }
    }
L_000c89d8:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c89dc:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000c89e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c89e4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c89e8:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c89ec:;
    {
        cpu->r[14] = 0x000c89f0u; fn_001808f0(cpu);
    }
L_000c89f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c89f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c8704;
        }
    }
L_000c89f8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_000c89fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000c8a00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_000c8a04:;
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
L_000c8a08:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c8a0c:;
    {
        cpu->r[12] = 0x000006d2u;
    }
L_000c8a10:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000c8a14:;
    {
        cpu->r[14] = 0x000c8a18u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c8a18:;
    {
        goto L_000c8704;
    }
L_000c8a1c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c8a20:;
    {
        wr8(cpu->r[5] + + 0x17au, cpu->r[3]);
    }
L_000c8a24:;
    {
        goto L_000c8658;
    }
L_000c8a28:;
    {
        cpu->r[3] = 0x000007cfu;
    }
L_000c8a2c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000c8a30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c86d4;
        }
    }
L_000c8a34:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c8a7c;
        }
    }
L_000c8a38:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 0);
    }
L_000c8a3c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000c8a40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c86e4;
        }
    }
L_000c8a44:;
    {
        goto L_000c86d4;
    }
L_000c8a48:;
    {
        cpu->r[3] = 0x00000613u;
    }
L_000c8a4c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000c8a50:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c8a6c;
        }
    }
L_000c8a54:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000610u, 1, 1);
    }
L_000c8a58:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c86d4;
        }
    }
L_000c8a5c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 0);
    }
L_000c8a60:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000c8a64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c86e4;
        }
    }
L_000c8a68:;
    {
        goto L_000c86d4;
    }
L_000c8a6c:;
    {
        cpu->r[3] = 0x0000061au;
    }
L_000c8a70:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000c8a74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c86e4;
        }
    }
L_000c8a78:;
    {
        goto L_000c86d4;
    }
L_000c8a7c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], 0x000017c0u, 1, 0);
    }
L_000c8a80:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000039u, 1, 0);
    }
L_000c8a84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_000c8a88:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000c86e4;
        }
    }
L_000c8a8c:;
    {
        goto L_000c86d4;
    }
L_000c8a90:;
    {
        sub_flags(cpu, cpu->r[9], 0x000000fau, 1, 1);
    }
L_000c8a94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c86e4;
        }
    }
L_000c8a98:;
    {
        goto L_000c86d4;
    }
L_000c8a9c:;
    {
        cpu->r[3] = 0x000007a1u;
    }
L_000c8aa0:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000c8aa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c86d4;
        }
    }
L_000c8aa8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000c8aac:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000c8ab0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c86e4;
        }
    }
L_000c8ab4:;
    {
        goto L_000c86d4;
    }
L_000c8ab8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_000c8abc:;
    {
        cpu->r[3] = (~0x00000002u);
    }
L_000c8ac0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x34u);
    }
L_000c8ac4:;
    {
        goto L_000c834c;
    }
L_000c8ac8:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000c8acc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c8ad0:;
    {
        cpu->r[14] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c8ad4:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_000c8ad8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000c8adc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c8b40;
        }
    }
L_000c8ae0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_000c8ae4:;
    {
        cpu->r[2] = 0x000087c0u;
    }
L_000c8ae8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c8aec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c8af0:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000c8af4:;
    {
        cpu->r[10] = 0x00005f60u;
    }
L_000c8af8:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_000c8afc:;
    {
        cpu->r[4] = 0x00001c9cu;
    }
L_000c8b00:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000c8b04:;
    {
        cpu->r[0] = rd16(cpu->r[2] + + 0x12u);
    }
L_000c8b08:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x0000000bu, 1, 0);
    }
L_000c8b0c:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_000c8b10:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000006u, 1, 1);
    }
L_000c8b14:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000c8b30;
        }
    }
L_000c8b18:;
    {
        cpu->r[6] = rd8(cpu->r[12] + cpu->r[10]);
    }
L_000c8b1c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000c8b20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c8c98;
        }
    }
L_000c8b24:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000000cu, 1, 1);
    }
L_000c8b28:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], 0x00000010u, 1, 1);
        }
    }
L_000c8b2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c8ca4;
        }
    }
L_000c8b30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000c8b34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000040u, 0, 0);
    }
L_000c8b38:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[14], 1, 1);
    }
L_000c8b3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c8b04;
        }
    }
L_000c8b40:;
    {
        cpu->r[6] = 0x00004278u;
    }
L_000c8b44:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c8b48:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0006u << 16);
    }
L_000c8b4c:;
    {
        cpu->r[14] = 0x000c8b50u; fn_000bc7c8(cpu);
    }
L_000c8b50:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[6]);
    }
L_000c8b54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c8b58:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c8b90;
        }
    }
L_000c8b5c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000c8b60:;
    {
        cpu->r[0] = 0x000001b0u;
    }
L_000c8b64:;
    {
        cpu->r[14] = 0x000c8b68u; fn_0018ba6c(cpu);
    }
L_000c8b68:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000c8b6c:;
    {
        cpu->r[14] = 0x000c8b70u; fn_000b95c8(cpu);
    }
L_000c8b70:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c8b74:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c8b78:;
    {
        cpu->r[14] = 0x000c8b7cu; fn_000bb6f0(cpu);
    }
L_000c8b7c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[6]);
    }
L_000c8b80:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000c8b84:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000c8b88:;
    {
        wr32(cpu->r[0], cpu->r[10]);
    }
L_000c8b8c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c8b60;
        }
    }
L_000c8b90:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000c8b94:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c8b98:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c8b9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c8ba0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c8cc0;
        }
    }
L_000c8ba4:;
    {
        cpu->r[3] = rd32(0x000c8bacu + + 0x550u);
    }
L_000c8ba8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000c8bac:;
    {
        cpu->r[9] = rd32(0x000c8bb4u + + 0x54cu);
    }
L_000c8bb0:;
    {
        cpu->r[10] = cpu->r[4];
    }
L_000c8bb4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c8bbcu, cpu->r[3], 0, 0);
    }
L_000c8bb8:;
    {
        cpu->r[2] = rd32(0x000c8bc0u + + 0x544u);
    }
L_000c8bbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000250u, 0, 0);
    }
L_000c8bc0:;
    {
        cpu->r[9] = add_flags(cpu, 0x000c8bc8u, cpu->r[9], 0, 0);
    }
L_000c8bc4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000c8bc8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c8bd0u, cpu->r[2], 0, 0);
    }
L_000c8bcc:;
    {
        cpu->r[3] = rd32(0x000c8bd4u + + 0x534u);
    }
L_000c8bd0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000c8bd4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c8bdcu, cpu->r[3], 0, 0);
    }
L_000c8bd8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000c8bdc:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000c8be0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c8be4:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c8be8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[4], 2, 6u, &shc), 0, 0);
    }
L_000c8bec:;
    {
        cpu->r[3] = rd16(cpu->r[6] + + 0x12u);
    }
L_000c8bf0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 0);
    }
L_000c8bf4:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_000c8bf8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 1);
    }
L_000c8bfc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000c8c50;
        }
    }
L_000c8c00:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_000c8c04:;
    {
        cpu->r[1] = 0x00005f60u;
    }
L_000c8c08:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000c8c0c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_000c8c10:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c8c14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c8cac;
        }
    }
L_000c8c18:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_000c8c1c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
        }
    }
L_000c8c20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c8c50;
        }
    }
L_000c8c24:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000c8c28:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c8c2c:;
    {
        cpu->r[14] = 0x000c8c30u; fn_000bb6f0(cpu);
    }
L_000c8c30:;
    {
        cpu->r[2] = 0x00004278u;
    }
L_000c8c34:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000c8c38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000c8c3c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[6] + + 0x12u);
    }
L_000c8c40:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000c8c44:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000c8c48:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000c8c4c:;
    {
        cpu->r[14] = 0x000c8c50u; fn_000b93a0(cpu);
    }
L_000c8c50:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000c8c54:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000c8c58:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c8c5c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c8c60:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000c8c64:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c8cc0;
        }
    }
L_000c8c68:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000c8c6c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c8bdc;
        }
    }
L_000c8c70:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c8c74:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000c8c78:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c8c7c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c8c80:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c8c84:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c8c88:;
    {
        cpu->r[12] = 0x00000084u;
    }
L_000c8c8c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000c8c90:;
    {
        cpu->r[14] = 0x000c8c94u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c8c94:;
    {
        goto L_000c8bdc;
    }
L_000c8c98:;
    {
        cpu->r[6] = rd32(cpu->r[12] + cpu->r[4]);
    }
L_000c8c9c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000c8ca0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c8b24;
        }
    }
L_000c8ca4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000c8ca8:;
    {
        goto L_000c8b30;
    }
L_000c8cac:;
    {
        cpu->r[1] = 0x00001c9cu;
    }
L_000c8cb0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000c8cb4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c8cb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c8c24;
        }
    }
L_000c8cbc:;
    {
        goto L_000c8c18;
    }
L_000c8cc0:;
    {
        cpu->r[4] = 0x00008c50u;
    }
L_000c8cc4:;
    {
        cpu->r[2] = 0x00001050u;
    }
L_000c8cc8:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000c8ccc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000c8cd0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c8cd4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c8cd8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c8e7c;
        }
    }
L_000c8cdc:;
    {
        cpu->r[1] = 0x00001c60u;
    }
L_000c8ce0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[8]);
    }
L_000c8ce4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c8ce8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000c8cec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000084u, 0, 0);
    }
L_000c8cf0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000060u, 0, 0);
    }
L_000c8cf4:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_000c8cf8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000078u, 0, 0);
    }
L_000c8cfc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_000c8d00:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000c8d04:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000c8d08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_000c8d0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_000c8d10:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000c8d14:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000c8d18:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000c8d20u + + 0x3a8u);
    }
L_000c8d1c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_000c8d20:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[11]);
    }
L_000c8d24:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000014u, 0, 0);
    }
L_000c8d28:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000c8d2c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000c8d30:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000c8d34:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x70u);
    }
L_000c8d38:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000c8d3c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000c8d40:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_000c8d44:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c8d48:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c8d4c:;
    {
        cpu->r[14] = 0x000c8d54u;
    }
L_000c8d50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c8d54u)) return;
    }
L_000c8d54:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000c8d58:;
    {
        cpu->r[14] = 0x000c8d60u;
    }
L_000c8d5c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c8d60u)) return;
    }
L_000c8d60:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000c8d64:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c8d68:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c8d6c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c8d70:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_000c8d74:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000c8d78:;
    {
        cpu->r[14] = 0x000c8d7cu; fn_0015365c(cpu);
    }
L_000c8d7c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000c8d80:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c8d84:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c8d88:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c8d8c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c8d90:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c8d94:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c8d98:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c8d9c:;
    {
        cpu->r[14] = 0x000c8da0u; fn_00153c38(cpu);
    }
L_000c8da0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000c8da4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c8da8:;
    {
        cpu->r[14] = 0x000c8dacu; fn_00153c38(cpu);
    }
L_000c8dac:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x84u);
    }
L_000c8db0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x78u);
    }
L_000c8db4:;
    {
        vfp_vneg(cpu, 13, 13);
    }
L_000c8db8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x6cu);
    }
L_000c8dbc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x8cu);
    }
L_000c8dc0:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000c8dc4:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000c8dc8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c8dcc:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_000c8dd0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c8dd4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000c8dd8:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000c8ddc:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000c8de0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000c8de4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x88u);
    }
L_000c8de8:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_000c8dec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c8df0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x7cu);
    }
L_000c8df4:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000c8df8:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000c8dfc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000c8e00:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x80u);
    }
L_000c8e04:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000c8e08:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c8e0c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x74u);
    }
L_000c8e10:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_000c8e14:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c8e18:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x70u);
    }
L_000c8e1c:;
    {
        *(int32_t*)vfp_s(cpu,12) = (int32_t)*vfp_s(cpu,12);
    }
L_000c8e20:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c8e24:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c8e28:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000c8e2c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000c8e30:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000c8e34:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000c8e38:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000c8e3c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c8e40:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c8e44:;
    {
        cpu->r[14] = 0x000c8e48u; fn_0017d5dc(cpu);
    }
L_000c8e48:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000c8e4c:;
    {
        uint32_t base = cpu->r[10];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_000c8e50:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000c8e54:;
    {
        cpu->r[12] = rd32(cpu->r[12] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000c8e58:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000048u, 0, 0);
    }
L_000c8e5c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000c8e60:;
    {
        cpu->r[1] = 0x00001050u;
    }
L_000c8e64:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000c8e68:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_000c8e6c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c8d24;
        }
    }
L_000c8e70:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c8e74:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c8e78:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x28u);
    }
L_000c8e7c:;
    {
        cpu->r[1] = 0x00001c60u;
    }
L_000c8e80:;
    {
        cpu->r[2] = 0x00001c64u;
    }
L_000c8e84:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c8e88:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c8e8c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c8e90:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_000c8e94:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000c8e98:;
    {
        cpu->r[14] = 0x000c8e9cu; fn_00183820(cpu);
    }
L_000c8e9c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_000c8ea0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000c8ea4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c8ea8:;
    {
        cpu->r[3] = 0x00001bccu;
    }
L_000c8eac:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[12]);
    }
L_000c8eb0:;
    {
        cpu->r[14] = 0x000c8eb4u; fn_0009b4d0(cpu);
    }
L_000c8eb4:;
    {
        cpu->r[2] = 0x00008810u;
    }
L_000c8eb8:;
    {
        cpu->r[1] = 0x00008814u;
    }
L_000c8ebc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c8ec0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c8ec4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000c8eccu + + 0x1fcu);
    }
L_000c8ec8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c8ecc:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000c8ed0:;
    {
        wr32(cpu->r[7] + cpu->r[1], cpu->r[12]);
    }
L_000c8ed4:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[0]);
    }
L_000c8ed8:;
    {
        goto L_000c834c;
    }
L_000c8edc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c8ee0:;
    {
        cpu->r[11] = cpu->r[10];
    }
L_000c8ee4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c8ee8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c8eec:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c8ef0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c8ac8;
        }
    }
L_000c8ef4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000c8ef8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000c8efc:;
    {
        cpu->r[14] = 0x000c8f00u; fn_000bc788(cpu);
    }
L_000c8f00:;
    {
        cpu->r[3] = rd32(0x000c8f08u + + 0x204u);
    }
L_000c8f04:;
    {
        cpu->r[2] = rd32(0x000c8f0cu + + 0x204u);
    }
L_000c8f08:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_000c8f0c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c8f14u, cpu->r[3], 0, 0);
    }
L_000c8f10:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c8f18u, cpu->r[2], 0, 0);
    }
L_000c8f14:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000244u, 0, 0);
    }
L_000c8f18:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000c8f1c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000c8f20:;
    {
        cpu->r[2] = rd32(0x000c8f28u + + 0x1ecu);
    }
L_000c8f24:;
    {
        cpu->r[3] = rd32(0x000c8f2cu + + 0x1ecu);
    }
L_000c8f28:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c8f30u, cpu->r[2], 0, 0);
    }
L_000c8f2c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000c8f30:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c8f38u, cpu->r[3], 0, 0);
    }
L_000c8f34:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000c8f38:;
    {
        cpu->r[3] = 0x00001c64u;
    }
L_000c8f3c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c8f40:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c8f44:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000c8f48:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c8ac8;
        }
    }
L_000c8f4c:;
    {
        cpu->r[3] = 0x00001c60u;
    }
L_000c8f50:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c8f54:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c8f58:;
    {
        cpu->r[4] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000c8f5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000c8f60:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c8f64:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c8f68:;
    {
        cpu->r[14] = 0x000c8f70u;
    }
L_000c8f6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c8f70u)) return;
    }
L_000c8f70:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000c8f74:;
    {
        cpu->r[14] = 0x000c8f7cu;
    }
L_000c8f78:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c8f7cu)) return;
    }
L_000c8f7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000062u, 1, 1);
    }
L_000c8f80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c8ffc;
        }
    }
L_000c8f84:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000c8f88:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c8f8c:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_000c8f90:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c8f94:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000c8f98:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[10], cpu->r[2], 0, 0);
    }
L_000c8f9c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000c8fa0:;
    {
        cpu->r[14] = 0x000c8fa8u;
    }
L_000c8fa4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c8fa8u)) return;
    }
L_000c8fa8:;
    {
        cpu->r[3] = 0x00004270u;
    }
L_000c8fac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c8fb0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c8fb4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_000c8fb8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c8fe0;
        }
    }
L_000c8fbc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c8fc0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c8fc4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c8fc8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c8fcc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c8fd0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c8fd4:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000c8fd8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000c8fdc:;
    {
        cpu->r[14] = 0x000c8fe0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c8fe0:;
    {
        cpu->r[3] = 0x00004274u;
    }
L_000c8fe4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000c8fe8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c8fec:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c8ff0:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[4]);
    }
L_000c8ff4:;
    {
        cpu->r[10] = cpu->r[9];
    }
L_000c8ff8:;
    {
        goto L_000c8f38;
    }
L_000c8ffc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000c9000:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c9004:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c9008:;
    {
        cpu->r[14] = 0x000c9010u;
    }
L_000c900c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c9010u)) return;
    }
L_000c9010:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000c9014:;
    {
        cpu->r[14] = 0x000c901cu;
    }
L_000c9018:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c901cu)) return;
    }
L_000c901c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000065u, 1, 1);
    }
L_000c9020:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c8f84;
        }
    }
L_000c9024:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000c9028:;
    {
        goto L_000c8f38;
    }
L_000c902c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c9030:;
    {
        cpu->r[3] = (~0x00000005u);
    }
L_000c9034:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c9038:;
    {
        goto L_000c834c;
    }
L_000c903c:;
    {
        cpu->r[14] = 0x000c9040u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000c9040:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c9044:;
    {
        cpu->r[3] = (~0x00000004u);
    }
L_000c9048:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c904c:;
    {
        goto L_000c834c;
    }
L_000c9050:;
    {
        cpu->r[1] = rd32(0x000c9058u + + 0xc4u);
    }
L_000c9054:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c9058:;
    {
        cpu->r[12] = rd32(0x000c9060u + + 0xc0u);
    }
L_000c905c:;
    {
        cpu->r[14] = 0x000006e3u;
    }
L_000c9060:;
    {
        cpu->r[2] = rd32(0x000c9068u + + 0xbcu);
    }
L_000c9064:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c906cu, cpu->r[1], 0, 0);
    }
L_000c9068:;
    {
        cpu->r[3] = rd32(0x000c9070u + + 0xb8u);
    }
L_000c906c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000c9074u, cpu->r[12], 0, 0);
    }
L_000c9070:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c9078u, cpu->r[2], 0, 0);
    }
L_000c9074:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000230u, 0, 0);
    }
L_000c9078:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c9080u, cpu->r[3], 0, 0);
    }
L_000c907c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000c9080:;
    {
        cpu->r[14] = 0x000c9084u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c9084:;
    {
        cpu->r[3] = (~0x00000008u);
    }
L_000c9088:;
    {
        goto L_000c834c;
    }
L_000c908c:;
    {
        cpu->r[1] = rd32(0x000c9094u + + 0x98u);
    }
L_000c9090:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c9094:;
    {
        cpu->r[12] = rd32(0x000c909cu + + 0x94u);
    }
L_000c9098:;
    {
        cpu->r[14] = 0x000006dau;
    }
L_000c909c:;
    {
        cpu->r[2] = rd32(0x000c90a4u + + 0x90u);
    }
L_000c90a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c90a8u, cpu->r[1], 0, 0);
    }
L_000c90a4:;
    {
        cpu->r[3] = rd32(0x000c90acu + + 0x8cu);
    }
L_000c90a8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000c90b0u, cpu->r[12], 0, 0);
    }
L_000c90ac:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c90b4u, cpu->r[2], 0, 0);
    }
L_000c90b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000230u, 0, 0);
    }
L_000c90b4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c90bcu, cpu->r[3], 0, 0);
    }
L_000c90b8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000c90bc:;
    {
        cpu->r[14] = 0x000c90c0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c90c0:;
    {
        cpu->r[3] = (~0x00000004u);
    }
L_000c90c4:;
    {
        goto L_000c834c;
    }
}

/* _ZN5Scene14LoadVisibilityEi @ 000c913c (arm) */
void fn_000c913c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c913c:;
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
L_000c9140:;
    {
        cpu->r[5] = rd32(0x000c9148u + + 0x230u);
    }
L_000c9144:;
    {
        cpu->r[3] = rd32(0x000c914cu + + 0x230u);
    }
L_000c9148:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000c914c:;
    {
        cpu->r[5] = add_flags(cpu, 0x000c9154u, cpu->r[5], 0, 0);
    }
L_000c9150:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c9154:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c9158:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000c915c:;
    {
        cpu->r[14] = 0x000c9160u; fn_00096b5c(cpu);
    }
L_000c9160:;
    {
        cpu->r[2] = rd32(0x000c9168u + + 0x218u);
    }
L_000c9164:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000c9168:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000c916c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x438u);
    }
L_000c9170:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_000c9174:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000c9178:;
    {
        cpu->r[2] = 0x0000009cu;
    }
L_000c917c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[2] = v;
    }
L_000c9180:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000c9184:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c9188:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x38u);
    }
L_000c918c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c9334;
        }
    }
L_000c9190:;
    {
        cpu->r[7] = rd32(0x000c9198u + + 0x1ecu);
    }
L_000c9194:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000c9198:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000c919c:;
    {
        cpu->r[14] = 0x000c91a0u; fn_00189f5c(cpu);
    }
L_000c91a0:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_000c91a4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_000c91a8:;
    {
        cpu->r[14] = 0x000c91acu; fn_001897b4(cpu);
    }
L_000c91ac:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c91b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_000c91b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c932c;
        }
    }
L_000c91b8:;
    {
        cpu->r[14] = 0x000c91bcu; fn_000fc5dc(cpu);
    }
L_000c91bc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_000c91c0:;
    {
        cpu->r[7] = 0x00008c38u;
    }
L_000c91c4:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c91c8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000c91cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c91d0:;
    {
        cpu->r[14] = 0x000c91d4u; fn_000fc650(cpu);
    }
L_000c91d4:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000c91d8:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_000c91dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c91e0:;
    {
        cpu->r[14] = 0x000c91e4u; fn_000fc5ec(cpu);
    }
L_000c91e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c91e8:;
    {
        cpu->r[14] = 0x000c91ecu; fn_000fc628(cpu);
    }
L_000c91ec:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000c91f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c91f4:;
    {
        cpu->r[14] = 0x000c91f8u; fn_000fc5dc(cpu);
    }
L_000c91f8:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000c91fc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_000c9200:;
    {
        cpu->r[6] = (uint32_t)((int32_t)(int16_t)(cpu->r[6] & 0xffff) * (int32_t)(int16_t)(cpu->r[1] & 0xffff));
    }
L_000c9204:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_000c9208:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 0);
    }
L_000c920c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c9210:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 0);
    }
L_000c9214:;
    {
        cpu->r[14] = 0x000c9218u; fn_000fc5ec(cpu);
    }
L_000c9218:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c921c:;
    {
        cpu->r[14] = 0x000c9220u; fn_000fc650(cpu);
    }
L_000c9220:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_000c9224:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[0]);
    }
L_000c9228:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c922c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c931c;
        }
    }
L_000c9230:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_000c9234:;
    {
        cpu->r[9] = 0x00008c3cu;
    }
L_000c9238:;
    {
        cpu->r[14] = 0x000c923cu; imp__Znaj(cpu); /* _Znaj */
    }
L_000c923c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c9240:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000c9244:;
    {
        cpu->r[11] = 0x00008c40u;
    }
L_000c9248:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000c924c:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[0]);
    }
L_000c9250:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000c9254:;
    {
        cpu->r[14] = 0x000c9258u; imp__Znaj(cpu); /* _Znaj */
    }
L_000c9258:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c925c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c9260:;
    {
        wr32(cpu->r[4] + cpu->r[11], cpu->r[0]);
    }
L_000c9264:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c931c;
        }
    }
L_000c9268:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c926c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000c9270:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c9274:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000c9278:;
    {
        cpu->r[14] = 0x000c927cu; fn_000fc650(cpu);
    }
L_000c927c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c9280:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000c9284:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[10] = v;
    }
L_000c9288:;
    {
        wr16(cpu->r[6] + cpu->r[10], cpu->r[0]);
    }
L_000c928c:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[3] + cpu->r[10]);
    }
L_000c9290:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c9294:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c92fc;
        }
    }
L_000c9298:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_000c929c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000c92a0:;
    {
        cpu->r[14] = 0x000c92a4u; imp__Znaj(cpu); /* _Znaj */
    }
L_000c92a4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c92a8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c92ac:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_000c92b0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000c92b4:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[0]);
    }
L_000c92b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000c92bc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3] + cpu->r[10]);
    }
L_000c92c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c92c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c92fc;
        }
    }
L_000c92c8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000c92cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000c92d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c92d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000c92d8:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[7] = v;
    }
L_000c92dc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000c92e0:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c92e4:;
    {
        cpu->r[14] = 0x000c92e8u; fn_000fc650(cpu);
    }
L_000c92e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000c92ec:;
    {
        wr16(cpu->r[8] + cpu->r[7], cpu->r[0]);
    }
L_000c92f0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3] + cpu->r[10]);
    }
L_000c92f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000c92f8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c92cc;
        }
    }
L_000c92fc:;
    {
        cpu->r[2] = 0x00008c38u;
    }
L_000c9300:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c9304:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c9308:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c930c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000c9310:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000c9314:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000c9318:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c9270;
        }
    }
L_000c931c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c9320:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_000c9324:;
    {
        cpu->r[14] = 0x000c9328u; fn_00189870(cpu);
    }
L_000c9328:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000c932c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000c9330:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c9334u)) return;
    }
L_000c9334:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000c9338:;
    {
        cpu->r[14] = 0x000c933cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000c933c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c9340:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c9190;
        }
    }
L_000c9344:;
    {
        cpu->r[7] = rd32(0x000c934cu + + 0x38u);
    }
L_000c9348:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000c934c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000c9350:;
    {
        cpu->r[14] = 0x000c9354u; fn_00189f48(cpu);
    }
L_000c9354:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000c9358:;
    {
        cpu->r[14] = 0x000c935cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000c935c:;
    {
        cpu->r[3] = rd32(0x000c9364u + + 0x24u);
    }
L_000c9360:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000c9364:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c9368:;
    {
        cpu->r[3] = rd32(0x000c9370u + + 0x1cu);
    }
L_000c936c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c9370:;
    {
        cpu->r[14] = 0x000c9374u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000c9374:;
    {
        goto L_000c9194;
    }
}

/* _ZN5Scene12LoadLightmapEi @ 000c9390 (arm) */
void fn_000c9390(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c9390:;
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
L_000c9394:;
    {
        cpu->r[5] = rd32(0x000c939cu + + 0x23cu);
    }
L_000c9398:;
    {
        cpu->r[3] = rd32(0x000c93a0u + + 0x23cu);
    }
L_000c939c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000c93a0:;
    {
        cpu->r[5] = add_flags(cpu, 0x000c93a8u, cpu->r[5], 0, 0);
    }
L_000c93a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c93a8:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c93ac:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000c93b0:;
    {
        cpu->r[14] = 0x000c93b4u; fn_00096b5c(cpu);
    }
L_000c93b4:;
    {
        cpu->r[2] = rd32(0x000c93bcu + + 0x224u);
    }
L_000c93b8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000c93bc:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000c93c0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x438u);
    }
L_000c93c4:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_000c93c8:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000c93cc:;
    {
        cpu->r[2] = 0x0000009cu;
    }
L_000c93d0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[2] = v;
    }
L_000c93d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000c93d8:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c93dc:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x38u);
    }
L_000c93e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c9594;
        }
    }
L_000c93e4:;
    {
        cpu->r[6] = rd32(0x000c93ecu + + 0x1f8u);
    }
L_000c93e8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c93ec:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000c93f0:;
    {
        cpu->r[14] = 0x000c93f4u; fn_00189f5c(cpu);
    }
L_000c93f4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000c93f8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000c93fc:;
    {
        cpu->r[14] = 0x000c9400u; fn_001897b4(cpu);
    }
L_000c9400:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c9404:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000c9408:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c958c;
        }
    }
L_000c940c:;
    {
        cpu->r[14] = 0x000c9410u; fn_000fc5dc(cpu);
    }
L_000c9410:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_000c9414:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000c9418:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c941c:;
    {
        cpu->r[14] = 0x000c9420u; fn_000fc650(cpu);
    }
L_000c9420:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000c9424:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_000c9428:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c942c:;
    {
        cpu->r[14] = 0x000c9430u; fn_000fc5ec(cpu);
    }
L_000c9430:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c9434:;
    {
        cpu->r[14] = 0x000c9438u; fn_000fc628(cpu);
    }
L_000c9438:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000c943c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c9440:;
    {
        cpu->r[14] = 0x000c9444u; fn_000fc5dc(cpu);
    }
L_000c9444:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000c9448:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_000c944c:;
    {
        cpu->r[7] = (uint32_t)((int32_t)(int16_t)(cpu->r[7] & 0xffff) * (int32_t)(int16_t)(cpu->r[1] & 0xffff));
    }
L_000c9450:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_000c9454:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 0);
    }
L_000c9458:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c945c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 0);
    }
L_000c9460:;
    {
        cpu->r[14] = 0x000c9464u; fn_000fc5ec(cpu);
    }
L_000c9464:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000c9468:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_000c946c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000002cu, 0, 0);
    }
L_000c9470:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c9474:;
    {
        cpu->r[14] = 0x000c9478u; fn_000fc5f4(cpu);
    }
L_000c9478:;
    {
        cpu->r[2] = 0x00008c2cu;
    }
L_000c947c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c9480:;
    {
        cpu->r[3] = 0x00004c52u;
    }
L_000c9484:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x4d45u << 16);
    }
L_000c9488:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c948c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000c9490:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c94c8;
        }
    }
L_000c9494:;
    {
        cpu->r[1] = rd32(0x000c949cu + + 0x14cu);
    }
L_000c9498:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c949c:;
    {
        cpu->r[12] = rd32(0x000c94a4u + + 0x148u);
    }
L_000c94a0:;
    {
        cpu->r[14] = 0x000008f6u;
    }
L_000c94a4:;
    {
        cpu->r[2] = rd32(0x000c94acu + + 0x144u);
    }
L_000c94a8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c94b0u, cpu->r[1], 0, 0);
    }
L_000c94ac:;
    {
        cpu->r[3] = rd32(0x000c94b4u + + 0x140u);
    }
L_000c94b0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000c94b8u, cpu->r[12], 0, 0);
    }
L_000c94b4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c94bcu, cpu->r[2], 0, 0);
    }
L_000c94b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000258u, 0, 0);
    }
L_000c94bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c94c4u, cpu->r[3], 0, 0);
    }
L_000c94c0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000c94c4:;
    {
        cpu->r[14] = 0x000c94c8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c94c8:;
    {
        cpu->r[7] = 0x00008824u;
    }
L_000c94cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00018800u, 0, 0);
    }
L_000c94d0:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c94d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000002cu, 0, 0);
    }
L_000c94d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c94dc:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_000c94e0:;
    {
        cpu->r[14] = 0x000c94e4u; fn_000fc5f4(cpu);
    }
L_000c94e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c94e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c94ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c94fc;
        }
    }
L_000c94f0:;
    {
        cpu->r[14] = 0x000c94f4u; fn_0018ba60(cpu);
    }
L_000c94f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c94f8:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[3]);
    }
L_000c94fc:;
    {
        cpu->r[7] = 0x00008828u;
    }
L_000c9500:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c9504:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c9508:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c950c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c951c;
        }
    }
L_000c9510:;
    {
        cpu->r[14] = 0x000c9514u; fn_0018ba60(cpu);
    }
L_000c9514:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c9518:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[3]);
    }
L_000c951c:;
    {
        cpu->r[10] = 0x00008c34u;
    }
L_000c9520:;
    {
        cpu->r[8] = 0x00008c32u;
    }
L_000c9524:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000c9528:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000c952c:;
    {
        cpu->r[9] = 0x00008824u;
    }
L_000c9530:;
    {
        cpu->r[7] = 0x00008828u;
    }
L_000c9534:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000c9538:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000c953c:;
    {
        cpu->r[14] = 0x000c9540u; imp__Znaj(cpu); /* _Znaj */
    }
L_000c9540:;
    {
        cpu->r[3] = rd16(cpu->r[4] + cpu->r[8]);
    }
L_000c9544:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c9548:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[0]);
    }
L_000c954c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 4u, &shc); cpu->r[0] = v;
    }
L_000c9550:;
    {
        cpu->r[14] = 0x000c9554u; imp__Znaj(cpu); /* _Znaj */
    }
L_000c9554:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000c9558:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000c955c:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[0]);
    }
L_000c9560:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c9564:;
    {
        cpu->r[14] = 0x000c9568u; fn_000fc5f4(cpu);
    }
L_000c9568:;
    {
        cpu->r[2] = rd16(cpu->r[4] + cpu->r[8]);
    }
L_000c956c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c9570:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c9574:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_000c9578:;
    {
        cpu->r[14] = 0x000c957cu; fn_000fc5f4(cpu);
    }
L_000c957c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c9580:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000c9584:;
    {
        cpu->r[14] = 0x000c9588u; fn_00189870(cpu);
    }
L_000c9588:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000c958c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000c9590:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c9594u)) return;
    }
L_000c9594:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000c9598:;
    {
        cpu->r[14] = 0x000c959cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000c959c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c95a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c93e4;
        }
    }
L_000c95a4:;
    {
        cpu->r[6] = rd32(0x000c95acu + + 0x38u);
    }
L_000c95a8:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c95ac:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000c95b0:;
    {
        cpu->r[14] = 0x000c95b4u; fn_00189f48(cpu);
    }
L_000c95b4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000c95b8:;
    {
        cpu->r[14] = 0x000c95bcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000c95bc:;
    {
        cpu->r[3] = rd32(0x000c95c4u + + 0x34u);
    }
L_000c95c0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000c95c4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c95c8:;
    {
        cpu->r[3] = rd32(0x000c95d0u + + 0x2cu);
    }
L_000c95cc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c95d0:;
    {
        cpu->r[14] = 0x000c95d4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000c95d4:;
    {
        goto L_000c93e8;
    }
}

/* _ZN5Scene20LoadParticleEmittersEi @ 000c9600 (arm) */
void fn_000c9600(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c9600:;
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
L_000c9604:;
    {
        cpu->r[4] = rd32(0x000c960cu + + 0x1a4u);
    }
L_000c9608:;
    {
        cpu->r[3] = rd32(0x000c9610u + + 0x1a4u);
    }
L_000c960c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000c9610:;
    {
        cpu->r[4] = add_flags(cpu, 0x000c9618u, cpu->r[4], 0, 0);
    }
L_000c9614:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000c9618:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c961c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000c9620:;
    {
        cpu->r[14] = 0x000c9624u; fn_00096b5c(cpu);
    }
L_000c9624:;
    {
        cpu->r[2] = rd32(0x000c962cu + + 0x18cu);
    }
L_000c9628:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000c962c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c9630:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x438u);
    }
L_000c9634:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_000c9638:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000c963c:;
    {
        cpu->r[2] = 0x0000009cu;
    }
L_000c9640:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[2] = v;
    }
L_000c9644:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000c9648:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c964c:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x38u);
    }
L_000c9650:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c976c;
        }
    }
L_000c9654:;
    {
        cpu->r[6] = rd32(0x000c965cu + + 0x160u);
    }
L_000c9658:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c965c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000c9660:;
    {
        cpu->r[14] = 0x000c9664u; fn_00189f5c(cpu);
    }
L_000c9664:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000c9668:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_000c966c:;
    {
        cpu->r[14] = 0x000c9670u; fn_001897b4(cpu);
    }
L_000c9670:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c9674:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000c9678:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c9764;
        }
    }
L_000c967c:;
    {
        cpu->r[14] = 0x000c9680u; fn_000fc5dc(cpu);
    }
L_000c9680:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_000c9684:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000c9688:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c968c:;
    {
        cpu->r[14] = 0x000c9690u; fn_000fc650(cpu);
    }
L_000c9690:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000c9694:;
    {
        cpu->r[5] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_000c9698:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c969c:;
    {
        cpu->r[14] = 0x000c96a0u; fn_000fc5ec(cpu);
    }
L_000c96a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c96a4:;
    {
        cpu->r[14] = 0x000c96a8u; fn_000fc628(cpu);
    }
L_000c96a8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000c96ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c96b0:;
    {
        cpu->r[14] = 0x000c96b4u; fn_000fc5dc(cpu);
    }
L_000c96b4:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_000c96b8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_000c96bc:;
    {
        cpu->r[5] = (uint32_t)((int32_t)(int16_t)(cpu->r[5] & 0xffff) * (int32_t)(int16_t)(cpu->r[3] & 0xffff));
    }
L_000c96c0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_000c96c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c96c8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_000c96cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_000c96d0:;
    {
        cpu->r[14] = 0x000c96d4u; fn_000fc5ec(cpu);
    }
L_000c96d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c96d8:;
    {
        cpu->r[14] = 0x000c96dcu; fn_000fc650(cpu);
    }
L_000c96dc:;
    {
        cpu->r[9] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000c96e0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000c96e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c9754;
        }
    }
L_000c96e8:;
    {
        cpu->r[8] = 0x00008c4cu;
    }
L_000c96ec:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000c96f0:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000c96f4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000c96f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c96fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c9700:;
    {
        cpu->r[14] = 0x000c9704u; fn_000fc628(cpu);
    }
L_000c9704:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000c9708:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c970c:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000c9710:;
    {
        cpu->r[14] = 0x000c9714u; fn_000fc5fc(cpu);
    }
L_000c9714:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000c9718:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c971c:;
    {
        cpu->r[14] = 0x000c9720u; fn_000fc5fc(cpu);
    }
L_000c9720:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000c9724:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c9728:;
    {
        cpu->r[14] = 0x000c972cu; fn_000fc5fc(cpu);
    }
L_000c972c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[8]);
    }
L_000c9730:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_000c9734:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000c9738:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_000c973c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_000c9740:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000c9744:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c9748:;
    {
        cpu->r[14] = 0x000c974cu; fn_001597b4(cpu);
    }
L_000c974c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 1);
    }
L_000c9750:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c96f8;
        }
    }
L_000c9754:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_000c9758:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000c975c:;
    {
        cpu->r[14] = 0x000c9760u; fn_00189870(cpu);
    }
L_000c9760:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000c9764:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000c9768:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c976cu)) return;
    }
L_000c976c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000c9770:;
    {
        cpu->r[14] = 0x000c9774u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000c9774:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c9778:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c9654;
        }
    }
L_000c977c:;
    {
        cpu->r[6] = rd32(0x000c9784u + + 0x38u);
    }
L_000c9780:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c9784:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000c9788:;
    {
        cpu->r[14] = 0x000c978cu; fn_00189f48(cpu);
    }
L_000c978c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000c9790:;
    {
        cpu->r[14] = 0x000c9794u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000c9794:;
    {
        cpu->r[3] = rd32(0x000c979cu + + 0x24u);
    }
L_000c9798:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000c979c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c97a0:;
    {
        cpu->r[3] = rd32(0x000c97a8u + + 0x1cu);
    }
L_000c97a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c97a8:;
    {
        cpu->r[14] = 0x000c97acu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000c97ac:;
    {
        goto L_000c9658;
    }
}

/* _ZN5Scene8LoadCarsEi @ 000c97c8 (arm) */
void fn_000c97c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c97c8:;
    {
        cpu->r[3] = 0x000017f0u;
    }
L_000c97cc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000007u, 1, 1);
    }
L_000c97d0:;
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
L_000c97d4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c97d8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c97dc:;
    {
        cpu->r[0] = rd32(0x000c97e4u + + 0x5c0u);
    }
L_000c97e0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000a4u, 1, 0);
    }
L_000c97e4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000c97e8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000c97ec:;
    {
        cpu->r[0] = add_flags(cpu, 0x000c97f4u, cpu->r[0], 0, 0);
    }
L_000c97f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c9c84;
        }
    }
L_000c97f4:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000eu, 1, 1);
    }
L_000c97f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c9830;
        }
    }
L_000c97fc:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000fu, 1, 1);
    }
L_000c9800:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c99ac;
        }
    }
L_000c9804:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000010u, 1, 1);
    }
L_000c9808:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c9a18;
        }
    }
L_000c980c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000011u, 1, 1);
    }
L_000c9810:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c9bf8;
        }
    }
L_000c9814:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000012u, 1, 1);
    }
L_000c9818:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c98f0;
        }
    }
L_000c981c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000013u, 1, 1);
    }
L_000c9820:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c9b94;
        }
    }
L_000c9824:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000c9828:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000a4u, 0, 0);
    }
L_000c982c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c9830u)) return;
    }
L_000c9830:;
    {
        cpu->r[3] = rd32(0x000c9838u + + 0x570u);
    }
L_000c9834:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000c9838:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c983c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c9840:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c9844:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c9848:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c9824;
        }
    }
L_000c984c:;
    {
        cpu->r[10] = rd8(cpu->r[3] + + 0x41eu);
    }
L_000c9850:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000c9854:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c9824;
        }
    }
L_000c9858:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 0);
    }
L_000c985c:;
    {
        cpu->r[8] = 0x00001c90u;
    }
L_000c9860:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00006300u, 0, 0);
    }
L_000c9864:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000c9868:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000026u, 0, 0);
    }
L_000c986c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000c9870:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c9874:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c9878:;
    {
        cpu->r[3] = 0x000018c0u;
    }
L_000c987c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000c9880:;
    {
        cpu->r[14] = 0x000c9884u; fn_0009603c(cpu);
    }
L_000c9884:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000c9888:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x450u);
    }
L_000c988c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000c9890:;
    {
        cpu->r[0] = 0x00000dfcu;
    }
L_000c9894:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[6] = v;
    }
L_000c9898:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000c989c:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x8u);
    }
L_000c98a0:;
    {
        cpu->r[14] = 0x000c98a4u; fn_0018ba6c(cpu);
    }
L_000c98a4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000c98a8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000c98ac:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000c98b0:;
    {
        cpu->r[14] = 0x000c98b4u; fn_000b23f0(cpu);
    }
L_000c98b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000c98b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00004700u, 0, 0);
    }
L_000c98bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000032u, 0, 0);
    }
L_000c98c0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c98c4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000c98c8:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x450u);
    }
L_000c98cc:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000c98d0:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[7]);
    }
L_000c98d4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], cpu->r[6], 0, 0);
    }
L_000c98d8:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_000c98dc:;
    {
        cpu->r[14] = 0x000c98e0u; fn_000b06ec(cpu);
    }
L_000c98e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c98e4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c9824;
        }
    }
L_000c98e8:;
    {
        cpu->r[0] = (~0x00000006u);
    }
L_000c98ec:;
    {
        goto L_000c9828;
    }
L_000c98f0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c98f4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c98f8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c98fc:;
    {
        cpu->r[3] = 0x000010d0u;
    }
L_000c9900:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000c9904:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000c9908:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c9824;
        }
    }
L_000c990c:;
    {
        cpu->r[0] = 0x00000dfcu;
    }
L_000c9910:;
    {
        cpu->r[8] = 0x00001c90u;
    }
L_000c9914:;
    {
        cpu->r[14] = 0x000c9918u; fn_0018ba6c(cpu);
    }
L_000c9918:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000c991c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c9920:;
    {
        cpu->r[6] = 0x00001d04u;
    }
L_000c9924:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000c9928:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000c992c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000c9930:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000c9934:;
    {
        cpu->r[14] = 0x000c9938u; fn_000b23f0(cpu);
    }
L_000c9938:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000c993c:;
    {
        cpu->r[2] = 0x000019f5u;
    }
L_000c9940:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[7]);
    }
L_000c9944:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c9948:;
    {
        cpu->r[10] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c994c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000c9950:;
    {
        cpu->r[14] = 0x000c9954u; fn_00096028(cpu);
    }
L_000c9954:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000c9958:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000c995c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000c9960:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000019c0u, 0, 0);
    }
L_000c9964:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000c9968:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000003du, 0, 0);
    }
L_000c996c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_000c9970:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c9974:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000c9978:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c997c:;
    {
        cpu->r[14] = 0x000c9980u; fn_000b0e50(cpu);
    }
L_000c9980:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c9984:;
    {
        cpu->r[14] = 0x000c9988u; fn_000ea4dc(cpu);
    }
L_000c9988:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c998c:;
    {
        cpu->r[3] = 0x00003e80u;
    }
L_000c9990:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c9994:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c9998:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0xb5cu);
    }
L_000c999c:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000c99a0:;
    {
        uint32_t v = cpu->r[1] | 0x00000001u; cpu->r[3] = v;
    }
L_000c99a4:;
    {
        wr32(cpu->r[2] + + 0xb5cu, cpu->r[3]);
    }
L_000c99a8:;
    {
        goto L_000c9828;
    }
L_000c99ac:;
    {
        cpu->r[3] = rd32(0x000c99b4u + + 0x3f4u);
    }
L_000c99b0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c99b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c99b8:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x41eu);
    }
L_000c99bc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c99c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c9b30;
        }
    }
L_000c99c4:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000c99c8:;
    {
        cpu->r[0] = 0x00001ce8u;
    }
L_000c99cc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c99d0:;
    {
        cpu->r[1] = 0x00001cecu;
    }
L_000c99d4:;
    {
        cpu->r[3] = 0x00001cf0u;
    }
L_000c99d8:;
    {
        cpu->r[12] = 0x00001cf4u;
    }
L_000c99dc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c99e0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000c99e4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000c99e8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c99ec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c99f0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c99f4:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x4u);
    }
L_000c99f8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00011c00u, 0, 0);
    }
L_000c99fc:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[2]);
    }
L_000c9a00:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], 0x000000a8u, 0, 0);
    }
L_000c9a04:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[12]);
    }
L_000c9a08:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000c9a0c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[5]);
    }
L_000c9a10:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000c9a14:;
    {
        goto L_000c9828;
    }
L_000c9a18:;
    {
        cpu->r[3] = 0x000082a0u;
    }
L_000c9a1c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c9a20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c9a24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c9a28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c9824;
        }
    }
L_000c9a2c:;
    {
        cpu->r[3] = 0x0000829cu;
    }
L_000c9a30:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c9a34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c9a38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c9a3c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c9824;
        }
    }
L_000c9a40:;
    {
        cpu->r[3] = rd32(0x000c9a48u + + 0x364u);
    }
L_000c9a44:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000c9a48:;
    {
        cpu->r[7] = rd32(0x000c9a50u + + 0x360u);
    }
L_000c9a4c:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_000c9a50:;
    {
        cpu->r[9] = rd32(0x000c9a58u + + 0x35cu);
    }
L_000c9a54:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c9a5cu, cpu->r[3], 0, 0);
    }
L_000c9a58:;
    {
        cpu->r[11] = rd32(0x000c9a60u + + 0x358u);
    }
L_000c9a5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000208u, 0, 0);
    }
L_000c9a60:;
    {
        cpu->r[7] = add_flags(cpu, 0x000c9a68u, cpu->r[7], 0, 0);
    }
L_000c9a64:;
    {
        cpu->r[9] = add_flags(cpu, 0x000c9a6cu, cpu->r[9], 0, 0);
    }
L_000c9a68:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000c9a6c:;
    {
        cpu->r[11] = add_flags(cpu, 0x000c9a74u, cpu->r[11], 0, 0);
    }
L_000c9a70:;
    {
        goto L_000c9a80;
    }
L_000c9a74:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c9a78:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000c9a7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c9824;
        }
    }
L_000c9a80:;
    {
        cpu->r[12] = 0x000082a4u;
    }
L_000c9a84:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000c9a88:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000c9a8c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000c9a90:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000c9a94:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c9a98:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000c9a9c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[5], 1, 1);
    }
L_000c9aa0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c9ab8;
        }
    }
L_000c9aa4:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000c9aa8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000c9aac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c9ab0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c9ab4:;
    {
        cpu->r[14] = 0x000c9ab8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c9ab8:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000c9abc:;
    {
        cpu->r[0] = 0x00001108u;
    }
L_000c9ac0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c9ac4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c9ac8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000c9acc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000680u, 0, 0);
    }
L_000c9ad0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x54cu);
    }
L_000c9ad4:;
    {
        cpu->r[10] = rd16(cpu->r[3] + + 0x8u);
    }
L_000c9ad8:;
    {
        cpu->r[14] = 0x000c9adcu; fn_0018ba6c(cpu);
    }
L_000c9adc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000c9ae0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000c9ae4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000c9ae8:;
    {
        cpu->r[14] = 0x000c9aecu; fn_000b2298(cpu);
    }
L_000c9aec:;
    {
        cpu->r[2] = 0x000082c0u;
    }
L_000c9af0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000c9af4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c9af8:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000c9afc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000c9b00:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c9b04:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c9b08:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[8]);
    }
L_000c9b0c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c9b10:;
    {
        cpu->r[14] = 0x000c9b18u;
    }
L_000c9b14:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c9b18u)) return;
    }
L_000c9b18:;
    {
        cpu->r[3] = 0x0000829cu;
    }
L_000c9b1c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c9b20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c9b24:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c9a74;
        }
    }
L_000c9b28:;
    {
        cpu->r[0] = (~0x00000006u);
    }
L_000c9b2c:;
    {
        goto L_000c9828;
    }
L_000c9b30:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000c9b34:;
    {
        cpu->r[0] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c9b38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c9b3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c99c4;
        }
    }
L_000c9b40:;
    {
        cpu->r[5] = 0x00008c50u;
    }
L_000c9b44:;
    {
        cpu->r[1] = 0x00001ce8u;
    }
L_000c9b48:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000c9b4c:;
    {
        cpu->r[2] = 0x00001cecu;
    }
L_000c9b50:;
    {
        cpu->r[12] = 0x00001cf0u;
    }
L_000c9b54:;
    {
        cpu->r[3] = 0x00001cf4u;
    }
L_000c9b58:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000c9b5c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c9b60:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c9b64:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000c9b68:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c9b6c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00011c00u, 0, 0);
    }
L_000c9b70:;
    {
        cpu->r[6] = rd32(cpu->r[6] + + 0x4u);
    }
L_000c9b74:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x000000c8u, 0, 0);
    }
L_000c9b78:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x000000a8u, 0, 0);
    }
L_000c9b7c:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[7]);
    }
L_000c9b80:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[5]);
    }
L_000c9b84:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[6]);
    }
L_000c9b88:;
    {
        cpu->r[2] = 0x00000007u;
    }
L_000c9b8c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000c9b90:;
    {
        goto L_000c9828;
    }
L_000c9b94:;
    {
        cpu->r[3] = rd32(0x000c9b9cu + + 0x220u);
    }
L_000c9b98:;
    {
        cpu->r[1] = 0x00009c40u;
    }
L_000c9b9c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c9ba0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c9ba4:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c9ba8:;
    {
        cpu->r[14] = 0x000c9bacu; fn_00135c90(cpu);
    }
L_000c9bac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c9bb0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000c9bb4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_000c9bb8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c9bbc:;
    {
        cpu->r[14] = 0x000c9bc0u; fn_00135f54(cpu);
    }
L_000c9bc0:;
    {
        cpu->r[1] = 0x0000a028u;
    }
L_000c9bc4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c9bc8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c9bcc:;
    {
        cpu->r[14] = 0x000c9bd0u; fn_00135c90(cpu);
    }
L_000c9bd0:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_000c9bd4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c9bd8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000c9bdc:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000c9be0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000c9be4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000c9be8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000c9bec:;
    {
        cpu->r[14] = 0x000c9bf0u; fn_001367cc(cpu);
    }
L_000c9bf0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000c9bf4:;
    {
        goto L_000c9828;
    }
L_000c9bf8:;
    {
        cpu->r[12] = rd32(0x000c9c00u + + 0x1bcu);
    }
L_000c9bfc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c9c00:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_000c9c04:;
    {
        cpu->r[1] = 0x00005603u;
    }
L_000c9c08:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c9c0c:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000c9c10:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000c9c14:;
    {
        cpu->r[14] = 0x000c9c18u; fn_00135d9c(cpu);
    }
L_000c9c18:;
    {
        cpu->r[1] = 0x00005603u;
    }
L_000c9c1c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000c9c20:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000c9c24:;
    {
        cpu->r[14] = 0x000c9c28u; fn_00135c90(cpu);
    }
L_000c9c28:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000c9c2c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000c9c30:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000c9c34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000c9c38:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000c9c3c:;
    {
        cpu->r[14] = 0x000c9c40u; fn_00136660(cpu);
    }
L_000c9c40:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000c9c44:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000c9c48:;
    {
        cpu->r[1] = 0x00005604u;
    }
L_000c9c4c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c9c50:;
    {
        cpu->r[14] = 0x000c9c54u; fn_00135d9c(cpu);
    }
L_000c9c54:;
    {
        cpu->r[1] = 0x00005604u;
    }
L_000c9c58:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000c9c5c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000c9c60:;
    {
        cpu->r[14] = 0x000c9c64u; fn_00135c90(cpu);
    }
L_000c9c64:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000c9c68:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000c9c6c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000c9c70:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000c9c74:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000c9c78:;
    {
        cpu->r[14] = 0x000c9c7cu; fn_00136660(cpu);
    }
L_000c9c7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c9c80:;
    {
        goto L_000c9828;
    }
L_000c9c84:;
    {
        cpu->r[0] = 0x00000dfcu;
    }
L_000c9c88:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[1], 0x00004700u, 0, 0);
    }
L_000c9c8c:;
    {
        cpu->r[14] = 0x000c9c90u; fn_0018ba6c(cpu);
    }
L_000c9c90:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c9c94:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000c9c98:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000c9c9c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000002au, 0, 0);
    }
L_000c9ca0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000c9ca4:;
    {
        cpu->r[14] = 0x000c9ca8u; fn_000b23f0(cpu);
    }
L_000c9ca8:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c9cac:;
    {
        cpu->r[12] = 0x00000032u;
    }
L_000c9cb0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c9cb4:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[7], 2, 2u, &shc), cpu->r[8]);
    }
L_000c9cb8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000c9cbc:;
    {
        cpu->r[14] = 0x0000004cu;
    }
L_000c9cc0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c9cc4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000c9cc8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_000c9ccc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000019c0u, 0, 0);
    }
L_000c9cd0:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0x444u);
    }
L_000c9cd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_000c9cd8:;
    {
        uint32_t v = cpu->r[12] * cpu->r[5] + cpu->r[1]; cpu->r[12] = v;
    }
L_000c9cdc:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x5u);
    }
L_000c9ce0:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c9ce4:;
    {
        uint32_t v = cpu->r[14] * cpu->r[1]; cpu->r[14] = v;
    }
L_000c9ce8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000019c0u, 0, 0);
    }
L_000c9cec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000003du, 0, 0);
    }
L_000c9cf0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[14], 0, 0);
    }
L_000c9cf4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_000c9cf8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c9cfc:;
    {
        cpu->r[12] = rd32(cpu->r[8] + cpu->r[14]);
    }
L_000c9d00:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_000c9d04:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000c9d08:;
    {
        cpu->r[14] = 0x000c9d0cu; fn_000b0e50(cpu);
    }
L_000c9d0c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_000c9d10:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c98e8;
        }
    }
L_000c9d14:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_000c9d18:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000c9d1c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000c9d20:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[6]);
    }
L_000c9d24:;
    {
        cpu->r[14] = 0x000c9d28u; fn_001535e0(cpu);
    }
L_000c9d28:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000c9d2c:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[6]);
    }
L_000c9d30:;
    {
        cpu->r[14] = 0x000c9d34u; fn_001535e0(cpu);
    }
L_000c9d34:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c9d38:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c9d3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c9d40:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000c9d44:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000c9d48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c9d8c;
        }
    }
L_000c9d4c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_000c9d50:;
    {
        cpu->r[12] = 0x00001d00u;
    }
L_000c9d54:;
    {
        cpu->r[0] = 0x00004280u;
    }
L_000c9d58:;
    {
        cpu->r[1] = 0x00004284u;
    }
L_000c9d5c:;
    {
        cpu->r[2] = 0x00004288u;
    }
L_000c9d60:;
    {
        cpu->r[3] = 0x0000428cu;
    }
L_000c9d64:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000c9d68:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000c9d6c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000c9d70:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000c9d74:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c9d78:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[6]);
    }
L_000c9d7c:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[14]);
    }
L_000c9d80:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[6]);
    }
L_000c9d84:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[6]);
    }
L_000c9d88:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_000c9d8c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000c9d90:;
    {
        cpu->r[14] = 0x000c9d94u; fn_000b2bc8(cpu);
    }
L_000c9d94:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000c9d98:;
    {
        cpu->r[14] = 0x000c9d9cu; fn_000b2bc8(cpu);
    }
L_000c9d9c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000c9da0:;
    {
        goto L_000c9828;
    }
}

/* _ZN5Scene22UpdateCarMatrices_AutoEih @ 000c9dc0 (arm) */
void fn_000c9dc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c9dc0:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000c9dc4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c9dc8:;
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
L_000c9dcc:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_000c9dd0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c9dd4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000016cu, 1, 0);
    }
L_000c9dd8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000c9ddc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000c9de0:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_000c9de4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000c9de8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000c9dec:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00008cc0u;
        }
    }
L_000c9df0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c9df4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c9df8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
        }
    }
L_000c9dfc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
        }
    }
L_000c9e00:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
        }
    }
L_000c9e04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00064000u, 0, 0);
    }
L_000c9e08:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000c9e0c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], 0x000000b4u, 0, 0);
    }
L_000c9e10:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000c9e14:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x000001c4u, 0, 0);
    }
L_000c9e18:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000c9e1c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000c9e20:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_000c9e24:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000c9e28:;
    {
        cpu->r[14] = 0x000c9e2cu; fn_00153600(cpu);
    }
L_000c9e2c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c9e30:;
    {
        cpu->r[14] = 0x000c9e34u; fn_00153600(cpu);
    }
L_000c9e34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c9e38:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c9e3c:;
    {
        wr32(cpu->r[13] + + 0x150u, cpu->r[3]);
    }
L_000c9e40:;
    {
        wr32(cpu->r[13] + + 0x164u, cpu->r[3]);
    }
L_000c9e44:;
    {
        wr32(cpu->r[13] + + 0x160u, cpu->r[3]);
    }
L_000c9e48:;
    {
        wr32(cpu->r[13] + + 0x15cu, cpu->r[3]);
    }
L_000c9e4c:;
    {
        wr32(cpu->r[13] + + 0x158u, cpu->r[3]);
    }
L_000c9e50:;
    {
        wr32(cpu->r[13] + + 0x154u, cpu->r[3]);
    }
L_000c9e54:;
    {
        cpu->r[14] = 0x000c9e58u; fn_00172518(cpu);
    }
L_000c9e58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_000c9e5c:;
    {
        cpu->r[5] = rd32(0x000c9e64u + + 0x458u);
    }
L_000c9e60:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000c9e64:;
    {
        cpu->r[5] = add_flags(cpu, 0x000c9e6cu, cpu->r[5], 0, 0);
    }
L_000c9e68:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000001u;
        }
    }
L_000c9e6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ca9c0;
        }
    }
L_000c9e70:;
    {
        cpu->r[3] = rd32(0x000c9e78u + + 0x448u);
    }
L_000c9e74:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c9e78:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c9e7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c9e80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ca838;
        }
    }
L_000c9e84:;
    {
        cpu->r[3] = rd32(0x000c9e8cu + + 0x438u);
    }
L_000c9e88:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c9e8c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c9e90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c9e94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ca820;
        }
    }
L_000c9e98:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000c9e9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ca0b8;
        }
    }
L_000c9ea0:;
    {
        cpu->r[11] = rd32(0x000c9ea8u + + 0x420u);
    }
L_000c9ea4:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000c9ea8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_000c9eac:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000c9eb0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c9eb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c9eb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000caaa0;
        }
    }
L_000c9ebc:;
    {
        cpu->r[3] = 0x0000850cu;
    }
L_000c9ec0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c9ec4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000c9ec8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c9edc;
        }
    }
L_000c9ecc:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000c9ed0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c9ed4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c9ed8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ca0d0;
        }
    }
L_000c9edc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x164u);
    }
L_000c9ee0:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000c9ee4:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c9ee8:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_000c9eec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x160u);
    }
L_000c9ef0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000c9ef4:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[3]);
    }
L_000c9ef8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x15cu);
    }
L_000c9efc:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_000c9f00:;
    {
        cpu->r[14] = 0x000c9f04u; fn_00096b6c(cpu);
    }
L_000c9f04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c9f08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ca0e8;
        }
    }
L_000c9f0c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000c9f10:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_000c9f14:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000c9f18:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000c9f1c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x15cu);
    }
L_000c9f20:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000c9f24:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x164u);
    }
L_000c9f28:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x160u);
    }
L_000c9f2c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000c9f30:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000c9f34:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000c9f38:;
    {
        cpu->r[14] = 0x000c9f3cu; fn_0009965c(cpu);
    }
L_000c9f3c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c9f40:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000c9f44:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000c9f48:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000c9f4c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c9f50:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x158u);
    }
L_000c9f54:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000c9f58:;
    {
        cpu->r[14] = 0x00000002u;
    }
L_000c9f5c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x150u);
    }
L_000c9f60:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x154u);
    }
L_000c9f64:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000c9f68:;
    {
        cpu->r[14] = 0x000c9f6cu; fn_0009965c(cpu);
    }
L_000c9f6c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000c9f70:;
    {
        cpu->r[14] = 0x000c9f74u; fn_00096b88(cpu);
    }
L_000c9f74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c9f78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ca100;
        }
    }
L_000c9f7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000128u, 0, 0);
    }
L_000c9f80:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000c9f84:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000c9f88:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000c9f8c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c9f90:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000c9f94:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000c9f98:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c9f9c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000c9fa0:;
    {
        cpu->r[14] = 0x000c9fa4u; fn_0009950c(cpu);
    }
L_000c9fa4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x128u);
    }
L_000c9fa8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000c9fac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c9fb0:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_000c9fb4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000c9fb8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000140u, 0, 0);
    }
L_000c9fbc:;
    {
        wr32(cpu->r[13] + + 0x164u, cpu->r[14]);
    }
L_000c9fc0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c9fc4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x12cu);
    }
L_000c9fc8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c9fcc:;
    {
        wr32(cpu->r[13] + + 0x160u, cpu->r[14]);
    }
L_000c9fd0:;
    {
        cpu->r[14] = 0x000c9fd4u; fn_0009950c(cpu);
    }
L_000c9fd4:;
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
L_000c9fd8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c9fdc:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000c9fe0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x128u);
    }
L_000c9fe4:;
    {
        wr32(cpu->r[13] + + 0x158u, cpu->r[3]);
    }
L_000c9fe8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x12cu);
    }
L_000c9fec:;
    {
        wr32(cpu->r[13] + + 0x154u, cpu->r[3]);
    }
L_000c9ff0:;
    {
        cpu->r[3] = rd32(0x000c9ff8u + + 0x2d4u);
    }
L_000c9ff4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c9ff8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c9ffc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ca000:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ca114;
        }
    }
L_000ca004:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x164u);
    }
L_000ca008:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000ca00c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000ca014u + + 0x2a0u);
    }
L_000ca010:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000ca018u + + 0x2a0u);
    }
L_000ca014:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ca018:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000ca01c:;
    {
        vfp_vmul(cpu, 11, 15, 17);
    }
L_000ca020:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,11);
    }
L_000ca024:;
    {
        cpu->r[14] = 0x000ca028u; fn_00154734(cpu);
    }
L_000ca028:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x160u);
    }
L_000ca02c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000ca030:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ca034:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000ca038:;
    {
        vfp_vmul(cpu, 12, 15, 17);
    }
L_000ca03c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000ca040:;
    {
        cpu->r[14] = 0x000ca044u; fn_00154514(cpu);
    }
L_000ca044:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x15cu);
    }
L_000ca048:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000ca04c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ca050:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000ca054:;
    {
        vfp_vmul(cpu, 13, 15, 17);
    }
L_000ca058:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000ca05c:;
    {
        cpu->r[14] = 0x000ca060u; fn_00154350(cpu);
    }
L_000ca060:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x158u);
    }
L_000ca064:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000ca068:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ca06c:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000ca070:;
    {
        vfp_vmul(cpu, 14, 15, 17);
    }
L_000ca074:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000ca078:;
    {
        cpu->r[14] = 0x000ca07cu; fn_00154734(cpu);
    }
L_000ca07c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x154u);
    }
L_000ca080:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000ca084:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ca088:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000ca08c:;
    {
        vfp_vmul(cpu, 11, 15, 17);
    }
L_000ca090:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,11);
    }
L_000ca094:;
    {
        cpu->r[14] = 0x000ca098u; fn_00154514(cpu);
    }
L_000ca098:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x150u);
    }
L_000ca09c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000ca0a0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ca0a4:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000ca0a8:;
    {
        vfp_vmul(cpu, 12, 15, 17);
    }
L_000ca0ac:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000ca0b0:;
    {
        cpu->r[14] = 0x000ca0b4u; fn_00154350(cpu);
    }
L_000ca0b4:;
    {
        goto L_000ca114;
    }
L_000ca0b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x0000006cu, 0, 0);
    }
L_000ca0bc:;
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
L_000ca0c0:;
    {
        cpu->r[11] = rd32(0x000ca0c8u + + 0x200u);
    }
L_000ca0c4:;
    {
        wr32(cpu->r[13] + + 0x164u, cpu->r[1]);
    }
L_000ca0c8:;
    {
        wr32(cpu->r[13] + + 0x160u, cpu->r[2]);
    }
L_000ca0cc:;
    {
        wr32(cpu->r[13] + + 0x15cu, cpu->r[3]);
    }
L_000ca0d0:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000ca0d4:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000ca0d8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000ca0dc:;
    {
        cpu->r[14] = 0x000ca0e0u; fn_00096b6c(cpu);
    }
L_000ca0e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ca0e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c9f0c;
        }
    }
L_000ca0e8:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000ca0ec:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000ca0f0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000ca0f4:;
    {
        cpu->r[14] = 0x000ca0f8u; fn_00096b88(cpu);
    }
L_000ca0f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ca0fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c9f7c;
        }
    }
L_000ca100:;
    {
        cpu->r[3] = rd32(0x000ca108u + + 0x1c4u);
    }
L_000ca104:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000ca108:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ca10c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ca110:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ca004;
        }
    }
L_000ca114:;
    {
        cpu->r[2] = rd32(0x000ca11cu + + 0x1b4u);
    }
L_000ca118:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ca11c:;
    {
        wr32(cpu->r[13] + + 0x13cu, cpu->r[3]);
    }
L_000ca120:;
    {
        wr32(cpu->r[13] + + 0x134u, cpu->r[3]);
    }
L_000ca124:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000ca128:;
    {
        wr32(cpu->r[13] + + 0x138u, cpu->r[3]);
    }
L_000ca12c:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_000ca130:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ca134:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ca880;
        }
    }
L_000ca138:;
    {
        cpu->r[3] = rd32(0x000ca140u + + 0x194u);
    }
L_000ca13c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000ca140:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ca144:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ca148:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ca868;
        }
    }
L_000ca14c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000ca150:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ca2e8;
        }
    }
L_000ca154:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_000ca158:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000ca15c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000ca160:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000ca164:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ca168:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000caa18;
        }
    }
L_000ca16c:;
    {
        cpu->r[3] = 0x0000850cu;
    }
L_000ca170:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000ca174:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000ca178:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ca18c;
        }
    }
L_000ca17c:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000ca180:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000ca184:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ca188:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ca2fc;
        }
    }
L_000ca18c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x164u);
    }
L_000ca190:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000ca194:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000ca198:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_000ca19c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x160u);
    }
L_000ca1a0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000ca1a4:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_000ca1a8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x15cu);
    }
L_000ca1ac:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[3]);
    }
L_000ca1b0:;
    {
        cpu->r[14] = 0x000ca1b4u; fn_00096b6c(cpu);
    }
L_000ca1b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ca1b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ca314;
        }
    }
L_000ca1bc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x15cu);
    }
L_000ca1c0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000ca1c4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000ca1c8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000ca1cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x164u);
    }
L_000ca1d0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x160u);
    }
L_000ca1d4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ca1d8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000ca1dc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_000ca1e0:;
    {
        cpu->r[14] = 0x000ca1e4u; fn_0009965c(cpu);
    }
L_000ca1e4:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_000ca1e8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000ca1ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x518u);
    }
L_000ca1f0:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_000ca1f4:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000ca1f8:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_000ca1fc:;
    {
        cpu->r[14] = 0x000ca200u; fn_0009962c(cpu);
    }
L_000ca200:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_000ca204:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000ca208:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000ca20c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000ca210:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000ca214:;
    {
        cpu->r[2] = 0x00000009u;
    }
L_000ca218:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x138u);
    }
L_000ca21c:;
    {
        cpu->r[14] = 0x000ca220u; fn_0009962c(cpu);
    }
L_000ca220:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000ca224:;
    {
        cpu->r[14] = 0x000ca228u; fn_00096b88(cpu);
    }
L_000ca228:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ca22c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ca32c;
        }
    }
L_000ca230:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000ca234:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000ca238:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000128u, 0, 0);
    }
L_000ca23c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000ca240:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ca244:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000ca248:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_000ca24c:;
    {
        cpu->r[14] = 0x000ca250u; fn_0009950c(cpu);
    }
L_000ca250:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x128u);
    }
L_000ca254:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000ca258:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ca25c:;
    {
        wr32(cpu->r[13] + + 0x164u, cpu->r[3]);
    }
L_000ca260:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x12cu);
    }
L_000ca264:;
    {
        wr32(cpu->r[13] + + 0x160u, cpu->r[3]);
    }
L_000ca268:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x130u);
    }
L_000ca26c:;
    {
        wr32(cpu->r[13] + + 0x15cu, cpu->r[3]);
    }
L_000ca270:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000ca274:;
    {
        cpu->r[14] = 0x000ca27cu;
    }
L_000ca278:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ca27cu)) return;
    }
L_000ca27c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_000ca280:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000ca284:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_000ca288:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000ca28c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000ca290:;
    {
        cpu->r[14] = 0x000ca294u; fn_000994e0(cpu);
    }
L_000ca294:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000ca298:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000ca29c:;
    {
        cpu->r[2] = 0x00000009u;
    }
L_000ca2a0:;
    {
        wr32(cpu->r[4] + + 0x518u, cpu->r[0]);
    }
L_000ca2a4:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000ca2a8:;
    {
        cpu->r[14] = 0x000ca2acu; fn_000994e0(cpu);
    }
L_000ca2ac:;
    {
        wr32(cpu->r[13] + + 0x138u, cpu->r[0]);
    }
L_000ca2b0:;
    {
        goto L_000ca32c;
    }
L_000ca2e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_000ca2ec:;
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
L_000ca2f0:;
    {
        wr32(cpu->r[13] + + 0x164u, cpu->r[1]);
    }
L_000ca2f4:;
    {
        wr32(cpu->r[13] + + 0x160u, cpu->r[2]);
    }
L_000ca2f8:;
    {
        wr32(cpu->r[13] + + 0x15cu, cpu->r[3]);
    }
L_000ca2fc:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000ca300:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000ca304:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000ca308:;
    {
        cpu->r[14] = 0x000ca30cu; fn_00096b6c(cpu);
    }
L_000ca30c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ca310:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ca1bc;
        }
    }
L_000ca314:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000ca318:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000ca31c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000ca320:;
    {
        cpu->r[14] = 0x000ca324u; fn_00096b88(cpu);
    }
L_000ca324:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ca328:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ca230;
        }
    }
L_000ca32c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x41cu);
    }
L_000ca330:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_000ca334:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x420u);
    }
L_000ca338:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x424u);
    }
L_000ca33c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_000ca340:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000ca344:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_000ca348:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000ca34c:;
    {
        cpu->r[14] = 0x000ca350u; fn_00096b88(cpu);
    }
L_000ca350:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ca354:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ca370;
        }
    }
L_000ca358:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_000ca35c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_000ca360:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_000ca364:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000ca368:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[14]);
    }
L_000ca36c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_000ca370:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ca374:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[1], 0x000000f8u, 0, 0);
    }
L_000ca378:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ca37c:;
    {
        cpu->r[14] = 0x000ca380u; fn_00153600(cpu);
    }
L_000ca380:;
    {
        cpu->r[3] = rd32(0x000ca388u + - 0xb0u);
    }
L_000ca384:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000ca388:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ca38c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ca390:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ca8b8;
        }
    }
L_000ca394:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_000ca398:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000ca39c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00064000u, 0, 0);
    }
L_000ca3a0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000180u, 0, 0);
    }
L_000ca3a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000c4u, 0, 0);
    }
L_000ca3a8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000ca3ac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ca3b0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000ca3b4:;
    {
        wr32(cpu->r[13] + + 0x104u, cpu->r[3]);
    }
L_000ca3b8:;
    {
        cpu->r[14] = 0x000ca3bcu; fn_00153624(cpu);
    }
L_000ca3bc:;
    {
        cpu->r[3] = rd32(0x000ca3c4u + - 0xe8u);
    }
L_000ca3c0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000ca3c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ca3c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ca3cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ca6ec;
        }
    }
L_000ca3d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_000ca3d4:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000ca3d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cab28;
        }
    }
L_000ca3dc:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000ca3e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ca3e4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000ca3e8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000ca3ec:;
    {
        cpu->r[14] = 0x000ca3f0u; fn_00096b88(cpu);
    }
L_000ca3f0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ca3f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ca3f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cab70;
        }
    }
L_000ca3fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ca400:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000118u, 0, 0);
    }
L_000ca404:;
    {
        cpu->r[14] = 0x000ca408u; fn_001685f8(cpu);
    }
L_000ca408:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000ca40c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000ca410:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000ca414:;
    {
        cpu->r[14] = 0x000ca418u; fn_00096b6c(cpu);
    }
L_000ca418:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ca41c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cab98;
        }
    }
L_000ca420:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000ca424:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_000ca428:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ca42c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000ca430:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ca434:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[3]);
    }
L_000ca438:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000ca43c:;
    {
        cpu->r[14] = 0x000ca440u; fn_001535e0(cpu);
    }
L_000ca440:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ca444:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ca448:;
    {
        wr32(cpu->r[13] + + 0xc0u, cpu->r[3]);
    }
L_000ca44c:;
    {
        cpu->r[14] = 0x000ca450u; fn_001535e0(cpu);
    }
L_000ca450:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ca454:;
    {
        cpu->r[14] = 0x000ca458u; fn_00153600(cpu);
    }
L_000ca458:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000ca45c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ca460:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000ca464:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000ca468:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ca46c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x4248u << 16);
    }
L_000ca470:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000ca474:;
    {
        cpu->r[14] = 0x000ca478u; fn_0015364c(cpu);
    }
L_000ca478:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x124u);
    }
L_000ca47c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000ca480:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ca488u + - 0x1a4u);
    }
L_000ca484:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x118u);
    }
L_000ca488:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x120u);
    }
L_000ca48c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000108u, 0, 0);
    }
L_000ca490:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000ca494:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000ca498:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000ca49c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x11cu);
    }
L_000ca4a0:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000ca4a4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000ca4a8:;
    {
        vfp_vmul(cpu, 11, 12, 15);
    }
L_000ca4ac:;
    {
        vfp_vmul(cpu, 12, 13, 15);
    }
L_000ca4b0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,11);
    }
L_000ca4b4:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_000ca4b8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000ca4bc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000ca4c0:;
    {
        cpu->r[14] = 0x000ca4c4u; fn_00155ab4(cpu);
    }
L_000ca4c4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ca4c8:;
    {
        cpu->r[14] = 0x000ca4ccu; fn_00153600(cpu);
    }
L_000ca4cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x108u);
    }
L_000ca4d0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x114u);
    }
L_000ca4d4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ca4d8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10cu);
    }
L_000ca4dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x110u);
    }
L_000ca4e0:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ca4e4:;
    {
        cpu->r[14] = 0x000ca4e8u; fn_00153678(cpu);
    }
L_000ca4e8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ca4ec:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000ca4f0:;
    {
        cpu->r[14] = 0x000ca4f4u; fn_001534f0(cpu);
    }
L_000ca4f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ca4f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ca4fc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ca500:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000ca504:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000ca508:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xc248u << 16);
    }
L_000ca50c:;
    {
        cpu->r[14] = 0x000ca510u; fn_0015364c(cpu);
    }
L_000ca510:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000ca514:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ca518:;
    {
        cpu->r[14] = 0x000ca51cu; fn_00153478(cpu);
    }
L_000ca51c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ca520:;
    {
        cpu->r[14] = 0x000ca524u; fn_00153600(cpu);
    }
L_000ca524:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ca528:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ca52c:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000ca530:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000ca534:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000ca538:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ca53c:;
    {
        cpu->r[14] = 0x000ca540u; fn_00153678(cpu);
    }
L_000ca540:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ca544:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000ca548:;
    {
        cpu->r[14] = 0x000ca54cu; fn_00153478(cpu);
    }
L_000ca54c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ca550:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ca554:;
    {
        cpu->r[14] = 0x000ca558u; fn_00153478(cpu);
    }
L_000ca558:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x480u);
    }
L_000ca55c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000ca560:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000ca564:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ca568:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xf0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ca56c:;
    {
        cpu->r[14] = 0x000ca570u; fn_000b2bc8(cpu);
    }
L_000ca570:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ca574:;
    {
        cpu->r[14] = 0x000ca578u; fn_000b2bc8(cpu);
    }
L_000ca578:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1f8u);
    }
L_000ca57c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000ca580:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ca6ec;
        }
    }
L_000ca584:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_000ca588:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000118u, 0, 0);
    }
L_000ca58c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ca590:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000ca594:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000ca598:;
    {
        cpu->r[14] = 0x000ca59cu; fn_00167e08(cpu);
    }
L_000ca59c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ca5a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ca5a4:;
    {
        wr32(cpu->r[13] + + 0xc0u, cpu->r[3]);
    }
L_000ca5a8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000ca5ac:;
    {
        cpu->r[14] = 0x000ca5b0u; fn_001535e0(cpu);
    }
L_000ca5b0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ca5b4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ca5b8:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[3]);
    }
L_000ca5bc:;
    {
        cpu->r[14] = 0x000ca5c0u; fn_001535e0(cpu);
    }
L_000ca5c0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ca5c4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000ca5c8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000ca5cc:;
    {
        cpu->r[14] = 0x000ca5d0u; fn_00153600(cpu);
    }
L_000ca5d0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ca5d4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ca5d8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ca5dc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x4248u << 16);
    }
L_000ca5e0:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000ca5e4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000ca5e8:;
    {
        cpu->r[14] = 0x000ca5ecu; fn_0015364c(cpu);
    }
L_000ca5ec:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x124u);
    }
L_000ca5f0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000ca5f4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ca5fcu + - 0x318u);
    }
L_000ca5f8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x118u);
    }
L_000ca5fc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x120u);
    }
L_000ca600:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000108u, 0, 0);
    }
L_000ca604:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000ca608:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000ca60c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000ca610:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x11cu);
    }
L_000ca614:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000ca618:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000ca61c:;
    {
        vfp_vmul(cpu, 11, 12, 15);
    }
L_000ca620:;
    {
        vfp_vmul(cpu, 12, 13, 15);
    }
L_000ca624:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,11);
    }
L_000ca628:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_000ca62c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000ca630:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000ca634:;
    {
        cpu->r[14] = 0x000ca638u; fn_00155ab4(cpu);
    }
L_000ca638:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ca63c:;
    {
        cpu->r[14] = 0x000ca640u; fn_00153600(cpu);
    }
L_000ca640:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10cu);
    }
L_000ca644:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x110u);
    }
L_000ca648:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ca64c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x108u);
    }
L_000ca650:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x114u);
    }
L_000ca654:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ca658:;
    {
        cpu->r[14] = 0x000ca65cu; fn_00153678(cpu);
    }
L_000ca65c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ca660:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000ca664:;
    {
        cpu->r[14] = 0x000ca668u; fn_001534f0(cpu);
    }
L_000ca668:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ca66c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ca670:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ca674:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000ca678:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000ca67c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xc248u << 16);
    }
L_000ca680:;
    {
        cpu->r[14] = 0x000ca684u; fn_0015364c(cpu);
    }
L_000ca684:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000ca688:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ca68c:;
    {
        cpu->r[14] = 0x000ca690u; fn_00153478(cpu);
    }
L_000ca690:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ca694:;
    {
        cpu->r[14] = 0x000ca698u; fn_00153600(cpu);
    }
L_000ca698:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ca69c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ca6a0:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000ca6a4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000ca6a8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000ca6ac:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ca6b0:;
    {
        cpu->r[14] = 0x000ca6b4u; fn_00153678(cpu);
    }
L_000ca6b4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ca6b8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000ca6bc:;
    {
        cpu->r[14] = 0x000ca6c0u; fn_00153478(cpu);
    }
L_000ca6c0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ca6c4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ca6c8:;
    {
        cpu->r[14] = 0x000ca6ccu; fn_00153478(cpu);
    }
L_000ca6cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x480u);
    }
L_000ca6d0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000ca6d4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000ca6d8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ca6dc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xf0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ca6e0:;
    {
        cpu->r[14] = 0x000ca6e4u; fn_000b2bc8(cpu);
    }
L_000ca6e4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ca6e8:;
    {
        cpu->r[14] = 0x000ca6ecu; fn_000b2bc8(cpu);
    }
L_000ca6ec:;
    {
        cpu->r[3] = rd32(0x000ca6f4u + - 0x414u);
    }
L_000ca6f0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xf0u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ca6f4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000ca6f8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ca6fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ca700:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ca784;
        }
    }
L_000ca704:;
    {
        cpu->r[3] = 0x00008dd8u;
    }
L_000ca708:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000ca70c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ca710:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000ca714:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_000ca718:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00008ddcu;
        }
    }
L_000ca71c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008dd4u;
        }
    }
L_000ca720:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000ca724:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000ca728:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
        }
    }
L_000ca72c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
        }
    }
L_000ca730:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
        }
    }
L_000ca734:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000ca738:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
        }
    }
L_000ca73c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000ca740:;
    {
        cpu->r[14] = 0x000ca744u; fn_00153624(cpu);
    }
L_000ca744:;
    {
        cpu->r[3] = 0x00008e68u;
    }
L_000ca748:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ca74c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ca750:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000ca754:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_000ca758:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00008e6cu;
        }
    }
L_000ca75c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008e64u;
        }
    }
L_000ca760:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000ca764:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
        }
    }
L_000ca768:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
        }
    }
L_000ca76c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[8] = add_flags(cpu, cpu->r[3], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
        }
    }
L_000ca770:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000ca774:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
        }
    }
L_000ca778:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[8] = add_flags(cpu, cpu->r[2], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
        }
    }
L_000ca77c:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000ca780:;
    {
        cpu->r[14] = 0x000ca784u; fn_00153624(cpu);
    }
L_000ca784:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_000ca788:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000ca78c:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000ca790:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000ca794:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ca798:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ca7f8;
        }
    }
L_000ca79c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_000ca7a0:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[12];
    }
L_000ca7a4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000ca7a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_000ca7ac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_000ca7b0:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_000ca7b4:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[1];
    }
L_000ca7b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000400u, 0, 0);
    }
L_000ca7bc:;
    {
        wr32(cpu->r[4] + + 0x420u, cpu->r[0]);
    }
L_000ca7c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000ca7c4:;
    {
        wr32(cpu->r[4] + + 0x424u, cpu->r[1]);
    }
L_000ca7c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000003f8u, 0, 0);
    }
L_000ca7cc:;
    {
        wr32(cpu->r[4] + + 0x41cu, cpu->r[12]);
    }
L_000ca7d0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ca7d4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000ca7d8:;
    {
        wr32(cpu->r[4] + + 0x404u, cpu->r[0]);
    }
L_000ca7dc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000ca7e0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000ca7e4:;
    {
        wr32(cpu->r[4] + + 0x408u, cpu->r[0]);
    }
L_000ca7e8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ca7ec:;
    {
        wr32(cpu->r[4] + + 0x40cu, cpu->r[1]);
    }
L_000ca7f0:;
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
L_000ca7f4:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000ca7f8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x104u);
    }
L_000ca7fc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000ca800:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ca814;
        }
    }
L_000ca804:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ca808:;
    {
        cpu->r[14] = 0x000ca80cu; fn_000b2bc8(cpu);
    }
L_000ca80c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ca810:;
    {
        cpu->r[14] = 0x000ca814u; fn_0018ba20(cpu);
    }
L_000ca814:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000016cu, 0, 0);
    }
L_000ca818:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000ca81c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ca820u)) return;
    }
L_000ca820:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ca824:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000164u, 0, 0);
    }
L_000ca828:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000160u, 0, 0);
    }
L_000ca82c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000015cu, 0, 0);
    }
L_000ca830:;
    {
        cpu->r[14] = 0x000ca834u; fn_00179388(cpu);
    }
L_000ca834:;
    {
        goto L_000c9e98;
    }
L_000ca838:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ca83c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000164u, 0, 0);
    }
L_000ca840:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000160u, 0, 0);
    }
L_000ca844:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000015cu, 0, 0);
    }
L_000ca848:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000158u, 0, 0);
    }
L_000ca84c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ca850:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000154u, 0, 0);
    }
L_000ca854:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ca858:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000150u, 0, 0);
    }
L_000ca85c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000ca860:;
    {
        cpu->r[14] = 0x000ca864u; fn_00172c70(cpu);
    }
L_000ca864:;
    {
        goto L_000c9e84;
    }
L_000ca868:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ca86c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000ca870:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000164u, 0, 0);
    }
L_000ca874:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000015cu, 0, 0);
    }
L_000ca878:;
    {
        cpu->r[14] = 0x000ca87cu; fn_000bf0b0(cpu);
    }
L_000ca87c:;
    {
        goto L_000ca14c;
    }
L_000ca880:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ca884:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ca888:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000164u, 0, 0);
    }
L_000ca88c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000160u, 0, 0);
    }
L_000ca890:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000015cu, 0, 0);
    }
L_000ca894:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_000ca898:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_000ca89c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000ca8a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000134u, 0, 0);
    }
L_000ca8a4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ca8a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000014cu, 0, 0);
    }
L_000ca8ac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ca8b0:;
    {
        cpu->r[14] = 0x000ca8b4u; fn_0015e4f4(cpu);
    }
L_000ca8b4:;
    {
        goto L_000ca138;
    }
L_000ca8b8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x160u);
    }
L_000ca8bc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000ca8c0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000ca8c8u + + 0x2e4u);
    }
L_000ca8c4:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000ca8ccu + + 0x2e4u);
    }
L_000ca8c8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ca8cc:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000ca8d0:;
    {
        vfp_vmul(cpu, 12, 15, 17);
    }
L_000ca8d4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000ca8d8:;
    {
        cpu->r[14] = 0x000ca8dcu; fn_00154350(cpu);
    }
L_000ca8dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x518u);
    }
L_000ca8e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ca8e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ca9d0;
        }
    }
L_000ca8e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x164u);
    }
L_000ca8ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ca8f0:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_000ca8f4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000ca8f8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000ca8fc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000180u, 0, 0);
    }
L_000ca900:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ca904:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000ca908:;
    {
        vfp_vmul(cpu, 11, 15, 17);
    }
L_000ca90c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,11);
    }
L_000ca910:;
    {
        cpu->r[14] = 0x000ca914u; fn_00154734(cpu);
    }
L_000ca914:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ca918:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000ca91c:;
    {
        cpu->r[14] = 0x000ca920u; fn_00153624(cpu);
    }
L_000ca920:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ca924:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ca928:;
    {
        cpu->r[14] = 0x000ca92cu; fn_00153478(cpu);
    }
L_000ca92c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x15cu);
    }
L_000ca930:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000ca934:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ca93cu + + 0x270u);
    }
L_000ca938:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ca93c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_000ca940:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000ca944:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ca94cu + + 0x264u);
    }
L_000ca948:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_000ca94c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000ca950:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000ca954:;
    {
        cpu->r[14] = 0x000ca958u; fn_00154514(cpu);
    }
L_000ca958:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ca95c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000ca960:;
    {
        cpu->r[14] = 0x000ca964u; fn_00153478(cpu);
    }
L_000ca964:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_000ca968:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x138u);
    }
L_000ca96c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ca970:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_000ca974:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[0];
    }
L_000ca978:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000ca97c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ca980:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,18);
    }
L_000ca984:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000ca988:;
    {
        vfp_vadd(cpu, 15, 16, 15);
    }
L_000ca98c:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_000ca990:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ca994:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000ca998:;
    {
        cpu->r[14] = 0x000ca99cu; fn_0015364c(cpu);
    }
L_000ca99c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x138u);
    }
L_000ca9a0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000ca9a4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000ca9a8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,18);
    }
L_000ca9ac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ca9b0:;
    {
        vfp_vadd(cpu, 15, 16, 15);
    }
L_000ca9b4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ca9b8:;
    {
        cpu->r[14] = 0x000ca9bcu; fn_0015364c(cpu);
    }
L_000ca9bc:;
    {
        goto L_000ca3a4;
    }
L_000ca9c0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x498u);
    }
L_000ca9c4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000ca9c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000001u;
        }
    }
L_000ca9cc:;
    {
        goto L_000c9e70;
    }
L_000ca9d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ca9d4:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000ca9d8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000180u, 0, 0);
    }
L_000ca9dc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ca9e0:;
    {
        cpu->r[14] = 0x000ca9e4u; fn_00153624(cpu);
    }
L_000ca9e4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ca9e8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ca9ec:;
    {
        cpu->r[14] = 0x000ca9f0u; fn_00153478(cpu);
    }
L_000ca9f0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x164u);
    }
L_000ca9f4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ca9f8:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_000ca9fc:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000caa00:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000caa04:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000caa08:;
    {
        vfp_vmul(cpu, 11, 15, 17);
    }
L_000caa0c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,11);
    }
L_000caa10:;
    {
        cpu->r[14] = 0x000caa14u; fn_00154734(cpu);
    }
L_000caa14:;
    {
        goto L_000ca92c;
    }
L_000caa18:;
    {
        cpu->r[14] = 0x000caa1cu; fn_00096348(cpu);
    }
L_000caa1c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x164u);
    }
L_000caa20:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[13] + + 0x160u);
    }
L_000caa24:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x15cu);
    }
L_000caa28:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000caa2c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x000caa34u + + 0x180u);
    }
L_000caa30:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4] + + 0x78u);
    }
L_000caa34:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x7cu);
    }
L_000caa38:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[4] + + 0x80u);
    }
L_000caa3c:;
    {
        cpu->r[3] = 0x0000850cu;
    }
L_000caa40:;
    {
        *vfp_s(cpu,8) = (float)*(int32_t*)vfp_s(cpu,8);
    }
L_000caa44:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000caa48:;
    {
        *vfp_s(cpu,10) = (float)*(int32_t*)vfp_s(cpu,10);
    }
L_000caa4c:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000caa50:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000caa54:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000caa58:;
    {
        vfp_vsub(cpu, 12, 12, 15);
    }
L_000caa5c:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_000caa60:;
    {
        vfp_vmul(cpu, 13, 15, 13);
    }
L_000caa64:;
    {
        vfp_vmul(cpu, 15, 15, 8);
    }
L_000caa68:;
    {
        *vfp_s(cpu,9) = (float)*(int32_t*)vfp_s(cpu,9);
    }
L_000caa6c:;
    {
        vfp_vmla(cpu, 13, 10, 12);
    }
L_000caa70:;
    {
        vfp_vmla(cpu, 14, 12, 9);
    }
L_000caa74:;
    {
        vfp_vmla(cpu, 15, 12, 11);
    }
L_000caa78:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000caa7c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000caa80:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x164u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000caa84:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000caa88:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x160u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000caa8c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x15cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000caa90:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000caa94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000caa98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ca17c;
        }
    }
L_000caa9c:;
    {
        goto L_000ca18c;
    }
L_000caaa0:;
    {
        cpu->r[14] = 0x000caaa4u; fn_00096348(cpu);
    }
L_000caaa4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x164u);
    }
L_000caaa8:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[13] + + 0x160u);
    }
L_000caaac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x15cu);
    }
L_000caab0:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000caab4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x000caabcu + + 0xf8u);
    }
L_000caab8:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4] + + 0x6cu);
    }
L_000caabc:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x70u);
    }
L_000caac0:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[4] + + 0x74u);
    }
L_000caac4:;
    {
        cpu->r[3] = 0x0000850cu;
    }
L_000caac8:;
    {
        *vfp_s(cpu,8) = (float)*(int32_t*)vfp_s(cpu,8);
    }
L_000caacc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000caad0:;
    {
        *vfp_s(cpu,10) = (float)*(int32_t*)vfp_s(cpu,10);
    }
L_000caad4:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000caad8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000caadc:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000caae0:;
    {
        vfp_vsub(cpu, 12, 12, 15);
    }
L_000caae4:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_000caae8:;
    {
        vfp_vmul(cpu, 13, 15, 13);
    }
L_000caaec:;
    {
        vfp_vmul(cpu, 15, 15, 8);
    }
L_000caaf0:;
    {
        *vfp_s(cpu,9) = (float)*(int32_t*)vfp_s(cpu,9);
    }
L_000caaf4:;
    {
        vfp_vmla(cpu, 13, 10, 12);
    }
L_000caaf8:;
    {
        vfp_vmla(cpu, 14, 12, 9);
    }
L_000caafc:;
    {
        vfp_vmla(cpu, 15, 12, 11);
    }
L_000cab00:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000cab04:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000cab08:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x164u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000cab0c:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000cab10:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x160u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cab14:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x15cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000cab18:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000cab1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000cab20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c9ecc;
        }
    }
L_000cab24:;
    {
        goto L_000c9edc;
    }
L_000cab28:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x498u);
    }
L_000cab2c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000cab30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ca3dc;
        }
    }
L_000cab34:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000cab38:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cab3c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000cab40:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000cab44:;
    {
        cpu->r[14] = 0x000cab48u; fn_00096b88(cpu);
    }
L_000cab48:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cab4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cab50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ca578;
        }
    }
L_000cab54:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000cab58:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000cab5c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000cab60:;
    {
        cpu->r[14] = 0x000cab64u; fn_00099548(cpu);
    }
L_000cab64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cab68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ca578;
        }
    }
L_000cab6c:;
    {
        goto L_000ca3dc;
    }
L_000cab70:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000cab74:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000cab78:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000cab7c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000cab80:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cab84:;
    {
        cpu->r[14] = 0x000cab88u; fn_00099560(cpu);
    }
L_000cab88:;
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
L_000cab8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000118u, 0, 0);
    }
L_000cab90:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_000cab94:;
    {
        goto L_000ca408;
    }
L_000cab98:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000cab9c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000caba0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000caba4:;
    {
        cpu->r[14] = 0x000caba8u; fn_00099554(cpu);
    }
L_000caba8:;
    {
        goto L_000ca420;
    }
}

/* _ZN5Scene19InterpolateGhostCarEif @ 000cabb8 (arm) */
void fn_000cabb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000cabb8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000cabbc:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_000cabc0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000070u, 1, 0);
    }
L_000cabc4:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_000cabc8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000060u, 0, 0);
    }
L_000cabcc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000cabd0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000cabd4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000cabd8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000cabdc:;
    {
        cpu->r[14] = 0x000cabe0u; fn_00155a80(cpu);
    }
L_000cabe0:;
    {
        cpu->r[2] = 0x00000580u;
    }
L_000cabe4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[6], 2, 4u, &shc), 0, 0);
    }
L_000cabe8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0003u << 16);
    }
L_000cabec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00003040u, 0, 0);
    }
L_000cabf0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_000cabf4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000cabf8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00003040u, 0, 0);
    }
L_000cabfc:;
    {
        cpu->r[3] = 0x0000057cu;
    }
L_000cac00:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000017u, 0, 0);
    }
L_000cac04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000017u, 0, 0);
    }
L_000cac08:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0003u << 16);
    }
L_000cac0c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], shifter(cpu->r[7], 2, 4u, &shc), 0, 0);
    }
L_000cac10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_000cac14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_000cac18:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000cac1c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[3], 0, 0);
    }
L_000cac20:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2]);
    }
L_000cac24:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[14]);
    }
L_000cac28:;
    {
        vfp_vsub(cpu, 11, 11, 15);
    }
L_000cac2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_000cac30:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_000cac34:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_000cac38:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000cac3c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000cac40:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_000cac44:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000cac48:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_000cac4c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_000cac50:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000cac54:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000cac58:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_000cac5c:;
    {
        vfp_vsub(cpu, 8, 8, 12);
    }
L_000cac60:;
    {
        vfp_vsub(cpu, 9, 9, 13);
    }
L_000cac64:;
    {
        vfp_vsub(cpu, 10, 10, 14);
    }
L_000cac68:;
    {
        vfp_vmla(cpu, 12, 8, 16);
    }
L_000cac6c:;
    {
        vfp_vmla(cpu, 13, 9, 16);
    }
L_000cac70:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000cac74:;
    {
        vfp_vmla(cpu, 14, 10, 16);
    }
L_000cac78:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000cac7c:;
    {
        vfp_vmla(cpu, 15, 11, 16);
    }
L_000cac80:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000cac84:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cac88:;
    {
        cpu->r[14] = 0x000cac8cu; fn_00156008(cpu);
    }
L_000cac8c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000cac90:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000cac94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000cac98:;
    {
        cpu->r[14] = 0x000cac9cu; fn_00155b68(cpu);
    }
L_000cac9c:;
    {
        cpu->r[2] = 0x00002474u;
    }
L_000caca0:;
    {
        cpu->r[3] = 0x00002478u;
    }
L_000caca4:;
    {
        cpu->r[1] = 0x0000247cu;
    }
L_000caca8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0002u << 16);
    }
L_000cacac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0002u << 16);
    }
L_000cacb0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0002u << 16);
    }
L_000cacb4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], cpu->r[2], 0, 0);
    }
L_000cacb8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12]);
    }
L_000cacbc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], cpu->r[1], 0, 0);
    }
L_000cacc0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_000cacc4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000cacc8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[7]);
    }
L_000caccc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000cacd0:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_000cacd4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[12]);
    }
L_000cacd8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_000cacdc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_000cace0:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[1]);
    }
L_000cace4:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[2]);
    }
L_000cace8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cacec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cacf0:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_000cacf4:;
    {
        vfp_vsub(cpu, 12, 12, 18);
    }
L_000cacf8:;
    {
        vfp_vsub(cpu, 13, 13, 17);
    }
L_000cacfc:;
    {
        vfp_vmla(cpu, 15, 14, 16);
    }
L_000cad00:;
    {
        vfp_vmla(cpu, 18, 12, 16);
    }
L_000cad04:;
    {
        vfp_vmla(cpu, 17, 13, 16);
    }
L_000cad08:;
    {
        *vfp_s(cpu,16) = *vfp_s(cpu,15);
    }
L_000cad0c:;
    {
        cpu->r[14] = 0x000cad10u; fn_001535e0(cpu);
    }
L_000cad10:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cad14:;
    {
        cpu->r[14] = 0x000cad18u; fn_00153600(cpu);
    }
L_000cad18:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x60u);
    }
L_000cad1c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x64u);
    }
L_000cad20:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cad24:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x68u);
    }
L_000cad28:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x6cu);
    }
L_000cad2c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cad30:;
    {
        cpu->r[14] = 0x000cad34u; fn_00153678(cpu);
    }
L_000cad34:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000cad38:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,18);
    }
L_000cad3c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cad40:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000cad44:;
    {
        cpu->r[14] = 0x000cad48u; fn_0015364c(cpu);
    }
L_000cad48:;
    {
        cpu->r[3] = 0x00001d04u;
    }
L_000cad4c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cad50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000040u, 0, 0);
    }
L_000cad54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cad58:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_000cad5c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cad60:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_000cad64:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cad68:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_000cad6c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cad70:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_000cad74:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_000cad78:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000cad7c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000cad80:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x10u;
        wr32(cpu->r[3] + + 0x10u, cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_000cad84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cad58;
        }
    }
L_000cad88:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000cad8c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000cad90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cada4;
        }
    }
L_000cad94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000cad98:;
    {
        cpu->r[14] = 0x000cad9cu; fn_000b2bc8(cpu);
    }
L_000cad9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000cada0:;
    {
        cpu->r[14] = 0x000cada4u; fn_0018ba20(cpu);
    }
L_000cada4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_000cada8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000cadac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000cadb0u)) return;
    }
}

/* _ZN5Scene13PreRenderCarsEv @ 000cadb0 (arm) */
void fn_000cadb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000cadb0:;
    {
        cpu->r[1] = rd32(0x000cadb8u + + 0x54cu);
    }
L_000cadb4:;
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
L_000cadb8:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000cadbc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_000cadc0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000cadc4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000cadc8:;
    {
        cpu->r[14] = 0x000cadccu; fn_000b9d74(cpu);
    }
L_000cadcc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cadd0:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000cadd4:;
    {
        cpu->r[1] = rd32(0x000caddcu + + 0x52cu);
    }
L_000cadd8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000caddc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000cade4u, cpu->r[2], 0, 0);
    }
L_000cade0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000cade4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cade8:;
    {
        cpu->r[2] = 0x00008cc4u;
    }
L_000cadec:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cadf0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cadf4:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_000cadf8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000cadfc:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000cae00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000cae04:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cae08:;
    {
        cpu->r[2] = 0x00001314u;
    }
L_000cae0c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000cae10:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000cae14:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000cae18:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cb51c;
        }
    }
L_000cae1c:;
    {
        cpu->r[0] = rd32(0x000cae24u + + 0x4e8u);
    }
L_000cae20:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000cae24:;
    {
        cpu->r[1] = rd32(0x000cae2cu + + 0x4e4u);
    }
L_000cae28:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_000cae2c:;
    {
        cpu->r[2] = rd32(0x000cae34u + + 0x4e0u);
    }
L_000cae30:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000cae34:;
    {
        cpu->r[1] = add_flags(cpu, 0x000cae3cu, cpu->r[1], 0, 0);
    }
L_000cae38:;
    {
        cpu->r[0] = rd32(0x000cae40u + + 0x4d8u);
    }
L_000cae3c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000cae44u, cpu->r[2], 0, 0);
    }
L_000cae40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000278u, 0, 0);
    }
L_000cae44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000268u, 0, 0);
    }
L_000cae48:;
    {
        cpu->r[0] = add_flags(cpu, 0x000cae50u, cpu->r[0], 0, 0);
    }
L_000cae4c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_000cae50:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_000cae54:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000cae58:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cae5c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00008cc0u;
        }
    }
L_000cae60:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00008cb8u;
        }
    }
L_000cae64:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cae68:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cae6c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000cae70:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000cae74:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000cae78:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000cae7c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
        }
    }
L_000cae80:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000cae84:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cae88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cb4f0;
        }
    }
L_000cae8c:;
    {
        cpu->r[2] = 0x00001cecu;
    }
L_000cae90:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cae94:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000cae98:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000cae9c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00001ce8u;
        }
    }
L_000caea0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00001cf0u;
        }
    }
L_000caea4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000caea8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000caeac:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
        }
    }
L_000caeb0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000caeb4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
        }
    }
L_000caeb8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
        }
    }
L_000caebc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000caec0:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000caec4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000caec8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cb4f0;
        }
    }
L_000caecc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000caed0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cb74c;
        }
    }
L_000caed4:;
    {
        cpu->r[2] = 0x00008cc0u;
    }
L_000caed8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_000caedc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000caee0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000caee4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000caee8:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_000caeec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000caef0:;
    {
        cpu->r[14] = 0x000caef4u; fn_0015d920(cpu);
    }
L_000caef4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000caef8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000caefc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x354u);
    }
L_000caf00:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000caf04:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000caf08:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000caf0c:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000caf10:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000caf14:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x418u);
    }
L_000caf18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_000caf1c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_000caf20:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000caf24:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000caf28:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000caf30u + + 0x3d0u);
    }
L_000caf2c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000caf30:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000caf34:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000caf38:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_000caf3c:;
    {
        cpu->r[14] = 0x000caf44u;
    }
L_000caf40:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000caf44u)) return;
    }
L_000caf44:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000caf48:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000caf4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000caf50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000caf54:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00001cf0u;
        }
    }
L_000caf58:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000caf5c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000caf60:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000caf64:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000caf68:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000caf6c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
        }
    }
L_000caf70:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[1]);
        }
    }
L_000caf74:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000caf78:;
    {
        cpu->r[3] = 0x00008dd8u;
    }
L_000caf7c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000caf80:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000caf84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000caf88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000caf8c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000caf90:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00008ddcu;
        }
    }
L_000caf94:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00008dd4u;
        }
    }
L_000caf98:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000caf9c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cafa0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000cafa4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000cafa8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000cafac:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000cafb0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
        }
    }
L_000cafb4:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000cafb8:;
    {
        cpu->r[14] = 0x000cafbcu; fn_00153624(cpu);
    }
L_000cafbc:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000cafc0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cafc4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000cafc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cafcc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cafd0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00001cf0u;
        }
    }
L_000cafd4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000cafd8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cafdc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000cafe0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000cafe4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
        }
    }
L_000cafe8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cafec:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000caff0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000caff4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000caff8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000c60u, 0, 0);
    }
L_000caffc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000cb000:;
    {
        cpu->r[14] = 0x000cb004u; fn_00153624(cpu);
    }
L_000cb004:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000cb008:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb00c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb010:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cb014:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00001cf0u;
        }
    }
L_000cb018:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000cb01c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000cb020:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb024:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000cb028:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb02c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
        }
    }
L_000cb030:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[1]);
        }
    }
L_000cb034:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000cb038:;
    {
        cpu->r[3] = 0x00008e68u;
    }
L_000cb03c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb040:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000cb044:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb048:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000c60u, 0, 0);
    }
L_000cb04c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cb050:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000cb054:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00008e6cu;
        }
    }
L_000cb058:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00008e64u;
        }
    }
L_000cb05c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb060:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb064:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000cb068:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000cb06c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000cb070:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000cb074:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
        }
    }
L_000cb078:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000cb07c:;
    {
        cpu->r[14] = 0x000cb080u; fn_00153478(cpu);
    }
L_000cb080:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000cb084:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb088:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb08c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cb090:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00001cf0u;
        }
    }
L_000cb094:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000cb098:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000cb09c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb0a0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000cb0a4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb0a8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
        }
    }
L_000cb0ac:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[1]);
        }
    }
L_000cb0b0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000cb0b4:;
    {
        cpu->r[3] = 0x00008e68u;
    }
L_000cb0b8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb0bc:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000cb0c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb0c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000cb0u, 0, 0);
    }
L_000cb0c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cb0cc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00008e6cu;
        }
    }
L_000cb0d0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00008e64u;
        }
    }
L_000cb0d4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb0d8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb0dc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000cb0e0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000cb0e4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000cb0e8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000cb0ec:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
        }
    }
L_000cb0f0:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000cb0f4:;
    {
        cpu->r[14] = 0x000cb0f8u; fn_00153624(cpu);
    }
L_000cb0f8:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000cb0fc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb100:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb104:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cb108:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000cb10c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00001cf0u;
        }
    }
L_000cb110:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb114:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000cb118:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000cb11c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
        }
    }
L_000cb120:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb124:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000cb128:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000cb12c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000cb130:;
    {
        cpu->r[14] = 0x000cb134u; fn_000ea4dc(cpu);
    }
L_000cb134:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000cb138:;
    {
        cpu->r[14] = 0x000cb13cu; fn_0015d95c(cpu);
    }
L_000cb13c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cb140:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cb184;
        }
    }
L_000cb144:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000cb148:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb14c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb150:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cb154:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00001cf0u;
        }
    }
L_000cb158:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000cb15c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb160:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb164:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000cb168:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000cb16c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000cb170:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000cb174:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cb178:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
        }
    }
L_000cb17c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cb180:;
    {
        wr8(cpu->r[3] + + 0x178u, cpu->r[2]);
    }
L_000cb184:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000cb188:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000cb18c:;
    {
        { uint32_t v = cpu->r[3] & 0x00100000u; set_nz(cpu, v); }
    }
L_000cb190:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cb1d4;
        }
    }
L_000cb194:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000cb198:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb19c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb1a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cb1a4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00001cf0u;
        }
    }
L_000cb1a8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000cb1ac:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb1b0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb1b4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000cb1b8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000cb1bc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000cb1c0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000cb1c4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cb1c8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
        }
    }
L_000cb1cc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cb1d0:;
    {
        wr8(cpu->r[3] + + 0x178u, cpu->r[2]);
    }
L_000cb1d4:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000cb1d8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb1dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb1e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000cb1e4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000cb1e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cb938;
        }
    }
L_000cb1ec:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000cb1f0:;
    {
        cpu->r[2] = 0x0000165cu;
    }
L_000cb1f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000cb1f8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000cb1fc:;
    {
        cpu->r[10] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000cb200:;
    {
        uint32_t v = cpu->r[3] & ~ 0x08000001u; cpu->r[3] = v;
    }
L_000cb204:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000cb208:;
    {
        cpu->r[14] = 0x000cb20cu; fn_0016cc4c(cpu);
    }
L_000cb20c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 3, 31u, &shc), 0, 0);
    }
L_000cb210:;
    {
        sub_flags(cpu, cpu->r[10], shifter(cpu->r[0], 1, 1u, &shc), 1, 1);
    }
L_000cb214:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
        }
    }
L_000cb218:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[14] | 0x00000001u; cpu->r[14] = v;
        }
    }
L_000cb21c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
        }
    }
L_000cb220:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cb224:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cb760;
        }
    }
L_000cb228:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000cb22c:;
    {
        cpu->r[0] = rd32(0x000cb234u + + 0xe8u);
    }
L_000cb230:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb234:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_000cb238:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000cb23c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb240:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_000cb244:;
    {
        cpu->r[2] = rd8(cpu->r[10] + + 0x524u);
    }
L_000cb248:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 1);
    }
L_000cb24c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
        }
    }
L_000cb250:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cb67c;
        }
    }
L_000cb254:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000cb258:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb25c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb260:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000cb264:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000cb268:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 1);
    }
L_000cb26c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cb244;
        }
    }
L_000cb270:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000cb274:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000cb9ac;
        }
    }
L_000cb278:;
    {
        cpu->r[2] = 0x00001cf0u;
    }
L_000cb27c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_000cb280:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cb284:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000cb288:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000cb28c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cb290:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xb5cu);
    }
L_000cb294:;
    {
        uint32_t v = cpu->r[2] | 0x00000001u; cpu->r[2] = v;
    }
L_000cb298:;
    {
        wr32(cpu->r[3] + + 0xb5cu, cpu->r[2]);
    }
L_000cb29c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1dcu);
    }
L_000cb2a0:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000cb2a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000cb2a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cb7b4;
        }
    }
L_000cb2ac:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000cb2b0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000cb2b4:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_000cb2b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cb378;
        }
    }
L_000cb2bc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cb2c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cb380;
        }
    }
L_000cb2c4:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_000cb2c8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000cb2cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cb2d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cb2e4;
        }
    }
L_000cb2d4:;
    {
        cpu->r[3] = 0x000018f4u;
    }
L_000cb2d8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000cb2dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000013u, 1, 1);
    }
L_000cb2e0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cb380;
        }
    }
L_000cb2e4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x340u);
    }
L_000cb2e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000cb2ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cb330;
        }
    }
L_000cb2f0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000cb2f4:;
    {
        { uint32_t v = cpu->r[0] & 0x00000200u; set_nz(cpu, v); }
    }
L_000cb2f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cbaf0;
        }
    }
L_000cb2fc:;
    {
        goto L_000cb330;
    }
L_000cb330:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000cb334:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb338:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb33c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cb340:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cb9c0;
        }
    }
L_000cb344:;
    {
        cpu->r[2] = 0x00001cf0u;
    }
L_000cb348:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_000cb34c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cb350:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000cb354:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000cb358:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000cb35c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000cb360:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000cb364:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cb368:;
    {
        cpu->r[12] = 0x000000ffu;
    }
L_000cb36c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000cb370:;
    {
        cpu->r[14] = 0x000cb374u; fn_000b1330(cpu);
    }
L_000cb374:;
    {
        goto L_000cb418;
    }
L_000cb378:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cb37c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cb418;
        }
    }
L_000cb380:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x2b4u);
    }
L_000cb384:;
    {
        cpu->r[2] = 0x00001658u;
    }
L_000cb388:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x2b8u);
    }
L_000cb38c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000cb390:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_000cb394:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000cb398:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 3, 31u, &shc), 0, 0);
    }
L_000cb39c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_000cb3a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000cb3a4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = 0x000000ffu;
        }
    }
L_000cb3a8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cb3bc;
        }
    }
L_000cb3ac:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_000cb3b0:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 2, 8u, &shc), cpu->r[0], 1, 0);
    }
L_000cb3b4:;
    {
        cpu->r[14] = 0x000cb3b8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000cb3b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], 0x000000ffu, 0, 0);
    }
L_000cb3bc:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000cb3c0:;
    {
        cpu->r[2] = 0x000018ecu;
    }
L_000cb3c4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb3c8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000cb3cc:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000cb3d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb3d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cb3d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x000000ffu;
        }
    }
L_000cb3dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cb3e0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000cb3e4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00001cf0u;
        }
    }
L_000cb3e8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb3ec:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb3f0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000cb3f4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000cb3f8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000cb3fc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
        }
    }
L_000cb400:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000cb404:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000cb408:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000cb40c:;
    {
        cpu->r[3] = 0x0000ffffu;
    }
L_000cb410:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000cb414:;
    {
        cpu->r[14] = 0x000cb418u; fn_000b1330(cpu);
    }
L_000cb418:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cb41c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000cb420:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000cb424:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000cb428:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000cb42c:;
    {
        cpu->r[3] = 0x00001d38u;
    }
L_000cb430:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000cb434:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_000cb438:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
    }
L_000cb43c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000cb440:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000cb444:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cb448:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cb44c:;
    {
        cpu->r[14] = 0x000cb454u;
    }
L_000cb450:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cb454u)) return;
    }
L_000cb454:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cb458:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cb498;
        }
    }
L_000cb45c:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000cb460:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb464:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb468:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cb46c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000cb470:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00001cf0u;
        }
    }
L_000cb474:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb478:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb47c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000cb480:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000cb484:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000cb488:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
        }
    }
L_000cb48c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000cb490:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000cb494:;
    {
        cpu->r[14] = 0x000cb498u; fn_000b45f0(cpu);
    }
L_000cb498:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000cb49c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb4a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb4a4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cb4a8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000cb4ac:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00001cf0u;
        }
    }
L_000cb4b0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb4b4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb4b8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000cb4bc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000cb4c0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000cb4c4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
        }
    }
L_000cb4c8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000cb4cc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000cb4d0:;
    {
        cpu->r[14] = 0x000cb4d4u; fn_000afd30(cpu);
    }
L_000cb4d4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000cb4d8:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000cb4dc:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000cb4e0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cb4e4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cb4e8:;
    {
        cpu->r[14] = 0x000cb4f0u;
    }
L_000cb4ec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cb4f0u)) return;
    }
L_000cb4f0:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000cb4f4:;
    {
        cpu->r[2] = 0x00008cc4u;
    }
L_000cb4f8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb4fc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cb500:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000cb504:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_000cb508:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb50c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000cb510:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000cb514:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000cb518:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000cae58;
        }
    }
L_000cb51c:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000cb520:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cb524:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000cb528:;
    {
        cpu->r[2] = 0x000010d0u;
    }
L_000cb52c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000cb530:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_000cb534:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cb9d4;
        }
    }
L_000cb538:;
    {
        cpu->r[3] = 0x000082a0u;
    }
L_000cb53c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb540:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb544:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cb548:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cb860;
        }
    }
L_000cb54c:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000cb550:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb554:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb558:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cb55c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cb860;
        }
    }
L_000cb560:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000cb564:;
    {
        cpu->r[7] = 0x000082c4u;
    }
L_000cb568:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000cb56c:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_000cb570:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000cb574:;
    {
        cpu->r[0] = 0x000082a8u;
    }
L_000cb578:;
    {
        cpu->r[1] = 0x000082c0u;
    }
L_000cb57c:;
    {
        cpu->r[2] = 0x00001c90u;
    }
L_000cb580:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000cb584:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000cb588:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cb58c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_000cb590:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000cb594:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000cb598:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000cb59c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cb5a0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb5a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000cb5a8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000cb5ac:;
    {
        cpu->r[8] = rd32(cpu->r[2] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000cb5b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_000cb5b4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[9], 0, 0);
    }
L_000cb5b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000040u, 0, 0);
    }
L_000cb5bc:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000cb5c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000cb5c4:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cb5c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000cb5cc:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cb5d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000cb5d4:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cb5d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_000cb5dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_000cb5e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000cb5e4:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000cb5e8:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x10u;
        wr32(cpu->r[2] + + 0x10u, cpu->r[14]);
        cpu->r[2] = wb_tmp;
    }
L_000cb5ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cb5c0;
        }
    }
L_000cb5f0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], 0x00000c60u, 0, 0);
    }
L_000cb5f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000cb5f8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000000cu, 0, 0);
    }
L_000cb5fc:;
    {
        cpu->r[14] = 0x000cb600u; fn_000ea4dc(cpu);
    }
L_000cb600:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000cb604:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000cb608:;
    {
        cpu->r[14] = 0x000cb60cu; fn_00153624(cpu);
    }
L_000cb60c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000cb610:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000cb614:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_000cb618:;
    {
        cpu->r[14] = 0x000cb61cu; fn_00153478(cpu);
    }
L_000cb61c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000cb620:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000cb0u, 0, 0);
    }
L_000cb624:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_000cb628:;
    {
        cpu->r[14] = 0x000cb62cu; fn_00153624(cpu);
    }
L_000cb62c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x1dcu);
    }
L_000cb630:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000cb634:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_000cb638:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cb928;
        }
    }
L_000cb63c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000cb640:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000cb644:;
    {
        cpu->r[14] = 0x000cb648u; fn_00096b88(cpu);
    }
L_000cb648:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cb64c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cb7fc;
        }
    }
L_000cb650:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000cb654:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cb824;
        }
    }
L_000cb658:;
    {
        cpu->r[0] = 0x000082a4u;
    }
L_000cb65c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000cb660:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000cb664:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000cb668:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000cb66c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000cb860;
        }
    }
L_000cb670:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000680u, 0, 0);
    }
L_000cb674:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000044u, 0, 0);
    }
L_000cb678:;
    {
        goto L_000cb598;
    }
L_000cb67c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cb680:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00001cf0u;
        }
    }
L_000cb684:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00001ce8u;
        }
    }
L_000cb688:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb68c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb690:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000cb694:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000cb698:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000cb69c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000cb6a0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
        }
    }
L_000cb6a4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000003u, 1, 1);
    }
L_000cb6a8:;
    {
        cpu->r[11] = rd32(cpu->r[2]);
    }
L_000cb6ac:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cb70c;
        }
    }
L_000cb6b0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], 0x0000007au, 0, 0);
    }
L_000cb6b4:;
    {
        cpu->r[11] = rd32(cpu->r[11] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_000cb6b8:;
    {
        sub_flags(cpu, cpu->r[11], 0x000004b0u, 1, 1);
    }
L_000cb6bc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000cb260;
        }
    }
L_000cb6c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cb6c4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_000cb6c8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000cb6cc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00001cf0u;
        }
    }
L_000cb6d0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb6d4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb6d8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000cb6dc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000cb6e0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000cb6e4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
        }
    }
L_000cb6e8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000cb6ec:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000003u, 1, 1);
    }
L_000cb6f0:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000cb6f4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cb7c4;
        }
    }
L_000cb6f8:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000cb6fc:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[9], 2, 2u, &shc), cpu->r[11]);
    }
L_000cb700:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb704:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb708:;
    {
        goto L_000cb260;
    }
L_000cb70c:;
    {
        cpu->r[3] = 0x0000014bu;
    }
L_000cb710:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000cb714:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000cb718:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000cb71c:;
    {
        cpu->r[1] = rd32(0x000cb724u + - 0x404u);
    }
L_000cb720:;
    {
        cpu->r[2] = rd32(0x000cb728u + - 0x404u);
    }
L_000cb724:;
    {
        cpu->r[3] = rd32(0x000cb72cu + - 0x404u);
    }
L_000cb728:;
    {
        cpu->r[1] = add_flags(cpu, 0x000cb730u, cpu->r[1], 0, 0);
    }
L_000cb72c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000cb734u, cpu->r[2], 0, 0);
    }
L_000cb730:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000cb734:;
    {
        cpu->r[3] = add_flags(cpu, 0x000cb73cu, cpu->r[3], 0, 0);
    }
L_000cb738:;
    {
        cpu->r[14] = 0x000cb73cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000cb73c:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000cb740:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb744:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb748:;
    {
        goto L_000cb6b0;
    }
L_000cb74c:;
    {
        cpu->r[3] = 0x00008cb8u;
    }
L_000cb750:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb754:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb758:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_000cb75c:;
    {
        goto L_000caee8;
    }
L_000cb760:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000cb764:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb768:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb76c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000cb770:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00001cf0u;
        }
    }
L_000cb774:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000cb778:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb77c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb780:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000cb784:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000cb788:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000cb78c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000cb790:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
        }
    }
L_000cb794:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cb798:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xb5cu);
    }
L_000cb79c:;
    {
        uint32_t v = cpu->r[2] & ~ 0x00000001u; cpu->r[2] = v;
    }
L_000cb7a0:;
    {
        wr32(cpu->r[3] + + 0xb5cu, cpu->r[2]);
    }
L_000cb7a4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1dcu);
    }
L_000cb7a8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000cb7ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000cb7b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cb2ac;
        }
    }
L_000cb7b4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x498u);
    }
L_000cb7b8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cb7bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000cb7c0:;
    {
        goto L_000cb2ac;
    }
L_000cb7c4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_000cb7c8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000cb7cc:;
    {
        cpu->r[3] = rd32(0x000cb7d4u + - 0x4a8u);
    }
L_000cb7d0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000cb7d8u, cpu->r[14], 0, 0);
    }
L_000cb7d4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000cb7d8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_000cb7dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000cb7e4u, cpu->r[3], 0, 0);
    }
L_000cb7e0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000cb7e4:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000cb7e8:;
    {
        cpu->r[14] = 0x0000014cu;
    }
L_000cb7ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000cb7f0:;
    {
        cpu->r[14] = 0x000cb7f4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000cb7f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000cb7f8:;
    {
        goto L_000cb6f8;
    }
L_000cb7fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000cb800:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000cb804:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000cb808:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000cb80c:;
    {
        cpu->r[14] = 0x000cb810u; fn_00099548(cpu);
    }
L_000cb810:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cb814:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cb824;
        }
    }
L_000cb818:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x498u);
    }
L_000cb81c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cb820:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cb658;
        }
    }
L_000cb824:;
    {
        cpu->r[1] = 0x00000400u;
    }
L_000cb828:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cb82c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000cb830:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000cb834:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x8000u << 16);
    }
L_000cb838:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4248u << 16);
    }
L_000cb83c:;
    {
        cpu->r[12] = 0x000000ffu;
    }
L_000cb840:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000cb844:;
    {
        cpu->r[14] = 0x000cb848u; fn_000b1330(cpu);
    }
L_000cb848:;
    {
        cpu->r[0] = 0x000082a4u;
    }
L_000cb84c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000cb850:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000cb854:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000cb858:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000cb85c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000cb670;
        }
    }
L_000cb860:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00018000u, 0, 0);
    }
L_000cb864:;
    {
        cpu->r[9] = 0x00008268u;
    }
L_000cb868:;
    {
        cpu->r[10] = 0x0000826cu;
    }
L_000cb86c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x000001e4u, 0, 0);
    }
L_000cb870:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000cb874:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000cb878:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_000cb87c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[11]);
    }
L_000cb880:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000cb884:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cb888:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cb8fc;
        }
    }
L_000cb88c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xcu);
    }
L_000cb890:;
    {
        cpu->r[7] = cpu->r[11];
    }
L_000cb894:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000cb898:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000cb89c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000cb8a0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_000cb8a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000cb8a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000040u, 0, 0);
    }
L_000cb8ac:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000cb8b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000cb8b4:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cb8b8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000cb8bc:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cb8c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000cb8c4:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cb8c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_000cb8cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_000cb8d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000cb8d4:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000cb8d8:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x10u;
        wr32(cpu->r[2] + + 0x10u, cpu->r[12]);
        cpu->r[2] = wb_tmp;
    }
L_000cb8dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cb8b0;
        }
    }
L_000cb8e0:;
    {
        cpu->r[14] = 0x000cb8e4u; fn_000ea4dc(cpu);
    }
L_000cb8e4:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000cb8e8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000cb8ec:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000cb8f0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cb8f4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000044u, 0, 0);
    }
L_000cb8f8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cb898;
        }
    }
L_000cb8fc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x000002a8u, 0, 0);
    }
L_000cb900:;
    {
        cpu->r[0] = 0x000007f8u;
    }
L_000cb904:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000cb908:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[0], 1, 1);
    }
L_000cb90c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_000cb910:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000028u, 0, 0);
    }
L_000cb914:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_000cb918:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cb880;
        }
    }
L_000cb91c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000cb920:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000cb924:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000cb928u)) return;
    }
L_000cb928:;
    {
        cpu->r[11] = rd32(cpu->r[10] + + 0x498u);
    }
L_000cb92c:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000cb930:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_000cb934:;
    {
        goto L_000cb63c;
    }
L_000cb938:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000cb93c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb940:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb944:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cb948:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cb1ec;
        }
    }
L_000cb94c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x15cu);
    }
L_000cb950:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000cb954:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cb1ec;
        }
    }
L_000cb958:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x354u);
    }
L_000cb95c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000cb960:;
    {
        vfp_sync_flags(cpu);
    }
L_000cb964:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000cbacc;
        }
    }
L_000cb968:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000cb96c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb970:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb974:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cb978:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00001cf0u;
        }
    }
L_000cb97c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000cb980:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb984:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb988:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000cb98c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000cb990:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000cb994:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000cb998:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cb99c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
        }
    }
L_000cb9a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cb9a4:;
    {
        wr8(cpu->r[3] + + 0x178u, cpu->r[2]);
    }
L_000cb9a8:;
    {
        goto L_000cb1ec;
    }
L_000cb9ac:;
    {
        cpu->r[3] = 0x00001ce8u;
    }
L_000cb9b0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb9b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb9b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_000cb9bc:;
    {
        goto L_000cb28c;
    }
L_000cb9c0:;
    {
        cpu->r[3] = 0x00001ce8u;
    }
L_000cb9c4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cb9c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cb9cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_000cb9d0:;
    {
        goto L_000cb358;
    }
L_000cb9d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cb9d8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00008cc0u;
        }
    }
L_000cb9dc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000cb9e0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb9e4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cb9e8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000cb9ec:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000cb9f0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 1, 0);
        }
    }
L_000cb9f4:;
    {
        cpu->r[2] = 0x00001684u;
    }
L_000cb9f8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cb9fc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000cba00:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cba04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cb538;
        }
    }
L_000cba08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001640u, 0, 0);
    }
L_000cba0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000034u, 0, 0);
    }
L_000cba10:;
    {
        cpu->r[14] = 0x000cba14u; fn_0015d718(cpu);
    }
L_000cba14:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x0001d800u, 0, 0);
    }
L_000cba18:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cba1c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000174u, 0, 0);
    }
L_000cba20:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000cba24:;
    {
        goto L_000cba34;
    }
L_000cba28:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000cba2c:;
    {
        sub_flags(cpu, cpu->r[2], 0x000012c0u, 1, 1);
    }
L_000cba30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cba60;
        }
    }
L_000cba34:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000cba38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000cba3c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000cba40:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000cba28;
        }
    }
L_000cba44:;
    {
        cpu->r[1] = 0x00003e7cu;
    }
L_000cba48:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000cba4c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000cba50:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_000cba54:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_000cba58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_000cba5c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
        }
    }
L_000cba60:;
    {
        cpu->r[2] = 0x00003e7cu;
    }
L_000cba64:;
    {
        cpu->r[5] = 0x00001d04u;
    }
L_000cba68:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cba6c:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cba70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000cba74:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000cba78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00007600u, 0, 0);
    }
L_000cba7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000cba80:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000cba84:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x178u);
    }
L_000cba88:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x174u);
    }
L_000cba8c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_000cba90:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_000cba94:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[12];
    }
L_000cba98:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_000cba9c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000cbaa0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000cbaa4:;
    {
        vfp_vdiv(cpu, 13, 14, 15);
    }
L_000cbaa8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000cbaac:;
    {
        cpu->r[14] = 0x000cbab0u; fn_000cabb8(cpu);
    }
L_000cbab0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cbab4:;
    {
        cpu->r[14] = 0x000cbab8u; fn_000ea4dc(cpu);
    }
L_000cbab8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cbabc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xb5cu);
    }
L_000cbac0:;
    {
        uint32_t v = cpu->r[2] | 0x00000001u; cpu->r[2] = v;
    }
L_000cbac4:;
    {
        wr32(cpu->r[3] + + 0xb5cu, cpu->r[2]);
    }
L_000cbac8:;
    {
        goto L_000cb538;
    }
L_000cbacc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x2b0u);
    }
L_000cbad0:;
    {
        cpu->r[0] = 0x0000001eu;
    }
L_000cbad4:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_000cbad8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_000cbadc:;
    {
        cpu->r[14] = 0x000cbae0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000cbae0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x364u);
    }
L_000cbae4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000cbae8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000cb1ec;
        }
    }
L_000cbaec:;
    {
        goto L_000cb968;
    }
L_000cbaf0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000cbaf4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000cbaf8:;
    {
        cpu->r[14] = 0x000cbb00u;
    }
L_000cbafc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cbb00u)) return;
    }
L_000cbb00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cbb04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cb330;
        }
    }
L_000cbb08:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000cbb0c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000cbb10:;
    {
        cpu->r[14] = 0x000cbb18u;
    }
L_000cbb14:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cbb18u)) return;
    }
L_000cbb18:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000031u, 1, 1);
    }
L_000cbb1c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cb330;
        }
    }
L_000cbb20:;
    {
        goto L_000cb380;
    }
}

/* _ZN5SceneD1Ev @ 000cbb24 (arm) */
void fn_000cbb24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000cbb24:;
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
L_000cbb28:;
    {
        cpu->r[5] = 0x00008c6cu;
    }
L_000cbb2c:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cbb30:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000cbb34:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000cbb38:;
    {
        cpu->r[1] = rd32(0x000cbb40u + + 0xe9cu);
    }
L_000cbb3c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_000cbb40:;
    {
        cpu->r[1] = add_flags(cpu, 0x000cbb48u, cpu->r[1], 0, 0);
    }
L_000cbb44:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_000cbb48:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cbb4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbb5c;
        }
    }
L_000cbb50:;
    {
        cpu->r[14] = 0x000cbb54u; fn_0018ba60(cpu);
    }
L_000cbb54:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cbb58:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cbb5c:;
    {
        cpu->r[5] = 0x00008c70u;
    }
L_000cbb60:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cbb64:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cbb68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cbb6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbb7c;
        }
    }
L_000cbb70:;
    {
        cpu->r[14] = 0x000cbb74u; fn_0018ba60(cpu);
    }
L_000cbb74:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cbb78:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cbb7c:;
    {
        cpu->r[6] = 0x00001c60u;
    }
L_000cbb80:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000cbb84:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000cbb88:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cbb8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbc08;
        }
    }
L_000cbb90:;
    {
        cpu->r[7] = 0x00001c64u;
    }
L_000cbb94:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000cbb98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000cbb9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cbba0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cbbf0;
        }
    }
L_000cbba4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000cbba8:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_000cbbac:;
    {
        goto L_000cbbb4;
    }
L_000cbbb0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000cbbb4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000cbbb8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cbbbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbbd8;
        }
    }
L_000cbbc0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cbbc4:;
    {
        cpu->r[14] = 0x000cbbccu;
    }
L_000cbbc8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cbbccu)) return;
    }
L_000cbbcc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000cbbd0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000cbbd4:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[8]);
    }
L_000cbbd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000cbbdc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000cbbe0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cbbe4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cbbb0;
        }
    }
L_000cbbe8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cbbec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbbf8;
        }
    }
L_000cbbf0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000cbbf4:;
    {
        cpu->r[14] = 0x000cbbf8u; fn_0018ba60(cpu);
    }
L_000cbbf8:;
    {
        cpu->r[3] = 0x00001c60u;
    }
L_000cbbfc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cbc00:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cbc04:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000cbc08:;
    {
        cpu->r[7] = 0x000087b4u;
    }
L_000cbc0c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000cbc10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000cbc14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cbc18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbc94;
        }
    }
L_000cbc1c:;
    {
        cpu->r[8] = 0x00008450u;
    }
L_000cbc20:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000cbc24:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000cbc28:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cbc2c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cbc7c;
        }
    }
L_000cbc30:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000cbc34:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_000cbc38:;
    {
        goto L_000cbc40;
    }
L_000cbc3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000cbc40:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000cbc44:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cbc48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbc64;
        }
    }
L_000cbc4c:;
    {
        cpu->r[14] = 0x000cbc50u; fn_00135120(cpu);
    }
L_000cbc50:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cbc54:;
    {
        cpu->r[14] = 0x000cbc58u; fn_0018ba20(cpu);
    }
L_000cbc58:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000cbc5c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000cbc60:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[10]);
    }
L_000cbc64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000cbc68:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000cbc6c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000cbc70:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cbc3c;
        }
    }
L_000cbc74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cbc78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbc84;
        }
    }
L_000cbc7c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cbc80:;
    {
        cpu->r[14] = 0x000cbc84u; fn_0018ba60(cpu);
    }
L_000cbc84:;
    {
        cpu->r[3] = 0x000087b4u;
    }
L_000cbc88:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cbc8c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cbc90:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000cbc94:;
    {
        cpu->r[3] = 0x00001c70u;
    }
L_000cbc98:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cbc9c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cbca0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000cbca4:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000cbd9c;
        }
    }
L_000cbca8:;
    {
        cpu->r[9] = rd32(0x000cbcb0u + + 0xd30u);
    }
L_000cbcac:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[6] = v;
    }
L_000cbcb0:;
    {
        cpu->r[7] = rd32(0x000cbcb8u + + 0xd2cu);
    }
L_000cbcb4:;
    {
        cpu->r[8] = rd32(0x000cbcbcu + + 0xd2cu);
    }
L_000cbcb8:;
    {
        cpu->r[9] = add_flags(cpu, 0x000cbcc0u, cpu->r[9], 0, 0);
    }
L_000cbcbc:;
    {
        cpu->r[11] = rd32(0x000cbcc4u + + 0xd28u);
    }
L_000cbcc0:;
    {
        cpu->r[7] = add_flags(cpu, 0x000cbcc8u, cpu->r[7], 0, 0);
    }
L_000cbcc4:;
    {
        cpu->r[8] = add_flags(cpu, 0x000cbcccu, cpu->r[8], 0, 0);
    }
L_000cbcc8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x000001fcu, 0, 0);
    }
L_000cbccc:;
    {
        cpu->r[11] = add_flags(cpu, 0x000cbcd4u, cpu->r[11], 0, 0);
    }
L_000cbcd0:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_000cbcd4:;
    {
        goto L_000cbd30;
    }
L_000cbcd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cbcdc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000cbce0:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000cbce4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000cbce8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cbd88;
        }
    }
L_000cbcec:;
    {
        cpu->r[3] = 0x00001c70u;
    }
L_000cbcf0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cbcf4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cbcf8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000cbcfc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000cbd00:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000cbd04:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_000cbd08:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_000cbd0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbd1c;
        }
    }
L_000cbd10:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000cbd14:;
    {
        cpu->r[14] = 0x000cbd1cu;
    }
L_000cbd18:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cbd1cu)) return;
    }
L_000cbd1c:;
    {
        add_flags(cpu, cpu->r[5], 0x00000001u, 0, 1);
    }
L_000cbd20:;
    {
        cpu->r[3] = 0x00001c70u;
    }
L_000cbd24:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cbd28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbd9c;
        }
    }
L_000cbd2c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cbd30:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000cbd34:;
    {
        cpu->r[3] = 0x00001c68u;
    }
L_000cbd38:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cbd3c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000cbcd8;
        }
    }
L_000cbd40:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000cbd44:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000cbd48:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000cbd4c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000cbd50:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_000cbd54:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000cbd58:;
    {
        cpu->r[14] = 0x000cbd5cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000cbd5c:;
    {
        cpu->r[2] = 0x00001c70u;
    }
L_000cbd60:;
    {
        cpu->r[3] = 0x00001c68u;
    }
L_000cbd64:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cbd68:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cbd6c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000cbd70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cbd74:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000cbd78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000cbd7c:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000cbd80:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000cbd00;
        }
    }
L_000cbd84:;
    {
        goto L_000cbce4;
    }
L_000cbd88:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000cbd8c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_000cbd90:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000cbd94:;
    {
        cpu->r[14] = 0x000cbd98u; imp_memcpy(cpu); /* memcpy */
    }
L_000cbd98:;
    {
        goto L_000cbcec;
    }
L_000cbd9c:;
    {
        cpu->r[5] = 0x00001c68u;
    }
L_000cbda0:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cbda4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cbda8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cbdac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbdd4;
        }
    }
L_000cbdb0:;
    {
        cpu->r[14] = 0x000cbdb4u; fn_0018ba60(cpu);
    }
L_000cbdb4:;
    {
        cpu->r[3] = 0x00001c6cu;
    }
L_000cbdb8:;
    {
        cpu->r[1] = 0x00001c70u;
    }
L_000cbdbc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cbdc0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000cbdc4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cbdc8:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[2]);
    }
L_000cbdcc:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_000cbdd0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000cbdd4:;
    {
        cpu->r[5] = 0x00001c98u;
    }
L_000cbdd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000cbddc:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cbde0:;
    {
        cpu->r[14] = 0x000cbde4u; fn_000bc350(cpu);
    }
L_000cbde4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cbde8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cbdec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbe08;
        }
    }
L_000cbdf0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cbdf4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cbdf8:;
    {
        cpu->r[14] = 0x000cbe00u;
    }
L_000cbdfc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cbe00u)) return;
    }
L_000cbe00:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cbe04:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cbe08:;
    {
        cpu->r[5] = 0x00001c9cu;
    }
L_000cbe0c:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cbe10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cbe14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cbe18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbe34;
        }
    }
L_000cbe1c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cbe20:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cbe24:;
    {
        cpu->r[14] = 0x000cbe2cu;
    }
L_000cbe28:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cbe2cu)) return;
    }
L_000cbe2c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cbe30:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cbe34:;
    {
        cpu->r[5] = 0x000042d0u;
    }
L_000cbe38:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000cbe3c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cbe40:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cbe44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbe60;
        }
    }
L_000cbe48:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cbe4c:;
    {
        cpu->r[14] = 0x000cbe50u; fn_00187010(cpu);
    }
L_000cbe50:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cbe54:;
    {
        cpu->r[14] = 0x000cbe58u; fn_0018ba20(cpu);
    }
L_000cbe58:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cbe5c:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cbe60:;
    {
        cpu->r[5] = 0x00001c54u;
    }
L_000cbe64:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cbe68:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cbe6c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cbe70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbe8c;
        }
    }
L_000cbe74:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cbe78:;
    {
        cpu->r[14] = 0x000cbe7cu; fn_0015bacc(cpu);
    }
L_000cbe7c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cbe80:;
    {
        cpu->r[14] = 0x000cbe84u; fn_0018ba20(cpu);
    }
L_000cbe84:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cbe88:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cbe8c:;
    {
        cpu->r[5] = 0x00008824u;
    }
L_000cbe90:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cbe94:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cbe98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cbe9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbeac;
        }
    }
L_000cbea0:;
    {
        cpu->r[14] = 0x000cbea4u; fn_0018ba60(cpu);
    }
L_000cbea4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cbea8:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cbeac:;
    {
        cpu->r[5] = 0x00008828u;
    }
L_000cbeb0:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cbeb4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cbeb8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cbebc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbecc;
        }
    }
L_000cbec0:;
    {
        cpu->r[14] = 0x000cbec4u; fn_0018ba60(cpu);
    }
L_000cbec4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cbec8:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cbecc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cbed0:;
    {
        cpu->r[12] = 0x00001ce8u;
    }
L_000cbed4:;
    {
        cpu->r[0] = 0x00001cecu;
    }
L_000cbed8:;
    {
        cpu->r[1] = 0x00001cf0u;
    }
L_000cbedc:;
    {
        cpu->r[2] = 0x00001cf4u;
    }
L_000cbee0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00011c00u, 0, 0);
    }
L_000cbee4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000cbee8:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000cbeec:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000cbef0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cbef4:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000cbef8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[8], 0x000000a8u, 0, 0);
    }
L_000cbefc:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000cbf00:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[3]);
    }
L_000cbf04:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_000cbf08:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000cbf0c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000cbf10:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000cbf14:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000cbf18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cbf1c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cbf20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbf34;
        }
    }
L_000cbf24:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cbf28:;
    {
        cpu->r[14] = 0x000cbf30u;
    }
L_000cbf2c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cbf30u)) return;
    }
L_000cbf30:;
    {
        wr32(cpu->r[5], cpu->r[7]);
    }
L_000cbf34:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_000cbf38:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000cbf3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cbf10;
        }
    }
L_000cbf40:;
    {
        cpu->r[2] = rd32(0x000cbf48u + + 0xaa8u);
    }
L_000cbf44:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000cbf48:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000cbf4c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000cbf50:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000cbf54:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000cbf58:;
    {
        cpu->r[6] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000cbf5c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cbf60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cbf9c;
        }
    }
L_000cbf64:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[8], 0x000000c8u, 0, 0);
    }
L_000cbf68:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_000cbf6c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000cbf70:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000cbf74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cbf78:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cbf7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbf90;
        }
    }
L_000cbf80:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cbf84:;
    {
        cpu->r[14] = 0x000cbf8cu;
    }
L_000cbf88:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cbf8cu)) return;
    }
L_000cbf8c:;
    {
        wr32(cpu->r[5], cpu->r[7]);
    }
L_000cbf90:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000007u, 1, 1);
    }
L_000cbf94:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000cbf98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cbf6c;
        }
    }
L_000cbf9c:;
    {
        cpu->r[6] = 0x00008444u;
    }
L_000cbfa0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000cbfa4:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000cbfa8:;
    {
        cpu->r[3] = 0x00001d00u;
    }
L_000cbfac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cbfb0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000cbfb4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000cbfb8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000cbfbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc034;
        }
    }
L_000cbfc0:;
    {
        cpu->r[7] = 0x00008448u;
    }
L_000cbfc4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000cbfc8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000cbfcc:;
    {
        cpu->r[14] = 0x000cbfd0u; fn_0018b9ac(cpu);
    }
L_000cbfd0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000cbfd4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cbfd8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cc00c;
        }
    }
L_000cbfdc:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_000cbfe0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000cbfe4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000cbfe8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cbfec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cbffc;
        }
    }
L_000cbff0:;
    {
        cpu->r[14] = 0x000cbff4u; fn_0018ba20(cpu);
    }
L_000cbff4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000cbff8:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[8]);
    }
L_000cbffc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000cc000:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000cc004:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cc008:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cbfe0;
        }
    }
L_000cc00c:;
    {
        cpu->r[5] = 0x00008444u;
    }
L_000cc010:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000cc014:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cc018:;
    {
        cpu->r[14] = 0x000cc01cu; fn_0018b9ac(cpu);
    }
L_000cc01c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cc020:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cc024:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc034;
        }
    }
L_000cc028:;
    {
        cpu->r[14] = 0x000cc02cu; fn_0018ba60(cpu);
    }
L_000cc02c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cc030:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cc034:;
    {
        cpu->r[5] = 0x0000844cu;
    }
L_000cc038:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cc03c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cc040:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cc044:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc054;
        }
    }
L_000cc048:;
    {
        cpu->r[14] = 0x000cc04cu; fn_0018ba60(cpu);
    }
L_000cc04c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cc050:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cc054:;
    {
        cpu->r[5] = 0x00008c50u;
    }
L_000cc058:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cc05c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cc060:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cc064:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc080;
        }
    }
L_000cc068:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cc06c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cc070:;
    {
        cpu->r[14] = 0x000cc078u;
    }
L_000cc074:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cc078u)) return;
    }
L_000cc078:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cc07c:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cc080:;
    {
        cpu->r[5] = 0x00008c54u;
    }
L_000cc084:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cc088:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cc08c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cc090:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc0ac;
        }
    }
L_000cc094:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc098:;
    {
        cpu->r[14] = 0x000cc09cu; fn_000b80bc(cpu);
    }
L_000cc09c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc0a0:;
    {
        cpu->r[14] = 0x000cc0a4u; fn_0018ba20(cpu);
    }
L_000cc0a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cc0a8:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cc0ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000cc0b0:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000cc0b4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x0000007cu, 0, 0);
    }
L_000cc0b8:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000cc0bc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000cc0c0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000cc0c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cc0c8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cc0cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc0e0;
        }
    }
L_000cc0d0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cc0d4:;
    {
        cpu->r[14] = 0x000cc0dcu;
    }
L_000cc0d8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cc0dcu)) return;
    }
L_000cc0dc:;
    {
        wr32(cpu->r[6], cpu->r[8]);
    }
L_000cc0e0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000008u, 1, 1);
    }
L_000cc0e4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000cc0e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cc0bc;
        }
    }
L_000cc0ec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000cc0f0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000cc0f4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000cc0f8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000cc0fc:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000cc100:;
    {
        cpu->r[7] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000cc104:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000cc108:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cc1ec;
        }
    }
L_000cc10c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x0000009cu, 0, 0);
    }
L_000cc110:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000cc114:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000cc118:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000cc11c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cc120:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cc124:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc138;
        }
    }
L_000cc128:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cc12c:;
    {
        cpu->r[14] = 0x000cc134u;
    }
L_000cc130:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cc134u)) return;
    }
L_000cc134:;
    {
        wr32(cpu->r[6], cpu->r[8]);
    }
L_000cc138:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000007u, 1, 1);
    }
L_000cc13c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000cc140:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cc114;
        }
    }
L_000cc144:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000cc148:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000cc14c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000cc150:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000cc154:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000cc158:;
    {
        cpu->r[8] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000cc15c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000cc160:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00000248u, 0, 0);
        }
    }
L_000cc164:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = cpu->r[8];
        }
    }
L_000cc168:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cc1ec;
        }
    }
L_000cc16c:;
    {
        cpu->r[7] = rd32(cpu->r[6]);
    }
L_000cc170:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000cc174:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000cc178:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc1a8;
        }
    }
L_000cc17c:;
    {
        cpu->r[10] = rd32(cpu->r[7] + + 0x40u);
    }
L_000cc180:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000cc184:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000cc188:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc19c;
        }
    }
L_000cc18c:;
    {
        cpu->r[14] = 0x000cc190u; fn_000b2bc8(cpu);
    }
L_000cc190:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000cc194:;
    {
        cpu->r[14] = 0x000cc198u; fn_0018ba20(cpu);
    }
L_000cc198:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[9]);
    }
L_000cc19c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000cc1a0:;
    {
        cpu->r[14] = 0x000cc1a4u; fn_0018ba20(cpu);
    }
L_000cc1a4:;
    {
        wr32(cpu->r[6], cpu->r[9]);
    }
L_000cc1a8:;
    {
        cpu->r[7] = rd32(cpu->r[6] + - 0x90u);
    }
L_000cc1ac:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000cc1b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc1e0;
        }
    }
L_000cc1b4:;
    {
        cpu->r[10] = rd32(cpu->r[7] + + 0x40u);
    }
L_000cc1b8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000cc1bc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000cc1c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc1d4;
        }
    }
L_000cc1c4:;
    {
        cpu->r[14] = 0x000cc1c8u; fn_000b2bc8(cpu);
    }
L_000cc1c8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000cc1cc:;
    {
        cpu->r[14] = 0x000cc1d0u; fn_0018ba20(cpu);
    }
L_000cc1d0:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[9]);
    }
L_000cc1d4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000cc1d8:;
    {
        cpu->r[14] = 0x000cc1dcu; fn_0018ba20(cpu);
    }
L_000cc1dc:;
    {
        wr32(cpu->r[6] + - 0x90u, cpu->r[9]);
    }
L_000cc1e0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000007u, 1, 1);
    }
L_000cc1e4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000cc1e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cc16c;
        }
    }
L_000cc1ec:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000cc1f0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000198u, 0, 0);
    }
L_000cc1f4:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_000cc1f8:;
    {
        cpu->r[6] = rd32(cpu->r[5]);
    }
L_000cc1fc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000cc200:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cc204:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc234;
        }
    }
L_000cc208:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x40u);
    }
L_000cc20c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000cc210:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000cc214:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc228;
        }
    }
L_000cc218:;
    {
        cpu->r[14] = 0x000cc21cu; fn_000b2bc8(cpu);
    }
L_000cc21c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000cc220:;
    {
        cpu->r[14] = 0x000cc224u; fn_0018ba20(cpu);
    }
L_000cc224:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[10]);
    }
L_000cc228:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc22c:;
    {
        cpu->r[14] = 0x000cc230u; fn_0018ba20(cpu);
    }
L_000cc230:;
    {
        wr32(cpu->r[5], cpu->r[10]);
    }
L_000cc234:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x90u);
    }
L_000cc238:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cc23c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc26c;
        }
    }
L_000cc240:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x40u);
    }
L_000cc244:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000cc248:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000cc24c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc260;
        }
    }
L_000cc250:;
    {
        cpu->r[14] = 0x000cc254u; fn_000b2bc8(cpu);
    }
L_000cc254:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000cc258:;
    {
        cpu->r[14] = 0x000cc25cu; fn_0018ba20(cpu);
    }
L_000cc25c:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[10]);
    }
L_000cc260:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc264:;
    {
        cpu->r[14] = 0x000cc268u; fn_0018ba20(cpu);
    }
L_000cc268:;
    {
        wr32(cpu->r[5] + + 0x90u, cpu->r[10]);
    }
L_000cc26c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000008u, 1, 1);
    }
L_000cc270:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000cc274:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cc1f8;
        }
    }
L_000cc278:;
    {
        cpu->r[6] = 0x00004274u;
    }
L_000cc27c:;
    {
        cpu->r[10] = 0x00008e64u;
    }
L_000cc280:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0006u << 16);
    }
L_000cc284:;
    {
        cpu->r[8] = 0x00008e68u;
    }
L_000cc288:;
    {
        cpu->r[7] = 0x00008e6cu;
    }
L_000cc28c:;
    {
        cpu->r[14] = 0x00008e70u;
    }
L_000cc290:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000cc294:;
    {
        cpu->r[12] = 0x00008dd4u;
    }
L_000cc298:;
    {
        cpu->r[1] = 0x00008dd8u;
    }
L_000cc29c:;
    {
        cpu->r[2] = 0x00008ddcu;
    }
L_000cc2a0:;
    {
        cpu->r[3] = 0x00008de0u;
    }
L_000cc2a4:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000cc2a8:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000cc2ac:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000cc2b0:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_000cc2b4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000cc2b8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000cc2bc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cc2c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cc2c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cc2c8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000cc2cc:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[5]);
    }
L_000cc2d0:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[5]);
    }
L_000cc2d4:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[5]);
    }
L_000cc2d8:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[5]);
    }
L_000cc2dc:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[5]);
    }
L_000cc2e0:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[5]);
    }
L_000cc2e4:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_000cc2e8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000cc2ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc2f8;
        }
    }
L_000cc2f0:;
    {
        cpu->r[14] = 0x000cc2f4u; fn_0018ba60(cpu);
    }
L_000cc2f4:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[5]);
    }
L_000cc2f8:;
    {
        cpu->r[2] = 0x00004278u;
    }
L_000cc2fc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000cc300:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cc304:;
    {
        cpu->r[3] = 0x00004270u;
    }
L_000cc308:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cc30c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000cc310:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000cc314:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[5], 1, 1);
    }
L_000cc318:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cc9bc;
        }
    }
L_000cc31c:;
    {
        cpu->r[3] = 0x0000427cu;
    }
L_000cc320:;
    {
        cpu->r[9] = rd32(0x000cc328u + + 0x6ccu);
    }
L_000cc324:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cc328:;
    {
        cpu->r[11] = rd32(0x000cc330u + + 0x6c8u);
    }
L_000cc32c:;
    {
        cpu->r[10] = rd32(0x000cc334u + + 0x6c8u);
    }
L_000cc330:;
    {
        cpu->r[9] = add_flags(cpu, 0x000cc338u, cpu->r[9], 0, 0);
    }
L_000cc334:;
    {
        cpu->r[11] = add_flags(cpu, 0x000cc33cu, cpu->r[11], 0, 0);
    }
L_000cc338:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cc33c:;
    {
        cpu->r[8] = rd32(0x000cc344u + + 0x6bcu);
    }
L_000cc340:;
    {
        cpu->r[10] = add_flags(cpu, 0x000cc348u, cpu->r[10], 0, 0);
    }
L_000cc344:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000068u, 0, 0);
    }
L_000cc348:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000068u, 0, 0);
    }
L_000cc34c:;
    {
        cpu->r[12] = rd32(cpu->r[7] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000cc350:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000cc354:;
    {
        cpu->r[1] = rd32(0x000cc35cu + + 0x6a8u);
    }
L_000cc358:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[6] = v;
    }
L_000cc35c:;
    {
        cpu->r[2] = rd32(0x000cc364u + + 0x6a4u);
    }
L_000cc360:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000cc364:;
    {
        cpu->r[3] = rd32(0x000cc36cu + + 0x6a0u);
    }
L_000cc368:;
    {
        cpu->r[1] = add_flags(cpu, 0x000cc370u, cpu->r[1], 0, 0);
    }
L_000cc36c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000cc374u, cpu->r[2], 0, 0);
    }
L_000cc370:;
    {
        cpu->r[3] = add_flags(cpu, 0x000cc378u, cpu->r[3], 0, 0);
    }
L_000cc374:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc40c;
        }
    }
L_000cc378:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[5], 1, 1);
    }
L_000cc37c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cc3a4;
        }
    }
L_000cc380:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000cc384:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000cc388:;
    {
        cpu->r[14] = 0x000cc38cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000cc38c:;
    {
        cpu->r[3] = 0x0000427cu;
    }
L_000cc390:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cc394:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cc398:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000cc39c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000cc3a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc3b4;
        }
    }
L_000cc3a4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000cc3a8:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_000cc3ac:;
    {
        cpu->r[14] = 0x000cc3b4u;
    }
L_000cc3b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cc3b4u)) return;
    }
L_000cc3b4:;
    {
        cpu->r[12] = 0x00004278u;
    }
L_000cc3b8:;
    {
        cpu->r[3] = rd32(0x000cc3c0u + + 0x650u);
    }
L_000cc3bc:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000cc3c0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000cc3c4:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000cc3c8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000cc3d0u, cpu->r[8], 0, 0);
    }
L_000cc3cc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000cc3d0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000cc3d8u, cpu->r[3], 0, 0);
    }
L_000cc3d4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[5], 1, 1);
    }
L_000cc3d8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cc3e8;
        }
    }
L_000cc3dc:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000cc3e0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000cc3e4:;
    {
        cpu->r[14] = 0x000cc3e8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000cc3e8:;
    {
        cpu->r[2] = 0x0000427cu;
    }
L_000cc3ec:;
    {
        cpu->r[3] = 0x00004278u;
    }
L_000cc3f0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cc3f4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cc3f8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000cc3fc:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cc400:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cc404:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000cc408:;
    {
        wr32(cpu->r[2] + cpu->r[6], cpu->r[3]);
    }
L_000cc40c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000cc410:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[5], 1, 1);
    }
L_000cc414:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cc34c;
        }
    }
L_000cc418:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000cc41c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc438;
        }
    }
L_000cc420:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000cc424:;
    {
        cpu->r[14] = 0x000cc428u; fn_0018ba60(cpu);
    }
L_000cc428:;
    {
        cpu->r[3] = 0x0000427cu;
    }
L_000cc42c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cc430:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cc434:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000cc438:;
    {
        cpu->r[5] = 0x00008818u;
    }
L_000cc43c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000cc440:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cc444:;
    {
        cpu->r[2] = 0x00004278u;
    }
L_000cc448:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cc44c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cc450:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[6]);
    }
L_000cc454:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000cc458:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc470;
        }
    }
L_000cc45c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cc460:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cc464:;
    {
        cpu->r[14] = 0x000cc46cu;
    }
L_000cc468:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cc46cu)) return;
    }
L_000cc46c:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[6]);
    }
L_000cc470:;
    {
        cpu->r[5] = 0x00001c50u;
    }
L_000cc474:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cc478:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cc47c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cc480:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc49c;
        }
    }
L_000cc484:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc488:;
    {
        cpu->r[14] = 0x000cc48cu; fn_000b8fc8(cpu);
    }
L_000cc48c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc490:;
    {
        cpu->r[14] = 0x000cc494u; fn_0018ba20(cpu);
    }
L_000cc494:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cc498:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cc49c:;
    {
        cpu->r[5] = 0x00001d04u;
    }
L_000cc4a0:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cc4a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cc4a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cc4ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc4c8;
        }
    }
L_000cc4b0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cc4b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cc4b8:;
    {
        cpu->r[14] = 0x000cc4c0u;
    }
L_000cc4bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cc4c0u)) return;
    }
L_000cc4c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cc4c4:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cc4c8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000cc4cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000cc4d0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000cc4d4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000cc4d8:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000cc4dc:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000cc4e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cc4e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc9b0;
        }
    }
L_000cc4e8:;
    {
        cpu->r[3] = 0x000082a0u;
    }
L_000cc4ec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cc4f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cc4f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cc4f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc5f0;
        }
    }
L_000cc4fc:;
    {
        cpu->r[6] = 0x0000829cu;
    }
L_000cc500:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000cc504:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000cc508:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cc50c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cc9cc;
        }
    }
L_000cc510:;
    {
        cpu->r[3] = 0x000082c0u;
    }
L_000cc514:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000cc518:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cc51c:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_000cc520:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_000cc524:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cc528:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000cc52c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cc530:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc54c;
        }
    }
L_000cc534:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cc538:;
    {
        cpu->r[14] = 0x000cc540u;
    }
L_000cc53c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cc540u)) return;
    }
L_000cc540:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000cc544:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000cc548:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[7]);
    }
L_000cc54c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000cc550:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000cc554:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cc558:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cc528;
        }
    }
L_000cc55c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cc560:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc57c;
        }
    }
L_000cc564:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000cc568:;
    {
        cpu->r[14] = 0x000cc56cu; fn_0018ba60(cpu);
    }
L_000cc56c:;
    {
        cpu->r[3] = 0x000082c0u;
    }
L_000cc570:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cc574:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cc578:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000cc57c:;
    {
        cpu->r[7] = 0x000082c4u;
    }
L_000cc580:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000cc584:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000cc588:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cc58c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc5e8;
        }
    }
L_000cc590:;
    {
        cpu->r[5] = rd32(cpu->r[0] + - 0x4u);
    }
L_000cc594:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000cc598:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 4u, &shc), 0, 0);
    }
L_000cc59c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000cc5a0:;
    {
        goto L_000cc5c8;
    }
L_000cc5a4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + - 0x4u);
    }
L_000cc5a8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cc5ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc5c0;
        }
    }
L_000cc5b0:;
    {
        cpu->r[14] = 0x000cc5b4u; fn_000b2bc8(cpu);
    }
L_000cc5b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc5b8:;
    {
        cpu->r[14] = 0x000cc5bcu; fn_0018ba20(cpu);
    }
L_000cc5bc:;
    {
        wr32(cpu->r[5] + - 0x4u, cpu->r[8]);
    }
L_000cc5c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000cc5c4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000044u, 1, 0);
    }
L_000cc5c8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_000cc5cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cc5a4;
        }
    }
L_000cc5d0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_000cc5d4:;
    {
        cpu->r[14] = 0x000cc5d8u; fn_0018ba60(cpu);
    }
L_000cc5d8:;
    {
        cpu->r[3] = 0x000082c4u;
    }
L_000cc5dc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cc5e0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cc5e4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000cc5e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000cc5ec:;
    {
        cpu->r[14] = 0x000cc5f0u; fn_000e8a4c(cpu);
    }
L_000cc5f0:;
    {
        cpu->r[5] = 0x000043dcu;
    }
L_000cc5f4:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000cc5f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cc5fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cc600:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc610;
        }
    }
L_000cc604:;
    {
        cpu->r[14] = 0x000cc608u; fn_0018ba20(cpu);
    }
L_000cc608:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cc60c:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cc610:;
    {
        cpu->r[5] = 0x000043e0u;
    }
L_000cc614:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000cc618:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cc61c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cc620:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc630;
        }
    }
L_000cc624:;
    {
        cpu->r[14] = 0x000cc628u; fn_0018ba20(cpu);
    }
L_000cc628:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cc62c:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cc630:;
    {
        cpu->r[5] = 0x0000a414u;
    }
L_000cc634:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000cc638:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cc63c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cc640:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc65c;
        }
    }
L_000cc644:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc648:;
    {
        cpu->r[14] = 0x000cc64cu; fn_0018781c(cpu);
    }
L_000cc64c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc650:;
    {
        cpu->r[14] = 0x000cc654u; fn_0018ba20(cpu);
    }
L_000cc654:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cc658:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cc65c:;
    {
        cpu->r[5] = 0x00008190u;
    }
L_000cc660:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cc664:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cc668:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cc66c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc688;
        }
    }
L_000cc670:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc674:;
    {
        cpu->r[14] = 0x000cc678u; fn_000b687c(cpu);
    }
L_000cc678:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc67c:;
    {
        cpu->r[14] = 0x000cc680u; fn_0018ba20(cpu);
    }
L_000cc680:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cc684:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cc688:;
    {
        cpu->r[8] = 0x000081bcu;
    }
L_000cc68c:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000cc690:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000cc694:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cc698:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x00018000u, 0, 0);
        }
    }
L_000cc69c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cc6e4;
        }
    }
L_000cc6a0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x00018000u, 0, 0);
    }
L_000cc6a4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000cc6a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[10], 0x00000194u, 0, 0);
    }
L_000cc6ac:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_000cc6b0:;
    {
        cpu->r[6] = rd32(cpu->r[5]);
    }
L_000cc6b4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000cc6b8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cc6bc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc6c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc6d4;
        }
    }
L_000cc6c4:;
    {
        cpu->r[14] = 0x000cc6c8u; fn_000b68a4(cpu);
    }
L_000cc6c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc6cc:;
    {
        cpu->r[14] = 0x000cc6d0u; fn_0018ba20(cpu);
    }
L_000cc6d0:;
    {
        wr32(cpu->r[5], cpu->r[9]);
    }
L_000cc6d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000cc6d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000cc6dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000cc6e0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cc6b0;
        }
    }
L_000cc6e4:;
    {
        cpu->r[5] = 0x00008c4cu;
    }
L_000cc6e8:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cc6ec:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cc6f0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cc6f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc710;
        }
    }
L_000cc6f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc6fc:;
    {
        cpu->r[14] = 0x000cc700u; fn_00159598(cpu);
    }
L_000cc700:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc704:;
    {
        cpu->r[14] = 0x000cc708u; fn_0018ba20(cpu);
    }
L_000cc708:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cc70c:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cc710:;
    {
        cpu->r[14] = 0x000cc714u; fn_00158d04(cpu);
    }
L_000cc714:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000cc718:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000cc71c:;
    {
        cpu->r[6] = 0x00001bc8u;
    }
L_000cc720:;
    {
        cpu->r[5] = 0x0000a638u;
    }
L_000cc724:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000cc728:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000cc72c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000cc730:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000cc734:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[5]);
    }
L_000cc738:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cc73c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc758;
        }
    }
L_000cc740:;
    {
        cpu->r[14] = 0x000cc744u; fn_0018ba20(cpu);
    }
L_000cc744:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000cc748:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cc74c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000cc750:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000cc754:;
    {
        wr32(cpu->r[3] + cpu->r[5], cpu->r[2]);
    }
L_000cc758:;
    {
        cpu->r[2] = 0x0000427cu;
    }
L_000cc75c:;
    {
        cpu->r[3] = 0x0000a638u;
    }
L_000cc760:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cc764:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cc768:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000cc76c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cc770:;
    {
        wr32(cpu->r[1] + cpu->r[3], cpu->r[2]);
    }
L_000cc774:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000cc778:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc780;
        }
    }
L_000cc77c:;
    {
        cpu->r[14] = 0x000cc780u; fn_0018ba60(cpu);
    }
L_000cc780:;
    {
        cpu->r[3] = 0x00004274u;
    }
L_000cc784:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cc788:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cc78c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cc790:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc798;
        }
    }
L_000cc794:;
    {
        cpu->r[14] = 0x000cc798u; fn_0018ba60(cpu);
    }
L_000cc798:;
    {
        cpu->r[5] = 0x00004204u;
    }
L_000cc79c:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000cc7a0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cc7a4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cc7a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc7c4;
        }
    }
L_000cc7ac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc7b0:;
    {
        cpu->r[14] = 0x000cc7b4u; fn_000b2bc8(cpu);
    }
L_000cc7b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc7b8:;
    {
        cpu->r[14] = 0x000cc7bcu; fn_0018ba20(cpu);
    }
L_000cc7bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cc7c0:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cc7c4:;
    {
        cpu->r[5] = 0x000041c0u;
    }
L_000cc7c8:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000cc7cc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cc7d0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cc7d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc7f0;
        }
    }
L_000cc7d8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc7dc:;
    {
        cpu->r[14] = 0x000cc7e0u; fn_000b2bc8(cpu);
    }
L_000cc7e0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc7e4:;
    {
        cpu->r[14] = 0x000cc7e8u; fn_0018ba20(cpu);
    }
L_000cc7e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cc7ec:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cc7f0:;
    {
        cpu->r[5] = 0x0000417cu;
    }
L_000cc7f4:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000cc7f8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cc7fc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cc800:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc81c;
        }
    }
L_000cc804:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc808:;
    {
        cpu->r[14] = 0x000cc80cu; fn_000b2bc8(cpu);
    }
L_000cc80c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc810:;
    {
        cpu->r[14] = 0x000cc814u; fn_0018ba20(cpu);
    }
L_000cc814:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cc818:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cc81c:;
    {
        cpu->r[5] = 0x00004138u;
    }
L_000cc820:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000cc824:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cc828:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cc82c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc848;
        }
    }
L_000cc830:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc834:;
    {
        cpu->r[14] = 0x000cc838u; fn_000b2bc8(cpu);
    }
L_000cc838:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc83c:;
    {
        cpu->r[14] = 0x000cc840u; fn_0018ba20(cpu);
    }
L_000cc840:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cc844:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cc848:;
    {
        cpu->r[5] = 0x000040f4u;
    }
L_000cc84c:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000cc850:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cc854:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cc858:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc874;
        }
    }
L_000cc85c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc860:;
    {
        cpu->r[14] = 0x000cc864u; fn_000b2bc8(cpu);
    }
L_000cc864:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc868:;
    {
        cpu->r[14] = 0x000cc86cu; fn_0018ba20(cpu);
    }
L_000cc86c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cc870:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cc874:;
    {
        cpu->r[5] = 0x00008e24u;
    }
L_000cc878:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cc87c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cc880:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cc884:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc8a0;
        }
    }
L_000cc888:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc88c:;
    {
        cpu->r[14] = 0x000cc890u; fn_000b2bc8(cpu);
    }
L_000cc890:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc894:;
    {
        cpu->r[14] = 0x000cc898u; fn_0018ba20(cpu);
    }
L_000cc898:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cc89c:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cc8a0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00018400u, 0, 0);
    }
L_000cc8a4:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000cc8a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x000003bcu, 0, 0);
    }
L_000cc8ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], 0x000003b4u, 0, 0);
    }
L_000cc8b0:;
    {
        cpu->r[14] = 0x000cc8b4u; fn_00129c74(cpu);
    }
L_000cc8b4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000084u, 0, 0);
    }
L_000cc8b8:;
    {
        cpu->r[6] = rd32(cpu->r[5] + - 0x4u);
    }
L_000cc8bc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cc8c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc8d4;
        }
    }
L_000cc8c4:;
    {
        cpu->r[14] = 0x000cc8c8u; fn_000b2bc8(cpu);
    }
L_000cc8c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cc8cc:;
    {
        cpu->r[14] = 0x000cc8d0u; fn_0018ba20(cpu);
    }
L_000cc8d0:;
    {
        wr32(cpu->r[5] + - 0x4u, cpu->r[8]);
    }
L_000cc8d4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000044u, 1, 0);
    }
L_000cc8d8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_000cc8dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cc8b8;
        }
    }
L_000cc8e0:;
    {
        cpu->r[3] = 0x000082b8u;
    }
L_000cc8e4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cc8e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cc8ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cc8f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc8f8;
        }
    }
L_000cc8f4:;
    {
        cpu->r[14] = 0x000cc8f8u; fn_0018ba60(cpu);
    }
L_000cc8f8:;
    {
        cpu->r[3] = 0x000082b0u;
    }
L_000cc8fc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cc900:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cc904:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cc908:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc910;
        }
    }
L_000cc90c:;
    {
        cpu->r[14] = 0x000cc910u; fn_0018ba60(cpu);
    }
L_000cc910:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000cc914:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x000002a4u, 0, 0);
    }
L_000cc918:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cc91c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cc920:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cc924:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc96c;
        }
    }
L_000cc928:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x4u);
    }
L_000cc92c:;
    {
        cpu->r[5] = 0x00000680u;
    }
L_000cc930:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2] + cpu->r[3]; cpu->r[5] = v;
    }
L_000cc934:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cc938:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc964;
        }
    }
L_000cc93c:;
    {
        uint32_t wb_tmp = cpu->r[5] + - 0x680u;
        cpu->r[3] = rd32(cpu->r[5] + - 0x680u);
        cpu->r[5] = wb_tmp;
    }
L_000cc940:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cc944:;
    {
        cpu->r[14] = 0x000cc94cu;
    }
L_000cc948:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cc94cu)) return;
    }
L_000cc94c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x4u);
    }
L_000cc950:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cc954:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cc93c;
        }
    }
L_000cc958:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000cc95c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cc960:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cc964:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000008u, 1, 0);
    }
L_000cc968:;
    {
        cpu->r[14] = 0x000cc96cu; fn_0018ba60(cpu);
    }
L_000cc96c:;
    {
        cpu->r[5] = 0x00001c68u;
    }
L_000cc970:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cc974:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cc978:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cc97c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cc98c;
        }
    }
L_000cc980:;
    {
        cpu->r[14] = 0x000cc984u; fn_0018ba60(cpu);
    }
L_000cc984:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cc988:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cc98c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000a100u, 0, 0);
    }
L_000cc990:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000054u, 0, 0);
    }
L_000cc994:;
    {
        cpu->r[14] = 0x000cc998u; fn_0012d9c8(cpu);
    }
L_000cc998:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00009f00u, 0, 0);
    }
L_000cc99c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000cc9a0:;
    {
        cpu->r[14] = 0x000cc9a4u; fn_00146db0(cpu);
    }
L_000cc9a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000cc9a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000cc9ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000cc9b0u)) return;
    }
L_000cc9b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000cc9b4:;
    {
        cpu->r[14] = 0x000cc9b8u; fn_000df604(cpu);
    }
L_000cc9b8:;
    {
        goto L_000cc4e8;
    }
L_000cc9bc:;
    {
        cpu->r[3] = 0x0000427cu;
    }
L_000cc9c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cc9c4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cc9c8:;
    {
        goto L_000cc418;
    }
L_000cc9cc:;
    {
        cpu->r[3] = 0x000082c0u;
    }
L_000cc9d0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cc9d4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cc9d8:;
    {
        goto L_000cc55c;
    }
}
