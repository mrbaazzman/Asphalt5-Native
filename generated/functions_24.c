#include "functions.h"

/* _ZN4Game24CanAchievementBeUnlockedEi @ 000a59b4 (arm) */
void fn_000a59b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a59b4:;
    {
        cpu->r[3] = rd32(0x000a59bcu + + 0x98u);
    }
L_000a59b8:;
    {
        cpu->r[2] = rd32(0x000a59c0u + + 0x98u);
    }
L_000a59bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a59c4u, cpu->r[3], 0, 0);
    }
L_000a59c0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a59c4:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_000a59c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a59cc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a59d0:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000cu, 1, 1);
    }
L_000a59d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a59e8;
        }
    }
L_000a59d8:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000a59dc:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000a59e0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a59e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a5a38;
        }
    }
L_000a59e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000010u, 1, 1);
    }
L_000a59ec:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[0]) {
        case 0: goto L_000a5a4c;
        case 1: goto L_000a5a40;
        case 2: goto L_000a5a38;
        case 3: goto L_000a5a38;
        case 4: goto L_000a5a38;
        case 5: goto L_000a5a38;
        case 6: goto L_000a5a38;
        case 7: goto L_000a5a38;
        case 8: goto L_000a5a4c;
        case 9: goto L_000a5a4c;
        case 10: goto L_000a5a4c;
        case 11: goto L_000a5a4c;
        case 12: goto L_000a5a4c;
        case 13: goto L_000a5a4c;
        case 14: goto L_000a5a4c;
        case 15: goto L_000a5a4c;
        case 16: goto L_000a5a4c;
        default: guest_unimplemented(cpu, 0x000a59ecu); return; }
        }
    }
L_000a59f0:;
    {
        goto L_000a5a38;
    }
L_000a5a38:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000a5a3c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000a5a40:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000a5a44:;
    {
        cpu->r[0] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000a5a48:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000a5a4c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000a5a50:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game25ResetAchievementsNewFlagsEv @ 000a5a5c (arm) */
void fn_000a5a5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a5a5c:;
    {
        cpu->r[2] = rd32(0x000a5a64u + + 0x50u);
    }
L_000a5a60:;
    {
        cpu->r[1] = 0x00001be0u;
    }
L_000a5a64:;
    {
        cpu->r[3] = rd32(0x000a5a6cu + + 0x4cu);
    }
L_000a5a68:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a5a70u, cpu->r[2], 0, 0);
    }
L_000a5a6c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000a5a70:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a5a74:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000a5a78:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000cu, 1, 1);
    }
L_000a5a7c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000a5a80:;
    {
        cpu->r[1] = 0x00005f60u;
    }
L_000a5a84:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_000a5a88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a5a8c:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000a5a90:;
    {
        cpu->r[1] = rd32(0x000a5a98u + + 0x24u);
    }
L_000a5a94:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000a5a98:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a5a9c:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000002u; cpu->r[1] = v;
    }
L_000a5aa0:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_000a5aa4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_000a5aa8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000110u, 1, 1);
    }
L_000a5aac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a5a98;
        }
    }
L_000a5ab0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game29ResetAchievementsNewMenuFlagsEv @ 000a5ac0 (arm) */
void fn_000a5ac0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a5ac0:;
    {
        cpu->r[2] = rd32(0x000a5ac8u + + 0x50u);
    }
L_000a5ac4:;
    {
        cpu->r[1] = 0x00001be0u;
    }
L_000a5ac8:;
    {
        cpu->r[3] = rd32(0x000a5ad0u + + 0x4cu);
    }
L_000a5acc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a5ad4u, cpu->r[2], 0, 0);
    }
L_000a5ad0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000a5ad4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a5ad8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000a5adc:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000cu, 1, 1);
    }
L_000a5ae0:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000a5ae4:;
    {
        cpu->r[1] = 0x00005f60u;
    }
L_000a5ae8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_000a5aec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a5af0:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000a5af4:;
    {
        cpu->r[1] = rd32(0x000a5afcu + + 0x24u);
    }
L_000a5af8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000a5afc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a5b00:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000004u; cpu->r[1] = v;
    }
L_000a5b04:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_000a5b08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_000a5b0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000110u, 1, 1);
    }
L_000a5b10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a5afc;
        }
    }
L_000a5b14:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game17ResetAchievementsEv @ 000a5b24 (arm) */
void fn_000a5b24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a5b24:;
    {
        cpu->r[12] = rd32(0x000a5b2cu + + 0xccu);
    }
L_000a5b28:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000a5b2c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000a5b30:;
    {
        cpu->r[14] = rd32(0x000a5b38u + + 0xc4u);
    }
L_000a5b34:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a5b3cu, cpu->r[12], 0, 0);
    }
L_000a5b38:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a5b3c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_000a5b40:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x0000011cu, 0, 0);
    }
L_000a5b44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000a5b48:;
    {
        wr32(cpu->r[2] + - 0xcu, cpu->r[3]);
    }
L_000a5b4c:;
    {
        wr32(cpu->r[2] + - 0x8u, cpu->r[1]);
    }
L_000a5b50:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000010u;
        wr32(cpu->r[2], cpu->r[1]);
        cpu->r[2] = wb_tmp;
    }
L_000a5b54:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_000a5b58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a5b48;
        }
    }
L_000a5b5c:;
    {
        cpu->r[0] = rd32(0x000a5b64u + + 0x9cu);
    }
L_000a5b60:;
    {
        cpu->r[1] = 0x00004240u;
    }
L_000a5b64:;
    {
        cpu->r[4] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_000a5b68:;
    {
        cpu->r[2] = 0x00004b40u;
    }
L_000a5b6c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x004cu << 16);
    }
L_000a5b70:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x000fu << 16);
    }
L_000a5b74:;
    {
        cpu->r[6] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_000a5b78:;
    {
        cpu->r[5] = 0x00000005u;
    }
L_000a5b7c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_000a5b80:;
    {
        wr32(cpu->r[4] + + 0xa8u, cpu->r[1]);
    }
L_000a5b84:;
    {
        cpu->r[1] = 0x000003e8u;
    }
L_000a5b88:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[2]);
    }
L_000a5b8c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[1]);
    }
L_000a5b90:;
    {
        cpu->r[1] = 0x00000197u;
    }
L_000a5b94:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_000a5b98:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[1]);
    }
L_000a5b9c:;
    {
        cpu->r[1] = 0x000000c8u;
    }
L_000a5ba0:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_000a5ba4:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[1]);
    }
L_000a5ba8:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_000a5bac:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000a5bb0:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_000a5bb4:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000a5bb8:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[5]);
    }
L_000a5bbc:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[1]);
    }
L_000a5bc0:;
    {
        cpu->r[1] = 0x00000032u;
    }
L_000a5bc4:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[1]);
    }
L_000a5bc8:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_000a5bcc:;
    {
        wr32(cpu->r[4] + + 0xb8u, cpu->r[1]);
    }
L_000a5bd0:;
    {
        cpu->r[14] = 0x000a5bd4u; fn_0009610c(cpu);
    }
L_000a5bd4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a5bd8:;
    {
        wr32(cpu->r[4] + + 0xe8u, cpu->r[5]);
    }
L_000a5bdc:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_000a5be0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000a5be4:;
    {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[0]);
    }
L_000a5be8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x474u);
    }
L_000a5bec:;
    {
        wr32(cpu->r[4] + + 0x108u, cpu->r[2]);
    }
L_000a5bf0:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[3]);
    }
L_000a5bf4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a5bf8u)) return;
    }
}

/* _ZN4Game23SetAchievementCrtStatusEii @ 000a5c04 (arm) */
void fn_000a5c04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a5c04:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000a5c08:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000a5c0c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000a5c10:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a5c14:;
    {
        cpu->r[14] = 0x000a5c18u; fn_000a59b4(cpu);
    }
L_000a5c18:;
    {
        cpu->r[4] = rd32(0x000a5c20u + + 0x60u);
    }
L_000a5c1c:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a5c24u, cpu->r[4], 0, 0);
    }
L_000a5c20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a5c24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a5c40;
        }
    }
L_000a5c28:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000010u, 1, 1);
    }
L_000a5c2c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a5c48;
        }
    }
L_000a5c30:;
    {
        cpu->r[3] = rd32(0x000a5c38u + + 0x4cu);
    }
L_000a5c34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a5c38:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 4u, &shc), 0, 0);
    }
L_000a5c3c:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[6]);
    }
L_000a5c40:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000a5c44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a5c48u)) return;
    }
L_000a5c48:;
    {
        cpu->r[1] = rd32(0x000a5c50u + + 0x38u);
    }
L_000a5c4c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a5c50:;
    {
        cpu->r[2] = rd32(0x000a5c58u + + 0x34u);
    }
L_000a5c54:;
    {
        cpu->r[14] = 0x00000140u;
    }
L_000a5c58:;
    {
        cpu->r[3] = rd32(0x000a5c60u + + 0x30u);
    }
L_000a5c5c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a5c64u, cpu->r[1], 0, 0);
    }
L_000a5c60:;
    {
        cpu->r[12] = rd32(0x000a5c68u + + 0x2cu);
    }
L_000a5c64:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a5c6cu, cpu->r[2], 0, 0);
    }
L_000a5c68:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a5c70u, cpu->r[3], 0, 0);
    }
L_000a5c6c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000a5c70:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a5c78u, cpu->r[12], 0, 0);
    }
L_000a5c74:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a5c78:;
    {
        cpu->r[14] = 0x000a5c7cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a5c7c:;
    {
        goto L_000a5c30;
    }
}

/* _ZN4Game23IncAchievementCrtStatusEi @ 000a5c98 (arm) */
void fn_000a5c98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a5c98:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000a5c9c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000a5ca0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a5ca4:;
    {
        cpu->r[14] = 0x000a5ca8u; fn_000a59b4(cpu);
    }
L_000a5ca8:;
    {
        cpu->r[4] = rd32(0x000a5cb0u + + 0x68u);
    }
L_000a5cac:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a5cb4u, cpu->r[4], 0, 0);
    }
L_000a5cb0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a5cb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a5cd8;
        }
    }
L_000a5cb8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000010u, 1, 1);
    }
L_000a5cbc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a5ce0;
        }
    }
L_000a5cc0:;
    {
        cpu->r[3] = rd32(0x000a5cc8u + + 0x54u);
    }
L_000a5cc4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a5cc8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 4u, &shc), 0, 0);
    }
L_000a5ccc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_000a5cd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000a5cd4:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_000a5cd8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a5cdc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000a5ce0u)) return;
    }
L_000a5ce0:;
    {
        cpu->r[1] = rd32(0x000a5ce8u + + 0x38u);
    }
L_000a5ce4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a5ce8:;
    {
        cpu->r[12] = rd32(0x000a5cf0u + + 0x34u);
    }
L_000a5cec:;
    {
        cpu->r[14] = 0x00000135u;
    }
L_000a5cf0:;
    {
        cpu->r[2] = rd32(0x000a5cf8u + + 0x30u);
    }
L_000a5cf4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a5cfcu, cpu->r[1], 0, 0);
    }
L_000a5cf8:;
    {
        cpu->r[3] = rd32(0x000a5d00u + + 0x2cu);
    }
L_000a5cfc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a5d04u, cpu->r[12], 0, 0);
    }
L_000a5d00:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a5d08u, cpu->r[2], 0, 0);
    }
L_000a5d04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000018u, 0, 0);
    }
L_000a5d08:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a5d10u, cpu->r[3], 0, 0);
    }
L_000a5d0c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a5d10:;
    {
        cpu->r[14] = 0x000a5d14u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a5d14:;
    {
        goto L_000a5cc0;
    }
}

/* _ZN4Game24IsAchievementNewUnlockedEi @ 000a5d30 (arm) */
void fn_000a5d30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a5d30:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000a5d34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000010u, 1, 1);
    }
L_000a5d38:;
    {
        cpu->r[4] = rd32(0x000a5d40u + + 0x58u);
    }
L_000a5d3c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000a5d40:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a5d44:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a5d4cu, cpu->r[4], 0, 0);
    }
L_000a5d48:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000a5d80;
        }
    }
L_000a5d4c:;
    {
        cpu->r[1] = rd32(0x000a5d54u + + 0x48u);
    }
L_000a5d50:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a5d54:;
    {
        cpu->r[12] = rd32(0x000a5d5cu + + 0x44u);
    }
L_000a5d58:;
    {
        cpu->r[14] = 0x000000bbu;
    }
L_000a5d5c:;
    {
        cpu->r[2] = rd32(0x000a5d64u + + 0x40u);
    }
L_000a5d60:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a5d68u, cpu->r[1], 0, 0);
    }
L_000a5d64:;
    {
        cpu->r[3] = rd32(0x000a5d6cu + + 0x3cu);
    }
L_000a5d68:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a5d70u, cpu->r[12], 0, 0);
    }
L_000a5d6c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a5d74u, cpu->r[2], 0, 0);
    }
L_000a5d70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000030u, 0, 0);
    }
L_000a5d74:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a5d7cu, cpu->r[3], 0, 0);
    }
L_000a5d78:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a5d7c:;
    {
        cpu->r[14] = 0x000a5d80u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a5d80:;
    {
        cpu->r[3] = rd32(0x000a5d88u + + 0x24u);
    }
L_000a5d84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a5d88:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 4u, &shc));
    }
L_000a5d8c:;
    {
        cpu->r[0] = (cpu->r[0] >> 1) & 0x1u;
    }
L_000a5d90:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a5d94:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000a5d98u)) return;
    }
}

/* _ZN4Game19IsAchievementLockedEi @ 000a5db0 (arm) */
void fn_000a5db0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a5db0:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000a5db4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000010u, 1, 1);
    }
L_000a5db8:;
    {
        cpu->r[4] = rd32(0x000a5dc0u + + 0x58u);
    }
L_000a5dbc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000a5dc0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a5dc4:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a5dccu, cpu->r[4], 0, 0);
    }
L_000a5dc8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000a5e00;
        }
    }
L_000a5dcc:;
    {
        cpu->r[1] = rd32(0x000a5dd4u + + 0x48u);
    }
L_000a5dd0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a5dd4:;
    {
        cpu->r[12] = rd32(0x000a5ddcu + + 0x44u);
    }
L_000a5dd8:;
    {
        cpu->r[14] = 0x000000b3u;
    }
L_000a5ddc:;
    {
        cpu->r[2] = rd32(0x000a5de4u + + 0x40u);
    }
L_000a5de0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a5de8u, cpu->r[1], 0, 0);
    }
L_000a5de4:;
    {
        cpu->r[3] = rd32(0x000a5decu + + 0x3cu);
    }
L_000a5de8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a5df0u, cpu->r[12], 0, 0);
    }
L_000a5dec:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a5df4u, cpu->r[2], 0, 0);
    }
L_000a5df0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000004cu, 0, 0);
    }
L_000a5df4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a5dfcu, cpu->r[3], 0, 0);
    }
L_000a5df8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a5dfc:;
    {
        cpu->r[14] = 0x000a5e00u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a5e00:;
    {
        cpu->r[3] = rd32(0x000a5e08u + + 0x24u);
    }
L_000a5e04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a5e08:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 4u, &shc));
    }
L_000a5e0c:;
    {
        uint32_t v = cpu->r[0] & 0x00000001u; cpu->r[0] = v;
    }
L_000a5e10:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a5e14:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000a5e18u)) return;
    }
}

/* _ZN4Game26GetAchievementTargetStatusEi @ 000a5e30 (arm) */
void fn_000a5e30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a5e30:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000a5e34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000010u, 1, 1);
    }
L_000a5e38:;
    {
        cpu->r[4] = rd32(0x000a5e40u + + 0x88u);
    }
L_000a5e3c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000a5e40:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a5e44:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a5e4cu, cpu->r[4], 0, 0);
    }
L_000a5e48:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a5e6c;
        }
    }
L_000a5e4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_000a5e50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a5ea4;
        }
    }
L_000a5e54:;
    {
        cpu->r[3] = rd32(0x000a5e5cu + + 0x70u);
    }
L_000a5e58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a5e5c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 4u, &shc), 0, 0);
    }
L_000a5e60:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_000a5e64:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a5e68:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000a5e6cu)) return;
    }
L_000a5e6c:;
    {
        cpu->r[1] = rd32(0x000a5e74u + + 0x5cu);
    }
L_000a5e70:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a5e74:;
    {
        cpu->r[12] = rd32(0x000a5e7cu + + 0x58u);
    }
L_000a5e78:;
    {
        cpu->r[14] = 0x00000102u;
    }
L_000a5e7c:;
    {
        cpu->r[2] = rd32(0x000a5e84u + + 0x54u);
    }
L_000a5e80:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a5e88u, cpu->r[1], 0, 0);
    }
L_000a5e84:;
    {
        cpu->r[3] = rd32(0x000a5e8cu + + 0x50u);
    }
L_000a5e88:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a5e90u, cpu->r[12], 0, 0);
    }
L_000a5e8c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a5e94u, cpu->r[2], 0, 0);
    }
L_000a5e90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000a5e94:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a5e9cu, cpu->r[3], 0, 0);
    }
L_000a5e98:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a5e9c:;
    {
        cpu->r[14] = 0x000a5ea0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a5ea0:;
    {
        goto L_000a5e54;
    }
L_000a5ea4:;
    {
        cpu->r[3] = rd32(0x000a5eacu + + 0x34u);
    }
L_000a5ea8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a5eac:;
    {
        cpu->r[3] = rd32(0x000a5eb4u + + 0x18u);
    }
L_000a5eb0:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000a5eb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a5eb8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x58u);
    }
L_000a5ebc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a5ec0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_000a5ec4:;
    {
        return fn_000f4468(cpu);
    }
}

/* _ZN4Game20CheckUnlockConditionEi @ 000a5ee4 (arm) */
void fn_000a5ee4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a5ee4:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000a5ee8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000010u, 1, 1);
    }
L_000a5eec:;
    {
        cpu->r[4] = rd32(0x000a5ef4u + + 0x16cu);
    }
L_000a5ef0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000a5ef4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a5ef8:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a5f00u, cpu->r[4], 0, 0);
    }
L_000a5efc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a5f5c;
        }
    }
L_000a5f00:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000010u, 1, 1);
    }
L_000a5f04:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[5]) {
        case 0: goto L_000a5fc0;
        case 1: goto L_000a5fc0;
        case 2: goto L_000a5fc0;
        case 3: goto L_000a5fc0;
        case 4: goto L_000a5fc0;
        case 5: goto L_000a5fc0;
        case 6: goto L_000a5fc0;
        case 7: goto L_000a5fc0;
        case 8: goto L_000a5fc0;
        case 9: goto L_000a5fc0;
        case 10: goto L_000a5fc0;
        case 11: goto L_000a5fc0;
        case 12: goto L_000a5fc0;
        case 13: goto L_000a6030;
        case 14: goto L_000a5fe8;
        case 15: goto L_000a6008;
        case 16: goto L_000a5f94;
        default: guest_unimplemented(cpu, 0x000a5f04u); return; }
        }
    }
L_000a5f08:;
    {
        goto L_000a5f50;
    }
L_000a5f50:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000a5f54:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a5f58:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000a5f5cu)) return;
    }
L_000a5f5c:;
    {
        cpu->r[1] = rd32(0x000a5f64u + + 0x100u);
    }
L_000a5f60:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a5f64:;
    {
        cpu->r[12] = rd32(0x000a5f6cu + + 0xfcu);
    }
L_000a5f68:;
    {
        cpu->r[14] = 0x00000074u;
    }
L_000a5f6c:;
    {
        cpu->r[2] = rd32(0x000a5f74u + + 0xf8u);
    }
L_000a5f70:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a5f78u, cpu->r[1], 0, 0);
    }
L_000a5f74:;
    {
        cpu->r[3] = rd32(0x000a5f7cu + + 0xf4u);
    }
L_000a5f78:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a5f80u, cpu->r[12], 0, 0);
    }
L_000a5f7c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a5f84u, cpu->r[2], 0, 0);
    }
L_000a5f80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000007cu, 0, 0);
    }
L_000a5f84:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a5f8cu, cpu->r[3], 0, 0);
    }
L_000a5f88:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a5f8c:;
    {
        cpu->r[14] = 0x000a5f90u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a5f90:;
    {
        goto L_000a5f00;
    }
L_000a5f94:;
    {
        cpu->r[2] = rd32(0x000a5f9cu + + 0xd8u);
    }
L_000a5f98:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a5f9c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000a5fa0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000a5fa4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_000a5fa8:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a5fac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a5f50;
        }
    }
L_000a5fb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000100u, 1, 1);
    }
L_000a5fb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a5fa0;
        }
    }
L_000a5fb8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000a5fbc:;
    {
        goto L_000a5f54;
    }
L_000a5fc0:;
    {
        cpu->r[3] = rd32(0x000a5fc8u + + 0xacu);
    }
L_000a5fc4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a5fc8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 4u, &shc), 0, 0);
    }
L_000a5fcc:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000a5fd0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000a5fd4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_000a5fd8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000a5fdc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a5fe0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a5fe4:;
    {
        goto L_000a5f54;
    }
L_000a5fe8:;
    {
        cpu->r[3] = rd32(0x000a5ff0u + + 0x88u);
    }
L_000a5fec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a5ff0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a5ff4:;
    {
        cpu->r[14] = 0x000a5ff8u; fn_000a05f4(cpu);
    }
L_000a5ff8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_000a5ffc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a6000:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a6004:;
    {
        goto L_000a5f54;
    }
L_000a6008:;
    {
        cpu->r[3] = rd32(0x000a6010u + + 0x68u);
    }
L_000a600c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a6010:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000a6014:;
    {
        cpu->r[14] = 0x000a6018u; fn_00096d08(cpu);
    }
L_000a6018:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000a601c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x474u);
    }
L_000a6020:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000a6024:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a6028:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a602c:;
    {
        goto L_000a5f54;
    }
L_000a6030:;
    {
        cpu->r[3] = rd32(0x000a6038u + + 0x40u);
    }
L_000a6034:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a6038:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000a603c:;
    {
        cpu->r[14] = 0x000a6040u; fn_000a4480(cpu);
    }
L_000a6040:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a6044:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000a6048:;
    {
        cpu->r[14] = 0x000a604cu; fn_0009610c(cpu);
    }
L_000a604c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000a6050:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_000a6054:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a6058:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a605c:;
    {
        goto L_000a5f54;
    }
}

/* _ZN4Game18UpdateAchievementsEv @ 000a607c (arm) */
void fn_000a607c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a607c:;
    {
        cpu->r[3] = rd32(0x000a6084u + + 0x8cu);
    }
L_000a6080:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000a6084:;
    {
        cpu->r[4] = rd32(0x000a608cu + + 0x88u);
    }
L_000a6088:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a6090u, cpu->r[3], 0, 0);
    }
L_000a608c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000a6090:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000a6094:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_000a6098:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_000a609c:;
    {
        goto L_000a60b0;
    }
L_000a60a0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000a60a4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_000a60a8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000011u, 1, 1);
    }
L_000a60ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a610c;
        }
    }
L_000a60b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0xcu);
    }
L_000a60b4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000002u; set_nz(cpu, v); }
    }
L_000a60b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a60d8;
        }
    }
L_000a60bc:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_000a60c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000a60c4:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_000a60c8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000032u, 1, 1);
    }
L_000a60cc:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4], cpu->r[6]);
        }
    }
L_000a60d0:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[3] & ~ 0x00000002u; cpu->r[3] = v;
        }
    }
L_000a60d4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + - 0xcu, cpu->r[3]);
        }
    }
L_000a60d8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a60dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a60a0;
        }
    }
L_000a60e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a60e4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000a60e8:;
    {
        cpu->r[14] = 0x000a60ecu; fn_000a5ee4(cpu);
    }
L_000a60ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a60f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + - 0xcu);
        }
    }
L_000a60f4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] & ~ 0x00000001u; cpu->r[3] = v;
        }
    }
L_000a60f8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] | 0x00000006u; cpu->r[3] = v;
        }
    }
L_000a60fc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + - 0xcu, cpu->r[3]);
        }
    }
L_000a6100:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000011u, 1, 1);
    }
L_000a6104:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_000a6108:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a60b0;
        }
    }
L_000a610c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a6110u)) return;
    }
}

/* _ZN4Game23GetAchievementCrtStatusEi @ 000a6118 (arm) */
void fn_000a6118(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6118:;
    {
        cpu->r[3] = rd32(0x000a6120u + + 0x100u);
    }
L_000a611c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000a6120:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a6128u, cpu->r[3], 0, 0);
    }
L_000a6124:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000010u, 1, 1);
    }
L_000a6128:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[0]) {
        case 0: goto L_000a61ac;
        case 1: goto L_000a61ac;
        case 2: goto L_000a61ac;
        case 3: goto L_000a61ac;
        case 4: goto L_000a61ac;
        case 5: goto L_000a61c4;
        case 6: goto L_000a61ac;
        case 7: goto L_000a61ac;
        case 8: goto L_000a61ac;
        case 9: goto L_000a61ac;
        case 10: goto L_000a61ac;
        case 11: goto L_000a61ac;
        case 12: goto L_000a61ac;
        case 13: goto L_000a61e4;
        case 14: goto L_000a61f8;
        case 15: goto L_000a620c;
        case 16: goto L_000a6174;
        default: guest_unimplemented(cpu, 0x000a6128u); return; }
        }
    }
L_000a612c:;
    {
        goto L_000a61a0;
    }
L_000a6174:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a6178:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_000a617c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a6180:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000a6184:;
    {
        cpu->r[14] = 0x000a6188u; fn_000a5ee4(cpu);
    }
L_000a6188:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a618c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_000a6190:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000010u, 1, 1);
    }
L_000a6194:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a617c;
        }
    }
L_000a6198:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a619c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a61a0u)) return;
    }
L_000a61a0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000a61a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a61a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a61acu)) return;
    }
L_000a61ac:;
    {
        cpu->r[2] = rd32(0x000a61b4u + + 0x70u);
    }
L_000a61b0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a61b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_000a61b8:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x4u);
    }
L_000a61bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a61c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a61c4u)) return;
    }
L_000a61c4:;
    {
        cpu->r[1] = rd32(0x000a61ccu + + 0x58u);
    }
L_000a61c8:;
    {
        cpu->r[2] = rd32(0x000a61d0u + + 0x58u);
    }
L_000a61cc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a61d0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000a61d4:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000a61d8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x54u);
    }
L_000a61dc:;
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
L_000a61e0:;
    {
        return fn_000f4468(cpu);
    }
L_000a61e4:;
    {
        cpu->r[2] = rd32(0x000a61ecu + + 0x3cu);
    }
L_000a61e8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a61ec:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a61f0:;
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
L_000a61f4:;
    {
        return fn_000a4480(cpu);
    }
L_000a61f8:;
    {
        cpu->r[2] = rd32(0x000a6200u + + 0x28u);
    }
L_000a61fc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a6200:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a6204:;
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
L_000a6208:;
    {
        return fn_000a05f4(cpu);
    }
L_000a620c:;
    {
        cpu->r[2] = rd32(0x000a6214u + + 0x14u);
    }
L_000a6210:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a6214:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a6218:;
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
L_000a621c:;
    {
        return fn_00096d08(cpu);
    }
}

/* _ZN4Game24UpdateGLLiveAchievementsEv @ 000a622c (arm) */
void fn_000a622c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a622c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000a6230:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a6234:;
    {
        goto L_000a6244;
    }
L_000a6238:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000a623c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000011u, 1, 1);
    }
L_000a6240:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6268;
        }
    }
L_000a6244:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a6248:;
    {
        cpu->r[14] = 0x000a624cu; fn_000a5ee4(cpu);
    }
L_000a624c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a6250:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6238;
        }
    }
L_000a6254:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a6258:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000a625c:;
    {
        cpu->r[14] = 0x000a6260u; fn_00072378(cpu);
    }
L_000a6260:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000011u, 1, 1);
    }
L_000a6264:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a6244;
        }
    }
L_000a6268:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000a626cu)) return;
    }
}

/* _ZN4Game16SaveAchievementsEP7__sFILE @ 000a626c (arm) */
void fn_000a626c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a626c:;
    {
        cpu->r[3] = rd32(0x000a6274u + + 0x54u);
    }
L_000a6270:;
    {
        cpu->r[2] = rd32(0x000a6278u + + 0x54u);
    }
L_000a6274:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a627cu, cpu->r[3], 0, 0);
    }
L_000a6278:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000a627c:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a6280:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000a6284:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a6288:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], shifter(cpu->r[4], 2, 4u, &shc), 0, 0);
    }
L_000a628c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000a6290:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000a6294:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000a6298:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a629c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_000a62a0:;
    {
        cpu->r[14] = 0x000a62a4u; imp_fwrite(cpu); /* fwrite */
    }
L_000a62a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000a62a8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000a62ac:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000a62b0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000a62b4:;
    {
        cpu->r[14] = 0x000a62b8u; imp_fwrite(cpu); /* fwrite */
    }
L_000a62b8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000011u, 1, 1);
    }
L_000a62bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a6288;
        }
    }
L_000a62c0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000a62c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a62c8u)) return;
    }
}

/* _ZN4Game16LoadAchievementsEP7__sFILE @ 000a62d0 (arm) */
void fn_000a62d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a62d0:;
    {
        cpu->r[3] = rd32(0x000a62d8u + + 0x54u);
    }
L_000a62d4:;
    {
        cpu->r[2] = rd32(0x000a62dcu + + 0x54u);
    }
L_000a62d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a62e0u, cpu->r[3], 0, 0);
    }
L_000a62dc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000a62e0:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a62e4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000a62e8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a62ec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], shifter(cpu->r[4], 2, 4u, &shc), 0, 0);
    }
L_000a62f0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000a62f4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000a62f8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000a62fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a6300:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_000a6304:;
    {
        cpu->r[14] = 0x000a6308u; imp_fread(cpu); /* fread */
    }
L_000a6308:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000a630c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000a6310:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000a6314:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000a6318:;
    {
        cpu->r[14] = 0x000a631cu; imp_fread(cpu); /* fread */
    }
L_000a631c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000011u, 1, 1);
    }
L_000a6320:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a62ec;
        }
    }
L_000a6324:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000a6328:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a632cu)) return;
    }
}

/* _ZN4Game16ApplyBloomEffectEv @ 000a6334 (arm) */
void fn_000a6334(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6334:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000a6338:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000a633c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_000a6340:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a6344:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x478u);
    }
L_000a6348:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_000a634c:;
    {
        cpu->r[14] = 0x000a6350u; imp_glBindTexture(cpu); /* glBindTexture */
    }
L_000a6350:;
    {
        cpu->r[5] = rd32(0x000a6358u + + 0x88u);
    }
L_000a6354:;
    {
        cpu->r[14] = 0x000a6358u; imp_glGetError(cpu); /* glGetError */
    }
L_000a6358:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000a635c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000a6360:;
    {
        cpu->r[2] = 0x00001909u;
    }
L_000a6364:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_000a6368:;
    {
        cpu->r[6] = 0x00000200u;
    }
L_000a636c:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000a6370:;
    {
        cpu->r[5] = add_flags(cpu, 0x000a6378u, cpu->r[5], 0, 0);
    }
L_000a6374:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000a6378:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_000a637c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_000a6380:;
    {
        cpu->r[14] = 0x000a6384u; imp_glCopyTexImage2D(cpu); /* glCopyTexImage2D */
    }
L_000a6384:;
    {
        cpu->r[14] = 0x000a6388u; imp_glGetError(cpu); /* glGetError */
    }
L_000a6388:;
    {
        cpu->r[3] = rd32(0x000a6390u + + 0x54u);
    }
L_000a638c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x478u);
    }
L_000a6390:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000a6394:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[6]);
    }
L_000a6398:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000a639c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a63a0:;
    {
        cpu->r[3] = rd32(0x000a63a8u + + 0x40u);
    }
L_000a63a4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000a63a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a63ac:;
    {
        cpu->r[5] = 0x00000090u;
    }
L_000a63b0:;
    {
        cpu->r[14] = rd32(cpu->r[3]);
    }
L_000a63b4:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000a63b8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[5]);
    }
L_000a63bc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000a63c0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_000a63c4:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000a63c8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_000a63cc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000a63d0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[6]);
    }
L_000a63d4:;
    {
        cpu->r[14] = 0x000a63d8u; fn_00130d2c(cpu);
    }
L_000a63d8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000a63dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a63e0u)) return;
    }
}

/* _ZN4Game18CreateBloomTextureEv @ 000a63ec (arm) */
void fn_000a63ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a63ec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000a63f0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a63f4:;
    {
        cpu->r[14] = 0x000a63f8u; imp_glGetError(cpu); /* glGetError */
    }
L_000a63f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000470u, 0, 0);
    }
L_000a63fc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000a6400:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000a6404:;
    {
        cpu->r[4] = 0x00002f00u;
    }
L_000a6408:;
    {
        cpu->r[14] = 0x000a640cu; imp_glGenTextures(cpu); /* glGenTextures */
    }
L_000a640c:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x4701u << 16);
    }
L_000a6410:;
    {
        cpu->r[14] = 0x000a6414u; imp_glGetError(cpu); /* glGetError */
    }
L_000a6414:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_000a6418:;
    {
        cpu->r[14] = 0x000a641cu; imp_glEnable(cpu); /* glEnable */
    }
L_000a641c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x478u);
    }
L_000a6420:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_000a6424:;
    {
        cpu->r[14] = 0x000a6428u; imp_glBindTexture(cpu); /* glBindTexture */
    }
L_000a6428:;
    {
        cpu->r[14] = 0x000a642cu; imp_glGetError(cpu); /* glGetError */
    }
L_000a642c:;
    {
        cpu->r[14] = 0x000a6430u; imp_glGetError(cpu); /* glGetError */
    }
L_000a6430:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000a6434:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_000a6438:;
    {
        cpu->r[1] = 0x00002802u;
    }
L_000a643c:;
    {
        cpu->r[14] = 0x000a6440u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_000a6440:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000a6444:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_000a6448:;
    {
        cpu->r[1] = 0x00002803u;
    }
L_000a644c:;
    {
        cpu->r[14] = 0x000a6450u; imp_glTexParameterf(cpu); /* glTexParameterf */
    }
L_000a6450:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_000a6454:;
    {
        cpu->r[1] = 0x00002800u;
    }
L_000a6458:;
    {
        cpu->r[2] = 0x00002601u;
    }
L_000a645c:;
    {
        cpu->r[14] = 0x000a6460u; imp_glTexParameteri(cpu); /* glTexParameteri */
    }
L_000a6460:;
    {
        cpu->r[1] = 0x00002801u;
    }
L_000a6464:;
    {
        cpu->r[2] = 0x00002703u;
    }
L_000a6468:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_000a646c:;
    {
        cpu->r[14] = 0x000a6470u; imp_glTexParameteri(cpu); /* glTexParameteri */
    }
L_000a6470:;
    {
        cpu->r[14] = 0x000a6474u; imp_glGetError(cpu); /* glGetError */
    }
L_000a6474:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_000a6478:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a647c:;
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
L_000a6480:;
    {
        imp_glBindTexture(cpu); /* tail glBindTexture */ return;
    }
}

/* _ZN8glFilterC2Ev @ 000a6484 (arm) */
void fn_000a6484(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6484:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8glFilterC1Ev @ 000a6488 (arm) */
void fn_000a6488(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6488:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8glFilter6filterEf @ 000a648c (arm) */
void fn_000a648c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a648c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_000a6490:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_000a6494:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000a6498:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a64f4;
        }
    }
L_000a649c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x14u);
    }
L_000a64a0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_000a64a4:;
    {
        vfp_vmul(cpu, 15, 15, 13);
    }
L_000a64a8:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[0] + + 0x10u);
    }
L_000a64ac:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[0] + + 0x18u);
    }
L_000a64b0:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000a64b4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000a64b8:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[0] + + 0x1cu);
    }
L_000a64bc:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[0] + + 0x20u);
    }
L_000a64c0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_000a64c4:;
    {
        vfp_vmla(cpu, 15, 14, 6);
    }
L_000a64c8:;
    {
        vfp_vmla(cpu, 15, 7, 8);
    }
L_000a64cc:;
    {
        vfp_vmls(cpu, 15, 12, 9);
    }
L_000a64d0:;
    {
        vfp_vmls(cpu, 15, 10, 11);
    }
L_000a64d4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000a64d8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000a64dc:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000a64e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000a64e4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000a64e8:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_000a64ec:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a64f0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000a64f4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000a64f8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_000a64fc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_000a6500:;
    {
        goto L_000a64d4;
    }
}

/* _ZN8glFilter4initEffi @ 000a6504 (arm) */
void fn_000a6504(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6504:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[2];
    }
L_000a6508:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_000a650c:;
    {
        vfp_vdiv(cpu, 15, 11, 13);
    }
L_000a6510:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000a6514:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_000a6518:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x000a6520u + + 0x94u);
    }
L_000a651c:;
    {
        *(uint32_t*)vfp_s(cpu,19) = cpu->r[3];
    }
L_000a6520:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000a6528u + + 0x90u);
    }
L_000a6524:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a6528:;
    {
        vfp_vdiv(cpu, 14, 18, 15);
    }
L_000a652c:;
    {
        *vfp_s(cpu,19) = (float)*(int32_t*)vfp_s(cpu,19);
    }
L_000a6530:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000a6534:;
    {
        cpu->r[14] = 0x000a6538u; imp_tanf(cpu); /* tanf */
    }
L_000a6538:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000a6540u + + 0x7cu);
    }
L_000a653c:;
    {
        vfp_vadd(cpu, 19, 19, 19);
    }
L_000a6540:;
    {
        vfp_vadd(cpu, 19, 19, 16);
    }
L_000a6544:;
    {
        vfp_vmul(cpu, 14, 19, 18);
    }
L_000a6548:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[0];
    }
L_000a654c:;
    {
        vfp_vmul(cpu, 11, 14, 15);
    }
L_000a6550:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,11);
    }
L_000a6554:;
    {
        cpu->r[14] = 0x000a6558u; imp_cosf(cpu); /* cosf */
    }
L_000a6558:;
    {
        vfp_vmul(cpu, 14, 17, 17);
    }
L_000a655c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a6560:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_000a6564:;
    {
        vfp_vsub(cpu, 12, 14, 16);
    }
L_000a6568:;
    {
        vfp_vadd(cpu, 12, 12, 12);
    }
L_000a656c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000a6570:;
    {
        vfp_vadd(cpu, 15, 13, 13);
    }
L_000a6574:;
    {
        vfp_vmul(cpu, 15, 15, 17);
    }
L_000a6578:;
    {
        vfp_vadd(cpu, 13, 15, 16);
    }
L_000a657c:;
    {
        vfp_vsub(cpu, 16, 16, 15);
    }
L_000a6580:;
    {
        vfp_vadd(cpu, 13, 13, 14);
    }
L_000a6584:;
    {
        vfp_vdiv(cpu, 15, 14, 13);
    }
L_000a6588:;
    {
        vfp_vadd(cpu, 14, 16, 14);
    }
L_000a658c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000a6590:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000a6594:;
    {
        vfp_vdiv(cpu, 11, 14, 13);
    }
L_000a6598:;
    {
        vfp_vdiv(cpu, 14, 12, 13);
    }
L_000a659c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_000a65a0:;
    {
        vfp_vadd(cpu, 15, 15, 15);
    }
L_000a65a4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000a65a8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000a65ac:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000a65b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000a65b4u)) return;
    }
}

/* _Z14skipWhitespacev @ 000a65c0 (arm) */
void fn_000a65c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a65c0:;
    {
        cpu->r[0] = rd32(0x000a65c8u + + 0x60u);
    }
L_000a65c4:;
    {
        cpu->r[12] = rd32(0x000a65ccu + + 0x60u);
    }
L_000a65c8:;
    {
        cpu->r[3] = rd32(0x000a65d0u + + 0x60u);
    }
L_000a65cc:;
    {
        cpu->r[0] = add_flags(cpu, 0x000a65d4u, cpu->r[0], 0, 0);
    }
L_000a65d0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000a65d4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000a65d8:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000a65dc:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000a65e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_000a65e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000a65e8:;
    {
        cpu->r[3] = rd8(cpu->r[2]);
    }
L_000a65ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000a65f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_000a65f4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
        }
    }
L_000a65f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a661c;
        }
    }
L_000a65fc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000a6600:;
    {
        wr32(cpu->r[3], cpu->r[1]);
    }
L_000a6604:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000a6608:;
    {
        cpu->r[3] = rd8(cpu->r[2]);
    }
L_000a660c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000a6610:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_000a6614:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
        }
    }
L_000a6618:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a65fc;
        }
    }
L_000a661c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_000a6620:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000a6624:;
    {
        goto L_000a65fc;
    }
}

/* _Z9parsePairv @ 000a6634 (arm) */
void fn_000a6634(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6634:;
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
L_000a6638:;
    {
        cpu->r[4] = rd32(0x000a6640u + + 0x33cu);
    }
L_000a663c:;
    {
        cpu->r[7] = rd32(0x000a6644u + + 0x33cu);
    }
L_000a6640:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000a6644:;
    {
        cpu->r[5] = rd32(0x000a664cu + + 0x338u);
    }
L_000a6648:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a6650u, cpu->r[4], 0, 0);
    }
L_000a664c:;
    {
        cpu->r[14] = 0x000a6650u; fn_000a65c0(cpu);
    }
L_000a6650:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a6654:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a6658:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000a665c:;
    {
        cpu->r[14] = rd32(cpu->r[2]);
    }
L_000a6660:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[1], cpu->r[14], 0, 0);
    }
L_000a6664:;
    {
        cpu->r[3] = rd8(cpu->r[1] + cpu->r[14]);
    }
L_000a6668:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000022u, 1, 1);
    }
L_000a666c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a67f0;
        }
    }
L_000a6670:;
    {
        cpu->r[8] = rd32(0x000a6678u + + 0x310u);
    }
L_000a6674:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a6678:;
    {
        cpu->r[6] = rd32(0x000a6680u + + 0x30cu);
    }
L_000a667c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a6680:;
    {
        cpu->r[11] = rd32(cpu->r[1]);
    }
L_000a6684:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 3u, &shc); cpu->r[1] = v;
    }
L_000a6688:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000a668c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[1], cpu->r[11], 0, 0);
    }
L_000a6690:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 4u, &shc); cpu->r[9] = v;
    }
L_000a6694:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000041u, 1, 0);
    }
L_000a6698:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000061u, 1, 0);
    }
L_000a669c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[3], 0x00000030u, 1, 0);
    }
L_000a66a0:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_000a66a4:;
    {
        cpu->r[1] = (uint32_t)((uint8_t)cpu->r[1]);
    }
L_000a66a8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000019u, 1, 1);
    }
L_000a66ac:;
    {
        if (cond_test(cpu, 9)) {
        sub_flags(cpu, cpu->r[0], 0x00000019u, 1, 1);
        }
    }
L_000a66b0:;
    {
        cpu->r[12] = (uint32_t)((uint8_t)cpu->r[12]);
    }
L_000a66b4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a66dc;
        }
    }
L_000a66b8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a66bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a66c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[9], cpu->r[0], 0, 0);
    }
L_000a66c4:;
    {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_000a66c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000a66cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_000a66d0:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_000a66d4:;
    {
        cpu->r[3] = rd8(cpu->r[10] + cpu->r[2]);
    }
L_000a66d8:;
    {
        goto L_000a6694;
    }
L_000a66dc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000009u, 1, 1);
    }
L_000a66e0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000a66b8;
        }
    }
L_000a66e4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000a66e8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000a66ec:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a66f0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_000a66f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[11], 2, 4u, &shc), 0, 0);
    }
L_000a66f8:;
    {
        wr8(cpu->r[10] + cpu->r[2], cpu->r[0]);
    }
L_000a66fc:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_000a6700:;
    {
        cpu->r[14] = 0x000a6704u; fn_000a65c0(cpu);
    }
L_000a6704:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a6708:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a670c:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_000a6710:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_000a6714:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000a6718:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000a671c:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000003du, 1, 1);
    }
L_000a6720:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x0000003au, 1, 1);
        }
    }
L_000a6724:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_000a6728:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_000a672c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6738;
        }
    }
L_000a6730:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a6734:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a6738u)) return;
    }
L_000a6738:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000a673c:;
    {
        wr32(cpu->r[9], cpu->r[3]);
    }
L_000a6740:;
    {
        cpu->r[14] = 0x000a6744u; fn_000a65c0(cpu);
    }
L_000a6744:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_000a6748:;
    {
        cpu->r[7] = rd32(cpu->r[9]);
    }
L_000a674c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_000a6750:;
    {
        cpu->r[3] = rd8(cpu->r[1] + cpu->r[7]);
    }
L_000a6754:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007bu, 1, 1);
    }
L_000a6758:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6960;
        }
    }
L_000a675c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000022u, 1, 1);
    }
L_000a6760:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a686c;
        }
    }
L_000a6764:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000002cu, 1, 1);
    }
L_000a6768:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x0000007du, 1, 1);
        }
    }
L_000a676c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000a6770:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000a6774:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
        }
    }
L_000a6778:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_000a677c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[12], 2, 3u, &shc); cpu->r[9] = v;
        }
    }
L_000a6780:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a67c4;
        }
    }
L_000a6784:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a6788:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000a678c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000a6790:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000a6794:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 3u, &shc); cpu->r[9] = v;
    }
L_000a6798:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[9], cpu->r[12], 0, 0);
    }
L_000a679c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[5], 2, 4u, &shc), 0, 0);
    }
L_000a67a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000a67a4:;
    {
        wr8(cpu->r[10] + + 0x10u, cpu->r[3]);
    }
L_000a67a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_000a67ac:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_000a67b0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[2]);
    }
L_000a67b4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000a67b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007du, 1, 1);
    }
L_000a67bc:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x0000002cu, 1, 1);
        }
    }
L_000a67c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a67a0;
        }
    }
L_000a67c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a67c8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[12], 0, 0);
    }
L_000a67cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[9], 2, 4u, &shc), 0, 0);
    }
L_000a67d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000a67d4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a67d8:;
    {
        wr8(cpu->r[2] + + 0x10u, cpu->r[3]);
    }
L_000a67dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a67e0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000a67e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_000a67e8:;
    {
        wr32(cpu->r[3], cpu->r[12]);
    }
L_000a67ec:;
    {
        goto L_000a6730;
    }
L_000a67f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_000a67f4:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_000a67f8:;
    {
        cpu->r[3] = rd8(cpu->r[1] + cpu->r[0]);
    }
L_000a67fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000022u, 1, 1);
    }
L_000a6800:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a696c;
        }
    }
L_000a6804:;
    {
        cpu->r[8] = rd32(0x000a680cu + + 0x17cu);
    }
L_000a6808:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_000a680c:;
    {
        cpu->r[6] = rd32(0x000a6814u + + 0x178u);
    }
L_000a6810:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000002u, 0, 0);
    }
L_000a6814:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a6818:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a681c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a6820:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000a6824:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_000a6828:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_000a682c:;
    {
        wr8(cpu->r[12] + cpu->r[2], cpu->r[3]);
    }
L_000a6830:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_000a6834:;
    {
        wr32(cpu->r[10], cpu->r[14]);
    }
L_000a6838:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000a683c:;
    {
        cpu->r[3] = rd8(cpu->r[1] + cpu->r[14]);
    }
L_000a6840:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_000a6844:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000022u, 1, 1);
    }
L_000a6848:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a682c;
        }
    }
L_000a684c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a6850:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000a6854:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a6858:;
    {
        cpu->r[11] = rd32(cpu->r[1]);
    }
L_000a685c:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_000a6860:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 3u, &shc); cpu->r[0] = v;
    }
L_000a6864:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_000a6868:;
    {
        goto L_000a66e4;
    }
L_000a686c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a6870:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000a6874:;
    {
        wr32(cpu->r[9], cpu->r[7]);
    }
L_000a6878:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000a687c:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000a6880:;
    {
        cpu->r[10] = cpu->r[12];
    }
L_000a6884:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 3u, &shc); cpu->r[9] = v;
    }
L_000a6888:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[9], cpu->r[12], 0, 0);
    }
L_000a688c:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 4u, &shc); cpu->r[11] = v;
    }
L_000a6890:;
    {
        goto L_000a68b8;
    }
L_000a6894:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a6898:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a689c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[11], 0, 0);
    }
L_000a68a0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[2], 0, 0);
    }
L_000a68a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000a68a8:;
    {
        wr8(cpu->r[7] + + 0x10u, cpu->r[3]);
    }
L_000a68ac:;
    {
        wr32(cpu->r[12], cpu->r[0]);
    }
L_000a68b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a68b4:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_000a68b8:;
    {
        cpu->r[3] = rd8(cpu->r[1] + cpu->r[7]);
    }
L_000a68bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000a68c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000022u, 1, 1);
    }
L_000a68c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6918;
        }
    }
L_000a68c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000005cu, 1, 1);
    }
L_000a68cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a6894;
        }
    }
L_000a68d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a68d4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000a68d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000a68dc:;
    {
        wr32(cpu->r[3], cpu->r[7]);
    }
L_000a68e0:;
    {
        cpu->r[12] = rd8(cpu->r[1] + cpu->r[7]);
    }
L_000a68e4:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_000a68e8:;
    {
        sub_flags(cpu, cpu->r[12], 0x0000005cu, 1, 1);
    }
L_000a68ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6900;
        }
    }
L_000a68f0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000074u, 1, 1);
    }
L_000a68f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6944;
        }
    }
L_000a68f8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000022u, 1, 1);
    }
L_000a68fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a68b0;
        }
    }
L_000a6900:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a6904:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_000a6908:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000a690c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000a6910:;
    {
        wr8(cpu->r[3] + + 0x10u, cpu->r[12]);
    }
L_000a6914:;
    {
        goto L_000a68b0;
    }
L_000a6918:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a691c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[10], 0, 0);
    }
L_000a6920:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a6924:;
    {
        cpu->r[12] = cpu->r[10];
    }
L_000a6928:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[9], 2, 4u, &shc), 0, 0);
    }
L_000a692c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000a6930:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000a6934:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a6938:;
    {
        wr8(cpu->r[2] + + 0x10u, cpu->r[1]);
    }
L_000a693c:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_000a6940:;
    {
        goto L_000a67dc;
    }
L_000a6944:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a6948:;
    {
        cpu->r[0] = 0x00000009u;
    }
L_000a694c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_000a6950:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000a6954:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000a6958:;
    {
        wr8(cpu->r[3] + + 0x10u, cpu->r[0]);
    }
L_000a695c:;
    {
        goto L_000a68b0;
    }
L_000a6960:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a6964:;
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
L_000a6968:;
    {
        return fn_000a6990(cpu);
    }
L_000a696c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a6970:;
    {
        cpu->r[8] = rd32(0x000a6978u + + 0x10u);
    }
L_000a6974:;
    {
        cpu->r[6] = rd32(0x000a697cu + + 0x10u);
    }
L_000a6978:;
    {
        goto L_000a684c;
    }
}

/* _Z10parseArrayv @ 000a6990 (arm) */
void fn_000a6990(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6990:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000a6994:;
    {
        cpu->r[4] = rd32(0x000a699cu + + 0xc8u);
    }
L_000a6998:;
    {
        cpu->r[14] = 0x000a699cu; fn_000a65c0(cpu);
    }
L_000a699c:;
    {
        cpu->r[5] = rd32(0x000a69a4u + + 0xc4u);
    }
L_000a69a0:;
    {
        cpu->r[6] = rd32(0x000a69a8u + + 0xc4u);
    }
L_000a69a4:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a69acu, cpu->r[4], 0, 0);
    }
L_000a69a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a69ac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a69b0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000a69b4:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000a69b8:;
    {
        cpu->r[1] = rd8(cpu->r[1] + cpu->r[2]);
    }
L_000a69bc:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000007bu, 1, 1);
    }
L_000a69c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a69cc;
        }
    }
L_000a69c4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000a69c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a69ccu)) return;
    }
L_000a69cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000a69d0:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000a69d4:;
    {
        cpu->r[14] = 0x000a69d8u; fn_000a65c0(cpu);
    }
L_000a69d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a69dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a69e0:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000a69e4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a69e8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_000a69ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007bu, 1, 1);
    }
L_000a69f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6a30;
        }
    }
L_000a69f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007du, 1, 1);
    }
L_000a69f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6a54;
        }
    }
L_000a69fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000002cu, 1, 1);
    }
L_000a6a00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6a48;
        }
    }
L_000a6a04:;
    {
        cpu->r[14] = 0x000a6a08u; fn_000a6634(cpu);
    }
L_000a6a08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a6a0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a69c4;
        }
    }
L_000a6a10:;
    {
        cpu->r[14] = 0x000a6a14u; fn_000a65c0(cpu);
    }
L_000a6a14:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a6a18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a6a1c:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000a6a20:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a6a24:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_000a6a28:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007bu, 1, 1);
    }
L_000a6a2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a69f4;
        }
    }
L_000a6a30:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000a6a34:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_000a6a38:;
    {
        cpu->r[14] = 0x000a6a3cu; fn_000a6990(cpu);
    }
L_000a6a3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a6a40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a69d4;
        }
    }
L_000a6a44:;
    {
        goto L_000a69c4;
    }
L_000a6a48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000a6a4c:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_000a6a50:;
    {
        goto L_000a69d4;
    }
L_000a6a54:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000a6a58:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000a6a5c:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_000a6a60:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a6a64u)) return;
    }
}

/* JSon_Parse @ 000a6a70 (arm) */
void fn_000a6a70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6a70:;
    {
        cpu->r[3] = rd32(0x000a6a78u + + 0x34u);
    }
L_000a6a74:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a6a78:;
    {
        cpu->r[1] = rd32(0x000a6a80u + + 0x30u);
    }
L_000a6a7c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a6a84u, cpu->r[3], 0, 0);
    }
L_000a6a80:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000a6a84:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000a6a88:;
    {
        cpu->r[4] = rd32(0x000a6a90u + + 0x24u);
    }
L_000a6a8c:;
    {
        cpu->r[1] = rd32(0x000a6a94u + + 0x24u);
    }
L_000a6a90:;
    {
        wr32(cpu->r[12], cpu->r[2]);
    }
L_000a6a94:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000a6a98:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_000a6a9c:;
    {
        wr32(cpu->r[1], cpu->r[0]);
    }
L_000a6aa0:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000a6aa4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000a6aa8:;
    {
        return fn_000a6990(cpu);
    }
}

/* Json_GetCount @ 000a6abc (arm) */
void fn_000a6abc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6abc:;
    {
        cpu->r[3] = rd32(0x000a6ac4u + + 0x10u);
    }
L_000a6ac0:;
    {
        cpu->r[2] = rd32(0x000a6ac8u + + 0x10u);
    }
L_000a6ac4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a6accu, cpu->r[3], 0, 0);
    }
L_000a6ac8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a6acc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a6ad0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* JSon_Get @ 000a6adc (arm) */
void fn_000a6adc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6adc:;
    {
        cpu->r[3] = rd32(0x000a6ae4u + + 0x64u);
    }
L_000a6ae0:;
    {
        cpu->r[2] = rd32(0x000a6ae8u + + 0x64u);
    }
L_000a6ae4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a6aecu, cpu->r[3], 0, 0);
    }
L_000a6ae8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000a6aec:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a6af0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000a6af4:;
    {
        cpu->r[6] = rd32(cpu->r[2]);
    }
L_000a6af8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000a6afc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a6b40;
        }
    }
L_000a6b00:;
    {
        cpu->r[2] = rd32(0x000a6b08u + + 0x48u);
    }
L_000a6b04:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a6b08:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a6b0c:;
    {
        goto L_000a6b18;
    }
L_000a6b10:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_000a6b14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6b40;
        }
    }
L_000a6b18:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 3u, &shc), 0, 0);
    }
L_000a6b1c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000a6b20:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000a6b24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], shifter(cpu->r[5], 2, 4u, &shc), 0, 0);
    }
L_000a6b28:;
    {
        cpu->r[14] = 0x000a6b2cu; imp_strcmp(cpu); /* strcmp */
    }
L_000a6b2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a6b30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a6b10;
        }
    }
L_000a6b34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000a6b38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_000a6b3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a6b40u)) return;
    }
L_000a6b40:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000a6b44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a6b48u)) return;
    }
}

/* _ZN11gxGameState14ForceTerminateEv @ 000a6b54 (arm) */
void fn_000a6b54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6b54:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState16UpdateSlowMotionEv @ 000a6b58 (arm) */
void fn_000a6b58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6b58:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState15ResetSlowMotionEv @ 000a6b5c (arm) */
void fn_000a6b5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6b5c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState18UpdateCarsConstFPSEv @ 000a6b60 (arm) */
void fn_000a6b60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6b60:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState20SavePositionConstFPSEv @ 000a6b64 (arm) */
void fn_000a6b64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6b64:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11gxGameState12updateReplayEb @ 000a6b68 (arm) */
void fn_000a6b68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6b68:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CPanel8isKindOfEi @ 000a6b6c (arm) */
void fn_000a6b6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6b6c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 1);
    }
L_000a6b70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a6b74:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a6b78:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CPanel14SetReturnValueEi @ 000a6b7c (arm) */
void fn_000a6b7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6b7c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x88cu);
    }
L_000a6b80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a6b84:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3], cpu->r[1]);
        }
    }
L_000a6b88:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CPanel17SetVpDiffPortraitEiiii @ 000a6b8c (arm) */
void fn_000a6b8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6b8c:;
    {
        wr32(cpu->r[0] + + 0x890u, cpu->r[1]);
    }
L_000a6b90:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_000a6b94:;
    {
        wr32(cpu->r[0] + + 0x894u, cpu->r[2]);
    }
L_000a6b98:;
    {
        wr32(cpu->r[0] + + 0x898u, cpu->r[3]);
    }
L_000a6b9c:;
    {
        wr32(cpu->r[0] + + 0x89cu, cpu->r[1]);
    }
L_000a6ba0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CPanel18SetVpDiffLandscapeEiiii @ 000a6ba4 (arm) */
void fn_000a6ba4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6ba4:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_000a6ba8:;
    {
        wr32(cpu->r[0] + + 0x8a0u, cpu->r[1]);
    }
L_000a6bac:;
    {
        wr32(cpu->r[0] + + 0x8a8u, cpu->r[3]);
    }
L_000a6bb0:;
    {
        wr32(cpu->r[0] + + 0x8acu, cpu->r[2]);
    }
L_000a6bb4:;
    {
        wr32(cpu->r[0] + + 0x8a4u, cpu->r[2]);
    }
L_000a6bb8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CPanel24ProcessOnMouseButtonDownEv @ 000a6bbc (arm) */
void fn_000a6bbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6bbc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000a6bc0:;
    {
        wr8(cpu->r[0] + + 0x9d8u, cpu->r[3]);
    }
L_000a6bc4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CPanel22ProcessOnMouseButtonUpEv @ 000a6bc8 (arm) */
void fn_000a6bc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6bc8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a6bcc:;
    {
        wr8(cpu->r[0] + + 0x9d8u, cpu->r[3]);
    }
L_000a6bd0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_1 @ 000a6bd4 (arm) */
void fn_000a6bd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6bd4:;
    {
        cpu->r[3] = rd32(0x000a6bdcu + + 0x20u);
    }
L_000a6bd8:;
    {
        cpu->r[1] = rd32(0x000a6be0u + + 0x20u);
    }
L_000a6bdc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a6be4u, cpu->r[3], 0, 0);
    }
L_000a6be0:;
    {
        cpu->r[2] = rd32(0x000a6be8u + + 0x1cu);
    }
L_000a6be4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000a6be8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a6bf0u, cpu->r[2], 0, 0);
    }
L_000a6bec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a6bf0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_000a6bf4:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_000a6bf8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CPanel6UpdateEv @ 000a6c08 (arm) */
void fn_000a6c08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a6c08:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x78u);
    }
L_000a6c0c:;
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
L_000a6c10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a6c14:;
    {
        cpu->r[5] = rd32(0x000a6c1cu + + 0x470u);
    }
L_000a6c18:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000a6c1c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a6c20:;
    {
        cpu->r[5] = add_flags(cpu, 0x000a6c28u, cpu->r[5], 0, 0);
    }
L_000a6c24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6cdc;
        }
    }
L_000a6c28:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_000a6c2c:;
    {
        cpu->r[6] = 0x00005f60u;
    }
L_000a6c30:;
    {
        cpu->r[14] = 0x000a6c34u; fn_000f34c4(cpu);
    }
L_000a6c34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_000a6c38:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[6]);
    }
L_000a6c3c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a6c40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6c8c;
        }
    }
L_000a6c44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a6c48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6d3c;
        }
    }
L_000a6c4c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000a6c50:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a6c54:;
    {
        cpu->r[14] = 0x000a6c5cu;
    }
L_000a6c58:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a6c5cu)) return;
    }
L_000a6c5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a6c60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6d2c;
        }
    }
L_000a6c64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000a6c68:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000a6c6c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000a6c70:;
    {
        cpu->r[14] = 0x000a6c74u; fn_000d7ee4(cpu);
    }
L_000a6c74:;
    {
        cpu->r[3] = rd32(0x000a6c7cu + + 0x414u);
    }
L_000a6c78:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a6c7c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000a6c80:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_000a6c84:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000a6c88:;
    {
        cpu->r[14] = 0x000a6c8cu; fn_00151c40(cpu);
    }
L_000a6c8c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x80u);
    }
L_000a6c90:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000a6c94:;
    {
        wr8(cpu->r[4] + + 0x984u, cpu->r[12]);
    }
L_000a6c98:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_000a6c9c:;
    {
        wr8(cpu->r[4] + + 0x940u, cpu->r[12]);
    }
L_000a6ca0:;
    {
        wr8(cpu->r[4] + + 0x9c8u, cpu->r[12]);
    }
L_000a6ca4:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[12]);
    }
L_000a6ca8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6d9c;
        }
    }
L_000a6cac:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_000a6cb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a7064;
        }
    }
L_000a6cb4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[12], 1, 1);
    }
L_000a6cb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a6cd4;
        }
    }
L_000a6cbc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x84u);
    }
L_000a6cc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000a6cc4:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[3]);
    }
L_000a6cc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_000a6ccc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000a6cd0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x80u, cpu->r[3]);
        }
    }
L_000a6cd4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a6cd8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a6cdcu)) return;
    }
L_000a6cdc:;
    {
        cpu->r[1] = rd32(0x000a6ce4u + + 0x3b0u);
    }
L_000a6ce0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a6ce4:;
    {
        cpu->r[2] = rd32(0x000a6cecu + + 0x3acu);
    }
L_000a6ce8:;
    {
        cpu->r[14] = 0x0000006bu;
    }
L_000a6cec:;
    {
        cpu->r[3] = rd32(0x000a6cf4u + + 0x3a8u);
    }
L_000a6cf0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a6cf8u, cpu->r[1], 0, 0);
    }
L_000a6cf4:;
    {
        cpu->r[12] = rd32(0x000a6cfcu + + 0x3a4u);
    }
L_000a6cf8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a6d00u, cpu->r[2], 0, 0);
    }
L_000a6cfc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a6d04u, cpu->r[3], 0, 0);
    }
L_000a6d00:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000a6d04:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a6d0cu, cpu->r[12], 0, 0);
    }
L_000a6d08:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a6d0c:;
    {
        cpu->r[14] = 0x000a6d10u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a6d10:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a6d14:;
    {
        cpu->r[3] = rd32(0x000a6d1cu + + 0x390u);
    }
L_000a6d18:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a6d1c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a6d20:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a6d24:;
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
L_000a6d28:;
    {
        return fn_000f34e8(cpu);
    }
L_000a6d2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_000a6d30:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[6]);
    }
L_000a6d34:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a6d38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6c8c;
        }
    }
L_000a6d3c:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_000a6d40:;
    {
        cpu->r[6] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000a6d44:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000a6d48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a6c8c;
        }
    }
L_000a6d4c:;
    {
        cpu->r[2] = 0x00006737u;
    }
L_000a6d50:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000a6d54:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a6d58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6c8c;
        }
    }
L_000a6d5c:;
    {
        cpu->r[7] = 0x00001bc8u;
    }
L_000a6d60:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_000a6d64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a6d68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6c8c;
        }
    }
L_000a6d6c:;
    {
        cpu->r[14] = 0x000a6d70u; fn_000c1cd8(cpu);
    }
L_000a6d70:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000a6d74:;
    {
        cpu->r[3] = 0x00004bf8u;
    }
L_000a6d78:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000a6d7c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[7]);
    }
L_000a6d80:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000a6d84:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a6d88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6c8c;
        }
    }
L_000a6d8c:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[6]);
    }
L_000a6d90:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a6d94:;
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
L_000a6d98:;
    {
        return fn_000bd908(cpu);
    }
L_000a6d9c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000a6da0:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000a6da4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000a6da8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000a6dac:;
    {
        { uint32_t v = cpu->r[3] & 0x00200000u; set_nz(cpu, v); }
    }
L_000a6db0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a7350;
        }
    }
L_000a6db4:;
    {
        cpu->r[7] = rd32(0x000a6dbcu + + 0x2f0u);
    }
L_000a6db8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x9d8u);
    }
L_000a6dbc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a6dc0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a70b0;
        }
    }
L_000a6dc4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000008c0u, 0, 0);
    }
L_000a6dc8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000008c0u, 0, 0);
    }
L_000a6dcc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000008d0u, 0, 0);
    }
L_000a6dd0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_000a6dd4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000a6dd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000008d0u, 0, 0);
    }
L_000a6ddc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000a6de0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000a6de4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000a6de8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2]);
    }
L_000a6dec:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3]);
    }
L_000a6df0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x7cu);
    }
L_000a6df4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000a6df8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a6f04;
        }
    }
L_000a6dfc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000a6e00:;
    {
        cpu->r[3] = 0x000084a8u;
    }
L_000a6e04:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_000a6e08:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000a6e0c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a6e10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6f1c;
        }
    }
L_000a6e14:;
    {
        *vfp_s(cpu, 9) = *(float*)G(0x000a6e1cu + + 0x268u);
    }
L_000a6e18:;
    {
        vfp_vsub(cpu, 10, 14, 9);
    }
L_000a6e1c:;
    {
        cpu->r[2] = 0x000084a0u;
    }
L_000a6e20:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000a6e24:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[2];
    }
L_000a6e28:;
    {
        cpu->r[2] = 0x000084a4u;
    }
L_000a6e2c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000a6e30:;
    {
        *(int32_t*)vfp_s(cpu,10) = (int32_t)*vfp_s(cpu,10);
    }
L_000a6e34:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000a6e38:;
    {
        *vfp_s(cpu,8) = (float)*(int32_t*)vfp_s(cpu,10);
    }
L_000a6e3c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,8), *vfp_s(cpu,11));
    }
L_000a6e40:;
    {
        vfp_sync_flags(cpu);
    }
L_000a6e44:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a6f1c;
        }
    }
L_000a6e48:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_000a6e4c:;
    {
        *vfp_s(cpu, 8) = *(float*)G(0x000a6e54u + + 0x234u);
    }
L_000a6e50:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,10);
    }
L_000a6e54:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x0000000au, 0, 0);
    }
L_000a6e58:;
    {
        vfp_vadd(cpu, 14, 14, 8);
    }
L_000a6e5c:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000a6e60:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000a6e64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_000a6e68:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000a6e6c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000a6e70:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,11));
    }
L_000a6e74:;
    {
        vfp_sync_flags(cpu);
    }
L_000a6e78:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a6f34;
        }
    }
L_000a6e7c:;
    {
        vfp_vsub(cpu, 13, 15, 9);
    }
L_000a6e80:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[2];
    }
L_000a6e84:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000a6e88:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000a6e8c:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000a6e90:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), *vfp_s(cpu,14));
    }
L_000a6e94:;
    {
        vfp_sync_flags(cpu);
    }
L_000a6e98:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a6f34;
        }
    }
L_000a6e9c:;
    {
        vfp_vsub(cpu, 15, 12, 15);
    }
L_000a6ea0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000a6ea4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x0000000au, 0, 0);
    }
L_000a6ea8:;
    {
        vfp_vadd(cpu, 15, 15, 8);
    }
L_000a6eac:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000a6eb0:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a6eb4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_000a6eb8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_000a6ebc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000a6ec0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000a6ec4:;
    {
        vfp_sync_flags(cpu);
    }
L_000a6ec8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a6f34;
        }
    }
L_000a6ecc:;
    {
        wr32(cpu->r[12] + cpu->r[3], cpu->r[6]);
    }
L_000a6ed0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000a6ed4:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x490u);
    }
L_000a6ed8:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_000a6edc:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_000a6ee0:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[3]);
    }
L_000a6ee4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000a6ee8:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000a6eec:;
    {
        cpu->r[14] = 0x000a6ef0u; fn_000fd248(cpu);
    }
L_000a6ef0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a6ef4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a6ef8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a6efc:;
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
L_000a6f00:;
    {
        return fn_000a6b7c(cpu);
    }
L_000a6f04:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000a6f08:;
    {
        cpu->r[3] = 0x000084a8u;
    }
L_000a6f0c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_000a6f10:;
    {
        cpu->r[12] = rd32(cpu->r[8]);
    }
L_000a6f14:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000a6f18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a7250;
        }
    }
L_000a6f1c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000a6f20:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000a6f24:;
    {
        cpu->r[3] = 0x000084a8u;
    }
L_000a6f28:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000a6f2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a6f30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6cd4;
        }
    }
L_000a6f34:;
    {
        cpu->r[3] = 0x000084a0u;
    }
L_000a6f38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000900u, 0, 0);
    }
L_000a6f3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000a6f40:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000a6f44:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000a6f48:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000a6f4c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000a6f50:;
    {
        cpu->r[3] = 0x000084a4u;
    }
L_000a6f54:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000a6f58:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000a6f5c:;
    {
        vfp_sync_flags(cpu);
    }
L_000a6f60:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a739c;
        }
    }
L_000a6f64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000910u, 0, 0);
    }
L_000a6f68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000a6f6c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000a6f70:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000a6f74:;
    {
        vfp_sync_flags(cpu);
    }
L_000a6f78:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a739c;
        }
    }
L_000a6f7c:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_000a6f80:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000a6f84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000910u, 0, 0);
    }
L_000a6f88:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_000a6f8c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,14));
    }
L_000a6f90:;
    {
        vfp_sync_flags(cpu);
    }
L_000a6f94:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a739c;
        }
    }
L_000a6f98:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000910u, 0, 0);
    }
L_000a6f9c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000a6fa0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1]);
    }
L_000a6fa4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,13));
    }
L_000a6fa8:;
    {
        vfp_sync_flags(cpu);
    }
L_000a6fac:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a739c;
        }
    }
L_000a6fb0:;
    {
        cpu->r[1] = 0x000084a8u;
    }
L_000a6fb4:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_000a6fb8:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x490u);
    }
L_000a6fbc:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_000a6fc0:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_000a6fc4:;
    {
        cpu->r[6] = 0x00000002u;
    }
L_000a6fc8:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[6]);
    }
L_000a6fcc:;
    {
        wr32(cpu->r[12] + cpu->r[1], cpu->r[14]);
    }
L_000a6fd0:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_000a6fd4:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000a6fd8:;
    {
        cpu->r[14] = 0x000a6fdcu; fn_000fd248(cpu);
    }
L_000a6fdc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a6fe0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000a6fe4:;
    {
        cpu->r[14] = 0x000a6fe8u; fn_000a6b7c(cpu);
    }
L_000a6fe8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000a6fec:;
    {
        cpu->r[14] = 0x000a6ff0u; fn_000f34c4(cpu);
    }
L_000a6ff0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000a6ff4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000a6ff8:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000a6ffc:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000a7000:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a7004:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6cd4;
        }
    }
L_000a7008:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_000a700c:;
    {
        cpu->r[5] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000a7010:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000a7014:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a6cd4;
        }
    }
L_000a7018:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a701c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6cd4;
        }
    }
L_000a7020:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000a7024:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a7028:;
    {
        cpu->r[14] = 0x000a7030u;
    }
L_000a702c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a7030u)) return;
    }
L_000a7030:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a7034:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6cd4;
        }
    }
L_000a7038:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000a703c:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000a7040:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000a7044:;
    {
        cpu->r[14] = 0x000a7048u; fn_000ba5d4(cpu);
    }
L_000a7048:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000a704c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000a7050:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000a7054:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000a7058:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a705c:;
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
L_000a7060:;
    {
        return fn_0009b14c(cpu);
    }
L_000a7064:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x84u);
    }
L_000a7068:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000a706c:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[3]);
    }
L_000a7070:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a7074:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a6cd4;
        }
    }
L_000a7078:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a707c:;
    {
        wr8(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_000a7080:;
    {
        goto L_000a6d14;
    }
L_000a70b0:;
    {
        cpu->r[3] = rd32(0x000a70b8u + - 0x14u);
    }
L_000a70b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000900u, 0, 0);
    }
L_000a70b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000a70bc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000a70c0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a70c4:;
    {
        cpu->r[3] = rd32(0x000a70ccu + - 0x24u);
    }
L_000a70c8:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_000a70cc:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_000a70d0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000a70d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a70d8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_000a70dc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000a70e0:;
    {
        vfp_sync_flags(cpu);
    }
L_000a70e4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a7138;
        }
    }
L_000a70e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000910u, 0, 0);
    }
L_000a70ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000a70f0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_000a70f4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000a70f8:;
    {
        vfp_sync_flags(cpu);
    }
L_000a70fc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a7138;
        }
    }
L_000a7100:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_000a7104:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000a7108:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000910u, 0, 0);
    }
L_000a710c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_000a7110:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,14));
    }
L_000a7114:;
    {
        vfp_sync_flags(cpu);
    }
L_000a7118:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a7138;
        }
    }
L_000a711c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000910u, 0, 0);
    }
L_000a7120:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000a7124:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1]);
    }
L_000a7128:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,13));
    }
L_000a712c:;
    {
        vfp_sync_flags(cpu);
    }
L_000a7130:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000a7134:;
    {
        if (cond_test(cpu, 10)) {
        wr8(cpu->r[4] + + 0x940u, cpu->r[2]);
        }
    }
L_000a7138:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000950u, 0, 0);
    }
L_000a713c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000a7140:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000a7144:;
    {
        vfp_sync_flags(cpu);
    }
L_000a7148:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a71a0;
        }
    }
L_000a714c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000950u, 0, 0);
    }
L_000a7150:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_000a7154:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000a7158:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000a715c:;
    {
        vfp_sync_flags(cpu);
    }
L_000a7160:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a71a0;
        }
    }
L_000a7164:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_000a7168:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000a716c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000950u, 0, 0);
    }
L_000a7170:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000a7174:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_000a7178:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,14));
    }
L_000a717c:;
    {
        vfp_sync_flags(cpu);
    }
L_000a7180:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a71a0;
        }
    }
L_000a7184:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000950u, 0, 0);
    }
L_000a7188:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000a718c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1]);
    }
L_000a7190:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,13));
    }
L_000a7194:;
    {
        vfp_sync_flags(cpu);
    }
L_000a7198:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000a719c:;
    {
        if (cond_test(cpu, 10)) {
        wr8(cpu->r[4] + + 0x984u, cpu->r[2]);
        }
    }
L_000a71a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000990u, 0, 0);
    }
L_000a71a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000a71a8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000a71ac:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000a71b0:;
    {
        vfp_sync_flags(cpu);
    }
L_000a71b4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a7208;
        }
    }
L_000a71b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000990u, 0, 0);
    }
L_000a71bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000a71c0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000a71c4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000a71c8:;
    {
        vfp_sync_flags(cpu);
    }
L_000a71cc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a7208;
        }
    }
L_000a71d0:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_000a71d4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000a71d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000990u, 0, 0);
    }
L_000a71dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_000a71e0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_000a71e4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,14));
    }
L_000a71e8:;
    {
        vfp_sync_flags(cpu);
    }
L_000a71ec:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a7208;
        }
    }
L_000a71f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000009a0u, 0, 0);
    }
L_000a71f4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1]);
    }
L_000a71f8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,13));
    }
L_000a71fc:;
    {
        vfp_sync_flags(cpu);
    }
L_000a7200:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000a7204:;
    {
        if (cond_test(cpu, 10)) {
        wr8(cpu->r[4] + + 0x9c8u, cpu->r[2]);
        }
    }
L_000a7208:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000008c0u, 0, 0);
    }
L_000a720c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000a7210:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000a7214:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000a7218:;
    {
        vfp_sync_flags(cpu);
    }
L_000a721c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a732c;
        }
    }
L_000a7220:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000008d0u, 0, 0);
    }
L_000a7224:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2]);
    }
L_000a7228:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000a722c:;
    {
        vfp_sync_flags(cpu);
    }
L_000a7230:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000a74a0;
        }
    }
L_000a7234:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000008c0u, 0, 0);
    }
L_000a7238:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000008d0u, 0, 0);
    }
L_000a723c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000a7240:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000a7244:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000a7248:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0]);
    }
L_000a724c:;
    {
        goto L_000a6df0;
    }
L_000a7250:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a7254:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6cd4;
        }
    }
L_000a7258:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000990u, 0, 0);
    }
L_000a725c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000a7260:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000a7264:;
    {
        cpu->r[2] = 0x000084a0u;
    }
L_000a7268:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000a726c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_000a7270:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000a7274:;
    {
        cpu->r[2] = 0x000084a4u;
    }
L_000a7278:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000a727c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000a7280:;
    {
        vfp_sync_flags(cpu);
    }
L_000a7284:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a6f34;
        }
    }
L_000a7288:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000990u, 0, 0);
    }
L_000a728c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000a7290:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000a7294:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000a7298:;
    {
        vfp_sync_flags(cpu);
    }
L_000a729c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a6f34;
        }
    }
L_000a72a0:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[2];
    }
L_000a72a4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000a72a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000990u, 0, 0);
    }
L_000a72ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_000a72b0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000a72b4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000a72b8:;
    {
        vfp_sync_flags(cpu);
    }
L_000a72bc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a6f34;
        }
    }
L_000a72c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000009a0u, 0, 0);
    }
L_000a72c4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_000a72c8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000a72cc:;
    {
        vfp_sync_flags(cpu);
    }
L_000a72d0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a6f34;
        }
    }
L_000a72d4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000a72d8:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_000a72dc:;
    {
        wr32(cpu->r[12] + cpu->r[3], cpu->r[5]);
    }
L_000a72e0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000a72e4:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[6]);
    }
L_000a72e8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000a72ec:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x490u);
    }
L_000a72f0:;
    {
        cpu->r[14] = 0x000a72f4u; fn_000fd224(cpu);
    }
L_000a72f4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000a72f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a7318;
        }
    }
L_000a72fc:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000a7300:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000a7304:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_000a7308:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000a730c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000a7310:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000a7314:;
    {
        cpu->r[14] = 0x000a7318u; fn_000fd248(cpu);
    }
L_000a7318:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a731c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000a7320:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a7324:;
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
L_000a7328:;
    {
        return fn_000a6b7c(cpu);
    }
L_000a732c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000008c0u, 0, 0);
    }
L_000a7330:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000008d0u, 0, 0);
    }
L_000a7334:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000a7338:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000008d0u, 0, 0);
    }
L_000a733c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000a7340:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000a7344:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_000a7348:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1]);
    }
L_000a734c:;
    {
        goto L_000a6df0;
    }
L_000a7350:;
    {
        cpu->r[7] = rd32(0x000a7358u + - 0x2acu);
    }
L_000a7354:;
    {
        cpu->r[14] = 0x000084a8u;
    }
L_000a7358:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000a735c:;
    {
        cpu->r[8] = 0x00000002u;
    }
L_000a7360:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000a7364:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[8]);
    }
L_000a7368:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000a736c:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_000a7370:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000a7374:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x490u);
    }
L_000a7378:;
    {
        wr32(cpu->r[0] + cpu->r[14], cpu->r[12]);
    }
L_000a737c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a7380:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a7384:;
    {
        cpu->r[14] = 0x000a7388u; fn_000fd248(cpu);
    }
L_000a7388:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a738c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000a7390:;
    {
        cpu->r[14] = 0x000a7394u; fn_000a6b7c(cpu);
    }
L_000a7394:;
    {
        wr8(cpu->r[4] + + 0x9d9u, cpu->r[6]);
    }
L_000a7398:;
    {
        goto L_000a6db8;
    }
L_000a739c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000950u, 0, 0);
    }
L_000a73a0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000a73a4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000a73a8:;
    {
        vfp_sync_flags(cpu);
    }
L_000a73ac:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a6cd4;
        }
    }
L_000a73b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000950u, 0, 0);
    }
L_000a73b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_000a73b8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000a73bc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000a73c0:;
    {
        vfp_sync_flags(cpu);
    }
L_000a73c4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a6cd4;
        }
    }
L_000a73c8:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_000a73cc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000a73d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000950u, 0, 0);
    }
L_000a73d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000a73d8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000a73dc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000a73e0:;
    {
        vfp_sync_flags(cpu);
    }
L_000a73e4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a6cd4;
        }
    }
L_000a73e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000950u, 0, 0);
    }
L_000a73ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000a73f0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_000a73f4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000a73f8:;
    {
        vfp_sync_flags(cpu);
    }
L_000a73fc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a6cd4;
        }
    }
L_000a7400:;
    {
        cpu->r[6] = 0x00000002u;
    }
L_000a7404:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[6]);
    }
L_000a7408:;
    {
        cpu->r[6] = 0x000084a8u;
    }
L_000a740c:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_000a7410:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x490u);
    }
L_000a7414:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_000a7418:;
    {
        wr32(cpu->r[12] + cpu->r[6], cpu->r[14]);
    }
L_000a741c:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_000a7420:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_000a7424:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000a7428:;
    {
        cpu->r[14] = 0x000a742cu; fn_000fd248(cpu);
    }
L_000a742c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a7430:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000a7434:;
    {
        cpu->r[14] = 0x000a7438u; fn_000a6b7c(cpu);
    }
L_000a7438:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000a743c:;
    {
        cpu->r[14] = 0x000a7440u; fn_000f34c4(cpu);
    }
L_000a7440:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000a7444:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000a7448:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_000a744c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000a7450:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a7454:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6cd4;
        }
    }
L_000a7458:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_000a745c:;
    {
        cpu->r[5] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000a7460:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000a7464:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a6cd4;
        }
    }
L_000a7468:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a746c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6cd4;
        }
    }
L_000a7470:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000a7474:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a7478:;
    {
        cpu->r[14] = 0x000a7480u;
    }
L_000a747c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a7480u)) return;
    }
L_000a7480:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a7484:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a6cd4;
        }
    }
L_000a7488:;
    {
        wr8(cpu->r[4] + + 0x78u, cpu->r[5]);
    }
L_000a748c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a7490:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000a7494:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a7498:;
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
L_000a749c:;
    {
        return fn_000f34e8(cpu);
    }
L_000a74a0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000a74a4:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000a74a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000008c0u, 0, 0);
    }
L_000a74ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000a74b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000a74b4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,11));
    }
L_000a74b8:;
    {
        vfp_sync_flags(cpu);
    }
L_000a74bc:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000008d0u, 0, 0);
        }
    }
L_000a74c0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
        }
    }
L_000a74c4:;
    {
        if (cond_test(cpu, 9)) {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1]);
        }
    }
L_000a74c8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a6df0;
        }
    }
L_000a74cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000008d0u, 0, 0);
    }
L_000a74d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000a74d4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2]);
    }
L_000a74d8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), *vfp_s(cpu,12));
    }
L_000a74dc:;
    {
        vfp_sync_flags(cpu);
    }
L_000a74e0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000a74e4:;
    {
        if (cond_test(cpu, 10)) {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[3]);
        }
    }
L_000a74e8:;
    {
        goto L_000a6df0;
    }
}

/* _ZN6CPanelD1Ev @ 000a74ec (arm) */
void fn_000a74ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a74ec:;
    {
        cpu->r[3] = rd32(0x000a74f4u + + 0x24u);
    }
L_000a74f0:;
    {
        cpu->r[2] = rd32(0x000a74f8u + + 0x24u);
    }
L_000a74f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a74fcu, cpu->r[3], 0, 0);
    }
L_000a74f8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000a74fc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a7500:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a7504:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000a7508:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000a750c:;
    {
        cpu->r[14] = 0x000a7510u; fn_000ec084(cpu);
    }
L_000a7510:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a7514:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000a7518u)) return;
    }
}

/* _ZN6CPanelD0Ev @ 000a7520 (arm) */
void fn_000a7520(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a7520:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000a7524:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a7528:;
    {
        cpu->r[14] = 0x000a752cu; fn_000a74ec(cpu);
    }
L_000a752c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a7530:;
    {
        cpu->r[14] = 0x000a7534u; fn_0018ba20(cpu);
    }
L_000a7534:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a7538:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000a753cu)) return;
    }
}

/* _ZN6CPanelD2Ev @ 000a753c (arm) */
void fn_000a753c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a753c:;
    {
        cpu->r[3] = rd32(0x000a7544u + + 0x24u);
    }
L_000a7540:;
    {
        cpu->r[2] = rd32(0x000a7548u + + 0x24u);
    }
L_000a7544:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a754cu, cpu->r[3], 0, 0);
    }
L_000a7548:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000a754c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a7550:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a7554:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000a7558:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000a755c:;
    {
        cpu->r[14] = 0x000a7560u; fn_000ec084(cpu);
    }
L_000a7560:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a7564:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000a7568u)) return;
    }
}

/* _ZN6CPanelC1Ev @ 000a7570 (arm) */
void fn_000a7570(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a7570:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000a7574:;
    {
        cpu->r[5] = rd32(0x000a757cu + + 0x84u);
    }
L_000a7578:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a757c:;
    {
        cpu->r[14] = 0x000a7580u; fn_000eaca4(cpu);
    }
L_000a7580:;
    {
        cpu->r[2] = rd32(0x000a7588u + + 0x7cu);
    }
L_000a7584:;
    {
        cpu->r[5] = add_flags(cpu, 0x000a758cu, cpu->r[5], 0, 0);
    }
L_000a7588:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a758c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000a7594u + + 0x68u);
    }
L_000a7590:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a7594:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a7598:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000a759c:;
    {
        wr8(cpu->r[4] + + 0x9d4u, cpu->r[3]);
    }
L_000a75a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000a75a4:;
    {
        wr32(cpu->r[4] + + 0x9c0u, cpu->r[1]);
    }
L_000a75a8:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_000a75ac:;
    {
        wr8(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_000a75b0:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[3]);
    }
L_000a75b4:;
    {
        wr8(cpu->r[4] + + 0x8fdu, cpu->r[3]);
    }
L_000a75b8:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[1]);
    }
L_000a75bc:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[1]);
    }
L_000a75c0:;
    {
        wr8(cpu->r[4] + + 0x908u, cpu->r[3]);
    }
L_000a75c4:;
    {
        wr8(cpu->r[4] + + 0x940u, cpu->r[3]);
    }
L_000a75c8:;
    {
        wr8(cpu->r[4] + + 0x941u, cpu->r[3]);
    }
L_000a75cc:;
    {
        wr32(cpu->r[4] + + 0x93cu, cpu->r[1]);
    }
L_000a75d0:;
    {
        wr32(cpu->r[4] + + 0x938u, cpu->r[1]);
    }
L_000a75d4:;
    {
        wr8(cpu->r[4] + + 0x94cu, cpu->r[3]);
    }
L_000a75d8:;
    {
        wr8(cpu->r[4] + + 0x984u, cpu->r[3]);
    }
L_000a75dc:;
    {
        wr8(cpu->r[4] + + 0x985u, cpu->r[3]);
    }
L_000a75e0:;
    {
        wr32(cpu->r[4] + + 0x980u, cpu->r[1]);
    }
L_000a75e4:;
    {
        wr32(cpu->r[4] + + 0x97cu, cpu->r[1]);
    }
L_000a75e8:;
    {
        wr8(cpu->r[4] + + 0x990u, cpu->r[3]);
    }
L_000a75ec:;
    {
        wr8(cpu->r[4] + + 0x9c8u, cpu->r[3]);
    }
L_000a75f0:;
    {
        wr8(cpu->r[4] + + 0x9c9u, cpu->r[3]);
    }
L_000a75f4:;
    {
        wr32(cpu->r[4] + + 0x9c4u, cpu->r[1]);
    }
L_000a75f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a75fcu)) return;
    }
}

/* _ZN6CPanelC2Ev @ 000a7608 (arm) */
void fn_000a7608(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a7608:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000a760c:;
    {
        cpu->r[5] = rd32(0x000a7614u + + 0x84u);
    }
L_000a7610:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a7614:;
    {
        cpu->r[14] = 0x000a7618u; fn_000eaca4(cpu);
    }
L_000a7618:;
    {
        cpu->r[2] = rd32(0x000a7620u + + 0x7cu);
    }
L_000a761c:;
    {
        cpu->r[5] = add_flags(cpu, 0x000a7624u, cpu->r[5], 0, 0);
    }
L_000a7620:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a7624:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000a762cu + + 0x68u);
    }
L_000a7628:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a762c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a7630:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000a7634:;
    {
        wr8(cpu->r[4] + + 0x9d4u, cpu->r[3]);
    }
L_000a7638:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000a763c:;
    {
        wr32(cpu->r[4] + + 0x9c0u, cpu->r[1]);
    }
L_000a7640:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_000a7644:;
    {
        wr8(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_000a7648:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[3]);
    }
L_000a764c:;
    {
        wr8(cpu->r[4] + + 0x8fdu, cpu->r[3]);
    }
L_000a7650:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[1]);
    }
L_000a7654:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[1]);
    }
L_000a7658:;
    {
        wr8(cpu->r[4] + + 0x908u, cpu->r[3]);
    }
L_000a765c:;
    {
        wr8(cpu->r[4] + + 0x940u, cpu->r[3]);
    }
L_000a7660:;
    {
        wr8(cpu->r[4] + + 0x941u, cpu->r[3]);
    }
L_000a7664:;
    {
        wr32(cpu->r[4] + + 0x93cu, cpu->r[1]);
    }
L_000a7668:;
    {
        wr32(cpu->r[4] + + 0x938u, cpu->r[1]);
    }
L_000a766c:;
    {
        wr8(cpu->r[4] + + 0x94cu, cpu->r[3]);
    }
L_000a7670:;
    {
        wr8(cpu->r[4] + + 0x984u, cpu->r[3]);
    }
L_000a7674:;
    {
        wr8(cpu->r[4] + + 0x985u, cpu->r[3]);
    }
L_000a7678:;
    {
        wr32(cpu->r[4] + + 0x980u, cpu->r[1]);
    }
L_000a767c:;
    {
        wr32(cpu->r[4] + + 0x97cu, cpu->r[1]);
    }
L_000a7680:;
    {
        wr8(cpu->r[4] + + 0x990u, cpu->r[3]);
    }
L_000a7684:;
    {
        wr8(cpu->r[4] + + 0x9c8u, cpu->r[3]);
    }
L_000a7688:;
    {
        wr8(cpu->r[4] + + 0x9c9u, cpu->r[3]);
    }
L_000a768c:;
    {
        wr32(cpu->r[4] + + 0x9c4u, cpu->r[1]);
    }
L_000a7690:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a7694u)) return;
    }
}

/* _ZN6CPanel8ResumeMeEv @ 000a76a0 (arm) */
void fn_000a76a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a76a0:;
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
L_000a76a4:;
    {
        cpu->r[5] = rd32(0x000a76acu + + 0x41cu);
    }
L_000a76a8:;
    {
        cpu->r[10] = rd32(0x000a76b0u + + 0x41cu);
    }
L_000a76ac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_000a76b0:;
    {
        cpu->r[5] = add_flags(cpu, 0x000a76b8u, cpu->r[5], 0, 0);
    }
L_000a76b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a76b8:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000a76bc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a76c0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a76c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a780c;
        }
    }
L_000a76c8:;
    {
        cpu->r[9] = rd32(0x000a76d0u + + 0x400u);
    }
L_000a76cc:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_000a76d0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a76d4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000a76d8:;
    {
        cpu->r[14] = 0x000a76dcu; fn_0018aa44(cpu);
    }
L_000a76dc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000a76e0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000a76e4:;
    {
        cpu->r[14] = 0x000a76e8u; fn_000960f4(cpu);
    }
L_000a76e8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000a76ec:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000a76f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a76f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000a76f8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = add_flags(cpu, cpu->r[4], 0x00000890u, 0, 0);
        }
    }
L_000a76fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = add_flags(cpu, cpu->r[4], 0x000008a0u, 0, 0);
        }
    }
L_000a7700:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x890u);
        }
    }
L_000a7704:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8a0u);
        }
    }
L_000a7708:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000a770c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a7710:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a7714:;
    {
        wr32(cpu->r[4] + + 0x8b0u, cpu->r[3]);
    }
L_000a7718:;
    {
        cpu->r[3] = rd32(0x000a7720u + + 0x3b4u);
    }
L_000a771c:;
    {
        cpu->r[11] = rd32(cpu->r[14] + + 0x4u);
    }
L_000a7720:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a7724:;
    {
        cpu->r[3] = rd32(0x000a772cu + + 0x3acu);
    }
L_000a7728:;
    {
        wr32(cpu->r[4] + + 0x8b4u, cpu->r[11]);
    }
L_000a772c:;
    {
        cpu->r[7] = rd32(cpu->r[14] + + 0x8u);
    }
L_000a7730:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a7734:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000a7738:;
    {
        cpu->r[11] = rd32(cpu->r[6]);
    }
L_000a773c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[11], 0, 0);
    }
L_000a7740:;
    {
        wr32(cpu->r[4] + + 0x8b8u, cpu->r[7]);
    }
L_000a7744:;
    {
        cpu->r[14] = rd32(cpu->r[14] + + 0xcu);
    }
L_000a7748:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a774c:;
    {
        cpu->r[7] = rd32(cpu->r[8]);
    }
L_000a7750:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[7], 0, 0);
    }
L_000a7754:;
    {
        wr32(cpu->r[4] + + 0x8bcu, cpu->r[14]);
    }
L_000a7758:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000a775c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000a7760:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000a7764:;
    {
        cpu->r[14] = 0x000a7768u; fn_000a8a2c(cpu);
    }
L_000a7768:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000a776c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a7770:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_000a7774:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a7778:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x20u);
    }
L_000a777c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x24u);
    }
L_000a7780:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_000a7784:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000a7788:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 0);
    }
L_000a778c:;
    {
        cpu->r[1] = rd32(cpu->r[10]);
    }
L_000a7790:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 0);
    }
L_000a7794:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_000a7798:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a779c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_000a77a0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000a77a4:;
    {
        wr32(cpu->r[4] + + 0x8c0u, cpu->r[2]);
    }
L_000a77a8:;
    {
        wr32(cpu->r[4] + + 0x8c4u, cpu->r[3]);
    }
L_000a77ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a7850;
        }
    }
L_000a77b0:;
    {
        cpu->r[3] = rd32(0x000a77b8u + + 0x324u);
    }
L_000a77b4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a77b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a77bc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a77c0:;
    {
        cpu->r[14] = 0x000a77c4u; fn_000f3430(cpu);
    }
L_000a77c4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a77c8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000a77cc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000a77d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000002u;
        }
    }
L_000a77d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000015u;
        }
    }
L_000a77d8:;
    {
        cpu->r[14] = 0x000a77dcu; fn_0018aa44(cpu);
    }
L_000a77dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_000a77e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a77e4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
        }
    }
L_000a77e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_000a77ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_000a77f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a7890;
        }
    }
L_000a77f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000a77f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a79dc;
        }
    }
L_000a77fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000a7800:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a7938;
        }
    }
L_000a7804:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000a7808:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a780cu)) return;
    }
L_000a780c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a7810:;
    {
        cpu->r[14] = 0x000a7814u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a7814:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a7818:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a76c8;
        }
    }
L_000a781c:;
    {
        cpu->r[9] = rd32(0x000a7824u + + 0x2acu);
    }
L_000a7820:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000a7824:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a7828:;
    {
        cpu->r[14] = 0x000a782cu; fn_0018aa20(cpu);
    }
L_000a782c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a7830:;
    {
        cpu->r[14] = 0x000a7834u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a7834:;
    {
        cpu->r[3] = rd32(0x000a783cu + + 0x2a4u);
    }
L_000a7838:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a783c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a7840:;
    {
        cpu->r[3] = rd32(0x000a7848u + + 0x29cu);
    }
L_000a7844:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a7848:;
    {
        cpu->r[14] = 0x000a784cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000a784c:;
    {
        goto L_000a76cc;
    }
L_000a7850:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a7854:;
    {
        cpu->r[14] = 0x000a7858u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a7858:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a785c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a77b0;
        }
    }
L_000a7860:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000a7864:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a7868:;
    {
        cpu->r[14] = 0x000a786cu; fn_0018aa20(cpu);
    }
L_000a786c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a7870:;
    {
        cpu->r[14] = 0x000a7874u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a7874:;
    {
        cpu->r[3] = rd32(0x000a787cu + + 0x264u);
    }
L_000a7878:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a787c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a7880:;
    {
        cpu->r[3] = rd32(0x000a7888u + + 0x25cu);
    }
L_000a7884:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a7888:;
    {
        cpu->r[14] = 0x000a788cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000a788c:;
    {
        goto L_000a77b0;
    }
L_000a7890:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000a7894:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a7898:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000a789c:;
    {
        cpu->r[2] = 0x000000deu;
    }
L_000a78a0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a78a4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000a78a8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000a78ac:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000a78b0:;
    {
        cpu->r[14] = 0x000a78b4u; fn_000a8a2c(cpu);
    }
L_000a78b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000a78b8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a78bc:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_000a78c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8c0u);
    }
L_000a78c4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_000a78c8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8c4u);
    }
L_000a78cc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000a78d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a78d4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], shifter(cpu->r[7], 1, 1u, &shc), 0, 0);
    }
L_000a78d8:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[7];
    }
L_000a78dc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000a78e0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000003cu, 1, 0);
    }
L_000a78e4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_000a78e8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000a78ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000a78f0:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[6];
    }
L_000a78f4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_000a78f8:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_000a78fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_000a7900:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_000a7904:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a7908:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000a790c:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[0]);
    }
L_000a7910:;
    {
        wr32(cpu->r[4] + + 0x8c8u, cpu->r[0]);
    }
L_000a7914:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000a7918:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000a791c:;
    {
        wr32(cpu->r[4] + + 0x8d0u, cpu->r[3]);
    }
L_000a7920:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000a7924:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000a7928:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[0]);
    }
L_000a792c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a7930:;
    {
        wr32(cpu->r[4] + + 0x8ccu, cpu->r[3]);
    }
L_000a7934:;
    {
        goto L_000a7804;
    }
L_000a7938:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a793c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000a7940:;
    {
        cpu->r[2] = 0x000000deu;
    }
L_000a7944:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a7948:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000a794c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000a7950:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000a7954:;
    {
        cpu->r[14] = 0x000a7958u; fn_000a8a2c(cpu);
    }
L_000a7958:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000a795c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a7960:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_000a7964:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8c0u);
    }
L_000a7968:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_000a796c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8c4u);
    }
L_000a7970:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000a7974:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a7978:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], shifter(cpu->r[7], 1, 1u, &shc), 0, 0);
    }
L_000a797c:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[7];
    }
L_000a7980:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000a7984:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000003cu, 1, 0);
    }
L_000a7988:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_000a798c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000a7990:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000a7994:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[6];
    }
L_000a7998:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_000a799c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_000a79a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_000a79a4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_000a79a8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a79ac:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000a79b0:;
    {
        wr32(cpu->r[4] + + 0x9a4u, cpu->r[0]);
    }
L_000a79b4:;
    {
        wr32(cpu->r[4] + + 0x994u, cpu->r[0]);
    }
L_000a79b8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000a79bc:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000a79c0:;
    {
        wr32(cpu->r[4] + + 0x99cu, cpu->r[3]);
    }
L_000a79c4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000a79c8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000a79cc:;
    {
        wr32(cpu->r[4] + + 0x9a0u, cpu->r[0]);
    }
L_000a79d0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a79d4:;
    {
        wr32(cpu->r[4] + + 0x998u, cpu->r[3]);
    }
L_000a79d8:;
    {
        goto L_000a7804;
    }
L_000a79dc:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000a79e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a79e4:;
    {
        cpu->r[2] = 0x000000deu;
    }
L_000a79e8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a79ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000a79f0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000a79f4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000a79f8:;
    {
        cpu->r[14] = 0x000a79fcu; fn_000a8a2c(cpu);
    }
L_000a79fc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000a7a00:;
    {
        cpu->r[2] = 0x00005556u;
    }
L_000a7a04:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a7a08:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x5555u << 16);
    }
L_000a7a0c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8c4u);
    }
L_000a7a10:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_000a7a14:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8c0u);
    }
L_000a7a18:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000003cu, 1, 0);
    }
L_000a7a1c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_000a7a20:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_000a7a24:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], cpu->r[6], 0, 0);
    }
L_000a7a28:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a7a2c:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[6];
    }
L_000a7a30:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[7]; cpu->r[5] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000a7a34:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000a7a38:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x24u);
    }
L_000a7a3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_000a7a40:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 0);
    }
L_000a7a44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_000a7a48:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[12];
    }
L_000a7a4c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[7], 1, 31u, &shc), 1, 0);
    }
L_000a7a50:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_000a7a54:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000a7a58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000a7a5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_000a7a60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000a7a64:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_000a7a68:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_000a7a6c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000a7a70:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_000a7a74:;
    {
        wr32(cpu->r[4] + + 0x910u, cpu->r[3]);
    }
L_000a7a78:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000a7a7c:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a7a80:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_000a7a84:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[5]);
    }
L_000a7a88:;
    {
        wr32(cpu->r[4] + + 0x918u, cpu->r[5]);
    }
L_000a7a8c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000a7a90:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000a7a94:;
    {
        wr32(cpu->r[4] + + 0x914u, cpu->r[7]);
    }
L_000a7a98:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a7a9c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000a7aa0:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_000a7aa4:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[0]);
    }
L_000a7aa8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000a7aac:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000a7ab0:;
    {
        wr32(cpu->r[4] + + 0x91cu, cpu->r[0]);
    }
L_000a7ab4:;
    {
        wr32(cpu->r[4] + + 0x90cu, cpu->r[0]);
    }
L_000a7ab8:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a7abc:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_000a7ac0:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_000a7ac4:;
    {
        goto L_000a7804;
    }
}

/* _ZN6CPanel6ResumeEv @ 000a7ae8 (arm) */
void fn_000a7ae8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a7ae8:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x78u);
    }
L_000a7aec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000a7af0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a7af4:;
    {
        cpu->r[5] = rd32(0x000a7afcu + + 0xacu);
    }
L_000a7af8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000a7afc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a7b00:;
    {
        cpu->r[5] = add_flags(cpu, 0x000a7b08u, cpu->r[5], 0, 0);
    }
L_000a7b04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a7b10;
        }
    }
L_000a7b08:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000a7b0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a7b10u)) return;
    }
L_000a7b10:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_000a7b14:;
    {
        cpu->r[14] = 0x000a7b18u; fn_000f34a0(cpu);
    }
L_000a7b18:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_000a7b1c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000a7b20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a7b98;
        }
    }
L_000a7b24:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000a7b28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a7b58;
        }
    }
L_000a7b2c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a7b30:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a7b34:;
    {
        cpu->r[14] = 0x000a7b3cu;
    }
L_000a7b38:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a7b3cu)) return;
    }
L_000a7b3c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a7b40:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a7b44:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000a7b48:;
    {
        cpu->r[14] = 0x000a7b50u;
    }
L_000a7b4c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a7b50u)) return;
    }
L_000a7b50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a7b54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a7b68;
        }
    }
L_000a7b58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a7b5c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000a7b60:;
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
L_000a7b64:;
    {
        return fn_000a76a0(cpu);
    }
L_000a7b68:;
    {
        cpu->r[3] = rd32(0x000a7b70u + + 0x3cu);
    }
L_000a7b6c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000a7b70:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x4u);
    }
L_000a7b74:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000a7b78:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a7b7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a7b80:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a7b84:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000a7b88:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a7b8c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 0);
    }
L_000a7b90:;
    {
        cpu->r[14] = 0x000a7b94u; fn_000a6ba4(cpu);
    }
L_000a7b94:;
    {
        goto L_000a7b58;
    }
L_000a7b98:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_000a7b9c:;
    {
        cpu->r[14] = 0x000a7ba0u; fn_000f34c4(cpu);
    }
L_000a7ba0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000a7ba4:;
    {
        goto L_000a7b24;
    }
}

/* _ZN6CPanel9SetActiveEiPtPi @ 000a7bb0 (arm) */
void fn_000a7bb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a7bb0:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000a7bb4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a7bb8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000a7bbc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a7bc0:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000a7bc4:;
    {
        wr32(cpu->r[0] + + 0x88cu, cpu->r[3]);
    }
L_000a7bc8:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_000a7bcc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000a7bd0:;
    {
        wr32(cpu->r[0] + + 0x80u, cpu->r[4]);
    }
L_000a7bd4:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_000a7bd8:;
    {
        wr32(cpu->r[0] + + 0x84u, cpu->r[4]);
    }
L_000a7bdc:;
    {
        cpu->r[14] = 0x000a7be0u; fn_000a6b7c(cpu);
    }
L_000a7be0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000a7be4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000088u, 0, 0);
    }
L_000a7be8:;
    {
        cpu->r[14] = 0x000a7becu; fn_000ae160(cpu);
    }
L_000a7bec:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000a7bf0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000a7bf4:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000a7bf8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a7bfc:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000a7c00:;
    {
        cpu->r[14] = 0x000a7c04u; fn_000a6b8c(cpu);
    }
L_000a7c04:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000a7c08:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000a7c0c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000a7c10:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a7c14:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000a7c18:;
    {
        cpu->r[14] = 0x000a7c1cu; fn_000a6ba4(cpu);
    }
L_000a7c1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000008c0u, 0, 0);
    }
L_000a7c20:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000a7c24:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000a7c28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_000a7c2c:;
    {
        cpu->r[1] = 0x0000006eu;
    }
L_000a7c30:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000a7c34:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000a7c38:;
    {
        cpu->r[14] = 0x000a7c3cu; fn_000eaac4(cpu);
    }
L_000a7c3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000900u, 0, 0);
    }
L_000a7c40:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000a7c44:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000a7c48:;
    {
        cpu->r[1] = 0x0000006fu;
    }
L_000a7c4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000a7c50:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000a7c54:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000a7c58:;
    {
        cpu->r[14] = 0x000a7c5cu; fn_000eaac4(cpu);
    }
L_000a7c5c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000a7c60:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000a7c64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000950u, 0, 0);
    }
L_000a7c68:;
    {
        cpu->r[1] = 0x00000070u;
    }
L_000a7c6c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000a7c70:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000a7c74:;
    {
        cpu->r[14] = 0x000a7c78u; fn_000eaac4(cpu);
    }
L_000a7c78:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000a7c7c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000a7c80:;
    {
        wr8(cpu->r[5] + + 0x78u, cpu->r[3]);
    }
L_000a7c84:;
    {
        cpu->r[14] = 0x000a7c88u; fn_000f34a0(cpu);
    }
L_000a7c88:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_000a7c8c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a7c90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a7d00;
        }
    }
L_000a7c94:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000a7c98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a7cd0;
        }
    }
L_000a7c9c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000a7ca0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a7ca4:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000a7ca8:;
    {
        cpu->r[14] = 0x000a7cb0u;
    }
L_000a7cac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a7cb0u)) return;
    }
L_000a7cb0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a7cb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a7ce0;
        }
    }
L_000a7cb8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000a7cbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a7cc0:;
    {
        cpu->r[14] = 0x000a7cc8u;
    }
L_000a7cc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xe0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a7cc8u)) return;
    }
L_000a7cc8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a7ccc:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_000a7cd0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a7cd4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a7cd8:;
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
        cpu->r[14] = v4;
        cpu->r[13] += 20u;
    }
L_000a7cdc:;
    {
        return fn_000a76a0(cpu);
    }
L_000a7ce0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000a7ce4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a7ce8:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000a7cec:;
    {
        cpu->r[14] = 0x000a7cf4u;
    }
L_000a7cf0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a7cf4u)) return;
    }
L_000a7cf4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a7cf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a7cd0;
        }
    }
L_000a7cfc:;
    {
        goto L_000a7cb8;
    }
L_000a7d00:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_000a7d04:;
    {
        cpu->r[14] = 0x000a7d08u; fn_000f34c4(cpu);
    }
L_000a7d08:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a7d0c:;
    {
        goto L_000a7c94;
    }
}

/* _ZN6CPanel6RenderEv @ 000a7d10 (arm) */
void fn_000a7d10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a7d10:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x78u);
    }
L_000a7d14:;
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
L_000a7d18:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000a7d1c:;
    {
        cpu->r[4] = rd32(0x000a7d24u + + 0x4d0u);
    }
L_000a7d20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a7d24:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000008cu, 1, 0);
    }
L_000a7d28:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a7d30u, cpu->r[4], 0, 0);
    }
L_000a7d2c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a7d30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a7d40;
        }
    }
L_000a7d34:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_000a7d38:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000a7d3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a7d40u)) return;
    }
L_000a7d40:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_000a7d44:;
    {
        cpu->r[14] = 0x000a7d48u; fn_000f34c4(cpu);
    }
L_000a7d48:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a7d4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a7d9c;
        }
    }
L_000a7d50:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000a7d54:;
    {
        cpu->r[14] = 0x000a7d58u; fn_000f34c4(cpu);
    }
L_000a7d58:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a7d5c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000a7d60:;
    {
        cpu->r[14] = 0x000a7d68u;
    }
L_000a7d64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a7d68u)) return;
    }
L_000a7d68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a7d6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a8140;
        }
    }
L_000a7d70:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000a7d74:;
    {
        cpu->r[6] = 0x00001bc8u;
    }
L_000a7d78:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a7d7c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000a7d80:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a7d84:;
    {
        wr8(cpu->r[3] + + 0x10cu, cpu->r[2]);
    }
L_000a7d88:;
    {
        cpu->r[14] = 0x000a7d8cu; fn_000dbe60(cpu);
    }
L_000a7d8c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000a7d90:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000a7d94:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000a7d98:;
    {
        wr8(cpu->r[3] + + 0x10cu, cpu->r[2]);
    }
L_000a7d9c:;
    {
        cpu->r[8] = rd32(0x000a7da4u + + 0x454u);
    }
L_000a7da0:;
    {
        cpu->r[3] = rd32(0x000a7da8u + + 0x454u);
    }
L_000a7da4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a7da8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a7dac:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a7db0:;
    {
        cpu->r[10] = rd32(cpu->r[2]);
    }
L_000a7db4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a7db8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a80fc;
        }
    }
L_000a7dbc:;
    {
        cpu->r[7] = rd32(0x000a7dc4u + + 0x43cu);
    }
L_000a7dc0:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_000a7dc4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000a7dc8:;
    {
        cpu->r[14] = 0x000a7dccu; fn_00096a08(cpu);
    }
L_000a7dcc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a7dd0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a7dd4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000a7dd8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a7ddc:;
    {
        cpu->r[14] = 0x000a7de0u; fn_0018aa44(cpu);
    }
L_000a7de0:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a7de4:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_000a7de8:;
    {
        wr32(cpu->r[0] + + 0x54u, cpu->r[3]);
    }
L_000a7dec:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000a7df0:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000a7df4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a7df8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a81b4;
        }
    }
L_000a7dfc:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_000a7e00:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000a7e04:;
    {
        cpu->r[14] = 0x000a7e08u; fn_00096a08(cpu);
    }
L_000a7e08:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a7e0c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a7e10:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000a7e14:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a7e18:;
    {
        cpu->r[14] = 0x000a7e1cu; fn_0018aa44(cpu);
    }
L_000a7e1c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a7e20:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000a7e24:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a7e28:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000a7e2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a8178;
        }
    }
L_000a7e30:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000a7e34:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_000a7e38:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000a7e3c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a7e40:;
    {
        cpu->r[14] = 0x000a7e44u; fn_0018aa44(cpu);
    }
L_000a7e44:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000a7e48:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000a7e4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000078u, 0, 0);
    }
L_000a7e50:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000a7e54:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000a7e58:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_000a7e5c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_000a7e60:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_000a7e64:;
    {
        cpu->r[14] = 0x000a7e68u; fn_000a8a2c(cpu);
    }
L_000a7e68:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x84u);
    }
L_000a7e6c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a7e70:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x78u);
    }
L_000a7e74:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x80u);
    }
L_000a7e78:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x84u);
    }
L_000a7e7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000a7e80:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_000a7e84:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x7cu);
    }
L_000a7e88:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 25u, &shc); cpu->r[1] = v;
    }
L_000a7e8c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000a7e90:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000a7e94:;
    {
        cpu->r[14] = 0x000a7e98u; fn_0012dd58(cpu);
    }
L_000a7e98:;
    {
        cpu->r[12] = rd32(0x000a7ea0u + + 0x364u);
    }
L_000a7e9c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a7ea0:;
    {
        cpu->r[3] = rd32(0x000a7ea8u + + 0x360u);
    }
L_000a7ea4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000a7ea8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000a7eac:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000a7eb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a7eb4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000a7eb8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a7ebc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a7ec0:;
    {
        cpu->r[14] = 0x000a7ec4u; fn_00130908(cpu);
    }
L_000a7ec4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[5] + + 0x84u);
    }
L_000a7ec8:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000a7ecc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000a7ed4u + + 0x31cu);
    }
L_000a7ed0:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[9];
    }
L_000a7ed4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8c0u);
    }
L_000a7ed8:;
    {
        cpu->r[12] = 0x00190000u;
    }
L_000a7edc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8c4u);
    }
L_000a7ee0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000a7ee4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], cpu->r[2], 0, 0);
    }
L_000a7ee8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a7eec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a7ef0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_000a7ef4:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_000a7ef8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000a7efc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000a7f00:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_000a7f04:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_000a7f08:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a7f0c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 0);
    }
L_000a7f10:;
    {
        cpu->r[14] = 0x000a7f14u; fn_000adab4(cpu);
    }
L_000a7f14:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x80u);
    }
L_000a7f18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000a7f1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a7d34;
        }
    }
L_000a7f20:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x7cu);
    }
L_000a7f24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000a7f28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a8404;
        }
    }
L_000a7f2c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00000088u, 0, 0);
    }
L_000a7f30:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000a7f34:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000a7f38:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a7f3c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000a7f40:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], 0x00000014u, 1, 0);
    }
L_000a7f44:;
    {
        cpu->r[14] = 0x000a7f48u; fn_000a9818(cpu);
    }
L_000a7f48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000910u, 0, 0);
    }
L_000a7f4c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000a7f50:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000a7f54:;
    {
        vfp_sync_flags(cpu);
    }
L_000a7f58:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a7f7c;
        }
    }
L_000a7f5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x000008c0u, 0, 0);
    }
L_000a7f60:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000a7f64:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000a7f68:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000a7f6c:;
    {
        vfp_sync_flags(cpu);
    }
L_000a7f70:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000990u, 0, 0);
        }
    }
L_000a7f74:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
        }
    }
L_000a7f78:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
        }
    }
L_000a7f7c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000a7f80:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x8c4u);
    }
L_000a7f84:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8c0u);
    }
L_000a7f88:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000a7f8c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000a7f90:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a7f94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[9], 1, 1u, &shc), 0, 0);
    }
L_000a7f98:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a7f9c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_000a7fa0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_000a7fa4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[14], 1, 1u, &shc), 0, 0);
    }
L_000a7fa8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a7fac:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000a7fb0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000a7fb4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000a7fb8:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_000a7fbc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000a7fc0:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_000a7fc4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000a7fc8:;
    {
        cpu->r[14] = 0x000a7fccu; fn_000ac4bc(cpu);
    }
L_000a7fcc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a7fd0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a7fd4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a7fd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a83c4;
        }
    }
L_000a7fdc:;
    {
        cpu->r[3] = rd32(0x000a7fe4u + + 0x228u);
    }
L_000a7fe0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a7fe4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a7fe8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a7fec:;
    {
        cpu->r[14] = 0x000a7ff0u; fn_000f3430(cpu);
    }
L_000a7ff0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a7ff4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000a7ff8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a7ffc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000002u;
        }
    }
L_000a8000:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000015u;
        }
    }
L_000a8004:;
    {
        cpu->r[14] = 0x000a8008u; fn_0018aa44(cpu);
    }
L_000a8008:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x7cu);
    }
L_000a800c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a8010:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
        }
    }
L_000a8014:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_000a8018:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_000a801c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000a8020:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a821c;
        }
    }
L_000a8024:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x000008c0u, 0, 0);
    }
L_000a8028:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x000008c0u, 0, 0);
    }
L_000a802c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x000008d0u, 0, 0);
    }
L_000a8030:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_000a8034:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000a8038:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000a803c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000a8040:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x000008d0u, 0, 0);
    }
L_000a8044:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000a8048:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[2]);
    }
L_000a804c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[3]);
    }
L_000a8050:;
    {
        vfp_vsub(cpu, 16, 16, 14);
    }
L_000a8054:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000a805cu + + 0x1bcu);
    }
L_000a8058:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x8fcu);
    }
L_000a805c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a8060:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000a8064:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_000a8068:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000a806c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x000000dfu;
        }
    }
L_000a8070:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x000000deu;
        }
    }
L_000a8074:;
    {
        vfp_vsub(cpu, 17, 17, 15);
    }
L_000a8078:;
    {
        vfp_vadd(cpu, 16, 16, 13);
    }
L_000a807c:;
    {
        vfp_vadd(cpu, 17, 17, 13);
    }
L_000a8080:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_000a8084:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_000a8088:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000a808c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_000a8090:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[12];
    }
L_000a8094:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000a8098:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000a809c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000a80a0:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[3];
    }
L_000a80a4:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_000a80a8:;
    {
        vfp_vadd(cpu, 16, 14, 16);
    }
L_000a80ac:;
    {
        vfp_vadd(cpu, 17, 15, 17);
    }
L_000a80b0:;
    {
        *(int32_t*)vfp_s(cpu,12) = (int32_t)*vfp_s(cpu,14);
    }
L_000a80b4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000a80b8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000a80bc:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_000a80c0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a80c4:;
    {
        cpu->r[14] = 0x000a80c8u; fn_000ad8a0(cpu);
    }
L_000a80c8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000a80cc:;
    {
        cpu->r[0] = 0x00000482u;
    }
L_000a80d0:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_000a80d4:;
    {
        cpu->r[14] = 0x000a80d8u; fn_000aeb58(cpu);
    }
L_000a80d8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000a80dc:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000a80e0:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_000a80e4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000a80e8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a80ec:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000a80f0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a80f4:;
    {
        cpu->r[14] = 0x000a80f8u; fn_000ad19c(cpu);
    }
L_000a80f8:;
    {
        goto L_000a7d34;
    }
L_000a80fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a8100:;
    {
        cpu->r[14] = 0x000a8104u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a8104:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a8108:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a7dbc;
        }
    }
L_000a810c:;
    {
        cpu->r[7] = rd32(0x000a8114u + + 0xecu);
    }
L_000a8110:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a8114:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a8118:;
    {
        cpu->r[14] = 0x000a811cu; fn_0018aa20(cpu);
    }
L_000a811c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a8120:;
    {
        cpu->r[14] = 0x000a8124u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a8124:;
    {
        cpu->r[3] = rd32(0x000a812cu + + 0xe4u);
    }
L_000a8128:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a812c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a8130:;
    {
        cpu->r[3] = rd32(0x000a8138u + + 0xdcu);
    }
L_000a8134:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a8138:;
    {
        cpu->r[14] = 0x000a813cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000a813c:;
    {
        goto L_000a7dc0;
    }
L_000a8140:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000a8144:;
    {
        cpu->r[14] = 0x000a8148u; fn_000f34c4(cpu);
    }
L_000a8148:;
    {
        cpu->r[8] = rd32(0x000a8150u + + 0xa8u);
    }
L_000a814c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000a8150:;
    {
        cpu->r[14] = 0x000a8158u;
    }
L_000a8154:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a8158u)) return;
    }
L_000a8158:;
    {
        cpu->r[3] = rd32(0x000a8160u + + 0x9cu);
    }
L_000a815c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a8160:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a8164:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a8168:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a816c:;
    {
        cpu->r[10] = rd32(cpu->r[2]);
    }
L_000a8170:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a7dbc;
        }
    }
L_000a8174:;
    {
        goto L_000a80fc;
    }
L_000a8178:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a817c:;
    {
        cpu->r[14] = 0x000a8180u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a8180:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a8184:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a7e30;
        }
    }
L_000a8188:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a818c:;
    {
        cpu->r[14] = 0x000a8190u; fn_0018aa20(cpu);
    }
L_000a8190:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a8194:;
    {
        cpu->r[14] = 0x000a8198u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a8198:;
    {
        cpu->r[3] = rd32(0x000a81a0u + + 0x70u);
    }
L_000a819c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a81a0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a81a4:;
    {
        cpu->r[3] = rd32(0x000a81acu + + 0x68u);
    }
L_000a81a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a81ac:;
    {
        cpu->r[14] = 0x000a81b0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000a81b0:;
    {
        goto L_000a7e30;
    }
L_000a81b4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a81b8:;
    {
        cpu->r[14] = 0x000a81bcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a81bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a81c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a7dfc;
        }
    }
L_000a81c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a81c8:;
    {
        cpu->r[14] = 0x000a81ccu; fn_0018aa20(cpu);
    }
L_000a81cc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a81d0:;
    {
        cpu->r[14] = 0x000a81d4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a81d4:;
    {
        cpu->r[3] = rd32(0x000a81dcu + + 0x34u);
    }
L_000a81d8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a81dc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a81e0:;
    {
        cpu->r[3] = rd32(0x000a81e8u + + 0x2cu);
    }
L_000a81e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a81e8:;
    {
        cpu->r[14] = 0x000a81ecu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000a81ec:;
    {
        goto L_000a7dfc;
    }
L_000a821c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000a8220:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a8474;
        }
    }
L_000a8224:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000950u, 0, 0);
    }
L_000a8228:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2]);
    }
L_000a822c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000910u, 0, 0);
    }
L_000a8230:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000910u, 0, 0);
    }
L_000a8234:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000a8238:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000a823c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2]);
    }
L_000a8240:;
    {
        vfp_vsub(cpu, 11, 11, 15);
    }
L_000a8244:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000900u, 0, 0);
    }
L_000a8248:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00000910u, 0, 0);
    }
L_000a824c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000a8250:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_000a8254:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000950u, 0, 0);
    }
L_000a8258:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_000a825c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000a8260:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[1]);
    }
L_000a8264:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[12]);
    }
L_000a8268:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000a8270u + - 0x58u);
    }
L_000a826c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x940u);
    }
L_000a8270:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a8274:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000a8278:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a827c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000a8280:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = cpu->r[11];
        }
    }
L_000a8284:;
    {
        vfp_vsub(cpu, 17, 17, 12);
    }
L_000a8288:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = rd32(cpu->r[13] + + 0x1cu);
        }
    }
L_000a828c:;
    {
        vfp_vsub(cpu, 16, 16, 14);
    }
L_000a8290:;
    {
        vfp_vadd(cpu, 11, 11, 13);
    }
L_000a8294:;
    {
        vfp_vadd(cpu, 17, 17, 13);
    }
L_000a8298:;
    {
        vfp_vadd(cpu, 16, 16, 13);
    }
L_000a829c:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,11);
    }
L_000a82a0:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_000a82a4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000a82a8:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_000a82ac:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_000a82b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x000000deu;
        }
    }
L_000a82b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x000000dfu;
        }
    }
L_000a82b8:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000a82bc:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000a82c0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_000a82c4:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[12];
    }
L_000a82c8:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_000a82cc:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_000a82d0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000a82d4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000a82d8:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_000a82dc:;
    {
        vfp_vadd(cpu, 13, 15, 13);
    }
L_000a82e0:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000a82e4:;
    {
        vfp_vadd(cpu, 12, 12, 17);
    }
L_000a82e8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000a82ec:;
    {
        vfp_vadd(cpu, 16, 14, 16);
    }
L_000a82f0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a82f4:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000a82f8:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000a82fc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000a8300:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000a8304:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,12);
    }
L_000a8308:;
    {
        cpu->r[14] = 0x000a830cu; fn_000ad8a0(cpu);
    }
L_000a830c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000a8310:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000a8314:;
    {
        cpu->r[0] = 0x0000000eu;
    }
L_000a8318:;
    {
        wr8(cpu->r[7] + + 0x50u, cpu->r[3]);
    }
L_000a831c:;
    {
        cpu->r[14] = 0x000a8320u; fn_000aeb58(cpu);
    }
L_000a8320:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000a8324:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_000a8328:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000a832c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a8330:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_000a8334:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000a8338:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000a833c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a8340:;
    {
        cpu->r[14] = 0x000a8344u; fn_000ad19c(cpu);
    }
L_000a8344:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x984u);
    }
L_000a8348:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000910u, 0, 0);
    }
L_000a834c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000950u, 0, 0);
    }
L_000a8350:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000a8354:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_000a8358:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000a835c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000a8360:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x000000deu;
        }
    }
L_000a8364:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a8368:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
        }
    }
L_000a836c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x000000dfu;
        }
    }
L_000a8370:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a8374:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000a8378:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000a837c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000a8380:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000a8384:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a8388:;
    {
        cpu->r[14] = 0x000a838cu; fn_000ad8a0(cpu);
    }
L_000a838c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000a8390:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000a8394:;
    {
        cpu->r[0] = 0x0000000fu;
    }
L_000a8398:;
    {
        wr8(cpu->r[11] + + 0x50u, cpu->r[3]);
    }
L_000a839c:;
    {
        cpu->r[14] = 0x000a83a0u; fn_000aeb58(cpu);
    }
L_000a83a0:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000a83a4:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000a83a8:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_000a83ac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000a83b0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a83b4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000a83b8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a83bc:;
    {
        cpu->r[14] = 0x000a83c0u; fn_000ad19c(cpu);
    }
L_000a83c0:;
    {
        goto L_000a7d34;
    }
L_000a83c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a83c8:;
    {
        cpu->r[14] = 0x000a83ccu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a83cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a83d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a7fdc;
        }
    }
L_000a83d4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a83d8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a83dc:;
    {
        cpu->r[14] = 0x000a83e0u; fn_0018aa20(cpu);
    }
L_000a83e0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a83e4:;
    {
        cpu->r[14] = 0x000a83e8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a83e8:;
    {
        cpu->r[3] = rd32(0x000a83f0u + - 0x1e0u);
    }
L_000a83ec:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a83f0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a83f4:;
    {
        cpu->r[3] = rd32(0x000a83fcu + - 0x1e8u);
    }
L_000a83f8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a83fc:;
    {
        cpu->r[14] = 0x000a8400u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000a8400:;
    {
        goto L_000a7fdc;
    }
L_000a8404:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8c0u);
    }
L_000a8408:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], 0x00000088u, 0, 0);
    }
L_000a840c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000a8410:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000a8414:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_000a8418:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a841c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000a8420:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a8424:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000019u, 1, 0);
    }
L_000a8428:;
    {
        cpu->r[14] = 0x000a842cu; fn_000a9818(cpu);
    }
L_000a842c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000a8430:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000a8434:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000a8438:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8c0u);
    }
L_000a843c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a8440:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 0);
    }
L_000a8444:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x8c4u);
    }
L_000a8448:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a844c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000019u, 0, 0);
    }
L_000a8450:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[14], 1, 1u, &shc), 0, 0);
    }
L_000a8454:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_000a8458:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a845c:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_000a8460:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000a8464:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_000a8468:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000a846c:;
    {
        cpu->r[14] = 0x000a8470u; fn_000ac4bc(cpu);
    }
L_000a8470:;
    {
        goto L_000a7fcc;
    }
L_000a8474:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000990u, 0, 0);
    }
L_000a8478:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000990u, 0, 0);
    }
L_000a847c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000990u, 0, 0);
    }
L_000a8480:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000a8484:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000a8488:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_000a848c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000a8490:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000a8494:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x000009a0u, 0, 0);
    }
L_000a8498:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3]);
    }
L_000a849c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[12]);
    }
L_000a84a0:;
    {
        vfp_vsub(cpu, 16, 16, 14);
    }
L_000a84a4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000a84acu + - 0x294u);
    }
L_000a84a8:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x9c8u);
    }
L_000a84ac:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000a84b0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000a84b4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000a84b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x000000dfu;
        }
    }
L_000a84bc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x000000deu;
        }
    }
L_000a84c0:;
    {
        vfp_vsub(cpu, 17, 17, 15);
    }
L_000a84c4:;
    {
        vfp_vadd(cpu, 16, 16, 13);
    }
L_000a84c8:;
    {
        vfp_vadd(cpu, 17, 17, 13);
    }
L_000a84cc:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_000a84d0:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_000a84d4:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000a84d8:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_000a84dc:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[12];
    }
L_000a84e0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000a84e4:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000a84e8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000a84ec:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[3];
    }
L_000a84f0:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_000a84f4:;
    {
        *(int32_t*)vfp_s(cpu,12) = (int32_t)*vfp_s(cpu,14);
    }
L_000a84f8:;
    {
        vfp_vadd(cpu, 17, 15, 17);
    }
L_000a84fc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000a8500:;
    {
        vfp_vadd(cpu, 14, 14, 16);
    }
L_000a8504:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000a8508:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a850c:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,14);
    }
L_000a8510:;
    {
        cpu->r[14] = 0x000a8514u; fn_000ad8a0(cpu);
    }
L_000a8514:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000a8518:;
    {
        cpu->r[0] = 0x00000483u;
    }
L_000a851c:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_000a8520:;
    {
        goto L_000a80d4;
    }
}

/* push_reset @ 000a8524 (arm) */
void fn_000a8524(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8524:;
    {
        cpu->r[3] = rd32(0x000a852cu + + 0x20u);
    }
L_000a8528:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a852c:;
    {
        cpu->r[1] = rd32(0x000a8534u + + 0x1cu);
    }
L_000a8530:;
    {
        cpu->r[0] = rd32(0x000a8538u + + 0x1cu);
    }
L_000a8534:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a853cu, cpu->r[3], 0, 0);
    }
L_000a8538:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000a853c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000a8540:;
    {
        wr8(cpu->r[1], cpu->r[2]);
    }
L_000a8544:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_000a8548:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* push_received @ 000a8558 (arm) */
void fn_000a8558(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8558:;
    {
        cpu->r[3] = rd32(0x000a8560u + + 0x30u);
    }
L_000a855c:;
    {
        cpu->r[2] = rd32(0x000a8564u + + 0x30u);
    }
L_000a8560:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a8568u, cpu->r[3], 0, 0);
    }
L_000a8564:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a8568:;
    {
        cpu->r[2] = rd8(cpu->r[2]);
    }
L_000a856c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a8570:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a8574:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000a8578:;
    {
        cpu->r[2] = rd32(0x000a8580u + + 0x18u);
    }
L_000a857c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a8580:;
    {
        cpu->r[0] = rd8(cpu->r[3]);
    }
L_000a8584:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a8588:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a858c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* push_getText @ 000a859c (arm) */
void fn_000a859c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a859c:;
    {
        cpu->r[3] = rd32(0x000a85a4u + + 0xcu);
    }
L_000a85a0:;
    {
        cpu->r[2] = rd32(0x000a85a8u + + 0xcu);
    }
L_000a85a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a85acu, cpu->r[3], 0, 0);
    }
L_000a85a8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a85ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* push_getIP @ 000a85b8 (arm) */
void fn_000a85b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a85b8:;
    {
        cpu->r[3] = rd32(0x000a85c0u + + 0xcu);
    }
L_000a85bc:;
    {
        cpu->r[2] = rd32(0x000a85c4u + + 0xcu);
    }
L_000a85c0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a85c8u, cpu->r[3], 0, 0);
    }
L_000a85c4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a85c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* push_setParams @ 000a85d4 (arm) */
void fn_000a85d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a85d4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000a85d8:;
    {
        cpu->r[4] = rd32(0x000a85e0u + + 0x24u);
    }
L_000a85dc:;
    {
        cpu->r[3] = rd32(0x000a85e4u + + 0x24u);
    }
L_000a85e0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a85e4:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a85ecu, cpu->r[4], 0, 0);
    }
L_000a85e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a85ec:;
    {
        cpu->r[14] = 0x000a85f0u; imp_strcpy(cpu); /* strcpy */
    }
L_000a85f0:;
    {
        cpu->r[3] = rd32(0x000a85f8u + + 0x14u);
    }
L_000a85f4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000a85f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a85fc:;
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
L_000a8600:;
    {
        imp_strcpy(cpu); /* tail strcpy */ return;
    }
}

/* IsCharacterSupported @ 000a8610 (arm) */
void fn_000a8610(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8610:;
    {
        sub_flags(cpu, cpu->r[0], 0x000000ffu, 1, 1);
    }
L_000a8614:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a8618:;
    {
        if (cond_test(cpu, 9)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000a861c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000020u, 1, 1);
    }
L_000a8620:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a867c;
        }
    }
L_000a8624:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000030u, 1, 0);
    }
L_000a8628:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000a862c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_000a8630:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000a867c;
        }
    }
L_000a8634:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000061u, 1, 0);
    }
L_000a8638:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000a863c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000019u, 1, 1);
    }
L_000a8640:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000a867c;
        }
    }
L_000a8644:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000041u, 1, 0);
    }
L_000a8648:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000a864c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000019u, 1, 1);
    }
L_000a8650:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000a867c;
        }
    }
L_000a8654:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000040u, 1, 1);
    }
L_000a8658:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], 0x0000002eu, 1, 1);
        }
    }
L_000a865c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a867c;
        }
    }
L_000a8660:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000005fu, 1, 1);
    }
L_000a8664:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], 0x0000002du, 1, 1);
        }
    }
L_000a8668:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a867c;
        }
    }
L_000a866c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000027u, 1, 1);
    }
L_000a8670:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a8674:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a8678:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000a867c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000a8680:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Sprite14InitFrCharMapsEv @ 000a8684 (arm) */
void fn_000a8684(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8684:;
    {
        cpu->r[3] = rd32(0x000a868cu + + 0xb0u);
    }
L_000a8688:;
    {
        cpu->r[2] = 0x00000200u;
    }
L_000a868c:;
    {
        cpu->r[1] = rd32(0x000a8694u + + 0xacu);
    }
L_000a8690:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a8698u, cpu->r[3], 0, 0);
    }
L_000a8694:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000a8698:;
    {
        cpu->r[4] = rd32(0x000a86a0u + + 0xa4u);
    }
L_000a869c:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000a86a0:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a86a8u, cpu->r[4], 0, 0);
    }
L_000a86a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a86a8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000a86ac:;
    {
        cpu->r[14] = 0x000a86b0u; imp_memcpy(cpu); /* memcpy */
    }
L_000a86b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000200u, 0, 0);
    }
L_000a86b4:;
    {
        cpu->r[2] = 0x00000200u;
    }
L_000a86b8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000a86bc:;
    {
        cpu->r[14] = 0x000a86c0u; imp_memcpy(cpu); /* memcpy */
    }
L_000a86c0:;
    {
        cpu->r[2] = rd16(cpu->r[4] + + 0xcau);
    }
L_000a86c4:;
    {
        cpu->r[3] = 0x000001d0u;
    }
L_000a86c8:;
    {
        wr16(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000a86cc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a86d0:;
    {
        cpu->r[4] = rd32(0x000a86d8u + + 0x70u);
    }
L_000a86d4:;
    {
        cpu->r[2] = rd32(0x000a86dcu + + 0x70u);
    }
L_000a86d8:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a86e0u, cpu->r[4], 0, 0);
    }
L_000a86dc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a86e4u, cpu->r[2], 0, 0);
    }
L_000a86e0:;
    {
        goto L_000a8724;
    }
L_000a86e4:;
    {
        cpu->r[12] = rd16(cpu->r[4] + cpu->r[0]);
    }
L_000a86e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_000a86ec:;
    {
        cpu->r[0] = rd16(cpu->r[1] + + 0x2u);
    }
L_000a86f0:;
    {
        uint32_t v = cpu->r[12] & 0x00000300u; cpu->r[1] = v;
    }
L_000a86f4:;
    {
        uint32_t v = cpu->r[12] & 0x0000003fu; cpu->r[12] = v;
    }
L_000a86f8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_000a86fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 3, 2u, &shc), 0, 0);
    }
L_000a8700:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_000a8704:;
    {
        cpu->r[0] = rd16(cpu->r[2] + cpu->r[0]);
    }
L_000a8708:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000200u, 0, 0);
    }
L_000a870c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000a8710:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = rd16(cpu->r[12]);
        }
    }
L_000a8714:;
    {
        wr16(cpu->r[2] + cpu->r[1], cpu->r[0]);
    }
L_000a8718:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_000a871c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000200u, 0, 0);
    }
L_000a8720:;
    {
        if (cond_test(cpu, 13)) {
        wr16(cpu->r[1], cpu->r[12]);
        }
    }
L_000a8724:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000a8728:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000012u, 1, 1);
    }
L_000a872c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000a8730:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000a8734:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a86e4;
        }
    }
L_000a8738:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a873cu)) return;
    }
}

/* _ZNK6Sprite10GetMapCharEi @ 000a8750 (arm) */
void fn_000a8750(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8750:;
    {
        cpu->r[3] = rd32(0x000a8758u + + 0x6cu);
    }
L_000a8754:;
    {
        cpu->r[2] = 0x00000060u;
    }
L_000a8758:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000a875c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a8764u, cpu->r[3], 0, 0);
    }
L_000a8760:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000060u, 1, 0);
    }
L_000a8764:;
    {
        cpu->r[6] = rd32(0x000a876cu + + 0x5cu);
    }
L_000a8768:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000a876c:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_000a8770:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000048u, 0, 0);
    }
L_000a8774:;
    {
        cpu->r[4] = cpu->r[13];
    }
L_000a8778:;
    {
        cpu->r[14] = 0x000a877cu; imp_memcpy(cpu); /* memcpy */
    }
L_000a877c:;
    {
        cpu->r[6] = add_flags(cpu, 0x000a8784u, cpu->r[6], 0, 0);
    }
L_000a8780:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a8784:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000a8788:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000a878c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a87b4;
        }
    }
L_000a8790:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000a8794:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000018u, 1, 1);
    }
L_000a8798:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a8784;
        }
    }
L_000a879c:;
    {
        cpu->r[3] = rd32(0x000a87a4u + + 0x28u);
    }
L_000a87a0:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
    }
L_000a87a4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000a87a8:;
    {
        cpu->r[0] = rd16(cpu->r[3] + cpu->r[5]);
    }
L_000a87ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000060u, 0, 0);
    }
L_000a87b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a87b4u)) return;
    }
L_000a87b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000060u, 0, 0);
    }
L_000a87b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000a87bc:;
    {
        cpu->r[0] = rd16(cpu->r[3] + - 0x5cu);
    }
L_000a87c0:;
    {
        goto L_000a87ac;
    }
}

/* _ZN6Sprite10InitSpriteEv @ 000a87d0 (arm) */
void fn_000a87d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a87d0:;
    {
        cpu->r[3] = rd32(0x000a87d8u + + 0x80u);
    }
L_000a87d4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a87d8:;
    {
        cpu->r[1] = rd32(0x000a87e0u + + 0x7cu);
    }
L_000a87dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a87e4u, cpu->r[3], 0, 0);
    }
L_000a87e0:;
    {
        wr8(cpu->r[0] + + 0x64u, cpu->r[2]);
    }
L_000a87e4:;
    {
        wr8(cpu->r[0] + + 0x5cu, cpu->r[2]);
    }
L_000a87e8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000a87ec:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000a87f0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_000a87f4:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[1]);
    }
L_000a87f8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a87fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a8800:;
    {
        wr8(cpu->r[0] + + 0x50u, cpu->r[1]);
    }
L_000a8804:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_000a8808:;
    {
        wr32(cpu->r[0] + + 0x70u, cpu->r[3]);
    }
L_000a880c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_000a8810:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_000a8814:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_000a8818:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_000a881c:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_000a8820:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_000a8824:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_000a8828:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[2]);
    }
L_000a882c:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_000a8830:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[2]);
    }
L_000a8834:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_000a8838:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[2]);
    }
L_000a883c:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[2]);
    }
L_000a8840:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[2]);
    }
L_000a8844:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_000a8848:;
    {
        wr32(cpu->r[0] + + 0x54u, cpu->r[2]);
    }
L_000a884c:;
    {
        wr32(cpu->r[0] + + 0x58u, cpu->r[2]);
    }
L_000a8850:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000a8854:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6SpriteC1Ev @ 000a8860 (arm) */
void fn_000a8860(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8860:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000a8864:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a8868:;
    {
        cpu->r[14] = 0x000a886cu; fn_000a87d0(cpu);
    }
L_000a886c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a8870:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000a8874u)) return;
    }
}

/* _ZN6SpriteC2Ev @ 000a8874 (arm) */
void fn_000a8874(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8874:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000a8878:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a887c:;
    {
        cpu->r[14] = 0x000a8880u; fn_000a87d0(cpu);
    }
L_000a8880:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a8884:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000a8888u)) return;
    }
}

/* _ZN6Sprite10GetAFrameXEii @ 000a8888 (arm) */
void fn_000a8888(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8888:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x3cu);
    }
L_000a888c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000a8890:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x44u);
    }
L_000a8894:;
    {
        cpu->r[1] = rd16(cpu->r[12] + cpu->r[1]);
    }
L_000a8898:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000a889c:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 2, 3u, &shc), cpu->r[1], 1, 0);
    }
L_000a88a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_000a88a4:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x3u);
    }
L_000a88a8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x2u);
    }
L_000a88ac:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_000a88b0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Sprite10GetAFrameYEii @ 000a88b4 (arm) */
void fn_000a88b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a88b4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x3cu);
    }
L_000a88b8:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000a88bc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x44u);
    }
L_000a88c0:;
    {
        cpu->r[1] = rd16(cpu->r[12] + cpu->r[1]);
    }
L_000a88c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000a88c8:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 2, 3u, &shc), cpu->r[1], 1, 0);
    }
L_000a88cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_000a88d0:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x5u);
    }
L_000a88d4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x4u);
    }
L_000a88d8:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_000a88dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Sprite15GetFrameModuleXEii @ 000a88e0 (arm) */
void fn_000a88e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a88e0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x28u);
    }
L_000a88e4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000a88e8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x30u);
    }
L_000a88ec:;
    {
        cpu->r[1] = rd16(cpu->r[12] + cpu->r[1]);
    }
L_000a88f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000a88f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000a88f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000a88fc:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x2u);
    }
L_000a8900:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x1u);
    }
L_000a8904:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_000a8908:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000a890c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Sprite15GetFrameModuleYEii @ 000a8910 (arm) */
void fn_000a8910(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8910:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x28u);
    }
L_000a8914:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000a8918:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x30u);
    }
L_000a891c:;
    {
        cpu->r[1] = rd16(cpu->r[12] + cpu->r[1]);
    }
L_000a8920:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000a8924:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000a8928:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000a892c:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x4u);
    }
L_000a8930:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x3u);
    }
L_000a8934:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_000a8938:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000a893c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Sprite19GetFrameModuleWidthEii @ 000a8940 (arm) */
void fn_000a8940(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8940:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x28u);
    }
L_000a8944:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000a8948:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x30u);
    }
L_000a894c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_000a8950:;
    {
        cpu->r[1] = rd16(cpu->r[12] + cpu->r[1]);
    }
L_000a8954:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000a8958:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000a895c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000a8960:;
    {
        cpu->r[2] = rd8(cpu->r[3] + shifter(cpu->r[1], 2, 1u, &shc));
    }
L_000a8964:;
    {
        cpu->r[3] = rd8(cpu->r[12] + + 0x5u);
    }
L_000a8968:;
    {
        uint32_t v = cpu->r[3] & 0x000000c0u; cpu->r[3] = v;
    }
L_000a896c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_000a8970:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000a8974:;
    {
        cpu->r[0] = rd16(cpu->r[0] + cpu->r[3]);
    }
L_000a8978:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Sprite20GetFrameModuleHeightEii @ 000a897c (arm) */
void fn_000a897c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a897c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x28u);
    }
L_000a8980:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000a8984:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x30u);
    }
L_000a8988:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_000a898c:;
    {
        cpu->r[1] = rd16(cpu->r[12] + cpu->r[1]);
    }
L_000a8990:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000a8994:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000a8998:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000a899c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + shifter(cpu->r[1], 2, 1u, &shc));
    }
L_000a89a0:;
    {
        cpu->r[3] = rd8(cpu->r[12] + + 0x5u);
    }
L_000a89a4:;
    {
        uint32_t v = cpu->r[3] & 0x000000c0u; cpu->r[3] = v;
    }
L_000a89a8:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_000a89ac:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000a89b0:;
    {
        cpu->r[0] = rd16(cpu->r[0] + cpu->r[3]);
    }
L_000a89b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Sprite14GetFModuleRectEPiiiiiiii @ 000a89b8 (arm) */
void fn_000a89b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a89b8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000a89bc:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000a89c0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000a89c4:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000a89c8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000a89cc:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000a89d0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000a89d4:;
    {
        cpu->r[14] = 0x000a89d8u; fn_000a88e0(cpu);
    }
L_000a89d8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000a89dc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000a89e0:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_000a89e4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a89e8:;
    {
        cpu->r[14] = 0x000a89ecu; fn_000a8910(cpu);
    }
L_000a89ec:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000a89f0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000a89f4:;
    {
        cpu->r[8] = rd32(cpu->r[4]);
    }
L_000a89f8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_000a89fc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a8a00:;
    {
        cpu->r[14] = 0x000a8a04u; fn_000a8940(cpu);
    }
L_000a8a04:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000a8a08:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000a8a0c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_000a8a10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_000a8a14:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_000a8a18:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a8a1c:;
    {
        cpu->r[14] = 0x000a8a20u; fn_000a897c(cpu);
    }
L_000a8a20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_000a8a24:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_000a8a28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a8a2cu)) return;
    }
}

/* _ZN6Sprite16ComputeFrameRectEPiiiiiii @ 000a8a2c (arm) */
void fn_000a8a2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8a2c:;
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
L_000a8a30:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_000a8a34:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000a8a38:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000a8a3c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000a8a40:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_000a8a44:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000a8a48:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000a8a4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a8a50:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000a8a54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a8bc8;
        }
    }
L_000a8a58:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a8a5c:;
    {
        cpu->r[5] = 0x000003e8u;
    }
L_000a8a60:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000a8a64:;
    {
        cpu->r[10] = cpu->r[4];
    }
L_000a8a68:;
    {
        cpu->r[9] = cpu->r[4];
    }
L_000a8a6c:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000a8a70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000a8a74:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000a8a78:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_000a8a7c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_000a8a80:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000a8a84:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000a8a88:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000a8a8c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000a8a90:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a8a94:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000a8a98:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a8a9c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x58u);
    }
L_000a8aa0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000a8aa4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000a8aa8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000a8aac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x60u);
    }
L_000a8ab0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000a8ab4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x64u);
    }
L_000a8ab8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000a8abc:;
    {
        cpu->r[14] = 0x000a8ac0u; fn_000a89b8(cpu);
    }
L_000a8ac0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000a8ac4:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_000a8ac8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000a8acc:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_000a8ad0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_000a8ad4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = cpu->r[2];
        }
    }
L_000a8ad8:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_000a8adc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[9], 0, 0);
    }
L_000a8ae0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_000a8ae4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = cpu->r[1];
        }
    }
L_000a8ae8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000a8aec:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
        }
    }
L_000a8af0:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_000a8af4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
    }
L_000a8af8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a8afc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000a8b00:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
        }
    }
L_000a8b04:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_000a8b08:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a8a80;
        }
    }
L_000a8b0c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000a8b10:;
    {
        { uint32_t v = cpu->r[2] & 0x00000004u; set_nz(cpu, v); }
    }
L_000a8b14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a8b8c;
        }
    }
L_000a8b18:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a8b1c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000a8b20:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = add_flags(cpu, cpu->r[9], cpu->r[6], 0, 0);
        }
    }
L_000a8b24:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x64u);
        }
    }
L_000a8b28:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x64u);
        }
    }
L_000a8b2c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
        }
    }
L_000a8b30:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 0);
        }
    }
L_000a8b34:;
    {
        { uint32_t v = cpu->r[2] & 0x00000002u; set_nz(cpu, v); }
    }
L_000a8b38:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
        }
    }
L_000a8b3c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x60u);
        }
    }
L_000a8b40:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x60u);
        }
    }
L_000a8b44:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
        }
    }
L_000a8b48:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
        }
    }
L_000a8b4c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x58u);
    }
L_000a8b50:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000a8b54:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000a8b58:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000a8b5c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 0);
    }
L_000a8b60:;
    {
        wr32(cpu->r[7], cpu->r[6]);
    }
L_000a8b64:;
    {
        wr32(cpu->r[8], cpu->r[3]);
    }
L_000a8b68:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a8b6c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_000a8b70:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000a8b74:;
    {
        wr32(cpu->r[3], cpu->r[9]);
    }
L_000a8b78:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000a8b7c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_000a8b80:;
    {
        wr32(cpu->r[12], cpu->r[10]);
    }
L_000a8b84:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000a8b88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a8b8cu)) return;
    }
L_000a8b8c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000a8b90:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000a8b94:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a8b98:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = add_flags(cpu, cpu->r[9], cpu->r[6], 0, 0);
        }
    }
L_000a8b9c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x60u);
        }
    }
L_000a8ba0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x60u);
        }
    }
L_000a8ba4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
        }
    }
L_000a8ba8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 0);
        }
    }
L_000a8bac:;
    {
        { uint32_t v = cpu->r[1] & 0x00000002u; set_nz(cpu, v); }
    }
L_000a8bb0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
        }
    }
L_000a8bb4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x64u);
        }
    }
L_000a8bb8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x64u);
        }
    }
L_000a8bbc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
        }
    }
L_000a8bc0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[5], 1, 0);
        }
    }
L_000a8bc4:;
    {
        goto L_000a8b4c;
    }
L_000a8bc8:;
    {
        cpu->r[5] = 0x000003e8u;
    }
L_000a8bcc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000a8bd0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_000a8bd4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000a8bd8:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_000a8bdc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_000a8be0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_000a8be4:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_000a8be8:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000a8bec:;
    {
        goto L_000a8b0c;
    }
}

/* _ZN6Sprite15GetAFrameHeightEii @ 000a8bf0 (arm) */
void fn_000a8bf0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8bf0:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000a8bf4:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x3cu);
    }
L_000a8bf8:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[4] = v;
    }
L_000a8bfc:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x44u);
    }
L_000a8c00:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_000a8c04:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000a8c08:;
    {
        cpu->r[4] = rd16(cpu->r[5] + cpu->r[4]);
    }
L_000a8c0c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000a8c10:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000a8c14:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_000a8c18:;
    {
        cpu->r[4] = sub_flags(cpu, shifter(cpu->r[4], 2, 3u, &shc), cpu->r[4], 1, 0);
    }
L_000a8c1c:;
    {
        uint32_t wb_tmp = cpu->r[14] + cpu->r[4];
        cpu->r[4] = rd8(cpu->r[14] + cpu->r[4]);
        cpu->r[14] = wb_tmp;
    }
L_000a8c20:;
    {
        cpu->r[2] = rd8(cpu->r[14] + + 0x6u);
    }
L_000a8c24:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a8c28:;
    {
        uint32_t v = cpu->r[2] & 0x000000c0u; cpu->r[2] = v;
    }
L_000a8c2c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000a8c30:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000a8c34:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_000a8c38:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000a8c3c:;
    {
        cpu->r[14] = 0x000a8c40u; fn_000a8a2c(cpu);
    }
L_000a8c40:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a8c44:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a8c48:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_000a8c4c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000a8c50:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000a8c54u)) return;
    }
}

/* _ZN6Sprite14GetAFrameWidthEii @ 000a8c54 (arm) */
void fn_000a8c54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8c54:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000a8c58:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x3cu);
    }
L_000a8c5c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[4] = v;
    }
L_000a8c60:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x44u);
    }
L_000a8c64:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_000a8c68:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000a8c6c:;
    {
        cpu->r[4] = rd16(cpu->r[5] + cpu->r[4]);
    }
L_000a8c70:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000a8c74:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000a8c78:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_000a8c7c:;
    {
        cpu->r[4] = sub_flags(cpu, shifter(cpu->r[4], 2, 3u, &shc), cpu->r[4], 1, 0);
    }
L_000a8c80:;
    {
        uint32_t wb_tmp = cpu->r[14] + cpu->r[4];
        cpu->r[4] = rd8(cpu->r[14] + cpu->r[4]);
        cpu->r[14] = wb_tmp;
    }
L_000a8c84:;
    {
        cpu->r[2] = rd8(cpu->r[14] + + 0x6u);
    }
L_000a8c88:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a8c8c:;
    {
        uint32_t v = cpu->r[2] & 0x000000c0u; cpu->r[2] = v;
    }
L_000a8c90:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000a8c94:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000a8c98:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_000a8c9c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000a8ca0:;
    {
        cpu->r[14] = 0x000a8ca4u; fn_000a8a2c(cpu);
    }
L_000a8ca4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a8ca8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a8cac:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_000a8cb0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000a8cb4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000a8cb8u)) return;
    }
}

/* _ZN6Sprite17ComputeAFrameRectEPiiiiiiii @ 000a8cb8 (arm) */
void fn_000a8cb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8cb8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000a8cbc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a8cc0:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000a8cc4:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000a8cc8:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000a8ccc:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000a8cd0:;
    {
        wr32(cpu->r[1], cpu->r[5]);
    }
L_000a8cd4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000a8cd8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a8cdc:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000a8ce0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_000a8ce4:;
    {
        cpu->r[14] = 0x000a8ce8u; fn_000a8c54(cpu);
    }
L_000a8ce8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000a8cec:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000a8cf0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_000a8cf4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_000a8cf8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_000a8cfc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a8d00:;
    {
        cpu->r[14] = 0x000a8d04u; fn_000a8bf0(cpu);
    }
L_000a8d04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_000a8d08:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_000a8d0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a8d10u)) return;
    }
}

/* _ZN6Sprite16ComputeFrameSizeEiRiS0_ @ 000a8d10 (arm) */
void fn_000a8d10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8d10:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000a8d14:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000a8d18:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_000a8d1c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000a8d20:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_000a8d24:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000a8d28:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000a8d2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000a8d30:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a8d34:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000a8d38:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000a8d3c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000a8d40:;
    {
        cpu->r[14] = 0x000a8d44u; fn_000a8a2c(cpu);
    }
L_000a8d44:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a8d48:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a8d4c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a8d50:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a8d54:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000a8d58:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_000a8d5c:;
    {
        wr32(cpu->r[5], cpu->r[1]);
    }
L_000a8d60:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000a8d64:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000a8d68:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000a8d6cu)) return;
    }
}

/* _ZN6Sprite13GetModuleRectEPiiiij @ 000a8d6c (arm) */
void fn_000a8d6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8d6c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_000a8d70:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x8u);
    }
L_000a8d74:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0xcu);
    }
L_000a8d78:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000a8d7c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000a8d80:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_000a8d84:;
    {
        cpu->r[0] = rd16(cpu->r[4] + cpu->r[2]);
    }
L_000a8d88:;
    {
        cpu->r[2] = rd16(cpu->r[5] + cpu->r[2]);
    }
L_000a8d8c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_000a8d90:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[12]);
    }
L_000a8d94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000a8d98:;
    {
        wr32(cpu->r[1] + + 0xcu, cpu->r[0]);
    }
L_000a8d9c:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[3]);
    }
L_000a8da0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_000a8da4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z16computeCorectioniif @ 000a8da8 (arm) */
void fn_000a8da8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8da8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_000a8dac:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_000a8db0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_000a8db4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000a8db8:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[1];
    }
L_000a8dbc:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_000a8dc0:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000a8dc4:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000a8dc8:;
    {
        vfp_vmul(cpu, 13, 13, 15);
    }
L_000a8dcc:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000a8dd0:;
    {
        vfp_vmul(cpu, 15, 12, 15);
    }
L_000a8dd4:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000a8dd8:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000a8ddc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000a8de0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000a8de4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000a8de8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000a8dec:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a8df0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_000a8df4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Sprite10getModuleWEi @ 000a8df8 (arm) */
void fn_000a8df8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8df8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_000a8dfc:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000a8e00:;
    {
        cpu->r[0] = rd16(cpu->r[3] + cpu->r[1]);
    }
L_000a8e04:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Sprite10getModuleHEi @ 000a8e08 (arm) */
void fn_000a8e08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8e08:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_000a8e0c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000a8e10:;
    {
        cpu->r[0] = rd16(cpu->r[3] + cpu->r[1]);
    }
L_000a8e14:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Sprite16SetModuleSpacingEi @ 000a8e18 (arm) */
void fn_000a8e18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8e18:;
    {
        wr32(cpu->r[0] + + 0x58u, cpu->r[1]);
    }
L_000a8e1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Sprite13Is_RU_SC_CharEt @ 000a8e20 (arm) */
void fn_000a8e20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8e20:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
    }
L_000a8e24:;
    {
        cpu->r[7] = rd32(0x000a8e2cu + + 0x60u);
    }
L_000a8e28:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000a8e2c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000030u, 1, 0);
    }
L_000a8e30:;
    {
        cpu->r[7] = add_flags(cpu, 0x000a8e38u, cpu->r[7], 0, 0);
    }
L_000a8e34:;
    {
        cpu->r[5] = cpu->r[13];
    }
L_000a8e38:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x000000a8u, 0, 0);
    }
L_000a8e3c:;
    {
        cpu->r[4] = cpu->r[13];
    }
L_000a8e40:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000a8e44:;
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
L_000a8e48:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[5] = base + 16u;
    }
L_000a8e4c:;
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
L_000a8e50:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[5] = base + 16u;
    }
L_000a8e54:;
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
L_000a8e58:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_000a8e5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000a8e60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_000a8e64:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000a8e68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a8e84;
        }
    }
L_000a8e6c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000030u, 1, 1);
    }
L_000a8e70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a8e5c;
        }
    }
L_000a8e74:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000a8e78:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_000a8e7c:;
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
L_000a8e80:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000a8e84:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000a8e88:;
    {
        goto L_000a8e78;
    }
}

/* _ZN6Sprite21IsChineseSpecicalCharEt @ 000a8e90 (arm) */
void fn_000a8e90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8e90:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x000000e6u, 0, 0);
    }
L_000a8e94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x000000ffu, 0, 0);
    }
L_000a8e98:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_000a8e9c:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000a8ea0:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000eu, 1, 1);
    }
L_000a8ea4:;
    {
        if (cond_test(cpu, 9)) {
        sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 1);
        }
    }
L_000a8ea8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000a8ee0;
        }
    }
L_000a8eac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00003000u, 1, 0);
    }
L_000a8eb0:;
    {
        cpu->r[2] = 0x00002026u;
    }
L_000a8eb4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000a8eb8:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000a8ebc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000a8ec0:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
        }
    }
L_000a8ec4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000a8ee0;
        }
    }
L_000a8ec8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000021u, 1, 0);
    }
L_000a8ecc:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_000a8ed0:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000000eu, 1, 1);
    }
L_000a8ed4:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a8ed8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a8edc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000a8ee0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000a8ee4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Sprite16FontHasCharacterEh @ 000a8ee8 (arm) */
void fn_000a8ee8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8ee8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000020u, 1, 1);
    }
L_000a8eec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000a8ef0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a8ef4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a8f48;
        }
    }
L_000a8ef8:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 1);
    }
L_000a8efc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a8f48;
        }
    }
L_000a8f00:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000du, 1, 1);
    }
L_000a8f04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a8f48;
        }
    }
L_000a8f08:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x2cu);
    }
L_000a8f0c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000a8f10:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000a8f40;
        }
    }
L_000a8f14:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000a8f18:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x30u);
    }
L_000a8f1c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_000a8f20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000a8f24:;
    {
        cpu->r[3] = rd8(cpu->r[3] + shifter(cpu->r[1], 2, 1u, &shc));
    }
L_000a8f28:;
    {
        cpu->r[5] = rd8(cpu->r[12] + + 0x5u);
    }
L_000a8f2c:;
    {
        uint32_t v = cpu->r[5] & 0x000000c0u; cpu->r[5] = v;
    }
L_000a8f30:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
    }
L_000a8f34:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
    }
L_000a8f38:;
    {
        sub_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 1u, &shc), 1, 1);
    }
L_000a8f3c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a8f50;
        }
    }
L_000a8f40:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000a8f44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a8f48u)) return;
    }
L_000a8f48:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000a8f4c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a8f50u)) return;
    }
L_000a8f50:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 1u, &shc); cpu->r[5] = v;
    }
L_000a8f54:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000a8f58:;
    {
        cpu->r[14] = 0x000a8f5cu; fn_000a8e08(cpu);
    }
L_000a8f5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a8f60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a8f40;
        }
    }
L_000a8f64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a8f68:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000a8f6c:;
    {
        cpu->r[14] = 0x000a8f70u; fn_000a8df8(cpu);
    }
L_000a8f70:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a8f74:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a8f78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a8f7cu)) return;
    }
}

/* _ZN6Sprite19SetCurrentAnimationEiib @ 000a8f7c (arm) */
void fn_000a8f7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a8f7c:;
    {
        cpu->r[0] = rd32(0x000a8f84u + + 0x74u);
    }
L_000a8f80:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000027u, 1, 1);
    }
L_000a8f84:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_000a8f88:;
    {
        cpu->r[0] = add_flags(cpu, 0x000a8f90u, cpu->r[0], 0, 0);
    }
L_000a8f8c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a8fdc;
        }
    }
L_000a8f90:;
    {
        cpu->r[4] = rd32(0x000a8f98u + + 0x64u);
    }
L_000a8f94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a8f98:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000a8f9c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_000a8fa0:;
    {
        cpu->r[4] = rd32(0x000a8fa8u + + 0x58u);
    }
L_000a8fa4:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[2]);
    }
L_000a8fa8:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_000a8fac:;
    {
        cpu->r[4] = rd32(0x000a8fb4u + + 0x50u);
    }
L_000a8fb0:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[12]);
    }
L_000a8fb4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_000a8fb8:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[12]);
    }
L_000a8fbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a8fe4;
        }
    }
L_000a8fc0:;
    {
        cpu->r[2] = rd32(0x000a8fc8u + + 0x40u);
    }
L_000a8fc4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000a8fc8:;
    {
        wr8(cpu->r[2] + cpu->r[1], cpu->r[3]);
    }
L_000a8fcc:;
    {
        cpu->r[3] = rd32(0x000a8fd4u + + 0x38u);
    }
L_000a8fd0:;
    {
        cpu->r[2] = (~0x00000001u);
    }
L_000a8fd4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000a8fd8:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[2]);
    }
L_000a8fdc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_000a8fe0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000a8fe4:;
    {
        cpu->r[3] = rd32(0x000a8fecu + + 0x1cu);
    }
L_000a8fe8:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000a8fec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000a8ff0:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_000a8ff4:;
    {
        goto L_000a8fcc;
    }
}

/* _ZN6Sprite19SetCurrentAnimationEiii @ 000a9010 (arm) */
void fn_000a9010(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a9010:;
    {
        cpu->r[0] = rd32(0x000a9018u + + 0x5cu);
    }
L_000a9014:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000027u, 1, 1);
    }
L_000a9018:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_000a901c:;
    {
        cpu->r[0] = add_flags(cpu, 0x000a9024u, cpu->r[0], 0, 0);
    }
L_000a9020:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a906c;
        }
    }
L_000a9024:;
    {
        cpu->r[4] = rd32(0x000a902cu + + 0x4cu);
    }
L_000a9028:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000a902c:;
    {
        cpu->r[5] = rd32(0x000a9034u + + 0x48u);
    }
L_000a9030:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000a9034:;
    {
        cpu->r[8] = rd32(0x000a903cu + + 0x44u);
    }
L_000a9038:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_000a903c:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_000a9040:;
    {
        cpu->r[4] = rd32(0x000a9048u + + 0x3cu);
    }
L_000a9044:;
    {
        cpu->r[5] = rd32(0x000a904cu + + 0x3cu);
    }
L_000a9048:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[2]);
    }
L_000a904c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_000a9050:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_000a9054:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_000a9058:;
    {
        cpu->r[8] = (~0x00000001u);
    }
L_000a905c:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[12]);
    }
L_000a9060:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[8]);
    }
L_000a9064:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[12]);
    }
L_000a9068:;
    {
        wr8(cpu->r[0] + cpu->r[1], cpu->r[3]);
    }
L_000a906c:;
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
L_000a9070:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Sprite22ChangeCurrentAnimationEiib @ 000a908c (arm) */
void fn_000a908c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a908c:;
    {
        cpu->r[0] = rd32(0x000a9094u + + 0x98u);
    }
L_000a9090:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000027u, 1, 1);
    }
L_000a9094:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000a9098:;
    {
        cpu->r[0] = add_flags(cpu, 0x000a90a0u, cpu->r[0], 0, 0);
    }
L_000a909c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a90fc;
        }
    }
L_000a90a0:;
    {
        cpu->r[12] = rd32(0x000a90a8u + + 0x88u);
    }
L_000a90a4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000a90a8:;
    {
        cpu->r[4] = rd32(cpu->r[12] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000a90ac:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000a90b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a9114;
        }
    }
L_000a90b4:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[2]);
    }
L_000a90b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a90bc:;
    {
        cpu->r[2] = rd32(0x000a90c4u + + 0x70u);
    }
L_000a90c0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a90c4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000a90c8:;
    {
        cpu->r[2] = rd32(0x000a90d0u + + 0x68u);
    }
L_000a90cc:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[4]);
    }
L_000a90d0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000a90d4:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[4]);
    }
L_000a90d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a9104;
        }
    }
L_000a90dc:;
    {
        cpu->r[3] = rd32(0x000a90e4u + + 0x58u);
    }
L_000a90e0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000a90e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000a90e8:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_000a90ec:;
    {
        cpu->r[3] = rd32(0x000a90f4u + + 0x4cu);
    }
L_000a90f0:;
    {
        cpu->r[2] = (~0x00000001u);
    }
L_000a90f4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000a90f8:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[2]);
    }
L_000a90fc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000a9100:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000a9104:;
    {
        cpu->r[2] = rd32(0x000a910cu + + 0x30u);
    }
L_000a9108:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000a910c:;
    {
        wr8(cpu->r[2] + cpu->r[1], cpu->r[3]);
    }
L_000a9110:;
    {
        goto L_000a90ec;
    }
L_000a9114:;
    {
        cpu->r[2] = rd32(0x000a911cu + + 0x20u);
    }
L_000a9118:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a911c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x000000ffu;
        }
    }
L_000a9120:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000a9124:;
    {
        wr8(cpu->r[2] + cpu->r[1], cpu->r[3]);
    }
L_000a9128:;
    {
        goto L_000a90fc;
    }
}

/* _ZN6Sprite22ChangeCurrentAnimationEiii @ 000a9144 (arm) */
void fn_000a9144(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a9144:;
    {
        cpu->r[0] = rd32(0x000a914cu + + 0x78u);
    }
L_000a9148:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000027u, 1, 1);
    }
L_000a914c:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_000a9150:;
    {
        cpu->r[0] = add_flags(cpu, 0x000a9158u, cpu->r[0], 0, 0);
    }
L_000a9154:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a91ac;
        }
    }
L_000a9158:;
    {
        cpu->r[12] = rd32(0x000a9160u + + 0x68u);
    }
L_000a915c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000a9160:;
    {
        cpu->r[4] = rd32(cpu->r[12] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000a9164:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000a9168:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a91b4;
        }
    }
L_000a916c:;
    {
        cpu->r[5] = rd32(0x000a9174u + + 0x58u);
    }
L_000a9170:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a9174:;
    {
        cpu->r[6] = rd32(0x000a917cu + + 0x54u);
    }
L_000a9178:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000a917c:;
    {
        cpu->r[7] = rd32(0x000a9184u + + 0x50u);
    }
L_000a9180:;
    {
        cpu->r[8] = rd32(0x000a9188u + + 0x50u);
    }
L_000a9184:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_000a9188:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_000a918c:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000a9190:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_000a9194:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[2]);
    }
L_000a9198:;
    {
        cpu->r[2] = (~0x00000001u);
    }
L_000a919c:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[4]);
    }
L_000a91a0:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[2]);
    }
L_000a91a4:;
    {
        wr8(cpu->r[0] + cpu->r[1], cpu->r[3]);
    }
L_000a91a8:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[4]);
    }
L_000a91ac:;
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
L_000a91b0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000a91b4:;
    {
        cpu->r[2] = rd32(0x000a91bcu + + 0x1cu);
    }
L_000a91b8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000a91bc:;
    {
        wr8(cpu->r[2] + cpu->r[1], cpu->r[3]);
    }
L_000a91c0:;
    {
        goto L_000a91ac;
    }
}

/* _ZN6Sprite15UpdateAnimationEi @ 000a91dc (arm) */
void fn_000a91dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a91dc:;
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
L_000a91e0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000027u, 1, 1);
    }
L_000a91e4:;
    {
        cpu->r[4] = rd32(0x000a91ecu + + 0x114u);
    }
L_000a91e8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000a91ec:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a91f4u, cpu->r[4], 0, 0);
    }
L_000a91f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a9200;
        }
    }
L_000a91f4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000a91f8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a91fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a9200u)) return;
    }
L_000a9200:;
    {
        cpu->r[3] = rd32(0x000a9208u + + 0xfcu);
    }
L_000a9204:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a9208:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000a920c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a9210:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a91f4;
        }
    }
L_000a9214:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x3cu);
    }
L_000a9218:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000a921c:;
    {
        cpu->r[6] = rd32(0x000a9224u + + 0xe4u);
    }
L_000a9220:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x44u);
    }
L_000a9224:;
    {
        cpu->r[10] = rd16(cpu->r[1] + cpu->r[3]);
    }
L_000a9228:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a922c:;
    {
        cpu->r[3] = rd32(0x000a9234u + + 0xd8u);
    }
L_000a9230:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x38u);
    }
L_000a9234:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a9238:;
    {
        cpu->r[3] = rd32(cpu->r[7] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000a923c:;
    {
        cpu->r[8] = rd8(cpu->r[8] + cpu->r[2]);
    }
L_000a9240:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_000a9244:;
    {
        cpu->r[12] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000a9248:;
    {
        cpu->r[10] = sub_flags(cpu, shifter(cpu->r[10], 2, 3u, &shc), cpu->r[10], 1, 0);
    }
L_000a924c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000a9250:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], cpu->r[10], 0, 0);
    }
L_000a9254:;
    {
        cpu->r[2] = rd8(cpu->r[10] + + 0x1u);
    }
L_000a9258:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[12]);
    }
L_000a925c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_000a9260:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a91f8;
        }
    }
L_000a9264:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000a9268:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[3]);
    }
L_000a926c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_000a9270:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000a9274:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[2]);
        }
    }
L_000a9278:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a91f8;
        }
    }
L_000a927c:;
    {
        cpu->r[3] = rd32(0x000a9284u + + 0x8cu);
    }
L_000a9280:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a9284:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[5]);
    }
L_000a9288:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a928c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a92b0;
        }
    }
L_000a9290:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000a9294:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a9298:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[3]);
    }
L_000a929c:;
    {
        cpu->r[1] = (uint32_t)((uint8_t)cpu->r[12]);
    }
L_000a92a0:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[3]);
    }
L_000a92a4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000a92a8:;
    {
        wr8(cpu->r[2] + cpu->r[5], cpu->r[1]);
    }
L_000a92ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a91f8;
        }
    }
L_000a92b0:;
    {
        cpu->r[3] = rd32(0x000a92b8u + + 0x5cu);
    }
L_000a92b4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a92b8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000a92bc:;
    {
        add_flags(cpu, cpu->r[2], 0x00000002u, 0, 1);
    }
L_000a92c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a92ec;
        }
    }
L_000a92c4:;
    {
        cpu->r[3] = rd32(0x000a92ccu + + 0x4cu);
    }
L_000a92c8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000a92cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a92d0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000a92d4:;
    {
        cpu->r[14] = 0x000a92d8u; fn_000a9010(cpu);
    }
L_000a92d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a92dc:;
    {
        cpu->r[2] = (~0x00000001u);
    }
L_000a92e0:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[2]);
    }
L_000a92e4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000a92e8:;
    {
        goto L_000a91f8;
    }
L_000a92ec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a92f0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000a92f4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000a92f8:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[3]);
    }
L_000a92fc:;
    {
        goto L_000a91f8;
    }
}

/* _ZN6Sprite15IsAnimationDoneEi @ 000a931c (arm) */
void fn_000a931c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a931c:;
    {
        cpu->r[3] = rd32(0x000a9324u + + 0xa4u);
    }
L_000a9320:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000027u, 1, 1);
    }
L_000a9324:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_000a9328:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a9330u, cpu->r[3], 0, 0);
    }
L_000a932c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a93b4;
        }
    }
L_000a9330:;
    {
        cpu->r[2] = rd32(0x000a9338u + + 0x94u);
    }
L_000a9334:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a9338:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000a933c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a9340:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a93b4;
        }
    }
L_000a9344:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x3cu);
    }
L_000a9348:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[12] = v;
    }
L_000a934c:;
    {
        cpu->r[4] = rd32(0x000a9354u + + 0x7cu);
    }
L_000a9350:;
    {
        cpu->r[12] = rd16(cpu->r[5] + cpu->r[12]);
    }
L_000a9354:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_000a9358:;
    {
        cpu->r[5] = rd32(0x000a9360u + + 0x74u);
    }
L_000a935c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000a9360:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_000a9364:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_000a9368:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x44u);
    }
L_000a936c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x38u);
    }
L_000a9370:;
    {
        cpu->r[6] = rd8(cpu->r[6] + cpu->r[1]);
    }
L_000a9374:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[12], 2, 3u, &shc), cpu->r[12], 1, 0);
    }
L_000a9378:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_000a937c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000a9380:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[2]);
    }
L_000a9384:;
    {
        cpu->r[0] = rd8(cpu->r[12] + + 0x1u);
    }
L_000a9388:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a93c0;
        }
    }
L_000a938c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000a9390:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000a9394:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a93c0;
        }
    }
L_000a9398:;
    {
        cpu->r[2] = rd32(0x000a93a0u + + 0x38u);
    }
L_000a939c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a93a0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000a93a4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000a93a8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a93ac:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a93b0:;
    {
        goto L_000a93b8;
    }
L_000a93b4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000a93b8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_000a93bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000a93c0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000a93c4:;
    {
        goto L_000a93b8;
    }
}

/* _ZN6Sprite24GetCurrentAnimationFrameEi @ 000a93dc (arm) */
void fn_000a93dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a93dc:;
    {
        cpu->r[3] = rd32(0x000a93e4u + + 0x10u);
    }
L_000a93e0:;
    {
        cpu->r[2] = rd32(0x000a93e8u + + 0x10u);
    }
L_000a93e4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a93ecu, cpu->r[3], 0, 0);
    }
L_000a93e8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a93ec:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000a93f0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Sprite26GetCurrentAnimationFrameIdEi @ 000a93fc (arm) */
void fn_000a93fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a93fc:;
    {
        cpu->r[3] = rd32(0x000a9404u + + 0x4cu);
    }
L_000a9400:;
    {
        cpu->r[2] = rd32(0x000a9408u + + 0x4cu);
    }
L_000a9404:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a940cu, cpu->r[3], 0, 0);
    }
L_000a9408:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x3cu);
    }
L_000a940c:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000a9410:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a9414:;
    {
        cpu->r[2] = rd32(0x000a941cu + + 0x3cu);
    }
L_000a9418:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a941c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x44u);
    }
L_000a9420:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000a9424:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000a9428:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000a942c:;
    {
        cpu->r[1] = rd16(cpu->r[12] + cpu->r[1]);
    }
L_000a9430:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000a9434:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 2, 3u, &shc), cpu->r[2], 1, 0);
    }
L_000a9438:;
    {
        uint32_t wb_tmp = cpu->r[3] + cpu->r[2];
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000a943c:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x6u);
    }
L_000a9440:;
    {
        uint32_t v = cpu->r[0] & 0x000000c0u; cpu->r[0] = v;
    }
L_000a9444:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000a9448:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000a944c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Sprite18GetAnimationLengthEi @ 000a945c (arm) */
void fn_000a945c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a945c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x38u);
    }
L_000a9460:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000a9464:;
    {
        cpu->r[12] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_000a9468:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000a946c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[12];
        }
    }
L_000a9470:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a94b0;
        }
    }
L_000a9474:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x3cu);
    }
L_000a9478:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000a947c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x44u);
    }
L_000a9480:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a9484:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[12], 2, 3u, &shc), cpu->r[12], 1, 0);
    }
L_000a9488:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a948c:;
    {
        cpu->r[1] = rd16(cpu->r[4] + cpu->r[1]);
    }
L_000a9490:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 2, 3u, &shc), cpu->r[1], 1, 0);
    }
L_000a9494:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_000a9498:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000007u, 0, 0);
    }
L_000a949c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x1u);
    }
L_000a94a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_000a94a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_000a94a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000a94ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a9498;
        }
    }
L_000a94b0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000a94b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Sprite22GetCurrentAnimationPosEi @ 000a94b8 (arm) */
void fn_000a94b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a94b8:;
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
L_000a94bc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000027u, 1, 1);
    }
L_000a94c0:;
    {
        cpu->r[4] = rd32(0x000a94c8u + + 0xd0u);
    }
L_000a94c4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000a94c8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000a94cc:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a94d4u, cpu->r[4], 0, 0);
    }
L_000a94d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a94dc;
        }
    }
L_000a94d4:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_000a94d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a94dcu)) return;
    }
L_000a94dc:;
    {
        cpu->r[3] = rd32(0x000a94e4u + + 0xb8u);
    }
L_000a94e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a94e4:;
    {
        cpu->r[8] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000a94e8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000a94ec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a94d4;
        }
    }
L_000a94f0:;
    {
        cpu->r[10] = rd32(0x000a94f8u + + 0xa8u);
    }
L_000a94f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000a94f8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000a94fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a9500:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_000a9504:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a9540;
        }
    }
L_000a9508:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x3cu);
    }
L_000a950c:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000a9510:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x44u);
    }
L_000a9514:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000a9518:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000a951c:;
    {
        cpu->r[1] = rd16(cpu->r[12] + cpu->r[1]);
    }
L_000a9520:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 2, 3u, &shc), cpu->r[1], 1, 0);
    }
L_000a9524:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_000a9528:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000a952c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x1u);
    }
L_000a9530:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_000a9534:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000007u, 0, 0);
    }
L_000a9538:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[1], 0, 0);
    }
L_000a953c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a9528;
        }
    }
L_000a9540:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a9544:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000a9548:;
    {
        cpu->r[14] = 0x000a954cu; fn_000a931c(cpu);
    }
L_000a954c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a9550:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a9584;
        }
    }
L_000a9554:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000a9558:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[8] = v;
    }
L_000a955c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x3cu);
    }
L_000a9560:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x44u);
    }
L_000a9564:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000a9568:;
    {
        cpu->r[1] = rd16(cpu->r[1] + cpu->r[8]);
    }
L_000a956c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_000a9570:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 3u, &shc), cpu->r[3], 1, 0);
    }
L_000a9574:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000a9578:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x1u);
    }
L_000a957c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_000a9580:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a9584u)) return;
    }
L_000a9584:;
    {
        cpu->r[3] = rd32(0x000a958cu + + 0x18u);
    }
L_000a9588:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a958c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000a9590:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_000a9594:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a9598u)) return;
    }
}

/* _ZN6Sprite19GetCurrentAnimationEi @ 000a95a8 (arm) */
void fn_000a95a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a95a8:;
    {
        cpu->r[3] = rd32(0x000a95b0u + + 0x10u);
    }
L_000a95ac:;
    {
        cpu->r[2] = rd32(0x000a95b4u + + 0x10u);
    }
L_000a95b0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a95b8u, cpu->r[3], 0, 0);
    }
L_000a95b4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a95b8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000a95bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Sprite21FillCurveWithFModulesEiPiS0_Ri @ 000a95c8 (arm) */
void fn_000a95c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a95c8:;
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
L_000a95cc:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_000a95d0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x24u);
    }
L_000a95d4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_000a95d8:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_000a95dc:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000a95e0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x58u);
    }
L_000a95e4:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_000a95e8:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_000a95ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a95f0:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_000a95f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a9658;
        }
    }
L_000a95f8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000a95fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_000a9600:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000a9604:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_000a9608:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000a960c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000a9610:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000a9614:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a9618:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a961c:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000a9620:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000a9624:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000a9628:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_000a962c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_000a9630:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[4]);
    }
L_000a9634:;
    {
        cpu->r[14] = 0x000a9638u; fn_000a89b8(cpu);
    }
L_000a9638:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_000a963c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000a9640:;
    {
        wr32(cpu->r[11] + cpu->r[5], cpu->r[2]);
    }
L_000a9644:;
    {
        wr32(cpu->r[9] + cpu->r[5], cpu->r[3]);
    }
L_000a9648:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000a964c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a9650:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000a9654:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a960c;
        }
    }
L_000a9658:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000a965c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a9660u)) return;
    }
}

/* _ZN6Sprite12GetFontIndexEPKttii @ 000a9660 (arm) */
void fn_000a9660(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a9660:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000a9664:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_000a9668:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_000a966c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a96b8;
        }
    }
L_000a9670:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_000a9674:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 1u, &shc); cpu->r[4] = v;
    }
L_000a9678:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[0] = v;
    }
L_000a967c:;
    {
        cpu->r[0] = rd16(cpu->r[1] + cpu->r[0]);
    }
L_000a9680:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000a9684:;
    {
        if (cond_test(cpu, 4)) {
        goto L_000a96ac;
        }
    }
L_000a9688:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000a968c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000a9690:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_000a9694:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[4] = v;
    }
L_000a9698:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a96b8;
        }
    }
L_000a969c:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[0] = v;
    }
L_000a96a0:;
    {
        cpu->r[0] = rd16(cpu->r[1] + cpu->r[0]);
    }
L_000a96a4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000a96a8:;
    {
        if (cond_test(cpu, 3)) {
        goto L_000a9688;
        }
    }
L_000a96ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000a96b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_000a96b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a9670;
        }
    }
L_000a96b8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[0] = v;
    }
L_000a96bc:;
    {
        cpu->r[0] = rd16(cpu->r[1] + cpu->r[0]);
    }
L_000a96c0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000a96c4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_000a96c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a96cc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000a96d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Sprite15GetModuleByCharEt @ 000a96d4 (arm) */
void fn_000a96d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a96d4:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x5cu);
    }
L_000a96d8:;
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
L_000a96dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a96e0:;
    {
        cpu->r[6] = rd32(0x000a96e8u + + 0x11cu);
    }
L_000a96e4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000a96e8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000a96ec:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000a96f0:;
    {
        cpu->r[6] = add_flags(cpu, 0x000a96f8u, cpu->r[6], 0, 0);
    }
L_000a96f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a973c;
        }
    }
L_000a96f8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], 0x000000e0u, 1, 0);
    }
L_000a96fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000061u, 1, 0);
    }
L_000a9700:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_000a9704:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000a9708:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000019u, 1, 1);
    }
L_000a970c:;
    {
        if (cond_test(cpu, 9)) {
        sub_flags(cpu, cpu->r[2], 0x0000001cu, 1, 1);
        }
    }
L_000a9710:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000a9728;
        }
    }
L_000a9714:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a9718:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000a971c:;
    {
        cpu->r[14] = 0x000a9720u; fn_000a8750(cpu);
    }
L_000a9720:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a9724:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a9728u)) return;
    }
L_000a9728:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x50u);
    }
L_000a972c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a9730:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000020u, 1, 0);
        }
    }
L_000a9734:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = (uint32_t)((uint16_t)cpu->r[5]);
        }
    }
L_000a9738:;
    {
        goto L_000a9714;
    }
L_000a973c:;
    {
        cpu->r[10] = rd32(0x000a9744u + + 0xc4u);
    }
L_000a9740:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a9744:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a9748:;
    {
        cpu->r[14] = 0x000a974cu; fn_000962d0(cpu);
    }
L_000a974c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_000a9750:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a97f0;
        }
    }
L_000a9754:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_000a9758:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a97a0;
        }
    }
L_000a975c:;
    {
        cpu->r[8] = rd32(0x000a9764u + + 0xa8u);
    }
L_000a9760:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a9764:;
    {
        cpu->r[8] = add_flags(cpu, 0x000a976cu, cpu->r[8], 0, 0);
    }
L_000a9768:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000880u, 0, 0);
    }
L_000a976c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_000a9770:;
    {
        cpu->r[6] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a9774:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000a9778:;
    {
        cpu->r[14] = 0x000a977cu; fn_000962d0(cpu);
    }
L_000a977c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_000a9780:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a97b8;
        }
    }
L_000a9784:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a9788:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000a978c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000a9790:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a9794:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000a9798:;
    {
        cpu->r[14] = 0x000a979cu; fn_000a9660(cpu);
    }
L_000a979c:;
    {
        goto L_000a9720;
    }
L_000a97a0:;
    {
        cpu->r[8] = rd32(0x000a97a8u + + 0x68u);
    }
L_000a97a4:;
    {
        cpu->r[4] = 0x000005a5u;
    }
L_000a97a8:;
    {
        cpu->r[8] = add_flags(cpu, 0x000a97b0u, cpu->r[8], 0, 0);
    }
L_000a97ac:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000da0u, 0, 0);
    }
L_000a97b0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_000a97b4:;
    {
        goto L_000a9770;
    }
L_000a97b8:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000a97bc:;
    {
        cpu->r[14] = 0x000a97c0u; fn_000962d0(cpu);
    }
L_000a97c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_000a97c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a97c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a9784;
        }
    }
L_000a97cc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000a97d0:;
    {
        cpu->r[3] = rd16(cpu->r[8] + cpu->r[3]);
    }
L_000a97d4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000a97d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a9720;
        }
    }
L_000a97dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000a97e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000290u, 1, 1);
    }
L_000a97e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a97cc;
        }
    }
L_000a97e8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000a97ec:;
    {
        goto L_000a9720;
    }
L_000a97f0:;
    {
        cpu->r[8] = rd32(0x000a97f8u + + 0x1cu);
    }
L_000a97f4:;
    {
        cpu->r[4] = 0x000003d5u;
    }
L_000a97f8:;
    {
        cpu->r[8] = add_flags(cpu, 0x000a9800u, cpu->r[8], 0, 0);
    }
L_000a97fc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x000000d8u, 0, 0);
    }
L_000a9800:;
    {
        goto L_000a9770;
    }
}

/* _ZN6Sprite8WrapTextEPtPsi @ 000a9818 (arm) */
void fn_000a9818(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a9818:;
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
L_000a981c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_000a9820:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a9824:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000a9828:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_000a982c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_000a9830:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000a9834:;
    {
        cpu->r[14] = 0x000a9838u; fn_000ae12c(cpu);
    }
L_000a9838:;
    {
        cpu->r[1] = rd32(0x000a9840u + + 0x878u);
    }
L_000a983c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a9844u, cpu->r[1], 0, 0);
    }
L_000a9840:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000a9844:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a9848:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000a984c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a991c;
        }
    }
L_000a9850:;
    {
        cpu->r[2] = rd32(0x000a9858u + + 0x864u);
    }
L_000a9854:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000a9858:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a985c:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_000a9860:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000a9864:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[5]);
    }
L_000a9868:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000a986c:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a9870:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_000a9874:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_000a9878:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000a987c:;
    {
        cpu->r[14] = 0x000a9880u; fn_000962d0(cpu);
    }
L_000a9880:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_000a9884:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a9948;
        }
    }
L_000a9888:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a988c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[10] = v;
    }
L_000a9890:;
    {
        cpu->r[1] = rd16(cpu->r[12] + cpu->r[10]);
    }
L_000a9894:;
    {
        sub_flags(cpu, cpu->r[1], 0x000000ffu, 1, 1);
    }
L_000a9898:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
        }
    }
L_000a989c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000a98a0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000a98a4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a9988;
        }
    }
L_000a98a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x58u);
    }
L_000a98ac:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000a98b0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_000a98b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a98b8:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_000a98bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_000a98c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000005u, 0, 0);
        }
    }
L_000a98c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
        }
    }
L_000a98c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a9934;
        }
    }
L_000a98cc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_000a98d0:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000a98d4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a9878;
        }
    }
L_000a98d8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000a98dc:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[9]);
    }
L_000a98e0:;
    {
        if (cond_test(cpu, 1)) {
        { int32_t v = (int32_t)(cpu->r[3] << 16); cpu->r[3] = (uint32_t)(v >> 17); }
        }
    }
L_000a98e4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
        }
    }
L_000a98e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a991c;
        }
    }
L_000a98ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000a98f0:;
    {
        cpu->r[9] = (uint32_t)((int16_t)cpu->r[9]);
    }
L_000a98f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a98f8:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_000a98fc:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 1u, &shc); cpu->r[9] = v;
    }
L_000a9900:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000a9904:;
    {
        { int32_t v = (int32_t)(cpu->r[3] << 16); cpu->r[3] = (uint32_t)(v >> 17); }
    }
L_000a9908:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_000a990c:;
    {
        wr16(cpu->r[12] + cpu->r[9], cpu->r[8]);
    }
L_000a9910:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000a9914:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000a9918:;
    {
        wr16(cpu->r[12] + cpu->r[2], cpu->r[6]);
    }
L_000a991c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a9920:;
    {
        wr16(cpu->r[0], cpu->r[3]);
    }
L_000a9924:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000a9928:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a992cu)) return;
    }
L_000a992c:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000001fu, 1, 1);
    }
L_000a9930:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a9aa0;
        }
    }
L_000a9934:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000a9938:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_000a993c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000a9940:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a9878;
        }
    }
L_000a9944:;
    {
        goto L_000a98d8;
    }
L_000a9948:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000a994c:;
    {
        cpu->r[14] = 0x000a9950u; fn_000962d0(cpu);
    }
L_000a9950:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_000a9954:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a9888;
        }
    }
L_000a9958:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000a995c:;
    {
        cpu->r[14] = 0x000a9960u; fn_000962d0(cpu);
    }
L_000a9960:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_000a9964:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a9888;
        }
    }
L_000a9968:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a996c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[10] = v;
    }
L_000a9970:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[10]);
    }
L_000a9974:;
    {
        sub_flags(cpu, cpu->r[1], 0x000000ffu, 1, 1);
    }
L_000a9978:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
        }
    }
L_000a997c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000a9980:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000a9984:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a98a8;
        }
    }
L_000a9988:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000007eu, 1, 1);
    }
L_000a998c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a9a94;
        }
    }
L_000a9990:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000020u, 1, 1);
    }
L_000a9994:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a9dc8;
        }
    }
L_000a9998:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000007cu, 1, 1);
    }
L_000a999c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a9f28;
        }
    }
L_000a99a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 1);
    }
L_000a99a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a9f4c;
        }
    }
L_000a99a8:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000005eu, 1, 1);
    }
L_000a99ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a992c;
        }
    }
L_000a99b0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000a99b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a99b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aa004;
        }
    }
L_000a99bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a99c0:;
    {
        cpu->r[1] = 0x0000002du;
    }
L_000a99c4:;
    {
        cpu->r[14] = 0x000a99c8u; fn_000a8750(cpu);
    }
L_000a99c8:;
    {
        cpu->r[10] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_000a99cc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x30u);
    }
L_000a99d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_000a99d4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a99d8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a99dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000a99e0:;
    {
        cpu->r[0] = rd8(cpu->r[2] + shifter(cpu->r[0], 2, 1u, &shc));
    }
L_000a99e4:;
    {
        cpu->r[1] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_000a99e8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_000a99ec:;
    {
        cpu->r[11] = rd8(cpu->r[3] + + 0x5u);
    }
L_000a99f0:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000a99f4:;
    {
        cpu->r[14] = 0x000a99f8u; fn_000962d0(cpu);
    }
L_000a99f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_000a99fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa0a4;
        }
    }
L_000a9a00:;
    {
        uint32_t v = cpu->r[11] & 0x000000c0u; cpu->r[11] = v;
    }
L_000a9a04:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a9a08:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[11], 2, 2u, &shc); cpu->r[11] = v;
    }
L_000a9a0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000a9a10:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000a9a14:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a9a18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a9a1c:;
    {
        cpu->r[11] = rd8(cpu->r[3] + shifter(cpu->r[11], 2, 1u, &shc));
    }
L_000a9a20:;
    {
        cpu->r[14] = 0x000a9a24u; fn_000a88e0(cpu);
    }
L_000a9a24:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a9a28:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000a9a2c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000a9a30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a9a34:;
    {
        cpu->r[14] = 0x000a9a38u; fn_000a88e0(cpu);
    }
L_000a9a38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000a9a3c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x58u);
    }
L_000a9a40:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[9]);
    }
L_000a9a44:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000a9a48:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000a9a4c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000a9a50:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a9a54:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_000a9a58:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000a9a5c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_000a9a60:;
    {
        cpu->r[9] = (uint32_t)((uint16_t)cpu->r[9]);
    }
L_000a9a64:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000a9a68:;
    {
        wr16(cpu->r[5] + cpu->r[1], cpu->r[2]);
    }
L_000a9a6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_000a9a70:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_000a9a74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_000a9a78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_000a9a7c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000a9a80:;
    {
        wr16(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_000a9a84:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000a9a88:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_000a9a8c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a9878;
        }
    }
L_000a9a90:;
    {
        goto L_000a98d8;
    }
L_000a9a94:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000a9a98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a9a9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a9934;
        }
    }
L_000a9aa0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000a9aa4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a9aa8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a9f3c;
        }
    }
L_000a9aac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a9ab0:;
    {
        cpu->r[14] = 0x000a9ab4u; fn_000a96d4(cpu);
    }
L_000a9ab4:;
    {
        cpu->r[11] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_000a9ab8:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000a9abc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_000a9ac0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a9ac4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a9ac8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a9acc:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_000a9ad0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
        }
    }
L_000a9ad4:;
    {
        cpu->r[0] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_000a9ad8:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_000a9adc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_000a9ae0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 2, 1u, &shc), 0, 0);
        }
    }
L_000a9ae4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_000a9ae8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[11];
        }
    }
L_000a9aec:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00000005u;
        }
    }
L_000a9af0:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
        }
    }
L_000a9af4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000a9af8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000005u, 0, 0);
        }
    }
L_000a9afc:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000a9b00:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000a9b04:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_000a9b08:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_000a9b0c:;
    {
        cpu->r[14] = 0x000a9b10u; fn_000962d0(cpu);
    }
L_000a9b10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_000a9b14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa090;
        }
    }
L_000a9b18:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000a9b1c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000a9b20:;
    {
        uint32_t v = cpu->r[14] & 0x000000c0u; cpu->r[12] = v;
    }
L_000a9b24:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
    }
L_000a9b28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_000a9b2c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a9b30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a9b34:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000a9b38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000a9b3c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_000a9b40:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
        }
    }
L_000a9b44:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = cpu->r[11];
        }
    }
L_000a9b48:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000a9b4c:;
    {
        cpu->r[12] = rd8(cpu->r[3] + cpu->r[12]);
    }
L_000a9b50:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a9b54:;
    {
        cpu->r[14] = 0x000a9b58u; fn_000a88e0(cpu);
    }
L_000a9b58:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a9b5c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000a9b60:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000a9b64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a9b68:;
    {
        cpu->r[14] = 0x000a9b6cu; fn_000a88e0(cpu);
    }
L_000a9b6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_000a9b70:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_000a9b74:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a9b78:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000a9b7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_000a9b80:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 0);
    }
L_000a9b84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_000a9b88:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000a9b8c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000a9b90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_000a9b94:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_000a9b98:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000a9b9c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000a9ba0:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[6]);
    }
L_000a9ba4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000a9ba8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a9934;
        }
    }
L_000a9bac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_000a9bb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a9bb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a9c54;
        }
    }
L_000a9bb8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x8u);
    }
L_000a9bbc:;
    {
        cpu->r[10] = (uint32_t)((int16_t)cpu->r[5]);
    }
L_000a9bc0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000a9bc4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a9bf4;
        }
    }
L_000a9bc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000a9bcc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a9bd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a9bd4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000a9bd8:;
    {
        cpu->r[5] = rd8(cpu->r[3]);
    }
L_000a9bdc:;
    {
        cpu->r[14] = 0x000a9be0u; fn_000a88e0(cpu);
    }
L_000a9be0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_000a9be4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_000a9be8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_000a9bec:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_000a9bf0:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[5]);
    }
L_000a9bf4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000a9bf8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000a9bfc:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[9]);
    }
L_000a9c00:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a9c04:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000a9c08:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000a9c0c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000a9c10:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a9c14:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_000a9c18:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000a9c1c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x8u);
    }
L_000a9c20:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 0);
    }
L_000a9c24:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000a9c28:;
    {
        cpu->r[9] = (uint32_t)((uint16_t)cpu->r[9]);
    }
L_000a9c2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000a9c30:;
    {
        wr16(cpu->r[12] + cpu->r[2], cpu->r[1]);
    }
L_000a9c34:;
    {
        wr16(cpu->r[12] + cpu->r[3], cpu->r[6]);
    }
L_000a9c38:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
        }
    }
L_000a9c3c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_000a9c40:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[13] + + 0x20u, cpu->r[6]);
        }
    }
L_000a9c44:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000a98cc;
        }
    }
L_000a9c48:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_000a9c4c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000a9c50:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 1u, &shc); cpu->r[10] = v;
    }
L_000a9c54:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a9c58:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_000a9c5c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_000a9c60:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[14], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000a9c64:;
    {
        cpu->r[11] = rd16(cpu->r[14] + cpu->r[10]);
    }
L_000a9c68:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000a9c6c:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_000a9c70:;
    {
        cpu->r[9] = cpu->r[8];
    }
L_000a9c74:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x24u);
    }
L_000a9c78:;
    {
        goto L_000a9ce8;
    }
L_000a9c7c:;
    {
        cpu->r[14] = 0x000a9c80u; fn_000a96d4(cpu);
    }
L_000a9c80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_000a9c84:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a9c88:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_000a9c8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000a9c90:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000a9c94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a9c98:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_000a9c9c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + shifter(cpu->r[12], 2, 1u, &shc));
    }
L_000a9ca0:;
    {
        cpu->r[10] = rd8(cpu->r[14] + + 0x5u);
    }
L_000a9ca4:;
    {
        uint32_t v = cpu->r[10] & 0x000000c0u; cpu->r[10] = v;
    }
L_000a9ca8:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[10], 2, 2u, &shc); cpu->r[10] = v;
    }
L_000a9cac:;
    {
        cpu->r[14] = 0x000a9cb0u; fn_000a88e0(cpu);
    }
L_000a9cb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000a9cb4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a9cb8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000a9cbc:;
    {
        cpu->r[10] = rd8(cpu->r[3] + shifter(cpu->r[10], 2, 1u, &shc));
    }
L_000a9cc0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_000a9cc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a9cc8:;
    {
        cpu->r[14] = 0x000a9cccu; fn_000a88e0(cpu);
    }
L_000a9ccc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x58u);
    }
L_000a9cd0:;
    {
        cpu->r[10] = (uint32_t)((uint16_t)cpu->r[10]);
    }
L_000a9cd4:;
    {
        cpu->r[3] = rd16(cpu->r[5] + + 0x2u);
    }
L_000a9cd8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_000a9cdc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 0);
    }
L_000a9ce0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_000a9ce4:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_000a9ce8:;
    {
        cpu->r[10] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000a9cec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a9cf0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000a9cf4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 0);
    }
L_000a9cf8:;
    {
        cpu->r[14] = 0x000a9cfcu; fn_000a8e90(cpu);
    }
L_000a9cfc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000a9d00:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a9d04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a9d08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a9c7c;
        }
    }
L_000a9d0c:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_000a9d10:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[8]);
    }
L_000a9d14:;
    {
        cpu->r[14] = 0x000a9d18u; fn_000a96d4(cpu);
    }
L_000a9d18:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x30u);
    }
L_000a9d1c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000a9d20:;
    {
        cpu->r[8] = cpu->r[9];
    }
L_000a9d24:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_000a9d28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000a9d2c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000a9d30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a9d34:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000a9d38:;
    {
        cpu->r[12] = rd8(cpu->r[12] + shifter(cpu->r[3], 2, 1u, &shc));
    }
L_000a9d3c:;
    {
        cpu->r[3] = rd8(cpu->r[14] + + 0x5u);
    }
L_000a9d40:;
    {
        uint32_t v = cpu->r[3] & 0x000000c0u; cpu->r[3] = v;
    }
L_000a9d44:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_000a9d48:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[5] = v;
    }
L_000a9d4c:;
    {
        cpu->r[14] = 0x000a9d50u; fn_000a88e0(cpu);
    }
L_000a9d50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000a9d54:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000a9d58:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000a9d5c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[5]);
    }
L_000a9d60:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_000a9d64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a9d68:;
    {
        cpu->r[11] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000a9d6c:;
    {
        cpu->r[14] = 0x000a9d70u; fn_000a88e0(cpu);
    }
L_000a9d70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000a9d74:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x58u);
    }
L_000a9d78:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000a9d7c:;
    {
        cpu->r[9] = (uint32_t)((int16_t)cpu->r[9]);
    }
L_000a9d80:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000a9d84:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_000a9d88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000a9d8c:;
    {
        cpu->r[6] = cpu->r[10];
    }
L_000a9d90:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_000a9d94:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[10]);
    }
L_000a9d98:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a9d9c:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000a9da0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000a9da4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_000a9da8:;
    {
        cpu->r[9] = (uint32_t)((uint16_t)cpu->r[12]);
    }
L_000a9dac:;
    {
        wr16(cpu->r[10] + cpu->r[3], cpu->r[2]);
    }
L_000a9db0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_000a9db4:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000a9db8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[11], cpu->r[0], 0, 0);
    }
L_000a9dbc:;
    {
        wr16(cpu->r[10] + cpu->r[1], cpu->r[0]);
    }
L_000a9dc0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a9878;
        }
    }
L_000a9dc4:;
    {
        goto L_000a98d8;
    }
L_000a9dc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000a9dcc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a9dd0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000a9dd4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a9dd8:;
    {
        cpu->r[14] = (uint32_t)((uint16_t)cpu->r[5]);
    }
L_000a9ddc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_000a9de0:;
    {
        cpu->r[10] = rd8(cpu->r[3]);
    }
L_000a9de4:;
    {
        cpu->r[14] = 0x000a9de8u; fn_000a88e0(cpu);
    }
L_000a9de8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a9dec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a9df0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_000a9df4:;
    {
        cpu->r[11] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000a9df8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_000a9dfc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_000a9e00:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_000a9e04:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_000a9e08:;
    {
        cpu->r[14] = 0x000a9e0cu; fn_000962d0(cpu);
    }
L_000a9e0c:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_000a9e10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_000a9e14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a9fe8;
        }
    }
L_000a9e18:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000a9e1c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[10]);
    }
L_000a9e20:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000a9e24:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[6]);
    }
L_000a9e28:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000a9e2c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a9e30:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_000a9e34:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
        }
    }
L_000a9e38:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000a98cc;
        }
    }
L_000a9e3c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000a9e40:;
    {
        cpu->r[11] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_000a9e44:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000a9e48:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a9e78;
        }
    }
L_000a9e4c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a9e50:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000a9e54:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_000a9e58:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[11], 2, 1u, &shc), 0, 0);
    }
L_000a9e5c:;
    {
        cpu->r[3] = rd16(cpu->r[12] + cpu->r[10]);
    }
L_000a9e60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_000a9e64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa018;
        }
    }
L_000a9e68:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007cu, 1, 1);
    }
L_000a9e6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa080;
        }
    }
L_000a9e70:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[11], 1, 1);
    }
L_000a9e74:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a9eb8;
        }
    }
L_000a9e78:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000a9e7c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a9e80:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000a9e84:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a9e88:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[10], shifter(cpu->r[11], 2, 1u, &shc), 0, 0);
    }
L_000a9e8c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000a9e90:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_000a9e94:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000a9e98:;
    {
        cpu->r[2] = rd16(cpu->r[11] + cpu->r[3]);
    }
L_000a9e9c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 1);
    }
L_000a9ea0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a9f94;
        }
    }
L_000a9ea4:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000007cu, 1, 1);
    }
L_000a9ea8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a9fc4;
        }
    }
L_000a9eac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_000a9eb0:;
    {
        cpu->r[5] = (uint32_t)((uint16_t)cpu->r[5]);
    }
L_000a9eb4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_000a9eb8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000a9ebc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000a9ec0:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[9]);
    }
L_000a9ec4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a9ec8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_000a9ecc:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000a9ed0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000a9ed4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000a9ed8:;
    {
        cpu->r[5] = (uint32_t)((uint16_t)cpu->r[5]);
    }
L_000a9edc:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_000a9ee0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_000a9ee4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000a9ee8:;
    {
        cpu->r[5] = (uint32_t)((int16_t)cpu->r[5]);
    }
L_000a9eec:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000a9ef0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000a9ef4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x8u);
    }
L_000a9ef8:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_000a9efc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000a9f00:;
    {
        cpu->r[9] = (uint32_t)((uint16_t)cpu->r[9]);
    }
L_000a9f04:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_000a9f08:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000a9f0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000a9f10:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000a9f14:;
    {
        wr16(cpu->r[10] + cpu->r[1], cpu->r[0]);
    }
L_000a9f18:;
    {
        wr16(cpu->r[10] + cpu->r[3], cpu->r[6]);
    }
L_000a9f1c:;
    {
        cpu->r[6] = cpu->r[12];
    }
L_000a9f20:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a9878;
        }
    }
L_000a9f24:;
    {
        goto L_000a98d8;
    }
L_000a9f28:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000a9f2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a9f30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a9dc8;
        }
    }
L_000a9f34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a9f38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a9aac;
        }
    }
L_000a9f3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a9f40:;
    {
        cpu->r[14] = 0x000a9f44u; fn_000a96d4(cpu);
    }
L_000a9f44:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000a9f48:;
    {
        goto L_000a9ab8;
    }
L_000a9f4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000a9f50:;
    {
        cpu->r[9] = (uint32_t)((int16_t)cpu->r[9]);
    }
L_000a9f54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000a9f58:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a9f5c:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_000a9f60:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 1u, &shc); cpu->r[0] = v;
    }
L_000a9f64:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000a9f68:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_000a9f6c:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_000a9f70:;
    {
        wr16(cpu->r[10] + cpu->r[0], cpu->r[5]);
    }
L_000a9f74:;
    {
        cpu->r[9] = (uint32_t)((uint16_t)cpu->r[9]);
    }
L_000a9f78:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000a9f7c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000a9f80:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000a9f84:;
    {
        wr16(cpu->r[10] + cpu->r[1], cpu->r[6]);
    }
L_000a9f88:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000a9f8c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a9878;
        }
    }
L_000a9f90:;
    {
        goto L_000a98d8;
    }
L_000a9f94:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000a9f98:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a9f9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a9fb4;
        }
    }
L_000a9fa0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000a9fa4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000a9fa8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000a9fac:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_000a9fb0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a9e98;
        }
    }
L_000a9fb4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_000a9fb8:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_000a9fbc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_000a9fc0:;
    {
        goto L_000a9eb8;
    }
L_000a9fc4:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000a9fc8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a9fcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a9fb4;
        }
    }
L_000a9fd0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000a9fd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000a9fd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000a9fdc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_000a9fe0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a9e98;
        }
    }
L_000a9fe4:;
    {
        goto L_000a9fb4;
    }
L_000a9fe8:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_000a9fec:;
    {
        cpu->r[14] = 0x000a9ff0u; fn_000962d0(cpu);
    }
L_000a9ff0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_000a9ff4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000a9ff8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
        }
    }
L_000a9ffc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a9e20;
        }
    }
L_000aa000:;
    {
        goto L_000a9e18;
    }
L_000aa004:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aa008:;
    {
        cpu->r[1] = 0x0000002du;
    }
L_000aa00c:;
    {
        cpu->r[14] = 0x000aa010u; fn_000a96d4(cpu);
    }
L_000aa010:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000aa014:;
    {
        goto L_000a99cc;
    }
L_000aa018:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000aa01c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000aa020:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a9e70;
        }
    }
L_000aa024:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000aa028:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000aa02c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_000aa030:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000aa034:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aa038:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000aa03c:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_000aa040:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 0);
    }
L_000aa044:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_000aa048:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000002u, 1, 0);
    }
L_000aa04c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000aa050:;
    {
        cpu->r[14] = 0x000aa054u; fn_000a88e0(cpu);
    }
L_000aa054:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000aa058:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x58u);
    }
L_000aa05c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_000aa060:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000aa064:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_000aa068:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_000aa06c:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000aa070:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_000aa074:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000aa078:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a9e5c;
        }
    }
L_000aa07c:;
    {
        goto L_000a9e70;
    }
L_000aa080:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000aa084:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000aa088:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a9e70;
        }
    }
L_000aa08c:;
    {
        goto L_000aa024;
    }
L_000aa090:;
    {
        cpu->r[0] = 0x000003ffu;
    }
L_000aa094:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[0], 1, 1);
    }
L_000aa098:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a9b18;
        }
    }
L_000aa09c:;
    {
        cpu->r[12] = cpu->r[11];
    }
L_000aa0a0:;
    {
        goto L_000a9b28;
    }
L_000aa0a4:;
    {
        cpu->r[0] = 0x000003ffu;
    }
L_000aa0a8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 1);
    }
L_000aa0ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a9a00;
        }
    }
L_000aa0b0:;
    {
        cpu->r[11] = cpu->r[10];
    }
L_000aa0b4:;
    {
        goto L_000a9a0c;
    }
}

/* _ZN6Sprite13GetStringSizeEPKtPiS2_ii @ 000aa0c0 (arm) */
void fn_000aa0c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aa0c0:;
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
L_000aa0c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000aa0c8:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_000aa0cc:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000aa0d0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_000aa0d4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_000aa0d8:;
    {
        cpu->r[11] = rd32(0x000aa0e0u + + 0x31cu);
    }
L_000aa0dc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000aa0e0:;
    {
        cpu->r[1] = rd8(cpu->r[1]);
    }
L_000aa0e4:;
    {
        cpu->r[11] = add_flags(cpu, 0x000aa0ecu, cpu->r[11], 0, 0);
    }
L_000aa0e8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000aa0ec:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000aa0f0:;
    {
        cpu->r[14] = 0x000aa0f4u; fn_000ae12c(cpu);
    }
L_000aa0f4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x48u);
    }
L_000aa0f8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000aa0fc:;
    {
        uint32_t v = cpu->r[6] & ~ shifter(cpu->r[6], 1, 31u, &shc); cpu->r[6] = v;
    }
L_000aa100:;
    {
        uint32_t v = cpu->r[10] & ~ shifter(cpu->r[10], 1, 31u, &shc); cpu->r[10] = v;
    }
L_000aa104:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_000aa108:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
        }
    }
L_000aa10c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 1);
    }
L_000aa110:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
        }
    }
L_000aa114:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 1);
    }
L_000aa118:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = cpu->r[10];
        }
    }
L_000aa11c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = cpu->r[6];
        }
    }
L_000aa120:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 1);
    }
L_000aa124:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_000aa128:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000aa2b0;
        }
    }
L_000aa12c:;
    {
        cpu->r[2] = rd32(0x000aa134u + + 0x2ccu);
    }
L_000aa130:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000aa134:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_000aa138:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_000aa13c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_000aa140:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000aa144:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[11]);
    }
L_000aa148:;
    {
        goto L_000aa168;
    }
L_000aa14c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000aa150:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000aa154:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000005u, 0, 0);
        }
    }
L_000aa158:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000aa15c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_000aa160:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 1);
    }
L_000aa164:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000aa288;
        }
    }
L_000aa168:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000aa16c:;
    {
        cpu->r[7] = rd16(cpu->r[9] + cpu->r[5]);
    }
L_000aa170:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000aa174:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa2d4;
        }
    }
L_000aa178:;
    {
        sub_flags(cpu, cpu->r[7], 0x000000ffu, 1, 1);
    }
L_000aa17c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[7], 0x00000005u, 1, 1);
        }
    }
L_000aa180:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000aa14c;
        }
    }
L_000aa184:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000005cu, 1, 1);
    }
L_000aa188:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[7], 0x00000020u, 1, 1);
        }
    }
L_000aa18c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000aa190:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000aa194:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000aa2ec;
        }
    }
L_000aa198:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000020u, 1, 1);
    }
L_000aa19c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa3bc;
        }
    }
L_000aa1a0:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000000au, 1, 1);
    }
L_000aa1a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa31c;
        }
    }
L_000aa1a8:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000000du, 1, 1);
    }
L_000aa1ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa158;
        }
    }
L_000aa1b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aa1b4:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000aa1b8:;
    {
        cpu->r[14] = 0x000aa1bcu; fn_000a8750(cpu);
    }
L_000aa1bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_000aa1c0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000aa1c4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000aa1c8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000aa308;
        }
    }
L_000aa1cc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000aa1d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_000aa1d4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000aa1d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x30u);
    }
L_000aa1dc:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000aa1e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000aa1e4:;
    {
        cpu->r[11] = rd8(cpu->r[2] + shifter(cpu->r[0], 2, 1u, &shc));
    }
L_000aa1e8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x5u);
    }
L_000aa1ec:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000aa1f0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000aa1f4:;
    {
        cpu->r[14] = 0x000aa1f8u; fn_000962d0(cpu);
    }
L_000aa1f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_000aa1fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa3a8;
        }
    }
L_000aa200:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000aa204:;
    {
        uint32_t v = cpu->r[2] & 0x000000c0u; cpu->r[12] = v;
    }
L_000aa208:;
    {
        uint32_t v = cpu->r[11] | shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
    }
L_000aa20c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_000aa210:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
    }
L_000aa214:;
    {
        sub_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 1u, &shc), 1, 1);
    }
L_000aa218:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000aa350;
        }
    }
L_000aa21c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000aa220:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000aa224:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000aa228:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aa22c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[12]);
    }
L_000aa230:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000aa234:;
    {
        cpu->r[14] = 0x000aa238u; fn_000a88e0(cpu);
    }
L_000aa238:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000aa23c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000aa240:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000aa244:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aa248:;
    {
        cpu->r[14] = 0x000aa24cu; fn_000a88e0(cpu);
    }
L_000aa24c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x58u);
    }
L_000aa250:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_000aa254:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000009au, 1, 1);
    }
L_000aa258:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[2], 0, 0);
    }
L_000aa25c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_000aa260:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[11], 1, 0);
    }
L_000aa264:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_000aa268:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000aa158;
        }
    }
L_000aa26c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000aa270:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000aa274:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_000aa278:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000aa27c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000003u, 0, 0);
        }
    }
L_000aa280:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 1);
    }
L_000aa284:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000aa168;
        }
    }
L_000aa288:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000aa28c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_000aa290:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[8] = cpu->r[3];
        }
    }
L_000aa294:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000aa298:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000aa2b0;
        }
    }
L_000aa29c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000aa2a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aa2a4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000aa2a8:;
    {
        cpu->r[14] = 0x000aa2acu; fn_000a88e0(cpu);
    }
L_000aa2ac:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 0);
    }
L_000aa2b0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000aa2b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000aa2b8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000aa2bc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12], cpu->r[8]);
        }
    }
L_000aa2c0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000aa2c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
        }
    }
L_000aa2c8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2], cpu->r[3]);
        }
    }
L_000aa2cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000aa2d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000aa2d4u)) return;
    }
L_000aa2d4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000aa2d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aa2dc:;
    {
        cpu->r[14] = 0x000aa2e0u; fn_000a8e20(cpu);
    }
L_000aa2e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000aa2e4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & 0x000000ffu; cpu->r[7] = v;
        }
    }
L_000aa2e8:;
    {
        goto L_000aa178;
    }
L_000aa2ec:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000aa2f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aa2f4:;
    {
        cpu->r[14] = 0x000aa2f8u; fn_000a96d4(cpu);
    }
L_000aa2f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_000aa2fc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000aa300:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000aa304:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000aa1cc;
        }
    }
L_000aa308:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aa30c:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000aa310:;
    {
        cpu->r[14] = 0x000aa314u; fn_000a8750(cpu);
    }
L_000aa314:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000aa318:;
    {
        goto L_000aa1cc;
    }
L_000aa31c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000aa320:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000aa324:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000aa328:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_000aa32c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[8];
        }
    }
L_000aa330:;
    {
        cpu->r[2] = rd16(cpu->r[2]);
    }
L_000aa334:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000aa338:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_000aa33c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_000aa340:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000aa344:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_000aa348:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000aa34c:;
    {
        goto L_000aa158;
    }
L_000aa350:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000aa354:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aa358:;
    {
        cpu->r[14] = 0x000aa35cu; fn_000a8750(cpu);
    }
L_000aa35c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000aa360:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000aa364:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x30u);
    }
L_000aa368:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000aa36c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000aa370:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000aa374:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000aa378:;
    {
        cpu->r[11] = rd8(cpu->r[2] + shifter(cpu->r[0], 2, 1u, &shc));
    }
L_000aa37c:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000aa380:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x5u);
    }
L_000aa384:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000aa388:;
    {
        cpu->r[14] = 0x000aa38cu; fn_000962d0(cpu);
    }
L_000aa38c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_000aa390:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa3e4;
        }
    }
L_000aa394:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000aa398:;
    {
        uint32_t v = cpu->r[3] & 0x000000c0u; cpu->r[12] = v;
    }
L_000aa39c:;
    {
        uint32_t v = cpu->r[11] | shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
    }
L_000aa3a0:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
    }
L_000aa3a4:;
    {
        goto L_000aa21c;
    }
L_000aa3a8:;
    {
        cpu->r[2] = 0x000003ffu;
    }
L_000aa3ac:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_000aa3b0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000aa200;
        }
    }
L_000aa3b4:;
    {
        cpu->r[12] = cpu->r[7];
    }
L_000aa3b8:;
    {
        goto L_000aa20c;
    }
L_000aa3bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000aa3c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aa3c4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000aa3c8:;
    {
        cpu->r[7] = rd8(cpu->r[3]);
    }
L_000aa3cc:;
    {
        cpu->r[14] = 0x000aa3d0u; fn_000a88e0(cpu);
    }
L_000aa3d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_000aa3d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_000aa3d8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_000aa3dc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_000aa3e0:;
    {
        goto L_000aa158;
    }
L_000aa3e4:;
    {
        cpu->r[2] = 0x000003ffu;
    }
L_000aa3e8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_000aa3ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000aa394;
        }
    }
L_000aa3f0:;
    {
        cpu->r[12] = cpu->r[7];
    }
L_000aa3f4:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
    }
L_000aa3f8:;
    {
        goto L_000aa21c;
    }
}

/* _ZN6Sprite13GetStringSizeEPKtPiS2_ @ 000aa404 (arm) */
void fn_000aa404(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aa404:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000aa408:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000aa40c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000aa410:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000aa414:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000aa418:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000aa41c:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000aa420:;
    {
        cpu->r[14] = 0x000aa424u; fn_000ae12c(cpu);
    }
L_000aa424:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000aa428:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000aa42c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000aa430:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000aa434:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000aa438:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000aa43c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aa440:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000aa444:;
    {
        cpu->r[14] = 0x000aa448u; fn_000aa0c0(cpu);
    }
L_000aa448:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000aa44c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000aa450u)) return;
    }
}

/* _ZN6Sprite15GetWrapTextSizeEPtPsiiRiS2_ @ 000aa450 (arm) */
void fn_000aa450(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aa450:;
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
L_000aa454:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_000aa458:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000aa45c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_000aa460:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x54u);
    }
L_000aa464:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_000aa468:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_000aa46c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x58u);
    }
L_000aa470:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000aa474:;
    {
        wr32(cpu->r[11], cpu->r[6]);
    }
L_000aa478:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_000aa47c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000aa480:;
    {
        wr32(cpu->r[7], cpu->r[6]);
    }
L_000aa484:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000aa5c8;
        }
    }
L_000aa488:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000aa48c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[0];
        }
    }
L_000aa490:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_000aa494:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000aa498:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000aa49c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000aa5b0;
        }
    }
L_000aa4a0:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000aa4a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000aa4a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_000aa4ac:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000aa4b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000aa4b4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000aa4b8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000aa4bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000aa4c0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000aa4c4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000aa4c8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_000aa4cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_000aa4d0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000aa4d4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = cpu->r[9];
        }
    }
L_000aa4d8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = rd16(cpu->r[3] + - 0x2u);
        }
    }
L_000aa4dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_000aa4e0:;
    {
        cpu->r[10] = rd16(cpu->r[3] + + 0x2u);
    }
L_000aa4e4:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[4], 2, 20u, &shc); cpu->r[4] = v;
        }
    }
L_000aa4e8:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[4], 3, 20u, &shc); cpu->r[4] = v;
        }
    }
L_000aa4ec:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 20u, &shc); cpu->r[10] = v;
    }
L_000aa4f0:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[9] = v;
        }
    }
L_000aa4f4:;
    {
        uint32_t v = shifter(cpu->r[10], 3, 20u, &shc); cpu->r[10] = v;
    }
L_000aa4f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_000aa4fc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000aa500:;
    {
        cpu->r[14] = 0x000aa504u; fn_000ae12c(cpu);
    }
L_000aa504:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_000aa508:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000aa528;
        }
    }
L_000aa50c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_000aa510:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000aa514:;
    {
        cpu->r[3] = rd16(cpu->r[8] + cpu->r[9]);
    }
L_000aa518:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_000aa51c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_000aa520:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[8], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
        }
    }
L_000aa524:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
        }
    }
L_000aa528:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_000aa52c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[4], 1, 0);
    }
L_000aa530:;
    {
        cpu->r[14] = 0x000aa534u; fn_0018ba6c(cpu);
    }
L_000aa534:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000aa538:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 1u, &shc); cpu->r[9] = v;
    }
L_000aa53c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000aa540:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000aa544:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000aa548:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000aa54c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000aa550:;
    {
        wr16(cpu->r[0], cpu->r[10]);
    }
L_000aa554:;
    {
        cpu->r[14] = 0x000aa558u; imp_memcpy(cpu); /* memcpy */
    }
L_000aa558:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000aa55c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000aa560:;
    {
        wr16(cpu->r[4] + cpu->r[9], cpu->r[1]);
    }
L_000aa564:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000aa568:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000aa56c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000aa570:;
    {
        cpu->r[14] = 0x000aa574u; fn_000aa404(cpu);
    }
L_000aa574:;
    {
        cpu->r[2] = rd32(cpu->r[11]);
    }
L_000aa578:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000aa57c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aa580:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_000aa584:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000aa588:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[11], cpu->r[2]);
        }
    }
L_000aa58c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[11], cpu->r[1]);
        }
    }
L_000aa590:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_000aa594:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000aa598:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_000aa59c:;
    {
        cpu->r[14] = 0x000aa5a0u; fn_0018ba60(cpu);
    }
L_000aa5a0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000aa5a4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000aa5a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aa4bc;
        }
    }
L_000aa5ac:;
    {
        cpu->r[6] = rd32(cpu->r[7]);
    }
L_000aa5b0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000aa5b4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000aa5b8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x54u);
    }
L_000aa5bc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000aa5c0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[6]; cpu->r[6] = v;
    }
L_000aa5c4:;
    {
        wr32(cpu->r[7], cpu->r[6]);
    }
L_000aa5c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000aa5cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000aa5d0u)) return;
    }
}

/* _ZN6Sprite10FreeSpriteEv @ 000aa5d0 (arm) */
void fn_000aa5d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aa5d0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000aa5d4:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_000aa5d8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000aa5dc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000aa5e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa6c0;
        }
    }
L_000aa5e4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000aa5e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aa5ec:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_000aa5f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa6dc;
        }
    }
L_000aa5f4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000aa5f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aa5fc:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_000aa600:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa6f8;
        }
    }
L_000aa604:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000aa608:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aa60c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_000aa610:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa714;
        }
    }
L_000aa614:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000aa618:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aa61c:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_000aa620:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa730;
        }
    }
L_000aa624:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000aa628:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aa62c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_000aa630:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa74c;
        }
    }
L_000aa634:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000aa638:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aa63c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_000aa640:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa768;
        }
    }
L_000aa644:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000aa648:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aa64c:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_000aa650:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa784;
        }
    }
L_000aa654:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000aa658:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aa65c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_000aa660:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa7a0;
        }
    }
L_000aa664:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000aa668:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aa66c:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_000aa670:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa7bc;
        }
    }
L_000aa674:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000aa678:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aa67c:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_000aa680:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa7d8;
        }
    }
L_000aa684:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000aa688:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aa68c:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_000aa690:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa6a0;
        }
    }
L_000aa694:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aa698:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_000aa69c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000aa6a0u)) return;
    }
L_000aa6a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x44u);
    }
L_000aa6a4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000aa6a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa694;
        }
    }
L_000aa6ac:;
    {
        cpu->r[14] = 0x000aa6b0u; fn_0018ba60(cpu);
    }
L_000aa6b0:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[5]);
    }
L_000aa6b4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aa6b8:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_000aa6bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000aa6c0u)) return;
    }
L_000aa6c0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_000aa6c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000aa6c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa5e4;
        }
    }
L_000aa6cc:;
    {
        cpu->r[14] = 0x000aa6d0u; fn_0018ba60(cpu);
    }
L_000aa6d0:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_000aa6d4:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_000aa6d8:;
    {
        goto L_000aa5e4;
    }
L_000aa6dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000aa6e0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000aa6e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa5f4;
        }
    }
L_000aa6e8:;
    {
        cpu->r[14] = 0x000aa6ecu; fn_0018ba60(cpu);
    }
L_000aa6ec:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_000aa6f0:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_000aa6f4:;
    {
        goto L_000aa5f4;
    }
L_000aa6f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_000aa6fc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000aa700:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa604;
        }
    }
L_000aa704:;
    {
        cpu->r[14] = 0x000aa708u; fn_0018ba60(cpu);
    }
L_000aa708:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_000aa70c:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_000aa710:;
    {
        goto L_000aa604;
    }
L_000aa714:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_000aa718:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000aa71c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa614;
        }
    }
L_000aa720:;
    {
        cpu->r[14] = 0x000aa724u; fn_0018ba60(cpu);
    }
L_000aa724:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_000aa728:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_000aa72c:;
    {
        goto L_000aa614;
    }
L_000aa730:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_000aa734:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000aa738:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa624;
        }
    }
L_000aa73c:;
    {
        cpu->r[14] = 0x000aa740u; fn_0018ba60(cpu);
    }
L_000aa740:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_000aa744:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_000aa748:;
    {
        goto L_000aa624;
    }
L_000aa74c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1cu);
    }
L_000aa750:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000aa754:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa634;
        }
    }
L_000aa758:;
    {
        cpu->r[14] = 0x000aa75cu; fn_0018ba60(cpu);
    }
L_000aa75c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_000aa760:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_000aa764:;
    {
        goto L_000aa634;
    }
L_000aa768:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_000aa76c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000aa770:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa644;
        }
    }
L_000aa774:;
    {
        cpu->r[14] = 0x000aa778u; fn_0018ba60(cpu);
    }
L_000aa778:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[5]);
    }
L_000aa77c:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_000aa780:;
    {
        goto L_000aa644;
    }
L_000aa784:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_000aa788:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000aa78c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa654;
        }
    }
L_000aa790:;
    {
        cpu->r[14] = 0x000aa794u; fn_0018ba60(cpu);
    }
L_000aa794:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[5]);
    }
L_000aa798:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_000aa79c:;
    {
        goto L_000aa654;
    }
L_000aa7a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_000aa7a4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000aa7a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa664;
        }
    }
L_000aa7ac:;
    {
        cpu->r[14] = 0x000aa7b0u; fn_0018ba60(cpu);
    }
L_000aa7b0:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[5]);
    }
L_000aa7b4:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_000aa7b8:;
    {
        goto L_000aa664;
    }
L_000aa7bc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x38u);
    }
L_000aa7c0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000aa7c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa674;
        }
    }
L_000aa7c8:;
    {
        cpu->r[14] = 0x000aa7ccu; fn_0018ba60(cpu);
    }
L_000aa7cc:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[5]);
    }
L_000aa7d0:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_000aa7d4:;
    {
        goto L_000aa674;
    }
L_000aa7d8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_000aa7dc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000aa7e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa684;
        }
    }
L_000aa7e4:;
    {
        cpu->r[14] = 0x000aa7e8u; fn_0018ba60(cpu);
    }
L_000aa7e8:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[5]);
    }
L_000aa7ec:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_000aa7f0:;
    {
        goto L_000aa684;
    }
}

/* _ZN6SpriteD1Ev @ 000aa7f4 (arm) */
void fn_000aa7f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aa7f4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000aa7f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000aa7fc:;
    {
        cpu->r[14] = 0x000aa800u; fn_000aa5d0(cpu);
    }
L_000aa800:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aa804:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000aa808u)) return;
    }
}

/* _ZN6SpriteD2Ev @ 000aa808 (arm) */
void fn_000aa808(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aa808:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000aa80c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000aa810:;
    {
        cpu->r[14] = 0x000aa814u; fn_000aa5d0(cpu);
    }
L_000aa814:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aa818:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000aa81cu)) return;
    }
}

/* _ZN6Sprite8WrapTextEPcPsi @ 000aa81c (arm) */
void fn_000aa81c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aa81c:;
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
L_000aa820:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_000aa824:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000aa828:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000aa82c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000aa830:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000aa834:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000aa838:;
    {
        cpu->r[14] = 0x000aa83cu; imp_strlen(cpu); /* strlen */
    }
L_000aa83c:;
    {
        cpu->r[1] = rd32(0x000aa844u + + 0x470u);
    }
L_000aa840:;
    {
        cpu->r[1] = add_flags(cpu, 0x000aa848u, cpu->r[1], 0, 0);
    }
L_000aa844:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000aa848:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000aa84c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000aa850:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000aaaa4;
        }
    }
L_000aa854:;
    {
        cpu->r[2] = rd32(0x000aa85cu + + 0x45cu);
    }
L_000aa858:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000aa85c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_000aa860:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[6]);
    }
L_000aa864:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_000aa868:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_000aa86c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000aa870:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_000aa874:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_000aa878:;
    {
        cpu->r[11] = cpu->r[6];
    }
L_000aa87c:;
    {
        goto L_000aa8ac;
    }
L_000aa880:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000020u, 1, 1);
    }
L_000aa884:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aaac0;
        }
    }
L_000aa888:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000007cu, 1, 1);
    }
L_000aa88c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aaab4;
        }
    }
L_000aa890:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 1);
    }
L_000aa894:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aabc8;
        }
    }
L_000aa898:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000001fu, 1, 1);
    }
L_000aa89c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000aa8d8;
        }
    }
L_000aa8a0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000aa8a4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_000aa8a8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000aaa60;
        }
    }
L_000aa8ac:;
    {
        cpu->r[1] = rd8(cpu->r[5] + cpu->r[6]);
    }
L_000aa8b0:;
    {
        sub_flags(cpu, cpu->r[1], 0x000000ffu, 1, 1);
    }
L_000aa8b4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
        }
    }
L_000aa8b8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000aa8bc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000aa8c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000aa8a0;
        }
    }
L_000aa8c4:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000007eu, 1, 1);
    }
L_000aa8c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aa880;
        }
    }
L_000aa8cc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000aa8d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000aa8d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aa8a0;
        }
    }
L_000aa8d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aa8dc:;
    {
        cpu->r[14] = 0x000aa8e0u; fn_000a8750(cpu);
    }
L_000aa8e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_000aa8e4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000aa8e8:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_000aa8ec:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_000aa8f0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000aa8f4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
        }
    }
L_000aa8f8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[14] = 0x00000005u;
        }
    }
L_000aa8fc:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
        }
    }
L_000aa900:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000aa904:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_000aa908:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
        }
    }
L_000aa90c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000005u, 0, 0);
        }
    }
L_000aa910:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
        }
    }
L_000aa914:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_000aa918:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_000aa91c:;
    {
        cpu->r[1] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_000aa920:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x4u);
    }
L_000aa924:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000aa928:;
    {
        cpu->r[12] = rd8(cpu->r[0] + cpu->r[14]);
    }
L_000aa92c:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000aa930:;
    {
        uint32_t v = cpu->r[12] & 0x000000c0u; cpu->r[12] = v;
    }
L_000aa934:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000aa938:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
    }
L_000aa93c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000aa940:;
    {
        cpu->r[14] = 0x000aa944u; fn_000962d0(cpu);
    }
L_000aa944:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000aa948:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_000aa94c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000aa950:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000aa954:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aa958:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000aa95c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000aa960:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000aa964:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
        }
    }
L_000aa968:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = cpu->r[2];
        }
    }
L_000aa96c:;
    {
        cpu->r[12] = rd8(cpu->r[3] + cpu->r[12]);
    }
L_000aa970:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000aa974:;
    {
        cpu->r[14] = 0x000aa978u; fn_000a88e0(cpu);
    }
L_000aa978:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000aa97c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000aa980:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000aa984:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aa988:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000aa98c:;
    {
        cpu->r[14] = 0x000aa990u; fn_000a88e0(cpu);
    }
L_000aa990:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x58u);
    }
L_000aa994:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000aa998:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000aa99c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_000aa9a0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000aa9a4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000aa9a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_000aa9ac:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_000aa9b0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_000aa9b4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[2], cpu->r[11], 0, 0);
    }
L_000aa9b8:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_000aa9bc:;
    {
        cpu->r[11] = (uint32_t)((uint16_t)cpu->r[11]);
    }
L_000aa9c0:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[7]);
    }
L_000aa9c4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000aa9c8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000aa8a0;
        }
    }
L_000aa9cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000aa9d0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000aa9d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa8a0;
        }
    }
L_000aa9d8:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[10]);
    }
L_000aa9dc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000aa9e0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000aa9e4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000aaa14;
        }
    }
L_000aa9e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000aa9ec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000aa9f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aa9f4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000aa9f8:;
    {
        cpu->r[6] = rd8(cpu->r[3]);
    }
L_000aa9fc:;
    {
        cpu->r[14] = 0x000aaa00u; fn_000a88e0(cpu);
    }
L_000aaa00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_000aaa04:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_000aaa08:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_000aaa0c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 0);
    }
L_000aaa10:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_000aaa14:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000aaa18:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x18u);
    }
L_000aaa1c:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[9]);
    }
L_000aaa20:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000aaa24:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000aaa28:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000aaa2c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000aaa30:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000aaa34:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_000aaa38:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_000aaa3c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[7], cpu->r[11], 1, 0);
    }
L_000aaa40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000aaa44:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000aaa48:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000aaa4c:;
    {
        wr16(cpu->r[12] + cpu->r[2], cpu->r[1]);
    }
L_000aaa50:;
    {
        cpu->r[9] = (uint32_t)((uint16_t)cpu->r[9]);
    }
L_000aaa54:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[7]);
    }
L_000aaa58:;
    {
        wr16(cpu->r[12] + cpu->r[3], cpu->r[0]);
    }
L_000aaa5c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000aa8ac;
        }
    }
L_000aaa60:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000aaa64:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[9]);
    }
L_000aaa68:;
    {
        if (cond_test(cpu, 1)) {
        { int32_t v = (int32_t)(cpu->r[3] << 16); cpu->r[3] = (uint32_t)(v >> 17); }
        }
    }
L_000aaa6c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
        }
    }
L_000aaa70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aaaa4;
        }
    }
L_000aaa74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000aaa78:;
    {
        cpu->r[9] = (uint32_t)((int16_t)cpu->r[9]);
    }
L_000aaa7c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000aaa80:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_000aaa84:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 1u, &shc); cpu->r[9] = v;
    }
L_000aaa88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000aaa8c:;
    {
        { int32_t v = (int32_t)(cpu->r[3] << 16); cpu->r[3] = (uint32_t)(v >> 17); }
    }
L_000aaa90:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_000aaa94:;
    {
        wr16(cpu->r[0] + cpu->r[9], cpu->r[8]);
    }
L_000aaa98:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000aaa9c:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000aaaa0:;
    {
        wr16(cpu->r[0] + cpu->r[2], cpu->r[7]);
    }
L_000aaaa4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000aaaa8:;
    {
        wr16(cpu->r[1], cpu->r[3]);
    }
L_000aaaac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000aaab0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000aaab4u)) return;
    }
L_000aaab4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000aaab8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000aaabc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aa8d8;
        }
    }
L_000aaac0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000aaac4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000aaac8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000aaacc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aaad0:;
    {
        cpu->r[10] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_000aaad4:;
    {
        cpu->r[11] = rd8(cpu->r[3]);
    }
L_000aaad8:;
    {
        cpu->r[14] = 0x000aaadcu; fn_000a88e0(cpu);
    }
L_000aaadc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_000aaae0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_000aaae4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[11], cpu->r[7], 0, 0);
    }
L_000aaae8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_000aaaec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000aaaf0:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_000aaaf4:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[7]);
    }
L_000aaaf8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000aaafc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000aab00:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_000aab04:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
        }
    }
L_000aab08:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000aa8a0;
        }
    }
L_000aab0c:;
    {
        cpu->r[12] = (uint32_t)((int16_t)cpu->r[10]);
    }
L_000aab10:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000aab14:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000aab48;
        }
    }
L_000aab18:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_000aab1c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000aab20:;
    {
        cpu->r[12] = cpu->r[11];
    }
L_000aab24:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_000aab28:;
    {
        cpu->r[3] = rd8(cpu->r[12]);
    }
L_000aab2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_000aab30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aac48;
        }
    }
L_000aab34:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007cu, 1, 1);
    }
L_000aab38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aaca4;
        }
    }
L_000aab3c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[11], 1, 1);
    }
L_000aab40:;
    {
        cpu->r[12] = cpu->r[11];
    }
L_000aab44:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000aab78;
        }
    }
L_000aab48:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000aab4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_000aab50:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aab54:;
    {
        cpu->r[10] = (uint32_t)((int16_t)cpu->r[10]);
    }
L_000aab58:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 0);
    }
L_000aab5c:;
    {
        cpu->r[2] = rd8(cpu->r[12] + cpu->r[3]);
    }
L_000aab60:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 1);
    }
L_000aab64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aac00;
        }
    }
L_000aab68:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000007cu, 1, 1);
    }
L_000aab6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aac28;
        }
    }
L_000aab70:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000aab74:;
    {
        cpu->r[10] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_000aab78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000aab7c:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[9]);
    }
L_000aab80:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 0);
    }
L_000aab84:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000aab88:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000aab8c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000aab90:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000aab94:;
    {
        cpu->r[10] = (uint32_t)((uint16_t)cpu->r[10]);
    }
L_000aab98:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_000aab9c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000aaba0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000aaba4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_000aaba8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000aabac:;
    {
        wr16(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_000aabb0:;
    {
        cpu->r[9] = (uint32_t)((uint16_t)cpu->r[9]);
    }
L_000aabb4:;
    {
        cpu->r[6] = (uint32_t)((int16_t)cpu->r[10]);
    }
L_000aabb8:;
    {
        wr16(cpu->r[0] + cpu->r[3], cpu->r[7]);
    }
L_000aabbc:;
    {
        cpu->r[11] = cpu->r[12];
    }
L_000aabc0:;
    {
        cpu->r[7] = cpu->r[12];
    }
L_000aabc4:;
    {
        goto L_000aa8a0;
    }
L_000aabc8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000aabcc:;
    {
        cpu->r[9] = (uint32_t)((int16_t)cpu->r[9]);
    }
L_000aabd0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000aabd4:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_000aabd8:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_000aabdc:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000aabe0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000aabe4:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_000aabe8:;
    {
        wr16(cpu->r[12] + cpu->r[1], cpu->r[6]);
    }
L_000aabec:;
    {
        cpu->r[9] = (uint32_t)((uint16_t)cpu->r[9]);
    }
L_000aabf0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000aabf4:;
    {
        wr16(cpu->r[12] + cpu->r[2], cpu->r[7]);
    }
L_000aabf8:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000aabfc:;
    {
        goto L_000aa8a0;
    }
L_000aac00:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000aac04:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000aac08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aac1c;
        }
    }
L_000aac0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000aac10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_000aac14:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_000aac18:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000aab5c;
        }
    }
L_000aac1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000aac20:;
    {
        cpu->r[10] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000aac24:;
    {
        goto L_000aab78;
    }
L_000aac28:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000aac2c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000aac30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aac1c;
        }
    }
L_000aac34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000aac38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_000aac3c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_000aac40:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000aab5c;
        }
    }
L_000aac44:;
    {
        goto L_000aac1c;
    }
L_000aac48:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000aac4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000aac50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aab3c;
        }
    }
L_000aac54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000aac58:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000aac5c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000aac60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aac64:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_000aac68:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000aac6c:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_000aac70:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000aac74:;
    {
        cpu->r[14] = 0x000aac78u; fn_000a88e0(cpu);
    }
L_000aac78:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000aac7c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x58u);
    }
L_000aac80:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_000aac84:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000aac88:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000aac8c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_000aac90:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_000aac94:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_000aac98:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000aac9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aab28;
        }
    }
L_000aaca0:;
    {
        goto L_000aab3c;
    }
L_000aaca4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000aaca8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000aacac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aab3c;
        }
    }
L_000aacb0:;
    {
        goto L_000aac54;
    }
}

/* _ZN6Sprite13FillUsedCharsEPhPc @ 000aacbc (arm) */
void fn_000aacbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aacbc:;
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
L_000aacc0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000aacc4:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000aacc8:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_000aaccc:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000aacd0:;
    {
        cpu->r[14] = 0x000aacd4u; imp_strlen(cpu); /* strlen */
    }
L_000aacd4:;
    {
        cpu->r[3] = rd8(cpu->r[8]);
    }
L_000aacd8:;
    {
        uint32_t v = cpu->r[3] | 0x00000001u; cpu->r[3] = v;
    }
L_000aacdc:;
    {
        wr8(cpu->r[8], cpu->r[3]);
    }
L_000aace0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000aace4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000aace8u)) return;
        }
    }
L_000aace8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000aacec:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_000aacf0:;
    {
        goto L_000aad64;
    }
L_000aacf4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000020u, 1, 1);
    }
L_000aacf8:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 1);
        }
    }
L_000aacfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aad58;
        }
    }
L_000aad00:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000du, 1, 1);
    }
L_000aad04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aad58;
        }
    }
L_000aad08:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000aad0c:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000aad10:;
    {
        cpu->r[14] = 0x000aad14u; fn_000a8750(cpu);
    }
L_000aad14:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x2cu);
    }
L_000aad18:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000aad1c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000aad94;
        }
    }
L_000aad20:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_000aad24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000aad28:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_000aad2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000aad30:;
    {
        cpu->r[1] = rd8(cpu->r[3] + shifter(cpu->r[0], 2, 1u, &shc));
    }
L_000aad34:;
    {
        cpu->r[3] = rd8(cpu->r[12] + + 0x5u);
    }
L_000aad38:;
    {
        uint32_t v = cpu->r[3] & 0x000000c0u; cpu->r[3] = v;
    }
L_000aad3c:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_000aad40:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 1, 1);
    }
L_000aad44:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000aada8;
        }
    }
L_000aad48:;
    {
        cpu->r[2] = rd8(cpu->r[8] + shifter(cpu->r[3], 1, 3u, &shc));
    }
L_000aad4c:;
    {
        uint32_t v = cpu->r[3] & 0x00000007u; cpu->r[1] = v;
    }
L_000aad50:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[10], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[2] = v;
    }
L_000aad54:;
    {
        wr8(cpu->r[8] + shifter(cpu->r[3], 1, 3u, &shc), cpu->r[2]);
    }
L_000aad58:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000aad5c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_000aad60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aada4;
        }
    }
L_000aad64:;
    {
        cpu->r[1] = rd8(cpu->r[6] + cpu->r[4]);
    }
L_000aad68:;
    {
        sub_flags(cpu, cpu->r[1], 0x000000ffu, 1, 1);
    }
L_000aad6c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
        }
    }
L_000aad70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000aad58;
        }
    }
L_000aad74:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000005cu, 1, 1);
    }
L_000aad78:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000020u, 1, 1);
        }
    }
L_000aad7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000aacf4;
        }
    }
L_000aad80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000aad84:;
    {
        cpu->r[14] = 0x000aad88u; fn_000a8750(cpu);
    }
L_000aad88:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x2cu);
    }
L_000aad8c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000aad90:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000aad20;
        }
    }
L_000aad94:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000aad98:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000aad9c:;
    {
        cpu->r[14] = 0x000aada0u; fn_000a8750(cpu);
    }
L_000aada0:;
    {
        goto L_000aad20;
    }
L_000aada4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000aada8u)) return;
    }
L_000aada8:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000aadac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000aadb0:;
    {
        cpu->r[14] = 0x000aadb4u; fn_000a8750(cpu);
    }
L_000aadb4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_000aadb8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000aadbc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000aadc0:;
    {
        cpu->r[2] = rd8(cpu->r[3] + shifter(cpu->r[0], 2, 1u, &shc));
    }
L_000aadc4:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x5u);
    }
L_000aadc8:;
    {
        uint32_t v = cpu->r[3] & 0x000000c0u; cpu->r[3] = v;
    }
L_000aadcc:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_000aadd0:;
    {
        goto L_000aad48;
    }
}

/* _ZN6Sprite13GetStringSizeEPKcPiS2_ii @ 000aadd4 (arm) */
void fn_000aadd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aadd4:;
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
L_000aadd8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000aaddc:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_000aade0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000aade4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_000aade8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000aadec:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000aadf0:;
    {
        cpu->r[1] = rd8(cpu->r[1]);
    }
L_000aadf4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000aadf8:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000aadfc:;
    {
        cpu->r[14] = 0x000aae00u; imp_strlen(cpu); /* strlen */
    }
L_000aae00:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x38u);
    }
L_000aae04:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000aae08:;
    {
        uint32_t v = cpu->r[7] & ~ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[7] = v;
    }
L_000aae0c:;
    {
        uint32_t v = cpu->r[6] & ~ shifter(cpu->r[6], 1, 31u, &shc); cpu->r[6] = v;
    }
L_000aae10:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_000aae14:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
        }
    }
L_000aae18:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_000aae1c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
        }
    }
L_000aae20:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_000aae24:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[6];
        }
    }
L_000aae28:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = cpu->r[7];
        }
    }
L_000aae2c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_000aae30:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_000aae34:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000aaf90;
        }
    }
L_000aae38:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000aae3c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_000aae40:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_000aae44:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000aae48:;
    {
        goto L_000aaf18;
    }
L_000aae4c:;
    {
        sub_flags(cpu, cpu->r[9], 0x000000ffu, 1, 1);
    }
L_000aae50:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[9], 0x00000005u, 1, 1);
        }
    }
L_000aae54:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000aaf08;
        }
    }
L_000aae58:;
    {
        sub_flags(cpu, cpu->r[9], 0x0000005cu, 1, 1);
    }
L_000aae5c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[9], 0x00000020u, 1, 1);
        }
    }
L_000aae60:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000aae64:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000aae68:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000aaf40;
        }
    }
L_000aae6c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000020u, 1, 1);
    }
L_000aae70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ab018;
        }
    }
L_000aae74:;
    {
        sub_flags(cpu, cpu->r[9], 0x0000000au, 1, 1);
    }
L_000aae78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aafb4;
        }
    }
L_000aae7c:;
    {
        sub_flags(cpu, cpu->r[9], 0x0000000du, 1, 1);
    }
L_000aae80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aaf08;
        }
    }
L_000aae84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aae88:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000aae8c:;
    {
        cpu->r[14] = 0x000aae90u; fn_000a8750(cpu);
    }
L_000aae90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_000aae94:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000aae98:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000aaf58;
        }
    }
L_000aae9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_000aaea0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000aaea4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_000aaea8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000aaeac:;
    {
        cpu->r[2] = rd8(cpu->r[3] + shifter(cpu->r[2], 2, 1u, &shc));
    }
L_000aaeb0:;
    {
        cpu->r[3] = rd8(cpu->r[12] + + 0x5u);
    }
L_000aaeb4:;
    {
        uint32_t v = cpu->r[3] & 0x000000c0u; cpu->r[3] = v;
    }
L_000aaeb8:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_000aaebc:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000aaec0:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 1, 1);
    }
L_000aaec4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000aafe8;
        }
    }
L_000aaec8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8u);
    }
L_000aaecc:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000aaed0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000aaed4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aaed8:;
    {
        cpu->r[11] = rd8(cpu->r[12] + cpu->r[3]);
    }
L_000aaedc:;
    {
        cpu->r[14] = 0x000aaee0u; fn_000a88e0(cpu);
    }
L_000aaee0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000aaee4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000aaee8:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000aaeec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aaef0:;
    {
        cpu->r[14] = 0x000aaef4u; fn_000a88e0(cpu);
    }
L_000aaef4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_000aaef8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_000aaefc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[0], 0, 0);
    }
L_000aaf00:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[9], 1, 0);
    }
L_000aaf04:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[11], 0, 0);
    }
L_000aaf08:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000aaf0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_000aaf10:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000aaf14:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000aaf68;
        }
    }
L_000aaf18:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000aaf1c:;
    {
        cpu->r[9] = rd8(cpu->r[8] + cpu->r[5]);
    }
L_000aaf20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000aaf24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aae4c;
        }
    }
L_000aaf28:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000aaf2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aaf30:;
    {
        cpu->r[14] = 0x000aaf34u; fn_000a8e20(cpu);
    }
L_000aaf34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000aaf38:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & 0x000000ffu; cpu->r[9] = v;
        }
    }
L_000aaf3c:;
    {
        goto L_000aae4c;
    }
L_000aaf40:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000aaf44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aaf48:;
    {
        cpu->r[14] = 0x000aaf4cu; fn_000a8750(cpu);
    }
L_000aaf4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_000aaf50:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000aaf54:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000aae9c;
        }
    }
L_000aaf58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aaf5c:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000aaf60:;
    {
        cpu->r[14] = 0x000aaf64u; fn_000a8750(cpu);
    }
L_000aaf64:;
    {
        goto L_000aae9c;
    }
L_000aaf68:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000aaf6c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_000aaf70:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = cpu->r[3];
        }
    }
L_000aaf74:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000aaf78:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000aaf90;
        }
    }
L_000aaf7c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000aaf80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aaf84:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000aaf88:;
    {
        cpu->r[14] = 0x000aaf8cu; fn_000a88e0(cpu);
    }
L_000aaf8c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 0);
    }
L_000aaf90:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000aaf94:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000aaf98:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000aaf9c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2], cpu->r[10]);
        }
    }
L_000aafa0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000aafa4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[13]);
        }
    }
L_000aafa8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3], cpu->r[2]);
        }
    }
L_000aafac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000aafb0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000aafb4u)) return;
    }
L_000aafb4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000aafb8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000aafbc:;
    {
        cpu->r[2] = rd16(cpu->r[2]);
    }
L_000aafc0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_000aafc4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[10];
        }
    }
L_000aafc8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000aafcc:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_000aafd0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_000aafd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000aafd8:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_000aafdc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000aafe0:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000aafe4:;
    {
        goto L_000aaf08;
    }
L_000aafe8:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000aafec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aaff0:;
    {
        cpu->r[14] = 0x000aaff4u; fn_000a8750(cpu);
    }
L_000aaff4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_000aaff8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000aaffc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000ab000:;
    {
        cpu->r[2] = rd8(cpu->r[3] + shifter(cpu->r[2], 2, 1u, &shc));
    }
L_000ab004:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x5u);
    }
L_000ab008:;
    {
        uint32_t v = cpu->r[3] & 0x000000c0u; cpu->r[3] = v;
    }
L_000ab00c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_000ab010:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000ab014:;
    {
        goto L_000aaec8;
    }
L_000ab018:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000ab01c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ab020:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000ab024:;
    {
        cpu->r[9] = rd8(cpu->r[3]);
    }
L_000ab028:;
    {
        cpu->r[14] = 0x000ab02cu; fn_000a88e0(cpu);
    }
L_000ab02c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_000ab030:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_000ab034:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_000ab038:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[0], 0, 0);
    }
L_000ab03c:;
    {
        goto L_000aaf08;
    }
}

/* _ZN6Sprite13GetStringSizeEPKcPiS2_ @ 000ab040 (arm) */
void fn_000ab040(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ab040:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000ab044:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ab048:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000ab04c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000ab050:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000ab054:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000ab058:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000ab05c:;
    {
        cpu->r[14] = 0x000ab060u; imp_strlen(cpu); /* strlen */
    }
L_000ab060:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000ab064:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000ab068:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ab06c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000ab070:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000ab074:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000ab078:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ab07c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ab080:;
    {
        cpu->r[14] = 0x000ab084u; fn_000aadd4(cpu);
    }
L_000ab084:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000ab088:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ab08cu)) return;
    }
}

/* _ZN6Sprite13GetStringSizeEiPiS0_ @ 000ab08c (arm) */
void fn_000ab08c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ab08c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000ab090:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ab094:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000ab098:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ab09c:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000ab0a0:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000ab0a4:;
    {
        cpu->r[14] = 0x000ab0a8u; fn_000aeb58(cpu);
    }
L_000ab0a8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000ab0ac:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000ab0b0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ab0b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ab0b8:;
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
L_000ab0bc:;
    {
        return fn_000aa404(cpu);
    }
}

/* _ZN6Sprite13GetStringSizeEiPiS0_ii @ 000ab0c0 (arm) */
void fn_000ab0c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ab0c0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000ab0c4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000ab0c8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000ab0cc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ab0d0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ab0d4:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_000ab0d8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ab0dc:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000ab0e0:;
    {
        cpu->r[14] = 0x000ab0e4u; fn_000aeb28(cpu);
    }
L_000ab0e4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000ab0e8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000ab0ec:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_000ab0f0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[4]);
    }
L_000ab0f4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ab0f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ab0fc:;
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
L_000ab100:;
    {
        return fn_000aadd4(cpu);
    }
}
