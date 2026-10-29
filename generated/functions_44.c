#include "functions.h"

/* _ZN11GS_PageMenu11InitSpritesEv @ 00118ad8 (arm) */
void fn_00118ad8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00118ad8:;
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
L_00118adc:;
    {
        cpu->r[4] = rd32(0x00118ae4u + + 0x2ccu);
    }
L_00118ae0:;
    {
        cpu->r[7] = rd32(0x00118ae8u + + 0x2ccu);
    }
L_00118ae4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00118ae8:;
    {
        cpu->r[4] = add_flags(cpu, 0x00118af0u, cpu->r[4], 0, 0);
    }
L_00118aec:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00118af0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00118af4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00118af8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118c2c;
        }
    }
L_00118afc:;
    {
        cpu->r[6] = rd32(0x00118b04u + + 0x2b4u);
    }
L_00118b00:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00118b04:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00118b08:;
    {
        cpu->r[14] = 0x00118b0cu; fn_00096a08(cpu);
    }
L_00118b0c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00118b10:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00118b14:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00118b18:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118b1c:;
    {
        cpu->r[14] = 0x00118b20u; fn_0018aa44(cpu);
    }
L_00118b20:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00118b24:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00118b28:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00118b2c:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[0]);
    }
L_00118b30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118d74;
        }
    }
L_00118b34:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_00118b38:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00118b3c:;
    {
        cpu->r[14] = 0x00118b40u; fn_00096a08(cpu);
    }
L_00118b40:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00118b44:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00118b48:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00118b4c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118b50:;
    {
        cpu->r[14] = 0x00118b54u; fn_0018aa44(cpu);
    }
L_00118b54:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00118b58:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00118b5c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00118b60:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[0]);
    }
L_00118b64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118d38;
        }
    }
L_00118b68:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_00118b6c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00118b70:;
    {
        cpu->r[14] = 0x00118b74u; fn_00096a08(cpu);
    }
L_00118b74:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00118b78:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00118b7c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00118b80:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118b84:;
    {
        cpu->r[14] = 0x00118b88u; fn_0018aa44(cpu);
    }
L_00118b88:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00118b8c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00118b90:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00118b94:;
    {
        wr32(cpu->r[5] + + 0xa8u, cpu->r[0]);
    }
L_00118b98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118cfc;
        }
    }
L_00118b9c:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_00118ba0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00118ba4:;
    {
        cpu->r[14] = 0x00118ba8u; fn_00096a08(cpu);
    }
L_00118ba8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00118bac:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00118bb0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00118bb4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118bb8:;
    {
        cpu->r[14] = 0x00118bbcu; fn_0018aa44(cpu);
    }
L_00118bbc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00118bc0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00118bc4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00118bc8:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[0]);
    }
L_00118bcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118cc0;
        }
    }
L_00118bd0:;
    {
        cpu->r[3] = rd32(0x00118bd8u + + 0x1e4u);
    }
L_00118bd4:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_00118bd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118bdc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00118be0:;
    {
        cpu->r[14] = 0x00118be4u; fn_000f3430(cpu);
    }
L_00118be4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00118be8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00118bec:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00118bf0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118bf4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000002u;
        }
    }
L_00118bf8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000015u;
        }
    }
L_00118bfc:;
    {
        cpu->r[14] = 0x00118c00u; fn_0018aa44(cpu);
    }
L_00118c00:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00118c04:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00118c08:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00118c0c:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[0]);
    }
L_00118c10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118c70;
        }
    }
L_00118c14:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00118c18:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00118c1c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00118c20:;
    {
        cpu->r[14] = 0x00118c24u; fn_0018aa44(cpu);
    }
L_00118c24:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_00118c28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00118c2cu)) return;
    }
L_00118c2c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118c30:;
    {
        cpu->r[14] = 0x00118c34u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00118c34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00118c38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118afc;
        }
    }
L_00118c3c:;
    {
        cpu->r[6] = rd32(0x00118c44u + + 0x174u);
    }
L_00118c40:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00118c44:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118c48:;
    {
        cpu->r[14] = 0x00118c4cu; fn_0018aa20(cpu);
    }
L_00118c4c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118c50:;
    {
        cpu->r[14] = 0x00118c54u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00118c54:;
    {
        cpu->r[3] = rd32(0x00118c5cu + + 0x164u);
    }
L_00118c58:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118c5c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118c60:;
    {
        cpu->r[3] = rd32(0x00118c68u + + 0x15cu);
    }
L_00118c64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118c68:;
    {
        cpu->r[14] = 0x00118c6cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00118c6c:;
    {
        goto L_00118b00;
    }
L_00118c70:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00118c74:;
    {
        cpu->r[14] = 0x00118c78u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00118c78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00118c7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118c14;
        }
    }
L_00118c80:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118c84:;
    {
        cpu->r[14] = 0x00118c88u; fn_0018aa20(cpu);
    }
L_00118c88:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00118c8c:;
    {
        cpu->r[14] = 0x00118c90u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00118c90:;
    {
        cpu->r[3] = rd32(0x00118c98u + + 0x128u);
    }
L_00118c94:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118c98:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118c9c:;
    {
        cpu->r[3] = rd32(0x00118ca4u + + 0x120u);
    }
L_00118ca0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118ca4:;
    {
        cpu->r[14] = 0x00118ca8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00118ca8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00118cac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00118cb0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00118cb4:;
    {
        cpu->r[14] = 0x00118cb8u; fn_0018aa44(cpu);
    }
L_00118cb8:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_00118cbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00118cc0u)) return;
    }
L_00118cc0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118cc4:;
    {
        cpu->r[14] = 0x00118cc8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00118cc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00118ccc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118bd0;
        }
    }
L_00118cd0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118cd4:;
    {
        cpu->r[14] = 0x00118cd8u; fn_0018aa20(cpu);
    }
L_00118cd8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118cdc:;
    {
        cpu->r[14] = 0x00118ce0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00118ce0:;
    {
        cpu->r[3] = rd32(0x00118ce8u + + 0xd8u);
    }
L_00118ce4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118ce8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118cec:;
    {
        cpu->r[3] = rd32(0x00118cf4u + + 0xd0u);
    }
L_00118cf0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118cf4:;
    {
        cpu->r[14] = 0x00118cf8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00118cf8:;
    {
        goto L_00118bd0;
    }
L_00118cfc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118d00:;
    {
        cpu->r[14] = 0x00118d04u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00118d04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00118d08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118b9c;
        }
    }
L_00118d0c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118d10:;
    {
        cpu->r[14] = 0x00118d14u; fn_0018aa20(cpu);
    }
L_00118d14:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118d18:;
    {
        cpu->r[14] = 0x00118d1cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00118d1c:;
    {
        cpu->r[3] = rd32(0x00118d24u + + 0x9cu);
    }
L_00118d20:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118d24:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118d28:;
    {
        cpu->r[3] = rd32(0x00118d30u + + 0x94u);
    }
L_00118d2c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118d30:;
    {
        cpu->r[14] = 0x00118d34u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00118d34:;
    {
        goto L_00118b9c;
    }
L_00118d38:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118d3c:;
    {
        cpu->r[14] = 0x00118d40u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00118d40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00118d44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118b68;
        }
    }
L_00118d48:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118d4c:;
    {
        cpu->r[14] = 0x00118d50u; fn_0018aa20(cpu);
    }
L_00118d50:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118d54:;
    {
        cpu->r[14] = 0x00118d58u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00118d58:;
    {
        cpu->r[3] = rd32(0x00118d60u + + 0x60u);
    }
L_00118d5c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118d60:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118d64:;
    {
        cpu->r[3] = rd32(0x00118d6cu + + 0x58u);
    }
L_00118d68:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118d6c:;
    {
        cpu->r[14] = 0x00118d70u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00118d70:;
    {
        goto L_00118b68;
    }
L_00118d74:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118d78:;
    {
        cpu->r[14] = 0x00118d7cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00118d7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00118d80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118b34;
        }
    }
L_00118d84:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118d88:;
    {
        cpu->r[14] = 0x00118d8cu; fn_0018aa20(cpu);
    }
L_00118d8c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118d90:;
    {
        cpu->r[14] = 0x00118d94u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00118d94:;
    {
        cpu->r[3] = rd32(0x00118d9cu + + 0x24u);
    }
L_00118d98:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118d9c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118da0:;
    {
        cpu->r[3] = rd32(0x00118da8u + + 0x1cu);
    }
L_00118da4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118da8:;
    {
        cpu->r[14] = 0x00118dacu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00118dac:;
    {
        goto L_00118b34;
    }
}

/* _ZN11GS_PageMenu6RenderEv @ 00118dc8 (arm) */
void fn_00118dc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00118dc8:;
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
L_00118dcc:;
    {
        cpu->r[5] = rd32(0x00118dd4u + + 0x8e0u);
    }
L_00118dd0:;
    {
        cpu->r[9] = rd32(0x00118dd8u + + 0x8e0u);
    }
L_00118dd4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00002280u, 1, 0);
    }
L_00118dd8:;
    {
        cpu->r[5] = add_flags(cpu, 0x00118de0u, cpu->r[5], 0, 0);
    }
L_00118ddc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000003cu, 1, 0);
    }
L_00118de0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00118de4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00118de8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00118dec:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00118df0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00118df4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00118df8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001193dc;
        }
    }
L_00118dfc:;
    {
        cpu->r[14] = 0x00118e00u; fn_0010de00(cpu);
    }
L_00118e00:;
    {
        cpu->r[8] = rd32(0x00118e08u + + 0x8b4u);
    }
L_00118e04:;
    {
        cpu->r[7] = rd32(0x00118e0cu + + 0x8b4u);
    }
L_00118e08:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00118e0c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00002280u, 0, 0);
    }
L_00118e10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00002280u, 0, 0);
    }
L_00118e14:;
    {
        cpu->r[1] = 0x000000b6u;
    }
L_00118e18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_00118e1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000034u, 0, 0);
    }
L_00118e20:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118e24:;
    {
        cpu->r[14] = 0x00118e28u; fn_000a8d10(cpu);
    }
L_00118e28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00118e2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00118e30:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00118e60;
        }
    }
L_00118e34:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00118e38:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00118e3c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00118e40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00118e44:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00118e48:;
    {
        cpu->r[14] = 0x00118e50u;
    }
L_00118e4c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00118e50u)) return;
    }
L_00118e50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00118e54:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00118e58:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00118e5c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00118e38;
        }
    }
L_00118e60:;
    {
        cpu->r[1] = rd32(0x00118e68u + + 0x85cu);
    }
L_00118e64:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00118e68:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00118e6c:;
    {
        cpu->r[3] = 0x00000046u;
    }
L_00118e70:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00118e74:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118e78:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_00118e7c:;
    {
        cpu->r[1] = 0x000000b6u;
    }
L_00118e80:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_00118e84:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_00118e88:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00002000u, 0, 0);
    }
L_00118e8c:;
    {
        cpu->r[2] = rd32(cpu->r[14] + + 0x2b4u);
    }
L_00118e90:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00118e94:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_00118e98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_00118e9c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00118ea0:;
    {
        cpu->r[14] = 0x00118ea4u; fn_000ad8a0(cpu);
    }
L_00118ea4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8cau);
    }
L_00118ea8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00118eac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001193c8;
        }
    }
L_00118eb0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00118eb4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00118eb8:;
    {
        cpu->r[14] = 0x00118ebcu; fn_000962d0(cpu);
    }
L_00118ebc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00118ec0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00118ec4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_00118ec8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00118ecc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_00118ed0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = (~0x00000004u);
        }
    }
L_00118ed4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[11];
        }
    }
L_00118ed8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_00118edc:;
    {
        cpu->r[14] = 0x00118ee4u;
    }
L_00118ee0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x84u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00118ee4u)) return;
    }
L_00118ee4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00118ee8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x954u);
    }
L_00118eec:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00118ef0:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[2]);
    }
L_00118ef4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00118ef8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00119388;
        }
    }
L_00118efc:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_00118f00:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00118f04:;
    {
        cpu->r[14] = 0x00118f08u; fn_00096a08(cpu);
    }
L_00118f08:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00118f0c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00118f10:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00118f14:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118f18:;
    {
        cpu->r[14] = 0x00118f1cu; fn_0018aa44(cpu);
    }
L_00118f1c:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00118f20:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_00118f24:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00118f28:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00118f2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011934c;
        }
    }
L_00118f30:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00118f34:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00118f38:;
    {
        cpu->r[14] = 0x00118f3cu; fn_00096a08(cpu);
    }
L_00118f3c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00118f40:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00118f44:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00118f48:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118f4c:;
    {
        cpu->r[14] = 0x00118f50u; fn_0018aa44(cpu);
    }
L_00118f50:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00118f54:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00118f58:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00118f5c:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[0]);
    }
L_00118f60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00119310;
        }
    }
L_00118f64:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00118f68:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00118f6c:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_00118f70:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00118f74:;
    {
        cpu->r[14] = 0x00118f78u; fn_0018aa44(cpu);
    }
L_00118f78:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x48u);
    }
L_00118f7c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x54u);
    }
L_00118f80:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00002280u, 0, 0);
    }
L_00118f84:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000020u, 0, 0);
    }
L_00118f88:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00118f8c:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[12]);
    }
L_00118f90:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_00118f94:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[2]);
    }
L_00118f98:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00118f9c:;
    {
        wr32(cpu->r[6] + + 0x48u, cpu->r[12]);
    }
L_00118fa0:;
    {
        cpu->r[12] = 0x00000003u;
    }
L_00118fa4:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[12]);
    }
L_00118fa8:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00118fac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_00118fb0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_00118fb4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_00118fb8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00118fbc:;
    {
        cpu->r[14] = 0x00118fc0u; fn_000a8a2c(cpu);
    }
L_00118fc0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_00118fc4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118fc8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00002000u, 0, 0);
    }
L_00118fcc:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00118fd0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00118fd4:;
    {
        cpu->r[3] = 0x0000009bu;
    }
L_00118fd8:;
    {
        cpu->r[14] = rd32(cpu->r[8] + + 0x2a8u);
    }
L_00118fdc:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_00118fe0:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x2a0u);
    }
L_00118fe4:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00118fe8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_00118fec:;
    {
        cpu->r[14] = rd32(cpu->r[8] + + 0x2acu);
    }
L_00118ff0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_00118ff4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_00118ff8:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x2a4u);
    }
L_00118ffc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_00119000:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_00119004:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_00119008:;
    {
        cpu->r[8] = rd32(0x00119010u + + 0x6b8u);
    }
L_0011900c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_00119010:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[14], 3, 31u, &shc), 0, 0);
    }
L_00119014:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00119018:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000019u, 0, 0);
    }
L_0011901c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_00119020:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 1u, &shc); cpu->r[12] = v;
    }
L_00119024:;
    {
        cpu->r[8] = add_flags(cpu, 0x0011902cu, cpu->r[8], 0, 0);
    }
L_00119028:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0011902c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
    }
L_00119030:;
    {
        cpu->r[14] = 0x00119034u; fn_000ad8a0(cpu);
    }
L_00119034:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00119038:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0011903c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00119040:;
    {
        cpu->r[10] = rd32(cpu->r[8] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00119044:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 0);
    }
L_00119048:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 0);
    }
L_0011904c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[7], 1, 1);
    }
L_00119050:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00119468;
        }
    }
L_00119054:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000bf0u, 0, 0);
    }
L_00119058:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011905c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000fu, 0, 0);
    }
L_00119060:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00002040u, 0, 0);
    }
L_00119064:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000010u, 0, 0);
    }
L_00119068:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[14]);
    }
L_0011906c:;
    {
        cpu->r[14] = 0x00119070u; fn_000aeb58(cpu);
    }
L_00119070:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000078u, 0, 0);
    }
L_00119074:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x0000002cu, 1, 0);
    }
L_00119078:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011907c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_00119080:;
    {
        cpu->r[14] = 0x00119084u; fn_000ae160(cpu);
    }
L_00119084:;
    {
        cpu->r[1] = rd32(0x0011908cu + + 0x640u);
    }
L_00119088:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011908c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00119094u, cpu->r[1], 0, 0);
    }
L_00119090:;
    {
        cpu->r[14] = 0x00119094u; fn_000ae1a4(cpu);
    }
L_00119094:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000003u, 1, 1);
    }
L_00119098:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00119220;
        }
    }
L_0011909c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001190a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001194e4;
        }
    }
L_001190a4:;
    {
        cpu->r[3] = rd32(0x001190acu + + 0x624u);
    }
L_001190a8:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_001190ac:;
    {
        cpu->r[3] = add_flags(cpu, 0x001190b4u, cpu->r[3], 0, 0);
    }
L_001190b0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_001190b4:;
    {
        cpu->r[3] = rd32(0x001190bcu + + 0x618u);
    }
L_001190b8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001190c0u, cpu->r[3], 0, 0);
    }
L_001190bc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001190c0:;
    {
        cpu->r[3] = rd32(0x001190c8u + + 0x610u);
    }
L_001190c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001190ccu, cpu->r[3], 0, 0);
    }
L_001190c8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001190cc:;
    {
        cpu->r[3] = rd32(0x001190d4u + + 0x608u);
    }
L_001190d0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001190d8u, cpu->r[3], 0, 0);
    }
L_001190d4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001190d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x95cu);
    }
L_001190dc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 0);
    }
L_001190e0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000009u, 1, 1);
    }
L_001190e4:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
        }
    }
L_001190e8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
        }
    }
L_001190ec:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[11] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
        }
    }
L_001190f0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001190f4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[11] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
        }
    }
L_001190f8:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000bf0u, 0, 0);
        }
    }
L_001190fc:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000c10u, 0, 0);
        }
    }
L_00119100:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000000fu, 0, 0);
        }
    }
L_00119104:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
        }
    }
L_00119108:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[8], 0, 0);
    }
L_0011910c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00119110:;
    {
        cpu->r[14] = 0x00119114u; fn_000aeb58(cpu);
    }
L_00119114:;
    {
        cpu->r[14] = 0x00119118u; fn_000ae12c(cpu);
    }
L_00119118:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011911c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_00119120:;
    {
        cpu->r[0] = 0x00000076u;
    }
L_00119124:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00119170;
        }
    }
L_00119128:;
    {
        cpu->r[14] = 0x0011912cu; fn_000aeb58(cpu);
    }
L_0011912c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00119130:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00119134:;
    {
        cpu->r[14] = 0x00119138u; fn_000ae228(cpu);
    }
L_00119138:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0011913c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00119140:;
    {
        cpu->r[14] = 0x00119144u; fn_000ae248(cpu);
    }
L_00119144:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00119148:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0011914c:;
    {
        cpu->r[14] = 0x00119150u; fn_000aeb58(cpu);
    }
L_00119150:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00119154:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00119158:;
    {
        cpu->r[14] = 0x0011915cu; fn_000ae228(cpu);
    }
L_0011915c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 1);
    }
L_00119160:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00119164:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_00119168:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00119170;
        }
    }
L_0011916c:;
    {
        cpu->r[14] = 0x00119170u; fn_000ae248(cpu);
    }
L_00119170:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00119174:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 1);
    }
L_00119178:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001190d8;
        }
    }
L_0011917c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_00119180:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00002240u, 0, 0);
    }
L_00119184:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000010u, 0, 0);
    }
L_00119188:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011918c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000032u, 1, 0);
    }
L_00119190:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00119194:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00119198:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0011919c:;
    {
        cpu->r[14] = 0x001191a0u; fn_000a9818(cpu);
    }
L_001191a0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001191a4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001191a8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001191ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_001191b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001191b4:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001191b8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001191bc:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_001191c0:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_001191c4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001191c8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[4]);
    }
L_001191cc:;
    {
        cpu->r[14] = 0x001191d0u; fn_000ac4bc(cpu);
    }
L_001191d0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_001191d4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00002000u, 0, 0);
    }
L_001191d8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_001191dc:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x2b0u);
    }
L_001191e0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_001191e4:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001191e8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001191ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_001191f0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_001191f4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001191f8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001191fc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00119200:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000046u, 0, 0);
    }
L_00119204:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00119208:;
    {
        cpu->r[14] = 0x0011920cu; fn_000ad19c(cpu);
    }
L_0011920c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_00119210:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[1]);
    }
L_00119214:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000002bcu, 0, 0);
    }
L_00119218:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00002000u, 0, 0);
    }
L_0011921c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00119220u)) return;
    }
L_00119220:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00119224:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001195cc;
        }
    }
L_00119228:;
    {
        cpu->r[3] = rd32(0x00119230u + + 0x4b0u);
    }
L_0011922c:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_00119230:;
    {
        cpu->r[3] = add_flags(cpu, 0x00119238u, cpu->r[3], 0, 0);
    }
L_00119234:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_00119238:;
    {
        cpu->r[3] = rd32(0x00119240u + + 0x4a4u);
    }
L_0011923c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00119244u, cpu->r[3], 0, 0);
    }
L_00119240:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00119244:;
    {
        cpu->r[3] = rd32(0x0011924cu + + 0x49cu);
    }
L_00119248:;
    {
        cpu->r[3] = add_flags(cpu, 0x00119250u, cpu->r[3], 0, 0);
    }
L_0011924c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_00119250:;
    {
        cpu->r[3] = rd32(0x00119258u + + 0x494u);
    }
L_00119254:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011925cu, cpu->r[3], 0, 0);
    }
L_00119258:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0011925c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00119260:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 0);
    }
L_00119264:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000009u, 1, 1);
    }
L_00119268:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
        }
    }
L_0011926c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
        }
    }
L_00119270:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[11] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
        }
    }
L_00119274:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00119278:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[11] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
        }
    }
L_0011927c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000bf0u, 0, 0);
        }
    }
L_00119280:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000c10u, 0, 0);
        }
    }
L_00119284:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000000fu, 0, 0);
        }
    }
L_00119288:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
        }
    }
L_0011928c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[8], 0, 0);
    }
L_00119290:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00119294:;
    {
        cpu->r[14] = 0x00119298u; fn_000aeb58(cpu);
    }
L_00119298:;
    {
        cpu->r[14] = 0x0011929cu; fn_000ae12c(cpu);
    }
L_0011929c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001192a0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001192a4:;
    {
        cpu->r[0] = 0x00000076u;
    }
L_001192a8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00119300;
        }
    }
L_001192ac:;
    {
        cpu->r[14] = 0x001192b0u; fn_000aeb58(cpu);
    }
L_001192b0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001192b4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001192b8:;
    {
        cpu->r[14] = 0x001192bcu; fn_000ae228(cpu);
    }
L_001192bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001192c0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001192c4:;
    {
        cpu->r[14] = 0x001192c8u; fn_000ae248(cpu);
    }
L_001192c8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001192cc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001192d0:;
    {
        cpu->r[14] = 0x001192d4u; fn_000aeb58(cpu);
    }
L_001192d4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001192d8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001192dc:;
    {
        cpu->r[14] = 0x001192e0u; fn_000ae228(cpu);
    }
L_001192e0:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 1);
    }
L_001192e4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001192e8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001192ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00119300;
        }
    }
L_001192f0:;
    {
        cpu->r[14] = 0x001192f4u; fn_000ae248(cpu);
    }
L_001192f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001192f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001192fc:;
    {
        cpu->r[14] = 0x00119300u; fn_000ae248(cpu);
    }
L_00119300:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00119304:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 1);
    }
L_00119308:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011925c;
        }
    }
L_0011930c:;
    {
        goto L_0011917c;
    }
L_00119310:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00119314:;
    {
        cpu->r[14] = 0x00119318u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00119318:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011931c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118f64;
        }
    }
L_00119320:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00119324:;
    {
        cpu->r[14] = 0x00119328u; fn_0018aa20(cpu);
    }
L_00119328:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011932c:;
    {
        cpu->r[14] = 0x00119330u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00119330:;
    {
        cpu->r[3] = rd32(0x00119338u + + 0x3b8u);
    }
L_00119334:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00119338:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011933c:;
    {
        cpu->r[3] = rd32(0x00119344u + + 0x3b0u);
    }
L_00119340:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00119344:;
    {
        cpu->r[14] = 0x00119348u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00119348:;
    {
        goto L_00118f64;
    }
L_0011934c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00119350:;
    {
        cpu->r[14] = 0x00119354u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00119354:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00119358:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118f30;
        }
    }
L_0011935c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00119360:;
    {
        cpu->r[14] = 0x00119364u; fn_0018aa20(cpu);
    }
L_00119364:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00119368:;
    {
        cpu->r[14] = 0x0011936cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011936c:;
    {
        cpu->r[3] = rd32(0x00119374u + + 0x37cu);
    }
L_00119370:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00119374:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00119378:;
    {
        cpu->r[3] = rd32(0x00119380u + + 0x374u);
    }
L_0011937c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00119380:;
    {
        cpu->r[14] = 0x00119384u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00119384:;
    {
        goto L_00118f30;
    }
L_00119388:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011938c:;
    {
        cpu->r[14] = 0x00119390u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00119390:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00119394:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118efc;
        }
    }
L_00119398:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0011939c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001193a0:;
    {
        cpu->r[14] = 0x001193a4u; fn_0018aa20(cpu);
    }
L_001193a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001193a8:;
    {
        cpu->r[14] = 0x001193acu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001193ac:;
    {
        cpu->r[3] = rd32(0x001193b4u + + 0x33cu);
    }
L_001193b0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001193b4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001193b8:;
    {
        cpu->r[3] = rd32(0x001193c0u + + 0x334u);
    }
L_001193bc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001193c0:;
    {
        cpu->r[14] = 0x001193c4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001193c4:;
    {
        goto L_00118efc;
    }
L_001193c8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001193cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001193d0:;
    {
        cpu->r[14] = 0x001193d8u;
    }
L_001193d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001193d8u)) return;
    }
L_001193d8:;
    {
        goto L_00118eb0;
    }
L_001193dc:;
    {
        cpu->r[8] = rd32(0x001193e4u + + 0x2d8u);
    }
L_001193e0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001193e4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001193e8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001193ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00119424;
        }
    }
L_001193f0:;
    {
        cpu->r[7] = rd32(0x001193f8u + + 0x2c8u);
    }
L_001193f4:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_001193f8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001193fc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00119400:;
    {
        cpu->r[14] = 0x00119404u; fn_0018aa44(cpu);
    }
L_00119404:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00119408:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_0011940c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00119410:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00119414:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00119418:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0011941c:;
    {
        cpu->r[14] = 0x00119420u; fn_000ad8a0(cpu);
    }
L_00119420:;
    {
        goto L_00118e08;
    }
L_00119424:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00119428:;
    {
        cpu->r[14] = 0x0011942cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011942c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00119430:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001193f0;
        }
    }
L_00119434:;
    {
        cpu->r[7] = rd32(0x0011943cu + + 0x284u);
    }
L_00119438:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0011943c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00119440:;
    {
        cpu->r[14] = 0x00119444u; fn_0018aa20(cpu);
    }
L_00119444:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00119448:;
    {
        cpu->r[14] = 0x0011944cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011944c:;
    {
        cpu->r[3] = rd32(0x00119454u + + 0x29cu);
    }
L_00119450:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00119454:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00119458:;
    {
        cpu->r[3] = rd32(0x00119460u + + 0x294u);
    }
L_0011945c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00119460:;
    {
        cpu->r[14] = 0x00119464u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00119464:;
    {
        goto L_001193f4;
    }
L_00119468:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000058u, 0, 0);
    }
L_0011946c:;
    {
        cpu->r[1] = rd32(0x00119474u + + 0x284u);
    }
L_00119470:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00119474:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00119478:;
    {
        cpu->r[2] = rd32(0x00119480u + + 0x27cu);
    }
L_0011947c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00119484u, cpu->r[1], 0, 0);
    }
L_00119480:;
    {
        cpu->r[3] = rd32(0x00119488u + + 0x278u);
    }
L_00119484:;
    {
        cpu->r[12] = 0x000000b8u;
    }
L_00119488:;
    {
        cpu->r[2] = add_flags(cpu, 0x00119490u, cpu->r[2], 0, 0);
    }
L_0011948c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00119490:;
    {
        cpu->r[3] = add_flags(cpu, 0x00119498u, cpu->r[3], 0, 0);
    }
L_00119494:;
    {
        cpu->r[14] = 0x00119498u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00119498:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x95cu);
    }
L_0011949c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001194a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00002040u, 0, 0);
    }
L_001194a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000010u, 0, 0);
    }
L_001194a8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[12]);
    }
L_001194ac:;
    {
        cpu->r[0] = rd32(cpu->r[8] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001194b0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000078u, 0, 0);
    }
L_001194b4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x0000002cu, 1, 0);
    }
L_001194b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000bf0u, 0, 0);
    }
L_001194bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000fu, 0, 0);
    }
L_001194c0:;
    {
        cpu->r[14] = 0x001194c4u; fn_000aeb58(cpu);
    }
L_001194c4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001194c8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_001194cc:;
    {
        cpu->r[14] = 0x001194d0u; fn_000ae160(cpu);
    }
L_001194d0:;
    {
        cpu->r[1] = rd32(0x001194d8u + + 0x22cu);
    }
L_001194d4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001194d8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001194e0u, cpu->r[1], 0, 0);
    }
L_001194dc:;
    {
        cpu->r[14] = 0x001194e0u; fn_000ae1a4(cpu);
    }
L_001194e0:;
    {
        goto L_0011917c;
    }
L_001194e4:;
    {
        cpu->r[3] = rd32(0x001194ecu + + 0x21cu);
    }
L_001194e8:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_001194ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x001194f4u, cpu->r[3], 0, 0);
    }
L_001194f0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_001194f4:;
    {
        cpu->r[3] = rd32(0x001194fcu + + 0x210u);
    }
L_001194f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00119500u, cpu->r[3], 0, 0);
    }
L_001194fc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00119500:;
    {
        cpu->r[3] = rd32(0x00119508u + + 0x208u);
    }
L_00119504:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011950cu, cpu->r[3], 0, 0);
    }
L_00119508:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0011950c:;
    {
        cpu->r[3] = rd32(0x00119514u + + 0x200u);
    }
L_00119510:;
    {
        cpu->r[3] = add_flags(cpu, 0x00119518u, cpu->r[3], 0, 0);
    }
L_00119514:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00119518:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x95cu);
    }
L_0011951c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00119520:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 0);
    }
L_00119524:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000009u, 1, 1);
    }
L_00119528:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
        }
    }
L_0011952c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
        }
    }
L_00119530:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[11] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc));
        }
    }
L_00119534:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[11] = rd32(cpu->r[14] + shifter(cpu->r[3], 2, 2u, &shc));
        }
    }
L_00119538:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000c10u, 0, 0);
        }
    }
L_0011953c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000bf0u, 0, 0);
        }
    }
L_00119540:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
        }
    }
L_00119544:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000000fu, 0, 0);
        }
    }
L_00119548:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[8], 0, 0);
    }
L_0011954c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00119550:;
    {
        cpu->r[14] = 0x00119554u; fn_000aeb58(cpu);
    }
L_00119554:;
    {
        cpu->r[14] = 0x00119558u; fn_000ae12c(cpu);
    }
L_00119558:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011955c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_00119560:;
    {
        cpu->r[0] = 0x00000076u;
    }
L_00119564:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001195bc;
        }
    }
L_00119568:;
    {
        cpu->r[14] = 0x0011956cu; fn_000aeb58(cpu);
    }
L_0011956c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00119570:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00119574:;
    {
        cpu->r[14] = 0x00119578u; fn_000ae228(cpu);
    }
L_00119578:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0011957c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00119580:;
    {
        cpu->r[14] = 0x00119584u; fn_000ae248(cpu);
    }
L_00119584:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00119588:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0011958c:;
    {
        cpu->r[14] = 0x00119590u; fn_000aeb58(cpu);
    }
L_00119590:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00119594:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00119598:;
    {
        cpu->r[14] = 0x0011959cu; fn_000ae228(cpu);
    }
L_0011959c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 1);
    }
L_001195a0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001195a4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001195a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001195bc;
        }
    }
L_001195ac:;
    {
        cpu->r[14] = 0x001195b0u; fn_000ae248(cpu);
    }
L_001195b0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001195b4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001195b8:;
    {
        cpu->r[14] = 0x001195bcu; fn_000ae248(cpu);
    }
L_001195bc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001195c0:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 1);
    }
L_001195c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00119518;
        }
    }
L_001195c8:;
    {
        goto L_0011917c;
    }
L_001195cc:;
    {
        cpu->r[3] = rd32(0x001195d4u + + 0x144u);
    }
L_001195d0:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_001195d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001195dcu, cpu->r[3], 0, 0);
    }
L_001195d8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_001195dc:;
    {
        cpu->r[3] = rd32(0x001195e4u + + 0x138u);
    }
L_001195e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001195e8u, cpu->r[3], 0, 0);
    }
L_001195e4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001195e8:;
    {
        cpu->r[3] = rd32(0x001195f0u + + 0x130u);
    }
L_001195ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x001195f4u, cpu->r[3], 0, 0);
    }
L_001195f0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001195f4:;
    {
        cpu->r[3] = rd32(0x001195fcu + + 0x128u);
    }
L_001195f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00119600u, cpu->r[3], 0, 0);
    }
L_001195fc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00119600:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00119604:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00119608:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 0);
    }
L_0011960c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000009u, 1, 1);
    }
L_00119610:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
        }
    }
L_00119614:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
        }
    }
L_00119618:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[11] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc));
        }
    }
L_0011961c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[11] = rd32(cpu->r[14] + shifter(cpu->r[3], 2, 2u, &shc));
        }
    }
L_00119620:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000c10u, 0, 0);
        }
    }
L_00119624:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000bf0u, 0, 0);
        }
    }
L_00119628:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
        }
    }
L_0011962c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000000fu, 0, 0);
        }
    }
L_00119630:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[8], 0, 0);
    }
L_00119634:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00119638:;
    {
        cpu->r[14] = 0x0011963cu; fn_000aeb58(cpu);
    }
L_0011963c:;
    {
        cpu->r[14] = 0x00119640u; fn_000ae12c(cpu);
    }
L_00119640:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00119644:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_00119648:;
    {
        cpu->r[0] = 0x00000076u;
    }
L_0011964c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001196a4;
        }
    }
L_00119650:;
    {
        cpu->r[14] = 0x00119654u; fn_000aeb58(cpu);
    }
L_00119654:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00119658:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011965c:;
    {
        cpu->r[14] = 0x00119660u; fn_000ae228(cpu);
    }
L_00119660:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_00119664:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00119668:;
    {
        cpu->r[14] = 0x0011966cu; fn_000ae248(cpu);
    }
L_0011966c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00119670:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00119674:;
    {
        cpu->r[14] = 0x00119678u; fn_000aeb58(cpu);
    }
L_00119678:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011967c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00119680:;
    {
        cpu->r[14] = 0x00119684u; fn_000ae228(cpu);
    }
L_00119684:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 1);
    }
L_00119688:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011968c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00119690:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001196a4;
        }
    }
L_00119694:;
    {
        cpu->r[14] = 0x00119698u; fn_000ae248(cpu);
    }
L_00119698:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011969c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001196a0:;
    {
        cpu->r[14] = 0x001196a4u; fn_000ae248(cpu);
    }
L_001196a4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001196a8:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 1);
    }
L_001196ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00119600;
        }
    }
L_001196b0:;
    {
        goto L_0011917c;
    }
}

/* _ZN16GS_QuickRaceMenu8isKindOfEi @ 00119728 (arm) */
void fn_00119728(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00119728:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000002eu, 1, 1);
    }
L_0011972c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00119730:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00119734:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_33 @ 00119738 (arm) */
void fn_00119738(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00119738:;
    {
        cpu->r[3] = rd32(0x00119740u + + 0x68u);
    }
L_0011973c:;
    {
        cpu->r[2] = rd32(0x00119744u + + 0x68u);
    }
L_00119740:;
    {
        cpu->r[3] = add_flags(cpu, 0x00119748u, cpu->r[3], 0, 0);
    }
L_00119744:;
    {
        cpu->r[1] = rd32(0x0011974cu + + 0x64u);
    }
L_00119748:;
    {
        cpu->r[0] = rd32(0x00119750u + + 0x64u);
    }
L_0011974c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00119750:;
    {
        cpu->r[1] = add_flags(cpu, 0x00119758u, cpu->r[1], 0, 0);
    }
L_00119754:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_00119758:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0011975c:;
    {
        cpu->r[3] = rd32(0x00119764u + + 0x54u);
    }
L_00119760:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 0);
    }
L_00119764:;
    {
        wr32(cpu->r[1], cpu->r[12]);
    }
L_00119768:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0011976c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00119774u, cpu->r[3], 0, 0);
    }
L_00119770:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_00119774:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00119778:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[12];
        }
    }
L_0011977c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00119780:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000028u, 1, 0);
    }
L_00119784:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_00119788:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_0011978c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000008cu, 1, 0);
    }
L_00119790:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000001eu, 1, 0);
    }
L_00119794:;
    {
        wr32(cpu->r[3] + + 0x6cu, cpu->r[0]);
    }
L_00119798:;
    {
        wr32(cpu->r[3] + + 0x3cu, cpu->r[0]);
    }
L_0011979c:;
    {
        wr32(cpu->r[3] + + 0x40u, cpu->r[1]);
    }
L_001197a0:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[1]);
    }
L_001197a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GS_QuickRaceMenuD1Ev @ 001197bc (arm) */
void fn_001197bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001197bc:;
    {
        cpu->r[3] = rd32(0x001197c4u + + 0x24u);
    }
L_001197c0:;
    {
        cpu->r[2] = rd32(0x001197c8u + + 0x24u);
    }
L_001197c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001197ccu, cpu->r[3], 0, 0);
    }
L_001197c8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001197cc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001197d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001197d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001197d8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001197dc:;
    {
        cpu->r[14] = 0x001197e0u; fn_000ec21c(cpu);
    }
L_001197e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001197e4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001197e8u)) return;
    }
}

/* _ZN16GS_QuickRaceMenu22RefreshAvailableEventsEv @ 001197f0 (arm) */
void fn_001197f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001197f0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_001197f4:;
    {
        cpu->r[2] = 0x00001c50u;
    }
L_001197f8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001197fc:;
    {
        cpu->r[7] = 0x0000009cu;
    }
L_00119800:;
    {
        cpu->r[6] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00119804:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000950u, 0, 0);
    }
L_00119808:;
    {
        cpu->r[3] = rd32(0x00119810u + + 0x54u);
    }
L_0011980c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00119810:;
    {
        cpu->r[2] = rd32(0x00119818u + + 0x50u);
    }
L_00119814:;
    {
        uint32_t v = cpu->r[7] * cpu->r[6]; cpu->r[7] = v;
    }
L_00119818:;
    {
        cpu->r[3] = add_flags(cpu, 0x00119820u, cpu->r[3], 0, 0);
    }
L_0011981c:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00119820:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00119824:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_00119828:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0011982c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00119830:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00119834:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00119838:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x438u);
    }
L_0011983c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_00119840:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00119844:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x6cu);
    }
L_00119848:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0011984c:;
    {
        cpu->r[14] = 0x00119850u; fn_00096d54(cpu);
    }
L_00119850:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 1);
    }
L_00119854:;
    {
        wr8(cpu->r[5] + + 0x4u, cpu->r[0]);
    }
L_00119858:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0011985c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00119820;
        }
    }
L_00119860:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00119864u)) return;
    }
}

/* _ZN16GS_QuickRaceMenu8DoActionEii @ 0011986c (arm) */
void fn_0011986c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011986c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_00119870:;
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
L_00119874:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00119878:;
    {
        cpu->r[5] = rd32(0x00119880u + + 0x4ecu);
    }
L_0011987c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00119880:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00119884:;
    {
        cpu->r[5] = add_flags(cpu, 0x0011988cu, cpu->r[5], 0, 0);
    }
L_00119888:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00119894;
        }
    }
L_0011988c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00119890:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00119894u)) return;
    }
L_00119894:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_00119898:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0011989c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00119b44;
        }
    }
L_001198a0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_001198a4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001198a8:;
    {
        cpu->r[3] = 0x00000546u;
    }
L_001198ac:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001198b0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
        }
    }
L_001198b4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_001198b8:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
        }
    }
L_001198bc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
        }
    }
L_001198c0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd32(cpu->r[2] + shifter(cpu->r[12], 2, 2u, &shc));
        }
    }
L_001198c4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001198c8:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[12]);
    }
L_001198cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00119a90;
        }
    }
L_001198d0:;
    {
        cpu->r[3] = 0x00000547u;
    }
L_001198d4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001198d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001199c4;
        }
    }
L_001198dc:;
    {
        cpu->r[3] = 0x00000548u;
    }
L_001198e0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001198e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00119bd8;
        }
    }
L_001198e8:;
    {
        cpu->r[3] = 0x00000549u;
    }
L_001198ec:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001198f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00119ca0;
        }
    }
L_001198f4:;
    {
        cpu->r[3] = 0x0000054au;
    }
L_001198f8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001198fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00119d18;
        }
    }
L_00119900:;
    {
        cpu->r[3] = 0x0000054bu;
    }
L_00119904:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_00119908:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00119b70;
        }
    }
L_0011990c:;
    {
        cpu->r[3] = 0x000004bau;
    }
L_00119910:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_00119914:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_00119918:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x94u, cpu->r[3]);
        }
    }
L_0011991c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011988c;
        }
    }
L_00119920:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0xcu);
    }
L_00119924:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_00119928:;
    {
        cpu->r[12] = 0x0000004cu;
    }
L_0011992c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00119930:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00119934:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x444u);
    }
L_00119938:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0011993c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[3] = v;
    }
L_00119940:;
    {
        cpu->r[7] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00119944:;
    {
        cpu->r[14] = 0x00119948u; fn_000978a8(cpu);
    }
L_00119948:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0011994c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00119950:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00119954:;
    {
        cpu->r[14] = 0x00119958u; fn_000a439c(cpu);
    }
L_00119958:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011995c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011988c;
        }
    }
L_00119960:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119964:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_00119968:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0011996c:;
    {
        cpu->r[12] = 0x00000003u;
    }
L_00119970:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00119974:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00119978:;
    {
        cpu->r[2] = 0x00001be8u;
    }
L_0011997c:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[12]);
    }
L_00119980:;
    {
        cpu->r[2] = 0x00001be4u;
    }
L_00119984:;
    {
        cpu->r[12] = 0x00000005u;
    }
L_00119988:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[12]);
    }
L_0011998c:;
    {
        cpu->r[14] = 0x00119990u; fn_000f35e4(cpu);
    }
L_00119990:;
    {
        cpu->r[3] = rd32(0x00119998u + + 0x3d8u);
    }
L_00119994:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_00119998:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011999c:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_001199a0:;
    {
        cpu->r[14] = 0x001199a4u; fn_0018ba6c(cpu);
    }
L_001199a4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001199a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001199ac:;
    {
        cpu->r[14] = 0x001199b0u; fn_000f22d4(cpu);
    }
L_001199b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001199b4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001199b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001199bc:;
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
L_001199c0:;
    {
        return fn_000f361c(cpu);
    }
L_001199c4:;
    {
        cpu->r[3] = rd32(0x001199ccu + + 0x3a4u);
    }
L_001199c8:;
    {
        cpu->r[6] = 0x00001c4cu;
    }
L_001199cc:;
    {
        cpu->r[10] = 0x0000004cu;
    }
L_001199d0:;
    {
        cpu->r[9] = 0x0000150du;
    }
L_001199d4:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001199d8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001199dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001199e0:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_001199e4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001199e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001199ec:;
    {
        wr32(cpu->r[3] + cpu->r[6], cpu->r[2]);
    }
L_001199f0:;
    {
        cpu->r[14] = 0x001199f4u; fn_00096114(cpu);
    }
L_001199f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001199f8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001199fc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_00119a00:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00119a04:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00119a08:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[3] + cpu->r[6], cpu->r[1]);
        }
    }
L_00119a0c:;
    {
        cpu->r[14] = 0x00119a10u; fn_000978a8(cpu);
    }
L_00119a10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119a14:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00119a18:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x444u);
    }
L_00119a1c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00119a20:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00119a24:;
    {
        uint32_t v = cpu->r[10] * cpu->r[2]; cpu->r[0] = v;
    }
L_00119a28:;
    {
        cpu->r[7] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00119a2c:;
    {
        wr8(cpu->r[3] + cpu->r[9], cpu->r[2]);
    }
L_00119a30:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00119a34:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119a38:;
    {
        cpu->r[14] = 0x00119a3cu; fn_000a439c(cpu);
    }
L_00119a3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00119a40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001199dc;
        }
    }
L_00119a44:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00119a48:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00119a4c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119a50:;
    {
        cpu->r[14] = 0x00119a54u; fn_000a439c(cpu);
    }
L_00119a54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00119a58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00119c84;
        }
    }
L_00119a5c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00119a60:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00119a64:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00119a68:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_00119a6c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00119a70:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00119a74:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00119a78:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00119a7c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00119a80:;
    {
        cpu->r[14] = 0x00119a84u; fn_000fd248(cpu);
    }
L_00119a84:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00119a88:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_00119a8c:;
    {
        goto L_0011988c;
    }
L_00119a90:;
    {
        cpu->r[2] = rd32(0x00119a98u + + 0x2d8u);
    }
L_00119a94:;
    {
        cpu->r[6] = 0x00001c4cu;
    }
L_00119a98:;
    {
        cpu->r[10] = 0x0000004cu;
    }
L_00119a9c:;
    {
        cpu->r[9] = 0x0000150du;
    }
L_00119aa0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00119aa4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119aa8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00119aac:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[6]);
    }
L_00119ab0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00119ab4:;
    {
        wr32(cpu->r[7] + cpu->r[6], cpu->r[1]);
    }
L_00119ab8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00119abc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00119b20;
        }
    }
L_00119ac0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00119ac4:;
    {
        cpu->r[14] = 0x00119ac8u; fn_000978a8(cpu);
    }
L_00119ac8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119acc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00119ad0:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x444u);
    }
L_00119ad4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00119ad8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00119adc:;
    {
        uint32_t v = cpu->r[10] * cpu->r[2]; cpu->r[0] = v;
    }
L_00119ae0:;
    {
        cpu->r[7] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00119ae4:;
    {
        wr8(cpu->r[3] + cpu->r[9], cpu->r[2]);
    }
L_00119ae8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00119aec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119af0:;
    {
        cpu->r[14] = 0x00119af4u; fn_000a439c(cpu);
    }
L_00119af4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00119af8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00119aa4;
        }
    }
L_00119afc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00119b00:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00119b04:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119b08:;
    {
        cpu->r[14] = 0x00119b0cu; fn_000a439c(cpu);
    }
L_00119b0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00119b10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00119b54;
        }
    }
L_00119b14:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00119b18:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00119b1c:;
    {
        goto L_00119a64;
    }
L_00119b20:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00119b24:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00119b28:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00119b2c:;
    {
        cpu->r[14] = 0x00119b30u; fn_00096114(cpu);
    }
L_00119b30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119b34:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00119b38:;
    {
        wr32(cpu->r[7] + cpu->r[6], cpu->r[0]);
    }
L_00119b3c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00119b40:;
    {
        goto L_00119ac0;
    }
L_00119b44:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00119b48:;
    {
        cpu->r[14] = 0x00119b50u;
    }
L_00119b4c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00119b50u)) return;
    }
L_00119b50:;
    {
        goto L_0011988c;
    }
L_00119b54:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00119b58:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00119b5c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119b60:;
    {
        cpu->r[14] = 0x00119b64u; fn_000a587c(cpu);
    }
L_00119b64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00119b68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00119aa4;
        }
    }
L_00119b6c:;
    {
        goto L_00119b14;
    }
L_00119b70:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00119b74:;
    {
        cpu->r[7] = 0x00001be0u;
    }
L_00119b78:;
    {
        cpu->r[6] = 0x00001c50u;
    }
L_00119b7c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x970u);
    }
L_00119b80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119b84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00119b88:;
    {
        wr32(cpu->r[4] + + 0x970u, cpu->r[2]);
    }
L_00119b8c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_00119b90:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x970u, cpu->r[8]);
        }
    }
L_00119b94:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = cpu->r[8];
        }
    }
L_00119b98:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00119b9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000128u, 0, 0);
    }
L_00119ba0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00119ba4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_00119ba8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_00119bac:;
    {
        wr32(cpu->r[3] + cpu->r[7], cpu->r[2]);
    }
L_00119bb0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x970u);
    }
L_00119bb4:;
    {
        cpu->r[14] = 0x00119bb8u; fn_00096d54(cpu);
    }
L_00119bb8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00119bbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00119b7c;
        }
    }
L_00119bc0:;
    {
        cpu->r[0] = rd32(0x00119bc8u + + 0x1a8u);
    }
L_00119bc4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00119bc8:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_00119bcc:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00119bd0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00119bd4:;
    {
        goto L_00119a74;
    }
L_00119bd8:;
    {
        cpu->r[9] = 0x00006f97u;
    }
L_00119bdc:;
    {
        cpu->r[7] = 0x00001c50u;
    }
L_00119be0:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x96f9u << 16);
    }
L_00119be4:;
    {
        cpu->r[10] = 0x00001bd0u;
    }
L_00119be8:;
    {
        cpu->r[8] = 0x0000009cu;
    }
L_00119bec:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119bf0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00119bf4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00119bf8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x438u);
    }
L_00119bfc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00119c00:;
    {
        wr32(cpu->r[6] + cpu->r[7], cpu->r[2]);
    }
L_00119c04:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00119c08:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[6] + + 0x43cu);
        }
    }
L_00119c0c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_00119c10:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
        }
    }
L_00119c14:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = cpu->r[9] * cpu->r[2]; cpu->r[2] = v;
        }
    }
L_00119c18:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_00119c1c:;
    {
        uint32_t v = cpu->r[8] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_00119c20:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[6] + cpu->r[7], cpu->r[2]);
        }
    }
L_00119c24:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x34u);
    }
L_00119c28:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00119c2c:;
    {
        wr32(cpu->r[6] + cpu->r[10], cpu->r[3]);
    }
L_00119c30:;
    {
        cpu->r[14] = 0x00119c34u; fn_00096b5c(cpu);
    }
L_00119c34:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00119c38:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00119c3c:;
    {
        cpu->r[14] = 0x00119c40u; fn_00096bb8(cpu);
    }
L_00119c40:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00119c44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00119bec;
        }
    }
L_00119c48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00119c4c:;
    {
        cpu->r[14] = 0x00119c50u; fn_001197f0(cpu);
    }
L_00119c50:;
    {
        cpu->r[0] = rd32(0x00119c58u + + 0x118u);
    }
L_00119c54:;
    {
        wr32(cpu->r[4] + + 0x970u, cpu->r[6]);
    }
L_00119c58:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00119c5c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00119c60:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_00119c64:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00119c68:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00119c6c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00119c70:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00119c74:;
    {
        cpu->r[14] = 0x00119c78u; fn_000fd248(cpu);
    }
L_00119c78:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00119c7c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_00119c80:;
    {
        goto L_0011988c;
    }
L_00119c84:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00119c88:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00119c8c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119c90:;
    {
        cpu->r[14] = 0x00119c94u; fn_000a587c(cpu);
    }
L_00119c94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00119c98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001199dc;
        }
    }
L_00119c9c:;
    {
        goto L_00119a5c;
    }
L_00119ca0:;
    {
        cpu->r[8] = 0x00006f97u;
    }
L_00119ca4:;
    {
        cpu->r[7] = 0x00001c50u;
    }
L_00119ca8:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x96f9u << 16);
    }
L_00119cac:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_00119cb0:;
    {
        cpu->r[9] = 0x00001bd0u;
    }
L_00119cb4:;
    {
        cpu->r[10] = 0x0000009cu;
    }
L_00119cb8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119cbc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00119cc0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x438u);
    }
L_00119cc4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x43cu);
    }
L_00119cc8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00119ccc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_00119cd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00119cd4:;
    {
        wr32(cpu->r[6] + cpu->r[7], cpu->r[3]);
    }
L_00119cd8:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_00119cdc:;
    {
        uint32_t v = cpu->r[8] * cpu->r[1]; cpu->r[1] = v;
    }
L_00119ce0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00119ce4:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[6] + cpu->r[7], cpu->r[11]);
        }
    }
L_00119ce8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[11];
        }
    }
L_00119cec:;
    {
        uint32_t v = cpu->r[10] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_00119cf0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x34u);
    }
L_00119cf4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00119cf8:;
    {
        wr32(cpu->r[6] + cpu->r[9], cpu->r[3]);
    }
L_00119cfc:;
    {
        cpu->r[14] = 0x00119d00u; fn_00096b5c(cpu);
    }
L_00119d00:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00119d04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00119d08:;
    {
        cpu->r[14] = 0x00119d0cu; fn_00096bb8(cpu);
    }
L_00119d0c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00119d10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00119cb8;
        }
    }
L_00119d14:;
    {
        goto L_00119c48;
    }
L_00119d18:;
    {
        cpu->r[8] = 0x00000003u;
    }
L_00119d1c:;
    {
        cpu->r[7] = 0x00001be0u;
    }
L_00119d20:;
    {
        cpu->r[6] = 0x00001c50u;
    }
L_00119d24:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x970u);
    }
L_00119d28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119d2c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00119d30:;
    {
        wr32(cpu->r[4] + + 0x970u, cpu->r[2]);
    }
L_00119d34:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00119d38:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x970u, cpu->r[8]);
        }
    }
L_00119d3c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[8];
        }
    }
L_00119d40:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00119d44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000128u, 0, 0);
    }
L_00119d48:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00119d4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_00119d50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_00119d54:;
    {
        wr32(cpu->r[3] + cpu->r[7], cpu->r[2]);
    }
L_00119d58:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x970u);
    }
L_00119d5c:;
    {
        cpu->r[14] = 0x00119d60u; fn_00096d54(cpu);
    }
L_00119d60:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00119d64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00119d24;
        }
    }
L_00119d68:;
    {
        goto L_00119bc0;
    }
}

/* _ZN16GS_QuickRaceMenu6UpdateEv @ 00119d74 (arm) */
void fn_00119d74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00119d74:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00119d78:;
    {
        cpu->r[4] = rd32(0x00119d80u + + 0x74u);
    }
L_00119d7c:;
    {
        cpu->r[6] = rd32(0x00119d84u + + 0x74u);
    }
L_00119d80:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00119d84:;
    {
        cpu->r[4] = add_flags(cpu, 0x00119d8cu, cpu->r[4], 0, 0);
    }
L_00119d88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00119d8c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00119d90:;
    {
        cpu->r[14] = 0x00119d94u; fn_000a4480(cpu);
    }
L_00119d94:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8e8u);
    }
L_00119d98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00119d9c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x000002adu;
        }
    }
L_00119da0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x000000afu;
        }
    }
L_00119da4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3] + + 0x44u, cpu->r[2]);
        }
    }
L_00119da8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x000002aau;
        }
    }
L_00119dac:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[3] + + 0x44u, cpu->r[2]);
        }
    }
L_00119db0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x000000acu;
        }
    }
L_00119db4:;
    {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[2]);
    }
L_00119db8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00119dbc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00119dc0:;
    {
        cpu->r[14] = 0x00119dc4u; fn_00096d08(cpu);
    }
L_00119dc4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8e8u);
    }
L_00119dc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00119dcc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00119dd0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x000002adu;
        }
    }
L_00119dd4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x000000afu;
        }
    }
L_00119dd8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3] + + 0x74u, cpu->r[2]);
        }
    }
L_00119ddc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x000002aau;
        }
    }
L_00119de0:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[3] + + 0x74u, cpu->r[2]);
        }
    }
L_00119de4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x000000acu;
        }
    }
L_00119de8:;
    {
        wr32(cpu->r[3] + + 0x5cu, cpu->r[2]);
    }
L_00119dec:;
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
L_00119df0:;
    {
        return fn_0010efe4(cpu);
    }
}

/* _ZN16GS_QuickRaceMenu17ApplyMenuSettingsEv @ 00119dfc (arm) */
void fn_00119dfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00119dfc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00119e00:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0xcu);
    }
L_00119e04:;
    {
        cpu->r[7] = 0x00001bd0u;
    }
L_00119e08:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00119e0c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00119e10:;
    {
        cpu->r[5] = rd32(0x00119e18u + + 0x124u);
    }
L_00119e14:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00119e18:;
    {
        cpu->r[14] = 0x00119e1cu; fn_00096b5c(cpu);
    }
L_00119e1c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00119e24u, cpu->r[5], 0, 0);
    }
L_00119e20:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00119e24:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00119e28:;
    {
        cpu->r[14] = 0x00119e2cu; fn_00096bb8(cpu);
    }
L_00119e2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00119e30:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
        }
    }
L_00119e34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00119efc;
        }
    }
L_00119e38:;
    {
        cpu->r[5] = 0x0000150du;
    }
L_00119e3c:;
    {
        cpu->r[12] = 0x0000004cu;
    }
L_00119e40:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x444u);
    }
L_00119e44:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00119e48:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[5]);
    }
L_00119e4c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00119e50:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[3] = v;
    }
L_00119e54:;
    {
        cpu->r[7] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00119e58:;
    {
        cpu->r[14] = 0x00119e5cu; fn_000978a8(cpu);
    }
L_00119e5c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00119e60:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00119e64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00119e68:;
    {
        cpu->r[14] = 0x00119e6cu; fn_000a439c(cpu);
    }
L_00119e6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00119e70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00119e84;
        }
    }
L_00119e74:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119e78:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00119e7c:;
    {
        cpu->r[14] = 0x00119e80u; fn_000a44f8(cpu);
    }
L_00119e80:;
    {
        wr8(cpu->r[6] + cpu->r[5], cpu->r[0]);
    }
L_00119e84:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119e88:;
    {
        cpu->r[3] = 0x00001bd0u;
    }
L_00119e8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00119e90:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00119e94:;
    {
        cpu->r[14] = 0x00119e98u; fn_00096b5c(cpu);
    }
L_00119e98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119e9c:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_00119ea0:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00119ea4:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_00119ea8:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00119eac:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_00119eb0:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_00119eb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00119eb8:;
    {
        cpu->r[14] = 0x00119ebcu; fn_001197f0(cpu);
    }
L_00119ebc:;
    {
        cpu->r[3] = rd32(0x00119ec4u + + 0x7cu);
    }
L_00119ec0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00119ec4:;
    {
        wr32(cpu->r[4] + + 0x970u, cpu->r[2]);
    }
L_00119ec8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00119ed0u, cpu->r[3], 0, 0);
    }
L_00119ecc:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[3]);
    }
L_00119ed0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000078u, 0, 0);
    }
L_00119ed4:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[3]);
    }
L_00119ed8:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_00119edc:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[3]);
    }
L_00119ee0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00119ee4:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[3]);
    }
L_00119ee8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00119eec:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_00119ef0:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_00119ef4:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[3]);
    }
L_00119ef8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00119efcu)) return;
    }
L_00119efc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119f00:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00119f04:;
    {
        cpu->r[14] = 0x00119f08u; fn_00096cb4(cpu);
    }
L_00119f08:;
    {
        cpu->r[2] = rd32(0x00119f10u + + 0x34u);
    }
L_00119f0c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
    }
L_00119f10:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_00119f14:;
    {
        cpu->r[1] = 0x0000009cu;
    }
L_00119f18:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00119f1c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00119f20:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x438u);
    }
L_00119f24:;
    {
        wr32(cpu->r[8] + cpu->r[3], cpu->r[0]);
    }
L_00119f28:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00119f2c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[2]; cpu->r[2] = v;
    }
L_00119f30:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x34u);
    }
L_00119f34:;
    {
        wr32(cpu->r[6] + cpu->r[7], cpu->r[3]);
    }
L_00119f38:;
    {
        goto L_00119e38;
    }
}

/* _ZN16GS_QuickRaceMenuC1Ev @ 00119f48 (arm) */
void fn_00119f48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00119f48:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00119f4c:;
    {
        cpu->r[5] = rd32(0x00119f54u + + 0x54u);
    }
L_00119f50:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00119f54:;
    {
        cpu->r[14] = 0x00119f58u; fn_0010ffa8(cpu);
    }
L_00119f58:;
    {
        cpu->r[1] = rd32(0x00119f60u + + 0x4cu);
    }
L_00119f5c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00119f64u, cpu->r[5], 0, 0);
    }
L_00119f60:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_00119f64:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00119f68:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00119f6c:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[2]);
    }
L_00119f70:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00119f74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00119f78:;
    {
        wr8(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_00119f7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00119f80:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000950u;
        wr32(cpu->r[12], cpu->r[1]);
        cpu->r[12] = wb_tmp;
    }
L_00119f84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_00119f88:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[2]);
    }
L_00119f8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_00119f90:;
    {
        wr8(cpu->r[12] + + 0x4u, cpu->r[3]);
    }
L_00119f94:;
    {
        wr32(cpu->r[12] + + 0x8u, cpu->r[2]);
    }
L_00119f98:;
    {
        wr8(cpu->r[1] + + 0xcu, cpu->r[3]);
    }
L_00119f9c:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[2]);
    }
L_00119fa0:;
    {
        wr8(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_00119fa4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00119fa8u)) return;
    }
}

/* _ZN16GS_QuickRaceMenuC2Ev @ 00119fb0 (arm) */
void fn_00119fb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00119fb0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00119fb4:;
    {
        cpu->r[5] = rd32(0x00119fbcu + + 0x54u);
    }
L_00119fb8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00119fbc:;
    {
        cpu->r[14] = 0x00119fc0u; fn_0010ffa8(cpu);
    }
L_00119fc0:;
    {
        cpu->r[1] = rd32(0x00119fc8u + + 0x4cu);
    }
L_00119fc4:;
    {
        cpu->r[5] = add_flags(cpu, 0x00119fccu, cpu->r[5], 0, 0);
    }
L_00119fc8:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_00119fcc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00119fd0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00119fd4:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[2]);
    }
L_00119fd8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00119fdc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00119fe0:;
    {
        wr8(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_00119fe4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00119fe8:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000950u;
        wr32(cpu->r[12], cpu->r[1]);
        cpu->r[12] = wb_tmp;
    }
L_00119fec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_00119ff0:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[2]);
    }
L_00119ff4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_00119ff8:;
    {
        wr8(cpu->r[12] + + 0x4u, cpu->r[3]);
    }
L_00119ffc:;
    {
        wr32(cpu->r[12] + + 0x8u, cpu->r[2]);
    }
L_0011a000:;
    {
        wr8(cpu->r[1] + + 0xcu, cpu->r[3]);
    }
L_0011a004:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[2]);
    }
L_0011a008:;
    {
        wr8(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_0011a00c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011a010u)) return;
    }
}

/* _ZN16GS_QuickRaceMenuC1Eb @ 0011a018 (arm) */
void fn_0011a018(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011a018:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0011a01c:;
    {
        cpu->r[5] = rd32(0x0011a024u + + 0x54u);
    }
L_0011a020:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011a024:;
    {
        cpu->r[14] = 0x0011a028u; fn_001100c0(cpu);
    }
L_0011a028:;
    {
        cpu->r[1] = rd32(0x0011a030u + + 0x4cu);
    }
L_0011a02c:;
    {
        cpu->r[5] = add_flags(cpu, 0x0011a034u, cpu->r[5], 0, 0);
    }
L_0011a030:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_0011a034:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011a038:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011a03c:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[2]);
    }
L_0011a040:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0011a044:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011a048:;
    {
        wr8(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_0011a04c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_0011a050:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000950u;
        wr32(cpu->r[12], cpu->r[1]);
        cpu->r[12] = wb_tmp;
    }
L_0011a054:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_0011a058:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[2]);
    }
L_0011a05c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_0011a060:;
    {
        wr8(cpu->r[12] + + 0x4u, cpu->r[3]);
    }
L_0011a064:;
    {
        wr32(cpu->r[12] + + 0x8u, cpu->r[2]);
    }
L_0011a068:;
    {
        wr8(cpu->r[1] + + 0xcu, cpu->r[3]);
    }
L_0011a06c:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[2]);
    }
L_0011a070:;
    {
        wr8(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_0011a074:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011a078u)) return;
    }
}

/* _ZN16GS_QuickRaceMenuC2Eb @ 0011a080 (arm) */
void fn_0011a080(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011a080:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0011a084:;
    {
        cpu->r[5] = rd32(0x0011a08cu + + 0x54u);
    }
L_0011a088:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011a08c:;
    {
        cpu->r[14] = 0x0011a090u; fn_001100c0(cpu);
    }
L_0011a090:;
    {
        cpu->r[1] = rd32(0x0011a098u + + 0x4cu);
    }
L_0011a094:;
    {
        cpu->r[5] = add_flags(cpu, 0x0011a09cu, cpu->r[5], 0, 0);
    }
L_0011a098:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_0011a09c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011a0a0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011a0a4:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[2]);
    }
L_0011a0a8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0011a0ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011a0b0:;
    {
        wr8(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_0011a0b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_0011a0b8:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000950u;
        wr32(cpu->r[12], cpu->r[1]);
        cpu->r[12] = wb_tmp;
    }
L_0011a0bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_0011a0c0:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[2]);
    }
L_0011a0c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_0011a0c8:;
    {
        wr8(cpu->r[12] + + 0x4u, cpu->r[3]);
    }
L_0011a0cc:;
    {
        wr32(cpu->r[12] + + 0x8u, cpu->r[2]);
    }
L_0011a0d0:;
    {
        wr8(cpu->r[1] + + 0xcu, cpu->r[3]);
    }
L_0011a0d4:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[2]);
    }
L_0011a0d8:;
    {
        wr8(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_0011a0dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011a0e0u)) return;
    }
}

/* _ZN16GS_QuickRaceMenuD0Ev @ 0011a0e8 (arm) */
void fn_0011a0e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011a0e8:;
    {
        cpu->r[3] = rd32(0x0011a0f0u + + 0x2cu);
    }
L_0011a0ec:;
    {
        cpu->r[2] = rd32(0x0011a0f4u + + 0x2cu);
    }
L_0011a0f0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011a0f8u, cpu->r[3], 0, 0);
    }
L_0011a0f4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011a0f8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0011a0fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011a100:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0011a104:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0011a108:;
    {
        cpu->r[14] = 0x0011a10cu; fn_000ec21c(cpu);
    }
L_0011a10c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011a110:;
    {
        cpu->r[14] = 0x0011a114u; fn_0018ba20(cpu);
    }
L_0011a114:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011a118:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011a11cu)) return;
    }
}

/* _ZN16GS_QuickRaceMenu6RenderEv @ 0011a124 (arm) */
void fn_0011a124(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011a124:;
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
L_0011a128:;
    {
        cpu->r[5] = rd32(0x0011a130u + + 0x2f0u);
    }
L_0011a12c:;
    {
        cpu->r[7] = rd32(0x0011a134u + + 0x2f0u);
    }
L_0011a130:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_0011a134:;
    {
        cpu->r[5] = add_flags(cpu, 0x0011a13cu, cpu->r[5], 0, 0);
    }
L_0011a138:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0011a13c:;
    {
        cpu->r[14] = 0x0011a140u; fn_00114138(cpu);
    }
L_0011a140:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0011a144:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0011a148:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011a14c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011a32c;
        }
    }
L_0011a150:;
    {
        cpu->r[4] = rd32(0x0011a158u + + 0x2d0u);
    }
L_0011a154:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0011a158:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_0011a15c:;
    {
        cpu->r[14] = 0x0011a160u; fn_00096a08(cpu);
    }
L_0011a160:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011a164:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011a168:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_0011a16c:;
    {
        cpu->r[14] = 0x0011a170u; fn_0018aa44(cpu);
    }
L_0011a170:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011a174:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_0011a178:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011a3e8;
        }
    }
L_0011a17c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0011a180:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0011a184:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011a188:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011a370;
        }
    }
L_0011a18c:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_0011a190:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_0011a194:;
    {
        cpu->r[14] = 0x0011a198u; fn_00096a08(cpu);
    }
L_0011a198:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011a19c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011a1a0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_0011a1a4:;
    {
        cpu->r[14] = 0x0011a1a8u; fn_0018aa44(cpu);
    }
L_0011a1a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011a1ac:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_0011a1b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011a3b0;
        }
    }
L_0011a1b4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0011a1b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0011a1bc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xb0u);
    }
L_0011a1c0:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_0011a1c4:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0011a1c8:;
    {
        cpu->r[2] = 0x000000aau;
    }
L_0011a1cc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0011a1d0:;
    {
        cpu->r[10] = 0x00000011u;
    }
L_0011a1d4:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0011a1d8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0011a1dc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_0011a1e0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_0011a1e4:;
    {
        cpu->r[14] = 0x0011a1e8u; fn_000a8a2c(cpu);
    }
L_0011a1e8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_0011a1ec:;
    {
        cpu->r[2] = 0x00001c50u;
    }
L_0011a1f0:;
    {
        cpu->r[1] = rd32(0x0011a1f8u + + 0x234u);
    }
L_0011a1f4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x28u);
    }
L_0011a1f8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0011a1fc:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0011a200:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x438u);
    }
L_0011a204:;
    {
        cpu->r[3] = 0x0000009cu;
    }
L_0011a208:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0011a20c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[2] = v;
    }
L_0011a210:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0011a214:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0011a218:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_0011a21c:;
    {
        cpu->r[11] = rd32(cpu->r[8]);
    }
L_0011a220:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0011a224:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 0);
    }
L_0011a228:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000104u, 1, 0);
    }
L_0011a22c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0011a230:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[7], 1, 0);
    }
L_0011a234:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x10u);
    }
L_0011a238:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 3, 31u, &shc), 0, 0);
    }
L_0011a23c:;
    {
        cpu->r[14] = 0x0011a240u; fn_000aeb58(cpu);
    }
L_0011a240:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 3, 31u, &shc), 0, 0);
    }
L_0011a244:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000078u, 0, 0);
    }
L_0011a248:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 1u, &shc); cpu->r[9] = v;
    }
L_0011a24c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[11], 1, 1u, &shc), 0, 0);
    }
L_0011a250:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00000028u, 0, 0);
    }
L_0011a254:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_0011a258:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0011a25c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011a260:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0011a264:;
    {
        cpu->r[14] = 0x0011a268u; fn_000ad19c(cpu);
    }
L_0011a268:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_0011a26c:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_0011a270:;
    {
        cpu->r[8] = rd32(cpu->r[8]);
    }
L_0011a274:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0011a278:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x000000a0u, 1, 0);
    }
L_0011a27c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x444u);
    }
L_0011a280:;
    {
        cpu->r[3] = 0x0000004cu;
    }
L_0011a284:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_0011a288:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000014u, 0, 0);
    }
L_0011a28c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[2] = v;
    }
L_0011a290:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 3, 31u, &shc), 0, 0);
    }
L_0011a294:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0011a298:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0011a29c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xcu);
    }
L_0011a2a0:;
    {
        cpu->r[14] = 0x0011a2a4u; fn_000aeb58(cpu);
    }
L_0011a2a4:;
    {
        cpu->r[3] = rd32(0x0011a2acu + + 0x184u);
    }
L_0011a2a8:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_0011a2ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], shifter(cpu->r[8], 1, 1u, &shc), 0, 0);
    }
L_0011a2b0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0011a2b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011a2b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011a2bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0011a2c0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_0011a2c4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0011a2c8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[14];
        }
    }
L_0011a2cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 1, 2u, &shc), 0, 0);
    }
L_0011a2d0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 0);
    }
L_0011a2d4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011a2d8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011a2dc:;
    {
        cpu->r[14] = 0x0011a2e0u; fn_000ad19c(cpu);
    }
L_0011a2e0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011a2e4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xb0u);
    }
L_0011a2e8:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0011a2ec:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_0011a2f0:;
    {
        cpu->r[2] = 0x000000aau;
    }
L_0011a2f4:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0011a2f8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0011a2fc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_0011a300:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_0011a304:;
    {
        cpu->r[14] = 0x0011a308u; fn_000a8a2c(cpu);
    }
L_0011a308:;
    {
        cpu->r[2] = rd32(0x0011a310u + + 0x124u);
    }
L_0011a30c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011a310:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0011a314:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_0011a318:;
    {
        cpu->r[2] = rd32(0x0011a320u + cpu->r[2]);
    }
L_0011a31c:;
    {
        cpu->r[14] = 0x0011a324u;
    }
L_0011a320:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x90u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0011a324u)) return;
    }
L_0011a324:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0011a328:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011a32cu)) return;
    }
L_0011a32c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011a330:;
    {
        cpu->r[14] = 0x0011a334u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011a334:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011a338:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011a150;
        }
    }
L_0011a33c:;
    {
        cpu->r[4] = rd32(0x0011a344u + + 0xe4u);
    }
L_0011a340:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_0011a344:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011a348:;
    {
        cpu->r[14] = 0x0011a34cu; fn_0018aa20(cpu);
    }
L_0011a34c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011a350:;
    {
        cpu->r[14] = 0x0011a354u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011a354:;
    {
        cpu->r[3] = rd32(0x0011a35cu + + 0xdcu);
    }
L_0011a358:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011a35c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011a360:;
    {
        cpu->r[3] = rd32(0x0011a368u + + 0xd4u);
    }
L_0011a364:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011a368:;
    {
        cpu->r[14] = 0x0011a36cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011a36c:;
    {
        goto L_0011a154;
    }
L_0011a370:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011a374:;
    {
        cpu->r[14] = 0x0011a378u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011a378:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011a37c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011a18c;
        }
    }
L_0011a380:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_0011a384:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011a388:;
    {
        cpu->r[14] = 0x0011a38cu; fn_0018aa20(cpu);
    }
L_0011a38c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011a390:;
    {
        cpu->r[14] = 0x0011a394u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011a394:;
    {
        cpu->r[3] = rd32(0x0011a39cu + + 0x9cu);
    }
L_0011a398:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011a39c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011a3a0:;
    {
        cpu->r[3] = rd32(0x0011a3a8u + + 0x94u);
    }
L_0011a3a4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011a3a8:;
    {
        cpu->r[14] = 0x0011a3acu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011a3ac:;
    {
        goto L_0011a18c;
    }
L_0011a3b0:;
    {
        cpu->r[1] = rd32(0x0011a3b8u + + 0x88u);
    }
L_0011a3b4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0011a3b8:;
    {
        cpu->r[2] = rd32(0x0011a3c0u + + 0x84u);
    }
L_0011a3bc:;
    {
        cpu->r[14] = 0x0000008eu;
    }
L_0011a3c0:;
    {
        cpu->r[3] = rd32(0x0011a3c8u + + 0x80u);
    }
L_0011a3c4:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011a3ccu, cpu->r[1], 0, 0);
    }
L_0011a3c8:;
    {
        cpu->r[12] = rd32(0x0011a3d0u + + 0x7cu);
    }
L_0011a3cc:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011a3d4u, cpu->r[2], 0, 0);
    }
L_0011a3d0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011a3d8u, cpu->r[3], 0, 0);
    }
L_0011a3d4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0011a3d8:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011a3e0u, cpu->r[12], 0, 0);
    }
L_0011a3dc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011a3e0:;
    {
        cpu->r[14] = 0x0011a3e4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0011a3e4:;
    {
        goto L_0011a1b4;
    }
L_0011a3e8:;
    {
        cpu->r[1] = rd32(0x0011a3f0u + + 0x60u);
    }
L_0011a3ec:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0011a3f0:;
    {
        cpu->r[2] = rd32(0x0011a3f8u + + 0x5cu);
    }
L_0011a3f4:;
    {
        cpu->r[14] = 0x0000008cu;
    }
L_0011a3f8:;
    {
        cpu->r[3] = rd32(0x0011a400u + + 0x58u);
    }
L_0011a3fc:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011a404u, cpu->r[1], 0, 0);
    }
L_0011a400:;
    {
        cpu->r[12] = rd32(0x0011a408u + + 0x54u);
    }
L_0011a404:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011a40cu, cpu->r[2], 0, 0);
    }
L_0011a408:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011a410u, cpu->r[3], 0, 0);
    }
L_0011a40c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0011a410:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011a418u, cpu->r[12], 0, 0);
    }
L_0011a414:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011a418:;
    {
        cpu->r[14] = 0x0011a41cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0011a41c:;
    {
        goto L_0011a17c;
    }
}

/* _ZN14GS_RaceSummary8DoActionEii @ 0011a460 (arm) */
void fn_0011a460(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011a460:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0011a464:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8e8u);
    }
L_0011a468:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0011a46c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0011a470:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0011a474:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0011a478:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[1]);
    }
L_0011a47c:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[2]);
    }
L_0011a480:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[3]);
    }
L_0011a484:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GS_RaceSummary10increaseNrEiii @ 0011a488 (arm) */
void fn_0011a488(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011a488:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_0011a48c:;
    {
        if (cond_test(cpu, 1)) {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
        }
    }
L_0011a490:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0011a494:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_0011a498:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_0011a49c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011a530;
        }
    }
L_0011a4a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011a4a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011a520;
        }
    }
L_0011a4a8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0xba0u);
    }
L_0011a4ac:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_0011a4b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011a520;
        }
    }
L_0011a4b4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0xba4u);
    }
L_0011a4b8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_0011a4bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011a524;
        }
    }
L_0011a4c0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0xba8u);
    }
L_0011a4c4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0011a4c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011a520;
        }
    }
L_0011a4cc:;
    {
        add_flags(cpu, cpu->r[4], 0x00000001u, 0, 1);
    }
L_0011a4d0:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[3];
    }
L_0011a4d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 0);
        }
    }
L_0011a4d8:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,9);
    }
L_0011a4dc:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[12];
        }
    }
L_0011a4e0:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[12];
        }
    }
L_0011a4e4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_0011a4e8:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[1];
    }
L_0011a4ec:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[2];
    }
L_0011a4f0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_0011a4f4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_0011a4f8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0xba8u, cpu->r[3]);
        }
    }
L_0011a4fc:;
    {
        wr32(cpu->r[0] + + 0xba8u, cpu->r[4]);
    }
L_0011a500:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,12);
    }
L_0011a504:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 6) / *vfp_d(cpu, 7);
    }
L_0011a508:;
    {
        *vfp_d(cpu,5) = (double)*(int32_t*)vfp_s(cpu,10);
    }
L_0011a50c:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,9);
    }
L_0011a510:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) + *vfp_d(cpu, 5) * *vfp_d(cpu, 6);
    }
L_0011a514:;
    {
        *(int32_t*)vfp_s(cpu,11) = (int32_t)*vfp_d(cpu,7);
    }
L_0011a518:;
    {
        cpu->r[4] = *(uint32_t*)vfp_s(cpu,11);
    }
L_0011a51c:;
    {
        goto L_0011a524;
    }
L_0011a520:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0011a524:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011a528:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0011a52c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0011a530:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0011a534:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0011a538:;
    {
        wr32(cpu->r[0] + + 0xba8u, cpu->r[3]);
    }
L_0011a53c:;
    {
        wr32(cpu->r[0] + + 0xba0u, cpu->r[3]);
    }
L_0011a540:;
    {
        wr32(cpu->r[0] + + 0xba4u, cpu->r[3]);
    }
L_0011a544:;
    {
        goto L_0011a524;
    }
}

/* _ZN14GS_RaceSummary12DrawPageLoseEv @ 0011a548 (arm) */
void fn_0011a548(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011a548:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GS_RaceSummary8isKindOfEi @ 0011a54c (arm) */
void fn_0011a54c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011a54c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000022u, 1, 1);
    }
L_0011a550:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0011a554:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0011a558:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_34 @ 0011a55c (arm) */
void fn_0011a55c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011a55c:;
    {
        cpu->r[3] = rd32(0x0011a564u + + 0x20u);
    }
L_0011a560:;
    {
        cpu->r[1] = rd32(0x0011a568u + + 0x20u);
    }
L_0011a564:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011a56cu, cpu->r[3], 0, 0);
    }
L_0011a568:;
    {
        cpu->r[2] = rd32(0x0011a570u + + 0x1cu);
    }
L_0011a56c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0011a570:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011a578u, cpu->r[2], 0, 0);
    }
L_0011a574:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011a578:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_0011a57c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_0011a580:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GS_RaceSummary13UpdatePageNavEv @ 0011a590 (arm) */
void fn_0011a590(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011a590:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0011a594:;
    {
        cpu->r[4] = rd32(0x0011a59cu + + 0x154u);
    }
L_0011a598:;
    {
        cpu->r[3] = rd32(0x0011a5a0u + + 0x154u);
    }
L_0011a59c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0011a5a0:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011a5a8u, cpu->r[4], 0, 0);
    }
L_0011a5a4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0011a5a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011a5ac:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_0011a5b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011a5b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011a608;
        }
    }
L_0011a5b8:;
    {
        cpu->r[6] = rd32(0x0011a5c0u + + 0x138u);
    }
L_0011a5bc:;
    {
        cpu->r[14] = 0x0011a5c0u; fn_0015ca98(cpu);
    }
L_0011a5c0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0011a5c4:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0011a5c8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0011a5cc:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0011a5d0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011a5d4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0011a5d8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0011a5dc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011a5e0:;
    {
        cpu->r[14] = 0x0011a5e4u; fn_000fd248(cpu);
    }
L_0011a5e4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x95cu);
    }
L_0011a5e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0011a5ec:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_0011a6bc;
        case 1: goto L_0011a618;
        case 2: goto L_0011a620;
        case 3: goto L_0011a69c;
        case 4: goto L_0011a618;
        default: guest_unimplemented(cpu, 0x0011a5ecu); return; }
        }
    }
L_0011a5f0:;
    {
        goto L_0011a608;
    }
L_0011a608:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0011a60c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011a610:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011a614:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011a618u)) return;
    }
L_0011a618:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_0011a61c:;
    {
        goto L_0011a60c;
    }
L_0011a620:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xa04u);
    }
L_0011a624:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x958u);
    }
L_0011a628:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000005b0u, 0, 0);
    }
L_0011a62c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_0011a630:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_0011a634:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + cpu->r[3]);
    }
L_0011a638:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0011a63c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_0011a640:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[5] + + 0x958u, cpu->r[3]);
        }
    }
L_0011a644:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0011a60c;
        }
    }
L_0011a648:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011a64c:;
    {
        cpu->r[3] = 0x00001c9cu;
    }
L_0011a650:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0011a654:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0011a658:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011a6d0;
        }
    }
L_0011a65c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xa48u);
    }
L_0011a660:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0011a664:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_0011a668:;
    {
        wr32(cpu->r[5] + + 0x958u, cpu->r[7]);
    }
L_0011a66c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0011a670:;
    {
        wr32(cpu->r[5] + + 0x95cu, cpu->r[2]);
    }
L_0011a674:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011a608;
        }
    }
L_0011a678:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011a67c:;
    {
        cpu->r[1] = 0x000000b8u;
    }
L_0011a680:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0011a684:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0011a688:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0011a68c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0011a690:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_0011a694:;
    {
        cpu->r[14] = 0x0011a698u; fn_000fd248(cpu);
    }
L_0011a698:;
    {
        goto L_0011a60c;
    }
L_0011a69c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0xbacu);
    }
L_0011a6a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011a6a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011a618;
        }
    }
L_0011a6a8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0011a6ac:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_0011a6b0:;
    {
        wr32(cpu->r[5] + + 0x958u, cpu->r[7]);
    }
L_0011a6b4:;
    {
        wr32(cpu->r[5] + + 0x95cu, cpu->r[3]);
    }
L_0011a6b8:;
    {
        goto L_0011a60c;
    }
L_0011a6bc:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0011a6c0:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_0011a6c4:;
    {
        wr32(cpu->r[5] + + 0x958u, cpu->r[7]);
    }
L_0011a6c8:;
    {
        wr32(cpu->r[5] + + 0x95cu, cpu->r[3]);
    }
L_0011a6cc:;
    {
        goto L_0011a60c;
    }
L_0011a6d0:;
    {
        cpu->r[14] = 0x0011a6d4u; fn_000979a0(cpu);
    }
L_0011a6d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x964u);
    }
L_0011a6d8:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_0011a6dc:;
    {
        wr32(cpu->r[0] + + 0x58u, cpu->r[3]);
    }
L_0011a6e0:;
    {
        cpu->r[14] = 0x0011a6e4u; fn_000979a0(cpu);
    }
L_0011a6e4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x968u);
    }
L_0011a6e8:;
    {
        wr32(cpu->r[0] + + 0x5cu, cpu->r[3]);
    }
L_0011a6ec:;
    {
        goto L_0011a60c;
    }
}

/* _ZN14GS_RaceSummary8PopulateEv @ 0011a6fc (arm) */
void fn_0011a6fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011a6fc:;
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
L_0011a700:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0011a704:;
    {
        cpu->r[5] = rd32(0x0011a70cu + + 0x474u);
    }
L_0011a708:;
    {
        cpu->r[6] = rd32(0x0011a710u + + 0x474u);
    }
L_0011a70c:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0011a710:;
    {
        cpu->r[5] = add_flags(cpu, 0x0011a718u, cpu->r[5], 0, 0);
    }
L_0011a714:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0011a718:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0011a71c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011a720:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0011a724:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_0011a728:;
    {
        cpu->r[10] = rd32(cpu->r[7]);
    }
L_0011a72c:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_0011a730:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0011a734:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0011a738:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0011a73c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0011a740:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0011a744:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x4u);
    }
L_0011a748:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0011a74c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[10];
        }
    }
L_0011a750:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ab40;
        }
    }
L_0011a754:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00001d80u, 0, 0);
    }
L_0011a758:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011a75c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000014u, 0, 0);
    }
L_0011a760:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0011a764:;
    {
        cpu->r[12] = rd32(cpu->r[3] + - 0x7cu);
    }
L_0011a768:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0011a76c:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000001fu, 1, 1);
    }
L_0011a770:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_0011a774:;
    {
        wr32(cpu->r[3] + - 0x7cu, cpu->r[1]);
    }
L_0011a778:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0011a77c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011a760;
        }
    }
L_0011a780:;
    {
        cpu->r[14] = 0x0011a784u; fn_00097d9c(cpu);
    }
L_0011a784:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011a788:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0011a78c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
        }
    }
L_0011a790:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011a7a0;
        }
    }
L_0011a794:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0011a798:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0011a79c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011a7a0u)) return;
    }
L_0011a7a0:;
    {
        cpu->r[12] = rd32(0x0011a7a8u + + 0x3e0u);
    }
L_0011a7a4:;
    {
        cpu->r[3] = 0x00008548u;
    }
L_0011a7a8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0011a7ac:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_0011a7b0:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011a7b8u, cpu->r[12], 0, 0);
    }
L_0011a7b4:;
    {
        cpu->r[9] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_0011a7b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_0011a7bc:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0011a7c0:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_0011a7c4:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[7]);
    }
L_0011a7c8:;
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
L_0011a7cc:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x0011a7d4u + + 0x3a8u);
    }
L_0011a7d0:;
    {
        wr32(cpu->r[4] + + 0x96cu, cpu->r[7]);
    }
L_0011a7d4:;
    {
        wr32(cpu->r[4] + + 0xa04u, cpu->r[7]);
    }
L_0011a7d8:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[7]);
    }
L_0011a7dc:;
    {
        wr32(cpu->r[9] + + 0x204u, cpu->r[14]);
    }
L_0011a7e0:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_0011a7e4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011a7e8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0011a7ec:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[7]);
    }
L_0011a7f0:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[14] = base + 16u;
    }
L_0011a7f4:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_0011a7f8:;
    {
        wr32(cpu->r[14], cpu->r[12]);
    }
L_0011a7fc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011a800:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0011a804:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0011a808:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00002140u, 0, 0);
    }
L_0011a80c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000011u, 0, 0);
    }
L_0011a810:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_0011a814:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0011a818:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_0011a81c:;
    {
        cpu->r[14] = 0x0011a820u; fn_000a2a00(cpu);
    }
L_0011a820:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_0011a824:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x960u);
    }
L_0011a828:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011a82c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011a830:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_0011a834:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_0011a838:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0011a83c:;
    {
        vfp_vadd(cpu, 15, 14, 17);
    }
L_0011a840:;
    {
        cpu->r[0] = 0x00000015u;
    }
L_0011a844:;
    {
        vfp_vmul(cpu, 15, 16, 15);
    }
L_0011a848:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0011a84c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0011a850:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0011a854:;
    {
        wr32(cpu->r[4] + + 0x96cu, cpu->r[3]);
    }
L_0011a858:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[2]);
    }
L_0011a85c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0011a860:;
    {
        cpu->r[14] = 0x0011a864u; fn_000aeb58(cpu);
    }
L_0011a864:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011a868:;
    {
        cpu->r[2] = rd32(cpu->r[11]);
    }
L_0011a86c:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_0011a870:;
    {
        cpu->r[3] = 0x00004220u;
    }
L_0011a874:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_0011a878:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0011a87c:;
    {
        cpu->r[14] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0011a880:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011a884:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_0011a888:;
    {
        wr32(cpu->r[12] + + 0x978u, cpu->r[9]);
    }
L_0011a88c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011a890:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0011a894:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_0011a898:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_0011a89c:;
    {
        wr32(cpu->r[12] + + 0x97cu, cpu->r[11]);
    }
L_0011a8a0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011a8a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0011a8a8:;
    {
        wr32(cpu->r[4] + + 0xa04u, cpu->r[12]);
    }
L_0011a8ac:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_0011a8b0:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_0011a8b4:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_0011a8b8:;
    {
        wr32(cpu->r[10] + + 0x974u, cpu->r[0]);
    }
L_0011a8bc:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0011a8c0:;
    {
        cpu->r[14] = 0x0011a8c4u; fn_000a2a00(cpu);
    }
L_0011a8c4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x960u);
    }
L_0011a8c8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011a8cc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011a8d0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_0011a8d4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0011a8d8:;
    {
        vfp_vadd(cpu, 15, 14, 17);
    }
L_0011a8dc:;
    {
        cpu->r[0] = 0x00000656u;
    }
L_0011a8e0:;
    {
        vfp_vmul(cpu, 15, 16, 15);
    }
L_0011a8e4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0011a8e8:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0011a8ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0011a8f0:;
    {
        wr32(cpu->r[4] + + 0x96cu, cpu->r[3]);
    }
L_0011a8f4:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[2]);
    }
L_0011a8f8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0011a8fc:;
    {
        cpu->r[14] = 0x0011a900u; fn_000aeb58(cpu);
    }
L_0011a900:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011a904:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_0011a908:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0011a90c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0011a910:;
    {
        wr32(cpu->r[3] + + 0x978u, cpu->r[9]);
    }
L_0011a914:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011a918:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0011a91c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0011a920:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0011a924:;
    {
        wr32(cpu->r[3] + + 0x97cu, cpu->r[1]);
    }
L_0011a928:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011a92c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011a930:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[9], 1, 1);
    }
L_0011a934:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0011a938:;
    {
        wr32(cpu->r[4] + + 0xa04u, cpu->r[3]);
    }
L_0011a93c:;
    {
        wr32(cpu->r[2] + + 0x974u, cpu->r[0]);
    }
L_0011a940:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ab30;
        }
    }
L_0011a944:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0011a948:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011a94c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_0011a950:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_0011a954:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0011a958:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011a95c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011a960:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[7]);
    }
L_0011a964:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[7]);
    }
L_0011a968:;
    {
        cpu->r[14] = 0x0011a96cu; fn_00188df8(cpu);
    }
L_0011a96c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0011a970:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011a974:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x2cu);
    }
L_0011a978:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_0011a97c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0011a980:;
    {
        cpu->r[14] = 0x0011a984u; fn_000a2a00(cpu);
    }
L_0011a984:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0011a988:;
    {
        vfp_vadd(cpu, 15, 14, 17);
    }
L_0011a98c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011a990:;
    {
        vfp_vmul(cpu, 15, 16, 15);
    }
L_0011a994:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0011a998:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0011a99c:;
    {
        cpu->r[14] = 0x0011a9a0u; fn_001880ec(cpu);
    }
L_0011a9a0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011a9a4:;
    {
        cpu->r[14] = 0x0011a9a8u; fn_000aeb58(cpu);
    }
L_0011a9a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011a9ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0011a9b0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x960u);
    }
L_0011a9b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0011a9b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0011a9bc:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[1]);
    }
L_0011a9c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0011a9c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0011a9c8:;
    {
        wr32(cpu->r[3] + + 0x978u, cpu->r[1]);
    }
L_0011a9cc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011a9d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0011a9d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0011a9d8:;
    {
        wr32(cpu->r[1] + + 0x97cu, cpu->r[2]);
    }
L_0011a9dc:;
    {
        uint32_t wb_tmp = cpu->r[9] + + 0x4u;
        cpu->r[10] = rd32(cpu->r[9] + + 0x4u);
        cpu->r[9] = wb_tmp;
    }
L_0011a9e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011a9e4:;
    {
        add_flags(cpu, cpu->r[10], 0x00000001u, 0, 1);
    }
L_0011a9e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0011a9ec:;
    {
        wr32(cpu->r[4] + + 0xa04u, cpu->r[2]);
    }
L_0011a9f0:;
    {
        wr32(cpu->r[3] + + 0x974u, cpu->r[0]);
    }
L_0011a9f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011a954;
        }
    }
L_0011a9f8:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0011a9fc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011aa00:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0011aa04:;
    {
        cpu->r[7] = (~0x00000000u);
    }
L_0011aa08:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0011aa0c:;
    {
        cpu->r[14] = 0x0011aa10u; fn_000a2a00(cpu);
    }
L_0011aa10:;
    {
        cpu->r[3] = 0x00001d00u;
    }
L_0011aa14:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x960u);
    }
L_0011aa18:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0011aa1c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0011aa20:;
    {
        cpu->r[0] = 0x00000604u;
    }
L_0011aa24:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011aa28:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0011aa2c:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[2]);
    }
L_0011aa30:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_0011aa34:;
    {
        cpu->r[14] = 0x0011aa38u; fn_000aeb58(cpu);
    }
L_0011aa38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011aa3c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_0011aa40:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0011aa44:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011aa48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_0011aa4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0011aa50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0011aa54:;
    {
        wr32(cpu->r[3] + + 0x978u, cpu->r[7]);
    }
L_0011aa58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011aa5c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0011aa60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0011aa64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0011aa68:;
    {
        wr32(cpu->r[3] + + 0x97cu, cpu->r[14]);
    }
L_0011aa6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011aa70:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[5]);
    }
L_0011aa74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0011aa78:;
    {
        wr32(cpu->r[4] + + 0xa04u, cpu->r[3]);
    }
L_0011aa7c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[5]);
    }
L_0011aa80:;
    {
        wr32(cpu->r[12] + + 0x974u, cpu->r[0]);
    }
L_0011aa84:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0011aa88:;
    {
        cpu->r[14] = 0x0011aa8cu; fn_00188df8(cpu);
    }
L_0011aa8c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0011aa90:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0011aa94:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x2cu);
    }
L_0011aa98:;
    {
        cpu->r[14] = 0x0011aa9cu; fn_000a2a00(cpu);
    }
L_0011aa9c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0011aaa4u + + 0xd8u);
    }
L_0011aaa0:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_0011aaa4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0011aaa8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011aaac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_0011aab0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0011aab4:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_0011aab8:;
    {
        cpu->r[0] = 0x0000065bu;
    }
L_0011aabc:;
    {
        vfp_vmul(cpu, 15, 16, 15);
    }
L_0011aac0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0011aac4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0011aac8:;
    {
        cpu->r[14] = 0x0011aaccu; fn_000aeb58(cpu);
    }
L_0011aacc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011aad0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_0011aad4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0011aad8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0011aadc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0011aae0:;
    {
        wr32(cpu->r[2] + + 0x978u, cpu->r[7]);
    }
L_0011aae4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011aae8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0011aaec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0011aaf0:;
    {
        wr32(cpu->r[2] + + 0x97cu, cpu->r[3]);
    }
L_0011aaf4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x960u);
    }
L_0011aaf8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011aafc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0011ab00:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_0011ab04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0011ab08:;
    {
        wr32(cpu->r[4] + + 0xa04u, cpu->r[3]);
    }
L_0011ab0c:;
    {
        wr32(cpu->r[1] + + 0x974u, cpu->r[0]);
    }
L_0011ab10:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_0011ab14:;
    {
        cpu->r[14] = 0x0011ab18u; fn_000a6118(cpu);
    }
L_0011ab18:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x960u);
    }
L_0011ab1c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0011ab20:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_0011ab24:;
    {
        cpu->r[14] = 0x0011ab28u; fn_000a5c04(cpu);
    }
L_0011ab28:;
    {
        cpu->r[14] = 0x0011ab2cu; fn_000a607c(cpu);
    }
L_0011ab2c:;
    {
        goto L_0011a794;
    }
L_0011ab30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_0011ab34:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0011ab38:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0011ab3c:;
    {
        goto L_0011a9f8;
    }
L_0011ab40:;
    {
        cpu->r[1] = rd32(0x0011ab48u + + 0x44u);
    }
L_0011ab44:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0011ab48:;
    {
        cpu->r[2] = rd32(0x0011ab50u + + 0x40u);
    }
L_0011ab4c:;
    {
        cpu->r[14] = 0x000001f9u;
    }
L_0011ab50:;
    {
        cpu->r[3] = rd32(0x0011ab58u + + 0x3cu);
    }
L_0011ab54:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011ab5cu, cpu->r[1], 0, 0);
    }
L_0011ab58:;
    {
        cpu->r[12] = rd32(0x0011ab60u + + 0x38u);
    }
L_0011ab5c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011ab64u, cpu->r[2], 0, 0);
    }
L_0011ab60:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011ab68u, cpu->r[3], 0, 0);
    }
L_0011ab64:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0011ab68:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011ab70u, cpu->r[12], 0, 0);
    }
L_0011ab6c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011ab70:;
    {
        cpu->r[14] = 0x0011ab74u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0011ab74:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0011ab78:;
    {
        goto L_0011a754;
    }
}

/* _ZN14GS_RaceSummary6UpdateEv @ 0011ab9c (arm) */
void fn_0011ab9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011ab9c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x94u);
    }
L_0011aba0:;
    {
        cpu->r[3] = rd32(0x0011aba8u + + 0x120u);
    }
L_0011aba4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0011aba8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0011abac:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011abb4u, cpu->r[3], 0, 0);
    }
L_0011abb0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011abb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ac18;
        }
    }
L_0011abb8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0011abbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011abec;
        }
    }
L_0011abc0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0011abc4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011ac0c;
        }
    }
L_0011abc8:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[2]);
    }
L_0011abcc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0011abd0:;
    {
        cpu->r[2] = rd32(0x0011abd8u + + 0xf4u);
    }
L_0011abd4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011abd8:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[0]);
    }
L_0011abdc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0011abe0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0011abe4:;
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
L_0011abe8:;
    {
        return fn_0009e9e8(cpu);
    }
L_0011abec:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8f4u);
    }
L_0011abf0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0011abf4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_0011abf8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x8f4u, cpu->r[2]);
        }
    }
L_0011abfc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011ac00u)) return;
        }
    }
L_0011ac00:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xc4u);
    }
L_0011ac04:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000580u, 1, 1);
    }
L_0011ac08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ac34;
        }
    }
L_0011ac0c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011ac10:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_0011ac14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011ac18u)) return;
    }
L_0011ac18:;
    {
        cpu->r[14] = 0x0011ac1cu; fn_0011a590(cpu);
    }
L_0011ac1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0011ac20:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000580u;
        }
    }
L_0011ac24:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
        }
    }
L_0011ac28:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_0011ac2c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
        }
    }
L_0011ac30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011ac34u)) return;
    }
L_0011ac34:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_0011ac38:;
    {
        cpu->r[2] = 0x00001c9cu;
    }
L_0011ac3c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0011ac40:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0011ac44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ac74;
        }
    }
L_0011ac48:;
    {
        cpu->r[2] = rd32(0x0011ac50u + + 0x7cu);
    }
L_0011ac4c:;
    {
        cpu->r[0] = 0x0000095cu;
    }
L_0011ac50:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0011ac54:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_0011ac58:;
    {
        cpu->r[14] = 0x0011ac5cu; fn_0018ba6c(cpu);
    }
L_0011ac5c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011ac60:;
    {
        cpu->r[14] = 0x0011ac64u; fn_00108b6c(cpu);
    }
L_0011ac64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011ac68:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0011ac6c:;
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
L_0011ac70:;
    {
        return fn_000f361c(cpu);
    }
L_0011ac74:;
    {
        cpu->r[2] = rd32(0x0011ac7cu + + 0x50u);
    }
L_0011ac78:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0011ac7c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0011ac80:;
    {
        cpu->r[14] = 0x0011ac84u; fn_0009e9e8(cpu);
    }
L_0011ac84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa0cu);
    }
L_0011ac88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011ac8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011acbc;
        }
    }
L_0011ac90:;
    {
        cpu->r[0] = 0x0000096cu;
    }
L_0011ac94:;
    {
        cpu->r[6] = rd32(cpu->r[5]);
    }
L_0011ac98:;
    {
        cpu->r[14] = 0x0011ac9cu; fn_0018ba6c(cpu);
    }
L_0011ac9c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xa10u);
    }
L_0011aca0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa14u);
    }
L_0011aca4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0011aca8:;
    {
        cpu->r[14] = 0x0011acacu; fn_00117aac(cpu);
    }
L_0011acac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011acb0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0011acb4:;
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
L_0011acb8:;
    {
        return fn_000f361c(cpu);
    }
L_0011acbc:;
    {
        cpu->r[0] = 0x0000095cu;
    }
L_0011acc0:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_0011acc4:;
    {
        goto L_0011ac58;
    }
}

/* _ZN14GS_RaceSummaryD1Ev @ 0011acd0 (arm) */
void fn_0011acd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011acd0:;
    {
        cpu->r[3] = rd32(0x0011acd8u + + 0x24u);
    }
L_0011acd4:;
    {
        cpu->r[2] = rd32(0x0011acdcu + + 0x24u);
    }
L_0011acd8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011ace0u, cpu->r[3], 0, 0);
    }
L_0011acdc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011ace0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0011ace4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011ace8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0011acec:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0011acf0:;
    {
        cpu->r[14] = 0x0011acf4u; fn_000ec21c(cpu);
    }
L_0011acf4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011acf8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011acfcu)) return;
    }
}

/* _ZN14GS_RaceSummaryD0Ev @ 0011ad04 (arm) */
void fn_0011ad04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011ad04:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011ad08:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011ad0c:;
    {
        cpu->r[14] = 0x0011ad10u; fn_0011acd0(cpu);
    }
L_0011ad10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011ad14:;
    {
        cpu->r[14] = 0x0011ad18u; fn_0018ba20(cpu);
    }
L_0011ad18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011ad1c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011ad20u)) return;
    }
}

/* _ZN14GS_RaceSummaryD2Ev @ 0011ad20 (arm) */
void fn_0011ad20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011ad20:;
    {
        cpu->r[3] = rd32(0x0011ad28u + + 0x24u);
    }
L_0011ad24:;
    {
        cpu->r[2] = rd32(0x0011ad2cu + + 0x24u);
    }
L_0011ad28:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011ad30u, cpu->r[3], 0, 0);
    }
L_0011ad2c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011ad30:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0011ad34:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011ad38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0011ad3c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0011ad40:;
    {
        cpu->r[14] = 0x0011ad44u; fn_000ec21c(cpu);
    }
L_0011ad44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011ad48:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011ad4cu)) return;
    }
}

/* _ZN14GS_RaceSummaryC1E10CCarTimingi @ 0011ad54 (arm) */
void fn_0011ad54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011ad54:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0011ad58:;
    {
        cpu->r[4] = rd32(0x0011ad60u + + 0x70u);
    }
L_0011ad5c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0011ad60:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0011ad64:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0011ad68:;
    {
        cpu->r[14] = 0x0011ad6cu; fn_0010ffa8(cpu);
    }
L_0011ad6c:;
    {
        cpu->r[3] = rd32(0x0011ad74u + + 0x60u);
    }
L_0011ad70:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011ad78u, cpu->r[4], 0, 0);
    }
L_0011ad74:;
    {
        cpu->r[2] = rd32(0x0011ad7cu + + 0x5cu);
    }
L_0011ad78:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[6]);
    }
L_0011ad7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011ad80:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0011ad84:;
    {
        wr32(cpu->r[5] + + 0x954u, cpu->r[7]);
    }
L_0011ad88:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011ad8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0011ad90:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_0011ad94:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_0011ad98:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0011ad9c:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0011ada0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0011ada4:;
    {
        cpu->r[14] = 0x0011ada8u; fn_000c0d80(cpu);
    }
L_0011ada8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0011adac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011adb0:;
    {
        wr8(cpu->r[5] + + 0xbacu, cpu->r[3]);
    }
L_0011adb4:;
    {
        wr32(cpu->r[5] + + 0xa04u, cpu->r[3]);
    }
L_0011adb8:;
    {
        wr32(cpu->r[5] + + 0x958u, cpu->r[3]);
    }
L_0011adbc:;
    {
        wr32(cpu->r[5] + + 0x960u, cpu->r[3]);
    }
L_0011adc0:;
    {
        wr32(cpu->r[5] + + 0x96cu, cpu->r[3]);
    }
L_0011adc4:;
    {
        wr8(cpu->r[5] + + 0x970u, cpu->r[3]);
    }
L_0011adc8:;
    {
        wr8(cpu->r[5] + + 0x971u, cpu->r[3]);
    }
L_0011adcc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011add0u)) return;
    }
}

/* _ZN14GS_RaceSummaryC2E10CCarTimingi @ 0011addc (arm) */
void fn_0011addc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011addc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0011ade0:;
    {
        cpu->r[4] = rd32(0x0011ade8u + + 0x70u);
    }
L_0011ade4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0011ade8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0011adec:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0011adf0:;
    {
        cpu->r[14] = 0x0011adf4u; fn_0010ffa8(cpu);
    }
L_0011adf4:;
    {
        cpu->r[3] = rd32(0x0011adfcu + + 0x60u);
    }
L_0011adf8:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011ae00u, cpu->r[4], 0, 0);
    }
L_0011adfc:;
    {
        cpu->r[2] = rd32(0x0011ae04u + + 0x5cu);
    }
L_0011ae00:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[6]);
    }
L_0011ae04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011ae08:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0011ae0c:;
    {
        wr32(cpu->r[5] + + 0x954u, cpu->r[7]);
    }
L_0011ae10:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011ae14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0011ae18:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_0011ae1c:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_0011ae20:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0011ae24:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0011ae28:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0011ae2c:;
    {
        cpu->r[14] = 0x0011ae30u; fn_000c0d80(cpu);
    }
L_0011ae30:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0011ae34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011ae38:;
    {
        wr8(cpu->r[5] + + 0xbacu, cpu->r[3]);
    }
L_0011ae3c:;
    {
        wr32(cpu->r[5] + + 0xa04u, cpu->r[3]);
    }
L_0011ae40:;
    {
        wr32(cpu->r[5] + + 0x958u, cpu->r[3]);
    }
L_0011ae44:;
    {
        wr32(cpu->r[5] + + 0x960u, cpu->r[3]);
    }
L_0011ae48:;
    {
        wr32(cpu->r[5] + + 0x96cu, cpu->r[3]);
    }
L_0011ae4c:;
    {
        wr8(cpu->r[5] + + 0x970u, cpu->r[3]);
    }
L_0011ae50:;
    {
        wr8(cpu->r[5] + + 0x971u, cpu->r[3]);
    }
L_0011ae54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011ae58u)) return;
    }
}

/* _ZN14GS_RaceSummary11InitSpritesEv @ 0011ae64 (arm) */
void fn_0011ae64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011ae64:;
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
L_0011ae68:;
    {
        cpu->r[4] = rd32(0x0011ae70u + + 0x2b0u);
    }
L_0011ae6c:;
    {
        cpu->r[7] = rd32(0x0011ae74u + + 0x2b0u);
    }
L_0011ae70:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0011ae74:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011ae7cu, cpu->r[4], 0, 0);
    }
L_0011ae78:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0011ae7c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0011ae80:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011ae84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011af9c;
        }
    }
L_0011ae88:;
    {
        cpu->r[6] = rd32(0x0011ae90u + + 0x298u);
    }
L_0011ae8c:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_0011ae90:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011ae94:;
    {
        cpu->r[14] = 0x0011ae98u; fn_00096a08(cpu);
    }
L_0011ae98:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011ae9c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011aea0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011aea4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011aea8:;
    {
        cpu->r[14] = 0x0011aeacu; fn_0018aa44(cpu);
    }
L_0011aeac:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0011aeb0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0011aeb4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011aeb8:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[0]);
    }
L_0011aebc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011b0e4;
        }
    }
L_0011aec0:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_0011aec4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011aec8:;
    {
        cpu->r[14] = 0x0011aeccu; fn_00096a08(cpu);
    }
L_0011aecc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011aed0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011aed4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011aed8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011aedc:;
    {
        cpu->r[14] = 0x0011aee0u; fn_0018aa44(cpu);
    }
L_0011aee0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0011aee4:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0011aee8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011aeec:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[0]);
    }
L_0011aef0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011b0a8;
        }
    }
L_0011aef4:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_0011aef8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011aefc:;
    {
        cpu->r[14] = 0x0011af00u; fn_00096a08(cpu);
    }
L_0011af00:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011af04:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011af08:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011af0c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011af10:;
    {
        cpu->r[14] = 0x0011af14u; fn_0018aa44(cpu);
    }
L_0011af14:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0011af18:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0011af1c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011af20:;
    {
        wr32(cpu->r[5] + + 0xa8u, cpu->r[0]);
    }
L_0011af24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011b06c;
        }
    }
L_0011af28:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_0011af2c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011af30:;
    {
        cpu->r[14] = 0x0011af34u; fn_00096a08(cpu);
    }
L_0011af34:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011af38:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011af3c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011af40:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011af44:;
    {
        cpu->r[14] = 0x0011af48u; fn_0018aa44(cpu);
    }
L_0011af48:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0011af4c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0011af50:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011af54:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[0]);
    }
L_0011af58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011b030;
        }
    }
L_0011af5c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011af60:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0011af64:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011af68:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011af6c:;
    {
        cpu->r[14] = 0x0011af70u; fn_0018aa44(cpu);
    }
L_0011af70:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0011af74:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0011af78:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011af7c:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[0]);
    }
L_0011af80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011afe0;
        }
    }
L_0011af84:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011af88:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011af8c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0011af90:;
    {
        cpu->r[14] = 0x0011af94u; fn_0018aa44(cpu);
    }
L_0011af94:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_0011af98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011af9cu)) return;
    }
L_0011af9c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011afa0:;
    {
        cpu->r[14] = 0x0011afa4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011afa4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011afa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ae88;
        }
    }
L_0011afac:;
    {
        cpu->r[6] = rd32(0x0011afb4u + + 0x174u);
    }
L_0011afb0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011afb4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011afb8:;
    {
        cpu->r[14] = 0x0011afbcu; fn_0018aa20(cpu);
    }
L_0011afbc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011afc0:;
    {
        cpu->r[14] = 0x0011afc4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011afc4:;
    {
        cpu->r[3] = rd32(0x0011afccu + + 0x160u);
    }
L_0011afc8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011afcc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011afd0:;
    {
        cpu->r[3] = rd32(0x0011afd8u + + 0x158u);
    }
L_0011afd4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011afd8:;
    {
        cpu->r[14] = 0x0011afdcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011afdc:;
    {
        goto L_0011ae8c;
    }
L_0011afe0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011afe4:;
    {
        cpu->r[14] = 0x0011afe8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011afe8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011afec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011af84;
        }
    }
L_0011aff0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011aff4:;
    {
        cpu->r[14] = 0x0011aff8u; fn_0018aa20(cpu);
    }
L_0011aff8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011affc:;
    {
        cpu->r[14] = 0x0011b000u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011b000:;
    {
        cpu->r[3] = rd32(0x0011b008u + + 0x124u);
    }
L_0011b004:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011b008:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011b00c:;
    {
        cpu->r[3] = rd32(0x0011b014u + + 0x11cu);
    }
L_0011b010:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011b014:;
    {
        cpu->r[14] = 0x0011b018u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011b018:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011b01c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011b020:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0011b024:;
    {
        cpu->r[14] = 0x0011b028u; fn_0018aa44(cpu);
    }
L_0011b028:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_0011b02c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011b030u)) return;
    }
L_0011b030:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011b034:;
    {
        cpu->r[14] = 0x0011b038u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011b038:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011b03c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011af5c;
        }
    }
L_0011b040:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011b044:;
    {
        cpu->r[14] = 0x0011b048u; fn_0018aa20(cpu);
    }
L_0011b048:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011b04c:;
    {
        cpu->r[14] = 0x0011b050u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011b050:;
    {
        cpu->r[3] = rd32(0x0011b058u + + 0xd4u);
    }
L_0011b054:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011b058:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011b05c:;
    {
        cpu->r[3] = rd32(0x0011b064u + + 0xccu);
    }
L_0011b060:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011b064:;
    {
        cpu->r[14] = 0x0011b068u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011b068:;
    {
        goto L_0011af5c;
    }
L_0011b06c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011b070:;
    {
        cpu->r[14] = 0x0011b074u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011b074:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011b078:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011af28;
        }
    }
L_0011b07c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011b080:;
    {
        cpu->r[14] = 0x0011b084u; fn_0018aa20(cpu);
    }
L_0011b084:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011b088:;
    {
        cpu->r[14] = 0x0011b08cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011b08c:;
    {
        cpu->r[3] = rd32(0x0011b094u + + 0x98u);
    }
L_0011b090:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011b094:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011b098:;
    {
        cpu->r[3] = rd32(0x0011b0a0u + + 0x90u);
    }
L_0011b09c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011b0a0:;
    {
        cpu->r[14] = 0x0011b0a4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011b0a4:;
    {
        goto L_0011af28;
    }
L_0011b0a8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011b0ac:;
    {
        cpu->r[14] = 0x0011b0b0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011b0b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011b0b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011aef4;
        }
    }
L_0011b0b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011b0bc:;
    {
        cpu->r[14] = 0x0011b0c0u; fn_0018aa20(cpu);
    }
L_0011b0c0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011b0c4:;
    {
        cpu->r[14] = 0x0011b0c8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011b0c8:;
    {
        cpu->r[3] = rd32(0x0011b0d0u + + 0x5cu);
    }
L_0011b0cc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011b0d0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011b0d4:;
    {
        cpu->r[3] = rd32(0x0011b0dcu + + 0x54u);
    }
L_0011b0d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011b0dc:;
    {
        cpu->r[14] = 0x0011b0e0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011b0e0:;
    {
        goto L_0011aef4;
    }
L_0011b0e4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011b0e8:;
    {
        cpu->r[14] = 0x0011b0ecu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011b0ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011b0f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011aec0;
        }
    }
L_0011b0f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011b0f8:;
    {
        cpu->r[14] = 0x0011b0fcu; fn_0018aa20(cpu);
    }
L_0011b0fc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011b100:;
    {
        cpu->r[14] = 0x0011b104u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011b104:;
    {
        cpu->r[3] = rd32(0x0011b10cu + + 0x20u);
    }
L_0011b108:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011b10c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011b110:;
    {
        cpu->r[3] = rd32(0x0011b118u + + 0x18u);
    }
L_0011b114:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011b118:;
    {
        cpu->r[14] = 0x0011b11cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011b11c:;
    {
        goto L_0011aec0;
    }
}

/* _ZN14GS_RaceSummary13DrawPageStatsEv @ 0011b134 (arm) */
void fn_0011b134(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011b134:;
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
L_0011b138:;
    {
        cpu->r[9] = rd32(0x0011b140u + + 0x474u);
    }
L_0011b13c:;
    {
        cpu->r[5] = rd32(0x0011b144u + + 0x474u);
    }
L_0011b140:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000bcu, 1, 0);
    }
L_0011b144:;
    {
        cpu->r[9] = add_flags(cpu, 0x0011b14cu, cpu->r[9], 0, 0);
    }
L_0011b148:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0011b14c:;
    {
        cpu->r[6] = rd32(cpu->r[9] + cpu->r[5]);
    }
L_0011b150:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0011b154:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011b158:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011b448;
        }
    }
L_0011b15c:;
    {
        cpu->r[4] = rd32(0x0011b164u + + 0x458u);
    }
L_0011b160:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_0011b164:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_0011b168:;
    {
        cpu->r[14] = 0x0011b16cu; fn_00096a08(cpu);
    }
L_0011b16c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011b170:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011b174:;
    {
        cpu->r[0] = rd32(cpu->r[9] + cpu->r[4]);
    }
L_0011b178:;
    {
        cpu->r[14] = 0x0011b17cu; fn_0018aa44(cpu);
    }
L_0011b17c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011b180:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011b57c;
        }
    }
L_0011b184:;
    {
        cpu->r[1] = rd32(0x0011b18cu + + 0x434u);
    }
L_0011b188:;
    {
        cpu->r[0] = 0x0000062cu;
    }
L_0011b18c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0011b190:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011b194:;
    {
        cpu->r[14] = 0x0011b198u; fn_000aeb58(cpu);
    }
L_0011b198:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0011b19c:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0011b1a0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011b1a4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0011b1a8:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0011b1ac:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_0011b1b0:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0011b1b4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0011b1b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_0011b1bc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0011b1c0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011b1c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011b1c8:;
    {
        cpu->r[14] = 0x0011b1ccu; fn_000ad19c(cpu);
    }
L_0011b1cc:;
    {
        cpu->r[6] = rd32(cpu->r[9] + cpu->r[5]);
    }
L_0011b1d0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0011b1d4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011b1d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011b4cc;
        }
    }
L_0011b1dc:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_0011b1e0:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_0011b1e4:;
    {
        cpu->r[14] = 0x0011b1e8u; fn_00096a08(cpu);
    }
L_0011b1e8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011b1ec:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011b1f0:;
    {
        cpu->r[0] = rd32(cpu->r[9] + cpu->r[4]);
    }
L_0011b1f4:;
    {
        cpu->r[14] = 0x0011b1f8u; fn_0018aa44(cpu);
    }
L_0011b1f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011b1fc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_0011b200:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011b50c;
        }
    }
L_0011b204:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011b208:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011b20c:;
    {
        cpu->r[0] = 0x000000a5u;
    }
L_0011b210:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0xa04u);
    }
L_0011b214:;
    {
        wr8(cpu->r[12] + + 0x50u, cpu->r[3]);
    }
L_0011b218:;
    {
        cpu->r[14] = 0x0011b21cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0011b21c:;
    {
        cpu->r[5] = rd32(cpu->r[9] + cpu->r[5]);
    }
L_0011b220:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0011b224:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011b228:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_0011b22c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011b48c;
        }
    }
L_0011b230:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_0011b234:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_0011b238:;
    {
        cpu->r[14] = 0x0011b23cu; fn_00096a08(cpu);
    }
L_0011b23c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011b240:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011b244:;
    {
        cpu->r[0] = rd32(cpu->r[9] + cpu->r[4]);
    }
L_0011b248:;
    {
        cpu->r[14] = 0x0011b24cu; fn_0018aa44(cpu);
    }
L_0011b24c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011b250:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_0011b254:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011b544;
        }
    }
L_0011b258:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0xcu);
    }
L_0011b25c:;
    {
        cpu->r[2] = 0x00001bc4u;
    }
L_0011b260:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xa04u);
    }
L_0011b264:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0011b268:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_0011b26c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_0011b270:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0011b274:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0011b278:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011b27c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0011b280:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011b440;
        }
    }
L_0011b284:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x000000b0u, 0, 0);
    }
L_0011b288:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_0011b28c:;
    {
        cpu->r[12] = rd32(0x0011b294u + + 0x330u);
    }
L_0011b290:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0011b294:;
    {
        cpu->r[3] = rd32(0x0011b29cu + + 0x32cu);
    }
L_0011b298:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x00000970u, 0, 0);
    }
L_0011b29c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[7], 0x00000b70u, 0, 0);
    }
L_0011b2a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000b4u, 0, 0);
    }
L_0011b2a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011b2acu, cpu->r[3], 0, 0);
    }
L_0011b2a8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_0011b2ac:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_0011b2b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0011b2b4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_0011b2b8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000000eu, 0, 0);
    }
L_0011b2bc:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x958u);
    }
L_0011b2c0:;
    {
        cpu->r[6] = 0x000000a0u;
    }
L_0011b2c4:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0011b2c8:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_0011b2cc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_0011b2d0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_0011b2d4:;
    {
        goto L_0011b380;
    }
L_0011b2d8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[11]);
    }
L_0011b2dc:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x958u);
    }
L_0011b2e0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0011b2e4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_0011b2e8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0011b2ec:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00000100u;
        }
    }
L_0011b2f0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0011b308;
        }
    }
L_0011b2f4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_0011b2f8:;
    {
        cpu->r[14] = 0x0011b2fcu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0011b2fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000100u, 1, 1);
    }
L_0011b300:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[0];
        }
    }
L_0011b304:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00000100u;
        }
    }
L_0011b308:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0011b30c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0011b310:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0011b314:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1]; cpu->r[1] = v;
    }
L_0011b318:;
    {
        cpu->r[12] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0011b31c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011b320:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_0011b324:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_0011b328:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 8u, &shc); cpu->r[1] = v;
    }
L_0011b32c:;
    {
        cpu->r[14] = 0x0011b330u; fn_000f3d88(cpu);
    }
L_0011b330:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0011b334:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0011b338:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011b33c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0011b340:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[12]);
    }
L_0011b344:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_0011b348:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011b34c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0011b350:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0011b354:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0011b358:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000c8u, 0, 0);
    }
L_0011b35c:;
    {
        cpu->r[14] = 0x0011b360u; fn_000ad19c(cpu);
    }
L_0011b360:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xa04u);
    }
L_0011b364:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_0011b368:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011b440;
        }
    }
L_0011b36c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0011b370:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_0011b374:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x958u);
    }
L_0011b378:;
    {
        uint32_t wb_tmp = cpu->r[11] + + 0x2u;
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[11] + + 0x2u);
        cpu->r[11] = wb_tmp;
    }
L_0011b37c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[1], 0, 0);
    }
L_0011b380:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0011b384:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011b440;
        }
    }
L_0011b388:;
    {
        cpu->r[1] = 0x00000021u;
    }
L_0011b38c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011b390:;
    {
        cpu->r[0] = rd32(cpu->r[4] + - 0x8u);
    }
L_0011b394:;
    {
        cpu->r[14] = 0x0011b398u; fn_000ae560(cpu);
    }
L_0011b398:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0011b39c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + - 0x8u);
    }
L_0011b3a0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0011b3a4:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0011b3a8:;
    {
        cpu->r[10] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_0011b3ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011b3b0:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_0011b3b4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0011b3b8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0011b3bc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x000000c8u, 1, 0);
    }
L_0011b3c0:;
    {
        cpu->r[14] = 0x0011b3c4u; fn_000ad19c(cpu);
    }
L_0011b3c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0x4u);
    }
L_0011b3c8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0011b3cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011b428;
        }
    }
L_0011b3d0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_0011b3d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011b3d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + - 0x8u);
    }
L_0011b3dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0011b3e0:;
    {
        wr32(cpu->r[13] + + 0xb4u, cpu->r[5]);
    }
L_0011b3e4:;
    {
        wr32(cpu->r[13] + + 0xb0u, cpu->r[5]);
    }
L_0011b3e8:;
    {
        cpu->r[14] = 0x0011b3ecu; fn_000aa404(cpu);
    }
L_0011b3ec:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0011b3f0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xb4u);
    }
L_0011b3f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0011b3f8:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x000000c7u, 1, 0);
    }
L_0011b3fc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0011b400:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[3], 1, 1u, &shc), 0, 0);
    }
L_0011b404:;
    {
        cpu->r[2] = rd32(cpu->r[4] + - 0x4u);
    }
L_0011b408:;
    {
        cpu->r[14] = 0x0011b40cu; fn_000ae830(cpu);
    }
L_0011b40c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0011b410:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011b414:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0011b418:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0011b41c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0011b420:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0011b424:;
    {
        cpu->r[14] = 0x0011b428u; fn_000ad19c(cpu);
    }
L_0011b428:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0011b42c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[11] + + 0x2u);
    }
L_0011b430:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011b2d8;
        }
    }
L_0011b434:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x958u);
    }
L_0011b438:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0011b43c:;
    {
        goto L_0011b2e4;
    }
L_0011b440:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000bcu, 0, 0);
    }
L_0011b444:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011b448u)) return;
    }
L_0011b448:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011b44c:;
    {
        cpu->r[14] = 0x0011b450u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011b450:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011b454:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011b15c;
        }
    }
L_0011b458:;
    {
        cpu->r[4] = rd32(0x0011b460u + + 0x15cu);
    }
L_0011b45c:;
    {
        cpu->r[8] = rd32(cpu->r[9] + cpu->r[4]);
    }
L_0011b460:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011b464:;
    {
        cpu->r[14] = 0x0011b468u; fn_0018aa20(cpu);
    }
L_0011b468:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011b46c:;
    {
        cpu->r[14] = 0x0011b470u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011b470:;
    {
        cpu->r[3] = rd32(0x0011b478u + + 0x154u);
    }
L_0011b474:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011b478:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0011b47c:;
    {
        cpu->r[3] = rd32(0x0011b484u + + 0x14cu);
    }
L_0011b480:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0011b484:;
    {
        cpu->r[14] = 0x0011b488u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011b488:;
    {
        goto L_0011b160;
    }
L_0011b48c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011b490:;
    {
        cpu->r[14] = 0x0011b494u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011b494:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011b498:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011b230;
        }
    }
L_0011b49c:;
    {
        cpu->r[6] = rd32(cpu->r[9] + cpu->r[4]);
    }
L_0011b4a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011b4a4:;
    {
        cpu->r[14] = 0x0011b4a8u; fn_0018aa20(cpu);
    }
L_0011b4a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011b4ac:;
    {
        cpu->r[14] = 0x0011b4b0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011b4b0:;
    {
        cpu->r[3] = rd32(0x0011b4b8u + + 0x114u);
    }
L_0011b4b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011b4b8:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0011b4bc:;
    {
        cpu->r[3] = rd32(0x0011b4c4u + + 0x10cu);
    }
L_0011b4c0:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0011b4c4:;
    {
        cpu->r[14] = 0x0011b4c8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011b4c8:;
    {
        goto L_0011b230;
    }
L_0011b4cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011b4d0:;
    {
        cpu->r[14] = 0x0011b4d4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011b4d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011b4d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011b1dc;
        }
    }
L_0011b4dc:;
    {
        cpu->r[8] = rd32(cpu->r[9] + cpu->r[4]);
    }
L_0011b4e0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011b4e4:;
    {
        cpu->r[14] = 0x0011b4e8u; fn_0018aa20(cpu);
    }
L_0011b4e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011b4ec:;
    {
        cpu->r[14] = 0x0011b4f0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011b4f0:;
    {
        cpu->r[3] = rd32(0x0011b4f8u + + 0xd4u);
    }
L_0011b4f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011b4f8:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0011b4fc:;
    {
        cpu->r[3] = rd32(0x0011b504u + + 0xccu);
    }
L_0011b500:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0011b504:;
    {
        cpu->r[14] = 0x0011b508u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011b508:;
    {
        goto L_0011b1dc;
    }
L_0011b50c:;
    {
        cpu->r[1] = rd32(0x0011b514u + + 0xc0u);
    }
L_0011b510:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0011b514:;
    {
        cpu->r[12] = rd32(0x0011b51cu + + 0xbcu);
    }
L_0011b518:;
    {
        cpu->r[14] = 0x000003a5u;
    }
L_0011b51c:;
    {
        cpu->r[2] = rd32(0x0011b524u + + 0xb8u);
    }
L_0011b520:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011b528u, cpu->r[1], 0, 0);
    }
L_0011b524:;
    {
        cpu->r[3] = rd32(0x0011b52cu + + 0xb4u);
    }
L_0011b528:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011b530u, cpu->r[12], 0, 0);
    }
L_0011b52c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011b534u, cpu->r[2], 0, 0);
    }
L_0011b530:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000020u, 0, 0);
    }
L_0011b534:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011b53cu, cpu->r[3], 0, 0);
    }
L_0011b538:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0011b53c:;
    {
        cpu->r[14] = 0x0011b540u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0011b540:;
    {
        goto L_0011b204;
    }
L_0011b544:;
    {
        cpu->r[1] = rd32(0x0011b54cu + + 0x98u);
    }
L_0011b548:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0011b54c:;
    {
        cpu->r[12] = rd32(0x0011b554u + + 0x94u);
    }
L_0011b550:;
    {
        cpu->r[14] = 0x000003b5u;
    }
L_0011b554:;
    {
        cpu->r[2] = rd32(0x0011b55cu + + 0x90u);
    }
L_0011b558:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011b560u, cpu->r[1], 0, 0);
    }
L_0011b55c:;
    {
        cpu->r[3] = rd32(0x0011b564u + + 0x8cu);
    }
L_0011b560:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011b568u, cpu->r[12], 0, 0);
    }
L_0011b564:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011b56cu, cpu->r[2], 0, 0);
    }
L_0011b568:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000020u, 0, 0);
    }
L_0011b56c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011b574u, cpu->r[3], 0, 0);
    }
L_0011b570:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0011b574:;
    {
        cpu->r[14] = 0x0011b578u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0011b578:;
    {
        goto L_0011b258;
    }
L_0011b57c:;
    {
        cpu->r[1] = rd32(0x0011b584u + + 0x70u);
    }
L_0011b580:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0011b584:;
    {
        cpu->r[12] = rd32(0x0011b58cu + + 0x6cu);
    }
L_0011b588:;
    {
        cpu->r[14] = 0x000003a1u;
    }
L_0011b58c:;
    {
        cpu->r[2] = rd32(0x0011b594u + + 0x68u);
    }
L_0011b590:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011b598u, cpu->r[1], 0, 0);
    }
L_0011b594:;
    {
        cpu->r[3] = rd32(0x0011b59cu + + 0x64u);
    }
L_0011b598:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011b5a0u, cpu->r[12], 0, 0);
    }
L_0011b59c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011b5a4u, cpu->r[2], 0, 0);
    }
L_0011b5a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000020u, 0, 0);
    }
L_0011b5a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011b5acu, cpu->r[3], 0, 0);
    }
L_0011b5a8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0011b5ac:;
    {
        cpu->r[14] = 0x0011b5b0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0011b5b0:;
    {
        goto L_0011b184;
    }
}

/* _ZN14GS_RaceSummary11DrawPageWinEv @ 0011b604 (arm) */
void fn_0011b604(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011b604:;
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
L_0011b608:;
    {
        cpu->r[4] = rd32(0x0011b610u + + 0x340u);
    }
L_0011b60c:;
    {
        cpu->r[3] = rd32(0x0011b614u + + 0x340u);
    }
L_0011b610:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000094u, 1, 0);
    }
L_0011b614:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011b61cu, cpu->r[4], 0, 0);
    }
L_0011b618:;
    {
        cpu->r[6] = rd32(0x0011b620u + + 0x338u);
    }
L_0011b61c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0011b620:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011b624:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011b628:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_0011b62c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011b630:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011b634:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[3]);
    }
L_0011b638:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011b6bc;
        }
    }
L_0011b63c:;
    {
        cpu->r[5] = rd32(0x0011b644u + + 0x318u);
    }
L_0011b640:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_0011b644:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0011b648:;
    {
        cpu->r[14] = 0x0011b64cu; fn_00096a08(cpu);
    }
L_0011b64c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011b650:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011b654:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0011b658:;
    {
        cpu->r[14] = 0x0011b65cu; fn_0018aa44(cpu);
    }
L_0011b65c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011b660:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011b8dc;
        }
    }
L_0011b664:;
    {
        cpu->r[3] = rd32(0x0011b66cu + + 0x2f4u);
    }
L_0011b668:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011b66c:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_0011b670:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0011b674:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011b914;
        }
    }
L_0011b678:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_0011b67c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011b680:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0011b684:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_0011b688:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_0011b768;
        case 1: goto L_0011b780;
        case 2: goto L_0011b7a0;
        case 3: goto L_0011b7b8;
        case 4: goto L_0011b7dc;
        case 5: goto L_0011b7f8;
        case 6: goto L_0011b828;
        case 7: goto L_0011b850;
        case 8: goto L_0011b868;
        case 9: goto L_0011b888;
        case 10: goto L_0011b8a8;
        default: guest_unimplemented(cpu, 0x0011b688u); return; }
        }
    }
L_0011b68c:;
    {
        goto L_0011b700;
    }
L_0011b6bc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011b6c0:;
    {
        cpu->r[14] = 0x0011b6c4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011b6c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011b6c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011b63c;
        }
    }
L_0011b6cc:;
    {
        cpu->r[5] = rd32(0x0011b6d4u + + 0x288u);
    }
L_0011b6d0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0011b6d4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011b6d8:;
    {
        cpu->r[14] = 0x0011b6dcu; fn_0018aa20(cpu);
    }
L_0011b6dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011b6e0:;
    {
        cpu->r[14] = 0x0011b6e4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011b6e4:;
    {
        cpu->r[3] = rd32(0x0011b6ecu + + 0x278u);
    }
L_0011b6e8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011b6ec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011b6f0:;
    {
        cpu->r[3] = rd32(0x0011b6f8u + + 0x270u);
    }
L_0011b6f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011b6f8:;
    {
        cpu->r[14] = 0x0011b6fcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011b6fc:;
    {
        goto L_0011b640;
    }
L_0011b700:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011b704:;
    {
        cpu->r[3] = 0x00000011u;
    }
L_0011b708:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_0011b70c:;
    {
        cpu->r[3] = rd32(0x0011b714u + + 0x258u);
    }
L_0011b710:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0011b714:;
    {
        cpu->r[2] = rd32(0x0011b71cu + + 0x254u);
    }
L_0011b718:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011b71c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0011b720:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0011b724:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011b728:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0011b72c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011b730:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0011b734:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_0011b738:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_0011b73c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0011b740:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0011b744:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 0);
    }
L_0011b748:;
    {
        cpu->r[14] = 0x0011b74cu; fn_000ad83c(cpu);
    }
L_0011b74c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011b750:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8cu);
    }
L_0011b754:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011b758:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0011b75c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011b94c;
        }
    }
L_0011b760:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_0011b764:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011b768u)) return;
    }
L_0011b768:;
    {
        cpu->r[3] = rd32(0x0011b770u + + 0x204u);
    }
L_0011b76c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011b770:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011b778u, cpu->r[3], 0, 0);
    }
L_0011b774:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0011b778:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_0011b77c:;
    {
        goto L_0011b704;
    }
L_0011b780:;
    {
        cpu->r[3] = rd32(0x0011b788u + + 0x1f0u);
    }
L_0011b784:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011b788:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011b790u, cpu->r[3], 0, 0);
    }
L_0011b78c:;
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
L_0011b790:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0011b794:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        cpu->r[3] = base + 8u;
    }
L_0011b798:;
    {
        wr16(cpu->r[3], cpu->r[2]);
    }
L_0011b79c:;
    {
        goto L_0011b704;
    }
L_0011b7a0:;
    {
        cpu->r[3] = rd32(0x0011b7a8u + + 0x1d4u);
    }
L_0011b7a4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011b7a8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011b7b0u, cpu->r[3], 0, 0);
    }
L_0011b7ac:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0011b7b0:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_0011b7b4:;
    {
        goto L_0011b704;
    }
L_0011b7b8:;
    {
        cpu->r[3] = rd32(0x0011b7c0u + + 0x1c0u);
    }
L_0011b7bc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011b7c0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011b7c8u, cpu->r[3], 0, 0);
    }
L_0011b7c4:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0011b7c8:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 16u, &shc); cpu->r[3] = v;
    }
L_0011b7cc:;
    {
        wr8(cpu->r[13] + + 0x12u, cpu->r[3]);
    }
L_0011b7d0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_0011b7d4:;
    {
        wr16(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0011b7d8:;
    {
        goto L_0011b704;
    }
L_0011b7dc:;
    {
        cpu->r[3] = rd32(0x0011b7e4u + + 0x1a0u);
    }
L_0011b7e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011b7e4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011b7ecu, cpu->r[3], 0, 0);
    }
L_0011b7e8:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0011b7ec:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_0011b7f0:;
    {
        wr16(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0011b7f4:;
    {
        goto L_0011b704;
    }
L_0011b7f8:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0011b7fc:;
    {
        cpu->r[2] = 0x00004220u;
    }
L_0011b800:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_0011b804:;
    {
        cpu->r[1] = rd32(0x0011b80cu + + 0x17cu);
    }
L_0011b808:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011b80c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011b810:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011b818u, cpu->r[1], 0, 0);
    }
L_0011b814:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011b818:;
    {
        cpu->r[3] = 0x00002710u;
    }
L_0011b81c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_0011b820:;
    {
        cpu->r[14] = 0x0011b824u; imp_sprintf(cpu); /* sprintf */
    }
L_0011b824:;
    {
        goto L_0011b704;
    }
L_0011b828:;
    {
        cpu->r[3] = rd32(0x0011b830u + + 0x15cu);
    }
L_0011b82c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011b830:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_0011b834:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011b83cu, cpu->r[3], 0, 0);
    }
L_0011b838:;
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
L_0011b83c:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 16u, &shc); cpu->r[3] = v;
    }
L_0011b840:;
    {
        wr8(cpu->r[13] + + 0x16u, cpu->r[3]);
    }
L_0011b844:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        cpu->r[12] = base + 8u;
    }
L_0011b848:;
    {
        wr16(cpu->r[12], cpu->r[2]);
    }
L_0011b84c:;
    {
        goto L_0011b704;
    }
L_0011b850:;
    {
        cpu->r[3] = rd32(0x0011b858u + + 0x138u);
    }
L_0011b854:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011b858:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011b860u, cpu->r[3], 0, 0);
    }
L_0011b85c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0011b860:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_0011b864:;
    {
        goto L_0011b704;
    }
L_0011b868:;
    {
        cpu->r[3] = rd32(0x0011b870u + + 0x124u);
    }
L_0011b86c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011b870:;
    {
        cpu->r[14] = cpu->r[5];
    }
L_0011b874:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011b87cu, cpu->r[3], 0, 0);
    }
L_0011b878:;
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
L_0011b87c:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        cpu->r[14] = base + 12u;
    }
L_0011b880:;
    {
        wr8(cpu->r[14], cpu->r[3]);
    }
L_0011b884:;
    {
        goto L_0011b704;
    }
L_0011b888:;
    {
        cpu->r[1] = rd32(0x0011b890u + + 0x108u);
    }
L_0011b88c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011b890:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011b894:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011b898:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011b8a0u, cpu->r[1], 0, 0);
    }
L_0011b89c:;
    {
        cpu->r[3] = 0x00002710u;
    }
L_0011b8a0:;
    {
        cpu->r[14] = 0x0011b8a4u; imp_sprintf(cpu); /* sprintf */
    }
L_0011b8a4:;
    {
        goto L_0011b704;
    }
L_0011b8a8:;
    {
        cpu->r[12] = rd32(0x0011b8b0u + + 0xecu);
    }
L_0011b8ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011b8b0:;
    {
        cpu->r[14] = cpu->r[5];
    }
L_0011b8b4:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011b8bcu, cpu->r[12], 0, 0);
    }
L_0011b8b8:;
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
L_0011b8bc:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[14] = base + 16u;
    }
L_0011b8c0:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_0011b8c4:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0011b8c8:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 16u, &shc); cpu->r[12] = v;
    }
L_0011b8cc:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        cpu->r[3] = base + 8u;
    }
L_0011b8d0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_0011b8d4:;
    {
        wr8(cpu->r[3], cpu->r[12]);
    }
L_0011b8d8:;
    {
        goto L_0011b704;
    }
L_0011b8dc:;
    {
        cpu->r[1] = rd32(0x0011b8e4u + + 0xbcu);
    }
L_0011b8e0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0011b8e4:;
    {
        cpu->r[12] = rd32(0x0011b8ecu + + 0xb8u);
    }
L_0011b8e8:;
    {
        cpu->r[14] = 0x0000035cu;
    }
L_0011b8ec:;
    {
        cpu->r[2] = rd32(0x0011b8f4u + + 0xb4u);
    }
L_0011b8f0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011b8f8u, cpu->r[1], 0, 0);
    }
L_0011b8f4:;
    {
        cpu->r[3] = rd32(0x0011b8fcu + + 0xb0u);
    }
L_0011b8f8:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011b900u, cpu->r[12], 0, 0);
    }
L_0011b8fc:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011b904u, cpu->r[2], 0, 0);
    }
L_0011b900:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000030u, 0, 0);
    }
L_0011b904:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011b90cu, cpu->r[3], 0, 0);
    }
L_0011b908:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0011b90c:;
    {
        cpu->r[14] = 0x0011b910u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0011b910:;
    {
        goto L_0011b664;
    }
L_0011b914:;
    {
        cpu->r[1] = rd32(0x0011b91cu + + 0x94u);
    }
L_0011b918:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0011b91c:;
    {
        cpu->r[12] = rd32(0x0011b924u + + 0x90u);
    }
L_0011b920:;
    {
        cpu->r[14] = 0x0000035fu;
    }
L_0011b924:;
    {
        cpu->r[2] = rd32(0x0011b92cu + + 0x8cu);
    }
L_0011b928:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011b930u, cpu->r[1], 0, 0);
    }
L_0011b92c:;
    {
        cpu->r[3] = rd32(0x0011b934u + + 0x88u);
    }
L_0011b930:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011b938u, cpu->r[12], 0, 0);
    }
L_0011b934:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011b93cu, cpu->r[2], 0, 0);
    }
L_0011b938:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000030u, 0, 0);
    }
L_0011b93c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011b944u, cpu->r[3], 0, 0);
    }
L_0011b940:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0011b944:;
    {
        cpu->r[14] = 0x0011b948u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0011b948:;
    {
        goto L_0011b678;
    }
L_0011b94c:;
    {
        cpu->r[14] = 0x0011b950u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_0011b950:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[2] + (-cpu->r[12]);
        cpu->r[14] = (uint32_t)(int32_t)s16(cpu->r[2]);
        cpu->r[2] = wb_tmp;
        }
    }
L_0011b954:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr64(cpu->r[0], ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_0011b958:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_0011b95c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 4, 9u, &shc); cpu->r[0] = v;
        }
    }
L_0011b960:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_0011b964:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr16(cpu->r[0], cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_0011b968:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 2, 16u, &shc); cpu->r[0] = v;
        }
    }
L_0011b96c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr16(cpu->r[0], cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_0011b970:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 16u, &shc); cpu->r[0] = v;
        }
    }
L_0011b974:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011b97cu & shifter(cpu->r[4], 2, 4u, &shc); cpu->r[7] = v;
        }
    }
L_0011b978:;
    {
        if (cond_test(cpu, 1)) {
        wr64(0x0011b980u, ((uint64_t)cpu->r[8] << 32) | cpu->r[7]);
        }
    }
L_0011b97c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011b984u & shifter(cpu->r[0], 4, 3u, &shc); cpu->r[7] = v;
        }
    }
L_0011b980:;
    {
        if (cond_test(cpu, 1)) {
        uint64_t v = rd64(0x0011b988u);
        cpu->r[7] = (uint32_t)v;
        cpu->r[8] = (uint32_t)(v >> 32);
        }
    }
L_0011b984:;
    {
        if (cond_test(cpu, 1)) {
        wr16(0x0011b98cu, cpu->r[7]);
        }
    }
L_0011b988:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] * cpu->r[1]; uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x0011b98cu)) return;
        }
    }
L_0011b98c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011b994u & shifter(cpu->r[12], 4, (cpu->r[1] & 0xffu), &shc); cpu->r[7] = v;
        }
    }
L_0011b990:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011b998u & shifter(cpu->r[4], 4, 2u, &shc); cpu->r[7] = v;
        }
    }
L_0011b994:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011b99cu & shifter(cpu->r[0], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[7] = v;
        }
    }
L_0011b998:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011b9a0u & shifter(cpu->r[12], 3, (cpu->r[1] & 0xffu), &shc); cpu->r[7] = v;
        }
    }
L_0011b99c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011b9a4u & shifter(cpu->r[0], 3, (cpu->r[1] & 0xffu), &shc); cpu->r[7] = v;
        }
    }
L_0011b9a0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011b9a8u & shifter(cpu->r[4], 1, (cpu->r[4] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
L_0011b9a4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] * 0x0011b9acu; uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x0011b9a8u)) return;
        }
    }
L_0011b9a8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011b9b0u & shifter(cpu->r[0], 1, (cpu->r[4] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
L_0011b9ac:;
    {
        if (cond_test(cpu, 1)) {
        wr64(0x0011b9b4u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
        }
    }
L_0011b9b0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011b9b8u & shifter(cpu->r[12], 2, (cpu->r[4] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
L_0011b9b4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011b9bcu & shifter(cpu->r[8], 1, (0x0011b9bcu & 0xffu), &shc); cpu->r[6] = v;
        }
    }
L_0011b9b8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011b9c0u & shifter(cpu->r[8], 2, (cpu->r[4] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
L_0011b9bc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011b9c4u & shifter(cpu->r[0], 1, 31u, &shc); cpu->r[6] = v;
        }
    }
}

/* _ZN14GS_RaceSummary16DrawPageUnlockedEv @ 0011b9c0 (arm) */
void fn_0011b9c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011b9c0:;
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
L_0011b9c4:;
    {
        cpu->r[8] = rd32(0x0011b9ccu + + 0x870u);
    }
L_0011b9c8:;
    {
        cpu->r[5] = rd32(0x0011b9d0u + + 0x870u);
    }
L_0011b9cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000c4u, 1, 0);
    }
L_0011b9d0:;
    {
        cpu->r[8] = add_flags(cpu, 0x0011b9d8u, cpu->r[8], 0, 0);
    }
L_0011b9d4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0011b9d8:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[5]);
    }
L_0011b9dc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0011b9e0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011b9e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011bf6c;
        }
    }
L_0011b9e8:;
    {
        cpu->r[4] = rd32(0x0011b9f0u + + 0x854u);
    }
L_0011b9ec:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_0011b9f0:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_0011b9f4:;
    {
        cpu->r[14] = 0x0011b9f8u; fn_00096a08(cpu);
    }
L_0011b9f8:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[4]);
    }
L_0011b9fc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011ba00:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011ba04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011ba08:;
    {
        cpu->r[14] = 0x0011ba0cu; fn_0018aa44(cpu);
    }
L_0011ba0c:;
    {
        cpu->r[10] = rd32(cpu->r[8] + cpu->r[5]);
    }
L_0011ba10:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0011ba14:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x48u);
    }
L_0011ba18:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[3]);
    }
L_0011ba1c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0011ba20:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_0011ba24:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011ba28:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[2]);
    }
L_0011ba2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011c0e8;
        }
    }
L_0011ba30:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0011ba34:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_0011ba38:;
    {
        cpu->r[14] = 0x0011ba3cu; fn_00096a08(cpu);
    }
L_0011ba3c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011ba40:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011ba44:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[4]);
    }
L_0011ba48:;
    {
        cpu->r[14] = 0x0011ba4cu; fn_0018aa44(cpu);
    }
L_0011ba4c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011ba50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011c204;
        }
    }
L_0011ba54:;
    {
        cpu->r[5] = rd32(cpu->r[8] + cpu->r[5]);
    }
L_0011ba58:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0011ba5c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011ba60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011c124;
        }
    }
L_0011ba64:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_0011ba68:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_0011ba6c:;
    {
        cpu->r[14] = 0x0011ba70u; fn_00096a08(cpu);
    }
L_0011ba70:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011ba74:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011ba78:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[4]);
    }
L_0011ba7c:;
    {
        cpu->r[14] = 0x0011ba80u; fn_0018aa44(cpu);
    }
L_0011ba80:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011ba84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011c1cc;
        }
    }
L_0011ba88:;
    {
        cpu->r[0] = rd32(0x0011ba90u + + 0x7b8u);
    }
L_0011ba8c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011ba90:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_0011ba94:;
    {
        cpu->r[0] = 0x0000062du;
    }
L_0011ba98:;
    {
        cpu->r[14] = 0x0011ba9cu; fn_000aeb58(cpu);
    }
L_0011ba9c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0011baa0:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0011baa4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011baa8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0011baac:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0011bab0:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_0011bab4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0011bab8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0011babc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_0011bac0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0011bac4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011bac8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011bacc:;
    {
        cpu->r[14] = 0x0011bad0u; fn_000ad19c(cpu);
    }
L_0011bad0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xa80u);
    }
L_0011bad4:;
    {
        cpu->r[5] = rd8(cpu->r[7] + + 0x970u);
    }
L_0011bad8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011badc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011c164;
        }
    }
L_0011bae0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xa08u);
    }
L_0011bae4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011bae8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011baf8;
        }
    }
L_0011baec:;
    {
        cpu->r[4] = rd8(cpu->r[7] + + 0x971u);
    }
L_0011baf0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0011baf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011bfb0;
        }
    }
L_0011baf8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0011bafc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011bfe8;
        }
    }
L_0011bb00:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0xcu);
    }
L_0011bb04:;
    {
        cpu->r[3] = 0x00001bc4u;
    }
L_0011bb08:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0011bb0c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0011bb10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_0011bb14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011c174;
        }
    }
L_0011bb18:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011bb1c:;
    {
        cpu->r[0] = 0x00000618u;
    }
L_0011bb20:;
    {
        cpu->r[14] = 0x0011bb24u; fn_000aeb58(cpu);
    }
L_0011bb24:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0011bb28:;
    {
        cpu->r[2] = 0x00005556u;
    }
L_0011bb2c:;
    {
        cpu->r[3] = 0x000000a5u;
    }
L_0011bb30:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x5555u << 16);
    }
L_0011bb34:;
    {
        cpu->r[12] = rd32(cpu->r[8] + cpu->r[14]);
    }
L_0011bb38:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011bb3c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011bb40:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0011bb44:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0011bb48:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0011bb4c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0011bb50:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[12]; cpu->r[4] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_0011bb54:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[12], 1, 31u, &shc), 1, 0);
    }
L_0011bb58:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000045u, 1, 0);
    }
L_0011bb5c:;
    {
        cpu->r[14] = 0x0011bb60u; fn_000ad19c(cpu);
    }
L_0011bb60:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x970u);
    }
L_0011bb64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011bb68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011bf64;
        }
    }
L_0011bb6c:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0xa80u);
    }
L_0011bb70:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0011bb74:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011bce4;
        }
    }
L_0011bb78:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011bb7c:;
    {
        cpu->r[0] = 0x00000619u;
    }
L_0011bb80:;
    {
        cpu->r[14] = 0x0011bb84u; fn_000aeb58(cpu);
    }
L_0011bb84:;
    {
        cpu->r[1] = rd32(0x0011bb8cu + + 0x6c0u);
    }
L_0011bb88:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0011bb8c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0011bb90:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011bb98u, cpu->r[1], 0, 0);
    }
L_0011bb94:;
    {
        cpu->r[4] = 0x00005556u;
    }
L_0011bb98:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x5555u << 16);
    }
L_0011bb9c:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0011bba0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0011bba4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011bba8:;
    {
        cpu->r[14] = 0x0011bbacu; fn_000ae830(cpu);
    }
L_0011bbac:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0011bbb0:;
    {
        cpu->r[3] = 0x000000b4u;
    }
L_0011bbb4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0011bbb8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011bbbc:;
    {
        cpu->r[5] = rd32(cpu->r[8] + cpu->r[14]);
    }
L_0011bbc0:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_0011bbc4:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_0011bbc8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_0011bbcc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[4] * (int64_t)(int32_t)cpu->r[12]; cpu->r[14] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_0011bbd0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[12], 1, 31u, &shc), 1, 0);
    }
L_0011bbd4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000046u, 1, 0);
    }
L_0011bbd8:;
    {
        cpu->r[14] = 0x0011bbdcu; fn_000ad19c(cpu);
    }
L_0011bbdc:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0xa80u);
    }
L_0011bbe0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0011bbe4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 1);
    }
L_0011bbe8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011bce4;
        }
    }
L_0011bbec:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[4] * (int64_t)(int32_t)cpu->r[3]; cpu->r[0] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_0011bbf0:;
    {
        cpu->r[5] = (~0x00000000u);
    }
L_0011bbf4:;
    {
        cpu->r[4] = cpu->r[9];
    }
L_0011bbf8:;
    {
        cpu->r[6] = cpu->r[9];
    }
L_0011bbfc:;
    {
        cpu->r[1] = 0x000000ccu;
    }
L_0011bc00:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x000000b0u, 0, 0);
    }
L_0011bc04:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_0011bc08:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_0011bc0c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_0011bc10:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[8]);
    }
L_0011bc14:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x0000002au, 1, 0);
    }
L_0011bc18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000061u, 0, 0);
    }
L_0011bc1c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0011bc20:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_0011bc24:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0011bc28:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000290u, 0, 0);
    }
L_0011bc2c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_0011bc30:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_0011bc34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0011bc38:;
    {
        goto L_0011bc40;
    }
L_0011bc3c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0011bc40:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x4u;
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
        cpu->r[3] = wb_tmp;
    }
L_0011bc44:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_0011bc48:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0011bc4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011bc3c;
        }
    }
L_0011bc50:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0011bc54:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011bc58:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0011bc5c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0011bc60:;
    {
        cpu->r[14] = 0x0011bc64u; fn_0010dfc0(cpu);
    }
L_0011bc64:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0011bc68:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0011bc6c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0011bc70:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xb0u);
    }
L_0011bc74:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0011bc78:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0011bc7c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0011bc80:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_0011bc84:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_0011bc88:;
    {
        cpu->r[14] = 0x0011bc8cu; fn_000a8a2c(cpu);
    }
L_0011bc8c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0011bc90:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xb0u);
    }
L_0011bc94:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0011bc98:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011bc9c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xb8u);
    }
L_0011bca0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xb0u);
    }
L_0011bca4:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0011bca8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000005u, 0, 0);
    }
L_0011bcac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0011bcb0:;
    {
        cpu->r[14] = 0x0011bcb4u; fn_000ad8a0(cpu);
    }
L_0011bcb4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[11], 1, 0);
    }
L_0011bcb8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0011bcbc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[8], 0, 0);
    }
L_0011bcc0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xa80u);
    }
L_0011bcc4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_0011bcc8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
        }
    }
L_0011bccc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = rd32(cpu->r[13] + + 0x28u);
        }
    }
L_0011bcd0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
        }
    }
L_0011bcd4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
        }
    }
L_0011bcd8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_0011bcdc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011bc28;
        }
    }
L_0011bce0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0011bce4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xab0u);
    }
L_0011bce8:;
    {
        cpu->r[5] = rd32(cpu->r[7] + + 0xb7cu);
    }
L_0011bcec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0011bcf0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0011bcf4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011bd64;
        }
    }
L_0011bcf8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011bcfc:;
    {
        cpu->r[0] = 0x0000061au;
    }
L_0011bd00:;
    {
        cpu->r[14] = 0x0011bd04u; fn_000aeb58(cpu);
    }
L_0011bd04:;
    {
        cpu->r[1] = rd32(0x0011bd0cu + + 0x544u);
    }
L_0011bd08:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0011bd0c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0011bd10:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011bd18u, cpu->r[1], 0, 0);
    }
L_0011bd14:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0011bd18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011bd1c:;
    {
        cpu->r[14] = 0x0011bd20u; fn_000ae830(cpu);
    }
L_0011bd20:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0011bd24:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0011bd28:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0011bd2c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011bd30:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[14]);
    }
L_0011bd34:;
    {
        cpu->r[14] = 0x00005556u;
    }
L_0011bd38:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x5555u << 16);
    }
L_0011bd3c:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_0011bd40:;
    {
        cpu->r[3] = 0x000000b4u;
    }
L_0011bd44:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0011bd48:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0011bd4c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], 0x0000005au, 1, 0);
    }
L_0011bd50:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[14] * (int64_t)(int32_t)cpu->r[12]; cpu->r[4] = (uint32_t)v; cpu->r[14] = (uint32_t)(v >> 32); }
    }
L_0011bd54:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[12], 1, 31u, &shc), cpu->r[14], 1, 0);
    }
L_0011bd58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_0011bd5c:;
    {
        cpu->r[14] = 0x0011bd60u; fn_000ad19c(cpu);
    }
L_0011bd60:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xab0u);
    }
L_0011bd64:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0011bd68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011bd6c:;
    {
        cpu->r[2] = 0x00005556u;
    }
L_0011bd70:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[11] = 0x000000d2u;
        }
    }
L_0011bd74:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x5555u << 16);
    }
L_0011bd78:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[0]);
    }
L_0011bd7c:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_0011bd80:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000046u, 1, 0);
    }
L_0011bd84:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[4] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_0011bd88:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 31u, &shc), cpu->r[2], 1, 0);
    }
L_0011bd8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_0011bd90:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0011bd94:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = cpu->r[3];
        }
    }
L_0011bd98:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011c03c;
        }
    }
L_0011bd9c:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0011bda0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011bda4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011bda8:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0011bdac:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_0011bdb0:;
    {
        cpu->r[10] = cpu->r[9];
    }
L_0011bdb4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000077u, 0, 0);
    }
L_0011bdb8:;
    {
        cpu->r[11] = 0x000000d2u;
    }
L_0011bdbc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000b0u, 0, 0);
    }
L_0011bdc0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[14]);
    }
L_0011bdc4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_0011bdc8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[11]);
    }
L_0011bdcc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x000002a0u, 0, 0);
    }
L_0011bdd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0011bdd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0011bdd8:;
    {
        goto L_0011bde0;
    }
L_0011bddc:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0011bde0:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x4u;
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
        cpu->r[3] = wb_tmp;
    }
L_0011bde4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0011bde8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0011bdec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011bddc;
        }
    }
L_0011bdf0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0011bdf4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[2];
        }
    }
L_0011bdf8:;
    {
        { uint32_t v = cpu->r[4] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011bdfc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~0x00000001u);
        }
    }
L_0011be00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011c0e0;
        }
    }
L_0011be04:;
    {
        { uint32_t v = cpu->r[4] & 0x00000002u; set_nz(cpu, v); }
    }
L_0011be08:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~0x00000002u);
        }
    }
L_0011be0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011c0e0;
        }
    }
L_0011be10:;
    {
        { uint32_t v = cpu->r[4] & 0x00000004u; set_nz(cpu, v); }
    }
L_0011be14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011c0dc;
        }
    }
L_0011be18:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[11] = v;
    }
L_0011be1c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xb0u);
    }
L_0011be20:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000079u, 0, 0);
    }
L_0011be24:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0011be28:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0011be2c:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0011be30:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_0011be34:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_0011be38:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_0011be3c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_0011be40:;
    {
        cpu->r[14] = 0x0011be44u; fn_000a8a2c(cpu);
    }
L_0011be44:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xb0u);
    }
L_0011be48:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0011be4c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xb0u);
    }
L_0011be50:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0011be54:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xb8u);
    }
L_0011be58:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011be5c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0011be60:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000005u, 0, 0);
    }
L_0011be64:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_0011be68:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_0011be6c:;
    {
        cpu->r[14] = 0x0011be70u; fn_000ad8a0(cpu);
    }
L_0011be70:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0011be74:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0011be78:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[12], 1, 0);
    }
L_0011be7c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[11], 0, 0);
    }
L_0011be80:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_0011be84:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[7] + + 0xab0u);
        }
    }
L_0011be88:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011bea8;
        }
    }
L_0011be8c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xab0u);
    }
L_0011be90:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0011be94:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 1);
    }
L_0011be98:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_0011be9c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[8] = rd32(cpu->r[13] + + 0x18u);
        }
    }
L_0011bea0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000032u, 0, 0);
        }
    }
L_0011bea4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
        }
    }
L_0011bea8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0011beac:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0011beb0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = cpu->r[6];
        }
    }
L_0011beb4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_0011beb8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011c038;
        }
    }
L_0011bebc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0011bec0:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0011bec4:;
    {
        goto L_0011bdcc;
    }
L_0011bec8:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_0011becc:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0011bed0:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011bed4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011c1a0;
        }
    }
L_0011bed8:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_0011bedc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x94u);
    }
L_0011bee0:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_0011bee4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011bfd4;
        }
    }
L_0011bee8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011beec:;
    {
        wr8(cpu->r[7] + + 0x971u, cpu->r[3]);
    }
L_0011bef0:;
    {
        cpu->r[3] = rd32(0x0011bef8u + + 0x35cu);
    }
L_0011bef4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0011bef8:;
    {
        cpu->r[5] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0011befc:;
    {
        cpu->r[3] = rd32(0x0011bf04u + + 0x354u);
    }
L_0011bf00:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0011bf04:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0011bf08:;
    {
        wr32(cpu->r[2], cpu->r[4]);
    }
L_0011bf0c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_0011bf10:;
    {
        cpu->r[14] = 0x0011bf14u; fn_0018cbe8(cpu);
    }
L_0011bf14:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0011bf18:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0011bf1c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_0011bf20:;
    {
        cpu->r[14] = 0x0011bf24u; fn_0018cb94(cpu);
    }
L_0011bf24:;
    {
        cpu->r[0] = 0x00000078u;
    }
L_0011bf28:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_0011bf2c:;
    {
        cpu->r[14] = 0x0011bf30u; fn_0018ba6c(cpu);
    }
L_0011bf30:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011bf34:;
    {
        cpu->r[2] = 0x00000078u;
    }
L_0011bf38:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011bf3c:;
    {
        cpu->r[14] = 0x0011bf40u; imp_memset(cpu); /* memset */
    }
L_0011bf40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011bf44:;
    {
        cpu->r[14] = 0x0011bf48u; fn_000eaca4(cpu);
    }
L_0011bf48:;
    {
        cpu->r[3] = rd32(0x0011bf50u + + 0x30cu);
    }
L_0011bf4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011bf50:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0011bf54:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0011bf58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0011bf5c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0011bf60:;
    {
        cpu->r[14] = 0x0011bf64u; fn_000f361c(cpu);
    }
L_0011bf64:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000c4u, 0, 0);
    }
L_0011bf68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011bf6cu)) return;
    }
L_0011bf6c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011bf70:;
    {
        cpu->r[14] = 0x0011bf74u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011bf74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011bf78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011b9e8;
        }
    }
L_0011bf7c:;
    {
        cpu->r[4] = rd32(0x0011bf84u + + 0x2c0u);
    }
L_0011bf80:;
    {
        cpu->r[10] = rd32(cpu->r[8] + cpu->r[4]);
    }
L_0011bf84:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011bf88:;
    {
        cpu->r[14] = 0x0011bf8cu; fn_0018aa20(cpu);
    }
L_0011bf8c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011bf90:;
    {
        cpu->r[14] = 0x0011bf94u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011bf94:;
    {
        cpu->r[3] = rd32(0x0011bf9cu + + 0x2c4u);
    }
L_0011bf98:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011bf9c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0011bfa0:;
    {
        cpu->r[3] = rd32(0x0011bfa8u + + 0x2bcu);
    }
L_0011bfa4:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0011bfa8:;
    {
        cpu->r[14] = 0x0011bfacu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011bfac:;
    {
        goto L_0011b9ec;
    }
L_0011bfb0:;
    {
        cpu->r[9] = rd32(0x0011bfb8u + + 0x2b0u);
    }
L_0011bfb4:;
    {
        cpu->r[10] = rd32(0x0011bfbcu + + 0x2b0u);
    }
L_0011bfb8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0011bfbc:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_0011bfc0:;
    {
        cpu->r[14] = 0x0011bfc4u; fn_00096ba4(cpu);
    }
L_0011bfc4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xa10u);
    }
L_0011bfc8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0011bfcc:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0011bfd0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011bec8;
        }
    }
L_0011bfd4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0011bfd8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000005u, 1, 1);
    }
L_0011bfdc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011bfb8;
        }
    }
L_0011bfe0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0011bfe4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011bb00;
        }
    }
L_0011bfe8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0011bfec:;
    {
        cpu->r[0] = 0x00000617u;
    }
L_0011bff0:;
    {
        cpu->r[14] = 0x0011bff4u; fn_000aeb58(cpu);
    }
L_0011bff4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0011bff8:;
    {
        cpu->r[3] = rd32(0x0011c000u + + 0x270u);
    }
L_0011bffc:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_0011c000:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0011c004:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[4]);
    }
L_0011c008:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0011c00c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0011c010:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011c014:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011c018:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_0011c01c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_0011c020:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0011c024:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0011c028:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011c02c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011c030:;
    {
        cpu->r[14] = 0x0011c034u; fn_000ad19c(cpu);
    }
L_0011c034:;
    {
        goto L_0011bf64;
    }
L_0011c038:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011c03c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xb7cu);
    }
L_0011c040:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011c044:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011bf64;
        }
    }
L_0011c048:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x000000b0u, 0, 0);
    }
L_0011c04c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011c050:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[4]);
    }
L_0011c054:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0011c058:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x20u);
    }
L_0011c05c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], 0x00000072u, 0, 0);
    }
L_0011c060:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_0011c064:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xb0u);
    }
L_0011c068:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0011c06c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0011c070:;
    {
        cpu->r[2] = 0x000000ebu;
    }
L_0011c074:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0011c078:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0011c07c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0011c080:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_0011c084:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_0011c088:;
    {
        cpu->r[14] = 0x0011c08cu; fn_000a8a2c(cpu);
    }
L_0011c08c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xb0u);
    }
L_0011c090:;
    {
        cpu->r[1] = 0x000000ebu;
    }
L_0011c094:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xb8u);
    }
L_0011c098:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xb0u);
    }
L_0011c09c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_0011c0a0:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0011c0a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[6], 0, 0);
    }
L_0011c0a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0011c0ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0011c0b0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000005u, 0, 0);
    }
L_0011c0b4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000032u, 0, 0);
        }
    }
L_0011c0b8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[8] = rd32(cpu->r[13] + + 0x18u);
        }
    }
L_0011c0bc:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_0011c0c0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0011c0c4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[6], 0, 0);
    }
L_0011c0c8:;
    {
        cpu->r[14] = 0x0011c0ccu; fn_000ad8a0(cpu);
    }
L_0011c0cc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xb7cu);
    }
L_0011c0d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0011c0d4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011c064;
        }
    }
L_0011c0d8:;
    {
        goto L_0011bf64;
    }
L_0011c0dc:;
    {
        cpu->r[3] = (~0x00000004u);
    }
L_0011c0e0:;
    {
        uint32_t v = cpu->r[4] & cpu->r[3]; cpu->r[4] = v;
    }
L_0011c0e4:;
    {
        goto L_0011be18;
    }
L_0011c0e8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011c0ec:;
    {
        cpu->r[14] = 0x0011c0f0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011c0f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011c0f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ba30;
        }
    }
L_0011c0f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011c0fc:;
    {
        cpu->r[14] = 0x0011c100u; fn_0018aa20(cpu);
    }
L_0011c100:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011c104:;
    {
        cpu->r[14] = 0x0011c108u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011c108:;
    {
        cpu->r[3] = rd32(0x0011c110u + + 0x150u);
    }
L_0011c10c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011c110:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0011c114:;
    {
        cpu->r[3] = rd32(0x0011c11cu + + 0x148u);
    }
L_0011c118:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0011c11c:;
    {
        cpu->r[14] = 0x0011c120u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011c120:;
    {
        goto L_0011ba30;
    }
L_0011c124:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011c128:;
    {
        cpu->r[14] = 0x0011c12cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011c12c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011c130:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ba64;
        }
    }
L_0011c134:;
    {
        cpu->r[10] = rd32(cpu->r[8] + cpu->r[4]);
    }
L_0011c138:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011c13c:;
    {
        cpu->r[14] = 0x0011c140u; fn_0018aa20(cpu);
    }
L_0011c140:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011c144:;
    {
        cpu->r[14] = 0x0011c148u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011c148:;
    {
        cpu->r[3] = rd32(0x0011c150u + + 0x110u);
    }
L_0011c14c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011c150:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0011c154:;
    {
        cpu->r[3] = rd32(0x0011c15cu + + 0x108u);
    }
L_0011c158:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0011c15c:;
    {
        cpu->r[14] = 0x0011c160u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011c160:;
    {
        goto L_0011ba64;
    }
L_0011c164:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xab0u);
    }
L_0011c168:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011c16c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_0011c170:;
    {
        goto L_0011bae0;
    }
L_0011c174:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011c178:;
    {
        cpu->r[0] = 0x00000618u;
    }
L_0011c17c:;
    {
        cpu->r[14] = 0x0011c180u; fn_000aeb58(cpu);
    }
L_0011c180:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0011c184:;
    {
        cpu->r[2] = 0x00005556u;
    }
L_0011c188:;
    {
        cpu->r[3] = 0x000000a1u;
    }
L_0011c18c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x5555u << 16);
    }
L_0011c190:;
    {
        cpu->r[12] = rd32(cpu->r[8] + cpu->r[14]);
    }
L_0011c194:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011c198:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011c19c:;
    {
        goto L_0011bb40;
    }
L_0011c1a0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0011c1a4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0011c1a8:;
    {
        cpu->r[14] = 0x0011c1acu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011c1ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011c1b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011bed8;
        }
    }
L_0011c1b4:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_0011c1b8:;
    {
        cpu->r[14] = 0x0011c1bcu; fn_00094228(cpu);
    }
L_0011c1bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0011c1c0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0011c1c4:;
    {
        cpu->r[14] = 0x0011c1c8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011c1c8:;
    {
        goto L_0011bed8;
    }
L_0011c1cc:;
    {
        cpu->r[1] = rd32(0x0011c1d4u + + 0xa0u);
    }
L_0011c1d0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0011c1d4:;
    {
        cpu->r[12] = rd32(0x0011c1dcu + + 0x9cu);
    }
L_0011c1d8:;
    {
        cpu->r[14] = 0x0000040bu;
    }
L_0011c1dc:;
    {
        cpu->r[2] = rd32(0x0011c1e4u + + 0x98u);
    }
L_0011c1e0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011c1e8u, cpu->r[1], 0, 0);
    }
L_0011c1e4:;
    {
        cpu->r[3] = rd32(0x0011c1ecu + + 0x94u);
    }
L_0011c1e8:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011c1f0u, cpu->r[12], 0, 0);
    }
L_0011c1ec:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011c1f4u, cpu->r[2], 0, 0);
    }
L_0011c1f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000003cu, 0, 0);
    }
L_0011c1f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011c1fcu, cpu->r[3], 0, 0);
    }
L_0011c1f8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0011c1fc:;
    {
        cpu->r[14] = 0x0011c200u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0011c200:;
    {
        goto L_0011ba88;
    }
L_0011c204:;
    {
        cpu->r[1] = rd32(0x0011c20cu + + 0x78u);
    }
L_0011c208:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0011c20c:;
    {
        cpu->r[12] = rd32(0x0011c214u + + 0x74u);
    }
L_0011c210:;
    {
        cpu->r[14] = 0x00000407u;
    }
L_0011c214:;
    {
        cpu->r[2] = rd32(0x0011c21cu + + 0x70u);
    }
L_0011c218:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011c220u, cpu->r[1], 0, 0);
    }
L_0011c21c:;
    {
        cpu->r[3] = rd32(0x0011c224u + + 0x6cu);
    }
L_0011c220:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011c228u, cpu->r[12], 0, 0);
    }
L_0011c224:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011c22cu, cpu->r[2], 0, 0);
    }
L_0011c228:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000003cu, 0, 0);
    }
L_0011c22c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011c234u, cpu->r[3], 0, 0);
    }
L_0011c230:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0011c234:;
    {
        cpu->r[14] = 0x0011c238u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0011c238:;
    {
        goto L_0011ba54;
    }
}

/* _ZN14GS_RaceSummary6RenderEv @ 0011c294 (arm) */
void fn_0011c294(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011c294:;
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
L_0011c298:;
    {
        cpu->r[5] = rd32(0x0011c2a0u + + 0xd2cu);
    }
L_0011c29c:;
    {
        cpu->r[9] = rd32(0x0011c2a4u + + 0xd2cu);
    }
L_0011c2a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000500u, 1, 0);
    }
L_0011c2a4:;
    {
        cpu->r[5] = add_flags(cpu, 0x0011c2acu, cpu->r[5], 0, 0);
    }
L_0011c2a8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x958u);
    }
L_0011c2ac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_0011c2b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011c2b4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011c2b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0011c2bc:;
    {
        wr32(cpu->r[0] + + 0x958u, cpu->r[3]);
    }
L_0011c2c0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0011c2c4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011c2c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011cae4;
        }
    }
L_0011c2cc:;
    {
        cpu->r[10] = rd32(0x0011c2d4u + + 0xd00u);
    }
L_0011c2d0:;
    {
        cpu->r[1] = rd32(0x0011c2d8u + + 0xd00u);
    }
L_0011c2d4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0011c2d8:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0011c2dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0011c2e0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0011c2e4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0011c2e8:;
    {
        cpu->r[14] = 0x0011c2ecu; fn_00096a08(cpu);
    }
L_0011c2ec:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0011c2f0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011c2f4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011c2f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011c2fc:;
    {
        cpu->r[14] = 0x0011c300u; fn_0018aa44(cpu);
    }
L_0011c300:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011c304:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011c308:;
    {
        wr8(cpu->r[0] + + 0x50u, cpu->r[3]);
    }
L_0011c30c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0011c310:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_0011c314:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011c318:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011cbfc;
        }
    }
L_0011c31c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0011c320:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_0011c324:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0011c328:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0011c32c:;
    {
        cpu->r[14] = 0x0011c330u; fn_0018aa44(cpu);
    }
L_0011c330:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0011c334:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0011c338:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0011c33c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0011c340:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0011c344:;
    {
        cpu->r[14] = 0x0011c348u; fn_000ad8a0(cpu);
    }
L_0011c348:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0011c34c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0011c350:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011c37c;
        }
    }
L_0011c354:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0011c358:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0011c35c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011c360:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011c364:;
    {
        cpu->r[14] = 0x0011c36cu;
    }
L_0011c368:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0011c36cu)) return;
    }
L_0011c36c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0011c370:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0011c374:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0011c378:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011c354;
        }
    }
L_0011c37c:;
    {
        cpu->r[3] = rd32(0x0011c384u + + 0xc58u);
    }
L_0011c380:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0011c384:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_0011c388:;
    {
        cpu->r[1] = 0x0000001du;
    }
L_0011c38c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0011c390:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0011c394:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011c398:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011c39c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0011c3a0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_0011c3a4:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0011c3a8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0011c3ac:;
    {
        cpu->r[14] = 0x0011c3b0u; fn_000ad8a0(cpu);
    }
L_0011c3b0:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0011c3b4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_0011c3b8:;
    {
        cpu->r[1] = 0x000000beu;
    }
L_0011c3bc:;
    {
        cpu->r[3] = 0x0000002au;
    }
L_0011c3c0:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0011c3c4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0011c3c8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0011c3cc:;
    {
        cpu->r[14] = 0x0011c3d0u; fn_000ad8a0(cpu);
    }
L_0011c3d0:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0011c3d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_0011c3d8:;
    {
        cpu->r[1] = 0x000000bfu;
    }
L_0011c3dc:;
    {
        cpu->r[3] = 0x0000008bu;
    }
L_0011c3e0:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0011c3e4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0011c3e8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0011c3ec:;
    {
        cpu->r[14] = 0x0011c3f0u; fn_000ad8a0(cpu);
    }
L_0011c3f0:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0011c3f4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_0011c3f8:;
    {
        cpu->r[3] = 0x000001a7u;
    }
L_0011c3fc:;
    {
        cpu->r[1] = 0x000000bdu;
    }
L_0011c400:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0011c404:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0011c408:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0011c40c:;
    {
        cpu->r[14] = 0x0011c410u; fn_000ad8a0(cpu);
    }
L_0011c410:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011c414:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0011c418:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011c41c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011cbbc;
        }
    }
L_0011c420:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0011c424:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011c428:;
    {
        cpu->r[14] = 0x0011c42cu; fn_00096a08(cpu);
    }
L_0011c42c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011c430:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011c434:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0011c438:;
    {
        cpu->r[14] = 0x0011c43cu; fn_0018aa44(cpu);
    }
L_0011c43c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011c440:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011cf24;
        }
    }
L_0011c444:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0011c448:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0011c44c:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0011c450:;
    {
        cpu->r[14] = 0x0011c454u; fn_00097d9c(cpu);
    }
L_0011c454:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011c458:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011c61c;
        }
    }
L_0011c45c:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0011c460:;
    {
        cpu->r[14] = 0x0011c464u; fn_00097ce0(cpu);
    }
L_0011c464:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011c468:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0011c46c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011c470:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0011c474:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ccfc;
        }
    }
L_0011c478:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0011c47c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011c480:;
    {
        cpu->r[1] = 0x00000040u;
    }
L_0011c484:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011c488:;
    {
        cpu->r[14] = 0x0011c48cu; fn_0018aa44(cpu);
    }
L_0011c48c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000004f0u, 0, 0);
    }
L_0011c490:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000004f0u, 0, 0);
    }
L_0011c494:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0011c498:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0011c49c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_0011c4a0:;
    {
        cpu->r[14] = 0x0011c4a4u; fn_000a8d10(cpu);
    }
L_0011c4a4:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011c4a8:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0011c4ac:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011c4b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ccc0;
        }
    }
L_0011c4b4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011c4b8:;
    {
        cpu->r[1] = 0x00000040u;
    }
L_0011c4bc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0011c4c0:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0011c4c4:;
    {
        cpu->r[14] = 0x0011c4c8u; fn_0018aa44(cpu);
    }
L_0011c4c8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011c4cc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4fcu);
    }
L_0011c4d0:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0011c4d4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4f8u);
    }
L_0011c4d8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x000004e0u, 0, 0);
    }
L_0011c4dc:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0011c4e0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000000cu, 0, 0);
    }
L_0011c4e4:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_0011c4e8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0011c4ec:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_0011c4f0:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000051u, cpu->r[3], 1, 0);
    }
L_0011c4f4:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0011c4f8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0011c4fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_0011c500:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 1u, &shc), cpu->r[12], 1, 0);
    }
L_0011c504:;
    {
        cpu->r[14] = 0x0011c508u; fn_000ad8a0(cpu);
    }
L_0011c508:;
    {
        cpu->r[12] = rd32(cpu->r[8]);
    }
L_0011c50c:;
    {
        cpu->r[2] = 0x00000011u;
    }
L_0011c510:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0011c514:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011c518:;
    {
        cpu->r[1] = 0x0000058au;
    }
L_0011c51c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_0011c520:;
    {
        cpu->r[3] = 0x00000051u;
    }
L_0011c524:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0011c528:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0011c52c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000009du, 1, 0);
    }
L_0011c530:;
    {
        cpu->r[14] = 0x0011c534u; fn_000ad200(cpu);
    }
L_0011c534:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0011c538:;
    {
        cpu->r[2] = rd32(0x0011c540u + + 0xaa0u);
    }
L_0011c53c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011c540:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0011c544:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0011c548:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011c550u, cpu->r[2], 0, 0);
    }
L_0011c54c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000058u, 0, 0);
    }
L_0011c550:;
    {
        cpu->r[14] = rd32(cpu->r[1]);
    }
L_0011c554:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_0011c558:;
    {
        cpu->r[12] = rd32(cpu->r[14] + cpu->r[1]);
    }
L_0011c55c:;
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
L_0011c560:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0011c564:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0011c568:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0011c56c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0011c570:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0011c574:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x4u);
    }
L_0011c578:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_0011c57c:;
    {
        cpu->r[8] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0011c580:;
    {
        uint32_t base = cpu->r[11];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0011c584:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_0011c588:;
    {
        cpu->r[14] = 0x0011c58cu; fn_000962d0(cpu);
    }
L_0011c58c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_0011c590:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011cd3c;
        }
    }
L_0011c594:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_0011c598:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000003u, 1, 1);
    }
L_0011c59c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000030u, 0, 0);
    }
L_0011c5a0:;
    {
        wr16(cpu->r[12] + + 0xaeu, cpu->r[6]);
    }
L_0011c5a4:;
    {
        wr16(cpu->r[12] + + 0xacu, cpu->r[3]);
    }
L_0011c5a8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011cc9c;
        }
    }
L_0011c5ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000500u, 0, 0);
    }
L_0011c5b0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_0011c5b4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0011c5b8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x000004a0u, 0, 0);
    }
L_0011c5bc:;
    {
        cpu->r[0] = rd32(cpu->r[8] + - 0x18u);
    }
L_0011c5c0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_0011c5c4:;
    {
        cpu->r[14] = 0x0011c5c8u; fn_000aeb58(cpu);
    }
L_0011c5c8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011c5cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011c5d0:;
    {
        cpu->r[14] = 0x0011c5d4u; fn_000ae228(cpu);
    }
L_0011c5d4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011c5d8:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_0011c5dc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011c5e0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0011c5e4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0011c5e8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011c5ec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011c5f0:;
    {
        cpu->r[3] = 0x00000051u;
    }
L_0011c5f4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0011c5f8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0011c5fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0011c600:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_0011c604:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0011c608:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_0011c60c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_0011c610:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000043u, 1, 0);
    }
L_0011c614:;
    {
        cpu->r[14] = 0x0011c618u; fn_000ad19c(cpu);
    }
L_0011c618:;
    {
        goto L_0011c64c;
    }
L_0011c61c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011c620:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011c624:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0011c628:;
    {
        cpu->r[3] = 0x00000051u;
    }
L_0011c62c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0011c630:;
    {
        cpu->r[1] = 0x0000058bu;
    }
L_0011c634:;
    {
        cpu->r[2] = rd32(cpu->r[12]);
    }
L_0011c638:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_0011c63c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011c640:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_0011c644:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0011c648:;
    {
        cpu->r[14] = 0x0011c64cu; fn_000ad200(cpu);
    }
L_0011c64c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x95cu);
    }
L_0011c650:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0011c654:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_0011c66c;
        case 1: goto L_0011cb68;
        case 2: goto L_0011cb5c;
        case 3: goto L_0011cb50;
        default: guest_unimplemented(cpu, 0x0011c654u); return; }
        }
    }
L_0011c658:;
    {
        goto L_0011c674;
    }
L_0011c66c:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_0011c670:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_0011c674:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x48u);
    }
L_0011c678:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0011c67c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000950u, 0, 0);
    }
L_0011c680:;
    {
        wr32(cpu->r[7] + + 0x48u, cpu->r[2]);
    }
L_0011c684:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011c688:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000022cu, 0, 0);
    }
L_0011c68c:;
    {
        wr32(cpu->r[7] + + 0x4cu, cpu->r[3]);
    }
L_0011c690:;
    {
        cpu->r[14] = 0x0011c694u; fn_0015d718(cpu);
    }
L_0011c694:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0011c698:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011c69c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011c6a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011c6a4:;
    {
        cpu->r[14] = 0x0011c6a8u; fn_000f38e8(cpu);
    }
L_0011c6a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011c6ac:;
    {
        cpu->r[0] = 0x0000058cu;
    }
L_0011c6b0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0011c6b4:;
    {
        cpu->r[14] = 0x0011c6b8u; fn_000aeb28(cpu);
    }
L_0011c6b8:;
    {
        cpu->r[1] = rd32(0x0011c6c0u + + 0x924u);
    }
L_0011c6bc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_0011c6c0:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0011c6c4:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011c6ccu, cpu->r[1], 0, 0);
    }
L_0011c6c8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0011c6cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011c6d0:;
    {
        cpu->r[14] = 0x0011c6d4u; fn_000ae830(cpu);
    }
L_0011c6d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0011c6d8:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x954u);
    }
L_0011c6dc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0011c6e0:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000003u, 1, 1);
    }
L_0011c6e4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[11] = 0x00000003u;
        }
    }
L_0011c6e8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000001u, 1, 0);
        }
    }
L_0011c6ec:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0011c6f0:;
    {
        cpu->r[14] = 0x0011c6f4u; fn_000962d0(cpu);
    }
L_0011c6f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_0011c6f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011cc58;
        }
    }
L_0011c6fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[11], 0x0000002bu, 0, 0);
    }
L_0011c700:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011c704:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x954u);
    }
L_0011c708:;
    {
        cpu->r[14] = 0x0011c70cu; fn_000aeb58(cpu);
    }
L_0011c70c:;
    {
        cpu->r[1] = rd32(0x0011c714u + + 0x8d4u);
    }
L_0011c710:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0011c714:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011c71cu, cpu->r[1], 0, 0);
    }
L_0011c718:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0011c71c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011c720:;
    {
        cpu->r[14] = 0x0011c724u; fn_000ae830(cpu);
    }
L_0011c724:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011c728:;
    {
        cpu->r[0] = 0x00000587u;
    }
L_0011c72c:;
    {
        cpu->r[14] = 0x0011c730u; fn_000aeb58(cpu);
    }
L_0011c730:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0011c734:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011c738:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011c73c:;
    {
        cpu->r[14] = 0x0011c740u; fn_000ae740(cpu);
    }
L_0011c740:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011c744:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0011c748:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_0011c74c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0011c750:;
    {
        cpu->r[1] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_0011c754:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0011c758:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0011c75c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0011c760:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0011c764:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0011c768:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0011c76c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_0011c770:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_0011c774:;
    {
        cpu->r[14] = 0x0011c778u; fn_0015d718(cpu);
    }
L_0011c778:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0011c77c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011c780:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011c784:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0011c788:;
    {
        cpu->r[14] = 0x0011c78cu; fn_000f38e8(cpu);
    }
L_0011c78c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011c790:;
    {
        cpu->r[0] = 0x0000048bu;
    }
L_0011c794:;
    {
        cpu->r[14] = 0x0011c798u; fn_000aeb28(cpu);
    }
L_0011c798:;
    {
        cpu->r[1] = rd32(0x0011c7a0u + + 0x84cu);
    }
L_0011c79c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0011c7a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011c7a8u, cpu->r[1], 0, 0);
    }
L_0011c7a4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0011c7a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011c7ac:;
    {
        cpu->r[14] = 0x0011c7b0u; fn_000ae830(cpu);
    }
L_0011c7b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011c7b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x958u);
    }
L_0011c7b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000005b0u, 0, 0);
    }
L_0011c7bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_0011c7c0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_0011c7c4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + cpu->r[3]);
    }
L_0011c7c8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0011c7cc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0011c7dc;
        }
    }
L_0011c7d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x95cu);
    }
L_0011c7d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0011c7d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011cd80;
        }
    }
L_0011c7dc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x960u);
    }
L_0011c7e0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000420u, 0, 0);
    }
L_0011c7e4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011c7e8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000cu, 0, 0);
    }
L_0011c7ec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011c7f0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0011c7f4:;
    {
        cpu->r[14] = 0x0011c7f8u; fn_000f3d88(cpu);
    }
L_0011c7f8:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011c7fc:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_0011c800:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011c804:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011cb74;
        }
    }
L_0011c808:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_0011c80c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011c810:;
    {
        cpu->r[14] = 0x0011c814u; fn_00096a08(cpu);
    }
L_0011c814:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011c818:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011c81c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0011c820:;
    {
        cpu->r[14] = 0x0011c824u; fn_0018aa44(cpu);
    }
L_0011c824:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011c828:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011cf5c;
        }
    }
L_0011c82c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011c830:;
    {
        cpu->r[0] = 0x00000621u;
    }
L_0011c834:;
    {
        cpu->r[14] = 0x0011c838u; fn_000aeb28(cpu);
    }
L_0011c838:;
    {
        cpu->r[3] = rd32(0x0011c840u + + 0x7b0u);
    }
L_0011c83c:;
    {
        cpu->r[1] = rd32(0x0011c844u + + 0x7b0u);
    }
L_0011c840:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0011c844:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011c84cu, cpu->r[1], 0, 0);
    }
L_0011c848:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0011c84c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0011c850:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011c854:;
    {
        cpu->r[14] = 0x0011c858u; fn_000ae830(cpu);
    }
L_0011c858:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011c85c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0011c860:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0011c864:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_0011c868:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0011c86c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0011c870:;
    {
        cpu->r[12] = rd32(0x0011c878u + + 0x780u);
    }
L_0011c874:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0011c878:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011c87c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_0011c880:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_0011c884:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000055u, 1, 0);
    }
L_0011c888:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0011c88c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011c890:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0011c894:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0011c898:;
    {
        cpu->r[14] = 0x0011c89cu; fn_000ad19c(cpu);
    }
L_0011c89c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0011c8a0:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0011c8a4:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_0011c8a8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011c8ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011cc38;
        }
    }
L_0011c8b0:;
    {
        cpu->r[12] = rd32(0x0011c8b8u + + 0x744u);
    }
L_0011c8b4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0011c8b8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_0011c8bc:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x960u);
    }
L_0011c8c0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x5cu);
    }
L_0011c8c4:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 0);
    }
L_0011c8c8:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0011c8cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011c8f0;
        }
    }
L_0011c8d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011c8d4:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x958u);
    }
L_0011c8d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000005b0u, 0, 0);
    }
L_0011c8dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_0011c8e0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_0011c8e4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + cpu->r[3]);
    }
L_0011c8e8:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 1);
    }
L_0011c8ec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0011cb28;
        }
    }
L_0011c8f0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0011c8f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ce10;
        }
    }
L_0011c8f8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0011c8fc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011c900:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011c904:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011c908:;
    {
        cpu->r[14] = 0x0011c90cu; fn_000f3d88(cpu);
    }
L_0011c90c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011c910:;
    {
        cpu->r[0] = 0x00000673u;
    }
L_0011c914:;
    {
        cpu->r[14] = 0x0011c918u; fn_000aeb28(cpu);
    }
L_0011c918:;
    {
        cpu->r[1] = rd32(0x0011c920u + + 0x6e0u);
    }
L_0011c91c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0011c920:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011c928u, cpu->r[1], 0, 0);
    }
L_0011c924:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0011c928:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011c92c:;
    {
        cpu->r[14] = 0x0011c930u; fn_000ae830(cpu);
    }
L_0011c930:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011c934:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0011c938:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011c93c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0011c940:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0011c944:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011c948:;
    {
        cpu->r[3] = 0x00000010u;
    }
L_0011c94c:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_0011c950:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011c954:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_0011c958:;
    {
        cpu->r[12] = rd32(cpu->r[11]);
    }
L_0011c95c:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_0011c960:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_0011c964:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], 0x00000020u, 1, 0);
    }
L_0011c968:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0011c96c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x000000cfu, 1, 0);
    }
L_0011c970:;
    {
        cpu->r[14] = 0x0011c974u; fn_000ad19c(cpu);
    }
L_0011c974:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011c978:;
    {
        cpu->r[0] = 0x00000039u;
    }
L_0011c97c:;
    {
        cpu->r[14] = 0x0011c980u; fn_000aeb58(cpu);
    }
L_0011c980:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0011c984:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011c988:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0011c98c:;
    {
        cpu->r[14] = 0x0011c990u; fn_000a04f8(cpu);
    }
L_0011c990:;
    {
        cpu->r[1] = rd32(0x0011c998u + + 0x66cu);
    }
L_0011c994:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011c998:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011c9a0u, cpu->r[1], 0, 0);
    }
L_0011c99c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0011c9a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011c9a4:;
    {
        cpu->r[14] = 0x0011c9a8u; fn_000ae830(cpu);
    }
L_0011c9a8:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_0011c9ac:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_0011c9b0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0011c9b4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0011c9b8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0011c9bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0011c9c0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 0);
    }
L_0011c9c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0011c9c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_0011c9cc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_0011c9d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011c9d4:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_0011c9d8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011c9dc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_0011c9e0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000001bu, 1, 0);
    }
L_0011c9e4:;
    {
        cpu->r[14] = 0x0011c9e8u; fn_000ad19c(cpu);
    }
L_0011c9e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011c9ec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x958u);
    }
L_0011c9f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000005b0u, 0, 0);
    }
L_0011c9f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_0011c9f8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_0011c9fc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + cpu->r[3]);
    }
L_0011ca00:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0011ca04:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0011ca38;
        }
    }
L_0011ca08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x95cu);
    }
L_0011ca0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0011ca10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ca38;
        }
    }
L_0011ca14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0011ca18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ca38;
        }
    }
L_0011ca1c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x48u);
    }
L_0011ca20:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0011ca24:;
    {
        wr32(cpu->r[7] + + 0x48u, cpu->r[2]);
    }
L_0011ca28:;
    {
        wr32(cpu->r[7] + + 0x4cu, cpu->r[3]);
    }
L_0011ca2c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000104u, 0, 0);
    }
L_0011ca30:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_0011ca34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011ca38u)) return;
    }
L_0011ca38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0011ca3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011ca40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011ca1c;
        }
    }
L_0011ca44:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0011ca48:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0011ca4c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011ca50:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4d8u);
    }
L_0011ca54:;
    {
        uint32_t v = cpu->r[3] & 0x0000000fu; cpu->r[3] = v;
    }
L_0011ca58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_0011ca5c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011ca1c;
        }
    }
L_0011ca60:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011ca64:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0011ca68:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011ca6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011cec8;
        }
    }
L_0011ca70:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011ca74:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_0011ca78:;
    {
        cpu->r[14] = 0x0011ca7cu; fn_00096a08(cpu);
    }
L_0011ca7c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011ca80:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011ca84:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0011ca88:;
    {
        cpu->r[14] = 0x0011ca8cu; fn_0018aa44(cpu);
    }
L_0011ca8c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011ca90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011cf94;
        }
    }
L_0011ca94:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011ca98:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_0011ca9c:;
    {
        cpu->r[14] = 0x0011caa0u; fn_000aeb58(cpu);
    }
L_0011caa0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011caa4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0011caa8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011caac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_0011cab0:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_0011cab4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011cab8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0011cabc:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0011cac0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011cac4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0011cac8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_0011cacc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000078u, 1, 0);
    }
L_0011cad0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0011cad4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011cad8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011cadc:;
    {
        cpu->r[14] = 0x0011cae0u; fn_000ad19c(cpu);
    }
L_0011cae0:;
    {
        goto L_0011ca1c;
    }
L_0011cae4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011cae8:;
    {
        cpu->r[14] = 0x0011caecu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011caec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011caf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011c2cc;
        }
    }
L_0011caf4:;
    {
        cpu->r[10] = rd32(0x0011cafcu + + 0x4d8u);
    }
L_0011caf8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0011cafc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011cb00:;
    {
        cpu->r[14] = 0x0011cb04u; fn_0018aa20(cpu);
    }
L_0011cb04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011cb08:;
    {
        cpu->r[14] = 0x0011cb0cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011cb0c:;
    {
        cpu->r[3] = rd32(0x0011cb14u + + 0x4f4u);
    }
L_0011cb10:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011cb14:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011cb18:;
    {
        cpu->r[3] = rd32(0x0011cb20u + + 0x4ecu);
    }
L_0011cb1c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011cb20:;
    {
        cpu->r[14] = 0x0011cb24u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011cb24:;
    {
        goto L_0011c2d0;
    }
L_0011cb28:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x95cu);
    }
L_0011cb2c:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000002u, 1, 1);
    }
L_0011cb30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011c8f0;
        }
    }
L_0011cb34:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0011cb38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011cd98;
        }
    }
L_0011cb3c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0011cb40:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0011cb44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011cb48:;
    {
        cpu->r[14] = 0x0011cb4cu; fn_0011a488(cpu);
    }
L_0011cb4c:;
    {
        goto L_0011c8f8;
    }
L_0011cb50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011cb54:;
    {
        cpu->r[14] = 0x0011cb58u; fn_0011b9c0(cpu);
    }
L_0011cb58:;
    {
        goto L_0011c674;
    }
L_0011cb5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011cb60:;
    {
        cpu->r[14] = 0x0011cb64u; fn_0011b134(cpu);
    }
L_0011cb64:;
    {
        goto L_0011c674;
    }
L_0011cb68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011cb6c:;
    {
        cpu->r[14] = 0x0011cb70u; fn_0011a548(cpu);
    }
L_0011cb70:;
    {
        goto L_0011c674;
    }
L_0011cb74:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0011cb78:;
    {
        cpu->r[14] = 0x0011cb7cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011cb7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011cb80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011c808;
        }
    }
L_0011cb84:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0011cb88:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0011cb8c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0011cb90:;
    {
        cpu->r[14] = 0x0011cb94u; fn_0018aa20(cpu);
    }
L_0011cb94:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0011cb98:;
    {
        cpu->r[14] = 0x0011cb9cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011cb9c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0011cba0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0011cba4:;
    {
        cpu->r[3] = rd32(0x0011cbacu + + 0x45cu);
    }
L_0011cba8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011cbac:;
    {
        cpu->r[3] = rd32(0x0011cbb4u + + 0x458u);
    }
L_0011cbb0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011cbb4:;
    {
        cpu->r[14] = 0x0011cbb8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011cbb8:;
    {
        goto L_0011c808;
    }
L_0011cbbc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011cbc0:;
    {
        cpu->r[14] = 0x0011cbc4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011cbc4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011cbc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011c420;
        }
    }
L_0011cbcc:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0011cbd0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011cbd4:;
    {
        cpu->r[14] = 0x0011cbd8u; fn_0018aa20(cpu);
    }
L_0011cbd8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011cbdc:;
    {
        cpu->r[14] = 0x0011cbe0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011cbe0:;
    {
        cpu->r[3] = rd32(0x0011cbe8u + + 0x420u);
    }
L_0011cbe4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011cbe8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011cbec:;
    {
        cpu->r[3] = rd32(0x0011cbf4u + + 0x418u);
    }
L_0011cbf0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011cbf4:;
    {
        cpu->r[14] = 0x0011cbf8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011cbf8:;
    {
        goto L_0011c420;
    }
L_0011cbfc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011cc00:;
    {
        cpu->r[14] = 0x0011cc04u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011cc04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011cc08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011c31c;
        }
    }
L_0011cc0c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011cc10:;
    {
        cpu->r[14] = 0x0011cc14u; fn_0018aa20(cpu);
    }
L_0011cc14:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011cc18:;
    {
        cpu->r[14] = 0x0011cc1cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011cc1c:;
    {
        cpu->r[3] = rd32(0x0011cc24u + + 0x3e4u);
    }
L_0011cc20:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011cc24:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011cc28:;
    {
        cpu->r[3] = rd32(0x0011cc30u + + 0x3dcu);
    }
L_0011cc2c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011cc30:;
    {
        cpu->r[14] = 0x0011cc34u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011cc34:;
    {
        goto L_0011c31c;
    }
L_0011cc38:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0011cc3c:;
    {
        cpu->r[14] = 0x0011cc40u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011cc40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011cc44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011cea0;
        }
    }
L_0011cc48:;
    {
        cpu->r[1] = rd32(cpu->r[11]);
    }
L_0011cc4c:;
    {
        cpu->r[12] = rd32(0x0011cc54u + + 0x3a8u);
    }
L_0011cc50:;
    {
        uint32_t v = cpu->r[1] & 0x00000001u; cpu->r[1] = v;
    }
L_0011cc54:;
    {
        goto L_0011c8b8;
    }
L_0011cc58:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011cc5c:;
    {
        cpu->r[0] = 0x0000002bu;
    }
L_0011cc60:;
    {
        cpu->r[14] = 0x0011cc64u; fn_000aeb58(cpu);
    }
L_0011cc64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x954u);
    }
L_0011cc68:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011cc6c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0011cc70:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0011cc74:;
    {
        cpu->r[0] = 0x00000090u;
    }
L_0011cc78:;
    {
        cpu->r[14] = 0x0011cc7cu; fn_000aeb58(cpu);
    }
L_0011cc7c:;
    {
        cpu->r[1] = rd32(0x0011cc84u + + 0x38cu);
    }
L_0011cc80:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0011cc84:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0011cc88:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011cc90u, cpu->r[1], 0, 0);
    }
L_0011cc8c:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_0011cc90:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011cc94:;
    {
        cpu->r[14] = 0x0011cc98u; fn_000ae830(cpu);
    }
L_0011cc98:;
    {
        goto L_0011c724;
    }
L_0011cc9c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0011cca0:;
    {
        cpu->r[0] = 0x00000672u;
    }
L_0011cca4:;
    {
        cpu->r[14] = 0x0011cca8u; fn_000aeb58(cpu);
    }
L_0011cca8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x000004a0u, 0, 0);
    }
L_0011ccac:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_0011ccb0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011ccb4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011ccb8:;
    {
        cpu->r[14] = 0x0011ccbcu; fn_000ae228(cpu);
    }
L_0011ccbc:;
    {
        goto L_0011c5d4;
    }
L_0011ccc0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011ccc4:;
    {
        cpu->r[14] = 0x0011ccc8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011ccc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011cccc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011c4b4;
        }
    }
L_0011ccd0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011ccd4:;
    {
        cpu->r[14] = 0x0011ccd8u; fn_0018aa20(cpu);
    }
L_0011ccd8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011ccdc:;
    {
        cpu->r[14] = 0x0011cce0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011cce0:;
    {
        cpu->r[3] = rd32(0x0011cce8u + + 0x320u);
    }
L_0011cce4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011cce8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011ccec:;
    {
        cpu->r[3] = rd32(0x0011ccf4u + + 0x318u);
    }
L_0011ccf0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011ccf4:;
    {
        cpu->r[14] = 0x0011ccf8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011ccf8:;
    {
        goto L_0011c4b4;
    }
L_0011ccfc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011cd00:;
    {
        cpu->r[14] = 0x0011cd04u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011cd04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011cd08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011c478;
        }
    }
L_0011cd0c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0011cd10:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011cd14:;
    {
        cpu->r[14] = 0x0011cd18u; fn_0018aa20(cpu);
    }
L_0011cd18:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011cd1c:;
    {
        cpu->r[14] = 0x0011cd20u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011cd20:;
    {
        cpu->r[3] = rd32(0x0011cd28u + + 0x2e0u);
    }
L_0011cd24:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011cd28:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011cd2c:;
    {
        cpu->r[3] = rd32(0x0011cd34u + + 0x2d8u);
    }
L_0011cd30:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011cd34:;
    {
        cpu->r[14] = 0x0011cd38u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011cd38:;
    {
        goto L_0011c478;
    }
L_0011cd3c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0011cd40:;
    {
        cpu->r[0] = 0x00000672u;
    }
L_0011cd44:;
    {
        cpu->r[14] = 0x0011cd48u; fn_000aeb58(cpu);
    }
L_0011cd48:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0011cd4c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x000004a0u, 0, 0);
    }
L_0011cd50:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_0011cd54:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0011cd58:;
    {
        cpu->r[0] = 0x000006a6u;
    }
L_0011cd5c:;
    {
        cpu->r[14] = 0x0011cd60u; fn_000aeb58(cpu);
    }
L_0011cd60:;
    {
        cpu->r[1] = rd32(0x0011cd68u + + 0x2acu);
    }
L_0011cd64:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0011cd68:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0011cd6c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011cd74u, cpu->r[1], 0, 0);
    }
L_0011cd70:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_0011cd74:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011cd78:;
    {
        cpu->r[14] = 0x0011cd7cu; fn_000ae830(cpu);
    }
L_0011cd7c:;
    {
        goto L_0011c5d4;
    }
L_0011cd80:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011cd84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011cd88:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x960u);
    }
L_0011cd8c:;
    {
        cpu->r[14] = 0x0011cd90u; fn_0011a488(cpu);
    }
L_0011cd90:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011cd94:;
    {
        goto L_0011c7e0;
    }
L_0011cd98:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0011cd9c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0011cda0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0011cda4:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011cda8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0011cdac:;
    {
        cpu->r[14] = 0x0011cdb0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011cdb0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011cdb4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0011cdb8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011cdbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011cdd4;
        }
    }
L_0011cdc0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0011cdc4:;
    {
        cpu->r[14] = 0x0011cdc8u; fn_00094228(cpu);
    }
L_0011cdc8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0011cdcc:;
    {
        cpu->r[14] = 0x0011cdd0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011cdd0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0011cdd4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0011cdd8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_0011cddc:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x960u);
    }
L_0011cde0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0011cde4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x5cu);
    }
L_0011cde8:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0011cdec:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 0);
    }
L_0011cdf0:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011cdf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ce40;
        }
    }
L_0011cdf8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011cdfc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000005b0u, 0, 0);
    }
L_0011ce00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_0011ce04:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_0011ce08:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + cpu->r[3]);
    }
L_0011ce0c:;
    {
        goto L_0011cb3c;
    }
L_0011ce10:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0011ce14:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0011ce18:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0011ce1c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0011ce20:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_0011ce24:;
    {
        cpu->r[14] = 0x0011ce28u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011ce28:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0011ce2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011ce30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011cf08;
        }
    }
L_0011ce34:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_0011ce38:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x5cu);
    }
L_0011ce3c:;
    {
        goto L_0011c8f8;
    }
L_0011ce40:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0011ce44:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0011ce48:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0011ce4c:;
    {
        cpu->r[14] = 0x0011ce50u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011ce50:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0011ce54:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011ce58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011ce5c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa04u);
        }
    }
L_0011ce60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ce88;
        }
    }
L_0011ce64:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0011ce68:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0011ce6c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0011ce70:;
    {
        cpu->r[14] = 0x0011ce74u; fn_00094228(cpu);
    }
L_0011ce74:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0011ce78:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0011ce7c:;
    {
        cpu->r[14] = 0x0011ce80u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011ce80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011ce84:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011ce88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000005b0u, 0, 0);
    }
L_0011ce8c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x5cu);
    }
L_0011ce90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_0011ce94:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_0011ce98:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + cpu->r[3]);
    }
L_0011ce9c:;
    {
        goto L_0011cb3c;
    }
L_0011cea0:;
    {
        cpu->r[12] = rd32(0x0011cea8u + + 0x154u);
    }
L_0011cea4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_0011cea8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0011ceac:;
    {
        cpu->r[14] = 0x0011ceb0u; fn_00094228(cpu);
    }
L_0011ceb0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0011ceb4:;
    {
        cpu->r[14] = 0x0011ceb8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011ceb8:;
    {
        cpu->r[1] = rd32(cpu->r[11]);
    }
L_0011cebc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0011cec0:;
    {
        uint32_t v = cpu->r[1] & 0x00000001u; cpu->r[1] = v;
    }
L_0011cec4:;
    {
        goto L_0011c8b8;
    }
L_0011cec8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011cecc:;
    {
        cpu->r[14] = 0x0011ced0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011ced0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011ced4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ca70;
        }
    }
L_0011ced8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0011cedc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011cee0:;
    {
        cpu->r[14] = 0x0011cee4u; fn_0018aa20(cpu);
    }
L_0011cee4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011cee8:;
    {
        cpu->r[14] = 0x0011ceecu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011ceec:;
    {
        cpu->r[3] = rd32(0x0011cef4u + + 0x114u);
    }
L_0011cef0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011cef4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011cef8:;
    {
        cpu->r[3] = rd32(0x0011cf00u + + 0x10cu);
    }
L_0011cefc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011cf00:;
    {
        cpu->r[14] = 0x0011cf04u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011cf04:;
    {
        goto L_0011ca70;
    }
L_0011cf08:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_0011cf0c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0011cf10:;
    {
        cpu->r[14] = 0x0011cf14u; fn_00094228(cpu);
    }
L_0011cf14:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0011cf18:;
    {
        cpu->r[14] = 0x0011cf1cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011cf1c:;
    {
        cpu->r[0] = rd32(cpu->r[11] + + 0x5cu);
    }
L_0011cf20:;
    {
        goto L_0011c8f8;
    }
L_0011cf24:;
    {
        cpu->r[1] = rd32(0x0011cf2cu + + 0xecu);
    }
L_0011cf28:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0011cf2c:;
    {
        cpu->r[12] = rd32(0x0011cf34u + + 0xe8u);
    }
L_0011cf30:;
    {
        cpu->r[14] = 0x000000f8u;
    }
L_0011cf34:;
    {
        cpu->r[2] = rd32(0x0011cf3cu + + 0xe4u);
    }
L_0011cf38:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011cf40u, cpu->r[1], 0, 0);
    }
L_0011cf3c:;
    {
        cpu->r[3] = rd32(0x0011cf44u + + 0xe0u);
    }
L_0011cf40:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011cf48u, cpu->r[12], 0, 0);
    }
L_0011cf44:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011cf4cu, cpu->r[2], 0, 0);
    }
L_0011cf48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_0011cf4c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011cf54u, cpu->r[3], 0, 0);
    }
L_0011cf50:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0011cf54:;
    {
        cpu->r[14] = 0x0011cf58u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0011cf58:;
    {
        goto L_0011c444;
    }
L_0011cf5c:;
    {
        cpu->r[1] = rd32(0x0011cf64u + + 0xc4u);
    }
L_0011cf60:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0011cf64:;
    {
        cpu->r[12] = rd32(0x0011cf6cu + + 0xc0u);
    }
L_0011cf68:;
    {
        cpu->r[14] = 0x00000184u;
    }
L_0011cf6c:;
    {
        cpu->r[2] = rd32(0x0011cf74u + + 0xbcu);
    }
L_0011cf70:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011cf78u, cpu->r[1], 0, 0);
    }
L_0011cf74:;
    {
        cpu->r[3] = rd32(0x0011cf7cu + + 0xb8u);
    }
L_0011cf78:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011cf80u, cpu->r[12], 0, 0);
    }
L_0011cf7c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011cf84u, cpu->r[2], 0, 0);
    }
L_0011cf80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_0011cf84:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011cf8cu, cpu->r[3], 0, 0);
    }
L_0011cf88:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0011cf8c:;
    {
        cpu->r[14] = 0x0011cf90u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0011cf90:;
    {
        goto L_0011c82c;
    }
L_0011cf94:;
    {
        cpu->r[1] = rd32(0x0011cf9cu + + 0x9cu);
    }
L_0011cf98:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0011cf9c:;
    {
        cpu->r[12] = rd32(0x0011cfa4u + + 0x98u);
    }
L_0011cfa0:;
    {
        cpu->r[14] = 0x000001a1u;
    }
L_0011cfa4:;
    {
        cpu->r[2] = rd32(0x0011cfacu + + 0x94u);
    }
L_0011cfa8:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011cfb0u, cpu->r[1], 0, 0);
    }
L_0011cfac:;
    {
        cpu->r[3] = rd32(0x0011cfb4u + + 0x90u);
    }
L_0011cfb0:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011cfb8u, cpu->r[12], 0, 0);
    }
L_0011cfb4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011cfbcu, cpu->r[2], 0, 0);
    }
L_0011cfb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_0011cfbc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011cfc4u, cpu->r[3], 0, 0);
    }
L_0011cfc0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0011cfc4:;
    {
        cpu->r[14] = 0x0011cfc8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0011cfc8:;
    {
        goto L_0011ca94;
    }
}

/* _ZN14GS_RaceSummary12RewardPlayerEv @ 0011d048 (arm) */
void fn_0011d048(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011d048:;
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
L_0011d04c:;
    {
        cpu->r[5] = rd32(0x0011d054u + + 0xd50u);
    }
L_0011d050:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011d054:;
    {
        cpu->r[0] = rd32(0x0011d05cu + + 0xd4cu);
    }
L_0011d058:;
    {
        cpu->r[5] = add_flags(cpu, 0x0011d060u, cpu->r[5], 0, 0);
    }
L_0011d05c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_0011d060:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_0011d064:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_0011d068:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_0011d06c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0011d070:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d620;
        }
    }
L_0011d074:;
    {
        cpu->r[11] = rd32(0x0011d07cu + + 0xd30u);
    }
L_0011d078:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0011d07c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0011d080:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011d084:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d0a8;
        }
    }
L_0011d088:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011d08c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0011d090:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0011d094:;
    {
        cpu->r[14] = 0x0011d098u; fn_00097d9c(cpu);
    }
L_0011d098:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011d09c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011d0e4;
        }
    }
L_0011d0a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_0011d0a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011d0a8u)) return;
    }
L_0011d0a8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011d0ac:;
    {
        cpu->r[14] = 0x0011d0b0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011d0b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011d0b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d088;
        }
    }
L_0011d0b8:;
    {
        cpu->r[9] = rd32(0x0011d0c0u + + 0xcf0u);
    }
L_0011d0bc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011d0c0:;
    {
        cpu->r[14] = 0x0011d0c4u; fn_00094228(cpu);
    }
L_0011d0c4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011d0c8:;
    {
        cpu->r[14] = 0x0011d0ccu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011d0cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011d0d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0011d0d4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0011d0d8:;
    {
        cpu->r[14] = 0x0011d0dcu; fn_00097d9c(cpu);
    }
L_0011d0dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011d0e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d0a0;
        }
    }
L_0011d0e4:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0011d0e8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0011d0ec:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011d0f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d368;
        }
    }
L_0011d0f4:;
    {
        cpu->r[9] = rd32(0x0011d0fcu + + 0xcb4u);
    }
L_0011d0f8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0011d0fc:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011d100:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0011d104:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x58u);
    }
L_0011d108:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011d10c:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[3]);
    }
L_0011d110:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d390;
        }
    }
L_0011d114:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011d118:;
    {
        cpu->r[2] = 0x00001c9cu;
    }
L_0011d11c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_0011d120:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x5cu);
    }
L_0011d124:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0011d128:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[3]);
    }
L_0011d12c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011db9c;
        }
    }
L_0011d130:;
    {
        cpu->r[3] = 0x00008304u;
    }
L_0011d134:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_0011d138:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011d13c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011d30c;
        }
    }
L_0011d140:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0011d144:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0011d148:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011d14c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d5a4;
        }
    }
L_0011d150:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011d154:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011d158:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x960u);
    }
L_0011d15c:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x58u);
    }
L_0011d160:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_0011d164:;
    {
        wr32(cpu->r[1] + + 0x58u, cpu->r[0]);
    }
L_0011d168:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011d16c:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x5cu);
    }
L_0011d170:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_0011d174:;
    {
        wr32(cpu->r[1] + + 0x5cu, cpu->r[2]);
    }
L_0011d178:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011d17c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d340;
        }
    }
L_0011d180:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011d184:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011d188:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0011d18c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x58u);
    }
L_0011d190:;
    {
        cpu->r[14] = 0x0011d194u; fn_00096f38(cpu);
    }
L_0011d194:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011d198:;
    {
        cpu->r[14] = 0x0011d19cu; fn_000a320c(cpu);
    }
L_0011d19c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000a40u, 0, 0);
    }
L_0011d1a0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], 0x00000a10u, 0, 0);
    }
L_0011d1a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000a80u, 0, 0);
    }
L_0011d1a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011d1ac:;
    {
        wr32(cpu->r[4] + + 0xa4cu, cpu->r[7]);
    }
L_0011d1b0:;
    {
        wr8(cpu->r[4] + + 0xbacu, cpu->r[7]);
    }
L_0011d1b4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0011d1b8:;
    {
        wr32(cpu->r[4] + + 0xa08u, cpu->r[7]);
    }
L_0011d1bc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011d1c0:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[7]);
    }
L_0011d1c4:;
    {
        cpu->r[2] = 0x000000c8u;
    }
L_0011d1c8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[10]);
    }
L_0011d1cc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_0011d1d0:;
    {
        wr32(cpu->r[4] + + 0xa54u, cpu->r[7]);
    }
L_0011d1d4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[10]);
    }
L_0011d1d8:;
    {
        wr32(cpu->r[4] + + 0xa58u, cpu->r[7]);
    }
L_0011d1dc:;
    {
        wr32(cpu->r[4] + + 0xa5cu, cpu->r[7]);
    }
L_0011d1e0:;
    {
        wr32(cpu->r[3] + + 0x20u, cpu->r[7]);
    }
L_0011d1e4:;
    {
        wr32(cpu->r[4] + + 0xa64u, cpu->r[7]);
    }
L_0011d1e8:;
    {
        wr32(cpu->r[4] + + 0xa68u, cpu->r[7]);
    }
L_0011d1ec:;
    {
        wr32(cpu->r[4] + + 0xa6cu, cpu->r[7]);
    }
L_0011d1f0:;
    {
        wr32(cpu->r[3] + + 0x30u, cpu->r[7]);
    }
L_0011d1f4:;
    {
        wr32(cpu->r[4] + + 0xa74u, cpu->r[7]);
    }
L_0011d1f8:;
    {
        wr32(cpu->r[4] + + 0xa78u, cpu->r[7]);
    }
L_0011d1fc:;
    {
        wr32(cpu->r[4] + + 0xa7cu, cpu->r[7]);
    }
L_0011d200:;
    {
        wr32(cpu->r[4] + + 0xa18u, cpu->r[7]);
    }
L_0011d204:;
    {
        wr32(cpu->r[4] + + 0xa1cu, cpu->r[7]);
    }
L_0011d208:;
    {
        wr32(cpu->r[4] + + 0xa80u, cpu->r[7]);
    }
L_0011d20c:;
    {
        wr32(cpu->r[14] + + 0x10u, cpu->r[7]);
    }
L_0011d210:;
    {
        wr32(cpu->r[4] + + 0xa84u, cpu->r[7]);
    }
L_0011d214:;
    {
        wr32(cpu->r[4] + + 0xa24u, cpu->r[7]);
    }
L_0011d218:;
    {
        wr32(cpu->r[4] + + 0xa28u, cpu->r[7]);
    }
L_0011d21c:;
    {
        wr32(cpu->r[4] + + 0xa2cu, cpu->r[7]);
    }
L_0011d220:;
    {
        wr32(cpu->r[4] + + 0xa0cu, cpu->r[7]);
    }
L_0011d224:;
    {
        wr32(cpu->r[14] + + 0x20u, cpu->r[7]);
    }
L_0011d228:;
    {
        wr32(cpu->r[4] + + 0xa48u, cpu->r[7]);
    }
L_0011d22c:;
    {
        wr32(cpu->r[4] + + 0xa34u, cpu->r[7]);
    }
L_0011d230:;
    {
        wr32(cpu->r[4] + + 0xa38u, cpu->r[7]);
    }
L_0011d234:;
    {
        wr32(cpu->r[4] + + 0xa3cu, cpu->r[7]);
    }
L_0011d238:;
    {
        wr32(cpu->r[14] + + 0x30u, cpu->r[7]);
    }
L_0011d23c:;
    {
        wr32(cpu->r[4] + + 0xa44u, cpu->r[7]);
    }
L_0011d240:;
    {
        wr32(cpu->r[4] + + 0xa88u, cpu->r[7]);
    }
L_0011d244:;
    {
        wr32(cpu->r[4] + + 0xa8cu, cpu->r[7]);
    }
L_0011d248:;
    {
        wr32(cpu->r[12] + + 0x10u, cpu->r[7]);
    }
L_0011d24c:;
    {
        wr32(cpu->r[4] + + 0xa94u, cpu->r[7]);
    }
L_0011d250:;
    {
        wr32(cpu->r[4] + + 0xa98u, cpu->r[7]);
    }
L_0011d254:;
    {
        wr32(cpu->r[4] + + 0xa9cu, cpu->r[7]);
    }
L_0011d258:;
    {
        wr32(cpu->r[12] + + 0x20u, cpu->r[7]);
    }
L_0011d25c:;
    {
        wr32(cpu->r[4] + + 0xaa4u, cpu->r[7]);
    }
L_0011d260:;
    {
        wr32(cpu->r[4] + + 0xaa8u, cpu->r[7]);
    }
L_0011d264:;
    {
        wr32(cpu->r[4] + + 0xaacu, cpu->r[7]);
    }
L_0011d268:;
    {
        uint32_t wb_tmp = cpu->r[0] + + 0xab0u;
        wr32(cpu->r[0] + + 0xab0u, cpu->r[7]);
        cpu->r[0] = wb_tmp;
    }
L_0011d26c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0011d270:;
    {
        cpu->r[14] = 0x0011d274u; imp_memset(cpu); /* memset */
    }
L_0011d274:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0011d278:;
    {
        wr32(cpu->r[4] + + 0xb7cu, cpu->r[7]);
    }
L_0011d27c:;
    {
        wr8(cpu->r[4] + + 0x970u, cpu->r[7]);
    }
L_0011d280:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0011d284:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011d288:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d3d8;
        }
    }
L_0011d28c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0011d290:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011d294:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0011d298:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x94u);
    }
L_0011d29c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011d2a0:;
    {
        wr32(cpu->r[4] + + 0xa10u, cpu->r[3]);
    }
L_0011d2a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d3b4;
        }
    }
L_0011d2a8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011d2ac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011d2b0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x60u);
    }
L_0011d2b4:;
    {
        wr32(cpu->r[4] + + 0xa14u, cpu->r[3]);
    }
L_0011d2b8:;
    {
        cpu->r[14] = 0x0011d2bcu; fn_000a2d7c(cpu);
    }
L_0011d2bc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0011d2c0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011d2c4:;
    {
        cpu->r[14] = 0x0011d2c8u; fn_000a2b50(cpu);
    }
L_0011d2c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011d2cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011d3fc;
        }
    }
L_0011d2d0:;
    {
        cpu->r[3] = 0x00001c9cu;
    }
L_0011d2d4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0011d2d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0011d2dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d43c;
        }
    }
L_0011d2e0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011d2e4:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_0011d2e8:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011d2ec:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0011d2f0:;
    {
        cpu->r[14] = 0x0011d2f4u; fn_00099b28(cpu);
    }
L_0011d2f4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0011d2f8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0011d2fc:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0011d300:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_0011d304:;
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
L_0011d308:;
    {
        return fn_000a2764(cpu);
    }
L_0011d30c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0011d310:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0011d314:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011d318:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d5fc;
        }
    }
L_0011d31c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011d320:;
    {
        cpu->r[14] = 0x0011d324u; fn_000a04f8(cpu);
    }
L_0011d324:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000002fu, 1, 1);
    }
L_0011d328:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011d658;
        }
    }
L_0011d32c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0011d330:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011d334:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_0011d338:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011d33c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011d180;
        }
    }
L_0011d340:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0011d344:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011d348:;
    {
        cpu->r[14] = 0x0011d34cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011d34c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011d350:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d180;
        }
    }
L_0011d354:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011d358:;
    {
        cpu->r[14] = 0x0011d35cu; fn_00094228(cpu);
    }
L_0011d35c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011d360:;
    {
        cpu->r[14] = 0x0011d364u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011d364:;
    {
        goto L_0011d180;
    }
L_0011d368:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011d36c:;
    {
        cpu->r[14] = 0x0011d370u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011d370:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011d374:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d0f4;
        }
    }
L_0011d378:;
    {
        cpu->r[9] = rd32(0x0011d380u + + 0xa30u);
    }
L_0011d37c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011d380:;
    {
        cpu->r[14] = 0x0011d384u; fn_00094228(cpu);
    }
L_0011d384:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011d388:;
    {
        cpu->r[14] = 0x0011d38cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011d38c:;
    {
        goto L_0011d0f8;
    }
L_0011d390:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011d394:;
    {
        cpu->r[14] = 0x0011d398u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011d398:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011d39c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d114;
        }
    }
L_0011d3a0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011d3a4:;
    {
        cpu->r[14] = 0x0011d3a8u; fn_00094228(cpu);
    }
L_0011d3a8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011d3ac:;
    {
        cpu->r[14] = 0x0011d3b0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011d3b0:;
    {
        goto L_0011d114;
    }
L_0011d3b4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011d3b8:;
    {
        cpu->r[14] = 0x0011d3bcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011d3bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011d3c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d2a8;
        }
    }
L_0011d3c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011d3c8:;
    {
        cpu->r[14] = 0x0011d3ccu; fn_00094228(cpu);
    }
L_0011d3cc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011d3d0:;
    {
        cpu->r[14] = 0x0011d3d4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011d3d4:;
    {
        goto L_0011d2a8;
    }
L_0011d3d8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011d3dc:;
    {
        cpu->r[14] = 0x0011d3e0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011d3e0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_0011d3e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d28c;
        }
    }
L_0011d3e8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011d3ec:;
    {
        cpu->r[14] = 0x0011d3f0u; fn_00094228(cpu);
    }
L_0011d3f0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011d3f4:;
    {
        cpu->r[14] = 0x0011d3f8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011d3f8:;
    {
        goto L_0011d28c;
    }
L_0011d3fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011d400:;
    {
        cpu->r[14] = 0x0011d404u; fn_000a062c(cpu);
    }
L_0011d404:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0011d408:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0011d40c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011d410:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011dd3c;
        }
    }
L_0011d414:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011d418:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011d41c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011d420:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_0011d424:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x94u);
    }
L_0011d428:;
    {
        cpu->r[14] = 0x0011d42cu; fn_0009fd1c(cpu);
    }
L_0011d42c:;
    {
        cpu->r[3] = 0x00001c9cu;
    }
L_0011d430:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0011d434:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0011d438:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011d2e0;
        }
    }
L_0011d43c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0011d440:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d2e0;
        }
    }
L_0011d444:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0011d448:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011d44c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011d450:;
    {
        cpu->r[14] = 0x0011d454u; fn_00096ba4(cpu);
    }
L_0011d454:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa10u);
    }
L_0011d458:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0011d45c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0011d460:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0011d464:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011d588;
        }
    }
L_0011d468:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000005u, 1, 1);
    }
L_0011d46c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011d448;
        }
    }
L_0011d470:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011d474:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0011d478:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_0011d47c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_0011d480:;
    {
        goto L_0011d49c;
    }
L_0011d484:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa10u);
    }
L_0011d488:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0011d48c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011d500;
        }
    }
L_0011d490:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0011d494:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000064u, 1, 1);
    }
L_0011d498:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d6b8;
        }
    }
L_0011d49c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011d4a0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011d4a4:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_0011d4a8:;
    {
        cpu->r[14] = 0x0011d4acu; fn_000a0cf8(cpu);
    }
L_0011d4ac:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0011d4b0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011d4b4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0011d4b8:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_0011d4bc:;
    {
        cpu->r[14] = 0x0011d4c0u; fn_000a0cf8(cpu);
    }
L_0011d4c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa14u);
    }
L_0011d4c4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0011d4c8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0011d4cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011d484;
        }
    }
L_0011d4d0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0011d4d4:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0011d4d8:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011d4dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d524;
        }
    }
L_0011d4e0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011d4e4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x60u);
    }
L_0011d4e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0011d4ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011d484;
        }
    }
L_0011d4f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa0cu);
    }
L_0011d4f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0011d4f8:;
    {
        wr32(cpu->r[4] + + 0xa0cu, cpu->r[3]);
    }
L_0011d4fc:;
    {
        goto L_0011d490;
    }
L_0011d500:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0011d504:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0011d508:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011d50c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d55c;
        }
    }
L_0011d510:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011d514:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x94u);
    }
L_0011d518:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0011d51c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011d490;
        }
    }
L_0011d520:;
    {
        goto L_0011d4f0;
    }
L_0011d524:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0011d528:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0011d52c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_0011d530:;
    {
        cpu->r[14] = 0x0011d534u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011d534:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011d538:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011d53c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d4e0;
        }
    }
L_0011d540:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011d544:;
    {
        cpu->r[14] = 0x0011d548u; fn_00094228(cpu);
    }
L_0011d548:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0011d54c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0011d550:;
    {
        cpu->r[14] = 0x0011d554u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011d554:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011d558:;
    {
        goto L_0011d4e0;
    }
L_0011d55c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0011d560:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0011d564:;
    {
        cpu->r[14] = 0x0011d568u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011d568:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011d56c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d510;
        }
    }
L_0011d570:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011d574:;
    {
        cpu->r[14] = 0x0011d578u; fn_00094228(cpu);
    }
L_0011d578:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011d57c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0011d580:;
    {
        cpu->r[14] = 0x0011d584u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011d584:;
    {
        goto L_0011d510;
    }
L_0011d588:;
    {
        cpu->r[14] = 0x0011d58cu; fn_000979a0(cpu);
    }
L_0011d58c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0011d590:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_0011d594:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa08u);
        }
    }
L_0011d598:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0011d59c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0xa08u, cpu->r[3]);
        }
    }
L_0011d5a0:;
    {
        goto L_0011d468;
    }
L_0011d5a4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011d5a8:;
    {
        cpu->r[14] = 0x0011d5acu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011d5ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011d5b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011dc94;
        }
    }
L_0011d5b4:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0011d5b8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011d5bc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x960u);
    }
L_0011d5c0:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_0011d5c4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x58u);
    }
L_0011d5c8:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011d5cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0011d5d0:;
    {
        wr32(cpu->r[8] + + 0x58u, cpu->r[3]);
    }
L_0011d5d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0011d5d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011d168;
        }
    }
L_0011d5dc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011d5e0:;
    {
        cpu->r[14] = 0x0011d5e4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011d5e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011d5e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011dc80;
        }
    }
L_0011d5ec:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0011d5f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x960u);
    }
L_0011d5f4:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_0011d5f8:;
    {
        goto L_0011d168;
    }
L_0011d5fc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011d600:;
    {
        cpu->r[14] = 0x0011d604u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011d604:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011d608:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d31c;
        }
    }
L_0011d60c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011d610:;
    {
        cpu->r[14] = 0x0011d614u; fn_00094228(cpu);
    }
L_0011d614:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011d618:;
    {
        cpu->r[14] = 0x0011d61cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011d61c:;
    {
        goto L_0011d31c;
    }
L_0011d620:;
    {
        cpu->r[1] = rd32(0x0011d628u + + 0x78cu);
    }
L_0011d624:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0011d628:;
    {
        cpu->r[12] = rd32(0x0011d630u + + 0x788u);
    }
L_0011d62c:;
    {
        cpu->r[14] = 0x0000027cu;
    }
L_0011d630:;
    {
        cpu->r[2] = rd32(0x0011d638u + + 0x784u);
    }
L_0011d634:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011d63cu, cpu->r[1], 0, 0);
    }
L_0011d638:;
    {
        cpu->r[3] = rd32(0x0011d640u + + 0x780u);
    }
L_0011d63c:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011d644u, cpu->r[12], 0, 0);
    }
L_0011d640:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011d648u, cpu->r[2], 0, 0);
    }
L_0011d644:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000064u, 0, 0);
    }
L_0011d648:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011d650u, cpu->r[3], 0, 0);
    }
L_0011d64c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0011d650:;
    {
        cpu->r[14] = 0x0011d654u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0011d654:;
    {
        goto L_0011d074;
    }
L_0011d658:;
    {
        uint32_t v = cpu->r[0] & ~ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0011d65c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00002140u, 0, 0);
    }
L_0011d660:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001du, 0, 0);
    }
L_0011d664:;
    {
        cpu->r[8] = rd32(cpu->r[6] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0011d668:;
    {
        cpu->r[14] = 0x0011d66cu; fn_000979a0(cpu);
    }
L_0011d66c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0011d670:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x58u);
    }
L_0011d674:;
    {
        cpu->r[14] = 0x0011d678u; fn_000979a0(cpu);
    }
L_0011d678:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x58u);
    }
L_0011d67c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_0011d680:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0011d684:;
    {
        wr32(cpu->r[7] + + 0x58u, cpu->r[3]);
    }
L_0011d688:;
    {
        cpu->r[14] = 0x0011d68cu; fn_000979a0(cpu);
    }
L_0011d68c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0011d690:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x5cu);
    }
L_0011d694:;
    {
        cpu->r[14] = 0x0011d698u; fn_000979a0(cpu);
    }
L_0011d698:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0011d69c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011d6a0:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_0011d6a4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x58u);
    }
L_0011d6a8:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 0);
    }
L_0011d6ac:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], cpu->r[8], 0, 0);
    }
L_0011d6b0:;
    {
        wr32(cpu->r[7] + + 0x5cu, cpu->r[8]);
    }
L_0011d6b4:;
    {
        goto L_0011d178;
    }
L_0011d6b8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011d6bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011d6c0:;
    {
        wr32(cpu->r[4] + + 0xa4cu, cpu->r[2]);
    }
L_0011d6c4:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_0011d6c8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011d6cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_0011d6d0:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_0011d6d4:;
    {
        wr32(cpu->r[10] + + 0x4u, cpu->r[2]);
    }
L_0011d6d8:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_0011d6dc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_0011d6e0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_0011d6e4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_0011d6e8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_0011d6ec:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_0011d6f0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_0011d6f4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_0011d6f8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_0011d6fc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_0011d700:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_0011d704:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0011d708:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[11]);
    }
L_0011d70c:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_0011d710:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_0011d714:;
    {
        wr32(cpu->r[4] + + 0xa80u, cpu->r[2]);
    }
L_0011d718:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0011d71c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0011d720:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0011d724:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0011d728:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011d72c:;
    {
        cpu->r[14] = 0x0011d730u; fn_000a0020(cpu);
    }
L_0011d730:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0011d734:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011d738:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0011d73c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0011d740:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011d744:;
    {
        cpu->r[14] = 0x0011d748u; fn_000a0020(cpu);
    }
L_0011d748:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa14u);
    }
L_0011d74c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0011d750:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0011d754:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011d988;
        }
    }
L_0011d758:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa10u);
    }
L_0011d75c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0011d760:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011da04;
        }
    }
L_0011d764:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0011d768:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 1);
    }
L_0011d76c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011d71c;
        }
    }
L_0011d770:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011d774:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[0]);
    }
L_0011d778:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011d77c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0011d780:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00008600u, 0, 0);
    }
L_0011d784:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000d8u, 0, 0);
    }
L_0011d788:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_0011d78c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011d790:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d7a8;
        }
    }
L_0011d794:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa80u);
    }
L_0011d798:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011d79c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa48u);
        }
    }
L_0011d7a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0011d7a4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0xa48u, cpu->r[3]);
        }
    }
L_0011d7a8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x0000009cu, 0, 0);
    }
L_0011d7ac:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0011d7b0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000750u, 1, 1);
    }
L_0011d7b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011d718;
        }
    }
L_0011d7b8:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_0011d7bc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011d7c0:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_0011d7c4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[4]);
    }
L_0011d7c8:;
    {
        cpu->r[8] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_0011d7cc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011d7d0:;
    {
        cpu->r[10] = rd32(cpu->r[10] + cpu->r[11]);
    }
L_0011d7d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], 0x00000030u, 0, 0);
    }
L_0011d7d8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[11]);
    }
L_0011d7dc:;
    {
        cpu->r[4] = cpu->r[10];
    }
L_0011d7e0:;
    {
        cpu->r[11] = cpu->r[6];
    }
L_0011d7e4:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0011d7e8:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0011d7ec:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_0011d7f0:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0011d7f4:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0011d7f8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011d7fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d938;
        }
    }
L_0011d800:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_0011d804:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0011d808:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x18cu);
    }
L_0011d80c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011d810:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011d96c;
        }
    }
L_0011d814:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 1);
    }
L_0011d818:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011d7f4;
        }
    }
L_0011d81c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0011d820:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 1);
    }
L_0011d824:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011d7f0;
        }
    }
L_0011d828:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_0011d82c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011d830:;
    {
        cpu->r[6] = cpu->r[11];
    }
L_0011d834:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_0011d838:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x24u);
    }
L_0011d83c:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0011d840:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x20u);
    }
L_0011d844:;
    {
        cpu->r[14] = 0x0011d848u; fn_000a5c04(cpu);
    }
L_0011d848:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0011d84c:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_0011d850:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[11]);
    }
L_0011d854:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_0011d858:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_0011d85c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0011d860:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0011d864:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0011d868:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0011d86c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011d870:;
    {
        cpu->r[14] = 0x0011d874u; fn_000a0fa0(cpu);
    }
L_0011d874:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0011d878:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011d87c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0011d880:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0011d884:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011d888:;
    {
        cpu->r[14] = 0x0011d88cu; fn_000a0fa0(cpu);
    }
L_0011d88c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa14u);
    }
L_0011d890:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0011d894:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0011d898:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011da2c;
        }
    }
L_0011d89c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa10u);
    }
L_0011d8a0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0011d8a4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011da70;
        }
    }
L_0011d8a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0011d8ac:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000003u, 1, 1);
    }
L_0011d8b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011d860;
        }
    }
L_0011d8b4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0011d8b8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_0011d8bc:;
    {
        sub_flags(cpu, cpu->r[8], 0x0000000au, 1, 1);
    }
L_0011d8c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011d85c;
        }
    }
L_0011d8c4:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_0011d8c8:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_0011d8cc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011d8d0:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0011d8d4:;
    {
        goto L_0011d8e4;
    }
L_0011d8d8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0011d8dc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000032u, 1, 1);
    }
L_0011d8e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011db84;
        }
    }
L_0011d8e4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011d8e8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0011d8ec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011d8f0:;
    {
        cpu->r[14] = 0x0011d8f4u; fn_000a07e4(cpu);
    }
L_0011d8f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa14u);
    }
L_0011d8f8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0011d8fc:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0011d900:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011d8d8;
        }
    }
L_0011d904:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0011d908:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0011d90c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011d910:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011da98;
        }
    }
L_0011d914:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011d918:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x60u);
    }
L_0011d91c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_0011d920:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0xb7cu);
        }
    }
L_0011d924:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0011d928:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0xb7cu, cpu->r[2]);
        }
    }
L_0011d92c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_0011d930:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[3] + + 0xab4u, cpu->r[7]);
        }
    }
L_0011d934:;
    {
        goto L_0011d8d8;
    }
L_0011d938:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011d93c:;
    {
        cpu->r[14] = 0x0011d940u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011d940:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011d944:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d800;
        }
    }
L_0011d948:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_0011d94c:;
    {
        cpu->r[14] = 0x0011d950u; fn_00094228(cpu);
    }
L_0011d950:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011d954:;
    {
        cpu->r[14] = 0x0011d958u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011d958:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_0011d95c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0011d960:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x18cu);
    }
L_0011d964:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011d968:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d814;
        }
    }
L_0011d96c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0011d970:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011d974:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 1);
    }
L_0011d978:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0011d97c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0011d980:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011d7f0;
        }
    }
L_0011d984:;
    {
        goto L_0011d828;
    }
L_0011d988:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011d98c:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[0]);
    }
L_0011d990:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0011d994:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011d998:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011dabc;
        }
    }
L_0011d99c:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[11]);
    }
L_0011d9a0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x60u);
    }
L_0011d9a4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0011d9a8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011d758;
        }
    }
L_0011d9ac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x438u);
    }
L_0011d9b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_0011d9b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_0011d9b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0011d9bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0011d9c0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x68u);
    }
L_0011d9c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000028cu, 0, 0);
    }
L_0011d9c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_0011d9cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0011d9d0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0xcu);
    }
L_0011d9d4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0011d9d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011d9f4;
        }
    }
L_0011d9dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa80u);
    }
L_0011d9e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0011d9e4:;
    {
        wr32(cpu->r[4] + + 0xa80u, cpu->r[3]);
    }
L_0011d9e8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x68u);
    }
L_0011d9ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000028cu, 0, 0);
    }
L_0011d9f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_0011d9f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0011d9f8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0011d9fc:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_0011da00:;
    {
        goto L_0011d764;
    }
L_0011da04:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011da08:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[1]);
    }
L_0011da0c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0011da10:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011da14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011daf4;
        }
    }
L_0011da18:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[11]);
    }
L_0011da1c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x94u);
    }
L_0011da20:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0011da24:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011d764;
        }
    }
L_0011da28:;
    {
        goto L_0011d9ac;
    }
L_0011da2c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011da30:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[0]);
    }
L_0011da34:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0011da38:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011da3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011db20;
        }
    }
L_0011da40:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[11]);
    }
L_0011da44:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x60u);
    }
L_0011da48:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0011da4c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011d89c;
        }
    }
L_0011da50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xab0u);
    }
L_0011da54:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_0011da58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0011da5c:;
    {
        wr32(cpu->r[4] + + 0xab0u, cpu->r[2]);
    }
L_0011da60:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0011da64:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0011da68:;
    {
        wr32(cpu->r[9], cpu->r[3]);
    }
L_0011da6c:;
    {
        goto L_0011d8a8;
    }
L_0011da70:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011da74:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[1]);
    }
L_0011da78:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0011da7c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011da80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011db58;
        }
    }
L_0011da84:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[11]);
    }
L_0011da88:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x94u);
    }
L_0011da8c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0011da90:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011d8a8;
        }
    }
L_0011da94:;
    {
        goto L_0011da50;
    }
L_0011da98:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011da9c:;
    {
        cpu->r[14] = 0x0011daa0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011daa0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011daa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d914;
        }
    }
L_0011daa8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011daac:;
    {
        cpu->r[14] = 0x0011dab0u; fn_00094228(cpu);
    }
L_0011dab0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011dab4:;
    {
        cpu->r[14] = 0x0011dab8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011dab8:;
    {
        goto L_0011d914;
    }
L_0011dabc:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0011dac0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0011dac4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_0011dac8:;
    {
        cpu->r[14] = 0x0011daccu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011dacc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011dad0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011dad4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d99c;
        }
    }
L_0011dad8:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[11]);
    }
L_0011dadc:;
    {
        cpu->r[14] = 0x0011dae0u; fn_00094228(cpu);
    }
L_0011dae0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0011dae4:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0011dae8:;
    {
        cpu->r[14] = 0x0011daecu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011daec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011daf0:;
    {
        goto L_0011d99c;
    }
L_0011daf4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0011daf8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0011dafc:;
    {
        cpu->r[14] = 0x0011db00u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011db00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011db04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011da18;
        }
    }
L_0011db08:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[11]);
    }
L_0011db0c:;
    {
        cpu->r[14] = 0x0011db10u; fn_00094228(cpu);
    }
L_0011db10:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011db14:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0011db18:;
    {
        cpu->r[14] = 0x0011db1cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011db1c:;
    {
        goto L_0011da18;
    }
L_0011db20:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0011db24:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0011db28:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_0011db2c:;
    {
        cpu->r[14] = 0x0011db30u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011db30:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011db34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011db38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011da40;
        }
    }
L_0011db3c:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[11]);
    }
L_0011db40:;
    {
        cpu->r[14] = 0x0011db44u; fn_00094228(cpu);
    }
L_0011db44:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0011db48:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0011db4c:;
    {
        cpu->r[14] = 0x0011db50u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011db50:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011db54:;
    {
        goto L_0011da40;
    }
L_0011db58:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0011db5c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0011db60:;
    {
        cpu->r[14] = 0x0011db64u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011db64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011db68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011da84;
        }
    }
L_0011db6c:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[11]);
    }
L_0011db70:;
    {
        cpu->r[14] = 0x0011db74u; fn_00094228(cpu);
    }
L_0011db74:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0011db78:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0011db7c:;
    {
        cpu->r[14] = 0x0011db80u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011db80:;
    {
        goto L_0011da84;
    }
L_0011db84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa08u);
    }
L_0011db88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011db8c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011dcfc;
        }
    }
L_0011db90:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011db94:;
    {
        wr8(cpu->r[4] + + 0x970u, cpu->r[3]);
    }
L_0011db98:;
    {
        goto L_0011d2e0;
    }
L_0011db9c:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_0011dba0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011dba4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0011dba8:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_0011dbac:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0011dbb0:;
    {
        cpu->r[14] = 0x0011dbb4u; fn_00097724(cpu);
    }
L_0011dbb4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0011dbb8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0011dbbc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0011dcc4;
        }
    }
L_0011dbc0:;
    {
        cpu->r[14] = 0x0011dbc4u; fn_000979a0(cpu);
    }
L_0011dbc4:;
    {
        cpu->r[8] = 0x00001c50u;
    }
L_0011dbc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x960u);
    }
L_0011dbcc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_0011dbd0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0011dbd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0011dbd8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x9cu);
    }
L_0011dbdc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0011dbe0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011dca8;
        }
    }
L_0011dbe4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011dbe8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0011dbec:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0011dbf0:;
    {
        cpu->r[14] = 0x0011dbf4u; fn_00097d9c(cpu);
    }
L_0011dbf4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011dbf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011dc58;
        }
    }
L_0011dbfc:;
    {
        cpu->r[3] = 0x00001c9cu;
    }
L_0011dc00:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0011dc04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0011dc08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011dd98;
        }
    }
L_0011dc0c:;
    {
        cpu->r[14] = 0x0011dc10u; fn_000979a0(cpu);
    }
L_0011dc10:;
    {
        cpu->r[8] = 0x00001c50u;
    }
L_0011dc14:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_0011dc18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0011dc1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0011dc20:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x15cu);
    }
L_0011dc24:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_0011dc28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011dd60;
        }
    }
L_0011dc2c:;
    {
        cpu->r[14] = 0x0011dc30u; fn_000979a0(cpu);
    }
L_0011dc30:;
    {
        cpu->r[2] = 0x00001c50u;
    }
L_0011dc34:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_0011dc38:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0011dc3c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011dc40:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_0011dc44:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0011dc48:;
    {
        cpu->r[14] = 0x0011dc4cu; fn_00097ce0(cpu);
    }
L_0011dc4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_0011dc50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0011dc54:;
    {
        wr8(cpu->r[3] + + 0x15cu, cpu->r[0]);
    }
L_0011dc58:;
    {
        cpu->r[14] = 0x0011dc5cu; fn_000979a0(cpu);
    }
L_0011dc5c:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_0011dc60:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0011dc64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0011dc68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0011dc6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000188u, 0, 0);
    }
L_0011dc70:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x4u);
    }
L_0011dc74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0011dc78:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_0011dc7c:;
    {
        goto L_0011d130;
    }
L_0011dc80:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011dc84:;
    {
        cpu->r[14] = 0x0011dc88u; fn_00094228(cpu);
    }
L_0011dc88:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011dc8c:;
    {
        cpu->r[14] = 0x0011dc90u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011dc90:;
    {
        goto L_0011d5ec;
    }
L_0011dc94:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011dc98:;
    {
        cpu->r[14] = 0x0011dc9cu; fn_00094228(cpu);
    }
L_0011dc9c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011dca0:;
    {
        cpu->r[14] = 0x0011dca4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011dca4:;
    {
        goto L_0011d5b4;
    }
L_0011dca8:;
    {
        cpu->r[14] = 0x0011dcacu; fn_000979a0(cpu);
    }
L_0011dcac:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_0011dcb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x960u);
    }
L_0011dcb4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0011dcb8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0011dcbc:;
    {
        wr32(cpu->r[2] + + 0x9cu, cpu->r[3]);
    }
L_0011dcc0:;
    {
        goto L_0011dbe4;
    }
L_0011dcc4:;
    {
        cpu->r[1] = rd32(0x0011dcccu + + 0xf8u);
    }
L_0011dcc8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0011dccc:;
    {
        cpu->r[12] = rd32(0x0011dcd4u + + 0xf4u);
    }
L_0011dcd0:;
    {
        cpu->r[14] = 0x0000028au;
    }
L_0011dcd4:;
    {
        cpu->r[2] = rd32(0x0011dcdcu + + 0xf0u);
    }
L_0011dcd8:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011dce0u, cpu->r[1], 0, 0);
    }
L_0011dcdc:;
    {
        cpu->r[3] = rd32(0x0011dce4u + + 0xecu);
    }
L_0011dce0:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011dce8u, cpu->r[12], 0, 0);
    }
L_0011dce4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011dcecu, cpu->r[2], 0, 0);
    }
L_0011dce8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000064u, 0, 0);
    }
L_0011dcec:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011dcf4u, cpu->r[3], 0, 0);
    }
L_0011dcf0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0011dcf4:;
    {
        cpu->r[14] = 0x0011dcf8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0011dcf8:;
    {
        goto L_0011dbc0;
    }
L_0011dcfc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa0cu);
    }
L_0011dd00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011dd04:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011db90;
        }
    }
L_0011dd08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa48u);
    }
L_0011dd0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011dd10:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011db90;
        }
    }
L_0011dd14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xab0u);
    }
L_0011dd18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011dd1c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011db90;
        }
    }
L_0011dd20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa80u);
    }
L_0011dd24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011dd28:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011db90;
        }
    }
L_0011dd2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xb7cu);
    }
L_0011dd30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011dd34:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011db90;
        }
    }
L_0011dd38:;
    {
        goto L_0011d2e0;
    }
L_0011dd3c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011dd40:;
    {
        cpu->r[14] = 0x0011dd44u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011dd44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011dd48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011d414;
        }
    }
L_0011dd4c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011dd50:;
    {
        cpu->r[14] = 0x0011dd54u; fn_00094228(cpu);
    }
L_0011dd54:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011dd58:;
    {
        cpu->r[14] = 0x0011dd5cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011dd5c:;
    {
        goto L_0011d414;
    }
L_0011dd60:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011dd64:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0011dd68:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0011dd6c:;
    {
        cpu->r[14] = 0x0011dd70u; fn_00097ce0(cpu);
    }
L_0011dd70:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0011dd74:;
    {
        cpu->r[14] = 0x0011dd78u; fn_000979a0(cpu);
    }
L_0011dd78:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_0011dd7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0011dd80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0011dd84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000158u, 0, 0);
    }
L_0011dd88:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x4u);
    }
L_0011dd8c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_0011dd90:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0011dc58;
        }
    }
L_0011dd94:;
    {
        goto L_0011dc2c;
    }
L_0011dd98:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0011dd9c:;
    {
        cpu->r[14] = 0x0011dda0u; fn_000a5c98(cpu);
    }
L_0011dda0:;
    {
        goto L_0011dc0c;
    }
}

/* _ZN14GS_RaceSummary17ApplyMenuSettingsEv @ 0011ddd4 (arm) */
void fn_0011ddd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011ddd4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_0011ddd8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0011dddc:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[3]);
    }
L_0011dde0:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_0011dde4:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_0011dde8:;
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
L_0011ddec:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0011ddf0:;
    {
        cpu->r[5] = rd32(0x0011ddf8u + + 0x22cu);
    }
L_0011ddf4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_0011ddf8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0011ddfc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011de00:;
    {
        cpu->r[5] = add_flags(cpu, 0x0011de08u, cpu->r[5], 0, 0);
    }
L_0011de04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011dfec;
        }
    }
L_0011de08:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011de0c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0011de10:;
    {
        cpu->r[6] = rd32(0x0011de18u + + 0x210u);
    }
L_0011de14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011de18:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0011de1c:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_0011de20:;
    {
        cpu->r[14] = 0x0011de28u;
    }
L_0011de24:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0xdcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0011de28u)) return;
    }
L_0011de28:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011de2c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0011de30:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0011de34:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[2]);
    }
L_0011de38:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[2]);
    }
L_0011de3c:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_0011de40:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0011de44:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0011de48:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[2]);
    }
L_0011de4c:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[2]);
    }
L_0011de50:;
    {
        cpu->r[2] = 0x00000544u;
    }
L_0011de54:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[2]);
    }
L_0011de58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0011de5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0011de60:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00008600u, 0, 0);
    }
L_0011de64:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_0011de68:;
    {
        wr8(cpu->r[2] + + 0xd8u, cpu->r[1]);
    }
L_0011de6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011de58;
        }
    }
L_0011de70:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00000950u, 0, 0);
    }
L_0011de74:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011de78:;
    {
        cpu->r[14] = 0x0011de7cu; fn_0015d718(cpu);
    }
L_0011de7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011de80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011df54;
        }
    }
L_0011de84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011de88:;
    {
        cpu->r[14] = 0x0011de8cu; fn_00097d9c(cpu);
    }
L_0011de8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011de90:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011dfd0;
        }
    }
L_0011de94:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011de98:;
    {
        cpu->r[14] = 0x0011de9cu; fn_00096b98(cpu);
    }
L_0011de9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011dea0:;
    {
        cpu->r[14] = 0x0011dea4u; fn_0011a6fc(cpu);
    }
L_0011dea4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011dea8:;
    {
        cpu->r[14] = 0x0011deacu; fn_0011d048(cpu);
    }
L_0011deac:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xa04u);
    }
L_0011deb0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0011deb4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011df38;
        }
    }
L_0011deb8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0011debc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000970u, 0, 0);
    }
L_0011dec0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_0011dec4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000b80u, 0, 0);
    }
L_0011dec8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0011decc:;
    {
        cpu->r[6] = rd32(cpu->r[0]);
    }
L_0011ded0:;
    {
        goto L_0011df00;
    }
L_0011ded4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011ded8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0011dedc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x0000000au;
        }
    }
L_0011dee0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_0011dee4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd16(cpu->r[2] + - 0x2u);
        }
    }
L_0011dee8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000au, 0, 0);
        }
    }
L_0011deec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
        }
    }
L_0011def0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0011def4:;
    {
        wr16(cpu->r[2], cpu->r[0]);
    }
L_0011def8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_0011defc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0011df38;
        }
    }
L_0011df00:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_0011df04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011df08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ded4;
        }
    }
L_0011df0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011df10:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x418u);
    }
L_0011df14:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = cpu->r[3];
        }
    }
L_0011df18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0011df1c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd16(cpu->r[2] + - 0x2u);
        }
    }
L_0011df20:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0011df24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_0011df28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0011df2c:;
    {
        wr16(cpu->r[2], cpu->r[0]);
    }
L_0011df30:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_0011df34:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0011df00;
        }
    }
L_0011df38:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0011df3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011df40:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0011df44:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0011df48:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0011df4c:;
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
L_0011df50:;
    {
        return fn_0011a488(cpu);
    }
L_0011df54:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011df58:;
    {
        cpu->r[10] = 0x00001bd0u;
    }
L_0011df5c:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0011df60:;
    {
        cpu->r[8] = 0x0000009cu;
    }
L_0011df64:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_0011df68:;
    {
        cpu->r[11] = rd32(cpu->r[9]);
    }
L_0011df6c:;
    {
        cpu->r[14] = 0x0011df70u; fn_00096b5c(cpu);
    }
L_0011df70:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x438u);
    }
L_0011df74:;
    {
        uint32_t v = cpu->r[8] * cpu->r[0] + cpu->r[3]; cpu->r[3] = v;
    }
L_0011df78:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x18u);
    }
L_0011df7c:;
    {
        add_flags(cpu, cpu->r[3], 0xc0000001u, 0, 1);
    }
L_0011df80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011dfb0;
        }
    }
L_0011df84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011df88:;
    {
        cpu->r[9] = rd32(cpu->r[9]);
    }
L_0011df8c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_0011df90:;
    {
        cpu->r[14] = 0x0011df94u; fn_00096b5c(cpu);
    }
L_0011df94:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x438u);
    }
L_0011df98:;
    {
        uint32_t v = cpu->r[8] * cpu->r[0] + cpu->r[3]; cpu->r[8] = v;
    }
L_0011df9c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011dfa0:;
    {
        cpu->r[8] = rd32(cpu->r[8] + + 0x18u);
    }
L_0011dfa4:;
    {
        cpu->r[14] = 0x0011dfa8u; fn_0015d718(cpu);
    }
L_0011dfa8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_0011dfac:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0011de84;
        }
    }
L_0011dfb0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0011dfb4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011dfb8:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_0011dfbc:;
    {
        cpu->r[14] = 0x0011dfc0u; fn_0015d718(cpu);
    }
L_0011dfc0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011dfc4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011dfc8:;
    {
        cpu->r[14] = 0x0011dfccu; fn_00097254(cpu);
    }
L_0011dfcc:;
    {
        goto L_0011de84;
    }
L_0011dfd0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011dfd4:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_0011dfd8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0011dfdc:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_0011dfe0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0011dfe4:;
    {
        cpu->r[14] = 0x0011dfe8u; fn_000a0c7c(cpu);
    }
L_0011dfe8:;
    {
        goto L_0011de94;
    }
L_0011dfec:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x954u);
    }
L_0011dff0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_0011dff4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011de08;
        }
    }
L_0011dff8:;
    {
        cpu->r[14] = 0x0011dffcu; fn_000979a0(cpu);
    }
L_0011dffc:;
    {
        cpu->r[3] = 0x00001bd0u;
    }
L_0011e000:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0011e004:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011e008:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0011e00c:;
    {
        cpu->r[14] = 0x0011e010u; fn_00096b5c(cpu);
    }
L_0011e010:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_0011e014:;
    {
        wr8(cpu->r[0] + + 0x49u, cpu->r[6]);
    }
L_0011e018:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0011e01c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0011e020:;
    {
        goto L_0011de10;
    }
}

/* _ZN13GS_ReplayMenu17ApplyMenuSettingsEv @ 0011e02c (arm) */
void fn_0011e02c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e02c:;
    {
        cpu->r[1] = rd32(0x0011e034u + + 0x48u);
    }
L_0011e030:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0011e034:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011e038:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011e03c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011e044u, cpu->r[1], 0, 0);
    }
L_0011e040:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0011e044:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[2]);
    }
L_0011e048:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[1]);
    }
L_0011e04c:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_0011e050:;
    {
        cpu->r[14] = 0x0011e058u;
    }
L_0011e054:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0xdcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0011e058u)) return;
    }
L_0011e058:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011e05c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0011e060:;
    {
        cpu->r[1] = 0x00000583u;
    }
L_0011e064:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[2]);
    }
L_0011e068:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_0011e06c:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[1]);
    }
L_0011e070:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[2]);
    }
L_0011e074:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_0011e078:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011e07cu)) return;
    }
}

/* _ZN13GS_ReplayMenu8isKindOfEi @ 0011e080 (arm) */
void fn_0011e080(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e080:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0011e084:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_35 @ 0011e088 (arm) */
void fn_0011e088(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e088:;
    {
        cpu->r[3] = rd32(0x0011e090u + + 0x20u);
    }
L_0011e08c:;
    {
        cpu->r[1] = rd32(0x0011e094u + + 0x20u);
    }
L_0011e090:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011e098u, cpu->r[3], 0, 0);
    }
L_0011e094:;
    {
        cpu->r[2] = rd32(0x0011e09cu + + 0x1cu);
    }
L_0011e098:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0011e09c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011e0a4u, cpu->r[2], 0, 0);
    }
L_0011e0a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011e0a4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_0011e0a8:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_0011e0ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GS_ReplayMenu6UpdateEv @ 0011e0bc (arm) */
void fn_0011e0bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e0bc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0011e0c0:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0011e0c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0011e0c8:;
    {
        cpu->r[4] = rd32(0x0011e0d0u + + 0x16cu);
    }
L_0011e0cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0011e0d0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0011e0d4:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011e0dcu, cpu->r[4], 0, 0);
    }
L_0011e0d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e178;
        }
    }
L_0011e0dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0011e0e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e108;
        }
    }
L_0011e0e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011e0e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e0fc;
        }
    }
L_0011e0ec:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011e0f0:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
    }
L_0011e0f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011e0f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011e0fcu)) return;
    }
L_0011e0fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011e100:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_0011e104:;
    {
        return fn_00114a58(cpu);
    }
L_0011e108:;
    {
        cpu->r[14] = 0x0011e10cu; fn_0010da28(cpu);
    }
L_0011e10c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011e110:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e0f4;
        }
    }
L_0011e114:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xc4u);
    }
L_0011e118:;
    {
        cpu->r[2] = 0x00000583u;
    }
L_0011e11c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0011e120:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e1f8;
        }
    }
L_0011e124:;
    {
        cpu->r[2] = 0x00000664u;
    }
L_0011e128:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0011e12c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e1a8;
        }
    }
L_0011e130:;
    {
        cpu->r[2] = 0x000004bdu;
    }
L_0011e134:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0011e138:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011e0ec;
        }
    }
L_0011e13c:;
    {
        cpu->r[0] = rd32(0x0011e144u + + 0xfcu);
    }
L_0011e140:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0011e144:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0011e148:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_0011e14c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0011e150:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0011e154:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0011e158:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0011e15c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011e160:;
    {
        cpu->r[14] = 0x0011e164u; fn_000fd248(cpu);
    }
L_0011e164:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011e168:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0011e16c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011e170:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_0011e174:;
    {
        return fn_000f34e8(cpu);
    }
L_0011e178:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_0011e17c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011e180:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011e0f4;
        }
    }
L_0011e184:;
    {
        cpu->r[3] = rd32(0x0011e18cu + + 0xb8u);
    }
L_0011e188:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011e18c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_0011e190:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011e194:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000581u;
        }
    }
L_0011e198:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[3]);
        }
    }
L_0011e19c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_0011e1a0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x94u, cpu->r[3]);
        }
    }
L_0011e1a4:;
    {
        goto L_0011e0f4;
    }
L_0011e1a8:;
    {
        cpu->r[0] = rd32(0x0011e1b0u + + 0x90u);
    }
L_0011e1ac:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0011e1b0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0011e1b4:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0011e1b8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0011e1bc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0011e1c0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0011e1c4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0011e1c8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011e1cc:;
    {
        cpu->r[14] = 0x0011e1d0u; fn_000fd248(cpu);
    }
L_0011e1d0:;
    {
        cpu->r[0] = 0x00000b9cu;
    }
L_0011e1d4:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011e1d8:;
    {
        cpu->r[14] = 0x0011e1dcu; fn_0018ba6c(cpu);
    }
L_0011e1dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011e1e0:;
    {
        cpu->r[14] = 0x0011e1e4u; fn_0011eba8(cpu);
    }
L_0011e1e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011e1e8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0011e1ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011e1f0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_0011e1f4:;
    {
        return fn_000f361c(cpu);
    }
L_0011e1f8:;
    {
        cpu->r[0] = rd32(0x0011e200u + + 0x40u);
    }
L_0011e1fc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0011e200:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0011e204:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0011e208:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0011e20c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0011e210:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0011e214:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0011e218:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011e21c:;
    {
        cpu->r[14] = 0x0011e220u; fn_000fd248(cpu);
    }
L_0011e220:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0011e224:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011e228:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0011e22c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0011e230:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011e234:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_0011e238:;
    {
        return fn_0009b14c(cpu);
    }
}

/* _ZN13GS_ReplayMenu8DoActionEii @ 0011e248 (arm) */
void fn_0011e248(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e248:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0011e24c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011e250:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0011e254:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0011e258:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011e25c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e268;
        }
    }
L_0011e260:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0011e264:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011e268u)) return;
    }
L_0011e268:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_0011e26c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_0011e270:;
    {
        cpu->r[14] = 0x0011e274u; fn_00093f34(cpu);
    }
L_0011e274:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0011e278:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0011e27c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0011e280:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0011e284:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0011e288:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0011e28c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0011e290:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0011e294:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[0]);
    }
L_0011e298:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0011e29c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0011e2a0:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_0011e2a4:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_0011e2a8:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0011e2ac:;
    {
        goto L_0011e260;
    }
}

/* _ZN13GS_ReplayMenu16RenderBackgroundEv @ 0011e2b0 (arm) */
void fn_0011e2b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e2b0:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0011e2b4:;
    {
        cpu->r[4] = rd32(0x0011e2bcu + + 0x50u);
    }
L_0011e2b8:;
    {
        cpu->r[3] = rd32(0x0011e2c0u + + 0x50u);
    }
L_0011e2bc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0011e2c0:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011e2c8u, cpu->r[4], 0, 0);
    }
L_0011e2c4:;
    {
        cpu->r[1] = 0x55000000u;
    }
L_0011e2c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011e2cc:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_0011e2d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011e2d4:;
    {
        cpu->r[14] = 0x0011e2d8u; fn_0012dd58(cpu);
    }
L_0011e2d8:;
    {
        cpu->r[12] = rd32(0x0011e2e0u + + 0x34u);
    }
L_0011e2dc:;
    {
        cpu->r[3] = rd32(0x0011e2e4u + + 0x34u);
    }
L_0011e2e0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011e2e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011e2e8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0011e2ec:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_0011e2f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011e2f4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0011e2f8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011e2fc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011e300:;
    {
        cpu->r[14] = 0x0011e304u; fn_00130908(cpu);
    }
L_0011e304:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011e308:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011e30cu)) return;
    }
}

/* _ZN13GS_ReplayMenuD1Ev @ 0011e31c (arm) */
void fn_0011e31c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e31c:;
    {
        cpu->r[3] = rd32(0x0011e324u + + 0x24u);
    }
L_0011e320:;
    {
        cpu->r[2] = rd32(0x0011e328u + + 0x24u);
    }
L_0011e324:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011e32cu, cpu->r[3], 0, 0);
    }
L_0011e328:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011e32c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0011e330:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011e334:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0011e338:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0011e33c:;
    {
        cpu->r[14] = 0x0011e340u; fn_000ec21c(cpu);
    }
L_0011e340:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011e344:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011e348u)) return;
    }
}

/* _ZN13GS_ReplayMenuD0Ev @ 0011e350 (arm) */
void fn_0011e350(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e350:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011e354:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011e358:;
    {
        cpu->r[14] = 0x0011e35cu; fn_0011e31c(cpu);
    }
L_0011e35c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011e360:;
    {
        cpu->r[14] = 0x0011e364u; fn_0018ba20(cpu);
    }
L_0011e364:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011e368:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011e36cu)) return;
    }
}

/* _ZN13GS_ReplayMenuD2Ev @ 0011e36c (arm) */
void fn_0011e36c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e36c:;
    {
        cpu->r[3] = rd32(0x0011e374u + + 0x24u);
    }
L_0011e370:;
    {
        cpu->r[2] = rd32(0x0011e378u + + 0x24u);
    }
L_0011e374:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011e37cu, cpu->r[3], 0, 0);
    }
L_0011e378:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011e37c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0011e380:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011e384:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0011e388:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0011e38c:;
    {
        cpu->r[14] = 0x0011e390u; fn_000ec21c(cpu);
    }
L_0011e390:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011e394:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011e398u)) return;
    }
}

/* _ZN13GS_ReplayMenuC1Ev @ 0011e3a0 (arm) */
void fn_0011e3a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e3a0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0011e3a4:;
    {
        cpu->r[4] = rd32(0x0011e3acu + + 0x20u);
    }
L_0011e3a8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0011e3ac:;
    {
        cpu->r[14] = 0x0011e3b0u; fn_0010ffa8(cpu);
    }
L_0011e3b0:;
    {
        cpu->r[3] = rd32(0x0011e3b8u + + 0x18u);
    }
L_0011e3b4:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011e3bcu, cpu->r[4], 0, 0);
    }
L_0011e3b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011e3bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011e3c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0011e3c4:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0011e3c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011e3ccu)) return;
    }
}

/* _ZN13GS_ReplayMenuC2Ev @ 0011e3d4 (arm) */
void fn_0011e3d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e3d4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0011e3d8:;
    {
        cpu->r[4] = rd32(0x0011e3e0u + + 0x20u);
    }
L_0011e3dc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0011e3e0:;
    {
        cpu->r[14] = 0x0011e3e4u; fn_0010ffa8(cpu);
    }
L_0011e3e4:;
    {
        cpu->r[3] = rd32(0x0011e3ecu + + 0x18u);
    }
L_0011e3e8:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011e3f0u, cpu->r[4], 0, 0);
    }
L_0011e3ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011e3f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011e3f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0011e3f8:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0011e3fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011e400u)) return;
    }
}

/* _ZN13GS_ReplayMenu6RenderEv @ 0011e408 (arm) */
void fn_0011e408(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e408:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0011e40c:;
    {
        cpu->r[5] = rd32(0x0011e414u + + 0xccu);
    }
L_0011e410:;
    {
        cpu->r[3] = rd32(0x0011e418u + + 0xccu);
    }
L_0011e414:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0011e418:;
    {
        cpu->r[5] = add_flags(cpu, 0x0011e420u, cpu->r[5], 0, 0);
    }
L_0011e41c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011e420:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011e424:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0011e428:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011e42c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e49c;
        }
    }
L_0011e430:;
    {
        cpu->r[6] = rd32(0x0011e438u + + 0xb0u);
    }
L_0011e434:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0011e438:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0011e43c:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_0011e440:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0011e444:;
    {
        cpu->r[14] = 0x0011e448u; fn_0018aa44(cpu);
    }
L_0011e448:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0011e44c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0011e450:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0011e454:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0011e458:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0011e45c:;
    {
        cpu->r[14] = 0x0011e460u; fn_000ad8a0(cpu);
    }
L_0011e460:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0011e464:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0011e468:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011e494;
        }
    }
L_0011e46c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0011e470:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0011e474:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011e478:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011e47c:;
    {
        cpu->r[14] = 0x0011e484u;
    }
L_0011e480:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0011e484u)) return;
    }
L_0011e484:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0011e488:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0011e48c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0011e490:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011e46c;
        }
    }
L_0011e494:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0011e498:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011e49cu)) return;
    }
L_0011e49c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011e4a0:;
    {
        cpu->r[14] = 0x0011e4a4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011e4a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011e4a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e430;
        }
    }
L_0011e4ac:;
    {
        cpu->r[6] = rd32(0x0011e4b4u + + 0x34u);
    }
L_0011e4b0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0011e4b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011e4b8:;
    {
        cpu->r[14] = 0x0011e4bcu; fn_0018aa20(cpu);
    }
L_0011e4bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011e4c0:;
    {
        cpu->r[14] = 0x0011e4c4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011e4c4:;
    {
        cpu->r[3] = rd32(0x0011e4ccu + + 0x20u);
    }
L_0011e4c8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011e4cc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011e4d0:;
    {
        cpu->r[3] = rd32(0x0011e4d8u + + 0x18u);
    }
L_0011e4d4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011e4d8:;
    {
        cpu->r[14] = 0x0011e4dcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011e4dc:;
    {
        goto L_0011e434;
    }
}

/* _ZN13GS_ReplayMenu11InitSpritesEv @ 0011e4f4 (arm) */
void fn_0011e4f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e4f4:;
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
L_0011e4f8:;
    {
        cpu->r[4] = rd32(0x0011e500u + + 0x2b0u);
    }
L_0011e4fc:;
    {
        cpu->r[7] = rd32(0x0011e504u + + 0x2b0u);
    }
L_0011e500:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0011e504:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011e50cu, cpu->r[4], 0, 0);
    }
L_0011e508:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0011e50c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0011e510:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011e514:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e62c;
        }
    }
L_0011e518:;
    {
        cpu->r[6] = rd32(0x0011e520u + + 0x298u);
    }
L_0011e51c:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_0011e520:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011e524:;
    {
        cpu->r[14] = 0x0011e528u; fn_00096a08(cpu);
    }
L_0011e528:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011e52c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011e530:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011e534:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011e538:;
    {
        cpu->r[14] = 0x0011e53cu; fn_0018aa44(cpu);
    }
L_0011e53c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0011e540:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0011e544:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011e548:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[0]);
    }
L_0011e54c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e774;
        }
    }
L_0011e550:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_0011e554:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011e558:;
    {
        cpu->r[14] = 0x0011e55cu; fn_00096a08(cpu);
    }
L_0011e55c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011e560:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011e564:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011e568:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011e56c:;
    {
        cpu->r[14] = 0x0011e570u; fn_0018aa44(cpu);
    }
L_0011e570:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0011e574:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0011e578:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011e57c:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[0]);
    }
L_0011e580:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e738;
        }
    }
L_0011e584:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_0011e588:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011e58c:;
    {
        cpu->r[14] = 0x0011e590u; fn_00096a08(cpu);
    }
L_0011e590:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011e594:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011e598:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011e59c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011e5a0:;
    {
        cpu->r[14] = 0x0011e5a4u; fn_0018aa44(cpu);
    }
L_0011e5a4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0011e5a8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0011e5ac:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011e5b0:;
    {
        wr32(cpu->r[5] + + 0xa8u, cpu->r[0]);
    }
L_0011e5b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e6fc;
        }
    }
L_0011e5b8:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_0011e5bc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011e5c0:;
    {
        cpu->r[14] = 0x0011e5c4u; fn_00096a08(cpu);
    }
L_0011e5c4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011e5c8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011e5cc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011e5d0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011e5d4:;
    {
        cpu->r[14] = 0x0011e5d8u; fn_0018aa44(cpu);
    }
L_0011e5d8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0011e5dc:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0011e5e0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011e5e4:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[0]);
    }
L_0011e5e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e6c0;
        }
    }
L_0011e5ec:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011e5f0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0011e5f4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011e5f8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011e5fc:;
    {
        cpu->r[14] = 0x0011e600u; fn_0018aa44(cpu);
    }
L_0011e600:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0011e604:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0011e608:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011e60c:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[0]);
    }
L_0011e610:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e670;
        }
    }
L_0011e614:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011e618:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011e61c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0011e620:;
    {
        cpu->r[14] = 0x0011e624u; fn_0018aa44(cpu);
    }
L_0011e624:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_0011e628:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011e62cu)) return;
    }
L_0011e62c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011e630:;
    {
        cpu->r[14] = 0x0011e634u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011e634:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011e638:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e518;
        }
    }
L_0011e63c:;
    {
        cpu->r[6] = rd32(0x0011e644u + + 0x174u);
    }
L_0011e640:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011e644:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011e648:;
    {
        cpu->r[14] = 0x0011e64cu; fn_0018aa20(cpu);
    }
L_0011e64c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011e650:;
    {
        cpu->r[14] = 0x0011e654u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011e654:;
    {
        cpu->r[3] = rd32(0x0011e65cu + + 0x160u);
    }
L_0011e658:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011e65c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011e660:;
    {
        cpu->r[3] = rd32(0x0011e668u + + 0x158u);
    }
L_0011e664:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011e668:;
    {
        cpu->r[14] = 0x0011e66cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011e66c:;
    {
        goto L_0011e51c;
    }
L_0011e670:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011e674:;
    {
        cpu->r[14] = 0x0011e678u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011e678:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011e67c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e614;
        }
    }
L_0011e680:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011e684:;
    {
        cpu->r[14] = 0x0011e688u; fn_0018aa20(cpu);
    }
L_0011e688:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011e68c:;
    {
        cpu->r[14] = 0x0011e690u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011e690:;
    {
        cpu->r[3] = rd32(0x0011e698u + + 0x124u);
    }
L_0011e694:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011e698:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011e69c:;
    {
        cpu->r[3] = rd32(0x0011e6a4u + + 0x11cu);
    }
L_0011e6a0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011e6a4:;
    {
        cpu->r[14] = 0x0011e6a8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011e6a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011e6ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011e6b0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0011e6b4:;
    {
        cpu->r[14] = 0x0011e6b8u; fn_0018aa44(cpu);
    }
L_0011e6b8:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_0011e6bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011e6c0u)) return;
    }
L_0011e6c0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011e6c4:;
    {
        cpu->r[14] = 0x0011e6c8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011e6c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011e6cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e5ec;
        }
    }
L_0011e6d0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011e6d4:;
    {
        cpu->r[14] = 0x0011e6d8u; fn_0018aa20(cpu);
    }
L_0011e6d8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011e6dc:;
    {
        cpu->r[14] = 0x0011e6e0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011e6e0:;
    {
        cpu->r[3] = rd32(0x0011e6e8u + + 0xd4u);
    }
L_0011e6e4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011e6e8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011e6ec:;
    {
        cpu->r[3] = rd32(0x0011e6f4u + + 0xccu);
    }
L_0011e6f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011e6f4:;
    {
        cpu->r[14] = 0x0011e6f8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011e6f8:;
    {
        goto L_0011e5ec;
    }
L_0011e6fc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011e700:;
    {
        cpu->r[14] = 0x0011e704u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011e704:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011e708:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e5b8;
        }
    }
L_0011e70c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011e710:;
    {
        cpu->r[14] = 0x0011e714u; fn_0018aa20(cpu);
    }
L_0011e714:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011e718:;
    {
        cpu->r[14] = 0x0011e71cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011e71c:;
    {
        cpu->r[3] = rd32(0x0011e724u + + 0x98u);
    }
L_0011e720:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011e724:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011e728:;
    {
        cpu->r[3] = rd32(0x0011e730u + + 0x90u);
    }
L_0011e72c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011e730:;
    {
        cpu->r[14] = 0x0011e734u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011e734:;
    {
        goto L_0011e5b8;
    }
L_0011e738:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011e73c:;
    {
        cpu->r[14] = 0x0011e740u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011e740:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011e744:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e584;
        }
    }
L_0011e748:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011e74c:;
    {
        cpu->r[14] = 0x0011e750u; fn_0018aa20(cpu);
    }
L_0011e750:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011e754:;
    {
        cpu->r[14] = 0x0011e758u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011e758:;
    {
        cpu->r[3] = rd32(0x0011e760u + + 0x5cu);
    }
L_0011e75c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011e760:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011e764:;
    {
        cpu->r[3] = rd32(0x0011e76cu + + 0x54u);
    }
L_0011e768:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011e76c:;
    {
        cpu->r[14] = 0x0011e770u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011e770:;
    {
        goto L_0011e584;
    }
L_0011e774:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011e778:;
    {
        cpu->r[14] = 0x0011e77cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011e77c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011e780:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e550;
        }
    }
L_0011e784:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011e788:;
    {
        cpu->r[14] = 0x0011e78cu; fn_0018aa20(cpu);
    }
L_0011e78c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011e790:;
    {
        cpu->r[14] = 0x0011e794u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011e794:;
    {
        cpu->r[3] = rd32(0x0011e79cu + + 0x20u);
    }
L_0011e798:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011e79c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011e7a0:;
    {
        cpu->r[3] = rd32(0x0011e7a8u + + 0x18u);
    }
L_0011e7a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011e7a8:;
    {
        cpu->r[14] = 0x0011e7acu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011e7ac:;
    {
        goto L_0011e550;
    }
}

/* _ZN18GS_ReplayMenuLogin16RemoveTextFieldsEv @ 0011e7c4 (arm) */
void fn_0011e7c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e7c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18GS_ReplayMenuLogin14InitTextFieldsEv @ 0011e7c8 (arm) */
void fn_0011e7c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e7c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18GS_ReplayMenuLogin17ApplyMenuSettingsEv @ 0011e7cc (arm) */
void fn_0011e7cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e7cc:;
    {
        cpu->r[1] = rd32(0x0011e7d4u + + 0x50u);
    }
L_0011e7d0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0011e7d4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011e7d8:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011e7e0u, cpu->r[1], 0, 0);
    }
L_0011e7dc:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[2]);
    }
L_0011e7e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0011e7e4:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[1]);
    }
L_0011e7e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011e7ec:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_0011e7f0:;
    {
        cpu->r[14] = 0x0011e7f8u;
    }
L_0011e7f4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0xdcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0011e7f8u)) return;
    }
L_0011e7f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0011e7fc:;
    {
        cpu->r[2] = 0x00000583u;
    }
L_0011e800:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[3]);
    }
L_0011e804:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[3]);
    }
L_0011e808:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011e80c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0011e810:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[2]);
    }
L_0011e814:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_0011e818:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_0011e81c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0011e820:;
    {
        return fn_0011e7c8(cpu);
    }
}

/* _ZN18GS_ReplayMenuLogin8isKindOfEi @ 0011e828 (arm) */
void fn_0011e828(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e828:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0011e82c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_36 @ 0011e830 (arm) */
void fn_0011e830(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e830:;
    {
        cpu->r[2] = rd32(0x0011e838u + + 0x38u);
    }
L_0011e834:;
    {
        cpu->r[0] = rd32(0x0011e83cu + + 0x38u);
    }
L_0011e838:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011e840u, cpu->r[2], 0, 0);
    }
L_0011e83c:;
    {
        cpu->r[1] = rd32(0x0011e844u + + 0x34u);
    }
L_0011e840:;
    {
        cpu->r[3] = rd32(0x0011e848u + + 0x34u);
    }
L_0011e844:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_0011e848:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011e850u, cpu->r[1], 0, 0);
    }
L_0011e84c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011e854u, cpu->r[3], 0, 0);
    }
L_0011e850:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0011e854:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000032u, 1, 0);
    }
L_0011e858:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[0]);
    }
L_0011e85c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 0);
    }
L_0011e860:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000005fu, 1, 0);
    }
L_0011e864:;
    {
        wr32(cpu->r[1], cpu->r[0]);
    }
L_0011e868:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_0011e86c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18GS_ReplayMenuLogin6ResumeEv @ 0011e880 (arm) */
void fn_0011e880(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e880:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011e884:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011e888:;
    {
        cpu->r[14] = 0x0011e88cu; fn_001142a0(cpu);
    }
L_0011e88c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011e890:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0011e894:;
    {
        return fn_0011e7c8(cpu);
    }
}

/* _ZN18GS_ReplayMenuLogin6UpdateEv @ 0011e898 (arm) */
void fn_0011e898(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011e898:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0011e89c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0011e8a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0011e8a4:;
    {
        cpu->r[4] = rd32(0x0011e8acu + + 0x160u);
    }
L_0011e8a8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0011e8ac:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011e8b4u, cpu->r[4], 0, 0);
    }
L_0011e8b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e908;
        }
    }
L_0011e8b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0011e8b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e8cc;
        }
    }
L_0011e8bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011e8c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011e8fc;
        }
    }
L_0011e8c4:;
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
L_0011e8c8:;
    {
        return fn_00114a58(cpu);
    }
L_0011e8cc:;
    {
        cpu->r[14] = 0x0011e8d0u; fn_0010da28(cpu);
    }
L_0011e8d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011e8d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011e8d8u)) return;
        }
    }
L_0011e8d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xc4u);
    }
L_0011e8dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000580u, 1, 1);
    }
L_0011e8e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e960;
        }
    }
L_0011e8e4:;
    {
        cpu->r[2] = 0x00000583u;
    }
L_0011e8e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0011e8ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e948;
        }
    }
L_0011e8f0:;
    {
        cpu->r[2] = 0x000004bdu;
    }
L_0011e8f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0011e8f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011e938;
        }
    }
L_0011e8fc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0011e900:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
    }
L_0011e904:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011e908u)) return;
    }
L_0011e908:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_0011e90c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011e910:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011e914u)) return;
        }
    }
L_0011e914:;
    {
        cpu->r[3] = rd32(0x0011e91cu + + 0xf4u);
    }
L_0011e918:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011e91c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_0011e920:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011e924:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000581u;
        }
    }
L_0011e928:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[3]);
        }
    }
L_0011e92c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_0011e930:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x94u, cpu->r[3]);
        }
    }
L_0011e934:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011e938u)) return;
    }
L_0011e938:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011e93c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0011e940:;
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
L_0011e944:;
    {
        return fn_000f34e8(cpu);
    }
L_0011e948:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0011e94c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011e950:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0011e954:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0011e958:;
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
L_0011e95c:;
    {
        return fn_0009b14c(cpu);
    }
L_0011e960:;
    {
        cpu->r[3] = rd32(0x0011e968u + + 0xacu);
    }
L_0011e964:;
    {
        cpu->r[0] = 0x0000e26eu;
    }
L_0011e968:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0011e96c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000950u, 0, 0);
    }
L_0011e970:;
    {
        cpu->r[2] = 0x00000022u;
    }
L_0011e974:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011e978:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0011e97c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0011e980:;
    {
        cpu->r[14] = 0x0011e984u; imp_memcpy(cpu); /* memcpy */
    }
L_0011e984:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0011e988:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000970u, 0, 0);
    }
L_0011e98c:;
    {
        cpu->r[2] = 0x00000022u;
    }
L_0011e990:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0001e000u, 0, 0);
    }
L_0011e994:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_0011e998:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000290u, 0, 0);
    }
L_0011e99c:;
    {
        cpu->r[14] = 0x0011e9a0u; imp_memcpy(cpu); /* memcpy */
    }
L_0011e9a0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0011e9a4:;
    {
        cpu->r[0] = 0x0000e2b2u;
    }
L_0011e9a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000990u, 0, 0);
    }
L_0011e9ac:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0011e9b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0011e9b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0011e9b8:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0011e9bc:;
    {
        cpu->r[14] = 0x0011e9c0u; imp_memcpy(cpu); /* memcpy */
    }
L_0011e9c0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0011e9c4:;
    {
        cpu->r[0] = 0x0000e3b2u;
    }
L_0011e9c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000a90u, 0, 0);
    }
L_0011e9cc:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0011e9d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0011e9d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0011e9d8:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0011e9dc:;
    {
        cpu->r[14] = 0x0011e9e0u; imp_memcpy(cpu); /* memcpy */
    }
L_0011e9e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011e9e4:;
    {
        cpu->r[14] = 0x0011e9e8u; fn_0011e7c4(cpu);
    }
L_0011e9e8:;
    {
        cpu->r[0] = 0x00000b50u;
    }
L_0011e9ec:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011e9f0:;
    {
        cpu->r[14] = 0x0011e9f4u; fn_0018ba6c(cpu);
    }
L_0011e9f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011e9f8:;
    {
        cpu->r[14] = 0x0011e9fcu; fn_0011f834(cpu);
    }
L_0011e9fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011ea00:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0011ea04:;
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
L_0011ea08:;
    {
        return fn_000f361c(cpu);
    }
}

/* _ZN18GS_ReplayMenuLogin8DoActionEii @ 0011ea18 (arm) */
void fn_0011ea18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011ea18:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0011ea1c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011ea20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0011ea24:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0011ea28:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011ea2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011ea38;
        }
    }
L_0011ea30:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0011ea34:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011ea38u)) return;
    }
L_0011ea38:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_0011ea3c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_0011ea40:;
    {
        cpu->r[14] = 0x0011ea44u; fn_00093f34(cpu);
    }
L_0011ea44:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0011ea48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0011ea4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0011ea50:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0011ea54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0011ea58:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0011ea5c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0011ea60:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0011ea64:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[0]);
    }
L_0011ea68:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0011ea6c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0011ea70:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_0011ea74:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_0011ea78:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0011ea7c:;
    {
        goto L_0011ea30;
    }
}

/* _ZN18GS_ReplayMenuLogin16RenderBackgroundEv @ 0011ea80 (arm) */
void fn_0011ea80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011ea80:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0011ea84:;
    {
        cpu->r[4] = rd32(0x0011ea8cu + + 0x50u);
    }
L_0011ea88:;
    {
        cpu->r[3] = rd32(0x0011ea90u + + 0x50u);
    }
L_0011ea8c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0011ea90:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011ea98u, cpu->r[4], 0, 0);
    }
L_0011ea94:;
    {
        cpu->r[1] = 0x55000000u;
    }
L_0011ea98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011ea9c:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_0011eaa0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011eaa4:;
    {
        cpu->r[14] = 0x0011eaa8u; fn_0012dd58(cpu);
    }
L_0011eaa8:;
    {
        cpu->r[12] = rd32(0x0011eab0u + + 0x34u);
    }
L_0011eaac:;
    {
        cpu->r[3] = rd32(0x0011eab4u + + 0x34u);
    }
L_0011eab0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011eab4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011eab8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0011eabc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_0011eac0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011eac4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0011eac8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011eacc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011ead0:;
    {
        cpu->r[14] = 0x0011ead4u; fn_00130908(cpu);
    }
L_0011ead4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011ead8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011eadcu)) return;
    }
}
